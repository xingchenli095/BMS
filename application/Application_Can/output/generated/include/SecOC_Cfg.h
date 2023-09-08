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

#ifndef SECOC_CFG_H
#define SECOC_CFG_H

/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/










#include <SecOC_Types.h>
#include <SecOC_Rx_Cfg.h>
#include <SecOC_Tx_Cfg.h>

/*==================[macros]======================================================================*/

/* !LINKSTO SecOC.PB.Impl.Hash,1 */
#if (defined SECOC_CFG_SIGNATURE)
#error SECOC_CFG_SIGNATURE already defined
#endif
#define SECOC_CFG_SIGNATURE 1275670664U

#if (defined SECOC_PUBLIC_INFO_SIGNATURE)
#error SECOC_PUBLIC_INFO_SIGNATURE already defined
#endif
#define SECOC_PUBLIC_INFO_SIGNATURE 844678326U

/* !LINKSTO SecOC.PB.Impl.PbCfgM,1 */
#if (defined SECOC_PBCFGM_SUPPORT_ENABLED)
#error SECOC_PBCFGM_SUPPORT_ENABLED already defined
#endif
#define SECOC_PBCFGM_SUPPORT_ENABLED STD_OFF

/* ----- Pre-processor switch to enable/disable relocatable post build configuration ----- */

#if (defined SECOC_RELOCATABLE_CFG_ENABLE)
#error SECOC_RELOCATABLE_CFG_ENABLE already defined
#endif
#if (SECOC_PBCFGM_SUPPORT_ENABLED == STD_ON)
/* !LINKSTO SecOC.PB.Impl.PbcfgM.Relocatable,1 */
#define SECOC_RELOCATABLE_CFG_ENABLE STD_ON
#else
/* !LINKSTO SecOC.PB.Impl.NoPbcfgM.Relocatable,1 */
#define SECOC_RELOCATABLE_CFG_ENABLE STD_ON
#endif

/** \brief Flag to indicate if PduR_SecOCCancelTransmit is available
 */
#if (defined SECOC_PDUR_SECOCCANCELTRANSMIT)
#error SECOC_PDUR_SECOCCANCELTRANSMIT already defined
#endif
#define SECOC_PDUR_SECOCCANCELTRANSMIT STD_OFF


/** \brief Macro, which defines the length in bytes of the Data ID element
 */
#if (defined SECOC_NR_PARTITIONS)
#error SECOC_NR_PARTITIONS already defined
#endif
#define SECOC_NR_PARTITIONS 0U

/** \brief Macro, which defines the number of partitions where SecOC main functions are running
 */
#if (defined SECOC_DATAID_LENGTH)
#error SECOC_DATAID_LENGTH already defined
#endif
#define SECOC_DATAID_LENGTH 2U

/** \brief Macro, which defines whether AUTOSAR 4.0.3 APIs or 4.2.1 APIs of the PduR shall be used.
 *
 * STD_ON, if AUTOSAR 4.0.3 APIs are used.
 * STD_OFF, if AUTOSAR 4.2.1 APIs are used.
 */
#if (defined SECOC_ASR403_API)
#error SECOC_ASR403_API already defined
#endif
#define SECOC_ASR403_API STD_OFF

/** \brief Macro, which defines whether Rte usage is configured for the SecOC.
 *
 * STD_ON, if Rte usage is enabled.
 * STD_OFF, if Rte usage is disabled.
 */
#if (defined SECOC_INCLUDE_RTE)
#error SECOC_INCLUDE_RTE already defined
#endif
#define SECOC_INCLUDE_RTE STD_ON

/** \brief Macro, which defines whether Det usage is configured for the SecOC.
 *
 * STD_ON, if development error detection is enabled.
 * STD_OFF, if development error detection is disabled.
 */
#if (defined SECOC_DET_ENABLED)
#error SECOC_DET_ENABLED already defined
#endif
#define SECOC_DET_ENABLED STD_OFF

/** \brief Macro, which defines whether the SecOC provides the API SecOC_GetVersionInfo()
 *
 * STD_ON, if SecOC_GetVersionInfo() is available.
 * STD_OFF, if SecOC_GetVersionInfo() is not available.
 */
#if (defined SECOC_VERSION_INFO_API)
#error SECOC_VERSION_INFO_API already defined
#endif
#define SECOC_VERSION_INFO_API STD_OFF

/** \brief Macro which defines whether the authenticator length is passed to the cryptographic
 *         algorithm in bits or in bytes
 *         STD_ON:  Authenticator is passed in bits to the cryptographic algorithm
 *         STD_OFF: Authenticator is passed in bytes to the cryptographic algorithm
 */
#if (defined SECOC_AUTH_LENGTH_BITS)
#error SECOC_AUTH_LENGTH_BITS already defined
#endif
#define SECOC_AUTH_LENGTH_BITS STD_ON

/** \brief Macro which defines whether the secured area within a PDU shall be used or not.
  *        STD_ON: Secured area within a PDU is used, the secured part of the authentic PDU will be sent authenticator
  *        STD_OFF: Secured area within a PDU is not used, the complete authentic PDU will be sent to the authenticator
  */
#if (defined SECOC_PDU_SECURED_AREA)
  #error SECOC_PDU_SECURED_AREA is already defined
#endif
#define  SECOC_PDU_SECURED_AREA STD_OFF

/** \brief  How the current freshness value shall be determined.
 */
#if (defined SECOC_QUERY_FRESHNESS_VALUE)
#error SECOC_QUERY_FRESHNESS_VALUE already defined
#endif
#define SECOC_QUERY_FRESHNESS_VALUE SECOC_FRESHNESS_RTE

/** \brief Macro, which defines if SecOC calls during the initialization phase for every PDU an
 *         external API defined by SecOCCsmJobRefCallout to obtain the Csm job ID that shall be
 *         used together with the Csm services
 *
 * STD_ON, the callout will be executed to obtain the Csm job ID
 * STD_OFF, no callout shall be done
 */
#if (defined SECOC_USE_CSMJOBREF_CALLOUT)
#error SECOC_USE_CSMJOBREF_CALLOUT already defined
#endif
#define SECOC_USE_CSMJOBREF_CALLOUT STD_OFF


/*==================[type definitions]============================================================*/

/*==================[external constants]==========================================================*/

/*==================[external data]===============================================================*/

/*==================[external function declarations]==============================================*/


#endif /* #ifndef SECOC_CFG_H */

/*==================[end of file]=================================================================*/
