<?php

/*
 * Reads clang's JSON AST of lib/miniaudio/miniaudio.h and writes tools/api.json:
 * every public struct (fields in order), enum (constants), function (MA_API,
 * declared in miniaudio.h's public section), and function-pointer typedef.
 *
 *   clang -Ilib/miniaudio -Xclang -ast-dump=json -fsyntax-only tools/ast.c | php84 tools/extract.php > tools/api.json
 */

declare(strict_types=1);

const PUBLIC_END = 11568; // first line of the MINIAUDIO_IMPLEMENTATION section

$ast = json_decode(stream_get_contents(STDIN), true, 4096, JSON_THROW_ON_ERROR);

$file = null;
$line = 0;
$api = ['structs' => [], 'enums' => [], 'functions' => [], 'callbacks' => [], 'typedefs' => []];
$records = []; // id => record node

function track(array $node, ?string &$file, int &$line): void
{
    $loc = $node['loc'] ?? [];
    if (isset($loc['expansionLoc'])) {
        $loc = $loc['expansionLoc'];
    }
    if (isset($loc['file'])) {
        $file = $loc['file'];
    }
    if (isset($loc['line'])) {
        $line = $loc['line'];
    }
}

function fields(array $record): array
{
    $out = [];
    $anon = 0;
    foreach ($record['inner'] ?? [] as $child) {
        if ($child['kind'] === 'FieldDecl') {
            $out[] = ['name' => $child['name'] ?? ('__anon' . $anon++), 'type' => $child['type']['qualType'], 'desugared' => $child['type']['desugaredQualType'] ?? null];
        } elseif ($child['kind'] === 'RecordDecl' && ! isset($child['name']) && ($child['completeDefinition'] ?? false)) {
            // anonymous inline struct/union whose FieldDecl follows; kept for nested lookups
        }
    }

    return $out;
}

function nested(array $record): array
{
    $out = [];
    foreach ($record['inner'] ?? [] as $child) {
        if ($child['kind'] === 'RecordDecl' && ($child['completeDefinition'] ?? false)) {
            $out[$child['id']] = ['tag' => $child['tagUsed'], 'fields' => fields($child), 'nested' => nested($child)];
        }
    }

    return $out;
}

foreach ($ast['inner'] as $node) {
    track($node, $file, $line);
    if ($file === null || ! str_ends_with($file, 'miniaudio.h') || $line >= PUBLIC_END) {
        continue;
    }
    switch ($node['kind']) {
        case 'RecordDecl':
            if ($node['completeDefinition'] ?? false) {
                $records[$node['id']] = $node;
                if (isset($node['name'])) {
                    $api['structs'][$node['name']] = ['tag' => $node['tagUsed'], 'line' => $line, 'fields' => fields($node), 'nested' => nested($node)];
                }
            }
            break;
        case 'TypedefDecl':
            $type = $node['type']['qualType'];
            $name = $node['name'];
            if (preg_match('/\(\*\)/', $type)) {
                $api['callbacks'][$name] = $type;
            } else {
                $api['typedefs'][$name] = $type;
                // typedef struct { ... } name;
                $owned = $node['inner'][0]['ownedTagDecl']['id'] ?? ($node['inner'][0]['decl']['id'] ?? null);
                if ($owned !== null && isset($api['enums']['anon@' . $owned])) {
                    $api['enums'][$name] = $api['enums']['anon@' . $owned];
                    unset($api['enums']['anon@' . $owned]);
                }
                if ($owned !== null && isset($records[$owned]) && ! isset($records[$owned]['name'])) {
                    $r = $records[$owned];
                    $api['structs'][$name] = ['tag' => $r['tagUsed'], 'line' => $line, 'fields' => fields($r), 'nested' => nested($r)];
                }
            }
            break;
        case 'EnumDecl':
            $consts = [];
            foreach ($node['inner'] ?? [] as $c) {
                if ($c['kind'] === 'EnumConstantDecl') {
                    $consts[] = $c['name'];
                }
            }
            $api['enums'][$node['name'] ?? ('anon@' . $node['id'])] = $consts;
            break;
        case 'FunctionDecl':
            if (($node['storageClass'] ?? '') === 'static') {
                break;
            }
            $params = [];
            foreach ($node['inner'] ?? [] as $p) {
                if ($p['kind'] === 'ParmVarDecl') {
                    $params[] = ['name' => $p['name'] ?? '', 'type' => $p['type']['qualType']];
                }
            }
            $api['functions'][$node['name']] = ['line' => $line, 'return' => preg_replace('/\s*\(.*$/s', '', $node['type']['qualType']), 'params' => $params, 'variadic' => str_contains($node['type']['qualType'], '...')];
            break;
    }
}

// typedef enum { } name: attach anonymous enum names
foreach ($api['typedefs'] as $name => $type) {
    if (str_starts_with($type, 'enum ')) {
        $tag = substr($type, 5);
        if (isset($api['enums'][$tag]) && $tag !== $name) {
            $api['enums'][$name] = $api['enums'][$tag];
        }
    }
}

echo json_encode($api, JSON_PRETTY_PRINT | JSON_UNESCAPED_SLASHES), "\n";
