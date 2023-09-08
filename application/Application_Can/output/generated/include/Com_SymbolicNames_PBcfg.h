#ifndef COM_SYMBOLIC_NAMES_PB_CFG_H
#define COM_SYMBOLIC_NAMES_PB_CFG_H

/**
 * \file
 *
 * \brief AUTOSAR Com
 *
 * This file contains the implementation of the AUTOSAR
 * module Com.
 *
 * \version 6.3.53
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[includes]==============================================*/

/*==================[macros]================================================*/

/* IPDU group ID defines */
#if (defined ComConf_ComIPduGroup_RGCanNetwork) /* To prevent double declaration */
#error ComConf_ComIPduGroup_RGCanNetwork already defined
#endif /* #if (defined ComConf_ComIPduGroup_RGCanNetwork) */

#define ComConf_ComIPduGroup_RGCanNetwork 4U


#if (defined ComConf_ComIPduGroup_PN_CAN_OUT) /* To prevent double declaration */
#error ComConf_ComIPduGroup_PN_CAN_OUT already defined
#endif /* #if (defined ComConf_ComIPduGroup_PN_CAN_OUT) */

#define ComConf_ComIPduGroup_PN_CAN_OUT 30U


#if (defined ComConf_ComIPduGroup_PN_CAN_IN) /* To prevent double declaration */
#error ComConf_ComIPduGroup_PN_CAN_IN already defined
#endif /* #if (defined ComConf_ComIPduGroup_PN_CAN_IN) */

#define ComConf_ComIPduGroup_PN_CAN_IN 0U


#if (defined ComConf_ComIPduGroup_PN_CANFD_IN) /* To prevent double declaration */
#error ComConf_ComIPduGroup_PN_CANFD_IN already defined
#endif /* #if (defined ComConf_ComIPduGroup_PN_CANFD_IN) */

#define ComConf_ComIPduGroup_PN_CANFD_IN 1U


#if (defined ComConf_ComIPduGroup_PN_CANFD_OUT) /* To prevent double declaration */
#error ComConf_ComIPduGroup_PN_CANFD_OUT already defined
#endif /* #if (defined ComConf_ComIPduGroup_PN_CANFD_OUT) */

#define ComConf_ComIPduGroup_PN_CANFD_OUT 31U


#if (defined ComConf_ComIPduGroup_RXEIRAPDUS_GLOBAL) /* To prevent double declaration */
#error ComConf_ComIPduGroup_RXEIRAPDUS_GLOBAL already defined
#endif /* #if (defined ComConf_ComIPduGroup_RXEIRAPDUS_GLOBAL) */

#define ComConf_ComIPduGroup_RXEIRAPDUS_GLOBAL 2U


#if (defined ComConf_ComIPduGroup_RNGEIRACanNm) /* To prevent double declaration */
#error ComConf_ComIPduGroup_RNGEIRACanNm already defined
#endif /* #if (defined ComConf_ComIPduGroup_RNGEIRACanNm) */

#define ComConf_ComIPduGroup_RNGEIRACanNm 3U


#if (defined ComConf_ComIPduGroup_RXPDUS_GLOBAL) /* To prevent double declaration */
#error ComConf_ComIPduGroup_RXPDUS_GLOBAL already defined
#endif /* #if (defined ComConf_ComIPduGroup_RXPDUS_GLOBAL) */

#define ComConf_ComIPduGroup_RXPDUS_GLOBAL 5U


#if (defined ComConf_ComIPduGroup_TGCanNetwork) /* To prevent double declaration */
#error ComConf_ComIPduGroup_TGCanNetwork already defined
#endif /* #if (defined ComConf_ComIPduGroup_TGCanNetwork) */

#define ComConf_ComIPduGroup_TGCanNetwork 6U


#if (defined ComConf_ComIPduGroup_TXPDUS_GLOBAL) /* To prevent double declaration */
#error ComConf_ComIPduGroup_TXPDUS_GLOBAL already defined
#endif /* #if (defined ComConf_ComIPduGroup_TXPDUS_GLOBAL) */

#define ComConf_ComIPduGroup_TXPDUS_GLOBAL 7U


/* External Rx IPdus defines */
#if (defined ComConf_ComIPdu_PDPdu_CounterIn_256R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDPdu_CounterIn_256R already defined
#endif /* #if (defined ComConf_ComIPdu_PDPdu_CounterIn_256R) */

#define ComConf_ComIPdu_PDPdu_CounterIn_256R 0U


#if (defined ComConf_ComIPdu_PDPdu_CounterIn_CAN_FD_257R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDPdu_CounterIn_CAN_FD_257R already defined
#endif /* #if (defined ComConf_ComIPdu_PDPdu_CounterIn_CAN_FD_257R) */

#define ComConf_ComIPdu_PDPdu_CounterIn_CAN_FD_257R 1U


#if (defined ComConf_ComIPdu_PDNm_Pdu_CanIn_NmComUserData_592R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDNm_Pdu_CanIn_NmComUserData_592R already defined
#endif /* #if (defined ComConf_ComIPdu_PDNm_Pdu_CanIn_NmComUserData_592R) */

#define ComConf_ComIPdu_PDNm_Pdu_CanIn_NmComUserData_592R 2U


#if (defined ComConf_ComIPdu_PDPdu_SecuredPayloadIn_281R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDPdu_SecuredPayloadIn_281R already defined
#endif /* #if (defined ComConf_ComIPdu_PDPdu_SecuredPayloadIn_281R) */

#define ComConf_ComIPdu_PDPdu_SecuredPayloadIn_281R 3U


#if (defined ComConf_ComIPdu_PDISIP_E2EProt_DataIn_280R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDISIP_E2EProt_DataIn_280R already defined
#endif /* #if (defined ComConf_ComIPdu_PDISIP_E2EProt_DataIn_280R) */

#define ComConf_ComIPdu_PDISIP_E2EProt_DataIn_280R 4U


#if (defined ComConf_ComIPdu_CanNmPnEiraRxNSdu) /* To prevent double declaration */
#error ComConf_ComIPdu_CanNmPnEiraRxNSdu already defined
#endif /* #if (defined ComConf_ComIPdu_CanNmPnEiraRxNSdu) */

#define ComConf_ComIPdu_CanNmPnEiraRxNSdu 5U


/* External Tx IPdu defines */
#if (defined ComConf_ComIPdu_PDPdu_CounterOut_272T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDPdu_CounterOut_272T already defined
#endif /* #if (defined ComConf_ComIPdu_PDPdu_CounterOut_272T) */

#define ComConf_ComIPdu_PDPdu_CounterOut_272T 0U


#if (defined ComConf_ComIPdu_PDPdu_CounterOut_CAN_FD_273T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDPdu_CounterOut_CAN_FD_273T already defined
#endif /* #if (defined ComConf_ComIPdu_PDPdu_CounterOut_CAN_FD_273T) */

#define ComConf_ComIPdu_PDPdu_CounterOut_CAN_FD_273T 1U


#if (defined ComConf_ComIPdu_PDISIP_E2EProt_DataOut_284T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDISIP_E2EProt_DataOut_284T already defined
#endif /* #if (defined ComConf_ComIPdu_PDISIP_E2EProt_DataOut_284T) */

#define ComConf_ComIPdu_PDISIP_E2EProt_DataOut_284T 2U


#if (defined ComConf_ComIPdu_PDPdu_SecuredPayloadOut_285T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDPdu_SecuredPayloadOut_285T already defined
#endif /* #if (defined ComConf_ComIPdu_PDPdu_SecuredPayloadOut_285T) */

#define ComConf_ComIPdu_PDPdu_SecuredPayloadOut_285T 3U


#if (defined ComConf_ComIPdu_PDNm_Pdu_CanOut_NmComUserData_593T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDNm_Pdu_CanOut_NmComUserData_593T already defined
#endif /* #if (defined ComConf_ComIPdu_PDNm_Pdu_CanOut_NmComUserData_593T) */

#define ComConf_ComIPdu_PDNm_Pdu_CanOut_NmComUserData_593T 4U


/* External Rx Signal IDs (no group signals) defines */
#if (defined ComConf_ComSignal_SGCounterIn_256R) /* To prevent double declaration */
#error ComConf_ComSignal_SGCounterIn_256R already defined
#endif /* #if (defined ComConf_ComSignal_SGCounterIn_256R) */

#define ComConf_ComSignal_SGCounterIn_256R 0U


#if (defined ComConf_ComSignal_SGCounterIn_CAN_FD_257R) /* To prevent double declaration */
#error ComConf_ComSignal_SGCounterIn_CAN_FD_257R already defined
#endif /* #if (defined ComConf_ComSignal_SGCounterIn_CAN_FD_257R) */

#define ComConf_ComSignal_SGCounterIn_CAN_FD_257R 1U


#if (defined ComConf_ComSignal_SGNm_SignalIn_592R) /* To prevent double declaration */
#error ComConf_ComSignal_SGNm_SignalIn_592R already defined
#endif /* #if (defined ComConf_ComSignal_SGNm_SignalIn_592R) */

#define ComConf_ComSignal_SGNm_SignalIn_592R 2U


#if (defined ComConf_ComSignal_SGSecuredDataIn_281R) /* To prevent double declaration */
#error ComConf_ComSignal_SGSecuredDataIn_281R already defined
#endif /* #if (defined ComConf_ComSignal_SGSecuredDataIn_281R) */

#define ComConf_ComSignal_SGSecuredDataIn_281R 3U


#if (defined ComConf_ComSignal_SGCanNmPnEiraRxNSdu) /* To prevent double declaration */
#error ComConf_ComSignal_SGCanNmPnEiraRxNSdu already defined
#endif /* #if (defined ComConf_ComSignal_SGCanNmPnEiraRxNSdu) */

#define ComConf_ComSignal_SGCanNmPnEiraRxNSdu 4U


/* External Tx Signal IDs (no group signals) defines */
#if (defined ComConf_ComSignal_SGCounterOut_272T) /* To prevent double declaration */
#error ComConf_ComSignal_SGCounterOut_272T already defined
#endif /* #if (defined ComConf_ComSignal_SGCounterOut_272T) */

#define ComConf_ComSignal_SGCounterOut_272T 0U


#if (defined ComConf_ComSignal_SGCounterOut_CAN_FD_273T) /* To prevent double declaration */
#error ComConf_ComSignal_SGCounterOut_CAN_FD_273T already defined
#endif /* #if (defined ComConf_ComSignal_SGCounterOut_CAN_FD_273T) */

#define ComConf_ComSignal_SGCounterOut_CAN_FD_273T 1U


#if (defined ComConf_ComSignal_SGNm_SignalOut_593T) /* To prevent double declaration */
#error ComConf_ComSignal_SGNm_SignalOut_593T already defined
#endif /* #if (defined ComConf_ComSignal_SGNm_SignalOut_593T) */

#define ComConf_ComSignal_SGNm_SignalOut_593T 2U


#if (defined ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu) /* To prevent double declaration */
#error ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu already defined
#endif /* #if (defined ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu) */

#define ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu 3U


#if (defined ComConf_ComSignal_SGSecuredDataOut_285T) /* To prevent double declaration */
#error ComConf_ComSignal_SGSecuredDataOut_285T already defined
#endif /* #if (defined ComConf_ComSignal_SGSecuredDataOut_285T) */

#define ComConf_ComSignal_SGSecuredDataOut_285T 4U


/* External Rx Group Signal IDs defines */
#if (defined ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R already defined
#endif /* #if (defined ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R) */

#define ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R 5U


#if (defined ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R already defined
#endif /* #if (defined ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R) */

#define ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R 6U


#if (defined ComConf_ComGroupSignal_SafetyE2E_DataIn_280R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_SafetyE2E_DataIn_280R already defined
#endif /* #if (defined ComConf_ComGroupSignal_SafetyE2E_DataIn_280R) */

#define ComConf_ComGroupSignal_SafetyE2E_DataIn_280R 7U


/* External Tx Group Signal IDs defines */
#if (defined ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T already defined
#endif /* #if (defined ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T) */

#define ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T 5U


#if (defined ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T already defined
#endif /* #if (defined ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T) */

#define ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T 6U


#if (defined ComConf_ComGroupSignal_SafetyE2E_DataOut_284T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_SafetyE2E_DataOut_284T already defined
#endif /* #if (defined ComConf_ComGroupSignal_SafetyE2E_DataOut_284T) */

#define ComConf_ComGroupSignal_SafetyE2E_DataOut_284T 7U


/* External Rx Signal Group IDs defines */
#if (defined ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R) /* To prevent double declaration */
#error ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R already defined
#endif /* #if (defined ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R) */

#define ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R 0U


/* External Tx Signal Group IDs defines */
#if (defined ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T) /* To prevent double declaration */
#error ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T already defined
#endif /* #if (defined ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T) */

#define ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T 0U



/*------------------[symbols without prefix for backward compatibility]-----*/
#if (defined COM_PROVIDE_LEGACY_SYMBOLIC_NAMES)

/* IPDU group ID defines */

#if (defined Com_RGCanNetwork) /* To prevent double declaration */
#error Com_RGCanNetwork already defined
#endif /* #if (defined Com_RGCanNetwork) */

#define Com_RGCanNetwork ComConf_ComIPduGroup_RGCanNetwork



#if (defined Com_PN_CAN_OUT) /* To prevent double declaration */
#error Com_PN_CAN_OUT already defined
#endif /* #if (defined Com_PN_CAN_OUT) */

#define Com_PN_CAN_OUT ComConf_ComIPduGroup_PN_CAN_OUT



#if (defined Com_PN_CAN_IN) /* To prevent double declaration */
#error Com_PN_CAN_IN already defined
#endif /* #if (defined Com_PN_CAN_IN) */

#define Com_PN_CAN_IN ComConf_ComIPduGroup_PN_CAN_IN



#if (defined Com_PN_CANFD_IN) /* To prevent double declaration */
#error Com_PN_CANFD_IN already defined
#endif /* #if (defined Com_PN_CANFD_IN) */

#define Com_PN_CANFD_IN ComConf_ComIPduGroup_PN_CANFD_IN



#if (defined Com_PN_CANFD_OUT) /* To prevent double declaration */
#error Com_PN_CANFD_OUT already defined
#endif /* #if (defined Com_PN_CANFD_OUT) */

#define Com_PN_CANFD_OUT ComConf_ComIPduGroup_PN_CANFD_OUT



#if (defined Com_RXEIRAPDUS_GLOBAL) /* To prevent double declaration */
#error Com_RXEIRAPDUS_GLOBAL already defined
#endif /* #if (defined Com_RXEIRAPDUS_GLOBAL) */

#define Com_RXEIRAPDUS_GLOBAL ComConf_ComIPduGroup_RXEIRAPDUS_GLOBAL



#if (defined Com_RNGEIRACanNm) /* To prevent double declaration */
#error Com_RNGEIRACanNm already defined
#endif /* #if (defined Com_RNGEIRACanNm) */

#define Com_RNGEIRACanNm ComConf_ComIPduGroup_RNGEIRACanNm



#if (defined Com_RXPDUS_GLOBAL) /* To prevent double declaration */
#error Com_RXPDUS_GLOBAL already defined
#endif /* #if (defined Com_RXPDUS_GLOBAL) */

#define Com_RXPDUS_GLOBAL ComConf_ComIPduGroup_RXPDUS_GLOBAL



#if (defined Com_TGCanNetwork) /* To prevent double declaration */
#error Com_TGCanNetwork already defined
#endif /* #if (defined Com_TGCanNetwork) */

#define Com_TGCanNetwork ComConf_ComIPduGroup_TGCanNetwork



#if (defined Com_TXPDUS_GLOBAL) /* To prevent double declaration */
#error Com_TXPDUS_GLOBAL already defined
#endif /* #if (defined Com_TXPDUS_GLOBAL) */

#define Com_TXPDUS_GLOBAL ComConf_ComIPduGroup_TXPDUS_GLOBAL


/* External Rx IPdus defines */
#if (defined Com_PDPdu_CounterIn_256R) /* To prevent double declaration */
#error Com_PDPdu_CounterIn_256R already defined
#endif /* #if (defined Com_PDPdu_CounterIn_256R) */

#define Com_PDPdu_CounterIn_256R ComConf_ComIPdu_PDPdu_CounterIn_256R


#if (defined Com_PDPdu_CounterIn_CAN_FD_257R) /* To prevent double declaration */
#error Com_PDPdu_CounterIn_CAN_FD_257R already defined
#endif /* #if (defined Com_PDPdu_CounterIn_CAN_FD_257R) */

#define Com_PDPdu_CounterIn_CAN_FD_257R ComConf_ComIPdu_PDPdu_CounterIn_CAN_FD_257R


#if (defined Com_PDNm_Pdu_CanIn_NmComUserData_592R) /* To prevent double declaration */
#error Com_PDNm_Pdu_CanIn_NmComUserData_592R already defined
#endif /* #if (defined Com_PDNm_Pdu_CanIn_NmComUserData_592R) */

#define Com_PDNm_Pdu_CanIn_NmComUserData_592R ComConf_ComIPdu_PDNm_Pdu_CanIn_NmComUserData_592R


#if (defined Com_PDPdu_SecuredPayloadIn_281R) /* To prevent double declaration */
#error Com_PDPdu_SecuredPayloadIn_281R already defined
#endif /* #if (defined Com_PDPdu_SecuredPayloadIn_281R) */

#define Com_PDPdu_SecuredPayloadIn_281R ComConf_ComIPdu_PDPdu_SecuredPayloadIn_281R


#if (defined Com_PDISIP_E2EProt_DataIn_280R) /* To prevent double declaration */
#error Com_PDISIP_E2EProt_DataIn_280R already defined
#endif /* #if (defined Com_PDISIP_E2EProt_DataIn_280R) */

#define Com_PDISIP_E2EProt_DataIn_280R ComConf_ComIPdu_PDISIP_E2EProt_DataIn_280R


#if (defined Com_CanNmPnEiraRxNSdu) /* To prevent double declaration */
#error Com_CanNmPnEiraRxNSdu already defined
#endif /* #if (defined Com_CanNmPnEiraRxNSdu) */

#define Com_CanNmPnEiraRxNSdu ComConf_ComIPdu_CanNmPnEiraRxNSdu


/* External Tx IPdu defines */
#if (defined Com_PDPdu_CounterOut_272T) /* To prevent double declaration */
#error Com_PDPdu_CounterOut_272T already defined
#endif /* #if (defined Com_PDPdu_CounterOut_272T) */

#define Com_PDPdu_CounterOut_272T ComConf_ComIPdu_PDPdu_CounterOut_272T


#if (defined Com_PDPdu_CounterOut_CAN_FD_273T) /* To prevent double declaration */
#error Com_PDPdu_CounterOut_CAN_FD_273T already defined
#endif /* #if (defined Com_PDPdu_CounterOut_CAN_FD_273T) */

#define Com_PDPdu_CounterOut_CAN_FD_273T ComConf_ComIPdu_PDPdu_CounterOut_CAN_FD_273T


#if (defined Com_PDISIP_E2EProt_DataOut_284T) /* To prevent double declaration */
#error Com_PDISIP_E2EProt_DataOut_284T already defined
#endif /* #if (defined Com_PDISIP_E2EProt_DataOut_284T) */

#define Com_PDISIP_E2EProt_DataOut_284T ComConf_ComIPdu_PDISIP_E2EProt_DataOut_284T


#if (defined Com_PDPdu_SecuredPayloadOut_285T) /* To prevent double declaration */
#error Com_PDPdu_SecuredPayloadOut_285T already defined
#endif /* #if (defined Com_PDPdu_SecuredPayloadOut_285T) */

#define Com_PDPdu_SecuredPayloadOut_285T ComConf_ComIPdu_PDPdu_SecuredPayloadOut_285T


#if (defined Com_PDNm_Pdu_CanOut_NmComUserData_593T) /* To prevent double declaration */
#error Com_PDNm_Pdu_CanOut_NmComUserData_593T already defined
#endif /* #if (defined Com_PDNm_Pdu_CanOut_NmComUserData_593T) */

#define Com_PDNm_Pdu_CanOut_NmComUserData_593T ComConf_ComIPdu_PDNm_Pdu_CanOut_NmComUserData_593T


/* External Rx Signal IDs (no group signals) defines */
#if (defined Com_SGCounterIn_256R) /* To prevent double declaration */
#error Com_SGCounterIn_256R already defined
#endif /* #if (defined Com_SGCounterIn_256R) */

#define Com_SGCounterIn_256R ComConf_ComSignal_SGCounterIn_256R


#if (defined Com_SGCounterIn_CAN_FD_257R) /* To prevent double declaration */
#error Com_SGCounterIn_CAN_FD_257R already defined
#endif /* #if (defined Com_SGCounterIn_CAN_FD_257R) */

#define Com_SGCounterIn_CAN_FD_257R ComConf_ComSignal_SGCounterIn_CAN_FD_257R


#if (defined Com_SGNm_SignalIn_592R) /* To prevent double declaration */
#error Com_SGNm_SignalIn_592R already defined
#endif /* #if (defined Com_SGNm_SignalIn_592R) */

#define Com_SGNm_SignalIn_592R ComConf_ComSignal_SGNm_SignalIn_592R


#if (defined Com_SGSecuredDataIn_281R) /* To prevent double declaration */
#error Com_SGSecuredDataIn_281R already defined
#endif /* #if (defined Com_SGSecuredDataIn_281R) */

#define Com_SGSecuredDataIn_281R ComConf_ComSignal_SGSecuredDataIn_281R


#if (defined Com_SGCanNmPnEiraRxNSdu) /* To prevent double declaration */
#error Com_SGCanNmPnEiraRxNSdu already defined
#endif /* #if (defined Com_SGCanNmPnEiraRxNSdu) */

#define Com_SGCanNmPnEiraRxNSdu ComConf_ComSignal_SGCanNmPnEiraRxNSdu


/* External Tx Signal IDs (no group signals) defines */
#if (defined Com_SGCounterOut_272T) /* To prevent double declaration */
#error Com_SGCounterOut_272T already defined
#endif /* #if (defined Com_SGCounterOut_272T) */

#define Com_SGCounterOut_272T ComConf_ComSignal_SGCounterOut_272T


#if (defined Com_SGCounterOut_CAN_FD_273T) /* To prevent double declaration */
#error Com_SGCounterOut_CAN_FD_273T already defined
#endif /* #if (defined Com_SGCounterOut_CAN_FD_273T) */

#define Com_SGCounterOut_CAN_FD_273T ComConf_ComSignal_SGCounterOut_CAN_FD_273T


#if (defined Com_SGNm_SignalOut_593T) /* To prevent double declaration */
#error Com_SGNm_SignalOut_593T already defined
#endif /* #if (defined Com_SGNm_SignalOut_593T) */

#define Com_SGNm_SignalOut_593T ComConf_ComSignal_SGNm_SignalOut_593T


#if (defined Com_SGCanNetworkNmPnIraTxNSdu) /* To prevent double declaration */
#error Com_SGCanNetworkNmPnIraTxNSdu already defined
#endif /* #if (defined Com_SGCanNetworkNmPnIraTxNSdu) */

#define Com_SGCanNetworkNmPnIraTxNSdu ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu


#if (defined Com_SGSecuredDataOut_285T) /* To prevent double declaration */
#error Com_SGSecuredDataOut_285T already defined
#endif /* #if (defined Com_SGSecuredDataOut_285T) */

#define Com_SGSecuredDataOut_285T ComConf_ComSignal_SGSecuredDataOut_285T


/* External Rx Group Signal IDs defines */
#if (defined Com_SafetyE2E_DataIn_CRC_280R) /* To prevent double declaration */
#error Com_SafetyE2E_DataIn_CRC_280R already defined
#endif /* #if (defined Com_SafetyE2E_DataIn_CRC_280R) */

#define Com_SafetyE2E_DataIn_CRC_280R ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R


#if (defined Com_SafetyE2E_DataIn_SQC_Counter_280R) /* To prevent double declaration */
#error Com_SafetyE2E_DataIn_SQC_Counter_280R already defined
#endif /* #if (defined Com_SafetyE2E_DataIn_SQC_Counter_280R) */

#define Com_SafetyE2E_DataIn_SQC_Counter_280R ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R


#if (defined Com_SafetyE2E_DataIn_280R) /* To prevent double declaration */
#error Com_SafetyE2E_DataIn_280R already defined
#endif /* #if (defined Com_SafetyE2E_DataIn_280R) */

#define Com_SafetyE2E_DataIn_280R ComConf_ComGroupSignal_SafetyE2E_DataIn_280R


/* External Tx Group Signal IDs defines */
#if (defined Com_SafetyE2E_DataOut_CRC_284T) /* To prevent double declaration */
#error Com_SafetyE2E_DataOut_CRC_284T already defined
#endif /* #if (defined Com_SafetyE2E_DataOut_CRC_284T) */

#define Com_SafetyE2E_DataOut_CRC_284T ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T


#if (defined Com_SafetyE2E_DataOut_SQC_Counter_284T) /* To prevent double declaration */
#error Com_SafetyE2E_DataOut_SQC_Counter_284T already defined
#endif /* #if (defined Com_SafetyE2E_DataOut_SQC_Counter_284T) */

#define Com_SafetyE2E_DataOut_SQC_Counter_284T ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T


#if (defined Com_SafetyE2E_DataOut_284T) /* To prevent double declaration */
#error Com_SafetyE2E_DataOut_284T already defined
#endif /* #if (defined Com_SafetyE2E_DataOut_284T) */

#define Com_SafetyE2E_DataOut_284T ComConf_ComGroupSignal_SafetyE2E_DataOut_284T


/* External Rx Signal Group IDs defines */
#if (defined Com_GRsigGroup_E2EProt_DataIn_280R) /* To prevent double declaration */
#error Com_GRsigGroup_E2EProt_DataIn_280R already defined
#endif /* #if (defined Com_GRsigGroup_E2EProt_DataIn_280R) */

#define Com_GRsigGroup_E2EProt_DataIn_280R ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R


/* External Tx Signal Group IDs defines */
#if (defined Com_GRsigGroup_E2EProt_DataOut_284T) /* To prevent double declaration */
#error Com_GRsigGroup_E2EProt_DataOut_284T already defined
#endif /* #if (defined Com_GRsigGroup_E2EProt_DataOut_284T) */

#define Com_GRsigGroup_E2EProt_DataOut_284T ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T


#endif /* (defined COM_PROVIDE_LEGACY_SYMBOLIC_NAMES) */

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* ifndef COM_SYMBOLIC_NAMES_PB_CFG_H  */
/*==================[end of file]===========================================*/
