/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 96d886b74a52a9c3dd07f055e84cda15c20948c9 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_version, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pMajor, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pMinor, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pRevision, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_version_string, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_log_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pLog, ma_log, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_log_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pLog, ma_log, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_log_post, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLog, ma_log, 1)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pMessage, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_biquad_config_init, 0, 8, ma_biquad_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_biquad_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_biquad_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pBQ, ma_biquad, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_biquad_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pBQ, ma_biquad, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pBQ, ma_biquad, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_biquad_config, 1)
	ZEND_ARG_OBJ_INFO(0, pBQ, ma_biquad, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_clear_cache, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pBQ, ma_biquad, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pBQ, ma_biquad, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_biquad_get_latency arginfo_ma_biquad_clear_cache

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_lpf1_config_init, 0, 4, ma_lpf1_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_lpf2_config_init, 0, 5, ma_lpf2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf1_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf1_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf1, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf1_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf1, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf1, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf1_config, 1)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf1, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_clear_cache, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf1, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf1_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf1, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_lpf1_get_latency arginfo_ma_lpf1_clear_cache

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_lpf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_clear_cache, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_lpf2_get_latency arginfo_ma_lpf2_clear_cache

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_lpf_config_init, 0, 5, ma_lpf_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_clear_cache, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_lpf, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_lpf_get_latency arginfo_ma_lpf_clear_cache

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_hpf1_config_init, 0, 4, ma_hpf1_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_hpf2_config_init, 0, 5, ma_hpf2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf1_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf1_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_hpf1, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf1_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf1, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf1, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf1_config, 1)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf1, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf1, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf1_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf1, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf2_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_hpf_config_init, 0, 5, ma_hpf_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pLPF, ma_hpf, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pHPF, ma_hpf, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_bpf2_config_init, 0, 5, ma_bpf2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf2_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_bpf_config_init, 0, 5, ma_bpf_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pBPF, ma_bpf, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_notch2_config_init, 0, 5, ma_notch2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_notch2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_notch2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_notch2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_notch2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_notch2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_notch2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_notch2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_notch2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_notch2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch2_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_notch2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_peak2_config_init, 0, 6, ma_peak2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_peak2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_peak2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_peak2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_peak2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_peak2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_peak2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_peak2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_peak2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_peak2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak2_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_peak2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_loshelf2_config_init, 0, 6, ma_loshelf2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, shelfSlope, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_loshelf2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_loshelf2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_loshelf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_loshelf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_loshelf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_loshelf2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_loshelf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_loshelf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_loshelf2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf2_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_loshelf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_hishelf2_config_init, 0, 6, ma_hishelf2_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, shelfSlope, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hishelf2_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hishelf2_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_hishelf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hishelf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_hishelf2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_hishelf2, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hishelf2_config, 1)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_hishelf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_hishelf2, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf2_get_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFilter, ma_hishelf2, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_delay_config_init, 0, 4, ma_delay_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delayInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, decay, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_delay_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pDelay, ma_delay, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDelay, ma_delay, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDelay, ma_delay, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_set_wet, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDelay, ma_delay, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_get_wet, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pDelay, ma_delay, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_delay_set_dry arginfo_ma_delay_set_wet

#define arginfo_ma_delay_get_dry arginfo_ma_delay_get_wet

#define arginfo_ma_delay_set_decay arginfo_ma_delay_set_wet

#define arginfo_ma_delay_get_decay arginfo_ma_delay_get_wet

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_gainer_config_init, 0, 2, ma_gainer_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, smoothTimeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_gainer_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_gainer_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_gainer_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_set_gain, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 1)
	ZEND_ARG_TYPE_INFO(0, newGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_set_gains, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 1)
	ZEND_ARG_TYPE_INFO(1, pNewGains, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_set_master_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 1)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_gainer_get_master_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGainer, ma_gainer, 1)
	ZEND_ARG_TYPE_INFO(1, pVolume, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_panner_config_init, 0, 2, ma_panner_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_panner_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_panner_config, 1)
	ZEND_ARG_OBJ_INFO(0, pPanner, ma_panner, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_panner_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPanner, ma_panner, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_panner_set_mode, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pPanner, ma_panner, 1)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_panner_get_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPanner, ma_panner, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_panner_set_pan, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pPanner, ma_panner, 1)
	ZEND_ARG_TYPE_INFO(0, pan, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_panner_get_pan, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pPanner, ma_panner, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_fader_config_init, 0, 3, ma_fader_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fader_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_fader_config, 1)
	ZEND_ARG_OBJ_INFO(0, pFader, ma_fader, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fader_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFader, ma_fader, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fader_get_data_format, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFader, ma_fader, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fader_set_fade, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFader, ma_fader, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lengthInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fader_set_fade_ex, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFader, ma_fader, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lengthInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startOffsetInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fader_get_current_volume, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pFader, ma_fader, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_spatializer_listener_config_init, 0, 1, ma_spatializer_listener_config, 0)
	ZEND_ARG_TYPE_INFO(0, channelsOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_spatializer_listener_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_spatializer_listener_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_spatializer_listener_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_get_channel_map, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_set_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_TYPE_INFO(0, innerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_get_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_TYPE_INFO(1, pInnerAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterGain, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_set_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_spatializer_listener_get_position, 0, 1, ma_vec3f, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_listener_set_direction arginfo_ma_spatializer_listener_set_position

#define arginfo_ma_spatializer_listener_get_direction arginfo_ma_spatializer_listener_get_position

#define arginfo_ma_spatializer_listener_set_velocity arginfo_ma_spatializer_listener_set_position

#define arginfo_ma_spatializer_listener_get_velocity arginfo_ma_spatializer_listener_get_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_set_speed_of_sound, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_TYPE_INFO(0, speedOfSound, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_get_speed_of_sound, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_listener_set_world_up arginfo_ma_spatializer_listener_set_position

#define arginfo_ma_spatializer_listener_get_world_up arginfo_ma_spatializer_listener_get_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_set_enabled, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_TYPE_INFO(0, isEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_listener_is_enabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_spatializer_config_init, 0, 2, ma_spatializer_config, 0)
	ZEND_ARG_TYPE_INFO(0, channelsIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelsOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_spatializer_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_spatializer_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_spatializer_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_process_pcm_frames, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_master_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_get_master_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(1, pVolume, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_get_input_channels, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_output_channels arginfo_ma_spatializer_get_input_channels

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_attenuation_model, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, attenuationModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_attenuation_model arginfo_ma_spatializer_get_input_channels

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_positioning, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, positioning, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_positioning arginfo_ma_spatializer_get_input_channels

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_rolloff, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, rolloff, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_get_rolloff, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_min_gain, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, minGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_min_gain arginfo_ma_spatializer_get_rolloff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_max_gain, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, maxGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_max_gain arginfo_ma_spatializer_get_rolloff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_min_distance, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, minDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_min_distance arginfo_ma_spatializer_get_rolloff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_max_distance, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, maxDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_max_distance arginfo_ma_spatializer_get_rolloff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, innerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_get_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(1, pInnerAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterGain, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_doppler_factor, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, dopplerFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_doppler_factor arginfo_ma_spatializer_get_rolloff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_directional_attenuation_factor, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, directionalAttenuationFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_get_directional_attenuation_factor arginfo_ma_spatializer_get_rolloff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_set_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_spatializer_get_position, 0, 1, ma_vec3f, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_spatializer_set_direction arginfo_ma_spatializer_set_position

#define arginfo_ma_spatializer_get_direction arginfo_ma_spatializer_get_position

#define arginfo_ma_spatializer_set_velocity arginfo_ma_spatializer_set_position

#define arginfo_ma_spatializer_get_velocity arginfo_ma_spatializer_get_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spatializer_get_relative_position_and_direction, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSpatializer, ma_spatializer, 1)
	ZEND_ARG_OBJ_INFO(0, pListener, ma_spatializer_listener, 1)
	ZEND_ARG_OBJ_INFO(0, pRelativePos, ma_vec3f, 1)
	ZEND_ARG_OBJ_INFO(0, pRelativeDir, ma_vec3f, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_linear_resampler_config_init, 0, 4, ma_linear_resampler_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_linear_resampler_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_linear_resampler_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_linear_resampler_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_process_pcm_frames, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(1, pFrameCountIn, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCountOut, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_set_rate, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_set_rate_ratio, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, ratioInOut, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_get_input_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_linear_resampler_get_output_latency arginfo_ma_linear_resampler_get_input_latency

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_get_required_input_frame_count, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, outputFrameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pInputFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_linear_resampler_get_expected_output_frame_count, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_linear_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, inputFrameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pOutputFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_linear_resampler_reset arginfo_ma_linear_resampler_get_input_latency

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_resampler_config_init, 0, 5, ma_resampler_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, algorithm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resampler_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resampler_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resampler_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_process_pcm_frames, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(1, pFrameCountIn, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCountOut, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_set_rate, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_set_rate_ratio, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, ratio, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_get_input_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resampler_get_output_latency arginfo_ma_resampler_get_input_latency

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_get_required_input_frame_count, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, outputFrameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pInputFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resampler_get_expected_output_frame_count, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResampler, ma_resampler, 1)
	ZEND_ARG_TYPE_INFO(0, inputFrameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pOutputFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resampler_reset arginfo_ma_resampler_get_input_latency

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_channel_converter_config_init, 0, 6, ma_channel_converter_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelsIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMapIn, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelsOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMapOut, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, mixingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_converter_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_channel_converter_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_converter_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_channel_converter_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_channel_converter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_converter_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_channel_converter_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_channel_converter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_converter_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_channel_converter, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_converter_process_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_channel_converter, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_converter_get_input_channel_map, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_channel_converter, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_channel_converter_get_output_channel_map arginfo_ma_channel_converter_get_input_channel_map

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_data_converter_config_init_default, 0, 0, ma_data_converter_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_data_converter_config_init, 0, 6, ma_data_converter_config, 0)
	ZEND_ARG_TYPE_INFO(0, formatIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, formatOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelsIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelsOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_data_converter_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_data_converter_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_data_converter_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_process_pcm_frames, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(1, pFrameCountIn, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCountOut, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_set_rate, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_set_rate_ratio, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_TYPE_INFO(0, ratioInOut, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_get_input_latency, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_data_converter_get_output_latency arginfo_ma_data_converter_get_input_latency

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_get_required_input_frame_count, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_TYPE_INFO(0, outputFrameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pInputFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_get_expected_output_frame_count, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_TYPE_INFO(0, inputFrameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pOutputFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_converter_get_input_channel_map, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConverter, ma_data_converter, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_data_converter_get_output_channel_map arginfo_ma_data_converter_get_input_channel_map

#define arginfo_ma_data_converter_reset arginfo_ma_data_converter_get_input_latency

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_u8_to_s16, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ditherMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_pcm_u8_to_s24 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_u8_to_s32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_u8_to_f32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s16_to_u8 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s16_to_s24 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s16_to_s32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s16_to_f32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s24_to_u8 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s24_to_s16 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s24_to_s32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s24_to_f32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s32_to_u8 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s32_to_s16 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s32_to_s24 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_s32_to_f32 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_f32_to_u8 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_f32_to_s16 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_f32_to_s24 arginfo_ma_pcm_u8_to_s16

#define arginfo_ma_pcm_f32_to_s32 arginfo_ma_pcm_u8_to_s16

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_convert, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, formatOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, formatIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ditherMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_convert_pcm_frames_format, 0, 7, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, formatOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, formatIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ditherMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_get_channel, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_init_blank, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_init_standard, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, standardChannelMap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_copy, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_copy_or_default, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCapOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_is_valid, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_is_equal, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMapA, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, pChannelMapB, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_channel_map_is_blank arginfo_ma_channel_map_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_contains_channel_position, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_find_channel_position, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelPosition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pChannelIndex, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_map_to_string, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBufferOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, bufferCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_channel_position_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_convert_frames, 0, 10, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCountOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, formatOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelsOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCountIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, formatIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelsIn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRateIn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_convert_frames_ex, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCountOut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCountIn, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_data_converter_config, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_data_source_config_init, 0, 0, ma_data_source_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_data_source_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source_base, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_seek_pcm_frames, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesSeeked, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_seek_seconds, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, secondCount, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, pSecondsSeeked, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_seek_to_second, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, seekPointInSeconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_data_format, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_cursor_in_seconds, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_length_in_seconds, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_set_looping, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, isLooping, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_is_looping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_set_range_in_pcm_frames, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, rangeBegInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rangeEndInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_range_in_pcm_frames, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pRangeBegInFrames, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pRangeEndInFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_set_loop_point_in_pcm_frames, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, loopBegInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loopEndInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_loop_point_in_pcm_frames, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pLoopBegInFrames, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pLoopEndInFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_set_current, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_OBJ_INFO(0, pCurrentDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_data_source_get_current, 0, 1, ma_data_source, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_set_next, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_OBJ_INFO(0, pNextDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_data_source_get_next arginfo_ma_data_source_get_current

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_set_next_callback, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, onGetNext, IS_CALLABLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_init, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInFrames, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_set_data, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loop, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_unmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_at_end, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_get_available_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(1, pAvailableFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_audio_buffer_config_init, 0, 5, ma_audio_buffer_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_audio_buffer_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_audio_buffer_init_copy arginfo_ma_audio_buffer_init

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loop, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_unmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_at_end, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_get_available_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pAvailableFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_paged_audio_buffer_data_get_head, 0, 1, ma_paged_audio_buffer_page, 1)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_paged_audio_buffer_data_get_tail arginfo_ma_paged_audio_buffer_data_get_head

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_allocate_and_append_page, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
	ZEND_ARG_TYPE_INFO(0, pageSizeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pInitialData, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_paged_audio_buffer_config_init, 0, 1, ma_paged_audio_buffer_config, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_paged_audio_buffer_config, 1)
	ZEND_ARG_OBJ_INFO(0, pPagedAudioBuffer, ma_paged_audio_buffer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pPagedAudioBuffer, ma_paged_audio_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPagedAudioBuffer, ma_paged_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPagedAudioBuffer, ma_paged_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPagedAudioBuffer, ma_paged_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPagedAudioBuffer, ma_paged_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_init_ex, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subbufferSizeInBytes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subbufferCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subbufferStrideInBytes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pOptionalPreallocatedBuffer, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bufferSizeInBytes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pOptionalPreallocatedBuffer, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_rb_reset arginfo_ma_rb_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_commit_read, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInBytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_seek_read, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
	ZEND_ARG_TYPE_INFO(0, offsetInBytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_rb_seek_write arginfo_ma_rb_seek_read

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_pointer_distance, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_rb_available_read arginfo_ma_rb_pointer_distance

#define arginfo_ma_rb_available_write arginfo_ma_rb_pointer_distance

#define arginfo_ma_rb_get_subbuffer_size arginfo_ma_rb_pointer_distance

#define arginfo_ma_rb_get_subbuffer_stride arginfo_ma_rb_pointer_distance

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_get_subbuffer_offset, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
	ZEND_ARG_TYPE_INFO(0, subbufferIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_init_ex, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subbufferSizeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subbufferCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subbufferStrideInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pOptionalPreallocatedBuffer, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_init, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bufferSizeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pOptionalPreallocatedBuffer, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_pcm_rb_reset arginfo_ma_pcm_rb_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_commit_read, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_seek_read, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(0, offsetInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_pcm_rb_seek_write arginfo_ma_pcm_rb_seek_read

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_pointer_distance, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_pcm_rb_available_read arginfo_ma_pcm_rb_pointer_distance

#define arginfo_ma_pcm_rb_available_write arginfo_ma_pcm_rb_pointer_distance

#define arginfo_ma_pcm_rb_get_subbuffer_size arginfo_ma_pcm_rb_pointer_distance

#define arginfo_ma_pcm_rb_get_subbuffer_stride arginfo_ma_pcm_rb_pointer_distance

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_get_subbuffer_offset, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(0, subbufferIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_pcm_rb_get_format arginfo_ma_pcm_rb_pointer_distance

#define arginfo_ma_pcm_rb_get_channels arginfo_ma_pcm_rb_pointer_distance

#define arginfo_ma_pcm_rb_get_sample_rate arginfo_ma_pcm_rb_pointer_distance

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_set_sample_rate, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_duplex_rb_init, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, captureFormat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, captureChannels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, captureInternalSampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, captureInternalPeriodSizeInFrames, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_duplex_rb, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_duplex_rb_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_duplex_rb, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_result_description, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_get_format_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_blend_f32, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pInA, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pInB, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_get_bytes_per_sample, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_log_level_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, logLevel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_spinlock_lock, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSpinlock, ma_spinlock, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_spinlock_lock_noyield arginfo_ma_spinlock_lock

#define arginfo_ma_spinlock_unlock arginfo_ma_spinlock_lock

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_mutex_init, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pMutex, ma_mutex, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_mutex_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pMutex, ma_mutex, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_mutex_lock arginfo_ma_mutex_uninit

#define arginfo_ma_mutex_unlock arginfo_ma_mutex_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_event_init, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEvent, ma_event, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_event_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEvent, ma_event, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_event_wait, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEvent, ma_event, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_event_signal arginfo_ma_event_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_semaphore_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initialValue, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSemaphore, ma_semaphore, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_semaphore_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSemaphore, ma_semaphore, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_semaphore_wait, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSemaphore, ma_semaphore, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_semaphore_release arginfo_ma_semaphore_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fence_init, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFence, ma_fence, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fence_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pFence, ma_fence, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_fence_acquire, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pFence, ma_fence, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_fence_release arginfo_ma_fence_acquire

#define arginfo_ma_fence_wait arginfo_ma_fence_acquire

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_async_notification_signal, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotification, ma_async_notification, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_async_notification_poll_init, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotificationPoll, ma_async_notification_poll, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_async_notification_poll_is_signalled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pNotificationPoll, ma_async_notification_poll, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_async_notification_event_init, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotificationEvent, ma_async_notification_event, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_async_notification_event_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotificationEvent, ma_async_notification_event, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_async_notification_event_wait arginfo_ma_async_notification_event_uninit

#define arginfo_ma_async_notification_event_signal arginfo_ma_async_notification_event_uninit

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_slot_allocator_config_init, 0, 1, ma_slot_allocator_config, 0)
	ZEND_ARG_TYPE_INFO(0, capacity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_slot_allocator_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_slot_allocator_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_slot_allocator_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_slot_allocator_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocator, ma_slot_allocator, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_slot_allocator_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_slot_allocator_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocator, ma_slot_allocator, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_slot_allocator_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocator, ma_slot_allocator, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_slot_allocator_alloc, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocator, ma_slot_allocator, 1)
	ZEND_ARG_TYPE_INFO(1, pSlot, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_slot_allocator_free, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocator, ma_slot_allocator, 1)
	ZEND_ARG_TYPE_INFO(0, slot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_job_init, 0, 1, ma_job, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_job_process, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pJob, ma_job, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_job_queue_config_init, 0, 2, ma_job_queue_config, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, capacity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_job_queue_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_job_queue_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_job_queue_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_job_queue_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pQueue, ma_job_queue, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_job_queue_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_job_queue_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pQueue, ma_job_queue, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_job_queue_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pQueue, ma_job_queue, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_job_queue_post, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pQueue, ma_job_queue, 1)
	ZEND_ARG_OBJ_INFO(0, pJob, ma_job, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_job_queue_next arginfo_ma_job_queue_post

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_device_job_thread_config_init, 0, 0, ma_device_job_thread_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_job_thread_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_device_job_thread_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pJobThread, ma_device_job_thread, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_job_thread_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pJobThread, ma_device_job_thread, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_job_thread_post, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pJobThread, ma_device_job_thread, 1)
	ZEND_ARG_OBJ_INFO(0, pJob, ma_job, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_device_job_thread_next arginfo_ma_device_job_thread_post

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_id_equal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pA, ma_device_id, 1)
	ZEND_ARG_OBJ_INFO(0, pB, ma_device_id, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_context_config_init, 0, 0, ma_context_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backends, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, backendCount, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_context_config, 1)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_sizeof, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_context_get_log, 0, 1, ma_log, 1)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_enumerate_devices, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_get_device_info, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
	ZEND_ARG_TYPE_INFO(0, deviceType, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDeviceID, ma_device_id, 1)
	ZEND_ARG_OBJ_INFO(0, pDeviceInfo, ma_device_info, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_is_loopback_supported, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_device_config_init, 0, 1, ma_device_config, 0)
	ZEND_ARG_TYPE_INFO(0, deviceType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_device_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_init_ex, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backends, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, backendCount, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pContextConfig, ma_context_config, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_device_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_device_get_context, 0, 1, ma_context, 1)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_device_get_log, 0, 1, ma_log, 1)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_get_info, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDeviceInfo, ma_device_info, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_get_name, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, nameCap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pLengthNotIncludingNullTerminator, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_start, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_device_stop arginfo_ma_device_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_is_started, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_device_get_state arginfo_ma_device_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_post_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(0, deviceType, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pPlaybackDescriptor, ma_device_descriptor, 1)
	ZEND_ARG_OBJ_INFO(0, pCaptureDescriptor, ma_device_descriptor, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_set_master_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_get_master_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(1, pVolume, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_set_master_volume_db, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_get_master_volume_db, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(1, pGainDB, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_device_handle_backend_data_callback, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDevice, ma_device, 1)
	ZEND_ARG_TYPE_INFO(1, pOutput, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pInput, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_calculate_buffer_size_in_frames_from_descriptor, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDescriptor, ma_device_descriptor, 1)
	ZEND_ARG_TYPE_INFO(0, nativeSampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, performanceProfile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_get_backend_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, backend, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_get_backend_from_name, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pBackendName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pBackend, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_is_backend_enabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, backend, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_get_enabled_backends, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBackends, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, backendCap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBackendCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_is_loopback_supported arginfo_ma_is_backend_enabled

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_calculate_buffer_size_in_milliseconds_from_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bufferSizeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_calculate_buffer_size_in_frames_from_milliseconds, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bufferSizeInMilliseconds, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_pcm_frames, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, dst, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, src, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_silence_pcm_frames, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, p, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_clip_samples_u8, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pDst, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pSrc, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_clip_samples_s16 arginfo_ma_clip_samples_u8

#define arginfo_ma_clip_samples_s24 arginfo_ma_clip_samples_u8

#define arginfo_ma_clip_samples_s32 arginfo_ma_clip_samples_u8

#define arginfo_ma_clip_samples_f32 arginfo_ma_clip_samples_u8

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_clip_pcm_frames, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pDst, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pSrc, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_and_apply_volume_factor_u8, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pSamplesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pSamplesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sampleCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_copy_and_apply_volume_factor_s16 arginfo_ma_copy_and_apply_volume_factor_u8

#define arginfo_ma_copy_and_apply_volume_factor_s24 arginfo_ma_copy_and_apply_volume_factor_u8

#define arginfo_ma_copy_and_apply_volume_factor_s32 arginfo_ma_copy_and_apply_volume_factor_u8

#define arginfo_ma_copy_and_apply_volume_factor_f32 arginfo_ma_copy_and_apply_volume_factor_u8

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_apply_volume_factor_u8, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pSamples, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sampleCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_apply_volume_factor_s16 arginfo_ma_apply_volume_factor_u8

#define arginfo_ma_apply_volume_factor_s24 arginfo_ma_apply_volume_factor_u8

#define arginfo_ma_apply_volume_factor_s32 arginfo_ma_apply_volume_factor_u8

#define arginfo_ma_apply_volume_factor_f32 arginfo_ma_apply_volume_factor_u8

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_and_apply_volume_factor_pcm_frames_u8, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_copy_and_apply_volume_factor_pcm_frames_s16 arginfo_ma_copy_and_apply_volume_factor_pcm_frames_u8

#define arginfo_ma_copy_and_apply_volume_factor_pcm_frames_s24 arginfo_ma_copy_and_apply_volume_factor_pcm_frames_u8

#define arginfo_ma_copy_and_apply_volume_factor_pcm_frames_s32 arginfo_ma_copy_and_apply_volume_factor_pcm_frames_u8

#define arginfo_ma_copy_and_apply_volume_factor_pcm_frames_f32 arginfo_ma_copy_and_apply_volume_factor_pcm_frames_u8

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_and_apply_volume_factor_pcm_frames, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_apply_volume_factor_pcm_frames_u8, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pFrames, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_apply_volume_factor_pcm_frames_s16 arginfo_ma_apply_volume_factor_pcm_frames_u8

#define arginfo_ma_apply_volume_factor_pcm_frames_s24 arginfo_ma_apply_volume_factor_pcm_frames_u8

#define arginfo_ma_apply_volume_factor_pcm_frames_s32 arginfo_ma_apply_volume_factor_pcm_frames_u8

#define arginfo_ma_apply_volume_factor_pcm_frames_f32 arginfo_ma_apply_volume_factor_pcm_frames_u8

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_apply_volume_factor_pcm_frames, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pFrames, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_and_apply_volume_factor_per_channel_f32, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pChannelGains, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_and_apply_volume_and_clip_samples_u8, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pDst, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pSrc, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_copy_and_apply_volume_and_clip_samples_s16 arginfo_ma_copy_and_apply_volume_and_clip_samples_u8

#define arginfo_ma_copy_and_apply_volume_and_clip_samples_s24 arginfo_ma_copy_and_apply_volume_and_clip_samples_u8

#define arginfo_ma_copy_and_apply_volume_and_clip_samples_s32 arginfo_ma_copy_and_apply_volume_and_clip_samples_u8

#define arginfo_ma_copy_and_apply_volume_and_clip_samples_f32 arginfo_ma_copy_and_apply_volume_and_clip_samples_u8

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_copy_and_apply_volume_and_clip_pcm_frames, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, pDst, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pSrc, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_volume_linear_to_db, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_volume_db_to_linear, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, gain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_mix_pcm_frames_f32, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pDst, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pSrc, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_open_and_read_file, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, ppData, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pSize, IS_LONG, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_default_vfs_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_default_vfs, 0)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_decoding_backend_config_init, 0, 2, ma_decoding_backend_config, 0)
	ZEND_ARG_TYPE_INFO(0, preferredFormat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seekPointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_decoder_config_init, 0, 3, ma_decoder_config, 0)
	ZEND_ARG_TYPE_INFO(0, outputFormat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outputChannels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outputSampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_decoder_config_init_default, 0, 0, ma_decoder_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_init, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, onRead, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, onSeek, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_init_memory, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dataSize, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_init_vfs, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_decoder_init_vfs_w arginfo_ma_decoder_init_vfs

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_init_file, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_decoder_init_file_w arginfo_ma_decoder_init_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_get_data_format, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decoder_get_available_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDecoder, ma_decoder, 1)
	ZEND_ARG_TYPE_INFO(1, pAvailableFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decode_from_vfs, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCountOut, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, ppPCMFramesOut, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decode_file, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCountOut, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, ppPCMFramesOut, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_decode_memory, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dataSize, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_decoder_config, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCountOut, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, ppPCMFramesOut, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_encoder_config_init, 0, 4, ma_encoder_config, 0)
	ZEND_ARG_TYPE_INFO(0, encodingFormat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_encoder_init, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, onWrite, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, onSeek, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_encoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pEncoder, ma_encoder, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_encoder_init_vfs, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_encoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pEncoder, ma_encoder, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_encoder_init_vfs_w arginfo_ma_encoder_init_vfs

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_encoder_init_file, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_encoder_config, 1)
	ZEND_ARG_OBJ_INFO(0, pEncoder, ma_encoder, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_encoder_init_file_w arginfo_ma_encoder_init_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_encoder_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEncoder, ma_encoder, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_encoder_write_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEncoder, ma_encoder, 1)
	ZEND_ARG_TYPE_INFO(0, pFramesIn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesWritten, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_waveform_config_init, 0, 6, ma_waveform_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_waveform_config, 1)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_set_amplitude, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_set_frequency, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_set_type, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_waveform_set_sample_rate, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_waveform, 1)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_pulsewave_config_init, 0, 6, ma_pulsewave_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dutyCycle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_pulsewave_config, 1)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_set_amplitude, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_set_frequency, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_set_sample_rate, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pulsewave_set_duty_cycle, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pWaveform, ma_pulsewave, 1)
	ZEND_ARG_TYPE_INFO(0, dutyCycle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_noise_config_init, 0, 5, ma_noise_config, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_noise_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_noise_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_noise_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_set_amplitude, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 1)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_set_seed, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 1)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_noise_set_type, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNoise, ma_noise, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_resource_manager_pipeline_notifications_init, 0, 0, ma_resource_manager_pipeline_notifications, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_resource_manager_data_source_config_init, 0, 0, ma_resource_manager_data_source_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_resource_manager_config_init, 0, 0, ma_resource_manager_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resource_manager_config, 1)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_resource_manager_get_log, 0, 1, ma_log, 1)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_register_file, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_register_file_w arginfo_ma_resource_manager_register_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_register_decoded_data, 0, 7, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_register_decoded_data_w arginfo_ma_resource_manager_register_decoded_data

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_register_encoded_data, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, pData, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sizeInBytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_register_encoded_data_w arginfo_ma_resource_manager_register_encoded_data

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_unregister_file, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_unregister_file_w arginfo_ma_resource_manager_unregister_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_unregister_data, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pName, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_unregister_data_w arginfo_ma_resource_manager_unregister_data

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_init_ex, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resource_manager_data_source_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_init, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotifications, ma_resource_manager_pipeline_notifications, 1)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_data_buffer_init_w arginfo_ma_resource_manager_data_buffer_init

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_init_copy, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pExistingDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_get_data_format, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_data_buffer_result arginfo_ma_resource_manager_data_buffer_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_set_looping, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(0, isLooping, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_is_looping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_buffer_get_available_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataBuffer, ma_resource_manager_data_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, pAvailableFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_init_ex, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resource_manager_data_source_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_init, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotifications, ma_resource_manager_pipeline_notifications, 1)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_data_stream_init_w arginfo_ma_resource_manager_data_stream_init

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_get_data_format, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_data_stream_result arginfo_ma_resource_manager_data_stream_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_set_looping, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(0, isLooping, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_is_looping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_stream_get_available_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataStream, ma_resource_manager_data_stream, 1)
	ZEND_ARG_TYPE_INFO(1, pAvailableFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_init_ex, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_resource_manager_data_source_config, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_init, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_TYPE_INFO(0, pName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNotifications, ma_resource_manager_pipeline_notifications, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_data_source_init_w arginfo_ma_resource_manager_data_source_init

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_init_copy, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pExistingDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_uninit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_get_data_format, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_data_source_result arginfo_ma_resource_manager_data_source_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_set_looping, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, isLooping, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_is_looping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_data_source_get_available_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_resource_manager_data_source, 1)
	ZEND_ARG_TYPE_INFO(1, pAvailableFrames, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_post_job, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pJob, ma_job, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_resource_manager_post_job_quit, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pResourceManager, ma_resource_manager, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_resource_manager_next_job arginfo_ma_resource_manager_post_job

#define arginfo_ma_resource_manager_process_job arginfo_ma_resource_manager_post_job

#define arginfo_ma_resource_manager_process_next_job arginfo_ma_resource_manager_post_job_quit

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_node_config_init, 0, 0, ma_node_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_heap_size, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_node_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_init_preallocated, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_node_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node_base, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node_base, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_node_get_node_graph, 0, 1, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_input_bus_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_get_output_bus_count arginfo_ma_node_get_input_bus_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_input_channels, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, inputBusIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_output_channels, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, outputBusIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_attach_output_bus, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, outputBusIndex, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pOtherNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, otherNodeInputBusIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_detach_output_bus arginfo_ma_node_get_output_channels

#define arginfo_ma_node_detach_all_output_buses arginfo_ma_node_get_input_bus_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_set_output_bus_volume, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, outputBusIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_output_bus_volume, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, outputBusIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_set_state, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_get_state arginfo_ma_node_get_input_bus_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_set_state_time, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, globalTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_get_state_time arginfo_ma_node_set_state

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_state_by_time, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, globalTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_get_state_by_time_range, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, globalTimeBeg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, globalTimeEnd, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_get_time arginfo_ma_node_get_input_bus_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_set_time, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, localTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_node_graph_config_init, 0, 1, ma_node_graph_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_graph_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_node_graph_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_graph_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_node_graph_get_endpoint, 0, 1, ma_node, 1)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_graph_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_graph_get_channels, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_graph_get_time arginfo_ma_node_graph_get_channels

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_node_graph_set_time, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_TYPE_INFO(0, globalTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_node_graph_get_processing_size_in_frames arginfo_ma_node_graph_get_channels

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_data_source_node_config_init, 0, 1, ma_data_source_node_config, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_data_source_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSourceNode, ma_data_source_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSourceNode, ma_data_source_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_node_set_looping, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSourceNode, ma_data_source_node, 1)
	ZEND_ARG_TYPE_INFO(0, isLooping, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_node_is_looping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pDataSourceNode, ma_data_source_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_splitter_node_config_init, 0, 1, ma_splitter_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_splitter_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_splitter_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pSplitterNode, ma_splitter_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_splitter_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSplitterNode, ma_splitter_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_biquad_node_config_init, 0, 7, ma_biquad_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_biquad_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_biquad_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_biquad_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_biquad_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_biquad_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_biquad_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_lpf_node_config_init, 0, 4, ma_lpf_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_lpf_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_lpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_lpf_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_lpf_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_lpf_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_hpf_node_config_init, 0, 4, ma_hpf_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_hpf_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_hpf_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hpf_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_hpf_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_bpf_node_config_init, 0, 4, ma_bpf_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cutoffFrequency, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_bpf_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_bpf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_bpf_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_bpf_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_bpf_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_notch_node_config_init, 0, 4, ma_notch_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_notch_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_notch_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_notch_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_notch_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_notch_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_notch_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_peak_node_config_init, 0, 5, ma_peak_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_peak_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_peak_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_peak_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_peak_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_peak_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_peak_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_loshelf_node_config_init, 0, 5, ma_loshelf_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_loshelf_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_loshelf_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_loshelf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_loshelf_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_loshelf_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_loshelf_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_hishelf_node_config_init, 0, 5, ma_hishelf_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frequency, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hishelf_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_hishelf_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf_node_reinit, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_hishelf_config, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_hishelf_node, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_hishelf_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_hishelf_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_delay_node_config_init, 0, 4, ma_delay_node_config, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleRate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delayInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, decay, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_node_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pNodeGraph, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_delay_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pDelayNode, ma_delay_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDelayNode, ma_delay_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_node_set_wet, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pDelayNode, ma_delay_node, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_delay_node_get_wet, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pDelayNode, ma_delay_node, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_delay_node_set_dry arginfo_ma_delay_node_set_wet

#define arginfo_ma_delay_node_get_dry arginfo_ma_delay_node_get_wet

#define arginfo_ma_delay_node_set_decay arginfo_ma_delay_node_set_wet

#define arginfo_ma_delay_node_get_decay arginfo_ma_delay_node_get_wet

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_node_config_init, 0, 3, ma_engine_node_config, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_node_get_heap_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_engine_node_config, 1)
	ZEND_ARG_TYPE_INFO(1, pHeapSizeInBytes, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_node_init_preallocated, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_engine_node_config, 1)
	ZEND_ARG_TYPE_INFO(0, pHeap, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pEngineNode, ma_engine_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_node_init, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_engine_node_config, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(0, pEngineNode, ma_engine_node, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_node_uninit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEngineNode, ma_engine_node, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_config_init, 0, 0, ma_sound_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_config_init_2, 0, 1, ma_sound_config, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_group_config_init, 0, 0, ma_sound_group_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_group_config_init_2, 0, 1, ma_sound_group_config, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_config_init, 0, 0, ma_engine_config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_engine_config, 1)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_read_pcm_frames, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(1, pFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pFramesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_get_node_graph, 0, 1, ma_node_graph, 1)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_get_resource_manager, 0, 1, ma_resource_manager, 1)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_get_device, 0, 1, ma_device, 1)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_get_log, 0, 1, ma_log, 1)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_get_endpoint, 0, 1, ma_node, 1)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_get_time_in_pcm_frames, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_engine_get_time_in_milliseconds arginfo_ma_engine_get_time_in_pcm_frames

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_set_time_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, globalTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_engine_set_time_in_milliseconds arginfo_ma_engine_set_time_in_pcm_frames

#define arginfo_ma_engine_get_time arginfo_ma_engine_get_time_in_pcm_frames

#define arginfo_ma_engine_set_time arginfo_ma_engine_set_time_in_pcm_frames

#define arginfo_ma_engine_get_channels arginfo_ma_engine_get_time_in_pcm_frames

#define arginfo_ma_engine_get_sample_rate arginfo_ma_engine_get_time_in_pcm_frames

#define arginfo_ma_engine_start arginfo_ma_engine_get_time_in_pcm_frames

#define arginfo_ma_engine_stop arginfo_ma_engine_get_time_in_pcm_frames

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_set_volume, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_get_volume, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_set_gain_db, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, gainDB, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_engine_get_gain_db arginfo_ma_engine_get_volume

#define arginfo_ma_engine_get_listener_count arginfo_ma_engine_get_time_in_pcm_frames

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_find_closest_listener, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, absolutePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, absolutePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, absolutePosZ, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_listener_set_position, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_engine_listener_get_position, 0, 2, ma_vec3f, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_engine_listener_set_direction arginfo_ma_engine_listener_set_position

#define arginfo_ma_engine_listener_get_direction arginfo_ma_engine_listener_get_position

#define arginfo_ma_engine_listener_set_velocity arginfo_ma_engine_listener_set_position

#define arginfo_ma_engine_listener_get_velocity arginfo_ma_engine_listener_get_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_listener_set_cone, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, innerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_listener_get_cone, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pInnerAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterGain, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_engine_listener_set_world_up arginfo_ma_engine_listener_set_position

#define arginfo_ma_engine_listener_get_world_up arginfo_ma_engine_listener_get_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_listener_set_enabled, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_listener_is_enabled, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_play_sound_ex, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pNode, ma_node, 1)
	ZEND_ARG_TYPE_INFO(0, nodeInputBusIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_engine_play_sound, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_init_from_file, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_OBJ_INFO(0, pDoneFence, ma_fence, 1)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_init_from_file_w arginfo_ma_sound_init_from_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_init_copy, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_OBJ_INFO(0, pExistingSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_init_from_data_source, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_init_ex, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_sound_config, 1)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_get_engine, 0, 1, ma_engine, 1)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_get_data_source, 0, 1, ma_data_source, 1)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_start, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_stop arginfo_ma_sound_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_stop_with_fade_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_stop_with_fade_in_milliseconds arginfo_ma_sound_stop_with_fade_in_pcm_frames

#define arginfo_ma_sound_reset_start_time arginfo_ma_sound_uninit

#define arginfo_ma_sound_reset_stop_time arginfo_ma_sound_uninit

#define arginfo_ma_sound_reset_fade arginfo_ma_sound_uninit

#define arginfo_ma_sound_reset_stop_time_and_fade arginfo_ma_sound_uninit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_volume, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_volume, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_pan, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, pan, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_pan arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_pan_mode, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, panMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_pan_mode arginfo_ma_sound_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_pitch, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, pitch, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_pitch arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_spatialization_enabled, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_is_spatialization_enabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_pinned_listener_index, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_pinned_listener_index arginfo_ma_sound_start

#define arginfo_ma_sound_get_listener_index arginfo_ma_sound_start

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_get_direction_to_listener, 0, 1, ma_vec3f, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_position arginfo_ma_sound_get_direction_to_listener

#define arginfo_ma_sound_set_direction arginfo_ma_sound_set_position

#define arginfo_ma_sound_get_direction arginfo_ma_sound_get_direction_to_listener

#define arginfo_ma_sound_set_velocity arginfo_ma_sound_set_position

#define arginfo_ma_sound_get_velocity arginfo_ma_sound_get_direction_to_listener

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_attenuation_model, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, attenuationModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_attenuation_model arginfo_ma_sound_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_positioning, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, positioning, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_positioning arginfo_ma_sound_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_rolloff, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, rolloff, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_rolloff arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_min_gain, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, minGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_min_gain arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_max_gain, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, maxGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_max_gain arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_min_distance, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, minDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_min_distance arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_max_distance, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, maxDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_max_distance arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, innerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(1, pInnerAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterGain, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_doppler_factor, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, dopplerFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_doppler_factor arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_directional_attenuation_factor, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, directionalAttenuationFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_directional_attenuation_factor arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_fade_in_pcm_frames, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_fade_in_milliseconds, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInMilliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_fade_start_in_pcm_frames, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, absoluteGlobalTimeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_fade_start_in_milliseconds, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInMilliseconds, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, absoluteGlobalTimeInMilliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_get_current_fade_volume arginfo_ma_sound_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_start_time_in_pcm_frames, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, absoluteGlobalTimeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_start_time_in_milliseconds, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, absoluteGlobalTimeInMilliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_set_stop_time_in_pcm_frames arginfo_ma_sound_set_start_time_in_pcm_frames

#define arginfo_ma_sound_set_stop_time_in_milliseconds arginfo_ma_sound_set_start_time_in_milliseconds

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_stop_time_with_fade_in_pcm_frames, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, stopAbsoluteGlobalTimeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_stop_time_with_fade_in_milliseconds, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, stopAbsoluteGlobalTimeInMilliseconds, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInMilliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_is_playing arginfo_ma_sound_is_spatialization_enabled

#define arginfo_ma_sound_get_time_in_pcm_frames arginfo_ma_sound_start

#define arginfo_ma_sound_get_time_in_milliseconds arginfo_ma_sound_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_looping, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, isLooping, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_is_looping arginfo_ma_sound_is_spatialization_enabled

#define arginfo_ma_sound_at_end arginfo_ma_sound_is_spatialization_enabled

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_seek_to_pcm_frame, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, frameIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_seek_to_second, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, seekPointInSeconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_data_format, 0, 6, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(1, pFormat, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannels, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pSampleRate, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, pChannelMap, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, channelMapCap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_cursor_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_length_in_pcm_frames, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_cursor_in_seconds, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_get_length_in_seconds, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(1, pLength, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_set_end_callback, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pSound, ma_sound, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_init, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pParentGroup, ma_sound_group, 1)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_init_ex, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pEngine, ma_engine, 1)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_sound_group_config, 1)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_uninit, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_group_get_engine, 0, 1, ma_engine, 1)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_start, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_stop arginfo_ma_sound_group_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_volume, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_get_volume, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_pan, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, pan, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_pan arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_pan_mode, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, panMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_pan_mode arginfo_ma_sound_group_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_pitch, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, pitch, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_pitch arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_spatialization_enabled, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_is_spatialization_enabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_pinned_listener_index, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, listenerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_pinned_listener_index arginfo_ma_sound_group_start

#define arginfo_ma_sound_group_get_listener_index arginfo_ma_sound_group_start

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_sound_group_get_direction_to_listener, 0, 1, ma_vec3f, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_position arginfo_ma_sound_group_get_direction_to_listener

#define arginfo_ma_sound_group_set_direction arginfo_ma_sound_group_set_position

#define arginfo_ma_sound_group_get_direction arginfo_ma_sound_group_get_direction_to_listener

#define arginfo_ma_sound_group_set_velocity arginfo_ma_sound_group_set_position

#define arginfo_ma_sound_group_get_velocity arginfo_ma_sound_group_get_direction_to_listener

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_attenuation_model, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, attenuationModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_attenuation_model arginfo_ma_sound_group_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_positioning, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, positioning, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_positioning arginfo_ma_sound_group_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_rolloff, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, rolloff, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_rolloff arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_min_gain, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, minGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_min_gain arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_max_gain, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, maxGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_max_gain arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_min_distance, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, minDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_min_distance arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_max_distance, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, maxDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_max_distance arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, innerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerAngleInRadians, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, outerGain, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_get_cone, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(1, pInnerAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterAngleInRadians, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, pOuterGain, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_doppler_factor, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, dopplerFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_doppler_factor arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_directional_attenuation_factor, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, directionalAttenuationFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_directional_attenuation_factor arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_fade_in_pcm_frames, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_fade_in_milliseconds, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, volumeBeg, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, volumeEnd, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fadeLengthInMilliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_get_current_fade_volume arginfo_ma_sound_group_get_volume

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_start_time_in_pcm_frames, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, absoluteGlobalTimeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_sound_group_set_start_time_in_milliseconds, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pGroup, ma_sound_group, 1)
	ZEND_ARG_TYPE_INFO(0, absoluteGlobalTimeInMilliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_sound_group_set_stop_time_in_pcm_frames arginfo_ma_sound_group_set_start_time_in_pcm_frames

#define arginfo_ma_sound_group_set_stop_time_in_milliseconds arginfo_ma_sound_group_set_start_time_in_milliseconds

#define arginfo_ma_sound_group_is_playing arginfo_ma_sound_group_is_spatialization_enabled

#define arginfo_ma_sound_group_get_time_in_pcm_frames arginfo_ma_sound_group_start

ZEND_FUNCTION(ma_version);
ZEND_FUNCTION(ma_version_string);
ZEND_FUNCTION(ma_log_init);
ZEND_FUNCTION(ma_log_uninit);
ZEND_FUNCTION(ma_log_post);
ZEND_FUNCTION(ma_biquad_config_init);
ZEND_FUNCTION(ma_biquad_get_heap_size);
ZEND_FUNCTION(ma_biquad_init_preallocated);
ZEND_FUNCTION(ma_biquad_init);
ZEND_FUNCTION(ma_biquad_uninit);
ZEND_FUNCTION(ma_biquad_reinit);
ZEND_FUNCTION(ma_biquad_clear_cache);
ZEND_FUNCTION(ma_biquad_process_pcm_frames);
ZEND_FUNCTION(ma_biquad_get_latency);
ZEND_FUNCTION(ma_lpf1_config_init);
ZEND_FUNCTION(ma_lpf2_config_init);
ZEND_FUNCTION(ma_lpf1_get_heap_size);
ZEND_FUNCTION(ma_lpf1_init_preallocated);
ZEND_FUNCTION(ma_lpf1_init);
ZEND_FUNCTION(ma_lpf1_uninit);
ZEND_FUNCTION(ma_lpf1_reinit);
ZEND_FUNCTION(ma_lpf1_clear_cache);
ZEND_FUNCTION(ma_lpf1_process_pcm_frames);
ZEND_FUNCTION(ma_lpf1_get_latency);
ZEND_FUNCTION(ma_lpf2_get_heap_size);
ZEND_FUNCTION(ma_lpf2_init_preallocated);
ZEND_FUNCTION(ma_lpf2_init);
ZEND_FUNCTION(ma_lpf2_uninit);
ZEND_FUNCTION(ma_lpf2_reinit);
ZEND_FUNCTION(ma_lpf2_clear_cache);
ZEND_FUNCTION(ma_lpf2_process_pcm_frames);
ZEND_FUNCTION(ma_lpf2_get_latency);
ZEND_FUNCTION(ma_lpf_config_init);
ZEND_FUNCTION(ma_lpf_get_heap_size);
ZEND_FUNCTION(ma_lpf_init_preallocated);
ZEND_FUNCTION(ma_lpf_init);
ZEND_FUNCTION(ma_lpf_uninit);
ZEND_FUNCTION(ma_lpf_reinit);
ZEND_FUNCTION(ma_lpf_clear_cache);
ZEND_FUNCTION(ma_lpf_process_pcm_frames);
ZEND_FUNCTION(ma_lpf_get_latency);
ZEND_FUNCTION(ma_hpf1_config_init);
ZEND_FUNCTION(ma_hpf2_config_init);
ZEND_FUNCTION(ma_hpf1_get_heap_size);
ZEND_FUNCTION(ma_hpf1_init_preallocated);
ZEND_FUNCTION(ma_hpf1_init);
ZEND_FUNCTION(ma_hpf1_uninit);
ZEND_FUNCTION(ma_hpf1_reinit);
ZEND_FUNCTION(ma_hpf1_process_pcm_frames);
ZEND_FUNCTION(ma_hpf1_get_latency);
ZEND_FUNCTION(ma_hpf2_get_heap_size);
ZEND_FUNCTION(ma_hpf2_init_preallocated);
ZEND_FUNCTION(ma_hpf2_init);
ZEND_FUNCTION(ma_hpf2_uninit);
ZEND_FUNCTION(ma_hpf2_reinit);
ZEND_FUNCTION(ma_hpf2_process_pcm_frames);
ZEND_FUNCTION(ma_hpf2_get_latency);
ZEND_FUNCTION(ma_hpf_config_init);
ZEND_FUNCTION(ma_hpf_get_heap_size);
ZEND_FUNCTION(ma_hpf_init_preallocated);
ZEND_FUNCTION(ma_hpf_init);
ZEND_FUNCTION(ma_hpf_uninit);
ZEND_FUNCTION(ma_hpf_reinit);
ZEND_FUNCTION(ma_hpf_process_pcm_frames);
ZEND_FUNCTION(ma_hpf_get_latency);
ZEND_FUNCTION(ma_bpf2_config_init);
ZEND_FUNCTION(ma_bpf2_get_heap_size);
ZEND_FUNCTION(ma_bpf2_init_preallocated);
ZEND_FUNCTION(ma_bpf2_init);
ZEND_FUNCTION(ma_bpf2_uninit);
ZEND_FUNCTION(ma_bpf2_reinit);
ZEND_FUNCTION(ma_bpf2_process_pcm_frames);
ZEND_FUNCTION(ma_bpf2_get_latency);
ZEND_FUNCTION(ma_bpf_config_init);
ZEND_FUNCTION(ma_bpf_get_heap_size);
ZEND_FUNCTION(ma_bpf_init_preallocated);
ZEND_FUNCTION(ma_bpf_init);
ZEND_FUNCTION(ma_bpf_uninit);
ZEND_FUNCTION(ma_bpf_reinit);
ZEND_FUNCTION(ma_bpf_process_pcm_frames);
ZEND_FUNCTION(ma_bpf_get_latency);
ZEND_FUNCTION(ma_notch2_config_init);
ZEND_FUNCTION(ma_notch2_get_heap_size);
ZEND_FUNCTION(ma_notch2_init_preallocated);
ZEND_FUNCTION(ma_notch2_init);
ZEND_FUNCTION(ma_notch2_uninit);
ZEND_FUNCTION(ma_notch2_reinit);
ZEND_FUNCTION(ma_notch2_process_pcm_frames);
ZEND_FUNCTION(ma_notch2_get_latency);
ZEND_FUNCTION(ma_peak2_config_init);
ZEND_FUNCTION(ma_peak2_get_heap_size);
ZEND_FUNCTION(ma_peak2_init_preallocated);
ZEND_FUNCTION(ma_peak2_init);
ZEND_FUNCTION(ma_peak2_uninit);
ZEND_FUNCTION(ma_peak2_reinit);
ZEND_FUNCTION(ma_peak2_process_pcm_frames);
ZEND_FUNCTION(ma_peak2_get_latency);
ZEND_FUNCTION(ma_loshelf2_config_init);
ZEND_FUNCTION(ma_loshelf2_get_heap_size);
ZEND_FUNCTION(ma_loshelf2_init_preallocated);
ZEND_FUNCTION(ma_loshelf2_init);
ZEND_FUNCTION(ma_loshelf2_uninit);
ZEND_FUNCTION(ma_loshelf2_reinit);
ZEND_FUNCTION(ma_loshelf2_process_pcm_frames);
ZEND_FUNCTION(ma_loshelf2_get_latency);
ZEND_FUNCTION(ma_hishelf2_config_init);
ZEND_FUNCTION(ma_hishelf2_get_heap_size);
ZEND_FUNCTION(ma_hishelf2_init_preallocated);
ZEND_FUNCTION(ma_hishelf2_init);
ZEND_FUNCTION(ma_hishelf2_uninit);
ZEND_FUNCTION(ma_hishelf2_reinit);
ZEND_FUNCTION(ma_hishelf2_process_pcm_frames);
ZEND_FUNCTION(ma_hishelf2_get_latency);
ZEND_FUNCTION(ma_delay_config_init);
ZEND_FUNCTION(ma_delay_init);
ZEND_FUNCTION(ma_delay_uninit);
ZEND_FUNCTION(ma_delay_process_pcm_frames);
ZEND_FUNCTION(ma_delay_set_wet);
ZEND_FUNCTION(ma_delay_get_wet);
ZEND_FUNCTION(ma_delay_set_dry);
ZEND_FUNCTION(ma_delay_get_dry);
ZEND_FUNCTION(ma_delay_set_decay);
ZEND_FUNCTION(ma_delay_get_decay);
ZEND_FUNCTION(ma_gainer_config_init);
ZEND_FUNCTION(ma_gainer_get_heap_size);
ZEND_FUNCTION(ma_gainer_init_preallocated);
ZEND_FUNCTION(ma_gainer_init);
ZEND_FUNCTION(ma_gainer_uninit);
ZEND_FUNCTION(ma_gainer_process_pcm_frames);
ZEND_FUNCTION(ma_gainer_set_gain);
ZEND_FUNCTION(ma_gainer_set_gains);
ZEND_FUNCTION(ma_gainer_set_master_volume);
ZEND_FUNCTION(ma_gainer_get_master_volume);
ZEND_FUNCTION(ma_panner_config_init);
ZEND_FUNCTION(ma_panner_init);
ZEND_FUNCTION(ma_panner_process_pcm_frames);
ZEND_FUNCTION(ma_panner_set_mode);
ZEND_FUNCTION(ma_panner_get_mode);
ZEND_FUNCTION(ma_panner_set_pan);
ZEND_FUNCTION(ma_panner_get_pan);
ZEND_FUNCTION(ma_fader_config_init);
ZEND_FUNCTION(ma_fader_init);
ZEND_FUNCTION(ma_fader_process_pcm_frames);
ZEND_FUNCTION(ma_fader_get_data_format);
ZEND_FUNCTION(ma_fader_set_fade);
ZEND_FUNCTION(ma_fader_set_fade_ex);
ZEND_FUNCTION(ma_fader_get_current_volume);
ZEND_FUNCTION(ma_spatializer_listener_config_init);
ZEND_FUNCTION(ma_spatializer_listener_get_heap_size);
ZEND_FUNCTION(ma_spatializer_listener_init_preallocated);
ZEND_FUNCTION(ma_spatializer_listener_init);
ZEND_FUNCTION(ma_spatializer_listener_uninit);
ZEND_FUNCTION(ma_spatializer_listener_get_channel_map);
ZEND_FUNCTION(ma_spatializer_listener_set_cone);
ZEND_FUNCTION(ma_spatializer_listener_get_cone);
ZEND_FUNCTION(ma_spatializer_listener_set_position);
ZEND_FUNCTION(ma_spatializer_listener_get_position);
ZEND_FUNCTION(ma_spatializer_listener_set_direction);
ZEND_FUNCTION(ma_spatializer_listener_get_direction);
ZEND_FUNCTION(ma_spatializer_listener_set_velocity);
ZEND_FUNCTION(ma_spatializer_listener_get_velocity);
ZEND_FUNCTION(ma_spatializer_listener_set_speed_of_sound);
ZEND_FUNCTION(ma_spatializer_listener_get_speed_of_sound);
ZEND_FUNCTION(ma_spatializer_listener_set_world_up);
ZEND_FUNCTION(ma_spatializer_listener_get_world_up);
ZEND_FUNCTION(ma_spatializer_listener_set_enabled);
ZEND_FUNCTION(ma_spatializer_listener_is_enabled);
ZEND_FUNCTION(ma_spatializer_config_init);
ZEND_FUNCTION(ma_spatializer_get_heap_size);
ZEND_FUNCTION(ma_spatializer_init_preallocated);
ZEND_FUNCTION(ma_spatializer_init);
ZEND_FUNCTION(ma_spatializer_uninit);
ZEND_FUNCTION(ma_spatializer_process_pcm_frames);
ZEND_FUNCTION(ma_spatializer_set_master_volume);
ZEND_FUNCTION(ma_spatializer_get_master_volume);
ZEND_FUNCTION(ma_spatializer_get_input_channels);
ZEND_FUNCTION(ma_spatializer_get_output_channels);
ZEND_FUNCTION(ma_spatializer_set_attenuation_model);
ZEND_FUNCTION(ma_spatializer_get_attenuation_model);
ZEND_FUNCTION(ma_spatializer_set_positioning);
ZEND_FUNCTION(ma_spatializer_get_positioning);
ZEND_FUNCTION(ma_spatializer_set_rolloff);
ZEND_FUNCTION(ma_spatializer_get_rolloff);
ZEND_FUNCTION(ma_spatializer_set_min_gain);
ZEND_FUNCTION(ma_spatializer_get_min_gain);
ZEND_FUNCTION(ma_spatializer_set_max_gain);
ZEND_FUNCTION(ma_spatializer_get_max_gain);
ZEND_FUNCTION(ma_spatializer_set_min_distance);
ZEND_FUNCTION(ma_spatializer_get_min_distance);
ZEND_FUNCTION(ma_spatializer_set_max_distance);
ZEND_FUNCTION(ma_spatializer_get_max_distance);
ZEND_FUNCTION(ma_spatializer_set_cone);
ZEND_FUNCTION(ma_spatializer_get_cone);
ZEND_FUNCTION(ma_spatializer_set_doppler_factor);
ZEND_FUNCTION(ma_spatializer_get_doppler_factor);
ZEND_FUNCTION(ma_spatializer_set_directional_attenuation_factor);
ZEND_FUNCTION(ma_spatializer_get_directional_attenuation_factor);
ZEND_FUNCTION(ma_spatializer_set_position);
ZEND_FUNCTION(ma_spatializer_get_position);
ZEND_FUNCTION(ma_spatializer_set_direction);
ZEND_FUNCTION(ma_spatializer_get_direction);
ZEND_FUNCTION(ma_spatializer_set_velocity);
ZEND_FUNCTION(ma_spatializer_get_velocity);
ZEND_FUNCTION(ma_spatializer_get_relative_position_and_direction);
ZEND_FUNCTION(ma_linear_resampler_config_init);
ZEND_FUNCTION(ma_linear_resampler_get_heap_size);
ZEND_FUNCTION(ma_linear_resampler_init_preallocated);
ZEND_FUNCTION(ma_linear_resampler_init);
ZEND_FUNCTION(ma_linear_resampler_uninit);
ZEND_FUNCTION(ma_linear_resampler_process_pcm_frames);
ZEND_FUNCTION(ma_linear_resampler_set_rate);
ZEND_FUNCTION(ma_linear_resampler_set_rate_ratio);
ZEND_FUNCTION(ma_linear_resampler_get_input_latency);
ZEND_FUNCTION(ma_linear_resampler_get_output_latency);
ZEND_FUNCTION(ma_linear_resampler_get_required_input_frame_count);
ZEND_FUNCTION(ma_linear_resampler_get_expected_output_frame_count);
ZEND_FUNCTION(ma_linear_resampler_reset);
ZEND_FUNCTION(ma_resampler_config_init);
ZEND_FUNCTION(ma_resampler_get_heap_size);
ZEND_FUNCTION(ma_resampler_init_preallocated);
ZEND_FUNCTION(ma_resampler_init);
ZEND_FUNCTION(ma_resampler_uninit);
ZEND_FUNCTION(ma_resampler_process_pcm_frames);
ZEND_FUNCTION(ma_resampler_set_rate);
ZEND_FUNCTION(ma_resampler_set_rate_ratio);
ZEND_FUNCTION(ma_resampler_get_input_latency);
ZEND_FUNCTION(ma_resampler_get_output_latency);
ZEND_FUNCTION(ma_resampler_get_required_input_frame_count);
ZEND_FUNCTION(ma_resampler_get_expected_output_frame_count);
ZEND_FUNCTION(ma_resampler_reset);
ZEND_FUNCTION(ma_channel_converter_config_init);
ZEND_FUNCTION(ma_channel_converter_get_heap_size);
ZEND_FUNCTION(ma_channel_converter_init_preallocated);
ZEND_FUNCTION(ma_channel_converter_init);
ZEND_FUNCTION(ma_channel_converter_uninit);
ZEND_FUNCTION(ma_channel_converter_process_pcm_frames);
ZEND_FUNCTION(ma_channel_converter_get_input_channel_map);
ZEND_FUNCTION(ma_channel_converter_get_output_channel_map);
ZEND_FUNCTION(ma_data_converter_config_init_default);
ZEND_FUNCTION(ma_data_converter_config_init);
ZEND_FUNCTION(ma_data_converter_get_heap_size);
ZEND_FUNCTION(ma_data_converter_init_preallocated);
ZEND_FUNCTION(ma_data_converter_init);
ZEND_FUNCTION(ma_data_converter_uninit);
ZEND_FUNCTION(ma_data_converter_process_pcm_frames);
ZEND_FUNCTION(ma_data_converter_set_rate);
ZEND_FUNCTION(ma_data_converter_set_rate_ratio);
ZEND_FUNCTION(ma_data_converter_get_input_latency);
ZEND_FUNCTION(ma_data_converter_get_output_latency);
ZEND_FUNCTION(ma_data_converter_get_required_input_frame_count);
ZEND_FUNCTION(ma_data_converter_get_expected_output_frame_count);
ZEND_FUNCTION(ma_data_converter_get_input_channel_map);
ZEND_FUNCTION(ma_data_converter_get_output_channel_map);
ZEND_FUNCTION(ma_data_converter_reset);
ZEND_FUNCTION(ma_pcm_u8_to_s16);
ZEND_FUNCTION(ma_pcm_u8_to_s24);
ZEND_FUNCTION(ma_pcm_u8_to_s32);
ZEND_FUNCTION(ma_pcm_u8_to_f32);
ZEND_FUNCTION(ma_pcm_s16_to_u8);
ZEND_FUNCTION(ma_pcm_s16_to_s24);
ZEND_FUNCTION(ma_pcm_s16_to_s32);
ZEND_FUNCTION(ma_pcm_s16_to_f32);
ZEND_FUNCTION(ma_pcm_s24_to_u8);
ZEND_FUNCTION(ma_pcm_s24_to_s16);
ZEND_FUNCTION(ma_pcm_s24_to_s32);
ZEND_FUNCTION(ma_pcm_s24_to_f32);
ZEND_FUNCTION(ma_pcm_s32_to_u8);
ZEND_FUNCTION(ma_pcm_s32_to_s16);
ZEND_FUNCTION(ma_pcm_s32_to_s24);
ZEND_FUNCTION(ma_pcm_s32_to_f32);
ZEND_FUNCTION(ma_pcm_f32_to_u8);
ZEND_FUNCTION(ma_pcm_f32_to_s16);
ZEND_FUNCTION(ma_pcm_f32_to_s24);
ZEND_FUNCTION(ma_pcm_f32_to_s32);
ZEND_FUNCTION(ma_pcm_convert);
ZEND_FUNCTION(ma_convert_pcm_frames_format);
ZEND_FUNCTION(ma_channel_map_get_channel);
ZEND_FUNCTION(ma_channel_map_init_blank);
ZEND_FUNCTION(ma_channel_map_init_standard);
ZEND_FUNCTION(ma_channel_map_copy);
ZEND_FUNCTION(ma_channel_map_copy_or_default);
ZEND_FUNCTION(ma_channel_map_is_valid);
ZEND_FUNCTION(ma_channel_map_is_equal);
ZEND_FUNCTION(ma_channel_map_is_blank);
ZEND_FUNCTION(ma_channel_map_contains_channel_position);
ZEND_FUNCTION(ma_channel_map_find_channel_position);
ZEND_FUNCTION(ma_channel_map_to_string);
ZEND_FUNCTION(ma_channel_position_to_string);
ZEND_FUNCTION(ma_convert_frames);
ZEND_FUNCTION(ma_convert_frames_ex);
ZEND_FUNCTION(ma_data_source_config_init);
ZEND_FUNCTION(ma_data_source_init);
ZEND_FUNCTION(ma_data_source_uninit);
ZEND_FUNCTION(ma_data_source_read_pcm_frames);
ZEND_FUNCTION(ma_data_source_seek_pcm_frames);
ZEND_FUNCTION(ma_data_source_seek_to_pcm_frame);
ZEND_FUNCTION(ma_data_source_seek_seconds);
ZEND_FUNCTION(ma_data_source_seek_to_second);
ZEND_FUNCTION(ma_data_source_get_data_format);
ZEND_FUNCTION(ma_data_source_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_data_source_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_data_source_get_cursor_in_seconds);
ZEND_FUNCTION(ma_data_source_get_length_in_seconds);
ZEND_FUNCTION(ma_data_source_set_looping);
ZEND_FUNCTION(ma_data_source_is_looping);
ZEND_FUNCTION(ma_data_source_set_range_in_pcm_frames);
ZEND_FUNCTION(ma_data_source_get_range_in_pcm_frames);
ZEND_FUNCTION(ma_data_source_set_loop_point_in_pcm_frames);
ZEND_FUNCTION(ma_data_source_get_loop_point_in_pcm_frames);
ZEND_FUNCTION(ma_data_source_set_current);
ZEND_FUNCTION(ma_data_source_get_current);
ZEND_FUNCTION(ma_data_source_set_next);
ZEND_FUNCTION(ma_data_source_get_next);
ZEND_FUNCTION(ma_data_source_set_next_callback);
ZEND_FUNCTION(ma_audio_buffer_ref_init);
ZEND_FUNCTION(ma_audio_buffer_ref_uninit);
ZEND_FUNCTION(ma_audio_buffer_ref_set_data);
ZEND_FUNCTION(ma_audio_buffer_ref_read_pcm_frames);
ZEND_FUNCTION(ma_audio_buffer_ref_seek_to_pcm_frame);
ZEND_FUNCTION(ma_audio_buffer_ref_unmap);
ZEND_FUNCTION(ma_audio_buffer_ref_at_end);
ZEND_FUNCTION(ma_audio_buffer_ref_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_audio_buffer_ref_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_audio_buffer_ref_get_available_frames);
ZEND_FUNCTION(ma_audio_buffer_config_init);
ZEND_FUNCTION(ma_audio_buffer_init);
ZEND_FUNCTION(ma_audio_buffer_init_copy);
ZEND_FUNCTION(ma_audio_buffer_uninit);
ZEND_FUNCTION(ma_audio_buffer_read_pcm_frames);
ZEND_FUNCTION(ma_audio_buffer_seek_to_pcm_frame);
ZEND_FUNCTION(ma_audio_buffer_unmap);
ZEND_FUNCTION(ma_audio_buffer_at_end);
ZEND_FUNCTION(ma_audio_buffer_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_audio_buffer_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_audio_buffer_get_available_frames);
ZEND_FUNCTION(ma_paged_audio_buffer_data_init);
ZEND_FUNCTION(ma_paged_audio_buffer_data_uninit);
ZEND_FUNCTION(ma_paged_audio_buffer_data_get_head);
ZEND_FUNCTION(ma_paged_audio_buffer_data_get_tail);
ZEND_FUNCTION(ma_paged_audio_buffer_data_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_paged_audio_buffer_data_allocate_and_append_page);
ZEND_FUNCTION(ma_paged_audio_buffer_config_init);
ZEND_FUNCTION(ma_paged_audio_buffer_init);
ZEND_FUNCTION(ma_paged_audio_buffer_uninit);
ZEND_FUNCTION(ma_paged_audio_buffer_read_pcm_frames);
ZEND_FUNCTION(ma_paged_audio_buffer_seek_to_pcm_frame);
ZEND_FUNCTION(ma_paged_audio_buffer_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_paged_audio_buffer_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_rb_init_ex);
ZEND_FUNCTION(ma_rb_init);
ZEND_FUNCTION(ma_rb_uninit);
ZEND_FUNCTION(ma_rb_reset);
ZEND_FUNCTION(ma_rb_commit_read);
ZEND_FUNCTION(ma_rb_seek_read);
ZEND_FUNCTION(ma_rb_seek_write);
ZEND_FUNCTION(ma_rb_pointer_distance);
ZEND_FUNCTION(ma_rb_available_read);
ZEND_FUNCTION(ma_rb_available_write);
ZEND_FUNCTION(ma_rb_get_subbuffer_size);
ZEND_FUNCTION(ma_rb_get_subbuffer_stride);
ZEND_FUNCTION(ma_rb_get_subbuffer_offset);
ZEND_FUNCTION(ma_pcm_rb_init_ex);
ZEND_FUNCTION(ma_pcm_rb_init);
ZEND_FUNCTION(ma_pcm_rb_uninit);
ZEND_FUNCTION(ma_pcm_rb_reset);
ZEND_FUNCTION(ma_pcm_rb_commit_read);
ZEND_FUNCTION(ma_pcm_rb_seek_read);
ZEND_FUNCTION(ma_pcm_rb_seek_write);
ZEND_FUNCTION(ma_pcm_rb_pointer_distance);
ZEND_FUNCTION(ma_pcm_rb_available_read);
ZEND_FUNCTION(ma_pcm_rb_available_write);
ZEND_FUNCTION(ma_pcm_rb_get_subbuffer_size);
ZEND_FUNCTION(ma_pcm_rb_get_subbuffer_stride);
ZEND_FUNCTION(ma_pcm_rb_get_subbuffer_offset);
ZEND_FUNCTION(ma_pcm_rb_get_format);
ZEND_FUNCTION(ma_pcm_rb_get_channels);
ZEND_FUNCTION(ma_pcm_rb_get_sample_rate);
ZEND_FUNCTION(ma_pcm_rb_set_sample_rate);
ZEND_FUNCTION(ma_duplex_rb_init);
ZEND_FUNCTION(ma_duplex_rb_uninit);
ZEND_FUNCTION(ma_result_description);
ZEND_FUNCTION(ma_get_format_name);
ZEND_FUNCTION(ma_blend_f32);
ZEND_FUNCTION(ma_get_bytes_per_sample);
ZEND_FUNCTION(ma_log_level_to_string);
ZEND_FUNCTION(ma_spinlock_lock);
ZEND_FUNCTION(ma_spinlock_lock_noyield);
ZEND_FUNCTION(ma_spinlock_unlock);
ZEND_FUNCTION(ma_mutex_init);
ZEND_FUNCTION(ma_mutex_uninit);
ZEND_FUNCTION(ma_mutex_lock);
ZEND_FUNCTION(ma_mutex_unlock);
ZEND_FUNCTION(ma_event_init);
ZEND_FUNCTION(ma_event_uninit);
ZEND_FUNCTION(ma_event_wait);
ZEND_FUNCTION(ma_event_signal);
ZEND_FUNCTION(ma_semaphore_init);
ZEND_FUNCTION(ma_semaphore_uninit);
ZEND_FUNCTION(ma_semaphore_wait);
ZEND_FUNCTION(ma_semaphore_release);
ZEND_FUNCTION(ma_fence_init);
ZEND_FUNCTION(ma_fence_uninit);
ZEND_FUNCTION(ma_fence_acquire);
ZEND_FUNCTION(ma_fence_release);
ZEND_FUNCTION(ma_fence_wait);
ZEND_FUNCTION(ma_async_notification_signal);
ZEND_FUNCTION(ma_async_notification_poll_init);
ZEND_FUNCTION(ma_async_notification_poll_is_signalled);
ZEND_FUNCTION(ma_async_notification_event_init);
ZEND_FUNCTION(ma_async_notification_event_uninit);
ZEND_FUNCTION(ma_async_notification_event_wait);
ZEND_FUNCTION(ma_async_notification_event_signal);
ZEND_FUNCTION(ma_slot_allocator_config_init);
ZEND_FUNCTION(ma_slot_allocator_get_heap_size);
ZEND_FUNCTION(ma_slot_allocator_init_preallocated);
ZEND_FUNCTION(ma_slot_allocator_init);
ZEND_FUNCTION(ma_slot_allocator_uninit);
ZEND_FUNCTION(ma_slot_allocator_alloc);
ZEND_FUNCTION(ma_slot_allocator_free);
ZEND_FUNCTION(ma_job_init);
ZEND_FUNCTION(ma_job_process);
ZEND_FUNCTION(ma_job_queue_config_init);
ZEND_FUNCTION(ma_job_queue_get_heap_size);
ZEND_FUNCTION(ma_job_queue_init_preallocated);
ZEND_FUNCTION(ma_job_queue_init);
ZEND_FUNCTION(ma_job_queue_uninit);
ZEND_FUNCTION(ma_job_queue_post);
ZEND_FUNCTION(ma_job_queue_next);
ZEND_FUNCTION(ma_device_job_thread_config_init);
ZEND_FUNCTION(ma_device_job_thread_init);
ZEND_FUNCTION(ma_device_job_thread_uninit);
ZEND_FUNCTION(ma_device_job_thread_post);
ZEND_FUNCTION(ma_device_job_thread_next);
ZEND_FUNCTION(ma_device_id_equal);
ZEND_FUNCTION(ma_context_config_init);
ZEND_FUNCTION(ma_context_init);
ZEND_FUNCTION(ma_context_uninit);
ZEND_FUNCTION(ma_context_sizeof);
ZEND_FUNCTION(ma_context_get_log);
ZEND_FUNCTION(ma_context_enumerate_devices);
ZEND_FUNCTION(ma_context_get_device_info);
ZEND_FUNCTION(ma_context_is_loopback_supported);
ZEND_FUNCTION(ma_device_config_init);
ZEND_FUNCTION(ma_device_init);
ZEND_FUNCTION(ma_device_init_ex);
ZEND_FUNCTION(ma_device_uninit);
ZEND_FUNCTION(ma_device_get_context);
ZEND_FUNCTION(ma_device_get_log);
ZEND_FUNCTION(ma_device_get_info);
ZEND_FUNCTION(ma_device_get_name);
ZEND_FUNCTION(ma_device_start);
ZEND_FUNCTION(ma_device_stop);
ZEND_FUNCTION(ma_device_is_started);
ZEND_FUNCTION(ma_device_get_state);
ZEND_FUNCTION(ma_device_post_init);
ZEND_FUNCTION(ma_device_set_master_volume);
ZEND_FUNCTION(ma_device_get_master_volume);
ZEND_FUNCTION(ma_device_set_master_volume_db);
ZEND_FUNCTION(ma_device_get_master_volume_db);
ZEND_FUNCTION(ma_device_handle_backend_data_callback);
ZEND_FUNCTION(ma_calculate_buffer_size_in_frames_from_descriptor);
ZEND_FUNCTION(ma_get_backend_name);
ZEND_FUNCTION(ma_get_backend_from_name);
ZEND_FUNCTION(ma_is_backend_enabled);
ZEND_FUNCTION(ma_get_enabled_backends);
ZEND_FUNCTION(ma_is_loopback_supported);
ZEND_FUNCTION(ma_calculate_buffer_size_in_milliseconds_from_frames);
ZEND_FUNCTION(ma_calculate_buffer_size_in_frames_from_milliseconds);
ZEND_FUNCTION(ma_copy_pcm_frames);
ZEND_FUNCTION(ma_silence_pcm_frames);
ZEND_FUNCTION(ma_clip_samples_u8);
ZEND_FUNCTION(ma_clip_samples_s16);
ZEND_FUNCTION(ma_clip_samples_s24);
ZEND_FUNCTION(ma_clip_samples_s32);
ZEND_FUNCTION(ma_clip_samples_f32);
ZEND_FUNCTION(ma_clip_pcm_frames);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_u8);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_s16);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_s24);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_s32);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_f32);
ZEND_FUNCTION(ma_apply_volume_factor_u8);
ZEND_FUNCTION(ma_apply_volume_factor_s16);
ZEND_FUNCTION(ma_apply_volume_factor_s24);
ZEND_FUNCTION(ma_apply_volume_factor_s32);
ZEND_FUNCTION(ma_apply_volume_factor_f32);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_pcm_frames_u8);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_pcm_frames_s16);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_pcm_frames_s24);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_pcm_frames_s32);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_pcm_frames_f32);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_pcm_frames);
ZEND_FUNCTION(ma_apply_volume_factor_pcm_frames_u8);
ZEND_FUNCTION(ma_apply_volume_factor_pcm_frames_s16);
ZEND_FUNCTION(ma_apply_volume_factor_pcm_frames_s24);
ZEND_FUNCTION(ma_apply_volume_factor_pcm_frames_s32);
ZEND_FUNCTION(ma_apply_volume_factor_pcm_frames_f32);
ZEND_FUNCTION(ma_apply_volume_factor_pcm_frames);
ZEND_FUNCTION(ma_copy_and_apply_volume_factor_per_channel_f32);
ZEND_FUNCTION(ma_copy_and_apply_volume_and_clip_samples_u8);
ZEND_FUNCTION(ma_copy_and_apply_volume_and_clip_samples_s16);
ZEND_FUNCTION(ma_copy_and_apply_volume_and_clip_samples_s24);
ZEND_FUNCTION(ma_copy_and_apply_volume_and_clip_samples_s32);
ZEND_FUNCTION(ma_copy_and_apply_volume_and_clip_samples_f32);
ZEND_FUNCTION(ma_copy_and_apply_volume_and_clip_pcm_frames);
ZEND_FUNCTION(ma_volume_linear_to_db);
ZEND_FUNCTION(ma_volume_db_to_linear);
ZEND_FUNCTION(ma_mix_pcm_frames_f32);
ZEND_FUNCTION(ma_vfs_open_and_read_file);
ZEND_FUNCTION(ma_default_vfs_init);
ZEND_FUNCTION(ma_decoding_backend_config_init);
ZEND_FUNCTION(ma_decoder_config_init);
ZEND_FUNCTION(ma_decoder_config_init_default);
ZEND_FUNCTION(ma_decoder_init);
ZEND_FUNCTION(ma_decoder_init_memory);
ZEND_FUNCTION(ma_decoder_init_vfs);
ZEND_FUNCTION(ma_decoder_init_vfs_w);
ZEND_FUNCTION(ma_decoder_init_file);
ZEND_FUNCTION(ma_decoder_init_file_w);
ZEND_FUNCTION(ma_decoder_uninit);
ZEND_FUNCTION(ma_decoder_read_pcm_frames);
ZEND_FUNCTION(ma_decoder_seek_to_pcm_frame);
ZEND_FUNCTION(ma_decoder_get_data_format);
ZEND_FUNCTION(ma_decoder_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_decoder_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_decoder_get_available_frames);
ZEND_FUNCTION(ma_decode_from_vfs);
ZEND_FUNCTION(ma_decode_file);
ZEND_FUNCTION(ma_decode_memory);
ZEND_FUNCTION(ma_encoder_config_init);
ZEND_FUNCTION(ma_encoder_init);
ZEND_FUNCTION(ma_encoder_init_vfs);
ZEND_FUNCTION(ma_encoder_init_vfs_w);
ZEND_FUNCTION(ma_encoder_init_file);
ZEND_FUNCTION(ma_encoder_init_file_w);
ZEND_FUNCTION(ma_encoder_uninit);
ZEND_FUNCTION(ma_encoder_write_pcm_frames);
ZEND_FUNCTION(ma_waveform_config_init);
ZEND_FUNCTION(ma_waveform_init);
ZEND_FUNCTION(ma_waveform_uninit);
ZEND_FUNCTION(ma_waveform_read_pcm_frames);
ZEND_FUNCTION(ma_waveform_seek_to_pcm_frame);
ZEND_FUNCTION(ma_waveform_set_amplitude);
ZEND_FUNCTION(ma_waveform_set_frequency);
ZEND_FUNCTION(ma_waveform_set_type);
ZEND_FUNCTION(ma_waveform_set_sample_rate);
ZEND_FUNCTION(ma_pulsewave_config_init);
ZEND_FUNCTION(ma_pulsewave_init);
ZEND_FUNCTION(ma_pulsewave_uninit);
ZEND_FUNCTION(ma_pulsewave_read_pcm_frames);
ZEND_FUNCTION(ma_pulsewave_seek_to_pcm_frame);
ZEND_FUNCTION(ma_pulsewave_set_amplitude);
ZEND_FUNCTION(ma_pulsewave_set_frequency);
ZEND_FUNCTION(ma_pulsewave_set_sample_rate);
ZEND_FUNCTION(ma_pulsewave_set_duty_cycle);
ZEND_FUNCTION(ma_noise_config_init);
ZEND_FUNCTION(ma_noise_get_heap_size);
ZEND_FUNCTION(ma_noise_init_preallocated);
ZEND_FUNCTION(ma_noise_init);
ZEND_FUNCTION(ma_noise_uninit);
ZEND_FUNCTION(ma_noise_read_pcm_frames);
ZEND_FUNCTION(ma_noise_set_amplitude);
ZEND_FUNCTION(ma_noise_set_seed);
ZEND_FUNCTION(ma_noise_set_type);
ZEND_FUNCTION(ma_resource_manager_pipeline_notifications_init);
ZEND_FUNCTION(ma_resource_manager_data_source_config_init);
ZEND_FUNCTION(ma_resource_manager_config_init);
ZEND_FUNCTION(ma_resource_manager_init);
ZEND_FUNCTION(ma_resource_manager_uninit);
ZEND_FUNCTION(ma_resource_manager_get_log);
ZEND_FUNCTION(ma_resource_manager_register_file);
ZEND_FUNCTION(ma_resource_manager_register_file_w);
ZEND_FUNCTION(ma_resource_manager_register_decoded_data);
ZEND_FUNCTION(ma_resource_manager_register_decoded_data_w);
ZEND_FUNCTION(ma_resource_manager_register_encoded_data);
ZEND_FUNCTION(ma_resource_manager_register_encoded_data_w);
ZEND_FUNCTION(ma_resource_manager_unregister_file);
ZEND_FUNCTION(ma_resource_manager_unregister_file_w);
ZEND_FUNCTION(ma_resource_manager_unregister_data);
ZEND_FUNCTION(ma_resource_manager_unregister_data_w);
ZEND_FUNCTION(ma_resource_manager_data_buffer_init_ex);
ZEND_FUNCTION(ma_resource_manager_data_buffer_init);
ZEND_FUNCTION(ma_resource_manager_data_buffer_init_w);
ZEND_FUNCTION(ma_resource_manager_data_buffer_init_copy);
ZEND_FUNCTION(ma_resource_manager_data_buffer_uninit);
ZEND_FUNCTION(ma_resource_manager_data_buffer_read_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_buffer_seek_to_pcm_frame);
ZEND_FUNCTION(ma_resource_manager_data_buffer_get_data_format);
ZEND_FUNCTION(ma_resource_manager_data_buffer_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_buffer_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_buffer_result);
ZEND_FUNCTION(ma_resource_manager_data_buffer_set_looping);
ZEND_FUNCTION(ma_resource_manager_data_buffer_is_looping);
ZEND_FUNCTION(ma_resource_manager_data_buffer_get_available_frames);
ZEND_FUNCTION(ma_resource_manager_data_stream_init_ex);
ZEND_FUNCTION(ma_resource_manager_data_stream_init);
ZEND_FUNCTION(ma_resource_manager_data_stream_init_w);
ZEND_FUNCTION(ma_resource_manager_data_stream_uninit);
ZEND_FUNCTION(ma_resource_manager_data_stream_read_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_stream_seek_to_pcm_frame);
ZEND_FUNCTION(ma_resource_manager_data_stream_get_data_format);
ZEND_FUNCTION(ma_resource_manager_data_stream_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_stream_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_stream_result);
ZEND_FUNCTION(ma_resource_manager_data_stream_set_looping);
ZEND_FUNCTION(ma_resource_manager_data_stream_is_looping);
ZEND_FUNCTION(ma_resource_manager_data_stream_get_available_frames);
ZEND_FUNCTION(ma_resource_manager_data_source_init_ex);
ZEND_FUNCTION(ma_resource_manager_data_source_init);
ZEND_FUNCTION(ma_resource_manager_data_source_init_w);
ZEND_FUNCTION(ma_resource_manager_data_source_init_copy);
ZEND_FUNCTION(ma_resource_manager_data_source_uninit);
ZEND_FUNCTION(ma_resource_manager_data_source_read_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_source_seek_to_pcm_frame);
ZEND_FUNCTION(ma_resource_manager_data_source_get_data_format);
ZEND_FUNCTION(ma_resource_manager_data_source_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_source_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_resource_manager_data_source_result);
ZEND_FUNCTION(ma_resource_manager_data_source_set_looping);
ZEND_FUNCTION(ma_resource_manager_data_source_is_looping);
ZEND_FUNCTION(ma_resource_manager_data_source_get_available_frames);
ZEND_FUNCTION(ma_resource_manager_post_job);
ZEND_FUNCTION(ma_resource_manager_post_job_quit);
ZEND_FUNCTION(ma_resource_manager_next_job);
ZEND_FUNCTION(ma_resource_manager_process_job);
ZEND_FUNCTION(ma_resource_manager_process_next_job);
ZEND_FUNCTION(ma_node_config_init);
ZEND_FUNCTION(ma_node_get_heap_size);
ZEND_FUNCTION(ma_node_init_preallocated);
ZEND_FUNCTION(ma_node_init);
ZEND_FUNCTION(ma_node_uninit);
ZEND_FUNCTION(ma_node_get_node_graph);
ZEND_FUNCTION(ma_node_get_input_bus_count);
ZEND_FUNCTION(ma_node_get_output_bus_count);
ZEND_FUNCTION(ma_node_get_input_channels);
ZEND_FUNCTION(ma_node_get_output_channels);
ZEND_FUNCTION(ma_node_attach_output_bus);
ZEND_FUNCTION(ma_node_detach_output_bus);
ZEND_FUNCTION(ma_node_detach_all_output_buses);
ZEND_FUNCTION(ma_node_set_output_bus_volume);
ZEND_FUNCTION(ma_node_get_output_bus_volume);
ZEND_FUNCTION(ma_node_set_state);
ZEND_FUNCTION(ma_node_get_state);
ZEND_FUNCTION(ma_node_set_state_time);
ZEND_FUNCTION(ma_node_get_state_time);
ZEND_FUNCTION(ma_node_get_state_by_time);
ZEND_FUNCTION(ma_node_get_state_by_time_range);
ZEND_FUNCTION(ma_node_get_time);
ZEND_FUNCTION(ma_node_set_time);
ZEND_FUNCTION(ma_node_graph_config_init);
ZEND_FUNCTION(ma_node_graph_init);
ZEND_FUNCTION(ma_node_graph_uninit);
ZEND_FUNCTION(ma_node_graph_get_endpoint);
ZEND_FUNCTION(ma_node_graph_read_pcm_frames);
ZEND_FUNCTION(ma_node_graph_get_channels);
ZEND_FUNCTION(ma_node_graph_get_time);
ZEND_FUNCTION(ma_node_graph_set_time);
ZEND_FUNCTION(ma_node_graph_get_processing_size_in_frames);
ZEND_FUNCTION(ma_data_source_node_config_init);
ZEND_FUNCTION(ma_data_source_node_init);
ZEND_FUNCTION(ma_data_source_node_uninit);
ZEND_FUNCTION(ma_data_source_node_set_looping);
ZEND_FUNCTION(ma_data_source_node_is_looping);
ZEND_FUNCTION(ma_splitter_node_config_init);
ZEND_FUNCTION(ma_splitter_node_init);
ZEND_FUNCTION(ma_splitter_node_uninit);
ZEND_FUNCTION(ma_biquad_node_config_init);
ZEND_FUNCTION(ma_biquad_node_init);
ZEND_FUNCTION(ma_biquad_node_reinit);
ZEND_FUNCTION(ma_biquad_node_uninit);
ZEND_FUNCTION(ma_lpf_node_config_init);
ZEND_FUNCTION(ma_lpf_node_init);
ZEND_FUNCTION(ma_lpf_node_reinit);
ZEND_FUNCTION(ma_lpf_node_uninit);
ZEND_FUNCTION(ma_hpf_node_config_init);
ZEND_FUNCTION(ma_hpf_node_init);
ZEND_FUNCTION(ma_hpf_node_reinit);
ZEND_FUNCTION(ma_hpf_node_uninit);
ZEND_FUNCTION(ma_bpf_node_config_init);
ZEND_FUNCTION(ma_bpf_node_init);
ZEND_FUNCTION(ma_bpf_node_reinit);
ZEND_FUNCTION(ma_bpf_node_uninit);
ZEND_FUNCTION(ma_notch_node_config_init);
ZEND_FUNCTION(ma_notch_node_init);
ZEND_FUNCTION(ma_notch_node_reinit);
ZEND_FUNCTION(ma_notch_node_uninit);
ZEND_FUNCTION(ma_peak_node_config_init);
ZEND_FUNCTION(ma_peak_node_init);
ZEND_FUNCTION(ma_peak_node_reinit);
ZEND_FUNCTION(ma_peak_node_uninit);
ZEND_FUNCTION(ma_loshelf_node_config_init);
ZEND_FUNCTION(ma_loshelf_node_init);
ZEND_FUNCTION(ma_loshelf_node_reinit);
ZEND_FUNCTION(ma_loshelf_node_uninit);
ZEND_FUNCTION(ma_hishelf_node_config_init);
ZEND_FUNCTION(ma_hishelf_node_init);
ZEND_FUNCTION(ma_hishelf_node_reinit);
ZEND_FUNCTION(ma_hishelf_node_uninit);
ZEND_FUNCTION(ma_delay_node_config_init);
ZEND_FUNCTION(ma_delay_node_init);
ZEND_FUNCTION(ma_delay_node_uninit);
ZEND_FUNCTION(ma_delay_node_set_wet);
ZEND_FUNCTION(ma_delay_node_get_wet);
ZEND_FUNCTION(ma_delay_node_set_dry);
ZEND_FUNCTION(ma_delay_node_get_dry);
ZEND_FUNCTION(ma_delay_node_set_decay);
ZEND_FUNCTION(ma_delay_node_get_decay);
ZEND_FUNCTION(ma_engine_node_config_init);
ZEND_FUNCTION(ma_engine_node_get_heap_size);
ZEND_FUNCTION(ma_engine_node_init_preallocated);
ZEND_FUNCTION(ma_engine_node_init);
ZEND_FUNCTION(ma_engine_node_uninit);
ZEND_FUNCTION(ma_sound_config_init);
ZEND_FUNCTION(ma_sound_config_init_2);
ZEND_FUNCTION(ma_sound_group_config_init);
ZEND_FUNCTION(ma_sound_group_config_init_2);
ZEND_FUNCTION(ma_engine_config_init);
ZEND_FUNCTION(ma_engine_init);
ZEND_FUNCTION(ma_engine_uninit);
ZEND_FUNCTION(ma_engine_read_pcm_frames);
ZEND_FUNCTION(ma_engine_get_node_graph);
ZEND_FUNCTION(ma_engine_get_resource_manager);
ZEND_FUNCTION(ma_engine_get_device);
ZEND_FUNCTION(ma_engine_get_log);
ZEND_FUNCTION(ma_engine_get_endpoint);
ZEND_FUNCTION(ma_engine_get_time_in_pcm_frames);
ZEND_FUNCTION(ma_engine_get_time_in_milliseconds);
ZEND_FUNCTION(ma_engine_set_time_in_pcm_frames);
ZEND_FUNCTION(ma_engine_set_time_in_milliseconds);
ZEND_FUNCTION(ma_engine_get_time);
ZEND_FUNCTION(ma_engine_set_time);
ZEND_FUNCTION(ma_engine_get_channels);
ZEND_FUNCTION(ma_engine_get_sample_rate);
ZEND_FUNCTION(ma_engine_start);
ZEND_FUNCTION(ma_engine_stop);
ZEND_FUNCTION(ma_engine_set_volume);
ZEND_FUNCTION(ma_engine_get_volume);
ZEND_FUNCTION(ma_engine_set_gain_db);
ZEND_FUNCTION(ma_engine_get_gain_db);
ZEND_FUNCTION(ma_engine_get_listener_count);
ZEND_FUNCTION(ma_engine_find_closest_listener);
ZEND_FUNCTION(ma_engine_listener_set_position);
ZEND_FUNCTION(ma_engine_listener_get_position);
ZEND_FUNCTION(ma_engine_listener_set_direction);
ZEND_FUNCTION(ma_engine_listener_get_direction);
ZEND_FUNCTION(ma_engine_listener_set_velocity);
ZEND_FUNCTION(ma_engine_listener_get_velocity);
ZEND_FUNCTION(ma_engine_listener_set_cone);
ZEND_FUNCTION(ma_engine_listener_get_cone);
ZEND_FUNCTION(ma_engine_listener_set_world_up);
ZEND_FUNCTION(ma_engine_listener_get_world_up);
ZEND_FUNCTION(ma_engine_listener_set_enabled);
ZEND_FUNCTION(ma_engine_listener_is_enabled);
ZEND_FUNCTION(ma_engine_play_sound_ex);
ZEND_FUNCTION(ma_engine_play_sound);
ZEND_FUNCTION(ma_sound_init_from_file);
ZEND_FUNCTION(ma_sound_init_from_file_w);
ZEND_FUNCTION(ma_sound_init_copy);
ZEND_FUNCTION(ma_sound_init_from_data_source);
ZEND_FUNCTION(ma_sound_init_ex);
ZEND_FUNCTION(ma_sound_uninit);
ZEND_FUNCTION(ma_sound_get_engine);
ZEND_FUNCTION(ma_sound_get_data_source);
ZEND_FUNCTION(ma_sound_start);
ZEND_FUNCTION(ma_sound_stop);
ZEND_FUNCTION(ma_sound_stop_with_fade_in_pcm_frames);
ZEND_FUNCTION(ma_sound_stop_with_fade_in_milliseconds);
ZEND_FUNCTION(ma_sound_reset_start_time);
ZEND_FUNCTION(ma_sound_reset_stop_time);
ZEND_FUNCTION(ma_sound_reset_fade);
ZEND_FUNCTION(ma_sound_reset_stop_time_and_fade);
ZEND_FUNCTION(ma_sound_set_volume);
ZEND_FUNCTION(ma_sound_get_volume);
ZEND_FUNCTION(ma_sound_set_pan);
ZEND_FUNCTION(ma_sound_get_pan);
ZEND_FUNCTION(ma_sound_set_pan_mode);
ZEND_FUNCTION(ma_sound_get_pan_mode);
ZEND_FUNCTION(ma_sound_set_pitch);
ZEND_FUNCTION(ma_sound_get_pitch);
ZEND_FUNCTION(ma_sound_set_spatialization_enabled);
ZEND_FUNCTION(ma_sound_is_spatialization_enabled);
ZEND_FUNCTION(ma_sound_set_pinned_listener_index);
ZEND_FUNCTION(ma_sound_get_pinned_listener_index);
ZEND_FUNCTION(ma_sound_get_listener_index);
ZEND_FUNCTION(ma_sound_get_direction_to_listener);
ZEND_FUNCTION(ma_sound_set_position);
ZEND_FUNCTION(ma_sound_get_position);
ZEND_FUNCTION(ma_sound_set_direction);
ZEND_FUNCTION(ma_sound_get_direction);
ZEND_FUNCTION(ma_sound_set_velocity);
ZEND_FUNCTION(ma_sound_get_velocity);
ZEND_FUNCTION(ma_sound_set_attenuation_model);
ZEND_FUNCTION(ma_sound_get_attenuation_model);
ZEND_FUNCTION(ma_sound_set_positioning);
ZEND_FUNCTION(ma_sound_get_positioning);
ZEND_FUNCTION(ma_sound_set_rolloff);
ZEND_FUNCTION(ma_sound_get_rolloff);
ZEND_FUNCTION(ma_sound_set_min_gain);
ZEND_FUNCTION(ma_sound_get_min_gain);
ZEND_FUNCTION(ma_sound_set_max_gain);
ZEND_FUNCTION(ma_sound_get_max_gain);
ZEND_FUNCTION(ma_sound_set_min_distance);
ZEND_FUNCTION(ma_sound_get_min_distance);
ZEND_FUNCTION(ma_sound_set_max_distance);
ZEND_FUNCTION(ma_sound_get_max_distance);
ZEND_FUNCTION(ma_sound_set_cone);
ZEND_FUNCTION(ma_sound_get_cone);
ZEND_FUNCTION(ma_sound_set_doppler_factor);
ZEND_FUNCTION(ma_sound_get_doppler_factor);
ZEND_FUNCTION(ma_sound_set_directional_attenuation_factor);
ZEND_FUNCTION(ma_sound_get_directional_attenuation_factor);
ZEND_FUNCTION(ma_sound_set_fade_in_pcm_frames);
ZEND_FUNCTION(ma_sound_set_fade_in_milliseconds);
ZEND_FUNCTION(ma_sound_set_fade_start_in_pcm_frames);
ZEND_FUNCTION(ma_sound_set_fade_start_in_milliseconds);
ZEND_FUNCTION(ma_sound_get_current_fade_volume);
ZEND_FUNCTION(ma_sound_set_start_time_in_pcm_frames);
ZEND_FUNCTION(ma_sound_set_start_time_in_milliseconds);
ZEND_FUNCTION(ma_sound_set_stop_time_in_pcm_frames);
ZEND_FUNCTION(ma_sound_set_stop_time_in_milliseconds);
ZEND_FUNCTION(ma_sound_set_stop_time_with_fade_in_pcm_frames);
ZEND_FUNCTION(ma_sound_set_stop_time_with_fade_in_milliseconds);
ZEND_FUNCTION(ma_sound_is_playing);
ZEND_FUNCTION(ma_sound_get_time_in_pcm_frames);
ZEND_FUNCTION(ma_sound_get_time_in_milliseconds);
ZEND_FUNCTION(ma_sound_set_looping);
ZEND_FUNCTION(ma_sound_is_looping);
ZEND_FUNCTION(ma_sound_at_end);
ZEND_FUNCTION(ma_sound_seek_to_pcm_frame);
ZEND_FUNCTION(ma_sound_seek_to_second);
ZEND_FUNCTION(ma_sound_get_data_format);
ZEND_FUNCTION(ma_sound_get_cursor_in_pcm_frames);
ZEND_FUNCTION(ma_sound_get_length_in_pcm_frames);
ZEND_FUNCTION(ma_sound_get_cursor_in_seconds);
ZEND_FUNCTION(ma_sound_get_length_in_seconds);
ZEND_FUNCTION(ma_sound_set_end_callback);
ZEND_FUNCTION(ma_sound_group_init);
ZEND_FUNCTION(ma_sound_group_init_ex);
ZEND_FUNCTION(ma_sound_group_uninit);
ZEND_FUNCTION(ma_sound_group_get_engine);
ZEND_FUNCTION(ma_sound_group_start);
ZEND_FUNCTION(ma_sound_group_stop);
ZEND_FUNCTION(ma_sound_group_set_volume);
ZEND_FUNCTION(ma_sound_group_get_volume);
ZEND_FUNCTION(ma_sound_group_set_pan);
ZEND_FUNCTION(ma_sound_group_get_pan);
ZEND_FUNCTION(ma_sound_group_set_pan_mode);
ZEND_FUNCTION(ma_sound_group_get_pan_mode);
ZEND_FUNCTION(ma_sound_group_set_pitch);
ZEND_FUNCTION(ma_sound_group_get_pitch);
ZEND_FUNCTION(ma_sound_group_set_spatialization_enabled);
ZEND_FUNCTION(ma_sound_group_is_spatialization_enabled);
ZEND_FUNCTION(ma_sound_group_set_pinned_listener_index);
ZEND_FUNCTION(ma_sound_group_get_pinned_listener_index);
ZEND_FUNCTION(ma_sound_group_get_listener_index);
ZEND_FUNCTION(ma_sound_group_get_direction_to_listener);
ZEND_FUNCTION(ma_sound_group_set_position);
ZEND_FUNCTION(ma_sound_group_get_position);
ZEND_FUNCTION(ma_sound_group_set_direction);
ZEND_FUNCTION(ma_sound_group_get_direction);
ZEND_FUNCTION(ma_sound_group_set_velocity);
ZEND_FUNCTION(ma_sound_group_get_velocity);
ZEND_FUNCTION(ma_sound_group_set_attenuation_model);
ZEND_FUNCTION(ma_sound_group_get_attenuation_model);
ZEND_FUNCTION(ma_sound_group_set_positioning);
ZEND_FUNCTION(ma_sound_group_get_positioning);
ZEND_FUNCTION(ma_sound_group_set_rolloff);
ZEND_FUNCTION(ma_sound_group_get_rolloff);
ZEND_FUNCTION(ma_sound_group_set_min_gain);
ZEND_FUNCTION(ma_sound_group_get_min_gain);
ZEND_FUNCTION(ma_sound_group_set_max_gain);
ZEND_FUNCTION(ma_sound_group_get_max_gain);
ZEND_FUNCTION(ma_sound_group_set_min_distance);
ZEND_FUNCTION(ma_sound_group_get_min_distance);
ZEND_FUNCTION(ma_sound_group_set_max_distance);
ZEND_FUNCTION(ma_sound_group_get_max_distance);
ZEND_FUNCTION(ma_sound_group_set_cone);
ZEND_FUNCTION(ma_sound_group_get_cone);
ZEND_FUNCTION(ma_sound_group_set_doppler_factor);
ZEND_FUNCTION(ma_sound_group_get_doppler_factor);
ZEND_FUNCTION(ma_sound_group_set_directional_attenuation_factor);
ZEND_FUNCTION(ma_sound_group_get_directional_attenuation_factor);
ZEND_FUNCTION(ma_sound_group_set_fade_in_pcm_frames);
ZEND_FUNCTION(ma_sound_group_set_fade_in_milliseconds);
ZEND_FUNCTION(ma_sound_group_get_current_fade_volume);
ZEND_FUNCTION(ma_sound_group_set_start_time_in_pcm_frames);
ZEND_FUNCTION(ma_sound_group_set_start_time_in_milliseconds);
ZEND_FUNCTION(ma_sound_group_set_stop_time_in_pcm_frames);
ZEND_FUNCTION(ma_sound_group_set_stop_time_in_milliseconds);
ZEND_FUNCTION(ma_sound_group_is_playing);
ZEND_FUNCTION(ma_sound_group_get_time_in_pcm_frames);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(ma_version, arginfo_ma_version)
	ZEND_FE(ma_version_string, arginfo_ma_version_string)
	ZEND_FE(ma_log_init, arginfo_ma_log_init)
	ZEND_FE(ma_log_uninit, arginfo_ma_log_uninit)
	ZEND_FE(ma_log_post, arginfo_ma_log_post)
	ZEND_FE(ma_biquad_config_init, arginfo_ma_biquad_config_init)
	ZEND_FE(ma_biquad_get_heap_size, arginfo_ma_biquad_get_heap_size)
	ZEND_FE(ma_biquad_init_preallocated, arginfo_ma_biquad_init_preallocated)
	ZEND_FE(ma_biquad_init, arginfo_ma_biquad_init)
	ZEND_FE(ma_biquad_uninit, arginfo_ma_biquad_uninit)
	ZEND_FE(ma_biquad_reinit, arginfo_ma_biquad_reinit)
	ZEND_FE(ma_biquad_clear_cache, arginfo_ma_biquad_clear_cache)
	ZEND_FE(ma_biquad_process_pcm_frames, arginfo_ma_biquad_process_pcm_frames)
	ZEND_FE(ma_biquad_get_latency, arginfo_ma_biquad_get_latency)
	ZEND_FE(ma_lpf1_config_init, arginfo_ma_lpf1_config_init)
	ZEND_FE(ma_lpf2_config_init, arginfo_ma_lpf2_config_init)
	ZEND_FE(ma_lpf1_get_heap_size, arginfo_ma_lpf1_get_heap_size)
	ZEND_FE(ma_lpf1_init_preallocated, arginfo_ma_lpf1_init_preallocated)
	ZEND_FE(ma_lpf1_init, arginfo_ma_lpf1_init)
	ZEND_FE(ma_lpf1_uninit, arginfo_ma_lpf1_uninit)
	ZEND_FE(ma_lpf1_reinit, arginfo_ma_lpf1_reinit)
	ZEND_FE(ma_lpf1_clear_cache, arginfo_ma_lpf1_clear_cache)
	ZEND_FE(ma_lpf1_process_pcm_frames, arginfo_ma_lpf1_process_pcm_frames)
	ZEND_FE(ma_lpf1_get_latency, arginfo_ma_lpf1_get_latency)
	ZEND_FE(ma_lpf2_get_heap_size, arginfo_ma_lpf2_get_heap_size)
	ZEND_FE(ma_lpf2_init_preallocated, arginfo_ma_lpf2_init_preallocated)
	ZEND_FE(ma_lpf2_init, arginfo_ma_lpf2_init)
	ZEND_FE(ma_lpf2_uninit, arginfo_ma_lpf2_uninit)
	ZEND_FE(ma_lpf2_reinit, arginfo_ma_lpf2_reinit)
	ZEND_FE(ma_lpf2_clear_cache, arginfo_ma_lpf2_clear_cache)
	ZEND_FE(ma_lpf2_process_pcm_frames, arginfo_ma_lpf2_process_pcm_frames)
	ZEND_FE(ma_lpf2_get_latency, arginfo_ma_lpf2_get_latency)
	ZEND_FE(ma_lpf_config_init, arginfo_ma_lpf_config_init)
	ZEND_FE(ma_lpf_get_heap_size, arginfo_ma_lpf_get_heap_size)
	ZEND_FE(ma_lpf_init_preallocated, arginfo_ma_lpf_init_preallocated)
	ZEND_FE(ma_lpf_init, arginfo_ma_lpf_init)
	ZEND_FE(ma_lpf_uninit, arginfo_ma_lpf_uninit)
	ZEND_FE(ma_lpf_reinit, arginfo_ma_lpf_reinit)
	ZEND_FE(ma_lpf_clear_cache, arginfo_ma_lpf_clear_cache)
	ZEND_FE(ma_lpf_process_pcm_frames, arginfo_ma_lpf_process_pcm_frames)
	ZEND_FE(ma_lpf_get_latency, arginfo_ma_lpf_get_latency)
	ZEND_FE(ma_hpf1_config_init, arginfo_ma_hpf1_config_init)
	ZEND_FE(ma_hpf2_config_init, arginfo_ma_hpf2_config_init)
	ZEND_FE(ma_hpf1_get_heap_size, arginfo_ma_hpf1_get_heap_size)
	ZEND_FE(ma_hpf1_init_preallocated, arginfo_ma_hpf1_init_preallocated)
	ZEND_FE(ma_hpf1_init, arginfo_ma_hpf1_init)
	ZEND_FE(ma_hpf1_uninit, arginfo_ma_hpf1_uninit)
	ZEND_FE(ma_hpf1_reinit, arginfo_ma_hpf1_reinit)
	ZEND_FE(ma_hpf1_process_pcm_frames, arginfo_ma_hpf1_process_pcm_frames)
	ZEND_FE(ma_hpf1_get_latency, arginfo_ma_hpf1_get_latency)
	ZEND_FE(ma_hpf2_get_heap_size, arginfo_ma_hpf2_get_heap_size)
	ZEND_FE(ma_hpf2_init_preallocated, arginfo_ma_hpf2_init_preallocated)
	ZEND_FE(ma_hpf2_init, arginfo_ma_hpf2_init)
	ZEND_FE(ma_hpf2_uninit, arginfo_ma_hpf2_uninit)
	ZEND_FE(ma_hpf2_reinit, arginfo_ma_hpf2_reinit)
	ZEND_FE(ma_hpf2_process_pcm_frames, arginfo_ma_hpf2_process_pcm_frames)
	ZEND_FE(ma_hpf2_get_latency, arginfo_ma_hpf2_get_latency)
	ZEND_FE(ma_hpf_config_init, arginfo_ma_hpf_config_init)
	ZEND_FE(ma_hpf_get_heap_size, arginfo_ma_hpf_get_heap_size)
	ZEND_FE(ma_hpf_init_preallocated, arginfo_ma_hpf_init_preallocated)
	ZEND_FE(ma_hpf_init, arginfo_ma_hpf_init)
	ZEND_FE(ma_hpf_uninit, arginfo_ma_hpf_uninit)
	ZEND_FE(ma_hpf_reinit, arginfo_ma_hpf_reinit)
	ZEND_FE(ma_hpf_process_pcm_frames, arginfo_ma_hpf_process_pcm_frames)
	ZEND_FE(ma_hpf_get_latency, arginfo_ma_hpf_get_latency)
	ZEND_FE(ma_bpf2_config_init, arginfo_ma_bpf2_config_init)
	ZEND_FE(ma_bpf2_get_heap_size, arginfo_ma_bpf2_get_heap_size)
	ZEND_FE(ma_bpf2_init_preallocated, arginfo_ma_bpf2_init_preallocated)
	ZEND_FE(ma_bpf2_init, arginfo_ma_bpf2_init)
	ZEND_FE(ma_bpf2_uninit, arginfo_ma_bpf2_uninit)
	ZEND_FE(ma_bpf2_reinit, arginfo_ma_bpf2_reinit)
	ZEND_FE(ma_bpf2_process_pcm_frames, arginfo_ma_bpf2_process_pcm_frames)
	ZEND_FE(ma_bpf2_get_latency, arginfo_ma_bpf2_get_latency)
	ZEND_FE(ma_bpf_config_init, arginfo_ma_bpf_config_init)
	ZEND_FE(ma_bpf_get_heap_size, arginfo_ma_bpf_get_heap_size)
	ZEND_FE(ma_bpf_init_preallocated, arginfo_ma_bpf_init_preallocated)
	ZEND_FE(ma_bpf_init, arginfo_ma_bpf_init)
	ZEND_FE(ma_bpf_uninit, arginfo_ma_bpf_uninit)
	ZEND_FE(ma_bpf_reinit, arginfo_ma_bpf_reinit)
	ZEND_FE(ma_bpf_process_pcm_frames, arginfo_ma_bpf_process_pcm_frames)
	ZEND_FE(ma_bpf_get_latency, arginfo_ma_bpf_get_latency)
	ZEND_FE(ma_notch2_config_init, arginfo_ma_notch2_config_init)
	ZEND_FE(ma_notch2_get_heap_size, arginfo_ma_notch2_get_heap_size)
	ZEND_FE(ma_notch2_init_preallocated, arginfo_ma_notch2_init_preallocated)
	ZEND_FE(ma_notch2_init, arginfo_ma_notch2_init)
	ZEND_FE(ma_notch2_uninit, arginfo_ma_notch2_uninit)
	ZEND_FE(ma_notch2_reinit, arginfo_ma_notch2_reinit)
	ZEND_FE(ma_notch2_process_pcm_frames, arginfo_ma_notch2_process_pcm_frames)
	ZEND_FE(ma_notch2_get_latency, arginfo_ma_notch2_get_latency)
	ZEND_FE(ma_peak2_config_init, arginfo_ma_peak2_config_init)
	ZEND_FE(ma_peak2_get_heap_size, arginfo_ma_peak2_get_heap_size)
	ZEND_FE(ma_peak2_init_preallocated, arginfo_ma_peak2_init_preallocated)
	ZEND_FE(ma_peak2_init, arginfo_ma_peak2_init)
	ZEND_FE(ma_peak2_uninit, arginfo_ma_peak2_uninit)
	ZEND_FE(ma_peak2_reinit, arginfo_ma_peak2_reinit)
	ZEND_FE(ma_peak2_process_pcm_frames, arginfo_ma_peak2_process_pcm_frames)
	ZEND_FE(ma_peak2_get_latency, arginfo_ma_peak2_get_latency)
	ZEND_FE(ma_loshelf2_config_init, arginfo_ma_loshelf2_config_init)
	ZEND_FE(ma_loshelf2_get_heap_size, arginfo_ma_loshelf2_get_heap_size)
	ZEND_FE(ma_loshelf2_init_preallocated, arginfo_ma_loshelf2_init_preallocated)
	ZEND_FE(ma_loshelf2_init, arginfo_ma_loshelf2_init)
	ZEND_FE(ma_loshelf2_uninit, arginfo_ma_loshelf2_uninit)
	ZEND_FE(ma_loshelf2_reinit, arginfo_ma_loshelf2_reinit)
	ZEND_FE(ma_loshelf2_process_pcm_frames, arginfo_ma_loshelf2_process_pcm_frames)
	ZEND_FE(ma_loshelf2_get_latency, arginfo_ma_loshelf2_get_latency)
	ZEND_FE(ma_hishelf2_config_init, arginfo_ma_hishelf2_config_init)
	ZEND_FE(ma_hishelf2_get_heap_size, arginfo_ma_hishelf2_get_heap_size)
	ZEND_FE(ma_hishelf2_init_preallocated, arginfo_ma_hishelf2_init_preallocated)
	ZEND_FE(ma_hishelf2_init, arginfo_ma_hishelf2_init)
	ZEND_FE(ma_hishelf2_uninit, arginfo_ma_hishelf2_uninit)
	ZEND_FE(ma_hishelf2_reinit, arginfo_ma_hishelf2_reinit)
	ZEND_FE(ma_hishelf2_process_pcm_frames, arginfo_ma_hishelf2_process_pcm_frames)
	ZEND_FE(ma_hishelf2_get_latency, arginfo_ma_hishelf2_get_latency)
	ZEND_FE(ma_delay_config_init, arginfo_ma_delay_config_init)
	ZEND_FE(ma_delay_init, arginfo_ma_delay_init)
	ZEND_FE(ma_delay_uninit, arginfo_ma_delay_uninit)
	ZEND_FE(ma_delay_process_pcm_frames, arginfo_ma_delay_process_pcm_frames)
	ZEND_FE(ma_delay_set_wet, arginfo_ma_delay_set_wet)
	ZEND_FE(ma_delay_get_wet, arginfo_ma_delay_get_wet)
	ZEND_FE(ma_delay_set_dry, arginfo_ma_delay_set_dry)
	ZEND_FE(ma_delay_get_dry, arginfo_ma_delay_get_dry)
	ZEND_FE(ma_delay_set_decay, arginfo_ma_delay_set_decay)
	ZEND_FE(ma_delay_get_decay, arginfo_ma_delay_get_decay)
	ZEND_FE(ma_gainer_config_init, arginfo_ma_gainer_config_init)
	ZEND_FE(ma_gainer_get_heap_size, arginfo_ma_gainer_get_heap_size)
	ZEND_FE(ma_gainer_init_preallocated, arginfo_ma_gainer_init_preallocated)
	ZEND_FE(ma_gainer_init, arginfo_ma_gainer_init)
	ZEND_FE(ma_gainer_uninit, arginfo_ma_gainer_uninit)
	ZEND_FE(ma_gainer_process_pcm_frames, arginfo_ma_gainer_process_pcm_frames)
	ZEND_FE(ma_gainer_set_gain, arginfo_ma_gainer_set_gain)
	ZEND_FE(ma_gainer_set_gains, arginfo_ma_gainer_set_gains)
	ZEND_FE(ma_gainer_set_master_volume, arginfo_ma_gainer_set_master_volume)
	ZEND_FE(ma_gainer_get_master_volume, arginfo_ma_gainer_get_master_volume)
	ZEND_FE(ma_panner_config_init, arginfo_ma_panner_config_init)
	ZEND_FE(ma_panner_init, arginfo_ma_panner_init)
	ZEND_FE(ma_panner_process_pcm_frames, arginfo_ma_panner_process_pcm_frames)
	ZEND_FE(ma_panner_set_mode, arginfo_ma_panner_set_mode)
	ZEND_FE(ma_panner_get_mode, arginfo_ma_panner_get_mode)
	ZEND_FE(ma_panner_set_pan, arginfo_ma_panner_set_pan)
	ZEND_FE(ma_panner_get_pan, arginfo_ma_panner_get_pan)
	ZEND_FE(ma_fader_config_init, arginfo_ma_fader_config_init)
	ZEND_FE(ma_fader_init, arginfo_ma_fader_init)
	ZEND_FE(ma_fader_process_pcm_frames, arginfo_ma_fader_process_pcm_frames)
	ZEND_FE(ma_fader_get_data_format, arginfo_ma_fader_get_data_format)
	ZEND_FE(ma_fader_set_fade, arginfo_ma_fader_set_fade)
	ZEND_FE(ma_fader_set_fade_ex, arginfo_ma_fader_set_fade_ex)
	ZEND_FE(ma_fader_get_current_volume, arginfo_ma_fader_get_current_volume)
	ZEND_FE(ma_spatializer_listener_config_init, arginfo_ma_spatializer_listener_config_init)
	ZEND_FE(ma_spatializer_listener_get_heap_size, arginfo_ma_spatializer_listener_get_heap_size)
	ZEND_FE(ma_spatializer_listener_init_preallocated, arginfo_ma_spatializer_listener_init_preallocated)
	ZEND_FE(ma_spatializer_listener_init, arginfo_ma_spatializer_listener_init)
	ZEND_FE(ma_spatializer_listener_uninit, arginfo_ma_spatializer_listener_uninit)
	ZEND_FE(ma_spatializer_listener_get_channel_map, arginfo_ma_spatializer_listener_get_channel_map)
	ZEND_FE(ma_spatializer_listener_set_cone, arginfo_ma_spatializer_listener_set_cone)
	ZEND_FE(ma_spatializer_listener_get_cone, arginfo_ma_spatializer_listener_get_cone)
	ZEND_FE(ma_spatializer_listener_set_position, arginfo_ma_spatializer_listener_set_position)
	ZEND_FE(ma_spatializer_listener_get_position, arginfo_ma_spatializer_listener_get_position)
	ZEND_FE(ma_spatializer_listener_set_direction, arginfo_ma_spatializer_listener_set_direction)
	ZEND_FE(ma_spatializer_listener_get_direction, arginfo_ma_spatializer_listener_get_direction)
	ZEND_FE(ma_spatializer_listener_set_velocity, arginfo_ma_spatializer_listener_set_velocity)
	ZEND_FE(ma_spatializer_listener_get_velocity, arginfo_ma_spatializer_listener_get_velocity)
	ZEND_FE(ma_spatializer_listener_set_speed_of_sound, arginfo_ma_spatializer_listener_set_speed_of_sound)
	ZEND_FE(ma_spatializer_listener_get_speed_of_sound, arginfo_ma_spatializer_listener_get_speed_of_sound)
	ZEND_FE(ma_spatializer_listener_set_world_up, arginfo_ma_spatializer_listener_set_world_up)
	ZEND_FE(ma_spatializer_listener_get_world_up, arginfo_ma_spatializer_listener_get_world_up)
	ZEND_FE(ma_spatializer_listener_set_enabled, arginfo_ma_spatializer_listener_set_enabled)
	ZEND_FE(ma_spatializer_listener_is_enabled, arginfo_ma_spatializer_listener_is_enabled)
	ZEND_FE(ma_spatializer_config_init, arginfo_ma_spatializer_config_init)
	ZEND_FE(ma_spatializer_get_heap_size, arginfo_ma_spatializer_get_heap_size)
	ZEND_FE(ma_spatializer_init_preallocated, arginfo_ma_spatializer_init_preallocated)
	ZEND_FE(ma_spatializer_init, arginfo_ma_spatializer_init)
	ZEND_FE(ma_spatializer_uninit, arginfo_ma_spatializer_uninit)
	ZEND_FE(ma_spatializer_process_pcm_frames, arginfo_ma_spatializer_process_pcm_frames)
	ZEND_FE(ma_spatializer_set_master_volume, arginfo_ma_spatializer_set_master_volume)
	ZEND_FE(ma_spatializer_get_master_volume, arginfo_ma_spatializer_get_master_volume)
	ZEND_FE(ma_spatializer_get_input_channels, arginfo_ma_spatializer_get_input_channels)
	ZEND_FE(ma_spatializer_get_output_channels, arginfo_ma_spatializer_get_output_channels)
	ZEND_FE(ma_spatializer_set_attenuation_model, arginfo_ma_spatializer_set_attenuation_model)
	ZEND_FE(ma_spatializer_get_attenuation_model, arginfo_ma_spatializer_get_attenuation_model)
	ZEND_FE(ma_spatializer_set_positioning, arginfo_ma_spatializer_set_positioning)
	ZEND_FE(ma_spatializer_get_positioning, arginfo_ma_spatializer_get_positioning)
	ZEND_FE(ma_spatializer_set_rolloff, arginfo_ma_spatializer_set_rolloff)
	ZEND_FE(ma_spatializer_get_rolloff, arginfo_ma_spatializer_get_rolloff)
	ZEND_FE(ma_spatializer_set_min_gain, arginfo_ma_spatializer_set_min_gain)
	ZEND_FE(ma_spatializer_get_min_gain, arginfo_ma_spatializer_get_min_gain)
	ZEND_FE(ma_spatializer_set_max_gain, arginfo_ma_spatializer_set_max_gain)
	ZEND_FE(ma_spatializer_get_max_gain, arginfo_ma_spatializer_get_max_gain)
	ZEND_FE(ma_spatializer_set_min_distance, arginfo_ma_spatializer_set_min_distance)
	ZEND_FE(ma_spatializer_get_min_distance, arginfo_ma_spatializer_get_min_distance)
	ZEND_FE(ma_spatializer_set_max_distance, arginfo_ma_spatializer_set_max_distance)
	ZEND_FE(ma_spatializer_get_max_distance, arginfo_ma_spatializer_get_max_distance)
	ZEND_FE(ma_spatializer_set_cone, arginfo_ma_spatializer_set_cone)
	ZEND_FE(ma_spatializer_get_cone, arginfo_ma_spatializer_get_cone)
	ZEND_FE(ma_spatializer_set_doppler_factor, arginfo_ma_spatializer_set_doppler_factor)
	ZEND_FE(ma_spatializer_get_doppler_factor, arginfo_ma_spatializer_get_doppler_factor)
	ZEND_FE(ma_spatializer_set_directional_attenuation_factor, arginfo_ma_spatializer_set_directional_attenuation_factor)
	ZEND_FE(ma_spatializer_get_directional_attenuation_factor, arginfo_ma_spatializer_get_directional_attenuation_factor)
	ZEND_FE(ma_spatializer_set_position, arginfo_ma_spatializer_set_position)
	ZEND_FE(ma_spatializer_get_position, arginfo_ma_spatializer_get_position)
	ZEND_FE(ma_spatializer_set_direction, arginfo_ma_spatializer_set_direction)
	ZEND_FE(ma_spatializer_get_direction, arginfo_ma_spatializer_get_direction)
	ZEND_FE(ma_spatializer_set_velocity, arginfo_ma_spatializer_set_velocity)
	ZEND_FE(ma_spatializer_get_velocity, arginfo_ma_spatializer_get_velocity)
	ZEND_FE(ma_spatializer_get_relative_position_and_direction, arginfo_ma_spatializer_get_relative_position_and_direction)
	ZEND_FE(ma_linear_resampler_config_init, arginfo_ma_linear_resampler_config_init)
	ZEND_FE(ma_linear_resampler_get_heap_size, arginfo_ma_linear_resampler_get_heap_size)
	ZEND_FE(ma_linear_resampler_init_preallocated, arginfo_ma_linear_resampler_init_preallocated)
	ZEND_FE(ma_linear_resampler_init, arginfo_ma_linear_resampler_init)
	ZEND_FE(ma_linear_resampler_uninit, arginfo_ma_linear_resampler_uninit)
	ZEND_FE(ma_linear_resampler_process_pcm_frames, arginfo_ma_linear_resampler_process_pcm_frames)
	ZEND_FE(ma_linear_resampler_set_rate, arginfo_ma_linear_resampler_set_rate)
	ZEND_FE(ma_linear_resampler_set_rate_ratio, arginfo_ma_linear_resampler_set_rate_ratio)
	ZEND_FE(ma_linear_resampler_get_input_latency, arginfo_ma_linear_resampler_get_input_latency)
	ZEND_FE(ma_linear_resampler_get_output_latency, arginfo_ma_linear_resampler_get_output_latency)
	ZEND_FE(ma_linear_resampler_get_required_input_frame_count, arginfo_ma_linear_resampler_get_required_input_frame_count)
	ZEND_FE(ma_linear_resampler_get_expected_output_frame_count, arginfo_ma_linear_resampler_get_expected_output_frame_count)
	ZEND_FE(ma_linear_resampler_reset, arginfo_ma_linear_resampler_reset)
	ZEND_FE(ma_resampler_config_init, arginfo_ma_resampler_config_init)
	ZEND_FE(ma_resampler_get_heap_size, arginfo_ma_resampler_get_heap_size)
	ZEND_FE(ma_resampler_init_preallocated, arginfo_ma_resampler_init_preallocated)
	ZEND_FE(ma_resampler_init, arginfo_ma_resampler_init)
	ZEND_FE(ma_resampler_uninit, arginfo_ma_resampler_uninit)
	ZEND_FE(ma_resampler_process_pcm_frames, arginfo_ma_resampler_process_pcm_frames)
	ZEND_FE(ma_resampler_set_rate, arginfo_ma_resampler_set_rate)
	ZEND_FE(ma_resampler_set_rate_ratio, arginfo_ma_resampler_set_rate_ratio)
	ZEND_FE(ma_resampler_get_input_latency, arginfo_ma_resampler_get_input_latency)
	ZEND_FE(ma_resampler_get_output_latency, arginfo_ma_resampler_get_output_latency)
	ZEND_FE(ma_resampler_get_required_input_frame_count, arginfo_ma_resampler_get_required_input_frame_count)
	ZEND_FE(ma_resampler_get_expected_output_frame_count, arginfo_ma_resampler_get_expected_output_frame_count)
	ZEND_FE(ma_resampler_reset, arginfo_ma_resampler_reset)
	ZEND_FE(ma_channel_converter_config_init, arginfo_ma_channel_converter_config_init)
	ZEND_FE(ma_channel_converter_get_heap_size, arginfo_ma_channel_converter_get_heap_size)
	ZEND_FE(ma_channel_converter_init_preallocated, arginfo_ma_channel_converter_init_preallocated)
	ZEND_FE(ma_channel_converter_init, arginfo_ma_channel_converter_init)
	ZEND_FE(ma_channel_converter_uninit, arginfo_ma_channel_converter_uninit)
	ZEND_FE(ma_channel_converter_process_pcm_frames, arginfo_ma_channel_converter_process_pcm_frames)
	ZEND_FE(ma_channel_converter_get_input_channel_map, arginfo_ma_channel_converter_get_input_channel_map)
	ZEND_FE(ma_channel_converter_get_output_channel_map, arginfo_ma_channel_converter_get_output_channel_map)
	ZEND_FE(ma_data_converter_config_init_default, arginfo_ma_data_converter_config_init_default)
	ZEND_FE(ma_data_converter_config_init, arginfo_ma_data_converter_config_init)
	ZEND_FE(ma_data_converter_get_heap_size, arginfo_ma_data_converter_get_heap_size)
	ZEND_FE(ma_data_converter_init_preallocated, arginfo_ma_data_converter_init_preallocated)
	ZEND_FE(ma_data_converter_init, arginfo_ma_data_converter_init)
	ZEND_FE(ma_data_converter_uninit, arginfo_ma_data_converter_uninit)
	ZEND_FE(ma_data_converter_process_pcm_frames, arginfo_ma_data_converter_process_pcm_frames)
	ZEND_FE(ma_data_converter_set_rate, arginfo_ma_data_converter_set_rate)
	ZEND_FE(ma_data_converter_set_rate_ratio, arginfo_ma_data_converter_set_rate_ratio)
	ZEND_FE(ma_data_converter_get_input_latency, arginfo_ma_data_converter_get_input_latency)
	ZEND_FE(ma_data_converter_get_output_latency, arginfo_ma_data_converter_get_output_latency)
	ZEND_FE(ma_data_converter_get_required_input_frame_count, arginfo_ma_data_converter_get_required_input_frame_count)
	ZEND_FE(ma_data_converter_get_expected_output_frame_count, arginfo_ma_data_converter_get_expected_output_frame_count)
	ZEND_FE(ma_data_converter_get_input_channel_map, arginfo_ma_data_converter_get_input_channel_map)
	ZEND_FE(ma_data_converter_get_output_channel_map, arginfo_ma_data_converter_get_output_channel_map)
	ZEND_FE(ma_data_converter_reset, arginfo_ma_data_converter_reset)
	ZEND_FE(ma_pcm_u8_to_s16, arginfo_ma_pcm_u8_to_s16)
	ZEND_FE(ma_pcm_u8_to_s24, arginfo_ma_pcm_u8_to_s24)
	ZEND_FE(ma_pcm_u8_to_s32, arginfo_ma_pcm_u8_to_s32)
	ZEND_FE(ma_pcm_u8_to_f32, arginfo_ma_pcm_u8_to_f32)
	ZEND_FE(ma_pcm_s16_to_u8, arginfo_ma_pcm_s16_to_u8)
	ZEND_FE(ma_pcm_s16_to_s24, arginfo_ma_pcm_s16_to_s24)
	ZEND_FE(ma_pcm_s16_to_s32, arginfo_ma_pcm_s16_to_s32)
	ZEND_FE(ma_pcm_s16_to_f32, arginfo_ma_pcm_s16_to_f32)
	ZEND_FE(ma_pcm_s24_to_u8, arginfo_ma_pcm_s24_to_u8)
	ZEND_FE(ma_pcm_s24_to_s16, arginfo_ma_pcm_s24_to_s16)
	ZEND_FE(ma_pcm_s24_to_s32, arginfo_ma_pcm_s24_to_s32)
	ZEND_FE(ma_pcm_s24_to_f32, arginfo_ma_pcm_s24_to_f32)
	ZEND_FE(ma_pcm_s32_to_u8, arginfo_ma_pcm_s32_to_u8)
	ZEND_FE(ma_pcm_s32_to_s16, arginfo_ma_pcm_s32_to_s16)
	ZEND_FE(ma_pcm_s32_to_s24, arginfo_ma_pcm_s32_to_s24)
	ZEND_FE(ma_pcm_s32_to_f32, arginfo_ma_pcm_s32_to_f32)
	ZEND_FE(ma_pcm_f32_to_u8, arginfo_ma_pcm_f32_to_u8)
	ZEND_FE(ma_pcm_f32_to_s16, arginfo_ma_pcm_f32_to_s16)
	ZEND_FE(ma_pcm_f32_to_s24, arginfo_ma_pcm_f32_to_s24)
	ZEND_FE(ma_pcm_f32_to_s32, arginfo_ma_pcm_f32_to_s32)
	ZEND_FE(ma_pcm_convert, arginfo_ma_pcm_convert)
	ZEND_FE(ma_convert_pcm_frames_format, arginfo_ma_convert_pcm_frames_format)
	ZEND_FE(ma_channel_map_get_channel, arginfo_ma_channel_map_get_channel)
	ZEND_FE(ma_channel_map_init_blank, arginfo_ma_channel_map_init_blank)
	ZEND_FE(ma_channel_map_init_standard, arginfo_ma_channel_map_init_standard)
	ZEND_FE(ma_channel_map_copy, arginfo_ma_channel_map_copy)
	ZEND_FE(ma_channel_map_copy_or_default, arginfo_ma_channel_map_copy_or_default)
	ZEND_FE(ma_channel_map_is_valid, arginfo_ma_channel_map_is_valid)
	ZEND_FE(ma_channel_map_is_equal, arginfo_ma_channel_map_is_equal)
	ZEND_FE(ma_channel_map_is_blank, arginfo_ma_channel_map_is_blank)
	ZEND_FE(ma_channel_map_contains_channel_position, arginfo_ma_channel_map_contains_channel_position)
	ZEND_FE(ma_channel_map_find_channel_position, arginfo_ma_channel_map_find_channel_position)
	ZEND_FE(ma_channel_map_to_string, arginfo_ma_channel_map_to_string)
	ZEND_FE(ma_channel_position_to_string, arginfo_ma_channel_position_to_string)
	ZEND_FE(ma_convert_frames, arginfo_ma_convert_frames)
	ZEND_FE(ma_convert_frames_ex, arginfo_ma_convert_frames_ex)
	ZEND_FE(ma_data_source_config_init, arginfo_ma_data_source_config_init)
	ZEND_FE(ma_data_source_init, arginfo_ma_data_source_init)
	ZEND_FE(ma_data_source_uninit, arginfo_ma_data_source_uninit)
	ZEND_FE(ma_data_source_read_pcm_frames, arginfo_ma_data_source_read_pcm_frames)
	ZEND_FE(ma_data_source_seek_pcm_frames, arginfo_ma_data_source_seek_pcm_frames)
	ZEND_FE(ma_data_source_seek_to_pcm_frame, arginfo_ma_data_source_seek_to_pcm_frame)
	ZEND_FE(ma_data_source_seek_seconds, arginfo_ma_data_source_seek_seconds)
	ZEND_FE(ma_data_source_seek_to_second, arginfo_ma_data_source_seek_to_second)
	ZEND_FE(ma_data_source_get_data_format, arginfo_ma_data_source_get_data_format)
	ZEND_FE(ma_data_source_get_cursor_in_pcm_frames, arginfo_ma_data_source_get_cursor_in_pcm_frames)
	ZEND_FE(ma_data_source_get_length_in_pcm_frames, arginfo_ma_data_source_get_length_in_pcm_frames)
	ZEND_FE(ma_data_source_get_cursor_in_seconds, arginfo_ma_data_source_get_cursor_in_seconds)
	ZEND_FE(ma_data_source_get_length_in_seconds, arginfo_ma_data_source_get_length_in_seconds)
	ZEND_FE(ma_data_source_set_looping, arginfo_ma_data_source_set_looping)
	ZEND_FE(ma_data_source_is_looping, arginfo_ma_data_source_is_looping)
	ZEND_FE(ma_data_source_set_range_in_pcm_frames, arginfo_ma_data_source_set_range_in_pcm_frames)
	ZEND_FE(ma_data_source_get_range_in_pcm_frames, arginfo_ma_data_source_get_range_in_pcm_frames)
	ZEND_FE(ma_data_source_set_loop_point_in_pcm_frames, arginfo_ma_data_source_set_loop_point_in_pcm_frames)
	ZEND_FE(ma_data_source_get_loop_point_in_pcm_frames, arginfo_ma_data_source_get_loop_point_in_pcm_frames)
	ZEND_FE(ma_data_source_set_current, arginfo_ma_data_source_set_current)
	ZEND_FE(ma_data_source_get_current, arginfo_ma_data_source_get_current)
	ZEND_FE(ma_data_source_set_next, arginfo_ma_data_source_set_next)
	ZEND_FE(ma_data_source_get_next, arginfo_ma_data_source_get_next)
	ZEND_FE(ma_data_source_set_next_callback, arginfo_ma_data_source_set_next_callback)
	ZEND_FE(ma_audio_buffer_ref_init, arginfo_ma_audio_buffer_ref_init)
	ZEND_FE(ma_audio_buffer_ref_uninit, arginfo_ma_audio_buffer_ref_uninit)
	ZEND_FE(ma_audio_buffer_ref_set_data, arginfo_ma_audio_buffer_ref_set_data)
	ZEND_FE(ma_audio_buffer_ref_read_pcm_frames, arginfo_ma_audio_buffer_ref_read_pcm_frames)
	ZEND_FE(ma_audio_buffer_ref_seek_to_pcm_frame, arginfo_ma_audio_buffer_ref_seek_to_pcm_frame)
	ZEND_FE(ma_audio_buffer_ref_unmap, arginfo_ma_audio_buffer_ref_unmap)
	ZEND_FE(ma_audio_buffer_ref_at_end, arginfo_ma_audio_buffer_ref_at_end)
	ZEND_FE(ma_audio_buffer_ref_get_cursor_in_pcm_frames, arginfo_ma_audio_buffer_ref_get_cursor_in_pcm_frames)
	ZEND_FE(ma_audio_buffer_ref_get_length_in_pcm_frames, arginfo_ma_audio_buffer_ref_get_length_in_pcm_frames)
	ZEND_FE(ma_audio_buffer_ref_get_available_frames, arginfo_ma_audio_buffer_ref_get_available_frames)
	ZEND_FE(ma_audio_buffer_config_init, arginfo_ma_audio_buffer_config_init)
	ZEND_FE(ma_audio_buffer_init, arginfo_ma_audio_buffer_init)
	ZEND_FE(ma_audio_buffer_init_copy, arginfo_ma_audio_buffer_init_copy)
	ZEND_FE(ma_audio_buffer_uninit, arginfo_ma_audio_buffer_uninit)
	ZEND_FE(ma_audio_buffer_read_pcm_frames, arginfo_ma_audio_buffer_read_pcm_frames)
	ZEND_FE(ma_audio_buffer_seek_to_pcm_frame, arginfo_ma_audio_buffer_seek_to_pcm_frame)
	ZEND_FE(ma_audio_buffer_unmap, arginfo_ma_audio_buffer_unmap)
	ZEND_FE(ma_audio_buffer_at_end, arginfo_ma_audio_buffer_at_end)
	ZEND_FE(ma_audio_buffer_get_cursor_in_pcm_frames, arginfo_ma_audio_buffer_get_cursor_in_pcm_frames)
	ZEND_FE(ma_audio_buffer_get_length_in_pcm_frames, arginfo_ma_audio_buffer_get_length_in_pcm_frames)
	ZEND_FE(ma_audio_buffer_get_available_frames, arginfo_ma_audio_buffer_get_available_frames)
	ZEND_FE(ma_paged_audio_buffer_data_init, arginfo_ma_paged_audio_buffer_data_init)
	ZEND_FE(ma_paged_audio_buffer_data_uninit, arginfo_ma_paged_audio_buffer_data_uninit)
	ZEND_FE(ma_paged_audio_buffer_data_get_head, arginfo_ma_paged_audio_buffer_data_get_head)
	ZEND_FE(ma_paged_audio_buffer_data_get_tail, arginfo_ma_paged_audio_buffer_data_get_tail)
	ZEND_FE(ma_paged_audio_buffer_data_get_length_in_pcm_frames, arginfo_ma_paged_audio_buffer_data_get_length_in_pcm_frames)
	ZEND_FE(ma_paged_audio_buffer_data_allocate_and_append_page, arginfo_ma_paged_audio_buffer_data_allocate_and_append_page)
	ZEND_FE(ma_paged_audio_buffer_config_init, arginfo_ma_paged_audio_buffer_config_init)
	ZEND_FE(ma_paged_audio_buffer_init, arginfo_ma_paged_audio_buffer_init)
	ZEND_FE(ma_paged_audio_buffer_uninit, arginfo_ma_paged_audio_buffer_uninit)
	ZEND_FE(ma_paged_audio_buffer_read_pcm_frames, arginfo_ma_paged_audio_buffer_read_pcm_frames)
	ZEND_FE(ma_paged_audio_buffer_seek_to_pcm_frame, arginfo_ma_paged_audio_buffer_seek_to_pcm_frame)
	ZEND_FE(ma_paged_audio_buffer_get_cursor_in_pcm_frames, arginfo_ma_paged_audio_buffer_get_cursor_in_pcm_frames)
	ZEND_FE(ma_paged_audio_buffer_get_length_in_pcm_frames, arginfo_ma_paged_audio_buffer_get_length_in_pcm_frames)
	ZEND_FE(ma_rb_init_ex, arginfo_ma_rb_init_ex)
	ZEND_FE(ma_rb_init, arginfo_ma_rb_init)
	ZEND_FE(ma_rb_uninit, arginfo_ma_rb_uninit)
	ZEND_FE(ma_rb_reset, arginfo_ma_rb_reset)
	ZEND_FE(ma_rb_commit_read, arginfo_ma_rb_commit_read)
	ZEND_FE(ma_rb_seek_read, arginfo_ma_rb_seek_read)
	ZEND_FE(ma_rb_seek_write, arginfo_ma_rb_seek_write)
	ZEND_FE(ma_rb_pointer_distance, arginfo_ma_rb_pointer_distance)
	ZEND_FE(ma_rb_available_read, arginfo_ma_rb_available_read)
	ZEND_FE(ma_rb_available_write, arginfo_ma_rb_available_write)
	ZEND_FE(ma_rb_get_subbuffer_size, arginfo_ma_rb_get_subbuffer_size)
	ZEND_FE(ma_rb_get_subbuffer_stride, arginfo_ma_rb_get_subbuffer_stride)
	ZEND_FE(ma_rb_get_subbuffer_offset, arginfo_ma_rb_get_subbuffer_offset)
	ZEND_FE(ma_pcm_rb_init_ex, arginfo_ma_pcm_rb_init_ex)
	ZEND_FE(ma_pcm_rb_init, arginfo_ma_pcm_rb_init)
	ZEND_FE(ma_pcm_rb_uninit, arginfo_ma_pcm_rb_uninit)
	ZEND_FE(ma_pcm_rb_reset, arginfo_ma_pcm_rb_reset)
	ZEND_FE(ma_pcm_rb_commit_read, arginfo_ma_pcm_rb_commit_read)
	ZEND_FE(ma_pcm_rb_seek_read, arginfo_ma_pcm_rb_seek_read)
	ZEND_FE(ma_pcm_rb_seek_write, arginfo_ma_pcm_rb_seek_write)
	ZEND_FE(ma_pcm_rb_pointer_distance, arginfo_ma_pcm_rb_pointer_distance)
	ZEND_FE(ma_pcm_rb_available_read, arginfo_ma_pcm_rb_available_read)
	ZEND_FE(ma_pcm_rb_available_write, arginfo_ma_pcm_rb_available_write)
	ZEND_FE(ma_pcm_rb_get_subbuffer_size, arginfo_ma_pcm_rb_get_subbuffer_size)
	ZEND_FE(ma_pcm_rb_get_subbuffer_stride, arginfo_ma_pcm_rb_get_subbuffer_stride)
	ZEND_FE(ma_pcm_rb_get_subbuffer_offset, arginfo_ma_pcm_rb_get_subbuffer_offset)
	ZEND_FE(ma_pcm_rb_get_format, arginfo_ma_pcm_rb_get_format)
	ZEND_FE(ma_pcm_rb_get_channels, arginfo_ma_pcm_rb_get_channels)
	ZEND_FE(ma_pcm_rb_get_sample_rate, arginfo_ma_pcm_rb_get_sample_rate)
	ZEND_FE(ma_pcm_rb_set_sample_rate, arginfo_ma_pcm_rb_set_sample_rate)
	ZEND_FE(ma_duplex_rb_init, arginfo_ma_duplex_rb_init)
	ZEND_FE(ma_duplex_rb_uninit, arginfo_ma_duplex_rb_uninit)
	ZEND_FE(ma_result_description, arginfo_ma_result_description)
	ZEND_FE(ma_get_format_name, arginfo_ma_get_format_name)
	ZEND_FE(ma_blend_f32, arginfo_ma_blend_f32)
	ZEND_FE(ma_get_bytes_per_sample, arginfo_ma_get_bytes_per_sample)
	ZEND_FE(ma_log_level_to_string, arginfo_ma_log_level_to_string)
	ZEND_FE(ma_spinlock_lock, arginfo_ma_spinlock_lock)
	ZEND_FE(ma_spinlock_lock_noyield, arginfo_ma_spinlock_lock_noyield)
	ZEND_FE(ma_spinlock_unlock, arginfo_ma_spinlock_unlock)
	ZEND_FE(ma_mutex_init, arginfo_ma_mutex_init)
	ZEND_FE(ma_mutex_uninit, arginfo_ma_mutex_uninit)
	ZEND_FE(ma_mutex_lock, arginfo_ma_mutex_lock)
	ZEND_FE(ma_mutex_unlock, arginfo_ma_mutex_unlock)
	ZEND_FE(ma_event_init, arginfo_ma_event_init)
	ZEND_FE(ma_event_uninit, arginfo_ma_event_uninit)
	ZEND_FE(ma_event_wait, arginfo_ma_event_wait)
	ZEND_FE(ma_event_signal, arginfo_ma_event_signal)
	ZEND_FE(ma_semaphore_init, arginfo_ma_semaphore_init)
	ZEND_FE(ma_semaphore_uninit, arginfo_ma_semaphore_uninit)
	ZEND_FE(ma_semaphore_wait, arginfo_ma_semaphore_wait)
	ZEND_FE(ma_semaphore_release, arginfo_ma_semaphore_release)
	ZEND_FE(ma_fence_init, arginfo_ma_fence_init)
	ZEND_FE(ma_fence_uninit, arginfo_ma_fence_uninit)
	ZEND_FE(ma_fence_acquire, arginfo_ma_fence_acquire)
	ZEND_FE(ma_fence_release, arginfo_ma_fence_release)
	ZEND_FE(ma_fence_wait, arginfo_ma_fence_wait)
	ZEND_FE(ma_async_notification_signal, arginfo_ma_async_notification_signal)
	ZEND_FE(ma_async_notification_poll_init, arginfo_ma_async_notification_poll_init)
	ZEND_FE(ma_async_notification_poll_is_signalled, arginfo_ma_async_notification_poll_is_signalled)
	ZEND_FE(ma_async_notification_event_init, arginfo_ma_async_notification_event_init)
	ZEND_FE(ma_async_notification_event_uninit, arginfo_ma_async_notification_event_uninit)
	ZEND_FE(ma_async_notification_event_wait, arginfo_ma_async_notification_event_wait)
	ZEND_FE(ma_async_notification_event_signal, arginfo_ma_async_notification_event_signal)
	ZEND_FE(ma_slot_allocator_config_init, arginfo_ma_slot_allocator_config_init)
	ZEND_FE(ma_slot_allocator_get_heap_size, arginfo_ma_slot_allocator_get_heap_size)
	ZEND_FE(ma_slot_allocator_init_preallocated, arginfo_ma_slot_allocator_init_preallocated)
	ZEND_FE(ma_slot_allocator_init, arginfo_ma_slot_allocator_init)
	ZEND_FE(ma_slot_allocator_uninit, arginfo_ma_slot_allocator_uninit)
	ZEND_FE(ma_slot_allocator_alloc, arginfo_ma_slot_allocator_alloc)
	ZEND_FE(ma_slot_allocator_free, arginfo_ma_slot_allocator_free)
	ZEND_FE(ma_job_init, arginfo_ma_job_init)
	ZEND_FE(ma_job_process, arginfo_ma_job_process)
	ZEND_FE(ma_job_queue_config_init, arginfo_ma_job_queue_config_init)
	ZEND_FE(ma_job_queue_get_heap_size, arginfo_ma_job_queue_get_heap_size)
	ZEND_FE(ma_job_queue_init_preallocated, arginfo_ma_job_queue_init_preallocated)
	ZEND_FE(ma_job_queue_init, arginfo_ma_job_queue_init)
	ZEND_FE(ma_job_queue_uninit, arginfo_ma_job_queue_uninit)
	ZEND_FE(ma_job_queue_post, arginfo_ma_job_queue_post)
	ZEND_FE(ma_job_queue_next, arginfo_ma_job_queue_next)
	ZEND_FE(ma_device_job_thread_config_init, arginfo_ma_device_job_thread_config_init)
	ZEND_FE(ma_device_job_thread_init, arginfo_ma_device_job_thread_init)
	ZEND_FE(ma_device_job_thread_uninit, arginfo_ma_device_job_thread_uninit)
	ZEND_FE(ma_device_job_thread_post, arginfo_ma_device_job_thread_post)
	ZEND_FE(ma_device_job_thread_next, arginfo_ma_device_job_thread_next)
	ZEND_FE(ma_device_id_equal, arginfo_ma_device_id_equal)
	ZEND_FE(ma_context_config_init, arginfo_ma_context_config_init)
	ZEND_FE(ma_context_init, arginfo_ma_context_init)
	ZEND_FE(ma_context_uninit, arginfo_ma_context_uninit)
	ZEND_FE(ma_context_sizeof, arginfo_ma_context_sizeof)
	ZEND_FE(ma_context_get_log, arginfo_ma_context_get_log)
	ZEND_FE(ma_context_enumerate_devices, arginfo_ma_context_enumerate_devices)
	ZEND_FE(ma_context_get_device_info, arginfo_ma_context_get_device_info)
	ZEND_FE(ma_context_is_loopback_supported, arginfo_ma_context_is_loopback_supported)
	ZEND_FE(ma_device_config_init, arginfo_ma_device_config_init)
	ZEND_FE(ma_device_init, arginfo_ma_device_init)
	ZEND_FE(ma_device_init_ex, arginfo_ma_device_init_ex)
	ZEND_FE(ma_device_uninit, arginfo_ma_device_uninit)
	ZEND_FE(ma_device_get_context, arginfo_ma_device_get_context)
	ZEND_FE(ma_device_get_log, arginfo_ma_device_get_log)
	ZEND_FE(ma_device_get_info, arginfo_ma_device_get_info)
	ZEND_FE(ma_device_get_name, arginfo_ma_device_get_name)
	ZEND_FE(ma_device_start, arginfo_ma_device_start)
	ZEND_FE(ma_device_stop, arginfo_ma_device_stop)
	ZEND_FE(ma_device_is_started, arginfo_ma_device_is_started)
	ZEND_FE(ma_device_get_state, arginfo_ma_device_get_state)
	ZEND_FE(ma_device_post_init, arginfo_ma_device_post_init)
	ZEND_FE(ma_device_set_master_volume, arginfo_ma_device_set_master_volume)
	ZEND_FE(ma_device_get_master_volume, arginfo_ma_device_get_master_volume)
	ZEND_FE(ma_device_set_master_volume_db, arginfo_ma_device_set_master_volume_db)
	ZEND_FE(ma_device_get_master_volume_db, arginfo_ma_device_get_master_volume_db)
	ZEND_FE(ma_device_handle_backend_data_callback, arginfo_ma_device_handle_backend_data_callback)
	ZEND_FE(ma_calculate_buffer_size_in_frames_from_descriptor, arginfo_ma_calculate_buffer_size_in_frames_from_descriptor)
	ZEND_FE(ma_get_backend_name, arginfo_ma_get_backend_name)
	ZEND_FE(ma_get_backend_from_name, arginfo_ma_get_backend_from_name)
	ZEND_FE(ma_is_backend_enabled, arginfo_ma_is_backend_enabled)
	ZEND_FE(ma_get_enabled_backends, arginfo_ma_get_enabled_backends)
	ZEND_FE(ma_is_loopback_supported, arginfo_ma_is_loopback_supported)
	ZEND_FE(ma_calculate_buffer_size_in_milliseconds_from_frames, arginfo_ma_calculate_buffer_size_in_milliseconds_from_frames)
	ZEND_FE(ma_calculate_buffer_size_in_frames_from_milliseconds, arginfo_ma_calculate_buffer_size_in_frames_from_milliseconds)
	ZEND_FE(ma_copy_pcm_frames, arginfo_ma_copy_pcm_frames)
	ZEND_FE(ma_silence_pcm_frames, arginfo_ma_silence_pcm_frames)
	ZEND_FE(ma_clip_samples_u8, arginfo_ma_clip_samples_u8)
	ZEND_FE(ma_clip_samples_s16, arginfo_ma_clip_samples_s16)
	ZEND_FE(ma_clip_samples_s24, arginfo_ma_clip_samples_s24)
	ZEND_FE(ma_clip_samples_s32, arginfo_ma_clip_samples_s32)
	ZEND_FE(ma_clip_samples_f32, arginfo_ma_clip_samples_f32)
	ZEND_FE(ma_clip_pcm_frames, arginfo_ma_clip_pcm_frames)
	ZEND_FE(ma_copy_and_apply_volume_factor_u8, arginfo_ma_copy_and_apply_volume_factor_u8)
	ZEND_FE(ma_copy_and_apply_volume_factor_s16, arginfo_ma_copy_and_apply_volume_factor_s16)
	ZEND_FE(ma_copy_and_apply_volume_factor_s24, arginfo_ma_copy_and_apply_volume_factor_s24)
	ZEND_FE(ma_copy_and_apply_volume_factor_s32, arginfo_ma_copy_and_apply_volume_factor_s32)
	ZEND_FE(ma_copy_and_apply_volume_factor_f32, arginfo_ma_copy_and_apply_volume_factor_f32)
	ZEND_FE(ma_apply_volume_factor_u8, arginfo_ma_apply_volume_factor_u8)
	ZEND_FE(ma_apply_volume_factor_s16, arginfo_ma_apply_volume_factor_s16)
	ZEND_FE(ma_apply_volume_factor_s24, arginfo_ma_apply_volume_factor_s24)
	ZEND_FE(ma_apply_volume_factor_s32, arginfo_ma_apply_volume_factor_s32)
	ZEND_FE(ma_apply_volume_factor_f32, arginfo_ma_apply_volume_factor_f32)
	ZEND_FE(ma_copy_and_apply_volume_factor_pcm_frames_u8, arginfo_ma_copy_and_apply_volume_factor_pcm_frames_u8)
	ZEND_FE(ma_copy_and_apply_volume_factor_pcm_frames_s16, arginfo_ma_copy_and_apply_volume_factor_pcm_frames_s16)
	ZEND_FE(ma_copy_and_apply_volume_factor_pcm_frames_s24, arginfo_ma_copy_and_apply_volume_factor_pcm_frames_s24)
	ZEND_FE(ma_copy_and_apply_volume_factor_pcm_frames_s32, arginfo_ma_copy_and_apply_volume_factor_pcm_frames_s32)
	ZEND_FE(ma_copy_and_apply_volume_factor_pcm_frames_f32, arginfo_ma_copy_and_apply_volume_factor_pcm_frames_f32)
	ZEND_FE(ma_copy_and_apply_volume_factor_pcm_frames, arginfo_ma_copy_and_apply_volume_factor_pcm_frames)
	ZEND_FE(ma_apply_volume_factor_pcm_frames_u8, arginfo_ma_apply_volume_factor_pcm_frames_u8)
	ZEND_FE(ma_apply_volume_factor_pcm_frames_s16, arginfo_ma_apply_volume_factor_pcm_frames_s16)
	ZEND_FE(ma_apply_volume_factor_pcm_frames_s24, arginfo_ma_apply_volume_factor_pcm_frames_s24)
	ZEND_FE(ma_apply_volume_factor_pcm_frames_s32, arginfo_ma_apply_volume_factor_pcm_frames_s32)
	ZEND_FE(ma_apply_volume_factor_pcm_frames_f32, arginfo_ma_apply_volume_factor_pcm_frames_f32)
	ZEND_FE(ma_apply_volume_factor_pcm_frames, arginfo_ma_apply_volume_factor_pcm_frames)
	ZEND_FE(ma_copy_and_apply_volume_factor_per_channel_f32, arginfo_ma_copy_and_apply_volume_factor_per_channel_f32)
	ZEND_FE(ma_copy_and_apply_volume_and_clip_samples_u8, arginfo_ma_copy_and_apply_volume_and_clip_samples_u8)
	ZEND_FE(ma_copy_and_apply_volume_and_clip_samples_s16, arginfo_ma_copy_and_apply_volume_and_clip_samples_s16)
	ZEND_FE(ma_copy_and_apply_volume_and_clip_samples_s24, arginfo_ma_copy_and_apply_volume_and_clip_samples_s24)
	ZEND_FE(ma_copy_and_apply_volume_and_clip_samples_s32, arginfo_ma_copy_and_apply_volume_and_clip_samples_s32)
	ZEND_FE(ma_copy_and_apply_volume_and_clip_samples_f32, arginfo_ma_copy_and_apply_volume_and_clip_samples_f32)
	ZEND_FE(ma_copy_and_apply_volume_and_clip_pcm_frames, arginfo_ma_copy_and_apply_volume_and_clip_pcm_frames)
	ZEND_FE(ma_volume_linear_to_db, arginfo_ma_volume_linear_to_db)
	ZEND_FE(ma_volume_db_to_linear, arginfo_ma_volume_db_to_linear)
	ZEND_FE(ma_mix_pcm_frames_f32, arginfo_ma_mix_pcm_frames_f32)
	ZEND_FE(ma_vfs_open_and_read_file, arginfo_ma_vfs_open_and_read_file)
	ZEND_FE(ma_default_vfs_init, arginfo_ma_default_vfs_init)
	ZEND_FE(ma_decoding_backend_config_init, arginfo_ma_decoding_backend_config_init)
	ZEND_FE(ma_decoder_config_init, arginfo_ma_decoder_config_init)
	ZEND_FE(ma_decoder_config_init_default, arginfo_ma_decoder_config_init_default)
	ZEND_FE(ma_decoder_init, arginfo_ma_decoder_init)
	ZEND_FE(ma_decoder_init_memory, arginfo_ma_decoder_init_memory)
	ZEND_FE(ma_decoder_init_vfs, arginfo_ma_decoder_init_vfs)
	ZEND_FE(ma_decoder_init_vfs_w, arginfo_ma_decoder_init_vfs_w)
	ZEND_FE(ma_decoder_init_file, arginfo_ma_decoder_init_file)
	ZEND_FE(ma_decoder_init_file_w, arginfo_ma_decoder_init_file_w)
	ZEND_FE(ma_decoder_uninit, arginfo_ma_decoder_uninit)
	ZEND_FE(ma_decoder_read_pcm_frames, arginfo_ma_decoder_read_pcm_frames)
	ZEND_FE(ma_decoder_seek_to_pcm_frame, arginfo_ma_decoder_seek_to_pcm_frame)
	ZEND_FE(ma_decoder_get_data_format, arginfo_ma_decoder_get_data_format)
	ZEND_FE(ma_decoder_get_cursor_in_pcm_frames, arginfo_ma_decoder_get_cursor_in_pcm_frames)
	ZEND_FE(ma_decoder_get_length_in_pcm_frames, arginfo_ma_decoder_get_length_in_pcm_frames)
	ZEND_FE(ma_decoder_get_available_frames, arginfo_ma_decoder_get_available_frames)
	ZEND_FE(ma_decode_from_vfs, arginfo_ma_decode_from_vfs)
	ZEND_FE(ma_decode_file, arginfo_ma_decode_file)
	ZEND_FE(ma_decode_memory, arginfo_ma_decode_memory)
	ZEND_FE(ma_encoder_config_init, arginfo_ma_encoder_config_init)
	ZEND_FE(ma_encoder_init, arginfo_ma_encoder_init)
	ZEND_FE(ma_encoder_init_vfs, arginfo_ma_encoder_init_vfs)
	ZEND_FE(ma_encoder_init_vfs_w, arginfo_ma_encoder_init_vfs_w)
	ZEND_FE(ma_encoder_init_file, arginfo_ma_encoder_init_file)
	ZEND_FE(ma_encoder_init_file_w, arginfo_ma_encoder_init_file_w)
	ZEND_FE(ma_encoder_uninit, arginfo_ma_encoder_uninit)
	ZEND_FE(ma_encoder_write_pcm_frames, arginfo_ma_encoder_write_pcm_frames)
	ZEND_FE(ma_waveform_config_init, arginfo_ma_waveform_config_init)
	ZEND_FE(ma_waveform_init, arginfo_ma_waveform_init)
	ZEND_FE(ma_waveform_uninit, arginfo_ma_waveform_uninit)
	ZEND_FE(ma_waveform_read_pcm_frames, arginfo_ma_waveform_read_pcm_frames)
	ZEND_FE(ma_waveform_seek_to_pcm_frame, arginfo_ma_waveform_seek_to_pcm_frame)
	ZEND_FE(ma_waveform_set_amplitude, arginfo_ma_waveform_set_amplitude)
	ZEND_FE(ma_waveform_set_frequency, arginfo_ma_waveform_set_frequency)
	ZEND_FE(ma_waveform_set_type, arginfo_ma_waveform_set_type)
	ZEND_FE(ma_waveform_set_sample_rate, arginfo_ma_waveform_set_sample_rate)
	ZEND_FE(ma_pulsewave_config_init, arginfo_ma_pulsewave_config_init)
	ZEND_FE(ma_pulsewave_init, arginfo_ma_pulsewave_init)
	ZEND_FE(ma_pulsewave_uninit, arginfo_ma_pulsewave_uninit)
	ZEND_FE(ma_pulsewave_read_pcm_frames, arginfo_ma_pulsewave_read_pcm_frames)
	ZEND_FE(ma_pulsewave_seek_to_pcm_frame, arginfo_ma_pulsewave_seek_to_pcm_frame)
	ZEND_FE(ma_pulsewave_set_amplitude, arginfo_ma_pulsewave_set_amplitude)
	ZEND_FE(ma_pulsewave_set_frequency, arginfo_ma_pulsewave_set_frequency)
	ZEND_FE(ma_pulsewave_set_sample_rate, arginfo_ma_pulsewave_set_sample_rate)
	ZEND_FE(ma_pulsewave_set_duty_cycle, arginfo_ma_pulsewave_set_duty_cycle)
	ZEND_FE(ma_noise_config_init, arginfo_ma_noise_config_init)
	ZEND_FE(ma_noise_get_heap_size, arginfo_ma_noise_get_heap_size)
	ZEND_FE(ma_noise_init_preallocated, arginfo_ma_noise_init_preallocated)
	ZEND_FE(ma_noise_init, arginfo_ma_noise_init)
	ZEND_FE(ma_noise_uninit, arginfo_ma_noise_uninit)
	ZEND_FE(ma_noise_read_pcm_frames, arginfo_ma_noise_read_pcm_frames)
	ZEND_FE(ma_noise_set_amplitude, arginfo_ma_noise_set_amplitude)
	ZEND_FE(ma_noise_set_seed, arginfo_ma_noise_set_seed)
	ZEND_FE(ma_noise_set_type, arginfo_ma_noise_set_type)
	ZEND_FE(ma_resource_manager_pipeline_notifications_init, arginfo_ma_resource_manager_pipeline_notifications_init)
	ZEND_FE(ma_resource_manager_data_source_config_init, arginfo_ma_resource_manager_data_source_config_init)
	ZEND_FE(ma_resource_manager_config_init, arginfo_ma_resource_manager_config_init)
	ZEND_FE(ma_resource_manager_init, arginfo_ma_resource_manager_init)
	ZEND_FE(ma_resource_manager_uninit, arginfo_ma_resource_manager_uninit)
	ZEND_FE(ma_resource_manager_get_log, arginfo_ma_resource_manager_get_log)
	ZEND_FE(ma_resource_manager_register_file, arginfo_ma_resource_manager_register_file)
	ZEND_FE(ma_resource_manager_register_file_w, arginfo_ma_resource_manager_register_file_w)
	ZEND_FE(ma_resource_manager_register_decoded_data, arginfo_ma_resource_manager_register_decoded_data)
	ZEND_FE(ma_resource_manager_register_decoded_data_w, arginfo_ma_resource_manager_register_decoded_data_w)
	ZEND_FE(ma_resource_manager_register_encoded_data, arginfo_ma_resource_manager_register_encoded_data)
	ZEND_FE(ma_resource_manager_register_encoded_data_w, arginfo_ma_resource_manager_register_encoded_data_w)
	ZEND_FE(ma_resource_manager_unregister_file, arginfo_ma_resource_manager_unregister_file)
	ZEND_FE(ma_resource_manager_unregister_file_w, arginfo_ma_resource_manager_unregister_file_w)
	ZEND_FE(ma_resource_manager_unregister_data, arginfo_ma_resource_manager_unregister_data)
	ZEND_FE(ma_resource_manager_unregister_data_w, arginfo_ma_resource_manager_unregister_data_w)
	ZEND_FE(ma_resource_manager_data_buffer_init_ex, arginfo_ma_resource_manager_data_buffer_init_ex)
	ZEND_FE(ma_resource_manager_data_buffer_init, arginfo_ma_resource_manager_data_buffer_init)
	ZEND_FE(ma_resource_manager_data_buffer_init_w, arginfo_ma_resource_manager_data_buffer_init_w)
	ZEND_FE(ma_resource_manager_data_buffer_init_copy, arginfo_ma_resource_manager_data_buffer_init_copy)
	ZEND_FE(ma_resource_manager_data_buffer_uninit, arginfo_ma_resource_manager_data_buffer_uninit)
	ZEND_FE(ma_resource_manager_data_buffer_read_pcm_frames, arginfo_ma_resource_manager_data_buffer_read_pcm_frames)
	ZEND_FE(ma_resource_manager_data_buffer_seek_to_pcm_frame, arginfo_ma_resource_manager_data_buffer_seek_to_pcm_frame)
	ZEND_FE(ma_resource_manager_data_buffer_get_data_format, arginfo_ma_resource_manager_data_buffer_get_data_format)
	ZEND_FE(ma_resource_manager_data_buffer_get_cursor_in_pcm_frames, arginfo_ma_resource_manager_data_buffer_get_cursor_in_pcm_frames)
	ZEND_FE(ma_resource_manager_data_buffer_get_length_in_pcm_frames, arginfo_ma_resource_manager_data_buffer_get_length_in_pcm_frames)
	ZEND_FE(ma_resource_manager_data_buffer_result, arginfo_ma_resource_manager_data_buffer_result)
	ZEND_FE(ma_resource_manager_data_buffer_set_looping, arginfo_ma_resource_manager_data_buffer_set_looping)
	ZEND_FE(ma_resource_manager_data_buffer_is_looping, arginfo_ma_resource_manager_data_buffer_is_looping)
	ZEND_FE(ma_resource_manager_data_buffer_get_available_frames, arginfo_ma_resource_manager_data_buffer_get_available_frames)
	ZEND_FE(ma_resource_manager_data_stream_init_ex, arginfo_ma_resource_manager_data_stream_init_ex)
	ZEND_FE(ma_resource_manager_data_stream_init, arginfo_ma_resource_manager_data_stream_init)
	ZEND_FE(ma_resource_manager_data_stream_init_w, arginfo_ma_resource_manager_data_stream_init_w)
	ZEND_FE(ma_resource_manager_data_stream_uninit, arginfo_ma_resource_manager_data_stream_uninit)
	ZEND_FE(ma_resource_manager_data_stream_read_pcm_frames, arginfo_ma_resource_manager_data_stream_read_pcm_frames)
	ZEND_FE(ma_resource_manager_data_stream_seek_to_pcm_frame, arginfo_ma_resource_manager_data_stream_seek_to_pcm_frame)
	ZEND_FE(ma_resource_manager_data_stream_get_data_format, arginfo_ma_resource_manager_data_stream_get_data_format)
	ZEND_FE(ma_resource_manager_data_stream_get_cursor_in_pcm_frames, arginfo_ma_resource_manager_data_stream_get_cursor_in_pcm_frames)
	ZEND_FE(ma_resource_manager_data_stream_get_length_in_pcm_frames, arginfo_ma_resource_manager_data_stream_get_length_in_pcm_frames)
	ZEND_FE(ma_resource_manager_data_stream_result, arginfo_ma_resource_manager_data_stream_result)
	ZEND_FE(ma_resource_manager_data_stream_set_looping, arginfo_ma_resource_manager_data_stream_set_looping)
	ZEND_FE(ma_resource_manager_data_stream_is_looping, arginfo_ma_resource_manager_data_stream_is_looping)
	ZEND_FE(ma_resource_manager_data_stream_get_available_frames, arginfo_ma_resource_manager_data_stream_get_available_frames)
	ZEND_FE(ma_resource_manager_data_source_init_ex, arginfo_ma_resource_manager_data_source_init_ex)
	ZEND_FE(ma_resource_manager_data_source_init, arginfo_ma_resource_manager_data_source_init)
	ZEND_FE(ma_resource_manager_data_source_init_w, arginfo_ma_resource_manager_data_source_init_w)
	ZEND_FE(ma_resource_manager_data_source_init_copy, arginfo_ma_resource_manager_data_source_init_copy)
	ZEND_FE(ma_resource_manager_data_source_uninit, arginfo_ma_resource_manager_data_source_uninit)
	ZEND_FE(ma_resource_manager_data_source_read_pcm_frames, arginfo_ma_resource_manager_data_source_read_pcm_frames)
	ZEND_FE(ma_resource_manager_data_source_seek_to_pcm_frame, arginfo_ma_resource_manager_data_source_seek_to_pcm_frame)
	ZEND_FE(ma_resource_manager_data_source_get_data_format, arginfo_ma_resource_manager_data_source_get_data_format)
	ZEND_FE(ma_resource_manager_data_source_get_cursor_in_pcm_frames, arginfo_ma_resource_manager_data_source_get_cursor_in_pcm_frames)
	ZEND_FE(ma_resource_manager_data_source_get_length_in_pcm_frames, arginfo_ma_resource_manager_data_source_get_length_in_pcm_frames)
	ZEND_FE(ma_resource_manager_data_source_result, arginfo_ma_resource_manager_data_source_result)
	ZEND_FE(ma_resource_manager_data_source_set_looping, arginfo_ma_resource_manager_data_source_set_looping)
	ZEND_FE(ma_resource_manager_data_source_is_looping, arginfo_ma_resource_manager_data_source_is_looping)
	ZEND_FE(ma_resource_manager_data_source_get_available_frames, arginfo_ma_resource_manager_data_source_get_available_frames)
	ZEND_FE(ma_resource_manager_post_job, arginfo_ma_resource_manager_post_job)
	ZEND_FE(ma_resource_manager_post_job_quit, arginfo_ma_resource_manager_post_job_quit)
	ZEND_FE(ma_resource_manager_next_job, arginfo_ma_resource_manager_next_job)
	ZEND_FE(ma_resource_manager_process_job, arginfo_ma_resource_manager_process_job)
	ZEND_FE(ma_resource_manager_process_next_job, arginfo_ma_resource_manager_process_next_job)
	ZEND_FE(ma_node_config_init, arginfo_ma_node_config_init)
	ZEND_FE(ma_node_get_heap_size, arginfo_ma_node_get_heap_size)
	ZEND_FE(ma_node_init_preallocated, arginfo_ma_node_init_preallocated)
	ZEND_FE(ma_node_init, arginfo_ma_node_init)
	ZEND_FE(ma_node_uninit, arginfo_ma_node_uninit)
	ZEND_FE(ma_node_get_node_graph, arginfo_ma_node_get_node_graph)
	ZEND_FE(ma_node_get_input_bus_count, arginfo_ma_node_get_input_bus_count)
	ZEND_FE(ma_node_get_output_bus_count, arginfo_ma_node_get_output_bus_count)
	ZEND_FE(ma_node_get_input_channels, arginfo_ma_node_get_input_channels)
	ZEND_FE(ma_node_get_output_channels, arginfo_ma_node_get_output_channels)
	ZEND_FE(ma_node_attach_output_bus, arginfo_ma_node_attach_output_bus)
	ZEND_FE(ma_node_detach_output_bus, arginfo_ma_node_detach_output_bus)
	ZEND_FE(ma_node_detach_all_output_buses, arginfo_ma_node_detach_all_output_buses)
	ZEND_FE(ma_node_set_output_bus_volume, arginfo_ma_node_set_output_bus_volume)
	ZEND_FE(ma_node_get_output_bus_volume, arginfo_ma_node_get_output_bus_volume)
	ZEND_FE(ma_node_set_state, arginfo_ma_node_set_state)
	ZEND_FE(ma_node_get_state, arginfo_ma_node_get_state)
	ZEND_FE(ma_node_set_state_time, arginfo_ma_node_set_state_time)
	ZEND_FE(ma_node_get_state_time, arginfo_ma_node_get_state_time)
	ZEND_FE(ma_node_get_state_by_time, arginfo_ma_node_get_state_by_time)
	ZEND_FE(ma_node_get_state_by_time_range, arginfo_ma_node_get_state_by_time_range)
	ZEND_FE(ma_node_get_time, arginfo_ma_node_get_time)
	ZEND_FE(ma_node_set_time, arginfo_ma_node_set_time)
	ZEND_FE(ma_node_graph_config_init, arginfo_ma_node_graph_config_init)
	ZEND_FE(ma_node_graph_init, arginfo_ma_node_graph_init)
	ZEND_FE(ma_node_graph_uninit, arginfo_ma_node_graph_uninit)
	ZEND_FE(ma_node_graph_get_endpoint, arginfo_ma_node_graph_get_endpoint)
	ZEND_FE(ma_node_graph_read_pcm_frames, arginfo_ma_node_graph_read_pcm_frames)
	ZEND_FE(ma_node_graph_get_channels, arginfo_ma_node_graph_get_channels)
	ZEND_FE(ma_node_graph_get_time, arginfo_ma_node_graph_get_time)
	ZEND_FE(ma_node_graph_set_time, arginfo_ma_node_graph_set_time)
	ZEND_FE(ma_node_graph_get_processing_size_in_frames, arginfo_ma_node_graph_get_processing_size_in_frames)
	ZEND_FE(ma_data_source_node_config_init, arginfo_ma_data_source_node_config_init)
	ZEND_FE(ma_data_source_node_init, arginfo_ma_data_source_node_init)
	ZEND_FE(ma_data_source_node_uninit, arginfo_ma_data_source_node_uninit)
	ZEND_FE(ma_data_source_node_set_looping, arginfo_ma_data_source_node_set_looping)
	ZEND_FE(ma_data_source_node_is_looping, arginfo_ma_data_source_node_is_looping)
	ZEND_FE(ma_splitter_node_config_init, arginfo_ma_splitter_node_config_init)
	ZEND_FE(ma_splitter_node_init, arginfo_ma_splitter_node_init)
	ZEND_FE(ma_splitter_node_uninit, arginfo_ma_splitter_node_uninit)
	ZEND_FE(ma_biquad_node_config_init, arginfo_ma_biquad_node_config_init)
	ZEND_FE(ma_biquad_node_init, arginfo_ma_biquad_node_init)
	ZEND_FE(ma_biquad_node_reinit, arginfo_ma_biquad_node_reinit)
	ZEND_FE(ma_biquad_node_uninit, arginfo_ma_biquad_node_uninit)
	ZEND_FE(ma_lpf_node_config_init, arginfo_ma_lpf_node_config_init)
	ZEND_FE(ma_lpf_node_init, arginfo_ma_lpf_node_init)
	ZEND_FE(ma_lpf_node_reinit, arginfo_ma_lpf_node_reinit)
	ZEND_FE(ma_lpf_node_uninit, arginfo_ma_lpf_node_uninit)
	ZEND_FE(ma_hpf_node_config_init, arginfo_ma_hpf_node_config_init)
	ZEND_FE(ma_hpf_node_init, arginfo_ma_hpf_node_init)
	ZEND_FE(ma_hpf_node_reinit, arginfo_ma_hpf_node_reinit)
	ZEND_FE(ma_hpf_node_uninit, arginfo_ma_hpf_node_uninit)
	ZEND_FE(ma_bpf_node_config_init, arginfo_ma_bpf_node_config_init)
	ZEND_FE(ma_bpf_node_init, arginfo_ma_bpf_node_init)
	ZEND_FE(ma_bpf_node_reinit, arginfo_ma_bpf_node_reinit)
	ZEND_FE(ma_bpf_node_uninit, arginfo_ma_bpf_node_uninit)
	ZEND_FE(ma_notch_node_config_init, arginfo_ma_notch_node_config_init)
	ZEND_FE(ma_notch_node_init, arginfo_ma_notch_node_init)
	ZEND_FE(ma_notch_node_reinit, arginfo_ma_notch_node_reinit)
	ZEND_FE(ma_notch_node_uninit, arginfo_ma_notch_node_uninit)
	ZEND_FE(ma_peak_node_config_init, arginfo_ma_peak_node_config_init)
	ZEND_FE(ma_peak_node_init, arginfo_ma_peak_node_init)
	ZEND_FE(ma_peak_node_reinit, arginfo_ma_peak_node_reinit)
	ZEND_FE(ma_peak_node_uninit, arginfo_ma_peak_node_uninit)
	ZEND_FE(ma_loshelf_node_config_init, arginfo_ma_loshelf_node_config_init)
	ZEND_FE(ma_loshelf_node_init, arginfo_ma_loshelf_node_init)
	ZEND_FE(ma_loshelf_node_reinit, arginfo_ma_loshelf_node_reinit)
	ZEND_FE(ma_loshelf_node_uninit, arginfo_ma_loshelf_node_uninit)
	ZEND_FE(ma_hishelf_node_config_init, arginfo_ma_hishelf_node_config_init)
	ZEND_FE(ma_hishelf_node_init, arginfo_ma_hishelf_node_init)
	ZEND_FE(ma_hishelf_node_reinit, arginfo_ma_hishelf_node_reinit)
	ZEND_FE(ma_hishelf_node_uninit, arginfo_ma_hishelf_node_uninit)
	ZEND_FE(ma_delay_node_config_init, arginfo_ma_delay_node_config_init)
	ZEND_FE(ma_delay_node_init, arginfo_ma_delay_node_init)
	ZEND_FE(ma_delay_node_uninit, arginfo_ma_delay_node_uninit)
	ZEND_FE(ma_delay_node_set_wet, arginfo_ma_delay_node_set_wet)
	ZEND_FE(ma_delay_node_get_wet, arginfo_ma_delay_node_get_wet)
	ZEND_FE(ma_delay_node_set_dry, arginfo_ma_delay_node_set_dry)
	ZEND_FE(ma_delay_node_get_dry, arginfo_ma_delay_node_get_dry)
	ZEND_FE(ma_delay_node_set_decay, arginfo_ma_delay_node_set_decay)
	ZEND_FE(ma_delay_node_get_decay, arginfo_ma_delay_node_get_decay)
	ZEND_FE(ma_engine_node_config_init, arginfo_ma_engine_node_config_init)
	ZEND_FE(ma_engine_node_get_heap_size, arginfo_ma_engine_node_get_heap_size)
	ZEND_FE(ma_engine_node_init_preallocated, arginfo_ma_engine_node_init_preallocated)
	ZEND_FE(ma_engine_node_init, arginfo_ma_engine_node_init)
	ZEND_FE(ma_engine_node_uninit, arginfo_ma_engine_node_uninit)
	ZEND_FE(ma_sound_config_init, arginfo_ma_sound_config_init)
	ZEND_FE(ma_sound_config_init_2, arginfo_ma_sound_config_init_2)
	ZEND_FE(ma_sound_group_config_init, arginfo_ma_sound_group_config_init)
	ZEND_FE(ma_sound_group_config_init_2, arginfo_ma_sound_group_config_init_2)
	ZEND_FE(ma_engine_config_init, arginfo_ma_engine_config_init)
	ZEND_FE(ma_engine_init, arginfo_ma_engine_init)
	ZEND_FE(ma_engine_uninit, arginfo_ma_engine_uninit)
	ZEND_FE(ma_engine_read_pcm_frames, arginfo_ma_engine_read_pcm_frames)
	ZEND_FE(ma_engine_get_node_graph, arginfo_ma_engine_get_node_graph)
	ZEND_FE(ma_engine_get_resource_manager, arginfo_ma_engine_get_resource_manager)
	ZEND_FE(ma_engine_get_device, arginfo_ma_engine_get_device)
	ZEND_FE(ma_engine_get_log, arginfo_ma_engine_get_log)
	ZEND_FE(ma_engine_get_endpoint, arginfo_ma_engine_get_endpoint)
	ZEND_FE(ma_engine_get_time_in_pcm_frames, arginfo_ma_engine_get_time_in_pcm_frames)
	ZEND_FE(ma_engine_get_time_in_milliseconds, arginfo_ma_engine_get_time_in_milliseconds)
	ZEND_FE(ma_engine_set_time_in_pcm_frames, arginfo_ma_engine_set_time_in_pcm_frames)
	ZEND_FE(ma_engine_set_time_in_milliseconds, arginfo_ma_engine_set_time_in_milliseconds)
	ZEND_FE(ma_engine_get_time, arginfo_ma_engine_get_time)
	ZEND_FE(ma_engine_set_time, arginfo_ma_engine_set_time)
	ZEND_FE(ma_engine_get_channels, arginfo_ma_engine_get_channels)
	ZEND_FE(ma_engine_get_sample_rate, arginfo_ma_engine_get_sample_rate)
	ZEND_FE(ma_engine_start, arginfo_ma_engine_start)
	ZEND_FE(ma_engine_stop, arginfo_ma_engine_stop)
	ZEND_FE(ma_engine_set_volume, arginfo_ma_engine_set_volume)
	ZEND_FE(ma_engine_get_volume, arginfo_ma_engine_get_volume)
	ZEND_FE(ma_engine_set_gain_db, arginfo_ma_engine_set_gain_db)
	ZEND_FE(ma_engine_get_gain_db, arginfo_ma_engine_get_gain_db)
	ZEND_FE(ma_engine_get_listener_count, arginfo_ma_engine_get_listener_count)
	ZEND_FE(ma_engine_find_closest_listener, arginfo_ma_engine_find_closest_listener)
	ZEND_FE(ma_engine_listener_set_position, arginfo_ma_engine_listener_set_position)
	ZEND_FE(ma_engine_listener_get_position, arginfo_ma_engine_listener_get_position)
	ZEND_FE(ma_engine_listener_set_direction, arginfo_ma_engine_listener_set_direction)
	ZEND_FE(ma_engine_listener_get_direction, arginfo_ma_engine_listener_get_direction)
	ZEND_FE(ma_engine_listener_set_velocity, arginfo_ma_engine_listener_set_velocity)
	ZEND_FE(ma_engine_listener_get_velocity, arginfo_ma_engine_listener_get_velocity)
	ZEND_FE(ma_engine_listener_set_cone, arginfo_ma_engine_listener_set_cone)
	ZEND_FE(ma_engine_listener_get_cone, arginfo_ma_engine_listener_get_cone)
	ZEND_FE(ma_engine_listener_set_world_up, arginfo_ma_engine_listener_set_world_up)
	ZEND_FE(ma_engine_listener_get_world_up, arginfo_ma_engine_listener_get_world_up)
	ZEND_FE(ma_engine_listener_set_enabled, arginfo_ma_engine_listener_set_enabled)
	ZEND_FE(ma_engine_listener_is_enabled, arginfo_ma_engine_listener_is_enabled)
	ZEND_FE(ma_engine_play_sound_ex, arginfo_ma_engine_play_sound_ex)
	ZEND_FE(ma_engine_play_sound, arginfo_ma_engine_play_sound)
	ZEND_FE(ma_sound_init_from_file, arginfo_ma_sound_init_from_file)
	ZEND_FE(ma_sound_init_from_file_w, arginfo_ma_sound_init_from_file_w)
	ZEND_FE(ma_sound_init_copy, arginfo_ma_sound_init_copy)
	ZEND_FE(ma_sound_init_from_data_source, arginfo_ma_sound_init_from_data_source)
	ZEND_FE(ma_sound_init_ex, arginfo_ma_sound_init_ex)
	ZEND_FE(ma_sound_uninit, arginfo_ma_sound_uninit)
	ZEND_FE(ma_sound_get_engine, arginfo_ma_sound_get_engine)
	ZEND_FE(ma_sound_get_data_source, arginfo_ma_sound_get_data_source)
	ZEND_FE(ma_sound_start, arginfo_ma_sound_start)
	ZEND_FE(ma_sound_stop, arginfo_ma_sound_stop)
	ZEND_FE(ma_sound_stop_with_fade_in_pcm_frames, arginfo_ma_sound_stop_with_fade_in_pcm_frames)
	ZEND_FE(ma_sound_stop_with_fade_in_milliseconds, arginfo_ma_sound_stop_with_fade_in_milliseconds)
	ZEND_FE(ma_sound_reset_start_time, arginfo_ma_sound_reset_start_time)
	ZEND_FE(ma_sound_reset_stop_time, arginfo_ma_sound_reset_stop_time)
	ZEND_FE(ma_sound_reset_fade, arginfo_ma_sound_reset_fade)
	ZEND_FE(ma_sound_reset_stop_time_and_fade, arginfo_ma_sound_reset_stop_time_and_fade)
	ZEND_FE(ma_sound_set_volume, arginfo_ma_sound_set_volume)
	ZEND_FE(ma_sound_get_volume, arginfo_ma_sound_get_volume)
	ZEND_FE(ma_sound_set_pan, arginfo_ma_sound_set_pan)
	ZEND_FE(ma_sound_get_pan, arginfo_ma_sound_get_pan)
	ZEND_FE(ma_sound_set_pan_mode, arginfo_ma_sound_set_pan_mode)
	ZEND_FE(ma_sound_get_pan_mode, arginfo_ma_sound_get_pan_mode)
	ZEND_FE(ma_sound_set_pitch, arginfo_ma_sound_set_pitch)
	ZEND_FE(ma_sound_get_pitch, arginfo_ma_sound_get_pitch)
	ZEND_FE(ma_sound_set_spatialization_enabled, arginfo_ma_sound_set_spatialization_enabled)
	ZEND_FE(ma_sound_is_spatialization_enabled, arginfo_ma_sound_is_spatialization_enabled)
	ZEND_FE(ma_sound_set_pinned_listener_index, arginfo_ma_sound_set_pinned_listener_index)
	ZEND_FE(ma_sound_get_pinned_listener_index, arginfo_ma_sound_get_pinned_listener_index)
	ZEND_FE(ma_sound_get_listener_index, arginfo_ma_sound_get_listener_index)
	ZEND_FE(ma_sound_get_direction_to_listener, arginfo_ma_sound_get_direction_to_listener)
	ZEND_FE(ma_sound_set_position, arginfo_ma_sound_set_position)
	ZEND_FE(ma_sound_get_position, arginfo_ma_sound_get_position)
	ZEND_FE(ma_sound_set_direction, arginfo_ma_sound_set_direction)
	ZEND_FE(ma_sound_get_direction, arginfo_ma_sound_get_direction)
	ZEND_FE(ma_sound_set_velocity, arginfo_ma_sound_set_velocity)
	ZEND_FE(ma_sound_get_velocity, arginfo_ma_sound_get_velocity)
	ZEND_FE(ma_sound_set_attenuation_model, arginfo_ma_sound_set_attenuation_model)
	ZEND_FE(ma_sound_get_attenuation_model, arginfo_ma_sound_get_attenuation_model)
	ZEND_FE(ma_sound_set_positioning, arginfo_ma_sound_set_positioning)
	ZEND_FE(ma_sound_get_positioning, arginfo_ma_sound_get_positioning)
	ZEND_FE(ma_sound_set_rolloff, arginfo_ma_sound_set_rolloff)
	ZEND_FE(ma_sound_get_rolloff, arginfo_ma_sound_get_rolloff)
	ZEND_FE(ma_sound_set_min_gain, arginfo_ma_sound_set_min_gain)
	ZEND_FE(ma_sound_get_min_gain, arginfo_ma_sound_get_min_gain)
	ZEND_FE(ma_sound_set_max_gain, arginfo_ma_sound_set_max_gain)
	ZEND_FE(ma_sound_get_max_gain, arginfo_ma_sound_get_max_gain)
	ZEND_FE(ma_sound_set_min_distance, arginfo_ma_sound_set_min_distance)
	ZEND_FE(ma_sound_get_min_distance, arginfo_ma_sound_get_min_distance)
	ZEND_FE(ma_sound_set_max_distance, arginfo_ma_sound_set_max_distance)
	ZEND_FE(ma_sound_get_max_distance, arginfo_ma_sound_get_max_distance)
	ZEND_FE(ma_sound_set_cone, arginfo_ma_sound_set_cone)
	ZEND_FE(ma_sound_get_cone, arginfo_ma_sound_get_cone)
	ZEND_FE(ma_sound_set_doppler_factor, arginfo_ma_sound_set_doppler_factor)
	ZEND_FE(ma_sound_get_doppler_factor, arginfo_ma_sound_get_doppler_factor)
	ZEND_FE(ma_sound_set_directional_attenuation_factor, arginfo_ma_sound_set_directional_attenuation_factor)
	ZEND_FE(ma_sound_get_directional_attenuation_factor, arginfo_ma_sound_get_directional_attenuation_factor)
	ZEND_FE(ma_sound_set_fade_in_pcm_frames, arginfo_ma_sound_set_fade_in_pcm_frames)
	ZEND_FE(ma_sound_set_fade_in_milliseconds, arginfo_ma_sound_set_fade_in_milliseconds)
	ZEND_FE(ma_sound_set_fade_start_in_pcm_frames, arginfo_ma_sound_set_fade_start_in_pcm_frames)
	ZEND_FE(ma_sound_set_fade_start_in_milliseconds, arginfo_ma_sound_set_fade_start_in_milliseconds)
	ZEND_FE(ma_sound_get_current_fade_volume, arginfo_ma_sound_get_current_fade_volume)
	ZEND_FE(ma_sound_set_start_time_in_pcm_frames, arginfo_ma_sound_set_start_time_in_pcm_frames)
	ZEND_FE(ma_sound_set_start_time_in_milliseconds, arginfo_ma_sound_set_start_time_in_milliseconds)
	ZEND_FE(ma_sound_set_stop_time_in_pcm_frames, arginfo_ma_sound_set_stop_time_in_pcm_frames)
	ZEND_FE(ma_sound_set_stop_time_in_milliseconds, arginfo_ma_sound_set_stop_time_in_milliseconds)
	ZEND_FE(ma_sound_set_stop_time_with_fade_in_pcm_frames, arginfo_ma_sound_set_stop_time_with_fade_in_pcm_frames)
	ZEND_FE(ma_sound_set_stop_time_with_fade_in_milliseconds, arginfo_ma_sound_set_stop_time_with_fade_in_milliseconds)
	ZEND_FE(ma_sound_is_playing, arginfo_ma_sound_is_playing)
	ZEND_FE(ma_sound_get_time_in_pcm_frames, arginfo_ma_sound_get_time_in_pcm_frames)
	ZEND_FE(ma_sound_get_time_in_milliseconds, arginfo_ma_sound_get_time_in_milliseconds)
	ZEND_FE(ma_sound_set_looping, arginfo_ma_sound_set_looping)
	ZEND_FE(ma_sound_is_looping, arginfo_ma_sound_is_looping)
	ZEND_FE(ma_sound_at_end, arginfo_ma_sound_at_end)
	ZEND_FE(ma_sound_seek_to_pcm_frame, arginfo_ma_sound_seek_to_pcm_frame)
	ZEND_FE(ma_sound_seek_to_second, arginfo_ma_sound_seek_to_second)
	ZEND_FE(ma_sound_get_data_format, arginfo_ma_sound_get_data_format)
	ZEND_FE(ma_sound_get_cursor_in_pcm_frames, arginfo_ma_sound_get_cursor_in_pcm_frames)
	ZEND_FE(ma_sound_get_length_in_pcm_frames, arginfo_ma_sound_get_length_in_pcm_frames)
	ZEND_FE(ma_sound_get_cursor_in_seconds, arginfo_ma_sound_get_cursor_in_seconds)
	ZEND_FE(ma_sound_get_length_in_seconds, arginfo_ma_sound_get_length_in_seconds)
	ZEND_FE(ma_sound_set_end_callback, arginfo_ma_sound_set_end_callback)
	ZEND_FE(ma_sound_group_init, arginfo_ma_sound_group_init)
	ZEND_FE(ma_sound_group_init_ex, arginfo_ma_sound_group_init_ex)
	ZEND_FE(ma_sound_group_uninit, arginfo_ma_sound_group_uninit)
	ZEND_FE(ma_sound_group_get_engine, arginfo_ma_sound_group_get_engine)
	ZEND_FE(ma_sound_group_start, arginfo_ma_sound_group_start)
	ZEND_FE(ma_sound_group_stop, arginfo_ma_sound_group_stop)
	ZEND_FE(ma_sound_group_set_volume, arginfo_ma_sound_group_set_volume)
	ZEND_FE(ma_sound_group_get_volume, arginfo_ma_sound_group_get_volume)
	ZEND_FE(ma_sound_group_set_pan, arginfo_ma_sound_group_set_pan)
	ZEND_FE(ma_sound_group_get_pan, arginfo_ma_sound_group_get_pan)
	ZEND_FE(ma_sound_group_set_pan_mode, arginfo_ma_sound_group_set_pan_mode)
	ZEND_FE(ma_sound_group_get_pan_mode, arginfo_ma_sound_group_get_pan_mode)
	ZEND_FE(ma_sound_group_set_pitch, arginfo_ma_sound_group_set_pitch)
	ZEND_FE(ma_sound_group_get_pitch, arginfo_ma_sound_group_get_pitch)
	ZEND_FE(ma_sound_group_set_spatialization_enabled, arginfo_ma_sound_group_set_spatialization_enabled)
	ZEND_FE(ma_sound_group_is_spatialization_enabled, arginfo_ma_sound_group_is_spatialization_enabled)
	ZEND_FE(ma_sound_group_set_pinned_listener_index, arginfo_ma_sound_group_set_pinned_listener_index)
	ZEND_FE(ma_sound_group_get_pinned_listener_index, arginfo_ma_sound_group_get_pinned_listener_index)
	ZEND_FE(ma_sound_group_get_listener_index, arginfo_ma_sound_group_get_listener_index)
	ZEND_FE(ma_sound_group_get_direction_to_listener, arginfo_ma_sound_group_get_direction_to_listener)
	ZEND_FE(ma_sound_group_set_position, arginfo_ma_sound_group_set_position)
	ZEND_FE(ma_sound_group_get_position, arginfo_ma_sound_group_get_position)
	ZEND_FE(ma_sound_group_set_direction, arginfo_ma_sound_group_set_direction)
	ZEND_FE(ma_sound_group_get_direction, arginfo_ma_sound_group_get_direction)
	ZEND_FE(ma_sound_group_set_velocity, arginfo_ma_sound_group_set_velocity)
	ZEND_FE(ma_sound_group_get_velocity, arginfo_ma_sound_group_get_velocity)
	ZEND_FE(ma_sound_group_set_attenuation_model, arginfo_ma_sound_group_set_attenuation_model)
	ZEND_FE(ma_sound_group_get_attenuation_model, arginfo_ma_sound_group_get_attenuation_model)
	ZEND_FE(ma_sound_group_set_positioning, arginfo_ma_sound_group_set_positioning)
	ZEND_FE(ma_sound_group_get_positioning, arginfo_ma_sound_group_get_positioning)
	ZEND_FE(ma_sound_group_set_rolloff, arginfo_ma_sound_group_set_rolloff)
	ZEND_FE(ma_sound_group_get_rolloff, arginfo_ma_sound_group_get_rolloff)
	ZEND_FE(ma_sound_group_set_min_gain, arginfo_ma_sound_group_set_min_gain)
	ZEND_FE(ma_sound_group_get_min_gain, arginfo_ma_sound_group_get_min_gain)
	ZEND_FE(ma_sound_group_set_max_gain, arginfo_ma_sound_group_set_max_gain)
	ZEND_FE(ma_sound_group_get_max_gain, arginfo_ma_sound_group_get_max_gain)
	ZEND_FE(ma_sound_group_set_min_distance, arginfo_ma_sound_group_set_min_distance)
	ZEND_FE(ma_sound_group_get_min_distance, arginfo_ma_sound_group_get_min_distance)
	ZEND_FE(ma_sound_group_set_max_distance, arginfo_ma_sound_group_set_max_distance)
	ZEND_FE(ma_sound_group_get_max_distance, arginfo_ma_sound_group_get_max_distance)
	ZEND_FE(ma_sound_group_set_cone, arginfo_ma_sound_group_set_cone)
	ZEND_FE(ma_sound_group_get_cone, arginfo_ma_sound_group_get_cone)
	ZEND_FE(ma_sound_group_set_doppler_factor, arginfo_ma_sound_group_set_doppler_factor)
	ZEND_FE(ma_sound_group_get_doppler_factor, arginfo_ma_sound_group_get_doppler_factor)
	ZEND_FE(ma_sound_group_set_directional_attenuation_factor, arginfo_ma_sound_group_set_directional_attenuation_factor)
	ZEND_FE(ma_sound_group_get_directional_attenuation_factor, arginfo_ma_sound_group_get_directional_attenuation_factor)
	ZEND_FE(ma_sound_group_set_fade_in_pcm_frames, arginfo_ma_sound_group_set_fade_in_pcm_frames)
	ZEND_FE(ma_sound_group_set_fade_in_milliseconds, arginfo_ma_sound_group_set_fade_in_milliseconds)
	ZEND_FE(ma_sound_group_get_current_fade_volume, arginfo_ma_sound_group_get_current_fade_volume)
	ZEND_FE(ma_sound_group_set_start_time_in_pcm_frames, arginfo_ma_sound_group_set_start_time_in_pcm_frames)
	ZEND_FE(ma_sound_group_set_start_time_in_milliseconds, arginfo_ma_sound_group_set_start_time_in_milliseconds)
	ZEND_FE(ma_sound_group_set_stop_time_in_pcm_frames, arginfo_ma_sound_group_set_stop_time_in_pcm_frames)
	ZEND_FE(ma_sound_group_set_stop_time_in_milliseconds, arginfo_ma_sound_group_set_stop_time_in_milliseconds)
	ZEND_FE(ma_sound_group_is_playing, arginfo_ma_sound_group_is_playing)
	ZEND_FE(ma_sound_group_get_time_in_pcm_frames, arginfo_ma_sound_group_get_time_in_pcm_frames)
	ZEND_FE_END
};
