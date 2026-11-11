<?php

declare(strict_types=1);

function constants_stub(Model $m): string
{
    $out = "<?php\n\n/** @generate-class-entries */\n\n";
    $seen = [];
    foreach ($m->enums as $enum => $consts) {
        foreach ($consts as $c) {
            if (isset($seen[$c])) {
                continue;
            }
            $seen[$c] = true;
            $out .= "/**\n * @var int\n * @cvalue $c\n */\nconst $c = UNKNOWN;\n";
        }
    }
    foreach ($m->defines as $name => $value) {
        if (isset($seen[$name]) || str_starts_with($name, 'MA_VERSION_')) {
            continue;
        }
        $seen[$name] = true;
        $type = preg_match('/^"/', $value) ? 'string' : (preg_match('/^[\d.]+f$|^\d+\.\d+$/', $value) ? 'float' : 'int');
        $out .= "/**\n * @var $type\n * @cvalue $name\n */\nconst $name = UNKNOWN;\n";
    }

    return $out;
}
