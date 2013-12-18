/*
* Configuration of module: PduR
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


#include "PduR.h"

#if PDUR_CANIF_SUPPORT == STD_ON
#include "CanIf.h"
#endif
#if PDUR_CANTP_SUPPORT == STD_ON
#include "CanTp.h"
#endif
#if PDUR_LINIF_SUPPORT == STD_ON
#include "LinIf.h"
#endif
#if PDUR_COM_SUPPORT == STD_ON
#include "Com.h"
#endif
#if PDUR_DCM_SUPPORT == STD_ON
#include "Dcm.h"
#endif
#if PDUR_J1939TP_SUPPORT == STD_ON
#include "J1939Tp.h"
#endif
#if(PDUR_ZERO_COST_OPERATION == STD_OFF)
const PduRDestPdu_type PduR_PduRDestination[] = {

    { // DIAG_P2P_REQ
        .DataProvision =  PDUR_NO_PROVISION,
        .DestPduId =  DCM_DIAG_P2P_REQ,
        .TxBufferRef =  NULL,
        .DestModule =  ARC_PDUR_DCM
    },
    { // DIAG_P2P_ACK
        .DataProvision =  PDUR_NO_PROVISION,
        .DestPduId =  CANTP_DIAG_P2P_ACK,
        .TxBufferRef =  NULL,
        .DestModule =  ARC_PDUR_CANTP
    },
    { // DIAG_P2A_REQ
        .DataProvision =  PDUR_NO_PROVISION,
        .DestPduId =  DCM_DIAG_P2A_REQ,
        .TxBufferRef =  NULL,
        .DestModule =  ARC_PDUR_DCM
    },
    { // DIAG_P2A_ACK
        .DataProvision =  PDUR_NO_PROVISION,
        .DestPduId =  CANTP_DIAG_P2A_ACK,
        .TxBufferRef =  NULL,
        .DestModule =  ARC_PDUR_CANTP
    },
    
    { // MSG0
        .DataProvision =  PDUR_NO_PROVISION,
        .DestPduId =  COM_MSG0_RX,
        .TxBufferRef =  NULL,
        .DestModule =  ARC_PDUR_COM
    },

    { // MSG1
        .DataProvision =  PDUR_NO_PROVISION,
        .DestPduId =  CANIF_MSG1_TX,
        .TxBufferRef =  NULL,
        .DestModule =  ARC_PDUR_CANIF
    },

};
const PduRDestPdu_type * const DIAG_P2P_REQ_PduRDestinations[] = {
    &PduR_PduRDestination[0],
    NULL
};
const PduRDestPdu_type * const DIAG_P2P_ACK_PduRDestinations[] = {
    &PduR_PduRDestination[1],
    NULL
};
const PduRDestPdu_type * const DIAG_P2A_REQ_PduRDestinations[] = {
    &PduR_PduRDestination[2],
    NULL
};
const PduRDestPdu_type * const DIAG_P2A_ACK_PduRDestinations[] = {
    &PduR_PduRDestination[3],
    NULL
};
    
const PduRDestPdu_type * const PDUR_MSG0_RX_PduRDestinations[] = {
    &PduR_PduRDestination[PDUR_MSG0_RX],
    NULL
};

const PduRDestPdu_type * const PDUR_MSG1_TX_PduRDestinations[] = {
    &PduR_PduRDestination[PDUR_MSG1_TX],
    NULL
};

const PduRRoutingPath_type DIAG_P2P_REQ_PduRRoutingPath = {
    .SduLength =  8,
    .SrcPduId =  CANTP_DIAG_P2P_REQ,
    .SrcModule =  ARC_PDUR_CANTP,
    .PduRDestPdus =  DIAG_P2P_REQ_PduRDestinations
};
const PduRRoutingPath_type DIAG_P2P_ACK_PduRRoutingPath = {
    .SduLength =  8,
    .SrcPduId =  DCM_DIAG_P2P_ACK,
    .SrcModule =  ARC_PDUR_DCM,
    .PduRDestPdus =  DIAG_P2P_ACK_PduRDestinations
};

const PduRRoutingPath_type DIAG_P2A_REQ_PduRRoutingPath = {
    .SduLength =  8,
    .SrcPduId =  CANTP_DIAG_P2A_REQ,
    .SrcModule =  ARC_PDUR_CANTP,
    .PduRDestPdus =  DIAG_P2A_REQ_PduRDestinations
};
const PduRRoutingPath_type DIAG_P2A_ACK_PduRRoutingPath = {
    .SduLength =  8,
    .SrcPduId =  DCM_DIAG_P2A_ACK,
    .SrcModule =  ARC_PDUR_DCM,
    .PduRDestPdus =  DIAG_P2A_ACK_PduRDestinations
};

const PduRRoutingPath_type PDUR_MSG0_RX_PduRRoutingPath = {
    .SduLength =  8,
    .SrcPduId =  CANIF_MSG0_RX,
    .SrcModule =  ARC_PDUR_CANIF,
    .PduRDestPdus =  PDUR_MSG0_RX_PduRDestinations
};

const PduRRoutingPath_type PDUR_MSG1_TX_PduRRoutingPath = {
    .SduLength =  8,
    .SrcPduId =  COM_MSG1_TX,
    .SrcModule =  ARC_PDUR_COM,
    .PduRDestPdus =  PDUR_MSG1_TX_PduRDestinations
};



const PduRRoutingPath_type * const PduRRoutingPaths[] = { 
    &DIAG_P2P_REQ_PduRRoutingPath,
    &DIAG_P2P_ACK_PduRRoutingPath,
    &DIAG_P2A_REQ_PduRRoutingPath,
    &DIAG_P2A_ACK_PduRRoutingPath,
	&PDUR_MSG0_RX_PduRRoutingPath,
	&PDUR_MSG1_TX_PduRRoutingPath,

    NULL
};  

const PduR_PBConfigType PduR_Config = {
    .PduRConfigurationId =  0,
    .NRoutingPaths =  GenPduRId(2),        // helper
    .RoutingPaths =  PduRRoutingPaths,
    .TpBuffers =  NULL,
    .TpRouteBuffers =  NULL
};

#endif //(PDUR_ZERO_COST_OPERATION == STD_OFF)  
    
