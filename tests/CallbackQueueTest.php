<?php

declare(strict_types=1);

it('gives miniaudio silence when PHP does not serve a device in time', function (): void {
    $ctx = ma_null_context();
    $cfg = ma_device_config_init(ma_device_type_playback);
    $calls = 0;
    $cfg->dataCallback = function () use (&$calls): void { $calls++; };
    $dev = new ma_device();
    ma_device_init($ctx, $cfg, $dev);
    ma_device_start($dev);
    sleep(1); // a C-level sleep: no VM interrupt point, nothing served
    $before = $calls;
    usleep(50000);
    ma_device_stop($dev);
    // about 100 periods passed during the sleep; at most the one in flight was served
    expect($before)->toBeLessThan(10)->and($calls)->toBeGreaterThan($before);
});

it('rethrows an exception a callback threw once the call returns', function (): void {
    $vt = new ma_data_source_vtable();
    $vt->onRead = function (): int { throw new RuntimeException('from onRead'); };
    $vt->onGetDataFormat = function ($ds, ?int &$f, ?int &$c, ?int &$r, ?array &$m, int $cap): int { $f = ma_format_f32; $c = 1; $r = 8000; return MA_SUCCESS; };
    $cfg = ma_data_source_config_init();
    $cfg->vtable = $vt;
    $ds = new ma_data_source_base();
    ma_data_source_init($cfg, $ds);
    expect(fn () => ma_data_source_read_pcm_frames($ds, $o, 4, $read))->toThrow(RuntimeException::class, 'from onRead');
});

it('reports a callback return value of the wrong type', function (): void {
    $vt = new ma_data_source_vtable();
    $vt->onSeek = fn () => 'nope';
    $cfg = ma_data_source_config_init();
    $cfg->vtable = $vt;
    $ds = new ma_data_source_base();
    ma_data_source_init($cfg, $ds);
    expect(fn () => ma_data_source_seek_to_pcm_frame($ds, 0))->toThrow(TypeError::class, 'must return int');
});

it('plugs a PHP resampler into miniaudio', function (): void {
    $vt = new ma_resampling_backend_vtable();
    $vt->onGetHeapSize = function ($u, $cfg, ?int &$size): int { $size = 0; return MA_SUCCESS; };
    $vt->onInit = function ($u, ma_resampler_config $cfg, $heap, mixed &$backend): int { $backend = ['ratio' => $cfg->sampleRateOut / $cfg->sampleRateIn]; return MA_SUCCESS; };
    $vt->onProcess = function ($u, array $backend, ?string $in, ?int &$nin, ?string &$out, ?int &$nout): int {
        $s = array_values(unpack('s*', (string) $in));
        $o = [];
        foreach ($s as $v) {
            array_push($o, ...array_fill(0, (int) $backend['ratio'], $v));
        }
        $n = min(intdiv($nout, (int) $backend['ratio']), $nin);
        $out = pack('s*', ...array_slice($o, 0, $n * (int) $backend['ratio']));
        $nin = $n;
        $nout = $n * (int) $backend['ratio'];
        return MA_SUCCESS;
    };
    $rc = ma_resampler_config_init(ma_format_s16, 1, 1000, 3000, ma_resample_algorithm_custom);
    $rc->pBackendVTable = $vt;
    $r = new ma_resampler();
    expect(ma_resampler_init($rc, null, $r))->toBe(MA_SUCCESS);
    $in = 2;
    $out = 6;
    ma_resampler_process_pcm_frames($r, pack('s*', 1, 2), $in, $o, $out);
    expect([$in, $out])->toBe([2, 6])->and(array_values(unpack('s*', $o)))->toBe([1, 1, 1, 2, 2, 2]);
    ma_resampler_uninit($r, null);
});

it('decodes a format written in PHP as a custom decoding backend', function (): void {
    $vt = new ma_decoding_backend_vtable();
    $vt->onInit = function ($u, ma_read_proc $read, ma_seek_proc $seek, ma_tell_proc $tell, int $rst, $cfg, $alloc, ?ma_data_source &$backend): int {
        $read($rst, $magic, 4, $got);
        if ($magic !== 'PCM!') {
            return MA_INVALID_FILE;
        }
        $read($rst, $body, 4096, $got);
        $ref = new ma_audio_buffer_ref();
        ma_audio_buffer_ref_init(ma_format_s16, 1, $body, intdiv(strlen($body), 2), $ref);
        $backend = $ref;
        return MA_SUCCESS;
    };
    $bytes = 'PCM!' . pack('s*', 11, 12);
    $cfg = ma_decoder_config_init(ma_format_s16, 1, 0);
    $cfg->ppCustomBackendVTables = [$vt];
    $cfg->customBackendCount = 1;
    $d = new ma_decoder();
    expect(ma_decoder_init_memory($bytes, strlen($bytes), $cfg, $d))->toBe(MA_SUCCESS);
    ma_decoder_read_pcm_frames($d, $o, 4, $n);
    expect(array_values(unpack('s*', $o)))->toBe([11, 12]);
    ma_decoder_uninit($d);
});

it('runs a device backend written in PHP', function (): void {
    $written = 0;
    $cc = ma_context_config_init();
    $cc->custom->onContextInit = function (ma_context $c, $cfg, ma_backend_callbacks $cb) use (&$written): int {
        $cb->onContextEnumerateDevices = function ($c, ma_enum_devices_callback_proc $each, int $ud): int {
            $i = new ma_device_info();
            $i->name = 'PHP Out';
            $each($c, ma_device_type_playback, $i, $ud);
            return MA_SUCCESS;
        };
        $cb->onContextGetDeviceInfo = function ($c, int $t, $id, ma_device_info $info): int { $info->name = 'PHP Out'; return MA_SUCCESS; };
        $cb->onDeviceInit = function ($d, $cfg, ma_device_descriptor $p, ma_device_descriptor $cap): int {
            $p->format = ma_format_s16;
            $p->channels = 1;
            $p->sampleRate = 8000;
            $p->periodSizeInFrames = 80;
            $p->periodCount = 2;
            return MA_SUCCESS;
        };
        $cb->onDeviceStart = fn (): int => MA_SUCCESS;
        $cb->onDeviceStop = fn (): int => MA_SUCCESS;
        $cb->onDeviceUninit = fn (): int => MA_SUCCESS;
        $cb->onDeviceWrite = function ($d, string $frames, int $n, ?int &$w) use (&$written): int { $written += $n; $w = $n; usleep(2000); return MA_SUCCESS; };
        return MA_SUCCESS;
    };
    $ctx = new ma_context();
    expect(ma_context_init([ma_backend_custom], 1, $cc, $ctx))->toBe(MA_SUCCESS);
    ma_context_get_devices($ctx, $play, $n, $cap, $nc);
    expect($play[0]->name)->toBe('PHP Out');

    $dc = ma_device_config_init(ma_device_type_playback);
    $dc->dataCallback = function ($d, ?string &$out, $in, int $n): void {};
    $dev = new ma_device();
    expect(ma_device_init($ctx, $dc, $dev))->toBe(MA_SUCCESS);
    ma_device_start($dev);
    $t = microtime(true);
    while (microtime(true) - $t < 0.2) {
        usleep(1000);
    }
    ma_device_stop($dev);
    expect($written)->toBeGreaterThan(0);
});

it('posts and processes custom jobs bound to PHP callables', function (): void {
    $q = new ma_job_queue();
    ma_job_queue_init(ma_job_queue_config_init(0, 8), null, $q);
    $job = ma_job_init(MA_JOB_TYPE_CUSTOM);
    $ran = [];
    $job->data->custom->proc = function (ma_job $j) use (&$ran): int { $ran[] = $j->data->custom->data0; return MA_SUCCESS; };
    $job->data->custom->data0 = 7;
    ma_job_queue_post($q, $job);
    $job->data->custom->data0 = 8;
    ma_job_queue_post($q, $job);
    foreach ([1, 2] as $_) {
        $got = new ma_job();
        ma_job_queue_next($q, $got);
        ma_job_process($got);
    }
    expect($ran)->toBe([7, 8]);
});

it('uses a PHP object as a VFS', function (): void {
    $files = ['a.bin' => 'hello world'];
    $vfs = new ma_vfs_callbacks();
    $vfs->onOpen = function ($v, string $path, int $mode, mixed &$file) use ($files): int {
        if (! isset($files[$path])) {
            return MA_DOES_NOT_EXIST;
        }
        $file = (object) ['data' => $files[$path], 'pos' => 0];
        return MA_SUCCESS;
    };
    $vfs->onRead = function ($v, object $f, ?string &$dst, int $n, ?int &$read): int {
        $dst = substr($f->data, $f->pos, $n);
        $read = strlen($dst);
        $f->pos += $read;
        return $read ? MA_SUCCESS : MA_AT_END;
    };
    $vfs->onClose = fn (): int => MA_SUCCESS;
    $vfs->onInfo = function ($v, object $f, ma_file_info $info): int { $info->sizeInBytes = strlen($f->data); return MA_SUCCESS; };

    expect(ma_vfs_open($vfs, 'a.bin', MA_OPEN_MODE_READ, $file))->toBe(MA_SUCCESS);
    ma_vfs_read($vfs, $file, $data, 5, $read);
    $info = new ma_file_info();
    ma_vfs_info($vfs, $file, $info);
    expect($data)->toBe('hello')->and($info->sizeInBytes)->toBe(11)->and(ma_vfs_close($vfs, $file))->toBe(MA_SUCCESS)
        ->and(ma_vfs_open($vfs, 'missing', MA_OPEN_MODE_READ, $none))->toBe(MA_DOES_NOT_EXIST);

    expect(ma_vfs_open_and_read_file($vfs, 'a.bin', $all, $size, null))->toBe(MA_SUCCESS)->and($all)->toBe('hello world');
});
