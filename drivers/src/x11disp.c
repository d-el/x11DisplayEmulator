#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include "x11disp.h"
#include <pthread.h>
#include <assert.h>

void *lcd_TSK(void *pPrm);

static lcd_color_type	framebuffer[X11DISP_W][X11DISP_H] = { { 0 }, };
static char			imagedata[8 * X11DISP_W * X11DISP_H * (PIXEL_SIZE * PIXEL_SIZE)];
/*static*/ Display		*display;
static Window		window;
static int			screen;
static XColor		l_black, l_red, l_green, l_yellow, l_blue, l_magenta, l_cyan, l_white;
static long 		colors[8];
static Colormap		colorMap;
XEvent report;
static pthread_t 	threadAutoFlush;

/*!****************************************************************************
 *
 */
void lcd_init(void){
	display = XOpenDisplay(":0.0");
	if(display != NULL){
		fprintf(stderr, "Open display\n");
	}else{
		fprintf(stderr, "Cannot open display\n");
		exit(1);
	}

	screen = DefaultScreen(display);
	window = XCreateSimpleWindow(	display,
									RootWindow(display, screen),
									10, 10,
									X11DISP_W * PIXEL_SIZE,
									X11DISP_H * PIXEL_SIZE,
									1,
									BlackPixel(display, screen), WhitePixel(display, screen));

	static char title[64];
	snprintf(title, sizeof(title), "%u*%u", X11DISP_W, X11DISP_H);
	XStoreName(display, window, title);

	/* Выбираем события,  которые будет обрабатывать программа */
	XSelectInput(display, window, ExposureMask | KeyPressMask);
	/* Покажем окно */
	XMapWindow(display, window);

	colorMap = DefaultColormap(display, DefaultScreen(display));

	XParseColor(display, colorMap, "rgb:00/00/00", &l_black);
	XAllocColor(display, colorMap, &l_black);
	colors[0] = l_black.pixel;

	XParseColor(display, colorMap, "rgb:ff/00/00", &l_red);
	XAllocColor(display, colorMap, &l_red);
	colors[1] = l_red.pixel;

	XParseColor(display, colorMap, "rgb:00/ff/00", &l_green);
	XAllocColor(display, colorMap, &l_green);
	colors[2] = l_green.pixel;

	XParseColor(display, colorMap, "rgb:ff/ff/00", &l_yellow);
	XAllocColor(display, colorMap, &l_yellow);
	colors[3] = l_yellow.pixel;

	XParseColor(display, colorMap, "rgb:00/00/ff", &l_blue);
	XAllocColor(display, colorMap, &l_blue);
	colors[4] = l_blue.pixel;

	XParseColor(display, colorMap, "rgb:ff/00/ff", &l_magenta);
	XAllocColor(display, colorMap, &l_magenta);
	colors[5] = l_magenta.pixel;

	XParseColor(display, colorMap, "rgb:00/ff/ff", &l_cyan);
	XAllocColor(display, colorMap, &l_cyan);
	colors[6] = l_cyan.pixel;

	XParseColor(display, colorMap, "rgb:ff/ff/ff", &l_white);
	XAllocColor(display, colorMap, &l_white);
	colors[7] = l_white.pixel;

	int  iret;
	/* Create independent threads each of which will execute function */
	iret = pthread_create( &threadAutoFlush, NULL, lcd_TSK, NULL);
	 if(iret){
		 fprintf(stderr,"Error - pthread_create() return code: %d\n", iret);
		 exit(EXIT_FAILURE);
	 }
}

/*!****************************************************************************
 *
 */
void lcd_close(void){
	XCloseDisplay(display);
	XFreeColormap(display, colorMap);
}

/*!****************************************************************************
 *
 */
void lcd_flush(void){
	static XImage *image = NULL;

	if(image == NULL)
        image = XCreateImage(	display,
        						DefaultVisual(display, DefaultScreen(display)),
								DefaultDepth(display, DefaultScreen(display)),
								ZPixmap,
								0,
								imagedata,
								X11DISP_W * PIXEL_SIZE,
								X11DISP_H * PIXEL_SIZE,
								32,
								0);


	for(int x = 0; x < X11DISP_W; x++){
		for(int y = 0; y < X11DISP_H; y++){
			long color = framebuffer[x][y];

			for(int pixx = 0; pixx < PIXEL_SIZE; pixx++){
				for(int pixy = 0; pixy < PIXEL_SIZE; pixy++){
					XPutPixel(image, x * PIXEL_SIZE + pixx,
							y * PIXEL_SIZE + pixy, color);
				}
			}
		}
	}

	XPutImage(display, window, DefaultGC(display, screen), image, 0, 0, 0, 0,
			X11DISP_W * PIXEL_SIZE, X11DISP_H * PIXEL_SIZE);
	XFlush(display);
}

/*!****************************************************************************
 *
 */
void *lcd_TSK(void *pPrm){
	//XEvent report = {};

	while(1){
		//XNextEvent(display, &report);
		/*switch(report.type){
			case KeyPress:
				printf("1\n");
				break;
		}*/

//	    char keys[32];
//	    XQueryKeymap( display, keys );

#if (AUTO_FLUSH > 0)
		lcd_flush();
#endif
		usleep(LCD_PERIOD * 1000);
	}
}


/*!****************************************************************************
 *
 */
void lcd_draw_pixel(int16_t x, int16_t y, lcd_color_type color){
	/* Check screen boundaries */
	if((x >= X11DISP_W) || (y >= X11DISP_H)){
		return;
	}

	framebuffer[x][y] = color;
}
