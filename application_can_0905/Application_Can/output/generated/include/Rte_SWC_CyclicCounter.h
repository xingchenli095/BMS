#ifndef RTE_SWC_CYCLICCOUNTER_H
#define RTE_SWC_CYCLICCOUNTER_H
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
 * This file contains Rte component declarations for component type SWC_CyclicCounter
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Thu Aug 31 17:25:22 CST 2023. !!!IGNORE-LINE!!!
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
#include <Rte_SWC_CyclicCounter_Type.h>
#include <Rte_SWC_CyclicCounter_Hook.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_APPLICATION_HEADER_FILE_H /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif
#if (!defined(RTE_RUNNABLEAPI_Cyclic)) && (!defined(RTE_RUNNABLEAPI_Cyclic_FD)) && (!defined(RTE_RUNNABLEAPI_Init)) && (!defined(RTE_RUNNABLEAPI_SetCounter)) && (!defined(RTE_RUNNABLEAPI_SetCounter_FD)) && (!defined(RTE_RUNNABLEAPI_Shutdown))
#define RTE_RUNNABLEAPI_Cyclic
#define RTE_RUNNABLEAPI_Cyclic_FD
#define RTE_RUNNABLEAPI_Init
#define RTE_RUNNABLEAPI_SetCounter
#define RTE_RUNNABLEAPI_SetCounter_FD
#define RTE_RUNNABLEAPI_Shutdown
#endif
#endif
/* ------------------[API mapping]-------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#define Rte_Pim_PimCounterValue() Rte_Inst_SWC_CyclicCounter->Pim_PimCounterValue
#if defined(RTE_RUNNABLEAPI_Cyclic)
#define Rte_IrvRead_Cyclic_CurrentCounterValue() Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue()
#define Rte_IrvWrite_Cyclic_CurrentCounterValue(data) Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue(data)
#define Rte_Write_P_CounterOut_CounterValue Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue
#define Rte_Receive_R_SpecialHandling_EventMessage Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage
#define Rte_Call_R_CyclicCounterDet_ReportError Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError
#define Rte_Call_R_MyLED_SetDiscreteValue Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue
#endif
#if (defined(RTE_RUNNABLEAPI_Cyclic)) || (defined(RTE_RUNNABLEAPI_Init))
#define Rte_Call_UR_ComMUser_0_RequestComMode Rte_Call_SWC_CyclicCounter_UR_ComMUser_0_RequestComMode
#endif
#if defined(RTE_RUNNABLEAPI_Cyclic_FD)
#define Rte_IrvRead_Cyclic_FD_CurrentCounterValue_FD() Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD()
#define Rte_IrvWrite_Cyclic_FD_CurrentCounterValue_FD(data) Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD(data)
#define Rte_Write_P_CounterOut_FD_CounterValue_FD Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD
#endif
#if defined(RTE_RUNNABLEAPI_Init)
#define Rte_IrvWrite_Init_CurrentCounterValue(data) Rte_IrvWrite_SWC_CyclicCounter_Init_CurrentCounterValue(data)
#define Rte_CData_PrmCounterValue() Rte_CData_SWC_CyclicCounter_PrmCounterValue()
#endif
#if defined(RTE_RUNNABLEAPI_SetCounter)
#define Rte_IrvRead_SetCounter_CurrentCounterValue() Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue()
#define Rte_IrvWrite_SetCounter_CurrentCounterValue(data) Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue(data)
#endif
#if defined(RTE_RUNNABLEAPI_SetCounter_FD)
#define Rte_IrvRead_SetCounter_FD_CurrentCounterValue_FD() Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD()
#define Rte_IrvWrite_SetCounter_FD_CurrentCounterValue_FD(data) Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD(data)
#endif
#if defined(RTE_RUNNABLEAPI_Shutdown)
#define Rte_IrvRead_Shutdown_CurrentCounterValue() Rte_IrvRead_SWC_CyclicCounter_Shutdown_CurrentCounterValue()
#define Rte_Call_PS_PersistentCounterValue_SetRamBlockStatus Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus
#endif
#endif

/* ------------------[port handle API mapping]-------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

#define RTE_E_NvMService_E_NOT_OK 1U
#define RTE_E_DETService_E_OK 0U
#define RTE_E_ComM_UserRequest_E_MODE_LIMITATION 2U
#define RTE_E_ComM_UserRequest_E_NOT_OK 1U
#ifndef RTE_CORE /* if included by software component */
#define Rte_InitValue_P_CounterOut_CounterValue 0U
#define Rte_InitValue_P_CounterOut_FD_CounterValue_FD 0U
#endif

/* ==================[Types]================================================== */
#ifndef RTE_CORE /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_SWC_CyclicCounter, TYPEDEF, RTE_CONST) Rte_Instance;
typedef VAR(Rte_PimType_SWC_CyclicCounter_CounterValueType, TYPEDEF) CounterValueType;
#endif

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_CONST_32
#include <Rte_MemMap.h>
extern CONST(Rte_CDS_SWC_CyclicCounter, RTE_CONST) Rte_Instance_SWC_CyclicCounter;
extern CONSTP2CONST(Rte_CDS_SWC_CyclicCounter, RTE_CONST, RTE_CONST) Rte_Inst_SWC_CyclicCounter;
#define RTE_STOP_SEC_CONST_32
#include <Rte_MemMap.h>

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[declaration of runnable entities]----------------------- */
#define SWC_CyclicCounter_START_SEC_CODE
#include <SWC_CyclicCounter_MemMap.h>
extern FUNC(void, RTE_CODE) SWC_CyclicCounter_Cyclic (void);

extern FUNC(void, RTE_CODE) SWC_CyclicCounter_Cyclic_FD (void);

extern FUNC(void, RTE_CODE) SWC_CyclicCounter_Init (void);

extern FUNC(void, RTE_CODE) SWC_CyclicCounter_SetCounter (uint8 newCounterValue, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) returnSum);

extern FUNC(void, RTE_CODE) SWC_CyclicCounter_SetCounter_FD (uint8 newCounterValue, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) returnSum);

extern FUNC(void, RTE_CODE) SWC_CyclicCounter_Shutdown (void);

#define SWC_CyclicCounter_STOP_SEC_CODE
#include <SWC_CyclicCounter_MemMap.h>

/* ------------------[declaration of API functions provided by Rte]----------- */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_Cyclic))
extern FUNC(uint8, RTE_CODE) Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue (void);
extern FUNC(void, RTE_CODE) Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue (uint8 data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue (uint8 data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError (uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue (uint32 value);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_Cyclic)) || (defined(RTE_RUNNABLEAPI_Init))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SWC_CyclicCounter_UR_ComMUser_0_RequestComMode (ComM_ModeType ComMode);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_Cyclic_FD))
extern FUNC(uint8, RTE_CODE) Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD (void);
extern FUNC(void, RTE_CODE) Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD (uint8 data);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD (uint8 data);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_Init))
extern FUNC(void, RTE_CODE) Rte_IrvWrite_SWC_CyclicCounter_Init_CurrentCounterValue (uint8 data);
extern FUNC(uint8, RTE_CODE) Rte_CData_SWC_CyclicCounter_PrmCounterValue (void);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_SetCounter))
extern FUNC(uint8, RTE_CODE) Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue (void);
extern FUNC(void, RTE_CODE) Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue (uint8 data);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_SetCounter_FD))
extern FUNC(uint8, RTE_CODE) Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD (void);
extern FUNC(void, RTE_CODE) Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD (uint8 data);
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_Shutdown))
extern FUNC(uint8, RTE_CODE) Rte_IrvRead_SWC_CyclicCounter_Shutdown_CurrentCounterValue (void);
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus (boolean BlockChanged);
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
