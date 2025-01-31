// 0x08023814
static const s16 bobomb_seg8_animvalue_08023814[] = {
    0x0000, 0x00B1, 0x0000, 0x0002, 0x0008, 0x000E, 0x0010, 0x000E, 0x000A, 0x0005, 0x0001,
    0x0000, 0x3FFF, 0x0FE3, 0x1004, 0x104C, 0x1093, 0x10B4, 0x109E, 0x106A, 0x102D, 0x0FF9,
    0x0FE3, 0xBBEE, 0xBEFD, 0xC5B5, 0xCC6E, 0xCF7D, 0xCD74, 0xC89A, 0xC2D0, 0xBDF7, 0xBBEE,
    0xFC25, 0xFD6A, 0x0032, 0x02FB, 0x0440, 0x0368, 0x0165, 0xFF00, 0xFCFD, 0xFC25, 0xF0FC,
    0xEFB1, 0xECD9, 0xEA02, 0xE8B7, 0xE993, 0xEBA0, 0xEE13, 0xF020, 0xF0FC, 0xD8C1, 0xD34A,
    0xC744, 0xBB3F, 0xB5C8, 0xB96B, 0xC217, 0xCC71, 0xD51E, 0xD8C1, 0x3FFF, 0x3FFF, 0x74FE,
    0x7655, 0x7946, 0x7C36, 0x7D8D, 0x7CA9, 0x7A8A, 0x7801, 0x75E2, 0x74FE, 0x0000,
};

// 0x080238AC
static const u16 bobomb_seg8_animindex_080238AC[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x000A, 0x0002, 0x0001, 0x0000, 0x0001, 0x000C, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000A, 0x0041, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x003F,
    0x0001, 0x0000, 0x000A, 0x000D, 0x000A, 0x0017, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0040,
    0x000A, 0x0021, 0x000A, 0x002B, 0x000A, 0x0035, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x08023954
static const struct Animation bobomb_seg8_anim_08023954 = {
    0,
    0,
    0,
    0,
    0x0A,
    ANIMINDEX_NUMPARTS(bobomb_seg8_animindex_080238AC),
    bobomb_seg8_animvalue_08023814,
    bobomb_seg8_animindex_080238AC,
    0,
};
