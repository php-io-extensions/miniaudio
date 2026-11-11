<?php

declare(strict_types=1);

it('enumerates the null backend', function (): void {
    $ctx = ma_null_context();
    expect(ma_context_is_loopback_supported($ctx))->toBeFalse();
    ma_context_get_devices($ctx, $play, $nplay, $cap, $ncap);
    expect($nplay)->toBe(1)->and($play[0])->toBeInstanceOf(ma_device_info::class)->and($play[0]->name)->toBe('NULL Playback Device');

    $seen = [];
    $r = ma_context_enumerate_devices($ctx, function (ma_context $c, int $type, ma_device_info $info, mixed $ud) use (&$seen, $ctx): bool {
        $seen[] = [$c === $ctx, $type, $info->name, $ud];
        return true;
    }, 'ud');
    expect($r)->toBe(MA_SUCCESS)->and($seen[0])->toBe([true, ma_device_type_playback, 'NULL Playback Device', 'ud']);

    $info = new ma_device_info();
    expect(ma_context_get_device_info($ctx, ma_device_type_playback, $play[0]->id, $info))->toBe(MA_SUCCESS)
        ->and($info->name)->toBe('NULL Playback Device');
    ma_context_uninit($ctx);
});

it('runs a device whose data callback is served from a PHP loop', function (): void {
    $ctx = ma_null_context();
    $cfg = ma_device_config_init(ma_device_type_playback);
    $cfg->playback->format = ma_format_f32;
    $cfg->playback->channels = 2;
    $cfg->sampleRate = 48000;
    $frames = 0;
    $notes = [];
    $cfg->dataCallback = function (ma_device $d, ?string &$out, ?string $in, int $n) use (&$frames): void {
        $frames += $n;
        $out = str_repeat(pack('g', 0.1), $n * 2);
    };
    $cfg->notificationCallback = function (ma_device_notification $n) use (&$notes): void { $notes[] = $n->type; };
    $dev = new ma_device();
    expect(ma_device_init($ctx, $cfg, $dev))->toBe(MA_SUCCESS)
        ->and($dev->playback['format'])->toBe(ma_format_f32)
        ->and($dev->playback['channels'])->toBe(2)
        ->and($dev->sampleRate)->toBe(48000)
        ->and($dev->pContext)->toBe($ctx)
        ->and(ma_device_get_context($dev))->toBe($ctx);

    expect(ma_device_start($dev))->toBe(MA_SUCCESS)->and(ma_device_is_started($dev))->toBeTrue();
    $t = microtime(true);
    while (microtime(true) - $t < 0.25) {
        usleep(1000);
    }
    expect(ma_device_stop($dev))->toBe(MA_SUCCESS)
        ->and(ma_device_get_state($dev))->toBe(ma_device_state_stopped)
        ->and($frames)->toBeGreaterThan(4800)
        ->and($notes)->toContain(ma_device_notification_type_started)
        ->and($notes)->toContain(ma_device_notification_type_stopped);

    ma_device_set_master_volume($dev, 0.5);
    ma_device_get_master_volume($dev, $vol);
    expect($vol)->toBe(0.5);
    ma_device_get_name($dev, ma_device_type_playback, $name, 256, $len);
    expect($name)->toBe('NULL Playback Device')->and($len)->toBe(strlen($name));
    ma_device_uninit($dev);
    ma_context_uninit($ctx);
});
