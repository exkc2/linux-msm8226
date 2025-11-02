// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2025 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/delay.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct tc358764 {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
};

static inline struct tc358764 *to_tc358764(struct drm_panel *panel)
{
	return container_of(panel, struct tc358764, panel);
}

static int tc358764_on(struct tc358764 *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x3c,
					 0x01, 0x06, 0x00, 0x05, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x14,
					 0x01, 0x04, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x64,
					 0x01, 0x04, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x68,
					 0x01, 0x04, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x6c,
					 0x01, 0x04, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x70,
					 0x01, 0x04, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x34,
					 0x01, 0x1f, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x10,
					 0x02, 0x1f, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x04,
					 0x01, 0x01, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x04,
					 0x02, 0x01, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x50,
					 0x04, 0x20, 0x01, 0xf0, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x54,
					 0x04, 0x02, 0x00, 0x30, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x58,
					 0x04, 0x20, 0x03, 0x30, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x5c,
					 0x04, 0x02, 0x00, 0x40, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x60,
					 0x04, 0x00, 0x05, 0x20, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x64,
					 0x04, 0x01, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xa0,
					 0x04, 0x06, 0x80, 0x44, 0x00);
	mipi_dsi_usleep_range(&dsi_ctx, 2000, 3000);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xa0,
					 0x04, 0x06, 0x80, 0x04, 0x00);
	mipi_dsi_usleep_range(&dsi_ctx, 2000, 3000);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x04,
					 0x05, 0x04, 0x00, 0x00, 0x00);
	mipi_dsi_usleep_range(&dsi_ctx, 2000, 3000);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x80,
					 0x04, 0x00, 0x01, 0x02, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x84,
					 0x04, 0x04, 0x07, 0x05, 0x08);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x88,
					 0x04, 0x09, 0x0a, 0x0e, 0x0f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x8c,
					 0x04, 0x0b, 0x0c, 0x0d, 0x10);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x90,
					 0x04, 0x16, 0x17, 0x11, 0x12);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x94,
					 0x04, 0x13, 0x14, 0x15, 0x1b);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x98,
					 0x04, 0x18, 0x19, 0x1a, 0x06);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x9c,
					 0x04, 0x01, 0x00, 0x00, 0x00);

	return dsi_ctx.accum_err;
}

static int tc358764_off(struct tc358764 *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xa0,
					 0x04, 0x01, 0x00, 0x00, 0x00);
	mipi_dsi_usleep_range(&dsi_ctx, 1000, 2000);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x9c,
					 0x04, 0x00, 0x00, 0x00, 0x00);

	return dsi_ctx.accum_err;
}

static int tc358764_prepare(struct drm_panel *panel)
{
	struct tc358764 *ctx = to_tc358764(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = tc358764_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		return ret;
	}

	return 0;
}

static int tc358764_unprepare(struct drm_panel *panel)
{
	struct tc358764 *ctx = to_tc358764(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = tc358764_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);


	return 0;
}

static const struct drm_display_mode tc358764_mode = {
	.clock = (1280 + 48 + 2 + 48) * (800 + 32 + 2 + 64) * 60 / 1000,
	.hdisplay = 1280,
	.hsync_start = 1280 + 48,
	.hsync_end = 1280 + 48 + 2,
	.htotal = 1280 + 48 + 2 + 48,
	.vdisplay = 800,
	.vsync_start = 800 + 32,
	.vsync_end = 800 + 32 + 2,
	.vtotal = 800 + 32 + 2 + 64,
	.width_mm = 228,
	.height_mm = 149,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int tc358764_get_modes(struct drm_panel *panel,
			      struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &tc358764_mode);
}

static const struct drm_panel_funcs tc358764_panel_funcs = {
	.prepare = tc358764_prepare,
	.unprepare = tc358764_unprepare,
	.get_modes = tc358764_get_modes,
};

static int tc358764_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct tc358764 *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct tc358764, panel,
				   &tc358764_panel_funcs,
				   DRM_MODE_CONNECTOR_DSI);
	if (IS_ERR(ctx))
		return PTR_ERR(ctx);

	ctx->dsi = dsi;
	mipi_dsi_set_drvdata(dsi, ctx);

	dsi->lanes = 4;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_NO_EOT_PACKET;

	ctx->panel.prepare_prev_first = true;

	ret = drm_panel_of_backlight(&ctx->panel);
	if (ret)
		return dev_err_probe(dev, ret, "Failed to get backlight\n");

	drm_panel_add(&ctx->panel);

	ret = mipi_dsi_attach(dsi);
	if (ret < 0) {
		drm_panel_remove(&ctx->panel);
		return dev_err_probe(dev, ret, "Failed to attach to DSI host\n");
	}

	return 0;
}

static void tc358764_remove(struct mipi_dsi_device *dsi)
{
	struct tc358764 *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id tc358764_of_match[] = {
	{ .compatible = "exkc,hack" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, tc358764_of_match);

static struct mipi_dsi_driver tc358764_driver = {
	.probe = tc358764_probe,
	.remove = tc358764_remove,
	.driver = {
		.name = "panel-tc358764",
		.of_match_table = tc358764_of_match,
	},
};
module_mipi_dsi_driver(tc358764_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for TC358764 dsi2lvds WXGA video mode panel");
MODULE_LICENSE("GPL");
