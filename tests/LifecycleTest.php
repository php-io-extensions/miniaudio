<?php

declare(strict_types=1);

it('exits cleanly with running devices, engines and callbacks left behind', function (): void {
    [$rc, $out] = ma_subprocess(<<<'PHP'
        $ctx = new ma_context(); ma_context_init([ma_backend_null], 1, null, $ctx);
        $cfg = ma_device_config_init(ma_device_type_playback);
        $cfg->dataCallback = function ($d, ?string &$o, $i, int $n) {};
        for ($i = 0; $i < 4; $i++) { $dev[$i] = new ma_device(); ma_device_init($ctx, $cfg, $dev[$i]); ma_device_start($dev[$i]); }
        $ec = ma_engine_config_init(); $ec->noDevice = true; $ec->channels = 1; $ec->sampleRate = 8000;
        $e = new ma_engine(); ma_engine_init($ec, $e);
        $w = new ma_waveform(); ma_waveform_init(ma_waveform_config_init(ma_format_f32, 1, 8000, 0, 1.0, 100.0), $w);
        $s = new ma_sound(); ma_sound_init_from_data_source($e, $w, 0, null, $s); ma_sound_start($s);
        usleep(20000);
        echo "leaving";
        PHP);
    expect($rc)->toBe(0)->and($out)->toBe('leaving');
});

it('stops a forked child from touching its parent\'s miniaudio threads', function (): void {
    [$rc, $out] = ma_subprocess(<<<'PHP'
        $ctx = new ma_context(); ma_context_init([ma_backend_null], 1, null, $ctx);
        $cfg = ma_device_config_init(ma_device_type_playback);
        $cfg->dataCallback = function ($d, ?string &$o, $i, int $n) {};
        $dev = new ma_device(); ma_device_init($ctx, $cfg, $dev); ma_device_start($dev);
        $w = new ma_waveform(); ma_waveform_init(ma_waveform_config_init(ma_format_f32, 1, 48000, 0, 1.0, 1.0), $w);
        $pid = pcntl_fork();
        if ($pid === 0) {
            try { ma_device_stop($dev); echo "child: no error\n"; } catch (Error $e) { echo "child: ", $e->getMessage(), "\n"; }
            echo "child waveform: ", ma_waveform_read_pcm_frames($w, $b, 1, $r), "\n";
            exit(0);
        }
        pcntl_waitpid($pid, $status);
        echo "parent: ", ma_device_stop($dev), " child exit ", pcntl_wexitstatus($status), "\n";
        PHP);
    expect($rc)->toBe(0)
        ->and($out)->toContain('child: ma_device: its miniaudio threads did not survive fork')
        ->and($out)->toContain('child waveform: 0')
        ->and($out)->toContain('parent: 0 child exit 0');
})->skip(! function_exists('pcntl_fork'), 'needs pcntl');

it('serves callbacks from repeated requests on the built-in server without leaking threads', function (): void {
    $doc = ma_tmp('docroot');
    @mkdir($doc);
    file_put_contents("$doc/index.php", <<<'PHP'
        <?php
        $ctx = new ma_context(); ma_context_init([ma_backend_null], 1, null, $ctx);
        $cfg = ma_device_config_init(ma_device_type_playback);
        $n = 0; $cfg->dataCallback = function () use (&$n) { $n++; };
        $dev = new ma_device(); ma_device_init($ctx, $cfg, $dev); ma_device_start($dev);
        $t = microtime(true); while (microtime(true) - $t < 0.05) { usleep(1000); }
        echo $n > 0 ? 'ok' : 'none';
        PHP);
    $port = 20000 + random_int(0, 20000);
    $ext = getenv('MINIAUDIO_SO');
    $cmd = escapeshellarg(PHP_BINARY) . ($ext ? ' -d extension=' . escapeshellarg($ext) : '') . " -S 127.0.0.1:$port -t " . escapeshellarg($doc);
    $proc = proc_open($cmd, [['pipe', 'r'], ['file', '/dev/null', 'w'], ['file', '/dev/null', 'w']], $pipes);
    $ok = 0;
    set_error_handler(fn () => true); // the server is still starting: refused connections are expected
    for ($i = 0; $i < 50 && $ok === 0; $i++) {
        usleep(100000);
        $ok = file_get_contents("http://127.0.0.1:$port/") === 'ok' ? 1 : 0;
    }
    restore_error_handler();
    for ($i = 0; $i < 10; $i++) {
        $ok += file_get_contents("http://127.0.0.1:$port/") === 'ok' ? 1 : 0;
    }
    proc_terminate($proc);
    proc_close($proc);
    expect($ok)->toBe(11);
});
