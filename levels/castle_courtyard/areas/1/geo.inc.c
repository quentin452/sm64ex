// 0x0E000218
const GeoLayout castle_courtyard_geo_000218[] = {
    GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2),
    GEO_OPEN_NODE(),
    GEO_ZBUFFER(0),
    GEO_OPEN_NODE(),
    GEO_NODE_ORTHO(100),
    GEO_OPEN_NODE(),
    GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_ZBUFFER(1),
    GEO_OPEN_NODE(),
    GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
    GEO_OPEN_NODE(),
    GEO_CAMERA(16, 0, 2000, 6000, 0, 0, 0, geo_camera_main),
    GEO_OPEN_NODE(),
    GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_courtyard_seg7_dl_070048B8),
    GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_courtyard_seg7_dl_07005698),
    GEO_DISPLAY_LIST(LAYER_ALPHA, castle_courtyard_seg7_dl_07005938),
    GEO_ASM(0, geo_movtex_pause_control),
    GEO_ASM(0x2601, geo_movtex_draw_water_regions),
    GEO_RENDER_OBJ(),
    GEO_ASM(0, geo_envfx_main),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
