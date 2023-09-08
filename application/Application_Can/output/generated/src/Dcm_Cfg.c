/**
 * \file
 *
 * \brief AUTOSAR Dcm
 *
 * This file contains the implementation of the AUTOSAR
 * module Dcm.
 *
 * \version 5.0.13
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /* MISRA-C:2004 Deviation List
  *
  * MISRA-1) Deviated Rule: 12.4 (required)
  *     The right-hand operand of a logical '&&' or '||' operator
  *     shall not contain side effects.
  *
  *     Reason:
  *     Logical operators '&&' and '||' are used here purposefully. The sub-expression shall not be
  *      evaluated if the first expression of a '&&' operation is FALSE. Similarly the
  *      sub-expression shall not be evaluated if the first expression of a '||' operation is TRUE.
  *      There is no side effects.
  *
  * MISRA-2) Deviated Rule: 11.4 (advisory)
  *     A cast should not be performed between a pointer to object type and a
  *     different pointer to object type.
  *
  *     Reason:
  *     A cast to unsigned is necessary here to copy data bit by bit and
  *     there is no alignment issues.
  *
  * MISRA-3) Deviated Rule: 11.1 (required)
  *     Conversions shall not be performed between a pointer to a function and
  *     any type other than an integral type.
  *
  *     Reason:
  *     In order to save memory, the function pointers necessary for DID operations are generated
  *     as an array of unions (union type which contains all such possible function pointers),
  *     instead of an array of structures containing all possible pointer types.
  *     The array containing the function pointers is initialized using brace-enclosed initializer
  *     list and C90 standard allows only the initialization of the first union member.
  *     The solution is to use a "generic function pointer" and use that type to define the array,
  *     and use explicit casts for each initialized member.
  *     Casting one function pointer type to the general type at initialization and then back again
  *     to the original type is guaranteed to preserve the correct data.
  *
  */

 /* MISRA-C:2012 Deviation List
  *
  *  MISRAC2012-1) Deviated Rule: 11.1 (required)
  *     "Conversions shall not be performed between a pointer to a function and any other type."
  *
  *     Reason:
  *     In order to save memory, the function pointers necessary for DID operations are generated
  *     as an array of unions (union type which contains all such possible function pointers),
  *     instead of an array of structures containing all possible pointer types.
  *     The array containing the function pointers is initialized using brace-enclosed initializer
  *     list and C90 standard allows only the initialization of the first union member.
  *     The solution is to use a "generic function pointer" and use that type to define the array,
  *     and use explicit casts for each initialized member.
  *     Casting one function pointer type to the general type at initialization and then back again
  *     to the original type is guaranteed to preserve the correct data.
  *
  *  MISRAC2012-2) Deviated Rule: 13.5 (required)
  *     "The right hand operand of a logical && or || operator shall not contain persistent
  *     side effects."
  *
  *     Reason:
  *     Logical operators '&&' and '||' are used here purposefully. The sub-expression shall not be
  *     evaluated if the first expression of a '&&' operation is FALSE. Similarly the
  *     sub-expression shall not be evaluated if the first expression of a '||' operation is TRUE.
  *     There is no side effects.
  *
  *  MISRAC2012-3) Deviated Rule: 11.3 (required)
  *     "A cast should not be performed between a pointer to object type and a different pointer to
  *     object type."
  *
  *     Reason:
  *     A cast to UINT8 is necessary here to copy data bit by bit and to be flexible for all
  *     the types, being no alignment issues.
  *     There is no side effects.
  *
  *  MISRAC2012-4) Deviated Rule: 8.9 (advisory)
  *     "An object should be defined at block scope if its identifier only
  *     appears in a single function."
  *
  *     Reason:
  *     The object is defined in this way because the values that are stored
  *     in them are required for the next call of this function and should be
  *     hold in the data segment memory.
  */

/*==================[inclusions]=================================================================*/
#include <ComStack_Types.h>                                            /* AUTOSAR standard types */
#include <Dcm_Cfg.h>                                           /* Generated configuration header */
#include <Dcm_API_Cfg.h>                                  /*  Configurable function declarations */
#include <Dcm_Hsm.h>                                                        /* Dcm State Machine */
#include <Dcm_Int.h>                                       /* Module internal header static part */
#include <Dcm_DspExternal.h>                          /* Callbacks provided by Central Diag SwC  */
#include <Dcm_Dsl_Supervisor.h>                                       /* Module internal header static part */

/* OBD Service 0x01 and 0x02*/
#if(DCM_DSP_USE_SERVICE_0X01 == STD_ON) || \
(DCM_DSP_USE_SERVICE_0X02 == STD_ON) || \
(DCM_NUM_PID_CFG > 0U)
#include <Dcm_Dsp_PidServices.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X06 == STD_ON)
#include <Dcm_Dsp_SvcH_RequestOnboardMonitoringTestResults.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X08 == STD_ON)
#include <Dcm_Dsp_SvcH_RequestControlOfOnBoardSysTstComp.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X09 == STD_ON)
/* OBD Service 0x09 */
#include <Dcm_Dsp_SvcH_RequestVehicleInformation.h>
#endif

#if ( (DCM_DSP_USE_SERVICE_0X19 == STD_ON) || (DCM_DSP_USE_SERVICE_0XAF == STD_ON) )
#include <Dcm_Dsp_SvcH_ReadDTCInformation.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X22 == STD_ON)
#include <Dcm_Dsp_SvcH_ReadDataByIdentifier.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X23 == STD_ON)
#include <Dcm_Dsp_SvcH_ReadMemoryByAddress.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X24 == STD_ON)
#include <Dcm_Dsp_SvcH_ReadScalingDataByIdentifier.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X2E == STD_ON)
#include <Dcm_Dsp_SvcH_WriteDataByIdentifier.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X34 == STD_ON)
#include <Dcm_Dsp_SvcH_RequestDownload.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X35 == STD_ON)
#include <Dcm_Dsp_SvcH_RequestUpload.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X36 == STD_ON)
#include <Dcm_Dsp_SvcH_TransferData.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X37 == STD_ON)
#include <Dcm_Dsp_SvcH_RequestTransferExit.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X3D == STD_ON)
#include <Dcm_Dsp_SvcH_WriteMemoryByAddress.h>
#endif

#if (DCM_DSP_USE_DIDSERVICES == STD_ON)
/* Include DidServices SW unit header for IO control */
#include <Dcm_Dsp_DidServices.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X85 == STD_ON)
#include <Dcm_Dsp_SvcH_ControlDTCSetting.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X86 == STD_ON)
#include <Dcm_Dsp_SvcH_ResponseOnEvent.h>
#endif

#if (DCM_DSP_USE_ROESERVICES == STD_ON)
#include <Dcm_Dsl_RoeServices.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X2C == STD_ON)
#include <Dcm_Dsp_SvcH_DynamicallyDefineDataIdentifier.h>
#endif

#if(DCM_DSP_USE_SERVICE_0X28 == STD_ON)
#include <Dcm_Dsp_SvcH_CommunicationControl.h>
#endif

#if(DCM_DSP_USE_SERVICE_0X29 == STD_ON)
#include <Dcm_Dsp_SvcH_Authentication.h>
#endif

#if (DCM_DSP_USE_SERVICE_0X87 == STD_ON)
#include <Dcm_Dsp_SvcH_LinkControl.h>
#endif

#if(DCM_DSP_USE_SERVICE_0X27 == STD_ON)
#include <Dcm_Dsp_SvcH_SecurityAccess.h>
#endif

#if(DCM_DSP_USE_MEMORYSERVICES == STD_ON)
#include <Dcm_Dsp_MemoryServices.h>
#endif

#if(DCM_DSP_USE_SERVICE_0X3E == STD_ON)
#include <Dcm_Dsp_SvcH_TesterPresent.h>
#endif

#if(DCM_DSP_USE_SERVICE_0X2F == STD_ON)
#include <Dcm_Dsp_SvcH_InputOutputControlByIdentifier.h>
#endif

#if(DCM_DSP_USE_SERVICE_0X31 == STD_ON)
#include <Dcm_Dsp_SvcH_RoutineControl.h>
#endif


#if ((DCM_DSP_USE_DIDSERVICES == STD_ON) && (DCM_DSP_USE_SENDERRECEIVER_INTERFACES == STD_ON))
#include <Dcm_Dsp_EndiannessInterpretation.h>
#endif

#include <SchM_Dcm.h>

/*==================[macros]=====================================================================*/

/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

/*==================[internal function declarations]=============================================*/
#define DCM_START_SEC_CODE
#include <Dcm_MemMap.h>

#define DCM_STOP_SEC_CODE
#include <Dcm_MemMap.h>
/*==================[internal constants]=========================================================*/

#define DCM_START_SEC_CONST_8
#include <Dcm_MemMap.h>

/* Array of session types for all Subservices */
STATIC CONST(Dcm_SesCtrlType,DCM_CONST) Dcm_SubSidTabSesLevels[38] =
{
  0x01U, /* Default of DiagnosticReadDTCInformation referred by its subservice REPORT_NUMBER_OF_DTC_BY_STATUS_MASK */
  0x03U, /* Extended of DiagnosticReadDTCInformation referred by its subservice REPORT_NUMBER_OF_DTC_BY_STATUS_MASK */
  0x01U, /* Default of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_BY_STATUS_MASK */
  0x03U, /* Extended of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_BY_STATUS_MASK */
  0x01U, /* Default of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_SNAPSHOT_RECORD_BY_DTC_NUMBER */
  0x03U, /* Extended of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_SNAPSHOT_RECORD_BY_DTC_NUMBER */
  0x01U, /* Default of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_EXT_DATA_RECORD_BY_DTC_NUMBER */
  0x03U, /* Extended of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_EXT_DATA_RECORD_BY_DTC_NUMBER */
  0x01U, /* Default of DiagnosticReadDTCInformation referred by its subservice REPORT_SUPPORTED_DTC */
  0x03U, /* Extended of DiagnosticReadDTCInformation referred by its subservice REPORT_SUPPORTED_DTC */
  0x01U, /* Default of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_FAULT_DETECTION_COUNTER */
  0x03U, /* Extended of DiagnosticReadDTCInformation referred by its subservice REPORT_DTC_FAULT_DETECTION_COUNTER */
  0x03U, /* Extended of DiagnosticSecurityAccess referred by its subservice Level1_Seed_requestSeed */
  0x02U, /* Programming of DiagnosticSecurityAccess referred by its subservice Level1_Seed_requestSeed */
  0x03U, /* Extended of DiagnosticSecurityAccess referred by its subservice Level1_Seed_sendKey */
  0x02U, /* Programming of DiagnosticSecurityAccess referred by its subservice Level1_Seed_sendKey */
  0x03U, /* Extended of DiagnosticSecurityAccess referred by its subservice Level3_Seed_requestSeed */
  0x03U, /* Extended of DiagnosticSecurityAccess referred by its subservice Level3_Seed_sendKey */
  0x03U, /* Extended of DiagnosticComControl referred by its subservice ENABLE_RX_AND_TX */
  0x02U, /* Programming of DiagnosticComControl referred by its subservice ENABLE_RX_AND_TX */
  0x03U, /* Extended of DiagnosticComControl referred by its subservice ENABLE_RX_AND_DISABLE_TX */
  0x02U, /* Programming of DiagnosticComControl referred by its subservice ENABLE_RX_AND_DISABLE_TX */
  0x03U, /* Extended of DiagnosticComControl referred by its subservice DISABLE_RX_AND_ENABLE_TX */
  0x02U, /* Programming of DiagnosticComControl referred by its subservice DISABLE_RX_AND_ENABLE_TX */
  0x03U, /* Extended of DiagnosticComControl referred by its subservice DISABLE_RX_AND_TX */
  0x02U, /* Programming of DiagnosticComControl referred by its subservice DISABLE_RX_AND_TX */
  0x01U, /* Default of DiagnosticTesterPresent referred by its subservice DcmDsdSubService_0 */
  0x03U, /* Extended of DiagnosticTesterPresent referred by its subservice DcmDsdSubService_0 */
  0x03U, /* Extended of DiagnosticControlDTCSetting referred by its subservice DTC_Setting_Mode_On_Control */
  0x02U, /* Programming of DiagnosticControlDTCSetting referred by its subservice DTC_Setting_Mode_On_Control */
  0x03U, /* Extended of DiagnosticControlDTCSetting referred by its subservice DTC_Setting_Mode_Off_Control */
  0x02U, /* Programming of DiagnosticControlDTCSetting referred by its subservice DTC_Setting_Mode_Off_Control */
  0x01U, /* Default of DiagnosticResponseOnEvent referred by its subservice DcmDsdSubService_0x4 */
  0x03U, /* Extended of DiagnosticResponseOnEvent referred by its subservice DcmDsdSubService_0x4 */
  0x01U, /* Default of DiagnosticResponseOnEvent referred by its subservice DcmDsdSubService_0x40 */
  0x03U, /* Extended of DiagnosticResponseOnEvent referred by its subservice DcmDsdSubService_0x40 */
  0x01U, /* Default of DiagnosticResponseOnEvent referred by its subservice DcmDsdSubService_0x45 */
  0x03U, /* Extended of DiagnosticResponseOnEvent referred by its subservice DcmDsdSubService_0x45 */
};

/* Array of session types for all services */
STATIC CONST(Dcm_SesCtrlType,DCM_CONST) Dcm_SidTabSesLevels[15] =
{
  0x01U, /* Default referred to by DiagnosticClearDiagnosticInformation */
  0x03U, /* Extended referred to by DiagnosticClearDiagnosticInformation */
  0x01U, /* Default referred to by DiagnosticReadDTCInformation */
  0x03U, /* Extended referred to by DiagnosticReadDTCInformation */
  0x03U, /* Extended referred to by DiagnosticSecurityAccess */
  0x02U, /* Programming referred to by DiagnosticSecurityAccess */
  0x03U, /* Extended referred to by DiagnosticComControl */
  0x02U, /* Programming referred to by DiagnosticComControl */
  0x03U, /* Extended referred to by DiagnosticRoutineControl */
  0x01U, /* Default referred to by DiagnosticTesterPresent */
  0x03U, /* Extended referred to by DiagnosticTesterPresent */
  0x03U, /* Extended referred to by DiagnosticControlDTCSetting */
  0x02U, /* Programming referred to by DiagnosticControlDTCSetting */
  0x01U, /* Default referred to by DiagnosticResponseOnEvent */
  0x03U, /* Extended referred to by DiagnosticResponseOnEvent */
};

#define DCM_STOP_SEC_CONST_8
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/* Array of Subservices for Service 'DiagnosticSessionControl' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16[3] =
{
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x02U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x03U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticEcuReset' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig17[1] =
{
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_HardReset_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticReadDTCInformation' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25[9] =
{
  {
    &( Dcm_SubSidTabSesLevels[0]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportNumberOfDTCByStatusMask_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[2]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportDTCByStatusMask_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x02U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[4]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportDtcSnapshotRecordByDtcNumber_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x04U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[6]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportDtcExtendedDataRecordByDtcNumber_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x06U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[8]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportSupportedDtcs_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x0aU, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[10]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportDTCFaultDetectionCounter_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x14U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportUserDefMemoryDTCByStatusMask_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x17U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportUserDefMemoryDtcSnapshotRecordByDtcNumber_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x18U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_DspInternal_ReportUserDefMemoryDtcExtendedDataRecordByDtcNumber_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x19U, /* SubServiceId */
    0U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticSecurityAccess' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39[4] =
{
  {
    &( Dcm_SubSidTabSesLevels[12]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    NULL_PTR, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[14]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    NULL_PTR, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x02U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[16]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    NULL_PTR, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x03U, /* SubServiceId */
    1U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[17]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    NULL_PTR, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x04U, /* SubServiceId */
    1U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticComControl' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40[4] =
{
  {
    &( Dcm_SubSidTabSesLevels[18]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x00U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[20]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[22]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x02U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[24]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x03U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticRoutineControl' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49[3] =
{
  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_RoutineControl_StartRoutine_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    0x00U, /* Number of sub service session levels */
    0x00U, /* Number of sub service security levels */
  },

  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_RoutineControl_StopRoutine_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x02U, /* SubServiceId */
    0x00U, /* Number of sub service session levels */
    0x00U, /* Number of sub service security levels */
  },

  {
    NULL_PTR, /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_RoutineControl_RequestResults_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x03U, /* SubServiceId */
    0x00U, /* Number of sub service session levels */
    0x00U, /* Number of sub service security levels */
  }
};
/* Array of Subservices for Service 'DiagnosticTesterPresent' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62[1] =
{
  {
    &( Dcm_SubSidTabSesLevels[26]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x00U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticControlDTCSetting' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133[2] =
{
  {
    &( Dcm_SubSidTabSesLevels[28]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_ControlDTCSetting_On_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x01U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[30]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_ControlDTCSetting_Off_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x02U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of Subservices for Service 'DiagnosticResponseOnEvent' */
STATIC CONST(Dcm_SubSidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134[3] =
{
  {
    &( Dcm_SubSidTabSesLevels[32]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x04U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[34]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x40U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
  {
    &( Dcm_SubSidTabSesLevels[36]), /* Pointer to subservice sessions */
    NULL_PTR, /* Pointer to subservice security levels */
    NULL_PTR, /* Pointer to External Subservice function */
    &Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH, /* Pointer to Internal Subservice function */
    NULL_PTR, /* Pointer to Mode rule function */
    0x45U, /* SubServiceId */
    2U, /* Number of sub service session levels */
    0U, /* Number of sub service security levels */
  },
};

/* Array of services for Service table 'DcmDsdServiceTable' (id 0) */
STATIC CONST(Dcm_SidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig0[12] =
{
  {
    NULL_PTR,
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_DiagnosticSessionControl_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x10U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    3U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig17), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_ECUReset_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x11U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    1U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[0]), /* Pointer to sessions */
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_ClearDiagnosticInformation_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x14U, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[2]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_ReadDTCInformation_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x19U, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    9U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_ReadDataByIdentifier_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x22U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[4]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_SecurityAccess_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x27U, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    4U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[6]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_CommunicationControl_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x28U, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    4U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_WriteDataByIdentifier_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x2eU, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[8]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_RoutineControl_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x31U, /* ServiceId */
    1U, /* Number of sessions */
    0U, /* Number of security levels */
    3U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[9]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_TesterPresent_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x3eU, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    1U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[11]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_ControlDTCSetting_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x85U, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    2U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    &( Dcm_SidTabSesLevels[13]), /* Pointer to sessions */
    NULL_PTR,
    (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134), /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_ResponseOnEvent_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x86U, /* ServiceId */
    2U, /* Number of sessions */
    0U, /* Number of security levels */
    3U, /* Number of subservices */
    TRUE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
};

/* Array of services for Service table 'DcmServiceTable_OBD' (id 1) */
STATIC CONST(Dcm_SidTabEntryConfigType, DCM_CONST) Dcm_SidTabEntryConfig1[7] =
{
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_RequestCurrentPowertrainDiagnosticData_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x01U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_Dsp_RequestPowertrainFreezeFrameData_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x02U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_RequestConfirmedDTC_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x03U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_ClearEmissionDiagInfo_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x04U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_RequestPendingDTC_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x07U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_RequestVehicleInformation_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x09U, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
  {
    NULL_PTR,
    NULL_PTR,
    NULL_PTR, /*Pointer to subservices array. */
    NULL_PTR,
    &Dcm_DspInternal_RequestPermanentDTC_SvcH,  /* Pointer to internal service function */
    NULL_PTR,
    0x0aU, /* ServiceId */
    0U, /* Number of sessions */
    0U, /* Number of security levels */
    0U, /* Number of subservices */
    FALSE, /* Subfunction available */
    FALSE /* AsyncServiceExecution available */
  },
};

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_8
#include <Dcm_MemMap.h>


#define DCM_STOP_SEC_CONST_8
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#if (DCM_DSP_USE_DIDSERVICES == STD_ON)
/* Array of signals configured Did services */
/* !LINKSTO Dcm.Dsn.DidSignals.ConfigurationData.DidSignals,1 */
CONST(Dcm_DidSignalType,DCM_CONST) Dcm_DidSignals[DCM_DID_SIGNALS_COUNT] =
{
  { 0U, 0U }, /* signal 0 of Did DcmDspDid_ActiveDiagnosticInformation */
  { 0U, 2U }, /* signal 0 of Did DcmDspDid_VehicleIdentificationNumber_Block */
  { 0U, 1U }, /* signal 0 of Did DcmDspDid_NVM_TEST_BLOCK */
};
#endif /* #if (DCM_DSP_USE_DIDSERVICES == STD_ON) */

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_8
#include <Dcm_MemMap.h>


#define DCM_STOP_SEC_CONST_8
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidReadAccessInfo,1 */
/** \brief Array that holds the configured read access information of the didinfo entries */
CONST(Dcm_DidReadAccessInfoType, DCM_CONST) Dcm_DidReadAccessInfo[] =
{
  {
    {
      NULL_PTR, /* SecLevels */
      NULL_PTR, /* SesCtrls */
      NULL_PTR, /* ModeRuleDidFunction */
      0, /* NumSecLevels */
      0, /* NumSesCtrls */
    } /* AccessInfoBase */
  },
  {
    {
      NULL_PTR, /* SecLevels */
      NULL_PTR, /* SesCtrls */
      NULL_PTR, /* ModeRuleDidFunction */
      0, /* NumSecLevels */
      0, /* NumSesCtrls */
    } /* AccessInfoBase */
  },
};

/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidWriteAccessInfo,1 */
/** \brief Array that holds the configured write access information of the didinfo entries */
CONST(Dcm_DidWriteAccessInfoType, DCM_CONST) Dcm_DidWriteAccessInfo[] =
{
  {
    {
      NULL_PTR, /* SecLevels */
      NULL_PTR, /* SesCtrls */
      NULL_PTR, /* ModeRuleDidFunction */
      0, /* NumSecLevels */
      0, /* NumSesCtrls */
    } /* AccessInfoBase */
  },
};

/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidIoctlAccessInfo,1 */
/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidReadScalingAccessInfo,1 */
/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidInfo,1 */
/** \brief Array that holds the configured didinfo entries that are enabled */
CONST(Dcm_DidInfoType, DCM_CONST) Dcm_DidInfo[] =
{
  {
    0, /* ReadAccessInfoIdx */
    DCM_DIDWRITEACCESSINFOIDX_INVALID, /* WriteAccessInfoIdx */
    DCM_DIDIOCTLACCESSINFOIDX_INVALID, /* IoctlAccessInfoIdx */
  },
  {
    1, /* ReadAccessInfoIdx */
    0, /* WriteAccessInfoIdx */
    DCM_DIDIOCTLACCESSINFOIDX_INVALID, /* IoctlAccessInfoIdx */
  },
};

/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidRangeConfig,1 */

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#if ((DCM_DSP_USE_DIDSERVICES == STD_ON) && (DCM_DID_REF_COUNT > 0))
#define DCM_START_SEC_CONST_16
#include <Dcm_MemMap.h>

/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidRefers,1 */
/* Array for Dids which is referred from other Dids. */
CONST(uint16,DCM_CONST) Dcm_DidRefers[DCM_DID_REF_COUNT] =
{
};

#define DCM_STOP_SEC_CONST_16
#include <Dcm_MemMap.h>
#endif /* #if ((DCM_DSP_USE_DIDSERVICES == STD_ON) && (DCM_DID_REF_COUNT > 0)) */
/*==================[internal data]==============================================================*/

/*==================[external constants]=========================================================*/
#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/* !LINKSTO Dcm.Dsn.DidServices.ConfigurationData.DidConfig,1 */
CONST(Dcm_DidConfigType, DCM_CONST) Dcm_DidConfig[] =
{
  {
    0xf186U, /* Did */
    1U, /* NumSignals */
    0U, /* DidInfoIdx */
    DCM_DIDREFERSIDX_INVALID, /* DidRefersIdx */
    0U, /* DidSignalsIdx */
    0U, /* NumRefDids */
  }, /* index: 0 */
  {
    0xf190U, /* Did */
    1U, /* NumSignals */
    0U, /* DidInfoIdx */
    DCM_DIDREFERSIDX_INVALID, /* DidRefersIdx */
    1U, /* DidSignalsIdx */
    0U, /* NumRefDids */
  }, /* index: 2 */
  {
    0xf191U, /* Did */
    1U, /* NumSignals */
    1U, /* DidInfoIdx */
    DCM_DIDREFERSIDX_INVALID, /* DidRefersIdx */
    2U, /* DidSignalsIdx */
    0U, /* NumRefDids */
  }, /* index: 1 */
};

/* Constant holding the pointer to the configured mode rule to be used when re-enabling DTC */
CONST(Dcm_ModeRuleFunctionType, DCM_CONST) Dcm_DspModeRuleDTCFunction =
  NULL_PTR;

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_8
#include <Dcm_MemMap.h>

/** \brief Configuration structure */
CONST(Dcm_ConfigType, DCM_CONST) DcmConfigSet = { 0U };


#define DCM_STOP_SEC_CONST_8
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/* Array of configuration information for diagnostic sessions */
STATIC CONST(Dcm_SesTabEntryConfigType, DCM_CONST) Dcm_SesTabEntryConfig0[3] =
{
  {
    1000U,/*P2StarMaxTime*/
    10U, /*P2MaxTime*/
    DCM_NO_BOOT,/*specifies whether this session allows
    to jump to Bootloader */
    1U,/* Session type */
    RTE_MODE_DcmDiagnosticSessionControl_Default /* Session type generate by Rte */
  },
  {
    1000U,/*P2StarMaxTime*/
    10U, /*P2MaxTime*/
    DCM_OEM_BOOT,/*specifies whether this session allows
    to jump to Bootloader */
    2U,/* Session type */
    RTE_MODE_DcmDiagnosticSessionControl_Programming /* Session type generate by Rte */
  },
  {
    1000U,/*P2StarMaxTime*/
    10U, /*P2MaxTime*/
    DCM_NO_BOOT,/*specifies whether this session allows
    to jump to Bootloader */
    3U,/* Session type */
    RTE_MODE_DcmDiagnosticSessionControl_Extended /* Session type generate by Rte */
  },
};

/* Holds configuration information for diagnostic sessions */
CONST(Dcm_SesTabConfigType, DCM_CONST) Dcm_SesTabConfig[DCM_NUM_PROTOCOL] =
{
  {
    Dcm_SesTabEntryConfig0, /* Pointer to session configurations */
    3U, /* Number of configured sessions */
    0U /* Index of default session */
  },
  {
    Dcm_SesTabEntryConfig0, /* Pointer to session configurations */
    3U, /* Number of configured sessions */
    0U /* Index of default session */
  },
};

/* Initialize global array holding the configuration for the service Id table */
CONST(Dcm_SidTabConfigType, DCM_CONST) Dcm_SidTabConfig[2] =
{
  {
    Dcm_SidTabEntryConfig0, /* Pointer to array of service table entries */
    12U /* Number of service entries within this table */
  },
  {
    Dcm_SidTabEntryConfig1, /* Pointer to array of service table entries */
    7U /* Number of service entries within this table */
  },
};



#if ((DCM_DID_DATA_TABLE_SIZE > 0U) && (DCM_DID_SIGNALS_COUNT > 0))
/* !LINKSTO Dcm.Dsn.DidSignals.ConfigurationData.DidDataTable,1 */
CONST(Dcm_VariableFunctionPointerRecordType, DCM_CONST) Dcm_DidDataTable[DCM_DID_DATA_TABLE_SIZE] =
{
  /* Deviation MISRAC2012-1 <START> */ /* Deviation MISRA-3  <START> */
  
  /* Available function pointers for Session */
  /* ReadData sync function */
  {(Dcm_GeneralDidOperationFuncType)&Dcm_Internalf186Readout},

  /* Available function pointers for NvM_Dummy */

  /* Available function pointers for Vehicle_Identification_Number */
  /* ReadData sync function */
  {(Dcm_GeneralDidOperationFuncType)&Dcm_Internalf191Readout},

  /* Deviation MISRA-3  <STOP> */ /* Deviation MISRAC2012-1 <STOP> */
};
#endif

/* !LINKSTO Dcm.Dsn.DidSignals.ConfigurationData.DidDataIndexingArray,1 */
CONST(Dcm_DidDataIndexingArrayEntryType, DCM_CONST) Dcm_DidDataIndexingArray[DCM_NUM_DID_DATA] =
{
    {
    /* Index in Dcm_DidDataTable */
    0U,
    /* Data descriptor */
    0x1cdU,
  },
  {
    /* Index in Dcm_DidDataNvMBlockConfig */
    2U,
    /* Data descriptor */
    0xc8U,
  },
  {
    /* Index in Dcm_DidDataTable */
    1U,
    /* Data descriptor */
    0x1cdU,
  },
};


/* !LINKSTO Dcm.Dsn.DidSignals.ConfigurationData.DidScalingDataSignalsIndexingArray,1 */
#if (DCM_DSP_USE_SERVICE_0X24 == STD_ON)
#if (DCM_NUM_READSCALING_DID_DATA > 0)
CONST(Dcm_DidScalingDataSignalsIndexingArrayEntryType, DCM_CONST) Dcm_DidScalingDataSignalsIndexingArray[DCM_NUM_READSCALING_DID_DATA] =
{
};
#endif /* #if (DCM_NUM_READSCALING_DID_DATA > 0) */
#endif /* #if (DCM_DSP_USE_SERVICE_0X24 == STD_ON) */
#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_16
#include <Dcm_MemMap.h>
/* !LINKSTO Dcm.Dsn.DidSignals.ConfigurationData.DidDataSizeArray,1 */
CONST(uint16, DCM_CONST) Dcm_DidDataSizeArray[DCM_NUM_DID_DATA] =
{
  8,
  136,
  136,
};

#define DCM_STOP_SEC_CONST_16
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/** \brief RTE function pointer table for Manufacturer Notification */
CONST(Dcm_RteRequestNotificationType, DCM_CONST)
  Dcm_RteManufacturerNotificationTable[DCM_RTE_TABLE_REQUEST_MANUFACTURER_SIZE] =
{
  {
    &Rte_Call_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication,
    &Rte_Call_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation
  },
};

/** \brief RTE function pointer table for Supplier Notification */
CONST(Dcm_RteRequestNotificationType, DCM_CONST)
  Dcm_RteSupplierNotificationTable[DCM_RTE_TABLE_REQUEST_SUPPLIER_SIZE] =
{
{      &Rte_Call_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication,
    &Rte_Call_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation
  },
};

CONST(Dcm_RoeEventPreconfListType, DCM_CONST) Dcm_RoeEventPreconfList[DCM_ROE_NUM_PRECONF_EVENT] =
{
  {
    /* DidRef */
    0xf186,
    DCM_ROE_STOPPED, /* InitialEventStatus */
    DCM_ROE_EVENT_DID, /* EventType */
    0, /* DTCStatusMask */
  }, /* index: 0 */
};

CONST(Dcm_RoeEventWindowTimePreconfType, DCM_CONST)
  Dcm_RoeEventWindowTimePreconfList[DCM_ROE_NUM_PRECONF_EVENT_WINDOW_TIMES] =
{
  {
    DCM_ROE_EVENT_WINDOW_INFINITE, /* EventWindowTime */
    TRUE /* StorageState */
  }, /* index: 0 */
};

CONST(Dcm_RoeSchMSwitchFunctionType, DCM_CONST)  Dcm_RoeSchMSwitchFunctionList[] =
{
  &SchM_Switch_Dcm_DcmResponseOnEvent_0,
};

CONST(Dcm_DspPidDataConfigType,DCM_CONST) Dcm_DspPidDataConfig[DCM_DSP_PID_DATA_NUM] =
{
  /* PID DcmDspPid_0 - PidData DcmDspPidData_0 */
  {
    &Dem_DcmReadDataOfPID01, /*ReadData Fnc Pointer*/
    0U, /*DataPos*/
    32U, /*DataSize*/
  },
  /* PID DcmDspPid_2 - PidData DcmDspPid_02_Data_0 */
  {
    NULL_PTR, /* Service 01 not supported */
    0U, /*DataPos*/
    8U, /*DataSize*/
  },
  /* PID DcmDspPid_2 - PidData DcmDspPid_02_Data_1 */
  {
    NULL_PTR, /* Service 01 not supported */
    8U, /*DataPos*/
    8U, /*DataSize*/
  },
  /* PID DcmDspPid_2 - PidData DcmDspPid_02_Data_2 */
  {
    NULL_PTR, /* Service 01 not supported */
    16U, /*DataPos*/
    8U, /*DataSize*/
  },
  /* PID DcmDspPid_2 - PidData DcmDspPid_02_Data_3 */
  {
    NULL_PTR, /* Service 01 not supported */
    24U, /*DataPos*/
    8U, /*DataSize*/
  },
  /* PID DcmDspPid_1 - PidData DcmDspPidData_1 */
  {
    &Dem_DcmReadDataOfPID41, /*ReadData Fnc Pointer*/
    0U, /*DataPos*/
    32U, /*DataSize*/
  },
};


#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>


#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>


#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>


#define DCM_START_SEC_CALIB_8
#include <Dcm_MemMap.h>

#if (DCM_DSP_SUBSERVICE_USED_BUF_SIZE > 0)
/* Initialize global array holding the configuration for the subservice usage */

CONST(uint8, DCM_CONST) Dcm_DsdSubServiceUsed[DCM_DSP_SRV_TABLES_USED_BUF_SIZE][DCM_DSP_NUMBER_OF_SERVICE_USED][DCM_DSP_SUBSERVICE_USED_BUF_SIZE] =
{
  {
    /* DiagnosticSessionControl subservice used */
    {
      7U,
      0U,
    },
    /* DiagnosticEcuReset subservice used */
    {
      1U,
      0U,
    },
    /* DiagnosticClearDiagnosticInformation subservice used */
    {
      0U,
      0U,
    },
    /* DiagnosticReadDTCInformation subservice used */
    {
      255U,
      1U,
    },
    /* DiagnosticReadDataByIdentifier subservice used */
    {
      0U,
      0U,
    },
    /* DiagnosticSecurityAccess subservice used */
    {
      15U,
      0U,
    },
    /* DiagnosticComControl subservice used */
    {
      15U,
      0U,
    },
    /* DiagnosticWriteDataByIdentifier subservice used */
    {
      0U,
      0U,
    },
    /* DiagnosticRoutineControl subservice used */
    {
      0U,
      0U,
    },
    /* DiagnosticTesterPresent subservice used */
    {
      2U,
      0U,
    },
    /* DiagnosticControlDTCSetting subservice used */
    {
      3U,
      0U,
    },
    /* DiagnosticResponseOnEvent subservice used */
    {
      7U,
      0U,
    },
  },
  {
    /* ReqCurrentPowerTrainDiag subservice used */
    {
      0U,
      0U,
    },
    /* ReqPowerTrainFreezeFrame subservice used */
    {
      0U,
      0U,
    },
    /* ReqEmissionRelDTC subservice used */
    {
      0U,
      0U,
    },
    /* ClrEmissionRelDTC subservice used */
    {
      0U,
      0U,
    },
    /* ReqExtEmissionRelDTC subservice used */
    {
      0U,
      0U,
    },
    /* RequestVehicleInformation subservice used */
    {
      0U,
      0U,
    },
    /* ReqNvmEmissionRelDTC subservice used */
    {
      0U,
      0U,
    },
  },
};
#endif

/* Initialize global array holding the configuration for the service usage */

CONST(uint8, DCM_CONST) Dcm_DsdServiceUsed[DCM_DSP_SRV_TABLES_USED_BUF_SIZE][DCM_DSP_SERVICE_USED_BUF_SIZE] =
{
  {
    255U,
    15U,
  },
  {
    127U,
    0U,
  },
};

CONST(uint8,DCM_CONST) Dcm_DspPidUsed[DCM_DSP_PID_USED_BUF_SIZE] =
{
  7U,
};



#define DCM_STOP_SEC_CALIB_8
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CALIB_UNSPECIFIED
#include <Dcm_MemMap.h>

CONST(Dcm_DspPidConfigType,DCM_CONST) Dcm_DspPidConfig[DCM_NUM_PID_CFG] =
{
  {
    0U, /*index of first PidDataConfig*/
    1U, /*count of PidDataConfig*/
    0U, /*index of first SupInfoConfig*/
    0U, /*count of SupInfoConfig*/
    0x01U, /*PidIdentifier*/
    4U, /*DcmDspPidSize*/
    3U, /*Services 01 and 02 are enabled*/
  },
  {
    1U, /*index of first PidDataConfig*/
    4U, /*count of PidDataConfig*/
    0U, /*index of first SupInfoConfig*/
    0U, /*count of SupInfoConfig*/
    0x03U, /*PidIdentifier*/
    4U, /*DcmDspPidSize*/
    2U, /*Service02 is enabled*/
  },
  {
    5U, /*index of first PidDataConfig*/
    1U, /*count of PidDataConfig*/
    0U, /*index of first SupInfoConfig*/
    0U, /*count of SupInfoConfig*/
    0x41U, /*PidIdentifier*/
    4U, /*DcmDspPidSize*/
    1U, /*Service01 is enabled*/
  },
};

#define DCM_STOP_SEC_CALIB_UNSPECIFIED
#include <Dcm_MemMap.h>
/*==================[external data]==============================================================*/

/*==================[external function definitions]==============================================*/
#define DCM_START_SEC_CODE
#include <Dcm_MemMap.h>

/*------------ Definition of user function for the service 0xF186 --------------*/
/* !LINKSTO Dcm.EB.ActiveDiagnosticSessionDataIdentifier,1 */
FUNC(Std_ReturnType, DCM_APPL_CODE) Dcm_Internalf186Readout(
P2VAR(uint8, AUTOMATIC, DCM_VAR) Data)
{
Std_ReturnType retVal = E_NOT_OK;

retVal = Dcm_GetSesCtrlTypeExt(Data);

return retVal;
}

#define DCM_STOP_SEC_CODE
#include <Dcm_MemMap.h>
/*==================[internal function definitions]==============================================*/
#define DCM_START_SEC_CODE
#include <Dcm_MemMap.h>

#define DCM_STOP_SEC_CODE
#include <Dcm_MemMap.h>

/*==================[end of file]================================================================*/
