<?php

declare(strict_types=1);

/*
 * Parameter roles. Default rules pick one from the C type and name; tools/bindings.php
 * names the role where the header is ambiguous (PCM buffers, heaps, lists).
 *
 *   scalar        int / enum / bool / float by value
 *   str, wstr     const char* / const wchar_t* → ?string
 *   alloc         const ma_allocation_callbacks* → ?ma_allocation_callbacks, null-only
 *   handle        H* → ?H, must be initialized
 *   target        H* that an _init call initializes → H, must be storage
 *   iface         ma_data_source* etc → ?interface
 *   value_in      const V* → ?V
 *   value_inout   V* → ?V, written back after the call
 *   ref           scalar T* → by-reference in/out
 *   userdata      void* user data → mixed, kept by the handle
 *   callable      function pointer → ?callable (bound with the callback queue)
 */

/** Calls that can wait on a miniaudio thread which may be waiting on a PHP callback. */
const BLOCKING = '/^ma_(device|engine)_(start|stop)$|_wait$|^ma_job_queue_next$|_next_job$|^ma_device_job_thread_next$|^ma_sound_init|^ma_sound_group_init|^ma_resource_manager_data_(buffer|stream|source)_init|^ma_engine_init$|^ma_node_(detach|attach)|^ma_resource_manager_(register|unregister)|^ma_device_init|^ma_context_init$/';

/** A C declaration of `name` with the given type ("const ma_device_config *" → "const ma_device_config * name"). */
function c_decl(string $type, string $name): string
{
    if (str_contains($type, '(*)')) {
        return preg_replace('/\\(\\*\\)/', "(*$name)", $type, 1);
    }

    return "$type $name";
}

const SCALAR_PTR_TYPES = ['ma_uint64', 'ma_int64', 'ma_uint32', 'ma_int32', 'size_t', 'float', 'double', 'ma_format', 'ma_bool32', 'ma_backend', 'ma_uint16'];

final class Param
{
    public function __construct(
        public string $name,
        public string $type,
        public string $role,
        public array $info = [],
    ) {}
}

final class FnBinding
{
    /** @param list<Param> $params */
    public function __construct(
        public string $name,
        public array $params,
        public string $return,
        public ?string $returnRole,
        public ?string $target = null,
        public bool $uninit = false,
    ) {}
}

function scalar_info(Model $m, string $type): ?array
{
    $type = trim(preg_replace('/^const /', '', $type));
    if (array_key_exists($type, INT_TYPES)) {
        return ['php' => 'int', 'range' => INT_TYPES[$type], 'ctype' => $type];
    }
    if (isset($m->enumTypes[$type])) {
        return ['php' => 'int', 'range' => ['INT32_MIN', 'INT32_MAX'], 'ctype' => $type];
    }
    if ($type === 'ma_bool8' || $type === 'ma_bool32') {
        return ['php' => 'bool', 'ctype' => $type];
    }
    if ($type === 'float' || $type === 'double') {
        return ['php' => 'float', 'ctype' => $type];
    }

    return null;
}

function init_target(Model $m, string $fn): ?string
{
    if (str_ends_with($fn, '_config_init') || preg_match('/_config_init_/', $fn)) {
        return null;
    }
    $best = null;
    $candidates = array_keys($m->handles);
    $alias = ['ma_data_source' => 'ma_data_source_base', 'ma_node' => 'ma_node_base'];
    foreach (array_merge($candidates, array_keys($alias)) as $h) {
        if (str_starts_with($fn, "{$h}_init") && ($best === null || strlen($h) > strlen($best))) {
            $best = $h;
        }
    }
    if ($best === null) {
        return null;
    }

    return $alias[$best] ?? $best;
}

function classify_function(Model $m, string $fn, array $d): FnBinding|string
{
    if (! empty($d['variadic'])) {
        return "$fn: C-variadic";
    }
    $over = $m->bindings['params'][$fn] ?? [];
    $target = init_target($m, $fn);
    $isUninit = (bool) preg_match('/^(ma_\w+)_uninit$/', $fn, $um) && (isset($m->handles[$um[1]]) || in_array($um[1], ['ma_data_source', 'ma_node'], true));
    $lastOfTarget = -1;
    foreach ($d['params'] as $i => $p) {
        $b = $m->baseType($p['type']);
        if ($target !== null && ($b === $target || $b . '_base' === $target)) {
            $lastOfTarget = $i;
        }
    }
    $params = [];
    foreach ($d['params'] as $i => $p) {
        $name = $p['name'] !== '' ? $p['name'] : "arg$i";
        $type = $p['type'];
        if (isset($over[$name])) {
            $o = $over[$name];
            $params[] = new Param($name, $type, $o['role'], $o);
            continue;
        }
        $base = $m->baseType($type);
        $stars = substr_count($type, '*');
        $const = str_starts_with($type, 'const ');
        if ($stars === 0 && ($s = scalar_info($m, $type)) !== null) {
            $params[] = new Param($name, $type, 'scalar', $s);
        } elseif (isset($m->callbacks[$type])) {
            $params[] = new Param($name, $type, 'callable', ['cb' => $type]);
        } elseif ($type === 'const char *') {
            $params[] = new Param($name, $type, 'str');
        } elseif ($type === 'const wchar_t *') {
            $params[] = new Param($name, $type, 'wstr');
        } elseif ($type === 'const ma_allocation_callbacks *') {
            $params[] = new Param($name, $type, 'alloc');
        } elseif ($stars === 1 && ($m->isHandle($base) || ($target !== null && in_array($base, ['ma_data_source', 'ma_node'], true) && $target === ($base . '_base')))) {
            $h = $m->isHandle($base) ? $base : $base . '_base';
            $role = ($target === $h && ! $const && $i === $lastOfTarget) ? 'target' : 'handle';
            $params[] = new Param($name, $type, $role, ['handle' => $h]);
        } elseif ($stars === 1 && isset(Model::INTERFACES[$base])) {
            $params[] = new Param($name, $type, 'iface', ['iface' => $base]);
        } elseif ($stars === 1 && isset($m->values[$base])) {
            $params[] = new Param($name, $type, $const ? 'value_in' : 'value_inout', ['class' => $base]);
        } elseif ($stars === 1 && ! $const && in_array($base, SCALAR_PTR_TYPES, true) && ! preg_match('/^(p(FramesOut|FramesIn|Frames|SamplesOut|SamplesIn|Samples|Dst|Src|Out|In|Data|Buffer|BufferOut|Heap|Backends)|pChannelMap\\w*|pp\\w*)$/', $name)) {
            $params[] = new Param($name, $type, 'ref', scalar_info($m, $base) + ['base' => $base]);
        } elseif ($type === 'void *' && preg_match('/UserData$/', $name)) {
            $params[] = new Param($name, $type, 'userdata');
        } else {
            return "$fn: param $name ($type)";
        }
    }
    $ret = $d['return'];
    $rb = $m->baseType($ret);
    $rs = substr_count($ret, '*');
    $over = $m->bindings['returns'][$fn] ?? null;
    if ($over !== null) {
        $rrole = $over;
    } elseif ($ret === 'void') {
        $rrole = 'void';
    } elseif ($rs === 0 && scalar_info($m, $ret) !== null) {
        $rrole = 'scalar';
    } elseif ($rs === 0 && isset($m->values[$ret])) {
        $rrole = 'value';
    } elseif ($ret === 'const char *') {
        $rrole = 'str';
    } elseif ($rs === 1 && $m->isHandle($rb)) {
        $rrole = 'handle';
    } elseif ($rs === 1 && isset(Model::INTERFACES[$rb])) {
        $rrole = 'iface';
    } else {
        return "$fn: return $ret";
    }

    return new FnBinding($fn, $params, $ret, $rrole, $target, $isUninit);
}

function php_param(Model $m, Param $p): string
{
    switch ($p->role) {
        case 'scalar':
            return "{$p->info['php']} \${$p->name}";
        case 'str':
        case 'wstr':
            return "?string \${$p->name}";
        case 'alloc':
            return "?ma_allocation_callbacks \${$p->name}";
        case 'handle':
            return "?{$p->info['handle']} \${$p->name}";
        case 'target':
            return "{$p->info['handle']} \${$p->name}";
        case 'iface':
            return "?{$p->info['iface']} \${$p->name}";
        case 'value_in':
        case 'value_inout':
            return "?{$p->info['class']} \${$p->name}";
        case 'ref':
            return "?{$p->info['php']} &\${$p->name}";
        case 'userdata':
            return "mixed \${$p->name}";
        case 'callable':
            return "?callable \${$p->name}";
        case 'out':
        case 'strout':
        case 'ptrout':
            return "?string &\${$p->name}";
        case 'in':
        case 'retain_in':
            return (! empty($p->info['nullable']) ? '?' : '') . "string \${$p->name}";
        case 'heap':
            return (! empty($p->info['nullable']) ? '?' : '') . "string \${$p->name}";
        case 'inout':
            return "string &\${$p->name}";
        case 'chmap_in':
        case 'list_in':
            return "?array \${$p->name}";
        case 'chmap_out':
        case 'list_out':
            return "?array &\${$p->name}";
    }

    throw new RuntimeException("php_param {$p->role}");
}

function php_return(Model $m, FnBinding $b): string
{
    return match ($b->returnRole) {
        'void' => 'void',
        'scalar' => scalar_info($m, $b->return)['php'],
        'value' => $b->return,
        'str' => '?string',
        'handle' => '?' . $m->baseType($b->return),
        'iface' => '?' . $m->baseType($b->return),
        'chmap' => '?array',
    };
}

/** Replaces {param} with the C value the call passes for that parameter. */
function cx(Model $m, FnBinding $b, string $expr): string
{
    return preg_replace_callback('/\\{(\\w+)\\}/', function ($mm) use ($m, $b) {
        if ($mm[1] === 'ret') {
            return 'ret';
        }
        foreach ($b->params as $p) {
            if ($p->name !== $mm[1]) {
                continue;
            }
            return match ($p->role) {
                'scalar' => "(({$p->info['ctype']})a_{$p->name})",
                'handle', 'target' => "(({$p->info['handle']} *)h_{$p->name}->native)",
                'iface' => "(n_{$p->name})",
                'ref' => "r_{$p->name}",
                'value_in', 'value_inout' => "c_{$p->name}",
                'in', 'retain_in', 'inout', 'heap' => "b_{$p->name}_len",
                'str' => "(a_{$p->name} ? ZSTR_VAL(a_{$p->name}) : NULL)",
                'wstr' => "a_{$p->name}",
                default => throw new RuntimeException("cx: {$p->role}"),
            };
        }
        throw new RuntimeException("cx: no param {$mm[1]} in {$b->name}");
    }, $expr);
}

/** C that sets size_t `$var` to count × unit, failing the call on overflow. */
function size_code(Model $m, FnBinding $b, array|string $size, string $var, int $arg): string
{
    if (is_string($size)) {
        return "\t$var = (size_t)(" . cx($m, $b, $size) . ");\n";
    }
    [$count, $unit] = $size;
    $c = cx($m, $b, $count);
    $u = cx($m, $b, $unit);

    return "\tif ((uint64_t)($u) == 0 && (uint64_t)($c) != 0) { zend_argument_value_error($arg, \"cannot be sized: the frame format is unknown\"); goto fail; }\n"
        . "\tif (phpma_mul_size((uint64_t)($c), (uint64_t)($u), &$var) == FAILURE) { zend_argument_value_error($arg, \"describes a buffer larger than memory\"); goto fail; }\n";
}

/** C expression for the context that keeps a call's callbacks: the initialized handle, else the first handle argument. */
function cb_owner_ctx(FnBinding $b): string
{
    foreach ($b->params as $p) {
        if ($p->role === 'target') {
            return 'phpma_ctx_for(h_' . $p->name . ')';
        }
    }
    foreach ($b->params as $p) {
        if ($p->role === 'handle' || $p->role === 'iface') {
            return "(h_{$p->name} ? phpma_ctx_for(h_{$p->name}) : (zend_argument_value_error(1, \"is required to keep callbacks\"), NULL))";
        }
    }
    throw new RuntimeException("{$b->name}: callbacks with no handle to keep them");
}

function emit_function(Model $m, FnBinding $b): string
{
    $pre = '';
    $n = count($b->params);
    $tconv = '';
    $decl = '';
    $zpp = "\tZEND_PARSE_PARAMETERS_START($n, $n)\n";
    $conv = '';
    $after = '';
    $args = [];
    foreach ($b->params as $i => $p) {
        $arg = $i + 1;
        $v = "a_{$p->name}";
        $ctype = preg_replace('/^const /', '', $p->type);
        switch ($p->role) {
            case 'scalar':
                $info = $p->info;
                if ($info['php'] === 'int') {
                    $decl .= "\tzend_long $v;\n";
                    $zpp .= "\t\tZ_PARAM_LONG($v)\n";
                    if ($info['range'] !== null) {
                        [$lo, $hi] = $info['range'];
                        $conv .= "\tif ($v < $lo || $v > $hi) { zend_argument_value_error($arg, \"must be between %lld and %lld\", (long long)$lo, (long long)$hi); goto fail; }\n";
                    }
                    $args[] = "({$info['ctype']})$v";
                } elseif ($info['php'] === 'bool') {
                    $decl .= "\tbool $v;\n";
                    $zpp .= "\t\tZ_PARAM_BOOL($v)\n";
                    $args[] = "$v ? MA_TRUE : MA_FALSE";
                } else {
                    $decl .= "\tdouble $v;\n";
                    $zpp .= "\t\tZ_PARAM_DOUBLE($v)\n";
                    $args[] = "({$info['ctype']})$v";
                }
                break;
            case 'str':
                $decl .= "\tzend_string *$v = NULL;\n";
                $zpp .= "\t\tZ_PARAM_PATH_STR_OR_NULL($v)\n";
                $args[] = "$v ? ZSTR_VAL($v) : NULL";
                break;
            case 'wstr':
                $decl .= "\tzval *$v; const wchar_t *w_{$p->name};\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $conv .= "\tif (Z_TYPE_P($v) != IS_NULL && Z_TYPE_P($v) != IS_STRING) { zend_argument_type_error($arg, \"must be of type ?string, %s given\", zend_zval_value_name($v)); goto fail; }\n";
                $conv .= "\tif (phpma_wstrdup($v, &f, &w_{$p->name}, \"\${$p->name}\") == FAILURE) goto fail;\n";
                $args[] = "w_{$p->name}";
                break;
            case 'alloc':
                $decl .= "\tzval *$v = NULL;\n";
                $zpp .= "\t\tZ_PARAM_OBJECT_OF_CLASS_OR_NULL($v, phpma_ce_ma_allocation_callbacks)\n";
                $conv .= "\tif ($v && phpma_alloc_callbacks($v, \"\${$p->name}\") == FAILURE) goto fail;\n";
                $args[] = 'NULL';
                break;
            case 'handle':
            case 'target':
                $h = $p->info['handle'];
                $decl .= "\tzval *$v = NULL; phpma_handle *h_{$p->name} = NULL;\n";
                if ($p->role === 'target') {
                    $zpp .= "\t\tZ_PARAM_OBJECT_OF_CLASS($v, phpma_ce_$h)\n";
                    $tconv .= "\tif (!(h_{$p->name} = phpma_handle_arg($v, &phpma_kind_$h, $arg, false))) goto fail;\n\tf.target = h_{$p->name};\n";
                } else {
                    $zpp .= "\t\tZ_PARAM_OBJECT_OF_CLASS_OR_NULL($v, phpma_ce_$h)\n";
                    $conv .= "\tif ($v && !(h_{$p->name} = phpma_handle_arg($v, &phpma_kind_$h, $arg, true))) goto fail;\n";
                    if ($b->target !== null) {
                        $conv .= "\tif (h_{$p->name}) phpma_frame_dep(&f, h_{$p->name});\n";
                    }
                }
                $args[] = "h_{$p->name} ? ($ctype)h_{$p->name}->native : NULL";
                break;
            case 'iface':
                $decl .= "\tzval *$v = NULL; phpma_handle *h_{$p->name} = NULL;\n";
                $zpp .= "\t\tZ_PARAM_OBJECT_OF_CLASS_OR_NULL($v, phpma_ce_{$p->info['iface']})\n";
                $decl .= "\tvoid *n_{$p->name} = NULL;\n";
                $conv .= "\tif ($v && !(n_{$p->name} = phpma_iface_native($v, phpma_ce_{$p->info['iface']}, $arg, &h_{$p->name}))) { if (!EG(exception)) zend_argument_value_error($arg, \"must be an initialized %s\", \"{$p->info['iface']}\"); goto fail; }\n";
                if ($b->target !== null) {
                    $conv .= "\tif (h_{$p->name}) phpma_frame_dep(&f, h_{$p->name});\n";
                }
                $args[] = "n_{$p->name}";
                break;
            case 'value_in':
            case 'value_inout':
                $c = c_ident($p->info['class']);
                $ct = $m->values[$p->info['class']]['ctype'];
                $decl .= "\tzval *$v = NULL; $ct c_{$p->name}; bool has_{$p->name} = false;\n";
                $zpp .= "\t\tZ_PARAM_OBJECT_OF_CLASS_OR_NULL($v, phpma_ce_$c)\n";
                $conv .= "\tmemset(&c_{$p->name}, 0, sizeof(c_{$p->name}));\n\tif ($v) { if (phpma_from_$c(Z_OBJ_P($v), &c_{$p->name}, &f) == FAILURE) goto fail; has_{$p->name} = true; }\n";
                $args[] = "has_{$p->name} ? &c_{$p->name} : NULL";
                if ($p->role === 'value_inout') {
                    $after .= "\tif ($v) { zval nv; phpma_to_$c(&c_{$p->name}, &nv); phpma_copy_props(Z_OBJ_P($v), Z_OBJ(nv)); zval_ptr_dtor(&nv); }\n";
                }
                break;
            case 'ref':
                $base = $p->info['base'];
                $decl .= "\tzval *$v; $base r_{$p->name} = 0;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                if ($p->info['php'] === 'float') {
                    $conv .= "\tif (Z_TYPE_P(Z_REFVAL_P($v)) != IS_NULL) r_{$p->name} = ($base)zval_get_double(Z_REFVAL_P($v));\n";
                    $after .= "\tZEND_TRY_ASSIGN_REF_DOUBLE($v, (double)r_{$p->name});\n";
                } elseif ($p->info['php'] === 'bool') {
                    $conv .= "\tr_{$p->name} = zend_is_true(Z_REFVAL_P($v)) ? MA_TRUE : MA_FALSE;\n";
                    $after .= "\tZEND_TRY_ASSIGN_REF_BOOL($v, r_{$p->name} != 0);\n";
                } else {
                    $conv .= "\tif (Z_TYPE_P(Z_REFVAL_P($v)) != IS_NULL) r_{$p->name} = ($base)zval_get_long(Z_REFVAL_P($v));\n";
                    $after .= "\tZEND_TRY_ASSIGN_REF_LONG($v, (zend_long)r_{$p->name});\n";
                }
                $args[] = "&r_{$p->name}";
                break;
            case 'userdata':
                $key = $m->bindings['cbkeys'][$b->name][$p->name] ?? $p->name;
                $decl .= "\tzval *$v;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $pre .= "\t{ phpma_ctx *ctx = " . cb_owner_ctx($b) . "; if (!ctx) goto fail; phpma_ctx_set(ctx, \"$key\", $v); c_{$p->name} = phpma_ctx_sub(ctx, \"\"); }\n";
                $decl .= "\tvoid *c_{$p->name} = NULL;\n";
                $args[] = "c_{$p->name}";
                break;
            case 'callable':
                $key = $m->bindings['cbkeys'][$b->name][$p->name] ?? $p->name;
                $tramp = 'phpma_tramp_' . $p->info['cb'];
                $GLOBALS['fn_trampolines'][$tramp] = $m->callbacks[$p->info['cb']];
                $decl .= "\tzval *$v = NULL; bool set_{$p->name} = false;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $conv .= "\tif (Z_TYPE_P($v) != IS_NULL && !zend_is_callable($v, 0, NULL)) { zend_argument_type_error($arg, \"must be a valid callback or null\"); goto fail; }\n";
                $pre .= "\t{ phpma_ctx *ctx = " . cb_owner_ctx($b) . "; if (!ctx) goto fail; phpma_ctx_set(ctx, \"$key\", $v); set_{$p->name} = Z_TYPE_P($v) != IS_NULL; }\n";
                $args[] = "set_{$p->name} ? $tramp : NULL";
                break;
            case 'out':
                $decl .= "\tzval *$v; void *b_{$p->name} = NULL; size_t b_{$p->name}_size = 0;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $pre .= size_code($m, $b, $p->info['size'], "b_{$p->name}_size", $arg);
                $pre .= "\tb_{$p->name} = phpma_frame_alloc(&f, b_{$p->name}_size);\n";
                $args[] = "($ctype)b_{$p->name}";
                $len = isset($p->info['len']) ? '(size_t)(' . cx($m, $b, $p->info['len']) . ')' : "b_{$p->name}_size";
                $after .= "\t{ size_t n = $len; if (n > b_{$p->name}_size) n = b_{$p->name}_size; ZEND_TRY_ASSIGN_REF_STRINGL($v, (const char *)b_{$p->name}, n); }\n";
                break;
            case 'in':
            case 'retain_in':
                $nullable = ! empty($p->info['nullable']);
                $decl .= "\tzend_string *$v = NULL; size_t b_{$p->name}_len = 0; size_t need_{$p->name} = 0;\n";
                $zpp .= $nullable ? "\t\tZ_PARAM_STR_OR_NULL($v)\n" : "\t\tZ_PARAM_STR($v)\n";
                $conv .= "\tif ($v) b_{$p->name}_len = ZSTR_LEN($v);\n";
                if (isset($p->info['size'])) {
                    $pre .= size_code($m, $b, $p->info['size'], "need_{$p->name}", $arg);
                    $pre .= "\tif ($v && ZSTR_LEN($v) < need_{$p->name}) { zend_argument_value_error($arg, \"must hold at least %zu bytes, %zu given\", need_{$p->name}, ZSTR_LEN($v)); goto fail; }\n";
                }
                $args[] = "$v ? ($ctype)ZSTR_VAL($v) : NULL";
                if ($p->role === 'retain_in') {
                    $owner = $p->info['owner'];
                    $key = $p->info['key'] ?? "\"{$p->name}\"";
                    $key = cx($m, $b, $key);
                    $ok = $b->returnRole === 'void' ? 'true' : 'ret == MA_SUCCESS';
                    if ($owner === 'target') {
                        $pre .= "\tif ($v) { zval z; ZVAL_STR(&z, $v); phpma_frame_retain(&f, $key, &z); }\n";
                    } else {
                        $after .= "\tif (($ok) && h_$owner) { zval z; if ($v) { ZVAL_STR(&z, $v); } else { ZVAL_NULL(&z); } phpma_handle_retain_set(h_$owner, $key, &z); }\n";
                    }
                }
                break;
            case 'inout':
                $decl .= "\tzval *$v; char *b_{$p->name} = NULL; size_t b_{$p->name}_len = 0; size_t need_{$p->name} = 0;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $conv .= "\t{ zend_string *s = zval_try_get_string(Z_REFVAL_P($v)); if (!s) goto fail; b_{$p->name}_len = ZSTR_LEN(s); b_{$p->name} = phpma_frame_alloc(&f, b_{$p->name}_len); memcpy(b_{$p->name}, ZSTR_VAL(s), b_{$p->name}_len); zend_string_release(s); }\n";
                $pre .= size_code($m, $b, $p->info['size'], "need_{$p->name}", $arg);
                $pre .= "\tif (b_{$p->name}_len < need_{$p->name}) { zend_argument_value_error($arg, \"must hold at least %zu bytes, %zu given\", need_{$p->name}, b_{$p->name}_len); goto fail; }\n";
                $args[] = "($ctype)b_{$p->name}";
                $after .= "\tZEND_TRY_ASSIGN_REF_STRINGL($v, b_{$p->name}, b_{$p->name}_len);\n";
                break;
            case 'heap':
                $nullable = ! empty($p->info['nullable']);
                $decl .= "\tzend_string *$v = NULL; void *b_{$p->name} = NULL; size_t b_{$p->name}_len = 0; size_t need_{$p->name} = 0;\n";
                $zpp .= $nullable ? "\t\tZ_PARAM_STR_OR_NULL($v)\n" : "\t\tZ_PARAM_STR($v)\n";
                $conv .= "\tif ($v) b_{$p->name}_len = ZSTR_LEN($v);\n";
                if (isset($p->info['getsize'])) {
                    $pre .= "\tif (" . cx($m, $b, $p->info['getsize']) . " != MA_SUCCESS) { zend_argument_value_error($arg, \"cannot be sized: the configuration is invalid\"); goto fail; }\n";
                } else {
                    $pre .= size_code($m, $b, $p->info['size'], "need_{$p->name}", $arg);
                }
                $pre .= "\tif ($v && ZSTR_LEN($v) < need_{$p->name}) { zend_argument_value_error($arg, \"must hold at least %zu bytes, %zu given\", need_{$p->name}, ZSTR_LEN($v)); goto fail; }\n";
                $pre .= "\tif ($v) { b_{$p->name} = phpma_frame_keep_bytes(&f, ZSTR_VAL($v), ZSTR_LEN($v)); }\n";
                $args[] = "b_{$p->name}";
                break;
            case 'chmap_in':
                $decl .= "\tzval *$v = NULL; ma_channel *b_{$p->name} = NULL;\n";
                $zpp .= "\t\tZ_PARAM_ARRAY_OR_NULL($v)\n";
                $pre .= "\tif ($v && phpma_channel_list($v, &f, (ma_uint32)(" . cx($m, $b, $p->info['count']) . "), &b_{$p->name}, \"\${$p->name}\") == FAILURE) goto fail;\n";
                $args[] = "b_{$p->name}";
                break;
            case 'chmap_out':
                $decl .= "\tzval *$v; ma_channel *b_{$p->name} = NULL; size_t n_{$p->name} = 0;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $pre .= "\tn_{$p->name} = (size_t)(" . cx($m, $b, $p->info['count']) . ");\n\tif (n_{$p->name} > 65536) { zend_argument_value_error($arg, \"capacity must not exceed 65536 channels\"); goto fail; }\n\tb_{$p->name} = phpma_frame_alloc(&f, n_{$p->name} * sizeof(ma_channel));\n";
                $args[] = "b_{$p->name}";
                $len = isset($p->info['len']) ? '(size_t)(' . cx($m, $b, $p->info['len']) . ')' : "n_{$p->name}";
                $after .= "\t{ zval arr; size_t n = $len; if (n > n_{$p->name}) n = n_{$p->name}; phpma_channel_list_zval(b_{$p->name}, (uint32_t)n, &arr); ZEND_TRY_ASSIGN_REF_ARR($v, Z_ARR(arr)); }\n";
                break;
            case 'list_in':
                $ct = $p->info['ctype'];
                $decl .= "\tzval *$v = NULL; $ct *b_{$p->name} = NULL;\n";
                $zpp .= "\t\tZ_PARAM_ARRAY_OR_NULL($v)\n";
                $pre .= "\tif ($v) { ma_uint32 *tmp; if (phpma_u32_list($v, &f, (uint32_t)(" . cx($m, $b, $p->info['count']) . "), &tmp, \"\${$p->name}\") == FAILURE) goto fail; uint32_t n = (uint32_t)(" . cx($m, $b, $p->info['count']) . "); b_{$p->name} = phpma_frame_alloc(&f, (n ? n : 1) * sizeof($ct)); for (uint32_t i = 0; i < n; i++) b_{$p->name}[i] = ($ct)tmp[i]; }\n";
                $args[] = "b_{$p->name}";
                break;
            case 'list_out':
                $ct = $p->info['ctype'];
                $decl .= "\tzval *$v; $ct *b_{$p->name} = NULL; size_t n_{$p->name} = 0;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $pre .= "\tn_{$p->name} = (size_t)(" . cx($m, $b, $p->info['cap']) . ");\n\tif (n_{$p->name} > 65536) { zend_argument_value_error($arg, \"capacity must not exceed 65536\"); goto fail; }\n\tb_{$p->name} = phpma_frame_alloc(&f, (n_{$p->name} ? n_{$p->name} : 1) * sizeof($ct));\n";
                $args[] = "b_{$p->name}";
                $after .= "\t{ zval arr; size_t n = (size_t)(" . cx($m, $b, $p->info['len']) . "); if (n > n_{$p->name}) n = n_{$p->name}; array_init_size(&arr, (uint32_t)n); for (size_t i = 0; i < n; i++) add_next_index_long(&arr, (zend_long)b_{$p->name}[i]); ZEND_TRY_ASSIGN_REF_ARR($v, Z_ARR(arr)); }\n";
                break;
            case 'strout':
                $decl .= "\tzval *$v; char *b_{$p->name} = NULL; size_t n_{$p->name} = 0;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $pre .= "\tn_{$p->name} = (size_t)(" . cx($m, $b, $p->info['cap']) . ");\n\tif (n_{$p->name} > 1048576) { zend_argument_value_error($arg, \"capacity must not exceed 1 MiB\"); goto fail; }\n\tb_{$p->name} = phpma_frame_alloc(&f, n_{$p->name} + 1);\n";
                $args[] = "b_{$p->name}";
                $after .= "\tZEND_TRY_ASSIGN_REF_STRINGL($v, b_{$p->name}, strnlen(b_{$p->name}, n_{$p->name}));\n";
                break;
            case 'ptrout':
                $decl .= "\tzval *$v; void *b_{$p->name} = NULL;\n";
                $zpp .= "\t\tZ_PARAM_ZVAL($v)\n";
                $args[] = "&b_{$p->name}";
                $after .= "\tif (b_{$p->name}) { size_t n = (size_t)(" . cx($m, $b, $p->info['len']) . "); ZEND_TRY_ASSIGN_REF_STRINGL($v, (const char *)b_{$p->name}, n); ma_free(b_{$p->name}, NULL); } else { ZEND_TRY_ASSIGN_REF_NULL($v); }\n";
                break;
            default:
                throw new RuntimeException("emit role {$p->role}");
        }
    }
    $zpp .= "\tZEND_PARSE_PARAMETERS_END();\n";
    // sizes read the handles' C structs: a null handle gets upstream's answer before any of that runs
    $guard = '';
    preg_match_all('/\\(\\(\\w+ \\*\\)h_(\\w+)->native\\)|\\(n_(\\w+)\\)/', $pre, $mm, PREG_SET_ORDER);
    $seen = [];
    foreach ($mm as $g) {
        $name = ($g[1] ?? '') !== '' ? $g[1] : $g[2];
        if (isset($seen[$name])) {
            continue;
        }
        $seen[$name] = true;
        $var = ($g[1] ?? '') !== '' ? "h_$name" : "n_$name";
        $guard .= $b->return === 'ma_result'
            ? "\tif (!$var) { phpma_frame_free(&f); RETURN_LONG(MA_INVALID_ARGS); }\n"
            : "\tif (!$var) { zend_argument_value_error(" . (array_search($name, array_column(array_map(fn ($p) => (array) $p, $b->params), 'name')) + 1) . ", \"must not be null\"); goto fail; }\n";
    }
    $conv = $tconv . $conv . $guard . $pre;
    foreach ($m->bindings['pre'][$b->name] ?? [] as $code) {
        $conv .= "\t" . cx($m, $b, $code) . "\n";
    }
    foreach ($m->bindings['after'][$b->name] ?? [] as $code) {
        $after .= "\t" . cx($m, $b, $code) . "\n";
    }

    $call = "{$b->name}(" . implode(', ', $args) . ')';
    $thunk = '';
    if (preg_match(BLOCKING, $b->name)) {
        // runs on a helper thread while this thread serves the callbacks it may be waiting on
        $fields = '';
        $assign = [];
        $callArgs = [];
        foreach ($m->functions[$b->name]['params'] as $i => $cp) {
            $fields .= "\t" . c_decl($cp['type'], "a$i") . ";\n";
            $assign[] = ".a$i = {$args[$i]}";
            $callArgs[] = "a->a$i";
        }
        $rt = $b->return;
        $hasRet = $rt !== 'void';
        $thunk = "struct phpma_blk_{$b->name} {\n" . ($hasRet ? "\t" . c_decl($rt, 'ret') . ";\n" : '') . $fields . "};\n"
            . "static void phpma_blk_{$b->name}(void *p) { struct phpma_blk_{$b->name} *a = p; " . ($hasRet ? 'a->ret = ' : '') . "{$b->name}(" . implode(', ', $callArgs) . "); }\n\n";
        $call = "({ struct phpma_blk_{$b->name} blk = {" . implode(', ', $assign) . "}; phpma_run_serving(phpma_blk_{$b->name}, &blk); " . ($hasRet ? 'blk.ret; ' : '') . "})";
    }
    $body = $thunk . "ZEND_FUNCTION({$b->name})\n{\n$decl\tphpma_frame f;\n\n$zpp\n\tphpma_frame_init(&f);\n$conv";
    if ($b->uninit) {
        $hp = $b->params[0];
        $body .= "\tif (h_{$hp->name}) phpma_handle_uninit(h_{$hp->name});\n\tphpma_frame_free(&f);\n\treturn;\n";
    } else {
        $rt = $b->return;
        switch ($b->returnRole) {
            case 'void':
                $body .= "\t$call;\n";
                break;
            default:
                $body .= "\t" . preg_replace('/^const /', 'const ', $rt) . " ret = $call;\n";
        }
        if ($b->target !== null) {
            $tp = null;
            foreach ($b->params as $p) {
                if ($p->role === 'target') {
                    $tp = $p;
                }
            }
            $body .= "\tif (ret == MA_SUCCESS) phpma_frame_commit(&f, h_{$tp->name});\n";
        }
        $body .= $after;
        $body .= "\tphpma_frame_free(&f);\n";
        switch ($b->returnRole) {
            case 'void':
                $body .= "\treturn;\n";
                break;
            case 'scalar':
                $s = scalar_info($m, $rt);
                $body .= match ($s['php']) {
                    'int' => "\tRETURN_LONG((zend_long)ret);\n",
                    'bool' => "\tRETURN_BOOL(ret != 0);\n",
                    'float' => "\tRETURN_DOUBLE((double)ret);\n",
                };
                break;
            case 'value':
                $body .= "\tphpma_to_" . c_ident($rt) . "(&ret, return_value);\n\treturn;\n";
                break;
            case 'str':
                $body .= "\tif (ret) { RETURN_STRING(ret); }\n\tRETURN_NULL();\n";
                break;
            case 'chmap':
                $body .= "\tif (!ret) { RETURN_NULL(); }\n\tphpma_channel_list_zval(ret, (uint32_t)(" . cx($m, $b, $m->bindings['return_count'][$b->name]) . "), return_value);\n\treturn;\n";
                break;
            case 'handle':
            case 'iface':
                $owner = 'NULL';
                foreach ($b->params as $p) {
                    if ($p->role === 'handle' || $p->role === 'iface') {
                        $owner = "h_{$p->name} ? &h_{$p->name}->std : NULL";
                        break;
                    }
                }
                // memory miniaudio owns behind a void typedef (a graph's endpoint) is viewed through the base struct
                $kind = $b->returnRole === 'handle' ? '&phpma_kind_' . $m->baseType($rt) : (isset(Model::INTERFACES[$m->baseType($rt)]) && $m->isHandle(Model::INTERFACES[$m->baseType($rt)]['base']) ? '&phpma_kind_' . Model::INTERFACES[$m->baseType($rt)]['base'] : 'NULL');
                $body .= "\tphpma_handle_zval((void *)ret, $kind, $owner, return_value);\n\treturn;\n";
                break;
        }
    }
    $body .= "\nfail: __attribute__((unused))\n\tphpma_frame_free(&f);\n\tRETURN_THROWS();\n}\n\n";

    return $body;
}

function functions_output(Model $m): array
{
    $stub = "<?php\n\n/** @generate-class-entries */\n\n";
    $c = "/* Generated by tools/generate.php from miniaudio.h. Do not edit. */\n\n#ifdef HAVE_CONFIG_H\n#include \"config.h\"\n#endif\n\n#include \"php.h\"\n#include \"../runtime.h\"\n#include \"../callbacks.h\"\n#include \"types.h\"\n#include \"trampolines.h\"\n#include \"../../stubs/functions_arginfo.h\"\n\n";
    $pending = [];
    $bound = 0;
    foreach ($m->functions as $fn => $d) {
        if (($m->bindings['skip'][$fn] ?? false) || isset($m->bindings['manual'][$fn])) {
            continue;
        }
        $b = classify_function($m, $fn, $d);
        if (is_string($b)) {
            $pending[] = $b;
            continue;
        }
        $bound++;
        $stub .= "function $fn(" . implode(', ', array_map(fn ($p) => php_param($m, $p), $b->params)) . '): ' . php_return($m, $b) . " {}\n\n";
        $c .= emit_function($m, $b);
    }
    $c .= "void phpma_functions_minit(void)\n{\n\tzend_register_functions(NULL, ext_functions, NULL, MODULE_PERSISTENT);\n}\n";
    $report = "bound $bound, pending " . count($pending) . "\n" . implode("\n", $pending) . "\n";

    return [$stub, $c, $report];
}
