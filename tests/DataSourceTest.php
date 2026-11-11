<?php

declare(strict_types=1);

it('generates a sine at known sample points', function (): void {
    $w = new ma_waveform();
    expect(ma_waveform_init(ma_waveform_config_init(ma_format_f32, 1, 48000, ma_waveform_type_sine, 1.0, 12000.0), $w))->toBe(MA_SUCCESS);
    expect(ma_waveform_read_pcm_frames($w, $o, 4, $read))->toBe(MA_SUCCESS)
        ->and($read)->toBe(4)
        ->and(ma_floats($o))->toBe([0.0, 1.0, 0.0, -1.0]);
    ma_waveform_set_amplitude($w, 0.5);
    ma_waveform_seek_to_pcm_frame($w, 1);
    ma_waveform_read_pcm_frames($w, $o, 1, $read);
    expect(ma_floats($o))->toBe([0.5]);
    ma_waveform_uninit($w);
});

it('reads any data source through ma_data_source_*', function (): void {
    $w = new ma_waveform();
    ma_waveform_init(ma_waveform_config_init(ma_format_s16, 2, 22050, ma_waveform_type_square, 0.5, 10.0), $w);
    expect(ma_data_source_get_data_format($w, $fmt, $ch, $rate, $map, 8))->toBe(MA_SUCCESS)
        ->and([$fmt, $ch, $rate])->toBe([ma_format_s16, 2, 22050])
        ->and($map)->toBe([MA_CHANNEL_FRONT_LEFT, MA_CHANNEL_FRONT_RIGHT]);
    ma_data_source_read_pcm_frames($w, $o, 3, $read);
    expect($read)->toBe(3)->and(strlen($o))->toBe(12);
});

it('makes deterministic noise and pulse waves', function (): void {
    $a = new ma_noise();
    $b = new ma_noise();
    ma_noise_init(ma_noise_config_init(ma_format_f32, 1, ma_noise_type_white, 42, 1.0), null, $a);
    ma_noise_init(ma_noise_config_init(ma_format_f32, 1, ma_noise_type_white, 42, 1.0), null, $b);
    ma_noise_read_pcm_frames($a, $x, 8, $n);
    ma_noise_read_pcm_frames($b, $y, 8, $n);
    expect($x)->toBe($y)->and($n)->toBe(8);
    ma_noise_uninit($a, null);
    ma_noise_uninit($b, null);

    $p = new ma_pulsewave();
    ma_pulsewave_init(ma_pulsewave_config_init(ma_format_f32, 1, 8, 0.25, 1.0, 1.0), $p);
    ma_pulsewave_read_pcm_frames($p, $o, 8, $n);
    expect(ma_floats($o))->toBe([1.0, 1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0]);
});

it('plays PHP strings through audio buffers and refs', function (): void {
    $ref = new ma_audio_buffer_ref();
    expect(ma_audio_buffer_ref_init(ma_format_s16, 1, pack('s*', 1, 2, 3), 3, $ref))->toBe(MA_SUCCESS);
    expect(ma_audio_buffer_ref_read_pcm_frames($ref, $o, 2, false))->toBe(2)
        ->and(array_values(unpack('s*', $o)))->toBe([1, 2]);
    $n = 8;
    ma_audio_buffer_ref_map($ref, $mapped, $n);
    expect($n)->toBe(1)->and(array_values(unpack('s*', $mapped)))->toBe([3]);
    ma_audio_buffer_ref_unmap($ref, 1);
    expect(ma_audio_buffer_ref_at_end($ref))->toBeTrue();

    $buf = new ma_audio_buffer();
    expect(ma_audio_buffer_init_copy(ma_audio_buffer_config_init(ma_format_s16, 1, 3, pack('s*', 7, 8, 9), null), $buf))->toBe(MA_SUCCESS);
    expect(ma_audio_buffer_read_pcm_frames($buf, $o, 3, false))->toBe(3)
        ->and(array_values(unpack('s*', $o)))->toBe([7, 8, 9])
        ->and(ma_audio_buffer_get_length_in_pcm_frames($buf, $len))->toBe(MA_SUCCESS)
        ->and($len)->toBe(3);
    ma_audio_buffer_uninit($buf);

    expect(fn () => ma_audio_buffer_init(ma_audio_buffer_config_init(ma_format_s16, 1, 300, 'short', null), new ma_audio_buffer()))
        ->toThrow(ValueError::class);
});

it('grows a paged audio buffer', function (): void {
    $data = new ma_paged_audio_buffer_data();
    ma_paged_audio_buffer_data_init(ma_format_s16, 1, $data);
    expect(ma_paged_audio_buffer_data_allocate_and_append_page($data, 2, pack('s*', 4, 5), null))->toBe(MA_SUCCESS);
    expect(ma_paged_audio_buffer_data_allocate_page($data, 1, pack('s*', 6), null, $page))->toBe(MA_SUCCESS);
    expect(ma_paged_audio_buffer_data_append_page($data, $page))->toBe(MA_SUCCESS);
    ma_paged_audio_buffer_data_get_length_in_pcm_frames($data, $len);
    expect($len)->toBe(3);

    $pb = new ma_paged_audio_buffer();
    ma_paged_audio_buffer_init(ma_paged_audio_buffer_config_init($data), $pb);
    ma_paged_audio_buffer_read_pcm_frames($pb, $o, 3, $read);
    expect($read)->toBe(3)->and(array_values(unpack('s*', $o)))->toBe([4, 5, 6]);
    ma_paged_audio_buffer_uninit($pb);
    ma_paged_audio_buffer_data_uninit($data, null);
});

it('encodes WAV and decodes it back from file, memory, VFS and PHP streams', function (): void {
    $path = ma_wav('roundtrip.wav', [1, -2, 300, -400]);

    $d = new ma_decoder();
    expect(ma_decoder_init_file($path, null, $d))->toBe(MA_SUCCESS)
        ->and([$d->outputFormat, $d->outputChannels, $d->outputSampleRate])->toBe([ma_format_s16, 1, 8000]);
    ma_decoder_get_length_in_pcm_frames($d, $len);
    ma_decoder_read_pcm_frames($d, $o, 10, $read);
    expect($len)->toBe(4)->and($read)->toBe(4)->and(array_values(unpack('s*', $o)))->toBe([1, -2, 300, -400]);
    ma_decoder_seek_to_pcm_frame($d, 2);
    ma_decoder_get_cursor_in_pcm_frames($d, $cursor);
    expect($cursor)->toBe(2);
    ma_decoder_uninit($d);

    $bytes = file_get_contents($path);
    $m = new ma_decoder();
    expect(ma_decoder_init_memory($bytes, strlen($bytes), ma_decoder_config_init(ma_format_f32, 1, 8000), $m))->toBe(MA_SUCCESS);
    ma_decoder_read_pcm_frames($m, $f, 1, $read);
    expect(ma_floats($f))->toBe([round(1 / 32768, 4)]);
    ma_decoder_uninit($m);

    $cfg = ma_decoder_config_init(ma_format_s16, 1, 8000);
    expect(ma_decode_file($path, $cfg, $frames, $pcm))->toBe(MA_SUCCESS)
        ->and($frames)->toBe(4)->and(array_values(unpack('s*', $pcm)))->toBe([1, -2, 300, -400]);
    expect(ma_decode_memory($bytes, strlen($bytes), $cfg, $frames, $pcm))->toBe(MA_SUCCESS)->and($frames)->toBe(4);

    $vfs = new ma_default_vfs();
    ma_default_vfs_init($vfs, null);
    $v = new ma_decoder();
    expect(ma_decoder_init_vfs($vfs, $path, null, $v))->toBe(MA_SUCCESS);
    ma_decoder_uninit($v);

    $pos = 0;
    $s = new ma_decoder();
    $read = function (ma_decoder $dec, ?string &$buf, int $n, ?int &$got) use ($bytes, &$pos): int {
        $buf = substr($bytes, $pos, $n);
        $got = strlen($buf);
        $pos += $got;
        return $got ? MA_SUCCESS : MA_AT_END;
    };
    $seek = function (ma_decoder $dec, int $off, int $origin) use (&$pos, $bytes): int {
        $pos = match ($origin) { ma_seek_origin_start => $off, ma_seek_origin_current => $pos + $off, default => strlen($bytes) + $off };
        return MA_SUCCESS;
    };
    expect(ma_decoder_init($read, $seek, 'ud', null, $s))->toBe(MA_SUCCESS);
    ma_decoder_read_pcm_frames($s, $o, 4, $n);
    expect(array_values(unpack('s*', $o)))->toBe([1, -2, 300, -400]);
    ma_decoder_uninit($s);
});

it('writes WAV through PHP write and seek callbacks', function (): void {
    $out = '';
    $at = 0;
    $write = function (ma_encoder $e, string $buf, int $n, ?int &$written) use (&$out, &$at): int {
        $out = substr_replace($out, $buf, $at, strlen($buf));
        $at += strlen($buf);
        $written = strlen($buf);
        return MA_SUCCESS;
    };
    $seek = function (ma_encoder $e, int $off, int $origin) use (&$at, &$out): int {
        $at = $origin === ma_seek_origin_start ? $off : ($origin === ma_seek_origin_current ? $at + $off : strlen($out) + $off);
        return MA_SUCCESS;
    };
    $e = new ma_encoder();
    expect(ma_encoder_init($write, $seek, null, ma_encoder_config_init(ma_encoding_format_wav, ma_format_s16, 1, 8000), $e))->toBe(MA_SUCCESS);
    ma_encoder_write_pcm_frames($e, pack('s*', 5, 6), 2, $w);
    ma_encoder_uninit($e);

    expect(substr($out, 0, 4))->toBe('RIFF')->and(substr($out, -4))->toBe(pack('s*', 5, 6));
});

it('chains data sources and loops ranges', function (): void {
    $a = new ma_audio_buffer_ref();
    $b = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_s16, 1, pack('s*', 1, 2), 2, $a);
    ma_audio_buffer_ref_init(ma_format_s16, 1, pack('s*', 3, 4), 2, $b);
    ma_data_source_set_next($a, $b);
    expect(ma_data_source_get_next($a))->toBe($b);
    ma_data_source_read_pcm_frames($a, $o, 4, $read);
    expect($read)->toBe(4)->and(array_values(unpack('s*', $o)))->toBe([1, 2, 3, 4]);

    $c = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_s16, 1, pack('s*', 1, 2, 3), 3, $c);
    ma_data_source_set_range_in_pcm_frames($c, 1, 3);
    ma_data_source_set_looping($c, true);
    ma_data_source_read_pcm_frames($c, $o, 4, $read);
    expect(array_values(unpack('s*', $o)))->toBe([2, 3, 2, 3])
        ->and(ma_data_source_is_looping($c))->toBeTrue();

    $calls = 0;
    $x = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_s16, 1, pack('s*', 7), 1, $x);
    $cb = function ($ds) use (&$calls, $b) { $calls++; return $b; };
    ma_data_source_set_next_callback($x, $cb);
    expect(ma_data_source_get_next_callback($x))->toBe($cb);
    ma_data_source_seek_to_pcm_frame($b, 0);
    ma_data_source_read_pcm_frames($x, $o, 3, $read);
    expect($calls)->toBeGreaterThan(0)->and(array_values(unpack('s*', $o)))->toBe([7, 3, 4]);
});

it('implements a data source in PHP through ma_data_source_vtable', function (): void {
    $vt = new ma_data_source_vtable();
    $cursor = 0;
    $vt->onRead = function (ma_data_source_base $ds, ?string &$out, int $n, ?int &$read) use (&$cursor): int {
        $vals = [];
        for ($i = 0; $i < $n; $i++) {
            $vals[] = $cursor++;
        }
        $out = pack('s*', ...$vals);
        $read = $n;
        return MA_SUCCESS;
    };
    $vt->onSeek = function ($ds, int $frame) use (&$cursor): int { $cursor = $frame; return MA_SUCCESS; };
    $vt->onGetDataFormat = function ($ds, ?int &$f, ?int &$c, ?int &$r, ?array &$map, int $cap): int { $f = ma_format_s16; $c = 1; $r = 1000; return MA_SUCCESS; };
    $vt->onGetCursor = function ($ds, ?int &$c) use (&$cursor): int { $c = $cursor; return MA_SUCCESS; };
    $vt->onGetLength = function ($ds, ?int &$l): int { $l = 100; return MA_SUCCESS; };
    $cfg = ma_data_source_config_init();
    $cfg->vtable = $vt;
    $ds = new ma_data_source_base();
    expect(ma_data_source_init($cfg, $ds))->toBe(MA_SUCCESS);
    ma_data_source_seek_to_pcm_frame($ds, 10);
    ma_data_source_read_pcm_frames($ds, $o, 3, $read);
    ma_data_source_get_length_in_pcm_frames($ds, $len);
    ma_data_source_get_cursor_in_pcm_frames($ds, $cur);
    expect($read)->toBe(3)->and(array_values(unpack('s*', $o)))->toBe([10, 11, 12])->and($len)->toBe(100)->and($cur)->toBe(13);
    ma_data_source_uninit($ds);
});
