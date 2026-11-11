<?php

declare(strict_types=1);

/*
 * What the header says, classified: handle classes (C storage with an init),
 * value classes (plain data), interfaces (void typedefs miniaudio dispatches
 * through a base struct), enums and defines.
 */
final class Model
{
    /** void typedefs → interface, and the base struct a PHP-made implementer embeds */
    public const INTERFACES = [
        'ma_data_source' => ['flag' => 'PHPMA_IS_DATA_SOURCE', 'base' => 'ma_data_source_base'],
        'ma_node' => ['flag' => 'PHPMA_IS_NODE', 'base' => 'ma_node_base'],
        'ma_vfs' => ['flag' => 'PHPMA_IS_VFS', 'base' => 'ma_vfs_callbacks'],
        'ma_async_notification' => ['flag' => 'PHPMA_IS_ASYNC_NOTIFY', 'base' => 'ma_async_notification_callbacks'],
    ];

    /** Handles the init-name rule cannot see: their init takes the storage first, or they are not structs. */
    private const EXTRA_HANDLES = ['ma_data_source_base', 'ma_node_base', 'ma_default_vfs', 'ma_spinlock', 'ma_mutex', 'ma_sound_group'];

    public array $structs;
    public array $functions;
    public array $callbacks;
    public array $typedefs;
    public array $enums;
    public array $enumTypes = [];
    /** name => ['uninit' => ?string, 'ifaces' => list<string>, 'fields' => list] */
    public array $handles = [];
    /** class name => ['ctype' => string, 'fields' => list<array{name,type}>, 'union' => bool, 'iface' => ?string] */
    public array $values = [];
    public array $defines = [];

    public function __construct(array $api, public array $bindings, string $header)
    {
        $this->structs = $api['structs'];
        $this->functions = $api['functions'];
        $this->callbacks = $api['callbacks'];
        $this->typedefs = $api['typedefs'];
        $this->enums = $api['enums'];
        foreach ($this->enums as $name => $_) {
            if (! str_starts_with($name, 'anon@')) {
                $this->enumTypes[$name] = true;
            }
        }
        $this->findHandles();
        $this->findValues();
        $this->findDefines($header);
    }

    private function findHandles(): void
    {
        $names = self::EXTRA_HANDLES;
        foreach ($this->functions as $fn => $d) {
            if (! preg_match('/_init|_alloc/', $fn)) {
                continue;
            }
            $last = end($d['params']);
            if ($last && preg_match('/^(ma_\w+) \*{1,2}$/', $last['type'], $m) && isset($this->structs[$m[1]])) {
                $names[] = $m[1];
            }
        }
        $names = array_unique($names);
        sort($names);
        foreach ($names as $n) {
            $this->handles[$n] = ['uninit' => $this->uninitFor($n), 'ifaces' => $this->interfacesOf($n)];
        }
    }

    private function uninitFor(string $n): ?string
    {
        $map = ['ma_data_source_base' => 'ma_data_source_uninit', 'ma_node_base' => 'ma_node_uninit', 'ma_default_vfs' => null, 'ma_spinlock' => null];
        if (array_key_exists($n, $map)) {
            return $map[$n];
        }
        foreach (["{$n}_uninit", "{$n}_uninit_and_free"] as $c) {
            if (isset($this->functions[$c])) {
                return $c;
            }
        }

        return null;
    }

    /** First-member chain: a struct whose first field is (a struct whose first field is …) the base. */
    private function interfacesOf(string $n): array
    {
        $out = [];
        foreach (self::INTERFACES as $iface => $info) {
            $t = $n === 'ma_sound_group' ? 'ma_sound' : $n;
            for ($depth = 0; $depth < 6 && $t !== null; $depth++) {
                if ($t === $info['base']) {
                    $out[] = $iface;
                    break;
                }
                $first = $this->structs[$t]['fields'][0]['type'] ?? null;
                $t = ($first !== null && isset($this->structs[$first])) ? $first : null;
            }
        }
        // ma_node_graph embeds ma_node_base but is not itself a node upstream passes as ma_node*.
        if ($n === 'ma_node_graph') {
            $out = array_values(array_diff($out, ['ma_node']));
        }

        return $out;
    }

    public function isHandle(string $t): bool
    {
        return isset($this->handles[$t]);
    }

    /** Value structs reachable from function signatures, then from their own fields. */
    private function findValues(): void
    {
        $queue = [];
        foreach ($this->functions as $fn => $d) {
            if ($this->bindings['skip'][$fn] ?? false) {
                continue;
            }
            foreach (array_merge([['type' => $d['return']]], $d['params']) as $p) {
                $t = $this->baseType($p['type']);
                if (! isset($this->structs[$t]) && isset($this->typedefs[$t], $this->structs[$this->typedefs[$t]]) && ! $this->isHandle($t)) {
                    $queue[] = $t;
                } elseif (isset($this->structs[$t]) && ! $this->isHandle($t)) {
                    $queue[] = $t;
                }
            }
        }
        foreach (self::INTERFACES as $info) {
            if (! $this->isHandle($info['base'])) {
                $queue[] = $info['base'];
            }
        }
        // ma_data_source_init / ma_node_init take these configs whose vtables PHP fills
        array_push($queue, 'ma_data_source_vtable', 'ma_node_vtable', 'ma_allocation_callbacks', 'ma_device_notification');
        while ($queue) {
            $t = array_shift($queue);
            if (isset($this->values[$t])) {
                continue;
            }
            if (! isset($this->structs[$t])) {
                // typedef ma_sound_config ma_sound_group_config: same fields, its own class
                $s = $this->structs[$this->typedefs[$t]];
                $this->addValue($t, $t, $s, $queue);
                continue;
            }
            $s = $this->structs[$t];
            $this->addValue($t, $t, $s, $queue);
        }
        ksort($this->values);
    }

    private function addValue(string $class, string $ctype, array $s, array &$queue): void
    {
        $nested = array_values($s['nested'] ?? []);
        $anon = 0;
        $fields = [];
        foreach ($s['fields'] as $f) {
            $type = $f['type'];
            if (str_contains($type, '(unnamed ')) {
                $rec = $nested[$anon++];
                $sub = "{$class}_{$f['name']}";
                $isArray = preg_match('/\[(\d+)\]$/', $type, $m);
                $subCtype = "__typeof__(((($ctype *)0)->{$f['name']})" . ($isArray ? '[0]' : '') . ')';
                $this->addValue($sub, $subCtype, $rec, $queue);
                $this->values[$sub]['union'] = $rec['tag'] === 'union';
                $type = $sub . ($isArray ? "[{$m[1]}]" : '');
            } else {
                $b = $this->baseType($type);
                if (isset($this->structs[$b]) && ! $this->isHandle($b) && ! isset($this->values[$b])) {
                    $queue[] = $b;
                }
            }
            $fields[] = ['name' => $f['name'], 'type' => $type];
        }
        $this->values[$class] = ['ctype' => $ctype, 'fields' => $fields, 'union' => $s['tag'] === 'union', 'iface' => $this->ifaceImplementedByValue($class)];
    }

    private function ifaceImplementedByValue(string $class): ?string
    {
        foreach (self::INTERFACES as $iface => $info) {
            if ($info['base'] === $class) {
                return $iface;
            }
        }

        return null;
    }

    public function baseType(string $t): string
    {
        $t = preg_replace('/\b(const|volatile|struct|union|enum)\b/', '', $t);
        $t = preg_replace('/\[\d*\]/', '', $t);

        return trim(str_replace('*', '', $t));
    }

    private function findDefines(string $header): void
    {
        $lines = explode("\n", $header);
        $skip = '/^MA_(API|INLINE|PRIVATE|NO_|ATOMIC|ATTRIBUTE|FALLTHROUGH|X?STRINGIFY|DLL|ASSUME|SIZEOF_|64BIT|32BIT|POSIX|WIN32|UNIX|APPLE|LINUX|BSD|ANDROID|EMSCRIPTEN|ORBIS|PROSPERO|SUPPORT_|ENABLE_|X86|X64|ARM|SIMD|HAS_|USE_|GNUC|SIZE_MAX|TRUE|FALSE|ALIGN|IMPLEMENTATION|DEPRECATED|HAS_|BACKEND_|CPU_|DR_|STB_|MINI|NULL|THREADCALL|STATIC|DEFAULT_LCG|LOG_LEVEL_|COINIT|LCG|UINT64_MAX|SIZE_|PREFERRED|OBJ)/';
        for ($i = 3700; $i < 11568 && $i < count($lines); $i++) {
            if (preg_match('/^\s*#\s*define\s+(MA_[A-Z0-9_]+)\s+(\S.*)$/', $lines[$i], $m) && ! preg_match($skip, $m[1])) {
                $value = trim(preg_replace('#/\*.*?\*/#', '', $m[2]));
                if ($value === '' || str_contains($value, '(x)') || str_contains($m[2], '\\')) {
                    continue;
                }
                $this->defines[$m[1]] = $value;
            }
        }
        $this->defines['MA_UINT64_MAX'] = '(((ma_uint64)0xFFFFFFFF << 32) | (ma_uint64)0xFFFFFFFF)';
        $this->defines['MA_TRUE'] = '1';
        $this->defines['MA_FALSE'] = '0';
        ksort($this->defines);
    }
}
