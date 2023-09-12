#ifndef RTE_DEM_H
#define RTE_DEM_H
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
 * This file contains Rte component declarations for component type Dem
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Mon Sep 11 17:27:20 CST 2023. !!!IGNORE-LINE!!!
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
#include <Rte_Dem_Type.h>
#include <Rte_Dem_Hook.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_APPLICATION_HEADER_FILE_H /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif
#if (!defined(RTE_RUNNABLEAPI_RE_GetDTCOfEvent)) && (!defined(RTE_RUNNABLEAPI_RE_SetDTCSuppression)) && (!defined(RTE_RUNNABLEAPI_RE_CddIfClearDTC)) && (!defined(RTE_RUNNABLEAPI_RE_SetEventStatus)) && (!defined(RTE_RUNNABLEAPI_RE_ResetEventStatus)) && (!defined(RTE_RUNNABLEAPI_RE_PrestoreFreezeFrame)) && (!defined(RTE_RUNNABLEAPI_RE_ClearPrestoredFreezeFrame)) && (!defined(RTE_RUNNABLEAPI_RE_SetEventDisabled)) && (!defined(RTE_RUNNABLEAPI_RE_ResetEventDebounceStatus)) && (!defined(RTE_RUNNABLEAPI_RE_GetEventStatus)) && (!defined(RTE_RUNNABLEAPI_RE_GetEventFailed)) && (!defined(RTE_RUNNABLEAPI_RE_GetEventTested)) && (!defined(RTE_RUNNABLEAPI_RE_GetFaultDetectionCounter)) && (!defined(RTE_RUNNABLEAPI_RE_GetDebouncingOfEvent)) && (!defined(RTE_RUNNABLEAPI_RE_GetEventFreezeFrameDataEx)) && (!defined(RTE_RUNNABLEAPI_RE_GetEventExtendedDataRecordEx)) && (!defined(RTE_RUNNABLEAPI_RE_SetOperationCycleState)) && (!defined(RTE_RUNNABLEAPI_RE_SetCycleQualified)) && (!defined(RTE_RUNNABLEAPI_RE_SetEnableCondition)) && (!defined(RTE_RUNNABLEAPI_RE_GetIndicatorStatus)) && (!defined(RTE_RUNNABLEAPI_RE_GetEventMemoryOverflow)) && (!defined(RTE_RUNNABLEAPI_RE_GetNumberOfEventMemoryEntries)) && (!defined(RTE_RUNNABLEAPI_RE_SetPfcCycleQualified)) && (!defined(RTE_RUNNABLEAPI_RE_GetPfcCycleQualified)) && (!defined(RTE_RUNNABLEAPI_RE_ResetReadiness)) && (!defined(RTE_RUNNABLEAPI_RE_SetPtoStatus)) && (!defined(RTE_RUNNABLEAPI_RE_MainFunction))
#define RTE_RUNNABLEAPI_RE_GetDTCOfEvent
#define RTE_RUNNABLEAPI_RE_SetDTCSuppression
#define RTE_RUNNABLEAPI_RE_CddIfClearDTC
#define RTE_RUNNABLEAPI_RE_SetEventStatus
#define RTE_RUNNABLEAPI_RE_ResetEventStatus
#define RTE_RUNNABLEAPI_RE_PrestoreFreezeFrame
#define RTE_RUNNABLEAPI_RE_ClearPrestoredFreezeFrame
#define RTE_RUNNABLEAPI_RE_SetEventDisabled
#define RTE_RUNNABLEAPI_RE_ResetEventDebounceStatus
#define RTE_RUNNABLEAPI_RE_GetEventStatus
#define RTE_RUNNABLEAPI_RE_GetEventFailed
#define RTE_RUNNABLEAPI_RE_GetEventTested
#define RTE_RUNNABLEAPI_RE_GetFaultDetectionCounter
#define RTE_RUNNABLEAPI_RE_GetDebouncingOfEvent
#define RTE_RUNNABLEAPI_RE_GetEventFreezeFrameDataEx
#define RTE_RUNNABLEAPI_RE_GetEventExtendedDataRecordEx
#define RTE_RUNNABLEAPI_RE_SetOperationCycleState
#define RTE_RUNNABLEAPI_RE_SetCycleQualified
#define RTE_RUNNABLEAPI_RE_SetEnableCondition
#define RTE_RUNNABLEAPI_RE_GetIndicatorStatus
#define RTE_RUNNABLEAPI_RE_GetEventMemoryOverflow
#define RTE_RUNNABLEAPI_RE_GetNumberOfEventMemoryEntries
#define RTE_RUNNABLEAPI_RE_SetPfcCycleQualified
#define RTE_RUNNABLEAPI_RE_GetPfcCycleQualified
#define RTE_RUNNABLEAPI_RE_ResetReadiness
#define RTE_RUNNABLEAPI_RE_SetPtoStatus
#define RTE_RUNNABLEAPI_RE_MainFunction
#endif
#endif
/* ------------------[API mapping]-------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#if (defined(RTE_RUNNABLEAPI_RE_PrestoreFreezeFrame)) || (defined(RTE_RUNNABLEAPI_RE_MainFunction))
#define Rte_Call_CBReadData_DemExternalCSDataElementClass_Session_ReadData Rte_Call_Dem_CBReadData_DemExternalCSDataElementClass_Session_ReadData
#define Rte_Call_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData Rte_Call_Dem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData
#endif
#if defined(RTE_RUNNABLEAPI_RE_MainFunction)
#define Rte_Call_SetClearDTC_master_SetClearDTC Rte_Call_Dem_SetClearDTC_master_SetClearDTC
#endif
#endif

/* ------------------[port handle API mapping]-------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

#define RTE_E_DiagnosticMonitor_E_NOT_OK 1U
#define RTE_E_DiagnosticInfo_E_NOT_OK 1U
#define RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE 10U
#define RTE_E_DiagnosticInfo_DEM_E_NO_FDC_AVAILABLE 14U
#define RTE_E_DiagnosticInfo_DEM_BUFFER_TOO_SMALL 21U
#define RTE_E_DiagnosticInfo_DEM_NO_SUCH_ELEMENT 48U
#define RTE_E_GeneralDiagnosticInfo_E_NOT_OK 1U
#define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE 10U
#define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_FDC_AVAILABLE 14U
#define RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL 21U
#define RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT 48U
#define RTE_E_OperationCycle_E_NOT_OK 1U
#define RTE_E_EnableCondition_E_NOT_OK 1U
#define RTE_E_IndicatorStatus_E_NOT_OK 1U
#define RTE_E_EvMemOverflowIndication_E_NOT_OK 1U
#define RTE_E_DTCSuppression_E_NOT_OK 1U
#define RTE_E_CddIf_DEM_CLEAR_WRONG_DTC 1U
#define RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN 2U
#define RTE_E_CddIf_DEM_CLEAR_FAILED 3U
#define RTE_E_CddIf_DEM_CLEAR_PENDING 4U
#define RTE_E_CddIf_DEM_CLEAR_BUSY 5U
#define RTE_E_CddIf_DEM_CLEAR_MEMORY_ERROR 6U
#define RTE_E_PfcCyclePfcCycleQualified_E_NOT_OK 1U
#define RTE_E_PowerTakeOff_E_NOT_OK 1U
#define RTE_E_DataServices_DemExternalCSDataElementClass_Session_E_NOT_OK 1U
#define RTE_E_DataServices_DemExternalCSDataElementClass_ExtDataRec_0x01_E_NOT_OK 1U
#define RTE_E_SetClearDTC_E_NOT_OK 1U
#ifndef RTE_CORE /* if included by software component */
#endif

/* ==================[Types]================================================== */
#ifndef RTE_CORE /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_Dem, TYPEDEF, RTE_CONST) Rte_Instance;
#endif

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_CONST_8
#include <Rte_MemMap.h>
extern CONST(Rte_CDS_Dem, RTE_CONST) Rte_Instance_Dem;
#define RTE_STOP_SEC_CONST_8
#include <Rte_MemMap.h>
#define RTE_START_SEC_CONST_32
#include <Rte_MemMap.h>
extern CONSTP2CONST(Rte_CDS_Dem, RTE_CONST, RTE_CONST) Rte_Inst_Dem;
#define RTE_STOP_SEC_CONST_32
#include <Rte_MemMap.h>

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[declaration of runnable entities]----------------------- */
#define Dem_START_SEC_CODE
#include <Dem_MemMap.h>
extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetDTCOfEvent (Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_APPL_DATA) DTCOfEvent);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetDTCSuppression (uint32 DTC, Dem_DTCFormatType DTCFormat, boolean SuppressionStatus);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_ASR42_ClearDTC (uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetEventStatus (Dem_EventIdType EventId, Dem_EventStatusType EventStatus);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_ResetEventStatus (Dem_EventIdType EventId);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_PrestoreFreezeFrame (Dem_EventIdType EventId);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_ClearPrestoredFreezeFrame (Dem_EventIdType EventId);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetEventDisabled (Dem_EventIdType EventId);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_ResetEventDebounceStatus (Dem_EventIdType EventId, Dem_DebounceResetStatusType DebounceResetStatus);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetEventStatus (Dem_EventIdType EventId, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_APPL_DATA) EventStatusExtended);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetEventFailed (Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventFailed);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetEventTested (Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventTested);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetFaultDetectionCounter (Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetDebouncingOfEvent (Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_APPL_DATA) DebouncingState);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetEventFreezeFrameDataEx (Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) BufSize);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetEventExtendedDataRecordEx (Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) BufSize);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetOperationCycleState (Dem_OperationCycleIdType OperationCycleId, Dem_OperationCycleStateType CycleState);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetCycleQualified (Dem_OperationCycleIdType OperationCycleId);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetEnableCondition (uint8 EnableConditionID, boolean ConditionFulfilled);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetIndicatorStatus (Dem_IndicatorIdType IndicatorId, P2VAR(Dem_IndicatorStatusType, AUTOMATIC, RTE_APPL_DATA) IndicatorStatus);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetEventMemoryOverflow (Dem_DTCOriginType DTCOrigin, P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) OverflowIndication);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetNumberOfEventMemoryEntries (Dem_DTCOriginType DTCOrigin, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) NumberOfEventMemoryEntries);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetPfcCycleQualified (void);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_GetPfcCycleQualified (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) isqualified);

extern FUNC(void, RTE_CODE) Dem_ResetReadiness (void);

extern FUNC(Std_ReturnType, RTE_CODE) Dem_SetPtoStatus (boolean PtoStatus);

#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h>

/* ------------------[declaration of API functions provided by Rte]----------- */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_RE_PrestoreFreezeFrame)) || (defined(RTE_RUNNABLEAPI_RE_MainFunction))
#ifdef RTE_PTR2ARRAYTYPE_PASSING
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (P2VAR(DataArrayType_DemExternalCSDataElementClass_Session, AUTOMATIC, RTE_APPL_DATA) Data);
#else
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);
#endif
#ifdef RTE_PTR2ARRAYTYPE_PASSING
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData (P2VAR(DataArrayType_DemExternalCSDataElementClass_ExtDataRec_0x01, AUTOMATIC, RTE_APPL_DATA) Data);
#else
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);
#endif
#endif
#if (defined(RTE_CORE)) || (defined(RTE_RUNNABLEAPI_RE_MainFunction))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_SetClearDTC_master_SetClearDTC (uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);
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
