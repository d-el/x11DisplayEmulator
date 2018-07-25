	/*!****************************************************************************
 * @file		beep.h
 * @author		d_el
 * @version		V1.0
 * @date		19.12.2014
 * @copyright	GNU Lesser General Public License v3
 * @brief		Driver beep
 */
#ifndef beep_H
#define beep_H

/*!****************************************************************************
 * Include
 */
#include <stdint.h>

/*!****************************************************************************
 * Define
 */
#define F_BEEP				( 4000 )

/*!****************************************************************************
 * Enumeration
 */

/*!****************************************************************************
 * Typedef
 */

/*!****************************************************************************
 * Exported variables
 */

/*!****************************************************************************
 * Macro functions
 */
#define	beepSetFreq(freq)	BEEP_TIM->ARR = SYSTEM_FREQUENCY / (freq) / 2;

/*!****************************************************************************
 * Function declaration
 */
void BeepTime(int16_t time, int16_t ferq);
void beep_init(void);
void Dht(void *pvParameters);

#endif //beep_H
/*************** LGPL ************** END OF FILE *********** D_EL ************/
