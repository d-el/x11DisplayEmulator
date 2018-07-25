﻿/*!****************************************************************************
 * @file		systemTSK.h
 * @author		d_el
 * @version		V1.0
 * @date		14.09.2015
 * @brief		System control task
 * @copyright	Copyright (C) 2017 Storozhenko Roman
 *				All rights reserved
 *				This software may be modified and distributed under the terms
 *				of the BSD license.	 See the LICENSE file for details
 */
#ifndef systemTSK_H
#define systemTSK_H

/*!****************************************************************************
 * Include
 */
#include "pstypes.h"

/*!****************************************************************************
 * Define
 */
#define SYSTEM_TSK_PERIOD   (10)		///< [ms]
#define LINK_DETECT_PERIOD  (500)		///< [ms]
#define I_SHORT_CIRCUIT     (4000000)	///< [X_XXXXXX A]

/*!****************************************************************************
 * Enumeration
 */

/*!****************************************************************************
 * Typedef
 */
typedef enum {
	noneWindow,   //!< noneWindow
	startupWindow,//!< startupWindow
	settingWindow,//!< settingWindow
	baseWindow,   //!< baseWindow
	chargerWindow,//!< chargerWindow
	cube3dWindow, //!< cube3dWindow
	bubblesWindow //!< bubblesWindow
} selWindow_type;

typedef struct {
	uint32_t 	ipadr;
	uint32_t 	netmask;
	uint32_t 	gateway;
	int16_t 	lcdLight;		///< [X_X %]
	int8_t		timezone;		///< -12 to +12
} frontPanelSetting_type;

typedef struct {
	int16_t rtcOscillatorError		:1;
	int16_t mainOscillatorError	:1;

	int16_t sysSettingLoadDefault	:1;
	int16_t userSettingLoadDefault	:1;

	int16_t lanLink				:1;
	int16_t lanActive				:1;
} frontPanelState_type;

typedef struct {
	transfer_type 			tf;					///< Общие данные
	frontPanelSetting_type 	fpSet;				///< Данные настройки передней панели
	frontPanelState_type	state;				///< Флаги состояния
	selWindow_type 			currentSelWindow;	///< Текущее окно GUI
} frontPanel_type;

/*!****************************************************************************
 * Exported variables
 */
extern frontPanel_type fp;

/*!****************************************************************************
 * Macro functions
 */

/*!****************************************************************************
 * Function declaration
 */
void selWindow(selWindow_type window);
void systemTSK(void *pPrm);
void netSettingUpdate(void);
void selWindow(selWindow_type window);
void timezoneUpdate(void);

#endif //systemTSK_H
/***************** Copyright (C) Storozhenko Roman ******* END OF FILE *******/
