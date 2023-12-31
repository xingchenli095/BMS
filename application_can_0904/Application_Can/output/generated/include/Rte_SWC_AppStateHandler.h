#ifndef RTE_SWC_APPSTATEHANDLER_H
#define RTE_SWC_APPSTATEHANDLER_H
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
 * This file contains Rte component declarations for component type SWC_AppStateHandler
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Tue Aug 29 10:19:28 CST 2023. !!!IGNORE-LINE!!!
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
#include <Rte_SWC_AppStateHandler_Type.h>
#include <Rte_SWC_AppStateHandler_Hook.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_APPLICATION_HEADER_FILE_H /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif
#if !defined(RTE_RUNNABLEAPI_Runable_StateHandler)
#define RTE_RUNNABLEAPI_Runable_StateHandler
#endif
#endif
/* ------------------[API mapping]-------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#define Rte_IRead_Runable_StateHandler_AppStateRequest_If_AppStateRequestMode() (Rte_IReadHook_SWC_AppStateHandler_AppStateRequest_If_AppStateRequestMode_Start(Rte_Inst_SWC_AppStateHandler->Runable_StateHandler_AppStateRequest_If_AppStateRequestMode->value), Rte_IReadHook_SWC_AppStateHandler_AppStateRequest_If_AppStateRequestMode_Return(Rte_Inst_SWC_AppStateHandler->Runable_StateHandler_AppStateRequest_If_AppStateRequestMode->value), Rte_Inst_SWC_AppStateHandler->Runable_StateHandler_AppStateRequest_If_AppStateRequestMode->value)
#define Rte_IReadRef_Runable_StateHandler_AppStateRequest_If_AppStateRequestMode() ((P2CONST(AppStateModeRequestType, AUTOMATIC, RTE_APPL_DATA))&Rte_Inst_SWC_AppStateHandler->Runable_StateHandler_AppStateRequest_If_AppStateRequestMode->value)
#define Rte_Switch_AppState_AppStateMode Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode
#define Rte_Mode_AppState_AppStateMode Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode
#endif

/* ------------------[port handle API mapping]-------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

#ifndef RTE_CORE /* if included by software component */
#define Rte_InitValue_AppStateRequest_If_AppStateRequestMode 1U
#endif

/* ==================[Types]================================================== */
#ifndef RTE_CORE /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_SWC_AppStateHandler, TYPEDEF, RTE_CONST) Rte_Instance;
#endif

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_CONST_32
#include <Rte_MemMap.h>
extern CONST(Rte_CDS_SWC_AppStateHandler, RTE_CONST) Rte_Instance_SWC_AppStateHandler;
extern CONSTP2CONST(Rte_CDS_SWC_AppStateHandler, RTE_CONST, RTE_CONST) Rte_Inst_SWC_AppStateHandler;
#define RTE_STOP_SEC_CONST_32
#include <Rte_MemMap.h>

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[declaration of runnable entities]----------------------- */
#define SWC_AppStateHandler_START_SEC_CODE
#include <SWC_AppStateHandler_MemMap.h>
extern FUNC(void, RTE_CODE) App_StateHandler (void);

#define SWC_AppStateHandler_STOP_SEC_CODE
#include <SWC_AppStateHandler_MemMap.h>

/* ------------------[declaration of API functions provided by Rte]----------- */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode (uint8 mode);
extern FUNC(uint8, RTE_CODE) Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode (void);

#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>

/* ------------------[declaration of API functions provided by other Appl]---- */

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
