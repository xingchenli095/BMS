#ifndef RTE_BSWM_TYPE_H
#define RTE_BSWM_TYPE_H
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
 * This file contains the application-specific types for component type BswM
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Tue Aug 29 10:19:27 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ==================[Includes]=============================================== */
#include <Rte_Type.h>

/* ==================[Macros]================================================= */
/* ------------------[enumeration constants]---------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#ifndef EB_INTGR_APP_STARTUP
#define EB_INTGR_APP_STARTUP 1U
#endif
#ifndef EB_INTGR_APP_ACTIVE
#define EB_INTGR_APP_ACTIVE 2U
#endif
#ifndef EB_INTGR_APP_INACTIVE
#define EB_INTGR_APP_INACTIVE 3U
#endif
#ifndef EB_INTGR_APP_SLEEP
#define EB_INTGR_APP_SLEEP 4U
#endif
#ifndef EB_INTGR_APP_WAKEUP
#define EB_INTGR_APP_WAKEUP 5U
#endif
#endif

/* ------------------[range definitions]-------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ------------------[invalid values]----------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ------------------[mode declarations]-------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_TRANSITION_BSWM_AppStateModeGroup
#define RTE_TRANSITION_BSWM_AppStateModeGroup 9U
#endif
#ifndef RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_ACTIVE
#define RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_ACTIVE 2U
#endif
#ifndef RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_INACTIVE
#define RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_INACTIVE 3U
#endif
#ifndef RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_SLEEP
#define RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_SLEEP 4U
#endif
#ifndef RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_STARTUP
#define RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_STARTUP 1U
#endif
#ifndef RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_WAKEUP
#define RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_WAKEUP 5U
#endif
#ifndef RTE_TRANSITION_BSWM_DcmCommunicationControl
#define RTE_TRANSITION_BSWM_DcmCommunicationControl 12U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM 6U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM 2U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM 10U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM 7U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM 3U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM 11U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM 5U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM 1U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM 9U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM 4U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM 0U
#endif
#ifndef RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM
#define RTE_MODE_BSWM_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM 8U
#endif
#ifndef RTE_TRANSITION_BSWM_ComMMode
#define RTE_TRANSITION_BSWM_ComMMode 3U
#endif
#ifndef RTE_MODE_BSWM_ComMMode_COMM_FULL_COMMUNICATION
#define RTE_MODE_BSWM_ComMMode_COMM_FULL_COMMUNICATION 2U
#endif
#ifndef RTE_MODE_BSWM_ComMMode_COMM_NO_COMMUNICATION
#define RTE_MODE_BSWM_ComMMode_COMM_NO_COMMUNICATION 0U
#endif
#ifndef RTE_MODE_BSWM_ComMMode_COMM_SILENT_COMMUNICATION
#define RTE_MODE_BSWM_ComMMode_COMM_SILENT_COMMUNICATION 1U
#endif
#ifndef RTE_TRANSITION_BSWM_DcmEcuReset
#define RTE_TRANSITION_BSWM_DcmEcuReset 7U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_EXECUTE
#define RTE_MODE_BSWM_DcmEcuReset_EXECUTE 0U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_HARD
#define RTE_MODE_BSWM_DcmEcuReset_HARD 1U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_JUMPTOBOOTLOADER
#define RTE_MODE_BSWM_DcmEcuReset_JUMPTOBOOTLOADER 2U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
#define RTE_MODE_BSWM_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER 3U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_KEYONOFF
#define RTE_MODE_BSWM_DcmEcuReset_KEYONOFF 4U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_NONE
#define RTE_MODE_BSWM_DcmEcuReset_NONE 5U
#endif
#ifndef RTE_MODE_BSWM_DcmEcuReset_SOFT
#define RTE_MODE_BSWM_DcmEcuReset_SOFT 6U
#endif
#ifndef RTE_TRANSITION_BSWM_BswMModeGroup
#define RTE_TRANSITION_BSWM_BswMModeGroup 9U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_A
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_A 0U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_B
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_B 1U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_POST_RUN
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_POST_RUN 2U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_PRP_SHUTDOWN
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_PRP_SHUTDOWN 3U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_RUN_TWO
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_RUN_TWO 4U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_SLEEP
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_SLEEP 5U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_A
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_A 6U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_B
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_B 7U
#endif
#ifndef RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_WAKEUP_TWO
#define RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_WAKEUP_TWO 8U
#endif
#endif

/* ------------------[API]---------------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ==================[Types]================================================== */
/* ------------------[mode declaration group types]--------------------------- */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_MODETYPE_BSWM_AppStateModeGroup
#define RTE_MODETYPE_BSWM_AppStateModeGroup
typedef VAR(uint8, TYPEDEF) Rte_ModeType_BSWM_AppStateModeGroup;
#endif
#ifndef RTE_MODETYPE_BSWM_DcmCommunicationControl
#define RTE_MODETYPE_BSWM_DcmCommunicationControl
typedef VAR(uint8, TYPEDEF) Rte_ModeType_BSWM_DcmCommunicationControl;
#endif
#ifndef RTE_MODETYPE_BSWM_ComMMode
#define RTE_MODETYPE_BSWM_ComMMode
typedef VAR(uint8, TYPEDEF) Rte_ModeType_BSWM_ComMMode;
#endif
#ifndef RTE_MODETYPE_BSWM_DcmEcuReset
#define RTE_MODETYPE_BSWM_DcmEcuReset
typedef VAR(uint8, TYPEDEF) Rte_ModeType_BSWM_DcmEcuReset;
#endif
#ifndef RTE_MODETYPE_BSWM_BswMModeGroup
#define RTE_MODETYPE_BSWM_BswMModeGroup
typedef VAR(uint8, TYPEDEF) Rte_ModeType_BSWM_BswMModeGroup;
#endif
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
