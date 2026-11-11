<?php

/** @generate-class-entries */

/**
 * The read proc miniaudio hands a custom decoding backend's onInit. Valid until that backend's onUninit.
 * @not-serializable
 */
final class ma_read_proc
{
    public function __invoke(int $pUserData, ?string &$pBufferOut, int $bytesToRead, ?int &$pBytesRead): int {}
}

/** @not-serializable */
final class ma_seek_proc
{
    public function __invoke(int $pUserData, int $offset, int $origin): int {}
}

/** @not-serializable */
final class ma_tell_proc
{
    public function __invoke(int $pUserData, ?int &$pCursor): int {}
}

/**
 * The callback miniaudio hands a custom device backend's onContextEnumerateDevices. Valid during that call.
 * @not-serializable
 */
final class ma_enum_devices_callback_proc
{
    public function __invoke(?ma_context $pContext, int $deviceType, ma_device_info $pInfo, int $pUserData): bool {}
}
