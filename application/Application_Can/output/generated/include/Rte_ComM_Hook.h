#ifndef RTE_COMM_HOOK_H
#define RTE_COMM_HOOK_H
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
 * This file contains Rte hook declarations for the software component type ComM
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Mon Sep 04 11:37:05 CST 2023. !!!IGNORE-LINE!!!
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
#if (defined(Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Start
#endif
#if defined(Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Start)
#undef Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Start (uint8 mode);
#else
#define Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Start(mode) ((void)0)
#endif
#if (defined(Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Return
#endif
#if defined(Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Return)
#undef Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Return (uint8 mode);
#else
#define Rte_SwitchHook_ComM_UM_ComMUser_0_currentMode_Return(mode) ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_RequestComMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_RequestComMode_Start
#endif
#if defined(Rte_Runnable_ComM_RE_RequestComMode_Start)
#undef Rte_Runnable_ComM_RE_RequestComMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_RequestComMode_Start (void);
#else
#define Rte_Runnable_ComM_RE_RequestComMode_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_RequestComMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_RequestComMode_Return
#endif
#if defined(Rte_Runnable_ComM_RE_RequestComMode_Return)
#undef Rte_Runnable_ComM_RE_RequestComMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_RequestComMode_Return (void);
#else
#define Rte_Runnable_ComM_RE_RequestComMode_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetCurrentComMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetCurrentComMode_Start
#endif
#if defined(Rte_Runnable_ComM_RE_GetCurrentComMode_Start)
#undef Rte_Runnable_ComM_RE_GetCurrentComMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetCurrentComMode_Start (void);
#else
#define Rte_Runnable_ComM_RE_GetCurrentComMode_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetCurrentComMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetCurrentComMode_Return
#endif
#if defined(Rte_Runnable_ComM_RE_GetCurrentComMode_Return)
#undef Rte_Runnable_ComM_RE_GetCurrentComMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetCurrentComMode_Return (void);
#else
#define Rte_Runnable_ComM_RE_GetCurrentComMode_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Start
#endif
#if defined(Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Start)
#undef Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Start (void);
#else
#define Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Return
#endif
#if defined(Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Return)
#undef Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Return (void);
#else
#define Rte_Runnable_ComM_RE_GetCurrentPNCComMode_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetMaxComMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetMaxComMode_Start
#endif
#if defined(Rte_Runnable_ComM_RE_GetMaxComMode_Start)
#undef Rte_Runnable_ComM_RE_GetMaxComMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetMaxComMode_Start (void);
#else
#define Rte_Runnable_ComM_RE_GetMaxComMode_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetMaxComMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetMaxComMode_Return
#endif
#if defined(Rte_Runnable_ComM_RE_GetMaxComMode_Return)
#undef Rte_Runnable_ComM_RE_GetMaxComMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetMaxComMode_Return (void);
#else
#define Rte_Runnable_ComM_RE_GetMaxComMode_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetRequestedComMode_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetRequestedComMode_Start
#endif
#if defined(Rte_Runnable_ComM_RE_GetRequestedComMode_Start)
#undef Rte_Runnable_ComM_RE_GetRequestedComMode_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetRequestedComMode_Start (void);
#else
#define Rte_Runnable_ComM_RE_GetRequestedComMode_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_GetRequestedComMode_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_GetRequestedComMode_Return
#endif
#if defined(Rte_Runnable_ComM_RE_GetRequestedComMode_Return)
#undef Rte_Runnable_ComM_RE_GetRequestedComMode_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_GetRequestedComMode_Return (void);
#else
#define Rte_Runnable_ComM_RE_GetRequestedComMode_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_Main_0_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_Main_0_Start
#endif
#if defined(Rte_Runnable_ComM_RE_Main_0_Start)
#undef Rte_Runnable_ComM_RE_Main_0_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_Main_0_Start (void);
#else
#define Rte_Runnable_ComM_RE_Main_0_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_ComM_RE_Main_0_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_ComM_RE_Main_0_Return
#endif
#if defined(Rte_Runnable_ComM_RE_Main_0_Return)
#undef Rte_Runnable_ComM_RE_Main_0_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RE_Main_0_Return (void);
#else
#define Rte_Runnable_ComM_RE_Main_0_Return() ((void)0)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
