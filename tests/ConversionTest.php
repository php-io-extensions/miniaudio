<?php

declare(strict_types=1);

it('resamples linearly with by-reference frame counts', function (): void {
    $r = new ma_linear_resampler();
    expect(ma_linear_resampler_init(ma_linear_resampler_config_init(ma_format_f32, 1, 1, 2), null, $r))->toBe(MA_SUCCESS);
    $in = 4;
    $out = 16;
    expect(ma_linear_resampler_process_pcm_frames($r, pack('g*', 1, 1, 1, 1), $in, $o, $out))->toBe(MA_SUCCESS)
        ->and($in)->toBe(4)
        ->and($out)->toBeGreaterThanOrEqual(6)
        ->and(strlen($o))->toBe($out * 4);
    ma_linear_resampler_get_expected_output_frame_count($r, 100, $expected);
    expect($expected)->toBeGreaterThanOrEqual(199);
    ma_linear_resampler_uninit($r, null);
});

it('converts channels and whole data formats', function (): void {
    $cc = new ma_channel_converter();
    expect(ma_channel_converter_init(ma_channel_converter_config_init(ma_format_f32, 1, null, 2, null, ma_channel_mix_mode_default), null, $cc))->toBe(MA_SUCCESS);
    ma_channel_converter_process_pcm_frames($cc, $o, pack('g*', 0.5), 1);
    expect(ma_floats($o))->toBe([0.5, 0.5]);
    ma_channel_converter_get_output_channel_map($cc, $map, 2);
    expect($map)->toBe([MA_CHANNEL_FRONT_LEFT, MA_CHANNEL_FRONT_RIGHT]);
    ma_channel_converter_uninit($cc, null);

    $dc = new ma_data_converter();
    expect(ma_data_converter_init(ma_data_converter_config_init(ma_format_s16, ma_format_f32, 1, 2, 48000, 48000), null, $dc))->toBe(MA_SUCCESS);
    $in = 2;
    $out = 2;
    ma_data_converter_process_pcm_frames($dc, pack('s*', 16384, -16384), $in, $o, $out);
    expect($out)->toBe(2)->and(ma_floats($o))->toBe([0.5, 0.5, -0.5, -0.5]);
    ma_data_converter_uninit($dc, null);

    $frames = ma_convert_frames($o, 4, ma_format_s16, 1, 16000, pack('s*', 100, 100), 2, ma_format_s16, 1, 8000);
    expect($frames)->toBeGreaterThan(0)->and(strlen($o))->toBe(8);
});
