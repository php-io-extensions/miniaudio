<?php

declare(strict_types=1);

it('describes results and formats', function (): void {
    expect(ma_result_description(MA_SUCCESS))->toBe('No error')
        ->and(ma_get_bytes_per_sample(ma_format_s24))->toBe(3)
        ->and(ma_get_format_name(ma_format_s16))->toBe('16-bit Signed Integer')
        ->and(ma_get_backend_name(ma_backend_null))->toBe('Null')
        ->and(ma_is_backend_enabled(ma_backend_null))->toBeTrue();

    ma_get_enabled_backends($backends, 32, $count);
    expect($count)->toBe(count($backends))->and($backends)->toContain(ma_backend_null);
});

it('converts samples between formats', function (): void {
    ma_pcm_s16_to_f32($out, pack('s*', 0, 16384, -32768), 3, ma_dither_mode_none);
    expect(ma_floats($out))->toBe([0.0, 0.5, -1.0]);

    ma_pcm_convert($u8, ma_format_u8, pack('s*', 0, 32767), ma_format_s16, 2, ma_dither_mode_none);
    expect(array_values(unpack('C*', $u8)))->toBe([128, 255]);

    ma_convert_pcm_frames_format($s32, ma_format_s32, pack('g*', 0.5, -0.5), ma_format_f32, 1, 2, ma_dither_mode_none);
    expect(array_values(unpack('l*', $s32)))->toBe([1073741823, -1073741823]);

    expect(fn () => ma_pcm_s16_to_f32($o, 'x', 3, ma_dither_mode_none))->toThrow(ValueError::class, 'at least 6 bytes');
});

it('interleaves, offsets, copies and silences frames', function (): void {
    ma_deinterleave_pcm_frames(ma_format_s16, 2, 2, pack('s*', 1, 2, 3, 4), $planes);
    expect(array_map(fn ($p) => array_values(unpack('s*', $p)), $planes))->toBe([[1, 3], [2, 4]]);
    ma_interleave_pcm_frames(ma_format_s16, 2, 2, $planes, $inter);
    expect(array_values(unpack('s*', $inter)))->toBe([1, 2, 3, 4])
        ->and(array_values(unpack('s*', ma_offset_pcm_frames_ptr($inter, 1, ma_format_s16, 2))))->toBe([3, 4]);

    ma_copy_pcm_frames($dst, pack('s*', 9, 8), 1, ma_format_s16, 2);
    expect(array_values(unpack('s*', $dst)))->toBe([9, 8]);
    $buf = pack('s*', 5, 6);
    ma_silence_pcm_frames($buf, 1, ma_format_s16, 2);
    expect($buf)->toBe(pack('s*', 0, 0));
});

it('applies volume, clips and mixes', function (): void {
    $f = pack('g*', 0.5, -0.5);
    ma_apply_volume_factor_f32($f, 2, 0.5);
    expect(ma_floats($f))->toBe([0.25, -0.25]);

    ma_copy_and_apply_volume_factor_s16($o, pack('s*', 1000, -1000), 2, 2.0);
    expect(array_values(unpack('s*', $o)))->toBe([2000, -2000]);

    ma_clip_samples_s16($c, pack('l*', 40000, -40000, 5), 3);
    expect(array_values(unpack('s*', $c)))->toBe([32767, -32768, 5]);

    $dst = pack('g*', 0.25, 0.25);
    ma_mix_pcm_frames_f32($dst, pack('g*', 0.5, 0.5), 1, 2, 1.0);
    expect(ma_floats($dst))->toBe([0.75, 0.75]);

    expect(ma_volume_linear_to_db(1.0))->toBe(0.0)
        ->and(round(ma_volume_db_to_linear(-6.0), 3))->toBe(0.501);
});

it('builds and inspects channel maps', function (): void {
    ma_channel_map_init_standard(ma_standard_channel_map_default, $map, 2, 2);
    expect($map)->toBe([MA_CHANNEL_FRONT_LEFT, MA_CHANNEL_FRONT_RIGHT])
        ->and(ma_channel_map_is_valid($map, 2))->toBeTrue()
        ->and(ma_channel_map_contains_channel_position(2, $map, MA_CHANNEL_FRONT_RIGHT))->toBeTrue()
        ->and(ma_channel_map_find_channel_position(2, $map, MA_CHANNEL_FRONT_RIGHT, $index))->toBeTrue()
        ->and($index)->toBe(1)
        ->and(ma_channel_map_get_channel($map, 2, 0))->toBe(MA_CHANNEL_FRONT_LEFT);
    ma_channel_map_to_string($map, 2, $s, 128);
    expect($s)->toBe('CHANNEL_FRONT_LEFT CHANNEL_FRONT_RIGHT');
    ma_channel_map_init_blank($blank, 3);
    expect(ma_channel_map_is_blank($blank, 3))->toBeTrue();
});

it('moves bytes through ring buffers with acquire and commit', function (): void {
    $rb = new ma_rb();
    expect(ma_rb_init(16, null, null, $rb))->toBe(MA_SUCCESS);
    $n = 4;
    expect(ma_rb_acquire_write($rb, $n, $w))->toBe(MA_SUCCESS)->and($n)->toBe(4);
    $w = 'abcd';
    ma_rb_commit_write($rb, 4);
    expect(ma_rb_available_read($rb))->toBe(4);
    $n = 16;
    ma_rb_acquire_read($rb, $n, $r);
    expect($r)->toBe('abcd');
    ma_rb_commit_read($rb, $n);
    expect(ma_rb_available_read($rb))->toBe(0);

    $pcm = new ma_pcm_rb();
    expect(ma_pcm_rb_init(ma_format_s16, 2, 8, str_repeat("\0", 32), null, $pcm))->toBe(MA_SUCCESS);
    $frames = 2;
    ma_pcm_rb_acquire_write($pcm, $frames, $wb);
    $wb = pack('s*', 1, 2, 3, 4);
    ma_pcm_rb_commit_write($pcm, 2);
    $frames = 8;
    ma_pcm_rb_acquire_read($pcm, $frames, $rbuf);
    expect($frames)->toBe(2)->and(array_values(unpack('s*', $rbuf)))->toBe([1, 2, 3, 4])
        ->and(ma_pcm_rb_get_format($pcm))->toBe(ma_format_s16)
        ->and($pcm->channels)->toBe(2);
    ma_pcm_rb_commit_read($pcm, 2);
});

it('logs through PHP callbacks and formats like sprintf', function (): void {
    $log = new ma_log();
    ma_log_init(null, $log);
    $seen = [];
    $cb = ma_log_callback_init(function ($ud, int $level, string $msg) use (&$seen): void { $seen[] = [$ud, $level, $msg]; }, 'tag');
    expect(ma_log_register_callback($log, $cb))->toBe(MA_SUCCESS);
    ma_log_postf($log, MA_LOG_LEVEL_INFO, '%s=%d', 'x', 3);
    ma_log_post($log, MA_LOG_LEVEL_WARNING, 'plain');
    expect(ma_log_unregister_callback($log, $cb))->toBe(MA_SUCCESS);
    ma_log_post($log, MA_LOG_LEVEL_WARNING, 'after');

    expect($seen)->toBe([['tag', MA_LOG_LEVEL_INFO, 'x=3'], ['tag', MA_LOG_LEVEL_WARNING, 'plain']]);
});

it('drives events, semaphores, mutexes, spinlocks and fences', function (): void {
    $e = new ma_event();
    ma_event_init($e);
    expect(ma_event_signal($e))->toBe(MA_SUCCESS)->and(ma_event_wait($e))->toBe(MA_SUCCESS);
    ma_event_uninit($e);

    $s = new ma_semaphore();
    ma_semaphore_init(1, $s);
    expect(ma_semaphore_wait($s))->toBe(MA_SUCCESS)->and(ma_semaphore_release($s))->toBe(MA_SUCCESS);
    ma_semaphore_uninit($s);

    $m = new ma_mutex();
    ma_mutex_init($m);
    ma_mutex_lock($m);
    ma_mutex_unlock($m);
    ma_mutex_uninit($m);

    $l = new ma_spinlock();
    expect(ma_spinlock_lock($l))->toBe(MA_SUCCESS)->and(ma_spinlock_unlock($l))->toBe(MA_SUCCESS);

    $f = new ma_fence();
    ma_fence_init($f);
    ma_fence_acquire($f);
    ma_fence_release($f);
    expect(ma_fence_wait($f))->toBe(MA_SUCCESS);
    ma_fence_uninit($f);
});
