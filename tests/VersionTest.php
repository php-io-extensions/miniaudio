<?php

declare(strict_types=1);

it('reports miniaudio 0.11.26', function (): void {
    ma_version($major, $minor, $revision);

    expect([$major, $minor, $revision])->toBe([0, 11, 26])
        ->and(ma_version_string())->toBe('0.11.26')
        ->and(MA_VERSION_MAJOR)->toBe(0)
        ->and(MA_VERSION_MINOR)->toBe(11)
        ->and(MA_VERSION_REVISION)->toBe(26)
        ->and(MA_VERSION_STRING)->toBe('0.11.26');
});

it('prints the extension version, the miniaudio version, and the upstream commit', function (): void {
    ob_start();
    phpinfo(INFO_MODULES);
    $info = ob_get_clean();

    expect($info)->toContain('0.11.0')
        ->and($info)->toContain('0.11.26')
        ->and($info)->toContain('877ea4a7c2601c7b0f2a44e83dfac42e6470fea6');
});
