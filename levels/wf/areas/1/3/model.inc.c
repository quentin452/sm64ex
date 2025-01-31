// 0x07005328 - 0x07005418
static const Vtx wf_seg7_vertex_07005328[] = {
    { { { 3840, 1075, -1458 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3661, 1075, -1100 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 4019, 1075, -1100 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -2278, 730, 1953 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -2163, 641, 1617 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -2394, 641, 1617 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3392, 1959, 979 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3277, 1832, 1341 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3533, 1832, 1341 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3277, 1364, 2669 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3533, 1364, 2669 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3392, 1492, 2307 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3840, 1075, -2482 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3661, 1075, -2124 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 4019, 1075, -2124 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
};

// 0x07005418 - 0x070054D8
static const Vtx wf_seg7_vertex_07005418[] = {
    { { { 3533, 2304, -101 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3533, 2304, -409 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3277, 2304, -255 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -2277, 1024, 3379 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -2149, 1024, 3123 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -2405, 1024, 3123 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -1279, 1024, 3482 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -1279, 1024, 3686 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { -1074, 1024, 3584 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3277, 1165, -2940 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3405, 1309, -2729 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
    { { { 3533, 1165, -2940 }, 0, { 0, 0 }, { 0xff, 0xff, 0x00, 0x80 } } },
};

// 0x070054D8 - 0x07005538
static const Gfx wf_seg7_dl_070054D8[] = {
    gsSPVertex(wf_seg7_vertex_07005328, 15, 0),   gsSP2Triangles(0, 1, 2, 0x0, 3, 4, 5, 0x0),
    gsSP2Triangles(6, 7, 8, 0x0, 9, 10, 11, 0x0), gsSP1Triangle(12, 13, 14, 0x0),
    gsSPVertex(wf_seg7_vertex_07005418, 12, 0),   gsSP2Triangles(0, 1, 2, 0x0, 3, 4, 5, 0x0),
    gsSP2Triangles(6, 7, 8, 0x0, 9, 10, 11, 0x0), gsSPEndDisplayList(),
};

// 0x07005538 - 0x07005568
const Gfx wf_seg7_dl_07005538[] = {
    gsDPPipeSync(), gsSPClearGeometryMode(G_LIGHTING), gsSPDisplayList(wf_seg7_dl_070054D8),
    gsDPPipeSync(), gsSPSetGeometryMode(G_LIGHTING),   gsSPEndDisplayList(),
};
