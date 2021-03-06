﻿/*******************************************************************************
* font
* filename: unsaved
* name: arial
* family: Swis721 BT
* size: 16
* style: Normal
* included characters:  !"#$%&'()*+,-./0123456789:;<=>?\x0040ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
* antialiasing: no
* type: proportional
* encoding: US-ASCII
* unicode bom: no
*
* preset name: Monochrome
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Edge 11
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*!****************************************************************************
* Include
*/
#include "display.h"

static const uint8_t image_data_arial_0x20[15] = {
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x20 = { image_data_arial_0x20, 4, 15};

static const uint8_t image_data_arial_0x21[15] = {
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xf8,
    0xd8,
    0xd8,
    0xf8,
    0xf8,
    0xf8
};
static const image_type arial_0x21 = { image_data_arial_0x21, 5, 15};

static const uint8_t image_data_arial_0x22[15] = {
    0xf8,
    0xa8,
    0xa8,
    0xa8,
    0xa8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8
};
static const image_type arial_0x22 = { image_data_arial_0x22, 5, 15};

static const uint8_t image_data_arial_0x23[30] = {
    0xff, 0xf0,
    0xfc, 0x90,
    0xfd, 0xb0,
    0xf9, 0xb0,
    0xc0, 0x00,
    0xf3, 0x70,
    0xf6, 0x70,
    0x80, 0x10,
    0xe6, 0xf0,
    0xec, 0xf0,
    0xed, 0xf0,
    0xcd, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x23 = { image_data_arial_0x23, 12, 15};

static const uint8_t image_data_arial_0x24[30] = {
    0xc1, 0x80,
    0x96, 0x00,
    0xb7, 0x00,
    0xb7, 0x80,
    0x97, 0x80,
    0xc1, 0x80,
    0xf0, 0x80,
    0xf6, 0x00,
    0xb7, 0x00,
    0xb7, 0x00,
    0x96, 0x80,
    0xc1, 0x80,
    0xf7, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x24 = { image_data_arial_0x24, 9, 15};

static const uint8_t image_data_arial_0x25[30] = {
    0xc3, 0x9c,
    0x99, 0xbc,
    0xbd, 0x7c,
    0xbd, 0x7c,
    0x98, 0xfc,
    0xc2, 0xfc,
    0xfd, 0x0c,
    0xfc, 0x64,
    0xfa, 0xf4,
    0xfa, 0xf4,
    0xf6, 0x64,
    0xe7, 0x0c,
    0xff, 0xfc,
    0xff, 0xfc,
    0xff, 0xfc
};
static const image_type arial_0x25 = { image_data_arial_0x25, 14, 15};

static const uint8_t image_data_arial_0x26[30] = {
    0xe1, 0xe0,
    0xde, 0xe0,
    0xde, 0xe0,
    0xde, 0xe0,
    0xcd, 0xe0,
    0xe3, 0xe0,
    0xd1, 0x60,
    0xb9, 0x60,
    0xbc, 0x60,
    0xbe, 0x60,
    0x9c, 0x20,
    0xc1, 0x80,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x26 = { image_data_arial_0x26, 11, 15};

static const uint8_t image_data_arial_0x27[15] = {
    0xc0,
    0x80,
    0x80,
    0x80,
    0x80,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0xc0
};
static const image_type arial_0x27 = { image_data_arial_0x27, 2, 15};

static const uint8_t image_data_arial_0x28[15] = {
    0xf0,
    0xf4,
    0xec,
    0xec,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xec,
    0xec,
    0xf4,
    0xf0
};
static const image_type arial_0x28 = { image_data_arial_0x28, 6, 15};

static const uint8_t image_data_arial_0x29[15] = {
    0x38,
    0xb8,
    0xd8,
    0xd8,
    0xe8,
    0xe8,
    0xe8,
    0xe8,
    0xe8,
    0xe8,
    0xe8,
    0xd8,
    0xd8,
    0xb8,
    0x38
};
static const image_type arial_0x29 = { image_data_arial_0x29, 5, 15};

static const uint8_t image_data_arial_0x2a[15] = {
    0xf7,
    0xf7,
    0x94,
    0xe3,
    0xeb,
    0xd9,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x2a = { image_data_arial_0x2a, 8, 15};

static const uint8_t image_data_arial_0x2b[30] = {
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xfd, 0xf8,
    0xfd, 0xf8,
    0xfd, 0xf8,
    0xfd, 0xf8,
    0xc0, 0x18,
    0xfd, 0xf8,
    0xfd, 0xf8,
    0xfd, 0xf8,
    0xfd, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8
};
static const image_type arial_0x2b = { image_data_arial_0x2b, 13, 15};

static const uint8_t image_data_arial_0x2c[15] = {
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xf0
};
static const image_type arial_0x2c = { image_data_arial_0x2c, 4, 15};

static const uint8_t image_data_arial_0x2d[15] = {
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0x80,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xf8
};
static const image_type arial_0x2d = { image_data_arial_0x2d, 5, 15};

static const uint8_t image_data_arial_0x2e[15] = {
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xf0,
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x2e = { image_data_arial_0x2e, 4, 15};

static const uint8_t image_data_arial_0x2f[15] = {
    0xf0,
    0xf0,
    0xe8,
    0xe8,
    0xe8,
    0xd8,
    0xd8,
    0xd8,
    0xb8,
    0xb8,
    0xb8,
    0x78,
    0x78,
    0xf8,
    0xf8
};
static const image_type arial_0x2f = { image_data_arial_0x2f, 5, 15};

static const uint8_t image_data_arial_0x30[30] = {
    0xe1, 0x80,
    0xde, 0x80,
    0xde, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xde, 0x80,
    0xde, 0x80,
    0xe1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x30 = { image_data_arial_0x30, 9, 15};

static const uint8_t image_data_arial_0x31[30] = {
    0xf7, 0x80,
    0xe7, 0x80,
    0x87, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x31 = { image_data_arial_0x31, 9, 15};

static const uint8_t image_data_arial_0x32[30] = {
    0xe1, 0x80,
    0xde, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0xff, 0x00,
    0xfe, 0x00,
    0xf8, 0x80,
    0xe1, 0x80,
    0xcf, 0x80,
    0x9f, 0x80,
    0xbf, 0x80,
    0x80, 0x00,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x32 = { image_data_arial_0x32, 9, 15};

static const uint8_t image_data_arial_0x33[30] = {
    0xe1, 0x80,
    0xde, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0xff, 0x00,
    0xfe, 0x00,
    0xf0, 0x80,
    0xfe, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xde, 0x80,
    0xe1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x33 = { image_data_arial_0x33, 9, 15};

static const uint8_t image_data_arial_0x34[30] = {
    0xf9, 0x80,
    0xf9, 0x80,
    0xf1, 0x80,
    0xe5, 0x80,
    0xcd, 0x80,
    0xdd, 0x80,
    0x9d, 0x80,
    0x80, 0x00,
    0xfd, 0x80,
    0xfd, 0x80,
    0xfd, 0x80,
    0xfd, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x34 = { image_data_arial_0x34, 9, 15};

static const uint8_t image_data_arial_0x35[30] = {
    0xc0, 0x00,
    0xdf, 0x80,
    0x9f, 0x80,
    0x9f, 0x80,
    0xa1, 0x80,
    0x9e, 0x80,
    0xff, 0x00,
    0xff, 0x00,
    0xff, 0x00,
    0xbf, 0x00,
    0xde, 0x80,
    0xe1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x35 = { image_data_arial_0x35, 9, 15};

static const uint8_t image_data_arial_0x36[30] = {
    0xe0, 0x80,
    0xce, 0x00,
    0xdf, 0x00,
    0xbf, 0x80,
    0xbf, 0x80,
    0xa1, 0x80,
    0x9e, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xde, 0x80,
    0xe1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x36 = { image_data_arial_0x36, 9, 15};

static const uint8_t image_data_arial_0x37[30] = {
    0x80, 0x00,
    0xfe, 0x80,
    0xfc, 0x80,
    0xfd, 0x80,
    0xfb, 0x80,
    0xfb, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xef, 0x80,
    0xef, 0x80,
    0xef, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x37 = { image_data_arial_0x37, 9, 15};

static const uint8_t image_data_arial_0x38[30] = {
    0xe1, 0x80,
    0x9e, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0x9e, 0x00,
    0xc0, 0x80,
    0x9e, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xde, 0x80,
    0xe1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x38 = { image_data_arial_0x38, 9, 15};

static const uint8_t image_data_arial_0x39[30] = {
    0xe1, 0x80,
    0xde, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xde, 0x00,
    0xe1, 0x00,
    0xff, 0x00,
    0xff, 0x00,
    0xbe, 0x80,
    0x9c, 0x80,
    0xc1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x39 = { image_data_arial_0x39, 9, 15};

static const uint8_t image_data_arial_0x3a[15] = {
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xd8,
    0xd8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xd8,
    0xd8,
    0xf8,
    0xf8,
    0xf8
};
static const image_type arial_0x3a = { image_data_arial_0x3a, 5, 15};

static const uint8_t image_data_arial_0x3b[15] = {
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xd8,
    0xd8,
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xd8,
    0xd8,
    0xd8,
    0xd8,
    0xf8
};
static const image_type arial_0x3b = { image_data_arial_0x3b, 5, 15};

static const uint8_t image_data_arial_0x3c[30] = {
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xd8,
    0xff, 0x38,
    0xf8, 0xf8,
    0xe3, 0xf8,
    0xcf, 0xf8,
    0xe3, 0xf8,
    0xf8, 0xf8,
    0xff, 0x38,
    0xff, 0xd8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8
};
static const image_type arial_0x3c = { image_data_arial_0x3c, 13, 15};

static const uint8_t image_data_arial_0x3d[30] = {
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xc0, 0x18,
    0xff, 0xf8,
    0xff, 0xf8,
    0xc0, 0x18,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8
};
static const image_type arial_0x3d = { image_data_arial_0x3d, 13, 15};

static const uint8_t image_data_arial_0x3e[30] = {
    0xff, 0xf8,
    0xff, 0xf8,
    0xdf, 0xf8,
    0xe7, 0xf8,
    0xf8, 0xf8,
    0xfe, 0x38,
    0xff, 0x98,
    0xfe, 0x38,
    0xf8, 0xf8,
    0xe7, 0xf8,
    0xdf, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8
};
static const image_type arial_0x3e = { image_data_arial_0x3e, 13, 15};

static const uint8_t image_data_arial_0x3f[15] = {
    0xe1,
    0xdc,
    0xbe,
    0xbe,
    0xfc,
    0xf9,
    0xf3,
    0xf7,
    0xf7,
    0xff,
    0xf7,
    0xf7,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x3f = { image_data_arial_0x3f, 8, 15};

static const uint8_t image_data_arial_0x40[30] = {
    0xff, 0xff,
    0xfc, 0x1f,
    0xf3, 0xe7,
    0xef, 0xfb,
    0xdf, 0xf9,
    0xde, 0x2d,
    0xbd, 0xdd,
    0xbb, 0xdd,
    0xbb, 0xdd,
    0xbb, 0x9b,
    0xbb, 0xb3,
    0xdc, 0x47,
    0xcf, 0xff,
    0xe7, 0xe7,
    0xf8, 0x1f
};
static const image_type arial_0x40 = { image_data_arial_0x40, 16, 15};

static const uint8_t image_data_arial_0x41[30] = {
    0xf3, 0xc0,
    0xf3, 0xc0,
    0xe1, 0xc0,
    0xed, 0xc0,
    0xed, 0xc0,
    0xcc, 0xc0,
    0xde, 0xc0,
    0xc0, 0xc0,
    0x9e, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0x3f, 0x00,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x41 = { image_data_arial_0x41, 10, 15};

static const uint8_t image_data_arial_0x42[30] = {
    0x80, 0xe0,
    0xbe, 0x60,
    0xbf, 0x60,
    0xbf, 0x60,
    0xbe, 0x60,
    0x80, 0xe0,
    0xbf, 0x20,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0x60,
    0x80, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x42 = { image_data_arial_0x42, 11, 15};

static const uint8_t image_data_arial_0x43[30] = {
    0xf0, 0x60,
    0xef, 0x20,
    0xdf, 0x80,
    0xbf, 0xc0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xc0,
    0xdf, 0xc0,
    0xcf, 0x20,
    0xf0, 0x60,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x43 = { image_data_arial_0x43, 11, 15};

static const uint8_t image_data_arial_0x44[30] = {
    0x80, 0xe0,
    0xbe, 0x60,
    0xbf, 0x60,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0x60,
    0xbe, 0x60,
    0x81, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x44 = { image_data_arial_0x44, 11, 15};

static const uint8_t image_data_arial_0x45[30] = {
    0x80, 0x40,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0x80, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0x80, 0x40,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x45 = { image_data_arial_0x45, 10, 15};

static const uint8_t image_data_arial_0x46[30] = {
    0x80, 0x00,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0x80, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x46 = { image_data_arial_0x46, 9, 15};

static const uint8_t image_data_arial_0x47[30] = {
    0xf0, 0x70,
    0xef, 0x30,
    0xdf, 0x90,
    0xbf, 0xd0,
    0xbf, 0xf0,
    0xbf, 0xf0,
    0xbc, 0x10,
    0xbf, 0xd0,
    0xbf, 0xd0,
    0xdf, 0x90,
    0xef, 0x10,
    0xf0, 0x50,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x47 = { image_data_arial_0x47, 12, 15};

static const uint8_t image_data_arial_0x48[30] = {
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0x80, 0x30,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xbf, 0xb0,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x48 = { image_data_arial_0x48, 12, 15};

static const uint8_t image_data_arial_0x49[15] = {
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x49 = { image_data_arial_0x49, 4, 15};

static const uint8_t image_data_arial_0x4a[15] = {
    0xfd,
    0xfd,
    0xfd,
    0xfd,
    0xfd,
    0xfd,
    0xfd,
    0xfd,
    0x7d,
    0x7d,
    0x39,
    0x83,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x4a = { image_data_arial_0x4a, 8, 15};

static const uint8_t image_data_arial_0x4b[30] = {
    0xbe, 0x00,
    0xbc, 0xc0,
    0xb9, 0xc0,
    0xb3, 0xc0,
    0xa7, 0xc0,
    0x83, 0xc0,
    0x93, 0xc0,
    0xb9, 0xc0,
    0xbc, 0xc0,
    0xbc, 0xc0,
    0xbe, 0x40,
    0xbf, 0x00,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x4b = { image_data_arial_0x4b, 10, 15};

static const uint8_t image_data_arial_0x4c[30] = {
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0x80, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x4c = { image_data_arial_0x4c, 9, 15};

static const uint8_t image_data_arial_0x4d[30] = {
    0x9f, 0xc8,
    0x8f, 0xc8,
    0x8f, 0x88,
    0xaf, 0xa8,
    0xa7, 0x28,
    0xa7, 0x28,
    0xb7, 0x68,
    0xb2, 0x68,
    0xba, 0xe8,
    0xba, 0xe8,
    0xb8, 0xe8,
    0xbd, 0xe8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8
};
static const image_type arial_0x4d = { image_data_arial_0x4d, 13, 15};

static const uint8_t image_data_arial_0x4e[30] = {
    0x9f, 0xb0,
    0x8f, 0xb0,
    0x8f, 0xb0,
    0xa7, 0xb0,
    0xa3, 0xb0,
    0xb3, 0xb0,
    0xb9, 0xb0,
    0xb8, 0xb0,
    0xbc, 0xb0,
    0xbe, 0x30,
    0xbe, 0x30,
    0xbf, 0x30,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x4e = { image_data_arial_0x4e, 12, 15};

static const uint8_t image_data_arial_0x4f[30] = {
    0xf0, 0x70,
    0xef, 0xb0,
    0xdf, 0xd0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xdf, 0xd0,
    0xef, 0xb0,
    0xf0, 0x70,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x4f = { image_data_arial_0x4f, 12, 15};

static const uint8_t image_data_arial_0x50[30] = {
    0x80, 0xc0,
    0xbe, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbe, 0x40,
    0x80, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x50 = { image_data_arial_0x50, 10, 15};

static const uint8_t image_data_arial_0x51[30] = {
    0xf0, 0x70,
    0xef, 0xb0,
    0xdf, 0xd0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xbf, 0xe0,
    0xde, 0x40,
    0xef, 0x10,
    0xf0, 0x00,
    0xff, 0xe0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x51 = { image_data_arial_0x51, 12, 15};

static const uint8_t image_data_arial_0x52[30] = {
    0x80, 0xe0,
    0xbe, 0x60,
    0xbf, 0x60,
    0xbf, 0x60,
    0xbf, 0x60,
    0xbe, 0x60,
    0x80, 0xe0,
    0xbf, 0x60,
    0xbf, 0x60,
    0xbf, 0x60,
    0xbf, 0x60,
    0xbf, 0x60,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x52 = { image_data_arial_0x52, 11, 15};

static const uint8_t image_data_arial_0x53[30] = {
    0xe0, 0xc0,
    0xdf, 0x40,
    0xbf, 0x80,
    0xbf, 0x80,
    0x9f, 0xc0,
    0xc1, 0xc0,
    0xf0, 0x40,
    0xff, 0x00,
    0xbf, 0x80,
    0xbf, 0x80,
    0xdf, 0x40,
    0xe0, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x53 = { image_data_arial_0x53, 10, 15};

static const uint8_t image_data_arial_0x54[30] = {
    0x00, 0x00,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xf7, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x54 = { image_data_arial_0x54, 9, 15};

static const uint8_t image_data_arial_0x55[30] = {
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xbf, 0xa0,
    0xdf, 0x60,
    0xe0, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x55 = { image_data_arial_0x55, 11, 15};

static const uint8_t image_data_arial_0x56[30] = {
    0x3f, 0x80,
    0xbf, 0x20,
    0x9f, 0x20,
    0x9f, 0x20,
    0xce, 0x60,
    0xce, 0x60,
    0xee, 0xe0,
    0xe4, 0xe0,
    0xf5, 0xe0,
    0xf5, 0xe0,
    0xf1, 0xe0,
    0xfb, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x56 = { image_data_arial_0x56, 11, 15};

static const uint8_t image_data_arial_0x57[30] = {
    0x3c, 0xf0,
    0x3c, 0xf0,
    0xb8, 0x74,
    0xb8, 0x74,
    0xbb, 0x74,
    0x9b, 0x64,
    0xd3, 0x2c,
    0xd7, 0xac,
    0xd7, 0xac,
    0xc7, 0x8c,
    0xef, 0xdc,
    0xef, 0xdc,
    0xff, 0xfc,
    0xff, 0xfc,
    0xff, 0xfc
};
static const image_type arial_0x57 = { image_data_arial_0x57, 14, 15};

static const uint8_t image_data_arial_0x58[30] = {
    0x3f, 0x00,
    0x9e, 0x40,
    0xcc, 0xc0,
    0xcc, 0xc0,
    0xe1, 0xc0,
    0xf3, 0xc0,
    0xf3, 0xc0,
    0xe1, 0xc0,
    0xcc, 0xc0,
    0xcc, 0xc0,
    0x9e, 0x40,
    0x3f, 0x00,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x58 = { image_data_arial_0x58, 10, 15};

static const uint8_t image_data_arial_0x59[30] = {
    0x3f, 0x00,
    0x9f, 0x20,
    0xce, 0x60,
    0xce, 0x60,
    0xe4, 0xe0,
    0xf5, 0xe0,
    0xfb, 0xe0,
    0xfb, 0xe0,
    0xfb, 0xe0,
    0xfb, 0xe0,
    0xfb, 0xe0,
    0xfb, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0,
    0xff, 0xe0
};
static const image_type arial_0x59 = { image_data_arial_0x59, 11, 15};

static const uint8_t image_data_arial_0x5a[30] = {
    0x80, 0x00,
    0xff, 0x00,
    0xfe, 0x40,
    0xfc, 0x40,
    0xfc, 0xc0,
    0xf9, 0xc0,
    0xf3, 0xc0,
    0xe3, 0xc0,
    0xe7, 0xc0,
    0xcf, 0xc0,
    0x9f, 0xc0,
    0x80, 0x00,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x5a = { image_data_arial_0x5a, 10, 15};

static const uint8_t image_data_arial_0x5b[15] = {
    0xc4,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xdc,
    0xc4
};
static const image_type arial_0x5b = { image_data_arial_0x5b, 6, 15};

static const uint8_t image_data_arial_0x5c[15] = {
    0x78,
    0x78,
    0xb8,
    0xb8,
    0xb8,
    0xd8,
    0xd8,
    0xd8,
    0xe8,
    0xe8,
    0xe8,
    0xf0,
    0xf0,
    0xf8,
    0xf8
};
static const image_type arial_0x5c = { image_data_arial_0x5c, 5, 15};

static const uint8_t image_data_arial_0x5d[15] = {
    0x8c,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0xec,
    0x8c
};
static const image_type arial_0x5d = { image_data_arial_0x5d, 6, 15};

static const uint8_t image_data_arial_0x5e[30] = {
    0xff, 0xff,
    0xfc, 0x7f,
    0xf9, 0x3f,
    0xf3, 0x9f,
    0xe7, 0xcf,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff,
    0xff, 0xff
};
static const image_type arial_0x5e = { image_data_arial_0x5e, 16, 15};

static const uint8_t image_data_arial_0x5f[15] = {
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x5f = { image_data_arial_0x5f, 8, 15};

static const uint8_t image_data_arial_0x60[15] = {
    0xef,
    0xf7,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x60 = { image_data_arial_0x60, 8, 15};

static const uint8_t image_data_arial_0x61[30] = {
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xc1, 0x80,
    0xbe, 0x80,
    0xfe, 0x80,
    0xc0, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbc, 0x80,
    0xc2, 0x00,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x61 = { image_data_arial_0x61, 9, 15};

static const uint8_t image_data_arial_0x62[30] = {
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xa1, 0xc0,
    0x9e, 0xc0,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0x9e, 0xc0,
    0xa1, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x62 = { image_data_arial_0x62, 10, 15};

static const uint8_t image_data_arial_0x63[15] = {
    0xff,
    0xff,
    0xff,
    0xff,
    0xe1,
    0xdc,
    0xbe,
    0xbf,
    0xbf,
    0xbe,
    0xdc,
    0xe1,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x63 = { image_data_arial_0x63, 8, 15};

static const uint8_t image_data_arial_0x64[30] = {
    0xff, 0x40,
    0xff, 0x40,
    0xff, 0x40,
    0xff, 0x40,
    0xe1, 0x40,
    0xde, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xde, 0x40,
    0xe1, 0x40,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0
};
static const image_type arial_0x64 = { image_data_arial_0x64, 10, 15};

static const uint8_t image_data_arial_0x65[30] = {
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xe1, 0x80,
    0xde, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0x80, 0x00,
    0xbf, 0x80,
    0xdf, 0x00,
    0xe0, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x65 = { image_data_arial_0x65, 9, 15};

static const uint8_t image_data_arial_0x66[15] = {
    0xc0,
    0xb0,
    0xb0,
    0xb0,
    0x00,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x66 = { image_data_arial_0x66, 4, 15};

static const uint8_t image_data_arial_0x67[30] = {
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xe1, 0x40,
    0xde, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xde, 0x40,
    0xe1, 0x40,
    0xff, 0x40,
    0xbe, 0x40,
    0xc0, 0xc0
};
static const image_type arial_0x67 = { image_data_arial_0x67, 10, 15};

static const uint8_t image_data_arial_0x68[30] = {
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xbf, 0x80,
    0xa1, 0x80,
    0x9e, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x68 = { image_data_arial_0x68, 9, 15};

static const uint8_t image_data_arial_0x69[15] = {
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x69 = { image_data_arial_0x69, 4, 15};

static const uint8_t image_data_arial_0x6a[15] = {
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0x30
};
static const image_type arial_0x6a = { image_data_arial_0x6a, 4, 15};

static const uint8_t image_data_arial_0x6b[15] = {
    0xbf,
    0xbf,
    0xbf,
    0xbf,
    0xbc,
    0xb3,
    0xa7,
    0x87,
    0x93,
    0xbb,
    0xb9,
    0xbc,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x6b = { image_data_arial_0x6b, 8, 15};

static const uint8_t image_data_arial_0x6c[15] = {
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x6c = { image_data_arial_0x6c, 4, 15};

static const uint8_t image_data_arial_0x6d[30] = {
    0xff, 0xfc,
    0xff, 0xfc,
    0xff, 0xfc,
    0xff, 0xfc,
    0xa1, 0x84,
    0x9e, 0x78,
    0xbe, 0xf8,
    0xbe, 0xf8,
    0xbe, 0xf8,
    0xbe, 0xf8,
    0xbe, 0xf8,
    0xbe, 0xf8,
    0xff, 0xfc,
    0xff, 0xfc,
    0xff, 0xfc
};
static const image_type arial_0x6d = { image_data_arial_0x6d, 14, 15};

static const uint8_t image_data_arial_0x6e[30] = {
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xa1, 0x80,
    0x9e, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x6e = { image_data_arial_0x6e, 9, 15};

static const uint8_t image_data_arial_0x6f[30] = {
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xe1, 0x80,
    0xde, 0x80,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xbf, 0x00,
    0xde, 0x80,
    0xe1, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x6f = { image_data_arial_0x6f, 9, 15};

static const uint8_t image_data_arial_0x70[30] = {
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xa1, 0xc0,
    0x9e, 0xc0,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0x9e, 0xc0,
    0xa1, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0,
    0xbf, 0xc0
};
static const image_type arial_0x70 = { image_data_arial_0x70, 10, 15};

static const uint8_t image_data_arial_0x71[30] = {
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xff, 0xc0,
    0xe1, 0x40,
    0xde, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xbf, 0x40,
    0xde, 0x40,
    0xe1, 0x40,
    0xff, 0x40,
    0xff, 0x40,
    0xff, 0x40
};
static const image_type arial_0x71 = { image_data_arial_0x71, 10, 15};

static const uint8_t image_data_arial_0x72[15] = {
    0xf8,
    0xf8,
    0xf8,
    0xf8,
    0xa0,
    0x98,
    0xb8,
    0xb8,
    0xb8,
    0xb8,
    0xb8,
    0xb8,
    0xf8,
    0xf8,
    0xf8
};
static const image_type arial_0x72 = { image_data_arial_0x72, 5, 15};

static const uint8_t image_data_arial_0x73[15] = {
    0xff,
    0xff,
    0xff,
    0xff,
    0xc1,
    0xbc,
    0xbe,
    0x8f,
    0xf0,
    0xbe,
    0x9e,
    0xc1,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x73 = { image_data_arial_0x73, 8, 15};

static const uint8_t image_data_arial_0x74[15] = {
    0xf0,
    0xb0,
    0xb0,
    0xb0,
    0x00,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0xb0,
    0x80,
    0xf0,
    0xf0,
    0xf0
};
static const image_type arial_0x74 = { image_data_arial_0x74, 4, 15};

static const uint8_t image_data_arial_0x75[30] = {
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbe, 0x80,
    0xbc, 0x80,
    0xc2, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x75 = { image_data_arial_0x75, 9, 15};

static const uint8_t image_data_arial_0x76[30] = {
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0x3e, 0x00,
    0x9c, 0x80,
    0x9c, 0x80,
    0xdd, 0x80,
    0xc9, 0x80,
    0xeb, 0x80,
    0xe3, 0x80,
    0xf7, 0x80,
    0xff, 0x80,
    0xff, 0x80,
    0xff, 0x80
};
static const image_type arial_0x76 = { image_data_arial_0x76, 9, 15};

static const uint8_t image_data_arial_0x77[30] = {
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0,
    0x3d, 0xc0,
    0xb9, 0xd0,
    0xba, 0xd0,
    0x9a, 0x90,
    0xd6, 0xb0,
    0xd6, 0xb0,
    0xc7, 0x30,
    0xef, 0x70,
    0xff, 0xf0,
    0xff, 0xf0,
    0xff, 0xf0
};
static const image_type arial_0x77 = { image_data_arial_0x77, 12, 15};

static const uint8_t image_data_arial_0x78[15] = {
    0xff,
    0xff,
    0xff,
    0xff,
    0x3c,
    0x99,
    0xc3,
    0xe7,
    0xe7,
    0xc3,
    0x99,
    0x3c,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x78 = { image_data_arial_0x78, 8, 15};

static const uint8_t image_data_arial_0x79[15] = {
    0xff,
    0xff,
    0xff,
    0xff,
    0x3c,
    0xbd,
    0x99,
    0x99,
    0xdb,
    0xc3,
    0xe7,
    0xe7,
    0xe7,
    0xef,
    0x8f
};
static const image_type arial_0x79 = { image_data_arial_0x79, 8, 15};

static const uint8_t image_data_arial_0x7a[15] = {
    0xff,
    0xff,
    0xff,
    0xff,
    0x01,
    0xfb,
    0xf3,
    0xe7,
    0xcf,
    0x9f,
    0x3f,
    0x01,
    0xff,
    0xff,
    0xff
};
static const image_type arial_0x7a = { image_data_arial_0x7a, 8, 15};

static const uint8_t image_data_arial_0x7b[15] = {
    0xf9,
    0xf7,
    0xf7,
    0xf7,
    0xf7,
    0xf7,
    0xf7,
    0xcf,
    0xf7,
    0xf7,
    0xf7,
    0xf7,
    0xf7,
    0xf7,
    0xf9
};
static const image_type arial_0x7b = { image_data_arial_0x7b, 8, 15};

static const uint8_t image_data_arial_0x7c[15] = {
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef
};
static const image_type arial_0x7c = { image_data_arial_0x7c, 8, 15};

static const uint8_t image_data_arial_0x7d[15] = {
    0x9f,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xf3,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0x9f
};
static const image_type arial_0x7d = { image_data_arial_0x7d, 8, 15};

static const uint8_t image_data_arial_0x7e[30] = {
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xc3, 0xb8,
    0xbc, 0x78,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8,
    0xff, 0xf8
};
static const image_type arial_0x7e = { image_data_arial_0x7e, 13, 15};


static const char_type arial_array[] = {

  // character: ' '
  {0x20, &arial_0x20},

  // character: '!'
  {0x21, &arial_0x21},

  // character: '"'
  {0x22, &arial_0x22},

  // character: '#'
  {0x23, &arial_0x23},

  // character: '$'
  {0x24, &arial_0x24},

  // character: '%'
  {0x25, &arial_0x25},

  // character: '&'
  {0x26, &arial_0x26},

  // character: '''
  {0x27, &arial_0x27},

  // character: '('
  {0x28, &arial_0x28},

  // character: ')'
  {0x29, &arial_0x29},

  // character: '*'
  {0x2a, &arial_0x2a},

  // character: '+'
  {0x2b, &arial_0x2b},

  // character: ','
  {0x2c, &arial_0x2c},

  // character: '-'
  {0x2d, &arial_0x2d},

  // character: '.'
  {0x2e, &arial_0x2e},

  // character: '/'
  {0x2f, &arial_0x2f},

  // character: '0'
  {0x30, &arial_0x30},

  // character: '1'
  {0x31, &arial_0x31},

  // character: '2'
  {0x32, &arial_0x32},

  // character: '3'
  {0x33, &arial_0x33},

  // character: '4'
  {0x34, &arial_0x34},

  // character: '5'
  {0x35, &arial_0x35},

  // character: '6'
  {0x36, &arial_0x36},

  // character: '7'
  {0x37, &arial_0x37},

  // character: '8'
  {0x38, &arial_0x38},

  // character: '9'
  {0x39, &arial_0x39},

  // character: ':'
  {0x3a, &arial_0x3a},

  // character: ';'
  {0x3b, &arial_0x3b},

  // character: '<'
  {0x3c, &arial_0x3c},

  // character: '='
  {0x3d, &arial_0x3d},

  // character: '>'
  {0x3e, &arial_0x3e},

  // character: '?'
  {0x3f, &arial_0x3f},

  // character: '\x0040'
  {0x40, &arial_0x40},

  // character: 'A'
  {0x41, &arial_0x41},

  // character: 'B'
  {0x42, &arial_0x42},

  // character: 'C'
  {0x43, &arial_0x43},

  // character: 'D'
  {0x44, &arial_0x44},

  // character: 'E'
  {0x45, &arial_0x45},

  // character: 'F'
  {0x46, &arial_0x46},

  // character: 'G'
  {0x47, &arial_0x47},

  // character: 'H'
  {0x48, &arial_0x48},

  // character: 'I'
  {0x49, &arial_0x49},

  // character: 'J'
  {0x4a, &arial_0x4a},

  // character: 'K'
  {0x4b, &arial_0x4b},

  // character: 'L'
  {0x4c, &arial_0x4c},

  // character: 'M'
  {0x4d, &arial_0x4d},

  // character: 'N'
  {0x4e, &arial_0x4e},

  // character: 'O'
  {0x4f, &arial_0x4f},

  // character: 'P'
  {0x50, &arial_0x50},

  // character: 'Q'
  {0x51, &arial_0x51},

  // character: 'R'
  {0x52, &arial_0x52},

  // character: 'S'
  {0x53, &arial_0x53},

  // character: 'T'
  {0x54, &arial_0x54},

  // character: 'U'
  {0x55, &arial_0x55},

  // character: 'V'
  {0x56, &arial_0x56},

  // character: 'W'
  {0x57, &arial_0x57},

  // character: 'X'
  {0x58, &arial_0x58},

  // character: 'Y'
  {0x59, &arial_0x59},

  // character: 'Z'
  {0x5a, &arial_0x5a},

  // character: '['
  {0x5b, &arial_0x5b},

  // character: '\'
  {0x5c, &arial_0x5c},

  // character: ']'
  {0x5d, &arial_0x5d},

  // character: '^'
  {0x5e, &arial_0x5e},

  // character: '_'
  {0x5f, &arial_0x5f},

  // character: '`'
  {0x60, &arial_0x60},

  // character: 'a'
  {0x61, &arial_0x61},

  // character: 'b'
  {0x62, &arial_0x62},

  // character: 'c'
  {0x63, &arial_0x63},

  // character: 'd'
  {0x64, &arial_0x64},

  // character: 'e'
  {0x65, &arial_0x65},

  // character: 'f'
  {0x66, &arial_0x66},

  // character: 'g'
  {0x67, &arial_0x67},

  // character: 'h'
  {0x68, &arial_0x68},

  // character: 'i'
  {0x69, &arial_0x69},

  // character: 'j'
  {0x6a, &arial_0x6a},

  // character: 'k'
  {0x6b, &arial_0x6b},

  // character: 'l'
  {0x6c, &arial_0x6c},

  // character: 'm'
  {0x6d, &arial_0x6d},

  // character: 'n'
  {0x6e, &arial_0x6e},

  // character: 'o'
  {0x6f, &arial_0x6f},

  // character: 'p'
  {0x70, &arial_0x70},

  // character: 'q'
  {0x71, &arial_0x71},

  // character: 'r'
  {0x72, &arial_0x72},

  // character: 's'
  {0x73, &arial_0x73},

  // character: 't'
  {0x74, &arial_0x74},

  // character: 'u'
  {0x75, &arial_0x75},

  // character: 'v'
  {0x76, &arial_0x76},

  // character: 'w'
  {0x77, &arial_0x77},

  // character: 'x'
  {0x78, &arial_0x78},

  // character: 'y'
  {0x79, &arial_0x79},

  // character: 'z'
  {0x7a, &arial_0x7a},

  // character: '{'
  {0x7b, &arial_0x7b},

  // character: '|'
  {0x7c, &arial_0x7c},

  // character: '}'
  {0x7d, &arial_0x7d},

  // character: '~'
  {0x7e, &arial_0x7e}

};


const font_type arial = { 95, arial_array };

/*************** LGPL ************** END OF FILE *********** D_EL ************/
