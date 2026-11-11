<?php

declare(strict_types=1);

it('binds every public miniaudio function except the documented ones', function (): void {
    $api = json_decode(file_get_contents(__DIR__ . '/../tools/api.json'), true);
    $notBound = ['ma_malloc', 'ma_calloc', 'ma_realloc', 'ma_free', 'ma_aligned_malloc', 'ma_aligned_free', 'ma_log_postv'];
    $expected = array_values(array_diff(array_keys($api['functions']), $notBound));
    $bound = get_extension_funcs('miniaudio');
    sort($expected);
    sort($bound);

    expect(count($expected))->toBe(924)
        ->and(array_values(array_diff($expected, $bound)))->toBe([])
        ->and(array_values(array_diff($bound, $expected)))->toBe([]);
});

it('defines every enum constant', function (): void {
    $api = json_decode(file_get_contents(__DIR__ . '/../tools/api.json'), true);
    $missing = [];
    foreach ($api['enums'] as $consts) {
        foreach ($consts as $c) {
            if (! defined($c)) {
                $missing[] = $c;
            }
        }
    }

    expect($missing)->toBe([])
        ->and(MA_SUCCESS)->toBe(0)
        ->and(ma_format_f32)->toBe(5)
        ->and(MA_MAX_CHANNELS)->toBe(254);
});
