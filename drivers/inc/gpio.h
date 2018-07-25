/*!****************************************************************************
 * @file		gpio.h
 * @author		d_el
 * @version		V1.0
 * @date		22.11.2016
 * @brief		gpio driver for stm32F4 microcontroller
 * @copyright	Copyright (C) 2013 Storozhenko Roman
 *				All rights reserved
 *				This software may be modified and distributed under the terms
 *				of the BSD license. See the LICENSE file for details
 */
#ifndef GPIO_H
#define GPIO_H

/*!****************************************************************************
* Include
*/
#include "stdint.h"


typedef enum{
/*0 */GP_bMode = 83,
/*1 */GP_bOnOff = 87,
/*2 */GP_bView = 84,
/*3 */GP_bNext = 88,
/*4 */GP_bZero = 90,
/*5 */GP_bUp = 85,
/*6 */GP_bDown = 89,

GP_NOT_USED
}GPnum_type;

/*!****************************************************************************
* Macro functions
*/

uint32_t gppin_get(GPnum_type n);

void gpio_init(void);

#endif //GPIO_H
/***************** Copyright (C) Storozhenko Roman ******* END OF FILE *******/
