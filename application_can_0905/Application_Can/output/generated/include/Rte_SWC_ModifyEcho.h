#ifndef RTE_SWC_MODIFYECHO_H
#define RTE_SWC_MODIFYECHO_H
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
 * This file contains Rte component declarations for component type SWC_ModifyEcho
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
#include <Rte_SWC_ModifyEcho_Type.h>
#include <Rte_SWC_ModifyEcho_Hook.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_APPLICATION_HEADER_FILE_H /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif
#if (!defined(RTE_RUNNABLEAPI_ModifyEcho)) && (!defined(RTE_RUNNABLEAPI_ModifyEcho_FD))
#define RTE_RUNNABLEAPI_ModifyEcho
#define RTE_RUNNABLEAPI_ModifyEcho_FD
#endif
#endif
/* ------------------[API mapping]-------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#if defined(RTE_RUNNABLEAPI_ModifyEcho)
#define Rte_Send_P_SpecialRequest_EventMessage Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage
#define Rte_Read_R_NewCounterIn_CounterValue Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue
#define Rte_IWrite_ModifyEcho_P_EchoOut_CounterValue(data) (Rte_IWriteHook_SWC_ModifyEcho_P_EchoOut_CounterValue_Start(data), Rte_Inst_SWC_ModifyEcho->ModifyEcho_P_EchoOut_CounterValue->value = (data), Rte_IWriteHook_SWC_ModifyEcho_P_EchoOut_CounterValue_Return(data))
#define Rte_IWriteRef_ModifyEcho_P_EchoOut_CounterValue() ((P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA))&Rte_Inst_SWC_ModifyEcho->ModifyEcho_P_EchoOut_CounterValue->value)
#define Rte_Call_R_EchoResult_SetCounterAndAdd Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd
#endif
#if defined(RTE_RUNNABLEAPI_ModifyEcho_FD)
#define Rte_Read_R_NewCounterIn_FD_CounterValue_FD Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD
#define Rte_IWrite_ModifyEcho_FD_P_EchoOut_FD_CounterValue_FD(data) (Rte_IWriteHook_SWC_ModifyEcho_P_EchoOut_FD_CounterValue_FD_Start(data), Rte_Inst_SWC_ModifyEcho->ModifyEcho_FD_P_EchoOut_FD_CounterValue_FD->value = (data), Rte_IWriteHook_SWC_ModifyEcho_P_EchoOut_FD_CounterValue_FD_Return(data))
#define Rte_IWriteRef_ModifyEcho_FD_P_EchoOut_FD_CounterValue_FD() ((P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA))&Rte_Inst_SWC_ModifyEcho->ModifyEcho_FD_P_EchoOut_FD_CounterValue_FD->value)
#define Rte_Call_R_EchoResult_FD_SetCounterAndAdd_FD Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD
#endif
#endif

/* ------------------[port handle API mapping]-------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

#ifndef RTE_CORE /* if included by software component */
#define Rte_InitValue_P_EchoOut_CounterValue 0U
#define Rte_InitValue_P_EchoOut_FD_CounterValue_FD 0U
#define Rte_InitValue_R_NewCounterIn_CounterValue 0U
#define Rte_InitValue_R_NewCounterIn_FD_CounterValue_FD 0U
#endif

/* ==================[Types]================================================== */
#ifndef RTE_CORE /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_SWC_ModifyEcho, TYPEDEF, RTE_CONST) Rte_Instance;
#endif

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_CONST_32
#include <Rte_MemMap.h>
extern CONST(Rte_CDS_SWC_ModifyEcho, RTE_CONST) Rte_Instance_SWC_ModifyEcho;
extern CONSTP2CONST(Rte_CDS_SWC_ModifyEcho, RTE_CONST, RTE_CONST) Rte_Inst_SWC_ModifyEcho;
#define RTE_STOP_SEC_CONST_32
#include <Rte_MemMap.h>

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[declaration of runnable entities]----------------------- */
#define SWC_ModifyEcho_START_SEC_CODE
#include <SWC_ModifyEcho_MemMap.h>
extern FUNC(void, RTE_CODE) SWC_ModifyEcho_ModifyEcho (void);

extern FUNC(void, RTE_CODE) SWC_ModifyEcho_ModifyEcho_FD (void);

#define SWC_ModifyEcho_STOP_SEC_CODE
#include <SWC_ModifyEcho_MemMap.h>

/* ------------------[declaration of API functions provided by Rte]----------- */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_ModifyEcho))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage (uint8 data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd (uint8 newCounterValue, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) returnSum);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_ModifyEcho_FD))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD (uint8 newCounterValue, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) returnSum);
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