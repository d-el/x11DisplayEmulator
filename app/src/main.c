#include <stdio.h>
#include "display.h"
#include "cube3dTSK.h"
#include "unistd.h"
#include "stdlib.h"
#include "string.h"
#include "graphics.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include "gpio.h"
#include "prmSystem.h"
#include "settingTSK.h"

/*!****************************************************************************
 *
 */
int main(int argc, char *argv[]){
	setvbuf(stdout, NULL, _IONBF, 0);	//not buffered
	lcd_init();
	prm_loadDefault(prmEepSys);
	prm_loadDefault(prmEep);
	settingTSK(NULL);
	lcd_close();
	printf("Exit\n");
	return 0;
}

int main2(int argc, char *argv[]){
	setvbuf(stdout, NULL, _IONBF, 0);	//not buffered
	lcd_init();

	cube3dTSK(NULL);
	/*uint32_t c = 500;
	uint32_t d = 20000;
	char str[32];
	while(1){
		sprintf(str, "%02u.%03u", c / 1000, c % 1000);
		disp_setColor(black, blue);
		disp_putStr(16, 0, &dSegBold, 6, str);
		disp_putChar(150, 18, &font8x12, 'V');
		sprintf(str, "%02u.%03u", d / 1000, d % 100);
		disp_setColor(black, white);
		disp_putChar(150, 36, &font8x12, 'm');
		disp_putChar(150, 49, &font8x12, 'A');
		disp_putStr(16, 36, &dSegBold, 6, str);
		c++;
		d++;
		usleep(10000);
	}*/

	printf("Exit\n");
	lcd_close();
	return 0;
}
