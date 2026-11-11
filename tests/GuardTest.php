<?php

declare(strict_types=1);

it('refuses uninitialized and doubly initialized handles', function (): void {
    expect(fn () => ma_waveform_read_pcm_frames(new ma_waveform(), $o, 1, $r))->toThrow(ValueError::class, 'must be an initialized ma_waveform');

    $w = new ma_waveform();
    ma_waveform_init(ma_waveform_config_init(ma_format_f32, 1, 48000, 0, 1.0, 1.0), $w);
    expect(fn () => ma_waveform_init(ma_waveform_config_init(ma_format_f32, 1, 48000, 0, 1.0, 1.0), $w))
        ->toThrow(ValueError::class, 'already initialized');
    ma_waveform_uninit($w);
    expect(ma_waveform_init(ma_waveform_config_init(ma_format_f32, 1, 48000, 0, 1.0, 1.0), $w))->toBe(MA_SUCCESS);
});

it('answers a null handle the way miniaudio does', function (): void {
    expect(ma_waveform_read_pcm_frames(null, $o, 4, $r))->toBe(MA_INVALID_ARGS)
        ->and(ma_engine_get_volume(null))->toBe(0.0);
});

it('never lets a frame count outrun a buffer', function (): void {
    $w = new ma_waveform();
    ma_waveform_init(ma_waveform_config_init(ma_format_f32, 2, 48000, 0, 1.0, 1.0), $w);
    expect(fn () => ma_waveform_read_pcm_frames($w, $o, PHP_INT_MAX, $r))->toThrow(ValueError::class, 'larger than memory');

    $bq = new ma_biquad();
    ma_biquad_init(ma_biquad_config_init(ma_format_f32, 2, 1, 0, 0, 1, 0, 0), null, $bq);
    expect(fn () => ma_biquad_process_pcm_frames($bq, $o, pack('g*', 1, 1), 2))->toThrow(ValueError::class, 'at least 16 bytes');
});

it('keeps miniaudio state read-only and handles uncloneable', function (): void {
    $e = ma_engine_nodevice();
    expect(fn () => $e->sampleRate = 1)->toThrow(Error::class, 'read-only')
        ->and(fn () => clone $e)->toThrow(Error::class, 'uncloneable')
        ->and(fn () => (new ma_engine())->sampleRate)->toThrow(Error::class, 'not initialized');
});

it('uninitializes dependents before what they point into', function (): void {
    $e = ma_engine_nodevice();
    $g = new ma_sound_group();
    ma_sound_group_init($e, 0, null, $g);
    ma_engine_uninit($e);
    expect(fn () => ma_sound_group_get_volume($g))->toThrow(ValueError::class);

    $e2 = ma_engine_nodevice();
    $g2 = new ma_sound_group();
    ma_sound_group_init($e2, 0, null, $g2);
    unset($e2);
    gc_collect_cycles();
    expect(ma_sound_group_get_volume($g2))->toBe(1.0)
        ->and(ma_sound_group_get_engine($g2))->toBeInstanceOf(ma_engine::class);
});

it('requires a handle to keep callbacks', function (): void {
    expect(fn () => ma_sound_set_end_callback(null, fn () => null, null))->toThrow(ValueError::class, 'keep callbacks');
});
