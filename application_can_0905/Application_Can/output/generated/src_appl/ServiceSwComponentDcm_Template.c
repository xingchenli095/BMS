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
 * This file contains an Rte component template / example code
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Thu Aug 31 17:25:22 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

/* ==================[Includes]=============================================== */
#include <Rte_ServiceSwComponentDcm.h>

/* ==================[Definition of functions with external linkage]========== */
/* ------------------------[runnable entity skeletons]------------------------ */
#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start (Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InType dataIn0, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutType, AUTOMATIC, RTE_APPL_DATA) dataOut0, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  Dem_EventStatusType arg_Call_EventStatus = 0U;
  Std_ReturnType ret_Call;
  Dem_EventStatusType arg_Call_EventStatus_0 = 0U;
  Std_ReturnType ret_Call_0;
  Dem_EventStatusType arg_Call_EventStatus_1 = 0U;
  Std_ReturnType ret_Call_1;
  Dem_EventStatusType arg_Call_EventStatus_2 = 0U;
  Std_ReturnType ret_Call_2;

  ret_Call = Rte_Call_DTC_0x000002_Event_SetEventStatus(arg_Call_EventStatus);
  (void)ret_Call;
  ret_Call_0 = Rte_Call_DTC_0x000001_Event_SetEventStatus(arg_Call_EventStatus_0);
  (void)ret_Call_0;
  ret_Call_1 = Rte_Call_Permanent_DTC_Event_SetEventStatus(arg_Call_EventStatus_1);
  (void)ret_Call_1;
  ret_Call_2 = Rte_Call_USER_DEFINE_MEMORY_Event_SetEventStatus(arg_Call_EventStatus_2);
  (void)ret_Call_2;
  /* suppress compiler warnings about unused arguments */
  (void)dataIn0;
  (void)OpStatus;
  (void)*dataOut0;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start (Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InType dataIn0, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutType, AUTOMATIC, RTE_APPL_DATA) dataOut0, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)SecurityAccessDataRecord;
  (void)OpStatus;
  (void)Seed;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)Key;
  (void)OpStatus;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)SecurityAccessDataRecord;
  (void)OpStatus;
  (void)Seed;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)Key;
  (void)OpStatus;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication (uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)SID;
  (void)RequestData;
  (void)DataSize;
  (void)ReqType;
  (void)SourceAddress;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication (uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation (uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
{
  /* suppress compiler warnings about unused arguments */
  (void)SID;
  (void)ReqType;
  (void)SourceAddress;
  (void)ConfirmationStatus;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation (uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication (uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)SID;
  (void)RequestData;
  (void)DataSize;
  (void)ReqType;
  (void)SourceAddress;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication (uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation (uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
{
  /* suppress compiler warnings about unused arguments */
  (void)SID;
  (void)ReqType;
  (void)SourceAddress;
  (void)ConfirmationStatus;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation (uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) dataIn0, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) dataOut0, P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode)
{
  /* suppress compiler warnings about unused arguments */
  (void)dataIn0;
  (void)OpStatus;
  (void)dataOut0;
  (void)*currentDataLength;
  (void)*ErrorCode;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) dataIn0, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) dataOut0, P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData (Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DataValueBuffer)
{
  /* suppress compiler warnings about unused arguments */
  (void)OpStatus;
  (void)DataValueBuffer;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData (Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DataValueBuffer) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

#define ServiceSwComponentDcm_START_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>
FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData (Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DataValueBuffer)
{
  /* suppress compiler warnings about unused arguments */
  (void)OpStatus;
  (void)DataValueBuffer;
  return RTE_E_OK;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData (Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DataValueBuffer) */

#define ServiceSwComponentDcm_STOP_SEC_CODE
#include <ServiceSwComponentDcm_MemMap.h>

/*
  ------------------------[runnable-independent API]-------------------------

  Copy and paste the following API to those runnable entity functions where
  you want to use them.

  ------------------------[port handle API]----------------------------------
  ------------------------[per instance memory API]--------------------------
 */

/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
