<?php

declare(strict_types=1);

$impulse = pack('g*', 1.0, 0.0, 0.0, 0.0);

it('runs a biquad with known coefficients', function () use ($impulse): void {
    // y[n] = 0.5 x[n] + 0.25 x[n-1]
    $bq = new ma_biquad();
    expect(ma_biquad_init(ma_biquad_config_init(ma_format_f32, 1, 0.5, 0.25, 0.0, 1.0, 0.0, 0.0), null, $bq))->toBe(MA_SUCCESS);
    ma_biquad_process_pcm_frames($bq, $out, $impulse, 4);
    expect(ma_floats($out))->toBe([0.5, 0.25, 0.0, 0.0])
        ->and(ma_biquad_get_latency($bq))->toBe(2)
        ->and($bq->channels)->toBe(1);
    ma_biquad_uninit($bq, null);
});

it('initializes filters on a caller heap sized by *_get_heap_size', function () use ($impulse): void {
    $cfg = ma_lpf_config_init(ma_format_f32, 1, 48000, 1000.0, 4);
    expect(ma_lpf_get_heap_size($cfg, $size))->toBe(MA_SUCCESS)->and($size)->toBeGreaterThan(0);
    $lpf = new ma_lpf();
    expect(fn () => ma_lpf_init_preallocated($cfg, 'x', $lpf))->toThrow(ValueError::class, 'at least');
    expect(ma_lpf_init_preallocated($cfg, str_repeat("\0", $size), $lpf))->toBe(MA_SUCCESS);
    ma_lpf_process_pcm_frames($lpf, $out, $impulse, 4);
    $y = array_values(unpack('g*', $out));
    expect($y[0])->toBeGreaterThan(0.0)->and($y[0])->toBeLessThan(0.01);
    ma_lpf_uninit($lpf, null);
});

it('low-passes, high-passes and band-passes a constant signal', function (): void {
    $dc = pack('g*', ...array_fill(0, 2048, 1.0));

    $lpf = new ma_lpf1();
    ma_lpf1_init(ma_lpf1_config_init(ma_format_f32, 1, 48000, 1000.0), null, $lpf);
    ma_lpf1_process_pcm_frames($lpf, $o, $dc, 2048);
    expect(round(ma_floats($o)[2047], 3))->toBe(1.0);

    $hpf = new ma_hpf2();
    ma_hpf2_init(ma_hpf2_config_init(ma_format_f32, 1, 48000, 1000.0, 0.707), null, $hpf);
    ma_hpf2_process_pcm_frames($hpf, $o, $dc, 2048);
    expect(abs(ma_floats($o)[2047]))->toBeLessThan(0.001);

    foreach (['ma_bpf2' => ma_bpf2_config_init(ma_format_f32, 1, 48000, 1000.0, 0.707),
        'ma_notch2' => ma_notch2_config_init(ma_format_f32, 1, 48000, 0.707, 1000.0),
        'ma_peak2' => ma_peak2_config_init(ma_format_f32, 1, 48000, 6.0, 0.707, 1000.0),
        'ma_loshelf2' => ma_loshelf2_config_init(ma_format_f32, 1, 48000, 6.0, 1.0, 1000.0),
        'ma_hishelf2' => ma_hishelf2_config_init(ma_format_f32, 1, 48000, 6.0, 1.0, 1000.0)] as $t => $cfg) {
        $f = new $t();
        expect(("{$t}_init")($cfg, null, $f))->toBe(MA_SUCCESS);
        expect(("{$t}_process_pcm_frames")($f, $o, $dc, 2048))->toBe(MA_SUCCESS)->and(strlen($o))->toBe(8192);
        ("{$t}_uninit")($f, null);
    }
});

it('delays, fades, gains and pans', function (): void {
    $d = new ma_delay();
    ma_delay_init(ma_delay_config_init(1, 48000, 2, 0.0), null, $d);
    ma_delay_process_pcm_frames($d, $o, pack('g*', 1, 0, 0, 0), 4);
    expect(ma_floats($o))->toBe([0.0, 0.0, 1.0, 0.0]);
    ma_delay_uninit($d, null);

    $fader = new ma_fader();
    ma_fader_init(ma_fader_config_init(ma_format_f32, 1, 48000), $fader);
    ma_fader_set_fade($fader, 0.0, 1.0, 4);
    ma_fader_process_pcm_frames($fader, $o, pack('g*', 1, 1, 1, 1), 4);
    expect(ma_floats($o))->toBe([0.0, 0.25, 0.5, 0.75])
        ->and(ma_fader_get_current_volume($fader))->toBe(1.0);

    $g = new ma_gainer();
    ma_gainer_init(ma_gainer_config_init(1, 0), null, $g);
    ma_gainer_set_gain($g, 0.5);
    ma_gainer_process_pcm_frames($g, $o, pack('g*', 1, 1), 2);
    expect(ma_floats($o))->toBe([0.5, 0.5]);
    ma_gainer_uninit($g, null);

    $p = new ma_panner();
    ma_panner_init(ma_panner_config_init(ma_format_f32, 2), $p);
    ma_panner_set_pan($p, 1.0);
    ma_panner_process_pcm_frames($p, $o, pack('g*', 1, 1), 1);
    expect(ma_floats($o))->toBe([0.0, 1.0])
        ->and(ma_panner_get_pan($p))->toBe(1.0);
});

it('spatializes against a listener', function (): void {
    $l = new ma_spatializer_listener();
    expect(ma_spatializer_listener_init(ma_spatializer_listener_config_init(2), null, $l))->toBe(MA_SUCCESS);
    ma_spatializer_listener_set_position($l, 0.0, 0.0, 0.0);
    // upstream defaults a stereo listener to side left/right
    expect(ma_spatializer_listener_get_channel_map($l))->toBe([MA_CHANNEL_SIDE_LEFT, MA_CHANNEL_SIDE_RIGHT]);

    $s = new ma_spatializer();
    ma_spatializer_init(ma_spatializer_config_init(1, 2), null, $s);
    ma_spatializer_set_position($s, 10.0, 0.0, 0.0);
    $pos = ma_spatializer_get_position($s);
    expect([$pos->x, $pos->y, $pos->z])->toBe([10.0, 0.0, 0.0]);
    expect(ma_spatializer_process_pcm_frames($s, $l, $o, pack('g*', 1, 1, 1, 1), 4))->toBe(MA_SUCCESS);
    $y = ma_floats($o);
    expect(count($y))->toBe(8)->and($y[7])->toBeGreaterThan($y[6]);

    ma_spatializer_uninit($s, null);
    ma_spatializer_listener_uninit($l, null);
});
