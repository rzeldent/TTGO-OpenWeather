//*******************************************************************************
// Original file: image_humidity.png
// Type: R5G6B5
// Scan: top_to_bottom then forward
// ******************************************************************************

#include <timage.h>

static const uint16_t image_data_image_humidity[1024] = {
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x049f,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x049f,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x04bf,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
};

const tImage image_humidity = { image_data_image_humidity,32,32,16 };
