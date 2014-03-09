/*
* Configuration of module: PduR (PduR_PbCfg.h)
*
* Created by:              ArcCore
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       3.1.10
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((PDUR_SW_MAJOR_VERSION == 2) && (PDUR_SW_MINOR_VERSION == 0)) )
#error PduR: Configuration file expected BSW module version to be 2.0.*
#endif


#if defined(USE_DCM)
#include "Dcm.h"
#endif
#if defined(USE_COM)
#include "Com.h"
#endif
#if defined(USE_CANIF)
#include "CanIf.h"
#endif
#if defined(USE_CANTP)
#include "CanTp.h"
#endif

extern PduR_PBConfigType PduR_Config;

//  PduR Polite Defines.
#define PDUR_PDU_ID_CanDB_Message_1		0
#define PDUR_REVERSE_PDU_ID_CanDB_Message_1		0
#define PDUR_PDU_ID_CanDB_Message_2		1
#define PDUR_REVERSE_PDU_ID_CanDB_Message_2		1
