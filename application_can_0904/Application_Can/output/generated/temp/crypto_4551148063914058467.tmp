/**
 * \file
 *
 * \brief AUTOSAR Crypto
 *
 * This file contains the implementation of the AUTOSAR
 * module Crypto.
 *
 * \version 1.7.51
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */


#ifndef CRYPTO_CFG_H
#define CRYPTO_CFG_H

/* !LINKSTO SWS_Crypto_00008, 1 */

/*==================[misra deviations]============================================================*/

/*==================[inclusions]==================================================================*/

#include <Csm_Types.h>
#include <Crypto_AL_Cfg.h>





/*==================[macros]======================================================================*/

#if (defined CRYPTO_DEV_ERROR_DETECT)
#error CRYPTO_DEV_ERROR_DETECT is already defined
#endif
/** \brief Macro indicating whether the development error detection shall be enabled */
#define CRYPTO_DEV_ERROR_DETECT  STD_ON

#if (defined CRYPTO_VERSION_INFO_API)
#error CRYPTO_VERSION_INFO_API is already defined
#endif
/** \brief Macro indicating whether the version info API shall be enabled */

#define CRYPTO_VERSION_INFO_API  STD_OFF

#if (defined CRYPTO_CRYPTO_MAIN_FUNCTION_EXISTS)
#error CRYPTO_CRYPTO_MAIN_FUNCTION_EXISTS is already defined
#endif
/** \brief Macro indicating if the MainFunction shall be scheduled */
#define CRYPTO_CRYPTO_MAIN_FUNCTION_EXISTS STD_ON

#if (defined CRYPTO_INSTANCE_ID)
#error CRYPTO_INSTANCE_ID is already defined
#endif
/** \brief Macro indicating the Instance ID of the crypto driver. */
#define CRYPTO_INSTANCE_ID 0U

#if (defined CRYPTO_DRIVER_OBJECT_COUNT)
#error CRYPTO_DRIVER_OBJECT_COUNT is already defined
#endif
/** \brief Number of configured crypto driver objects */
#define CRYPTO_DRIVER_OBJECT_COUNT 1U

#if (defined CryptoConf_CryptoDriverObject_CryptoDriverObject_Software)
#error CryptoConf_CryptoDriverObject_CryptoDriverObject_Software is already defined
#endif
/** \brief Identifier of crypto driver object CryptoDriverObject_Software */
#define CryptoConf_CryptoDriverObject_CryptoDriverObject_Software 0U

#if (defined CRYPTO_DO_CRYPTODRIVEROBJECT_SOFTWARE_QUEUE_SIZE)
#error CRYPTO_DO_CRYPTODRIVEROBJECT_SOFTWARE_QUEUE_SIZE is already defined
#endif
/** \brief Queue size of crypto driver object CRYPTODRIVEROBJECT_SOFTWARE */
#define CRYPTO_DO_CRYPTODRIVEROBJECT_SOFTWARE_QUEUE_SIZE 0U


/** \brief EXCLUSIVE AREA QUEUE enabled/disabled
 */
#define  CRYPTO_QUEUE  STD_OFF
/** \brief Number of configured crypto keys
 */
#if (defined CRYPTO_KEY_COUNT)
#error CRYPTO_KEY_COUNT is already defined
#endif
/** \brief Number of configured crypto keys */
#define CRYPTO_KEY_COUNT 2U

#if (defined CRYPTO_API_ENABLED_KEYMNGMNT)
#error CRYPTO_API_ENABLED_KEYMNGMNT is already defined
#endif
/** \brief  Key management APIs enabled/disabled infos */
#define CRYPTO_API_ENABLED_KEYMNGMNT STD_ON

#if (defined CRYPTO_ENABLED_NVM)
#error CRYPTO_ENABLED_NVM is already defined
#endif
/** \brief NvM module dependency enabled/disabled */

#define CRYPTO_ENABLED_NVM  STD_OFF

#if (defined CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredOut_T)
#error CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredOut_T is already defined
#endif
/** \brief Identifier of crypto key CryptoKey_Pdu_SecuredOut_T */
#define CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredOut_T 0U

#if (defined CRYPTO_KEY_CRYPTOKEY_PDU_SECUREDOUT_T_DERIVE_ITERATIONS)
#error CRYPTO_KEY_CRYPTOKEY_PDU_SECUREDOUT_T_DERIVE_ITERATIONS is already defined
#endif
/** \brief Derive iterations for crypto key CRYPTOKEY_PDU_SECUREDOUT_T */
#define CRYPTO_KEY_CRYPTOKEY_PDU_SECUREDOUT_T_DERIVE_ITERATIONS 1U

#if (defined CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredIn_R)
#error CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredIn_R is already defined
#endif
/** \brief Identifier of crypto key CryptoKey_Pdu_SecuredIn_R */
#define CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredIn_R 1U

#if (defined CRYPTO_KEY_CRYPTOKEY_PDU_SECUREDIN_R_DERIVE_ITERATIONS)
#error CRYPTO_KEY_CRYPTOKEY_PDU_SECUREDIN_R_DERIVE_ITERATIONS is already defined
#endif
/** \brief Derive iterations for crypto key CRYPTOKEY_PDU_SECUREDIN_R */
#define CRYPTO_KEY_CRYPTOKEY_PDU_SECUREDIN_R_DERIVE_ITERATIONS 1U


#if (defined CRYPTO_KEY_ELEMENT_COUNT)
#error CRYPTO_KEY_ELEMENT_COUNT is already defined
#endif
/** \brief Number of configured crypto key elements */
#define CRYPTO_KEY_ELEMENT_COUNT 59U


#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_DATA)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_DATA is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_DATA */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_DATA 0U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CIPHER_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CMAC_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CMAC_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CMAC_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CMAC_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_HMAC_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_HMAC_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_HMAC_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_HMAC_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_SIPHASH_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_SIPHASH_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_SIPHASH_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_SIPHASH_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_SIGNATURE_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_SIGNATURE_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_SIGNATURE_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_SIGNATURE_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_PASSWORD)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_PASSWORD is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_PASSWORD */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_PASSWORD 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_KEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_KEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYGENERATE_KEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_KEY 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_SecOC_Key)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_SecOC_Key is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_SecOC_Key */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SecOC_Key 1U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_PROOF)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_PROOF is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_MAC_PROOF */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_PROOF 2U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_Key_Checksum)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_Key_Checksum is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_Key_Checksum */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_Key_Checksum 2U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG 3U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_SSG)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_SSG is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_SSG */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_STATE_SSG 3U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG 4U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_SSG)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_SSG is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_SSG */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_ALGORITHM_SSG 4U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_IV)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_IV is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CIPHER_IV */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_IV 5U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_PROOF)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_PROOF is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CIPHER_PROOF */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_PROOF 6U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_2NDKEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_2NDKEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CIPHER_2NDKEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CIPHER_2NDKEY 7U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_BASE)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_BASE is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_BASE */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_BASE 8U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1 9U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1 9U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519 9U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1 10U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1 10U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519 10U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST 12U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519 12U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_ALGORITHM 12U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_SALT)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_SALT is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_SALT */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_SALT 13U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ITERATIONS)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ITERATIONS is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ITERATIONS */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ITERATIONS 14U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256 15U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256 15U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_SEED)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_SEED is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYGENERATE_SEED */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_SEED 16U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_ALGORITHM)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_ALGORITHM is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYGENERATE_ALGORITHM */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYGENERATE_ALGORITHM 17U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT 18U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_CURRENT_TIME)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_CURRENT_TIME is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_CURRENT_TIME */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_CURRENT_TIME 19U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VERSION)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VERSION is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VERSION */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VERSION 20U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SERIALNUMBER)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SERIALNUMBER is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SERIALNUMBER */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SERIALNUMBER 21U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM 22U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_ISSUER)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_ISSUER is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_ISSUER */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_ISSUER 23U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE 24U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER 25U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SUBJECT 26U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_EXTENSIONS)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_EXTENSIONS is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_EXTENSIONS */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_EXTENSIONS 27U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_CERTIFICATE_SIGNATURE 28U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1 30U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1 30U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519 30U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_KEYEXCHANGE_CURVE 30U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_AES_EXPANDEDKEY)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_AES_EXPANDEDKEY is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_AES_EXPANDEDKEY */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_AES_EXPANDEDKEY 1000U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY1)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY1 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY1 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY1 1001U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY2)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY2 is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY2 */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_MAC_AESCMAC_SUBKEY2 1002U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RSA_BARRETT)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RSA_BARRETT is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RSA_BARRETT */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RSA_BARRETT 1003U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RSA_ADDITIONAL_INPUT)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RSA_ADDITIONAL_INPUT is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RSA_ADDITIONAL_INPUT */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RSA_ADDITIONAL_INPUT 1004U

#if (defined CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG)
#error CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG is already defined
#endif
/** \brief Identifier of crypto key element CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG 1005U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INDEX 0U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INDEX 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INDEX 2U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INDEX 3U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_SIZE 64U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INDEX 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INDEX 5U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_SIZE 64U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INDEX 6U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_SIZE 96U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INDEX 7U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INDEX 8U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INDEX 9U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_SIZE 48U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INDEX 10U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INDEX 11U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INDEX 12U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_SIZE 48U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INDEX 13U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INDEX 14U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE \
{ \
      0x19U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INDEX 15U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE \
{ \
      0x17U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INDEX 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE \
{ \
      0x06U,       0x08U,       0x2AU,       0x86U,       0x48U,       0xCEU,       0x3DU,       0x03U,   \
      0x01U,       0x07U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_SIZE 10U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INDEX 17U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE \
{ \
      0x06U,       0x05U,       0x2BU,       0x81U,       0x04U,       0x00U,       0x22U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_SIZE 7U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INDEX 18U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE \
{ \
      0x06U,       0x03U,       0x2BU,       0x65U,       0x6EU,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_SIZE 5U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INDEX 19U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_SIZE 64U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INDEX 20U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_SIZE 6U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INDEX 21U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_SIZE 1000U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INDEX 22U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INDEX 23U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INDEX 24U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INDEX 25U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_SIZE 20U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INDEX 26U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_SIZE 300U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INDEX 27U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INDEX 28U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_SIZE 500U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INDEX 29U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_SIZE 385U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INDEX 30U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_SIZE 6U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INDEX 31U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_SIZE 6U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INDEX 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INDEX 33U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_SIZE 48U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INDEX 34U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INDEX 35U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_SIZE 20U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INDEX 36U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE \
{ \
      0x01U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INDEX 37U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE \
{ \
      0x00U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INDEX 38U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INDEX 39U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INDEX 40U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE \
{ \
      0x02U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INDEX 41U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE \
{ \
      0x04U,   \
}

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INDEX 42U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_SIZE 240U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INDEX 43U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2 */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INDEX 44U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INDEX 45U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INDEX 46U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_SIZE 1U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INDEX 47U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INDEX 48U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INDEX 49U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INDEX 50U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INDEX 51U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INDEX 52U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INDEX 53U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INDEX 54U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INDEX 55U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INDEX 56U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_READ_ACCESS CRYPTO_RA_DENIED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_SIZE 32U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_WRITE_ACCESS CRYPTO_WA_DENIED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_KEY_CHECKSUM */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_INDEX 57U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_READ_ACCESS CRYPTO_RA_ALLOWED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE 4U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_WRITE_ACCESS CRYPTO_WA_ALLOWED
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_INDEX)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_INDEX is already defined
#endif
/** \brief Index of crypto key element CRYPTOKEYELEMENT_SECOC_KEY */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_INDEX 58U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_ALLOW_PARTIAL_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_ALLOW_PARTIAL_ACCESS is already defined
#endif
/** \brief Macro indicating whether partial access is allowed for a certain key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_ALLOW_PARTIAL_ACCESS FALSE

/* !LINKSTO EB_Crypto_01291,1 */
#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE is already defined
#endif
/** \brief Macro indicating the initial value of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE { 0x00U }

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_PERSIST)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_PERSIST is already defined
#endif
/** \brief Macro indicating whether the key element is persistent in non-volatile storage */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_PERSIST FALSE

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_READ_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_READ_ACCESS is already defined
#endif
/** \brief Macro indicating the read access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_READ_ACCESS CRYPTO_RA_ALLOWED

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE is already defined
#endif
/** \brief Macro indicating the size of the key element */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE 16U

#if (defined CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_WRITE_ACCESS)
#error CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_WRITE_ACCESS is already defined
#endif
/** \brief Macro indicating the write access rights */
#define CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_WRITE_ACCESS CRYPTO_WA_ALLOWED

#if (defined CRYPTO_AL_MAX_KEY_PERS_ELEMENT_SIZE)
#error CRYPTO_AL_MAX_KEY_PERS_ELEMENT_SIZE is already defined
#endif
/** \brief Max size of key element data. */
#define CRYPTO_AL_MAX_KEY_PERS_ELEMENT_SIZE (0U + 1U)

/* !LINKSTO Crypto.Req.Gen/NvM/01018,1 */




#if(defined CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE)
#error CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE is already defined
#endif
#ifndef CSM_SYM_KEY_MAX_LENGTH
/** \brief Maximum size of a symmetrical key. */
#define CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE 16U
#else
#if (CSM_SYM_KEY_MAX_LENGTH < 16)

#if (CSM_SYM_KEY_MAX_LENGTH > 0U)
#define CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE CSM_SYM_KEY_MAX_LENGTH
#else
#define CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE 1U
#endif
#else
#define CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE 16U
#endif
#endif

#if(defined CRYPTO_AL_ASYM_PRIVATE_MAX_KEY_ELEMENT_SIZE)
#error CRYPTO_AL_ASYM_PRIVATE_MAX_KEY_ELEMENT_SIZE is already defined
#endif
#ifndef CSM_ASYM_PRIVATE_KEY_MAX_LENGTH
/** \brief Maximum size of an asymmetrical private key. */
#define CRYPTO_AL_ASYM_PRIVATE_MAX_KEY_ELEMENT_SIZE 16U
#else
#if (CSM_ASYM_PRIVATE_KEY_MAX_LENGTH < 16)
#define CRYPTO_AL_ASYM_PRIVATE_MAX_KEY_ELEMENT_SIZE CSM_ASYM_PRIVATE_KEY_MAX_LENGTH
#else
#define CRYPTO_AL_ASYM_PRIVATE_MAX_KEY_ELEMENT_SIZE 16U
#endif
#endif

#if(defined CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE)
#error CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE is already defined
#endif
#ifndef CSM_ASYM_PUBLIC_KEY_MAX_LENGTH
/** \brief Maximum size of an asymmetrical public key. */
#define CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE 16U
#else
#if (CSM_ASYM_PUBLIC_KEY_MAX_LENGTH < 16)
#define CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE CSM_ASYM_PUBLIC_KEY_MAX_LENGTH
#else
#define CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE 16U
#endif
#endif


#if(defined CRYPTO_MAX_SALT_SIZE)
#error CRYPTO_MAX_SALT_SIZE is already defined
#endif
/** \brief Maximum size of key element containing SALT. */

#define CRYPTO_MAX_SALT_SIZE 0U

/*==================[declaration of types]========================================================*/


/* !LINKSTO EB_Crypto_01061,1 */
/** \brief Typedef for the Crypto_SymKeyType if the Csm_SymKeyType does not exist due to
 * not configured max key size in CSM.
 */
typedef struct
{
  uint8 data[CRYPTO_AL_SYM_MAX_KEY_ELEMENT_SIZE];
  uint32 length;
} Crypto_SymKeyType;


/* !LINKSTO EB_Crypto_01062,1 */
/** \brief Typedef for the Crypto_AsymPrivateKeyType if the Csm_AsymPrivateKeyType does
 * not exist due to not configured max key size in CSM.
 */
typedef struct
{
  uint8 data[CRYPTO_AL_ASYM_PRIVATE_MAX_KEY_ELEMENT_SIZE];
  uint32 length;
} Crypto_AsymPrivateKeyType;


/* !LINKSTO EB_Crypto_01063,1 */
/** \brief Typedef for the Crypto_AsymPublicKeyType if the Csm_AsymPublicKeyType does not
 * exist due to not configured max key size in CSM.
 */
typedef struct
{
  uint8 data[CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE];
  uint32 length;
} Crypto_AsymPublicKeyType;

/*==================[declaration of external constants]===========================================*/

#define CRYPTO_START_SEC_CONST_8
#include <Crypto_MemMap.h>

/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_KEY_CHECKSUM. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE];
/** \brief array with init values for the Key element CRYPTOKEYELEMENT_SECOC_KEY. */
extern CONST(uint8, CRYPTO_CONST)
       Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE
       [CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE];

#define CRYPTO_STOP_SEC_CONST_8
#include <Crypto_MemMap.h>

/*==================[declaration of external variables]===========================================*/

#define CRYPTO_START_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

/** \brief extern data for Key element CRYPTOKEYELEMENT_SECOC_KEY. */
extern VAR(uint8, CRYPTO_VAR)
       Crypto_AL_KeyElemData_0_0
       [CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE];
/** \brief extern data for Key element CRYPTOKEYELEMENT_KEY_CHECKSUM. */
extern VAR(uint8, CRYPTO_VAR)
       Crypto_AL_KeyElemData_0_1
       [CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE];
/** \brief extern data for Key element CRYPTOKEYELEMENT_SECOC_KEY. */
extern VAR(uint8, CRYPTO_VAR)
       Crypto_AL_KeyElemData_1_0
       [CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE];
/** \brief extern data for Key element CRYPTOKEYELEMENT_KEY_CHECKSUM. */
extern VAR(uint8, CRYPTO_VAR)
       Crypto_AL_KeyElemData_1_1
       [CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

/*==================[declaration of external functions]===========================================*/

/*================================================================================================*/

#endif /* #ifndef CRYPTO_CFG_H */

/*==================[end of file]=================================================================*/
