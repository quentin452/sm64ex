// 0x0500CEF0
static const s16 snowman_seg5_animvalue_0500CEF0[] = {
    0x0000, 0x00B9, 0x3FFF, 0xFA95, 0xFAD8, 0xFB7D, 0xFC4F, 0xFD19, 0xFDA7, 0xFE0D, 0xFE5E, 0xFE63,
    0xFDE7, 0xFC11, 0xF974, 0xF7FE, 0xF937, 0xFB96, 0xFC65, 0xF7D6, 0xF39A, 0xF70A, 0xFB77, 0xFB76,
    0xFA95, 0x2242, 0x2280, 0x22B2, 0x2212, 0x1FD7, 0x1B39, 0x11F7, 0x04A5, 0xF6B6, 0xEB9D, 0xE3F2,
    0xDF47, 0xDF8A, 0xE5A8, 0xF0B4, 0xFFD0, 0x1C59, 0x33CD, 0x29F0, 0x1A8A, 0x1D4E, 0x2242, 0xF646,
    0xF6A5, 0xF796, 0xF8D3, 0xFA17, 0xFB1C, 0xFB8F, 0xFBB4, 0xFC2A, 0xFD93, 0x01C8, 0x074E, 0x09C2,
    0x06C0, 0x00AE, 0xFA57, 0xF2FF, 0xEE08, 0xF1E1, 0xF727, 0xF73A, 0xF646, 0x0659, 0x064F, 0x063C,
    0x062E, 0x0634, 0x065F, 0x06DF, 0x07A3, 0x0858, 0x08A6, 0x087A, 0x080D, 0x077F, 0x06F2, 0x0685,
    0x0659, 0x0659, 0x0659, 0x0659, 0x0659, 0x0659, 0x0659, 0x0107, 0x01D6, 0x038C, 0x0519, 0x056B,
    0x0372, 0xFC45, 0xF0F8, 0xE67B, 0xE1BA, 0xE3E1, 0xE9A1, 0xF133, 0xF8CF, 0xFEAE, 0x0107, 0x0107,
    0x0107, 0x0107, 0x0107, 0x0107, 0x0107, 0x6136, 0x615C, 0x61AB, 0x61F1, 0x61FC, 0x6198, 0x6037,
    0x5E0D, 0x5C0D, 0x5B26, 0x5B92, 0x5CB0, 0x5E27, 0x5F9F, 0x60C2, 0x6136, 0x6136, 0x6136, 0x6136,
    0x6136, 0x6136, 0x6136, 0xE001, 0xC001, 0xE001, 0x0000, 0xF883, 0xE899, 0xDA19, 0xD6DA, 0xE383,
    0xF9B6, 0x12CB, 0x281A, 0x32F9, 0x3330, 0x2E19, 0x2564, 0x1ABE, 0x0FD6, 0x065D, 0x0000, 0xFD49,
    0xFCF2, 0xFDF7, 0xFF53, 0x0000, 0x0000, 0x0180, 0x04B7, 0x07B2, 0x0883, 0x064D, 0x0251, 0xFDC2,
    0xF9D5, 0xF7BD, 0xF7A6, 0xF8AB, 0xFA67, 0xFC77, 0xFE76, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3FFF, 0x3DDB, 0x395E, 0x356F, 0x34F5, 0x3973, 0x4102, 0x496D, 0x507F, 0x5403,
    0x539F, 0x50FC, 0x4CE6, 0x482C, 0x439B, 0x3FFF, 0x3FFF, 0x3FFF, 0x3FFF, 0x3FFF, 0x3FFF, 0x3FFF,
};

// 0x0500D088
static const u16 snowman_seg5_animindex_0500D088[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0002, 0x0001, 0x0000,
    0x0016, 0x008A, 0x0016, 0x00A0, 0x0016, 0x00B6, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0087, 0x0001, 0x0088, 0x0001, 0x0089, 0x0016, 0x0045, 0x0016, 0x005B, 0x0016, 0x0071,
    0x0016, 0x0003, 0x0016, 0x0019, 0x0016, 0x002F, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x0500D100
static const struct Animation snowman_seg5_anim_0500D100 = {
    0,
    0,
    0,
    0,
    0x16,
    ANIMINDEX_NUMPARTS(snowman_seg5_animindex_0500D088),
    snowman_seg5_animvalue_0500CEF0,
    snowman_seg5_animindex_0500D088,
    0,
};
