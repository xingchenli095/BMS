#ifndef RTE_BSWM_H
#define RTE_BSWM_H
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
 * This file contains Rte component declarations for component type BswM
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
#include <TSMem.h>
#include <Rte_BswM_Type.h>
#include <Rte_BswM_Hook.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_APPLICATION_HEADER_FILE_H /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif
#if (!defined(RTE_RUNNABLEAPI_RE_BswM_ModeReqPort_AppState)) && (!defined(RTE_RUNNABLEAPI_RES_MainFunction))
#define RTE_RUNNABLEAPI_RE_BswM_ModeReqPort_AppState
#define RTE_RUNNABLEAPI_RES_MainFunction
#endif
#endif
/* ------------------[API mapping]-------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#if defined(RTE_RUNNABLEAPI_RE_BswM_ModeReqPort_AppState)
#define Rte_Mode_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode
#endif
#if defined(RTE_RUNNABLEAPI_RES_MainFunction)
#define Rte_Write_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode
#define Rte_Switch_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode
#endif
#endif

/* ------------------[port handle API mapping]-------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

#ifndef RTE_CORE /* if included by software component */
#define Rte_InitValue_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode 1U
#endif

/* ==================[Types]================================================== */
#ifndef RTE_CORE /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_BswM, TYPEDEF, RTE_CONST) Rte_Instance;
#endif

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_CONST_8
#include <Rte_MemMap.h>
extern CONST(Rte_CDS_BswM, RTE_CONST) Rte_Instance_BswM;
#define RTE_STOP_SEC_CONST_8
#include <Rte_MemMap.h>
#define RTE_START_SEC_CONST_32
#include <Rte_MemMap.h>
extern CONSTP2CONST(Rte_CDS_BswM, RTE_CONST, RTE_CONST) Rte_Inst_BswM;
#define RTE_STOP_SEC_CONST_32
#include <Rte_MemMap.h>

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[declaration of runnable entities]----------------------- */
#define BswM_START_SEC_CODE
#include <BswM_MemMap.h>
extern FUNC(void, RTE_CODE) BswM_MRPFunc_BswM_ModeReqPort_AppState (void);

#define BswM_STOP_SEC_CODE
#include <BswM_MemMap.h>

/* ------------------[declaration of API functions provided by Rte]----------- */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_RE_BswM_ModeReqPort_AppState))
extern FUNC(uint8, RTE_CODE) Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) previousMode, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) nextMode);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_RES_MainFunction))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode (AppStateModeRequestType data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode (uint8 mode);
#endif

#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>

/* ------------------[declaration of API functions provided by other Appl]---- */

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
