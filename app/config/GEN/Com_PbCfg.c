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

#include "Com.h"
#include "Com_Internal.h"
//#include <stdlib.h>
#if defined(USE_PDUR)
#include "PduR.h"
#endif 

//Signal init values.
const uint16 VehicleSpeed_InitValue = 11;
const uint16 TachoSpeed_InitValue = 22;
const uint8 Led1Sts_InitValue = 1;
const uint8 Led2Sts_InitValue = 2;
const uint8 Led3Sts_InitValue = 3;
const uint16 Year_InitValue = 2013;
const uint8 Month_InitValue = 12;
const uint8 Day_InitValue = 15;
const uint8 Hour_InitValue = 19;
const uint8 Minute_InitValue = 49;

#if 0    
#if(COM_N_GROUP_SIGNALS > 0)
// This is an example as Not supported by easyCom
const ComGroupSignal_type ComGroupSignal[] = {
    {
        .ComBitPosition= 24,
        .ComBitSize= 8,
        .ComHandleId= COM PDUID,
        .ComSignalEndianess= cfgCPU_ENDIAN,
        .ComSignalInitValue= &name_InitValue,
        .ComSignalType= UINT8_N,
        .Com_Arc_EOL= FALSE
    },
    {
       .ComBitPosition= 32,
       .ComBitSize= 8,
       .ComHandleId= COM PDUID,
       .ComSignalEndianess= cfgCPU_ENDIAN,
       .ComSignalInitValue= &name_InitValue,
       .ComSignalType= UINT8_N,
       .Com_Arc_EOL= FALSE
    },
};
//SignalGroup GroupSignals lists.
const ComGroupSignal_type * const COM PDUID_SignalRefs[] = {
    &ComGroupSignal[ 0 ],
    &ComGroupSignal[ 1 ],
    NULL
};
#endif
#endif //0

//IPdu buffers and signal group buffers
uint8 MSG0_RX_IPduBuffer[8];
uint8 MSG1_TX_IPduBuffer[8];

//Signal definitions
const ComSignal_type ComSignal[] = {

    {
        .ComBitPosition =  0,
        .ComBitSize =  16,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_VehicleSpeed,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &VehicleSpeed_InitValue,
        .ComSignalType =  UINT16,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG0_RX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  16,
        .ComBitSize =  16,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_TachoSpeed,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &TachoSpeed_InitValue,
        .ComSignalType =  UINT16,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG0_RX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  32,
        .ComBitSize =  2,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Led1Sts,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Led1Sts_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG0_RX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  34,
        .ComBitSize =  2,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Led2Sts,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Led2Sts_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG0_RX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  36,
        .ComBitSize =  2,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Led3Sts,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Led3Sts_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG0_RX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  0,
        .ComBitSize =  16,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Year,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Year_InitValue,
        .ComSignalType =  UINT16,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG1_TX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  16,
        .ComBitSize =  8,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Month,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Month_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG1_TX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  24,
        .ComBitSize =  8,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Day,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Day_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG1_TX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  32,
        .ComBitSize =  8,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Hour,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Hour_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG1_TX,
        .Com_Arc_EOL =  FALSE
    },

    {
        .ComBitPosition =  40,
        .ComBitSize =  8,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  10, // TODO: In Tick
        .ComHandleId =  COM_SID_Minute,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  cfgCPU_ENDIAN, 
        .ComSignalInitValue =  &Minute_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  10,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    // TODO: only useful when TX
        .ComUpdateBitPosition =  0,         // TODO
        .ComSignalArcUseUpdateBit =  FALSE, // TODO
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_MSG1_TX,
        .Com_Arc_EOL =  FALSE
    },

    {
         .Com_Arc_EOL =  True,
    }
};

    
//I-PDU group definitions
const ComIPduGroup_type ComIPduGroup[] = {
    {
        .ComIPduGroupHandleId =  COM_DEFAULT_IPDU_GROUP, // -> default
        .Com_Arc_EOL =  TRUE
    },
};    
    
//IPdu signal lists.
const ComSignal_type * const MSG0_RX_SignalRefs[] = {
	&ComSignal[ COM_SID_VehicleSpeed ],
	&ComSignal[ COM_SID_TachoSpeed ],
	&ComSignal[ COM_SID_Led1Sts ],
	&ComSignal[ COM_SID_Led2Sts ],
	&ComSignal[ COM_SID_Led3Sts ],
	NULL
};
const ComSignal_type * const MSG1_TX_SignalRefs[] = {
	&ComSignal[ COM_SID_Year ],
	&ComSignal[ COM_SID_Month ],
	&ComSignal[ COM_SID_Day ],
	&ComSignal[ COM_SID_Hour ],
	&ComSignal[ COM_SID_Minute ],
	NULL
};
    
    
//I-PDU definitions
const ComIPdu_type ComIPdu[] = {

    {
        .ComIPduCallout =  NULL,
        .ArcIPduOutgoingId =  PDUR_MSG0_RX,
        .ComIPduSignalProcessing =  IMMEDIATE,
        .ComIPduSize =  8,
        .ComIPduDirection =  RECEIVE,
        .ComIPduGroupRef =  COM_DEFAULT_IPDU_GROUP, // -> default
        .ComTxIPdu ={
            .ComTxIPduMinimumDelayFactor =  1,
            .ComTxIPduUnusedAreasDefault =  0,
            .ComTxModeTrue ={
                .ComTxModeMode =   DIRECT,
                .ComTxModeNumberOfRepetitions =   0,
                .ComTxModeRepetitionPeriodFactor =   10,
                .ComTxModeTimeOffsetFactor =   0,
                .ComTxModeTimePeriodFactor =   10, // Period: in Tick of MainFunction
            },
        },
        .ComIPduDataPtr =  MSG0_RX_IPduBuffer,
        .ComIPduDeferredDataPtr =  NULL, // TODO: if Processing is DEFERRED, config this buffer, please
        .ComIPduSignalRef =  MSG0_RX_SignalRefs,
        .ComIPduDynSignalRef =  NULL,
        .Com_Arc_EOL =  FALSE,
    },

    {
        .ComIPduCallout =  NULL,
        .ArcIPduOutgoingId =  PDUR_MSG1_TX,
        .ComIPduSignalProcessing =  IMMEDIATE,
        .ComIPduSize =  8,
        .ComIPduDirection =  SEND,
        .ComIPduGroupRef =  COM_DEFAULT_IPDU_GROUP, // -> default
        .ComTxIPdu ={
            .ComTxIPduMinimumDelayFactor =  1,
            .ComTxIPduUnusedAreasDefault =  0,
            .ComTxModeTrue ={
                .ComTxModeMode =   PERIODIC,    // TODO:
                .ComTxModeNumberOfRepetitions =   0,
                .ComTxModeRepetitionPeriodFactor =   10,
                .ComTxModeTimeOffsetFactor =   0,
                .ComTxModeTimePeriodFactor =   10, // Period: in Tick of MainFunction
            },
        },
        .ComIPduDataPtr =  MSG1_TX_IPduBuffer,
        .ComIPduDeferredDataPtr =  NULL,    // TODO: if Processing is DEFERRED, config this buffer, please
        .ComIPduSignalRef =  MSG1_TX_SignalRefs,
        .ComIPduDynSignalRef =  NULL,
        .Com_Arc_EOL =  FALSE,
    },

    {
        .Com_Arc_EOL =  TRUE
    }
};

const Com_ConfigType ComConfiguration = {
    .ComConfigurationId =  1,
    .ComIPdu =  ComIPdu,
    .ComIPduGroup =  ComIPduGroup,
    .ComSignal =  ComSignal,
#if(COM_N_GROUP_SIGNALS > 0)
    .ComGroupSignal =  ComGroupSignal
#else
    .ComGroupSignal =  NULL
#endif
};

Com_Arc_IPdu_type Com_Arc_IPdu[] = {

    { // MSG0
        .Com_Arc_TxIPduTimers ={
            .ComTxIPduNumberOfRepetitionsLeft =  0,
            .ComTxModeRepetitionPeriodTimer =  0,
            .ComTxIPduMinimumDelayTimer =  0,
            .ComTxModeTimePeriodTimer =  0
        },
        .Com_Arc_IpduStarted =  0
    },

    { // MSG1
        .Com_Arc_TxIPduTimers ={
            .ComTxIPduNumberOfRepetitionsLeft =  0,
            .ComTxModeRepetitionPeriodTimer =  0,
            .ComTxIPduMinimumDelayTimer =  0,
            .ComTxModeTimePeriodTimer =  0
        },
        .Com_Arc_IpduStarted =  0
    },
};

Com_Arc_Signal_type Com_Arc_Signal[] = {

    { // VehicleSpeed
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // TachoSpeed
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Led1Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Led2Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Led3Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Year
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Month
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Day
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Hour
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Minute
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },
};


#if 0    
#if(COM_N_GROUP_SIGNALS > 0)
Com_Arc_GroupSignal_type Com_Arc_GroupSignal[COM_N_GROUP_SIGNALS];
#endif
#endif // 0

const Com_Arc_Config_type Com_Arc_Config = {
    .ComIPdu =  Com_Arc_IPdu,
    .ComSignal =  Com_Arc_Signal,
#if(COM_N_GROUP_SIGNALS > 0)
    .ComGroupSignal =  Com_Arc_GroupSignal
#else
    .ComGroupSignal =  NULL
#endif
};    
    