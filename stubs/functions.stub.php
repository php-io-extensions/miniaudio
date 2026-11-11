<?php

/** @generate-class-entries */

function ma_version(?int &$pMajor, ?int &$pMinor, ?int &$pRevision): void {}

function ma_version_string(): ?string {}

function ma_log_init(?ma_allocation_callbacks $pAllocationCallbacks, ma_log $pLog): int {}

function ma_log_uninit(?ma_log $pLog): void {}

function ma_log_post(?ma_log $pLog, int $level, ?string $pMessage): int {}

function ma_biquad_config_init(int $format, int $channels, float $b0, float $b1, float $b2, float $a0, float $a1, float $a2): ma_biquad_config {}

function ma_biquad_get_heap_size(?ma_biquad_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_biquad_init_preallocated(?ma_biquad_config $pConfig, string $pHeap, ma_biquad $pBQ): int {}

function ma_biquad_init(?ma_biquad_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_biquad $pBQ): int {}

function ma_biquad_uninit(?ma_biquad $pBQ, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_biquad_reinit(?ma_biquad_config $pConfig, ?ma_biquad $pBQ): int {}

function ma_biquad_clear_cache(?ma_biquad $pBQ): int {}

function ma_biquad_process_pcm_frames(?ma_biquad $pBQ, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_biquad_get_latency(?ma_biquad $pBQ): int {}

function ma_lpf1_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency): ma_lpf1_config {}

function ma_lpf2_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency, float $q): ma_lpf2_config {}

function ma_lpf1_get_heap_size(?ma_lpf1_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_lpf1_init_preallocated(?ma_lpf1_config $pConfig, string $pHeap, ma_lpf1 $pLPF): int {}

function ma_lpf1_init(?ma_lpf1_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_lpf1 $pLPF): int {}

function ma_lpf1_uninit(?ma_lpf1 $pLPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_lpf1_reinit(?ma_lpf1_config $pConfig, ?ma_lpf1 $pLPF): int {}

function ma_lpf1_clear_cache(?ma_lpf1 $pLPF): int {}

function ma_lpf1_process_pcm_frames(?ma_lpf1 $pLPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_lpf1_get_latency(?ma_lpf1 $pLPF): int {}

function ma_lpf2_get_heap_size(?ma_lpf2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_lpf2_init_preallocated(?ma_lpf2_config $pConfig, string $pHeap, ma_lpf2 $pHPF): int {}

function ma_lpf2_init(?ma_lpf2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_lpf2 $pLPF): int {}

function ma_lpf2_uninit(?ma_lpf2 $pLPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_lpf2_reinit(?ma_lpf2_config $pConfig, ?ma_lpf2 $pLPF): int {}

function ma_lpf2_clear_cache(?ma_lpf2 $pLPF): int {}

function ma_lpf2_process_pcm_frames(?ma_lpf2 $pLPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_lpf2_get_latency(?ma_lpf2 $pLPF): int {}

function ma_lpf_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency, int $order): ma_lpf_config {}

function ma_lpf_get_heap_size(?ma_lpf_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_lpf_init_preallocated(?ma_lpf_config $pConfig, string $pHeap, ma_lpf $pLPF): int {}

function ma_lpf_init(?ma_lpf_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_lpf $pLPF): int {}

function ma_lpf_uninit(?ma_lpf $pLPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_lpf_reinit(?ma_lpf_config $pConfig, ?ma_lpf $pLPF): int {}

function ma_lpf_clear_cache(?ma_lpf $pLPF): int {}

function ma_lpf_process_pcm_frames(?ma_lpf $pLPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_lpf_get_latency(?ma_lpf $pLPF): int {}

function ma_hpf1_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency): ma_hpf1_config {}

function ma_hpf2_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency, float $q): ma_hpf2_config {}

function ma_hpf1_get_heap_size(?ma_hpf1_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_hpf1_init_preallocated(?ma_hpf1_config $pConfig, string $pHeap, ma_hpf1 $pLPF): int {}

function ma_hpf1_init(?ma_hpf1_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_hpf1 $pHPF): int {}

function ma_hpf1_uninit(?ma_hpf1 $pHPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_hpf1_reinit(?ma_hpf1_config $pConfig, ?ma_hpf1 $pHPF): int {}

function ma_hpf1_process_pcm_frames(?ma_hpf1 $pHPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_hpf1_get_latency(?ma_hpf1 $pHPF): int {}

function ma_hpf2_get_heap_size(?ma_hpf2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_hpf2_init_preallocated(?ma_hpf2_config $pConfig, string $pHeap, ma_hpf2 $pHPF): int {}

function ma_hpf2_init(?ma_hpf2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_hpf2 $pHPF): int {}

function ma_hpf2_uninit(?ma_hpf2 $pHPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_hpf2_reinit(?ma_hpf2_config $pConfig, ?ma_hpf2 $pHPF): int {}

function ma_hpf2_process_pcm_frames(?ma_hpf2 $pHPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_hpf2_get_latency(?ma_hpf2 $pHPF): int {}

function ma_hpf_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency, int $order): ma_hpf_config {}

function ma_hpf_get_heap_size(?ma_hpf_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_hpf_init_preallocated(?ma_hpf_config $pConfig, string $pHeap, ma_hpf $pLPF): int {}

function ma_hpf_init(?ma_hpf_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_hpf $pHPF): int {}

function ma_hpf_uninit(?ma_hpf $pHPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_hpf_reinit(?ma_hpf_config $pConfig, ?ma_hpf $pHPF): int {}

function ma_hpf_process_pcm_frames(?ma_hpf $pHPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_hpf_get_latency(?ma_hpf $pHPF): int {}

function ma_bpf2_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency, float $q): ma_bpf2_config {}

function ma_bpf2_get_heap_size(?ma_bpf2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_bpf2_init_preallocated(?ma_bpf2_config $pConfig, string $pHeap, ma_bpf2 $pBPF): int {}

function ma_bpf2_init(?ma_bpf2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_bpf2 $pBPF): int {}

function ma_bpf2_uninit(?ma_bpf2 $pBPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_bpf2_reinit(?ma_bpf2_config $pConfig, ?ma_bpf2 $pBPF): int {}

function ma_bpf2_process_pcm_frames(?ma_bpf2 $pBPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_bpf2_get_latency(?ma_bpf2 $pBPF): int {}

function ma_bpf_config_init(int $format, int $channels, int $sampleRate, float $cutoffFrequency, int $order): ma_bpf_config {}

function ma_bpf_get_heap_size(?ma_bpf_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_bpf_init_preallocated(?ma_bpf_config $pConfig, string $pHeap, ma_bpf $pBPF): int {}

function ma_bpf_init(?ma_bpf_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_bpf $pBPF): int {}

function ma_bpf_uninit(?ma_bpf $pBPF, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_bpf_reinit(?ma_bpf_config $pConfig, ?ma_bpf $pBPF): int {}

function ma_bpf_process_pcm_frames(?ma_bpf $pBPF, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_bpf_get_latency(?ma_bpf $pBPF): int {}

function ma_notch2_config_init(int $format, int $channels, int $sampleRate, float $q, float $frequency): ma_notch2_config {}

function ma_notch2_get_heap_size(?ma_notch2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_notch2_init_preallocated(?ma_notch2_config $pConfig, string $pHeap, ma_notch2 $pFilter): int {}

function ma_notch2_init(?ma_notch2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_notch2 $pFilter): int {}

function ma_notch2_uninit(?ma_notch2 $pFilter, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_notch2_reinit(?ma_notch2_config $pConfig, ?ma_notch2 $pFilter): int {}

function ma_notch2_process_pcm_frames(?ma_notch2 $pFilter, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_notch2_get_latency(?ma_notch2 $pFilter): int {}

function ma_peak2_config_init(int $format, int $channels, int $sampleRate, float $gainDB, float $q, float $frequency): ma_peak2_config {}

function ma_peak2_get_heap_size(?ma_peak2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_peak2_init_preallocated(?ma_peak2_config $pConfig, string $pHeap, ma_peak2 $pFilter): int {}

function ma_peak2_init(?ma_peak2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_peak2 $pFilter): int {}

function ma_peak2_uninit(?ma_peak2 $pFilter, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_peak2_reinit(?ma_peak2_config $pConfig, ?ma_peak2 $pFilter): int {}

function ma_peak2_process_pcm_frames(?ma_peak2 $pFilter, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_peak2_get_latency(?ma_peak2 $pFilter): int {}

function ma_loshelf2_config_init(int $format, int $channels, int $sampleRate, float $gainDB, float $shelfSlope, float $frequency): ma_loshelf2_config {}

function ma_loshelf2_get_heap_size(?ma_loshelf2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_loshelf2_init_preallocated(?ma_loshelf2_config $pConfig, string $pHeap, ma_loshelf2 $pFilter): int {}

function ma_loshelf2_init(?ma_loshelf2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_loshelf2 $pFilter): int {}

function ma_loshelf2_uninit(?ma_loshelf2 $pFilter, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_loshelf2_reinit(?ma_loshelf2_config $pConfig, ?ma_loshelf2 $pFilter): int {}

function ma_loshelf2_process_pcm_frames(?ma_loshelf2 $pFilter, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_loshelf2_get_latency(?ma_loshelf2 $pFilter): int {}

function ma_hishelf2_config_init(int $format, int $channels, int $sampleRate, float $gainDB, float $shelfSlope, float $frequency): ma_hishelf2_config {}

function ma_hishelf2_get_heap_size(?ma_hishelf2_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_hishelf2_init_preallocated(?ma_hishelf2_config $pConfig, string $pHeap, ma_hishelf2 $pFilter): int {}

function ma_hishelf2_init(?ma_hishelf2_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_hishelf2 $pFilter): int {}

function ma_hishelf2_uninit(?ma_hishelf2 $pFilter, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_hishelf2_reinit(?ma_hishelf2_config $pConfig, ?ma_hishelf2 $pFilter): int {}

function ma_hishelf2_process_pcm_frames(?ma_hishelf2 $pFilter, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_hishelf2_get_latency(?ma_hishelf2 $pFilter): int {}

function ma_delay_config_init(int $channels, int $sampleRate, int $delayInFrames, float $decay): ma_delay_config {}

function ma_delay_init(?ma_delay_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_delay $pDelay): int {}

function ma_delay_uninit(?ma_delay $pDelay, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_delay_process_pcm_frames(?ma_delay $pDelay, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_delay_set_wet(?ma_delay $pDelay, float $value): void {}

function ma_delay_get_wet(?ma_delay $pDelay): float {}

function ma_delay_set_dry(?ma_delay $pDelay, float $value): void {}

function ma_delay_get_dry(?ma_delay $pDelay): float {}

function ma_delay_set_decay(?ma_delay $pDelay, float $value): void {}

function ma_delay_get_decay(?ma_delay $pDelay): float {}

function ma_gainer_config_init(int $channels, int $smoothTimeInFrames): ma_gainer_config {}

function ma_gainer_get_heap_size(?ma_gainer_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_gainer_init_preallocated(?ma_gainer_config $pConfig, string $pHeap, ma_gainer $pGainer): int {}

function ma_gainer_init(?ma_gainer_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_gainer $pGainer): int {}

function ma_gainer_uninit(?ma_gainer $pGainer, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_gainer_process_pcm_frames(?ma_gainer $pGainer, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_gainer_set_gain(?ma_gainer $pGainer, float $newGain): int {}

function ma_gainer_set_gains(?ma_gainer $pGainer, ?float &$pNewGains): int {}

function ma_gainer_set_master_volume(?ma_gainer $pGainer, float $volume): int {}

function ma_gainer_get_master_volume(?ma_gainer $pGainer, ?float &$pVolume): int {}

function ma_panner_config_init(int $format, int $channels): ma_panner_config {}

function ma_panner_init(?ma_panner_config $pConfig, ma_panner $pPanner): int {}

function ma_panner_process_pcm_frames(?ma_panner $pPanner, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_panner_set_mode(?ma_panner $pPanner, int $mode): void {}

function ma_panner_get_mode(?ma_panner $pPanner): int {}

function ma_panner_set_pan(?ma_panner $pPanner, float $pan): void {}

function ma_panner_get_pan(?ma_panner $pPanner): float {}

function ma_fader_config_init(int $format, int $channels, int $sampleRate): ma_fader_config {}

function ma_fader_init(?ma_fader_config $pConfig, ma_fader $pFader): int {}

function ma_fader_process_pcm_frames(?ma_fader $pFader, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_fader_get_data_format(?ma_fader $pFader, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate): void {}

function ma_fader_set_fade(?ma_fader $pFader, float $volumeBeg, float $volumeEnd, int $lengthInFrames): void {}

function ma_fader_set_fade_ex(?ma_fader $pFader, float $volumeBeg, float $volumeEnd, int $lengthInFrames, int $startOffsetInFrames): void {}

function ma_fader_get_current_volume(?ma_fader $pFader): float {}

function ma_spatializer_listener_config_init(int $channelsOut): ma_spatializer_listener_config {}

function ma_spatializer_listener_get_heap_size(?ma_spatializer_listener_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_spatializer_listener_init_preallocated(?ma_spatializer_listener_config $pConfig, string $pHeap, ma_spatializer_listener $pListener): int {}

function ma_spatializer_listener_init(?ma_spatializer_listener_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_spatializer_listener $pListener): int {}

function ma_spatializer_listener_uninit(?ma_spatializer_listener $pListener, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_spatializer_listener_get_channel_map(?ma_spatializer_listener $pListener): ?array {}

function ma_spatializer_listener_set_cone(?ma_spatializer_listener $pListener, float $innerAngleInRadians, float $outerAngleInRadians, float $outerGain): void {}

function ma_spatializer_listener_get_cone(?ma_spatializer_listener $pListener, ?float &$pInnerAngleInRadians, ?float &$pOuterAngleInRadians, ?float &$pOuterGain): void {}

function ma_spatializer_listener_set_position(?ma_spatializer_listener $pListener, float $x, float $y, float $z): void {}

function ma_spatializer_listener_get_position(?ma_spatializer_listener $pListener): ma_vec3f {}

function ma_spatializer_listener_set_direction(?ma_spatializer_listener $pListener, float $x, float $y, float $z): void {}

function ma_spatializer_listener_get_direction(?ma_spatializer_listener $pListener): ma_vec3f {}

function ma_spatializer_listener_set_velocity(?ma_spatializer_listener $pListener, float $x, float $y, float $z): void {}

function ma_spatializer_listener_get_velocity(?ma_spatializer_listener $pListener): ma_vec3f {}

function ma_spatializer_listener_set_speed_of_sound(?ma_spatializer_listener $pListener, float $speedOfSound): void {}

function ma_spatializer_listener_get_speed_of_sound(?ma_spatializer_listener $pListener): float {}

function ma_spatializer_listener_set_world_up(?ma_spatializer_listener $pListener, float $x, float $y, float $z): void {}

function ma_spatializer_listener_get_world_up(?ma_spatializer_listener $pListener): ma_vec3f {}

function ma_spatializer_listener_set_enabled(?ma_spatializer_listener $pListener, bool $isEnabled): void {}

function ma_spatializer_listener_is_enabled(?ma_spatializer_listener $pListener): bool {}

function ma_spatializer_config_init(int $channelsIn, int $channelsOut): ma_spatializer_config {}

function ma_spatializer_get_heap_size(?ma_spatializer_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_spatializer_init_preallocated(?ma_spatializer_config $pConfig, string $pHeap, ma_spatializer $pSpatializer): int {}

function ma_spatializer_init(?ma_spatializer_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_spatializer $pSpatializer): int {}

function ma_spatializer_uninit(?ma_spatializer $pSpatializer, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_spatializer_process_pcm_frames(?ma_spatializer $pSpatializer, ?ma_spatializer_listener $pListener, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_spatializer_set_master_volume(?ma_spatializer $pSpatializer, float $volume): int {}

function ma_spatializer_get_master_volume(?ma_spatializer $pSpatializer, ?float &$pVolume): int {}

function ma_spatializer_get_input_channels(?ma_spatializer $pSpatializer): int {}

function ma_spatializer_get_output_channels(?ma_spatializer $pSpatializer): int {}

function ma_spatializer_set_attenuation_model(?ma_spatializer $pSpatializer, int $attenuationModel): void {}

function ma_spatializer_get_attenuation_model(?ma_spatializer $pSpatializer): int {}

function ma_spatializer_set_positioning(?ma_spatializer $pSpatializer, int $positioning): void {}

function ma_spatializer_get_positioning(?ma_spatializer $pSpatializer): int {}

function ma_spatializer_set_rolloff(?ma_spatializer $pSpatializer, float $rolloff): void {}

function ma_spatializer_get_rolloff(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_min_gain(?ma_spatializer $pSpatializer, float $minGain): void {}

function ma_spatializer_get_min_gain(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_max_gain(?ma_spatializer $pSpatializer, float $maxGain): void {}

function ma_spatializer_get_max_gain(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_min_distance(?ma_spatializer $pSpatializer, float $minDistance): void {}

function ma_spatializer_get_min_distance(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_max_distance(?ma_spatializer $pSpatializer, float $maxDistance): void {}

function ma_spatializer_get_max_distance(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_cone(?ma_spatializer $pSpatializer, float $innerAngleInRadians, float $outerAngleInRadians, float $outerGain): void {}

function ma_spatializer_get_cone(?ma_spatializer $pSpatializer, ?float &$pInnerAngleInRadians, ?float &$pOuterAngleInRadians, ?float &$pOuterGain): void {}

function ma_spatializer_set_doppler_factor(?ma_spatializer $pSpatializer, float $dopplerFactor): void {}

function ma_spatializer_get_doppler_factor(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_directional_attenuation_factor(?ma_spatializer $pSpatializer, float $directionalAttenuationFactor): void {}

function ma_spatializer_get_directional_attenuation_factor(?ma_spatializer $pSpatializer): float {}

function ma_spatializer_set_position(?ma_spatializer $pSpatializer, float $x, float $y, float $z): void {}

function ma_spatializer_get_position(?ma_spatializer $pSpatializer): ma_vec3f {}

function ma_spatializer_set_direction(?ma_spatializer $pSpatializer, float $x, float $y, float $z): void {}

function ma_spatializer_get_direction(?ma_spatializer $pSpatializer): ma_vec3f {}

function ma_spatializer_set_velocity(?ma_spatializer $pSpatializer, float $x, float $y, float $z): void {}

function ma_spatializer_get_velocity(?ma_spatializer $pSpatializer): ma_vec3f {}

function ma_spatializer_get_relative_position_and_direction(?ma_spatializer $pSpatializer, ?ma_spatializer_listener $pListener, ?ma_vec3f $pRelativePos, ?ma_vec3f $pRelativeDir): void {}

function ma_linear_resampler_config_init(int $format, int $channels, int $sampleRateIn, int $sampleRateOut): ma_linear_resampler_config {}

function ma_linear_resampler_get_heap_size(?ma_linear_resampler_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_linear_resampler_init_preallocated(?ma_linear_resampler_config $pConfig, string $pHeap, ma_linear_resampler $pResampler): int {}

function ma_linear_resampler_init(?ma_linear_resampler_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_linear_resampler $pResampler): int {}

function ma_linear_resampler_uninit(?ma_linear_resampler $pResampler, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_linear_resampler_process_pcm_frames(?ma_linear_resampler $pResampler, string $pFramesIn, ?int &$pFrameCountIn, ?string &$pFramesOut, ?int &$pFrameCountOut): int {}

function ma_linear_resampler_set_rate(?ma_linear_resampler $pResampler, int $sampleRateIn, int $sampleRateOut): int {}

function ma_linear_resampler_set_rate_ratio(?ma_linear_resampler $pResampler, float $ratioInOut): int {}

function ma_linear_resampler_get_input_latency(?ma_linear_resampler $pResampler): int {}

function ma_linear_resampler_get_output_latency(?ma_linear_resampler $pResampler): int {}

function ma_linear_resampler_get_required_input_frame_count(?ma_linear_resampler $pResampler, int $outputFrameCount, ?int &$pInputFrameCount): int {}

function ma_linear_resampler_get_expected_output_frame_count(?ma_linear_resampler $pResampler, int $inputFrameCount, ?int &$pOutputFrameCount): int {}

function ma_linear_resampler_reset(?ma_linear_resampler $pResampler): int {}

function ma_resampler_config_init(int $format, int $channels, int $sampleRateIn, int $sampleRateOut, int $algorithm): ma_resampler_config {}

function ma_resampler_get_heap_size(?ma_resampler_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_resampler_init_preallocated(?ma_resampler_config $pConfig, string $pHeap, ma_resampler $pResampler): int {}

function ma_resampler_init(?ma_resampler_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_resampler $pResampler): int {}

function ma_resampler_uninit(?ma_resampler $pResampler, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_resampler_process_pcm_frames(?ma_resampler $pResampler, string $pFramesIn, ?int &$pFrameCountIn, ?string &$pFramesOut, ?int &$pFrameCountOut): int {}

function ma_resampler_set_rate(?ma_resampler $pResampler, int $sampleRateIn, int $sampleRateOut): int {}

function ma_resampler_set_rate_ratio(?ma_resampler $pResampler, float $ratio): int {}

function ma_resampler_get_input_latency(?ma_resampler $pResampler): int {}

function ma_resampler_get_output_latency(?ma_resampler $pResampler): int {}

function ma_resampler_get_required_input_frame_count(?ma_resampler $pResampler, int $outputFrameCount, ?int &$pInputFrameCount): int {}

function ma_resampler_get_expected_output_frame_count(?ma_resampler $pResampler, int $inputFrameCount, ?int &$pOutputFrameCount): int {}

function ma_resampler_reset(?ma_resampler $pResampler): int {}

function ma_channel_converter_config_init(int $format, int $channelsIn, ?array $pChannelMapIn, int $channelsOut, ?array $pChannelMapOut, int $mixingMode): ma_channel_converter_config {}

function ma_channel_converter_get_heap_size(?ma_channel_converter_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_channel_converter_init_preallocated(?ma_channel_converter_config $pConfig, string $pHeap, ma_channel_converter $pConverter): int {}

function ma_channel_converter_init(?ma_channel_converter_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_channel_converter $pConverter): int {}

function ma_channel_converter_uninit(?ma_channel_converter $pConverter, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_channel_converter_process_pcm_frames(?ma_channel_converter $pConverter, ?string &$pFramesOut, string $pFramesIn, int $frameCount): int {}

function ma_channel_converter_get_input_channel_map(?ma_channel_converter $pConverter, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_channel_converter_get_output_channel_map(?ma_channel_converter $pConverter, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_data_converter_config_init_default(): ma_data_converter_config {}

function ma_data_converter_config_init(int $formatIn, int $formatOut, int $channelsIn, int $channelsOut, int $sampleRateIn, int $sampleRateOut): ma_data_converter_config {}

function ma_data_converter_get_heap_size(?ma_data_converter_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_data_converter_init_preallocated(?ma_data_converter_config $pConfig, string $pHeap, ma_data_converter $pConverter): int {}

function ma_data_converter_init(?ma_data_converter_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_data_converter $pConverter): int {}

function ma_data_converter_uninit(?ma_data_converter $pConverter, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_data_converter_process_pcm_frames(?ma_data_converter $pConverter, string $pFramesIn, ?int &$pFrameCountIn, ?string &$pFramesOut, ?int &$pFrameCountOut): int {}

function ma_data_converter_set_rate(?ma_data_converter $pConverter, int $sampleRateIn, int $sampleRateOut): int {}

function ma_data_converter_set_rate_ratio(?ma_data_converter $pConverter, float $ratioInOut): int {}

function ma_data_converter_get_input_latency(?ma_data_converter $pConverter): int {}

function ma_data_converter_get_output_latency(?ma_data_converter $pConverter): int {}

function ma_data_converter_get_required_input_frame_count(?ma_data_converter $pConverter, int $outputFrameCount, ?int &$pInputFrameCount): int {}

function ma_data_converter_get_expected_output_frame_count(?ma_data_converter $pConverter, int $inputFrameCount, ?int &$pOutputFrameCount): int {}

function ma_data_converter_get_input_channel_map(?ma_data_converter $pConverter, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_data_converter_get_output_channel_map(?ma_data_converter $pConverter, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_data_converter_reset(?ma_data_converter $pConverter): int {}

function ma_pcm_u8_to_s16(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_u8_to_s24(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_u8_to_s32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_u8_to_f32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s16_to_u8(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s16_to_s24(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s16_to_s32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s16_to_f32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s24_to_u8(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s24_to_s16(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s24_to_s32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s24_to_f32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s32_to_u8(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s32_to_s16(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s32_to_s24(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_s32_to_f32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_f32_to_u8(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_f32_to_s16(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_f32_to_s24(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_f32_to_s32(?string &$pOut, string $pIn, int $count, int $ditherMode): void {}

function ma_pcm_convert(?string &$pOut, int $formatOut, string $pIn, int $formatIn, int $sampleCount, int $ditherMode): void {}

function ma_convert_pcm_frames_format(?string &$pOut, int $formatOut, string $pIn, int $formatIn, int $frameCount, int $channels, int $ditherMode): void {}

function ma_channel_map_get_channel(?array $pChannelMap, int $channelCount, int $channelIndex): int {}

function ma_channel_map_init_blank(?array &$pChannelMap, int $channels): void {}

function ma_channel_map_init_standard(int $standardChannelMap, ?array &$pChannelMap, int $channelMapCap, int $channels): void {}

function ma_channel_map_copy(?array &$pOut, ?array $pIn, int $channels): void {}

function ma_channel_map_copy_or_default(?array &$pOut, int $channelMapCapOut, ?array $pIn, int $channels): void {}

function ma_channel_map_is_valid(?array $pChannelMap, int $channels): bool {}

function ma_channel_map_is_equal(?array $pChannelMapA, ?array $pChannelMapB, int $channels): bool {}

function ma_channel_map_is_blank(?array $pChannelMap, int $channels): bool {}

function ma_channel_map_contains_channel_position(int $channels, ?array $pChannelMap, int $channelPosition): bool {}

function ma_channel_map_find_channel_position(int $channels, ?array $pChannelMap, int $channelPosition, ?int &$pChannelIndex): bool {}

function ma_channel_map_to_string(?array $pChannelMap, int $channels, ?string &$pBufferOut, int $bufferCap): int {}

function ma_channel_position_to_string(int $channel): ?string {}

function ma_convert_frames(?string &$pOut, int $frameCountOut, int $formatOut, int $channelsOut, int $sampleRateOut, string $pIn, int $frameCountIn, int $formatIn, int $channelsIn, int $sampleRateIn): int {}

function ma_convert_frames_ex(?string &$pOut, int $frameCountOut, string $pIn, int $frameCountIn, ?ma_data_converter_config $pConfig): int {}

function ma_data_source_config_init(): ma_data_source_config {}

function ma_data_source_init(?ma_data_source_config $pConfig, ma_data_source_base $pDataSource): int {}

function ma_data_source_uninit(?ma_data_source $pDataSource): void {}

function ma_data_source_read_pcm_frames(?ma_data_source $pDataSource, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_data_source_seek_pcm_frames(?ma_data_source $pDataSource, int $frameCount, ?int &$pFramesSeeked): int {}

function ma_data_source_seek_to_pcm_frame(?ma_data_source $pDataSource, int $frameIndex): int {}

function ma_data_source_seek_seconds(?ma_data_source $pDataSource, float $secondCount, ?float &$pSecondsSeeked): int {}

function ma_data_source_seek_to_second(?ma_data_source $pDataSource, float $seekPointInSeconds): int {}

function ma_data_source_get_data_format(?ma_data_source $pDataSource, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_data_source_get_cursor_in_pcm_frames(?ma_data_source $pDataSource, ?int &$pCursor): int {}

function ma_data_source_get_length_in_pcm_frames(?ma_data_source $pDataSource, ?int &$pLength): int {}

function ma_data_source_get_cursor_in_seconds(?ma_data_source $pDataSource, ?float &$pCursor): int {}

function ma_data_source_get_length_in_seconds(?ma_data_source $pDataSource, ?float &$pLength): int {}

function ma_data_source_set_looping(?ma_data_source $pDataSource, bool $isLooping): int {}

function ma_data_source_is_looping(?ma_data_source $pDataSource): bool {}

function ma_data_source_set_range_in_pcm_frames(?ma_data_source $pDataSource, int $rangeBegInFrames, int $rangeEndInFrames): int {}

function ma_data_source_get_range_in_pcm_frames(?ma_data_source $pDataSource, ?int &$pRangeBegInFrames, ?int &$pRangeEndInFrames): void {}

function ma_data_source_set_loop_point_in_pcm_frames(?ma_data_source $pDataSource, int $loopBegInFrames, int $loopEndInFrames): int {}

function ma_data_source_get_loop_point_in_pcm_frames(?ma_data_source $pDataSource, ?int &$pLoopBegInFrames, ?int &$pLoopEndInFrames): void {}

function ma_data_source_set_current(?ma_data_source $pDataSource, ?ma_data_source $pCurrentDataSource): int {}

function ma_data_source_get_current(?ma_data_source $pDataSource): ?ma_data_source {}

function ma_data_source_set_next(?ma_data_source $pDataSource, ?ma_data_source $pNextDataSource): int {}

function ma_data_source_get_next(?ma_data_source $pDataSource): ?ma_data_source {}

function ma_data_source_set_next_callback(?ma_data_source $pDataSource, ?callable $onGetNext): int {}

function ma_audio_buffer_ref_init(int $format, int $channels, ?string $pData, int $sizeInFrames, ma_audio_buffer_ref $pAudioBufferRef): int {}

function ma_audio_buffer_ref_uninit(?ma_audio_buffer_ref $pAudioBufferRef): void {}

function ma_audio_buffer_ref_set_data(?ma_audio_buffer_ref $pAudioBufferRef, ?string $pData, int $sizeInFrames): int {}

function ma_audio_buffer_ref_read_pcm_frames(?ma_audio_buffer_ref $pAudioBufferRef, ?string &$pFramesOut, int $frameCount, bool $loop): int {}

function ma_audio_buffer_ref_seek_to_pcm_frame(?ma_audio_buffer_ref $pAudioBufferRef, int $frameIndex): int {}

function ma_audio_buffer_ref_unmap(?ma_audio_buffer_ref $pAudioBufferRef, int $frameCount): int {}

function ma_audio_buffer_ref_at_end(?ma_audio_buffer_ref $pAudioBufferRef): bool {}

function ma_audio_buffer_ref_get_cursor_in_pcm_frames(?ma_audio_buffer_ref $pAudioBufferRef, ?int &$pCursor): int {}

function ma_audio_buffer_ref_get_length_in_pcm_frames(?ma_audio_buffer_ref $pAudioBufferRef, ?int &$pLength): int {}

function ma_audio_buffer_ref_get_available_frames(?ma_audio_buffer_ref $pAudioBufferRef, ?int &$pAvailableFrames): int {}

function ma_audio_buffer_config_init(int $format, int $channels, int $sizeInFrames, ?string $pData, ?ma_allocation_callbacks $pAllocationCallbacks): ma_audio_buffer_config {}

function ma_audio_buffer_init(?ma_audio_buffer_config $pConfig, ma_audio_buffer $pAudioBuffer): int {}

function ma_audio_buffer_init_copy(?ma_audio_buffer_config $pConfig, ma_audio_buffer $pAudioBuffer): int {}

function ma_audio_buffer_uninit(?ma_audio_buffer $pAudioBuffer): void {}

function ma_audio_buffer_read_pcm_frames(?ma_audio_buffer $pAudioBuffer, ?string &$pFramesOut, int $frameCount, bool $loop): int {}

function ma_audio_buffer_seek_to_pcm_frame(?ma_audio_buffer $pAudioBuffer, int $frameIndex): int {}

function ma_audio_buffer_unmap(?ma_audio_buffer $pAudioBuffer, int $frameCount): int {}

function ma_audio_buffer_at_end(?ma_audio_buffer $pAudioBuffer): bool {}

function ma_audio_buffer_get_cursor_in_pcm_frames(?ma_audio_buffer $pAudioBuffer, ?int &$pCursor): int {}

function ma_audio_buffer_get_length_in_pcm_frames(?ma_audio_buffer $pAudioBuffer, ?int &$pLength): int {}

function ma_audio_buffer_get_available_frames(?ma_audio_buffer $pAudioBuffer, ?int &$pAvailableFrames): int {}

function ma_paged_audio_buffer_data_init(int $format, int $channels, ma_paged_audio_buffer_data $pData): int {}

function ma_paged_audio_buffer_data_uninit(?ma_paged_audio_buffer_data $pData, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_paged_audio_buffer_data_get_head(?ma_paged_audio_buffer_data $pData): ?ma_paged_audio_buffer_page {}

function ma_paged_audio_buffer_data_get_tail(?ma_paged_audio_buffer_data $pData): ?ma_paged_audio_buffer_page {}

function ma_paged_audio_buffer_data_get_length_in_pcm_frames(?ma_paged_audio_buffer_data $pData, ?int &$pLength): int {}

function ma_paged_audio_buffer_data_allocate_and_append_page(?ma_paged_audio_buffer_data $pData, int $pageSizeInFrames, ?string $pInitialData, ?ma_allocation_callbacks $pAllocationCallbacks): int {}

function ma_paged_audio_buffer_config_init(?ma_paged_audio_buffer_data $pData): ma_paged_audio_buffer_config {}

function ma_paged_audio_buffer_init(?ma_paged_audio_buffer_config $pConfig, ma_paged_audio_buffer $pPagedAudioBuffer): int {}

function ma_paged_audio_buffer_uninit(?ma_paged_audio_buffer $pPagedAudioBuffer): void {}

function ma_paged_audio_buffer_read_pcm_frames(?ma_paged_audio_buffer $pPagedAudioBuffer, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_paged_audio_buffer_seek_to_pcm_frame(?ma_paged_audio_buffer $pPagedAudioBuffer, int $frameIndex): int {}

function ma_paged_audio_buffer_get_cursor_in_pcm_frames(?ma_paged_audio_buffer $pPagedAudioBuffer, ?int &$pCursor): int {}

function ma_paged_audio_buffer_get_length_in_pcm_frames(?ma_paged_audio_buffer $pPagedAudioBuffer, ?int &$pLength): int {}

function ma_rb_init_ex(int $subbufferSizeInBytes, int $subbufferCount, int $subbufferStrideInBytes, ?string $pOptionalPreallocatedBuffer, ?ma_allocation_callbacks $pAllocationCallbacks, ma_rb $pRB): int {}

function ma_rb_init(int $bufferSizeInBytes, ?string $pOptionalPreallocatedBuffer, ?ma_allocation_callbacks $pAllocationCallbacks, ma_rb $pRB): int {}

function ma_rb_uninit(?ma_rb $pRB): void {}

function ma_rb_reset(?ma_rb $pRB): void {}

function ma_rb_commit_read(?ma_rb $pRB, int $sizeInBytes): int {}

function ma_rb_seek_read(?ma_rb $pRB, int $offsetInBytes): int {}

function ma_rb_seek_write(?ma_rb $pRB, int $offsetInBytes): int {}

function ma_rb_pointer_distance(?ma_rb $pRB): int {}

function ma_rb_available_read(?ma_rb $pRB): int {}

function ma_rb_available_write(?ma_rb $pRB): int {}

function ma_rb_get_subbuffer_size(?ma_rb $pRB): int {}

function ma_rb_get_subbuffer_stride(?ma_rb $pRB): int {}

function ma_rb_get_subbuffer_offset(?ma_rb $pRB, int $subbufferIndex): int {}

function ma_pcm_rb_init_ex(int $format, int $channels, int $subbufferSizeInFrames, int $subbufferCount, int $subbufferStrideInFrames, ?string $pOptionalPreallocatedBuffer, ?ma_allocation_callbacks $pAllocationCallbacks, ma_pcm_rb $pRB): int {}

function ma_pcm_rb_init(int $format, int $channels, int $bufferSizeInFrames, ?string $pOptionalPreallocatedBuffer, ?ma_allocation_callbacks $pAllocationCallbacks, ma_pcm_rb $pRB): int {}

function ma_pcm_rb_uninit(?ma_pcm_rb $pRB): void {}

function ma_pcm_rb_reset(?ma_pcm_rb $pRB): void {}

function ma_pcm_rb_commit_read(?ma_pcm_rb $pRB, int $sizeInFrames): int {}

function ma_pcm_rb_seek_read(?ma_pcm_rb $pRB, int $offsetInFrames): int {}

function ma_pcm_rb_seek_write(?ma_pcm_rb $pRB, int $offsetInFrames): int {}

function ma_pcm_rb_pointer_distance(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_available_read(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_available_write(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_get_subbuffer_size(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_get_subbuffer_stride(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_get_subbuffer_offset(?ma_pcm_rb $pRB, int $subbufferIndex): int {}

function ma_pcm_rb_get_format(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_get_channels(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_get_sample_rate(?ma_pcm_rb $pRB): int {}

function ma_pcm_rb_set_sample_rate(?ma_pcm_rb $pRB, int $sampleRate): void {}

function ma_duplex_rb_init(int $captureFormat, int $captureChannels, int $sampleRate, int $captureInternalSampleRate, int $captureInternalPeriodSizeInFrames, ?ma_allocation_callbacks $pAllocationCallbacks, ma_duplex_rb $pRB): int {}

function ma_duplex_rb_uninit(?ma_duplex_rb $pRB): int {}

function ma_result_description(int $result): ?string {}

function ma_get_format_name(int $format): ?string {}

function ma_blend_f32(?string &$pOut, string $pInA, string $pInB, float $factor, int $channels): void {}

function ma_get_bytes_per_sample(int $format): int {}

function ma_log_level_to_string(int $logLevel): ?string {}

function ma_spinlock_lock(?ma_spinlock $pSpinlock): int {}

function ma_spinlock_lock_noyield(?ma_spinlock $pSpinlock): int {}

function ma_spinlock_unlock(?ma_spinlock $pSpinlock): int {}

function ma_mutex_init(ma_mutex $pMutex): int {}

function ma_mutex_uninit(?ma_mutex $pMutex): void {}

function ma_mutex_lock(?ma_mutex $pMutex): void {}

function ma_mutex_unlock(?ma_mutex $pMutex): void {}

function ma_event_init(ma_event $pEvent): int {}

function ma_event_uninit(?ma_event $pEvent): void {}

function ma_event_wait(?ma_event $pEvent): int {}

function ma_event_signal(?ma_event $pEvent): int {}

function ma_semaphore_init(int $initialValue, ma_semaphore $pSemaphore): int {}

function ma_semaphore_uninit(?ma_semaphore $pSemaphore): void {}

function ma_semaphore_wait(?ma_semaphore $pSemaphore): int {}

function ma_semaphore_release(?ma_semaphore $pSemaphore): int {}

function ma_fence_init(ma_fence $pFence): int {}

function ma_fence_uninit(?ma_fence $pFence): void {}

function ma_fence_acquire(?ma_fence $pFence): int {}

function ma_fence_release(?ma_fence $pFence): int {}

function ma_fence_wait(?ma_fence $pFence): int {}

function ma_async_notification_signal(?ma_async_notification $pNotification): int {}

function ma_async_notification_poll_init(ma_async_notification_poll $pNotificationPoll): int {}

function ma_async_notification_poll_is_signalled(?ma_async_notification_poll $pNotificationPoll): bool {}

function ma_async_notification_event_init(ma_async_notification_event $pNotificationEvent): int {}

function ma_async_notification_event_uninit(?ma_async_notification_event $pNotificationEvent): int {}

function ma_async_notification_event_wait(?ma_async_notification_event $pNotificationEvent): int {}

function ma_async_notification_event_signal(?ma_async_notification_event $pNotificationEvent): int {}

function ma_slot_allocator_config_init(int $capacity): ma_slot_allocator_config {}

function ma_slot_allocator_get_heap_size(?ma_slot_allocator_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_slot_allocator_init_preallocated(?ma_slot_allocator_config $pConfig, string $pHeap, ma_slot_allocator $pAllocator): int {}

function ma_slot_allocator_init(?ma_slot_allocator_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_slot_allocator $pAllocator): int {}

function ma_slot_allocator_uninit(?ma_slot_allocator $pAllocator, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_slot_allocator_alloc(?ma_slot_allocator $pAllocator, ?int &$pSlot): int {}

function ma_slot_allocator_free(?ma_slot_allocator $pAllocator, int $slot): int {}

function ma_job_init(int $code): ma_job {}

function ma_job_process(?ma_job $pJob): int {}

function ma_job_queue_config_init(int $flags, int $capacity): ma_job_queue_config {}

function ma_job_queue_get_heap_size(?ma_job_queue_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_job_queue_init_preallocated(?ma_job_queue_config $pConfig, string $pHeap, ma_job_queue $pQueue): int {}

function ma_job_queue_init(?ma_job_queue_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_job_queue $pQueue): int {}

function ma_job_queue_uninit(?ma_job_queue $pQueue, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_job_queue_post(?ma_job_queue $pQueue, ?ma_job $pJob): int {}

function ma_job_queue_next(?ma_job_queue $pQueue, ?ma_job $pJob): int {}

function ma_device_job_thread_config_init(): ma_device_job_thread_config {}

function ma_device_job_thread_init(?ma_device_job_thread_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_device_job_thread $pJobThread): int {}

function ma_device_job_thread_uninit(?ma_device_job_thread $pJobThread, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_device_job_thread_post(?ma_device_job_thread $pJobThread, ?ma_job $pJob): int {}

function ma_device_job_thread_next(?ma_device_job_thread $pJobThread, ?ma_job $pJob): int {}

function ma_device_id_equal(?ma_device_id $pA, ?ma_device_id $pB): bool {}

function ma_context_config_init(): ma_context_config {}

function ma_context_init(?array $backends, int $backendCount, ?ma_context_config $pConfig, ma_context $pContext): int {}

function ma_context_uninit(?ma_context $pContext): int {}

function ma_context_sizeof(): int {}

function ma_context_get_log(?ma_context $pContext): ?ma_log {}

function ma_context_enumerate_devices(?ma_context $pContext, ?callable $callback, mixed $pUserData): int {}

function ma_context_get_device_info(?ma_context $pContext, int $deviceType, ?ma_device_id $pDeviceID, ?ma_device_info $pDeviceInfo): int {}

function ma_context_is_loopback_supported(?ma_context $pContext): bool {}

function ma_device_config_init(int $deviceType): ma_device_config {}

function ma_device_init(?ma_context $pContext, ?ma_device_config $pConfig, ma_device $pDevice): int {}

function ma_device_init_ex(?array $backends, int $backendCount, ?ma_context_config $pContextConfig, ?ma_device_config $pConfig, ma_device $pDevice): int {}

function ma_device_uninit(?ma_device $pDevice): void {}

function ma_device_get_context(?ma_device $pDevice): ?ma_context {}

function ma_device_get_log(?ma_device $pDevice): ?ma_log {}

function ma_device_get_info(?ma_device $pDevice, int $type, ?ma_device_info $pDeviceInfo): int {}

function ma_device_get_name(?ma_device $pDevice, int $type, ?string &$pName, int $nameCap, ?int &$pLengthNotIncludingNullTerminator): int {}

function ma_device_start(?ma_device $pDevice): int {}

function ma_device_stop(?ma_device $pDevice): int {}

function ma_device_is_started(?ma_device $pDevice): bool {}

function ma_device_get_state(?ma_device $pDevice): int {}

function ma_device_post_init(?ma_device $pDevice, int $deviceType, ?ma_device_descriptor $pPlaybackDescriptor, ?ma_device_descriptor $pCaptureDescriptor): int {}

function ma_device_set_master_volume(?ma_device $pDevice, float $volume): int {}

function ma_device_get_master_volume(?ma_device $pDevice, ?float &$pVolume): int {}

function ma_device_set_master_volume_db(?ma_device $pDevice, float $gainDB): int {}

function ma_device_get_master_volume_db(?ma_device $pDevice, ?float &$pGainDB): int {}

function ma_device_handle_backend_data_callback(?ma_device $pDevice, ?string &$pOutput, ?string $pInput, int $frameCount): int {}

function ma_calculate_buffer_size_in_frames_from_descriptor(?ma_device_descriptor $pDescriptor, int $nativeSampleRate, int $performanceProfile): int {}

function ma_get_backend_name(int $backend): ?string {}

function ma_get_backend_from_name(?string $pBackendName, ?int &$pBackend): int {}

function ma_is_backend_enabled(int $backend): bool {}

function ma_get_enabled_backends(?array &$pBackends, int $backendCap, ?int &$pBackendCount): int {}

function ma_is_loopback_supported(int $backend): bool {}

function ma_calculate_buffer_size_in_milliseconds_from_frames(int $bufferSizeInFrames, int $sampleRate): int {}

function ma_calculate_buffer_size_in_frames_from_milliseconds(int $bufferSizeInMilliseconds, int $sampleRate): int {}

function ma_copy_pcm_frames(?string &$dst, string $src, int $frameCount, int $format, int $channels): void {}

function ma_silence_pcm_frames(string &$p, int $frameCount, int $format, int $channels): void {}

function ma_clip_samples_u8(?string &$pDst, string $pSrc, int $count): void {}

function ma_clip_samples_s16(?string &$pDst, string $pSrc, int $count): void {}

function ma_clip_samples_s24(?string &$pDst, string $pSrc, int $count): void {}

function ma_clip_samples_s32(?string &$pDst, string $pSrc, int $count): void {}

function ma_clip_samples_f32(?string &$pDst, string $pSrc, int $count): void {}

function ma_clip_pcm_frames(?string &$pDst, string $pSrc, int $frameCount, int $format, int $channels): void {}

function ma_copy_and_apply_volume_factor_u8(?string &$pSamplesOut, string $pSamplesIn, int $sampleCount, float $factor): void {}

function ma_copy_and_apply_volume_factor_s16(?string &$pSamplesOut, string $pSamplesIn, int $sampleCount, float $factor): void {}

function ma_copy_and_apply_volume_factor_s24(?string &$pSamplesOut, string $pSamplesIn, int $sampleCount, float $factor): void {}

function ma_copy_and_apply_volume_factor_s32(?string &$pSamplesOut, string $pSamplesIn, int $sampleCount, float $factor): void {}

function ma_copy_and_apply_volume_factor_f32(?string &$pSamplesOut, string $pSamplesIn, int $sampleCount, float $factor): void {}

function ma_apply_volume_factor_u8(string &$pSamples, int $sampleCount, float $factor): void {}

function ma_apply_volume_factor_s16(string &$pSamples, int $sampleCount, float $factor): void {}

function ma_apply_volume_factor_s24(string &$pSamples, int $sampleCount, float $factor): void {}

function ma_apply_volume_factor_s32(string &$pSamples, int $sampleCount, float $factor): void {}

function ma_apply_volume_factor_f32(string &$pSamples, int $sampleCount, float $factor): void {}

function ma_copy_and_apply_volume_factor_pcm_frames_u8(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $channels, float $factor): void {}

function ma_copy_and_apply_volume_factor_pcm_frames_s16(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $channels, float $factor): void {}

function ma_copy_and_apply_volume_factor_pcm_frames_s24(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $channels, float $factor): void {}

function ma_copy_and_apply_volume_factor_pcm_frames_s32(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $channels, float $factor): void {}

function ma_copy_and_apply_volume_factor_pcm_frames_f32(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $channels, float $factor): void {}

function ma_copy_and_apply_volume_factor_pcm_frames(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $format, int $channels, float $factor): void {}

function ma_apply_volume_factor_pcm_frames_u8(string &$pFrames, int $frameCount, int $channels, float $factor): void {}

function ma_apply_volume_factor_pcm_frames_s16(string &$pFrames, int $frameCount, int $channels, float $factor): void {}

function ma_apply_volume_factor_pcm_frames_s24(string &$pFrames, int $frameCount, int $channels, float $factor): void {}

function ma_apply_volume_factor_pcm_frames_s32(string &$pFrames, int $frameCount, int $channels, float $factor): void {}

function ma_apply_volume_factor_pcm_frames_f32(string &$pFrames, int $frameCount, int $channels, float $factor): void {}

function ma_apply_volume_factor_pcm_frames(string &$pFrames, int $frameCount, int $format, int $channels, float $factor): void {}

function ma_copy_and_apply_volume_factor_per_channel_f32(?string &$pFramesOut, string $pFramesIn, int $frameCount, int $channels, string $pChannelGains): void {}

function ma_copy_and_apply_volume_and_clip_samples_u8(?string &$pDst, string $pSrc, int $count, float $volume): void {}

function ma_copy_and_apply_volume_and_clip_samples_s16(?string &$pDst, string $pSrc, int $count, float $volume): void {}

function ma_copy_and_apply_volume_and_clip_samples_s24(?string &$pDst, string $pSrc, int $count, float $volume): void {}

function ma_copy_and_apply_volume_and_clip_samples_s32(?string &$pDst, string $pSrc, int $count, float $volume): void {}

function ma_copy_and_apply_volume_and_clip_samples_f32(?string &$pDst, string $pSrc, int $count, float $volume): void {}

function ma_copy_and_apply_volume_and_clip_pcm_frames(?string &$pDst, string $pSrc, int $frameCount, int $format, int $channels, float $volume): void {}

function ma_volume_linear_to_db(float $factor): float {}

function ma_volume_db_to_linear(float $gain): float {}

function ma_mix_pcm_frames_f32(string &$pDst, string $pSrc, int $frameCount, int $channels, float $volume): int {}

function ma_vfs_open_and_read_file(?ma_vfs $pVFS, ?string $pFilePath, ?string &$ppData, ?int &$pSize, ?ma_allocation_callbacks $pAllocationCallbacks): int {}

function ma_default_vfs_init(ma_default_vfs $pVFS, ?ma_allocation_callbacks $pAllocationCallbacks): int {}

function ma_decoding_backend_config_init(int $preferredFormat, int $seekPointCount): ma_decoding_backend_config {}

function ma_decoder_config_init(int $outputFormat, int $outputChannels, int $outputSampleRate): ma_decoder_config {}

function ma_decoder_config_init_default(): ma_decoder_config {}

function ma_decoder_init(?callable $onRead, ?callable $onSeek, mixed $pUserData, ?ma_decoder_config $pConfig, ma_decoder $pDecoder): int {}

function ma_decoder_init_memory(string $pData, int $dataSize, ?ma_decoder_config $pConfig, ma_decoder $pDecoder): int {}

function ma_decoder_init_vfs(?ma_vfs $pVFS, ?string $pFilePath, ?ma_decoder_config $pConfig, ma_decoder $pDecoder): int {}

function ma_decoder_init_vfs_w(?ma_vfs $pVFS, ?string $pFilePath, ?ma_decoder_config $pConfig, ma_decoder $pDecoder): int {}

function ma_decoder_init_file(?string $pFilePath, ?ma_decoder_config $pConfig, ma_decoder $pDecoder): int {}

function ma_decoder_init_file_w(?string $pFilePath, ?ma_decoder_config $pConfig, ma_decoder $pDecoder): int {}

function ma_decoder_uninit(?ma_decoder $pDecoder): int {}

function ma_decoder_read_pcm_frames(?ma_decoder $pDecoder, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_decoder_seek_to_pcm_frame(?ma_decoder $pDecoder, int $frameIndex): int {}

function ma_decoder_get_data_format(?ma_decoder $pDecoder, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_decoder_get_cursor_in_pcm_frames(?ma_decoder $pDecoder, ?int &$pCursor): int {}

function ma_decoder_get_length_in_pcm_frames(?ma_decoder $pDecoder, ?int &$pLength): int {}

function ma_decoder_get_available_frames(?ma_decoder $pDecoder, ?int &$pAvailableFrames): int {}

function ma_decode_from_vfs(?ma_vfs $pVFS, ?string $pFilePath, ?ma_decoder_config $pConfig, ?int &$pFrameCountOut, ?string &$ppPCMFramesOut): int {}

function ma_decode_file(?string $pFilePath, ?ma_decoder_config $pConfig, ?int &$pFrameCountOut, ?string &$ppPCMFramesOut): int {}

function ma_decode_memory(string $pData, int $dataSize, ?ma_decoder_config $pConfig, ?int &$pFrameCountOut, ?string &$ppPCMFramesOut): int {}

function ma_encoder_config_init(int $encodingFormat, int $format, int $channels, int $sampleRate): ma_encoder_config {}

function ma_encoder_init(?callable $onWrite, ?callable $onSeek, mixed $pUserData, ?ma_encoder_config $pConfig, ma_encoder $pEncoder): int {}

function ma_encoder_init_vfs(?ma_vfs $pVFS, ?string $pFilePath, ?ma_encoder_config $pConfig, ma_encoder $pEncoder): int {}

function ma_encoder_init_vfs_w(?ma_vfs $pVFS, ?string $pFilePath, ?ma_encoder_config $pConfig, ma_encoder $pEncoder): int {}

function ma_encoder_init_file(?string $pFilePath, ?ma_encoder_config $pConfig, ma_encoder $pEncoder): int {}

function ma_encoder_init_file_w(?string $pFilePath, ?ma_encoder_config $pConfig, ma_encoder $pEncoder): int {}

function ma_encoder_uninit(?ma_encoder $pEncoder): void {}

function ma_encoder_write_pcm_frames(?ma_encoder $pEncoder, string $pFramesIn, int $frameCount, ?int &$pFramesWritten): int {}

function ma_waveform_config_init(int $format, int $channels, int $sampleRate, int $type, float $amplitude, float $frequency): ma_waveform_config {}

function ma_waveform_init(?ma_waveform_config $pConfig, ma_waveform $pWaveform): int {}

function ma_waveform_uninit(?ma_waveform $pWaveform): void {}

function ma_waveform_read_pcm_frames(?ma_waveform $pWaveform, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_waveform_seek_to_pcm_frame(?ma_waveform $pWaveform, int $frameIndex): int {}

function ma_waveform_set_amplitude(?ma_waveform $pWaveform, float $amplitude): int {}

function ma_waveform_set_frequency(?ma_waveform $pWaveform, float $frequency): int {}

function ma_waveform_set_type(?ma_waveform $pWaveform, int $type): int {}

function ma_waveform_set_sample_rate(?ma_waveform $pWaveform, int $sampleRate): int {}

function ma_pulsewave_config_init(int $format, int $channels, int $sampleRate, float $dutyCycle, float $amplitude, float $frequency): ma_pulsewave_config {}

function ma_pulsewave_init(?ma_pulsewave_config $pConfig, ma_pulsewave $pWaveform): int {}

function ma_pulsewave_uninit(?ma_pulsewave $pWaveform): void {}

function ma_pulsewave_read_pcm_frames(?ma_pulsewave $pWaveform, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_pulsewave_seek_to_pcm_frame(?ma_pulsewave $pWaveform, int $frameIndex): int {}

function ma_pulsewave_set_amplitude(?ma_pulsewave $pWaveform, float $amplitude): int {}

function ma_pulsewave_set_frequency(?ma_pulsewave $pWaveform, float $frequency): int {}

function ma_pulsewave_set_sample_rate(?ma_pulsewave $pWaveform, int $sampleRate): int {}

function ma_pulsewave_set_duty_cycle(?ma_pulsewave $pWaveform, float $dutyCycle): int {}

function ma_noise_config_init(int $format, int $channels, int $type, int $seed, float $amplitude): ma_noise_config {}

function ma_noise_get_heap_size(?ma_noise_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_noise_init_preallocated(?ma_noise_config $pConfig, string $pHeap, ma_noise $pNoise): int {}

function ma_noise_init(?ma_noise_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_noise $pNoise): int {}

function ma_noise_uninit(?ma_noise $pNoise, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_noise_read_pcm_frames(?ma_noise $pNoise, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_noise_set_amplitude(?ma_noise $pNoise, float $amplitude): int {}

function ma_noise_set_seed(?ma_noise $pNoise, int $seed): int {}

function ma_noise_set_type(?ma_noise $pNoise, int $type): int {}

function ma_resource_manager_pipeline_notifications_init(): ma_resource_manager_pipeline_notifications {}

function ma_resource_manager_data_source_config_init(): ma_resource_manager_data_source_config {}

function ma_resource_manager_config_init(): ma_resource_manager_config {}

function ma_resource_manager_init(?ma_resource_manager_config $pConfig, ma_resource_manager $pResourceManager): int {}

function ma_resource_manager_uninit(?ma_resource_manager $pResourceManager): void {}

function ma_resource_manager_get_log(?ma_resource_manager $pResourceManager): ?ma_log {}

function ma_resource_manager_register_file(?ma_resource_manager $pResourceManager, ?string $pFilePath, int $flags): int {}

function ma_resource_manager_register_file_w(?ma_resource_manager $pResourceManager, ?string $pFilePath, int $flags): int {}

function ma_resource_manager_register_decoded_data(?ma_resource_manager $pResourceManager, ?string $pName, string $pData, int $frameCount, int $format, int $channels, int $sampleRate): int {}

function ma_resource_manager_register_decoded_data_w(?ma_resource_manager $pResourceManager, ?string $pName, string $pData, int $frameCount, int $format, int $channels, int $sampleRate): int {}

function ma_resource_manager_register_encoded_data(?ma_resource_manager $pResourceManager, ?string $pName, string $pData, int $sizeInBytes): int {}

function ma_resource_manager_register_encoded_data_w(?ma_resource_manager $pResourceManager, ?string $pName, string $pData, int $sizeInBytes): int {}

function ma_resource_manager_unregister_file(?ma_resource_manager $pResourceManager, ?string $pFilePath): int {}

function ma_resource_manager_unregister_file_w(?ma_resource_manager $pResourceManager, ?string $pFilePath): int {}

function ma_resource_manager_unregister_data(?ma_resource_manager $pResourceManager, ?string $pName): int {}

function ma_resource_manager_unregister_data_w(?ma_resource_manager $pResourceManager, ?string $pName): int {}

function ma_resource_manager_data_buffer_init_ex(?ma_resource_manager $pResourceManager, ?ma_resource_manager_data_source_config $pConfig, ma_resource_manager_data_buffer $pDataBuffer): int {}

function ma_resource_manager_data_buffer_init(?ma_resource_manager $pResourceManager, ?string $pFilePath, int $flags, ?ma_resource_manager_pipeline_notifications $pNotifications, ma_resource_manager_data_buffer $pDataBuffer): int {}

function ma_resource_manager_data_buffer_init_w(?ma_resource_manager $pResourceManager, ?string $pFilePath, int $flags, ?ma_resource_manager_pipeline_notifications $pNotifications, ma_resource_manager_data_buffer $pDataBuffer): int {}

function ma_resource_manager_data_buffer_init_copy(?ma_resource_manager $pResourceManager, ?ma_resource_manager_data_buffer $pExistingDataBuffer, ma_resource_manager_data_buffer $pDataBuffer): int {}

function ma_resource_manager_data_buffer_uninit(?ma_resource_manager_data_buffer $pDataBuffer): int {}

function ma_resource_manager_data_buffer_read_pcm_frames(?ma_resource_manager_data_buffer $pDataBuffer, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_resource_manager_data_buffer_seek_to_pcm_frame(?ma_resource_manager_data_buffer $pDataBuffer, int $frameIndex): int {}

function ma_resource_manager_data_buffer_get_data_format(?ma_resource_manager_data_buffer $pDataBuffer, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_resource_manager_data_buffer_get_cursor_in_pcm_frames(?ma_resource_manager_data_buffer $pDataBuffer, ?int &$pCursor): int {}

function ma_resource_manager_data_buffer_get_length_in_pcm_frames(?ma_resource_manager_data_buffer $pDataBuffer, ?int &$pLength): int {}

function ma_resource_manager_data_buffer_result(?ma_resource_manager_data_buffer $pDataBuffer): int {}

function ma_resource_manager_data_buffer_set_looping(?ma_resource_manager_data_buffer $pDataBuffer, bool $isLooping): int {}

function ma_resource_manager_data_buffer_is_looping(?ma_resource_manager_data_buffer $pDataBuffer): bool {}

function ma_resource_manager_data_buffer_get_available_frames(?ma_resource_manager_data_buffer $pDataBuffer, ?int &$pAvailableFrames): int {}

function ma_resource_manager_data_stream_init_ex(?ma_resource_manager $pResourceManager, ?ma_resource_manager_data_source_config $pConfig, ma_resource_manager_data_stream $pDataStream): int {}

function ma_resource_manager_data_stream_init(?ma_resource_manager $pResourceManager, ?string $pFilePath, int $flags, ?ma_resource_manager_pipeline_notifications $pNotifications, ma_resource_manager_data_stream $pDataStream): int {}

function ma_resource_manager_data_stream_init_w(?ma_resource_manager $pResourceManager, ?string $pFilePath, int $flags, ?ma_resource_manager_pipeline_notifications $pNotifications, ma_resource_manager_data_stream $pDataStream): int {}

function ma_resource_manager_data_stream_uninit(?ma_resource_manager_data_stream $pDataStream): int {}

function ma_resource_manager_data_stream_read_pcm_frames(?ma_resource_manager_data_stream $pDataStream, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_resource_manager_data_stream_seek_to_pcm_frame(?ma_resource_manager_data_stream $pDataStream, int $frameIndex): int {}

function ma_resource_manager_data_stream_get_data_format(?ma_resource_manager_data_stream $pDataStream, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_resource_manager_data_stream_get_cursor_in_pcm_frames(?ma_resource_manager_data_stream $pDataStream, ?int &$pCursor): int {}

function ma_resource_manager_data_stream_get_length_in_pcm_frames(?ma_resource_manager_data_stream $pDataStream, ?int &$pLength): int {}

function ma_resource_manager_data_stream_result(?ma_resource_manager_data_stream $pDataStream): int {}

function ma_resource_manager_data_stream_set_looping(?ma_resource_manager_data_stream $pDataStream, bool $isLooping): int {}

function ma_resource_manager_data_stream_is_looping(?ma_resource_manager_data_stream $pDataStream): bool {}

function ma_resource_manager_data_stream_get_available_frames(?ma_resource_manager_data_stream $pDataStream, ?int &$pAvailableFrames): int {}

function ma_resource_manager_data_source_init_ex(?ma_resource_manager $pResourceManager, ?ma_resource_manager_data_source_config $pConfig, ma_resource_manager_data_source $pDataSource): int {}

function ma_resource_manager_data_source_init(?ma_resource_manager $pResourceManager, ?string $pName, int $flags, ?ma_resource_manager_pipeline_notifications $pNotifications, ma_resource_manager_data_source $pDataSource): int {}

function ma_resource_manager_data_source_init_w(?ma_resource_manager $pResourceManager, ?string $pName, int $flags, ?ma_resource_manager_pipeline_notifications $pNotifications, ma_resource_manager_data_source $pDataSource): int {}

function ma_resource_manager_data_source_init_copy(?ma_resource_manager $pResourceManager, ?ma_resource_manager_data_source $pExistingDataSource, ma_resource_manager_data_source $pDataSource): int {}

function ma_resource_manager_data_source_uninit(?ma_resource_manager_data_source $pDataSource): int {}

function ma_resource_manager_data_source_read_pcm_frames(?ma_resource_manager_data_source $pDataSource, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_resource_manager_data_source_seek_to_pcm_frame(?ma_resource_manager_data_source $pDataSource, int $frameIndex): int {}

function ma_resource_manager_data_source_get_data_format(?ma_resource_manager_data_source $pDataSource, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_resource_manager_data_source_get_cursor_in_pcm_frames(?ma_resource_manager_data_source $pDataSource, ?int &$pCursor): int {}

function ma_resource_manager_data_source_get_length_in_pcm_frames(?ma_resource_manager_data_source $pDataSource, ?int &$pLength): int {}

function ma_resource_manager_data_source_result(?ma_resource_manager_data_source $pDataSource): int {}

function ma_resource_manager_data_source_set_looping(?ma_resource_manager_data_source $pDataSource, bool $isLooping): int {}

function ma_resource_manager_data_source_is_looping(?ma_resource_manager_data_source $pDataSource): bool {}

function ma_resource_manager_data_source_get_available_frames(?ma_resource_manager_data_source $pDataSource, ?int &$pAvailableFrames): int {}

function ma_resource_manager_post_job(?ma_resource_manager $pResourceManager, ?ma_job $pJob): int {}

function ma_resource_manager_post_job_quit(?ma_resource_manager $pResourceManager): int {}

function ma_resource_manager_next_job(?ma_resource_manager $pResourceManager, ?ma_job $pJob): int {}

function ma_resource_manager_process_job(?ma_resource_manager $pResourceManager, ?ma_job $pJob): int {}

function ma_resource_manager_process_next_job(?ma_resource_manager $pResourceManager): int {}

function ma_node_config_init(): ma_node_config {}

function ma_node_get_heap_size(?ma_node_graph $pNodeGraph, ?ma_node_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_node_init_preallocated(?ma_node_graph $pNodeGraph, ?ma_node_config $pConfig, string $pHeap, ma_node_base $pNode): int {}

function ma_node_init(?ma_node_graph $pNodeGraph, ?ma_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_node_base $pNode): int {}

function ma_node_uninit(?ma_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_node_get_node_graph(?ma_node $pNode): ?ma_node_graph {}

function ma_node_get_input_bus_count(?ma_node $pNode): int {}

function ma_node_get_output_bus_count(?ma_node $pNode): int {}

function ma_node_get_input_channels(?ma_node $pNode, int $inputBusIndex): int {}

function ma_node_get_output_channels(?ma_node $pNode, int $outputBusIndex): int {}

function ma_node_attach_output_bus(?ma_node $pNode, int $outputBusIndex, ?ma_node $pOtherNode, int $otherNodeInputBusIndex): int {}

function ma_node_detach_output_bus(?ma_node $pNode, int $outputBusIndex): int {}

function ma_node_detach_all_output_buses(?ma_node $pNode): int {}

function ma_node_set_output_bus_volume(?ma_node $pNode, int $outputBusIndex, float $volume): int {}

function ma_node_get_output_bus_volume(?ma_node $pNode, int $outputBusIndex): float {}

function ma_node_set_state(?ma_node $pNode, int $state): int {}

function ma_node_get_state(?ma_node $pNode): int {}

function ma_node_set_state_time(?ma_node $pNode, int $state, int $globalTime): int {}

function ma_node_get_state_time(?ma_node $pNode, int $state): int {}

function ma_node_get_state_by_time(?ma_node $pNode, int $globalTime): int {}

function ma_node_get_state_by_time_range(?ma_node $pNode, int $globalTimeBeg, int $globalTimeEnd): int {}

function ma_node_get_time(?ma_node $pNode): int {}

function ma_node_set_time(?ma_node $pNode, int $localTime): int {}

function ma_node_graph_config_init(int $channels): ma_node_graph_config {}

function ma_node_graph_init(?ma_node_graph_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_node_graph $pNodeGraph): int {}

function ma_node_graph_uninit(?ma_node_graph $pNodeGraph, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_node_graph_get_endpoint(?ma_node_graph $pNodeGraph): ?ma_node {}

function ma_node_graph_read_pcm_frames(?ma_node_graph $pNodeGraph, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_node_graph_get_channels(?ma_node_graph $pNodeGraph): int {}

function ma_node_graph_get_time(?ma_node_graph $pNodeGraph): int {}

function ma_node_graph_set_time(?ma_node_graph $pNodeGraph, int $globalTime): int {}

function ma_node_graph_get_processing_size_in_frames(?ma_node_graph $pNodeGraph): int {}

function ma_data_source_node_config_init(?ma_data_source $pDataSource): ma_data_source_node_config {}

function ma_data_source_node_init(?ma_node_graph $pNodeGraph, ?ma_data_source_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_data_source_node $pDataSourceNode): int {}

function ma_data_source_node_uninit(?ma_data_source_node $pDataSourceNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_data_source_node_set_looping(?ma_data_source_node $pDataSourceNode, bool $isLooping): int {}

function ma_data_source_node_is_looping(?ma_data_source_node $pDataSourceNode): bool {}

function ma_splitter_node_config_init(int $channels): ma_splitter_node_config {}

function ma_splitter_node_init(?ma_node_graph $pNodeGraph, ?ma_splitter_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_splitter_node $pSplitterNode): int {}

function ma_splitter_node_uninit(?ma_splitter_node $pSplitterNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_biquad_node_config_init(int $channels, float $b0, float $b1, float $b2, float $a0, float $a1, float $a2): ma_biquad_node_config {}

function ma_biquad_node_init(?ma_node_graph $pNodeGraph, ?ma_biquad_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_biquad_node $pNode): int {}

function ma_biquad_node_reinit(?ma_biquad_config $pConfig, ?ma_biquad_node $pNode): int {}

function ma_biquad_node_uninit(?ma_biquad_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_lpf_node_config_init(int $channels, int $sampleRate, float $cutoffFrequency, int $order): ma_lpf_node_config {}

function ma_lpf_node_init(?ma_node_graph $pNodeGraph, ?ma_lpf_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_lpf_node $pNode): int {}

function ma_lpf_node_reinit(?ma_lpf_config $pConfig, ?ma_lpf_node $pNode): int {}

function ma_lpf_node_uninit(?ma_lpf_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_hpf_node_config_init(int $channels, int $sampleRate, float $cutoffFrequency, int $order): ma_hpf_node_config {}

function ma_hpf_node_init(?ma_node_graph $pNodeGraph, ?ma_hpf_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_hpf_node $pNode): int {}

function ma_hpf_node_reinit(?ma_hpf_config $pConfig, ?ma_hpf_node $pNode): int {}

function ma_hpf_node_uninit(?ma_hpf_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_bpf_node_config_init(int $channels, int $sampleRate, float $cutoffFrequency, int $order): ma_bpf_node_config {}

function ma_bpf_node_init(?ma_node_graph $pNodeGraph, ?ma_bpf_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_bpf_node $pNode): int {}

function ma_bpf_node_reinit(?ma_bpf_config $pConfig, ?ma_bpf_node $pNode): int {}

function ma_bpf_node_uninit(?ma_bpf_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_notch_node_config_init(int $channels, int $sampleRate, float $q, float $frequency): ma_notch_node_config {}

function ma_notch_node_init(?ma_node_graph $pNodeGraph, ?ma_notch_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_notch_node $pNode): int {}

function ma_notch_node_reinit(?ma_notch_config $pConfig, ?ma_notch_node $pNode): int {}

function ma_notch_node_uninit(?ma_notch_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_peak_node_config_init(int $channels, int $sampleRate, float $gainDB, float $q, float $frequency): ma_peak_node_config {}

function ma_peak_node_init(?ma_node_graph $pNodeGraph, ?ma_peak_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_peak_node $pNode): int {}

function ma_peak_node_reinit(?ma_peak_config $pConfig, ?ma_peak_node $pNode): int {}

function ma_peak_node_uninit(?ma_peak_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_loshelf_node_config_init(int $channels, int $sampleRate, float $gainDB, float $q, float $frequency): ma_loshelf_node_config {}

function ma_loshelf_node_init(?ma_node_graph $pNodeGraph, ?ma_loshelf_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_loshelf_node $pNode): int {}

function ma_loshelf_node_reinit(?ma_loshelf_config $pConfig, ?ma_loshelf_node $pNode): int {}

function ma_loshelf_node_uninit(?ma_loshelf_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_hishelf_node_config_init(int $channels, int $sampleRate, float $gainDB, float $q, float $frequency): ma_hishelf_node_config {}

function ma_hishelf_node_init(?ma_node_graph $pNodeGraph, ?ma_hishelf_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_hishelf_node $pNode): int {}

function ma_hishelf_node_reinit(?ma_hishelf_config $pConfig, ?ma_hishelf_node $pNode): int {}

function ma_hishelf_node_uninit(?ma_hishelf_node $pNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_delay_node_config_init(int $channels, int $sampleRate, int $delayInFrames, float $decay): ma_delay_node_config {}

function ma_delay_node_init(?ma_node_graph $pNodeGraph, ?ma_delay_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_delay_node $pDelayNode): int {}

function ma_delay_node_uninit(?ma_delay_node $pDelayNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_delay_node_set_wet(?ma_delay_node $pDelayNode, float $value): void {}

function ma_delay_node_get_wet(?ma_delay_node $pDelayNode): float {}

function ma_delay_node_set_dry(?ma_delay_node $pDelayNode, float $value): void {}

function ma_delay_node_get_dry(?ma_delay_node $pDelayNode): float {}

function ma_delay_node_set_decay(?ma_delay_node $pDelayNode, float $value): void {}

function ma_delay_node_get_decay(?ma_delay_node $pDelayNode): float {}

function ma_engine_node_config_init(?ma_engine $pEngine, int $type, int $flags): ma_engine_node_config {}

function ma_engine_node_get_heap_size(?ma_engine_node_config $pConfig, ?int &$pHeapSizeInBytes): int {}

function ma_engine_node_init_preallocated(?ma_engine_node_config $pConfig, string $pHeap, ma_engine_node $pEngineNode): int {}

function ma_engine_node_init(?ma_engine_node_config $pConfig, ?ma_allocation_callbacks $pAllocationCallbacks, ma_engine_node $pEngineNode): int {}

function ma_engine_node_uninit(?ma_engine_node $pEngineNode, ?ma_allocation_callbacks $pAllocationCallbacks): void {}

function ma_sound_config_init(): ma_sound_config {}

function ma_sound_config_init_2(?ma_engine $pEngine): ma_sound_config {}

function ma_sound_group_config_init(): ma_sound_group_config {}

function ma_sound_group_config_init_2(?ma_engine $pEngine): ma_sound_group_config {}

function ma_engine_config_init(): ma_engine_config {}

function ma_engine_init(?ma_engine_config $pConfig, ma_engine $pEngine): int {}

function ma_engine_uninit(?ma_engine $pEngine): void {}

function ma_engine_read_pcm_frames(?ma_engine $pEngine, ?string &$pFramesOut, int $frameCount, ?int &$pFramesRead): int {}

function ma_engine_get_node_graph(?ma_engine $pEngine): ?ma_node_graph {}

function ma_engine_get_resource_manager(?ma_engine $pEngine): ?ma_resource_manager {}

function ma_engine_get_device(?ma_engine $pEngine): ?ma_device {}

function ma_engine_get_log(?ma_engine $pEngine): ?ma_log {}

function ma_engine_get_endpoint(?ma_engine $pEngine): ?ma_node {}

function ma_engine_get_time_in_pcm_frames(?ma_engine $pEngine): int {}

function ma_engine_get_time_in_milliseconds(?ma_engine $pEngine): int {}

function ma_engine_set_time_in_pcm_frames(?ma_engine $pEngine, int $globalTime): int {}

function ma_engine_set_time_in_milliseconds(?ma_engine $pEngine, int $globalTime): int {}

function ma_engine_get_time(?ma_engine $pEngine): int {}

function ma_engine_set_time(?ma_engine $pEngine, int $globalTime): int {}

function ma_engine_get_channels(?ma_engine $pEngine): int {}

function ma_engine_get_sample_rate(?ma_engine $pEngine): int {}

function ma_engine_start(?ma_engine $pEngine): int {}

function ma_engine_stop(?ma_engine $pEngine): int {}

function ma_engine_set_volume(?ma_engine $pEngine, float $volume): int {}

function ma_engine_get_volume(?ma_engine $pEngine): float {}

function ma_engine_set_gain_db(?ma_engine $pEngine, float $gainDB): int {}

function ma_engine_get_gain_db(?ma_engine $pEngine): float {}

function ma_engine_get_listener_count(?ma_engine $pEngine): int {}

function ma_engine_find_closest_listener(?ma_engine $pEngine, float $absolutePosX, float $absolutePosY, float $absolutePosZ): int {}

function ma_engine_listener_set_position(?ma_engine $pEngine, int $listenerIndex, float $x, float $y, float $z): void {}

function ma_engine_listener_get_position(?ma_engine $pEngine, int $listenerIndex): ma_vec3f {}

function ma_engine_listener_set_direction(?ma_engine $pEngine, int $listenerIndex, float $x, float $y, float $z): void {}

function ma_engine_listener_get_direction(?ma_engine $pEngine, int $listenerIndex): ma_vec3f {}

function ma_engine_listener_set_velocity(?ma_engine $pEngine, int $listenerIndex, float $x, float $y, float $z): void {}

function ma_engine_listener_get_velocity(?ma_engine $pEngine, int $listenerIndex): ma_vec3f {}

function ma_engine_listener_set_cone(?ma_engine $pEngine, int $listenerIndex, float $innerAngleInRadians, float $outerAngleInRadians, float $outerGain): void {}

function ma_engine_listener_get_cone(?ma_engine $pEngine, int $listenerIndex, ?float &$pInnerAngleInRadians, ?float &$pOuterAngleInRadians, ?float &$pOuterGain): void {}

function ma_engine_listener_set_world_up(?ma_engine $pEngine, int $listenerIndex, float $x, float $y, float $z): void {}

function ma_engine_listener_get_world_up(?ma_engine $pEngine, int $listenerIndex): ma_vec3f {}

function ma_engine_listener_set_enabled(?ma_engine $pEngine, int $listenerIndex, bool $isEnabled): void {}

function ma_engine_listener_is_enabled(?ma_engine $pEngine, int $listenerIndex): bool {}

function ma_engine_play_sound_ex(?ma_engine $pEngine, ?string $pFilePath, ?ma_node $pNode, int $nodeInputBusIndex): int {}

function ma_engine_play_sound(?ma_engine $pEngine, ?string $pFilePath, ?ma_sound_group $pGroup): int {}

function ma_sound_init_from_file(?ma_engine $pEngine, ?string $pFilePath, int $flags, ?ma_sound_group $pGroup, ?ma_fence $pDoneFence, ma_sound $pSound): int {}

function ma_sound_init_from_file_w(?ma_engine $pEngine, ?string $pFilePath, int $flags, ?ma_sound_group $pGroup, ?ma_fence $pDoneFence, ma_sound $pSound): int {}

function ma_sound_init_copy(?ma_engine $pEngine, ?ma_sound $pExistingSound, int $flags, ?ma_sound_group $pGroup, ma_sound $pSound): int {}

function ma_sound_init_from_data_source(?ma_engine $pEngine, ?ma_data_source $pDataSource, int $flags, ?ma_sound_group $pGroup, ma_sound $pSound): int {}

function ma_sound_init_ex(?ma_engine $pEngine, ?ma_sound_config $pConfig, ma_sound $pSound): int {}

function ma_sound_uninit(?ma_sound $pSound): void {}

function ma_sound_get_engine(?ma_sound $pSound): ?ma_engine {}

function ma_sound_get_data_source(?ma_sound $pSound): ?ma_data_source {}

function ma_sound_start(?ma_sound $pSound): int {}

function ma_sound_stop(?ma_sound $pSound): int {}

function ma_sound_stop_with_fade_in_pcm_frames(?ma_sound $pSound, int $fadeLengthInFrames): int {}

function ma_sound_stop_with_fade_in_milliseconds(?ma_sound $pSound, int $fadeLengthInFrames): int {}

function ma_sound_reset_start_time(?ma_sound $pSound): void {}

function ma_sound_reset_stop_time(?ma_sound $pSound): void {}

function ma_sound_reset_fade(?ma_sound $pSound): void {}

function ma_sound_reset_stop_time_and_fade(?ma_sound $pSound): void {}

function ma_sound_set_volume(?ma_sound $pSound, float $volume): void {}

function ma_sound_get_volume(?ma_sound $pSound): float {}

function ma_sound_set_pan(?ma_sound $pSound, float $pan): void {}

function ma_sound_get_pan(?ma_sound $pSound): float {}

function ma_sound_set_pan_mode(?ma_sound $pSound, int $panMode): void {}

function ma_sound_get_pan_mode(?ma_sound $pSound): int {}

function ma_sound_set_pitch(?ma_sound $pSound, float $pitch): void {}

function ma_sound_get_pitch(?ma_sound $pSound): float {}

function ma_sound_set_spatialization_enabled(?ma_sound $pSound, bool $enabled): void {}

function ma_sound_is_spatialization_enabled(?ma_sound $pSound): bool {}

function ma_sound_set_pinned_listener_index(?ma_sound $pSound, int $listenerIndex): void {}

function ma_sound_get_pinned_listener_index(?ma_sound $pSound): int {}

function ma_sound_get_listener_index(?ma_sound $pSound): int {}

function ma_sound_get_direction_to_listener(?ma_sound $pSound): ma_vec3f {}

function ma_sound_set_position(?ma_sound $pSound, float $x, float $y, float $z): void {}

function ma_sound_get_position(?ma_sound $pSound): ma_vec3f {}

function ma_sound_set_direction(?ma_sound $pSound, float $x, float $y, float $z): void {}

function ma_sound_get_direction(?ma_sound $pSound): ma_vec3f {}

function ma_sound_set_velocity(?ma_sound $pSound, float $x, float $y, float $z): void {}

function ma_sound_get_velocity(?ma_sound $pSound): ma_vec3f {}

function ma_sound_set_attenuation_model(?ma_sound $pSound, int $attenuationModel): void {}

function ma_sound_get_attenuation_model(?ma_sound $pSound): int {}

function ma_sound_set_positioning(?ma_sound $pSound, int $positioning): void {}

function ma_sound_get_positioning(?ma_sound $pSound): int {}

function ma_sound_set_rolloff(?ma_sound $pSound, float $rolloff): void {}

function ma_sound_get_rolloff(?ma_sound $pSound): float {}

function ma_sound_set_min_gain(?ma_sound $pSound, float $minGain): void {}

function ma_sound_get_min_gain(?ma_sound $pSound): float {}

function ma_sound_set_max_gain(?ma_sound $pSound, float $maxGain): void {}

function ma_sound_get_max_gain(?ma_sound $pSound): float {}

function ma_sound_set_min_distance(?ma_sound $pSound, float $minDistance): void {}

function ma_sound_get_min_distance(?ma_sound $pSound): float {}

function ma_sound_set_max_distance(?ma_sound $pSound, float $maxDistance): void {}

function ma_sound_get_max_distance(?ma_sound $pSound): float {}

function ma_sound_set_cone(?ma_sound $pSound, float $innerAngleInRadians, float $outerAngleInRadians, float $outerGain): void {}

function ma_sound_get_cone(?ma_sound $pSound, ?float &$pInnerAngleInRadians, ?float &$pOuterAngleInRadians, ?float &$pOuterGain): void {}

function ma_sound_set_doppler_factor(?ma_sound $pSound, float $dopplerFactor): void {}

function ma_sound_get_doppler_factor(?ma_sound $pSound): float {}

function ma_sound_set_directional_attenuation_factor(?ma_sound $pSound, float $directionalAttenuationFactor): void {}

function ma_sound_get_directional_attenuation_factor(?ma_sound $pSound): float {}

function ma_sound_set_fade_in_pcm_frames(?ma_sound $pSound, float $volumeBeg, float $volumeEnd, int $fadeLengthInFrames): void {}

function ma_sound_set_fade_in_milliseconds(?ma_sound $pSound, float $volumeBeg, float $volumeEnd, int $fadeLengthInMilliseconds): void {}

function ma_sound_set_fade_start_in_pcm_frames(?ma_sound $pSound, float $volumeBeg, float $volumeEnd, int $fadeLengthInFrames, int $absoluteGlobalTimeInFrames): void {}

function ma_sound_set_fade_start_in_milliseconds(?ma_sound $pSound, float $volumeBeg, float $volumeEnd, int $fadeLengthInMilliseconds, int $absoluteGlobalTimeInMilliseconds): void {}

function ma_sound_get_current_fade_volume(?ma_sound $pSound): float {}

function ma_sound_set_start_time_in_pcm_frames(?ma_sound $pSound, int $absoluteGlobalTimeInFrames): void {}

function ma_sound_set_start_time_in_milliseconds(?ma_sound $pSound, int $absoluteGlobalTimeInMilliseconds): void {}

function ma_sound_set_stop_time_in_pcm_frames(?ma_sound $pSound, int $absoluteGlobalTimeInFrames): void {}

function ma_sound_set_stop_time_in_milliseconds(?ma_sound $pSound, int $absoluteGlobalTimeInMilliseconds): void {}

function ma_sound_set_stop_time_with_fade_in_pcm_frames(?ma_sound $pSound, int $stopAbsoluteGlobalTimeInFrames, int $fadeLengthInFrames): void {}

function ma_sound_set_stop_time_with_fade_in_milliseconds(?ma_sound $pSound, int $stopAbsoluteGlobalTimeInMilliseconds, int $fadeLengthInMilliseconds): void {}

function ma_sound_is_playing(?ma_sound $pSound): bool {}

function ma_sound_get_time_in_pcm_frames(?ma_sound $pSound): int {}

function ma_sound_get_time_in_milliseconds(?ma_sound $pSound): int {}

function ma_sound_set_looping(?ma_sound $pSound, bool $isLooping): void {}

function ma_sound_is_looping(?ma_sound $pSound): bool {}

function ma_sound_at_end(?ma_sound $pSound): bool {}

function ma_sound_seek_to_pcm_frame(?ma_sound $pSound, int $frameIndex): int {}

function ma_sound_seek_to_second(?ma_sound $pSound, float $seekPointInSeconds): int {}

function ma_sound_get_data_format(?ma_sound $pSound, ?int &$pFormat, ?int &$pChannels, ?int &$pSampleRate, ?array &$pChannelMap, int $channelMapCap): int {}

function ma_sound_get_cursor_in_pcm_frames(?ma_sound $pSound, ?int &$pCursor): int {}

function ma_sound_get_length_in_pcm_frames(?ma_sound $pSound, ?int &$pLength): int {}

function ma_sound_get_cursor_in_seconds(?ma_sound $pSound, ?float &$pCursor): int {}

function ma_sound_get_length_in_seconds(?ma_sound $pSound, ?float &$pLength): int {}

function ma_sound_set_end_callback(?ma_sound $pSound, ?callable $callback, mixed $pUserData): int {}

function ma_sound_group_init(?ma_engine $pEngine, int $flags, ?ma_sound_group $pParentGroup, ma_sound_group $pGroup): int {}

function ma_sound_group_init_ex(?ma_engine $pEngine, ?ma_sound_group_config $pConfig, ma_sound_group $pGroup): int {}

function ma_sound_group_uninit(?ma_sound_group $pGroup): void {}

function ma_sound_group_get_engine(?ma_sound_group $pGroup): ?ma_engine {}

function ma_sound_group_start(?ma_sound_group $pGroup): int {}

function ma_sound_group_stop(?ma_sound_group $pGroup): int {}

function ma_sound_group_set_volume(?ma_sound_group $pGroup, float $volume): void {}

function ma_sound_group_get_volume(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_pan(?ma_sound_group $pGroup, float $pan): void {}

function ma_sound_group_get_pan(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_pan_mode(?ma_sound_group $pGroup, int $panMode): void {}

function ma_sound_group_get_pan_mode(?ma_sound_group $pGroup): int {}

function ma_sound_group_set_pitch(?ma_sound_group $pGroup, float $pitch): void {}

function ma_sound_group_get_pitch(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_spatialization_enabled(?ma_sound_group $pGroup, bool $enabled): void {}

function ma_sound_group_is_spatialization_enabled(?ma_sound_group $pGroup): bool {}

function ma_sound_group_set_pinned_listener_index(?ma_sound_group $pGroup, int $listenerIndex): void {}

function ma_sound_group_get_pinned_listener_index(?ma_sound_group $pGroup): int {}

function ma_sound_group_get_listener_index(?ma_sound_group $pGroup): int {}

function ma_sound_group_get_direction_to_listener(?ma_sound_group $pGroup): ma_vec3f {}

function ma_sound_group_set_position(?ma_sound_group $pGroup, float $x, float $y, float $z): void {}

function ma_sound_group_get_position(?ma_sound_group $pGroup): ma_vec3f {}

function ma_sound_group_set_direction(?ma_sound_group $pGroup, float $x, float $y, float $z): void {}

function ma_sound_group_get_direction(?ma_sound_group $pGroup): ma_vec3f {}

function ma_sound_group_set_velocity(?ma_sound_group $pGroup, float $x, float $y, float $z): void {}

function ma_sound_group_get_velocity(?ma_sound_group $pGroup): ma_vec3f {}

function ma_sound_group_set_attenuation_model(?ma_sound_group $pGroup, int $attenuationModel): void {}

function ma_sound_group_get_attenuation_model(?ma_sound_group $pGroup): int {}

function ma_sound_group_set_positioning(?ma_sound_group $pGroup, int $positioning): void {}

function ma_sound_group_get_positioning(?ma_sound_group $pGroup): int {}

function ma_sound_group_set_rolloff(?ma_sound_group $pGroup, float $rolloff): void {}

function ma_sound_group_get_rolloff(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_min_gain(?ma_sound_group $pGroup, float $minGain): void {}

function ma_sound_group_get_min_gain(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_max_gain(?ma_sound_group $pGroup, float $maxGain): void {}

function ma_sound_group_get_max_gain(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_min_distance(?ma_sound_group $pGroup, float $minDistance): void {}

function ma_sound_group_get_min_distance(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_max_distance(?ma_sound_group $pGroup, float $maxDistance): void {}

function ma_sound_group_get_max_distance(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_cone(?ma_sound_group $pGroup, float $innerAngleInRadians, float $outerAngleInRadians, float $outerGain): void {}

function ma_sound_group_get_cone(?ma_sound_group $pGroup, ?float &$pInnerAngleInRadians, ?float &$pOuterAngleInRadians, ?float &$pOuterGain): void {}

function ma_sound_group_set_doppler_factor(?ma_sound_group $pGroup, float $dopplerFactor): void {}

function ma_sound_group_get_doppler_factor(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_directional_attenuation_factor(?ma_sound_group $pGroup, float $directionalAttenuationFactor): void {}

function ma_sound_group_get_directional_attenuation_factor(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_fade_in_pcm_frames(?ma_sound_group $pGroup, float $volumeBeg, float $volumeEnd, int $fadeLengthInFrames): void {}

function ma_sound_group_set_fade_in_milliseconds(?ma_sound_group $pGroup, float $volumeBeg, float $volumeEnd, int $fadeLengthInMilliseconds): void {}

function ma_sound_group_get_current_fade_volume(?ma_sound_group $pGroup): float {}

function ma_sound_group_set_start_time_in_pcm_frames(?ma_sound_group $pGroup, int $absoluteGlobalTimeInFrames): void {}

function ma_sound_group_set_start_time_in_milliseconds(?ma_sound_group $pGroup, int $absoluteGlobalTimeInMilliseconds): void {}

function ma_sound_group_set_stop_time_in_pcm_frames(?ma_sound_group $pGroup, int $absoluteGlobalTimeInFrames): void {}

function ma_sound_group_set_stop_time_in_milliseconds(?ma_sound_group $pGroup, int $absoluteGlobalTimeInMilliseconds): void {}

function ma_sound_group_is_playing(?ma_sound_group $pGroup): bool {}

function ma_sound_group_get_time_in_pcm_frames(?ma_sound_group $pGroup): int {}

