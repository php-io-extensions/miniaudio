<?php

declare(strict_types=1);

it('mixes sounds without a device and reads the output', function (): void {
    $e = ma_engine_nodevice(1, 8000);
    expect(ma_engine_get_sample_rate($e))->toBe(8000)
        ->and(ma_engine_get_channels($e))->toBe(1)
        ->and($e->sampleRate)->toBe(8000)
        ->and(ma_engine_get_device($e))->toBeNull()
        ->and(ma_engine_get_resource_manager($e))->toBeInstanceOf(ma_resource_manager::class);

    $path = ma_wav('engine.wav', array_fill(0, 64, 16384));
    $s = new ma_sound();
    expect(ma_sound_init_from_file($e, $path, MA_SOUND_FLAG_DECODE | MA_SOUND_FLAG_NO_SPATIALIZATION, null, null, $s))->toBe(MA_SUCCESS);
    ma_sound_set_volume($s, 0.5);
    expect(ma_sound_get_volume($s))->toBe(0.5)
        ->and(ma_sound_get_engine($s))->toBe($e)
        ->and(ma_sound_is_playing($s))->toBeFalse();
    ma_sound_start($s);
    ma_engine_read_pcm_frames($e, $o, 32, $read);
    $y = ma_floats($o);
    expect($read)->toBe(32)->and($y[31])->toBe(0.25);
    ma_sound_get_length_in_pcm_frames($s, $len);
    expect($len)->toBe(64);
    ma_sound_uninit($s);
});

it('groups sounds and calls the end callback', function (): void {
    $e = ma_engine_nodevice(1, 8000);
    $group = new ma_sound_group();
    expect(ma_sound_group_init($e, 0, null, $group))->toBe(MA_SUCCESS);
    ma_sound_group_set_volume($group, 0.5);

    $ref = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_f32, 1, str_repeat(pack('g', 1.0), 8), 8, $ref);
    $s = new ma_sound();
    expect(ma_sound_init_from_data_source($e, $ref, MA_SOUND_FLAG_NO_SPATIALIZATION, $group, $s))->toBe(MA_SUCCESS);
    $ended = [];
    ma_sound_set_end_callback($s, function (mixed $ud, ma_sound $snd) use (&$ended, $s): void { $ended[] = [$ud, $snd === $s]; }, 'done');
    ma_sound_start($s);
    ma_engine_read_pcm_frames($e, $o, 16, $read);
    expect(ma_floats($o)[7])->toBe(0.5)
        ->and(ma_sound_at_end($s))->toBeTrue()
        ->and($ended)->toBe([['done', true]]);
});

it('runs the engine onProcess hook on the device thread\'s mixed output', function (): void {
    // upstream calls onProcess from the engine's device callback, not from ma_engine_read_pcm_frames
    $cfg = ma_engine_config_init();
    $cfg->pContext = ma_null_context();
    $cfg->channels = 1;
    $cfg->sampleRate = 8000;
    $seen = [];
    $cfg->onProcess = function (mixed $ud, string &$frames, int $n) use (&$seen): void {
        $seen[] = [$ud, strlen($frames) === $n * 4];
    };
    $cfg->pProcessUserData = 'ud';
    $e = new ma_engine();
    expect(ma_engine_init($cfg, $e))->toBe(MA_SUCCESS)
        ->and(ma_engine_get_device($e))->toBeInstanceOf(ma_device::class);
    $t = microtime(true);
    while (microtime(true) - $t < 0.1) {
        usleep(1000);
    }
    ma_engine_stop($e);
    expect($seen)->not->toBeEmpty()->and($seen[0])->toBe(['ud', true]);
});

it('positions sounds and listeners in 3D', function (): void {
    $e = ma_engine_nodevice(2, 8000);
    ma_engine_listener_set_position($e, 0, 1.0, 2.0, 3.0);
    $p = ma_engine_listener_get_position($e, 0);
    expect([$p->x, $p->y, $p->z])->toBe([1.0, 2.0, 3.0])
        ->and(ma_engine_get_listener_count($e))->toBe(1);

    $ref = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_f32, 1, str_repeat(pack('g', 1.0), 8), 8, $ref);
    $s = new ma_sound();
    ma_sound_init_from_data_source($e, $ref, 0, null, $s);
    ma_sound_set_position($s, 5.0, 0.0, 0.0);
    ma_sound_set_attenuation_model($s, ma_attenuation_model_linear);
    ma_sound_set_pitch($s, 2.0);
    ma_sound_set_pan($s, -0.5);
    expect(ma_sound_get_position($s)->x)->toBe(5.0)
        ->and(ma_sound_get_attenuation_model($s))->toBe(ma_attenuation_model_linear)
        ->and(ma_sound_get_pitch($s))->toBe(2.0)
        ->and(ma_sound_get_pan($s))->toBe(-0.5);
});
