<?php

declare(strict_types=1);

const INT_TYPES = [
    'ma_uint8' => [0, 'UINT8_MAX'], 'ma_channel' => [0, 'UINT8_MAX'], 'unsigned char' => [0, 'UINT8_MAX'],
    'ma_uint16' => [0, 'UINT16_MAX'], 'ma_int16' => ['INT16_MIN', 'INT16_MAX'],
    'ma_uint32' => [0, 'UINT32_MAX'], 'ma_spinlock' => [0, 'UINT32_MAX'],
    'ma_int32' => ['INT32_MIN', 'INT32_MAX'], 'int' => ['INT32_MIN', 'INT32_MAX'], 'ma_result' => ['INT32_MIN', 'INT32_MAX'],
    'ma_wchar_win32' => [0, 'UINT16_MAX'],
    'ma_uint64' => null, 'ma_int64' => null, 'size_t' => null, 'ma_uintptr' => null,
];

/** List properties whose length another field states. */
const COUNT_FIELDS = [
    'ma_device_info.nativeDataFormats' => 'nativeDataFormatCount',
    'ma_node_config.pInputChannels' => 'inputBusCount',
    'ma_node_config.pOutputChannels' => 'outputBusCount',
    'ma_resource_manager_config.ppCustomDecodingBackendVTables' => 'customDecodingBackendCount',
    'ma_decoder_config.ppCustomBackendVTables' => 'customBackendCount',
];

/** Byte length of a const void* field, as a C expression over the struct (`in->`). */
const BYTE_FIELDS = [
    'ma_audio_buffer_config.pData' => ['in->sizeInFrames', 'ma_get_bytes_per_frame(in->format, in->channels)'],
];

/** Value classes miniaudio reaches through a pointer the binding makes per object: closures are read live. */
const LIVE_CLOSURE_CLASSES = ['ma_vfs_callbacks', 'ma_async_notification_callbacks'];
/** Callback families whose trampolines land after the core queue. */
const PENDING_CLOSURE_CLASSES = ['ma_allocation_callbacks'];

final class Field
{
    public function __construct(
        public string $name,
        public string $kind,
        public string $php,
        public string $default,
        public array $info = [],
    ) {}
}

function field_kind(Model $m, string $class, array $field, array $siblings): Field
{
    $name = $field['name'];
    $type = trim($field['type']);
    $key = "$class.$name";

    if (preg_match('/^(.*?)\[(\d+)\]$/', $type, $mm)) {
        $elem = trim($mm[1]);
        $n = (int) $mm[2];
        if ($elem === 'char') {
            return new Field($name, 'cstr', 'string', "''", ['n' => $n]);
        }
        $sub = field_kind($m, $class, ['name' => $name, 'type' => $elem], $siblings);
        if (isset(COUNT_FIELDS[$key])) {
            return new Field($name, 'array', 'array', '[]', ['n' => $n, 'elem' => $sub, 'count' => COUNT_FIELDS[$key]]);
        }

        return new Field($name, 'array', 'array', '[]', ['n' => $n, 'elem' => $sub]);
    }
    if (str_starts_with($class, 'ma_job_data') && $key === 'ma_job_data_custom.proc') {
        return new Field($name, 'jobproc', '?Closure', 'null');
    }
    if (str_starts_with($class, 'ma_job_data') && str_contains($type, '*')) {
        // pointers into miniaudio's own objects: handed back only as they were handed out
        return new Field($name, 'rawptr', 'int', '0');
    }
    if (array_key_exists($type, INT_TYPES)) {
        return new Field($name, 'int', 'int', '0', ['range' => INT_TYPES[$type], 'ctype' => $type]);
    }
    if (isset($m->enumTypes[$type])) {
        return new Field($name, 'int', 'int', '0', ['range' => ['INT32_MIN', 'INT32_MAX'], 'ctype' => $type]);
    }
    if ($type === 'ma_bool8' || $type === 'ma_bool32') {
        return new Field($name, 'bool', 'bool', 'false', ['ctype' => $type]);
    }
    if ($type === 'float' || $type === 'double') {
        return new Field($name, 'float', 'float', '0.0', ['ctype' => $type]);
    }
    if ($type === 'ma_allocation_callbacks') {
        return new Field($name, 'alloc', 'ma_allocation_callbacks', '', ['class' => 'ma_allocation_callbacks']);
    }
    if (isset($m->values[$type]) || (isset($m->structs[$type]) && ! $m->isHandle($type))) {
        return new Field($name, 'value', $type, '', ['class' => $type]);
    }
    if ($type === 'const char *') {
        return new Field($name, 'str', '?string', 'null');
    }
    if ($type === 'const wchar_t *') {
        return new Field($name, 'wstr', '?string', 'null');
    }
    if ($type === 'void *') {
        return new Field($name, 'userdata', 'mixed', 'null');
    }
    if ($type === 'const void *') {
        return new Field($name, 'bytes', '?string', 'null', ['len' => BYTE_FIELDS[$key] ?? null]);
    }
    if (in_array($type, ['ma_channel *', 'const ma_channel *'], true)) {
        $suffix = substr($name, strlen('pChannelMap'));
        $count = 'channels' . $suffix;
        if (! in_array($count, $siblings, true)) {
            $count = 'channels';
        }

        return new Field($name, 'channels', '?array', 'null', ['count' => $count]);
    }
    if ($type === 'ma_handle') {
        return new Field($name, 'int', 'int', '0', ['range' => null, 'ctype' => 'ma_handle', 'ptr' => true]);
    }
    if ($type === 'char *' || $type === 'wchar_t *') {
        // Paths inside resource manager jobs: miniaudio allocates and frees them.
        return new Field($name, 'rostr', '?string', 'null', ['wide' => $type === 'wchar_t *']);
    }
    if ($type === 'float **' && in_array($key, ['ma_channel_converter_config.ppWeights', 'ma_data_converter_config.ppChannelWeights'], true)) {
        return new Field($name, 'weights', '?array', 'null');
    }
    if ($type === 'const ma_uint32 *') {
        return new Field($name, 'u32list', '?array', 'null', ['count' => COUNT_FIELDS[$key]]);
    }
    if (isset($m->callbacks[$type]) || str_contains($type, '(*)')) {
        return new Field($name, 'closure', '?Closure', 'null', ['cb' => $type]);
    }
    $base = $m->baseType($type);
    $stars = substr_count($type, '*');
    if ($stars === 1 && isset(Model::INTERFACES[$base])) {
        return new Field($name, 'iface', '?' . $base, 'null', ['iface' => $base]);
    }
    if ($stars === 1 && $m->isHandle($base)) {
        return new Field($name, 'handle', '?' . $base, 'null', ['handle' => $base]);
    }
    if ($stars === 1 && isset($m->values[$base])) {
        return new Field($name, 'valueptr', '?' . $base, 'null', ['class' => $base]);
    }
    if ($stars === 2 && isset($m->values[$base]) && isset(COUNT_FIELDS[$key])) {
        return new Field($name, 'valueptrlist', '?array', 'null', ['class' => $base, 'count' => COUNT_FIELDS[$key]]);
    }

    throw new RuntimeException("unclassified field $key: $type");
}

function value_fields(Model $m, string $class): array
{
    $v = $m->values[$class];
    $names = array_column($v['fields'], 'name');
    $out = [];
    foreach ($v['fields'] as $f) {
        try {
            $out[] = field_kind($m, $class, $f, $names);
        } catch (RuntimeException $e) {
            $GLOBALS['unclassified'][] = $e->getMessage();
            $out[] = new Field($f['name'], 'int', 'int', '0', ['range' => null, 'ctype' => 'int']);
        }
    }

    return $out;
}

function c_ident(string $class): string
{
    return preg_replace('/\W/', '_', $class);
}

/* ---- from zval ---------------------------------------------------------- */

function from_field(Model $m, string $class, Field $f, string $zv, string $dst, string $what): string
{
    $W = '"' . $what . '"';
    switch ($f->kind) {
        case 'int':
            if ($f->info['range'] === null) {
                $cast = ! empty($f->info['ptr']) ? "({$f->info['ctype']})(uintptr_t)" : "({$f->info['ctype']})";
                return "\t{$dst} = {$cast}zval_get_long($zv);\n";
            }
            [$lo, $hi] = $f->info['range'];

            return "\t{ zend_long v; if (phpma_int($zv, $lo, $hi, &v, $W) == FAILURE) return FAILURE; {$dst} = ({$f->info['ctype']})v; }\n";
        case 'bool':
            return "\t{$dst} = zend_is_true($zv) ? MA_TRUE : MA_FALSE;\n";
        case 'float':
            return "\t{$dst} = ({$f->info['ctype']})zval_get_double($zv);\n";
        case 'cstr':
            return "\tif (phpma_cstring($zv, {$dst}, {$f->info['n']}, $W) == FAILURE) return FAILURE;\n";
        case 'rostr':
            return "\tif (Z_TYPE_P($zv) != IS_NULL) { zend_value_error(\"%s is set by miniaudio's resource manager only\", $W); return FAILURE; }\n\t{$dst} = NULL;\n";
        case 'str':
            return "\tif (phpma_strdup($zv, f, &{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'wstr':
            return "\tif (phpma_wstrdup($zv, f, &{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'userdata':
            return "\tif (Z_TYPE_P($zv) != IS_NULL || f->target) { phpma_ctx *ctx = phpma_frame_ctx(f, $W); if (!ctx) return FAILURE; phpma_ctx_set(ctx, phpma_frame_path(f, \"{$f->name}\"), $zv); {$dst} = phpma_ctx_sub(ctx, f->prefix); } else { {$dst} = NULL; }\n";
        case 'bytes':
            $check = '';
            if ($f->info['len'] !== null) {
                [$cnt, $unit] = str_replace('in->', 'out->', $f->info['len']);
                $check = "\tif (Z_TYPE_P($zv) == IS_STRING) { size_t need; if (phpma_mul_size((uint64_t)($cnt), (uint64_t)($unit), &need) == FAILURE || Z_STRLEN_P($zv) < need) { zend_value_error(\"%s must hold the frames the struct describes\", $W); return FAILURE; } }\n";
            }
            return $check . "\tif (Z_TYPE_P($zv) == IS_STRING) { void *kp = phpma_frame_keep(f, Z_STRLEN_P($zv)); memcpy(kp, Z_STRVAL_P($zv), Z_STRLEN_P($zv)); {$dst} = kp; } else { {$dst} = NULL; }\n";
        case 'alloc':
            return "\tif (Z_TYPE_P($zv) == IS_OBJECT && phpma_alloc_callbacks($zv, $W) == FAILURE) return FAILURE;\n\tmemset(&{$dst}, 0, sizeof({$dst}));\n";
        case 'value':
            $c = c_ident($f->info['class']);

            return "\tif (Z_TYPE_P($zv) == IS_OBJECT) { size_t pl = phpma_frame_push(f, \"{$f->name}\"); zend_result rr = phpma_from_{$c}(Z_OBJ_P($zv), &{$dst}, f); phpma_frame_pop(f, pl); if (rr == FAILURE) return FAILURE; } else { memset(&{$dst}, 0, sizeof({$dst})); }\n";
        case 'valueptr':
            $c = c_ident($f->info['class']);
            $ct = $m->values[$f->info['class']]['ctype'];
            $alloc = in_array($f->info['class'], ['ma_data_source_vtable', 'ma_node_vtable', 'ma_decoding_backend_vtable', 'ma_resampling_backend_vtable'], true) ? 'phpma_frame_keep' : 'phpma_frame_alloc';

            return "\tif (Z_TYPE_P($zv) == IS_OBJECT) { $ct *vp = $alloc(f, sizeof($ct)); size_t pl = phpma_frame_push(f, \"{$f->name}\"); zend_result rr = phpma_from_{$c}(Z_OBJ_P($zv), vp, f); phpma_frame_pop(f, pl); if (rr == FAILURE) return FAILURE; {$dst} = vp; } else { {$dst} = NULL; }\n";
        case 'valueptrlist':
            $c = c_ident($f->info['class']);
            $ct = $m->values[$f->info['class']]['ctype'];
            $count = preg_replace('/\.[^.]*$/', '', $dst) . '.' . $f->info['count'];
            $count = str_replace('(*out).', 'out->', $count);

            return "\tif (Z_TYPE_P($zv) == IS_ARRAY) {\n"
                . "\t\tuint32_t n = zend_hash_num_elements(Z_ARRVAL_P($zv)), i = 0; zval *e;\n"
                . "\t\t$ct **list = phpma_frame_keep(f, (n ? n : 1) * sizeof($ct *));\n"
                . "\t\tZEND_HASH_FOREACH_VAL(Z_ARRVAL_P($zv), e) {\n"
                . "\t\t\tif (Z_TYPE_P(e) != IS_OBJECT || Z_OBJCE_P(e) != phpma_ce_{$c}) { zend_value_error(\"%s must hold only {$f->info['class']} objects\", $W); return FAILURE; }\n"
                . "\t\t\tchar idx[32]; snprintf(idx, sizeof(idx), \"{$f->name}.%u\", i); size_t pl = phpma_frame_push(f, idx);\n"
                . "\t\t\tlist[i] = phpma_frame_keep(f, sizeof($ct)); zend_result rr = phpma_from_{$c}(Z_OBJ_P(e), list[i], f); phpma_frame_pop(f, pl); if (rr == FAILURE) return FAILURE;\n"
                . ($f->info['class'] === 'ma_decoding_backend_vtable' ? "\t\t\tif (phpma_decoding_vtable_index(list[i], i) == FAILURE) return FAILURE;\n" : '')
                . "\t\t\ti++;\n"
                . "\t\t} ZEND_HASH_FOREACH_END();\n"
                . "\t\t{$dst} = list;\n"
                . "\t} else { {$dst} = NULL; }\n";
        case 'channels':
            return "\tif (phpma_channel_list($zv, f, out->{$f->info['count']}, (ma_channel **)&{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'rawptr':
            return "\tif (phpma_rawptr($zv, (void **)&{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'jobproc':
            return "\tif (Z_TYPE_P($zv) != IS_NULL) { {$dst} = phpma_job_proc_for($zv); if (!{$dst}) return FAILURE; } else { {$dst} = NULL; }\n";
        case 'weights':
            return "\tif (phpma_weights($zv, f, out->channelsIn, out->channelsOut, &{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'u32list':
            return "\tif (phpma_u32_list($zv, f, out->{$f->info['count']}, (ma_uint32 **)&{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'handle':
            return "\tif (phpma_handle_field($zv, &phpma_kind_{$f->info['handle']}, f, (void **)&{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'iface':
            return "\tif (phpma_iface_field($zv, phpma_ce_{$f->info['iface']}, f, (void **)&{$dst}, $W) == FAILURE) return FAILURE;\n";
        case 'closure':
            if (in_array($class, LIVE_CLOSURE_CLASSES, true)) {
                // read from the object each time miniaudio calls back (see phpma_vfs_value_native)
                return "\t{$dst} = NULL;\n";
            }
            if (in_array($class, PENDING_CLOSURE_CLASSES, true)) {
                return "\tif (Z_TYPE_P($zv) != IS_NULL) { zend_value_error(\"%s: this callback family is not bound yet\", $W); return FAILURE; }\n\t{$dst} = NULL;\n";
            }
            $tramp = 'phpma_tramp_' . c_ident($class) . '_' . $f->name;
            $GLOBALS['trampolines'][$tramp] = [$f->info['cb'], $class, $f->name];

            return "\tif (Z_TYPE_P($zv) != IS_NULL) { phpma_ctx *ctx = phpma_frame_ctx(f, $W); if (!ctx) return FAILURE; phpma_ctx_set(ctx, phpma_frame_path(f, \"{$f->name}\"), $zv); {$dst} = $tramp; } else { {$dst} = NULL; }\n";
        case 'array':
            $e = $f->info['elem'];
            $n = $f->info['n'];
            $code = "\t{\n\t\tuint32_t i = 0; zval *e;\n"
                . "\t\tmemset(&{$dst}, 0, sizeof({$dst}));\n"
                . "\t\tif (zend_hash_num_elements(Z_ARRVAL_P($zv)) > $n) { zend_value_error(\"%s must hold at most $n entries\", $W); return FAILURE; }\n"
                . "\t\tZEND_HASH_FOREACH_VAL(Z_ARRVAL_P($zv), e) {\n";
            $elemCode = from_field($m, $class, $e, 'e', "{$dst}[i]", $what);
            $code .= preg_replace('/^/m', "\t\t", rtrim($elemCode)) . "\n\t\t\ti++;\n\t\t} ZEND_HASH_FOREACH_END();\n\t}\n";

            return $code;
    }

    throw new RuntimeException("no from for {$f->kind}");
}

/* ---- to zval ------------------------------------------------------------ */

function to_field(Model $m, string $class, Field $f, string $src, string $zv, string $in = 'in'): string
{
    switch ($f->kind) {
        case 'int':
            return ! empty($f->info['ptr']) ? "\tZVAL_LONG($zv, (zend_long)(uintptr_t){$src});\n" : "\tZVAL_LONG($zv, (zend_long){$src});\n";
        case 'rostr':
            return ! empty($f->info['wide']) ? "\tphpma_wstr_zval({$src}, $zv);\n" : "\tif ({$src}) { ZVAL_STRING($zv, {$src}); } else { ZVAL_NULL($zv); }\n";
        case 'bool':
            return "\tZVAL_BOOL($zv, {$src} != 0);\n";
        case 'float':
            return "\tZVAL_DOUBLE($zv, (double){$src});\n";
        case 'cstr':
            return "\tZVAL_STRINGL($zv, {$src}, strnlen({$src}, {$f->info['n']}));\n";
        case 'str':
            return "\tif ({$src}) { ZVAL_STRING($zv, {$src}); } else { ZVAL_NULL($zv); }\n";
        case 'wstr':
            return "\tphpma_wstr_zval({$src}, $zv);\n";
        case 'bytes':
            if ($f->info['len'] === null) {
                return "\tZVAL_NULL($zv);\n";
            }
            $len = '(' . implode(') * (', str_replace('in->', "{$in}->", $f->info['len'])) . ')';

            return "\tif ({$src}) { ZVAL_STRINGL($zv, (const char *){$src}, $len); } else { ZVAL_NULL($zv); }\n";
        case 'userdata':
            return "\tphpma_sub_user({$src}, \"{$f->name}\", $zv);\n";
        case 'alloc':
            return "\tphpma_value_new(phpma_ce_ma_allocation_callbacks, $zv);\n";
        case 'value':
            $c = c_ident($f->info['class']);

            return "\tphpma_to_{$c}(&{$src}, $zv);\n";
        case 'valueptr':
            $c = c_ident($f->info['class']);

            return "\tif ({$src}) { phpma_to_{$c}({$src}, $zv); } else { ZVAL_NULL($zv); }\n";
        case 'valueptrlist':
            $c = c_ident($f->info['class']);

            return "\tif ({$src}) { array_init($zv); for (uint32_t i = 0; i < {$in}->{$f->info['count']}; i++) { zval e; phpma_to_{$c}({$src}[i], &e); add_next_index_zval($zv, &e); } } else { ZVAL_NULL($zv); }\n";
        case 'channels':
            return "\tphpma_channel_list_zval({$src}, {$in}->{$f->info['count']}, $zv);\n";
        case 'rawptr':
            return "\tphpma_rawptr_zval((void *){$src}, $zv);\n";
        case 'jobproc':
            return "\tphpma_job_proc_zval({$src}, $zv);\n";
        case 'weights':
            return "\tphpma_weights_zval({$src}, {$in}->channelsIn, {$in}->channelsOut, $zv);\n";
        case 'u32list':
            return "\tphpma_u32_list_zval({$src}, {$in}->{$f->info['count']}, $zv);\n";
        case 'handle':
            return "\tphpma_handle_zval((void *){$src}, &phpma_kind_{$f->info['handle']}, NULL, $zv);\n";
        case 'iface':
            return "\tphpma_handle_zval((void *){$src}, NULL, NULL, $zv);\n";
        case 'closure':
            return "\tZVAL_NULL($zv);\n";
        case 'array':
            $e = $f->info['elem'];
            $n = isset($f->info['count']) ? "MIN((uint32_t){$in}->{$f->info['count']}, {$f->info['n']})" : $f->info['n'];
            $elemCode = to_field($m, $class, $e, "{$src}[i]", '&e', $in);

            return "\tarray_init_size($zv, $n);\n\tfor (uint32_t i = 0; i < $n; i++) {\n\t\tzval e;\n" . preg_replace('/^/m', "\t", rtrim($elemCode)) . "\n\t\tadd_next_index_zval($zv, &e);\n\t}\n";
    }

    throw new RuntimeException("no to for {$f->kind}");
}

/* ---- readable handle fields --------------------------------------------- */

const FIELD_SCALARS = [
    'ma_uint8' => 'U8', 'ma_channel' => 'U8', 'unsigned char' => 'U8', 'ma_uint16' => 'U16', 'ma_int16' => 'I16',
    'ma_uint32' => 'U32', 'ma_int32' => 'I32', 'int' => 'I32', 'ma_result' => 'I32', 'ma_uint64' => 'U64', 'ma_int64' => 'I64',
    'size_t' => 'U64', 'ma_bool8' => 'B8', 'ma_bool32' => 'B32', 'float' => 'F32', 'double' => 'F64',
];

/** C table rows for one struct level; nested tables are appended to $out first. */
function handle_field_rows(Model $m, string $ctype, array $record, string $path, string $tableName, string &$out): void
{
    $nested = array_values($record['nested'] ?? []);
    $anon = 0;
    $rows = '';
    foreach ($record['fields'] as $f) {
        $type = trim($f['type']);
        $name = $f['name'];
        $member = ($path === '' ? '' : $path . '.') . $name;
        $off = "offsetof($ctype, $member)";
        if (str_contains($type, '(unnamed ')) {
            $rec = $nested[$anon++];
            if ($rec['tag'] !== 'struct' || preg_match('/\[\d+\]$/', $type)) {
                continue;
            }
            $sub = $tableName . '_' . $name;
            handle_field_rows($m, $ctype, $rec, $member, $sub, $out);
            $rows .= "\t{\"$name\", $off, PHPMA_F_STRUCT, 0, 0, NULL, $sub, NULL},\n";
            continue;
        }
        if (preg_match('/^char\[(\d+)\]$/', $type, $mm)) {
            $rows .= "\t{\"$name\", $off, PHPMA_F_CSTR, 0, {$mm[1]}, NULL, NULL, NULL},\n";
            continue;
        }
        if (preg_match('/^([\w ]+)\[(\d+)\]$/', $type, $mm)) {
            $elem = trim($mm[1]);
            $code = FIELD_SCALARS[$elem] ?? (isset($m->enumTypes[$elem]) ? 'I32' : null);
            if ($code !== null) {
                $rows .= "\t{\"$name\", $off, PHPMA_F_END, PHPMA_F_$code, {$mm[2]}, NULL, NULL, NULL},\n";
            }
            continue;
        }
        $code = FIELD_SCALARS[$type] ?? (isset($m->enumTypes[$type]) ? 'I32' : null);
        if ($code !== null) {
            $rows .= "\t{\"$name\", $off, PHPMA_F_$code, 0, 0, NULL, NULL, NULL},\n";
            continue;
        }
        $base = $m->baseType($type);
        if (substr_count($type, '*') === 1 && $m->isHandle($base) && ! str_starts_with($type, 'const ')) {
            $rows .= "\t{\"$name\", $off, PHPMA_F_HANDLE, 0, 0, &phpma_kind_$base, NULL, NULL},\n";
            continue;
        }
        if (! str_contains($type, '*') && isset($m->values[$type]) && $type !== 'ma_allocation_callbacks') {
            $rows .= "\t{\"$name\", $off, PHPMA_F_VALUE, 0, 0, NULL, NULL, (void (*)(const void *, zval *))phpma_to_" . c_ident($type) . "},\n";
        }
        // atomics, unions, function pointers, opaque pointers and embedded objects are miniaudio's private state
    }
    $out .= "static const phpma_field {$tableName}[] = {\n$rows\t{NULL, 0, 0, 0, 0, NULL, NULL, NULL}\n};\n\n";
}

/* ---- stub and C output -------------------------------------------------- */

function types_output(Model $m): array
{
    $stub = "<?php\n\n/** @generate-class-entries */\n\n";
    $c = "/* Generated by tools/generate.php from miniaudio.h. Do not edit. */\n\n#ifdef HAVE_CONFIG_H\n#include \"config.h\"\n#endif\n\n#include \"php.h\"\n#include <stddef.h>\n#include \"../runtime.h\"\n#include \"../callbacks.h\"\n#include \"types.h\"\n#include \"trampolines.h\"\n#include \"../../stubs/types_arginfo.h\"\n\n";
    $h = "/* Generated by tools/generate.php. Do not edit. */\n\n#ifndef PHPMA_GEN_TYPES_H\n#define PHPMA_GEN_TYPES_H\n\n#include \"../runtime.h\"\n\n";

    foreach (Model::INTERFACES as $iface => $_) {
        $stub .= "interface $iface {}\n\n";
    }

    // value classes
    $fieldsOf = [];
    foreach ($m->values as $class => $v) {
        $fieldsOf[$class] = value_fields($m, $class);
    }

    foreach ($m->values as $class => $v) {
        $ci = c_ident($class);
        $fields = $fieldsOf[$class];
        $impl = $v['iface'] ? " implements {$v['iface']}" : '';
        $stub .= "final class $class$impl\n{\n";
        foreach ($fields as $f) {
            $default = $f->default === '' ? '' : " = {$f->default}";
            $stub .= "    public {$f->php} \${$f->name}$default;\n";
        }
        $params = [];
        foreach ($fields as $f) {
            if ($f->kind === 'value' || $f->kind === 'alloc') {
                $params[] = "?{$f->php} \${$f->name} = null";
            } else {
                $params[] = "{$f->php} \${$f->name} = {$f->default}";
            }
        }
        $stub .= "\n    public function __construct(" . implode(', ', $params) . ") {}\n}\n\n";

        $ct = $v['ctype'];
        $h .= "extern zend_class_entry *phpma_ce_$ci;\n";
        $h .= "zend_result phpma_from_$ci(zend_object *o, $ct *out, phpma_frame *f);\n";
        $h .= "void phpma_to_$ci(const $ct *in, zval *out);\n";

        $c .= "zend_class_entry *phpma_ce_$ci;\n\n";
        $nested = [];
        foreach ($fields as $f) {
            $nested[] = ($f->kind === 'value' || $f->kind === 'alloc') ? '&phpma_ce_' . c_ident($f->info['class']) : 'NULL';
        }
        $count = count($fields);
        $c .= "static zend_class_entry **phpma_nested_{$ci}[] = {" . implode(', ', $nested ?: ['NULL']) . "};\n";
        $c .= "const phpma_value_class phpma_vc_$ci = {&phpma_ce_$ci, $count, phpma_nested_$ci};\n\n";
        $c .= "ZEND_METHOD($class, __construct)\n{\n\tif (ZEND_NUM_ARGS() > $count) { zend_wrong_parameters_count_error(0, $count); RETURN_THROWS(); }\n\tphpma_value_construct(Z_OBJ_P(ZEND_THIS), &phpma_vc_$ci, ZEND_CALL_ARG(execute_data, 1), ZEND_NUM_ARGS());\n}\n\n";

        // from
        $c .= "zend_result phpma_from_$ci(zend_object *o, $ct *out, phpma_frame *f)\n{\n";
        if ($v['union']) {
            $c .= "\tmemset(out, 0, sizeof(*out));\n";
            foreach ($fields as $i => $f) {
                if (in_array($f->kind, ['handle', 'iface', 'userdata', 'closure', 'str', 'wstr', 'bytes', 'valueptr', 'channels', 'u32list', 'valueptrlist'], true)) {
                    continue; // pointer members: only meaningful through the struct that owns the union
                }
                $c .= "\t{\n\t\t$ct tmp; memset(&tmp, 0, sizeof(tmp));\n\t\tzval *p = OBJ_PROP_NUM(o, $i);\n";
                $c .= preg_replace('/^/m', "\t", rtrim(str_replace('return FAILURE', 'return FAILURE', from_field($m, $class, $f, 'p', "tmp.{$f->name}", "$class::\${$f->name}")))) . "\n";
                $c .= "\t\tif (!phpma_all_zero(&tmp.{$f->name}, sizeof(tmp.{$f->name}))) memcpy(&out->{$f->name}, &tmp.{$f->name}, sizeof(tmp.{$f->name}));\n\t}\n";
            }
        } else {
            foreach ($fields as $i => $f) {
                if ($class === 'ma_job' && $f->name === 'data') {
                    // a union whose meaningful member is named by toc.breakup.code: only that one is written back
                    $c .= "\tif (phpma_from_job_data(Z_OBJ_P(OBJ_PROP_NUM(o, $i)), out->toc.breakup.code, &out->data, f) == FAILURE) return FAILURE;\n";
                    continue;
                }
                $c .= "\t{\n\t\tzval *p = OBJ_PROP_NUM(o, $i);\n";
                $c .= preg_replace('/^/m', "\t", rtrim(from_field($m, $class, $f, 'p', "out->{$f->name}", "$class::\${$f->name}"))) . "\n\t}\n";
            }
        }
        $c .= "\treturn SUCCESS;\n}\n\n";

        // to
        $c .= "void phpma_to_$ci(const $ct *in, zval *out)\n{\n\tzend_object *o;\n\tobject_init_ex(out, phpma_ce_$ci);\n\to = Z_OBJ_P(out);\n";
        foreach ($fields as $i => $f) {
            if ($v['union'] && in_array($f->kind, ['handle', 'iface', 'userdata', 'closure', 'str', 'wstr', 'bytes', 'valueptr', 'channels', 'u32list', 'valueptrlist'], true)) {
                continue;
            }
            $c .= "\t{\n\t\tzval v;\n" . preg_replace('/^/m', "\t", rtrim(to_field($m, $class, $f, "in->{$f->name}", '&v'))) . "\n\t\tzval_ptr_dtor(OBJ_PROP_NUM(o, $i));\n\t\tZVAL_COPY_VALUE(OBJ_PROP_NUM(o, $i), &v);\n\t}\n";
        }
        $c .= "}\n\n";
    }

    // handle classes
    foreach ($m->handles as $name => $hd) {
        $impl = $hd['ifaces'] ? ' implements ' . implode(', ', $hd['ifaces']) : '';
        $stub .= "/** @not-serializable */\nfinal class $name$impl\n{\n}\n\n";
        $ctype = $name;
        $h .= "extern zend_class_entry *phpma_ce_$name;\nextern const phpma_kind phpma_kind_$name;\n";
        $c .= "zend_class_entry *phpma_ce_$name;\n";
        $uninit = 'NULL';
        if ($hd['uninit']) {
            $fn = $m->functions[$hd['uninit']];
            $args = ['(' . preg_replace('/^const /', '', $fn['params'][0]['type']) . ')p'];
            foreach (array_slice($fn['params'], 1) as $p) {
                $args[] = 'NULL';
            }
            $c .= "static void phpma_uninit_$name(void *p) { {$hd['uninit']}(" . implode(', ', $args) . "); }\n";
            $uninit = "phpma_uninit_$name";
        }
        $flagList = array_map(fn ($i) => Model::INTERFACES[$i]['flag'], $hd['ifaces']);
        if ($name === 'ma_spinlock') {
            $flagList[] = 'PHPMA_LIVE_FROM_NEW';
        }
        if (in_array($name, ['ma_device', 'ma_engine', 'ma_resource_manager', 'ma_device_job_thread'], true)) {
            $flagList[] = 'PHPMA_THREADED';
        }
        $flags = $flagList ? implode(' | ', $flagList) : '0';
        $struct = $m->structs[$name === 'ma_sound_group' ? 'ma_sound' : $name] ?? null;
        $fieldsRef = 'NULL';
        if ($struct !== null) {
            $tbl = "phpma_fields_$name";
            $tables = '';
            handle_field_rows($m, $ctype, $struct, '', $tbl, $tables);
            $c .= $tables;
            $fieldsRef = $tbl;
        }
        $c .= "const phpma_kind phpma_kind_$name = {\"$name\", sizeof($ctype), &phpma_ce_$name, $uninit, $flags, $fieldsRef};\n";
        $c .= "static zend_object *phpma_create_$name(zend_class_entry *ce) { return phpma_handle_create(ce, &phpma_kind_$name); }\n\n";
    }

    // registration
    $c .= "static zend_object *phpma_value_create(zend_class_entry *ce);\n\nstatic HashTable phpma_value_tables;\n\n";
    $c .= "static zend_object *phpma_value_create(zend_class_entry *ce)\n{\n\tzend_object *o = zend_objects_new(ce);\n\tobject_properties_init(o, ce);\n\tconst phpma_value_class *vc = zend_hash_index_find_ptr(&phpma_value_tables, (zend_ulong)(uintptr_t)ce);\n\tfor (uint32_t i = 0; vc && i < vc->prop_count; i++) {\n\t\tif (vc->nested[i]) {\n\t\t\tzval *slot = OBJ_PROP_NUM(o, i);\n\t\t\tzval_ptr_dtor(slot);\n\t\t\tobject_init_ex(slot, *vc->nested[i]);\n\t\t}\n\t}\n\treturn o;\n}\n\n";
    $c .= "void phpma_types_minit(void)\n{\n\tzend_class_entry *iface[4];\n";
    $c .= "\tzend_hash_init(&phpma_value_tables, 256, NULL, NULL, 1);\n";
    $ifaceIndex = [];
    $k = 0;
    foreach (Model::INTERFACES as $iface => $_) {
        $c .= "\tiface[$k] = phpma_ce_$iface = register_class_$iface();\n";
        $ifaceIndex[$iface] = $k++;
    }
    foreach ($m->values as $class => $v) {
        $ci = c_ident($class);
        $arg = $v['iface'] ? "iface[{$ifaceIndex[$v['iface']]}]" : '';
        $c .= "\tphpma_ce_$ci = register_class_$ci($arg);\n\tphpma_ce_{$ci}->create_object = phpma_value_create;\n\tzend_hash_index_update_ptr(&phpma_value_tables, (zend_ulong)(uintptr_t)phpma_ce_$ci, (void *)&phpma_vc_$ci);\n";
    }
    foreach ($m->handles as $name => $hd) {
        $args = implode(', ', array_map(fn ($i) => "iface[{$ifaceIndex[$i]}]", $hd['ifaces']));
        $c .= "\tphpma_ce_$name = register_class_$name($args);\n\tphpma_ce_{$name}->create_object = phpma_create_$name;\n";
    }
    $c .= "}\n";
    $h .= "\nvoid phpma_types_minit(void);\n\n#endif\n";

    return [$stub, $c, $h];
}
