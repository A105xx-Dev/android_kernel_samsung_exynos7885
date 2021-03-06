#ifndef __S6D7AT0B_PARAM_H__
#define __S6D7AT0B_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static u8 LM3632_INIT[] = {
	0x09, 0x41,
	0x02, 0x50,
	0x03, 0x8D,
	0x04, 0x07,
	0x05, 0xFF,
	0x0A, 0x19,
	0x0D, 0x26,
	0x0E, 0x26,
	0x0F, 0x26,
	0x0C, 0x1F,
	0x11, 0x0D,
};

/*
 * The applied command [0x9F] level key
 * 01h, 10h, 12h, 13h, 18h, 19h, 20h, 21h, 22h, 23h, 28h,
 * 29h, 30h, 34h, 35h, 36h, 38h, 39h, 3Ah, 44h, 4Fh, 51h.
 */

static const unsigned char SEQ_TEST_KEY_ON_9F[] = {
	0x9F,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A,
};

static const unsigned char SEQ_S6D7AT0B_53[] = {
	0x53,
	0x2C,
};

static const unsigned char SEQ_S6D7AT0B_55[] = {
	0x55,
	0x01,
};

static const unsigned char SEQ_S6D7AT0B_CABC_ON[] = {
	0x55,
	0x01,
};

static const unsigned char SEQ_S6D7AT0B_CABC_OFF[] = {
	0x55,
	0x00,
};

/* BOE panel 116A01 */
static const unsigned char SEQ_S6D7AT0B_BOE_51[] = {
	0x51,
	0x59, 0x71	 /* 1431(DEC) | BIT(0) */
};

static const unsigned char SEQ_S6D7AT0B_BOE_71[] = {
	0x71,
	0x01,
};

static const unsigned char SEQ_S6D7AT0B_BOE_73[] = {
	0x73,
	0xB0, 0x9D, 0x10, 0x01, 0x60, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_B1[] = {
	0xB1,
	0x1D, 0x22, 0x11, 0x00, 0xFF,
};

static const unsigned char SEQ_S6D7AT0B_BOE_B3[] = {
	0xB3,
	0x01, 0xBE, 0x07, 0x30, 0x18, 0x0A, 0x08, 0x08, 0x07, 0x6F,
	0x00, 0xE6, 0x00, 0xE6, 0x00, 0xE6,
};

static const unsigned char SEQ_S6D7AT0B_BOE_BA[] = {
	0xBA,
	0x01, 0x00, 0x13, 0x00, 0x13, 0x00, 0x13, 0x90, 0x02, 0x58,
	0x00, 0x84, 0x08, 0x43, 0x01, 0x00, 0xC9, 0x00, 0xF0, 0x00,
	0x14, 0x00, 0x00, 0xED, 0x01, 0x10, 0xC2, 0x89, 0x50, 0x2C,
	0x99, 0x46, 0x46, 0x00, 0x01, 0xF1, 0x01, 0x01, 0x28, 0x32,
	0x38, 0x3F, 0x48, 0x50, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x48, 0x64, 0x98, 0xBF, 0xDF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
	0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_BB[] = {
	0xBB,
	0x21, 0x68, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_EC[] = {
	0xEC,
	0x00, 0x00, 0x15, 0x00, 0x04, 0x06, 0x14, 0x03, 0x0C, 0x0E,
	0x10, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x05, 0x07, 0x14, 0x03,
	0x0D, 0x0F, 0x11, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_ED[] = {
	0xED,
	0x30, 0x40, 0x12, 0x55, 0x00, 0x60, 0x80, 0x31, 0x40, 0x12,
	0x55, 0x00, 0x40, 0x80, 0x32, 0x40, 0x12, 0x55, 0x00, 0x20,
	0x80, 0x33, 0x40, 0x12, 0x55, 0x00, 0x00, 0x80, 0x10, 0x69,
	0x00, 0x00, 0x00, 0x80, 0x90, 0x10, 0x49, 0x00, 0x00, 0x00,
	0xA0, 0xA0, 0x40, 0x41, 0x93, 0x7D, 0x00, 0xE0, 0x20, 0x41,
	0x41, 0x93, 0x7D, 0x00, 0xC0, 0x20, 0x40, 0x48, 0x92, 0x08,
	0x40, 0x40, 0x80, 0x8C, 0x3F, 0x30, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_EE[] = {
	0xEE,
	0x33, 0x08, 0x12, 0x55, 0x00, 0x04, 0x00, 0x00, 0xE5, 0x33,
	0x09, 0x12, 0x55, 0x00, 0x04, 0x00, 0x00, 0xC6, 0x33, 0x0A,
	0x12, 0x55, 0x00, 0x04, 0x00, 0x00, 0xA7, 0x33, 0x0B, 0x12,
	0x55, 0x00, 0x04, 0x00, 0x00, 0x88, 0x33, 0x04, 0x12, 0x55,
	0x00, 0x04, 0x00, 0x00, 0x61, 0x33, 0x05, 0x12, 0x55, 0x00,
	0x04, 0x00, 0x00, 0x42, 0x33, 0x06, 0x12, 0x55, 0x00, 0x04,
	0x00, 0x00, 0x23, 0x33, 0x07, 0x12, 0x55, 0x00, 0x04, 0x00,
	0x00, 0x04, 0xFF,
};

static const unsigned char SEQ_S6D7AT0B_BOE_EF[] = {
	0xEF,
	0x00, 0xFF, 0x00, 0x00, 0x00, 0x0C, 0x40, 0x76, 0x76, 0x10,
	0x18, 0x38, 0x80, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x48,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_F2[] = {
	0xF2,
	0x48, 0x22, 0x33, 0x33, 0xE3, 0x44, 0x43, 0x00, 0x01, 0x00,
	0x00, 0x0D, 0x84, 0x00, 0x80, 0x00, 0xA6, 0x1E, 0x08, 0x03,
	0x34, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_B0[] = {
	0xB0,
	0x02,
};

static const unsigned char SEQ_S6D7AT0B_BOE_F4[] = {
	0xF4,
	0x30, 0x0A, 0xB9, 0xE8, 0xE8, 0x14, 0x14, 0x09, 0xB5, 0x55,
	0x58, 0x3B, 0x10, 0x55, 0x15, 0x26, 0xFA, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_F9[] = {
	0xF9,
	0x88, 0x88, 0x80, 0xC0, 0xC0, 0x04, 0x7A, 0x00, 0x0D, 0xC0,
	0x94, 0x00, 0x3C, 0xA0, 0x3C, 0xA0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x11, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00,
	0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_FE[] = {
	0xFE,
	0x02, 0x00, 0x01, 0x4C, 0x00, 0x00, 0x00, 0x60, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AT0B_BOE_C0[] = {
	0xC0,
	0x03, 0x00, 0xF9, 0x01, 0x00, 0xFF, 0x00, 0x04, 0x0F, 0xFF,
	0x70, 0x40, 0x86, 0xDA, 0x8E,
};

static const unsigned char SEQ_S6D7AT0B_BOE_C1[] = {
	0xC1,
	0xE5, 0xA6, 0x80, 0x25, 0x66, 0x7D, 0x8C, 0x96, 0xA3, 0xAE,
	0xB4, 0xB8, 0xC0, 0xC3, 0xCD, 0xD6, 0xE2, 0xF1, 0xF1, 0xFF,
	0x88, 0x96, 0xA5, 0xB4, 0xBE, 0xC8, 0xCD, 0xD0, 0xD3, 0xD7,
	0xDF, 0xE6, 0xEA, 0xF0, 0xF9, 0xFF,
};

static const unsigned char SEQ_S6D7AT0B_BOE_C8[] = {
	0xC8,
	0x00, 0x24, 0x00, 0x41, 0x3A, 0x00, 0x00, 0x00, 0xB0, 0x02,
	0x00, 0x00, 0x00, 0x85, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x40, 0x4B,
};

static const unsigned char SEQ_S6D7AT0B_BOE_E8[] = {
	0xE8,
	0x01, 0x07, 0x0D, 0x05, 0x0B, 0x11, 0x10, 0x13, 0x1D, 0x20,
	0x21, 0x22, 0x25, 0x24, 0x23, 0x2D, 0x32, 0x01, 0x07, 0x0D,
	0x05, 0x0B, 0x11, 0x10, 0x13, 0x1D, 0x26, 0x27, 0x28, 0x25,
	0x24, 0x23, 0x2D, 0x32,
};

static const unsigned char SEQ_S6D7AT0B_BOE_E9[] = {
	0xE9,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x1A, 0x00, 0x2A,
	0x00, 0x3B, 0x00, 0x49, 0x00, 0x57, 0x00, 0x77, 0x00, 0x9A,
	0x00, 0xD9, 0x01, 0x17, 0x01, 0x4C, 0x01, 0xCB, 0x02, 0x45,
	0x02, 0xBD, 0x02, 0xFC, 0x03, 0x3D, 0x03, 0x7C, 0x03, 0x9B,
	0x03, 0xB9, 0x03, 0xC8, 0x03, 0xD0, 0x03, 0xD4, 0x03, 0xD8,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x1A, 0x00, 0x2A,
	0x00, 0x3B, 0x00, 0x49, 0x00, 0x57, 0x00, 0x77, 0x00, 0x8E,
	0x00, 0xCD, 0x01, 0x0D, 0x01, 0x4C, 0x01, 0xCB, 0x02, 0x45,
	0x02, 0xBD, 0x02, 0xFC, 0x03, 0x3D, 0x03, 0x7C, 0x03, 0x9B,
	0x03, 0xB9, 0x03, 0xC8, 0x03, 0xD0, 0x03, 0xD4, 0x03, 0xD8,
};

static const unsigned char SEQ_S6D7AT0B_BOE_EA[] = {
	0xEA,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x1B, 0x00, 0x2C,
	0x00, 0x3E, 0x00, 0x4C, 0x00, 0x5C, 0x00, 0x7C, 0x00, 0xA1,
	0x00, 0xE2, 0x01, 0x21, 0x01, 0x5B, 0x01, 0xDE, 0x02, 0x5A,
	0x02, 0xD8, 0x03, 0x1A, 0x03, 0x5D, 0x03, 0x9C, 0x03, 0xBC,
	0x03, 0xDB, 0x03, 0xEC, 0x03, 0xF4, 0x03, 0xF8, 0x03, 0xFC,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x1B, 0x00, 0x2C,
	0x00, 0x3E, 0x00, 0x4C, 0x00, 0x5C, 0x00, 0x7C, 0x00, 0x95,
	0x00, 0xD6, 0x01, 0x17, 0x01, 0x5B, 0x01, 0xDE, 0x02, 0x5A,
	0x02, 0xD8, 0x03, 0x1A, 0x03, 0x5D, 0x03, 0x9C, 0x03, 0xBC,
	0x03, 0xDB, 0x03, 0xEC, 0x03, 0xF4, 0x03, 0xF8, 0x03, 0xFC,
};

static const unsigned char SEQ_S6D7AT0B_BOE_EB[] = {
	0xEB,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x0B, 0x00, 0x19, 0x00, 0x28,
	0x00, 0x39, 0x00, 0x46, 0x00, 0x54, 0x00, 0x74, 0x00, 0x99,
	0x00, 0xD7, 0x01, 0x15, 0x01, 0x4B, 0x01, 0xC9, 0x02, 0x42,
	0x02, 0xBA, 0x02, 0xF9, 0x03, 0x3A, 0x03, 0x7A, 0x03, 0x99,
	0x03, 0xBA, 0x03, 0xCA, 0x03, 0xD2, 0x03, 0xD6, 0x03, 0xDB,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x0B, 0x00, 0x19, 0x00, 0x28,
	0x00, 0x39, 0x00, 0x46, 0x00, 0x54, 0x00, 0x74, 0x00, 0x8D,
	0x00, 0xCB, 0x01, 0x0B, 0x01, 0x4B, 0x01, 0xC9, 0x02, 0x42,
	0x02, 0xBA, 0x02, 0xF9, 0x03, 0x3A, 0x03, 0x7A, 0x03, 0x99,
	0x03, 0xBA, 0x03, 0xCA, 0x03, 0xD2, 0x03, 0xD6, 0x03, 0xDB,
};

static const unsigned char SEQ_TEST_KEY_OFF_9F[] = {
	0x9F,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xF0,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_OFF_FC[] = {
	0xFC,
	0xA5, 0xA5,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};


/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	22, 30, 38, 46, 55, 63, 71, 80, 88, 96, /* 1: 22 */
	105, 113, 121, 129, 138, 146, 154, 163, 171, 179,
	188, 196, 204, 213, 221, 229, 237, 246, 254, 262,
	271, 279, 287, 296, 304, 312, 321, 329, 337, 345,
	354, 362, 370, 379, 387, 395, 404, 412, 420, 429,
	437, 445, 453, 462, 470, 478, 487, 495, 503, 512,
	520, 528, 537, 545, 553, 561, 570, 578, 586, 595,
	603, 611, 620, 628, 636, 645, 653, 661, 669, 678,
	686, 694, 703, 711, 719, 728, 736, 744, 753, 761,
	769, 777, 786, 794, 802, 811, 819, 827, 836, 844,
	852, 861, 869, 877, 885, 894, 902, 910, 919, 927,
	935, 944, 952, 960, 969, 977, 985, 993, 1002, 1010,
	1018, 1027, 1035, 1043, 1052, 1060, 1068, 1077, 1093, 1109, /* 128: 1077 */
	1125, 1141, 1158, 1174, 1190, 1206, 1222, 1239, 1255, 1271,
	1287, 1304, 1320, 1336, 1352, 1368, 1385, 1401, 1417, 1433,
	1450, 1466, 1482, 1498, 1514, 1531, 1547, 1563, 1579, 1596,
	1612, 1628, 1644, 1660, 1677, 1693, 1709, 1725, 1742, 1758,
	1774, 1790, 1806, 1823, 1839, 1855, 1871, 1888, 1904, 1920,
	1936, 1952, 1969, 1985, 2001, 2017, 2034, 2050, 2066, 2082,
	2098, 2115, 2131, 2147, 2163, 2179, 2196, 2212, 2228, 2244,
	2261, 2277, 2293, 2309, 2325, 2342, 2358, 2374, 2390, 2407,
	2423, 2439, 2455, 2471, 2488, 2504, 2520, 2536, 2553, 2569,
	2585, 2601, 2617, 2634, 2650, 2666, 2682, 2699, 2715, 2731,
	2747, 2763, 2780, 2796, 2812, 2828, 2845, 2861, 2877, 2893,
	2909, 2926, 2942, 2958, 2974, 2991, 3007, 3023, 3039, 3055,
	3072, 3088, 3104, 3120, 3137, 3137, 3137, 3137, 3137, 3137, /* 255: 3137 */
	3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137,
	3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137,
	3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137,
	3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137, 3137,
	3137, 3137, 3137, 3137, 3137, 3880,
};

#endif /* __S6D7AT0B_PARAM_H__ */
