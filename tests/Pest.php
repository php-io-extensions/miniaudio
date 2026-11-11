<?php

declare(strict_types=1);

if (! extension_loaded('miniaudio')) {
    throw new RuntimeException('The miniaudio extension is not loaded; run ./install-macos.sh or ./install-debian-trixie.sh');
}

/** A writable scratch path for one test. */
function ma_tmp(string $name): string
{
    $dir = sys_get_temp_dir() . '/ext-miniaudio-tests-' . getmypid();
    if (! is_dir($dir)) {
        mkdir($dir, 0700, true);
    }

    return "$dir/$name";
}

/** A mono s16 WAV with the given samples, written through ma_encoder. */
function ma_wav(string $name, array $samples, int $rate = 8000): string
{
    $path = ma_tmp($name);
    $enc = new ma_encoder();
    expect(ma_encoder_init_file($path, ma_encoder_config_init(ma_encoding_format_wav, ma_format_s16, 1, $rate), $enc))->toBe(MA_SUCCESS);
    ma_encoder_write_pcm_frames($enc, pack('s*', ...$samples), count($samples), $written);
    ma_encoder_uninit($enc);

    return $path;
}

function ma_floats(string $bytes): array
{
    return array_values(array_map(fn (float $f) => round($f, 4), unpack('g*', $bytes) ?: []));
}

function ma_null_context(): ma_context
{
    $ctx = new ma_context();
    expect(ma_context_init([ma_backend_null], 1, null, $ctx))->toBe(MA_SUCCESS);

    return $ctx;
}

function ma_engine_nodevice(int $channels = 1, int $rate = 48000): ma_engine
{
    $cfg = ma_engine_config_init();
    $cfg->noDevice = true;
    $cfg->channels = $channels;
    $cfg->sampleRate = $rate;
    $e = new ma_engine();
    expect(ma_engine_init($cfg, $e))->toBe(MA_SUCCESS);

    return $e;
}

/** Runs PHP code in a child process that loads the same extension; returns [exit code, output]. */
function ma_subprocess(string $code): array
{
    $file = ma_tmp('child-' . bin2hex(random_bytes(4)) . '.php');
    file_put_contents($file, "<?php\n" . $code);
    $ext = getenv('MINIAUDIO_SO');
    $cmd = escapeshellarg(PHP_BINARY) . ' -d memory_limit=128M' . ($ext ? ' -d extension=' . escapeshellarg($ext) : '') . ' ' . escapeshellarg($file) . ' 2>&1';
    exec($cmd, $out, $rc);

    return [$rc, implode("\n", $out)];
}
