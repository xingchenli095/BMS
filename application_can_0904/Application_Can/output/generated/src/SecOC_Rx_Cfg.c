/**
 * \file
 *
 * \brief AUTOSAR SecOC
 *
 * This file contains the implementation of the AUTOSAR
 * module SecOC.
 *
 * \version 2.8.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/




#include <SecOC_Rx_Cfg.h>
#include <SecOC_Rx_Int.h>

#include <Rte_SecOC.h>

/*==================[macros]======================================================================*/

/* Macro, which defines the default value for the dummy Csm job ID */
#if (defined SECOC_DUMMY_CSM_JOB_ID)
#error SECOC_DUMMY_CSM_JOB_ID already defined
#endif
#define SECOC_DUMMY_CSM_JOB_ID   4294967295U

/*==================[type definitions]============================================================*/

/*==================[internal function declarations]==============================================*/

/*==================[internal constants]==========================================================*/

/*==================[internal data]===============================================================*/

#define SECOC_START_SEC_VAR_CLEARED_8
#include <SecOC_MemMap.h>

#define SECOC_STOP_SEC_VAR_CLEARED_8
#include <SecOC_MemMap.h>

/*==================[external constants]==========================================================*/


#define SECOC_START_SEC_CONST_UNSPECIFIED
#include <SecOC_MemMap.h>

CONST(SecOC_RxConfigType, SECOC_CONST) SecOC_RxConfig[SECOC_NUMBER_RX_PDUS] =
{
  /* SecOC_RxConfig[0] - Pdu_SecuredIn_281R */
  {
    /* CsmJobId */
    CsmConf_CsmJob_CsmJob_Pdu_SecuredIn_R,
    /* PduIdForSecuredPduAtSecOC */
    0U,
    /* MaxFVSyncAttempts */
    2U,
    /* MaxAuthAttempts */
    0U,
    /* ReceptionStrategy */
    SECOC_REJECT_INCOMING_PDU,
    /* GetRxFreshnessFuncType */
    SECOC_GET_RX_FRESHNESS_FUNC_TYPE,
    /* CsmFuncType */
    SECOC_RX_MACVERIFY_FUNC_TYPE,
    /* UseTp */
    FALSE,
    /* UseDynamicLength */
    TRUE,
  },
};

#define SECOC_STOP_SEC_CONST_UNSPECIFIED
#include <SecOC_MemMap.h>

/*==================[external data]===============================================================*/

#define SECOC_START_SEC_VAR_INIT_UNSPECIFIED
#include <SecOC_MemMap.h>

VAR(SecOC_RxDataType, SECOC_VAR) SecOC_RxData[SECOC_NUMBER_RX_PDUS] =
{
  /* SecOC_RxData[0] - Pdu_SecuredIn_281R */
  {
    /* ReceivedSecuredPdu */
    {NULL_PTR, 0U},
    /* SecuredPdu */
    {NULL_PTR, 0U},
    /* DataToAuthenticator */
    NULL_PTR,
    /* FreshnessVerifyValue */
    NULL_PTR,
    /* Authenticator */
    NULL_PTR,
    /* DataLength */
    0U,
    /* AuthAttempts */
    0U,
    /* FVSyncAttempts */
    0U,
    /* VerificationResult */
    SECOC_VERIFICATIONFAILURE,
    /* VerifyStatusOverride */
    SECOC_OVERRIDESTATUS_CANCEL,
    /* NumMsgToOverride */
    0U,
    /* State */
    0U,
    /* PduREvent */
    0U,
    /* CsmVerificationResult */
    0U,
    /* PduInProcess */
    FALSE,
    /* ProcessingVerification */
    FALSE,
    /* RenewedVerStatus */
    FALSE
  },
};

#define SECOC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SecOC_MemMap.h>

/*==================[external function definitions]===============================================*/

#define SECOC_START_SEC_CODE
#include <SecOC_MemMap.h>

FUNC(Std_ReturnType, SECOC_CODE) SecOC_VerifyStatusOverride
(
  uint16  freshnessValueId,
  uint8   overrideStatus,
  uint8   numberOfMessagesToOverride
)
{
  Std_ReturnType retVal = E_NOT_OK;

  retVal = SecOC_Rx_VerifyStatusOverride_43
            (
              NULL_PTR,
              SECOC_NUMBER_RX_PDUS,
              freshnessValueId,
              overrideStatus,
              numberOfMessagesToOverride
            );
  return retVal;
}

FUNC(Std_ReturnType, SECOC_CODE) SecOC_Rx_Get_Freshness
(
          uint16                              instId,
          uint16                              SecOCFreshnessValueID,
  P2CONST(uint8,  AUTOMATIC, SECOC_APPL_DATA) SecOCTruncatedFreshnessValue,
          uint32                              SecOCTruncatedFreshnessValueLength,
          uint16                              SecOCCounterSyncAttempts,
    P2VAR(uint8,  AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValue,
    P2VAR(uint32, AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValueLength
)
{
  Std_ReturnType  retVal = E_NOT_OK;

  SECOC_PARAM_UNUSED(instId);
  retVal = Rte_Call_PS_RxFreshnessManagement_GetRxFreshness(
                                                  SecOCFreshnessValueID,
                                                  SecOCTruncatedFreshnessValue,
                                                  SecOCTruncatedFreshnessValueLength,
                                                  SecOCCounterSyncAttempts,
                                                  SecOCFreshnessValue,
                                                  SecOCFreshnessValueLength
                                                );

  return retVal;
}

#define SECOC_STOP_SEC_CODE
#include <SecOC_MemMap.h>

/*==================[internal function definitions]===============================================*/

/*==================[end of file]=================================================================*/
