#ifndef RTE_INTERN_H
#define RTE_INTERN_H
/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \version 6.8.4
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
 * This file contains internal Rte declarations
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Wed Sep 06 18:13:48 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ==================[Includes]=============================================== */
#include <Os.h>
#include <TSMem.h>
#include <Atomics.h>
#include <Rte_Type.h>
#include <Com.h>
#include <Rte_Cbk.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#define RTE_XFRM_ERROR_SERVERITY_MASK 0x80U
#define RTE_XFRM_IS_HARD_ERROR(x) (((x) & RTE_XFRM_ERROR_SERVERITY_MASK) != 0U)
#define RTE_XFRM_IS_SOFT_ERROR(x) (((x) != E_OK) && (((x) & RTE_XFRM_ERROR_SERVERITY_MASK) == 0U))
#define RTE_XFRM_UPDATE_STATUS_AND_XFRM_ERROR(xfrmErrorCode, status, xfrmError, xfrmClass) \
    do { \
    if ((xfrmErrorCode) != E_OK) \
    { \
    if (((xfrmErrorCode) & RTE_XFRM_ERROR_SERVERITY_MASK) != 0U) \
    { \
    (status) = RTE_E_HARD_TRANSFORMER_ERROR; \
    (xfrmError).transformerClass = (xfrmClass); \
    (xfrmError).errorCode = (xfrmErrorCode); \
    } \
    else if ((status) == E_OK) \
    { \
    (status) = RTE_E_SOFT_TRANSFORMER_ERROR; \
    (xfrmError).transformerClass = (xfrmClass); \
    (xfrmError).errorCode = (xfrmErrorCode); \
    } \
    else \
    { \
    /* no action required (see MISRA rule 14.10) */ \
    } \
    } \
    \
    } while (0)
#define RTE_XFRM_UPDATE_STATUS(xfrmErrorCode, status) \
    do { \
    if ((xfrmErrorCode) != E_OK) \
    { \
    if (((xfrmErrorCode) & RTE_XFRM_ERROR_SERVERITY_MASK) != 0U) \
    { \
    (status) = RTE_E_HARD_TRANSFORMER_ERROR; \
    } \
    else if ((status) == E_OK) \
    { \
    (status) = RTE_E_SOFT_TRANSFORMER_ERROR; \
    } \
    else \
    { \
    /* no action required (see MISRA rule 14.10) */ \
    } \
    } \
    \
    } while (0)
#ifdef OS_NsToTicks_HwCounter
#define RTE_NS_TO_TICKS OS_NsToTicks_HwCounter
#else
#define RTE_NS_TO_TICKS(ns) ((TickType)((ns) / 25))
#endif
#define Rte_StartScheduleTable_SchM_DefaultScheduleTable() StartScheduleTableRel(SchM_DefaultScheduleTable, 400000U)
#define Rte_StartScheduleTable_Rte_DefaultScheduleTable() StartScheduleTableRel(Rte_DefaultScheduleTable, 400000U)
#define Rte_SetEvent_DRE_8A730602D267F5074564E9C3C0C4F41A() \
    do { \
    Rte_Task_SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_8A730602D267F5074564E9C3C0C4F41A); \
    (void)SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_8A730602D267F5074564E9C3C0C4F41A); \
    \
    } while (0)
#define Rte_SetEvent_MSE_DB14A82EC870A2287F9736669E739E42() \
    do { \
    Rte_Task_SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_MSE_DB14A82EC870A2287F9736669E739E42); \
    (void)SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_MSE_DB14A82EC870A2287F9736669E739E42); \
    \
    } while (0)
#define Rte_SetEvent_MSE_1E3BA96972F6352754D1659D8F1E5B6B() \
    do { \
    Rte_Task_SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_1E3BA96972F6352754D1659D8F1E5B6B); \
    (void)SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_1E3BA96972F6352754D1659D8F1E5B6B); \
    \
    } while (0)
#define Rte_SetEvent_MSE_1D9477AD6BFD7572B479646A93CA47F7() \
    do { \
    Rte_Task_SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_1D9477AD6BFD7572B479646A93CA47F7); \
    (void)SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_1D9477AD6BFD7572B479646A93CA47F7); \
    \
    } while (0)
#define Rte_SetEvent_MSE_B9B20196EED3DF85BF827C21CF3A8A38() \
    do { \
    Rte_Task_SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_B9B20196EED3DF85BF827C21CF3A8A38); \
    (void)SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_B9B20196EED3DF85BF827C21CF3A8A38); \
    \
    } while (0)
#define Rte_SetEvent_MSE_A0B39ADC998DCBFC9FEDC9C44553C764() \
    do { \
    Rte_Task_SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_A0B39ADC998DCBFC9FEDC9C44553C764); \
    (void)SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_A0B39ADC998DCBFC9FEDC9C44553C764); \
    \
    } while (0)
#define Rte_SetEvent_MSE_BD1D019BDBF1F0D852395BC522AA98CE() \
    do { \
    Rte_Task_SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_BD1D019BDBF1F0D852395BC522AA98CE); \
    (void)SetEvent(TASK_RTE_ModeSwitchEvent, Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_BD1D019BDBF1F0D852395BC522AA98CE); \
    \
    } while (0)
#define Rte_SetEvent_DRE_2473347BF9B6AE15429D27E0459AFBC6() \
    do { \
    Rte_Task_SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_2473347BF9B6AE15429D27E0459AFBC6); \
    (void)SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_2473347BF9B6AE15429D27E0459AFBC6); \
    \
    } while (0)
#define Rte_SetEvent_DRE_79814614D8B02944CBB412B318DA1EDD() \
    do { \
    Rte_Task_SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_79814614D8B02944CBB412B318DA1EDD); \
    (void)SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_79814614D8B02944CBB412B318DA1EDD); \
    \
    } while (0)
#define Rte_SetEvent_DRE_4650FA0144082B5FCC32B6CB82463B28() \
    do { \
    Rte_Task_SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_4650FA0144082B5FCC32B6CB82463B28); \
    (void)SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_4650FA0144082B5FCC32B6CB82463B28); \
    \
    } while (0)
#define Rte_SetEvent_DRE_87FF1E90955AB02FBCF7374E77F1780A() \
    do { \
    Rte_Task_SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_87FF1E90955AB02FBCF7374E77F1780A); \
    (void)SetEvent(Rte_Event_Task, Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_87FF1E90955AB02FBCF7374E77F1780A); \
    \
    } while (0)
#ifndef ComConf_ComSignal_SGCounterIn_256R
#define ComConf_ComSignal_SGCounterIn_256R 0U
#endif
#ifndef ComConf_ComSignal_SGCounterIn_CAN_FD_257R
#define ComConf_ComSignal_SGCounterIn_CAN_FD_257R 1U
#endif
#ifndef ComConf_ComSignal_SGNm_SignalIn_592R
#define ComConf_ComSignal_SGNm_SignalIn_592R 2U
#endif
#ifndef ComConf_ComSignal_SGSecuredDataIn_281R
#define ComConf_ComSignal_SGSecuredDataIn_281R 3U
#endif
#ifndef ComConf_ComSignal_SGCanNmPnEiraRxNSdu
#define ComConf_ComSignal_SGCanNmPnEiraRxNSdu 4U
#endif
#ifndef ComConf_ComSignal_SGCounterOut_272T
#define ComConf_ComSignal_SGCounterOut_272T 0U
#endif
#ifndef ComConf_ComSignal_SGCounterOut_CAN_FD_273T
#define ComConf_ComSignal_SGCounterOut_CAN_FD_273T 1U
#endif
#ifndef ComConf_ComSignal_SGNm_SignalOut_593T
#define ComConf_ComSignal_SGNm_SignalOut_593T 2U
#endif
#ifndef ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu
#define ComConf_ComSignal_SGCanNetworkNmPnIraTxNSdu 3U
#endif
#ifndef ComConf_ComSignal_SGSecuredDataOut_285T
#define ComConf_ComSignal_SGSecuredDataOut_285T 4U
#endif
#ifndef ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R
#define ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataIn_280R 0U
#endif
#ifndef ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R
#define ComConf_ComGroupSignal_SafetyE2E_DataIn_CRC_280R 5U
#endif
#ifndef ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R
#define ComConf_ComGroupSignal_SafetyE2E_DataIn_SQC_Counter_280R 6U
#endif
#ifndef ComConf_ComGroupSignal_SafetyE2E_DataIn_280R
#define ComConf_ComGroupSignal_SafetyE2E_DataIn_280R 7U
#endif
#ifndef ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T
#define ComConf_ComSignalGroup_GRsigGroup_E2EProt_DataOut_284T 0U
#endif
#ifndef ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T
#define ComConf_ComGroupSignal_SafetyE2E_DataOut_CRC_284T 5U
#endif
#ifndef ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T
#define ComConf_ComGroupSignal_SafetyE2E_DataOut_SQC_Counter_284T 6U
#endif
#ifndef ComConf_ComGroupSignal_SafetyE2E_DataOut_284T
#define ComConf_ComGroupSignal_SafetyE2E_DataOut_284T 7U
#endif
#define Rte_IntLock() SuspendAllInterrupts()
#define Rte_IntUnlock() ResumeAllInterrupts()
#define RTE_PARTITION_UNINITIALIZED 0x0U
#define RTE_PARTITION_ACTIVE 0x1U
#define RTE_PARTITION_STOPPED 0x2U
#define RTE_PARTITION_TERMINATED 0x3U
#define RTE_PARTITION_RESTARTING 0x4U
#define RTE_PARTITION_STARTING 0x5U
#define SCHM_PARTITION_UNINITIALIZED 0xAU
#define SCHM_PARTITION_ACTIVE 0xBU
#define SCHM_PARTITION_STOPPED 0xCU
#define SCHM_PARTITION_STARTING 0xDU
#define RTE_TRANSITION_BswM_BSWM_BswMModeGroup 9U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_A 0U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_B 1U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_POST_RUN 2U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_PRP_SHUTDOWN 3U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_RUN_TWO 4U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_SLEEP 5U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_A 6U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_B 7U
#define RTE_MODE_BswM_BSWM_BswMModeGroup_EB_INTGR_BSWM_WAKEUP_TWO 8U
#define RTE_TRANSITION_BswM_BSWM_AppStateModeGroup 9U
#define RTE_MODE_BswM_BSWM_AppStateModeGroup_EB_INTGR_APP_STARTUP 1U
#define RTE_MODE_BswM_BSWM_AppStateModeGroup_EB_INTGR_APP_ACTIVE 2U
#define RTE_MODE_BswM_BSWM_AppStateModeGroup_EB_INTGR_APP_INACTIVE 3U
#define RTE_MODE_BswM_BSWM_AppStateModeGroup_EB_INTGR_APP_SLEEP 4U
#define RTE_MODE_BswM_BSWM_AppStateModeGroup_EB_INTGR_APP_WAKEUP 5U
#define RTE_TRANSITION_ComM_ComMMode 3U
#define RTE_MODE_ComM_ComMMode_COMM_NO_COMMUNICATION 0U
#define RTE_MODE_ComM_ComMMode_COMM_SILENT_COMMUNICATION 1U
#define RTE_MODE_ComM_ComMMode_COMM_FULL_COMMUNICATION 2U
#define RTE_TRANSITION_SWC_AppStateHandler_AppStateModeGroup 9U
#define RTE_MODE_SWC_AppStateHandler_AppStateModeGroup_EB_INTGR_APP_STARTUP 1U
#define RTE_MODE_SWC_AppStateHandler_AppStateModeGroup_EB_INTGR_APP_ACTIVE 2U
#define RTE_MODE_SWC_AppStateHandler_AppStateModeGroup_EB_INTGR_APP_INACTIVE 3U
#define RTE_MODE_SWC_AppStateHandler_AppStateModeGroup_EB_INTGR_APP_SLEEP 4U
#define RTE_MODE_SWC_AppStateHandler_AppStateModeGroup_EB_INTGR_APP_WAKEUP 5U
#define RTE_TRANSITION_SWC_CyclicCounter_BswMModeGroup 9U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_A 0U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_B 1U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_POST_RUN 2U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_PRP_SHUTDOWN 3U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_RUN_TWO 4U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_SLEEP 5U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_A 6U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_B 7U
#define RTE_MODE_SWC_CyclicCounter_BswMModeGroup_EB_INTGR_BSWM_WAKEUP_TWO 8U
#define RTE_TRANSITION_Dcm_DcmDiagnosticSessionControl 0U
#define RTE_MODE_Dcm_DcmDiagnosticSessionControl_Default 1U
#define RTE_MODE_Dcm_DcmDiagnosticSessionControl_Programming 2U
#define RTE_MODE_Dcm_DcmDiagnosticSessionControl_Extended 3U
#define RTE_TRANSITION_Dcm_DcmEcuReset 7U
#define RTE_MODE_Dcm_DcmEcuReset_EXECUTE 0U
#define RTE_MODE_Dcm_DcmEcuReset_HARD 1U
#define RTE_MODE_Dcm_DcmEcuReset_JUMPTOBOOTLOADER 2U
#define RTE_MODE_Dcm_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER 3U
#define RTE_MODE_Dcm_DcmEcuReset_KEYONOFF 4U
#define RTE_MODE_Dcm_DcmEcuReset_NONE 5U
#define RTE_MODE_Dcm_DcmEcuReset_SOFT 6U
#define RTE_TRANSITION_Dcm_DcmRapidPowerShutdown 2U
#define RTE_MODE_Dcm_DcmRapidPowerShutdown_DISABLE_RAPIDPOWERSHUTDOWN 0U
#define RTE_MODE_Dcm_DcmRapidPowerShutdown_ENABLE_RAPIDPOWERSHUTDOWN 1U
#define RTE_TRANSITION_Dcm_DcmCommunicationControl 12U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM 0U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM 1U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM 2U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM 3U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM 4U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM 5U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM 6U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM 7U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM 8U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM 9U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM 10U
#define RTE_MODE_Dcm_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM 11U
#define RTE_TRANSITION_Dcm_DcmControlDTCSetting 2U
#define RTE_MODE_Dcm_DcmControlDTCSetting_DISABLEDTCSETTING 0U
#define RTE_MODE_Dcm_DcmControlDTCSetting_ENABLEDTCSETTING 1U
#define RTE_TRANSITION_Dcm_DcmResponseOnEvent_0 3U
#define RTE_MODE_Dcm_DcmResponseOnEvent_0_EVENT_STARTED 2U
#define RTE_MODE_Dcm_DcmResponseOnEvent_0_EVENT_STOPPED 1U
#define RTE_MODE_Dcm_DcmResponseOnEvent_0_EVENT_CLEARED 0U
#define RTE_TRANSITION_BswM_DcmCommunicationControl 12U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM 0U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM 1U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM 2U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM 3U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM 4U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM 5U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM 6U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM 7U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM 8U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM 9U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM 10U
#define RTE_MODE_BswM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM 11U
#define RTE_TRANSITION_BswM_DcmDiagnosticSessionControl 0U
#define RTE_MODE_BswM_DcmDiagnosticSessionControl_Default 1U
#define RTE_MODE_BswM_DcmDiagnosticSessionControl_Programming 2U
#define RTE_MODE_BswM_DcmDiagnosticSessionControl_Extended 3U
#define RTE_TRANSITION_BswM_DcmResponseOnEvent_0 3U
#define RTE_MODE_BswM_DcmResponseOnEvent_0_EVENT_STARTED 2U
#define RTE_MODE_BswM_DcmResponseOnEvent_0_EVENT_STOPPED 1U
#define RTE_MODE_BswM_DcmResponseOnEvent_0_EVENT_CLEARED 0U
#define RTE_TRANSITION_BswM_DcmEcuReset 7U
#define RTE_MODE_BswM_DcmEcuReset_EXECUTE 0U
#define RTE_MODE_BswM_DcmEcuReset_HARD 1U
#define RTE_MODE_BswM_DcmEcuReset_JUMPTOBOOTLOADER 2U
#define RTE_MODE_BswM_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER 3U
#define RTE_MODE_BswM_DcmEcuReset_KEYONOFF 4U
#define RTE_MODE_BswM_DcmEcuReset_NONE 5U
#define RTE_MODE_BswM_DcmEcuReset_SOFT 6U
#define Rte_IsModeDisablingDepSet_0() ((Rte_ModeDisablingDep[0] & 0x1U) != 0U)
#define Rte_EnableModeDisablingDep_0(enabledModeDisablingDep) \
    do { \
    Rte_ModeDisablingDep[0] |= 0x1U; \
    (enabledModeDisablingDep)[0] |= 0x1U; \
    \
    } while (0)
#define Rte_DisableModeDisablingDep_0(enabledModeDisablingDep) \
    do { \
    if (((enabledModeDisablingDep)[0] & 0x1U) == 0U) \
    { \
    Rte_ModeDisablingDep[0] &= (uint8)~(uint8)0x1U; \
    } \
    \
    } while (0)

/* ==================[Types]================================================== */
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(E2EProt_Data, TYPEDEF) queue[1];
  VAR(uint8, TYPEDEF) ldcWriter;
  VAR(uint8, TYPEDEF) ldcReader;
  VAR(uint8, TYPEDEF) rawValue[1][4];
  VAR(uint16, TYPEDEF) rawValueLength[1];
  P2FUNC(Rte_TransformerError, RTE_CODE, deserializer[1]) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) rawValue, uint16 rawValueLength, P2VAR(E2EProt_Data, AUTOMATIC, RTE_APPL_DATA) value);
  VAR(Rte_TransformerError, TYPEDEF) transformerError[1];
} Rte_ReceiveQueue_FA02016681A326DF12EC3600ED567ECB_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[8];
  VAR(uint8, TYPEDEF) ldcWriter;
  VAR(uint8, TYPEDEF) ldcReader;
} Rte_ReceiveQueue_17118CBFA9C49A3FE48286291D0616C6_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[5];
} Rte_ModeReceiveQueue_32CF5665FFA23F6C09526D0E9C4BD9B1_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[2];
} Rte_ModeReceiveQueue_D24C712F182D11C841A7FBB85568C6DE_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[3];
} Rte_ModeReceiveQueue_7687305539B8AFA4E4F8B508DECB0D02_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[7];
} Rte_ModeReceiveQueue_EE6C68F2D876A35BBAC6BCEF14E8EB4C_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[12];
} Rte_ModeReceiveQueue_EE8B083F291299928E6EBBA3FFCCD5F8_Type;
typedef struct
{
  volatile VAR(uint8, TYPEDEF) head;
  volatile VAR(uint8, TYPEDEF) tail;
  VAR(uint8, TYPEDEF) queue[3];
} Rte_ModeReceiveQueue_5E158E9CB4328AE82E01CE3E24BB3B3E_Type;

/* ==================[Definition of functions with external linkage]========== */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
DeclareTask(Rte_Time_Task);
DeclareTask(SchMComTask_5ms);
DeclareTask(SchMComTask_10ms);
DeclareTask(SchMMemTask_10ms);
DeclareTask(SchMDiagStateTask_20ms);
DeclareTask(Rte_Event_Task);
DeclareTask(TASK_RTE_ModeSwitchEvent);
DeclareResource(Rte_Res_0);
DeclareResource(Rte_Res_1);
DeclareResource(Rte_Res_2);
DeclareEvent(SchM_OSShutdownEvent);
DeclareEvent(Rte_OSTimingEvent_Rte_Time_Task_TE_147E97E564FE829F3F8D2217BDD620DE);
DeclareEvent(Rte_OSTimingEvent_Rte_Time_Task_TE_FB569F32E86BE9DE6593E2D9B5D6CB4E);
DeclareEvent(Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8);
DeclareEvent(Rte_OSShutdownEvent);
DeclareEvent(Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_87FF1E90955AB02FBCF7374E77F1780A);
DeclareEvent(Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_8A730602D267F5074564E9C3C0C4F41A);
DeclareEvent(Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_79814614D8B02944CBB412B318DA1EDD);
DeclareEvent(Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_2473347BF9B6AE15429D27E0459AFBC6);
DeclareEvent(Rte_OSTriggerExecutableEvent_Rte_Event_Task_DRE_4650FA0144082B5FCC32B6CB82463B28);
DeclareEvent(Rte_OSTriggerExecutableEvent_Rte_Event_Task_MSE_DB14A82EC870A2287F9736669E739E42);
DeclareEvent(Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_A0B39ADC998DCBFC9FEDC9C44553C764);
DeclareEvent(Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_1D9477AD6BFD7572B479646A93CA47F7);
DeclareEvent(Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_BD1D019BDBF1F0D852395BC522AA98CE);
DeclareEvent(Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_B9B20196EED3DF85BF827C21CF3A8A38);
DeclareEvent(Rte_OSTriggerExecutableEvent_TASK_RTE_ModeSwitchEvent_MSE_1E3BA96972F6352754D1659D8F1E5B6B);
#ifdef OS_HAS_WAITGETCLEAREVENT
#define Rte_WaitGetClearEvent(e, ep, tid) (Rte_Task_WaitEvent(tid, e), OS_WaitGetClearEvent(e, ep), Rte_Task_WaitEventRet(tid, e), (*(ep) & (EventMaskType)~(EventMaskType)(e)) != 0U ? (SetEvent(tid, *(ep) & (EventMaskType)~(EventMaskType)(e)), *(ep) &= (e), E_OK) : E_OK)
#else
extern FUNC(StatusType, RTE_CODE) Rte_WaitGetClearEvent (EventMaskType eventToWait, P2VAR(EventMaskType, AUTOMATIC, RTE_APPL_DATA) eventReceived, TaskType myTaskId);
#endif

#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */