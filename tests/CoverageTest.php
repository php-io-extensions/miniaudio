<?php

declare(strict_types=1);

/** @return list<string> names matched by $pattern across every committed stub */
function stubNames(string $pattern): array
{
    preg_match_all($pattern, implode("\n", array_map('file_get_contents', glob(__DIR__ . '/../stubs/*.stub.php'))), $m);
    $names = array_values(array_unique($m[1]));
    sort($names);

    return $names;
}

it('binds every public miniaudio function except the documented ones', function (): void {
    $expected = stubNames('/^function (ma_\w+)\(/m');
    $bound = get_extension_funcs('miniaudio');
    sort($bound);

    expect($expected)->toHaveCount(924)
        ->and($bound)->toBe($expected);

    foreach (['ma_malloc', 'ma_calloc', 'ma_realloc', 'ma_free', 'ma_aligned_malloc', 'ma_aligned_free', 'ma_log_postv'] as $notBound) {
        expect(function_exists($notBound))->toBeFalse();
    }
});

it('defines every enum constant', function (): void {
    $consts = stubNames('/^const (\w+) =/m');
    $missing = array_values(array_filter($consts, fn (string $c): bool => ! defined($c)));

    expect($consts)->toHaveCount(391)
        ->and($missing)->toBe([])
        ->and(MA_SUCCESS)->toBe(0)
        ->and(ma_format_f32)->toBe(5)
        ->and(MA_MAX_CHANNELS)->toBe(254);
});
