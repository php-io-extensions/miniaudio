/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 868fecb28129c2516c853007b59e9259e24b0262 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_log_postf, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLog, ma_log, 1)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pFormat, IS_STRING, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(0, args, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_deinterleave_pcm_frames, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pInterleavedPCMFrames, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(1, ppDeinterleavedPCMFrames, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_interleave_pcm_frames, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ppDeinterleavedPCMFrames, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(1, pInterleavedPCMFrames, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_offset_pcm_frames_ptr, 0, 4, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, offsetInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channels, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_offset_pcm_frames_const_ptr arginfo_ma_offset_pcm_frames_ptr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_acquire_read, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
	ZEND_ARG_TYPE_INFO(1, pSizeInBytes, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, ppBufferOut, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_rb_acquire_write arginfo_ma_rb_acquire_read

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_commit_write, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInBytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_rb_get_subbuffer_ptr, 0, 3, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_rb, 1)
	ZEND_ARG_TYPE_INFO(0, subbufferIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pBuffer, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_acquire_read, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(1, pSizeInFrames, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, ppBufferOut, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_pcm_rb_acquire_write arginfo_ma_pcm_rb_acquire_read

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_commit_write, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInFrames, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_pcm_rb_get_subbuffer_ptr, 0, 3, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, pRB, ma_pcm_rb, 1)
	ZEND_ARG_TYPE_INFO(0, subbufferIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pBuffer, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_ref_map, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBufferRef, ma_audio_buffer_ref, 1)
	ZEND_ARG_TYPE_INFO(1, ppFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_map, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
	ZEND_ARG_TYPE_INFO(1, ppFramesOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, pFrameCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_alloc_and_init, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pConfig, ma_audio_buffer_config, 1)
	ZEND_ARG_OBJ_INFO(1, ppAudioBuffer, ma_audio_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_audio_buffer_uninit_and_free, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pAudioBuffer, ma_audio_buffer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_allocate_page, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
	ZEND_ARG_TYPE_INFO(0, pageSizeInFrames, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pInitialData, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
	ZEND_ARG_OBJ_INFO(1, ppPage, ma_paged_audio_buffer_page, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_free_page, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
	ZEND_ARG_OBJ_INFO(0, pPage, ma_paged_audio_buffer_page, 1)
	ZEND_ARG_OBJ_INFO(0, pAllocationCallbacks, ma_allocation_callbacks, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_paged_audio_buffer_data_append_page, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pData, ma_paged_audio_buffer_data, 1)
	ZEND_ARG_OBJ_INFO(0, pPage, ma_paged_audio_buffer_page, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_context_get_devices, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
	ZEND_ARG_TYPE_INFO(1, ppPlaybackDeviceInfos, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(1, pPlaybackDeviceCount, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, ppCaptureDeviceInfos, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(1, pCaptureDeviceCount, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_open, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_TYPE_INFO(0, pFilePath, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, openMode, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(1, pFile, ma_vfs_file, 1)
ZEND_END_ARG_INFO()

#define arginfo_ma_vfs_open_w arginfo_ma_vfs_open

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_close, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_OBJ_INFO(0, file, ma_vfs_file, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_read, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_OBJ_INFO(0, file, ma_vfs_file, 1)
	ZEND_ARG_TYPE_INFO(1, pDst, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, sizeInBytes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBytesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_write, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_OBJ_INFO(0, file, ma_vfs_file, 1)
	ZEND_ARG_TYPE_INFO(0, pSrc, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sizeInBytes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBytesWritten, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_seek, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_OBJ_INFO(0, file, ma_vfs_file, 1)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, origin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_tell, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_OBJ_INFO(0, file, ma_vfs_file, 1)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_vfs_info, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pVFS, ma_vfs, 1)
	ZEND_ARG_OBJ_INFO(0, file, ma_vfs_file, 1)
	ZEND_ARG_OBJ_INFO(0, pInfo, ma_file_info, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ma_log_callback_init, 0, 2, ma_log_callback, 0)
	ZEND_ARG_TYPE_INFO(0, onLog, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_log_register_callback, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pLog, ma_log, 1)
	ZEND_ARG_OBJ_INFO(0, callback, ma_log_callback, 0)
ZEND_END_ARG_INFO()

#define arginfo_ma_log_unregister_callback arginfo_ma_log_register_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ma_data_source_get_next_callback, 0, 1, IS_CALLABLE, 1)
	ZEND_ARG_OBJ_INFO(0, pDataSource, ma_data_source, 1)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(ma_log_postf);
ZEND_FUNCTION(ma_deinterleave_pcm_frames);
ZEND_FUNCTION(ma_interleave_pcm_frames);
ZEND_FUNCTION(ma_offset_pcm_frames_ptr);
ZEND_FUNCTION(ma_offset_pcm_frames_const_ptr);
ZEND_FUNCTION(ma_rb_acquire_read);
ZEND_FUNCTION(ma_rb_acquire_write);
ZEND_FUNCTION(ma_rb_commit_write);
ZEND_FUNCTION(ma_rb_get_subbuffer_ptr);
ZEND_FUNCTION(ma_pcm_rb_acquire_read);
ZEND_FUNCTION(ma_pcm_rb_acquire_write);
ZEND_FUNCTION(ma_pcm_rb_commit_write);
ZEND_FUNCTION(ma_pcm_rb_get_subbuffer_ptr);
ZEND_FUNCTION(ma_audio_buffer_ref_map);
ZEND_FUNCTION(ma_audio_buffer_map);
ZEND_FUNCTION(ma_audio_buffer_alloc_and_init);
ZEND_FUNCTION(ma_audio_buffer_uninit_and_free);
ZEND_FUNCTION(ma_paged_audio_buffer_data_allocate_page);
ZEND_FUNCTION(ma_paged_audio_buffer_data_free_page);
ZEND_FUNCTION(ma_paged_audio_buffer_data_append_page);
ZEND_FUNCTION(ma_context_get_devices);
ZEND_FUNCTION(ma_vfs_open);
ZEND_FUNCTION(ma_vfs_open_w);
ZEND_FUNCTION(ma_vfs_close);
ZEND_FUNCTION(ma_vfs_read);
ZEND_FUNCTION(ma_vfs_write);
ZEND_FUNCTION(ma_vfs_seek);
ZEND_FUNCTION(ma_vfs_tell);
ZEND_FUNCTION(ma_vfs_info);
ZEND_FUNCTION(ma_log_callback_init);
ZEND_FUNCTION(ma_log_register_callback);
ZEND_FUNCTION(ma_log_unregister_callback);
ZEND_FUNCTION(ma_data_source_get_next_callback);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(ma_log_postf, arginfo_ma_log_postf)
	ZEND_FE(ma_deinterleave_pcm_frames, arginfo_ma_deinterleave_pcm_frames)
	ZEND_FE(ma_interleave_pcm_frames, arginfo_ma_interleave_pcm_frames)
	ZEND_FE(ma_offset_pcm_frames_ptr, arginfo_ma_offset_pcm_frames_ptr)
	ZEND_FE(ma_offset_pcm_frames_const_ptr, arginfo_ma_offset_pcm_frames_const_ptr)
	ZEND_FE(ma_rb_acquire_read, arginfo_ma_rb_acquire_read)
	ZEND_FE(ma_rb_acquire_write, arginfo_ma_rb_acquire_write)
	ZEND_FE(ma_rb_commit_write, arginfo_ma_rb_commit_write)
	ZEND_FE(ma_rb_get_subbuffer_ptr, arginfo_ma_rb_get_subbuffer_ptr)
	ZEND_FE(ma_pcm_rb_acquire_read, arginfo_ma_pcm_rb_acquire_read)
	ZEND_FE(ma_pcm_rb_acquire_write, arginfo_ma_pcm_rb_acquire_write)
	ZEND_FE(ma_pcm_rb_commit_write, arginfo_ma_pcm_rb_commit_write)
	ZEND_FE(ma_pcm_rb_get_subbuffer_ptr, arginfo_ma_pcm_rb_get_subbuffer_ptr)
	ZEND_FE(ma_audio_buffer_ref_map, arginfo_ma_audio_buffer_ref_map)
	ZEND_FE(ma_audio_buffer_map, arginfo_ma_audio_buffer_map)
	ZEND_FE(ma_audio_buffer_alloc_and_init, arginfo_ma_audio_buffer_alloc_and_init)
	ZEND_FE(ma_audio_buffer_uninit_and_free, arginfo_ma_audio_buffer_uninit_and_free)
	ZEND_FE(ma_paged_audio_buffer_data_allocate_page, arginfo_ma_paged_audio_buffer_data_allocate_page)
	ZEND_FE(ma_paged_audio_buffer_data_free_page, arginfo_ma_paged_audio_buffer_data_free_page)
	ZEND_FE(ma_paged_audio_buffer_data_append_page, arginfo_ma_paged_audio_buffer_data_append_page)
	ZEND_FE(ma_context_get_devices, arginfo_ma_context_get_devices)
	ZEND_FE(ma_vfs_open, arginfo_ma_vfs_open)
	ZEND_FE(ma_vfs_open_w, arginfo_ma_vfs_open_w)
	ZEND_FE(ma_vfs_close, arginfo_ma_vfs_close)
	ZEND_FE(ma_vfs_read, arginfo_ma_vfs_read)
	ZEND_FE(ma_vfs_write, arginfo_ma_vfs_write)
	ZEND_FE(ma_vfs_seek, arginfo_ma_vfs_seek)
	ZEND_FE(ma_vfs_tell, arginfo_ma_vfs_tell)
	ZEND_FE(ma_vfs_info, arginfo_ma_vfs_info)
	ZEND_FE(ma_log_callback_init, arginfo_ma_log_callback_init)
	ZEND_FE(ma_log_register_callback, arginfo_ma_log_register_callback)
	ZEND_FE(ma_log_unregister_callback, arginfo_ma_log_unregister_callback)
	ZEND_FE(ma_data_source_get_next_callback, arginfo_ma_data_source_get_next_callback)
	ZEND_FE_END
};

static zend_class_entry *register_class_ma_vfs_file(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_vfs_file", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
