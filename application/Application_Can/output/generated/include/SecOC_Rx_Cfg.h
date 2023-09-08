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

#ifndef SECOC_RX_CFG_H
#define SECOC_RX_CFG_H
/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/





#include <SecOC_Cfg.h>

/*==================[macros]======================================================================*/

/** \brief Number of configured Rx Pdus, which shall be verified by the SecOC module
 */
#if (defined SECOC_NUMBER_RX_PDUS)
#error SECOC_NUMBER_RX_PDUS already defined
#endif
#define SECOC_NUMBER_RX_PDUS 1U

/** \brief Macro, which defines if user-defined main functions for RX PDUs are enabled or not
  *        STD_ON: User has configured main functions for RX PDUs
  *        STD_OFF: User has not configured any main functions for RX PDUs, default main functions will be used.
 */
#if (defined SECOC_USER_DEFINED_RX_MAINFUNCTIONS)
#error SECOC_USER_DEFINED_RX_MAINFUNCTIONS already defined
#endif
#define SECOC_USER_DEFINED_RX_MAINFUNCTIONS     STD_OFF


/** \brief Macro, which defines if only the last verification status shall be reported or
 *         every verification attemp shall be reported
 */
#if (defined SECOC_PROPAGATEONLYFINALVERIFICATIONSTATUS)
#error SECOC_PROPAGATEONLYFINALVERIFICATIONSTATUS already defined
#endif
#define SECOC_PROPAGATEONLYFINALVERIFICATIONSTATUS STD_OFF

/** \brief Macro which defines whether the GetRxFreshnessAuthData function shall be used or not.
  *        STD_ON: The GetRxFreshnessAuthData function shall be used based on the configuration
  *        STD_OFF: The GetRxFreshnessAuthData function is not used
  */
#if (defined SECOC_RX_AUTH_DATA_FRESHNESS)
  #error SECOC_RX_AUTH_DATA_FRESHNESS is already defined
#endif
#define  SECOC_RX_AUTH_DATA_FRESHNESS STD_OFF

/** \brief Macro which defines whether the GetRxFreshness function shall be used or not.
  *        STD_ON: The GetRxFreshness function shall be used based on the configuration
  *        STD_OFF: The GetRxFreshness function is not used
  */
#if (defined SECOC_RX_FRESHNESS)
  #error SECOC_RX_FRESHNESS is already defined
#endif
#define  SECOC_RX_FRESHNESS STD_ON

/** \brief Macro which defines whether the Csm_MacVerify function shall be used or not.
  *        STD_ON: The Csm_MacVerify function shall be used based on the configuration
  *        STD_OFF: The Csm_MacVerify function is not used
  */
#if (defined SECOC_RX_USE_MACVERIFY)
  #error SECOC_RX_USE_MACVERIFY is already defined
#endif
#define  SECOC_RX_USE_MACVERIFY STD_ON

/** \brief Macro which defines whether the Csm_SignatureVerify function shall be used or not.
  *        STD_ON: The Csm_SignatureVerify function shall be used based on the configuration
  *        STD_OFF: The Csm_SignatureVerify function is not used
  */
#if (defined SECOC_RX_USE_SIGNATUREVERIFY)
  #error SECOC_RX_USE_SIGNATUREVERIFY is already defined
#endif
#define  SECOC_RX_USE_SIGNATUREVERIFY STD_OFF

#if (defined SECOC_RX_SYNC_PDU_PROCESSING)
#error SECOC_RX_SYNC_PDU_PROCESSING already defined
#endif
/** \brief Macro which defines whether there is at least one rx Pdu using synchronous processing or not.
*         STD_ON: One or more rx pdus are using synchronous processing
*         STD_OFF: Synchronous processing is not used by any rx Pdu
*/
/* !LINKSTO SecOC.EB.Rx.SWS_SecOC_00018,1 */
/* !LINKSTO SecOC.EB.Rx.SWS_SecOC_00019,1 */
#define SECOC_RX_SYNC_PDU_PROCESSING STD_OFF

/** \brief Macro, which defines whether the secured PDU collection is used or not.
 *
 * STD_ON, if at least one Rx PDU is configured with the secured PDU collection.
 * STD_OFF, if no Rx PDU is configured with the secured PDU collection.
 */
#if (defined SECOC_RX_USE_SECURED_PDU_COL)
#error SECOC_RX_USE_SECURED_PDU_COL already defined
#endif
#define SECOC_RX_USE_SECURED_PDU_COL STD_OFF

/** \brief Macro, which defines whether the message linker in the cryptographic Rx
 *         PDU is used or not.
 *
 * STD_ON, if at least one cryptographic PDU is configured to contain the message linker.
 * STD_OFF, if no cryptographic PDU is configured to contain the message linker.
 */
#if (defined SECOC_RX_USE_MESS_LINKER)
#error SECOC_RX_USE_MESS_LINKER already defined
#endif
#define SECOC_RX_USE_MESS_LINKER STD_OFF

/** \brief Macro, which defines whether the shaping of the secured PDU on the Rx side
 *         will be performed or not
 *
 * STD_ON, if the shaping of the secured PDU will be performed.
 * STD_OFF, if the shaping of the secured PDU will not be performed.
 */
#if (defined SECOC_RX_SHAPE_SEC_PDU)
#error SECOC_RX_SHAPE_SEC_PDU already defined
#endif
#define SECOC_RX_SHAPE_SEC_PDU STD_OFF



/** \brief Macro, which defines whether the Csm services for the Rx side are used
 *         also in asynchronous mode.
 *
 * STD_ON, if asynchronous mode is used for at least one configured PDU.
 * STD_OFF, if asynchronous mode is not used.
 */
#if (defined SECOC_RX_CSM_ASYNC)
#error SECOC_RX_CSM_ASYNC already defined
#endif
#define SECOC_RX_CSM_ASYNC STD_OFF

/** \brief Macro, which defines whether the secured PDU header shall be used or not.
 *
 * STD_ON, the secured PDU header is enabled.
 * STD_OFF, the secured PDU header is disabled.
 */
#if (defined SECOC_RX_USE_SEC_PDU_HEADER)
#error SECOC_RX_USE_SEC_PDU_HEADER already defined
#endif
#define SECOC_RX_USE_SEC_PDU_HEADER STD_OFF

/** \brief Configuration switch indicating whether the "same buffer PDU collection" shall be used or not on the Rx side
 */
#if (defined SECOC_RX_USE_SAME_BUFFER)
#error SECOC_RX_USE_SAME_BUFFER already defined
#endif
#define SECOC_RX_USE_SAME_BUFFER STD_OFF

/** \brief Macro switch for TP Interface for reception
 */
#if (defined SECOC_RX_USETP)
#error SECOC_RX_USETP already defined
#endif
#define SECOC_RX_USETP STD_OFF

/** \brief Configuration switch indicating whether the verification status shall be propagated for any Rx PDU
 */
#if (defined SECOC_VERIFICATION_STATUS_PROP_ENABLED)
#error SECOC_VERIFICATION_STATUS_PROP_ENABLED already defined
#endif
#define SECOC_VERIFICATION_STATUS_PROP_ENABLED                  SECOC_VERIFICATION_STATUS_PROP_NONE

/** \brief Configuration switch indicating whether the verification status shall
 *         be propagated throw client server interface
 */
#if (defined SECOC_CS_VERIFICATION_STATUS_PROP)
#error SECOC_CS_VERIFICATION_STATUS_PROP already defined
#endif
#define SECOC_CS_VERIFICATION_STATUS_PROP STD_OFF

/** \brief Macro which defines the number of callout functions that propagates the verification status
 */
#if (defined SECOC_NUMBER_FUNC_VERIFICATION_STATUS_PROP)
#error SECOC_NUMBER_FUNC_VERIFICATION_STATUS_PROP already defined
#endif
#define SECOC_NUMBER_FUNC_VERIFICATION_STATUS_PROP 0U

/** \brief Macro, which defines whether the MAC verification shall be performed on Secured I-PDU
 *
 * STD_ON, if verification is not performed.
 * STD_OFF, if verification is performed.
 */
#if (defined SECOC_SKIP_RX_PDU_VERIFICATION)
#error SECOC_SKIP_RX_PDU_VERIFICATION already defined
#endif
#define SECOC_SKIP_RX_PDU_VERIFICATION STD_OFF

/** \brief Macro, which defines whether the reception overflow strategy 'QUEUE' is used or not
 *
 * STD_ON, if the reception overflow strategy is set to 'QUEUE' for at least one configured PDU.
 * STD_OFF, if the reception overflow strategy 'QUEUE' is not used.
 */
#if (defined SECOC_QUEUE_INCOMING_PDU_ENABLED)
#error SECOC_QUEUE_INCOMING_PDU_ENABLED already defined
#endif
#define SECOC_QUEUE_INCOMING_PDU_ENABLED STD_OFF

/** \brief Macro, which defines whether the reception overflow strategy 'REPLACE' is used or not
 *
 * STD_ON, if the reception overflow strategy is set to 'REPLACE' for at least one configured PDU.
 * STD_OFF, if the reception overflow strategy 'REPLACE' is not used.
 */
#if (defined SECOC_REPLACE_CURRENT_PDU_ENABLED)
#error SECOC_REPLACE_CURRENT_PDU_ENABLED already defined
#endif
#define SECOC_REPLACE_CURRENT_PDU_ENABLED STD_OFF

#if (defined SECOC_VERIFY_STATUS_OVERRIDE_API_VERSION)
#error SECOC_VERIFY_STATUS_OVERRIDE_API_VERSION is already defined
#endif
/** \brief  This Macro determines the AUTOSAR version that is configured for VerifyStatusOverride **/
#define SECOC_VERIFY_STATUS_OVERRIDE_API_VERSION SECOC_API_VERSION_430


#if (defined SECOC_USE_META_DATA)
#error SECOC_USE_META_DATA is already defined
#endif
/** \brief  This Macro determines if the MetaData option is enabled or not **/
#define SECOC_USE_META_DATA STD_OFF
/** \brief Macro, which defines whether the function SecOC_VerifyStatusOverride provides the ability
 *         to override the VerifyStatus with "pass" or not.
 *
 * STD_ON, if SecOC_VerifyStatusOverride provides the ability to set the result to "pass".
 * STD_OFF, if SecOC_VerifyStatusOverride does not provide the ability to set the result to "pass".
 */
#if (defined SECOC_OVERRIDE_VERIFYSTATUS_PASS)
#error SECOC_OVERRIDE_VERIFYSTATUS_PASS defined
#endif
#define SECOC_OVERRIDE_VERIFYSTATUS_PASS STD_OFF

/** \brief Macro, which defines whether the verification result of the secured I-PDU shall be
 *         ignored.
 *
 * STD_ON,  verification result is ignored and PduR_SecOCRxIndication is called for secured I-PDU.
 * STD_OFF  only for verified secured I-PDU the PduR_SecOCRxIndication is called.
 */
#if (defined SECOC_IGNORE_VER_RESULT)
#error SECOC_IGNORE_VER_RESULT already defined
#endif
#define SECOC_IGNORE_VER_RESULT STD_OFF

/** \brief Macro, which defines whether the FvM result of the secured I-PDU shall be
 *         ignored.
 *
 * STD_ON,  FvM function result is ignored and PduR_SecOCRxIndication is called for secured I-PDU.1
 * STD_OFF  FvM function result is not ignored
 */
#if (defined SECOC_IGNORE_FVM_FAILURES)
#error SECOC_IGNORE_FVM_FAILURES already defined
#endif
#define SECOC_IGNORE_FVM_FAILURES STD_OFF

/*==================[type definitions]============================================================*/

/*==================[external constants]==========================================================*/



/*==================[external data]===============================================================*/

/*==================[external function declarations]==============================================*/

#define SECOC_START_SEC_CODE
#include <SecOC_MemMap.h>

/** \brief  This function is used by SecOC to provide the freshenss from the received secured PDU
 **         and to obtain the current freshness which shall be used for the verification procedure.
 **
 ** \param[in]   instId                              Identifier of the state machine instance.
 ** \param[in]   SecOCFreshnessValueID               Holds the identifier of the freshness.
 ** \param[out]  SecOCTruncatedFreshnessValue        Holds the pointer to the memory location where
 **                                                  the freshenss from the received secured PDU
 **                                                  shall be stored.
 ** \param[in]   SecOCTruncatedFreshnessValueLength  Holds the pointer to the memory location where
 **                                                  the length in bits of the freshness from the
 **                                                  secured PDU is stored.
 ** \param[in]   SecOCAuthVerifyAttempts             Holds the number of authentication verify
 **                                                  attempts of this PDU since the last reception.
 **                                                  The value is 0 for the first attempt and
 **                                                  incremented on every unsuccessful verification
 **                                                  attempt.
 ** \param[out]  SecOCFreshnessValue                 Holds the pointer to the memory location where
 **                                                  the freshenss used to authentication shall be
 **                                                  stored.
 ** \param[in]   SecOCFreshnessValueLength           Holds a pointer to the memory location in which
 **                                                  the length in bits of the required freshness
 **                                                  for authentication is stored.
 **
 ** \returns  Result of the request.
 **
 ** \retval   E_OK                    request successful
 ** \retval   E_NOT_OK                request failed
 ** \retval   E_BUSY                  request failed, service is still busy
 **
 ** \Synchronicity{Synchronous}
 ** \Reentrancy{Reentrant for different freshenss ID}
 **/
extern FUNC(Std_ReturnType, SECOC_CODE) SecOC_Rx_Get_Freshness
(
          uint16                              instId,
          uint16                              SecOCFreshnessValueID,
  P2CONST(uint8,  AUTOMATIC, SECOC_APPL_DATA) SecOCTruncatedFreshnessValue,
          uint32                              SecOCTruncatedFreshnessValueLength,
          uint16                              SecOCCounterSyncAttempts,
    P2VAR(uint8,  AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValue,
    P2VAR(uint32, AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValueLength
);

#define SECOC_STOP_SEC_CODE
#include <SecOC_MemMap.h>

#endif /* #ifndef SECOC_RX_CFG_H */

/*==================[end of file]=================================================================*/
