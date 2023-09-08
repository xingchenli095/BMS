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

#ifndef SECOC_TX_CFG_H
#define SECOC_TX_CFG_H
/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/





#include <SecOC_Cfg.h>

/*==================[macros]======================================================================*/

/** \brief Number of configured Tx Pdus, which shall be authenticated by the SecOC module
 */
#if (defined SECOC_NUMBER_TX_PDUS)
#error SECOC_NUMBER_TX_PDUS already defined
#endif
#define SECOC_NUMBER_TX_PDUS 1U

/** \brief Macro, which defines if user-defined main functions for TX PDUs are enabled or not
  *        STD_ON: User has configured main functions for TX PDUs
  *        STD_OFF: User has not configured any main functions for TX PDUs, default main functions will be used.
 */
#if (defined SECOC_USER_DEFINED_TX_MAINFUNCTIONS)
#error SECOC_USER_DEFINED_TX_MAINFUNCTIONS already defined
#endif
#define SECOC_USER_DEFINED_TX_MAINFUNCTIONS     STD_OFF

/** \brief Macro which defines whether the GetTxFreshnessTruncData function shall be used or not.
  *        STD_ON: The GetTxFreshnessTruncData function shall be used based on the configuration
  *        STD_OFF: The GetTxFreshnessTruncData function is not used
  */
#if (defined SECOC_TX_FRESHNESS_TRUNC_DATA)
  #error SECOC_TX_FRESHNESS_TRUNC_DATA is already defined
#endif
#define  SECOC_TX_FRESHNESS_TRUNC_DATA STD_OFF

/** \brief Macro which defines whether the GetTxFreshness function shall be used or not.
  *        STD_ON: The GetTxFreshness function shall be used based on the configuration
  *        STD_OFF: The GetTxFreshness function is not used
  */
#if (defined SECOC_TX_FRESHNESS)
  #error SECOC_TX_FRESHNESS is already defined
#endif
#define  SECOC_TX_FRESHNESS STD_ON

/** \brief Macro which defines whether the Csm_MacGenerate function shall be used or not.
  *        STD_ON: The Csm_MacGenerate function shall be used based on the configuration
  *        STD_OFF: The Csm_MacGenerate function is not used
  */
#if (defined SECOC_TX_USE_MACGENERATE)
  #error SECOC_TX_USE_MACGENERATE is already defined
#endif
#define  SECOC_TX_USE_MACGENERATE STD_ON

/** \brief Macro which defines whether the Csm_SignatureGenerate function shall be used or not.
  *        STD_ON: The Csm_SignatureGenerate function shall be used based on the configuration
  *        STD_OFF: The Csm_SignatureGenerate function is not used
  */
#if (defined SECOC_TX_USE_SIGNATUREGENERATE)
  #error SECOC_TX_USE_SIGNATUREGENERATE is already defined
#endif
#define  SECOC_TX_USE_SIGNATUREGENERATE STD_OFF

#if (defined SECOC_TX_SYNC_PDU_PROCESSING)
#error SECOC_TX_SYNC_PDU_PROCESSING already defined
#endif
/** \brief Macro which defines whether there is at least one tx Pdu using synchronous processing or not.
*         STD_ON: One or more tx pdus are using synchronous processing
*         STD_OFF: Synchronous processing is not used by any tx Pdu
*/
/* !LINKSTO SecOC.EB.Tx.SWS_SecOC_00024,1 */
/* !LINKSTO SecOC.EB.Tx.SWS_SecOC_00025,1 */
#define SECOC_TX_SYNC_PDU_PROCESSING STD_OFF

/** \brief Macro, which defines whether the secured PDU collection is used or not.
 *
 * STD_ON, if at least one Tx PDU is configured with the secured PDU collection.
 * STD_OFF, if no Tx PDU is configured with the secured PDU collection.
 */
#if (defined SECOC_TX_USE_SECURED_PDU_COL)
#error SECOC_TX_USE_SECURED_PDU_COL already defined
#endif
#define SECOC_TX_USE_SECURED_PDU_COL STD_OFF

/** \brief Macro, which defines whether the message linker in the cryptographic Tx PDU
 *         is used or not.
 *
 * STD_ON, if at least one cryptographic PDU is configured to contain the message linker.
 * STD_OFF, if no cryptographic PDU is configured to contain the message linker.
 */
#if (defined SECOC_TX_USE_MESS_LINKER)
#error SECOC_TX_USE_MESS_LINKER already defined
#endif
#define SECOC_TX_USE_MESS_LINKER STD_OFF

/** \brief Macro, which defines whether the shaping of the secured PDU on the Tx side
 *         will be performed or not
 *
 * STD_ON, if the shaping of the secured PDU will be performed.
 * STD_OFF, if the shaping of the secured PDU will not be performed.
 */
#if (defined SECOC_TX_SHAPE_SEC_PDU)
#error SECOC_TX_SHAPE_SEC_PDU already defined
#endif
#define SECOC_TX_SHAPE_SEC_PDU STD_OFF

/** \brief Macro, which defines whether the Csm services for the Tx side are used
 *         also in asynchronous mode.
 *
 * STD_ON, if asynchronous mode is used for at least one configured PDU.
 * STD_OFF, if asynchronous mode is not used.
 */
#if (defined SECOC_TX_CSM_ASYNC)
#error SECOC_TX_CSM_ASYNC already defined
#endif
#define SECOC_TX_CSM_ASYNC STD_OFF

/** \brief Macro, which defines whether the secured PDU header shall be used or not.
 *
 * STD_ON, the secured PDU header is enabled.
 * STD_OFF, the secured PDU header is disabled.
 */
#if (defined SECOC_TX_USE_SEC_PDU_HEADER)
#error SECOC_TX_USE_SEC_PDU_HEADER already defined
#endif
#define SECOC_TX_USE_SEC_PDU_HEADER STD_OFF

/** \brief Configuration switch indicating whether the "same buffer PDU collection" shall be used or not on the Tx side
 */
#if (defined SECOC_TX_USE_SAME_BUFFER)
#error SECOC_TX_USE_SAME_BUFFER already defined
#endif
#define SECOC_TX_USE_SAME_BUFFER STD_OFF

/** \brief Macro switch for TP Interface for transmission
 */
#if (defined SECOC_TX_USETP)
#error SECOC_TX_USETP already defined
#endif
#define SECOC_TX_USETP STD_OFF

/** \brief Configuration switch indicating whether the MAC Generate status shall be propagated for any Tx PDU
 */
#if (defined SECOC_MACGENERATE_STATUS_PROP_ENABLED)
#error SECOC_MACGENERATE_STATUS_PROP_ENABLED already defined
#endif
#define SECOC_MACGENERATE_STATUS_PROP_ENABLED STD_OFF

/** \brief Macro which defines the number of callout functions that propagates the MAC Generate status
 */
#if (defined SECOC_NUMBER_FUNC_MACGENERATE_STATUS_PROP)
#error SECOC_NUMBER_FUNC_MACGENERATE_STATUS_PROP already defined
#endif
#define SECOC_NUMBER_FUNC_MACGENERATE_STATUS_PROP 0U

/** \brief Macro, which defines whether the Tx confirmation timeout is used or not.
 *
 * STD_ON, if Tx confirmation timeout is used.
 * STD_OFF, if Tx confirmation timeout is not used.
 */
#if (defined SECOC_USE_TX_CONFIRMATION_TIMEOUT)
#error SECOC_USE_TX_CONFIRMATION_TIMEOUT already defined
#endif
#define SECOC_USE_TX_CONFIRMATION_TIMEOUT STD_OFF

/** \brief Macro, which defines whether SecOC provides the ability to bypass the authentication routine or not
 *
 * STD_ON, the bypass mechanism is available
 * STD_OFF, the bypass mechanism is not available
 */
#if (defined SECOC_BYPASS_AUTHENTICATION_ROUTINE)
#error SECOC_BYPASS_AUTHENTICATION_ROUTINE already defined
#endif
#define SECOC_BYPASS_AUTHENTICATION_ROUTINE STD_OFF

/** \brief Macro, which defines whether SecOC sends secured PDUS when the MAC could not be
 *         generated and is replaced by the configured default MAC.
 *
 * STD_ON, the secured PDUS are sent with the default configured MAC when the MAC could not be generated.
 * STD_OFF, the secured PDUS are not sent when the MAC could not be generated.
 */
#if (defined SECOC_USE_DEFAULT_AUTH)
#error SECOC_USE_DEFAULT_AUTH already defined
#endif
#define SECOC_USE_DEFAULT_AUTH STD_OFF

/*==================[type definitions]============================================================*/

/*==================[external constants]==========================================================*/


/*==================[external data]===============================================================*/

/*==================[external function declarations]==============================================*/

#define SECOC_START_SEC_CODE
#include <SecOC_MemMap.h>

/** \brief  This function is used by SecOC to obtain the current freshness used
 **         for the authentication procedure.
 **
 ** \param[in]   instId                     Identifier of the state machine instance.
 ** \param[in]   SecOCFreshnessValueID      Holds the identifier of the freshness value.
 ** \param[out]  SecOCFreshnessValue        Holds the pointer to the memory location where the
 **                                         freshenss shall be stored.
 ** \param[in]   SecOCFreshnessValueLength  Holds a pointer to the memory location in which
 **                                         the length in bits of the required freshness is
 **                                         stored.
 **
 ** \returns  Result of the request.
 **
 ** \retval  E_OK      request successful
 ** \retval  E_NOT_OK  request failed
 ** \retval  E_BUSY    request failed, service is still busy
 **
 ** \Synchronicity{Synchronous}
 ** \Reentrancy{Reentrant for different freshenss ID}
 **/
extern FUNC(Std_ReturnType, SECOC_CODE) SecOC_Tx_Get_Freshness
(
        uint16                              instId,
        uint16                              SecOCFreshnessValueID,
  P2VAR(uint8,  AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValue,
  P2VAR(uint32, AUTOMATIC, SECOC_APPL_DATA) SecOCFreshnessValueLength
);

/** \brief  This function is used by SecOC to indicate that the transmition of the secured PDU
 **         was initiated.
 **
 ** \param[in]  instId                 Identifier of the state machine instance.
 ** \param[in]  SecOCFreshnessValueID  Holds the identifier of the freshness.
 **
 ** \Synchronicity{Synchronous}
 ** \Reentrancy{Reentrant for different freshenss ID}
 **/
extern FUNC(void, SECOC_CODE) SecOC_Tx_SPDU_Confirmation
(
  uint16                       instId,
  uint16                       SecOCFreshnessValueID
);

#define SECOC_STOP_SEC_CODE
#include <SecOC_MemMap.h>

#endif /* #ifndef SECOC_TX_CFG_H */

/*==================[end of file]=================================================================*/
