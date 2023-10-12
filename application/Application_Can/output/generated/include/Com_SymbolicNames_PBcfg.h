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

#define ComConf_ComIPduGroup_RGCanNetwork 0U


#if (defined ComConf_ComIPduGroup_RXPDUS_GLOBAL) /* To prevent double declaration */
#error ComConf_ComIPduGroup_RXPDUS_GLOBAL already defined
#endif /* #if (defined ComConf_ComIPduGroup_RXPDUS_GLOBAL) */

#define ComConf_ComIPduGroup_RXPDUS_GLOBAL 1U


#if (defined ComConf_ComIPduGroup_TGCanNetwork) /* To prevent double declaration */
#error ComConf_ComIPduGroup_TGCanNetwork already defined
#endif /* #if (defined ComConf_ComIPduGroup_TGCanNetwork) */

#define ComConf_ComIPduGroup_TGCanNetwork 2U


#if (defined ComConf_ComIPduGroup_TXPDUS_GLOBAL) /* To prevent double declaration */
#error ComConf_ComIPduGroup_TXPDUS_GLOBAL already defined
#endif /* #if (defined ComConf_ComIPduGroup_TXPDUS_GLOBAL) */

#define ComConf_ComIPduGroup_TXPDUS_GLOBAL 3U


/* External Rx IPdus defines */
#if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_10ms_78R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_10ms_78R already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_10ms_78R) */

#define ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_10ms_78R 0U


#if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_20ms_122R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_20ms_122R already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_20ms_122R) */

#define ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_20ms_122R 1U


#if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_40ms_165R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_40ms_165R already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_40ms_165R) */

#define ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_40ms_165R 2U


#if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_80ms_262R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_80ms_262R already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_80ms_262R) */

#define ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_80ms_262R 3U


#if (defined ComConf_ComIPdu_PDEVC_BCMA_PR2_Rio_80ms_267R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_BCMA_PR2_Rio_80ms_267R already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_BCMA_PR2_Rio_80ms_267R) */

#define ComConf_ComIPdu_PDEVC_BCMA_PR2_Rio_80ms_267R 4U


#if (defined ComConf_ComIPdu_PDVEHCONFIG__400RIO_MUX_1024R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDVEHCONFIG__400RIO_MUX_1024R already defined
#endif /* #if (defined ComConf_ComIPdu_PDVEHCONFIG__400RIO_MUX_1024R) */

#define ComConf_ComIPdu_PDVEHCONFIG__400RIO_MUX_1024R 5U


#if (defined ComConf_ComIPdu_PDTST_PhysicalReqPBU_RIO_1911R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDTST_PhysicalReqPBU_RIO_1911R already defined
#endif /* #if (defined ComConf_ComIPdu_PDTST_PhysicalReqPBU_RIO_1911R) */

#define ComConf_ComIPdu_PDTST_PhysicalReqPBU_RIO_1911R 6U


#if (defined ComConf_ComIPdu_PDTST_FunctionalReq_RIOBus_2015R) /* To prevent double declaration */
#error ComConf_ComIPdu_PDTST_FunctionalReq_RIOBus_2015R already defined
#endif /* #if (defined ComConf_ComIPdu_PDTST_FunctionalReq_RIOBus_2015R) */

#define ComConf_ComIPdu_PDTST_FunctionalReq_RIOBus_2015R 7U


/* External Tx IPdu defines */
#if (defined ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_40ms_172T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_40ms_172T already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_40ms_172T) */

#define ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_40ms_172T 0U


#if (defined ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T already defined
#endif /* #if (defined ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T) */

#define ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T 1U


#if (defined ComConf_ComIPdu_PDTST_PhysicalRespPBU_RIO_1919T) /* To prevent double declaration */
#error ComConf_ComIPdu_PDTST_PhysicalRespPBU_RIO_1919T already defined
#endif /* #if (defined ComConf_ComIPdu_PDTST_PhysicalRespPBU_RIO_1919T) */

#define ComConf_ComIPdu_PDTST_PhysicalRespPBU_RIO_1919T 2U


/* External Rx Signal IDs (no group signals) defines */
#if (defined ComConf_ComSignal_SGPowerPackStatus_122R) /* To prevent double declaration */
#error ComConf_ComSignal_SGPowerPackStatus_122R already defined
#endif /* #if (defined ComConf_ComSignal_SGPowerPackStatus_122R) */

#define ComConf_ComSignal_SGPowerPackStatus_122R 0U


#if (defined ComConf_ComSignal_SGPowerPackStatus_UB_122R) /* To prevent double declaration */
#error ComConf_ComSignal_SGPowerPackStatus_UB_122R already defined
#endif /* #if (defined ComConf_ComSignal_SGPowerPackStatus_UB_122R) */

#define ComConf_ComSignal_SGPowerPackStatus_UB_122R 1U


#if (defined ComConf_ComSignal_SGCarMode_165R) /* To prevent double declaration */
#error ComConf_ComSignal_SGCarMode_165R already defined
#endif /* #if (defined ComConf_ComSignal_SGCarMode_165R) */

#define ComConf_ComSignal_SGCarMode_165R 2U


#if (defined ComConf_ComSignal_SGPowerMode_165R) /* To prevent double declaration */
#error ComConf_ComSignal_SGPowerMode_165R already defined
#endif /* #if (defined ComConf_ComSignal_SGPowerMode_165R) */

#define ComConf_ComSignal_SGPowerMode_165R 3U


#if (defined ComConf_ComSignal_SGGWMEL2Threshold_262R) /* To prevent double declaration */
#error ComConf_ComSignal_SGGWMEL2Threshold_262R already defined
#endif /* #if (defined ComConf_ComSignal_SGGWMEL2Threshold_262R) */

#define ComConf_ComSignal_SGGWMEL2Threshold_262R 4U


#if (defined ComConf_ComSignal_SGGWMEL3Threshold_262R) /* To prevent double declaration */
#error ComConf_ComSignal_SGGWMEL3Threshold_262R already defined
#endif /* #if (defined ComConf_ComSignal_SGGWMEL3Threshold_262R) */

#define ComConf_ComSignal_SGGWMEL3Threshold_262R 5U


#if (defined ComConf_ComSignal_SGGWMWakeUpToChargeThr_262R) /* To prevent double declaration */
#error ComConf_ComSignal_SGGWMWakeUpToChargeThr_262R already defined
#endif /* #if (defined ComConf_ComSignal_SGGWMWakeUpToChargeThr_262R) */

#define ComConf_ComSignal_SGGWMWakeUpToChargeThr_262R 6U


#if (defined ComConf_ComSignal_SGOdometerMasterValue_262R) /* To prevent double declaration */
#error ComConf_ComSignal_SGOdometerMasterValue_262R already defined
#endif /* #if (defined ComConf_ComSignal_SGOdometerMasterValue_262R) */

#define ComConf_ComSignal_SGOdometerMasterValue_262R 7U


#if (defined ComConf_ComSignal_SGOdometerMasterValue_UB_262R) /* To prevent double declaration */
#error ComConf_ComSignal_SGOdometerMasterValue_UB_262R already defined
#endif /* #if (defined ComConf_ComSignal_SGOdometerMasterValue_UB_262R) */

#define ComConf_ComSignal_SGOdometerMasterValue_UB_262R 8U


#if (defined ComConf_ComSignal_SGSBShortVehID_262R) /* To prevent double declaration */
#error ComConf_ComSignal_SGSBShortVehID_262R already defined
#endif /* #if (defined ComConf_ComSignal_SGSBShortVehID_262R) */

#define ComConf_ComSignal_SGSBShortVehID_262R 9U


#if (defined ComConf_ComSignal_SGSOTAPrepRequest_267R) /* To prevent double declaration */
#error ComConf_ComSignal_SGSOTAPrepRequest_267R already defined
#endif /* #if (defined ComConf_ComSignal_SGSOTAPrepRequest_267R) */

#define ComConf_ComSignal_SGSOTAPrepRequest_267R 10U


#if (defined ComConf_ComSignal_SGTST_PhysicalReqPBU_RIO_PDU_1911R) /* To prevent double declaration */
#error ComConf_ComSignal_SGTST_PhysicalReqPBU_RIO_PDU_1911R already defined
#endif /* #if (defined ComConf_ComSignal_SGTST_PhysicalReqPBU_RIO_PDU_1911R) */

#define ComConf_ComSignal_SGTST_PhysicalReqPBU_RIO_PDU_1911R 11U


#if (defined ComConf_ComSignal_SGTST_FunctionalReq_RIO_PDU_2015R) /* To prevent double declaration */
#error ComConf_ComSignal_SGTST_FunctionalReq_RIO_PDU_2015R already defined
#endif /* #if (defined ComConf_ComSignal_SGTST_FunctionalReq_RIO_PDU_2015R) */

#define ComConf_ComSignal_SGTST_FunctionalReq_RIO_PDU_2015R 12U


/* External Tx Signal IDs (no group signals) defines */
#if (defined ComConf_ComSignal_SGPBBatCurr_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBatCurr_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBatCurr_172T) */

#define ComConf_ComSignal_SGPBBatCurr_172T 0U


#if (defined ComConf_ComSignal_SGPBBatCurrFlt_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBatCurrFlt_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBatCurrFlt_172T) */

#define ComConf_ComSignal_SGPBBatCurrFlt_172T 1U


#if (defined ComConf_ComSignal_SGPBBatVolt_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBatVolt_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBatVolt_172T) */

#define ComConf_ComSignal_SGPBBatVolt_172T 2U


#if (defined ComConf_ComSignal_SGPBBatVoltFlt_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBatVoltFlt_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBatVoltFlt_172T) */

#define ComConf_ComSignal_SGPBBatVoltFlt_172T 3U


#if (defined ComConf_ComSignal_SGPBCriticErr_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCriticErr_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCriticErr_172T) */

#define ComConf_ComSignal_SGPBCriticErr_172T 4U


#if (defined ComConf_ComSignal_SGPBMaxChrgCurrLmt_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBMaxChrgCurrLmt_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBMaxChrgCurrLmt_172T) */

#define ComConf_ComSignal_SGPBMaxChrgCurrLmt_172T 5U


#if (defined ComConf_ComSignal_SGPBMaxChrgVoltLmt_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBMaxChrgVoltLmt_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBMaxChrgVoltLmt_172T) */

#define ComConf_ComSignal_SGPBMaxChrgVoltLmt_172T 6U


#if (defined ComConf_ComSignal_SGPBMaxDchgCurrLmt_172T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBMaxDchgCurrLmt_172T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBMaxDchgCurrLmt_172T) */

#define ComConf_ComSignal_SGPBMaxDchgCurrLmt_172T 7U


#if (defined ComConf_ComSignal_SGPBAgeing_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBAgeing_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBAgeing_323T) */

#define ComConf_ComSignal_SGPBAgeing_323T 8U


#if (defined ComConf_ComSignal_SGPBAhChange_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBAhChange_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBAhChange_323T) */

#define ComConf_ComSignal_SGPBAhChange_323T 9U


#if (defined ComConf_ComSignal_SGPBAliveCounter_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBAliveCounter_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBAliveCounter_323T) */

#define ComConf_ComSignal_SGPBAliveCounter_323T 10U


#if (defined ComConf_ComSignal_SGPBBalActvCell1_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBalActvCell1_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBalActvCell1_323T) */

#define ComConf_ComSignal_SGPBBalActvCell1_323T 11U


#if (defined ComConf_ComSignal_SGPBBalActvCell2_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBalActvCell2_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBalActvCell2_323T) */

#define ComConf_ComSignal_SGPBBalActvCell2_323T 12U


#if (defined ComConf_ComSignal_SGPBBalActvCell3_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBalActvCell3_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBalActvCell3_323T) */

#define ComConf_ComSignal_SGPBBalActvCell3_323T 13U


#if (defined ComConf_ComSignal_SGPBBalActvCell4_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBalActvCell4_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBalActvCell4_323T) */

#define ComConf_ComSignal_SGPBBalActvCell4_323T 14U


#if (defined ComConf_ComSignal_SGPBBattQd_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBBattQd_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBBattQd_323T) */

#define ComConf_ComSignal_SGPBBattQd_323T 15U


#if (defined ComConf_ComSignal_SGPBCell1Volt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell1Volt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell1Volt_323T) */

#define ComConf_ComSignal_SGPBCell1Volt_323T 16U


#if (defined ComConf_ComSignal_SGPBCell1VoltFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell1VoltFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell1VoltFlt_323T) */

#define ComConf_ComSignal_SGPBCell1VoltFlt_323T 17U


#if (defined ComConf_ComSignal_SGPBCell2Volt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell2Volt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell2Volt_323T) */

#define ComConf_ComSignal_SGPBCell2Volt_323T 18U


#if (defined ComConf_ComSignal_SGPBCell2VoltFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell2VoltFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell2VoltFlt_323T) */

#define ComConf_ComSignal_SGPBCell2VoltFlt_323T 19U


#if (defined ComConf_ComSignal_SGPBCell3Volt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell3Volt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell3Volt_323T) */

#define ComConf_ComSignal_SGPBCell3Volt_323T 20U


#if (defined ComConf_ComSignal_SGPBCell3VoltFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell3VoltFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell3VoltFlt_323T) */

#define ComConf_ComSignal_SGPBCell3VoltFlt_323T 21U


#if (defined ComConf_ComSignal_SGPBCell4Volt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell4Volt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell4Volt_323T) */

#define ComConf_ComSignal_SGPBCell4Volt_323T 22U


#if (defined ComConf_ComSignal_SGPBCell4VoltFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCell4VoltFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCell4VoltFlt_323T) */

#define ComConf_ComSignal_SGPBCell4VoltFlt_323T 23U


#if (defined ComConf_ComSignal_SGPBCpctyAbsolute_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCpctyAbsolute_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCpctyAbsolute_323T) */

#define ComConf_ComSignal_SGPBCpctyAbsolute_323T 24U


#if (defined ComConf_ComSignal_SGPBCpctyRelative_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBCpctyRelative_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBCpctyRelative_323T) */

#define ComConf_ComSignal_SGPBCpctyRelative_323T 25U


#if (defined ComConf_ComSignal_SGPBECUFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBECUFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBECUFlt_323T) */

#define ComConf_ComSignal_SGPBECUFlt_323T 26U


#if (defined ComConf_ComSignal_SGPBECUSerial_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBECUSerial_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBECUSerial_323T) */

#define ComConf_ComSignal_SGPBECUSerial_323T 27U


#if (defined ComConf_ComSignal_SGPBErsoStatus_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBErsoStatus_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBErsoStatus_323T) */

#define ComConf_ComSignal_SGPBErsoStatus_323T 28U


#if (defined ComConf_ComSignal_SGPBMinBatCurr_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBMinBatCurr_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBMinBatCurr_323T) */

#define ComConf_ComSignal_SGPBMinBatCurr_323T 29U


#if (defined ComConf_ComSignal_SGPBMinBatVolt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBMinBatVolt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBMinBatVolt_323T) */

#define ComConf_ComSignal_SGPBMinBatVolt_323T 30U


#if (defined ComConf_ComSignal_SGPBMinCrnkSOCLmt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBMinCrnkSOCLmt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBMinCrnkSOCLmt_323T) */

#define ComConf_ComSignal_SGPBMinCrnkSOCLmt_323T 31U


#if (defined ComConf_ComSignal_SGPBPackVolt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBPackVolt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBPackVolt_323T) */

#define ComConf_ComSignal_SGPBPackVolt_323T 32U


#if (defined ComConf_ComSignal_SGPBPackVoltFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBPackVoltFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBPackVoltFlt_323T) */

#define ComConf_ComSignal_SGPBPackVoltFlt_323T 33U


#if (defined ComConf_ComSignal_SGPBParkingTime_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBParkingTime_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBParkingTime_323T) */

#define ComConf_ComSignal_SGPBParkingTime_323T 34U


#if (defined ComConf_ComSignal_SGPBPos1Temp_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBPos1Temp_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBPos1Temp_323T) */

#define ComConf_ComSignal_SGPBPos1Temp_323T 35U


#if (defined ComConf_ComSignal_SGPBPos1TempFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBPos1TempFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBPos1TempFlt_323T) */

#define ComConf_ComSignal_SGPBPos1TempFlt_323T 36U


#if (defined ComConf_ComSignal_SGPBPos2Temp_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBPos2Temp_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBPos2Temp_323T) */

#define ComConf_ComSignal_SGPBPos2Temp_323T 37U


#if (defined ComConf_ComSignal_SGPBPos2TempFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBPos2TempFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBPos2TempFlt_323T) */

#define ComConf_ComSignal_SGPBPos2TempFlt_323T 38U


#if (defined ComConf_ComSignal_SGPBQChaRideCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQChaRideCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQChaRideCn_323T) */

#define ComConf_ComSignal_SGPBQChaRideCn_323T 39U


#if (defined ComConf_ComSignal_SGPBQChaRunCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQChaRunCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQChaRunCn_323T) */

#define ComConf_ComSignal_SGPBQChaRunCn_323T 40U


#if (defined ComConf_ComSignal_SGPBQDchActCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQDchActCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQDchActCn_323T) */

#define ComConf_ComSignal_SGPBQDchActCn_323T 41U


#if (defined ComConf_ComSignal_SGPBQDchActHiCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQDchActHiCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQDchActHiCn_323T) */

#define ComConf_ComSignal_SGPBQDchActHiCn_323T 42U


#if (defined ComConf_ComSignal_SGPBQDchEcoStpCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQDchEcoStpCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQDchEcoStpCn_323T) */

#define ComConf_ComSignal_SGPBQDchEcoStpCn_323T 43U


#if (defined ComConf_ComSignal_SGPBQDchQdCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQDchQdCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQDchQdCn_323T) */

#define ComConf_ComSignal_SGPBQDchQdCn_323T 44U


#if (defined ComConf_ComSignal_SGPBQDchaRideCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQDchaRideCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQDchaRideCn_323T) */

#define ComConf_ComSignal_SGPBQDchaRideCn_323T 45U


#if (defined ComConf_ComSignal_SGPBQDchaRunCn_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBQDchaRunCn_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBQDchaRunCn_323T) */

#define ComConf_ComSignal_SGPBQDchaRunCn_323T 46U


#if (defined ComConf_ComSignal_SGPBRelayClsFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBRelayClsFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBRelayClsFlt_323T) */

#define ComConf_ComSignal_SGPBRelayClsFlt_323T 47U


#if (defined ComConf_ComSignal_SGPBRelayOpenFlt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBRelayOpenFlt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBRelayOpenFlt_323T) */

#define ComConf_ComSignal_SGPBRelayOpenFlt_323T 48U


#if (defined ComConf_ComSignal_SGPBRelayStatus_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBRelayStatus_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBRelayStatus_323T) */

#define ComConf_ComSignal_SGPBRelayStatus_323T 49U


#if (defined ComConf_ComSignal_SGPBSOHCapFade_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBSOHCapFade_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBSOHCapFade_323T) */

#define ComConf_ComSignal_SGPBSOHCapFade_323T 50U


#if (defined ComConf_ComSignal_SGPBSOHImpGrowth_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBSOHImpGrowth_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBSOHImpGrowth_323T) */

#define ComConf_ComSignal_SGPBSOHImpGrowth_323T 51U


#if (defined ComConf_ComSignal_SGPBSOHImpedanceAbs_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBSOHImpedanceAbs_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBSOHImpedanceAbs_323T) */

#define ComConf_ComSignal_SGPBSOHImpedanceAbs_323T 52U


#if (defined ComConf_ComSignal_SGPBSWVer_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBSWVer_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBSWVer_323T) */

#define ComConf_ComSignal_SGPBSWVer_323T 53U


#if (defined ComConf_ComSignal_SGPBSoCAbsolute_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBSoCAbsolute_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBSoCAbsolute_323T) */

#define ComConf_ComSignal_SGPBSoCAbsolute_323T 54U


#if (defined ComConf_ComSignal_SGPBSoCRelative_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBSoCRelative_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBSoCRelative_323T) */

#define ComConf_ComSignal_SGPBSoCRelative_323T 55U


#if (defined ComConf_ComSignal_SGPBTIS_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBTIS_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBTIS_323T) */

#define ComConf_ComSignal_SGPBTIS_323T 56U


#if (defined ComConf_ComSignal_SGPBTOCReq_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBTOCReq_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBTOCReq_323T) */

#define ComConf_ComSignal_SGPBTOCReq_323T 57U


#if (defined ComConf_ComSignal_SGPBVehCount_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBVehCount_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBVehCount_323T) */

#define ComConf_ComSignal_SGPBVehCount_323T 58U


#if (defined ComConf_ComSignal_SGPBVehQd_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBVehQd_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBVehQd_323T) */

#define ComConf_ComSignal_SGPBVehQd_323T 59U


#if (defined ComConf_ComSignal_SGPBWURLowChargeLmt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBWURLowChargeLmt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBWURLowChargeLmt_323T) */

#define ComConf_ComSignal_SGPBWURLowChargeLmt_323T 60U


#if (defined ComConf_ComSignal_SGPBWURMinChargeLmt_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBWURMinChargeLmt_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBWURMinChargeLmt_323T) */

#define ComConf_ComSignal_SGPBWURMinChargeLmt_323T 61U


#if (defined ComConf_ComSignal_SGPBWakeUpToChgReq_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBWakeUpToChgReq_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBWakeUpToChgReq_323T) */

#define ComConf_ComSignal_SGPBWakeUpToChgReq_323T 62U


#if (defined ComConf_ComSignal_SGPBWakeupStat_323T) /* To prevent double declaration */
#error ComConf_ComSignal_SGPBWakeupStat_323T already defined
#endif /* #if (defined ComConf_ComSignal_SGPBWakeupStat_323T) */

#define ComConf_ComSignal_SGPBWakeupStat_323T 63U


#if (defined ComConf_ComSignal_SGTST_PhysicalRespPBU_RIO_PDU_1919T) /* To prevent double declaration */
#error ComConf_ComSignal_SGTST_PhysicalRespPBU_RIO_PDU_1919T already defined
#endif /* #if (defined ComConf_ComSignal_SGTST_PhysicalRespPBU_RIO_PDU_1919T) */

#define ComConf_ComSignal_SGTST_PhysicalRespPBU_RIO_PDU_1919T 64U


/* External Rx Group Signal IDs defines */
#if (defined ComConf_ComGroupSignal_VehMovementChecksum_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_VehMovementChecksum_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_VehMovementChecksum_78R) */

#define ComConf_ComGroupSignal_VehMovementChecksum_78R 13U


#if (defined ComConf_ComGroupSignal_VehMovementCounter_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_VehMovementCounter_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_VehMovementCounter_78R) */

#define ComConf_ComGroupSignal_VehMovementCounter_78R 14U


#if (defined ComConf_ComGroupSignal_VehMovementDirection_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_VehMovementDirection_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_VehMovementDirection_78R) */

#define ComConf_ComGroupSignal_VehMovementDirection_78R 15U


#if (defined ComConf_ComGroupSignal_VehMovementStatus_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_VehMovementStatus_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_VehMovementStatus_78R) */

#define ComConf_ComGroupSignal_VehMovementStatus_78R 16U


#if (defined ComConf_ComGroupSignal_WheelDirectionFL_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_WheelDirectionFL_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_WheelDirectionFL_78R) */

#define ComConf_ComGroupSignal_WheelDirectionFL_78R 17U


#if (defined ComConf_ComGroupSignal_WheelDirectionFR_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_WheelDirectionFR_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_WheelDirectionFR_78R) */

#define ComConf_ComGroupSignal_WheelDirectionFR_78R 18U


#if (defined ComConf_ComGroupSignal_WheelDirectionRL_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_WheelDirectionRL_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_WheelDirectionRL_78R) */

#define ComConf_ComGroupSignal_WheelDirectionRL_78R 19U


#if (defined ComConf_ComGroupSignal_WheelDirectionRR_78R) /* To prevent double declaration */
#error ComConf_ComGroupSignal_WheelDirectionRR_78R already defined
#endif /* #if (defined ComConf_ComGroupSignal_WheelDirectionRR_78R) */

#define ComConf_ComGroupSignal_WheelDirectionRR_78R 20U


/* External Tx Group Signal IDs defines */
#if (defined ComConf_ComGroupSignal_PBCriticErrGpAC_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PBCriticErrGpAC_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PBCriticErrGpAC_172T) */

#define ComConf_ComGroupSignal_PBCriticErrGpAC_172T 65U


#if (defined ComConf_ComGroupSignal_PBCriticErrGpCS_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PBCriticErrGpCS_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PBCriticErrGpCS_172T) */

#define ComConf_ComGroupSignal_PBCriticErrGpCS_172T 66U


#if (defined ComConf_ComGroupSignal_PBCriticErrProtd_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PBCriticErrProtd_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PBCriticErrProtd_172T) */

#define ComConf_ComGroupSignal_PBCriticErrProtd_172T 67U


#if (defined ComConf_ComGroupSignal_PB1FETStatus_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PB1FETStatus_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PB1FETStatus_172T) */

#define ComConf_ComGroupSignal_PB1FETStatus_172T 68U


#if (defined ComConf_ComGroupSignal_PB2Degradation_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PB2Degradation_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PB2Degradation_172T) */

#define ComConf_ComGroupSignal_PB2Degradation_172T 69U


#if (defined ComConf_ComGroupSignal_PB2FETStatus_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PB2FETStatus_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PB2FETStatus_172T) */

#define ComConf_ComGroupSignal_PB2FETStatus_172T 70U


#if (defined ComConf_ComGroupSignal_PBDegradation_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PBDegradation_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PBDegradation_172T) */

#define ComConf_ComGroupSignal_PBDegradation_172T 71U


#if (defined ComConf_ComGroupSignal_PBDegradationGpAC_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PBDegradationGpAC_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PBDegradationGpAC_172T) */

#define ComConf_ComGroupSignal_PBDegradationGpAC_172T 72U


#if (defined ComConf_ComGroupSignal_PBDegradationGpCS_172T) /* To prevent double declaration */
#error ComConf_ComGroupSignal_PBDegradationGpCS_172T already defined
#endif /* #if (defined ComConf_ComGroupSignal_PBDegradationGpCS_172T) */

#define ComConf_ComGroupSignal_PBDegradationGpCS_172T 73U


/* External Rx Signal Group IDs defines */
#if (defined ComConf_ComSignalGroup_GRVehMovement_78R) /* To prevent double declaration */
#error ComConf_ComSignalGroup_GRVehMovement_78R already defined
#endif /* #if (defined ComConf_ComSignalGroup_GRVehMovement_78R) */

#define ComConf_ComSignalGroup_GRVehMovement_78R 0U


/* External Tx Signal Group IDs defines */
#if (defined ComConf_ComSignalGroup_GRPBCriticErrGp_172T) /* To prevent double declaration */
#error ComConf_ComSignalGroup_GRPBCriticErrGp_172T already defined
#endif /* #if (defined ComConf_ComSignalGroup_GRPBCriticErrGp_172T) */

#define ComConf_ComSignalGroup_GRPBCriticErrGp_172T 0U


#if (defined ComConf_ComSignalGroup_GRPBDegradationGp_172T) /* To prevent double declaration */
#error ComConf_ComSignalGroup_GRPBDegradationGp_172T already defined
#endif /* #if (defined ComConf_ComSignalGroup_GRPBDegradationGp_172T) */

#define ComConf_ComSignalGroup_GRPBDegradationGp_172T 1U



/*------------------[symbols without prefix for backward compatibility]-----*/
#if (defined COM_PROVIDE_LEGACY_SYMBOLIC_NAMES)

/* IPDU group ID defines */

#if (defined Com_RGCanNetwork) /* To prevent double declaration */
#error Com_RGCanNetwork already defined
#endif /* #if (defined Com_RGCanNetwork) */

#define Com_RGCanNetwork ComConf_ComIPduGroup_RGCanNetwork



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
#if (defined Com_PDEVC_BCMA_PR1_Rio_10ms_78R) /* To prevent double declaration */
#error Com_PDEVC_BCMA_PR1_Rio_10ms_78R already defined
#endif /* #if (defined Com_PDEVC_BCMA_PR1_Rio_10ms_78R) */

#define Com_PDEVC_BCMA_PR1_Rio_10ms_78R ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_10ms_78R


#if (defined Com_PDEVC_BCMA_PR1_Rio_20ms_122R) /* To prevent double declaration */
#error Com_PDEVC_BCMA_PR1_Rio_20ms_122R already defined
#endif /* #if (defined Com_PDEVC_BCMA_PR1_Rio_20ms_122R) */

#define Com_PDEVC_BCMA_PR1_Rio_20ms_122R ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_20ms_122R


#if (defined Com_PDEVC_BCMA_PR1_Rio_40ms_165R) /* To prevent double declaration */
#error Com_PDEVC_BCMA_PR1_Rio_40ms_165R already defined
#endif /* #if (defined Com_PDEVC_BCMA_PR1_Rio_40ms_165R) */

#define Com_PDEVC_BCMA_PR1_Rio_40ms_165R ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_40ms_165R


#if (defined Com_PDEVC_BCMA_PR1_Rio_80ms_262R) /* To prevent double declaration */
#error Com_PDEVC_BCMA_PR1_Rio_80ms_262R already defined
#endif /* #if (defined Com_PDEVC_BCMA_PR1_Rio_80ms_262R) */

#define Com_PDEVC_BCMA_PR1_Rio_80ms_262R ComConf_ComIPdu_PDEVC_BCMA_PR1_Rio_80ms_262R


#if (defined Com_PDEVC_BCMA_PR2_Rio_80ms_267R) /* To prevent double declaration */
#error Com_PDEVC_BCMA_PR2_Rio_80ms_267R already defined
#endif /* #if (defined Com_PDEVC_BCMA_PR2_Rio_80ms_267R) */

#define Com_PDEVC_BCMA_PR2_Rio_80ms_267R ComConf_ComIPdu_PDEVC_BCMA_PR2_Rio_80ms_267R


#if (defined Com_PDVEHCONFIG__400RIO_MUX_1024R) /* To prevent double declaration */
#error Com_PDVEHCONFIG__400RIO_MUX_1024R already defined
#endif /* #if (defined Com_PDVEHCONFIG__400RIO_MUX_1024R) */

#define Com_PDVEHCONFIG__400RIO_MUX_1024R ComConf_ComIPdu_PDVEHCONFIG__400RIO_MUX_1024R


#if (defined Com_PDTST_PhysicalReqPBU_RIO_1911R) /* To prevent double declaration */
#error Com_PDTST_PhysicalReqPBU_RIO_1911R already defined
#endif /* #if (defined Com_PDTST_PhysicalReqPBU_RIO_1911R) */

#define Com_PDTST_PhysicalReqPBU_RIO_1911R ComConf_ComIPdu_PDTST_PhysicalReqPBU_RIO_1911R


#if (defined Com_PDTST_FunctionalReq_RIOBus_2015R) /* To prevent double declaration */
#error Com_PDTST_FunctionalReq_RIOBus_2015R already defined
#endif /* #if (defined Com_PDTST_FunctionalReq_RIOBus_2015R) */

#define Com_PDTST_FunctionalReq_RIOBus_2015R ComConf_ComIPdu_PDTST_FunctionalReq_RIOBus_2015R


/* External Tx IPdu defines */
#if (defined Com_PDEVC_PBU_PR1_Rio_40ms_172T) /* To prevent double declaration */
#error Com_PDEVC_PBU_PR1_Rio_40ms_172T already defined
#endif /* #if (defined Com_PDEVC_PBU_PR1_Rio_40ms_172T) */

#define Com_PDEVC_PBU_PR1_Rio_40ms_172T ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_40ms_172T


#if (defined Com_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T) /* To prevent double declaration */
#error Com_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T already defined
#endif /* #if (defined Com_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T) */

#define Com_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T ComConf_ComIPdu_PDEVC_PBU_PR1_Rio_Pdu_100ms_323T


#if (defined Com_PDTST_PhysicalRespPBU_RIO_1919T) /* To prevent double declaration */
#error Com_PDTST_PhysicalRespPBU_RIO_1919T already defined
#endif /* #if (defined Com_PDTST_PhysicalRespPBU_RIO_1919T) */

#define Com_PDTST_PhysicalRespPBU_RIO_1919T ComConf_ComIPdu_PDTST_PhysicalRespPBU_RIO_1919T


/* External Rx Signal IDs (no group signals) defines */
#if (defined Com_SGPowerPackStatus_122R) /* To prevent double declaration */
#error Com_SGPowerPackStatus_122R already defined
#endif /* #if (defined Com_SGPowerPackStatus_122R) */

#define Com_SGPowerPackStatus_122R ComConf_ComSignal_SGPowerPackStatus_122R


#if (defined Com_SGPowerPackStatus_UB_122R) /* To prevent double declaration */
#error Com_SGPowerPackStatus_UB_122R already defined
#endif /* #if (defined Com_SGPowerPackStatus_UB_122R) */

#define Com_SGPowerPackStatus_UB_122R ComConf_ComSignal_SGPowerPackStatus_UB_122R


#if (defined Com_SGCarMode_165R) /* To prevent double declaration */
#error Com_SGCarMode_165R already defined
#endif /* #if (defined Com_SGCarMode_165R) */

#define Com_SGCarMode_165R ComConf_ComSignal_SGCarMode_165R


#if (defined Com_SGPowerMode_165R) /* To prevent double declaration */
#error Com_SGPowerMode_165R already defined
#endif /* #if (defined Com_SGPowerMode_165R) */

#define Com_SGPowerMode_165R ComConf_ComSignal_SGPowerMode_165R


#if (defined Com_SGGWMEL2Threshold_262R) /* To prevent double declaration */
#error Com_SGGWMEL2Threshold_262R already defined
#endif /* #if (defined Com_SGGWMEL2Threshold_262R) */

#define Com_SGGWMEL2Threshold_262R ComConf_ComSignal_SGGWMEL2Threshold_262R


#if (defined Com_SGGWMEL3Threshold_262R) /* To prevent double declaration */
#error Com_SGGWMEL3Threshold_262R already defined
#endif /* #if (defined Com_SGGWMEL3Threshold_262R) */

#define Com_SGGWMEL3Threshold_262R ComConf_ComSignal_SGGWMEL3Threshold_262R


#if (defined Com_SGGWMWakeUpToChargeThr_262R) /* To prevent double declaration */
#error Com_SGGWMWakeUpToChargeThr_262R already defined
#endif /* #if (defined Com_SGGWMWakeUpToChargeThr_262R) */

#define Com_SGGWMWakeUpToChargeThr_262R ComConf_ComSignal_SGGWMWakeUpToChargeThr_262R


#if (defined Com_SGOdometerMasterValue_262R) /* To prevent double declaration */
#error Com_SGOdometerMasterValue_262R already defined
#endif /* #if (defined Com_SGOdometerMasterValue_262R) */

#define Com_SGOdometerMasterValue_262R ComConf_ComSignal_SGOdometerMasterValue_262R


#if (defined Com_SGOdometerMasterValue_UB_262R) /* To prevent double declaration */
#error Com_SGOdometerMasterValue_UB_262R already defined
#endif /* #if (defined Com_SGOdometerMasterValue_UB_262R) */

#define Com_SGOdometerMasterValue_UB_262R ComConf_ComSignal_SGOdometerMasterValue_UB_262R


#if (defined Com_SGSBShortVehID_262R) /* To prevent double declaration */
#error Com_SGSBShortVehID_262R already defined
#endif /* #if (defined Com_SGSBShortVehID_262R) */

#define Com_SGSBShortVehID_262R ComConf_ComSignal_SGSBShortVehID_262R


#if (defined Com_SGSOTAPrepRequest_267R) /* To prevent double declaration */
#error Com_SGSOTAPrepRequest_267R already defined
#endif /* #if (defined Com_SGSOTAPrepRequest_267R) */

#define Com_SGSOTAPrepRequest_267R ComConf_ComSignal_SGSOTAPrepRequest_267R


#if (defined Com_SGTST_PhysicalReqPBU_RIO_PDU_1911R) /* To prevent double declaration */
#error Com_SGTST_PhysicalReqPBU_RIO_PDU_1911R already defined
#endif /* #if (defined Com_SGTST_PhysicalReqPBU_RIO_PDU_1911R) */

#define Com_SGTST_PhysicalReqPBU_RIO_PDU_1911R ComConf_ComSignal_SGTST_PhysicalReqPBU_RIO_PDU_1911R


#if (defined Com_SGTST_FunctionalReq_RIO_PDU_2015R) /* To prevent double declaration */
#error Com_SGTST_FunctionalReq_RIO_PDU_2015R already defined
#endif /* #if (defined Com_SGTST_FunctionalReq_RIO_PDU_2015R) */

#define Com_SGTST_FunctionalReq_RIO_PDU_2015R ComConf_ComSignal_SGTST_FunctionalReq_RIO_PDU_2015R


/* External Tx Signal IDs (no group signals) defines */
#if (defined Com_SGPBBatCurr_172T) /* To prevent double declaration */
#error Com_SGPBBatCurr_172T already defined
#endif /* #if (defined Com_SGPBBatCurr_172T) */

#define Com_SGPBBatCurr_172T ComConf_ComSignal_SGPBBatCurr_172T


#if (defined Com_SGPBBatCurrFlt_172T) /* To prevent double declaration */
#error Com_SGPBBatCurrFlt_172T already defined
#endif /* #if (defined Com_SGPBBatCurrFlt_172T) */

#define Com_SGPBBatCurrFlt_172T ComConf_ComSignal_SGPBBatCurrFlt_172T


#if (defined Com_SGPBBatVolt_172T) /* To prevent double declaration */
#error Com_SGPBBatVolt_172T already defined
#endif /* #if (defined Com_SGPBBatVolt_172T) */

#define Com_SGPBBatVolt_172T ComConf_ComSignal_SGPBBatVolt_172T


#if (defined Com_SGPBBatVoltFlt_172T) /* To prevent double declaration */
#error Com_SGPBBatVoltFlt_172T already defined
#endif /* #if (defined Com_SGPBBatVoltFlt_172T) */

#define Com_SGPBBatVoltFlt_172T ComConf_ComSignal_SGPBBatVoltFlt_172T


#if (defined Com_SGPBCriticErr_172T) /* To prevent double declaration */
#error Com_SGPBCriticErr_172T already defined
#endif /* #if (defined Com_SGPBCriticErr_172T) */

#define Com_SGPBCriticErr_172T ComConf_ComSignal_SGPBCriticErr_172T


#if (defined Com_SGPBMaxChrgCurrLmt_172T) /* To prevent double declaration */
#error Com_SGPBMaxChrgCurrLmt_172T already defined
#endif /* #if (defined Com_SGPBMaxChrgCurrLmt_172T) */

#define Com_SGPBMaxChrgCurrLmt_172T ComConf_ComSignal_SGPBMaxChrgCurrLmt_172T


#if (defined Com_SGPBMaxChrgVoltLmt_172T) /* To prevent double declaration */
#error Com_SGPBMaxChrgVoltLmt_172T already defined
#endif /* #if (defined Com_SGPBMaxChrgVoltLmt_172T) */

#define Com_SGPBMaxChrgVoltLmt_172T ComConf_ComSignal_SGPBMaxChrgVoltLmt_172T


#if (defined Com_SGPBMaxDchgCurrLmt_172T) /* To prevent double declaration */
#error Com_SGPBMaxDchgCurrLmt_172T already defined
#endif /* #if (defined Com_SGPBMaxDchgCurrLmt_172T) */

#define Com_SGPBMaxDchgCurrLmt_172T ComConf_ComSignal_SGPBMaxDchgCurrLmt_172T


#if (defined Com_SGPBAgeing_323T) /* To prevent double declaration */
#error Com_SGPBAgeing_323T already defined
#endif /* #if (defined Com_SGPBAgeing_323T) */

#define Com_SGPBAgeing_323T ComConf_ComSignal_SGPBAgeing_323T


#if (defined Com_SGPBAhChange_323T) /* To prevent double declaration */
#error Com_SGPBAhChange_323T already defined
#endif /* #if (defined Com_SGPBAhChange_323T) */

#define Com_SGPBAhChange_323T ComConf_ComSignal_SGPBAhChange_323T


#if (defined Com_SGPBAliveCounter_323T) /* To prevent double declaration */
#error Com_SGPBAliveCounter_323T already defined
#endif /* #if (defined Com_SGPBAliveCounter_323T) */

#define Com_SGPBAliveCounter_323T ComConf_ComSignal_SGPBAliveCounter_323T


#if (defined Com_SGPBBalActvCell1_323T) /* To prevent double declaration */
#error Com_SGPBBalActvCell1_323T already defined
#endif /* #if (defined Com_SGPBBalActvCell1_323T) */

#define Com_SGPBBalActvCell1_323T ComConf_ComSignal_SGPBBalActvCell1_323T


#if (defined Com_SGPBBalActvCell2_323T) /* To prevent double declaration */
#error Com_SGPBBalActvCell2_323T already defined
#endif /* #if (defined Com_SGPBBalActvCell2_323T) */

#define Com_SGPBBalActvCell2_323T ComConf_ComSignal_SGPBBalActvCell2_323T


#if (defined Com_SGPBBalActvCell3_323T) /* To prevent double declaration */
#error Com_SGPBBalActvCell3_323T already defined
#endif /* #if (defined Com_SGPBBalActvCell3_323T) */

#define Com_SGPBBalActvCell3_323T ComConf_ComSignal_SGPBBalActvCell3_323T


#if (defined Com_SGPBBalActvCell4_323T) /* To prevent double declaration */
#error Com_SGPBBalActvCell4_323T already defined
#endif /* #if (defined Com_SGPBBalActvCell4_323T) */

#define Com_SGPBBalActvCell4_323T ComConf_ComSignal_SGPBBalActvCell4_323T


#if (defined Com_SGPBBattQd_323T) /* To prevent double declaration */
#error Com_SGPBBattQd_323T already defined
#endif /* #if (defined Com_SGPBBattQd_323T) */

#define Com_SGPBBattQd_323T ComConf_ComSignal_SGPBBattQd_323T


#if (defined Com_SGPBCell1Volt_323T) /* To prevent double declaration */
#error Com_SGPBCell1Volt_323T already defined
#endif /* #if (defined Com_SGPBCell1Volt_323T) */

#define Com_SGPBCell1Volt_323T ComConf_ComSignal_SGPBCell1Volt_323T


#if (defined Com_SGPBCell1VoltFlt_323T) /* To prevent double declaration */
#error Com_SGPBCell1VoltFlt_323T already defined
#endif /* #if (defined Com_SGPBCell1VoltFlt_323T) */

#define Com_SGPBCell1VoltFlt_323T ComConf_ComSignal_SGPBCell1VoltFlt_323T


#if (defined Com_SGPBCell2Volt_323T) /* To prevent double declaration */
#error Com_SGPBCell2Volt_323T already defined
#endif /* #if (defined Com_SGPBCell2Volt_323T) */

#define Com_SGPBCell2Volt_323T ComConf_ComSignal_SGPBCell2Volt_323T


#if (defined Com_SGPBCell2VoltFlt_323T) /* To prevent double declaration */
#error Com_SGPBCell2VoltFlt_323T already defined
#endif /* #if (defined Com_SGPBCell2VoltFlt_323T) */

#define Com_SGPBCell2VoltFlt_323T ComConf_ComSignal_SGPBCell2VoltFlt_323T


#if (defined Com_SGPBCell3Volt_323T) /* To prevent double declaration */
#error Com_SGPBCell3Volt_323T already defined
#endif /* #if (defined Com_SGPBCell3Volt_323T) */

#define Com_SGPBCell3Volt_323T ComConf_ComSignal_SGPBCell3Volt_323T


#if (defined Com_SGPBCell3VoltFlt_323T) /* To prevent double declaration */
#error Com_SGPBCell3VoltFlt_323T already defined
#endif /* #if (defined Com_SGPBCell3VoltFlt_323T) */

#define Com_SGPBCell3VoltFlt_323T ComConf_ComSignal_SGPBCell3VoltFlt_323T


#if (defined Com_SGPBCell4Volt_323T) /* To prevent double declaration */
#error Com_SGPBCell4Volt_323T already defined
#endif /* #if (defined Com_SGPBCell4Volt_323T) */

#define Com_SGPBCell4Volt_323T ComConf_ComSignal_SGPBCell4Volt_323T


#if (defined Com_SGPBCell4VoltFlt_323T) /* To prevent double declaration */
#error Com_SGPBCell4VoltFlt_323T already defined
#endif /* #if (defined Com_SGPBCell4VoltFlt_323T) */

#define Com_SGPBCell4VoltFlt_323T ComConf_ComSignal_SGPBCell4VoltFlt_323T


#if (defined Com_SGPBCpctyAbsolute_323T) /* To prevent double declaration */
#error Com_SGPBCpctyAbsolute_323T already defined
#endif /* #if (defined Com_SGPBCpctyAbsolute_323T) */

#define Com_SGPBCpctyAbsolute_323T ComConf_ComSignal_SGPBCpctyAbsolute_323T


#if (defined Com_SGPBCpctyRelative_323T) /* To prevent double declaration */
#error Com_SGPBCpctyRelative_323T already defined
#endif /* #if (defined Com_SGPBCpctyRelative_323T) */

#define Com_SGPBCpctyRelative_323T ComConf_ComSignal_SGPBCpctyRelative_323T


#if (defined Com_SGPBECUFlt_323T) /* To prevent double declaration */
#error Com_SGPBECUFlt_323T already defined
#endif /* #if (defined Com_SGPBECUFlt_323T) */

#define Com_SGPBECUFlt_323T ComConf_ComSignal_SGPBECUFlt_323T


#if (defined Com_SGPBECUSerial_323T) /* To prevent double declaration */
#error Com_SGPBECUSerial_323T already defined
#endif /* #if (defined Com_SGPBECUSerial_323T) */

#define Com_SGPBECUSerial_323T ComConf_ComSignal_SGPBECUSerial_323T


#if (defined Com_SGPBErsoStatus_323T) /* To prevent double declaration */
#error Com_SGPBErsoStatus_323T already defined
#endif /* #if (defined Com_SGPBErsoStatus_323T) */

#define Com_SGPBErsoStatus_323T ComConf_ComSignal_SGPBErsoStatus_323T


#if (defined Com_SGPBMinBatCurr_323T) /* To prevent double declaration */
#error Com_SGPBMinBatCurr_323T already defined
#endif /* #if (defined Com_SGPBMinBatCurr_323T) */

#define Com_SGPBMinBatCurr_323T ComConf_ComSignal_SGPBMinBatCurr_323T


#if (defined Com_SGPBMinBatVolt_323T) /* To prevent double declaration */
#error Com_SGPBMinBatVolt_323T already defined
#endif /* #if (defined Com_SGPBMinBatVolt_323T) */

#define Com_SGPBMinBatVolt_323T ComConf_ComSignal_SGPBMinBatVolt_323T


#if (defined Com_SGPBMinCrnkSOCLmt_323T) /* To prevent double declaration */
#error Com_SGPBMinCrnkSOCLmt_323T already defined
#endif /* #if (defined Com_SGPBMinCrnkSOCLmt_323T) */

#define Com_SGPBMinCrnkSOCLmt_323T ComConf_ComSignal_SGPBMinCrnkSOCLmt_323T


#if (defined Com_SGPBPackVolt_323T) /* To prevent double declaration */
#error Com_SGPBPackVolt_323T already defined
#endif /* #if (defined Com_SGPBPackVolt_323T) */

#define Com_SGPBPackVolt_323T ComConf_ComSignal_SGPBPackVolt_323T


#if (defined Com_SGPBPackVoltFlt_323T) /* To prevent double declaration */
#error Com_SGPBPackVoltFlt_323T already defined
#endif /* #if (defined Com_SGPBPackVoltFlt_323T) */

#define Com_SGPBPackVoltFlt_323T ComConf_ComSignal_SGPBPackVoltFlt_323T


#if (defined Com_SGPBParkingTime_323T) /* To prevent double declaration */
#error Com_SGPBParkingTime_323T already defined
#endif /* #if (defined Com_SGPBParkingTime_323T) */

#define Com_SGPBParkingTime_323T ComConf_ComSignal_SGPBParkingTime_323T


#if (defined Com_SGPBPos1Temp_323T) /* To prevent double declaration */
#error Com_SGPBPos1Temp_323T already defined
#endif /* #if (defined Com_SGPBPos1Temp_323T) */

#define Com_SGPBPos1Temp_323T ComConf_ComSignal_SGPBPos1Temp_323T


#if (defined Com_SGPBPos1TempFlt_323T) /* To prevent double declaration */
#error Com_SGPBPos1TempFlt_323T already defined
#endif /* #if (defined Com_SGPBPos1TempFlt_323T) */

#define Com_SGPBPos1TempFlt_323T ComConf_ComSignal_SGPBPos1TempFlt_323T


#if (defined Com_SGPBPos2Temp_323T) /* To prevent double declaration */
#error Com_SGPBPos2Temp_323T already defined
#endif /* #if (defined Com_SGPBPos2Temp_323T) */

#define Com_SGPBPos2Temp_323T ComConf_ComSignal_SGPBPos2Temp_323T


#if (defined Com_SGPBPos2TempFlt_323T) /* To prevent double declaration */
#error Com_SGPBPos2TempFlt_323T already defined
#endif /* #if (defined Com_SGPBPos2TempFlt_323T) */

#define Com_SGPBPos2TempFlt_323T ComConf_ComSignal_SGPBPos2TempFlt_323T


#if (defined Com_SGPBQChaRideCn_323T) /* To prevent double declaration */
#error Com_SGPBQChaRideCn_323T already defined
#endif /* #if (defined Com_SGPBQChaRideCn_323T) */

#define Com_SGPBQChaRideCn_323T ComConf_ComSignal_SGPBQChaRideCn_323T


#if (defined Com_SGPBQChaRunCn_323T) /* To prevent double declaration */
#error Com_SGPBQChaRunCn_323T already defined
#endif /* #if (defined Com_SGPBQChaRunCn_323T) */

#define Com_SGPBQChaRunCn_323T ComConf_ComSignal_SGPBQChaRunCn_323T


#if (defined Com_SGPBQDchActCn_323T) /* To prevent double declaration */
#error Com_SGPBQDchActCn_323T already defined
#endif /* #if (defined Com_SGPBQDchActCn_323T) */

#define Com_SGPBQDchActCn_323T ComConf_ComSignal_SGPBQDchActCn_323T


#if (defined Com_SGPBQDchActHiCn_323T) /* To prevent double declaration */
#error Com_SGPBQDchActHiCn_323T already defined
#endif /* #if (defined Com_SGPBQDchActHiCn_323T) */

#define Com_SGPBQDchActHiCn_323T ComConf_ComSignal_SGPBQDchActHiCn_323T


#if (defined Com_SGPBQDchEcoStpCn_323T) /* To prevent double declaration */
#error Com_SGPBQDchEcoStpCn_323T already defined
#endif /* #if (defined Com_SGPBQDchEcoStpCn_323T) */

#define Com_SGPBQDchEcoStpCn_323T ComConf_ComSignal_SGPBQDchEcoStpCn_323T


#if (defined Com_SGPBQDchQdCn_323T) /* To prevent double declaration */
#error Com_SGPBQDchQdCn_323T already defined
#endif /* #if (defined Com_SGPBQDchQdCn_323T) */

#define Com_SGPBQDchQdCn_323T ComConf_ComSignal_SGPBQDchQdCn_323T


#if (defined Com_SGPBQDchaRideCn_323T) /* To prevent double declaration */
#error Com_SGPBQDchaRideCn_323T already defined
#endif /* #if (defined Com_SGPBQDchaRideCn_323T) */

#define Com_SGPBQDchaRideCn_323T ComConf_ComSignal_SGPBQDchaRideCn_323T


#if (defined Com_SGPBQDchaRunCn_323T) /* To prevent double declaration */
#error Com_SGPBQDchaRunCn_323T already defined
#endif /* #if (defined Com_SGPBQDchaRunCn_323T) */

#define Com_SGPBQDchaRunCn_323T ComConf_ComSignal_SGPBQDchaRunCn_323T


#if (defined Com_SGPBRelayClsFlt_323T) /* To prevent double declaration */
#error Com_SGPBRelayClsFlt_323T already defined
#endif /* #if (defined Com_SGPBRelayClsFlt_323T) */

#define Com_SGPBRelayClsFlt_323T ComConf_ComSignal_SGPBRelayClsFlt_323T


#if (defined Com_SGPBRelayOpenFlt_323T) /* To prevent double declaration */
#error Com_SGPBRelayOpenFlt_323T already defined
#endif /* #if (defined Com_SGPBRelayOpenFlt_323T) */

#define Com_SGPBRelayOpenFlt_323T ComConf_ComSignal_SGPBRelayOpenFlt_323T


#if (defined Com_SGPBRelayStatus_323T) /* To prevent double declaration */
#error Com_SGPBRelayStatus_323T already defined
#endif /* #if (defined Com_SGPBRelayStatus_323T) */

#define Com_SGPBRelayStatus_323T ComConf_ComSignal_SGPBRelayStatus_323T


#if (defined Com_SGPBSOHCapFade_323T) /* To prevent double declaration */
#error Com_SGPBSOHCapFade_323T already defined
#endif /* #if (defined Com_SGPBSOHCapFade_323T) */

#define Com_SGPBSOHCapFade_323T ComConf_ComSignal_SGPBSOHCapFade_323T


#if (defined Com_SGPBSOHImpGrowth_323T) /* To prevent double declaration */
#error Com_SGPBSOHImpGrowth_323T already defined
#endif /* #if (defined Com_SGPBSOHImpGrowth_323T) */

#define Com_SGPBSOHImpGrowth_323T ComConf_ComSignal_SGPBSOHImpGrowth_323T


#if (defined Com_SGPBSOHImpedanceAbs_323T) /* To prevent double declaration */
#error Com_SGPBSOHImpedanceAbs_323T already defined
#endif /* #if (defined Com_SGPBSOHImpedanceAbs_323T) */

#define Com_SGPBSOHImpedanceAbs_323T ComConf_ComSignal_SGPBSOHImpedanceAbs_323T


#if (defined Com_SGPBSWVer_323T) /* To prevent double declaration */
#error Com_SGPBSWVer_323T already defined
#endif /* #if (defined Com_SGPBSWVer_323T) */

#define Com_SGPBSWVer_323T ComConf_ComSignal_SGPBSWVer_323T


#if (defined Com_SGPBSoCAbsolute_323T) /* To prevent double declaration */
#error Com_SGPBSoCAbsolute_323T already defined
#endif /* #if (defined Com_SGPBSoCAbsolute_323T) */

#define Com_SGPBSoCAbsolute_323T ComConf_ComSignal_SGPBSoCAbsolute_323T


#if (defined Com_SGPBSoCRelative_323T) /* To prevent double declaration */
#error Com_SGPBSoCRelative_323T already defined
#endif /* #if (defined Com_SGPBSoCRelative_323T) */

#define Com_SGPBSoCRelative_323T ComConf_ComSignal_SGPBSoCRelative_323T


#if (defined Com_SGPBTIS_323T) /* To prevent double declaration */
#error Com_SGPBTIS_323T already defined
#endif /* #if (defined Com_SGPBTIS_323T) */

#define Com_SGPBTIS_323T ComConf_ComSignal_SGPBTIS_323T


#if (defined Com_SGPBTOCReq_323T) /* To prevent double declaration */
#error Com_SGPBTOCReq_323T already defined
#endif /* #if (defined Com_SGPBTOCReq_323T) */

#define Com_SGPBTOCReq_323T ComConf_ComSignal_SGPBTOCReq_323T


#if (defined Com_SGPBVehCount_323T) /* To prevent double declaration */
#error Com_SGPBVehCount_323T already defined
#endif /* #if (defined Com_SGPBVehCount_323T) */

#define Com_SGPBVehCount_323T ComConf_ComSignal_SGPBVehCount_323T


#if (defined Com_SGPBVehQd_323T) /* To prevent double declaration */
#error Com_SGPBVehQd_323T already defined
#endif /* #if (defined Com_SGPBVehQd_323T) */

#define Com_SGPBVehQd_323T ComConf_ComSignal_SGPBVehQd_323T


#if (defined Com_SGPBWURLowChargeLmt_323T) /* To prevent double declaration */
#error Com_SGPBWURLowChargeLmt_323T already defined
#endif /* #if (defined Com_SGPBWURLowChargeLmt_323T) */

#define Com_SGPBWURLowChargeLmt_323T ComConf_ComSignal_SGPBWURLowChargeLmt_323T


#if (defined Com_SGPBWURMinChargeLmt_323T) /* To prevent double declaration */
#error Com_SGPBWURMinChargeLmt_323T already defined
#endif /* #if (defined Com_SGPBWURMinChargeLmt_323T) */

#define Com_SGPBWURMinChargeLmt_323T ComConf_ComSignal_SGPBWURMinChargeLmt_323T


#if (defined Com_SGPBWakeUpToChgReq_323T) /* To prevent double declaration */
#error Com_SGPBWakeUpToChgReq_323T already defined
#endif /* #if (defined Com_SGPBWakeUpToChgReq_323T) */

#define Com_SGPBWakeUpToChgReq_323T ComConf_ComSignal_SGPBWakeUpToChgReq_323T


#if (defined Com_SGPBWakeupStat_323T) /* To prevent double declaration */
#error Com_SGPBWakeupStat_323T already defined
#endif /* #if (defined Com_SGPBWakeupStat_323T) */

#define Com_SGPBWakeupStat_323T ComConf_ComSignal_SGPBWakeupStat_323T


#if (defined Com_SGTST_PhysicalRespPBU_RIO_PDU_1919T) /* To prevent double declaration */
#error Com_SGTST_PhysicalRespPBU_RIO_PDU_1919T already defined
#endif /* #if (defined Com_SGTST_PhysicalRespPBU_RIO_PDU_1919T) */

#define Com_SGTST_PhysicalRespPBU_RIO_PDU_1919T ComConf_ComSignal_SGTST_PhysicalRespPBU_RIO_PDU_1919T


/* External Rx Group Signal IDs defines */
#if (defined Com_VehMovementChecksum_78R) /* To prevent double declaration */
#error Com_VehMovementChecksum_78R already defined
#endif /* #if (defined Com_VehMovementChecksum_78R) */

#define Com_VehMovementChecksum_78R ComConf_ComGroupSignal_VehMovementChecksum_78R


#if (defined Com_VehMovementCounter_78R) /* To prevent double declaration */
#error Com_VehMovementCounter_78R already defined
#endif /* #if (defined Com_VehMovementCounter_78R) */

#define Com_VehMovementCounter_78R ComConf_ComGroupSignal_VehMovementCounter_78R


#if (defined Com_VehMovementDirection_78R) /* To prevent double declaration */
#error Com_VehMovementDirection_78R already defined
#endif /* #if (defined Com_VehMovementDirection_78R) */

#define Com_VehMovementDirection_78R ComConf_ComGroupSignal_VehMovementDirection_78R


#if (defined Com_VehMovementStatus_78R) /* To prevent double declaration */
#error Com_VehMovementStatus_78R already defined
#endif /* #if (defined Com_VehMovementStatus_78R) */

#define Com_VehMovementStatus_78R ComConf_ComGroupSignal_VehMovementStatus_78R


#if (defined Com_WheelDirectionFL_78R) /* To prevent double declaration */
#error Com_WheelDirectionFL_78R already defined
#endif /* #if (defined Com_WheelDirectionFL_78R) */

#define Com_WheelDirectionFL_78R ComConf_ComGroupSignal_WheelDirectionFL_78R


#if (defined Com_WheelDirectionFR_78R) /* To prevent double declaration */
#error Com_WheelDirectionFR_78R already defined
#endif /* #if (defined Com_WheelDirectionFR_78R) */

#define Com_WheelDirectionFR_78R ComConf_ComGroupSignal_WheelDirectionFR_78R


#if (defined Com_WheelDirectionRL_78R) /* To prevent double declaration */
#error Com_WheelDirectionRL_78R already defined
#endif /* #if (defined Com_WheelDirectionRL_78R) */

#define Com_WheelDirectionRL_78R ComConf_ComGroupSignal_WheelDirectionRL_78R


#if (defined Com_WheelDirectionRR_78R) /* To prevent double declaration */
#error Com_WheelDirectionRR_78R already defined
#endif /* #if (defined Com_WheelDirectionRR_78R) */

#define Com_WheelDirectionRR_78R ComConf_ComGroupSignal_WheelDirectionRR_78R


/* External Tx Group Signal IDs defines */
#if (defined Com_PBCriticErrGpAC_172T) /* To prevent double declaration */
#error Com_PBCriticErrGpAC_172T already defined
#endif /* #if (defined Com_PBCriticErrGpAC_172T) */

#define Com_PBCriticErrGpAC_172T ComConf_ComGroupSignal_PBCriticErrGpAC_172T


#if (defined Com_PBCriticErrGpCS_172T) /* To prevent double declaration */
#error Com_PBCriticErrGpCS_172T already defined
#endif /* #if (defined Com_PBCriticErrGpCS_172T) */

#define Com_PBCriticErrGpCS_172T ComConf_ComGroupSignal_PBCriticErrGpCS_172T


#if (defined Com_PBCriticErrProtd_172T) /* To prevent double declaration */
#error Com_PBCriticErrProtd_172T already defined
#endif /* #if (defined Com_PBCriticErrProtd_172T) */

#define Com_PBCriticErrProtd_172T ComConf_ComGroupSignal_PBCriticErrProtd_172T


#if (defined Com_PB1FETStatus_172T) /* To prevent double declaration */
#error Com_PB1FETStatus_172T already defined
#endif /* #if (defined Com_PB1FETStatus_172T) */

#define Com_PB1FETStatus_172T ComConf_ComGroupSignal_PB1FETStatus_172T


#if (defined Com_PB2Degradation_172T) /* To prevent double declaration */
#error Com_PB2Degradation_172T already defined
#endif /* #if (defined Com_PB2Degradation_172T) */

#define Com_PB2Degradation_172T ComConf_ComGroupSignal_PB2Degradation_172T


#if (defined Com_PB2FETStatus_172T) /* To prevent double declaration */
#error Com_PB2FETStatus_172T already defined
#endif /* #if (defined Com_PB2FETStatus_172T) */

#define Com_PB2FETStatus_172T ComConf_ComGroupSignal_PB2FETStatus_172T


#if (defined Com_PBDegradation_172T) /* To prevent double declaration */
#error Com_PBDegradation_172T already defined
#endif /* #if (defined Com_PBDegradation_172T) */

#define Com_PBDegradation_172T ComConf_ComGroupSignal_PBDegradation_172T


#if (defined Com_PBDegradationGpAC_172T) /* To prevent double declaration */
#error Com_PBDegradationGpAC_172T already defined
#endif /* #if (defined Com_PBDegradationGpAC_172T) */

#define Com_PBDegradationGpAC_172T ComConf_ComGroupSignal_PBDegradationGpAC_172T


#if (defined Com_PBDegradationGpCS_172T) /* To prevent double declaration */
#error Com_PBDegradationGpCS_172T already defined
#endif /* #if (defined Com_PBDegradationGpCS_172T) */

#define Com_PBDegradationGpCS_172T ComConf_ComGroupSignal_PBDegradationGpCS_172T


/* External Rx Signal Group IDs defines */
#if (defined Com_GRVehMovement_78R) /* To prevent double declaration */
#error Com_GRVehMovement_78R already defined
#endif /* #if (defined Com_GRVehMovement_78R) */

#define Com_GRVehMovement_78R ComConf_ComSignalGroup_GRVehMovement_78R


/* External Tx Signal Group IDs defines */
#if (defined Com_GRPBCriticErrGp_172T) /* To prevent double declaration */
#error Com_GRPBCriticErrGp_172T already defined
#endif /* #if (defined Com_GRPBCriticErrGp_172T) */

#define Com_GRPBCriticErrGp_172T ComConf_ComSignalGroup_GRPBCriticErrGp_172T


#if (defined Com_GRPBDegradationGp_172T) /* To prevent double declaration */
#error Com_GRPBDegradationGp_172T already defined
#endif /* #if (defined Com_GRPBDegradationGp_172T) */

#define Com_GRPBDegradationGp_172T ComConf_ComSignalGroup_GRPBDegradationGp_172T


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
