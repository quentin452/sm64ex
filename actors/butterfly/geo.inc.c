// 0x160000A8
const GeoLayout butterfly_geo[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 25),
    GEO_OPEN_NODE(),
    GEO_SCALE(0x00, 16384),
    GEO_OPEN_NODE(),
    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
    GEO_OPEN_NODE(),
    GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, butterfly_seg3_dl_03005408),
    GEO_OPEN_NODE(),
    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_OPEN_NODE(),
    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
    GEO_OPEN_NODE(),
    GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, butterfly_seg3_dl_030054A0),
    GEO_OPEN_NODE(),
    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
