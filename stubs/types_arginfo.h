/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2e9ca541d3b5b6e272eb1fe51220b8cca398c37e */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_allocation_callbacks___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onMalloc, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onRealloc, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onFree, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_async_notification_callbacks___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onSignal, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_audio_buffer_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sizeInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pData, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, allocationCallbacks, ma_allocation_callbacks, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_backend_callbacks___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onContextInit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onContextUninit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onContextEnumerateDevices, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onContextGetDeviceInfo, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceInit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceUninit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceStart, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceStop, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceRead, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceWrite, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceDataLoop, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceDataLoopWakeup, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onDeviceGetInfo, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_biquad_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, b0, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, b1, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, b2, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, a0, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, a1, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, a2, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_biquad_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, biquad, ma_biquad_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_bpf2_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, cutoffFrequency, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, q, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_bpf_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, cutoffFrequency, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, order, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_bpf_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, bpf, ma_bpf_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_channel_converter_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMapIn, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMapOut, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mixingMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, calculateLFEFromSpatialChannels, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ppWeights, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_context_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pLog, ma_log, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, threadPriority, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, threadStackSize, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, allocationCallbacks, ma_allocation_callbacks, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, dsound, ma_context_config_dsound, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, alsa, ma_context_config_alsa, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pulse, ma_context_config_pulse, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, coreaudio, ma_context_config_coreaudio, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, jack, ma_context_config_jack, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, custom, ma_backend_callbacks, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_context_config_alsa___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, useVerboseDeviceEnumeration, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_context_config_coreaudio___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sessionCategory, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sessionCategoryOptions, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAudioSessionActivate, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAudioSessionDeactivate, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_context_config_dsound___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hWnd, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_context_config_jack___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pClientName, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, tryStartServer, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_context_config_pulse___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pApplicationName, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pServerName, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, tryAutoSpawn, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_data_converter_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, formatIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, formatOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRateIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRateOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMapIn, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMapOut, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ditherMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelMixMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, calculateLFEFromSpatialChannels, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ppChannelWeights, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allowDynamicSampleRate, _IS_BOOL, 0, "false")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resampling, ma_resampler_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_data_source_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, vtable, ma_data_source_vtable, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_data_source_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDataSource, ma_data_source, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_data_source_vtable___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onRead, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onSeek, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetDataFormat, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetCursor, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetLength, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onSetLooping, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_decoder_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMap, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelMixMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ditherMode, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resampling, ma_resampler_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, allocationCallbacks, ma_allocation_callbacks, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encodingFormat, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, seekPointCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ppCustomBackendVTables, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, customBackendCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pCustomBackendUserData, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_decoding_backend_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, preferredFormat, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, seekPointCount, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_decoding_backend_vtable___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onInit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onInitFile, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onInitFileW, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onInitMemory, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onUninit, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_delay_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, delayInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, delayStart, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, wet, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dry, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, decay, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_delay_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, delay, ma_delay_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, deviceType, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodSizeInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodSizeInMilliseconds, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periods, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, performanceProfile, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noPreSilencedOutputBuffer, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noClip, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noDisableDenormals, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noFixedSizedCallback, _IS_BOOL, 0, "false")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, dataCallback, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, notificationCallback, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, stopCallback, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resampling, ma_resampler_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, playback, ma_device_config_playback, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, capture, ma_device_config_capture, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, wasapi, ma_device_config_wasapi, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, alsa, ma_device_config_alsa, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pulse, ma_device_config_pulse, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, coreaudio, ma_device_config_coreaudio, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, opensl, ma_device_config_opensl, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, aaudio, ma_device_config_aaudio, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_aaudio___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, usage, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, contentType, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, inputPreset, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allowedCapturePolicy, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoStartAfterReroute, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enableCompatibilityWorkarounds, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allowSetBufferCapacity, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_alsa___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noMMap, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoFormat, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoChannels, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoResample, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_capture___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDeviceID, ma_device_id, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMap, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelMixMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, calculateLFEFromSpatialChannels, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, shareMode, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_coreaudio___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allowNominalSampleRateChange, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_opensl___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, streamType, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, recordingPreset, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enableCompatibilityWorkarounds, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_device_config_playback___construct arginfo_class_ma_device_config_capture___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_pulse___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pStreamNamePlayback, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pStreamNameCapture, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelMap, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_config_wasapi___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, usage, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoConvertSRC, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noDefaultQualitySRC, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoStreamRouting, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noHardwareOffloading, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopbackProcessID, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopbackProcessExclude, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_descriptor___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDeviceID, ma_device_id, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, shareMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelMap, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodSizeInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodSizeInMilliseconds, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodCount, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_id___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, wasapi, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dsound, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, winmm, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, alsa, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pulse, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, jack, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coreaudio, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sndio, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, audio4, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, oss, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, aaudio, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, opensl, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, webaudio, IS_STRING, 0, "\'\'")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, custom, ma_device_id_custom, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, nullbackend, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_id_custom___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, i, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, s, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, p, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_info___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, id, ma_device_id, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isDefault, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, nativeDataFormatCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, nativeDataFormats, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_info_nativeDataFormats___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_job_thread_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noThread, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, jobQueueCapacity, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, jobQueueFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_notification___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDevice, ma_device, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, data, ma_device_notification_data, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_notification_data___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, started, ma_device_notification_data_started, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, stopped, ma_device_notification_data_stopped, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, rerouted, ma_device_notification_data_rerouted, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, interruption, ma_device_notification_data_interruption, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_device_notification_data_interruption___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, _unused, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_device_notification_data_rerouted___construct arginfo_class_ma_device_notification_data_interruption___construct

#define arginfo_class_ma_device_notification_data_started___construct arginfo_class_ma_device_notification_data_interruption___construct

#define arginfo_class_ma_device_notification_data_stopped___construct arginfo_class_ma_device_notification_data_interruption___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_encoder_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encodingFormat, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, allocationCallbacks, ma_allocation_callbacks, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_engine_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pResourceManager, ma_resource_manager, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pContext, ma_context, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDevice, ma_device, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pPlaybackDeviceID, ma_device_id, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, dataCallback, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, notificationCallback, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pLog, ma_log, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, listenerCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodSizeInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, periodSizeInMilliseconds, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, gainSmoothTimeInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, gainSmoothTimeInMilliseconds, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, defaultVolumeSmoothTimeInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, preMixStackSizeInBytes, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, allocationCallbacks, ma_allocation_callbacks, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noAutoStart, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, noDevice, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, monoExpansionMode, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pResourceManagerVFS, ma_vfs, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onProcess, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pProcessUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resourceManagerResampling, ma_resampler_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pitchResampling, ma_resampler_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_engine_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pEngine, ma_engine, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, volumeSmoothTimeInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, monoExpansionMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isPitchDisabled, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isSpatializationDisabled, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pinnedListenerIndex, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resampling, ma_resampler_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_fader_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_file_info___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sizeInBytes, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_gainer_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, smoothTimeInFrames, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_hishelf2_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, gainDB, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, shelfSlope, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frequency, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_hishelf_config___construct arginfo_class_ma_hishelf2_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_hishelf_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, hishelf, ma_hishelf_config, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_hpf1_config___construct arginfo_class_ma_bpf2_config___construct

#define arginfo_class_ma_hpf2_config___construct arginfo_class_ma_bpf2_config___construct

#define arginfo_class_ma_hpf_config___construct arginfo_class_ma_bpf_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_hpf_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, hpf, ma_hpf_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, toc, ma_job_toc, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, next, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, order, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, data, ma_job_data, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, custom, ma_job_data_custom, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resourceManager, ma_job_data_resourceManager, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, device, ma_job_data_device, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_custom___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, proc, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data0, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data1, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_device___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, aaudio, ma_job_data_device_aaudio, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_device_aaudio___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, reroute, ma_job_data_device_aaudio_reroute, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_device_aaudio_reroute___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDevice, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, deviceType, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loadDataBufferNode, ma_job_data_resourceManager_loadDataBufferNode, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, freeDataBufferNode, ma_job_data_resourceManager_freeDataBufferNode, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pageDataBufferNode, ma_job_data_resourceManager_pageDataBufferNode, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loadDataBuffer, ma_job_data_resourceManager_loadDataBuffer, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, freeDataBuffer, ma_job_data_resourceManager_freeDataBuffer, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loadDataStream, ma_job_data_resourceManager_loadDataStream, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, freeDataStream, ma_job_data_resourceManager_freeDataStream, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pageDataStream, ma_job_data_resourceManager_pageDataStream, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, seekDataStream, ma_job_data_resourceManager_seekDataStream, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_freeDataBuffer___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataBuffer, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_freeDataBufferNode___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pResourceManager, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataBufferNode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_freeDataStream___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataStream, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_loadDataBuffer___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataBuffer, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInitNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInitFence, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rangeBegInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rangeEndInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopPointBegInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopPointEndInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isLooping, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_loadDataBufferNode___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pResourceManager, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataBufferNode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePath, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePathW, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInitNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInitFence, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_loadDataStream___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataStream, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePath, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePathW, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, initialSeekPoint, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInitNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInitFence, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_pageDataBufferNode___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pResourceManager, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataBufferNode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDecoder, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneNotification, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_pageDataStream___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataStream, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pageIndex, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_data_resourceManager_seekDataStream___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pDataStream, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frameIndex, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_queue_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, capacity, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_toc___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, breakup, ma_job_toc_breakup, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allocation, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_job_toc_breakup___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, code, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, slot, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, refcount, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_linear_resampler_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRateIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRateOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, lpfOrder, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, lpfNyquistFactor, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_log_callback___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onLog, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pUserData, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_loshelf2_config___construct arginfo_class_ma_hishelf2_config___construct

#define arginfo_class_ma_loshelf_config___construct arginfo_class_ma_hishelf2_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_loshelf_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loshelf, ma_loshelf_config, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_lpf1_config___construct arginfo_class_ma_bpf2_config___construct

#define arginfo_class_ma_lpf2_config___construct arginfo_class_ma_bpf2_config___construct

#define arginfo_class_ma_lpf_config___construct arginfo_class_ma_bpf_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_lpf_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, lpf, ma_lpf_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, vtable, ma_node_vtable, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, initialState, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, inputBusCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, outputBusCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pInputChannels, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pOutputChannels, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_node_graph_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, processingSizeInFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, preMixStackSizeInBytes, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_node_vtable___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onProcess, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetRequiredInputFrameCount, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, inputBusCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, outputBusCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_noise_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, seed, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, amplitude, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, duplicateChannels, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_notch2_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, q, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frequency, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_notch_config___construct arginfo_class_ma_notch2_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_notch_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, notch, ma_notch_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_paged_audio_buffer_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pData, ma_paged_audio_buffer_data, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_panner_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pan, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_peak2_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, gainDB, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, q, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frequency, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_peak_config___construct arginfo_class_ma_peak2_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_peak_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, peak, ma_peak_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_pulsewave_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dutyCycle, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, amplitude, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frequency, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resampler_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRateIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRateOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, algorithm, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pBackendVTable, ma_resampling_backend_vtable, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pBackendUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, linear, ma_resampler_config_linear, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resampler_config_linear___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, lpfOrder, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resampling_backend_vtable___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetHeapSize, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onInit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onUninit, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onProcess, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onSetRate, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetInputLatency, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetOutputLatency, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetRequiredInputFrameCount, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onGetExpectedOutputFrameCount, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onReset, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resource_manager_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, allocationCallbacks, ma_allocation_callbacks, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pLog, ma_log, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, decodedFormat, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, decodedChannels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, decodedSampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, jobThreadCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, jobThreadStackSize, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, jobQueueCapacity, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pVFS, ma_vfs, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ppCustomDecodingBackendVTables, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, customDecodingBackendCount, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pCustomDecodingBackendUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, resampling, ma_resampler_config, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resource_manager_data_source_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePath, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePathW, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pNotifications, ma_resource_manager_pipeline_notifications, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, initialSeekPointInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rangeBegInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rangeEndInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopPointBegInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopPointEndInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isLooping, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resource_manager_pipeline_notifications___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, init, ma_resource_manager_pipeline_stage_notification, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, done, ma_resource_manager_pipeline_stage_notification, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_resource_manager_pipeline_stage_notification___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pNotification, ma_async_notification, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pFence, ma_fence, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_slot_allocator_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, capacity, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_sound_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePath, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pFilePathW, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDataSource, ma_data_source, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pInitialAttachment, ma_node, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, initialAttachmentInputBusIndex, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, monoExpansionMode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, volumeSmoothTimeInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, initialSeekPointInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rangeBegInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rangeEndInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopPointBegInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, loopPointEndInPCMFrames, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, endCallback, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pEndCallbackUserData, IS_MIXED, 0, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pitchResampling, ma_resampler_config, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, initNotifications, ma_resource_manager_pipeline_notifications, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, pDoneFence, ma_fence, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isLooping, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_ma_sound_group_config___construct arginfo_class_ma_sound_config___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_spatializer_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsIn, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMapIn, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, attenuationModel, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, positioning, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, handedness, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, minGain, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, maxGain, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, minDistance, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, maxDistance, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rolloff, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coneInnerAngleInRadians, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coneOuterAngleInRadians, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coneOuterGain, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dopplerFactor, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, directionalAttenuationFactor, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, minSpatializationChannelGain, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, gainSmoothTimeInFrames, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_spatializer_listener_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channelsOut, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pChannelMapOut, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, handedness, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coneInnerAngleInRadians, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coneOuterAngleInRadians, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, coneOuterGain, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, speedOfSound, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, worldUp, ma_vec3f, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_splitter_node_config___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, nodeConfig, ma_node_config, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, outputBusCount, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_vec3f___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, z, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_vfs_callbacks___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onOpen, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onOpenW, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onClose, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onRead, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onWrite, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onSeek, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onTell, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, onInfo, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ma_waveform_config___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sampleRate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, amplitude, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frequency, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_METHOD(ma_allocation_callbacks, __construct);
ZEND_METHOD(ma_async_notification_callbacks, __construct);
ZEND_METHOD(ma_audio_buffer_config, __construct);
ZEND_METHOD(ma_backend_callbacks, __construct);
ZEND_METHOD(ma_biquad_config, __construct);
ZEND_METHOD(ma_biquad_node_config, __construct);
ZEND_METHOD(ma_bpf2_config, __construct);
ZEND_METHOD(ma_bpf_config, __construct);
ZEND_METHOD(ma_bpf_node_config, __construct);
ZEND_METHOD(ma_channel_converter_config, __construct);
ZEND_METHOD(ma_context_config, __construct);
ZEND_METHOD(ma_context_config_alsa, __construct);
ZEND_METHOD(ma_context_config_coreaudio, __construct);
ZEND_METHOD(ma_context_config_dsound, __construct);
ZEND_METHOD(ma_context_config_jack, __construct);
ZEND_METHOD(ma_context_config_pulse, __construct);
ZEND_METHOD(ma_data_converter_config, __construct);
ZEND_METHOD(ma_data_source_config, __construct);
ZEND_METHOD(ma_data_source_node_config, __construct);
ZEND_METHOD(ma_data_source_vtable, __construct);
ZEND_METHOD(ma_decoder_config, __construct);
ZEND_METHOD(ma_decoding_backend_config, __construct);
ZEND_METHOD(ma_decoding_backend_vtable, __construct);
ZEND_METHOD(ma_delay_config, __construct);
ZEND_METHOD(ma_delay_node_config, __construct);
ZEND_METHOD(ma_device_config, __construct);
ZEND_METHOD(ma_device_config_aaudio, __construct);
ZEND_METHOD(ma_device_config_alsa, __construct);
ZEND_METHOD(ma_device_config_capture, __construct);
ZEND_METHOD(ma_device_config_coreaudio, __construct);
ZEND_METHOD(ma_device_config_opensl, __construct);
ZEND_METHOD(ma_device_config_playback, __construct);
ZEND_METHOD(ma_device_config_pulse, __construct);
ZEND_METHOD(ma_device_config_wasapi, __construct);
ZEND_METHOD(ma_device_descriptor, __construct);
ZEND_METHOD(ma_device_id, __construct);
ZEND_METHOD(ma_device_id_custom, __construct);
ZEND_METHOD(ma_device_info, __construct);
ZEND_METHOD(ma_device_info_nativeDataFormats, __construct);
ZEND_METHOD(ma_device_job_thread_config, __construct);
ZEND_METHOD(ma_device_notification, __construct);
ZEND_METHOD(ma_device_notification_data, __construct);
ZEND_METHOD(ma_device_notification_data_interruption, __construct);
ZEND_METHOD(ma_device_notification_data_rerouted, __construct);
ZEND_METHOD(ma_device_notification_data_started, __construct);
ZEND_METHOD(ma_device_notification_data_stopped, __construct);
ZEND_METHOD(ma_encoder_config, __construct);
ZEND_METHOD(ma_engine_config, __construct);
ZEND_METHOD(ma_engine_node_config, __construct);
ZEND_METHOD(ma_fader_config, __construct);
ZEND_METHOD(ma_file_info, __construct);
ZEND_METHOD(ma_gainer_config, __construct);
ZEND_METHOD(ma_hishelf2_config, __construct);
ZEND_METHOD(ma_hishelf_config, __construct);
ZEND_METHOD(ma_hishelf_node_config, __construct);
ZEND_METHOD(ma_hpf1_config, __construct);
ZEND_METHOD(ma_hpf2_config, __construct);
ZEND_METHOD(ma_hpf_config, __construct);
ZEND_METHOD(ma_hpf_node_config, __construct);
ZEND_METHOD(ma_job, __construct);
ZEND_METHOD(ma_job_data, __construct);
ZEND_METHOD(ma_job_data_custom, __construct);
ZEND_METHOD(ma_job_data_device, __construct);
ZEND_METHOD(ma_job_data_device_aaudio, __construct);
ZEND_METHOD(ma_job_data_device_aaudio_reroute, __construct);
ZEND_METHOD(ma_job_data_resourceManager, __construct);
ZEND_METHOD(ma_job_data_resourceManager_freeDataBuffer, __construct);
ZEND_METHOD(ma_job_data_resourceManager_freeDataBufferNode, __construct);
ZEND_METHOD(ma_job_data_resourceManager_freeDataStream, __construct);
ZEND_METHOD(ma_job_data_resourceManager_loadDataBuffer, __construct);
ZEND_METHOD(ma_job_data_resourceManager_loadDataBufferNode, __construct);
ZEND_METHOD(ma_job_data_resourceManager_loadDataStream, __construct);
ZEND_METHOD(ma_job_data_resourceManager_pageDataBufferNode, __construct);
ZEND_METHOD(ma_job_data_resourceManager_pageDataStream, __construct);
ZEND_METHOD(ma_job_data_resourceManager_seekDataStream, __construct);
ZEND_METHOD(ma_job_queue_config, __construct);
ZEND_METHOD(ma_job_toc, __construct);
ZEND_METHOD(ma_job_toc_breakup, __construct);
ZEND_METHOD(ma_linear_resampler_config, __construct);
ZEND_METHOD(ma_log_callback, __construct);
ZEND_METHOD(ma_loshelf2_config, __construct);
ZEND_METHOD(ma_loshelf_config, __construct);
ZEND_METHOD(ma_loshelf_node_config, __construct);
ZEND_METHOD(ma_lpf1_config, __construct);
ZEND_METHOD(ma_lpf2_config, __construct);
ZEND_METHOD(ma_lpf_config, __construct);
ZEND_METHOD(ma_lpf_node_config, __construct);
ZEND_METHOD(ma_node_config, __construct);
ZEND_METHOD(ma_node_graph_config, __construct);
ZEND_METHOD(ma_node_vtable, __construct);
ZEND_METHOD(ma_noise_config, __construct);
ZEND_METHOD(ma_notch2_config, __construct);
ZEND_METHOD(ma_notch_config, __construct);
ZEND_METHOD(ma_notch_node_config, __construct);
ZEND_METHOD(ma_paged_audio_buffer_config, __construct);
ZEND_METHOD(ma_panner_config, __construct);
ZEND_METHOD(ma_peak2_config, __construct);
ZEND_METHOD(ma_peak_config, __construct);
ZEND_METHOD(ma_peak_node_config, __construct);
ZEND_METHOD(ma_pulsewave_config, __construct);
ZEND_METHOD(ma_resampler_config, __construct);
ZEND_METHOD(ma_resampler_config_linear, __construct);
ZEND_METHOD(ma_resampling_backend_vtable, __construct);
ZEND_METHOD(ma_resource_manager_config, __construct);
ZEND_METHOD(ma_resource_manager_data_source_config, __construct);
ZEND_METHOD(ma_resource_manager_pipeline_notifications, __construct);
ZEND_METHOD(ma_resource_manager_pipeline_stage_notification, __construct);
ZEND_METHOD(ma_slot_allocator_config, __construct);
ZEND_METHOD(ma_sound_config, __construct);
ZEND_METHOD(ma_sound_group_config, __construct);
ZEND_METHOD(ma_spatializer_config, __construct);
ZEND_METHOD(ma_spatializer_listener_config, __construct);
ZEND_METHOD(ma_splitter_node_config, __construct);
ZEND_METHOD(ma_vec3f, __construct);
ZEND_METHOD(ma_vfs_callbacks, __construct);
ZEND_METHOD(ma_waveform_config, __construct);

static const zend_function_entry class_ma_allocation_callbacks_methods[] = {
	ZEND_ME(ma_allocation_callbacks, __construct, arginfo_class_ma_allocation_callbacks___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_async_notification_callbacks_methods[] = {
	ZEND_ME(ma_async_notification_callbacks, __construct, arginfo_class_ma_async_notification_callbacks___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_audio_buffer_config_methods[] = {
	ZEND_ME(ma_audio_buffer_config, __construct, arginfo_class_ma_audio_buffer_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_backend_callbacks_methods[] = {
	ZEND_ME(ma_backend_callbacks, __construct, arginfo_class_ma_backend_callbacks___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_biquad_config_methods[] = {
	ZEND_ME(ma_biquad_config, __construct, arginfo_class_ma_biquad_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_biquad_node_config_methods[] = {
	ZEND_ME(ma_biquad_node_config, __construct, arginfo_class_ma_biquad_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_bpf2_config_methods[] = {
	ZEND_ME(ma_bpf2_config, __construct, arginfo_class_ma_bpf2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_bpf_config_methods[] = {
	ZEND_ME(ma_bpf_config, __construct, arginfo_class_ma_bpf_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_bpf_node_config_methods[] = {
	ZEND_ME(ma_bpf_node_config, __construct, arginfo_class_ma_bpf_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_channel_converter_config_methods[] = {
	ZEND_ME(ma_channel_converter_config, __construct, arginfo_class_ma_channel_converter_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_context_config_methods[] = {
	ZEND_ME(ma_context_config, __construct, arginfo_class_ma_context_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_context_config_alsa_methods[] = {
	ZEND_ME(ma_context_config_alsa, __construct, arginfo_class_ma_context_config_alsa___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_context_config_coreaudio_methods[] = {
	ZEND_ME(ma_context_config_coreaudio, __construct, arginfo_class_ma_context_config_coreaudio___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_context_config_dsound_methods[] = {
	ZEND_ME(ma_context_config_dsound, __construct, arginfo_class_ma_context_config_dsound___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_context_config_jack_methods[] = {
	ZEND_ME(ma_context_config_jack, __construct, arginfo_class_ma_context_config_jack___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_context_config_pulse_methods[] = {
	ZEND_ME(ma_context_config_pulse, __construct, arginfo_class_ma_context_config_pulse___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_data_converter_config_methods[] = {
	ZEND_ME(ma_data_converter_config, __construct, arginfo_class_ma_data_converter_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_data_source_config_methods[] = {
	ZEND_ME(ma_data_source_config, __construct, arginfo_class_ma_data_source_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_data_source_node_config_methods[] = {
	ZEND_ME(ma_data_source_node_config, __construct, arginfo_class_ma_data_source_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_data_source_vtable_methods[] = {
	ZEND_ME(ma_data_source_vtable, __construct, arginfo_class_ma_data_source_vtable___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_decoder_config_methods[] = {
	ZEND_ME(ma_decoder_config, __construct, arginfo_class_ma_decoder_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_decoding_backend_config_methods[] = {
	ZEND_ME(ma_decoding_backend_config, __construct, arginfo_class_ma_decoding_backend_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_decoding_backend_vtable_methods[] = {
	ZEND_ME(ma_decoding_backend_vtable, __construct, arginfo_class_ma_decoding_backend_vtable___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_delay_config_methods[] = {
	ZEND_ME(ma_delay_config, __construct, arginfo_class_ma_delay_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_delay_node_config_methods[] = {
	ZEND_ME(ma_delay_node_config, __construct, arginfo_class_ma_delay_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_methods[] = {
	ZEND_ME(ma_device_config, __construct, arginfo_class_ma_device_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_aaudio_methods[] = {
	ZEND_ME(ma_device_config_aaudio, __construct, arginfo_class_ma_device_config_aaudio___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_alsa_methods[] = {
	ZEND_ME(ma_device_config_alsa, __construct, arginfo_class_ma_device_config_alsa___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_capture_methods[] = {
	ZEND_ME(ma_device_config_capture, __construct, arginfo_class_ma_device_config_capture___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_coreaudio_methods[] = {
	ZEND_ME(ma_device_config_coreaudio, __construct, arginfo_class_ma_device_config_coreaudio___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_opensl_methods[] = {
	ZEND_ME(ma_device_config_opensl, __construct, arginfo_class_ma_device_config_opensl___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_playback_methods[] = {
	ZEND_ME(ma_device_config_playback, __construct, arginfo_class_ma_device_config_playback___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_pulse_methods[] = {
	ZEND_ME(ma_device_config_pulse, __construct, arginfo_class_ma_device_config_pulse___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_config_wasapi_methods[] = {
	ZEND_ME(ma_device_config_wasapi, __construct, arginfo_class_ma_device_config_wasapi___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_descriptor_methods[] = {
	ZEND_ME(ma_device_descriptor, __construct, arginfo_class_ma_device_descriptor___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_id_methods[] = {
	ZEND_ME(ma_device_id, __construct, arginfo_class_ma_device_id___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_id_custom_methods[] = {
	ZEND_ME(ma_device_id_custom, __construct, arginfo_class_ma_device_id_custom___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_info_methods[] = {
	ZEND_ME(ma_device_info, __construct, arginfo_class_ma_device_info___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_info_nativeDataFormats_methods[] = {
	ZEND_ME(ma_device_info_nativeDataFormats, __construct, arginfo_class_ma_device_info_nativeDataFormats___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_job_thread_config_methods[] = {
	ZEND_ME(ma_device_job_thread_config, __construct, arginfo_class_ma_device_job_thread_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_notification_methods[] = {
	ZEND_ME(ma_device_notification, __construct, arginfo_class_ma_device_notification___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_notification_data_methods[] = {
	ZEND_ME(ma_device_notification_data, __construct, arginfo_class_ma_device_notification_data___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_notification_data_interruption_methods[] = {
	ZEND_ME(ma_device_notification_data_interruption, __construct, arginfo_class_ma_device_notification_data_interruption___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_notification_data_rerouted_methods[] = {
	ZEND_ME(ma_device_notification_data_rerouted, __construct, arginfo_class_ma_device_notification_data_rerouted___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_notification_data_started_methods[] = {
	ZEND_ME(ma_device_notification_data_started, __construct, arginfo_class_ma_device_notification_data_started___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_device_notification_data_stopped_methods[] = {
	ZEND_ME(ma_device_notification_data_stopped, __construct, arginfo_class_ma_device_notification_data_stopped___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_encoder_config_methods[] = {
	ZEND_ME(ma_encoder_config, __construct, arginfo_class_ma_encoder_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_engine_config_methods[] = {
	ZEND_ME(ma_engine_config, __construct, arginfo_class_ma_engine_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_engine_node_config_methods[] = {
	ZEND_ME(ma_engine_node_config, __construct, arginfo_class_ma_engine_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_fader_config_methods[] = {
	ZEND_ME(ma_fader_config, __construct, arginfo_class_ma_fader_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_file_info_methods[] = {
	ZEND_ME(ma_file_info, __construct, arginfo_class_ma_file_info___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_gainer_config_methods[] = {
	ZEND_ME(ma_gainer_config, __construct, arginfo_class_ma_gainer_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hishelf2_config_methods[] = {
	ZEND_ME(ma_hishelf2_config, __construct, arginfo_class_ma_hishelf2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hishelf_config_methods[] = {
	ZEND_ME(ma_hishelf_config, __construct, arginfo_class_ma_hishelf_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hishelf_node_config_methods[] = {
	ZEND_ME(ma_hishelf_node_config, __construct, arginfo_class_ma_hishelf_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hpf1_config_methods[] = {
	ZEND_ME(ma_hpf1_config, __construct, arginfo_class_ma_hpf1_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hpf2_config_methods[] = {
	ZEND_ME(ma_hpf2_config, __construct, arginfo_class_ma_hpf2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hpf_config_methods[] = {
	ZEND_ME(ma_hpf_config, __construct, arginfo_class_ma_hpf_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_hpf_node_config_methods[] = {
	ZEND_ME(ma_hpf_node_config, __construct, arginfo_class_ma_hpf_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_methods[] = {
	ZEND_ME(ma_job, __construct, arginfo_class_ma_job___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_methods[] = {
	ZEND_ME(ma_job_data, __construct, arginfo_class_ma_job_data___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_custom_methods[] = {
	ZEND_ME(ma_job_data_custom, __construct, arginfo_class_ma_job_data_custom___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_device_methods[] = {
	ZEND_ME(ma_job_data_device, __construct, arginfo_class_ma_job_data_device___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_device_aaudio_methods[] = {
	ZEND_ME(ma_job_data_device_aaudio, __construct, arginfo_class_ma_job_data_device_aaudio___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_device_aaudio_reroute_methods[] = {
	ZEND_ME(ma_job_data_device_aaudio_reroute, __construct, arginfo_class_ma_job_data_device_aaudio_reroute___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_methods[] = {
	ZEND_ME(ma_job_data_resourceManager, __construct, arginfo_class_ma_job_data_resourceManager___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_freeDataBuffer_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_freeDataBuffer, __construct, arginfo_class_ma_job_data_resourceManager_freeDataBuffer___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_freeDataBufferNode_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_freeDataBufferNode, __construct, arginfo_class_ma_job_data_resourceManager_freeDataBufferNode___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_freeDataStream_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_freeDataStream, __construct, arginfo_class_ma_job_data_resourceManager_freeDataStream___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_loadDataBuffer_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_loadDataBuffer, __construct, arginfo_class_ma_job_data_resourceManager_loadDataBuffer___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_loadDataBufferNode_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_loadDataBufferNode, __construct, arginfo_class_ma_job_data_resourceManager_loadDataBufferNode___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_loadDataStream_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_loadDataStream, __construct, arginfo_class_ma_job_data_resourceManager_loadDataStream___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_pageDataBufferNode_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_pageDataBufferNode, __construct, arginfo_class_ma_job_data_resourceManager_pageDataBufferNode___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_pageDataStream_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_pageDataStream, __construct, arginfo_class_ma_job_data_resourceManager_pageDataStream___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_data_resourceManager_seekDataStream_methods[] = {
	ZEND_ME(ma_job_data_resourceManager_seekDataStream, __construct, arginfo_class_ma_job_data_resourceManager_seekDataStream___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_queue_config_methods[] = {
	ZEND_ME(ma_job_queue_config, __construct, arginfo_class_ma_job_queue_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_toc_methods[] = {
	ZEND_ME(ma_job_toc, __construct, arginfo_class_ma_job_toc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_job_toc_breakup_methods[] = {
	ZEND_ME(ma_job_toc_breakup, __construct, arginfo_class_ma_job_toc_breakup___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_linear_resampler_config_methods[] = {
	ZEND_ME(ma_linear_resampler_config, __construct, arginfo_class_ma_linear_resampler_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_log_callback_methods[] = {
	ZEND_ME(ma_log_callback, __construct, arginfo_class_ma_log_callback___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_loshelf2_config_methods[] = {
	ZEND_ME(ma_loshelf2_config, __construct, arginfo_class_ma_loshelf2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_loshelf_config_methods[] = {
	ZEND_ME(ma_loshelf_config, __construct, arginfo_class_ma_loshelf_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_loshelf_node_config_methods[] = {
	ZEND_ME(ma_loshelf_node_config, __construct, arginfo_class_ma_loshelf_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_lpf1_config_methods[] = {
	ZEND_ME(ma_lpf1_config, __construct, arginfo_class_ma_lpf1_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_lpf2_config_methods[] = {
	ZEND_ME(ma_lpf2_config, __construct, arginfo_class_ma_lpf2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_lpf_config_methods[] = {
	ZEND_ME(ma_lpf_config, __construct, arginfo_class_ma_lpf_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_lpf_node_config_methods[] = {
	ZEND_ME(ma_lpf_node_config, __construct, arginfo_class_ma_lpf_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_node_config_methods[] = {
	ZEND_ME(ma_node_config, __construct, arginfo_class_ma_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_node_graph_config_methods[] = {
	ZEND_ME(ma_node_graph_config, __construct, arginfo_class_ma_node_graph_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_node_vtable_methods[] = {
	ZEND_ME(ma_node_vtable, __construct, arginfo_class_ma_node_vtable___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_noise_config_methods[] = {
	ZEND_ME(ma_noise_config, __construct, arginfo_class_ma_noise_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_notch2_config_methods[] = {
	ZEND_ME(ma_notch2_config, __construct, arginfo_class_ma_notch2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_notch_config_methods[] = {
	ZEND_ME(ma_notch_config, __construct, arginfo_class_ma_notch_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_notch_node_config_methods[] = {
	ZEND_ME(ma_notch_node_config, __construct, arginfo_class_ma_notch_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_paged_audio_buffer_config_methods[] = {
	ZEND_ME(ma_paged_audio_buffer_config, __construct, arginfo_class_ma_paged_audio_buffer_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_panner_config_methods[] = {
	ZEND_ME(ma_panner_config, __construct, arginfo_class_ma_panner_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_peak2_config_methods[] = {
	ZEND_ME(ma_peak2_config, __construct, arginfo_class_ma_peak2_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_peak_config_methods[] = {
	ZEND_ME(ma_peak_config, __construct, arginfo_class_ma_peak_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_peak_node_config_methods[] = {
	ZEND_ME(ma_peak_node_config, __construct, arginfo_class_ma_peak_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_pulsewave_config_methods[] = {
	ZEND_ME(ma_pulsewave_config, __construct, arginfo_class_ma_pulsewave_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resampler_config_methods[] = {
	ZEND_ME(ma_resampler_config, __construct, arginfo_class_ma_resampler_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resampler_config_linear_methods[] = {
	ZEND_ME(ma_resampler_config_linear, __construct, arginfo_class_ma_resampler_config_linear___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resampling_backend_vtable_methods[] = {
	ZEND_ME(ma_resampling_backend_vtable, __construct, arginfo_class_ma_resampling_backend_vtable___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resource_manager_config_methods[] = {
	ZEND_ME(ma_resource_manager_config, __construct, arginfo_class_ma_resource_manager_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resource_manager_data_source_config_methods[] = {
	ZEND_ME(ma_resource_manager_data_source_config, __construct, arginfo_class_ma_resource_manager_data_source_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resource_manager_pipeline_notifications_methods[] = {
	ZEND_ME(ma_resource_manager_pipeline_notifications, __construct, arginfo_class_ma_resource_manager_pipeline_notifications___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_resource_manager_pipeline_stage_notification_methods[] = {
	ZEND_ME(ma_resource_manager_pipeline_stage_notification, __construct, arginfo_class_ma_resource_manager_pipeline_stage_notification___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_slot_allocator_config_methods[] = {
	ZEND_ME(ma_slot_allocator_config, __construct, arginfo_class_ma_slot_allocator_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_sound_config_methods[] = {
	ZEND_ME(ma_sound_config, __construct, arginfo_class_ma_sound_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_sound_group_config_methods[] = {
	ZEND_ME(ma_sound_group_config, __construct, arginfo_class_ma_sound_group_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_spatializer_config_methods[] = {
	ZEND_ME(ma_spatializer_config, __construct, arginfo_class_ma_spatializer_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_spatializer_listener_config_methods[] = {
	ZEND_ME(ma_spatializer_listener_config, __construct, arginfo_class_ma_spatializer_listener_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_splitter_node_config_methods[] = {
	ZEND_ME(ma_splitter_node_config, __construct, arginfo_class_ma_splitter_node_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_vec3f_methods[] = {
	ZEND_ME(ma_vec3f, __construct, arginfo_class_ma_vec3f___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_vfs_callbacks_methods[] = {
	ZEND_ME(ma_vfs_callbacks, __construct, arginfo_class_ma_vfs_callbacks___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_waveform_config_methods[] = {
	ZEND_ME(ma_waveform_config, __construct, arginfo_class_ma_waveform_config___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_ma_data_source(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_source", NULL);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_ma_node(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_node", NULL);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_ma_vfs(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_vfs", NULL);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_ma_async_notification(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_async_notification", NULL);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_ma_allocation_callbacks(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_allocation_callbacks", class_ma_allocation_callbacks_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pUserData_default_value;
	ZVAL_NULL(&property_pUserData_default_value);
	zend_string *property_pUserData_name = zend_string_init("pUserData", sizeof("pUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pUserData_name, &property_pUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pUserData_name);

	zval property_onMalloc_default_value;
	ZVAL_NULL(&property_onMalloc_default_value);
	zend_string *property_onMalloc_name = zend_string_init("onMalloc", sizeof("onMalloc") - 1, 1);
	zend_string *property_onMalloc_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onMalloc_name, &property_onMalloc_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onMalloc_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onMalloc_name);

	zval property_onRealloc_default_value;
	ZVAL_NULL(&property_onRealloc_default_value);
	zend_string *property_onRealloc_name = zend_string_init("onRealloc", sizeof("onRealloc") - 1, 1);
	zend_string *property_onRealloc_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onRealloc_name, &property_onRealloc_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onRealloc_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onRealloc_name);

	zval property_onFree_default_value;
	ZVAL_NULL(&property_onFree_default_value);
	zend_string *property_onFree_name = zend_string_init("onFree", sizeof("onFree") - 1, 1);
	zend_string *property_onFree_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onFree_name, &property_onFree_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onFree_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onFree_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_async_notification_callbacks(zend_class_entry *class_entry_ma_async_notification)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_async_notification_callbacks", class_ma_async_notification_callbacks_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);
	zend_class_implements(class_entry, 1, class_entry_ma_async_notification);

	zval property_onSignal_default_value;
	ZVAL_NULL(&property_onSignal_default_value);
	zend_string *property_onSignal_name = zend_string_init("onSignal", sizeof("onSignal") - 1, 1);
	zend_string *property_onSignal_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onSignal_name, &property_onSignal_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onSignal_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onSignal_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_audio_buffer_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_audio_buffer_config", class_ma_audio_buffer_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_sizeInFrames_default_value;
	ZVAL_LONG(&property_sizeInFrames_default_value, 0);
	zend_string *property_sizeInFrames_name = zend_string_init("sizeInFrames", sizeof("sizeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_sizeInFrames_name, &property_sizeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sizeInFrames_name);

	zval property_pData_default_value;
	ZVAL_NULL(&property_pData_default_value);
	zend_string *property_pData_name = zend_string_init("pData", sizeof("pData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pData_name, &property_pData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pData_name);

	zval property_allocationCallbacks_default_value;
	ZVAL_UNDEF(&property_allocationCallbacks_default_value);
	zend_string *property_allocationCallbacks_name = zend_string_init("allocationCallbacks", sizeof("allocationCallbacks") - 1, 1);
	zend_string *property_allocationCallbacks_class_ma_allocation_callbacks = zend_string_init("ma_allocation_callbacks", sizeof("ma_allocation_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_allocationCallbacks_name, &property_allocationCallbacks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_allocationCallbacks_class_ma_allocation_callbacks, 0, 0));
	zend_string_release(property_allocationCallbacks_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_backend_callbacks(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_backend_callbacks", class_ma_backend_callbacks_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_onContextInit_default_value;
	ZVAL_NULL(&property_onContextInit_default_value);
	zend_string *property_onContextInit_name = zend_string_init("onContextInit", sizeof("onContextInit") - 1, 1);
	zend_string *property_onContextInit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onContextInit_name, &property_onContextInit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onContextInit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onContextInit_name);

	zval property_onContextUninit_default_value;
	ZVAL_NULL(&property_onContextUninit_default_value);
	zend_string *property_onContextUninit_name = zend_string_init("onContextUninit", sizeof("onContextUninit") - 1, 1);
	zend_string *property_onContextUninit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onContextUninit_name, &property_onContextUninit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onContextUninit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onContextUninit_name);

	zval property_onContextEnumerateDevices_default_value;
	ZVAL_NULL(&property_onContextEnumerateDevices_default_value);
	zend_string *property_onContextEnumerateDevices_name = zend_string_init("onContextEnumerateDevices", sizeof("onContextEnumerateDevices") - 1, 1);
	zend_string *property_onContextEnumerateDevices_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onContextEnumerateDevices_name, &property_onContextEnumerateDevices_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onContextEnumerateDevices_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onContextEnumerateDevices_name);

	zval property_onContextGetDeviceInfo_default_value;
	ZVAL_NULL(&property_onContextGetDeviceInfo_default_value);
	zend_string *property_onContextGetDeviceInfo_name = zend_string_init("onContextGetDeviceInfo", sizeof("onContextGetDeviceInfo") - 1, 1);
	zend_string *property_onContextGetDeviceInfo_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onContextGetDeviceInfo_name, &property_onContextGetDeviceInfo_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onContextGetDeviceInfo_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onContextGetDeviceInfo_name);

	zval property_onDeviceInit_default_value;
	ZVAL_NULL(&property_onDeviceInit_default_value);
	zend_string *property_onDeviceInit_name = zend_string_init("onDeviceInit", sizeof("onDeviceInit") - 1, 1);
	zend_string *property_onDeviceInit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceInit_name, &property_onDeviceInit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceInit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceInit_name);

	zval property_onDeviceUninit_default_value;
	ZVAL_NULL(&property_onDeviceUninit_default_value);
	zend_string *property_onDeviceUninit_name = zend_string_init("onDeviceUninit", sizeof("onDeviceUninit") - 1, 1);
	zend_string *property_onDeviceUninit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceUninit_name, &property_onDeviceUninit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceUninit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceUninit_name);

	zval property_onDeviceStart_default_value;
	ZVAL_NULL(&property_onDeviceStart_default_value);
	zend_string *property_onDeviceStart_name = zend_string_init("onDeviceStart", sizeof("onDeviceStart") - 1, 1);
	zend_string *property_onDeviceStart_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceStart_name, &property_onDeviceStart_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceStart_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceStart_name);

	zval property_onDeviceStop_default_value;
	ZVAL_NULL(&property_onDeviceStop_default_value);
	zend_string *property_onDeviceStop_name = zend_string_init("onDeviceStop", sizeof("onDeviceStop") - 1, 1);
	zend_string *property_onDeviceStop_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceStop_name, &property_onDeviceStop_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceStop_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceStop_name);

	zval property_onDeviceRead_default_value;
	ZVAL_NULL(&property_onDeviceRead_default_value);
	zend_string *property_onDeviceRead_name = zend_string_init("onDeviceRead", sizeof("onDeviceRead") - 1, 1);
	zend_string *property_onDeviceRead_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceRead_name, &property_onDeviceRead_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceRead_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceRead_name);

	zval property_onDeviceWrite_default_value;
	ZVAL_NULL(&property_onDeviceWrite_default_value);
	zend_string *property_onDeviceWrite_name = zend_string_init("onDeviceWrite", sizeof("onDeviceWrite") - 1, 1);
	zend_string *property_onDeviceWrite_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceWrite_name, &property_onDeviceWrite_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceWrite_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceWrite_name);

	zval property_onDeviceDataLoop_default_value;
	ZVAL_NULL(&property_onDeviceDataLoop_default_value);
	zend_string *property_onDeviceDataLoop_name = zend_string_init("onDeviceDataLoop", sizeof("onDeviceDataLoop") - 1, 1);
	zend_string *property_onDeviceDataLoop_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceDataLoop_name, &property_onDeviceDataLoop_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceDataLoop_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceDataLoop_name);

	zval property_onDeviceDataLoopWakeup_default_value;
	ZVAL_NULL(&property_onDeviceDataLoopWakeup_default_value);
	zend_string *property_onDeviceDataLoopWakeup_name = zend_string_init("onDeviceDataLoopWakeup", sizeof("onDeviceDataLoopWakeup") - 1, 1);
	zend_string *property_onDeviceDataLoopWakeup_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceDataLoopWakeup_name, &property_onDeviceDataLoopWakeup_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceDataLoopWakeup_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceDataLoopWakeup_name);

	zval property_onDeviceGetInfo_default_value;
	ZVAL_NULL(&property_onDeviceGetInfo_default_value);
	zend_string *property_onDeviceGetInfo_name = zend_string_init("onDeviceGetInfo", sizeof("onDeviceGetInfo") - 1, 1);
	zend_string *property_onDeviceGetInfo_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onDeviceGetInfo_name, &property_onDeviceGetInfo_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onDeviceGetInfo_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onDeviceGetInfo_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_biquad_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_biquad_config", class_ma_biquad_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_b0_default_value;
	ZVAL_DOUBLE(&property_b0_default_value, 0.0);
	zend_string *property_b0_name = zend_string_init("b0", sizeof("b0") - 1, 1);
	zend_declare_typed_property(class_entry, property_b0_name, &property_b0_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_b0_name);

	zval property_b1_default_value;
	ZVAL_DOUBLE(&property_b1_default_value, 0.0);
	zend_string *property_b1_name = zend_string_init("b1", sizeof("b1") - 1, 1);
	zend_declare_typed_property(class_entry, property_b1_name, &property_b1_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_b1_name);

	zval property_b2_default_value;
	ZVAL_DOUBLE(&property_b2_default_value, 0.0);
	zend_string *property_b2_name = zend_string_init("b2", sizeof("b2") - 1, 1);
	zend_declare_typed_property(class_entry, property_b2_name, &property_b2_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_b2_name);

	zval property_a0_default_value;
	ZVAL_DOUBLE(&property_a0_default_value, 0.0);
	zend_string *property_a0_name = zend_string_init("a0", sizeof("a0") - 1, 1);
	zend_declare_typed_property(class_entry, property_a0_name, &property_a0_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_a0_name);

	zval property_a1_default_value;
	ZVAL_DOUBLE(&property_a1_default_value, 0.0);
	zend_string *property_a1_name = zend_string_init("a1", sizeof("a1") - 1, 1);
	zend_declare_typed_property(class_entry, property_a1_name, &property_a1_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_a1_name);

	zval property_a2_default_value;
	ZVAL_DOUBLE(&property_a2_default_value, 0.0);
	zend_string *property_a2_name = zend_string_init("a2", sizeof("a2") - 1, 1);
	zend_declare_typed_property(class_entry, property_a2_name, &property_a2_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_a2_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_biquad_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_biquad_node_config", class_ma_biquad_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_biquad_default_value;
	ZVAL_UNDEF(&property_biquad_default_value);
	zend_string *property_biquad_name = zend_string_init("biquad", sizeof("biquad") - 1, 1);
	zend_string *property_biquad_class_ma_biquad_config = zend_string_init("ma_biquad_config", sizeof("ma_biquad_config")-1, 1);
	zend_declare_typed_property(class_entry, property_biquad_name, &property_biquad_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_biquad_class_ma_biquad_config, 0, 0));
	zend_string_release(property_biquad_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_bpf2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_bpf2_config", class_ma_bpf2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_bpf_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_bpf_config", class_ma_bpf_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_order_default_value;
	ZVAL_LONG(&property_order_default_value, 0);
	zend_string *property_order_name = zend_string_init("order", sizeof("order") - 1, 1);
	zend_declare_typed_property(class_entry, property_order_name, &property_order_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_order_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_bpf_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_bpf_node_config", class_ma_bpf_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_bpf_default_value;
	ZVAL_UNDEF(&property_bpf_default_value);
	zend_string *property_bpf_name = zend_string_init("bpf", sizeof("bpf") - 1, 1);
	zend_string *property_bpf_class_ma_bpf_config = zend_string_init("ma_bpf_config", sizeof("ma_bpf_config")-1, 1);
	zend_declare_typed_property(class_entry, property_bpf_name, &property_bpf_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_bpf_class_ma_bpf_config, 0, 0));
	zend_string_release(property_bpf_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_channel_converter_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_channel_converter_config", class_ma_channel_converter_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channelsIn_default_value;
	ZVAL_LONG(&property_channelsIn_default_value, 0);
	zend_string *property_channelsIn_name = zend_string_init("channelsIn", sizeof("channelsIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsIn_name, &property_channelsIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsIn_name);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_pChannelMapIn_default_value;
	ZVAL_NULL(&property_pChannelMapIn_default_value);
	zend_string *property_pChannelMapIn_name = zend_string_init("pChannelMapIn", sizeof("pChannelMapIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMapIn_name, &property_pChannelMapIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMapIn_name);

	zval property_pChannelMapOut_default_value;
	ZVAL_NULL(&property_pChannelMapOut_default_value);
	zend_string *property_pChannelMapOut_name = zend_string_init("pChannelMapOut", sizeof("pChannelMapOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMapOut_name, &property_pChannelMapOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMapOut_name);

	zval property_mixingMode_default_value;
	ZVAL_LONG(&property_mixingMode_default_value, 0);
	zend_string *property_mixingMode_name = zend_string_init("mixingMode", sizeof("mixingMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_mixingMode_name, &property_mixingMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_mixingMode_name);

	zval property_calculateLFEFromSpatialChannels_default_value;
	ZVAL_FALSE(&property_calculateLFEFromSpatialChannels_default_value);
	zend_string *property_calculateLFEFromSpatialChannels_name = zend_string_init("calculateLFEFromSpatialChannels", sizeof("calculateLFEFromSpatialChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_calculateLFEFromSpatialChannels_name, &property_calculateLFEFromSpatialChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_calculateLFEFromSpatialChannels_name);

	zval property_ppWeights_default_value;
	ZVAL_NULL(&property_ppWeights_default_value);
	zend_string *property_ppWeights_name = zend_string_init("ppWeights", sizeof("ppWeights") - 1, 1);
	zend_declare_typed_property(class_entry, property_ppWeights_name, &property_ppWeights_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_ppWeights_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_context_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context_config", class_ma_context_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pLog_default_value;
	ZVAL_NULL(&property_pLog_default_value);
	zend_string *property_pLog_name = zend_string_init("pLog", sizeof("pLog") - 1, 1);
	zend_string *property_pLog_class_ma_log = zend_string_init("ma_log", sizeof("ma_log")-1, 1);
	zend_declare_typed_property(class_entry, property_pLog_name, &property_pLog_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pLog_class_ma_log, 0, MAY_BE_NULL));
	zend_string_release(property_pLog_name);

	zval property_threadPriority_default_value;
	ZVAL_LONG(&property_threadPriority_default_value, 0);
	zend_string *property_threadPriority_name = zend_string_init("threadPriority", sizeof("threadPriority") - 1, 1);
	zend_declare_typed_property(class_entry, property_threadPriority_name, &property_threadPriority_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_threadPriority_name);

	zval property_threadStackSize_default_value;
	ZVAL_LONG(&property_threadStackSize_default_value, 0);
	zend_string *property_threadStackSize_name = zend_string_init("threadStackSize", sizeof("threadStackSize") - 1, 1);
	zend_declare_typed_property(class_entry, property_threadStackSize_name, &property_threadStackSize_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_threadStackSize_name);

	zval property_pUserData_default_value;
	ZVAL_NULL(&property_pUserData_default_value);
	zend_string *property_pUserData_name = zend_string_init("pUserData", sizeof("pUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pUserData_name, &property_pUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pUserData_name);

	zval property_allocationCallbacks_default_value;
	ZVAL_UNDEF(&property_allocationCallbacks_default_value);
	zend_string *property_allocationCallbacks_name = zend_string_init("allocationCallbacks", sizeof("allocationCallbacks") - 1, 1);
	zend_string *property_allocationCallbacks_class_ma_allocation_callbacks = zend_string_init("ma_allocation_callbacks", sizeof("ma_allocation_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_allocationCallbacks_name, &property_allocationCallbacks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_allocationCallbacks_class_ma_allocation_callbacks, 0, 0));
	zend_string_release(property_allocationCallbacks_name);

	zval property_dsound_default_value;
	ZVAL_UNDEF(&property_dsound_default_value);
	zend_string *property_dsound_name = zend_string_init("dsound", sizeof("dsound") - 1, 1);
	zend_string *property_dsound_class_ma_context_config_dsound = zend_string_init("ma_context_config_dsound", sizeof("ma_context_config_dsound")-1, 1);
	zend_declare_typed_property(class_entry, property_dsound_name, &property_dsound_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_dsound_class_ma_context_config_dsound, 0, 0));
	zend_string_release(property_dsound_name);

	zval property_alsa_default_value;
	ZVAL_UNDEF(&property_alsa_default_value);
	zend_string *property_alsa_name = zend_string_init("alsa", sizeof("alsa") - 1, 1);
	zend_string *property_alsa_class_ma_context_config_alsa = zend_string_init("ma_context_config_alsa", sizeof("ma_context_config_alsa")-1, 1);
	zend_declare_typed_property(class_entry, property_alsa_name, &property_alsa_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_alsa_class_ma_context_config_alsa, 0, 0));
	zend_string_release(property_alsa_name);

	zval property_pulse_default_value;
	ZVAL_UNDEF(&property_pulse_default_value);
	zend_string *property_pulse_name = zend_string_init("pulse", sizeof("pulse") - 1, 1);
	zend_string *property_pulse_class_ma_context_config_pulse = zend_string_init("ma_context_config_pulse", sizeof("ma_context_config_pulse")-1, 1);
	zend_declare_typed_property(class_entry, property_pulse_name, &property_pulse_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pulse_class_ma_context_config_pulse, 0, 0));
	zend_string_release(property_pulse_name);

	zval property_coreaudio_default_value;
	ZVAL_UNDEF(&property_coreaudio_default_value);
	zend_string *property_coreaudio_name = zend_string_init("coreaudio", sizeof("coreaudio") - 1, 1);
	zend_string *property_coreaudio_class_ma_context_config_coreaudio = zend_string_init("ma_context_config_coreaudio", sizeof("ma_context_config_coreaudio")-1, 1);
	zend_declare_typed_property(class_entry, property_coreaudio_name, &property_coreaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_coreaudio_class_ma_context_config_coreaudio, 0, 0));
	zend_string_release(property_coreaudio_name);

	zval property_jack_default_value;
	ZVAL_UNDEF(&property_jack_default_value);
	zend_string *property_jack_name = zend_string_init("jack", sizeof("jack") - 1, 1);
	zend_string *property_jack_class_ma_context_config_jack = zend_string_init("ma_context_config_jack", sizeof("ma_context_config_jack")-1, 1);
	zend_declare_typed_property(class_entry, property_jack_name, &property_jack_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_jack_class_ma_context_config_jack, 0, 0));
	zend_string_release(property_jack_name);

	zval property_custom_default_value;
	ZVAL_UNDEF(&property_custom_default_value);
	zend_string *property_custom_name = zend_string_init("custom", sizeof("custom") - 1, 1);
	zend_string *property_custom_class_ma_backend_callbacks = zend_string_init("ma_backend_callbacks", sizeof("ma_backend_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_custom_name, &property_custom_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_custom_class_ma_backend_callbacks, 0, 0));
	zend_string_release(property_custom_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_context_config_alsa(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context_config_alsa", class_ma_context_config_alsa_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_useVerboseDeviceEnumeration_default_value;
	ZVAL_FALSE(&property_useVerboseDeviceEnumeration_default_value);
	zend_string *property_useVerboseDeviceEnumeration_name = zend_string_init("useVerboseDeviceEnumeration", sizeof("useVerboseDeviceEnumeration") - 1, 1);
	zend_declare_typed_property(class_entry, property_useVerboseDeviceEnumeration_name, &property_useVerboseDeviceEnumeration_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_useVerboseDeviceEnumeration_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_context_config_coreaudio(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context_config_coreaudio", class_ma_context_config_coreaudio_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_sessionCategory_default_value;
	ZVAL_LONG(&property_sessionCategory_default_value, 0);
	zend_string *property_sessionCategory_name = zend_string_init("sessionCategory", sizeof("sessionCategory") - 1, 1);
	zend_declare_typed_property(class_entry, property_sessionCategory_name, &property_sessionCategory_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sessionCategory_name);

	zval property_sessionCategoryOptions_default_value;
	ZVAL_LONG(&property_sessionCategoryOptions_default_value, 0);
	zend_string *property_sessionCategoryOptions_name = zend_string_init("sessionCategoryOptions", sizeof("sessionCategoryOptions") - 1, 1);
	zend_declare_typed_property(class_entry, property_sessionCategoryOptions_name, &property_sessionCategoryOptions_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sessionCategoryOptions_name);

	zval property_noAudioSessionActivate_default_value;
	ZVAL_FALSE(&property_noAudioSessionActivate_default_value);
	zend_string *property_noAudioSessionActivate_name = zend_string_init("noAudioSessionActivate", sizeof("noAudioSessionActivate") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAudioSessionActivate_name, &property_noAudioSessionActivate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAudioSessionActivate_name);

	zval property_noAudioSessionDeactivate_default_value;
	ZVAL_FALSE(&property_noAudioSessionDeactivate_default_value);
	zend_string *property_noAudioSessionDeactivate_name = zend_string_init("noAudioSessionDeactivate", sizeof("noAudioSessionDeactivate") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAudioSessionDeactivate_name, &property_noAudioSessionDeactivate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAudioSessionDeactivate_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_context_config_dsound(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context_config_dsound", class_ma_context_config_dsound_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_hWnd_default_value;
	ZVAL_LONG(&property_hWnd_default_value, 0);
	zend_string *property_hWnd_name = zend_string_init("hWnd", sizeof("hWnd") - 1, 1);
	zend_declare_typed_property(class_entry, property_hWnd_name, &property_hWnd_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_hWnd_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_context_config_jack(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context_config_jack", class_ma_context_config_jack_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pClientName_default_value;
	ZVAL_NULL(&property_pClientName_default_value);
	zend_string *property_pClientName_name = zend_string_init("pClientName", sizeof("pClientName") - 1, 1);
	zend_declare_typed_property(class_entry, property_pClientName_name, &property_pClientName_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pClientName_name);

	zval property_tryStartServer_default_value;
	ZVAL_FALSE(&property_tryStartServer_default_value);
	zend_string *property_tryStartServer_name = zend_string_init("tryStartServer", sizeof("tryStartServer") - 1, 1);
	zend_declare_typed_property(class_entry, property_tryStartServer_name, &property_tryStartServer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_tryStartServer_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_context_config_pulse(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context_config_pulse", class_ma_context_config_pulse_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pApplicationName_default_value;
	ZVAL_NULL(&property_pApplicationName_default_value);
	zend_string *property_pApplicationName_name = zend_string_init("pApplicationName", sizeof("pApplicationName") - 1, 1);
	zend_declare_typed_property(class_entry, property_pApplicationName_name, &property_pApplicationName_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pApplicationName_name);

	zval property_pServerName_default_value;
	ZVAL_NULL(&property_pServerName_default_value);
	zend_string *property_pServerName_name = zend_string_init("pServerName", sizeof("pServerName") - 1, 1);
	zend_declare_typed_property(class_entry, property_pServerName_name, &property_pServerName_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pServerName_name);

	zval property_tryAutoSpawn_default_value;
	ZVAL_FALSE(&property_tryAutoSpawn_default_value);
	zend_string *property_tryAutoSpawn_name = zend_string_init("tryAutoSpawn", sizeof("tryAutoSpawn") - 1, 1);
	zend_declare_typed_property(class_entry, property_tryAutoSpawn_name, &property_tryAutoSpawn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_tryAutoSpawn_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_converter_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_converter_config", class_ma_data_converter_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_formatIn_default_value;
	ZVAL_LONG(&property_formatIn_default_value, 0);
	zend_string *property_formatIn_name = zend_string_init("formatIn", sizeof("formatIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_formatIn_name, &property_formatIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_formatIn_name);

	zval property_formatOut_default_value;
	ZVAL_LONG(&property_formatOut_default_value, 0);
	zend_string *property_formatOut_name = zend_string_init("formatOut", sizeof("formatOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_formatOut_name, &property_formatOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_formatOut_name);

	zval property_channelsIn_default_value;
	ZVAL_LONG(&property_channelsIn_default_value, 0);
	zend_string *property_channelsIn_name = zend_string_init("channelsIn", sizeof("channelsIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsIn_name, &property_channelsIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsIn_name);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_sampleRateIn_default_value;
	ZVAL_LONG(&property_sampleRateIn_default_value, 0);
	zend_string *property_sampleRateIn_name = zend_string_init("sampleRateIn", sizeof("sampleRateIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRateIn_name, &property_sampleRateIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRateIn_name);

	zval property_sampleRateOut_default_value;
	ZVAL_LONG(&property_sampleRateOut_default_value, 0);
	zend_string *property_sampleRateOut_name = zend_string_init("sampleRateOut", sizeof("sampleRateOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRateOut_name, &property_sampleRateOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRateOut_name);

	zval property_pChannelMapIn_default_value;
	ZVAL_NULL(&property_pChannelMapIn_default_value);
	zend_string *property_pChannelMapIn_name = zend_string_init("pChannelMapIn", sizeof("pChannelMapIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMapIn_name, &property_pChannelMapIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMapIn_name);

	zval property_pChannelMapOut_default_value;
	ZVAL_NULL(&property_pChannelMapOut_default_value);
	zend_string *property_pChannelMapOut_name = zend_string_init("pChannelMapOut", sizeof("pChannelMapOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMapOut_name, &property_pChannelMapOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMapOut_name);

	zval property_ditherMode_default_value;
	ZVAL_LONG(&property_ditherMode_default_value, 0);
	zend_string *property_ditherMode_name = zend_string_init("ditherMode", sizeof("ditherMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_ditherMode_name, &property_ditherMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_ditherMode_name);

	zval property_channelMixMode_default_value;
	ZVAL_LONG(&property_channelMixMode_default_value, 0);
	zend_string *property_channelMixMode_name = zend_string_init("channelMixMode", sizeof("channelMixMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelMixMode_name, &property_channelMixMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelMixMode_name);

	zval property_calculateLFEFromSpatialChannels_default_value;
	ZVAL_FALSE(&property_calculateLFEFromSpatialChannels_default_value);
	zend_string *property_calculateLFEFromSpatialChannels_name = zend_string_init("calculateLFEFromSpatialChannels", sizeof("calculateLFEFromSpatialChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_calculateLFEFromSpatialChannels_name, &property_calculateLFEFromSpatialChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_calculateLFEFromSpatialChannels_name);

	zval property_ppChannelWeights_default_value;
	ZVAL_NULL(&property_ppChannelWeights_default_value);
	zend_string *property_ppChannelWeights_name = zend_string_init("ppChannelWeights", sizeof("ppChannelWeights") - 1, 1);
	zend_declare_typed_property(class_entry, property_ppChannelWeights_name, &property_ppChannelWeights_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_ppChannelWeights_name);

	zval property_allowDynamicSampleRate_default_value;
	ZVAL_FALSE(&property_allowDynamicSampleRate_default_value);
	zend_string *property_allowDynamicSampleRate_name = zend_string_init("allowDynamicSampleRate", sizeof("allowDynamicSampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_allowDynamicSampleRate_name, &property_allowDynamicSampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_allowDynamicSampleRate_name);

	zval property_resampling_default_value;
	ZVAL_UNDEF(&property_resampling_default_value);
	zend_string *property_resampling_name = zend_string_init("resampling", sizeof("resampling") - 1, 1);
	zend_string *property_resampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_resampling_name, &property_resampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_resampling_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_source_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_source_config", class_ma_data_source_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_vtable_default_value;
	ZVAL_NULL(&property_vtable_default_value);
	zend_string *property_vtable_name = zend_string_init("vtable", sizeof("vtable") - 1, 1);
	zend_string *property_vtable_class_ma_data_source_vtable = zend_string_init("ma_data_source_vtable", sizeof("ma_data_source_vtable")-1, 1);
	zend_declare_typed_property(class_entry, property_vtable_name, &property_vtable_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_vtable_class_ma_data_source_vtable, 0, MAY_BE_NULL));
	zend_string_release(property_vtable_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_source_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_source_node_config", class_ma_data_source_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_pDataSource_default_value;
	ZVAL_NULL(&property_pDataSource_default_value);
	zend_string *property_pDataSource_name = zend_string_init("pDataSource", sizeof("pDataSource") - 1, 1);
	zend_string *property_pDataSource_class_ma_data_source = zend_string_init("ma_data_source", sizeof("ma_data_source")-1, 1);
	zend_declare_typed_property(class_entry, property_pDataSource_name, &property_pDataSource_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDataSource_class_ma_data_source, 0, MAY_BE_NULL));
	zend_string_release(property_pDataSource_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_source_vtable(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_source_vtable", class_ma_data_source_vtable_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_onRead_default_value;
	ZVAL_NULL(&property_onRead_default_value);
	zend_string *property_onRead_name = zend_string_init("onRead", sizeof("onRead") - 1, 1);
	zend_string *property_onRead_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onRead_name, &property_onRead_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onRead_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onRead_name);

	zval property_onSeek_default_value;
	ZVAL_NULL(&property_onSeek_default_value);
	zend_string *property_onSeek_name = zend_string_init("onSeek", sizeof("onSeek") - 1, 1);
	zend_string *property_onSeek_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onSeek_name, &property_onSeek_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onSeek_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onSeek_name);

	zval property_onGetDataFormat_default_value;
	ZVAL_NULL(&property_onGetDataFormat_default_value);
	zend_string *property_onGetDataFormat_name = zend_string_init("onGetDataFormat", sizeof("onGetDataFormat") - 1, 1);
	zend_string *property_onGetDataFormat_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetDataFormat_name, &property_onGetDataFormat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetDataFormat_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetDataFormat_name);

	zval property_onGetCursor_default_value;
	ZVAL_NULL(&property_onGetCursor_default_value);
	zend_string *property_onGetCursor_name = zend_string_init("onGetCursor", sizeof("onGetCursor") - 1, 1);
	zend_string *property_onGetCursor_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetCursor_name, &property_onGetCursor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetCursor_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetCursor_name);

	zval property_onGetLength_default_value;
	ZVAL_NULL(&property_onGetLength_default_value);
	zend_string *property_onGetLength_name = zend_string_init("onGetLength", sizeof("onGetLength") - 1, 1);
	zend_string *property_onGetLength_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetLength_name, &property_onGetLength_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetLength_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetLength_name);

	zval property_onSetLooping_default_value;
	ZVAL_NULL(&property_onSetLooping_default_value);
	zend_string *property_onSetLooping_name = zend_string_init("onSetLooping", sizeof("onSetLooping") - 1, 1);
	zend_string *property_onSetLooping_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onSetLooping_name, &property_onSetLooping_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onSetLooping_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onSetLooping_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_decoder_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_decoder_config", class_ma_decoder_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_pChannelMap_default_value;
	ZVAL_NULL(&property_pChannelMap_default_value);
	zend_string *property_pChannelMap_name = zend_string_init("pChannelMap", sizeof("pChannelMap") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMap_name, &property_pChannelMap_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMap_name);

	zval property_channelMixMode_default_value;
	ZVAL_LONG(&property_channelMixMode_default_value, 0);
	zend_string *property_channelMixMode_name = zend_string_init("channelMixMode", sizeof("channelMixMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelMixMode_name, &property_channelMixMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelMixMode_name);

	zval property_ditherMode_default_value;
	ZVAL_LONG(&property_ditherMode_default_value, 0);
	zend_string *property_ditherMode_name = zend_string_init("ditherMode", sizeof("ditherMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_ditherMode_name, &property_ditherMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_ditherMode_name);

	zval property_resampling_default_value;
	ZVAL_UNDEF(&property_resampling_default_value);
	zend_string *property_resampling_name = zend_string_init("resampling", sizeof("resampling") - 1, 1);
	zend_string *property_resampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_resampling_name, &property_resampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_resampling_name);

	zval property_allocationCallbacks_default_value;
	ZVAL_UNDEF(&property_allocationCallbacks_default_value);
	zend_string *property_allocationCallbacks_name = zend_string_init("allocationCallbacks", sizeof("allocationCallbacks") - 1, 1);
	zend_string *property_allocationCallbacks_class_ma_allocation_callbacks = zend_string_init("ma_allocation_callbacks", sizeof("ma_allocation_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_allocationCallbacks_name, &property_allocationCallbacks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_allocationCallbacks_class_ma_allocation_callbacks, 0, 0));
	zend_string_release(property_allocationCallbacks_name);

	zval property_encodingFormat_default_value;
	ZVAL_LONG(&property_encodingFormat_default_value, 0);
	zend_string *property_encodingFormat_name = zend_string_init("encodingFormat", sizeof("encodingFormat") - 1, 1);
	zend_declare_typed_property(class_entry, property_encodingFormat_name, &property_encodingFormat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_encodingFormat_name);

	zval property_seekPointCount_default_value;
	ZVAL_LONG(&property_seekPointCount_default_value, 0);
	zend_string *property_seekPointCount_name = zend_string_init("seekPointCount", sizeof("seekPointCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_seekPointCount_name, &property_seekPointCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_seekPointCount_name);

	zval property_ppCustomBackendVTables_default_value;
	ZVAL_NULL(&property_ppCustomBackendVTables_default_value);
	zend_string *property_ppCustomBackendVTables_name = zend_string_init("ppCustomBackendVTables", sizeof("ppCustomBackendVTables") - 1, 1);
	zend_declare_typed_property(class_entry, property_ppCustomBackendVTables_name, &property_ppCustomBackendVTables_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_ppCustomBackendVTables_name);

	zval property_customBackendCount_default_value;
	ZVAL_LONG(&property_customBackendCount_default_value, 0);
	zend_string *property_customBackendCount_name = zend_string_init("customBackendCount", sizeof("customBackendCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_customBackendCount_name, &property_customBackendCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_customBackendCount_name);

	zval property_pCustomBackendUserData_default_value;
	ZVAL_NULL(&property_pCustomBackendUserData_default_value);
	zend_string *property_pCustomBackendUserData_name = zend_string_init("pCustomBackendUserData", sizeof("pCustomBackendUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pCustomBackendUserData_name, &property_pCustomBackendUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pCustomBackendUserData_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_decoding_backend_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_decoding_backend_config", class_ma_decoding_backend_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_preferredFormat_default_value;
	ZVAL_LONG(&property_preferredFormat_default_value, 0);
	zend_string *property_preferredFormat_name = zend_string_init("preferredFormat", sizeof("preferredFormat") - 1, 1);
	zend_declare_typed_property(class_entry, property_preferredFormat_name, &property_preferredFormat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_preferredFormat_name);

	zval property_seekPointCount_default_value;
	ZVAL_LONG(&property_seekPointCount_default_value, 0);
	zend_string *property_seekPointCount_name = zend_string_init("seekPointCount", sizeof("seekPointCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_seekPointCount_name, &property_seekPointCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_seekPointCount_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_decoding_backend_vtable(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_decoding_backend_vtable", class_ma_decoding_backend_vtable_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_onInit_default_value;
	ZVAL_NULL(&property_onInit_default_value);
	zend_string *property_onInit_name = zend_string_init("onInit", sizeof("onInit") - 1, 1);
	zend_string *property_onInit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onInit_name, &property_onInit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onInit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onInit_name);

	zval property_onInitFile_default_value;
	ZVAL_NULL(&property_onInitFile_default_value);
	zend_string *property_onInitFile_name = zend_string_init("onInitFile", sizeof("onInitFile") - 1, 1);
	zend_string *property_onInitFile_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onInitFile_name, &property_onInitFile_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onInitFile_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onInitFile_name);

	zval property_onInitFileW_default_value;
	ZVAL_NULL(&property_onInitFileW_default_value);
	zend_string *property_onInitFileW_name = zend_string_init("onInitFileW", sizeof("onInitFileW") - 1, 1);
	zend_string *property_onInitFileW_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onInitFileW_name, &property_onInitFileW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onInitFileW_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onInitFileW_name);

	zval property_onInitMemory_default_value;
	ZVAL_NULL(&property_onInitMemory_default_value);
	zend_string *property_onInitMemory_name = zend_string_init("onInitMemory", sizeof("onInitMemory") - 1, 1);
	zend_string *property_onInitMemory_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onInitMemory_name, &property_onInitMemory_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onInitMemory_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onInitMemory_name);

	zval property_onUninit_default_value;
	ZVAL_NULL(&property_onUninit_default_value);
	zend_string *property_onUninit_name = zend_string_init("onUninit", sizeof("onUninit") - 1, 1);
	zend_string *property_onUninit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onUninit_name, &property_onUninit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onUninit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onUninit_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_delay_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_delay_config", class_ma_delay_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_delayInFrames_default_value;
	ZVAL_LONG(&property_delayInFrames_default_value, 0);
	zend_string *property_delayInFrames_name = zend_string_init("delayInFrames", sizeof("delayInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_delayInFrames_name, &property_delayInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_delayInFrames_name);

	zval property_delayStart_default_value;
	ZVAL_FALSE(&property_delayStart_default_value);
	zend_string *property_delayStart_name = zend_string_init("delayStart", sizeof("delayStart") - 1, 1);
	zend_declare_typed_property(class_entry, property_delayStart_name, &property_delayStart_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_delayStart_name);

	zval property_wet_default_value;
	ZVAL_DOUBLE(&property_wet_default_value, 0.0);
	zend_string *property_wet_name = zend_string_init("wet", sizeof("wet") - 1, 1);
	zend_declare_typed_property(class_entry, property_wet_name, &property_wet_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_wet_name);

	zval property_dry_default_value;
	ZVAL_DOUBLE(&property_dry_default_value, 0.0);
	zend_string *property_dry_name = zend_string_init("dry", sizeof("dry") - 1, 1);
	zend_declare_typed_property(class_entry, property_dry_name, &property_dry_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_dry_name);

	zval property_decay_default_value;
	ZVAL_DOUBLE(&property_decay_default_value, 0.0);
	zend_string *property_decay_name = zend_string_init("decay", sizeof("decay") - 1, 1);
	zend_declare_typed_property(class_entry, property_decay_name, &property_decay_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_decay_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_delay_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_delay_node_config", class_ma_delay_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_delay_default_value;
	ZVAL_UNDEF(&property_delay_default_value);
	zend_string *property_delay_name = zend_string_init("delay", sizeof("delay") - 1, 1);
	zend_string *property_delay_class_ma_delay_config = zend_string_init("ma_delay_config", sizeof("ma_delay_config")-1, 1);
	zend_declare_typed_property(class_entry, property_delay_name, &property_delay_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_delay_class_ma_delay_config, 0, 0));
	zend_string_release(property_delay_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config", class_ma_device_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_deviceType_default_value;
	ZVAL_LONG(&property_deviceType_default_value, 0);
	zend_string *property_deviceType_name = zend_string_init("deviceType", sizeof("deviceType") - 1, 1);
	zend_declare_typed_property(class_entry, property_deviceType_name, &property_deviceType_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_deviceType_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_periodSizeInFrames_default_value;
	ZVAL_LONG(&property_periodSizeInFrames_default_value, 0);
	zend_string *property_periodSizeInFrames_name = zend_string_init("periodSizeInFrames", sizeof("periodSizeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodSizeInFrames_name, &property_periodSizeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodSizeInFrames_name);

	zval property_periodSizeInMilliseconds_default_value;
	ZVAL_LONG(&property_periodSizeInMilliseconds_default_value, 0);
	zend_string *property_periodSizeInMilliseconds_name = zend_string_init("periodSizeInMilliseconds", sizeof("periodSizeInMilliseconds") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodSizeInMilliseconds_name, &property_periodSizeInMilliseconds_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodSizeInMilliseconds_name);

	zval property_periods_default_value;
	ZVAL_LONG(&property_periods_default_value, 0);
	zend_string *property_periods_name = zend_string_init("periods", sizeof("periods") - 1, 1);
	zend_declare_typed_property(class_entry, property_periods_name, &property_periods_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periods_name);

	zval property_performanceProfile_default_value;
	ZVAL_LONG(&property_performanceProfile_default_value, 0);
	zend_string *property_performanceProfile_name = zend_string_init("performanceProfile", sizeof("performanceProfile") - 1, 1);
	zend_declare_typed_property(class_entry, property_performanceProfile_name, &property_performanceProfile_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_performanceProfile_name);

	zval property_noPreSilencedOutputBuffer_default_value;
	ZVAL_FALSE(&property_noPreSilencedOutputBuffer_default_value);
	zend_string *property_noPreSilencedOutputBuffer_name = zend_string_init("noPreSilencedOutputBuffer", sizeof("noPreSilencedOutputBuffer") - 1, 1);
	zend_declare_typed_property(class_entry, property_noPreSilencedOutputBuffer_name, &property_noPreSilencedOutputBuffer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noPreSilencedOutputBuffer_name);

	zval property_noClip_default_value;
	ZVAL_FALSE(&property_noClip_default_value);
	zend_string *property_noClip_name = zend_string_init("noClip", sizeof("noClip") - 1, 1);
	zend_declare_typed_property(class_entry, property_noClip_name, &property_noClip_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noClip_name);

	zval property_noDisableDenormals_default_value;
	ZVAL_FALSE(&property_noDisableDenormals_default_value);
	zend_string *property_noDisableDenormals_name = zend_string_init("noDisableDenormals", sizeof("noDisableDenormals") - 1, 1);
	zend_declare_typed_property(class_entry, property_noDisableDenormals_name, &property_noDisableDenormals_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noDisableDenormals_name);

	zval property_noFixedSizedCallback_default_value;
	ZVAL_FALSE(&property_noFixedSizedCallback_default_value);
	zend_string *property_noFixedSizedCallback_name = zend_string_init("noFixedSizedCallback", sizeof("noFixedSizedCallback") - 1, 1);
	zend_declare_typed_property(class_entry, property_noFixedSizedCallback_name, &property_noFixedSizedCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noFixedSizedCallback_name);

	zval property_dataCallback_default_value;
	ZVAL_NULL(&property_dataCallback_default_value);
	zend_string *property_dataCallback_name = zend_string_init("dataCallback", sizeof("dataCallback") - 1, 1);
	zend_string *property_dataCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_dataCallback_name, &property_dataCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_dataCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_dataCallback_name);

	zval property_notificationCallback_default_value;
	ZVAL_NULL(&property_notificationCallback_default_value);
	zend_string *property_notificationCallback_name = zend_string_init("notificationCallback", sizeof("notificationCallback") - 1, 1);
	zend_string *property_notificationCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_notificationCallback_name, &property_notificationCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_notificationCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_notificationCallback_name);

	zval property_stopCallback_default_value;
	ZVAL_NULL(&property_stopCallback_default_value);
	zend_string *property_stopCallback_name = zend_string_init("stopCallback", sizeof("stopCallback") - 1, 1);
	zend_string *property_stopCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_stopCallback_name, &property_stopCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_stopCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_stopCallback_name);

	zval property_pUserData_default_value;
	ZVAL_NULL(&property_pUserData_default_value);
	zend_string *property_pUserData_name = zend_string_init("pUserData", sizeof("pUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pUserData_name, &property_pUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pUserData_name);

	zval property_resampling_default_value;
	ZVAL_UNDEF(&property_resampling_default_value);
	zend_string *property_resampling_name = zend_string_init("resampling", sizeof("resampling") - 1, 1);
	zend_string *property_resampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_resampling_name, &property_resampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_resampling_name);

	zval property_playback_default_value;
	ZVAL_UNDEF(&property_playback_default_value);
	zend_string *property_playback_name = zend_string_init("playback", sizeof("playback") - 1, 1);
	zend_string *property_playback_class_ma_device_config_playback = zend_string_init("ma_device_config_playback", sizeof("ma_device_config_playback")-1, 1);
	zend_declare_typed_property(class_entry, property_playback_name, &property_playback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_playback_class_ma_device_config_playback, 0, 0));
	zend_string_release(property_playback_name);

	zval property_capture_default_value;
	ZVAL_UNDEF(&property_capture_default_value);
	zend_string *property_capture_name = zend_string_init("capture", sizeof("capture") - 1, 1);
	zend_string *property_capture_class_ma_device_config_capture = zend_string_init("ma_device_config_capture", sizeof("ma_device_config_capture")-1, 1);
	zend_declare_typed_property(class_entry, property_capture_name, &property_capture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_capture_class_ma_device_config_capture, 0, 0));
	zend_string_release(property_capture_name);

	zval property_wasapi_default_value;
	ZVAL_UNDEF(&property_wasapi_default_value);
	zend_string *property_wasapi_name = zend_string_init("wasapi", sizeof("wasapi") - 1, 1);
	zend_string *property_wasapi_class_ma_device_config_wasapi = zend_string_init("ma_device_config_wasapi", sizeof("ma_device_config_wasapi")-1, 1);
	zend_declare_typed_property(class_entry, property_wasapi_name, &property_wasapi_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_wasapi_class_ma_device_config_wasapi, 0, 0));
	zend_string_release(property_wasapi_name);

	zval property_alsa_default_value;
	ZVAL_UNDEF(&property_alsa_default_value);
	zend_string *property_alsa_name = zend_string_init("alsa", sizeof("alsa") - 1, 1);
	zend_string *property_alsa_class_ma_device_config_alsa = zend_string_init("ma_device_config_alsa", sizeof("ma_device_config_alsa")-1, 1);
	zend_declare_typed_property(class_entry, property_alsa_name, &property_alsa_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_alsa_class_ma_device_config_alsa, 0, 0));
	zend_string_release(property_alsa_name);

	zval property_pulse_default_value;
	ZVAL_UNDEF(&property_pulse_default_value);
	zend_string *property_pulse_name = zend_string_init("pulse", sizeof("pulse") - 1, 1);
	zend_string *property_pulse_class_ma_device_config_pulse = zend_string_init("ma_device_config_pulse", sizeof("ma_device_config_pulse")-1, 1);
	zend_declare_typed_property(class_entry, property_pulse_name, &property_pulse_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pulse_class_ma_device_config_pulse, 0, 0));
	zend_string_release(property_pulse_name);

	zval property_coreaudio_default_value;
	ZVAL_UNDEF(&property_coreaudio_default_value);
	zend_string *property_coreaudio_name = zend_string_init("coreaudio", sizeof("coreaudio") - 1, 1);
	zend_string *property_coreaudio_class_ma_device_config_coreaudio = zend_string_init("ma_device_config_coreaudio", sizeof("ma_device_config_coreaudio")-1, 1);
	zend_declare_typed_property(class_entry, property_coreaudio_name, &property_coreaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_coreaudio_class_ma_device_config_coreaudio, 0, 0));
	zend_string_release(property_coreaudio_name);

	zval property_opensl_default_value;
	ZVAL_UNDEF(&property_opensl_default_value);
	zend_string *property_opensl_name = zend_string_init("opensl", sizeof("opensl") - 1, 1);
	zend_string *property_opensl_class_ma_device_config_opensl = zend_string_init("ma_device_config_opensl", sizeof("ma_device_config_opensl")-1, 1);
	zend_declare_typed_property(class_entry, property_opensl_name, &property_opensl_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_opensl_class_ma_device_config_opensl, 0, 0));
	zend_string_release(property_opensl_name);

	zval property_aaudio_default_value;
	ZVAL_UNDEF(&property_aaudio_default_value);
	zend_string *property_aaudio_name = zend_string_init("aaudio", sizeof("aaudio") - 1, 1);
	zend_string *property_aaudio_class_ma_device_config_aaudio = zend_string_init("ma_device_config_aaudio", sizeof("ma_device_config_aaudio")-1, 1);
	zend_declare_typed_property(class_entry, property_aaudio_name, &property_aaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_aaudio_class_ma_device_config_aaudio, 0, 0));
	zend_string_release(property_aaudio_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_aaudio(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_aaudio", class_ma_device_config_aaudio_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_usage_default_value;
	ZVAL_LONG(&property_usage_default_value, 0);
	zend_string *property_usage_name = zend_string_init("usage", sizeof("usage") - 1, 1);
	zend_declare_typed_property(class_entry, property_usage_name, &property_usage_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_usage_name);

	zval property_contentType_default_value;
	ZVAL_LONG(&property_contentType_default_value, 0);
	zend_string *property_contentType_name = zend_string_init("contentType", sizeof("contentType") - 1, 1);
	zend_declare_typed_property(class_entry, property_contentType_name, &property_contentType_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_contentType_name);

	zval property_inputPreset_default_value;
	ZVAL_LONG(&property_inputPreset_default_value, 0);
	zend_string *property_inputPreset_name = zend_string_init("inputPreset", sizeof("inputPreset") - 1, 1);
	zend_declare_typed_property(class_entry, property_inputPreset_name, &property_inputPreset_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_inputPreset_name);

	zval property_allowedCapturePolicy_default_value;
	ZVAL_LONG(&property_allowedCapturePolicy_default_value, 0);
	zend_string *property_allowedCapturePolicy_name = zend_string_init("allowedCapturePolicy", sizeof("allowedCapturePolicy") - 1, 1);
	zend_declare_typed_property(class_entry, property_allowedCapturePolicy_name, &property_allowedCapturePolicy_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_allowedCapturePolicy_name);

	zval property_noAutoStartAfterReroute_default_value;
	ZVAL_FALSE(&property_noAutoStartAfterReroute_default_value);
	zend_string *property_noAutoStartAfterReroute_name = zend_string_init("noAutoStartAfterReroute", sizeof("noAutoStartAfterReroute") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoStartAfterReroute_name, &property_noAutoStartAfterReroute_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoStartAfterReroute_name);

	zval property_enableCompatibilityWorkarounds_default_value;
	ZVAL_FALSE(&property_enableCompatibilityWorkarounds_default_value);
	zend_string *property_enableCompatibilityWorkarounds_name = zend_string_init("enableCompatibilityWorkarounds", sizeof("enableCompatibilityWorkarounds") - 1, 1);
	zend_declare_typed_property(class_entry, property_enableCompatibilityWorkarounds_name, &property_enableCompatibilityWorkarounds_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_enableCompatibilityWorkarounds_name);

	zval property_allowSetBufferCapacity_default_value;
	ZVAL_FALSE(&property_allowSetBufferCapacity_default_value);
	zend_string *property_allowSetBufferCapacity_name = zend_string_init("allowSetBufferCapacity", sizeof("allowSetBufferCapacity") - 1, 1);
	zend_declare_typed_property(class_entry, property_allowSetBufferCapacity_name, &property_allowSetBufferCapacity_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_allowSetBufferCapacity_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_alsa(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_alsa", class_ma_device_config_alsa_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_noMMap_default_value;
	ZVAL_FALSE(&property_noMMap_default_value);
	zend_string *property_noMMap_name = zend_string_init("noMMap", sizeof("noMMap") - 1, 1);
	zend_declare_typed_property(class_entry, property_noMMap_name, &property_noMMap_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noMMap_name);

	zval property_noAutoFormat_default_value;
	ZVAL_FALSE(&property_noAutoFormat_default_value);
	zend_string *property_noAutoFormat_name = zend_string_init("noAutoFormat", sizeof("noAutoFormat") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoFormat_name, &property_noAutoFormat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoFormat_name);

	zval property_noAutoChannels_default_value;
	ZVAL_FALSE(&property_noAutoChannels_default_value);
	zend_string *property_noAutoChannels_name = zend_string_init("noAutoChannels", sizeof("noAutoChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoChannels_name, &property_noAutoChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoChannels_name);

	zval property_noAutoResample_default_value;
	ZVAL_FALSE(&property_noAutoResample_default_value);
	zend_string *property_noAutoResample_name = zend_string_init("noAutoResample", sizeof("noAutoResample") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoResample_name, &property_noAutoResample_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoResample_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_capture(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_capture", class_ma_device_config_capture_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDeviceID_default_value;
	ZVAL_NULL(&property_pDeviceID_default_value);
	zend_string *property_pDeviceID_name = zend_string_init("pDeviceID", sizeof("pDeviceID") - 1, 1);
	zend_string *property_pDeviceID_class_ma_device_id = zend_string_init("ma_device_id", sizeof("ma_device_id")-1, 1);
	zend_declare_typed_property(class_entry, property_pDeviceID_name, &property_pDeviceID_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDeviceID_class_ma_device_id, 0, MAY_BE_NULL));
	zend_string_release(property_pDeviceID_name);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_pChannelMap_default_value;
	ZVAL_NULL(&property_pChannelMap_default_value);
	zend_string *property_pChannelMap_name = zend_string_init("pChannelMap", sizeof("pChannelMap") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMap_name, &property_pChannelMap_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMap_name);

	zval property_channelMixMode_default_value;
	ZVAL_LONG(&property_channelMixMode_default_value, 0);
	zend_string *property_channelMixMode_name = zend_string_init("channelMixMode", sizeof("channelMixMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelMixMode_name, &property_channelMixMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelMixMode_name);

	zval property_calculateLFEFromSpatialChannels_default_value;
	ZVAL_FALSE(&property_calculateLFEFromSpatialChannels_default_value);
	zend_string *property_calculateLFEFromSpatialChannels_name = zend_string_init("calculateLFEFromSpatialChannels", sizeof("calculateLFEFromSpatialChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_calculateLFEFromSpatialChannels_name, &property_calculateLFEFromSpatialChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_calculateLFEFromSpatialChannels_name);

	zval property_shareMode_default_value;
	ZVAL_LONG(&property_shareMode_default_value, 0);
	zend_string *property_shareMode_name = zend_string_init("shareMode", sizeof("shareMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_shareMode_name, &property_shareMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_shareMode_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_coreaudio(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_coreaudio", class_ma_device_config_coreaudio_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_allowNominalSampleRateChange_default_value;
	ZVAL_FALSE(&property_allowNominalSampleRateChange_default_value);
	zend_string *property_allowNominalSampleRateChange_name = zend_string_init("allowNominalSampleRateChange", sizeof("allowNominalSampleRateChange") - 1, 1);
	zend_declare_typed_property(class_entry, property_allowNominalSampleRateChange_name, &property_allowNominalSampleRateChange_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_allowNominalSampleRateChange_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_opensl(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_opensl", class_ma_device_config_opensl_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_streamType_default_value;
	ZVAL_LONG(&property_streamType_default_value, 0);
	zend_string *property_streamType_name = zend_string_init("streamType", sizeof("streamType") - 1, 1);
	zend_declare_typed_property(class_entry, property_streamType_name, &property_streamType_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_streamType_name);

	zval property_recordingPreset_default_value;
	ZVAL_LONG(&property_recordingPreset_default_value, 0);
	zend_string *property_recordingPreset_name = zend_string_init("recordingPreset", sizeof("recordingPreset") - 1, 1);
	zend_declare_typed_property(class_entry, property_recordingPreset_name, &property_recordingPreset_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_recordingPreset_name);

	zval property_enableCompatibilityWorkarounds_default_value;
	ZVAL_FALSE(&property_enableCompatibilityWorkarounds_default_value);
	zend_string *property_enableCompatibilityWorkarounds_name = zend_string_init("enableCompatibilityWorkarounds", sizeof("enableCompatibilityWorkarounds") - 1, 1);
	zend_declare_typed_property(class_entry, property_enableCompatibilityWorkarounds_name, &property_enableCompatibilityWorkarounds_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_enableCompatibilityWorkarounds_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_playback(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_playback", class_ma_device_config_playback_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDeviceID_default_value;
	ZVAL_NULL(&property_pDeviceID_default_value);
	zend_string *property_pDeviceID_name = zend_string_init("pDeviceID", sizeof("pDeviceID") - 1, 1);
	zend_string *property_pDeviceID_class_ma_device_id = zend_string_init("ma_device_id", sizeof("ma_device_id")-1, 1);
	zend_declare_typed_property(class_entry, property_pDeviceID_name, &property_pDeviceID_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDeviceID_class_ma_device_id, 0, MAY_BE_NULL));
	zend_string_release(property_pDeviceID_name);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_pChannelMap_default_value;
	ZVAL_NULL(&property_pChannelMap_default_value);
	zend_string *property_pChannelMap_name = zend_string_init("pChannelMap", sizeof("pChannelMap") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMap_name, &property_pChannelMap_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMap_name);

	zval property_channelMixMode_default_value;
	ZVAL_LONG(&property_channelMixMode_default_value, 0);
	zend_string *property_channelMixMode_name = zend_string_init("channelMixMode", sizeof("channelMixMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelMixMode_name, &property_channelMixMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelMixMode_name);

	zval property_calculateLFEFromSpatialChannels_default_value;
	ZVAL_FALSE(&property_calculateLFEFromSpatialChannels_default_value);
	zend_string *property_calculateLFEFromSpatialChannels_name = zend_string_init("calculateLFEFromSpatialChannels", sizeof("calculateLFEFromSpatialChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_calculateLFEFromSpatialChannels_name, &property_calculateLFEFromSpatialChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_calculateLFEFromSpatialChannels_name);

	zval property_shareMode_default_value;
	ZVAL_LONG(&property_shareMode_default_value, 0);
	zend_string *property_shareMode_name = zend_string_init("shareMode", sizeof("shareMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_shareMode_name, &property_shareMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_shareMode_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_pulse(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_pulse", class_ma_device_config_pulse_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pStreamNamePlayback_default_value;
	ZVAL_NULL(&property_pStreamNamePlayback_default_value);
	zend_string *property_pStreamNamePlayback_name = zend_string_init("pStreamNamePlayback", sizeof("pStreamNamePlayback") - 1, 1);
	zend_declare_typed_property(class_entry, property_pStreamNamePlayback_name, &property_pStreamNamePlayback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pStreamNamePlayback_name);

	zval property_pStreamNameCapture_default_value;
	ZVAL_NULL(&property_pStreamNameCapture_default_value);
	zend_string *property_pStreamNameCapture_name = zend_string_init("pStreamNameCapture", sizeof("pStreamNameCapture") - 1, 1);
	zend_declare_typed_property(class_entry, property_pStreamNameCapture_name, &property_pStreamNameCapture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pStreamNameCapture_name);

	zval property_channelMap_default_value;
	ZVAL_LONG(&property_channelMap_default_value, 0);
	zend_string *property_channelMap_name = zend_string_init("channelMap", sizeof("channelMap") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelMap_name, &property_channelMap_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelMap_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_config_wasapi(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_config_wasapi", class_ma_device_config_wasapi_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_usage_default_value;
	ZVAL_LONG(&property_usage_default_value, 0);
	zend_string *property_usage_name = zend_string_init("usage", sizeof("usage") - 1, 1);
	zend_declare_typed_property(class_entry, property_usage_name, &property_usage_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_usage_name);

	zval property_noAutoConvertSRC_default_value;
	ZVAL_FALSE(&property_noAutoConvertSRC_default_value);
	zend_string *property_noAutoConvertSRC_name = zend_string_init("noAutoConvertSRC", sizeof("noAutoConvertSRC") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoConvertSRC_name, &property_noAutoConvertSRC_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoConvertSRC_name);

	zval property_noDefaultQualitySRC_default_value;
	ZVAL_FALSE(&property_noDefaultQualitySRC_default_value);
	zend_string *property_noDefaultQualitySRC_name = zend_string_init("noDefaultQualitySRC", sizeof("noDefaultQualitySRC") - 1, 1);
	zend_declare_typed_property(class_entry, property_noDefaultQualitySRC_name, &property_noDefaultQualitySRC_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noDefaultQualitySRC_name);

	zval property_noAutoStreamRouting_default_value;
	ZVAL_FALSE(&property_noAutoStreamRouting_default_value);
	zend_string *property_noAutoStreamRouting_name = zend_string_init("noAutoStreamRouting", sizeof("noAutoStreamRouting") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoStreamRouting_name, &property_noAutoStreamRouting_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoStreamRouting_name);

	zval property_noHardwareOffloading_default_value;
	ZVAL_FALSE(&property_noHardwareOffloading_default_value);
	zend_string *property_noHardwareOffloading_name = zend_string_init("noHardwareOffloading", sizeof("noHardwareOffloading") - 1, 1);
	zend_declare_typed_property(class_entry, property_noHardwareOffloading_name, &property_noHardwareOffloading_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noHardwareOffloading_name);

	zval property_loopbackProcessID_default_value;
	ZVAL_LONG(&property_loopbackProcessID_default_value, 0);
	zend_string *property_loopbackProcessID_name = zend_string_init("loopbackProcessID", sizeof("loopbackProcessID") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopbackProcessID_name, &property_loopbackProcessID_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopbackProcessID_name);

	zval property_loopbackProcessExclude_default_value;
	ZVAL_FALSE(&property_loopbackProcessExclude_default_value);
	zend_string *property_loopbackProcessExclude_name = zend_string_init("loopbackProcessExclude", sizeof("loopbackProcessExclude") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopbackProcessExclude_name, &property_loopbackProcessExclude_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_loopbackProcessExclude_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_descriptor(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_descriptor", class_ma_device_descriptor_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDeviceID_default_value;
	ZVAL_NULL(&property_pDeviceID_default_value);
	zend_string *property_pDeviceID_name = zend_string_init("pDeviceID", sizeof("pDeviceID") - 1, 1);
	zend_string *property_pDeviceID_class_ma_device_id = zend_string_init("ma_device_id", sizeof("ma_device_id")-1, 1);
	zend_declare_typed_property(class_entry, property_pDeviceID_name, &property_pDeviceID_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDeviceID_class_ma_device_id, 0, MAY_BE_NULL));
	zend_string_release(property_pDeviceID_name);

	zval property_shareMode_default_value;
	ZVAL_LONG(&property_shareMode_default_value, 0);
	zend_string *property_shareMode_name = zend_string_init("shareMode", sizeof("shareMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_shareMode_name, &property_shareMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_shareMode_name);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_channelMap_default_value;
	ZVAL_EMPTY_ARRAY(&property_channelMap_default_value);
	zend_string *property_channelMap_name = zend_string_init("channelMap", sizeof("channelMap") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelMap_name, &property_channelMap_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_channelMap_name);

	zval property_periodSizeInFrames_default_value;
	ZVAL_LONG(&property_periodSizeInFrames_default_value, 0);
	zend_string *property_periodSizeInFrames_name = zend_string_init("periodSizeInFrames", sizeof("periodSizeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodSizeInFrames_name, &property_periodSizeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodSizeInFrames_name);

	zval property_periodSizeInMilliseconds_default_value;
	ZVAL_LONG(&property_periodSizeInMilliseconds_default_value, 0);
	zend_string *property_periodSizeInMilliseconds_name = zend_string_init("periodSizeInMilliseconds", sizeof("periodSizeInMilliseconds") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodSizeInMilliseconds_name, &property_periodSizeInMilliseconds_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodSizeInMilliseconds_name);

	zval property_periodCount_default_value;
	ZVAL_LONG(&property_periodCount_default_value, 0);
	zend_string *property_periodCount_name = zend_string_init("periodCount", sizeof("periodCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodCount_name, &property_periodCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodCount_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_id(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_id", class_ma_device_id_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_wasapi_default_value;
	ZVAL_EMPTY_ARRAY(&property_wasapi_default_value);
	zend_string *property_wasapi_name = zend_string_init("wasapi", sizeof("wasapi") - 1, 1);
	zend_declare_typed_property(class_entry, property_wasapi_name, &property_wasapi_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_wasapi_name);

	zval property_dsound_default_value;
	ZVAL_EMPTY_ARRAY(&property_dsound_default_value);
	zend_string *property_dsound_name = zend_string_init("dsound", sizeof("dsound") - 1, 1);
	zend_declare_typed_property(class_entry, property_dsound_name, &property_dsound_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_dsound_name);

	zval property_winmm_default_value;
	ZVAL_LONG(&property_winmm_default_value, 0);
	zend_string *property_winmm_name = zend_string_init("winmm", sizeof("winmm") - 1, 1);
	zend_declare_typed_property(class_entry, property_winmm_name, &property_winmm_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_winmm_name);

	zval property_alsa_default_value;
	ZVAL_EMPTY_STRING(&property_alsa_default_value);
	zend_string *property_alsa_name = zend_string_init("alsa", sizeof("alsa") - 1, 1);
	zend_declare_typed_property(class_entry, property_alsa_name, &property_alsa_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_alsa_name);

	zval property_pulse_default_value;
	ZVAL_EMPTY_STRING(&property_pulse_default_value);
	zend_string *property_pulse_name = zend_string_init("pulse", sizeof("pulse") - 1, 1);
	zend_declare_typed_property(class_entry, property_pulse_name, &property_pulse_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_pulse_name);

	zval property_jack_default_value;
	ZVAL_LONG(&property_jack_default_value, 0);
	zend_string *property_jack_name = zend_string_init("jack", sizeof("jack") - 1, 1);
	zend_declare_typed_property(class_entry, property_jack_name, &property_jack_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_jack_name);

	zval property_coreaudio_default_value;
	ZVAL_EMPTY_STRING(&property_coreaudio_default_value);
	zend_string *property_coreaudio_name = zend_string_init("coreaudio", sizeof("coreaudio") - 1, 1);
	zend_declare_typed_property(class_entry, property_coreaudio_name, &property_coreaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_coreaudio_name);

	zval property_sndio_default_value;
	ZVAL_EMPTY_STRING(&property_sndio_default_value);
	zend_string *property_sndio_name = zend_string_init("sndio", sizeof("sndio") - 1, 1);
	zend_declare_typed_property(class_entry, property_sndio_name, &property_sndio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_sndio_name);

	zval property_audio4_default_value;
	ZVAL_EMPTY_STRING(&property_audio4_default_value);
	zend_string *property_audio4_name = zend_string_init("audio4", sizeof("audio4") - 1, 1);
	zend_declare_typed_property(class_entry, property_audio4_name, &property_audio4_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_audio4_name);

	zval property_oss_default_value;
	ZVAL_EMPTY_STRING(&property_oss_default_value);
	zend_string *property_oss_name = zend_string_init("oss", sizeof("oss") - 1, 1);
	zend_declare_typed_property(class_entry, property_oss_name, &property_oss_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_oss_name);

	zval property_aaudio_default_value;
	ZVAL_LONG(&property_aaudio_default_value, 0);
	zend_string *property_aaudio_name = zend_string_init("aaudio", sizeof("aaudio") - 1, 1);
	zend_declare_typed_property(class_entry, property_aaudio_name, &property_aaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_aaudio_name);

	zval property_opensl_default_value;
	ZVAL_LONG(&property_opensl_default_value, 0);
	zend_string *property_opensl_name = zend_string_init("opensl", sizeof("opensl") - 1, 1);
	zend_declare_typed_property(class_entry, property_opensl_name, &property_opensl_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_opensl_name);

	zval property_webaudio_default_value;
	ZVAL_EMPTY_STRING(&property_webaudio_default_value);
	zend_string *property_webaudio_name = zend_string_init("webaudio", sizeof("webaudio") - 1, 1);
	zend_declare_typed_property(class_entry, property_webaudio_name, &property_webaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_webaudio_name);

	zval property_custom_default_value;
	ZVAL_UNDEF(&property_custom_default_value);
	zend_string *property_custom_name = zend_string_init("custom", sizeof("custom") - 1, 1);
	zend_string *property_custom_class_ma_device_id_custom = zend_string_init("ma_device_id_custom", sizeof("ma_device_id_custom")-1, 1);
	zend_declare_typed_property(class_entry, property_custom_name, &property_custom_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_custom_class_ma_device_id_custom, 0, 0));
	zend_string_release(property_custom_name);

	zval property_nullbackend_default_value;
	ZVAL_LONG(&property_nullbackend_default_value, 0);
	zend_string *property_nullbackend_name = zend_string_init("nullbackend", sizeof("nullbackend") - 1, 1);
	zend_declare_typed_property(class_entry, property_nullbackend_name, &property_nullbackend_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_nullbackend_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_id_custom(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_id_custom", class_ma_device_id_custom_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_i_default_value;
	ZVAL_LONG(&property_i_default_value, 0);
	zend_string *property_i_name = zend_string_init("i", sizeof("i") - 1, 1);
	zend_declare_typed_property(class_entry, property_i_name, &property_i_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_i_name);

	zval property_s_default_value;
	ZVAL_EMPTY_STRING(&property_s_default_value);
	zend_string *property_s_name = zend_string_init("s", sizeof("s") - 1, 1);
	zend_declare_typed_property(class_entry, property_s_name, &property_s_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_s_name);

	zval property_p_default_value;
	ZVAL_NULL(&property_p_default_value);
	zend_string *property_p_name = zend_string_init("p", sizeof("p") - 1, 1);
	zend_declare_typed_property(class_entry, property_p_name, &property_p_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_p_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_info(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_info", class_ma_device_info_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_id_default_value;
	ZVAL_UNDEF(&property_id_default_value);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, 1);
	zend_string *property_id_class_ma_device_id = zend_string_init("ma_device_id", sizeof("ma_device_id")-1, 1);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_id_class_ma_device_id, 0, 0));
	zend_string_release(property_id_name);

	zval property_name_default_value;
	ZVAL_EMPTY_STRING(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_name_name);

	zval property_isDefault_default_value;
	ZVAL_FALSE(&property_isDefault_default_value);
	zend_string *property_isDefault_name = zend_string_init("isDefault", sizeof("isDefault") - 1, 1);
	zend_declare_typed_property(class_entry, property_isDefault_name, &property_isDefault_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_isDefault_name);

	zval property_nativeDataFormatCount_default_value;
	ZVAL_LONG(&property_nativeDataFormatCount_default_value, 0);
	zend_string *property_nativeDataFormatCount_name = zend_string_init("nativeDataFormatCount", sizeof("nativeDataFormatCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_nativeDataFormatCount_name, &property_nativeDataFormatCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_nativeDataFormatCount_name);

	zval property_nativeDataFormats_default_value;
	ZVAL_EMPTY_ARRAY(&property_nativeDataFormats_default_value);
	zend_string *property_nativeDataFormats_name = zend_string_init("nativeDataFormats", sizeof("nativeDataFormats") - 1, 1);
	zend_declare_typed_property(class_entry, property_nativeDataFormats_name, &property_nativeDataFormats_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_nativeDataFormats_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_info_nativeDataFormats(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_info_nativeDataFormats", class_ma_device_info_nativeDataFormats_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_job_thread_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_job_thread_config", class_ma_device_job_thread_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_noThread_default_value;
	ZVAL_FALSE(&property_noThread_default_value);
	zend_string *property_noThread_name = zend_string_init("noThread", sizeof("noThread") - 1, 1);
	zend_declare_typed_property(class_entry, property_noThread_name, &property_noThread_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noThread_name);

	zval property_jobQueueCapacity_default_value;
	ZVAL_LONG(&property_jobQueueCapacity_default_value, 0);
	zend_string *property_jobQueueCapacity_name = zend_string_init("jobQueueCapacity", sizeof("jobQueueCapacity") - 1, 1);
	zend_declare_typed_property(class_entry, property_jobQueueCapacity_name, &property_jobQueueCapacity_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_jobQueueCapacity_name);

	zval property_jobQueueFlags_default_value;
	ZVAL_LONG(&property_jobQueueFlags_default_value, 0);
	zend_string *property_jobQueueFlags_name = zend_string_init("jobQueueFlags", sizeof("jobQueueFlags") - 1, 1);
	zend_declare_typed_property(class_entry, property_jobQueueFlags_name, &property_jobQueueFlags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_jobQueueFlags_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_notification(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_notification", class_ma_device_notification_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDevice_default_value;
	ZVAL_NULL(&property_pDevice_default_value);
	zend_string *property_pDevice_name = zend_string_init("pDevice", sizeof("pDevice") - 1, 1);
	zend_string *property_pDevice_class_ma_device = zend_string_init("ma_device", sizeof("ma_device")-1, 1);
	zend_declare_typed_property(class_entry, property_pDevice_name, &property_pDevice_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDevice_class_ma_device, 0, MAY_BE_NULL));
	zend_string_release(property_pDevice_name);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_data_default_value;
	ZVAL_UNDEF(&property_data_default_value);
	zend_string *property_data_name = zend_string_init("data", sizeof("data") - 1, 1);
	zend_string *property_data_class_ma_device_notification_data = zend_string_init("ma_device_notification_data", sizeof("ma_device_notification_data")-1, 1);
	zend_declare_typed_property(class_entry, property_data_name, &property_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_data_class_ma_device_notification_data, 0, 0));
	zend_string_release(property_data_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_notification_data(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_notification_data", class_ma_device_notification_data_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_started_default_value;
	ZVAL_UNDEF(&property_started_default_value);
	zend_string *property_started_name = zend_string_init("started", sizeof("started") - 1, 1);
	zend_string *property_started_class_ma_device_notification_data_started = zend_string_init("ma_device_notification_data_started", sizeof("ma_device_notification_data_started")-1, 1);
	zend_declare_typed_property(class_entry, property_started_name, &property_started_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_started_class_ma_device_notification_data_started, 0, 0));
	zend_string_release(property_started_name);

	zval property_stopped_default_value;
	ZVAL_UNDEF(&property_stopped_default_value);
	zend_string *property_stopped_name = zend_string_init("stopped", sizeof("stopped") - 1, 1);
	zend_string *property_stopped_class_ma_device_notification_data_stopped = zend_string_init("ma_device_notification_data_stopped", sizeof("ma_device_notification_data_stopped")-1, 1);
	zend_declare_typed_property(class_entry, property_stopped_name, &property_stopped_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_stopped_class_ma_device_notification_data_stopped, 0, 0));
	zend_string_release(property_stopped_name);

	zval property_rerouted_default_value;
	ZVAL_UNDEF(&property_rerouted_default_value);
	zend_string *property_rerouted_name = zend_string_init("rerouted", sizeof("rerouted") - 1, 1);
	zend_string *property_rerouted_class_ma_device_notification_data_rerouted = zend_string_init("ma_device_notification_data_rerouted", sizeof("ma_device_notification_data_rerouted")-1, 1);
	zend_declare_typed_property(class_entry, property_rerouted_name, &property_rerouted_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_rerouted_class_ma_device_notification_data_rerouted, 0, 0));
	zend_string_release(property_rerouted_name);

	zval property_interruption_default_value;
	ZVAL_UNDEF(&property_interruption_default_value);
	zend_string *property_interruption_name = zend_string_init("interruption", sizeof("interruption") - 1, 1);
	zend_string *property_interruption_class_ma_device_notification_data_interruption = zend_string_init("ma_device_notification_data_interruption", sizeof("ma_device_notification_data_interruption")-1, 1);
	zend_declare_typed_property(class_entry, property_interruption_name, &property_interruption_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_interruption_class_ma_device_notification_data_interruption, 0, 0));
	zend_string_release(property_interruption_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_notification_data_interruption(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_notification_data_interruption", class_ma_device_notification_data_interruption_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property__unused_default_value;
	ZVAL_LONG(&property__unused_default_value, 0);
	zend_string *property__unused_name = zend_string_init("_unused", sizeof("_unused") - 1, 1);
	zend_declare_typed_property(class_entry, property__unused_name, &property__unused_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property__unused_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_notification_data_rerouted(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_notification_data_rerouted", class_ma_device_notification_data_rerouted_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property__unused_default_value;
	ZVAL_LONG(&property__unused_default_value, 0);
	zend_string *property__unused_name = zend_string_init("_unused", sizeof("_unused") - 1, 1);
	zend_declare_typed_property(class_entry, property__unused_name, &property__unused_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property__unused_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_notification_data_started(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_notification_data_started", class_ma_device_notification_data_started_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property__unused_default_value;
	ZVAL_LONG(&property__unused_default_value, 0);
	zend_string *property__unused_name = zend_string_init("_unused", sizeof("_unused") - 1, 1);
	zend_declare_typed_property(class_entry, property__unused_name, &property__unused_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property__unused_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_notification_data_stopped(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_notification_data_stopped", class_ma_device_notification_data_stopped_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property__unused_default_value;
	ZVAL_LONG(&property__unused_default_value, 0);
	zend_string *property__unused_name = zend_string_init("_unused", sizeof("_unused") - 1, 1);
	zend_declare_typed_property(class_entry, property__unused_name, &property__unused_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property__unused_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_encoder_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_encoder_config", class_ma_encoder_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_encodingFormat_default_value;
	ZVAL_LONG(&property_encodingFormat_default_value, 0);
	zend_string *property_encodingFormat_name = zend_string_init("encodingFormat", sizeof("encodingFormat") - 1, 1);
	zend_declare_typed_property(class_entry, property_encodingFormat_name, &property_encodingFormat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_encodingFormat_name);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_allocationCallbacks_default_value;
	ZVAL_UNDEF(&property_allocationCallbacks_default_value);
	zend_string *property_allocationCallbacks_name = zend_string_init("allocationCallbacks", sizeof("allocationCallbacks") - 1, 1);
	zend_string *property_allocationCallbacks_class_ma_allocation_callbacks = zend_string_init("ma_allocation_callbacks", sizeof("ma_allocation_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_allocationCallbacks_name, &property_allocationCallbacks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_allocationCallbacks_class_ma_allocation_callbacks, 0, 0));
	zend_string_release(property_allocationCallbacks_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_engine_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_engine_config", class_ma_engine_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pResourceManager_default_value;
	ZVAL_NULL(&property_pResourceManager_default_value);
	zend_string *property_pResourceManager_name = zend_string_init("pResourceManager", sizeof("pResourceManager") - 1, 1);
	zend_string *property_pResourceManager_class_ma_resource_manager = zend_string_init("ma_resource_manager", sizeof("ma_resource_manager")-1, 1);
	zend_declare_typed_property(class_entry, property_pResourceManager_name, &property_pResourceManager_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pResourceManager_class_ma_resource_manager, 0, MAY_BE_NULL));
	zend_string_release(property_pResourceManager_name);

	zval property_pContext_default_value;
	ZVAL_NULL(&property_pContext_default_value);
	zend_string *property_pContext_name = zend_string_init("pContext", sizeof("pContext") - 1, 1);
	zend_string *property_pContext_class_ma_context = zend_string_init("ma_context", sizeof("ma_context")-1, 1);
	zend_declare_typed_property(class_entry, property_pContext_name, &property_pContext_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pContext_class_ma_context, 0, MAY_BE_NULL));
	zend_string_release(property_pContext_name);

	zval property_pDevice_default_value;
	ZVAL_NULL(&property_pDevice_default_value);
	zend_string *property_pDevice_name = zend_string_init("pDevice", sizeof("pDevice") - 1, 1);
	zend_string *property_pDevice_class_ma_device = zend_string_init("ma_device", sizeof("ma_device")-1, 1);
	zend_declare_typed_property(class_entry, property_pDevice_name, &property_pDevice_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDevice_class_ma_device, 0, MAY_BE_NULL));
	zend_string_release(property_pDevice_name);

	zval property_pPlaybackDeviceID_default_value;
	ZVAL_NULL(&property_pPlaybackDeviceID_default_value);
	zend_string *property_pPlaybackDeviceID_name = zend_string_init("pPlaybackDeviceID", sizeof("pPlaybackDeviceID") - 1, 1);
	zend_string *property_pPlaybackDeviceID_class_ma_device_id = zend_string_init("ma_device_id", sizeof("ma_device_id")-1, 1);
	zend_declare_typed_property(class_entry, property_pPlaybackDeviceID_name, &property_pPlaybackDeviceID_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pPlaybackDeviceID_class_ma_device_id, 0, MAY_BE_NULL));
	zend_string_release(property_pPlaybackDeviceID_name);

	zval property_dataCallback_default_value;
	ZVAL_NULL(&property_dataCallback_default_value);
	zend_string *property_dataCallback_name = zend_string_init("dataCallback", sizeof("dataCallback") - 1, 1);
	zend_string *property_dataCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_dataCallback_name, &property_dataCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_dataCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_dataCallback_name);

	zval property_notificationCallback_default_value;
	ZVAL_NULL(&property_notificationCallback_default_value);
	zend_string *property_notificationCallback_name = zend_string_init("notificationCallback", sizeof("notificationCallback") - 1, 1);
	zend_string *property_notificationCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_notificationCallback_name, &property_notificationCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_notificationCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_notificationCallback_name);

	zval property_pLog_default_value;
	ZVAL_NULL(&property_pLog_default_value);
	zend_string *property_pLog_name = zend_string_init("pLog", sizeof("pLog") - 1, 1);
	zend_string *property_pLog_class_ma_log = zend_string_init("ma_log", sizeof("ma_log")-1, 1);
	zend_declare_typed_property(class_entry, property_pLog_name, &property_pLog_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pLog_class_ma_log, 0, MAY_BE_NULL));
	zend_string_release(property_pLog_name);

	zval property_listenerCount_default_value;
	ZVAL_LONG(&property_listenerCount_default_value, 0);
	zend_string *property_listenerCount_name = zend_string_init("listenerCount", sizeof("listenerCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_listenerCount_name, &property_listenerCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_listenerCount_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_periodSizeInFrames_default_value;
	ZVAL_LONG(&property_periodSizeInFrames_default_value, 0);
	zend_string *property_periodSizeInFrames_name = zend_string_init("periodSizeInFrames", sizeof("periodSizeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodSizeInFrames_name, &property_periodSizeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodSizeInFrames_name);

	zval property_periodSizeInMilliseconds_default_value;
	ZVAL_LONG(&property_periodSizeInMilliseconds_default_value, 0);
	zend_string *property_periodSizeInMilliseconds_name = zend_string_init("periodSizeInMilliseconds", sizeof("periodSizeInMilliseconds") - 1, 1);
	zend_declare_typed_property(class_entry, property_periodSizeInMilliseconds_name, &property_periodSizeInMilliseconds_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_periodSizeInMilliseconds_name);

	zval property_gainSmoothTimeInFrames_default_value;
	ZVAL_LONG(&property_gainSmoothTimeInFrames_default_value, 0);
	zend_string *property_gainSmoothTimeInFrames_name = zend_string_init("gainSmoothTimeInFrames", sizeof("gainSmoothTimeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainSmoothTimeInFrames_name, &property_gainSmoothTimeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_gainSmoothTimeInFrames_name);

	zval property_gainSmoothTimeInMilliseconds_default_value;
	ZVAL_LONG(&property_gainSmoothTimeInMilliseconds_default_value, 0);
	zend_string *property_gainSmoothTimeInMilliseconds_name = zend_string_init("gainSmoothTimeInMilliseconds", sizeof("gainSmoothTimeInMilliseconds") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainSmoothTimeInMilliseconds_name, &property_gainSmoothTimeInMilliseconds_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_gainSmoothTimeInMilliseconds_name);

	zval property_defaultVolumeSmoothTimeInPCMFrames_default_value;
	ZVAL_LONG(&property_defaultVolumeSmoothTimeInPCMFrames_default_value, 0);
	zend_string *property_defaultVolumeSmoothTimeInPCMFrames_name = zend_string_init("defaultVolumeSmoothTimeInPCMFrames", sizeof("defaultVolumeSmoothTimeInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_defaultVolumeSmoothTimeInPCMFrames_name, &property_defaultVolumeSmoothTimeInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_defaultVolumeSmoothTimeInPCMFrames_name);

	zval property_preMixStackSizeInBytes_default_value;
	ZVAL_LONG(&property_preMixStackSizeInBytes_default_value, 0);
	zend_string *property_preMixStackSizeInBytes_name = zend_string_init("preMixStackSizeInBytes", sizeof("preMixStackSizeInBytes") - 1, 1);
	zend_declare_typed_property(class_entry, property_preMixStackSizeInBytes_name, &property_preMixStackSizeInBytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_preMixStackSizeInBytes_name);

	zval property_allocationCallbacks_default_value;
	ZVAL_UNDEF(&property_allocationCallbacks_default_value);
	zend_string *property_allocationCallbacks_name = zend_string_init("allocationCallbacks", sizeof("allocationCallbacks") - 1, 1);
	zend_string *property_allocationCallbacks_class_ma_allocation_callbacks = zend_string_init("ma_allocation_callbacks", sizeof("ma_allocation_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_allocationCallbacks_name, &property_allocationCallbacks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_allocationCallbacks_class_ma_allocation_callbacks, 0, 0));
	zend_string_release(property_allocationCallbacks_name);

	zval property_noAutoStart_default_value;
	ZVAL_FALSE(&property_noAutoStart_default_value);
	zend_string *property_noAutoStart_name = zend_string_init("noAutoStart", sizeof("noAutoStart") - 1, 1);
	zend_declare_typed_property(class_entry, property_noAutoStart_name, &property_noAutoStart_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noAutoStart_name);

	zval property_noDevice_default_value;
	ZVAL_FALSE(&property_noDevice_default_value);
	zend_string *property_noDevice_name = zend_string_init("noDevice", sizeof("noDevice") - 1, 1);
	zend_declare_typed_property(class_entry, property_noDevice_name, &property_noDevice_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_noDevice_name);

	zval property_monoExpansionMode_default_value;
	ZVAL_LONG(&property_monoExpansionMode_default_value, 0);
	zend_string *property_monoExpansionMode_name = zend_string_init("monoExpansionMode", sizeof("monoExpansionMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_monoExpansionMode_name, &property_monoExpansionMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_monoExpansionMode_name);

	zval property_pResourceManagerVFS_default_value;
	ZVAL_NULL(&property_pResourceManagerVFS_default_value);
	zend_string *property_pResourceManagerVFS_name = zend_string_init("pResourceManagerVFS", sizeof("pResourceManagerVFS") - 1, 1);
	zend_string *property_pResourceManagerVFS_class_ma_vfs = zend_string_init("ma_vfs", sizeof("ma_vfs")-1, 1);
	zend_declare_typed_property(class_entry, property_pResourceManagerVFS_name, &property_pResourceManagerVFS_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pResourceManagerVFS_class_ma_vfs, 0, MAY_BE_NULL));
	zend_string_release(property_pResourceManagerVFS_name);

	zval property_onProcess_default_value;
	ZVAL_NULL(&property_onProcess_default_value);
	zend_string *property_onProcess_name = zend_string_init("onProcess", sizeof("onProcess") - 1, 1);
	zend_string *property_onProcess_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onProcess_name, &property_onProcess_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onProcess_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onProcess_name);

	zval property_pProcessUserData_default_value;
	ZVAL_NULL(&property_pProcessUserData_default_value);
	zend_string *property_pProcessUserData_name = zend_string_init("pProcessUserData", sizeof("pProcessUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pProcessUserData_name, &property_pProcessUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pProcessUserData_name);

	zval property_resourceManagerResampling_default_value;
	ZVAL_UNDEF(&property_resourceManagerResampling_default_value);
	zend_string *property_resourceManagerResampling_name = zend_string_init("resourceManagerResampling", sizeof("resourceManagerResampling") - 1, 1);
	zend_string *property_resourceManagerResampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_resourceManagerResampling_name, &property_resourceManagerResampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resourceManagerResampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_resourceManagerResampling_name);

	zval property_pitchResampling_default_value;
	ZVAL_UNDEF(&property_pitchResampling_default_value);
	zend_string *property_pitchResampling_name = zend_string_init("pitchResampling", sizeof("pitchResampling") - 1, 1);
	zend_string *property_pitchResampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_pitchResampling_name, &property_pitchResampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pitchResampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_pitchResampling_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_engine_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_engine_node_config", class_ma_engine_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pEngine_default_value;
	ZVAL_NULL(&property_pEngine_default_value);
	zend_string *property_pEngine_name = zend_string_init("pEngine", sizeof("pEngine") - 1, 1);
	zend_string *property_pEngine_class_ma_engine = zend_string_init("ma_engine", sizeof("ma_engine")-1, 1);
	zend_declare_typed_property(class_entry, property_pEngine_name, &property_pEngine_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pEngine_class_ma_engine, 0, MAY_BE_NULL));
	zend_string_release(property_pEngine_name);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_channelsIn_default_value;
	ZVAL_LONG(&property_channelsIn_default_value, 0);
	zend_string *property_channelsIn_name = zend_string_init("channelsIn", sizeof("channelsIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsIn_name, &property_channelsIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsIn_name);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_volumeSmoothTimeInPCMFrames_default_value;
	ZVAL_LONG(&property_volumeSmoothTimeInPCMFrames_default_value, 0);
	zend_string *property_volumeSmoothTimeInPCMFrames_name = zend_string_init("volumeSmoothTimeInPCMFrames", sizeof("volumeSmoothTimeInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_volumeSmoothTimeInPCMFrames_name, &property_volumeSmoothTimeInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_volumeSmoothTimeInPCMFrames_name);

	zval property_monoExpansionMode_default_value;
	ZVAL_LONG(&property_monoExpansionMode_default_value, 0);
	zend_string *property_monoExpansionMode_name = zend_string_init("monoExpansionMode", sizeof("monoExpansionMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_monoExpansionMode_name, &property_monoExpansionMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_monoExpansionMode_name);

	zval property_isPitchDisabled_default_value;
	ZVAL_FALSE(&property_isPitchDisabled_default_value);
	zend_string *property_isPitchDisabled_name = zend_string_init("isPitchDisabled", sizeof("isPitchDisabled") - 1, 1);
	zend_declare_typed_property(class_entry, property_isPitchDisabled_name, &property_isPitchDisabled_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_isPitchDisabled_name);

	zval property_isSpatializationDisabled_default_value;
	ZVAL_FALSE(&property_isSpatializationDisabled_default_value);
	zend_string *property_isSpatializationDisabled_name = zend_string_init("isSpatializationDisabled", sizeof("isSpatializationDisabled") - 1, 1);
	zend_declare_typed_property(class_entry, property_isSpatializationDisabled_name, &property_isSpatializationDisabled_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_isSpatializationDisabled_name);

	zval property_pinnedListenerIndex_default_value;
	ZVAL_LONG(&property_pinnedListenerIndex_default_value, 0);
	zend_string *property_pinnedListenerIndex_name = zend_string_init("pinnedListenerIndex", sizeof("pinnedListenerIndex") - 1, 1);
	zend_declare_typed_property(class_entry, property_pinnedListenerIndex_name, &property_pinnedListenerIndex_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pinnedListenerIndex_name);

	zval property_resampling_default_value;
	ZVAL_UNDEF(&property_resampling_default_value);
	zend_string *property_resampling_name = zend_string_init("resampling", sizeof("resampling") - 1, 1);
	zend_string *property_resampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_resampling_name, &property_resampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_resampling_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_fader_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_fader_config", class_ma_fader_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_file_info(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_file_info", class_ma_file_info_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_sizeInBytes_default_value;
	ZVAL_LONG(&property_sizeInBytes_default_value, 0);
	zend_string *property_sizeInBytes_name = zend_string_init("sizeInBytes", sizeof("sizeInBytes") - 1, 1);
	zend_declare_typed_property(class_entry, property_sizeInBytes_name, &property_sizeInBytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sizeInBytes_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_gainer_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_gainer_config", class_ma_gainer_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_smoothTimeInFrames_default_value;
	ZVAL_LONG(&property_smoothTimeInFrames_default_value, 0);
	zend_string *property_smoothTimeInFrames_name = zend_string_init("smoothTimeInFrames", sizeof("smoothTimeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_smoothTimeInFrames_name, &property_smoothTimeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_smoothTimeInFrames_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hishelf2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hishelf2_config", class_ma_hishelf2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_gainDB_default_value;
	ZVAL_DOUBLE(&property_gainDB_default_value, 0.0);
	zend_string *property_gainDB_name = zend_string_init("gainDB", sizeof("gainDB") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainDB_name, &property_gainDB_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_gainDB_name);

	zval property_shelfSlope_default_value;
	ZVAL_DOUBLE(&property_shelfSlope_default_value, 0.0);
	zend_string *property_shelfSlope_name = zend_string_init("shelfSlope", sizeof("shelfSlope") - 1, 1);
	zend_declare_typed_property(class_entry, property_shelfSlope_name, &property_shelfSlope_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_shelfSlope_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hishelf_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hishelf_config", class_ma_hishelf_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_gainDB_default_value;
	ZVAL_DOUBLE(&property_gainDB_default_value, 0.0);
	zend_string *property_gainDB_name = zend_string_init("gainDB", sizeof("gainDB") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainDB_name, &property_gainDB_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_gainDB_name);

	zval property_shelfSlope_default_value;
	ZVAL_DOUBLE(&property_shelfSlope_default_value, 0.0);
	zend_string *property_shelfSlope_name = zend_string_init("shelfSlope", sizeof("shelfSlope") - 1, 1);
	zend_declare_typed_property(class_entry, property_shelfSlope_name, &property_shelfSlope_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_shelfSlope_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hishelf_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hishelf_node_config", class_ma_hishelf_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_hishelf_default_value;
	ZVAL_UNDEF(&property_hishelf_default_value);
	zend_string *property_hishelf_name = zend_string_init("hishelf", sizeof("hishelf") - 1, 1);
	zend_string *property_hishelf_class_ma_hishelf_config = zend_string_init("ma_hishelf_config", sizeof("ma_hishelf_config")-1, 1);
	zend_declare_typed_property(class_entry, property_hishelf_name, &property_hishelf_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_hishelf_class_ma_hishelf_config, 0, 0));
	zend_string_release(property_hishelf_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf1_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf1_config", class_ma_hpf1_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf2_config", class_ma_hpf2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf_config", class_ma_hpf_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_order_default_value;
	ZVAL_LONG(&property_order_default_value, 0);
	zend_string *property_order_name = zend_string_init("order", sizeof("order") - 1, 1);
	zend_declare_typed_property(class_entry, property_order_name, &property_order_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_order_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf_node_config", class_ma_hpf_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_hpf_default_value;
	ZVAL_UNDEF(&property_hpf_default_value);
	zend_string *property_hpf_name = zend_string_init("hpf", sizeof("hpf") - 1, 1);
	zend_string *property_hpf_class_ma_hpf_config = zend_string_init("ma_hpf_config", sizeof("ma_hpf_config")-1, 1);
	zend_declare_typed_property(class_entry, property_hpf_name, &property_hpf_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_hpf_class_ma_hpf_config, 0, 0));
	zend_string_release(property_hpf_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job", class_ma_job_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_toc_default_value;
	ZVAL_UNDEF(&property_toc_default_value);
	zend_string *property_toc_name = zend_string_init("toc", sizeof("toc") - 1, 1);
	zend_string *property_toc_class_ma_job_toc = zend_string_init("ma_job_toc", sizeof("ma_job_toc")-1, 1);
	zend_declare_typed_property(class_entry, property_toc_name, &property_toc_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_toc_class_ma_job_toc, 0, 0));
	zend_string_release(property_toc_name);

	zval property_next_default_value;
	ZVAL_LONG(&property_next_default_value, 0);
	zend_string *property_next_name = zend_string_init("next", sizeof("next") - 1, 1);
	zend_declare_typed_property(class_entry, property_next_name, &property_next_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_next_name);

	zval property_order_default_value;
	ZVAL_LONG(&property_order_default_value, 0);
	zend_string *property_order_name = zend_string_init("order", sizeof("order") - 1, 1);
	zend_declare_typed_property(class_entry, property_order_name, &property_order_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_order_name);

	zval property_data_default_value;
	ZVAL_UNDEF(&property_data_default_value);
	zend_string *property_data_name = zend_string_init("data", sizeof("data") - 1, 1);
	zend_string *property_data_class_ma_job_data = zend_string_init("ma_job_data", sizeof("ma_job_data")-1, 1);
	zend_declare_typed_property(class_entry, property_data_name, &property_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_data_class_ma_job_data, 0, 0));
	zend_string_release(property_data_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data", class_ma_job_data_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_custom_default_value;
	ZVAL_UNDEF(&property_custom_default_value);
	zend_string *property_custom_name = zend_string_init("custom", sizeof("custom") - 1, 1);
	zend_string *property_custom_class_ma_job_data_custom = zend_string_init("ma_job_data_custom", sizeof("ma_job_data_custom")-1, 1);
	zend_declare_typed_property(class_entry, property_custom_name, &property_custom_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_custom_class_ma_job_data_custom, 0, 0));
	zend_string_release(property_custom_name);

	zval property_resourceManager_default_value;
	ZVAL_UNDEF(&property_resourceManager_default_value);
	zend_string *property_resourceManager_name = zend_string_init("resourceManager", sizeof("resourceManager") - 1, 1);
	zend_string *property_resourceManager_class_ma_job_data_resourceManager = zend_string_init("ma_job_data_resourceManager", sizeof("ma_job_data_resourceManager")-1, 1);
	zend_declare_typed_property(class_entry, property_resourceManager_name, &property_resourceManager_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resourceManager_class_ma_job_data_resourceManager, 0, 0));
	zend_string_release(property_resourceManager_name);

	zval property_device_default_value;
	ZVAL_UNDEF(&property_device_default_value);
	zend_string *property_device_name = zend_string_init("device", sizeof("device") - 1, 1);
	zend_string *property_device_class_ma_job_data_device = zend_string_init("ma_job_data_device", sizeof("ma_job_data_device")-1, 1);
	zend_declare_typed_property(class_entry, property_device_name, &property_device_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_device_class_ma_job_data_device, 0, 0));
	zend_string_release(property_device_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_custom(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_custom", class_ma_job_data_custom_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_proc_default_value;
	ZVAL_NULL(&property_proc_default_value);
	zend_string *property_proc_name = zend_string_init("proc", sizeof("proc") - 1, 1);
	zend_string *property_proc_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_proc_name, &property_proc_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_proc_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_proc_name);

	zval property_data0_default_value;
	ZVAL_LONG(&property_data0_default_value, 0);
	zend_string *property_data0_name = zend_string_init("data0", sizeof("data0") - 1, 1);
	zend_declare_typed_property(class_entry, property_data0_name, &property_data0_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_data0_name);

	zval property_data1_default_value;
	ZVAL_LONG(&property_data1_default_value, 0);
	zend_string *property_data1_name = zend_string_init("data1", sizeof("data1") - 1, 1);
	zend_declare_typed_property(class_entry, property_data1_name, &property_data1_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_data1_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_device(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_device", class_ma_job_data_device_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_aaudio_default_value;
	ZVAL_UNDEF(&property_aaudio_default_value);
	zend_string *property_aaudio_name = zend_string_init("aaudio", sizeof("aaudio") - 1, 1);
	zend_string *property_aaudio_class_ma_job_data_device_aaudio = zend_string_init("ma_job_data_device_aaudio", sizeof("ma_job_data_device_aaudio")-1, 1);
	zend_declare_typed_property(class_entry, property_aaudio_name, &property_aaudio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_aaudio_class_ma_job_data_device_aaudio, 0, 0));
	zend_string_release(property_aaudio_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_device_aaudio(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_device_aaudio", class_ma_job_data_device_aaudio_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_reroute_default_value;
	ZVAL_UNDEF(&property_reroute_default_value);
	zend_string *property_reroute_name = zend_string_init("reroute", sizeof("reroute") - 1, 1);
	zend_string *property_reroute_class_ma_job_data_device_aaudio_reroute = zend_string_init("ma_job_data_device_aaudio_reroute", sizeof("ma_job_data_device_aaudio_reroute")-1, 1);
	zend_declare_typed_property(class_entry, property_reroute_name, &property_reroute_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_reroute_class_ma_job_data_device_aaudio_reroute, 0, 0));
	zend_string_release(property_reroute_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_device_aaudio_reroute(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_device_aaudio_reroute", class_ma_job_data_device_aaudio_reroute_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDevice_default_value;
	ZVAL_LONG(&property_pDevice_default_value, 0);
	zend_string *property_pDevice_name = zend_string_init("pDevice", sizeof("pDevice") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDevice_name, &property_pDevice_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDevice_name);

	zval property_deviceType_default_value;
	ZVAL_LONG(&property_deviceType_default_value, 0);
	zend_string *property_deviceType_name = zend_string_init("deviceType", sizeof("deviceType") - 1, 1);
	zend_declare_typed_property(class_entry, property_deviceType_name, &property_deviceType_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_deviceType_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager", class_ma_job_data_resourceManager_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_loadDataBufferNode_default_value;
	ZVAL_UNDEF(&property_loadDataBufferNode_default_value);
	zend_string *property_loadDataBufferNode_name = zend_string_init("loadDataBufferNode", sizeof("loadDataBufferNode") - 1, 1);
	zend_string *property_loadDataBufferNode_class_ma_job_data_resourceManager_loadDataBufferNode = zend_string_init("ma_job_data_resourceManager_loadDataBufferNode", sizeof("ma_job_data_resourceManager_loadDataBufferNode")-1, 1);
	zend_declare_typed_property(class_entry, property_loadDataBufferNode_name, &property_loadDataBufferNode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_loadDataBufferNode_class_ma_job_data_resourceManager_loadDataBufferNode, 0, 0));
	zend_string_release(property_loadDataBufferNode_name);

	zval property_freeDataBufferNode_default_value;
	ZVAL_UNDEF(&property_freeDataBufferNode_default_value);
	zend_string *property_freeDataBufferNode_name = zend_string_init("freeDataBufferNode", sizeof("freeDataBufferNode") - 1, 1);
	zend_string *property_freeDataBufferNode_class_ma_job_data_resourceManager_freeDataBufferNode = zend_string_init("ma_job_data_resourceManager_freeDataBufferNode", sizeof("ma_job_data_resourceManager_freeDataBufferNode")-1, 1);
	zend_declare_typed_property(class_entry, property_freeDataBufferNode_name, &property_freeDataBufferNode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_freeDataBufferNode_class_ma_job_data_resourceManager_freeDataBufferNode, 0, 0));
	zend_string_release(property_freeDataBufferNode_name);

	zval property_pageDataBufferNode_default_value;
	ZVAL_UNDEF(&property_pageDataBufferNode_default_value);
	zend_string *property_pageDataBufferNode_name = zend_string_init("pageDataBufferNode", sizeof("pageDataBufferNode") - 1, 1);
	zend_string *property_pageDataBufferNode_class_ma_job_data_resourceManager_pageDataBufferNode = zend_string_init("ma_job_data_resourceManager_pageDataBufferNode", sizeof("ma_job_data_resourceManager_pageDataBufferNode")-1, 1);
	zend_declare_typed_property(class_entry, property_pageDataBufferNode_name, &property_pageDataBufferNode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pageDataBufferNode_class_ma_job_data_resourceManager_pageDataBufferNode, 0, 0));
	zend_string_release(property_pageDataBufferNode_name);

	zval property_loadDataBuffer_default_value;
	ZVAL_UNDEF(&property_loadDataBuffer_default_value);
	zend_string *property_loadDataBuffer_name = zend_string_init("loadDataBuffer", sizeof("loadDataBuffer") - 1, 1);
	zend_string *property_loadDataBuffer_class_ma_job_data_resourceManager_loadDataBuffer = zend_string_init("ma_job_data_resourceManager_loadDataBuffer", sizeof("ma_job_data_resourceManager_loadDataBuffer")-1, 1);
	zend_declare_typed_property(class_entry, property_loadDataBuffer_name, &property_loadDataBuffer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_loadDataBuffer_class_ma_job_data_resourceManager_loadDataBuffer, 0, 0));
	zend_string_release(property_loadDataBuffer_name);

	zval property_freeDataBuffer_default_value;
	ZVAL_UNDEF(&property_freeDataBuffer_default_value);
	zend_string *property_freeDataBuffer_name = zend_string_init("freeDataBuffer", sizeof("freeDataBuffer") - 1, 1);
	zend_string *property_freeDataBuffer_class_ma_job_data_resourceManager_freeDataBuffer = zend_string_init("ma_job_data_resourceManager_freeDataBuffer", sizeof("ma_job_data_resourceManager_freeDataBuffer")-1, 1);
	zend_declare_typed_property(class_entry, property_freeDataBuffer_name, &property_freeDataBuffer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_freeDataBuffer_class_ma_job_data_resourceManager_freeDataBuffer, 0, 0));
	zend_string_release(property_freeDataBuffer_name);

	zval property_loadDataStream_default_value;
	ZVAL_UNDEF(&property_loadDataStream_default_value);
	zend_string *property_loadDataStream_name = zend_string_init("loadDataStream", sizeof("loadDataStream") - 1, 1);
	zend_string *property_loadDataStream_class_ma_job_data_resourceManager_loadDataStream = zend_string_init("ma_job_data_resourceManager_loadDataStream", sizeof("ma_job_data_resourceManager_loadDataStream")-1, 1);
	zend_declare_typed_property(class_entry, property_loadDataStream_name, &property_loadDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_loadDataStream_class_ma_job_data_resourceManager_loadDataStream, 0, 0));
	zend_string_release(property_loadDataStream_name);

	zval property_freeDataStream_default_value;
	ZVAL_UNDEF(&property_freeDataStream_default_value);
	zend_string *property_freeDataStream_name = zend_string_init("freeDataStream", sizeof("freeDataStream") - 1, 1);
	zend_string *property_freeDataStream_class_ma_job_data_resourceManager_freeDataStream = zend_string_init("ma_job_data_resourceManager_freeDataStream", sizeof("ma_job_data_resourceManager_freeDataStream")-1, 1);
	zend_declare_typed_property(class_entry, property_freeDataStream_name, &property_freeDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_freeDataStream_class_ma_job_data_resourceManager_freeDataStream, 0, 0));
	zend_string_release(property_freeDataStream_name);

	zval property_pageDataStream_default_value;
	ZVAL_UNDEF(&property_pageDataStream_default_value);
	zend_string *property_pageDataStream_name = zend_string_init("pageDataStream", sizeof("pageDataStream") - 1, 1);
	zend_string *property_pageDataStream_class_ma_job_data_resourceManager_pageDataStream = zend_string_init("ma_job_data_resourceManager_pageDataStream", sizeof("ma_job_data_resourceManager_pageDataStream")-1, 1);
	zend_declare_typed_property(class_entry, property_pageDataStream_name, &property_pageDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pageDataStream_class_ma_job_data_resourceManager_pageDataStream, 0, 0));
	zend_string_release(property_pageDataStream_name);

	zval property_seekDataStream_default_value;
	ZVAL_UNDEF(&property_seekDataStream_default_value);
	zend_string *property_seekDataStream_name = zend_string_init("seekDataStream", sizeof("seekDataStream") - 1, 1);
	zend_string *property_seekDataStream_class_ma_job_data_resourceManager_seekDataStream = zend_string_init("ma_job_data_resourceManager_seekDataStream", sizeof("ma_job_data_resourceManager_seekDataStream")-1, 1);
	zend_declare_typed_property(class_entry, property_seekDataStream_name, &property_seekDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_seekDataStream_class_ma_job_data_resourceManager_seekDataStream, 0, 0));
	zend_string_release(property_seekDataStream_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_freeDataBuffer(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_freeDataBuffer", class_ma_job_data_resourceManager_freeDataBuffer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDataBuffer_default_value;
	ZVAL_LONG(&property_pDataBuffer_default_value, 0);
	zend_string *property_pDataBuffer_name = zend_string_init("pDataBuffer", sizeof("pDataBuffer") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataBuffer_name, &property_pDataBuffer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataBuffer_name);

	zval property_pDoneNotification_default_value;
	ZVAL_LONG(&property_pDoneNotification_default_value, 0);
	zend_string *property_pDoneNotification_name = zend_string_init("pDoneNotification", sizeof("pDoneNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneNotification_name, &property_pDoneNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneNotification_name);

	zval property_pDoneFence_default_value;
	ZVAL_LONG(&property_pDoneFence_default_value, 0);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_freeDataBufferNode(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_freeDataBufferNode", class_ma_job_data_resourceManager_freeDataBufferNode_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pResourceManager_default_value;
	ZVAL_LONG(&property_pResourceManager_default_value, 0);
	zend_string *property_pResourceManager_name = zend_string_init("pResourceManager", sizeof("pResourceManager") - 1, 1);
	zend_declare_typed_property(class_entry, property_pResourceManager_name, &property_pResourceManager_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pResourceManager_name);

	zval property_pDataBufferNode_default_value;
	ZVAL_LONG(&property_pDataBufferNode_default_value, 0);
	zend_string *property_pDataBufferNode_name = zend_string_init("pDataBufferNode", sizeof("pDataBufferNode") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataBufferNode_name, &property_pDataBufferNode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataBufferNode_name);

	zval property_pDoneNotification_default_value;
	ZVAL_LONG(&property_pDoneNotification_default_value, 0);
	zend_string *property_pDoneNotification_name = zend_string_init("pDoneNotification", sizeof("pDoneNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneNotification_name, &property_pDoneNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneNotification_name);

	zval property_pDoneFence_default_value;
	ZVAL_LONG(&property_pDoneFence_default_value, 0);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_freeDataStream(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_freeDataStream", class_ma_job_data_resourceManager_freeDataStream_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDataStream_default_value;
	ZVAL_LONG(&property_pDataStream_default_value, 0);
	zend_string *property_pDataStream_name = zend_string_init("pDataStream", sizeof("pDataStream") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataStream_name, &property_pDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataStream_name);

	zval property_pDoneNotification_default_value;
	ZVAL_LONG(&property_pDoneNotification_default_value, 0);
	zend_string *property_pDoneNotification_name = zend_string_init("pDoneNotification", sizeof("pDoneNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneNotification_name, &property_pDoneNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneNotification_name);

	zval property_pDoneFence_default_value;
	ZVAL_LONG(&property_pDoneFence_default_value, 0);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_loadDataBuffer(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_loadDataBuffer", class_ma_job_data_resourceManager_loadDataBuffer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDataBuffer_default_value;
	ZVAL_LONG(&property_pDataBuffer_default_value, 0);
	zend_string *property_pDataBuffer_name = zend_string_init("pDataBuffer", sizeof("pDataBuffer") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataBuffer_name, &property_pDataBuffer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataBuffer_name);

	zval property_pInitNotification_default_value;
	ZVAL_LONG(&property_pInitNotification_default_value, 0);
	zend_string *property_pInitNotification_name = zend_string_init("pInitNotification", sizeof("pInitNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInitNotification_name, &property_pInitNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pInitNotification_name);

	zval property_pDoneNotification_default_value;
	ZVAL_LONG(&property_pDoneNotification_default_value, 0);
	zend_string *property_pDoneNotification_name = zend_string_init("pDoneNotification", sizeof("pDoneNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneNotification_name, &property_pDoneNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneNotification_name);

	zval property_pInitFence_default_value;
	ZVAL_LONG(&property_pInitFence_default_value, 0);
	zend_string *property_pInitFence_name = zend_string_init("pInitFence", sizeof("pInitFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInitFence_name, &property_pInitFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pInitFence_name);

	zval property_pDoneFence_default_value;
	ZVAL_LONG(&property_pDoneFence_default_value, 0);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneFence_name);

	zval property_rangeBegInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeBegInPCMFrames_default_value, 0);
	zend_string *property_rangeBegInPCMFrames_name = zend_string_init("rangeBegInPCMFrames", sizeof("rangeBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeBegInPCMFrames_name, &property_rangeBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeBegInPCMFrames_name);

	zval property_rangeEndInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeEndInPCMFrames_default_value, 0);
	zend_string *property_rangeEndInPCMFrames_name = zend_string_init("rangeEndInPCMFrames", sizeof("rangeEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeEndInPCMFrames_name, &property_rangeEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeEndInPCMFrames_name);

	zval property_loopPointBegInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointBegInPCMFrames_default_value, 0);
	zend_string *property_loopPointBegInPCMFrames_name = zend_string_init("loopPointBegInPCMFrames", sizeof("loopPointBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointBegInPCMFrames_name, &property_loopPointBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointBegInPCMFrames_name);

	zval property_loopPointEndInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointEndInPCMFrames_default_value, 0);
	zend_string *property_loopPointEndInPCMFrames_name = zend_string_init("loopPointEndInPCMFrames", sizeof("loopPointEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointEndInPCMFrames_name, &property_loopPointEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointEndInPCMFrames_name);

	zval property_isLooping_default_value;
	ZVAL_LONG(&property_isLooping_default_value, 0);
	zend_string *property_isLooping_name = zend_string_init("isLooping", sizeof("isLooping") - 1, 1);
	zend_declare_typed_property(class_entry, property_isLooping_name, &property_isLooping_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_isLooping_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_loadDataBufferNode(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_loadDataBufferNode", class_ma_job_data_resourceManager_loadDataBufferNode_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pResourceManager_default_value;
	ZVAL_LONG(&property_pResourceManager_default_value, 0);
	zend_string *property_pResourceManager_name = zend_string_init("pResourceManager", sizeof("pResourceManager") - 1, 1);
	zend_declare_typed_property(class_entry, property_pResourceManager_name, &property_pResourceManager_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pResourceManager_name);

	zval property_pDataBufferNode_default_value;
	ZVAL_LONG(&property_pDataBufferNode_default_value, 0);
	zend_string *property_pDataBufferNode_name = zend_string_init("pDataBufferNode", sizeof("pDataBufferNode") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataBufferNode_name, &property_pDataBufferNode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataBufferNode_name);

	zval property_pFilePath_default_value;
	ZVAL_LONG(&property_pFilePath_default_value, 0);
	zend_string *property_pFilePath_name = zend_string_init("pFilePath", sizeof("pFilePath") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePath_name, &property_pFilePath_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pFilePath_name);

	zval property_pFilePathW_default_value;
	ZVAL_LONG(&property_pFilePathW_default_value, 0);
	zend_string *property_pFilePathW_name = zend_string_init("pFilePathW", sizeof("pFilePathW") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePathW_name, &property_pFilePathW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pFilePathW_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_pInitNotification_default_value;
	ZVAL_LONG(&property_pInitNotification_default_value, 0);
	zend_string *property_pInitNotification_name = zend_string_init("pInitNotification", sizeof("pInitNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInitNotification_name, &property_pInitNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pInitNotification_name);

	zval property_pDoneNotification_default_value;
	ZVAL_LONG(&property_pDoneNotification_default_value, 0);
	zend_string *property_pDoneNotification_name = zend_string_init("pDoneNotification", sizeof("pDoneNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneNotification_name, &property_pDoneNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneNotification_name);

	zval property_pInitFence_default_value;
	ZVAL_LONG(&property_pInitFence_default_value, 0);
	zend_string *property_pInitFence_name = zend_string_init("pInitFence", sizeof("pInitFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInitFence_name, &property_pInitFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pInitFence_name);

	zval property_pDoneFence_default_value;
	ZVAL_LONG(&property_pDoneFence_default_value, 0);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_loadDataStream(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_loadDataStream", class_ma_job_data_resourceManager_loadDataStream_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDataStream_default_value;
	ZVAL_LONG(&property_pDataStream_default_value, 0);
	zend_string *property_pDataStream_name = zend_string_init("pDataStream", sizeof("pDataStream") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataStream_name, &property_pDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataStream_name);

	zval property_pFilePath_default_value;
	ZVAL_LONG(&property_pFilePath_default_value, 0);
	zend_string *property_pFilePath_name = zend_string_init("pFilePath", sizeof("pFilePath") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePath_name, &property_pFilePath_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pFilePath_name);

	zval property_pFilePathW_default_value;
	ZVAL_LONG(&property_pFilePathW_default_value, 0);
	zend_string *property_pFilePathW_name = zend_string_init("pFilePathW", sizeof("pFilePathW") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePathW_name, &property_pFilePathW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pFilePathW_name);

	zval property_initialSeekPoint_default_value;
	ZVAL_LONG(&property_initialSeekPoint_default_value, 0);
	zend_string *property_initialSeekPoint_name = zend_string_init("initialSeekPoint", sizeof("initialSeekPoint") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialSeekPoint_name, &property_initialSeekPoint_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialSeekPoint_name);

	zval property_pInitNotification_default_value;
	ZVAL_LONG(&property_pInitNotification_default_value, 0);
	zend_string *property_pInitNotification_name = zend_string_init("pInitNotification", sizeof("pInitNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInitNotification_name, &property_pInitNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pInitNotification_name);

	zval property_pInitFence_default_value;
	ZVAL_LONG(&property_pInitFence_default_value, 0);
	zend_string *property_pInitFence_name = zend_string_init("pInitFence", sizeof("pInitFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInitFence_name, &property_pInitFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pInitFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_pageDataBufferNode(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_pageDataBufferNode", class_ma_job_data_resourceManager_pageDataBufferNode_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pResourceManager_default_value;
	ZVAL_LONG(&property_pResourceManager_default_value, 0);
	zend_string *property_pResourceManager_name = zend_string_init("pResourceManager", sizeof("pResourceManager") - 1, 1);
	zend_declare_typed_property(class_entry, property_pResourceManager_name, &property_pResourceManager_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pResourceManager_name);

	zval property_pDataBufferNode_default_value;
	ZVAL_LONG(&property_pDataBufferNode_default_value, 0);
	zend_string *property_pDataBufferNode_name = zend_string_init("pDataBufferNode", sizeof("pDataBufferNode") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataBufferNode_name, &property_pDataBufferNode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataBufferNode_name);

	zval property_pDecoder_default_value;
	ZVAL_LONG(&property_pDecoder_default_value, 0);
	zend_string *property_pDecoder_name = zend_string_init("pDecoder", sizeof("pDecoder") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDecoder_name, &property_pDecoder_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDecoder_name);

	zval property_pDoneNotification_default_value;
	ZVAL_LONG(&property_pDoneNotification_default_value, 0);
	zend_string *property_pDoneNotification_name = zend_string_init("pDoneNotification", sizeof("pDoneNotification") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneNotification_name, &property_pDoneNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneNotification_name);

	zval property_pDoneFence_default_value;
	ZVAL_LONG(&property_pDoneFence_default_value, 0);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDoneFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_pageDataStream(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_pageDataStream", class_ma_job_data_resourceManager_pageDataStream_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDataStream_default_value;
	ZVAL_LONG(&property_pDataStream_default_value, 0);
	zend_string *property_pDataStream_name = zend_string_init("pDataStream", sizeof("pDataStream") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataStream_name, &property_pDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataStream_name);

	zval property_pageIndex_default_value;
	ZVAL_LONG(&property_pageIndex_default_value, 0);
	zend_string *property_pageIndex_name = zend_string_init("pageIndex", sizeof("pageIndex") - 1, 1);
	zend_declare_typed_property(class_entry, property_pageIndex_name, &property_pageIndex_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pageIndex_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_data_resourceManager_seekDataStream(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_data_resourceManager_seekDataStream", class_ma_job_data_resourceManager_seekDataStream_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pDataStream_default_value;
	ZVAL_LONG(&property_pDataStream_default_value, 0);
	zend_string *property_pDataStream_name = zend_string_init("pDataStream", sizeof("pDataStream") - 1, 1);
	zend_declare_typed_property(class_entry, property_pDataStream_name, &property_pDataStream_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pDataStream_name);

	zval property_frameIndex_default_value;
	ZVAL_LONG(&property_frameIndex_default_value, 0);
	zend_string *property_frameIndex_name = zend_string_init("frameIndex", sizeof("frameIndex") - 1, 1);
	zend_declare_typed_property(class_entry, property_frameIndex_name, &property_frameIndex_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_frameIndex_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_queue_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_queue_config", class_ma_job_queue_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_capacity_default_value;
	ZVAL_LONG(&property_capacity_default_value, 0);
	zend_string *property_capacity_name = zend_string_init("capacity", sizeof("capacity") - 1, 1);
	zend_declare_typed_property(class_entry, property_capacity_name, &property_capacity_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_capacity_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_toc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_toc", class_ma_job_toc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_breakup_default_value;
	ZVAL_UNDEF(&property_breakup_default_value);
	zend_string *property_breakup_name = zend_string_init("breakup", sizeof("breakup") - 1, 1);
	zend_string *property_breakup_class_ma_job_toc_breakup = zend_string_init("ma_job_toc_breakup", sizeof("ma_job_toc_breakup")-1, 1);
	zend_declare_typed_property(class_entry, property_breakup_name, &property_breakup_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_breakup_class_ma_job_toc_breakup, 0, 0));
	zend_string_release(property_breakup_name);

	zval property_allocation_default_value;
	ZVAL_LONG(&property_allocation_default_value, 0);
	zend_string *property_allocation_name = zend_string_init("allocation", sizeof("allocation") - 1, 1);
	zend_declare_typed_property(class_entry, property_allocation_name, &property_allocation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_allocation_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_toc_breakup(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_toc_breakup", class_ma_job_toc_breakup_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_code_default_value;
	ZVAL_LONG(&property_code_default_value, 0);
	zend_string *property_code_name = zend_string_init("code", sizeof("code") - 1, 1);
	zend_declare_typed_property(class_entry, property_code_name, &property_code_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_code_name);

	zval property_slot_default_value;
	ZVAL_LONG(&property_slot_default_value, 0);
	zend_string *property_slot_name = zend_string_init("slot", sizeof("slot") - 1, 1);
	zend_declare_typed_property(class_entry, property_slot_name, &property_slot_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_slot_name);

	zval property_refcount_default_value;
	ZVAL_LONG(&property_refcount_default_value, 0);
	zend_string *property_refcount_name = zend_string_init("refcount", sizeof("refcount") - 1, 1);
	zend_declare_typed_property(class_entry, property_refcount_name, &property_refcount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_refcount_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_linear_resampler_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_linear_resampler_config", class_ma_linear_resampler_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRateIn_default_value;
	ZVAL_LONG(&property_sampleRateIn_default_value, 0);
	zend_string *property_sampleRateIn_name = zend_string_init("sampleRateIn", sizeof("sampleRateIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRateIn_name, &property_sampleRateIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRateIn_name);

	zval property_sampleRateOut_default_value;
	ZVAL_LONG(&property_sampleRateOut_default_value, 0);
	zend_string *property_sampleRateOut_name = zend_string_init("sampleRateOut", sizeof("sampleRateOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRateOut_name, &property_sampleRateOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRateOut_name);

	zval property_lpfOrder_default_value;
	ZVAL_LONG(&property_lpfOrder_default_value, 0);
	zend_string *property_lpfOrder_name = zend_string_init("lpfOrder", sizeof("lpfOrder") - 1, 1);
	zend_declare_typed_property(class_entry, property_lpfOrder_name, &property_lpfOrder_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_lpfOrder_name);

	zval property_lpfNyquistFactor_default_value;
	ZVAL_DOUBLE(&property_lpfNyquistFactor_default_value, 0.0);
	zend_string *property_lpfNyquistFactor_name = zend_string_init("lpfNyquistFactor", sizeof("lpfNyquistFactor") - 1, 1);
	zend_declare_typed_property(class_entry, property_lpfNyquistFactor_name, &property_lpfNyquistFactor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_lpfNyquistFactor_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_log_callback(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_log_callback", class_ma_log_callback_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_onLog_default_value;
	ZVAL_NULL(&property_onLog_default_value);
	zend_string *property_onLog_name = zend_string_init("onLog", sizeof("onLog") - 1, 1);
	zend_string *property_onLog_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onLog_name, &property_onLog_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onLog_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onLog_name);

	zval property_pUserData_default_value;
	ZVAL_NULL(&property_pUserData_default_value);
	zend_string *property_pUserData_name = zend_string_init("pUserData", sizeof("pUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pUserData_name, &property_pUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pUserData_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_loshelf2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_loshelf2_config", class_ma_loshelf2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_gainDB_default_value;
	ZVAL_DOUBLE(&property_gainDB_default_value, 0.0);
	zend_string *property_gainDB_name = zend_string_init("gainDB", sizeof("gainDB") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainDB_name, &property_gainDB_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_gainDB_name);

	zval property_shelfSlope_default_value;
	ZVAL_DOUBLE(&property_shelfSlope_default_value, 0.0);
	zend_string *property_shelfSlope_name = zend_string_init("shelfSlope", sizeof("shelfSlope") - 1, 1);
	zend_declare_typed_property(class_entry, property_shelfSlope_name, &property_shelfSlope_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_shelfSlope_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_loshelf_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_loshelf_config", class_ma_loshelf_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_gainDB_default_value;
	ZVAL_DOUBLE(&property_gainDB_default_value, 0.0);
	zend_string *property_gainDB_name = zend_string_init("gainDB", sizeof("gainDB") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainDB_name, &property_gainDB_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_gainDB_name);

	zval property_shelfSlope_default_value;
	ZVAL_DOUBLE(&property_shelfSlope_default_value, 0.0);
	zend_string *property_shelfSlope_name = zend_string_init("shelfSlope", sizeof("shelfSlope") - 1, 1);
	zend_declare_typed_property(class_entry, property_shelfSlope_name, &property_shelfSlope_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_shelfSlope_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_loshelf_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_loshelf_node_config", class_ma_loshelf_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_loshelf_default_value;
	ZVAL_UNDEF(&property_loshelf_default_value);
	zend_string *property_loshelf_name = zend_string_init("loshelf", sizeof("loshelf") - 1, 1);
	zend_string *property_loshelf_class_ma_loshelf_config = zend_string_init("ma_loshelf_config", sizeof("ma_loshelf_config")-1, 1);
	zend_declare_typed_property(class_entry, property_loshelf_name, &property_loshelf_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_loshelf_class_ma_loshelf_config, 0, 0));
	zend_string_release(property_loshelf_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf1_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf1_config", class_ma_lpf1_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf2_config", class_ma_lpf2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf_config", class_ma_lpf_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_cutoffFrequency_default_value;
	ZVAL_DOUBLE(&property_cutoffFrequency_default_value, 0.0);
	zend_string *property_cutoffFrequency_name = zend_string_init("cutoffFrequency", sizeof("cutoffFrequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_cutoffFrequency_name, &property_cutoffFrequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_cutoffFrequency_name);

	zval property_order_default_value;
	ZVAL_LONG(&property_order_default_value, 0);
	zend_string *property_order_name = zend_string_init("order", sizeof("order") - 1, 1);
	zend_declare_typed_property(class_entry, property_order_name, &property_order_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_order_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf_node_config", class_ma_lpf_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_lpf_default_value;
	ZVAL_UNDEF(&property_lpf_default_value);
	zend_string *property_lpf_name = zend_string_init("lpf", sizeof("lpf") - 1, 1);
	zend_string *property_lpf_class_ma_lpf_config = zend_string_init("ma_lpf_config", sizeof("ma_lpf_config")-1, 1);
	zend_declare_typed_property(class_entry, property_lpf_name, &property_lpf_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_lpf_class_ma_lpf_config, 0, 0));
	zend_string_release(property_lpf_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_node_config", class_ma_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_vtable_default_value;
	ZVAL_NULL(&property_vtable_default_value);
	zend_string *property_vtable_name = zend_string_init("vtable", sizeof("vtable") - 1, 1);
	zend_string *property_vtable_class_ma_node_vtable = zend_string_init("ma_node_vtable", sizeof("ma_node_vtable")-1, 1);
	zend_declare_typed_property(class_entry, property_vtable_name, &property_vtable_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_vtable_class_ma_node_vtable, 0, MAY_BE_NULL));
	zend_string_release(property_vtable_name);

	zval property_initialState_default_value;
	ZVAL_LONG(&property_initialState_default_value, 0);
	zend_string *property_initialState_name = zend_string_init("initialState", sizeof("initialState") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialState_name, &property_initialState_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialState_name);

	zval property_inputBusCount_default_value;
	ZVAL_LONG(&property_inputBusCount_default_value, 0);
	zend_string *property_inputBusCount_name = zend_string_init("inputBusCount", sizeof("inputBusCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_inputBusCount_name, &property_inputBusCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_inputBusCount_name);

	zval property_outputBusCount_default_value;
	ZVAL_LONG(&property_outputBusCount_default_value, 0);
	zend_string *property_outputBusCount_name = zend_string_init("outputBusCount", sizeof("outputBusCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_outputBusCount_name, &property_outputBusCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_outputBusCount_name);

	zval property_pInputChannels_default_value;
	ZVAL_NULL(&property_pInputChannels_default_value);
	zend_string *property_pInputChannels_name = zend_string_init("pInputChannels", sizeof("pInputChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_pInputChannels_name, &property_pInputChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pInputChannels_name);

	zval property_pOutputChannels_default_value;
	ZVAL_NULL(&property_pOutputChannels_default_value);
	zend_string *property_pOutputChannels_name = zend_string_init("pOutputChannels", sizeof("pOutputChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_pOutputChannels_name, &property_pOutputChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pOutputChannels_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_node_graph_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_node_graph_config", class_ma_node_graph_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_processingSizeInFrames_default_value;
	ZVAL_LONG(&property_processingSizeInFrames_default_value, 0);
	zend_string *property_processingSizeInFrames_name = zend_string_init("processingSizeInFrames", sizeof("processingSizeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_processingSizeInFrames_name, &property_processingSizeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_processingSizeInFrames_name);

	zval property_preMixStackSizeInBytes_default_value;
	ZVAL_LONG(&property_preMixStackSizeInBytes_default_value, 0);
	zend_string *property_preMixStackSizeInBytes_name = zend_string_init("preMixStackSizeInBytes", sizeof("preMixStackSizeInBytes") - 1, 1);
	zend_declare_typed_property(class_entry, property_preMixStackSizeInBytes_name, &property_preMixStackSizeInBytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_preMixStackSizeInBytes_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_node_vtable(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_node_vtable", class_ma_node_vtable_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_onProcess_default_value;
	ZVAL_NULL(&property_onProcess_default_value);
	zend_string *property_onProcess_name = zend_string_init("onProcess", sizeof("onProcess") - 1, 1);
	zend_string *property_onProcess_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onProcess_name, &property_onProcess_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onProcess_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onProcess_name);

	zval property_onGetRequiredInputFrameCount_default_value;
	ZVAL_NULL(&property_onGetRequiredInputFrameCount_default_value);
	zend_string *property_onGetRequiredInputFrameCount_name = zend_string_init("onGetRequiredInputFrameCount", sizeof("onGetRequiredInputFrameCount") - 1, 1);
	zend_string *property_onGetRequiredInputFrameCount_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetRequiredInputFrameCount_name, &property_onGetRequiredInputFrameCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetRequiredInputFrameCount_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetRequiredInputFrameCount_name);

	zval property_inputBusCount_default_value;
	ZVAL_LONG(&property_inputBusCount_default_value, 0);
	zend_string *property_inputBusCount_name = zend_string_init("inputBusCount", sizeof("inputBusCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_inputBusCount_name, &property_inputBusCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_inputBusCount_name);

	zval property_outputBusCount_default_value;
	ZVAL_LONG(&property_outputBusCount_default_value, 0);
	zend_string *property_outputBusCount_name = zend_string_init("outputBusCount", sizeof("outputBusCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_outputBusCount_name, &property_outputBusCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_outputBusCount_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_noise_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_noise_config", class_ma_noise_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_seed_default_value;
	ZVAL_LONG(&property_seed_default_value, 0);
	zend_string *property_seed_name = zend_string_init("seed", sizeof("seed") - 1, 1);
	zend_declare_typed_property(class_entry, property_seed_name, &property_seed_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_seed_name);

	zval property_amplitude_default_value;
	ZVAL_DOUBLE(&property_amplitude_default_value, 0.0);
	zend_string *property_amplitude_name = zend_string_init("amplitude", sizeof("amplitude") - 1, 1);
	zend_declare_typed_property(class_entry, property_amplitude_name, &property_amplitude_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_amplitude_name);

	zval property_duplicateChannels_default_value;
	ZVAL_FALSE(&property_duplicateChannels_default_value);
	zend_string *property_duplicateChannels_name = zend_string_init("duplicateChannels", sizeof("duplicateChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_duplicateChannels_name, &property_duplicateChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_duplicateChannels_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_notch2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_notch2_config", class_ma_notch2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_notch_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_notch_config", class_ma_notch_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_notch_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_notch_node_config", class_ma_notch_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_notch_default_value;
	ZVAL_UNDEF(&property_notch_default_value);
	zend_string *property_notch_name = zend_string_init("notch", sizeof("notch") - 1, 1);
	zend_string *property_notch_class_ma_notch_config = zend_string_init("ma_notch_config", sizeof("ma_notch_config")-1, 1);
	zend_declare_typed_property(class_entry, property_notch_name, &property_notch_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_notch_class_ma_notch_config, 0, 0));
	zend_string_release(property_notch_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_paged_audio_buffer_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_paged_audio_buffer_config", class_ma_paged_audio_buffer_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pData_default_value;
	ZVAL_NULL(&property_pData_default_value);
	zend_string *property_pData_name = zend_string_init("pData", sizeof("pData") - 1, 1);
	zend_string *property_pData_class_ma_paged_audio_buffer_data = zend_string_init("ma_paged_audio_buffer_data", sizeof("ma_paged_audio_buffer_data")-1, 1);
	zend_declare_typed_property(class_entry, property_pData_name, &property_pData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pData_class_ma_paged_audio_buffer_data, 0, MAY_BE_NULL));
	zend_string_release(property_pData_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_panner_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_panner_config", class_ma_panner_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_mode_default_value;
	ZVAL_LONG(&property_mode_default_value, 0);
	zend_string *property_mode_name = zend_string_init("mode", sizeof("mode") - 1, 1);
	zend_declare_typed_property(class_entry, property_mode_name, &property_mode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_mode_name);

	zval property_pan_default_value;
	ZVAL_DOUBLE(&property_pan_default_value, 0.0);
	zend_string *property_pan_name = zend_string_init("pan", sizeof("pan") - 1, 1);
	zend_declare_typed_property(class_entry, property_pan_name, &property_pan_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pan_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_peak2_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_peak2_config", class_ma_peak2_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_gainDB_default_value;
	ZVAL_DOUBLE(&property_gainDB_default_value, 0.0);
	zend_string *property_gainDB_name = zend_string_init("gainDB", sizeof("gainDB") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainDB_name, &property_gainDB_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_gainDB_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_peak_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_peak_config", class_ma_peak_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_gainDB_default_value;
	ZVAL_DOUBLE(&property_gainDB_default_value, 0.0);
	zend_string *property_gainDB_name = zend_string_init("gainDB", sizeof("gainDB") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainDB_name, &property_gainDB_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_gainDB_name);

	zval property_q_default_value;
	ZVAL_DOUBLE(&property_q_default_value, 0.0);
	zend_string *property_q_name = zend_string_init("q", sizeof("q") - 1, 1);
	zend_declare_typed_property(class_entry, property_q_name, &property_q_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_q_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_peak_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_peak_node_config", class_ma_peak_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_peak_default_value;
	ZVAL_UNDEF(&property_peak_default_value);
	zend_string *property_peak_name = zend_string_init("peak", sizeof("peak") - 1, 1);
	zend_string *property_peak_class_ma_peak_config = zend_string_init("ma_peak_config", sizeof("ma_peak_config")-1, 1);
	zend_declare_typed_property(class_entry, property_peak_name, &property_peak_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_peak_class_ma_peak_config, 0, 0));
	zend_string_release(property_peak_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_pulsewave_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_pulsewave_config", class_ma_pulsewave_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_dutyCycle_default_value;
	ZVAL_DOUBLE(&property_dutyCycle_default_value, 0.0);
	zend_string *property_dutyCycle_name = zend_string_init("dutyCycle", sizeof("dutyCycle") - 1, 1);
	zend_declare_typed_property(class_entry, property_dutyCycle_name, &property_dutyCycle_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_dutyCycle_name);

	zval property_amplitude_default_value;
	ZVAL_DOUBLE(&property_amplitude_default_value, 0.0);
	zend_string *property_amplitude_name = zend_string_init("amplitude", sizeof("amplitude") - 1, 1);
	zend_declare_typed_property(class_entry, property_amplitude_name, &property_amplitude_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_amplitude_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resampler_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resampler_config", class_ma_resampler_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRateIn_default_value;
	ZVAL_LONG(&property_sampleRateIn_default_value, 0);
	zend_string *property_sampleRateIn_name = zend_string_init("sampleRateIn", sizeof("sampleRateIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRateIn_name, &property_sampleRateIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRateIn_name);

	zval property_sampleRateOut_default_value;
	ZVAL_LONG(&property_sampleRateOut_default_value, 0);
	zend_string *property_sampleRateOut_name = zend_string_init("sampleRateOut", sizeof("sampleRateOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRateOut_name, &property_sampleRateOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRateOut_name);

	zval property_algorithm_default_value;
	ZVAL_LONG(&property_algorithm_default_value, 0);
	zend_string *property_algorithm_name = zend_string_init("algorithm", sizeof("algorithm") - 1, 1);
	zend_declare_typed_property(class_entry, property_algorithm_name, &property_algorithm_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_algorithm_name);

	zval property_pBackendVTable_default_value;
	ZVAL_NULL(&property_pBackendVTable_default_value);
	zend_string *property_pBackendVTable_name = zend_string_init("pBackendVTable", sizeof("pBackendVTable") - 1, 1);
	zend_string *property_pBackendVTable_class_ma_resampling_backend_vtable = zend_string_init("ma_resampling_backend_vtable", sizeof("ma_resampling_backend_vtable")-1, 1);
	zend_declare_typed_property(class_entry, property_pBackendVTable_name, &property_pBackendVTable_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pBackendVTable_class_ma_resampling_backend_vtable, 0, MAY_BE_NULL));
	zend_string_release(property_pBackendVTable_name);

	zval property_pBackendUserData_default_value;
	ZVAL_NULL(&property_pBackendUserData_default_value);
	zend_string *property_pBackendUserData_name = zend_string_init("pBackendUserData", sizeof("pBackendUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pBackendUserData_name, &property_pBackendUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pBackendUserData_name);

	zval property_linear_default_value;
	ZVAL_UNDEF(&property_linear_default_value);
	zend_string *property_linear_name = zend_string_init("linear", sizeof("linear") - 1, 1);
	zend_string *property_linear_class_ma_resampler_config_linear = zend_string_init("ma_resampler_config_linear", sizeof("ma_resampler_config_linear")-1, 1);
	zend_declare_typed_property(class_entry, property_linear_name, &property_linear_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_linear_class_ma_resampler_config_linear, 0, 0));
	zend_string_release(property_linear_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resampler_config_linear(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resampler_config_linear", class_ma_resampler_config_linear_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_lpfOrder_default_value;
	ZVAL_LONG(&property_lpfOrder_default_value, 0);
	zend_string *property_lpfOrder_name = zend_string_init("lpfOrder", sizeof("lpfOrder") - 1, 1);
	zend_declare_typed_property(class_entry, property_lpfOrder_name, &property_lpfOrder_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_lpfOrder_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resampling_backend_vtable(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resampling_backend_vtable", class_ma_resampling_backend_vtable_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_onGetHeapSize_default_value;
	ZVAL_NULL(&property_onGetHeapSize_default_value);
	zend_string *property_onGetHeapSize_name = zend_string_init("onGetHeapSize", sizeof("onGetHeapSize") - 1, 1);
	zend_string *property_onGetHeapSize_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetHeapSize_name, &property_onGetHeapSize_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetHeapSize_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetHeapSize_name);

	zval property_onInit_default_value;
	ZVAL_NULL(&property_onInit_default_value);
	zend_string *property_onInit_name = zend_string_init("onInit", sizeof("onInit") - 1, 1);
	zend_string *property_onInit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onInit_name, &property_onInit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onInit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onInit_name);

	zval property_onUninit_default_value;
	ZVAL_NULL(&property_onUninit_default_value);
	zend_string *property_onUninit_name = zend_string_init("onUninit", sizeof("onUninit") - 1, 1);
	zend_string *property_onUninit_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onUninit_name, &property_onUninit_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onUninit_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onUninit_name);

	zval property_onProcess_default_value;
	ZVAL_NULL(&property_onProcess_default_value);
	zend_string *property_onProcess_name = zend_string_init("onProcess", sizeof("onProcess") - 1, 1);
	zend_string *property_onProcess_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onProcess_name, &property_onProcess_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onProcess_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onProcess_name);

	zval property_onSetRate_default_value;
	ZVAL_NULL(&property_onSetRate_default_value);
	zend_string *property_onSetRate_name = zend_string_init("onSetRate", sizeof("onSetRate") - 1, 1);
	zend_string *property_onSetRate_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onSetRate_name, &property_onSetRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onSetRate_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onSetRate_name);

	zval property_onGetInputLatency_default_value;
	ZVAL_NULL(&property_onGetInputLatency_default_value);
	zend_string *property_onGetInputLatency_name = zend_string_init("onGetInputLatency", sizeof("onGetInputLatency") - 1, 1);
	zend_string *property_onGetInputLatency_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetInputLatency_name, &property_onGetInputLatency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetInputLatency_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetInputLatency_name);

	zval property_onGetOutputLatency_default_value;
	ZVAL_NULL(&property_onGetOutputLatency_default_value);
	zend_string *property_onGetOutputLatency_name = zend_string_init("onGetOutputLatency", sizeof("onGetOutputLatency") - 1, 1);
	zend_string *property_onGetOutputLatency_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetOutputLatency_name, &property_onGetOutputLatency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetOutputLatency_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetOutputLatency_name);

	zval property_onGetRequiredInputFrameCount_default_value;
	ZVAL_NULL(&property_onGetRequiredInputFrameCount_default_value);
	zend_string *property_onGetRequiredInputFrameCount_name = zend_string_init("onGetRequiredInputFrameCount", sizeof("onGetRequiredInputFrameCount") - 1, 1);
	zend_string *property_onGetRequiredInputFrameCount_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetRequiredInputFrameCount_name, &property_onGetRequiredInputFrameCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetRequiredInputFrameCount_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetRequiredInputFrameCount_name);

	zval property_onGetExpectedOutputFrameCount_default_value;
	ZVAL_NULL(&property_onGetExpectedOutputFrameCount_default_value);
	zend_string *property_onGetExpectedOutputFrameCount_name = zend_string_init("onGetExpectedOutputFrameCount", sizeof("onGetExpectedOutputFrameCount") - 1, 1);
	zend_string *property_onGetExpectedOutputFrameCount_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onGetExpectedOutputFrameCount_name, &property_onGetExpectedOutputFrameCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onGetExpectedOutputFrameCount_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onGetExpectedOutputFrameCount_name);

	zval property_onReset_default_value;
	ZVAL_NULL(&property_onReset_default_value);
	zend_string *property_onReset_name = zend_string_init("onReset", sizeof("onReset") - 1, 1);
	zend_string *property_onReset_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onReset_name, &property_onReset_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onReset_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onReset_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_config", class_ma_resource_manager_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_allocationCallbacks_default_value;
	ZVAL_UNDEF(&property_allocationCallbacks_default_value);
	zend_string *property_allocationCallbacks_name = zend_string_init("allocationCallbacks", sizeof("allocationCallbacks") - 1, 1);
	zend_string *property_allocationCallbacks_class_ma_allocation_callbacks = zend_string_init("ma_allocation_callbacks", sizeof("ma_allocation_callbacks")-1, 1);
	zend_declare_typed_property(class_entry, property_allocationCallbacks_name, &property_allocationCallbacks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_allocationCallbacks_class_ma_allocation_callbacks, 0, 0));
	zend_string_release(property_allocationCallbacks_name);

	zval property_pLog_default_value;
	ZVAL_NULL(&property_pLog_default_value);
	zend_string *property_pLog_name = zend_string_init("pLog", sizeof("pLog") - 1, 1);
	zend_string *property_pLog_class_ma_log = zend_string_init("ma_log", sizeof("ma_log")-1, 1);
	zend_declare_typed_property(class_entry, property_pLog_name, &property_pLog_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pLog_class_ma_log, 0, MAY_BE_NULL));
	zend_string_release(property_pLog_name);

	zval property_decodedFormat_default_value;
	ZVAL_LONG(&property_decodedFormat_default_value, 0);
	zend_string *property_decodedFormat_name = zend_string_init("decodedFormat", sizeof("decodedFormat") - 1, 1);
	zend_declare_typed_property(class_entry, property_decodedFormat_name, &property_decodedFormat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_decodedFormat_name);

	zval property_decodedChannels_default_value;
	ZVAL_LONG(&property_decodedChannels_default_value, 0);
	zend_string *property_decodedChannels_name = zend_string_init("decodedChannels", sizeof("decodedChannels") - 1, 1);
	zend_declare_typed_property(class_entry, property_decodedChannels_name, &property_decodedChannels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_decodedChannels_name);

	zval property_decodedSampleRate_default_value;
	ZVAL_LONG(&property_decodedSampleRate_default_value, 0);
	zend_string *property_decodedSampleRate_name = zend_string_init("decodedSampleRate", sizeof("decodedSampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_decodedSampleRate_name, &property_decodedSampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_decodedSampleRate_name);

	zval property_jobThreadCount_default_value;
	ZVAL_LONG(&property_jobThreadCount_default_value, 0);
	zend_string *property_jobThreadCount_name = zend_string_init("jobThreadCount", sizeof("jobThreadCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_jobThreadCount_name, &property_jobThreadCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_jobThreadCount_name);

	zval property_jobThreadStackSize_default_value;
	ZVAL_LONG(&property_jobThreadStackSize_default_value, 0);
	zend_string *property_jobThreadStackSize_name = zend_string_init("jobThreadStackSize", sizeof("jobThreadStackSize") - 1, 1);
	zend_declare_typed_property(class_entry, property_jobThreadStackSize_name, &property_jobThreadStackSize_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_jobThreadStackSize_name);

	zval property_jobQueueCapacity_default_value;
	ZVAL_LONG(&property_jobQueueCapacity_default_value, 0);
	zend_string *property_jobQueueCapacity_name = zend_string_init("jobQueueCapacity", sizeof("jobQueueCapacity") - 1, 1);
	zend_declare_typed_property(class_entry, property_jobQueueCapacity_name, &property_jobQueueCapacity_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_jobQueueCapacity_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_pVFS_default_value;
	ZVAL_NULL(&property_pVFS_default_value);
	zend_string *property_pVFS_name = zend_string_init("pVFS", sizeof("pVFS") - 1, 1);
	zend_string *property_pVFS_class_ma_vfs = zend_string_init("ma_vfs", sizeof("ma_vfs")-1, 1);
	zend_declare_typed_property(class_entry, property_pVFS_name, &property_pVFS_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pVFS_class_ma_vfs, 0, MAY_BE_NULL));
	zend_string_release(property_pVFS_name);

	zval property_ppCustomDecodingBackendVTables_default_value;
	ZVAL_NULL(&property_ppCustomDecodingBackendVTables_default_value);
	zend_string *property_ppCustomDecodingBackendVTables_name = zend_string_init("ppCustomDecodingBackendVTables", sizeof("ppCustomDecodingBackendVTables") - 1, 1);
	zend_declare_typed_property(class_entry, property_ppCustomDecodingBackendVTables_name, &property_ppCustomDecodingBackendVTables_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_ppCustomDecodingBackendVTables_name);

	zval property_customDecodingBackendCount_default_value;
	ZVAL_LONG(&property_customDecodingBackendCount_default_value, 0);
	zend_string *property_customDecodingBackendCount_name = zend_string_init("customDecodingBackendCount", sizeof("customDecodingBackendCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_customDecodingBackendCount_name, &property_customDecodingBackendCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_customDecodingBackendCount_name);

	zval property_pCustomDecodingBackendUserData_default_value;
	ZVAL_NULL(&property_pCustomDecodingBackendUserData_default_value);
	zend_string *property_pCustomDecodingBackendUserData_name = zend_string_init("pCustomDecodingBackendUserData", sizeof("pCustomDecodingBackendUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pCustomDecodingBackendUserData_name, &property_pCustomDecodingBackendUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pCustomDecodingBackendUserData_name);

	zval property_resampling_default_value;
	ZVAL_UNDEF(&property_resampling_default_value);
	zend_string *property_resampling_name = zend_string_init("resampling", sizeof("resampling") - 1, 1);
	zend_string *property_resampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_resampling_name, &property_resampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_resampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_resampling_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_data_source_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_data_source_config", class_ma_resource_manager_data_source_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pFilePath_default_value;
	ZVAL_NULL(&property_pFilePath_default_value);
	zend_string *property_pFilePath_name = zend_string_init("pFilePath", sizeof("pFilePath") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePath_name, &property_pFilePath_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pFilePath_name);

	zval property_pFilePathW_default_value;
	ZVAL_NULL(&property_pFilePathW_default_value);
	zend_string *property_pFilePathW_name = zend_string_init("pFilePathW", sizeof("pFilePathW") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePathW_name, &property_pFilePathW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pFilePathW_name);

	zval property_pNotifications_default_value;
	ZVAL_NULL(&property_pNotifications_default_value);
	zend_string *property_pNotifications_name = zend_string_init("pNotifications", sizeof("pNotifications") - 1, 1);
	zend_string *property_pNotifications_class_ma_resource_manager_pipeline_notifications = zend_string_init("ma_resource_manager_pipeline_notifications", sizeof("ma_resource_manager_pipeline_notifications")-1, 1);
	zend_declare_typed_property(class_entry, property_pNotifications_name, &property_pNotifications_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pNotifications_class_ma_resource_manager_pipeline_notifications, 0, MAY_BE_NULL));
	zend_string_release(property_pNotifications_name);

	zval property_initialSeekPointInPCMFrames_default_value;
	ZVAL_LONG(&property_initialSeekPointInPCMFrames_default_value, 0);
	zend_string *property_initialSeekPointInPCMFrames_name = zend_string_init("initialSeekPointInPCMFrames", sizeof("initialSeekPointInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialSeekPointInPCMFrames_name, &property_initialSeekPointInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialSeekPointInPCMFrames_name);

	zval property_rangeBegInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeBegInPCMFrames_default_value, 0);
	zend_string *property_rangeBegInPCMFrames_name = zend_string_init("rangeBegInPCMFrames", sizeof("rangeBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeBegInPCMFrames_name, &property_rangeBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeBegInPCMFrames_name);

	zval property_rangeEndInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeEndInPCMFrames_default_value, 0);
	zend_string *property_rangeEndInPCMFrames_name = zend_string_init("rangeEndInPCMFrames", sizeof("rangeEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeEndInPCMFrames_name, &property_rangeEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeEndInPCMFrames_name);

	zval property_loopPointBegInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointBegInPCMFrames_default_value, 0);
	zend_string *property_loopPointBegInPCMFrames_name = zend_string_init("loopPointBegInPCMFrames", sizeof("loopPointBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointBegInPCMFrames_name, &property_loopPointBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointBegInPCMFrames_name);

	zval property_loopPointEndInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointEndInPCMFrames_default_value, 0);
	zend_string *property_loopPointEndInPCMFrames_name = zend_string_init("loopPointEndInPCMFrames", sizeof("loopPointEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointEndInPCMFrames_name, &property_loopPointEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointEndInPCMFrames_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_isLooping_default_value;
	ZVAL_FALSE(&property_isLooping_default_value);
	zend_string *property_isLooping_name = zend_string_init("isLooping", sizeof("isLooping") - 1, 1);
	zend_declare_typed_property(class_entry, property_isLooping_name, &property_isLooping_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_isLooping_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_pipeline_notifications(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_pipeline_notifications", class_ma_resource_manager_pipeline_notifications_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_init_default_value;
	ZVAL_UNDEF(&property_init_default_value);
	zend_string *property_init_name = zend_string_init("init", sizeof("init") - 1, 1);
	zend_string *property_init_class_ma_resource_manager_pipeline_stage_notification = zend_string_init("ma_resource_manager_pipeline_stage_notification", sizeof("ma_resource_manager_pipeline_stage_notification")-1, 1);
	zend_declare_typed_property(class_entry, property_init_name, &property_init_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_init_class_ma_resource_manager_pipeline_stage_notification, 0, 0));
	zend_string_release(property_init_name);

	zval property_done_default_value;
	ZVAL_UNDEF(&property_done_default_value);
	zend_string *property_done_name = zend_string_init("done", sizeof("done") - 1, 1);
	zend_string *property_done_class_ma_resource_manager_pipeline_stage_notification = zend_string_init("ma_resource_manager_pipeline_stage_notification", sizeof("ma_resource_manager_pipeline_stage_notification")-1, 1);
	zend_declare_typed_property(class_entry, property_done_name, &property_done_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_done_class_ma_resource_manager_pipeline_stage_notification, 0, 0));
	zend_string_release(property_done_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_pipeline_stage_notification(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_pipeline_stage_notification", class_ma_resource_manager_pipeline_stage_notification_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pNotification_default_value;
	ZVAL_NULL(&property_pNotification_default_value);
	zend_string *property_pNotification_name = zend_string_init("pNotification", sizeof("pNotification") - 1, 1);
	zend_string *property_pNotification_class_ma_async_notification = zend_string_init("ma_async_notification", sizeof("ma_async_notification")-1, 1);
	zend_declare_typed_property(class_entry, property_pNotification_name, &property_pNotification_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pNotification_class_ma_async_notification, 0, MAY_BE_NULL));
	zend_string_release(property_pNotification_name);

	zval property_pFence_default_value;
	ZVAL_NULL(&property_pFence_default_value);
	zend_string *property_pFence_name = zend_string_init("pFence", sizeof("pFence") - 1, 1);
	zend_string *property_pFence_class_ma_fence = zend_string_init("ma_fence", sizeof("ma_fence")-1, 1);
	zend_declare_typed_property(class_entry, property_pFence_name, &property_pFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pFence_class_ma_fence, 0, MAY_BE_NULL));
	zend_string_release(property_pFence_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_slot_allocator_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_slot_allocator_config", class_ma_slot_allocator_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_capacity_default_value;
	ZVAL_LONG(&property_capacity_default_value, 0);
	zend_string *property_capacity_name = zend_string_init("capacity", sizeof("capacity") - 1, 1);
	zend_declare_typed_property(class_entry, property_capacity_name, &property_capacity_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_capacity_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_sound_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_sound_config", class_ma_sound_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pFilePath_default_value;
	ZVAL_NULL(&property_pFilePath_default_value);
	zend_string *property_pFilePath_name = zend_string_init("pFilePath", sizeof("pFilePath") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePath_name, &property_pFilePath_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pFilePath_name);

	zval property_pFilePathW_default_value;
	ZVAL_NULL(&property_pFilePathW_default_value);
	zend_string *property_pFilePathW_name = zend_string_init("pFilePathW", sizeof("pFilePathW") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePathW_name, &property_pFilePathW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pFilePathW_name);

	zval property_pDataSource_default_value;
	ZVAL_NULL(&property_pDataSource_default_value);
	zend_string *property_pDataSource_name = zend_string_init("pDataSource", sizeof("pDataSource") - 1, 1);
	zend_string *property_pDataSource_class_ma_data_source = zend_string_init("ma_data_source", sizeof("ma_data_source")-1, 1);
	zend_declare_typed_property(class_entry, property_pDataSource_name, &property_pDataSource_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDataSource_class_ma_data_source, 0, MAY_BE_NULL));
	zend_string_release(property_pDataSource_name);

	zval property_pInitialAttachment_default_value;
	ZVAL_NULL(&property_pInitialAttachment_default_value);
	zend_string *property_pInitialAttachment_name = zend_string_init("pInitialAttachment", sizeof("pInitialAttachment") - 1, 1);
	zend_string *property_pInitialAttachment_class_ma_node = zend_string_init("ma_node", sizeof("ma_node")-1, 1);
	zend_declare_typed_property(class_entry, property_pInitialAttachment_name, &property_pInitialAttachment_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pInitialAttachment_class_ma_node, 0, MAY_BE_NULL));
	zend_string_release(property_pInitialAttachment_name);

	zval property_initialAttachmentInputBusIndex_default_value;
	ZVAL_LONG(&property_initialAttachmentInputBusIndex_default_value, 0);
	zend_string *property_initialAttachmentInputBusIndex_name = zend_string_init("initialAttachmentInputBusIndex", sizeof("initialAttachmentInputBusIndex") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialAttachmentInputBusIndex_name, &property_initialAttachmentInputBusIndex_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialAttachmentInputBusIndex_name);

	zval property_channelsIn_default_value;
	ZVAL_LONG(&property_channelsIn_default_value, 0);
	zend_string *property_channelsIn_name = zend_string_init("channelsIn", sizeof("channelsIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsIn_name, &property_channelsIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsIn_name);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_monoExpansionMode_default_value;
	ZVAL_LONG(&property_monoExpansionMode_default_value, 0);
	zend_string *property_monoExpansionMode_name = zend_string_init("monoExpansionMode", sizeof("monoExpansionMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_monoExpansionMode_name, &property_monoExpansionMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_monoExpansionMode_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_volumeSmoothTimeInPCMFrames_default_value;
	ZVAL_LONG(&property_volumeSmoothTimeInPCMFrames_default_value, 0);
	zend_string *property_volumeSmoothTimeInPCMFrames_name = zend_string_init("volumeSmoothTimeInPCMFrames", sizeof("volumeSmoothTimeInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_volumeSmoothTimeInPCMFrames_name, &property_volumeSmoothTimeInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_volumeSmoothTimeInPCMFrames_name);

	zval property_initialSeekPointInPCMFrames_default_value;
	ZVAL_LONG(&property_initialSeekPointInPCMFrames_default_value, 0);
	zend_string *property_initialSeekPointInPCMFrames_name = zend_string_init("initialSeekPointInPCMFrames", sizeof("initialSeekPointInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialSeekPointInPCMFrames_name, &property_initialSeekPointInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialSeekPointInPCMFrames_name);

	zval property_rangeBegInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeBegInPCMFrames_default_value, 0);
	zend_string *property_rangeBegInPCMFrames_name = zend_string_init("rangeBegInPCMFrames", sizeof("rangeBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeBegInPCMFrames_name, &property_rangeBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeBegInPCMFrames_name);

	zval property_rangeEndInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeEndInPCMFrames_default_value, 0);
	zend_string *property_rangeEndInPCMFrames_name = zend_string_init("rangeEndInPCMFrames", sizeof("rangeEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeEndInPCMFrames_name, &property_rangeEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeEndInPCMFrames_name);

	zval property_loopPointBegInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointBegInPCMFrames_default_value, 0);
	zend_string *property_loopPointBegInPCMFrames_name = zend_string_init("loopPointBegInPCMFrames", sizeof("loopPointBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointBegInPCMFrames_name, &property_loopPointBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointBegInPCMFrames_name);

	zval property_loopPointEndInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointEndInPCMFrames_default_value, 0);
	zend_string *property_loopPointEndInPCMFrames_name = zend_string_init("loopPointEndInPCMFrames", sizeof("loopPointEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointEndInPCMFrames_name, &property_loopPointEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointEndInPCMFrames_name);

	zval property_endCallback_default_value;
	ZVAL_NULL(&property_endCallback_default_value);
	zend_string *property_endCallback_name = zend_string_init("endCallback", sizeof("endCallback") - 1, 1);
	zend_string *property_endCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_endCallback_name, &property_endCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_endCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_endCallback_name);

	zval property_pEndCallbackUserData_default_value;
	ZVAL_NULL(&property_pEndCallbackUserData_default_value);
	zend_string *property_pEndCallbackUserData_name = zend_string_init("pEndCallbackUserData", sizeof("pEndCallbackUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pEndCallbackUserData_name, &property_pEndCallbackUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pEndCallbackUserData_name);

	zval property_pitchResampling_default_value;
	ZVAL_UNDEF(&property_pitchResampling_default_value);
	zend_string *property_pitchResampling_name = zend_string_init("pitchResampling", sizeof("pitchResampling") - 1, 1);
	zend_string *property_pitchResampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_pitchResampling_name, &property_pitchResampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pitchResampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_pitchResampling_name);

	zval property_initNotifications_default_value;
	ZVAL_UNDEF(&property_initNotifications_default_value);
	zend_string *property_initNotifications_name = zend_string_init("initNotifications", sizeof("initNotifications") - 1, 1);
	zend_string *property_initNotifications_class_ma_resource_manager_pipeline_notifications = zend_string_init("ma_resource_manager_pipeline_notifications", sizeof("ma_resource_manager_pipeline_notifications")-1, 1);
	zend_declare_typed_property(class_entry, property_initNotifications_name, &property_initNotifications_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_initNotifications_class_ma_resource_manager_pipeline_notifications, 0, 0));
	zend_string_release(property_initNotifications_name);

	zval property_pDoneFence_default_value;
	ZVAL_NULL(&property_pDoneFence_default_value);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_string *property_pDoneFence_class_ma_fence = zend_string_init("ma_fence", sizeof("ma_fence")-1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDoneFence_class_ma_fence, 0, MAY_BE_NULL));
	zend_string_release(property_pDoneFence_name);

	zval property_isLooping_default_value;
	ZVAL_FALSE(&property_isLooping_default_value);
	zend_string *property_isLooping_name = zend_string_init("isLooping", sizeof("isLooping") - 1, 1);
	zend_declare_typed_property(class_entry, property_isLooping_name, &property_isLooping_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_isLooping_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_sound_group_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_sound_group_config", class_ma_sound_group_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pFilePath_default_value;
	ZVAL_NULL(&property_pFilePath_default_value);
	zend_string *property_pFilePath_name = zend_string_init("pFilePath", sizeof("pFilePath") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePath_name, &property_pFilePath_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pFilePath_name);

	zval property_pFilePathW_default_value;
	ZVAL_NULL(&property_pFilePathW_default_value);
	zend_string *property_pFilePathW_name = zend_string_init("pFilePathW", sizeof("pFilePathW") - 1, 1);
	zend_declare_typed_property(class_entry, property_pFilePathW_name, &property_pFilePathW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pFilePathW_name);

	zval property_pDataSource_default_value;
	ZVAL_NULL(&property_pDataSource_default_value);
	zend_string *property_pDataSource_name = zend_string_init("pDataSource", sizeof("pDataSource") - 1, 1);
	zend_string *property_pDataSource_class_ma_data_source = zend_string_init("ma_data_source", sizeof("ma_data_source")-1, 1);
	zend_declare_typed_property(class_entry, property_pDataSource_name, &property_pDataSource_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDataSource_class_ma_data_source, 0, MAY_BE_NULL));
	zend_string_release(property_pDataSource_name);

	zval property_pInitialAttachment_default_value;
	ZVAL_NULL(&property_pInitialAttachment_default_value);
	zend_string *property_pInitialAttachment_name = zend_string_init("pInitialAttachment", sizeof("pInitialAttachment") - 1, 1);
	zend_string *property_pInitialAttachment_class_ma_node = zend_string_init("ma_node", sizeof("ma_node")-1, 1);
	zend_declare_typed_property(class_entry, property_pInitialAttachment_name, &property_pInitialAttachment_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pInitialAttachment_class_ma_node, 0, MAY_BE_NULL));
	zend_string_release(property_pInitialAttachment_name);

	zval property_initialAttachmentInputBusIndex_default_value;
	ZVAL_LONG(&property_initialAttachmentInputBusIndex_default_value, 0);
	zend_string *property_initialAttachmentInputBusIndex_name = zend_string_init("initialAttachmentInputBusIndex", sizeof("initialAttachmentInputBusIndex") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialAttachmentInputBusIndex_name, &property_initialAttachmentInputBusIndex_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialAttachmentInputBusIndex_name);

	zval property_channelsIn_default_value;
	ZVAL_LONG(&property_channelsIn_default_value, 0);
	zend_string *property_channelsIn_name = zend_string_init("channelsIn", sizeof("channelsIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsIn_name, &property_channelsIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsIn_name);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_monoExpansionMode_default_value;
	ZVAL_LONG(&property_monoExpansionMode_default_value, 0);
	zend_string *property_monoExpansionMode_name = zend_string_init("monoExpansionMode", sizeof("monoExpansionMode") - 1, 1);
	zend_declare_typed_property(class_entry, property_monoExpansionMode_name, &property_monoExpansionMode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_monoExpansionMode_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_volumeSmoothTimeInPCMFrames_default_value;
	ZVAL_LONG(&property_volumeSmoothTimeInPCMFrames_default_value, 0);
	zend_string *property_volumeSmoothTimeInPCMFrames_name = zend_string_init("volumeSmoothTimeInPCMFrames", sizeof("volumeSmoothTimeInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_volumeSmoothTimeInPCMFrames_name, &property_volumeSmoothTimeInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_volumeSmoothTimeInPCMFrames_name);

	zval property_initialSeekPointInPCMFrames_default_value;
	ZVAL_LONG(&property_initialSeekPointInPCMFrames_default_value, 0);
	zend_string *property_initialSeekPointInPCMFrames_name = zend_string_init("initialSeekPointInPCMFrames", sizeof("initialSeekPointInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_initialSeekPointInPCMFrames_name, &property_initialSeekPointInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_initialSeekPointInPCMFrames_name);

	zval property_rangeBegInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeBegInPCMFrames_default_value, 0);
	zend_string *property_rangeBegInPCMFrames_name = zend_string_init("rangeBegInPCMFrames", sizeof("rangeBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeBegInPCMFrames_name, &property_rangeBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeBegInPCMFrames_name);

	zval property_rangeEndInPCMFrames_default_value;
	ZVAL_LONG(&property_rangeEndInPCMFrames_default_value, 0);
	zend_string *property_rangeEndInPCMFrames_name = zend_string_init("rangeEndInPCMFrames", sizeof("rangeEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_rangeEndInPCMFrames_name, &property_rangeEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_rangeEndInPCMFrames_name);

	zval property_loopPointBegInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointBegInPCMFrames_default_value, 0);
	zend_string *property_loopPointBegInPCMFrames_name = zend_string_init("loopPointBegInPCMFrames", sizeof("loopPointBegInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointBegInPCMFrames_name, &property_loopPointBegInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointBegInPCMFrames_name);

	zval property_loopPointEndInPCMFrames_default_value;
	ZVAL_LONG(&property_loopPointEndInPCMFrames_default_value, 0);
	zend_string *property_loopPointEndInPCMFrames_name = zend_string_init("loopPointEndInPCMFrames", sizeof("loopPointEndInPCMFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_loopPointEndInPCMFrames_name, &property_loopPointEndInPCMFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_loopPointEndInPCMFrames_name);

	zval property_endCallback_default_value;
	ZVAL_NULL(&property_endCallback_default_value);
	zend_string *property_endCallback_name = zend_string_init("endCallback", sizeof("endCallback") - 1, 1);
	zend_string *property_endCallback_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_endCallback_name, &property_endCallback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_endCallback_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_endCallback_name);

	zval property_pEndCallbackUserData_default_value;
	ZVAL_NULL(&property_pEndCallbackUserData_default_value);
	zend_string *property_pEndCallbackUserData_name = zend_string_init("pEndCallbackUserData", sizeof("pEndCallbackUserData") - 1, 1);
	zend_declare_typed_property(class_entry, property_pEndCallbackUserData_name, &property_pEndCallbackUserData_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_pEndCallbackUserData_name);

	zval property_pitchResampling_default_value;
	ZVAL_UNDEF(&property_pitchResampling_default_value);
	zend_string *property_pitchResampling_name = zend_string_init("pitchResampling", sizeof("pitchResampling") - 1, 1);
	zend_string *property_pitchResampling_class_ma_resampler_config = zend_string_init("ma_resampler_config", sizeof("ma_resampler_config")-1, 1);
	zend_declare_typed_property(class_entry, property_pitchResampling_name, &property_pitchResampling_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pitchResampling_class_ma_resampler_config, 0, 0));
	zend_string_release(property_pitchResampling_name);

	zval property_initNotifications_default_value;
	ZVAL_UNDEF(&property_initNotifications_default_value);
	zend_string *property_initNotifications_name = zend_string_init("initNotifications", sizeof("initNotifications") - 1, 1);
	zend_string *property_initNotifications_class_ma_resource_manager_pipeline_notifications = zend_string_init("ma_resource_manager_pipeline_notifications", sizeof("ma_resource_manager_pipeline_notifications")-1, 1);
	zend_declare_typed_property(class_entry, property_initNotifications_name, &property_initNotifications_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_initNotifications_class_ma_resource_manager_pipeline_notifications, 0, 0));
	zend_string_release(property_initNotifications_name);

	zval property_pDoneFence_default_value;
	ZVAL_NULL(&property_pDoneFence_default_value);
	zend_string *property_pDoneFence_name = zend_string_init("pDoneFence", sizeof("pDoneFence") - 1, 1);
	zend_string *property_pDoneFence_class_ma_fence = zend_string_init("ma_fence", sizeof("ma_fence")-1, 1);
	zend_declare_typed_property(class_entry, property_pDoneFence_name, &property_pDoneFence_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_pDoneFence_class_ma_fence, 0, MAY_BE_NULL));
	zend_string_release(property_pDoneFence_name);

	zval property_isLooping_default_value;
	ZVAL_FALSE(&property_isLooping_default_value);
	zend_string *property_isLooping_name = zend_string_init("isLooping", sizeof("isLooping") - 1, 1);
	zend_declare_typed_property(class_entry, property_isLooping_name, &property_isLooping_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_isLooping_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_spatializer_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_spatializer_config", class_ma_spatializer_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_channelsIn_default_value;
	ZVAL_LONG(&property_channelsIn_default_value, 0);
	zend_string *property_channelsIn_name = zend_string_init("channelsIn", sizeof("channelsIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsIn_name, &property_channelsIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsIn_name);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_pChannelMapIn_default_value;
	ZVAL_NULL(&property_pChannelMapIn_default_value);
	zend_string *property_pChannelMapIn_name = zend_string_init("pChannelMapIn", sizeof("pChannelMapIn") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMapIn_name, &property_pChannelMapIn_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMapIn_name);

	zval property_attenuationModel_default_value;
	ZVAL_LONG(&property_attenuationModel_default_value, 0);
	zend_string *property_attenuationModel_name = zend_string_init("attenuationModel", sizeof("attenuationModel") - 1, 1);
	zend_declare_typed_property(class_entry, property_attenuationModel_name, &property_attenuationModel_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_attenuationModel_name);

	zval property_positioning_default_value;
	ZVAL_LONG(&property_positioning_default_value, 0);
	zend_string *property_positioning_name = zend_string_init("positioning", sizeof("positioning") - 1, 1);
	zend_declare_typed_property(class_entry, property_positioning_name, &property_positioning_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_positioning_name);

	zval property_handedness_default_value;
	ZVAL_LONG(&property_handedness_default_value, 0);
	zend_string *property_handedness_name = zend_string_init("handedness", sizeof("handedness") - 1, 1);
	zend_declare_typed_property(class_entry, property_handedness_name, &property_handedness_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_handedness_name);

	zval property_minGain_default_value;
	ZVAL_DOUBLE(&property_minGain_default_value, 0.0);
	zend_string *property_minGain_name = zend_string_init("minGain", sizeof("minGain") - 1, 1);
	zend_declare_typed_property(class_entry, property_minGain_name, &property_minGain_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_minGain_name);

	zval property_maxGain_default_value;
	ZVAL_DOUBLE(&property_maxGain_default_value, 0.0);
	zend_string *property_maxGain_name = zend_string_init("maxGain", sizeof("maxGain") - 1, 1);
	zend_declare_typed_property(class_entry, property_maxGain_name, &property_maxGain_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_maxGain_name);

	zval property_minDistance_default_value;
	ZVAL_DOUBLE(&property_minDistance_default_value, 0.0);
	zend_string *property_minDistance_name = zend_string_init("minDistance", sizeof("minDistance") - 1, 1);
	zend_declare_typed_property(class_entry, property_minDistance_name, &property_minDistance_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_minDistance_name);

	zval property_maxDistance_default_value;
	ZVAL_DOUBLE(&property_maxDistance_default_value, 0.0);
	zend_string *property_maxDistance_name = zend_string_init("maxDistance", sizeof("maxDistance") - 1, 1);
	zend_declare_typed_property(class_entry, property_maxDistance_name, &property_maxDistance_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_maxDistance_name);

	zval property_rolloff_default_value;
	ZVAL_DOUBLE(&property_rolloff_default_value, 0.0);
	zend_string *property_rolloff_name = zend_string_init("rolloff", sizeof("rolloff") - 1, 1);
	zend_declare_typed_property(class_entry, property_rolloff_name, &property_rolloff_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_rolloff_name);

	zval property_coneInnerAngleInRadians_default_value;
	ZVAL_DOUBLE(&property_coneInnerAngleInRadians_default_value, 0.0);
	zend_string *property_coneInnerAngleInRadians_name = zend_string_init("coneInnerAngleInRadians", sizeof("coneInnerAngleInRadians") - 1, 1);
	zend_declare_typed_property(class_entry, property_coneInnerAngleInRadians_name, &property_coneInnerAngleInRadians_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_coneInnerAngleInRadians_name);

	zval property_coneOuterAngleInRadians_default_value;
	ZVAL_DOUBLE(&property_coneOuterAngleInRadians_default_value, 0.0);
	zend_string *property_coneOuterAngleInRadians_name = zend_string_init("coneOuterAngleInRadians", sizeof("coneOuterAngleInRadians") - 1, 1);
	zend_declare_typed_property(class_entry, property_coneOuterAngleInRadians_name, &property_coneOuterAngleInRadians_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_coneOuterAngleInRadians_name);

	zval property_coneOuterGain_default_value;
	ZVAL_DOUBLE(&property_coneOuterGain_default_value, 0.0);
	zend_string *property_coneOuterGain_name = zend_string_init("coneOuterGain", sizeof("coneOuterGain") - 1, 1);
	zend_declare_typed_property(class_entry, property_coneOuterGain_name, &property_coneOuterGain_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_coneOuterGain_name);

	zval property_dopplerFactor_default_value;
	ZVAL_DOUBLE(&property_dopplerFactor_default_value, 0.0);
	zend_string *property_dopplerFactor_name = zend_string_init("dopplerFactor", sizeof("dopplerFactor") - 1, 1);
	zend_declare_typed_property(class_entry, property_dopplerFactor_name, &property_dopplerFactor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_dopplerFactor_name);

	zval property_directionalAttenuationFactor_default_value;
	ZVAL_DOUBLE(&property_directionalAttenuationFactor_default_value, 0.0);
	zend_string *property_directionalAttenuationFactor_name = zend_string_init("directionalAttenuationFactor", sizeof("directionalAttenuationFactor") - 1, 1);
	zend_declare_typed_property(class_entry, property_directionalAttenuationFactor_name, &property_directionalAttenuationFactor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_directionalAttenuationFactor_name);

	zval property_minSpatializationChannelGain_default_value;
	ZVAL_DOUBLE(&property_minSpatializationChannelGain_default_value, 0.0);
	zend_string *property_minSpatializationChannelGain_name = zend_string_init("minSpatializationChannelGain", sizeof("minSpatializationChannelGain") - 1, 1);
	zend_declare_typed_property(class_entry, property_minSpatializationChannelGain_name, &property_minSpatializationChannelGain_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_minSpatializationChannelGain_name);

	zval property_gainSmoothTimeInFrames_default_value;
	ZVAL_LONG(&property_gainSmoothTimeInFrames_default_value, 0);
	zend_string *property_gainSmoothTimeInFrames_name = zend_string_init("gainSmoothTimeInFrames", sizeof("gainSmoothTimeInFrames") - 1, 1);
	zend_declare_typed_property(class_entry, property_gainSmoothTimeInFrames_name, &property_gainSmoothTimeInFrames_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_gainSmoothTimeInFrames_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_spatializer_listener_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_spatializer_listener_config", class_ma_spatializer_listener_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_channelsOut_default_value;
	ZVAL_LONG(&property_channelsOut_default_value, 0);
	zend_string *property_channelsOut_name = zend_string_init("channelsOut", sizeof("channelsOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_channelsOut_name, &property_channelsOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channelsOut_name);

	zval property_pChannelMapOut_default_value;
	ZVAL_NULL(&property_pChannelMapOut_default_value);
	zend_string *property_pChannelMapOut_name = zend_string_init("pChannelMapOut", sizeof("pChannelMapOut") - 1, 1);
	zend_declare_typed_property(class_entry, property_pChannelMapOut_name, &property_pChannelMapOut_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_pChannelMapOut_name);

	zval property_handedness_default_value;
	ZVAL_LONG(&property_handedness_default_value, 0);
	zend_string *property_handedness_name = zend_string_init("handedness", sizeof("handedness") - 1, 1);
	zend_declare_typed_property(class_entry, property_handedness_name, &property_handedness_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_handedness_name);

	zval property_coneInnerAngleInRadians_default_value;
	ZVAL_DOUBLE(&property_coneInnerAngleInRadians_default_value, 0.0);
	zend_string *property_coneInnerAngleInRadians_name = zend_string_init("coneInnerAngleInRadians", sizeof("coneInnerAngleInRadians") - 1, 1);
	zend_declare_typed_property(class_entry, property_coneInnerAngleInRadians_name, &property_coneInnerAngleInRadians_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_coneInnerAngleInRadians_name);

	zval property_coneOuterAngleInRadians_default_value;
	ZVAL_DOUBLE(&property_coneOuterAngleInRadians_default_value, 0.0);
	zend_string *property_coneOuterAngleInRadians_name = zend_string_init("coneOuterAngleInRadians", sizeof("coneOuterAngleInRadians") - 1, 1);
	zend_declare_typed_property(class_entry, property_coneOuterAngleInRadians_name, &property_coneOuterAngleInRadians_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_coneOuterAngleInRadians_name);

	zval property_coneOuterGain_default_value;
	ZVAL_DOUBLE(&property_coneOuterGain_default_value, 0.0);
	zend_string *property_coneOuterGain_name = zend_string_init("coneOuterGain", sizeof("coneOuterGain") - 1, 1);
	zend_declare_typed_property(class_entry, property_coneOuterGain_name, &property_coneOuterGain_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_coneOuterGain_name);

	zval property_speedOfSound_default_value;
	ZVAL_DOUBLE(&property_speedOfSound_default_value, 0.0);
	zend_string *property_speedOfSound_name = zend_string_init("speedOfSound", sizeof("speedOfSound") - 1, 1);
	zend_declare_typed_property(class_entry, property_speedOfSound_name, &property_speedOfSound_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_speedOfSound_name);

	zval property_worldUp_default_value;
	ZVAL_UNDEF(&property_worldUp_default_value);
	zend_string *property_worldUp_name = zend_string_init("worldUp", sizeof("worldUp") - 1, 1);
	zend_string *property_worldUp_class_ma_vec3f = zend_string_init("ma_vec3f", sizeof("ma_vec3f")-1, 1);
	zend_declare_typed_property(class_entry, property_worldUp_name, &property_worldUp_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_worldUp_class_ma_vec3f, 0, 0));
	zend_string_release(property_worldUp_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_splitter_node_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_splitter_node_config", class_ma_splitter_node_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_nodeConfig_default_value;
	ZVAL_UNDEF(&property_nodeConfig_default_value);
	zend_string *property_nodeConfig_name = zend_string_init("nodeConfig", sizeof("nodeConfig") - 1, 1);
	zend_string *property_nodeConfig_class_ma_node_config = zend_string_init("ma_node_config", sizeof("ma_node_config")-1, 1);
	zend_declare_typed_property(class_entry, property_nodeConfig_name, &property_nodeConfig_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_nodeConfig_class_ma_node_config, 0, 0));
	zend_string_release(property_nodeConfig_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_outputBusCount_default_value;
	ZVAL_LONG(&property_outputBusCount_default_value, 0);
	zend_string *property_outputBusCount_name = zend_string_init("outputBusCount", sizeof("outputBusCount") - 1, 1);
	zend_declare_typed_property(class_entry, property_outputBusCount_name, &property_outputBusCount_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_outputBusCount_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_vec3f(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_vec3f", class_ma_vec3f_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_x_default_value;
	ZVAL_DOUBLE(&property_x_default_value, 0.0);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, 1);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_x_name);

	zval property_y_default_value;
	ZVAL_DOUBLE(&property_y_default_value, 0.0);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, 1);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_y_name);

	zval property_z_default_value;
	ZVAL_DOUBLE(&property_z_default_value, 0.0);
	zend_string *property_z_name = zend_string_init("z", sizeof("z") - 1, 1);
	zend_declare_typed_property(class_entry, property_z_name, &property_z_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_z_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_vfs_callbacks(zend_class_entry *class_entry_ma_vfs)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_vfs_callbacks", class_ma_vfs_callbacks_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);
	zend_class_implements(class_entry, 1, class_entry_ma_vfs);

	zval property_onOpen_default_value;
	ZVAL_NULL(&property_onOpen_default_value);
	zend_string *property_onOpen_name = zend_string_init("onOpen", sizeof("onOpen") - 1, 1);
	zend_string *property_onOpen_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onOpen_name, &property_onOpen_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onOpen_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onOpen_name);

	zval property_onOpenW_default_value;
	ZVAL_NULL(&property_onOpenW_default_value);
	zend_string *property_onOpenW_name = zend_string_init("onOpenW", sizeof("onOpenW") - 1, 1);
	zend_string *property_onOpenW_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onOpenW_name, &property_onOpenW_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onOpenW_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onOpenW_name);

	zval property_onClose_default_value;
	ZVAL_NULL(&property_onClose_default_value);
	zend_string *property_onClose_name = zend_string_init("onClose", sizeof("onClose") - 1, 1);
	zend_string *property_onClose_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onClose_name, &property_onClose_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onClose_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onClose_name);

	zval property_onRead_default_value;
	ZVAL_NULL(&property_onRead_default_value);
	zend_string *property_onRead_name = zend_string_init("onRead", sizeof("onRead") - 1, 1);
	zend_string *property_onRead_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onRead_name, &property_onRead_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onRead_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onRead_name);

	zval property_onWrite_default_value;
	ZVAL_NULL(&property_onWrite_default_value);
	zend_string *property_onWrite_name = zend_string_init("onWrite", sizeof("onWrite") - 1, 1);
	zend_string *property_onWrite_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onWrite_name, &property_onWrite_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onWrite_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onWrite_name);

	zval property_onSeek_default_value;
	ZVAL_NULL(&property_onSeek_default_value);
	zend_string *property_onSeek_name = zend_string_init("onSeek", sizeof("onSeek") - 1, 1);
	zend_string *property_onSeek_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onSeek_name, &property_onSeek_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onSeek_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onSeek_name);

	zval property_onTell_default_value;
	ZVAL_NULL(&property_onTell_default_value);
	zend_string *property_onTell_name = zend_string_init("onTell", sizeof("onTell") - 1, 1);
	zend_string *property_onTell_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onTell_name, &property_onTell_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onTell_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onTell_name);

	zval property_onInfo_default_value;
	ZVAL_NULL(&property_onInfo_default_value);
	zend_string *property_onInfo_name = zend_string_init("onInfo", sizeof("onInfo") - 1, 1);
	zend_string *property_onInfo_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_onInfo_name, &property_onInfo_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_onInfo_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_onInfo_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_waveform_config(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_waveform_config", class_ma_waveform_config_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_channels_default_value;
	ZVAL_LONG(&property_channels_default_value, 0);
	zend_string *property_channels_name = zend_string_init("channels", sizeof("channels") - 1, 1);
	zend_declare_typed_property(class_entry, property_channels_name, &property_channels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channels_name);

	zval property_sampleRate_default_value;
	ZVAL_LONG(&property_sampleRate_default_value, 0);
	zend_string *property_sampleRate_name = zend_string_init("sampleRate", sizeof("sampleRate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sampleRate_name, &property_sampleRate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_sampleRate_name);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_amplitude_default_value;
	ZVAL_DOUBLE(&property_amplitude_default_value, 0.0);
	zend_string *property_amplitude_name = zend_string_init("amplitude", sizeof("amplitude") - 1, 1);
	zend_declare_typed_property(class_entry, property_amplitude_name, &property_amplitude_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_amplitude_name);

	zval property_frequency_default_value;
	ZVAL_DOUBLE(&property_frequency_default_value, 0.0);
	zend_string *property_frequency_name = zend_string_init("frequency", sizeof("frequency") - 1, 1);
	zend_declare_typed_property(class_entry, property_frequency_name, &property_frequency_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_frequency_name);

	return class_entry;
}

static zend_class_entry *register_class_ma_async_notification_event(zend_class_entry *class_entry_ma_async_notification)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_async_notification_event", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_async_notification);

	return class_entry;
}

static zend_class_entry *register_class_ma_async_notification_poll(zend_class_entry *class_entry_ma_async_notification)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_async_notification_poll", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_async_notification);

	return class_entry;
}

static zend_class_entry *register_class_ma_audio_buffer(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_audio_buffer", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_audio_buffer_ref(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_audio_buffer_ref", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_biquad(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_biquad", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_biquad_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_biquad_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_bpf(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_bpf", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_bpf2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_bpf2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_bpf_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_bpf_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_channel_converter(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_channel_converter", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_context(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_context", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_converter(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_converter", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_source_base(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_source_base", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_data_source_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_data_source_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_decoder(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_decoder", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_default_vfs(zend_class_entry *class_entry_ma_vfs)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_default_vfs", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_vfs);

	return class_entry;
}

static zend_class_entry *register_class_ma_delay(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_delay", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_delay_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_delay_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_device(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_device_job_thread(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_device_job_thread", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_duplex_rb(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_duplex_rb", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_encoder(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_encoder", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_engine(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_engine", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_engine_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_engine_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_event(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_event", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_fader(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_fader", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_fence(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_fence", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_gainer(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_gainer", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_hishelf2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hishelf2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_hishelf_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hishelf_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf1(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf1", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_hpf_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_hpf_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_job_queue(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_job_queue", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_linear_resampler(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_linear_resampler", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_log(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_log", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_loshelf2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_loshelf2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_loshelf_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_loshelf_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf1(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf1", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_lpf_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_lpf_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_mutex(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_mutex", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_node_base(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_node_base", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_node_graph(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_node_graph", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_noise(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_noise", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_notch2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_notch2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_notch_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_notch_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_paged_audio_buffer(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_paged_audio_buffer", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_paged_audio_buffer_data(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_paged_audio_buffer_data", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_paged_audio_buffer_page(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_paged_audio_buffer_page", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_panner(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_panner", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_pcm_rb(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_pcm_rb", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_peak2(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_peak2", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_peak_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_peak_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_pulsewave(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_pulsewave", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_rb(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_rb", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_resampler(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resampler", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_data_buffer(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_data_buffer", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_data_source(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_data_source", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_resource_manager_data_stream(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_resource_manager_data_stream", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}

static zend_class_entry *register_class_ma_semaphore(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_semaphore", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_slot_allocator(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_slot_allocator", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_sound(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_sound", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_sound_group(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_sound_group", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_spatializer(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_spatializer", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_spatializer_listener(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_spatializer_listener", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_spinlock(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_spinlock", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_splitter_node(zend_class_entry *class_entry_ma_node)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_splitter_node", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_node);

	return class_entry;
}

static zend_class_entry *register_class_ma_waveform(zend_class_entry *class_entry_ma_data_source)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_waveform", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);
	zend_class_implements(class_entry, 1, class_entry_ma_data_source);

	return class_entry;
}
