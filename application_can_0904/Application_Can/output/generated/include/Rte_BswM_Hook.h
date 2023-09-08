#ifndef RTE_BSWM_HOOK_H
#define RTE_BSWM_HOOK_H
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
 * This file contains Rte hook declarations for the software component type BswM
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
#include <Rte_Cfg.h>
#include <Rte_Type.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE
#ifndef RTE_VFB_TRACE
#define RTE_VFB_TRACE 0
#endif
#endif
#if (defined(Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Start
#endif
#if defined(Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Start)
#undef Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Start (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) previousMode, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) nextMode);
#else
#define Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Start(previousMode, nextMode) ((void)0)
#endif
#if (defined(Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Return
#endif
#if defined(Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Return)
#undef Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Return (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) previousMode, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) nextMode);
#else
#define Rte_ModeHook_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode_Return(previousMode, nextMode) ((void)0)
#endif
#if (defined(Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Start
#endif
#if defined(Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Start)
#undef Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Start (AppStateModeRequestType data);
#else
#define Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Start(data) ((void)0)
#endif
#if (defined(Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Return
#endif
#if defined(Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Return)
#undef Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Return (AppStateModeRequestType data);
#else
#define Rte_WriteHook_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode_Return(data) ((void)0)
#endif
#if (defined(Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Start
#endif
#if defined(Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Start)
#undef Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Start (uint8 mode);
#else
#define Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Start(mode) ((void)0)
#endif
#if (defined(Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Return
#endif
#if defined(Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Return)
#undef Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Return (uint8 mode);
#else
#define Rte_SwitchHook_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode_Return(mode) ((void)0)
#endif
#if (defined(Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Start
#endif
#if defined(Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Start)
#undef Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Start (void);
#else
#define Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Return
#endif
#if defined(Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Return)
#undef Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Return (void);
#else
#define Rte_Runnable_BswM_RE_BswM_ModeReqPort_AppState_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_BswM_RES_MainFunction_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_BswM_RES_MainFunction_Start
#endif
#if defined(Rte_Runnable_BswM_RES_MainFunction_Start)
#undef Rte_Runnable_BswM_RES_MainFunction_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_RES_MainFunction_Start (void);
#else
#define Rte_Runnable_BswM_RES_MainFunction_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_BswM_RES_MainFunction_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_BswM_RES_MainFunction_Return
#endif
#if defined(Rte_Runnable_BswM_RES_MainFunction_Return)
#undef Rte_Runnable_BswM_RES_MainFunction_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_RES_MainFunction_Return (void);
#else
#define Rte_Runnable_BswM_RES_MainFunction_Return() ((void)0)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
