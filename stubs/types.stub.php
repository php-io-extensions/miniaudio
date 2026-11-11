<?php

/** @generate-class-entries */

interface ma_data_source {}

interface ma_node {}

interface ma_vfs {}

interface ma_async_notification {}

final class ma_allocation_callbacks
{
    public mixed $pUserData = null;
    public ?Closure $onMalloc = null;
    public ?Closure $onRealloc = null;
    public ?Closure $onFree = null;

    public function __construct(mixed $pUserData = null, ?Closure $onMalloc = null, ?Closure $onRealloc = null, ?Closure $onFree = null) {}
}

final class ma_async_notification_callbacks implements ma_async_notification
{
    public ?Closure $onSignal = null;

    public function __construct(?Closure $onSignal = null) {}
}

final class ma_audio_buffer_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public int $sizeInFrames = 0;
    public ?string $pData = null;
    public ma_allocation_callbacks $allocationCallbacks;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, int $sizeInFrames = 0, ?string $pData = null, ?ma_allocation_callbacks $allocationCallbacks = null) {}
}

final class ma_backend_callbacks
{
    public ?Closure $onContextInit = null;
    public ?Closure $onContextUninit = null;
    public ?Closure $onContextEnumerateDevices = null;
    public ?Closure $onContextGetDeviceInfo = null;
    public ?Closure $onDeviceInit = null;
    public ?Closure $onDeviceUninit = null;
    public ?Closure $onDeviceStart = null;
    public ?Closure $onDeviceStop = null;
    public ?Closure $onDeviceRead = null;
    public ?Closure $onDeviceWrite = null;
    public ?Closure $onDeviceDataLoop = null;
    public ?Closure $onDeviceDataLoopWakeup = null;
    public ?Closure $onDeviceGetInfo = null;

    public function __construct(?Closure $onContextInit = null, ?Closure $onContextUninit = null, ?Closure $onContextEnumerateDevices = null, ?Closure $onContextGetDeviceInfo = null, ?Closure $onDeviceInit = null, ?Closure $onDeviceUninit = null, ?Closure $onDeviceStart = null, ?Closure $onDeviceStop = null, ?Closure $onDeviceRead = null, ?Closure $onDeviceWrite = null, ?Closure $onDeviceDataLoop = null, ?Closure $onDeviceDataLoopWakeup = null, ?Closure $onDeviceGetInfo = null) {}
}

final class ma_biquad_config
{
    public int $format = 0;
    public int $channels = 0;
    public float $b0 = 0.0;
    public float $b1 = 0.0;
    public float $b2 = 0.0;
    public float $a0 = 0.0;
    public float $a1 = 0.0;
    public float $a2 = 0.0;

    public function __construct(int $format = 0, int $channels = 0, float $b0 = 0.0, float $b1 = 0.0, float $b2 = 0.0, float $a0 = 0.0, float $a1 = 0.0, float $a2 = 0.0) {}
}

final class ma_biquad_node_config
{
    public ma_node_config $nodeConfig;
    public ma_biquad_config $biquad;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_biquad_config $biquad = null) {}
}

final class ma_bpf2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public float $q = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, float $q = 0.0) {}
}

final class ma_bpf_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public int $order = 0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, int $order = 0) {}
}

final class ma_bpf_node_config
{
    public ma_node_config $nodeConfig;
    public ma_bpf_config $bpf;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_bpf_config $bpf = null) {}
}

final class ma_channel_converter_config
{
    public int $format = 0;
    public int $channelsIn = 0;
    public int $channelsOut = 0;
    public ?array $pChannelMapIn = null;
    public ?array $pChannelMapOut = null;
    public int $mixingMode = 0;
    public bool $calculateLFEFromSpatialChannels = false;
    public ?array $ppWeights = null;

    public function __construct(int $format = 0, int $channelsIn = 0, int $channelsOut = 0, ?array $pChannelMapIn = null, ?array $pChannelMapOut = null, int $mixingMode = 0, bool $calculateLFEFromSpatialChannels = false, ?array $ppWeights = null) {}
}

final class ma_context_config
{
    public ?ma_log $pLog = null;
    public int $threadPriority = 0;
    public int $threadStackSize = 0;
    public mixed $pUserData = null;
    public ma_allocation_callbacks $allocationCallbacks;
    public ma_context_config_dsound $dsound;
    public ma_context_config_alsa $alsa;
    public ma_context_config_pulse $pulse;
    public ma_context_config_coreaudio $coreaudio;
    public ma_context_config_jack $jack;
    public ma_backend_callbacks $custom;

    public function __construct(?ma_log $pLog = null, int $threadPriority = 0, int $threadStackSize = 0, mixed $pUserData = null, ?ma_allocation_callbacks $allocationCallbacks = null, ?ma_context_config_dsound $dsound = null, ?ma_context_config_alsa $alsa = null, ?ma_context_config_pulse $pulse = null, ?ma_context_config_coreaudio $coreaudio = null, ?ma_context_config_jack $jack = null, ?ma_backend_callbacks $custom = null) {}
}

final class ma_context_config_alsa
{
    public bool $useVerboseDeviceEnumeration = false;

    public function __construct(bool $useVerboseDeviceEnumeration = false) {}
}

final class ma_context_config_coreaudio
{
    public int $sessionCategory = 0;
    public int $sessionCategoryOptions = 0;
    public bool $noAudioSessionActivate = false;
    public bool $noAudioSessionDeactivate = false;

    public function __construct(int $sessionCategory = 0, int $sessionCategoryOptions = 0, bool $noAudioSessionActivate = false, bool $noAudioSessionDeactivate = false) {}
}

final class ma_context_config_dsound
{
    public int $hWnd = 0;

    public function __construct(int $hWnd = 0) {}
}

final class ma_context_config_jack
{
    public ?string $pClientName = null;
    public bool $tryStartServer = false;

    public function __construct(?string $pClientName = null, bool $tryStartServer = false) {}
}

final class ma_context_config_pulse
{
    public ?string $pApplicationName = null;
    public ?string $pServerName = null;
    public bool $tryAutoSpawn = false;

    public function __construct(?string $pApplicationName = null, ?string $pServerName = null, bool $tryAutoSpawn = false) {}
}

final class ma_data_converter_config
{
    public int $formatIn = 0;
    public int $formatOut = 0;
    public int $channelsIn = 0;
    public int $channelsOut = 0;
    public int $sampleRateIn = 0;
    public int $sampleRateOut = 0;
    public ?array $pChannelMapIn = null;
    public ?array $pChannelMapOut = null;
    public int $ditherMode = 0;
    public int $channelMixMode = 0;
    public bool $calculateLFEFromSpatialChannels = false;
    public ?array $ppChannelWeights = null;
    public bool $allowDynamicSampleRate = false;
    public ma_resampler_config $resampling;

    public function __construct(int $formatIn = 0, int $formatOut = 0, int $channelsIn = 0, int $channelsOut = 0, int $sampleRateIn = 0, int $sampleRateOut = 0, ?array $pChannelMapIn = null, ?array $pChannelMapOut = null, int $ditherMode = 0, int $channelMixMode = 0, bool $calculateLFEFromSpatialChannels = false, ?array $ppChannelWeights = null, bool $allowDynamicSampleRate = false, ?ma_resampler_config $resampling = null) {}
}

final class ma_data_source_config
{
    public ?ma_data_source_vtable $vtable = null;

    public function __construct(?ma_data_source_vtable $vtable = null) {}
}

final class ma_data_source_node_config
{
    public ma_node_config $nodeConfig;
    public ?ma_data_source $pDataSource = null;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_data_source $pDataSource = null) {}
}

final class ma_data_source_vtable
{
    public ?Closure $onRead = null;
    public ?Closure $onSeek = null;
    public ?Closure $onGetDataFormat = null;
    public ?Closure $onGetCursor = null;
    public ?Closure $onGetLength = null;
    public ?Closure $onSetLooping = null;
    public int $flags = 0;

    public function __construct(?Closure $onRead = null, ?Closure $onSeek = null, ?Closure $onGetDataFormat = null, ?Closure $onGetCursor = null, ?Closure $onGetLength = null, ?Closure $onSetLooping = null, int $flags = 0) {}
}

final class ma_decoder_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public ?array $pChannelMap = null;
    public int $channelMixMode = 0;
    public int $ditherMode = 0;
    public ma_resampler_config $resampling;
    public ma_allocation_callbacks $allocationCallbacks;
    public int $encodingFormat = 0;
    public int $seekPointCount = 0;
    public ?array $ppCustomBackendVTables = null;
    public int $customBackendCount = 0;
    public mixed $pCustomBackendUserData = null;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, ?array $pChannelMap = null, int $channelMixMode = 0, int $ditherMode = 0, ?ma_resampler_config $resampling = null, ?ma_allocation_callbacks $allocationCallbacks = null, int $encodingFormat = 0, int $seekPointCount = 0, ?array $ppCustomBackendVTables = null, int $customBackendCount = 0, mixed $pCustomBackendUserData = null) {}
}

final class ma_decoding_backend_config
{
    public int $preferredFormat = 0;
    public int $seekPointCount = 0;

    public function __construct(int $preferredFormat = 0, int $seekPointCount = 0) {}
}

final class ma_decoding_backend_vtable
{
    public ?Closure $onInit = null;
    public ?Closure $onInitFile = null;
    public ?Closure $onInitFileW = null;
    public ?Closure $onInitMemory = null;
    public ?Closure $onUninit = null;

    public function __construct(?Closure $onInit = null, ?Closure $onInitFile = null, ?Closure $onInitFileW = null, ?Closure $onInitMemory = null, ?Closure $onUninit = null) {}
}

final class ma_delay_config
{
    public int $channels = 0;
    public int $sampleRate = 0;
    public int $delayInFrames = 0;
    public bool $delayStart = false;
    public float $wet = 0.0;
    public float $dry = 0.0;
    public float $decay = 0.0;

    public function __construct(int $channels = 0, int $sampleRate = 0, int $delayInFrames = 0, bool $delayStart = false, float $wet = 0.0, float $dry = 0.0, float $decay = 0.0) {}
}

final class ma_delay_node_config
{
    public ma_node_config $nodeConfig;
    public ma_delay_config $delay;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_delay_config $delay = null) {}
}

final class ma_device_config
{
    public int $deviceType = 0;
    public int $sampleRate = 0;
    public int $periodSizeInFrames = 0;
    public int $periodSizeInMilliseconds = 0;
    public int $periods = 0;
    public int $performanceProfile = 0;
    public bool $noPreSilencedOutputBuffer = false;
    public bool $noClip = false;
    public bool $noDisableDenormals = false;
    public bool $noFixedSizedCallback = false;
    public ?Closure $dataCallback = null;
    public ?Closure $notificationCallback = null;
    public ?Closure $stopCallback = null;
    public mixed $pUserData = null;
    public ma_resampler_config $resampling;
    public ma_device_config_playback $playback;
    public ma_device_config_capture $capture;
    public ma_device_config_wasapi $wasapi;
    public ma_device_config_alsa $alsa;
    public ma_device_config_pulse $pulse;
    public ma_device_config_coreaudio $coreaudio;
    public ma_device_config_opensl $opensl;
    public ma_device_config_aaudio $aaudio;

    public function __construct(int $deviceType = 0, int $sampleRate = 0, int $periodSizeInFrames = 0, int $periodSizeInMilliseconds = 0, int $periods = 0, int $performanceProfile = 0, bool $noPreSilencedOutputBuffer = false, bool $noClip = false, bool $noDisableDenormals = false, bool $noFixedSizedCallback = false, ?Closure $dataCallback = null, ?Closure $notificationCallback = null, ?Closure $stopCallback = null, mixed $pUserData = null, ?ma_resampler_config $resampling = null, ?ma_device_config_playback $playback = null, ?ma_device_config_capture $capture = null, ?ma_device_config_wasapi $wasapi = null, ?ma_device_config_alsa $alsa = null, ?ma_device_config_pulse $pulse = null, ?ma_device_config_coreaudio $coreaudio = null, ?ma_device_config_opensl $opensl = null, ?ma_device_config_aaudio $aaudio = null) {}
}

final class ma_device_config_aaudio
{
    public int $usage = 0;
    public int $contentType = 0;
    public int $inputPreset = 0;
    public int $allowedCapturePolicy = 0;
    public bool $noAutoStartAfterReroute = false;
    public bool $enableCompatibilityWorkarounds = false;
    public bool $allowSetBufferCapacity = false;

    public function __construct(int $usage = 0, int $contentType = 0, int $inputPreset = 0, int $allowedCapturePolicy = 0, bool $noAutoStartAfterReroute = false, bool $enableCompatibilityWorkarounds = false, bool $allowSetBufferCapacity = false) {}
}

final class ma_device_config_alsa
{
    public bool $noMMap = false;
    public bool $noAutoFormat = false;
    public bool $noAutoChannels = false;
    public bool $noAutoResample = false;

    public function __construct(bool $noMMap = false, bool $noAutoFormat = false, bool $noAutoChannels = false, bool $noAutoResample = false) {}
}

final class ma_device_config_capture
{
    public ?ma_device_id $pDeviceID = null;
    public int $format = 0;
    public int $channels = 0;
    public ?array $pChannelMap = null;
    public int $channelMixMode = 0;
    public bool $calculateLFEFromSpatialChannels = false;
    public int $shareMode = 0;

    public function __construct(?ma_device_id $pDeviceID = null, int $format = 0, int $channels = 0, ?array $pChannelMap = null, int $channelMixMode = 0, bool $calculateLFEFromSpatialChannels = false, int $shareMode = 0) {}
}

final class ma_device_config_coreaudio
{
    public bool $allowNominalSampleRateChange = false;

    public function __construct(bool $allowNominalSampleRateChange = false) {}
}

final class ma_device_config_opensl
{
    public int $streamType = 0;
    public int $recordingPreset = 0;
    public bool $enableCompatibilityWorkarounds = false;

    public function __construct(int $streamType = 0, int $recordingPreset = 0, bool $enableCompatibilityWorkarounds = false) {}
}

final class ma_device_config_playback
{
    public ?ma_device_id $pDeviceID = null;
    public int $format = 0;
    public int $channels = 0;
    public ?array $pChannelMap = null;
    public int $channelMixMode = 0;
    public bool $calculateLFEFromSpatialChannels = false;
    public int $shareMode = 0;

    public function __construct(?ma_device_id $pDeviceID = null, int $format = 0, int $channels = 0, ?array $pChannelMap = null, int $channelMixMode = 0, bool $calculateLFEFromSpatialChannels = false, int $shareMode = 0) {}
}

final class ma_device_config_pulse
{
    public ?string $pStreamNamePlayback = null;
    public ?string $pStreamNameCapture = null;
    public int $channelMap = 0;

    public function __construct(?string $pStreamNamePlayback = null, ?string $pStreamNameCapture = null, int $channelMap = 0) {}
}

final class ma_device_config_wasapi
{
    public int $usage = 0;
    public bool $noAutoConvertSRC = false;
    public bool $noDefaultQualitySRC = false;
    public bool $noAutoStreamRouting = false;
    public bool $noHardwareOffloading = false;
    public int $loopbackProcessID = 0;
    public bool $loopbackProcessExclude = false;

    public function __construct(int $usage = 0, bool $noAutoConvertSRC = false, bool $noDefaultQualitySRC = false, bool $noAutoStreamRouting = false, bool $noHardwareOffloading = false, int $loopbackProcessID = 0, bool $loopbackProcessExclude = false) {}
}

final class ma_device_descriptor
{
    public ?ma_device_id $pDeviceID = null;
    public int $shareMode = 0;
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public array $channelMap = [];
    public int $periodSizeInFrames = 0;
    public int $periodSizeInMilliseconds = 0;
    public int $periodCount = 0;

    public function __construct(?ma_device_id $pDeviceID = null, int $shareMode = 0, int $format = 0, int $channels = 0, int $sampleRate = 0, array $channelMap = [], int $periodSizeInFrames = 0, int $periodSizeInMilliseconds = 0, int $periodCount = 0) {}
}

final class ma_device_id
{
    public array $wasapi = [];
    public array $dsound = [];
    public int $winmm = 0;
    public string $alsa = '';
    public string $pulse = '';
    public int $jack = 0;
    public string $coreaudio = '';
    public string $sndio = '';
    public string $audio4 = '';
    public string $oss = '';
    public int $aaudio = 0;
    public int $opensl = 0;
    public string $webaudio = '';
    public ma_device_id_custom $custom;
    public int $nullbackend = 0;

    public function __construct(array $wasapi = [], array $dsound = [], int $winmm = 0, string $alsa = '', string $pulse = '', int $jack = 0, string $coreaudio = '', string $sndio = '', string $audio4 = '', string $oss = '', int $aaudio = 0, int $opensl = 0, string $webaudio = '', ?ma_device_id_custom $custom = null, int $nullbackend = 0) {}
}

final class ma_device_id_custom
{
    public int $i = 0;
    public string $s = '';
    public mixed $p = null;

    public function __construct(int $i = 0, string $s = '', mixed $p = null) {}
}

final class ma_device_info
{
    public ma_device_id $id;
    public string $name = '';
    public bool $isDefault = false;
    public int $nativeDataFormatCount = 0;
    public array $nativeDataFormats = [];

    public function __construct(?ma_device_id $id = null, string $name = '', bool $isDefault = false, int $nativeDataFormatCount = 0, array $nativeDataFormats = []) {}
}

final class ma_device_info_nativeDataFormats
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public int $flags = 0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, int $flags = 0) {}
}

final class ma_device_job_thread_config
{
    public bool $noThread = false;
    public int $jobQueueCapacity = 0;
    public int $jobQueueFlags = 0;

    public function __construct(bool $noThread = false, int $jobQueueCapacity = 0, int $jobQueueFlags = 0) {}
}

final class ma_device_notification
{
    public ?ma_device $pDevice = null;
    public int $type = 0;
    public ma_device_notification_data $data;

    public function __construct(?ma_device $pDevice = null, int $type = 0, ?ma_device_notification_data $data = null) {}
}

final class ma_device_notification_data
{
    public ma_device_notification_data_started $started;
    public ma_device_notification_data_stopped $stopped;
    public ma_device_notification_data_rerouted $rerouted;
    public ma_device_notification_data_interruption $interruption;

    public function __construct(?ma_device_notification_data_started $started = null, ?ma_device_notification_data_stopped $stopped = null, ?ma_device_notification_data_rerouted $rerouted = null, ?ma_device_notification_data_interruption $interruption = null) {}
}

final class ma_device_notification_data_interruption
{
    public int $_unused = 0;

    public function __construct(int $_unused = 0) {}
}

final class ma_device_notification_data_rerouted
{
    public int $_unused = 0;

    public function __construct(int $_unused = 0) {}
}

final class ma_device_notification_data_started
{
    public int $_unused = 0;

    public function __construct(int $_unused = 0) {}
}

final class ma_device_notification_data_stopped
{
    public int $_unused = 0;

    public function __construct(int $_unused = 0) {}
}

final class ma_encoder_config
{
    public int $encodingFormat = 0;
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public ma_allocation_callbacks $allocationCallbacks;

    public function __construct(int $encodingFormat = 0, int $format = 0, int $channels = 0, int $sampleRate = 0, ?ma_allocation_callbacks $allocationCallbacks = null) {}
}

final class ma_engine_config
{
    public ?ma_resource_manager $pResourceManager = null;
    public ?ma_context $pContext = null;
    public ?ma_device $pDevice = null;
    public ?ma_device_id $pPlaybackDeviceID = null;
    public ?Closure $dataCallback = null;
    public ?Closure $notificationCallback = null;
    public ?ma_log $pLog = null;
    public int $listenerCount = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public int $periodSizeInFrames = 0;
    public int $periodSizeInMilliseconds = 0;
    public int $gainSmoothTimeInFrames = 0;
    public int $gainSmoothTimeInMilliseconds = 0;
    public int $defaultVolumeSmoothTimeInPCMFrames = 0;
    public int $preMixStackSizeInBytes = 0;
    public ma_allocation_callbacks $allocationCallbacks;
    public bool $noAutoStart = false;
    public bool $noDevice = false;
    public int $monoExpansionMode = 0;
    public ?ma_vfs $pResourceManagerVFS = null;
    public ?Closure $onProcess = null;
    public mixed $pProcessUserData = null;
    public ma_resampler_config $resourceManagerResampling;
    public ma_resampler_config $pitchResampling;

    public function __construct(?ma_resource_manager $pResourceManager = null, ?ma_context $pContext = null, ?ma_device $pDevice = null, ?ma_device_id $pPlaybackDeviceID = null, ?Closure $dataCallback = null, ?Closure $notificationCallback = null, ?ma_log $pLog = null, int $listenerCount = 0, int $channels = 0, int $sampleRate = 0, int $periodSizeInFrames = 0, int $periodSizeInMilliseconds = 0, int $gainSmoothTimeInFrames = 0, int $gainSmoothTimeInMilliseconds = 0, int $defaultVolumeSmoothTimeInPCMFrames = 0, int $preMixStackSizeInBytes = 0, ?ma_allocation_callbacks $allocationCallbacks = null, bool $noAutoStart = false, bool $noDevice = false, int $monoExpansionMode = 0, ?ma_vfs $pResourceManagerVFS = null, ?Closure $onProcess = null, mixed $pProcessUserData = null, ?ma_resampler_config $resourceManagerResampling = null, ?ma_resampler_config $pitchResampling = null) {}
}

final class ma_engine_node_config
{
    public ?ma_engine $pEngine = null;
    public int $type = 0;
    public int $channelsIn = 0;
    public int $channelsOut = 0;
    public int $sampleRate = 0;
    public int $volumeSmoothTimeInPCMFrames = 0;
    public int $monoExpansionMode = 0;
    public bool $isPitchDisabled = false;
    public bool $isSpatializationDisabled = false;
    public int $pinnedListenerIndex = 0;
    public ma_resampler_config $resampling;

    public function __construct(?ma_engine $pEngine = null, int $type = 0, int $channelsIn = 0, int $channelsOut = 0, int $sampleRate = 0, int $volumeSmoothTimeInPCMFrames = 0, int $monoExpansionMode = 0, bool $isPitchDisabled = false, bool $isSpatializationDisabled = false, int $pinnedListenerIndex = 0, ?ma_resampler_config $resampling = null) {}
}

final class ma_fader_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0) {}
}

final class ma_file_info
{
    public int $sizeInBytes = 0;

    public function __construct(int $sizeInBytes = 0) {}
}

final class ma_gainer_config
{
    public int $channels = 0;
    public int $smoothTimeInFrames = 0;

    public function __construct(int $channels = 0, int $smoothTimeInFrames = 0) {}
}

final class ma_hishelf2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $gainDB = 0.0;
    public float $shelfSlope = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $gainDB = 0.0, float $shelfSlope = 0.0, float $frequency = 0.0) {}
}

final class ma_hishelf_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $gainDB = 0.0;
    public float $shelfSlope = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $gainDB = 0.0, float $shelfSlope = 0.0, float $frequency = 0.0) {}
}

final class ma_hishelf_node_config
{
    public ma_node_config $nodeConfig;
    public ma_hishelf_config $hishelf;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_hishelf_config $hishelf = null) {}
}

final class ma_hpf1_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public float $q = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, float $q = 0.0) {}
}

final class ma_hpf2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public float $q = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, float $q = 0.0) {}
}

final class ma_hpf_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public int $order = 0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, int $order = 0) {}
}

final class ma_hpf_node_config
{
    public ma_node_config $nodeConfig;
    public ma_hpf_config $hpf;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_hpf_config $hpf = null) {}
}

final class ma_job
{
    public ma_job_toc $toc;
    public int $next = 0;
    public int $order = 0;
    public ma_job_data $data;

    public function __construct(?ma_job_toc $toc = null, int $next = 0, int $order = 0, ?ma_job_data $data = null) {}
}

final class ma_job_data
{
    public ma_job_data_custom $custom;
    public ma_job_data_resourceManager $resourceManager;
    public ma_job_data_device $device;

    public function __construct(?ma_job_data_custom $custom = null, ?ma_job_data_resourceManager $resourceManager = null, ?ma_job_data_device $device = null) {}
}

final class ma_job_data_custom
{
    public ?Closure $proc = null;
    public int $data0 = 0;
    public int $data1 = 0;

    public function __construct(?Closure $proc = null, int $data0 = 0, int $data1 = 0) {}
}

final class ma_job_data_device
{
    public ma_job_data_device_aaudio $aaudio;

    public function __construct(?ma_job_data_device_aaudio $aaudio = null) {}
}

final class ma_job_data_device_aaudio
{
    public ma_job_data_device_aaudio_reroute $reroute;

    public function __construct(?ma_job_data_device_aaudio_reroute $reroute = null) {}
}

final class ma_job_data_device_aaudio_reroute
{
    public int $pDevice = 0;
    public int $deviceType = 0;

    public function __construct(int $pDevice = 0, int $deviceType = 0) {}
}

final class ma_job_data_resourceManager
{
    public ma_job_data_resourceManager_loadDataBufferNode $loadDataBufferNode;
    public ma_job_data_resourceManager_freeDataBufferNode $freeDataBufferNode;
    public ma_job_data_resourceManager_pageDataBufferNode $pageDataBufferNode;
    public ma_job_data_resourceManager_loadDataBuffer $loadDataBuffer;
    public ma_job_data_resourceManager_freeDataBuffer $freeDataBuffer;
    public ma_job_data_resourceManager_loadDataStream $loadDataStream;
    public ma_job_data_resourceManager_freeDataStream $freeDataStream;
    public ma_job_data_resourceManager_pageDataStream $pageDataStream;
    public ma_job_data_resourceManager_seekDataStream $seekDataStream;

    public function __construct(?ma_job_data_resourceManager_loadDataBufferNode $loadDataBufferNode = null, ?ma_job_data_resourceManager_freeDataBufferNode $freeDataBufferNode = null, ?ma_job_data_resourceManager_pageDataBufferNode $pageDataBufferNode = null, ?ma_job_data_resourceManager_loadDataBuffer $loadDataBuffer = null, ?ma_job_data_resourceManager_freeDataBuffer $freeDataBuffer = null, ?ma_job_data_resourceManager_loadDataStream $loadDataStream = null, ?ma_job_data_resourceManager_freeDataStream $freeDataStream = null, ?ma_job_data_resourceManager_pageDataStream $pageDataStream = null, ?ma_job_data_resourceManager_seekDataStream $seekDataStream = null) {}
}

final class ma_job_data_resourceManager_freeDataBuffer
{
    public int $pDataBuffer = 0;
    public int $pDoneNotification = 0;
    public int $pDoneFence = 0;

    public function __construct(int $pDataBuffer = 0, int $pDoneNotification = 0, int $pDoneFence = 0) {}
}

final class ma_job_data_resourceManager_freeDataBufferNode
{
    public int $pResourceManager = 0;
    public int $pDataBufferNode = 0;
    public int $pDoneNotification = 0;
    public int $pDoneFence = 0;

    public function __construct(int $pResourceManager = 0, int $pDataBufferNode = 0, int $pDoneNotification = 0, int $pDoneFence = 0) {}
}

final class ma_job_data_resourceManager_freeDataStream
{
    public int $pDataStream = 0;
    public int $pDoneNotification = 0;
    public int $pDoneFence = 0;

    public function __construct(int $pDataStream = 0, int $pDoneNotification = 0, int $pDoneFence = 0) {}
}

final class ma_job_data_resourceManager_loadDataBuffer
{
    public int $pDataBuffer = 0;
    public int $pInitNotification = 0;
    public int $pDoneNotification = 0;
    public int $pInitFence = 0;
    public int $pDoneFence = 0;
    public int $rangeBegInPCMFrames = 0;
    public int $rangeEndInPCMFrames = 0;
    public int $loopPointBegInPCMFrames = 0;
    public int $loopPointEndInPCMFrames = 0;
    public int $isLooping = 0;

    public function __construct(int $pDataBuffer = 0, int $pInitNotification = 0, int $pDoneNotification = 0, int $pInitFence = 0, int $pDoneFence = 0, int $rangeBegInPCMFrames = 0, int $rangeEndInPCMFrames = 0, int $loopPointBegInPCMFrames = 0, int $loopPointEndInPCMFrames = 0, int $isLooping = 0) {}
}

final class ma_job_data_resourceManager_loadDataBufferNode
{
    public int $pResourceManager = 0;
    public int $pDataBufferNode = 0;
    public int $pFilePath = 0;
    public int $pFilePathW = 0;
    public int $flags = 0;
    public int $pInitNotification = 0;
    public int $pDoneNotification = 0;
    public int $pInitFence = 0;
    public int $pDoneFence = 0;

    public function __construct(int $pResourceManager = 0, int $pDataBufferNode = 0, int $pFilePath = 0, int $pFilePathW = 0, int $flags = 0, int $pInitNotification = 0, int $pDoneNotification = 0, int $pInitFence = 0, int $pDoneFence = 0) {}
}

final class ma_job_data_resourceManager_loadDataStream
{
    public int $pDataStream = 0;
    public int $pFilePath = 0;
    public int $pFilePathW = 0;
    public int $initialSeekPoint = 0;
    public int $pInitNotification = 0;
    public int $pInitFence = 0;

    public function __construct(int $pDataStream = 0, int $pFilePath = 0, int $pFilePathW = 0, int $initialSeekPoint = 0, int $pInitNotification = 0, int $pInitFence = 0) {}
}

final class ma_job_data_resourceManager_pageDataBufferNode
{
    public int $pResourceManager = 0;
    public int $pDataBufferNode = 0;
    public int $pDecoder = 0;
    public int $pDoneNotification = 0;
    public int $pDoneFence = 0;

    public function __construct(int $pResourceManager = 0, int $pDataBufferNode = 0, int $pDecoder = 0, int $pDoneNotification = 0, int $pDoneFence = 0) {}
}

final class ma_job_data_resourceManager_pageDataStream
{
    public int $pDataStream = 0;
    public int $pageIndex = 0;

    public function __construct(int $pDataStream = 0, int $pageIndex = 0) {}
}

final class ma_job_data_resourceManager_seekDataStream
{
    public int $pDataStream = 0;
    public int $frameIndex = 0;

    public function __construct(int $pDataStream = 0, int $frameIndex = 0) {}
}

final class ma_job_queue_config
{
    public int $flags = 0;
    public int $capacity = 0;

    public function __construct(int $flags = 0, int $capacity = 0) {}
}

final class ma_job_toc
{
    public ma_job_toc_breakup $breakup;
    public int $allocation = 0;

    public function __construct(?ma_job_toc_breakup $breakup = null, int $allocation = 0) {}
}

final class ma_job_toc_breakup
{
    public int $code = 0;
    public int $slot = 0;
    public int $refcount = 0;

    public function __construct(int $code = 0, int $slot = 0, int $refcount = 0) {}
}

final class ma_linear_resampler_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRateIn = 0;
    public int $sampleRateOut = 0;
    public int $lpfOrder = 0;
    public float $lpfNyquistFactor = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRateIn = 0, int $sampleRateOut = 0, int $lpfOrder = 0, float $lpfNyquistFactor = 0.0) {}
}

final class ma_log_callback
{
    public ?Closure $onLog = null;
    public mixed $pUserData = null;

    public function __construct(?Closure $onLog = null, mixed $pUserData = null) {}
}

final class ma_loshelf2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $gainDB = 0.0;
    public float $shelfSlope = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $gainDB = 0.0, float $shelfSlope = 0.0, float $frequency = 0.0) {}
}

final class ma_loshelf_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $gainDB = 0.0;
    public float $shelfSlope = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $gainDB = 0.0, float $shelfSlope = 0.0, float $frequency = 0.0) {}
}

final class ma_loshelf_node_config
{
    public ma_node_config $nodeConfig;
    public ma_loshelf_config $loshelf;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_loshelf_config $loshelf = null) {}
}

final class ma_lpf1_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public float $q = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, float $q = 0.0) {}
}

final class ma_lpf2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public float $q = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, float $q = 0.0) {}
}

final class ma_lpf_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $cutoffFrequency = 0.0;
    public int $order = 0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $cutoffFrequency = 0.0, int $order = 0) {}
}

final class ma_lpf_node_config
{
    public ma_node_config $nodeConfig;
    public ma_lpf_config $lpf;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_lpf_config $lpf = null) {}
}

final class ma_node_config
{
    public ?ma_node_vtable $vtable = null;
    public int $initialState = 0;
    public int $inputBusCount = 0;
    public int $outputBusCount = 0;
    public ?array $pInputChannels = null;
    public ?array $pOutputChannels = null;

    public function __construct(?ma_node_vtable $vtable = null, int $initialState = 0, int $inputBusCount = 0, int $outputBusCount = 0, ?array $pInputChannels = null, ?array $pOutputChannels = null) {}
}

final class ma_node_graph_config
{
    public int $channels = 0;
    public int $processingSizeInFrames = 0;
    public int $preMixStackSizeInBytes = 0;

    public function __construct(int $channels = 0, int $processingSizeInFrames = 0, int $preMixStackSizeInBytes = 0) {}
}

final class ma_node_vtable
{
    public ?Closure $onProcess = null;
    public ?Closure $onGetRequiredInputFrameCount = null;
    public int $inputBusCount = 0;
    public int $outputBusCount = 0;
    public int $flags = 0;

    public function __construct(?Closure $onProcess = null, ?Closure $onGetRequiredInputFrameCount = null, int $inputBusCount = 0, int $outputBusCount = 0, int $flags = 0) {}
}

final class ma_noise_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $type = 0;
    public int $seed = 0;
    public float $amplitude = 0.0;
    public bool $duplicateChannels = false;

    public function __construct(int $format = 0, int $channels = 0, int $type = 0, int $seed = 0, float $amplitude = 0.0, bool $duplicateChannels = false) {}
}

final class ma_notch2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $q = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $q = 0.0, float $frequency = 0.0) {}
}

final class ma_notch_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $q = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $q = 0.0, float $frequency = 0.0) {}
}

final class ma_notch_node_config
{
    public ma_node_config $nodeConfig;
    public ma_notch_config $notch;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_notch_config $notch = null) {}
}

final class ma_paged_audio_buffer_config
{
    public ?ma_paged_audio_buffer_data $pData = null;

    public function __construct(?ma_paged_audio_buffer_data $pData = null) {}
}

final class ma_panner_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $mode = 0;
    public float $pan = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $mode = 0, float $pan = 0.0) {}
}

final class ma_peak2_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $gainDB = 0.0;
    public float $q = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $gainDB = 0.0, float $q = 0.0, float $frequency = 0.0) {}
}

final class ma_peak_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $gainDB = 0.0;
    public float $q = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $gainDB = 0.0, float $q = 0.0, float $frequency = 0.0) {}
}

final class ma_peak_node_config
{
    public ma_node_config $nodeConfig;
    public ma_peak_config $peak;

    public function __construct(?ma_node_config $nodeConfig = null, ?ma_peak_config $peak = null) {}
}

final class ma_pulsewave_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public float $dutyCycle = 0.0;
    public float $amplitude = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, float $dutyCycle = 0.0, float $amplitude = 0.0, float $frequency = 0.0) {}
}

final class ma_resampler_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRateIn = 0;
    public int $sampleRateOut = 0;
    public int $algorithm = 0;
    public ?ma_resampling_backend_vtable $pBackendVTable = null;
    public mixed $pBackendUserData = null;
    public ma_resampler_config_linear $linear;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRateIn = 0, int $sampleRateOut = 0, int $algorithm = 0, ?ma_resampling_backend_vtable $pBackendVTable = null, mixed $pBackendUserData = null, ?ma_resampler_config_linear $linear = null) {}
}

final class ma_resampler_config_linear
{
    public int $lpfOrder = 0;

    public function __construct(int $lpfOrder = 0) {}
}

final class ma_resampling_backend_vtable
{
    public ?Closure $onGetHeapSize = null;
    public ?Closure $onInit = null;
    public ?Closure $onUninit = null;
    public ?Closure $onProcess = null;
    public ?Closure $onSetRate = null;
    public ?Closure $onGetInputLatency = null;
    public ?Closure $onGetOutputLatency = null;
    public ?Closure $onGetRequiredInputFrameCount = null;
    public ?Closure $onGetExpectedOutputFrameCount = null;
    public ?Closure $onReset = null;

    public function __construct(?Closure $onGetHeapSize = null, ?Closure $onInit = null, ?Closure $onUninit = null, ?Closure $onProcess = null, ?Closure $onSetRate = null, ?Closure $onGetInputLatency = null, ?Closure $onGetOutputLatency = null, ?Closure $onGetRequiredInputFrameCount = null, ?Closure $onGetExpectedOutputFrameCount = null, ?Closure $onReset = null) {}
}

final class ma_resource_manager_config
{
    public ma_allocation_callbacks $allocationCallbacks;
    public ?ma_log $pLog = null;
    public int $decodedFormat = 0;
    public int $decodedChannels = 0;
    public int $decodedSampleRate = 0;
    public int $jobThreadCount = 0;
    public int $jobThreadStackSize = 0;
    public int $jobQueueCapacity = 0;
    public int $flags = 0;
    public ?ma_vfs $pVFS = null;
    public ?array $ppCustomDecodingBackendVTables = null;
    public int $customDecodingBackendCount = 0;
    public mixed $pCustomDecodingBackendUserData = null;
    public ma_resampler_config $resampling;

    public function __construct(?ma_allocation_callbacks $allocationCallbacks = null, ?ma_log $pLog = null, int $decodedFormat = 0, int $decodedChannels = 0, int $decodedSampleRate = 0, int $jobThreadCount = 0, int $jobThreadStackSize = 0, int $jobQueueCapacity = 0, int $flags = 0, ?ma_vfs $pVFS = null, ?array $ppCustomDecodingBackendVTables = null, int $customDecodingBackendCount = 0, mixed $pCustomDecodingBackendUserData = null, ?ma_resampler_config $resampling = null) {}
}

final class ma_resource_manager_data_source_config
{
    public ?string $pFilePath = null;
    public ?string $pFilePathW = null;
    public ?ma_resource_manager_pipeline_notifications $pNotifications = null;
    public int $initialSeekPointInPCMFrames = 0;
    public int $rangeBegInPCMFrames = 0;
    public int $rangeEndInPCMFrames = 0;
    public int $loopPointBegInPCMFrames = 0;
    public int $loopPointEndInPCMFrames = 0;
    public int $flags = 0;
    public bool $isLooping = false;

    public function __construct(?string $pFilePath = null, ?string $pFilePathW = null, ?ma_resource_manager_pipeline_notifications $pNotifications = null, int $initialSeekPointInPCMFrames = 0, int $rangeBegInPCMFrames = 0, int $rangeEndInPCMFrames = 0, int $loopPointBegInPCMFrames = 0, int $loopPointEndInPCMFrames = 0, int $flags = 0, bool $isLooping = false) {}
}

final class ma_resource_manager_pipeline_notifications
{
    public ma_resource_manager_pipeline_stage_notification $init;
    public ma_resource_manager_pipeline_stage_notification $done;

    public function __construct(?ma_resource_manager_pipeline_stage_notification $init = null, ?ma_resource_manager_pipeline_stage_notification $done = null) {}
}

final class ma_resource_manager_pipeline_stage_notification
{
    public ?ma_async_notification $pNotification = null;
    public ?ma_fence $pFence = null;

    public function __construct(?ma_async_notification $pNotification = null, ?ma_fence $pFence = null) {}
}

final class ma_slot_allocator_config
{
    public int $capacity = 0;

    public function __construct(int $capacity = 0) {}
}

final class ma_sound_config
{
    public ?string $pFilePath = null;
    public ?string $pFilePathW = null;
    public ?ma_data_source $pDataSource = null;
    public ?ma_node $pInitialAttachment = null;
    public int $initialAttachmentInputBusIndex = 0;
    public int $channelsIn = 0;
    public int $channelsOut = 0;
    public int $monoExpansionMode = 0;
    public int $flags = 0;
    public int $volumeSmoothTimeInPCMFrames = 0;
    public int $initialSeekPointInPCMFrames = 0;
    public int $rangeBegInPCMFrames = 0;
    public int $rangeEndInPCMFrames = 0;
    public int $loopPointBegInPCMFrames = 0;
    public int $loopPointEndInPCMFrames = 0;
    public ?Closure $endCallback = null;
    public mixed $pEndCallbackUserData = null;
    public ma_resampler_config $pitchResampling;
    public ma_resource_manager_pipeline_notifications $initNotifications;
    public ?ma_fence $pDoneFence = null;
    public bool $isLooping = false;

    public function __construct(?string $pFilePath = null, ?string $pFilePathW = null, ?ma_data_source $pDataSource = null, ?ma_node $pInitialAttachment = null, int $initialAttachmentInputBusIndex = 0, int $channelsIn = 0, int $channelsOut = 0, int $monoExpansionMode = 0, int $flags = 0, int $volumeSmoothTimeInPCMFrames = 0, int $initialSeekPointInPCMFrames = 0, int $rangeBegInPCMFrames = 0, int $rangeEndInPCMFrames = 0, int $loopPointBegInPCMFrames = 0, int $loopPointEndInPCMFrames = 0, ?Closure $endCallback = null, mixed $pEndCallbackUserData = null, ?ma_resampler_config $pitchResampling = null, ?ma_resource_manager_pipeline_notifications $initNotifications = null, ?ma_fence $pDoneFence = null, bool $isLooping = false) {}
}

final class ma_sound_group_config
{
    public ?string $pFilePath = null;
    public ?string $pFilePathW = null;
    public ?ma_data_source $pDataSource = null;
    public ?ma_node $pInitialAttachment = null;
    public int $initialAttachmentInputBusIndex = 0;
    public int $channelsIn = 0;
    public int $channelsOut = 0;
    public int $monoExpansionMode = 0;
    public int $flags = 0;
    public int $volumeSmoothTimeInPCMFrames = 0;
    public int $initialSeekPointInPCMFrames = 0;
    public int $rangeBegInPCMFrames = 0;
    public int $rangeEndInPCMFrames = 0;
    public int $loopPointBegInPCMFrames = 0;
    public int $loopPointEndInPCMFrames = 0;
    public ?Closure $endCallback = null;
    public mixed $pEndCallbackUserData = null;
    public ma_resampler_config $pitchResampling;
    public ma_resource_manager_pipeline_notifications $initNotifications;
    public ?ma_fence $pDoneFence = null;
    public bool $isLooping = false;

    public function __construct(?string $pFilePath = null, ?string $pFilePathW = null, ?ma_data_source $pDataSource = null, ?ma_node $pInitialAttachment = null, int $initialAttachmentInputBusIndex = 0, int $channelsIn = 0, int $channelsOut = 0, int $monoExpansionMode = 0, int $flags = 0, int $volumeSmoothTimeInPCMFrames = 0, int $initialSeekPointInPCMFrames = 0, int $rangeBegInPCMFrames = 0, int $rangeEndInPCMFrames = 0, int $loopPointBegInPCMFrames = 0, int $loopPointEndInPCMFrames = 0, ?Closure $endCallback = null, mixed $pEndCallbackUserData = null, ?ma_resampler_config $pitchResampling = null, ?ma_resource_manager_pipeline_notifications $initNotifications = null, ?ma_fence $pDoneFence = null, bool $isLooping = false) {}
}

final class ma_spatializer_config
{
    public int $channelsIn = 0;
    public int $channelsOut = 0;
    public ?array $pChannelMapIn = null;
    public int $attenuationModel = 0;
    public int $positioning = 0;
    public int $handedness = 0;
    public float $minGain = 0.0;
    public float $maxGain = 0.0;
    public float $minDistance = 0.0;
    public float $maxDistance = 0.0;
    public float $rolloff = 0.0;
    public float $coneInnerAngleInRadians = 0.0;
    public float $coneOuterAngleInRadians = 0.0;
    public float $coneOuterGain = 0.0;
    public float $dopplerFactor = 0.0;
    public float $directionalAttenuationFactor = 0.0;
    public float $minSpatializationChannelGain = 0.0;
    public int $gainSmoothTimeInFrames = 0;

    public function __construct(int $channelsIn = 0, int $channelsOut = 0, ?array $pChannelMapIn = null, int $attenuationModel = 0, int $positioning = 0, int $handedness = 0, float $minGain = 0.0, float $maxGain = 0.0, float $minDistance = 0.0, float $maxDistance = 0.0, float $rolloff = 0.0, float $coneInnerAngleInRadians = 0.0, float $coneOuterAngleInRadians = 0.0, float $coneOuterGain = 0.0, float $dopplerFactor = 0.0, float $directionalAttenuationFactor = 0.0, float $minSpatializationChannelGain = 0.0, int $gainSmoothTimeInFrames = 0) {}
}

final class ma_spatializer_listener_config
{
    public int $channelsOut = 0;
    public ?array $pChannelMapOut = null;
    public int $handedness = 0;
    public float $coneInnerAngleInRadians = 0.0;
    public float $coneOuterAngleInRadians = 0.0;
    public float $coneOuterGain = 0.0;
    public float $speedOfSound = 0.0;
    public ma_vec3f $worldUp;

    public function __construct(int $channelsOut = 0, ?array $pChannelMapOut = null, int $handedness = 0, float $coneInnerAngleInRadians = 0.0, float $coneOuterAngleInRadians = 0.0, float $coneOuterGain = 0.0, float $speedOfSound = 0.0, ?ma_vec3f $worldUp = null) {}
}

final class ma_splitter_node_config
{
    public ma_node_config $nodeConfig;
    public int $channels = 0;
    public int $outputBusCount = 0;

    public function __construct(?ma_node_config $nodeConfig = null, int $channels = 0, int $outputBusCount = 0) {}
}

final class ma_vec3f
{
    public float $x = 0.0;
    public float $y = 0.0;
    public float $z = 0.0;

    public function __construct(float $x = 0.0, float $y = 0.0, float $z = 0.0) {}
}

final class ma_vfs_callbacks implements ma_vfs
{
    public ?Closure $onOpen = null;
    public ?Closure $onOpenW = null;
    public ?Closure $onClose = null;
    public ?Closure $onRead = null;
    public ?Closure $onWrite = null;
    public ?Closure $onSeek = null;
    public ?Closure $onTell = null;
    public ?Closure $onInfo = null;

    public function __construct(?Closure $onOpen = null, ?Closure $onOpenW = null, ?Closure $onClose = null, ?Closure $onRead = null, ?Closure $onWrite = null, ?Closure $onSeek = null, ?Closure $onTell = null, ?Closure $onInfo = null) {}
}

final class ma_waveform_config
{
    public int $format = 0;
    public int $channels = 0;
    public int $sampleRate = 0;
    public int $type = 0;
    public float $amplitude = 0.0;
    public float $frequency = 0.0;

    public function __construct(int $format = 0, int $channels = 0, int $sampleRate = 0, int $type = 0, float $amplitude = 0.0, float $frequency = 0.0) {}
}

/** @not-serializable */
final class ma_async_notification_event implements ma_async_notification
{
}

/** @not-serializable */
final class ma_async_notification_poll implements ma_async_notification
{
}

/** @not-serializable */
final class ma_audio_buffer implements ma_data_source
{
}

/** @not-serializable */
final class ma_audio_buffer_ref implements ma_data_source
{
}

/** @not-serializable */
final class ma_biquad
{
}

/** @not-serializable */
final class ma_biquad_node implements ma_node
{
}

/** @not-serializable */
final class ma_bpf
{
}

/** @not-serializable */
final class ma_bpf2
{
}

/** @not-serializable */
final class ma_bpf_node implements ma_node
{
}

/** @not-serializable */
final class ma_channel_converter
{
}

/** @not-serializable */
final class ma_context
{
}

/** @not-serializable */
final class ma_data_converter
{
}

/** @not-serializable */
final class ma_data_source_base implements ma_data_source
{
}

/** @not-serializable */
final class ma_data_source_node implements ma_node
{
}

/** @not-serializable */
final class ma_decoder implements ma_data_source
{
}

/** @not-serializable */
final class ma_default_vfs implements ma_vfs
{
}

/** @not-serializable */
final class ma_delay
{
}

/** @not-serializable */
final class ma_delay_node implements ma_node
{
}

/** @not-serializable */
final class ma_device
{
}

/** @not-serializable */
final class ma_device_job_thread
{
}

/** @not-serializable */
final class ma_duplex_rb implements ma_data_source
{
}

/** @not-serializable */
final class ma_encoder
{
}

/** @not-serializable */
final class ma_engine implements ma_node
{
}

/** @not-serializable */
final class ma_engine_node implements ma_node
{
}

/** @not-serializable */
final class ma_event
{
}

/** @not-serializable */
final class ma_fader
{
}

/** @not-serializable */
final class ma_fence
{
}

/** @not-serializable */
final class ma_gainer
{
}

/** @not-serializable */
final class ma_hishelf2
{
}

/** @not-serializable */
final class ma_hishelf_node implements ma_node
{
}

/** @not-serializable */
final class ma_hpf
{
}

/** @not-serializable */
final class ma_hpf1
{
}

/** @not-serializable */
final class ma_hpf2
{
}

/** @not-serializable */
final class ma_hpf_node implements ma_node
{
}

/** @not-serializable */
final class ma_job_queue
{
}

/** @not-serializable */
final class ma_linear_resampler
{
}

/** @not-serializable */
final class ma_log
{
}

/** @not-serializable */
final class ma_loshelf2
{
}

/** @not-serializable */
final class ma_loshelf_node implements ma_node
{
}

/** @not-serializable */
final class ma_lpf
{
}

/** @not-serializable */
final class ma_lpf1
{
}

/** @not-serializable */
final class ma_lpf2
{
}

/** @not-serializable */
final class ma_lpf_node implements ma_node
{
}

/** @not-serializable */
final class ma_mutex
{
}

/** @not-serializable */
final class ma_node_base implements ma_node
{
}

/** @not-serializable */
final class ma_node_graph
{
}

/** @not-serializable */
final class ma_noise implements ma_data_source
{
}

/** @not-serializable */
final class ma_notch2
{
}

/** @not-serializable */
final class ma_notch_node implements ma_node
{
}

/** @not-serializable */
final class ma_paged_audio_buffer implements ma_data_source
{
}

/** @not-serializable */
final class ma_paged_audio_buffer_data
{
}

/** @not-serializable */
final class ma_paged_audio_buffer_page
{
}

/** @not-serializable */
final class ma_panner
{
}

/** @not-serializable */
final class ma_pcm_rb implements ma_data_source
{
}

/** @not-serializable */
final class ma_peak2
{
}

/** @not-serializable */
final class ma_peak_node implements ma_node
{
}

/** @not-serializable */
final class ma_pulsewave implements ma_data_source
{
}

/** @not-serializable */
final class ma_rb
{
}

/** @not-serializable */
final class ma_resampler
{
}

/** @not-serializable */
final class ma_resource_manager
{
}

/** @not-serializable */
final class ma_resource_manager_data_buffer implements ma_data_source
{
}

/** @not-serializable */
final class ma_resource_manager_data_source
{
}

/** @not-serializable */
final class ma_resource_manager_data_stream implements ma_data_source
{
}

/** @not-serializable */
final class ma_semaphore
{
}

/** @not-serializable */
final class ma_slot_allocator
{
}

/** @not-serializable */
final class ma_sound implements ma_node
{
}

/** @not-serializable */
final class ma_sound_group implements ma_node
{
}

/** @not-serializable */
final class ma_spatializer
{
}

/** @not-serializable */
final class ma_spatializer_listener
{
}

/** @not-serializable */
final class ma_spinlock
{
}

/** @not-serializable */
final class ma_splitter_node implements ma_node
{
}

/** @not-serializable */
final class ma_waveform implements ma_data_source
{
}

