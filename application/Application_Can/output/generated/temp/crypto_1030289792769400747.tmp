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


/*================================================================================================*/
#ifndef CRYPTO_AL_CFG_H
#define CRYPTO_AL_CFG_H

/*==================[includes]====================================================================*/

/*==================[macros]======================================================================*/

/** \brief Macro indicating scheduling type static */
#if (defined CRYPTO_AES_SCHEDULE_STATIC)
#error CRYPTO_AES_SCHEDULE_STATIC is already defined
#endif
#define  CRYPTO_AES_SCHEDULE_STATIC  1U

/** \brief Macro indicating scheduling type dynamic
 */
#if (defined CRYPTO_AES_SCHEDULE_DYNAMIC)
#error CRYPTO_AES_SCHEDULE_DYNAMIC is already defined
#endif
#define  CRYPTO_AES_SCHEDULE_DYNAMIC 2U

/** \brief Macro indicating the used scheduling type
 */
#if (defined CRYPTO_AES_SCHEDULE)
#error CRYPTO_AES_SCHEDULE is already defined
#endif
#define CRYPTO_AES_SCHEDULE CRYPTO_AES_SCHEDULE_STATIC
/* CRYPTO_AES_SCHEDULE_STATIC  (completed) ||
   CRYPTO_AES_SCHEDULE_DYNAMIC (pending) */

#define CRYPTO_AES_ENCRYPT_ENABLED STD_ON
#define CRYPTO_AES_DECRYPT_ENABLED STD_OFF

#define CRYPTO_CBC_PKCS7_ENC_ENABLED STD_OFF
#define CRYPTO_CBC_PKCS7_DEC_ENABLED STD_OFF

#define CRYPTO_CMAC_GEN_ENABLED STD_ON
#define CRYPTO_CMAC_VRFY_ENABLED STD_ON

#define CRYPTO_SIPHASH_GEN_ENABLED STD_OFF
#define CRYPTO_SIPHASH_VRFY_ENABLED STD_OFF

#define CRYPTO_GCM_ENC_ENABLED STD_OFF
#define CRYPTO_GCM_DEC_ENABLED STD_OFF

#define CRYPTO_SHA1_ENABLED STD_OFF

#define CRYPTO_SHA2_224_ENABLED STD_OFF
#define CRYPTO_SHA2_256_ENABLED STD_OFF
#define CRYPTO_SHA2_384_ENABLED STD_OFF
#define CRYPTO_SHA2_512_ENABLED STD_OFF

#define CRYPTO_SHA3_224_ENABLED STD_OFF
#define CRYPTO_SHA3_256_ENABLED STD_OFF
#define CRYPTO_SHA3_384_ENABLED STD_OFF
#define CRYPTO_SHA3_512_ENABLED STD_OFF

#define CRYPTO_EDDSA_GEN_ENABLED STD_OFF
#define CRYPTO_EDDSA_VRFY_ENABLED STD_OFF

#define CRYPTO_ECDSA_GEN_ENABLED STD_OFF
#define CRYPTO_ECDSA_VRFY_ENABLED STD_OFF

#define CRYPTO_SSGGENERATE_ENABLED STD_OFF

#define CRYPTO_CTRDRBGGENERATE_ENABLED STD_OFF

#define CRYPTO_HMAC_GEN_ENABLED STD_OFF
#define CRYPTO_HMAC_VRFY_ENABLED STD_OFF

#define CRYPTO_RSAPSS_VRFY_ENABLED STD_OFF

#define CRYPTO_RSAPKCS_VRFY_ENABLED STD_OFF

#define CRYPTO_RSAPKCS_GEN_ENABLED STD_OFF

#define CRYPTO_AES_CFB_ENC_ENABLED STD_OFF
#define CRYPTO_AES_CFB_DEC_ENABLED STD_OFF

#define CRYPTO_RSAESOAEP_ENC_ENABLED STD_OFF
#define CRYPTO_RSAESOAEP_DEC_ENABLED STD_OFF



#if (defined CRYPTO_KEYEXCHANGE_ENABLED)
#error CRYPTO_KEYEXCHANGE_ENABLED is already defined
#endif

/** /brief Macro to disable key exchange functionality if no key exchange private key key element is configured. */

#define CRYPTO_KEYEXCHANGE_ENABLED STD_OFF

#if (defined CRYPTO_CERT_MANAGEMENT_ENABLED)
#error CRYPTO_CERT_MANAGEMENT_ENABLED is already defined
#endif


#define CRYPTO_CERT_MANAGEMENT_ENABLED STD_OFF

#if (defined CRYPTO_CERT_CURRENT_TIME_ENABLED)
#error CRYPTO_CERT_CURRENT_TIME_ENABLED is already defined
#endif

#define CRYPTO_CERT_CURRENT_TIME_ENABLED STD_OFF

/*==================[type definitions]============================================================*/

/*==================[external function declarations]==============================================*/

/*==================[external constants]==========================================================*/

/*==================[external data]===============================================================*/

/*================================================================================================*/

#endif /* #ifndef CRYPTO_AL_CFG_H */

