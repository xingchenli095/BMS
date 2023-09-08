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




#include <SecOC_Tx_Cfg.h>
#include <SecOC_Tx_Int.h>

#include <Rte_SecOC.h>

/*==================[macros]======================================================================*/

/*==================[type definitions]============================================================*/

/*==================[internal function declarations]==============================================*/

/*==================[internal constants]==========================================================*/

/*==================[internal data]===============================================================*/

/*==================[external constants]==========================================================*/

#define SECOC_START_SEC_CONST_UNSPECIFIED
#include <SecOC_MemMap.h>

CONST(SecOC_TxConfigType, SECOC_CONST) SecOC_TxConfig[SECOC_NUMBER_TX_PDUS] =
{
  /* SecOC_TxConfig[0] - Pdu_SecuredOut_285T */
  {
    /* CsmJobId */
    CsmConf_CsmJob_CsmJob_Pdu_SecuredOut_T,
    /* PduIdForSecuredPduAtSecOC */
    0U,
    /* MaxAuthAttempts */
    1U,
    /* GetTxFreshnessFuncType */
    SECOC_GET_TX_FRESHNESS_FUNC_TYPE,
    /* CsmFuncType */
    SECOC_TX_MACGENERATE_FUNC_TYPE,
    /* UseTp */
    FALSE,
    /* UseDynamicLength */
    TRUE
  },
};

#define SECOC_STOP_SEC_CONST_UNSPECIFIED
#include <SecOC_MemMap.h>

/*==================[external data]===============================================================*/

#define SECOC_START_SEC_VAR_INIT_UNSPECIFIED
#include <SecOC_MemMap.h>

VAR(SecOC_TxDataType, SECOC_VAR) SecOC_TxData[SECOC_NUMBER_TX_PDUS] =
{
  /* SecOC_TxData[0] - Pdu_SecuredOut_285T */
  {
    /* AuthenticatorLength */
    0U,
    /* ReceivedAuthPdu */
    {NULL_PTR, 0U},
    /* SecuredPdu */
    { NULL_PTR, 0U },
    /* DataToAuthenticator */
    NULL_PTR,
    /* Authenticator */
    NULL_PTR,
    /* DataLength */
    0U,
    /* CopiedDataFromSecLength */
    0U,
    /* AuthAttempts */
    0U,
    /* State */
    0U,
    /* PduREvent */
    0U,
    /* TransmitEvent */
    0U,
    /* ProcessingAuthentication */
    FALSE
  },
};

#define SECOC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SecOC_MemMap.h>

/*==================[external function definitions]===============================================*/

#define SECOC_START_SEC_CODE
#include <SecOC_MemMap.h>

FUNC(Std_ReturnType, SECOC_CODE) SecOC_Tx_Get_Freshness
(
        uint16                              instId,
        uint16                              SecOCFreshnessValueID,
  P2VAR(uint8,  AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValue,
  P2VAR(uint32, AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValueLength
)
{
  Std_ReturnType retVal = E_NOT_OK;

  SECOC_PARAM_UNUSED(instId);
  retVal = Rte_Call_PS_TxFreshnessManagement_GetTxFreshness(
                                                  SecOCFreshnessValueID,
                                                  SecOCFreshnessValue,
                                                  SecOCFreshnessValueLength
                                                );

  return retVal;
}

FUNC(void, SECOC_CODE) SecOC_Tx_SPDU_Confirmation
(
  uint16 instId,
  uint16 SecOCFreshnessValueID
)
{
  SECOC_PARAM_UNUSED(instId);
  (void)Rte_Call_PS_TxFreshnessManagement_SPduTxConfirmation(SecOCFreshnessValueID);
}

#define SECOC_STOP_SEC_CODE
#include <SecOC_MemMap.h>

/*==================[internal function definitions]===============================================*/

/*==================[end of file]=================================================================*/
