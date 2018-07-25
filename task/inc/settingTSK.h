﻿/*!****************************************************************************
 * @file		settingTSK.h
 * @author		d_el - Storozhenko Roman
 * @version		V1.0
 * @date		01.01.2016
 * @copyright	GNU Lesser General Public License v3
 * @brief		This task create start screen
 */
#ifndef settingTSK_H
#define settingTSK_H

/*!****************************************************************************
 * Include
 */
#include "stdint.h"
#include "menuSystem.h"
#include "time.h"

/*!****************************************************************************
 * Define
 */

/*!****************************************************************************
 * Enumeration
 */

/*!****************************************************************************
 * Typedef
 */
typedef struct {
	int16_t u;
	int16_t i;
} settingSct_type;

/*!****************************************************************************
 * Exported variables
 */
extern time_t 		unixTime;

/*!****************************************************************************
 * Macro functions
 */

/*!****************************************************************************
 * Function declaration
 */
void settingTSK(void *pPrm);
itemState_type PrepareU(const menuItem_type *item);
itemState_type PrepareI(const menuItem_type *item);
itemState_type regSave(const menuItem_type *item);
itemState_type savePointU(const menuItem_type *item);
itemState_type savePointI(const menuItem_type *item);
itemState_type setBright(const menuItem_type *item);
itemState_type rtcSelect(const menuItem_type *item);
itemState_type rtcUnselect(const menuItem_type *item);
itemState_type netUpdate(const menuItem_type *item);

#endif //settingTSK_H
/*************** LGPL ************** END OF FILE *********** D_EL ************/
