/*
* Configuration of module: Com
*
* Created by:   parai          
* Copyright:    (C)parai@foxmail.com  
*
* Configured for (MCU):    MinGW ...
*
* Module vendor:           ArcCore
* Generator version:       2.0.34
*
* Generated by easySAR Studio (https://github.com/parai/OpenSAR)
*/


#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)))
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef COM_CFG_H_
#define COM_CFG_H_

#define COM_MODULE_ID 20
#define COM_INSTANCE_ID 1
#define COM_E_INVALID_FILTER_CONFIGURATION 101
#define COM_E_INITIALIZATION_FAILED 102
#define COM_E_INVALID_SIGNAL_CONFIGURATION 103
#define COM_INVALID_PDU_ID 104
#define COM_INVALID_SIGNAL_ID 109
#define COM_ERROR_SIGNAL_IS_SIGNALGROUP 105
#define COM_E_TOO_MANY_IPDU 106
#define COM_E_TOO_MANY_SIGNAL 107
#define COM_E_TOO_MANY_GROUPSIGNAL 108
#define CPU_ENDIANESS COM_BIG_ENDIAN

#define COM_DEV_ERROR_DETECT STD_OFF

#define COM_N_IPDUS 2
#define COM_N_SIGNALS 10
#define COM_N_GROUP_SIGNALS 0 // TODO: not support by easyCom studio

#define ComConfigurationTimeBase 0
#define ComVersionInfoApi

#endif /*COM_CFG_H*/
    