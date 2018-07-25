/*!****************************************************************************
 * @file		parametres.h
 * @author		d_el - Storozhenko Roman
 * @version		V1.0
 * @date		08.02.2017
 * @copyright	GNU Lesser General Public License v3
 * @brief		Parameters table
 */

//			label		,units,prm						,type			,chmod			,def		,min		,max		,step	,bigst	,pow,limtype		,savetype

/* RTC */
parametres(utcTime		,""	,time_val					,unixDateFrmt	,chmodAlways	,0x58684680	,0x58684680	,0xFFFFFFFF	,86400	,1728000,0	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(utcTime2		,""	,time_val					,unixTimeFrmt	,chmodAlways	,0			,0			,0			,0		,0		,0	,prmLimVariable	,prmStepVariable,prmNotSave)
parametres(timezone		,"" ,i8_val						,s8Frmt			,chmodAlways	,2			,-12		,12			,1		,1		,0	,prmLimConst	,prmStepConst	,prmEepSys)

//Regulator task
parametres(regu			,""	,u32_val					,u32Frmt		,chmodAlways	,0			,0		,36.0000	,0.0001	,0.5000	,6	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(regi			,""	,u32_val					,u32Frmt		,chmodAlways	,0			,0		,4.0000		,0.00001,0.1000	,6	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(regdacu		,""	,u16_val					,u16Frmt		,chmodAlways	,0			,0		,4095		,1		,100	,0	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(regdaci		,""	,u16_val					,u16Frmt		,chmodAlways	,0			,0		,4095		,1		,100	,0	,prmLimConst	,prmStepConst	,prmNotSave)

//Regulator meas
parametres(temperature	,""	,u16_val					,u16Frmt		,chmodNone		,0			,0		,0			,1		,1		,1	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(meas_uin		,""	,u16_val					,u16Frmt		,chmodNone		,0			,0		,0			,1		,1		,3	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(meas_u		,""	,u32_val					,u32Frmt		,chmodNone		,0			,0		,0			,1		,1		,6	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(meas_i		,""	,u32_val					,u32Frmt		,chmodNone		,0			,0		,0			,1		,1		,6	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(meas_adcu	,""	,u16_val					,u16Frmt		,chmodNone		,0			,0		,0			,1		,1		,0	,prmLimConst	,prmStepConst	,prmNotSave)
parametres(meas_adci	,""	,u16_val					,u16Frmt		,chmodNone		,0			,0		,0			,1		,1		,0	,prmLimConst	,prmStepConst	,prmNotSave)

//Panel settings
parametres(startcnt		,""	,u32_val					,u32Frmt		,chmodAlways	,0			,0		,0xFFFFFFFF	,1		,1		,0	,prmLimConst	,prmStepConst	,prmEep)
parametres(brightness	,""	,u16_val					,u16Frmt		,chmodAlways	,60.0		,10.0	,100.0		,0.1	,10.0	,1	,prmLimConst	,prmStepConst	,prmEepSys)
parametres(ipadr		,""	,ip_val						,ipAdrFrmt		,chmodAlways	,0xC0A8010A	,0		,0xFFFFFFFF	,1		,1		,0	,prmLimVariable	,prmStepVariable,prmEepSys) /* 192.168.1.15 */
parametres(netmask		,""	,ip_val						,ipAdrFrmt		,chmodAlways	,0xFFFFFF00	,0		,0xFFFFFFFF	,1		,1		,0	,prmLimVariable	,prmStepVariable,prmEepSys) /* 255.255.255.0 */
parametres(gateway		,""	,ip_val						,ipAdrFrmt		,chmodAlways	,0xC0A80101	,0		,0xFFFFFFFF	,1		,1		,0	,prmLimVariable	,prmStepVariable,prmEepSys) /* 192.168.1.1 */

/*************** LGPL ************** END OF FILE *********** D_EL ************/
