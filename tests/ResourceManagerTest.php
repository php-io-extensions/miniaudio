<?php

declare(strict_types=1);

function ma_rm(int $flags = 0, int $threads = 1): ma_resource_manager
{
    $cfg = ma_resource_manager_config_init();
    $cfg->decodedFormat = ma_format_s16;
    $cfg->decodedChannels = 1;
    $cfg->decodedSampleRate = 8000;
    $cfg->jobThreadCount = $threads;
    $cfg->flags = $flags;
    $rm = new ma_resource_manager();
    expect(ma_resource_manager_init($cfg, $rm))->toBe(MA_SUCCESS);

    return $rm;
}

it('loads, decodes and streams files', function (): void {
    $path = ma_wav('rm.wav', [10, 20, 30, 40]);
    $rm = ma_rm();

    $buf = new ma_resource_manager_data_buffer();
    expect(ma_resource_manager_data_buffer_init($rm, $path, MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_DECODE | MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_WAIT_INIT, null, $buf))->toBe(MA_SUCCESS);
    ma_resource_manager_data_buffer_read_pcm_frames($buf, $o, 8, $read);
    expect($read)->toBe(4)->and(array_values(unpack('s*', $o)))->toBe([10, 20, 30, 40])
        ->and(ma_resource_manager_data_buffer_result($buf))->toBe(MA_SUCCESS);
    ma_resource_manager_data_buffer_uninit($buf);

    $stream = new ma_resource_manager_data_stream();
    expect(ma_resource_manager_data_stream_init($rm, $path, MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_WAIT_INIT, null, $stream))->toBe(MA_SUCCESS);
    ma_resource_manager_data_stream_read_pcm_frames($stream, $o, 4, $read);
    expect(array_values(unpack('s*', $o)))->toBe([10, 20, 30, 40]);
    ma_resource_manager_data_stream_uninit($stream);
    ma_resource_manager_uninit($rm);
});

it('serves registered PHP strings as files', function (): void {
    $rm = ma_rm();
    expect(ma_resource_manager_register_decoded_data($rm, 'tone', pack('s*', 1, 2, 3), 3, ma_format_s16, 1, 8000))->toBe(MA_SUCCESS);
    $src = new ma_resource_manager_data_source();
    expect(ma_resource_manager_data_source_init($rm, 'tone', MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_WAIT_INIT, null, $src))->toBe(MA_SUCCESS);
    ma_resource_manager_data_source_read_pcm_frames($src, $o, 3, $read);
    expect(array_values(unpack('s*', $o)))->toBe([1, 2, 3]);
    ma_resource_manager_data_source_uninit($src);
    expect(ma_resource_manager_unregister_data($rm, 'tone'))->toBe(MA_SUCCESS);

    $wav = file_get_contents(ma_wav('enc.wav', [7, 8]));
    expect(ma_resource_manager_register_encoded_data($rm, 'enc', $wav, strlen($wav)))->toBe(MA_SUCCESS);
    $b = new ma_resource_manager_data_buffer();
    ma_resource_manager_data_buffer_init($rm, 'enc', MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_DECODE | MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_WAIT_INIT, null, $b);
    ma_resource_manager_data_buffer_read_pcm_frames($b, $o, 2, $read);
    expect(array_values(unpack('s*', $o)))->toBe([7, 8]);
});

it('runs its jobs on the calling thread when it has none', function (): void {
    $path = ma_wav('jobs.wav', [5, 6]);
    $rm = ma_rm(MA_RESOURCE_MANAGER_FLAG_NON_BLOCKING, 0);
    $buf = new ma_resource_manager_data_buffer();
    expect(ma_resource_manager_data_buffer_init($rm, $path, MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_DECODE | MA_RESOURCE_MANAGER_DATA_SOURCE_FLAG_ASYNC, null, $buf))->toBe(MA_SUCCESS);
    $jobs = 0;
    while (ma_resource_manager_data_buffer_result($buf) === MA_BUSY) {
        $job = new ma_job();
        if (ma_resource_manager_next_job($rm, $job) !== MA_SUCCESS) {
            break;
        }
        expect(ma_job_process($job))->toBeIn([MA_SUCCESS, MA_BUSY]);
        $jobs++;
    }
    ma_resource_manager_data_buffer_read_pcm_frames($buf, $o, 2, $read);
    expect($jobs)->toBeGreaterThan(0)->and(array_values(unpack('s*', $o)))->toBe([5, 6]);
});
