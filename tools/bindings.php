<?php

/*
 * Per-function decisions the header cannot state. Everything not listed here
 * follows the default rules in tools/gen/functions.php.
 *
 * Sizes are C over the call's converted arguments: {name} is the value the
 * call passes for parameter `name` (a handle's C struct pointer, a scalar,
 * a by-reference scalar's slot, an input string's byte length). A size given
 * as [count, unit] is multiplied with an overflow check.
 */

$params = [];
$after = [];
$returns = [];
$returnCount = [];

$bpf = fn (string $fmt, string $ch) => "ma_get_bytes_per_frame($fmt, $ch)";
$out = fn (string $count, string $unit, ?string $len = null) => ['role' => 'out', 'size' => [$count, $unit]] + ($len ? ['len' => $len] : []);
$in = fn (string $count, string $unit) => ['role' => 'in', 'size' => [$count, $unit]];
$heap = fn (string $getsize) => ['role' => 'heap', 'getsize' => $getsize];

// Filters and effects: process(pX, pFramesOut, pFramesIn, frameCount), format and channels from the struct.
$filters = [
    'ma_biquad' => ['pBQ', '{pBQ}->format', '{pBQ}->channels'],
    'ma_lpf1' => ['pLPF', '{pLPF}->format', '{pLPF}->channels'],
    'ma_lpf2' => ['pLPF', '{pLPF}->bq.format', '{pLPF}->bq.channels'],
    'ma_lpf' => ['pLPF', '{pLPF}->format', '{pLPF}->channels'],
    'ma_hpf1' => ['pHPF', '{pHPF}->format', '{pHPF}->channels'],
    'ma_hpf2' => ['pHPF', '{pHPF}->bq.format', '{pHPF}->bq.channels'],
    'ma_hpf' => ['pHPF', '{pHPF}->format', '{pHPF}->channels'],
    'ma_bpf2' => ['pBPF', '{pBPF}->bq.format', '{pBPF}->bq.channels'],
    'ma_bpf' => ['pBPF', '{pBPF}->format', '{pBPF}->channels'],
    'ma_notch2' => ['pFilter', '{pFilter}->bq.format', '{pFilter}->bq.channels'],
    'ma_peak2' => ['pFilter', '{pFilter}->bq.format', '{pFilter}->bq.channels'],
    'ma_loshelf2' => ['pFilter', '{pFilter}->bq.format', '{pFilter}->bq.channels'],
    'ma_hishelf2' => ['pFilter', '{pFilter}->bq.format', '{pFilter}->bq.channels'],
    'ma_delay' => ['pDelay', 'ma_format_f32', '{pDelay}->config.channels'],
    'ma_gainer' => ['pGainer', 'ma_format_f32', '{pGainer}->config.channels'],
    'ma_panner' => ['pPanner', '{pPanner}->format', '{pPanner}->channels'],
    'ma_fader' => ['pFader', '{pFader}->config.format', '{pFader}->config.channels'],
];
foreach ($filters as $t => [$p, $fmt, $ch]) {
    $params["{$t}_process_pcm_frames"] = [
        'pFramesOut' => $out('{frameCount}', $bpf($fmt, $ch)),
        'pFramesIn' => $in('{frameCount}', $bpf($fmt, $ch)),
    ];
}
$params['ma_spatializer_process_pcm_frames'] = [
    'pFramesOut' => $out('{frameCount}', $bpf('ma_format_f32', '{pSpatializer}->channelsOut')),
    'pFramesIn' => $in('{frameCount}', $bpf('ma_format_f32', '{pSpatializer}->channelsIn')),
];
$params['ma_channel_converter_process_pcm_frames'] = [
    'pFramesOut' => $out('{frameCount}', $bpf('{pConverter}->format', '{pConverter}->channelsOut')),
    'pFramesIn' => $in('{frameCount}', $bpf('{pConverter}->format', '{pConverter}->channelsIn')),
];
// Resamplers and the data converter: frame counts are in/out by reference.
$params['ma_linear_resampler_process_pcm_frames'] = [
    'pFramesIn' => $in('{pFrameCountIn}', $bpf('{pResampler}->config.format', '{pResampler}->config.channels')),
    'pFramesOut' => $out('{pFrameCountOut}', $bpf('{pResampler}->config.format', '{pResampler}->config.channels'), '{pFrameCountOut} * ' . $bpf('{pResampler}->config.format', '{pResampler}->config.channels')),
];
$params['ma_resampler_process_pcm_frames'] = [
    'pFramesIn' => $in('{pFrameCountIn}', $bpf('{pResampler}->format', '{pResampler}->channels')),
    'pFramesOut' => $out('{pFrameCountOut}', $bpf('{pResampler}->format', '{pResampler}->channels'), '{pFrameCountOut} * ' . $bpf('{pResampler}->format', '{pResampler}->channels')),
];
$params['ma_data_converter_process_pcm_frames'] = [
    'pFramesIn' => $in('{pFrameCountIn}', $bpf('{pConverter}->formatIn', '{pConverter}->channelsIn')),
    'pFramesOut' => $out('{pFrameCountOut}', $bpf('{pConverter}->formatOut', '{pConverter}->channelsOut'), '{pFrameCountOut} * ' . $bpf('{pConverter}->formatOut', '{pConverter}->channelsOut')),
];

// _init_preallocated: the heap is a string at least _get_heap_size bytes; the handle keeps a private copy.
foreach (['ma_biquad', 'ma_lpf1', 'ma_lpf2', 'ma_lpf', 'ma_hpf1', 'ma_hpf2', 'ma_hpf', 'ma_bpf2', 'ma_bpf', 'ma_notch2', 'ma_peak2', 'ma_loshelf2', 'ma_hishelf2', 'ma_gainer', 'ma_spatializer_listener', 'ma_spatializer', 'ma_linear_resampler', 'ma_resampler', 'ma_channel_converter', 'ma_data_converter', 'ma_slot_allocator', 'ma_job_queue', 'ma_noise', 'ma_engine_node'] as $t) {
    $params["{$t}_init_preallocated"] = ['pHeap' => $heap("{$t}_get_heap_size(has_pConfig ? &c_pConfig : NULL, &need_pHeap)")];
}
$params['ma_node_init_preallocated'] = ['pHeap' => $heap('ma_node_get_heap_size(h_pNodeGraph ? h_pNodeGraph->native : NULL, has_pConfig ? &c_pConfig : NULL, &need_pHeap)')];

// Channel maps.
foreach (['ma_channel_converter', 'ma_data_converter'] as $t) {
    foreach (['input', 'output'] as $dir) {
        $params["{$t}_get_{$dir}_channel_map"] = ['pChannelMap' => ['role' => 'chmap_out', 'count' => '{channelMapCap}']];
    }
}
$params['ma_channel_converter_config_init'] = [
    'pChannelMapIn' => ['role' => 'chmap_in', 'count' => '{channelsIn}'],
    'pChannelMapOut' => ['role' => 'chmap_in', 'count' => '{channelsOut}'],
];
$params['ma_channel_map_get_channel'] = ['pChannelMap' => ['role' => 'chmap_in', 'count' => '{channelCount}']];
$params['ma_channel_map_init_blank'] = ['pChannelMap' => ['role' => 'chmap_out', 'count' => '{channels}']];
$params['ma_channel_map_init_standard'] = ['pChannelMap' => ['role' => 'chmap_out', 'count' => '{channelMapCap}']];
$params['ma_channel_map_copy'] = ['pOut' => ['role' => 'chmap_out', 'count' => '{channels}'], 'pIn' => ['role' => 'chmap_in', 'count' => '{channels}']];
$params['ma_channel_map_copy_or_default'] = ['pOut' => ['role' => 'chmap_out', 'count' => '{channelMapCapOut}'], 'pIn' => ['role' => 'chmap_in', 'count' => '{channels}']];
foreach (['ma_channel_map_is_valid', 'ma_channel_map_is_blank', 'ma_channel_map_contains_channel_position', 'ma_channel_map_find_channel_position'] as $fn) {
    $params[$fn] = ['pChannelMap' => ['role' => 'chmap_in', 'count' => '{channels}']];
}
$params['ma_channel_map_is_equal'] = ['pChannelMapA' => ['role' => 'chmap_in', 'count' => '{channels}'], 'pChannelMapB' => ['role' => 'chmap_in', 'count' => '{channels}']];
$params['ma_channel_map_to_string'] = ['pChannelMap' => ['role' => 'chmap_in', 'count' => '{channels}'], 'pBufferOut' => ['role' => 'strout', 'cap' => '{bufferCap}']];
$returns['ma_spatializer_listener_get_channel_map'] = 'chmap';
$returnCount['ma_spatializer_listener_get_channel_map'] = '{pListener}->config.channelsOut';
foreach (['ma_data_source', 'ma_decoder', 'ma_sound', 'ma_resource_manager_data_buffer', 'ma_resource_manager_data_stream', 'ma_resource_manager_data_source'] as $t) {
    $params["{$t}_get_data_format"] = ['pChannelMap' => ['role' => 'chmap_out', 'count' => '{channelMapCap}', 'len' => '{pChannels}']];
}

// Sample and frame conversion.
$fmts = ['u8' => 1, 's16' => 2, 's24' => 3, 's32' => 4, 'f32' => 4];
foreach ($fmts as $a => $sa) {
    foreach ($fmts as $b => $sb) {
        if ($a !== $b) {
            $params["ma_pcm_{$a}_to_{$b}"] = ['pOut' => $out('{count}', (string) $sb), 'pIn' => $in('{count}', (string) $sa)];
        }
    }
}
$params['ma_pcm_convert'] = ['pOut' => $out('{sampleCount}', 'ma_get_bytes_per_sample({formatOut})'), 'pIn' => $in('{sampleCount}', 'ma_get_bytes_per_sample({formatIn})')];
$params['ma_convert_pcm_frames_format'] = ['pOut' => $out('{frameCount}', $bpf('{formatOut}', '{channels}')), 'pIn' => $in('{frameCount}', $bpf('{formatIn}', '{channels}'))];
$params['ma_convert_frames'] = ['pOut' => $out('{frameCountOut}', $bpf('{formatOut}', '{channelsOut}')), 'pIn' => $in('{frameCountIn}', $bpf('{formatIn}', '{channelsIn}'))];
$params['ma_convert_frames_ex'] = ['pOut' => $out('{frameCountOut}', $bpf('c_pConfig.formatOut', 'c_pConfig.channelsOut')), 'pIn' => $in('{frameCountIn}', $bpf('c_pConfig.formatIn', 'c_pConfig.channelsIn'))];
$params['ma_copy_pcm_frames'] = ['dst' => $out('{frameCount}', $bpf('{format}', '{channels}')), 'src' => $in('{frameCount}', $bpf('{format}', '{channels}'))];
$params['ma_silence_pcm_frames'] = ['p' => ['role' => 'inout', 'size' => ['{frameCount}', $bpf('{format}', '{channels}')]]];
// The clip source is the next wider sample type: s16 for u8, s32 for s16, s64 for s24 and s32, f32 for f32.
$params['ma_clip_pcm_frames'] = ['pDst' => $out('{frameCount}', $bpf('{format}', '{channels}')), 'pSrc' => $in('{frameCount}', 'phpma_clip_src_bps({format}) * {channels}')];
// ma_clip_samples_*: the source is the next wider type (s16 for u8, s32 for s16, s64 for s24 and s32).
$clip = ['u8' => [1, 2], 's16' => [2, 4], 's24' => [3, 8], 's32' => [4, 8], 'f32' => [4, 4]];
foreach ($clip as $t => [$d, $s]) {
    $params["ma_clip_samples_$t"] = ['pDst' => $out('{count}', (string) $d), 'pSrc' => $in('{count}', (string) $s)];
    $params["ma_copy_and_apply_volume_and_clip_samples_$t"] = ['pDst' => $out('{count}', (string) $d), 'pSrc' => $in('{count}', (string) $s)];
    $params["ma_copy_and_apply_volume_factor_$t"] = ['pSamplesOut' => $out('{sampleCount}', (string) $fmts[$t]), 'pSamplesIn' => $in('{sampleCount}', (string) $fmts[$t])];
    $params["ma_apply_volume_factor_$t"] = ['pSamples' => ['role' => 'inout', 'size' => ['{sampleCount}', (string) $fmts[$t]]]];
    $params["ma_copy_and_apply_volume_factor_pcm_frames_$t"] = ['pFramesOut' => $out('{frameCount}', "{$fmts[$t]} * {channels}"), 'pFramesIn' => $in('{frameCount}', "{$fmts[$t]} * {channels}")];
    $params["ma_apply_volume_factor_pcm_frames_$t"] = ['pFrames' => ['role' => 'inout', 'size' => ['{frameCount}', "{$fmts[$t]} * {channels}"]]];
}
$params['ma_copy_and_apply_volume_and_clip_pcm_frames'] = $params['ma_clip_pcm_frames'];
$params['ma_copy_and_apply_volume_factor_pcm_frames'] = ['pFramesOut' => $out('{frameCount}', $bpf('{format}', '{channels}')), 'pFramesIn' => $in('{frameCount}', $bpf('{format}', '{channels}'))];
$params['ma_apply_volume_factor_pcm_frames'] = ['pFrames' => ['role' => 'inout', 'size' => ['{frameCount}', $bpf('{format}', '{channels}')]]];
$params['ma_copy_and_apply_volume_factor_per_channel_f32'] = ['pFramesOut' => $out('{frameCount}', '4 * {channels}'), 'pFramesIn' => $in('{frameCount}', '4 * {channels}'), 'pChannelGains' => $in('{channels}', '4')];
$params['ma_mix_pcm_frames_f32'] = ['pDst' => ['role' => 'inout', 'size' => ['{frameCount}', '4 * {channels}']], 'pSrc' => $in('{frameCount}', '4 * {channels}')];
$params['ma_blend_f32'] = ['pOut' => $out('{channels}', '4'), 'pInA' => $in('{channels}', '4'), 'pInB' => $in('{channels}', '4')];

// Reading data sources: the frame size is the source's own format.
foreach (['ma_data_source' => 'pDataSource', 'ma_decoder' => 'pDecoder', 'ma_waveform' => 'pWaveform', 'ma_pulsewave' => 'pWaveform', 'ma_noise' => 'pNoise', 'ma_paged_audio_buffer' => 'pPagedAudioBuffer', 'ma_resource_manager_data_buffer' => 'pDataBuffer', 'ma_resource_manager_data_stream' => 'pDataStream', 'ma_resource_manager_data_source' => 'pDataSource'] as $t => $p) {
    $params["{$t}_read_pcm_frames"] = ['pFramesOut' => $out('{frameCount}', "phpma_ds_bpf({{$p}})", "{pFramesRead} * phpma_ds_bpf({{$p}})")];
}
foreach (['ma_audio_buffer_ref' => 'pAudioBufferRef', 'ma_audio_buffer' => 'pAudioBuffer'] as $t => $p) {
    $params["{$t}_read_pcm_frames"] = ['pFramesOut' => $out('{frameCount}', "phpma_ds_bpf({{$p}})", "{ret} * phpma_ds_bpf({{$p}})")];
}
$params['ma_engine_read_pcm_frames'] = ['pFramesOut' => $out('{frameCount}', '4 * ma_engine_get_channels({pEngine})', '{pFramesRead} * 4 * ma_engine_get_channels({pEngine})')];
$params['ma_node_graph_read_pcm_frames'] = ['pFramesOut' => $out('{frameCount}', '4 * ma_node_graph_get_channels({pNodeGraph})', '{pFramesRead} * 4 * ma_node_graph_get_channels({pNodeGraph})')];
$params['ma_encoder_write_pcm_frames'] = ['pFramesIn' => $in('{frameCount}', $bpf('{pEncoder}->config.format', '{pEncoder}->config.channels'))];

// Buffers miniaudio reads later: the string is kept by the handle that points at it.
$params['ma_audio_buffer_ref_init'] = ['pData' => ['role' => 'retain_in', 'owner' => 'target', 'size' => ['{sizeInFrames}', $bpf('{format}', '{channels}')], 'nullable' => true]];
$params['ma_audio_buffer_ref_set_data'] = ['pData' => ['role' => 'retain_in', 'owner' => 'pAudioBufferRef', 'key' => '"pData"', 'size' => ['{sizeInFrames}', $bpf('{pAudioBufferRef}->format', '{pAudioBufferRef}->channels')], 'nullable' => true]];
$params['ma_audio_buffer_config_init'] = ['pData' => ['role' => 'in', 'size' => ['{sizeInFrames}', $bpf('{format}', '{channels}')], 'nullable' => true]];
$params['ma_decoder_init_memory'] = ['pData' => ['role' => 'retain_in', 'owner' => 'target', 'size' => '{dataSize}']];
$params['ma_resource_manager_register_decoded_data'] = ['pData' => ['role' => 'retain_in', 'owner' => 'pResourceManager', 'key' => 'phpma_frame_key(&f, "data:", {pName})', 'size' => ['{frameCount}', $bpf('{format}', '{channels}')]]];
$params['ma_resource_manager_register_encoded_data'] = ['pData' => ['role' => 'retain_in', 'owner' => 'pResourceManager', 'key' => 'phpma_frame_key(&f, "data:", {pName})', 'size' => '{sizeInBytes}']];
$params['ma_resource_manager_register_decoded_data_w'] = ['pData' => ['role' => 'retain_in', 'owner' => 'pResourceManager', 'key' => 'phpma_frame_key(&f, "data:", (Z_TYPE_P(a_pName) == IS_STRING ? Z_STRVAL_P(a_pName) : NULL))', 'size' => ['{frameCount}', $bpf('{format}', '{channels}')]]];
$params['ma_resource_manager_register_encoded_data_w'] = ['pData' => ['role' => 'retain_in', 'owner' => 'pResourceManager', 'key' => 'phpma_frame_key(&f, "data:", (Z_TYPE_P(a_pName) == IS_STRING ? Z_STRVAL_P(a_pName) : NULL))', 'size' => '{sizeInBytes}']];
$after['ma_resource_manager_unregister_data'] = ['if (ret == MA_SUCCESS && a_pName) phpma_handle_retain_set(h_pResourceManager, phpma_frame_key(&f, "data:", ZSTR_VAL(a_pName)), NULL);'];
$after['ma_resource_manager_unregister_data_w'] = ['if (ret == MA_SUCCESS && Z_TYPE_P(a_pName) == IS_STRING) phpma_handle_retain_set(h_pResourceManager, phpma_frame_key(&f, "data:", Z_STRVAL_P(a_pName)), NULL);'];

// Data sources that point at another one keep that object alive.
$after['ma_data_source_set_next'] = ['if (ret == MA_SUCCESS && h_pDataSource) phpma_handle_retain_set(h_pDataSource, "pNext", a_pNextDataSource);'];
$after['ma_data_source_set_current'] = ['if (ret == MA_SUCCESS && h_pDataSource) phpma_handle_retain_set(h_pDataSource, "pCurrent", a_pCurrentDataSource);'];

// Ring buffers: an optional preallocated buffer becomes the handle's private memory.
$params['ma_rb_init'] = ['pOptionalPreallocatedBuffer' => ['role' => 'heap', 'nullable' => true, 'size' => '{bufferSizeInBytes}']];
$params['ma_rb_init_ex'] = ['pOptionalPreallocatedBuffer' => ['role' => 'heap', 'nullable' => true, 'size' => ['{subbufferCount}', '{subbufferStrideInBytes}']]];
$params['ma_pcm_rb_init'] = ['pOptionalPreallocatedBuffer' => ['role' => 'heap', 'nullable' => true, 'size' => ['{bufferSizeInFrames}', $bpf('{format}', '{channels}')]]];
$params['ma_pcm_rb_init_ex'] = ['pOptionalPreallocatedBuffer' => ['role' => 'heap', 'nullable' => true, 'size' => ['{subbufferCount}', '(uint64_t){subbufferStrideInFrames} * ' . $bpf('{format}', '{channels}')]]];

// Backends, device names.
$params['ma_context_init'] = ['backends' => ['role' => 'list_in', 'ctype' => 'ma_backend', 'count' => '{backendCount}']];
$params['ma_device_init_ex'] = ['backends' => ['role' => 'list_in', 'ctype' => 'ma_backend', 'count' => '{backendCount}']];
$params['ma_get_enabled_backends'] = ['pBackends' => ['role' => 'list_out', 'ctype' => 'ma_backend', 'cap' => '{backendCap}', 'len' => '{pBackendCount}']];
$params['ma_device_get_name'] = ['pName' => ['role' => 'strout', 'cap' => '{nameCap}']];
$params['ma_device_handle_backend_data_callback'] = [
    'pOutput' => ['role' => 'out', 'size' => ['{frameCount}', $bpf('{pDevice}->playback.internalFormat', '{pDevice}->playback.internalChannels')]],
    'pInput' => ['role' => 'in', 'nullable' => true, 'size' => ['{frameCount}', $bpf('{pDevice}->capture.internalFormat', '{pDevice}->capture.internalChannels')]],
];

// Whole-file decodes: miniaudio allocates the result; the binding copies it into a string and frees it.
foreach (['ma_decode_from_vfs', 'ma_decode_file', 'ma_decode_memory'] as $fn) {
    $params[$fn] = ['ppPCMFramesOut' => ['role' => 'ptrout', 'len' => '{pFrameCountOut} * ' . $bpf('c_pConfig.format', 'c_pConfig.channels')]];
}
$params['ma_decode_memory']['pData'] = ['role' => 'in', 'size' => '{dataSize}'];
$params['ma_paged_audio_buffer_data_allocate_and_append_page'] = ['pInitialData' => ['role' => 'in', 'nullable' => true, 'size' => ['{pageSizeInFrames}', $bpf('{pData}->format', '{pData}->channels')]]];
$params['ma_vfs_open_and_read_file'] = ['ppData' => ['role' => 'ptrout', 'len' => '{pSize}']];

return [
    // Not bound (see the spec's "Not bound, and why").
    'skip' => [
        'ma_malloc' => true, 'ma_calloc' => true, 'ma_realloc' => true, 'ma_free' => true,
        'ma_aligned_malloc' => true, 'ma_aligned_free' => true,
        'ma_log_postv' => true,
    ],
    // Written by hand in src/manual.c.
    'manual' => array_fill_keys([
        'ma_log_postf',
        'ma_deinterleave_pcm_frames', 'ma_interleave_pcm_frames',
        'ma_offset_pcm_frames_ptr', 'ma_offset_pcm_frames_const_ptr',
        'ma_rb_acquire_read', 'ma_rb_acquire_write', 'ma_rb_commit_write', 'ma_rb_get_subbuffer_ptr',
        'ma_pcm_rb_acquire_read', 'ma_pcm_rb_acquire_write', 'ma_pcm_rb_commit_write', 'ma_pcm_rb_get_subbuffer_ptr',
        'ma_audio_buffer_ref_map', 'ma_audio_buffer_map',
        'ma_audio_buffer_alloc_and_init', 'ma_audio_buffer_uninit_and_free',
        'ma_paged_audio_buffer_data_allocate_page', 'ma_paged_audio_buffer_data_free_page', 'ma_paged_audio_buffer_data_append_page',
        'ma_context_get_devices',
        'ma_vfs_open', 'ma_vfs_open_w', 'ma_vfs_close', 'ma_vfs_read', 'ma_vfs_write', 'ma_vfs_seek', 'ma_vfs_tell', 'ma_vfs_info',
        'ma_log_register_callback', 'ma_log_unregister_callback', 'ma_log_callback_init',
        'ma_data_source_get_next_callback',
    ], true),
    // Context keys a callable or user-data parameter is stored under (the key its trampoline reads).
    'cbkeys' => [
        'ma_sound_set_end_callback' => ['callback' => 'endCallback', 'pUserData' => 'pEndCallbackUserData'],
        'ma_data_source_set_next_callback' => ['onGetNext' => 'onGetNext'],
        'ma_context_enumerate_devices' => ['callback' => 'callback', 'pUserData' => 'pUserData'],
        'ma_decoder_init' => ['onRead' => 'onRead', 'onSeek' => 'onSeek', 'pUserData' => 'pUserData'],
        'ma_encoder_init' => ['onWrite' => 'onWrite', 'onSeek' => 'onSeek', 'pUserData' => 'pUserData'],
    ],
    'params' => $params,
    'after' => $after,
    'returns' => $returns,
    'return_count' => $returnCount,
];
