#ifndef APP_INC_X11DISP_H_
#define APP_INC_X11DISP_H_

#include "stdint.h"

#define X11DISP_W			128
#define X11DISP_H			64
#define PIXEL_SIZE			2
#define AUTO_FLUSH			0
#define LCD_PERIOD			20	//[ms]

typedef uint32_t lcd_color_type;

typedef enum {
	black 	= 0x00000000,
	red 	= 0x00FF0000,
	green 	= 0x0000FF00,
	yellow 	= 0x00FFFF00,
	blue 	= 0x000000FF,
	magenta = 0x00FF00FF,
	cyan 	= 0x0000FFFF,
	white 	= 0x00FFFFFF,

    darkGreen = 0x3DA5,
    halfLightGray = 0x8B8B8B,
    halfLightYellow = 0xFFF8,
    halfLightRed = 0xFF18,
    halfLightGreen = 0xC7F8,
    halfLightBlue = 0x861F,
} color_type;

void lcd_init(void);
void lcd_close(void);
void lcd_flush(void);
void lcd_draw_pixel(int16_t x, int16_t y, lcd_color_type color);
void lcd_flush(void);

#endif /* APP_INC_X11DISP_H_ */
