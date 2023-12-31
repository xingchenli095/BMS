#ifndef RTE_TYPE_H
#define RTE_TYPE_H
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
 * This file contains Rte type definitions
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
#include <Rte.h>
#include <Platform_Types.h>
#include <ComStack_Types.h>
#include <Std_Types.h>
#include <Can_GeneralTypes.h>

/* ==================[Types]================================================== */
typedef VAR(uint8, TYPEDEF) Rte_ModeDisablingDep_Type[1];
#ifndef RTE_TYPE_ComM_ModeType
#define RTE_TYPE_ComM_ModeType
typedef VAR(uint8, TYPEDEF) ComM_ModeType;
#endif
#ifndef RTE_TYPE_ComM_UserHandleType
#define RTE_TYPE_ComM_UserHandleType
typedef VAR(uint8, TYPEDEF) ComM_UserHandleType;
#endif
#ifndef RTE_TYPE_ComM_InhibitionStatusType
#define RTE_TYPE_ComM_InhibitionStatusType
typedef VAR(uint8, TYPEDEF) ComM_InhibitionStatusType;
#endif
#ifndef RTE_TYPE_ComM_InternalHandleArrayType
#define RTE_TYPE_ComM_InternalHandleArrayType
typedef VAR(ComM_UserHandleType, TYPEDEF) ComM_InternalHandleArrayType[1];
#endif
#ifndef RTE_TYPE_ComM_UserHandleArrayType
#define RTE_TYPE_ComM_UserHandleArrayType
typedef struct
{
  VAR(uint8, TYPEDEF) numberOfRequesters;
  VAR(ComM_InternalHandleArrayType, TYPEDEF) handleArray;
} ComM_UserHandleArrayType;
#endif
#ifndef RTE_TYPE_Dcm_SecLevelType
#define RTE_TYPE_Dcm_SecLevelType
typedef VAR(uint8, TYPEDEF) Dcm_SecLevelType;
#endif
#ifndef RTE_TYPE_Dcm_SesCtrlType
#define RTE_TYPE_Dcm_SesCtrlType
typedef VAR(uint8, TYPEDEF) Dcm_SesCtrlType;
#endif
#ifndef RTE_TYPE_Dcm_ProtocolType
#define RTE_TYPE_Dcm_ProtocolType
typedef VAR(uint8, TYPEDEF) Dcm_ProtocolType;
#endif
#ifndef RTE_TYPE_Dcm_OpStatusType
#define RTE_TYPE_Dcm_OpStatusType
typedef VAR(uint8, TYPEDEF) Dcm_OpStatusType;
#endif
#ifndef RTE_TYPE_Dcm_ConfirmationStatusType
#define RTE_TYPE_Dcm_ConfirmationStatusType
typedef VAR(uint8, TYPEDEF) Dcm_ConfirmationStatusType;
#endif
#ifndef RTE_TYPE_Dcm_NegativeResponseCodeType
#define RTE_TYPE_Dcm_NegativeResponseCodeType
typedef VAR(uint8, TYPEDEF) Dcm_NegativeResponseCodeType;
#endif
#ifndef RTE_TYPE_Dcm_SecAccDataRecLevel_1_ArrayType
#define RTE_TYPE_Dcm_SecAccDataRecLevel_1_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_SecAccDataRecLevel_1_ArrayType[4];
#endif
#ifndef RTE_TYPE_Dcm_SecSeedLevel_1_ArrayType
#define RTE_TYPE_Dcm_SecSeedLevel_1_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_SecSeedLevel_1_ArrayType[8];
#endif
#ifndef RTE_TYPE_Dcm_SecKeyLevel_1_ArrayType
#define RTE_TYPE_Dcm_SecKeyLevel_1_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_SecKeyLevel_1_ArrayType[4];
#endif
#ifndef RTE_TYPE_Dcm_SecAccDataRecLevel_3_ArrayType
#define RTE_TYPE_Dcm_SecAccDataRecLevel_3_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_SecAccDataRecLevel_3_ArrayType[4];
#endif
#ifndef RTE_TYPE_Dcm_SecSeedLevel_3_ArrayType
#define RTE_TYPE_Dcm_SecSeedLevel_3_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_SecSeedLevel_3_ArrayType[8];
#endif
#ifndef RTE_TYPE_Dcm_SecKeyLevel_3_ArrayType
#define RTE_TYPE_Dcm_SecKeyLevel_3_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_SecKeyLevel_3_ArrayType[4];
#endif
#ifndef RTE_TYPE_DataArrayTypeUint8_Session
#define RTE_TYPE_DataArrayTypeUint8_Session
typedef VAR(uint8, TYPEDEF) DataArrayTypeUint8_Session[1];
#endif
#ifndef RTE_TYPE_Dcm_DataSession_ArrayType
#define RTE_TYPE_Dcm_DataSession_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_DataSession_ArrayType[1];
#endif
#ifndef RTE_TYPE_DataArrayTypeUint8_NvM_Dummy
#define RTE_TYPE_DataArrayTypeUint8_NvM_Dummy
typedef VAR(uint8, TYPEDEF) DataArrayTypeUint8_NvM_Dummy[17];
#endif
#ifndef RTE_TYPE_Dcm_DataNvM_Dummy_ArrayType
#define RTE_TYPE_Dcm_DataNvM_Dummy_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_DataNvM_Dummy_ArrayType[17];
#endif
#ifndef RTE_TYPE_DataArrayTypeUint8_Vehicle_Identification_Number
#define RTE_TYPE_DataArrayTypeUint8_Vehicle_Identification_Number
typedef VAR(uint8, TYPEDEF) DataArrayTypeUint8_Vehicle_Identification_Number[17];
#endif
#ifndef RTE_TYPE_Dcm_DataVehicle_Identification_Number_ArrayType
#define RTE_TYPE_Dcm_DataVehicle_Identification_Number_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_DataVehicle_Identification_Number_ArrayType[17];
#endif
#ifndef RTE_TYPE_Dcm_DidSupportedType
#define RTE_TYPE_Dcm_DidSupportedType
typedef VAR(uint8, TYPEDEF) Dcm_DidSupportedType;
#endif
#ifndef RTE_TYPE_Dcm_StartFlexibleInArrayData_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineInSignal_dataInType
#define RTE_TYPE_Dcm_StartFlexibleInArrayData_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineInSignal_dataInType
typedef VAR(uint8, TYPEDEF) Dcm_StartFlexibleInArrayData_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineInSignal_dataInType[1024];
#endif
#ifndef RTE_TYPE_DcmDspRoutineInfo_256_DcmDspStartRoutineInSignal_ArrayType
#define RTE_TYPE_DcmDspRoutineInfo_256_DcmDspStartRoutineInSignal_ArrayType
typedef VAR(uint8, TYPEDEF) DcmDspRoutineInfo_256_DcmDspStartRoutineInSignal_ArrayType[1024];
#endif
#ifndef RTE_TYPE_StartFlexibleInArrayDataType_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineInSignal_dataIn
#define RTE_TYPE_StartFlexibleInArrayDataType_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineInSignal_dataIn
typedef VAR(uint8, TYPEDEF) StartFlexibleInArrayDataType_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineInSignal_dataIn[1024];
#endif
#ifndef RTE_TYPE_Dcm_StartFlexibleOutArrayData_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineOutSignal_dataOutType
#define RTE_TYPE_Dcm_StartFlexibleOutArrayData_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineOutSignal_dataOutType
typedef VAR(uint8, TYPEDEF) Dcm_StartFlexibleOutArrayData_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineOutSignal_dataOutType[1024];
#endif
#ifndef RTE_TYPE_DcmDspRoutineInfo_256_DcmDspStartRoutineOutSignal_ArrayType
#define RTE_TYPE_DcmDspRoutineInfo_256_DcmDspStartRoutineOutSignal_ArrayType
typedef VAR(uint8, TYPEDEF) DcmDspRoutineInfo_256_DcmDspStartRoutineOutSignal_ArrayType[1024];
#endif
#ifndef RTE_TYPE_StartFlexibleOutArrayDataType_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineOutSignal_dataOut
#define RTE_TYPE_StartFlexibleOutArrayDataType_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineOutSignal_dataOut
typedef VAR(uint8, TYPEDEF) StartFlexibleOutArrayDataType_DIAGNOSTIC_LOOPBACK_DcmDspStartRoutineOutSignal_dataOut[1024];
#endif
#ifndef RTE_TYPE_Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InPrimitivType
#define RTE_TYPE_Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InPrimitivType
typedef VAR(uint8, TYPEDEF) Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InPrimitivType;
#endif
#ifndef RTE_TYPE_Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InType
#define RTE_TYPE_Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InType
typedef VAR(Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InPrimitivType, TYPEDEF) Dcm_StartDataIn_DIAGNOSTIC_TRIGGER_DTC_routineInfo_InType;
#endif
#ifndef RTE_TYPE_StartDataInType_DIAGNOSTIC_TRIGGER_DTC_routineInfo_In
#define RTE_TYPE_StartDataInType_DIAGNOSTIC_TRIGGER_DTC_routineInfo_In
typedef VAR(uint8, TYPEDEF) StartDataInType_DIAGNOSTIC_TRIGGER_DTC_routineInfo_In;
#endif
#ifndef RTE_TYPE_Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutPrimitivType
#define RTE_TYPE_Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutPrimitivType
typedef VAR(uint8, TYPEDEF) Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutPrimitivType;
#endif
#ifndef RTE_TYPE_Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutType
#define RTE_TYPE_Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutType
typedef VAR(Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutPrimitivType, TYPEDEF) Dcm_StartDataOut_DIAGNOSTIC_TRIGGER_DTC_routineInfo_OutType;
#endif
#ifndef RTE_TYPE_StartDataOutType_DIAGNOSTIC_TRIGGER_DTC_routineInfo_Out
#define RTE_TYPE_StartDataOutType_DIAGNOSTIC_TRIGGER_DTC_routineInfo_Out
typedef VAR(uint8, TYPEDEF) StartDataOutType_DIAGNOSTIC_TRIGGER_DTC_routineInfo_Out;
#endif
#ifndef RTE_TYPE_Dcm_RequestData_ArrayType
#define RTE_TYPE_Dcm_RequestData_ArrayType
typedef VAR(uint8, TYPEDEF) Dcm_RequestData_ArrayType[1028];
#endif
#ifndef RTE_TYPE_Dcm_Uint8PtrDataType
#define RTE_TYPE_Dcm_Uint8PtrDataType
typedef P2VAR(uint8, TYPEDEF, RTE_APPL_DATA) Dcm_Uint8PtrDataType;
#endif
#ifndef RTE_TYPE_InfoTypeServicesArrayType_Service09_VinMessageCount
#define RTE_TYPE_InfoTypeServicesArrayType_Service09_VinMessageCount
typedef VAR(uint8, TYPEDEF) InfoTypeServicesArrayType_Service09_VinMessageCount[1];
#endif
#ifndef RTE_TYPE_InfoTypeServicesArrayType_Service09_VehicleIdentificationNumber
#define RTE_TYPE_InfoTypeServicesArrayType_Service09_VehicleIdentificationNumber
typedef VAR(uint8, TYPEDEF) InfoTypeServicesArrayType_Service09_VehicleIdentificationNumber[17];
#endif
#ifndef RTE_TYPE_Dem_OperationCycleIdType
#define RTE_TYPE_Dem_OperationCycleIdType
typedef VAR(uint8, TYPEDEF) Dem_OperationCycleIdType;
#endif
#ifndef RTE_TYPE_Dem_IndicatorIdType
#define RTE_TYPE_Dem_IndicatorIdType
typedef VAR(uint8, TYPEDEF) Dem_IndicatorIdType;
#endif
#ifndef RTE_TYPE_Dem_RatioIdType
#define RTE_TYPE_Dem_RatioIdType
typedef VAR(uint8, TYPEDEF) Dem_RatioIdType;
#endif
#ifndef RTE_TYPE_Dem_EnableConditionType
#define RTE_TYPE_Dem_EnableConditionType
typedef VAR(uint8, TYPEDEF) Dem_EnableConditionType;
#endif
#ifndef RTE_TYPE_Dem_EventIdType
#define RTE_TYPE_Dem_EventIdType
typedef VAR(uint16, TYPEDEF) Dem_EventIdType;
#endif
#ifndef RTE_TYPE_Dem_EventStatusType
#define RTE_TYPE_Dem_EventStatusType
typedef VAR(uint8, TYPEDEF) Dem_EventStatusType;
#endif
#ifndef RTE_TYPE_Dem_DebounceResetStatusType
#define RTE_TYPE_Dem_DebounceResetStatusType
typedef VAR(uint8, TYPEDEF) Dem_DebounceResetStatusType;
#endif
#ifndef RTE_TYPE_Dem_EventStatusExtendedType
#define RTE_TYPE_Dem_EventStatusExtendedType
typedef VAR(uint8, TYPEDEF) Dem_EventStatusExtendedType;
#endif
#ifndef RTE_TYPE_Dem_UdsStatusByteType
#define RTE_TYPE_Dem_UdsStatusByteType
typedef VAR(uint8, TYPEDEF) Dem_UdsStatusByteType;
#endif
#ifndef RTE_TYPE_Dem_DebouncingStateType
#define RTE_TYPE_Dem_DebouncingStateType
typedef VAR(uint8, TYPEDEF) Dem_DebouncingStateType;
#endif
#ifndef RTE_TYPE_Dem_DTCOriginType
#define RTE_TYPE_Dem_DTCOriginType
typedef VAR(uint16, TYPEDEF) Dem_DTCOriginType;
#endif
#ifndef RTE_TYPE_Dem_DTCFormatType
#define RTE_TYPE_Dem_DTCFormatType
typedef VAR(uint8, TYPEDEF) Dem_DTCFormatType;
#endif
#ifndef RTE_TYPE_Dem_InitMonitorReasonType
#define RTE_TYPE_Dem_InitMonitorReasonType
typedef VAR(uint8, TYPEDEF) Dem_InitMonitorReasonType;
#endif
#ifndef RTE_TYPE_Dem_OperationCycleStateType
#define RTE_TYPE_Dem_OperationCycleStateType
typedef VAR(uint8, TYPEDEF) Dem_OperationCycleStateType;
#endif
#ifndef RTE_TYPE_Dem_DTCStatusMaskType
#define RTE_TYPE_Dem_DTCStatusMaskType
typedef VAR(uint8, TYPEDEF) Dem_DTCStatusMaskType;
#endif
#ifndef RTE_TYPE_Dem_IndicatorStatusType
#define RTE_TYPE_Dem_IndicatorStatusType
typedef VAR(uint8, TYPEDEF) Dem_IndicatorStatusType;
#endif
#ifndef RTE_TYPE_Dem_MaxDataValueType
#define RTE_TYPE_Dem_MaxDataValueType
typedef VAR(uint8, TYPEDEF) Dem_MaxDataValueType[7];
#endif
#ifndef RTE_TYPE_DataArrayType_DemExternalCSDataElementClass_Session
#define RTE_TYPE_DataArrayType_DemExternalCSDataElementClass_Session
typedef VAR(uint8, TYPEDEF) DataArrayType_DemExternalCSDataElementClass_Session[1];
#endif
#ifndef RTE_TYPE_DataArrayType_DemExternalCSDataElementClass_ExtDataRec_0x01
#define RTE_TYPE_DataArrayType_DemExternalCSDataElementClass_ExtDataRec_0x01
typedef VAR(uint8, TYPEDEF) DataArrayType_DemExternalCSDataElementClass_ExtDataRec_0x01[7];
#endif
#ifndef RTE_TYPE_EcuM_StateType
#define RTE_TYPE_EcuM_StateType
typedef VAR(uint8, TYPEDEF) EcuM_StateType;
#endif
#ifndef RTE_TYPE_NvM_DstPtrType
#define RTE_TYPE_NvM_DstPtrType
typedef P2VAR(void, TYPEDEF, RTE_APPL_DATA) NvM_DstPtrType;
#endif
#ifndef RTE_TYPE_NvM_SrcPtrType
#define RTE_TYPE_NvM_SrcPtrType
typedef P2CONST(void, TYPEDEF, RTE_APPL_DATA) NvM_SrcPtrType;
#endif
#ifndef RTE_TYPE_NvM_BlockIdType
#define RTE_TYPE_NvM_BlockIdType
typedef VAR(uint16, TYPEDEF) NvM_BlockIdType;
#endif
#ifndef RTE_TYPE_NvM_RequestResultType
#define RTE_TYPE_NvM_RequestResultType
typedef VAR(uint8, TYPEDEF) NvM_RequestResultType;
#endif
#ifndef RTE_TYPE_SecOC_StateType
#define RTE_TYPE_SecOC_StateType
typedef VAR(uint32, TYPEDEF) SecOC_StateType;
#endif
#ifndef RTE_TYPE_SecOC_FreshnessArrayType
#define RTE_TYPE_SecOC_FreshnessArrayType
typedef VAR(uint8, TYPEDEF) SecOC_FreshnessArrayType[8];
#endif
#ifndef RTE_TYPE_AppStateModeRequestType
#define RTE_TYPE_AppStateModeRequestType
typedef VAR(uint8, TYPEDEF) AppStateModeRequestType;
#endif
#ifndef RTE_TYPE_E2EProt_Data
#define RTE_TYPE_E2EProt_Data
typedef struct
{
  VAR(uint8, TYPEDEF) SafetyE2E_Data;
  VAR(uint16, TYPEDEF) SafetyE2E_Data_CRC;
  VAR(uint8, TYPEDEF) SafetyE2E_Data_SQC_Counter;
} E2EProt_Data;
#endif
#ifndef RTE_TYPE_Rte_TransformerErrorCode
#define RTE_TYPE_Rte_TransformerErrorCode
typedef VAR(uint8, TYPEDEF) Rte_TransformerErrorCode;
#endif
#ifndef RTE_TYPE_Rte_TransformerClass
#define RTE_TYPE_Rte_TransformerClass
typedef VAR(uint8, TYPEDEF) Rte_TransformerClass;
#endif
#ifndef RTE_TYPE_Rte_TransformerError
#define RTE_TYPE_Rte_TransformerError
typedef struct
{
  VAR(Rte_TransformerErrorCode, TYPEDEF) errorCode;
  VAR(Rte_TransformerClass, TYPEDEF) transformerClass;
} Rte_TransformerError;
#endif
typedef struct
{
  VAR(uint8, TYPEDEF) currentMode;
  VAR(uint8, TYPEDEF) previousMode;
  VAR(uint8, TYPEDEF) nextMode;
} Rte_Intern_Rte_ModeVariable_0Type;
typedef uint8 Rte_PimType_SWC_CyclicCounter_CounterValueType;
typedef struct
{
  VAR(AppStateModeRequestType, TYPEDEF) value;
} Rte_DE_AppStateModeRequestType;
typedef struct
{
  VAR(E2EProt_Data, TYPEDEF) value;
} Rte_DE_E2EProt_Data;
typedef struct
{
  VAR(uint8, TYPEDEF) value;
} Rte_DE_uint8;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_BswM;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_ComM;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_Dcm;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_Dem;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_DevelopmentErrorTracer;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_NvM;
typedef struct
{
  /* Data Handles section */
  P2VAR(Rte_DE_E2EProt_Data, TYPEDEF, RTE_APPL_DATA) UpdateE2EProtSafeData_P_E2E_SafeData_E2EProt_Data;
} Rte_CDS_SWC_E2ESafety;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_SecOC;
typedef struct
{
  /* Data Handles section */
  P2VAR(Rte_DE_AppStateModeRequestType, TYPEDEF, RTE_APPL_DATA) Runable_StateHandler_AppStateRequest_If_AppStateRequestMode;
} Rte_CDS_SWC_AppStateHandler;
typedef struct
{
  /* PIM handles section */
  P2VAR(Rte_PimType_SWC_CyclicCounter_CounterValueType, TYPEDEF, RTE_APPL_DATA) Pim_PimCounterValue;
} Rte_CDS_SWC_CyclicCounter;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_SWC_IoHwAbs;
typedef struct
{
  /* Data Handles section */
  P2VAR(Rte_DE_uint8, TYPEDEF, RTE_APPL_DATA) ModifyEcho_FD_P_EchoOut_FD_CounterValue_FD;
  P2VAR(Rte_DE_uint8, TYPEDEF, RTE_APPL_DATA) ModifyEcho_P_EchoOut_CounterValue;
} Rte_CDS_SWC_ModifyEcho;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_ServiceSwComponentDcm;
typedef struct
{
  /* Data Handles section */
  P2VAR(Rte_DE_uint8, TYPEDEF, RTE_APPL_DATA) UpdateSecureData_P_SecuredData_CounterValue;
} Rte_CDS_SWC_Secured;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_ServiceSwComponentSecOC;
typedef struct
{
  VAR(uint8, TYPEDEF) _dummy;
} Rte_CDS_ServiceSwComponentDem;

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
