/*!****************************************************************************
 * @file		beep.c
 * @author		d_el
 * @version		V1.0
 * @date		19.12.2014
 * @copyright	GNU Lesser General Public License v3
 * @brief		Driver beep
 */

/*!****************************************************************************
 * Include
 */
#include <stdio.h>
#include "beep.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <assert.h>

extern Display     *display;
extern Window      window;

/*!****************************************************************************
 * @brief
 * @param time - duration time (1 - 32767) [ms]
 *		  freq - frequency (1 - 32767) [Hz]
 */
void BeepTime(int16_t time, int16_t freq){
    assert(display != NULL);

//    XKeyboardControl kc;
//    kc.bell_percent = 100;  //%
//    kc.bell_pitch = 1000;   //Hz
//    kc.bell_duration = 100; //ms
//    XChangeKeyboardControl(display, KBBellPercent | KBBellPitch | KBBellDuration, &kc);

    XKeyboardState ks;
    XGetKeyboardControl(display, &ks);

    printf("%u per\n", ks.bell_percent);

    int r = XBell(display, 50);

    if(r != Success){
        printf("%i\n", r);
    }
}

/*!****************************************************************************
 * @brief
 */
void beep_init(void){
}

/*************** LGPL ************** END OF FILE *********** D_EL ************/
