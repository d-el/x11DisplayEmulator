/*!****************************************************************************
 * @file		gpio.c
 * @author		d_el
 * @version		V1.0
 * @date		22.11.2016
 * @brief		gpio driver for stm32F4 microcontroller
 * @copyright	Copyright (C) 2013 Storozhenko Roman
 *				All rights reserved
 *				This software may be modified and distributed under the terms
 *				of the BSD license. See the LICENSE file for details
 */

/*!****************************************************************************
* Include
*/
#include "gpio.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <X11/keysymdef.h>

extern Display     *display;

/*!****************************************************************************
* InitAllGpio
*/
void gpio_init(void){

}

uint32_t gppin_get(GPnum_type n){
    uint8_t keys[32];
    XQueryKeymap( display, (char*)keys );
#if(0)
    for(int i = 0; i < 32*8; i++){
        if(keys[i / 8] & (0x01 << i % 8)){
            printf("press %u\n", i);
        }
    }
#endif
    if(keys[n / 8] & (0x01 << n % 8)){
        return 0;
    }else{
        return 1;
    }
}

/***************** Copyright (C) Storozhenko Roman ******* END OF FILE *******/
