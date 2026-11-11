<?php

declare(strict_types=1);

it('mixes data source nodes into a graph endpoint', function (): void {
    $g = new ma_node_graph();
    expect(ma_node_graph_init(ma_node_graph_config_init(1), null, $g))->toBe(MA_SUCCESS)
        ->and(ma_node_graph_get_channels($g))->toBe(1);

    $a = new ma_audio_buffer_ref();
    $b = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_f32, 1, pack('g*', 0.25, 0.25), 2, $a);
    ma_audio_buffer_ref_init(ma_format_f32, 1, pack('g*', 0.5, 0.5), 2, $b);
    $na = new ma_data_source_node();
    $nb = new ma_data_source_node();
    expect(ma_data_source_node_init($g, ma_data_source_node_config_init($a), null, $na))->toBe(MA_SUCCESS);
    ma_data_source_node_init($g, ma_data_source_node_config_init($b), null, $nb);
    $end = ma_node_graph_get_endpoint($g);
    expect(ma_node_attach_output_bus($na, 0, $end, 0))->toBe(MA_SUCCESS);
    ma_node_attach_output_bus($nb, 0, $end, 0);

    ma_node_graph_read_pcm_frames($g, $o, 2, $read);
    expect($read)->toBe(2)->and(ma_floats($o))->toBe([0.75, 0.75])
        ->and(ma_node_get_output_bus_count($na))->toBe(1)
        ->and(ma_node_get_node_graph($na))->toBe($g);

    ma_node_set_output_bus_volume($nb, 0, 0.0);
    ma_data_source_seek_to_pcm_frame($a, 0);
    ma_data_source_seek_to_pcm_frame($b, 0);
    ma_node_graph_read_pcm_frames($g, $o, 1, $read);
    expect(ma_floats($o))->toBe([0.25]);

    ma_node_detach_output_bus($na, 0);
    ma_node_graph_uninit($g, null);
    expect(fn () => ma_node_get_output_bus_count($na))->toThrow(ValueError::class);
});

it('runs a node written in PHP', function (): void {
    $g = new ma_node_graph();
    ma_node_graph_init(ma_node_graph_config_init(1), null, $g);
    $vt = new ma_node_vtable();
    $vt->inputBusCount = 0;
    $vt->outputBusCount = 1;
    $vt->onProcess = function (ma_node_base $n, ?array $in, ?int &$inCount, array &$out, ?int &$outCount): void {
        $out[0] = str_repeat(pack('g', 0.125), $outCount);
    };
    $cfg = ma_node_config_init();
    $cfg->vtable = $vt;
    $cfg->inputBusCount = 0;
    $cfg->outputBusCount = 1;
    $cfg->pOutputChannels = [1];
    $node = new ma_node_base();
    expect(ma_node_init($g, $cfg, null, $node))->toBe(MA_SUCCESS);
    ma_node_attach_output_bus($node, 0, ma_node_graph_get_endpoint($g), 0);
    ma_node_graph_read_pcm_frames($g, $o, 3, $read);
    expect(ma_floats($o))->toBe([0.125, 0.125, 0.125]);
    ma_node_uninit($node, null);
});

it('filters through built-in nodes and splits', function (): void {
    $g = new ma_node_graph();
    ma_node_graph_init(ma_node_graph_config_init(1), null, $g);
    $src = new ma_audio_buffer_ref();
    ma_audio_buffer_ref_init(ma_format_f32, 1, pack('g*', 1, 1, 1, 1), 4, $src);
    $dsn = new ma_data_source_node();
    ma_data_source_node_init($g, ma_data_source_node_config_init($src), null, $dsn);
    $split = new ma_splitter_node();
    expect(ma_splitter_node_init($g, ma_splitter_node_config_init(1), null, $split))->toBe(MA_SUCCESS);
    $delay = new ma_delay_node();
    expect(ma_delay_node_init($g, ma_delay_node_config_init(1, 48000, 2, 0.0), null, $delay))->toBe(MA_SUCCESS);
    ma_node_attach_output_bus($dsn, 0, $split, 0);
    ma_node_attach_output_bus($split, 0, ma_node_graph_get_endpoint($g), 0);
    ma_node_attach_output_bus($split, 1, $delay, 0);
    ma_node_attach_output_bus($delay, 0, ma_node_graph_get_endpoint($g), 0);
    ma_node_graph_read_pcm_frames($g, $o, 4, $read);
    expect(ma_floats($o))->toBe([1.0, 1.0, 2.0, 2.0]);
    ma_node_graph_uninit($g, null);
});
