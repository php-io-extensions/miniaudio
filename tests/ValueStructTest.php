<?php

declare(strict_types=1);

it('builds config structs with the C aggregate initializer and *_config_init', function (): void {
    $c = new ma_device_config();
    expect($c->deviceType)->toBe(0)
        ->and($c->playback)->toBeInstanceOf(ma_device_config_playback::class)
        ->and($c->resampling)->toBeInstanceOf(ma_resampler_config::class)
        ->and($c->dataCallback)->toBeNull();

    $named = new ma_decoder_config(format: ma_format_s16, channels: 2, sampleRate: 22050);
    expect([$named->format, $named->channels, $named->sampleRate])->toBe([ma_format_s16, 2, 22050]);

    $w = ma_waveform_config_init(ma_format_f32, 2, 44100, ma_waveform_type_square, 0.25, 100.0);
    expect([$w->format, $w->channels, $w->sampleRate, $w->type, $w->amplitude, $w->frequency])
        ->toBe([ma_format_f32, 2, 44100, ma_waveform_type_square, 0.25, 100.0]);
});

it('range-checks narrow integers before miniaudio sees them', function (): void {
    expect(fn () => ma_waveform_config_init(ma_format_f32, -1, 44100, 0, 1.0, 1.0))->toThrow(ValueError::class)
        ->and(fn () => ma_waveform_config_init(ma_format_f32, 1, 1 << 33, 0, 1.0, 1.0))->toThrow(ValueError::class);

    $w = new ma_waveform();
    $cfg = ma_waveform_config_init(ma_format_f32, 1, 48000, 0, 1.0, 1.0);
    $cfg->channels = 1 << 40;
    expect(fn () => ma_waveform_init($cfg, $w))->toThrow(ValueError::class, 'ma_waveform_config::$channels');
});


it('rejects strings too long for a char array', function (): void {
    $ctx = ma_null_context();
    $info = new ma_device_info();
    $id = new ma_device_id();
    $id->coreaudio = str_repeat('x', 256);
    expect(fn () => ma_context_get_device_info($ctx, ma_device_type_playback, $id, $info))->toThrow(ValueError::class, 'shorter than 256 bytes');
});

it('keeps a typedef of a struct as its own class with the same fields', function (): void {
    $g = ma_sound_group_config_init();
    $s = ma_sound_config_init();
    expect($g)->toBeInstanceOf(ma_sound_group_config::class)
        ->and(array_keys(get_object_vars($g)))->toBe(array_keys(get_object_vars($s)));
});

it('accepts only null allocation callbacks', function (): void {
    $alloc = new ma_allocation_callbacks();
    $q = new ma_job_queue();
    expect(ma_job_queue_init(ma_job_queue_config_init(0, 4), $alloc, $q))->toBe(MA_SUCCESS);
    ma_job_queue_uninit($q, null);

    $alloc->onMalloc = fn () => null;
    expect(fn () => ma_job_queue_init(ma_job_queue_config_init(0, 4), $alloc, new ma_job_queue()))->toThrow(ValueError::class, 'no allocator');
});
