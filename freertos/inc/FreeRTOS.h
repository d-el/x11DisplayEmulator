/*!****************************************************************************
 * @file		FreeRTOS.h
 * @author		d_el
 * @version		V1.0
 * @date		25 июл. 2018 г.
 * @brief
 * @copyright	Copyright (C) 2017 Storozhenko Roman
 *				All rights reserved
 *				This software may be modified and distributed under the terms
 *				of the BSD license.	 See the LICENSE file for details
 */

#ifndef FreeRTOS_H
#define FreeRTOS_H

/*!****************************************************************************
 * Include
 */
#include <stdint.h>
#include <unistd.h>

/*!****************************************************************************
 * Define
 */

/*!****************************************************************************
 * Enumeration
 */

/*!****************************************************************************
 * Typedef
 */
typedef uint32_t TickType_t;

/*!****************************************************************************
 * Exported variables
 */

/*!****************************************************************************
 * Macro functions
 */
#define pdMS_TO_TICKS(x) x

static inline void vTaskDelayUntil(TickType_t *prev, TickType_t t){
	usleep(1000 * t);
}

static inline void vTaskDelay(TickType_t t){
	usleep(1000 * t);
}

static inline TickType_t xTaskGetTickCount(void){
	return 0;
}

/*!****************************************************************************
 * Function declaration
 */

#endif //FreeRTOS_H
/***************** Copyright (C) Storozhenko Roman ******* END OF FILE *******/
