<?php

/** @generate-class-entries */

/**
 * ma_vfs_file: the opaque file handle a VFS hands out. Closed by ma_vfs_close, or when freed.
 * @not-serializable
 */
final class ma_vfs_file
{
}

function ma_log_postf(?ma_log $pLog, int $level, string $pFormat, mixed ...$args): int {}

function ma_deinterleave_pcm_frames(int $format, int $channels, int $frameCount, string $pInterleavedPCMFrames, ?array &$ppDeinterleavedPCMFrames): void {}

function ma_interleave_pcm_frames(int $format, int $channels, int $frameCount, array $ppDeinterleavedPCMFrames, ?string &$pInterleavedPCMFrames): void {}

function ma_offset_pcm_frames_ptr(string $p, int $offsetInFrames, int $format, int $channels): string {}

function ma_offset_pcm_frames_const_ptr(string $p, int $offsetInFrames, int $format, int $channels): string {}

function ma_rb_acquire_read(?ma_rb $pRB, ?int &$pSizeInBytes, ?string &$ppBufferOut): int {}

function ma_rb_acquire_write(?ma_rb $pRB, ?int &$pSizeInBytes, ?string &$ppBufferOut): int {}

function ma_rb_commit_write(?ma_rb $pRB, int $sizeInBytes): int {}

function ma_rb_get_subbuffer_ptr(?ma_rb $pRB, int $subbufferIndex, string $pBuffer): string {}

function ma_pcm_rb_acquire_read(?ma_pcm_rb $pRB, ?int &$pSizeInFrames, ?string &$ppBufferOut): int {}

function ma_pcm_rb_acquire_write(?ma_pcm_rb $pRB, ?int &$pSizeInFrames, ?string &$ppBufferOut): int {}

function ma_pcm_rb_commit_write(?ma_pcm_rb $pRB, int $sizeInFrames): int {}

function ma_pcm_rb_get_subbuffer_ptr(?ma_pcm_rb $pRB, int $subbufferIndex, string $pBuffer): string {}

function ma_audio_buffer_ref_map(?ma_audio_buffer_ref $pAudioBufferRef, ?string &$ppFramesOut, ?int &$pFrameCount): int {}

function ma_audio_buffer_map(?ma_audio_buffer $pAudioBuffer, ?string &$ppFramesOut, ?int &$pFrameCount): int {}

function ma_audio_buffer_alloc_and_init(?ma_audio_buffer_config $pConfig, ?ma_audio_buffer &$ppAudioBuffer): int {}

function ma_audio_buffer_uninit_and_free(?ma_audio_buffer $pAudioBuffer): void {}

function ma_paged_audio_buffer_data_allocate_page(?ma_paged_audio_buffer_data $pData, int $pageSizeInFrames, ?string $pInitialData, ?ma_allocation_callbacks $pAllocationCallbacks, ?ma_paged_audio_buffer_page &$ppPage): int {}

function ma_paged_audio_buffer_data_free_page(?ma_paged_audio_buffer_data $pData, ?ma_paged_audio_buffer_page $pPage, ?ma_allocation_callbacks $pAllocationCallbacks): int {}

function ma_paged_audio_buffer_data_append_page(?ma_paged_audio_buffer_data $pData, ?ma_paged_audio_buffer_page $pPage): int {}

function ma_context_get_devices(?ma_context $pContext, ?array &$ppPlaybackDeviceInfos, ?int &$pPlaybackDeviceCount, ?array &$ppCaptureDeviceInfos, ?int &$pCaptureDeviceCount): int {}

function ma_vfs_open(?ma_vfs $pVFS, ?string $pFilePath, int $openMode, ?ma_vfs_file &$pFile): int {}

function ma_vfs_open_w(?ma_vfs $pVFS, ?string $pFilePath, int $openMode, ?ma_vfs_file &$pFile): int {}

function ma_vfs_close(?ma_vfs $pVFS, ?ma_vfs_file $file): int {}

function ma_vfs_read(?ma_vfs $pVFS, ?ma_vfs_file $file, ?string &$pDst, int $sizeInBytes, ?int &$pBytesRead): int {}

function ma_vfs_write(?ma_vfs $pVFS, ?ma_vfs_file $file, string $pSrc, int $sizeInBytes, ?int &$pBytesWritten): int {}

function ma_vfs_seek(?ma_vfs $pVFS, ?ma_vfs_file $file, int $offset, int $origin): int {}

function ma_vfs_tell(?ma_vfs $pVFS, ?ma_vfs_file $file, ?int &$pCursor): int {}

function ma_vfs_info(?ma_vfs $pVFS, ?ma_vfs_file $file, ?ma_file_info $pInfo): int {}

function ma_log_callback_init(?callable $onLog, mixed $pUserData): ma_log_callback {}

function ma_log_register_callback(?ma_log $pLog, ma_log_callback $callback): int {}

function ma_log_unregister_callback(?ma_log $pLog, ma_log_callback $callback): int {}

function ma_data_source_get_next_callback(?ma_data_source $pDataSource): ?callable {}
