/**
 * \file
 *
 * \brief AUTOSAR Csm
 *
 * This file contains the implementation of the AUTOSAR
 * module Csm.
 *
 * \version 3.1.22
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef CSM_CFG_H
#define CSM_CFG_H

/* !LINKSTO CSM.Dsn.SWS_Csm_00003,1 */

/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/

#include <Csm_Types.h>

/*==================[macros]======================================================================*/

/** \brief  Csm instance id
 **/
#ifdef CSM_INSTANCE_ID
  #error CSM_INSTANCE_ID is already defined
#endif
#define  CSM_INSTANCE_ID                          0x00U

/** \brief  General APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00001,1 */
#ifdef CSM_API_ENABLED_VERSIONINFO
  #error CSM_API_ENABLED_VERSIONINFO is already defined
#endif
#define  CSM_API_ENABLED_VERSIONINFO                           STD_OFF

/** \brief  Development Error detect enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00002,1 */
#ifdef CSM_API_ENABLED_DEVERRORDETECT
  #error CSM_API_ENABLED_DEVERRORDETECT is already defined
#endif
#define  CSM_API_ENABLED_DEVERRORDETECT                        STD_ON

/** \brief  Deprecated APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00003,1 */
#ifdef CSM_API_ENABLED_USEDEPRECATED
  #error CSM_API_ENABLED_USEDEPRECATED is already defined
#endif
#define  CSM_API_ENABLED_USEDEPRECATED                         STD_OFF

/** \brief  Key management APIs enabled/disabled infos
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00004,1 */
#ifdef CSM_API_ENABLED_KEYMNGMNT
  #error CSM_API_ENABLED_KEYMNGMNT is already defined
#endif
#define  CSM_API_ENABLED_KEYMNGMNT                             STD_ON

/** \brief  General services interfaces enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00005,1 */
#ifdef CSM_API_ENABLED_SERVICE_GENERAL
  #error CSM_API_ENABLED_SERVICE_GENERAL is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_GENERAL                       STD_ON

/** \brief  Asynchronous service interfaces enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00006,1 */
#ifdef CSM_API_ENABLED_SERVICE_ASYNCHRONOUS
  #error CSM_API_ENABLED_SERVICE_ASYNCHRONOUS is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_ASYNCHRONOUS                  STD_OFF

/** \brief  Synchronous service interfaces enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00007,1 */
#ifdef CSM_API_ENABLED_SERVICE_SYNCHRONOUS
  #error CSM_API_ENABLED_SERVICE_SYNCHRONOUS is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_SYNCHRONOUS                   STD_ON

/** \brief  Service AEADDecrypt APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_AEADDECRYPT
  #error CSM_API_ENABLED_SERVICE_AEADDECRYPT is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_AEADDECRYPT                   STD_OFF

/** \brief  Service AEADEncrypt APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_AEADENCRYPT
  #error CSM_API_ENABLED_SERVICE_AEADENCRYPT is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_AEADENCRYPT                   STD_OFF

/** \brief  Service Decrypt APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_DECRYPT
  #error CSM_API_ENABLED_SERVICE_DECRYPT is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_DECRYPT                       STD_OFF

/** \brief  Service Encrypt APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_ENCRYPT
  #error CSM_API_ENABLED_SERVICE_ENCRYPT is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_ENCRYPT                       STD_OFF

/** \brief  Service Hash APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_HASH
  #error CSM_API_ENABLED_SERVICE_HASH is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_HASH                          STD_OFF

/** \brief  Service JobCertificateParse APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBCERTIFICATEPARSE
  #error CSM_API_ENABLED_SERVICE_JOBCERTIFICATEPARSE is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBCERTIFICATEPARSE           STD_OFF

/** \brief  Service JobCertificateVerify APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBCERTIFICATEVERIFY
  #error CSM_API_ENABLED_SERVICE_JOBCERTIFICATEVERIFY is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBCERTIFICATEVERIFY          STD_OFF

/** \brief  Service JobKeyDerive APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBKEYDERIVE
  #error CSM_API_ENABLED_SERVICE_JOBKEYDERIVE is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBKEYDERIVE                  STD_OFF

/** \brief  Service JobKeyExchangeCalcPubVal APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL
  #error CSM_API_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL      STD_OFF

/** \brief  Service JobKeyExchangeCalcSecret APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET
  #error CSM_API_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET      STD_OFF

/** \brief  Service JobKeyGenerate APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBKEYGENERATE
  #error CSM_API_ENABLED_SERVICE_JOBKEYGENERATE is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBKEYGENERATE                STD_OFF

/** \brief  Service JobKeySetValid APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBKEYSETVALID
  #error CSM_API_ENABLED_SERVICE_JOBKEYSETVALID is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBKEYSETVALID                STD_OFF

/** \brief  Service JobRandomSeed APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_JOBRANDOMSEED
  #error CSM_API_ENABLED_SERVICE_JOBRANDOMSEED is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_JOBRANDOMSEED                 STD_OFF

/** \brief  Service MacGenerate APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_MACGENERATE
  #error CSM_API_ENABLED_SERVICE_MACGENERATE is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_MACGENERATE                   STD_ON

/** \brief  Service MacVerify APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_MACVERIFY
  #error CSM_API_ENABLED_SERVICE_MACVERIFY is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_MACVERIFY                     STD_ON

/** \brief  Service RandomGenerate APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_RANDOMGENERATE
  #error CSM_API_ENABLED_SERVICE_RANDOMGENERATE is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_RANDOMGENERATE                STD_OFF

/** \brief  Service SignatureGenerate APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_SIGNATUREGENERATE
  #error CSM_API_ENABLED_SERVICE_SIGNATUREGENERATE is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_SIGNATUREGENERATE             STD_OFF

/** \brief  Service SignatureVerify APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00008,1 */
#ifdef CSM_API_ENABLED_SERVICE_SIGNATUREVERIFY
  #error CSM_API_ENABLED_SERVICE_SIGNATUREVERIFY is already defined
#endif
#define  CSM_API_ENABLED_SERVICE_SIGNATUREVERIFY               STD_OFF

/** \brief  Key management RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00009,1 */
#ifdef CSM_RTE_ENABLED_KEYMNGMNT
  #error CSM_RTE_ENABLED_KEYMNGMNT is already defined
#endif
#define  CSM_RTE_ENABLED_KEYMNGMNT                             STD_OFF

/** \brief  General services RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00010,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_GENERAL
  #error CSM_RTE_ENABLED_SERVICE_GENERAL is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_GENERAL                       STD_OFF

/** \brief  General services RTE Optimized Async Wrapper interfaces enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00025,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_GENERAL_OAW
  #error CSM_RTE_ENABLED_SERVICE_GENERAL_OAW is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_GENERAL_OAW                   STD_OFF

/** \brief  Service AEADDecrypt RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_AEADDECRYPT
  #error CSM_RTE_ENABLED_SERVICE_AEADDECRYPT is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_AEADDECRYPT                   STD_OFF

/** \brief  Service AEADDecrypt RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_AEADDECRYPT_OAW
  #error CSM_RTE_ENABLED_SERVICE_AEADDECRYPT_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_AEADDECRYPT_OAW               STD_OFF

/** \brief  Service AEADEncrypt RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_AEADENCRYPT
  #error CSM_RTE_ENABLED_SERVICE_AEADENCRYPT is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_AEADENCRYPT                   STD_OFF

/** \brief  Service AEADEncrypt RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_AEADENCRYPT_OAW
  #error CSM_RTE_ENABLED_SERVICE_AEADENCRYPT_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_AEADENCRYPT_OAW               STD_OFF

/** \brief  Service Decrypt RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_DECRYPT
  #error CSM_RTE_ENABLED_SERVICE_DECRYPT is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_DECRYPT                       STD_OFF

/** \brief  Service Decrypt RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_DECRYPT_OAW
  #error CSM_RTE_ENABLED_SERVICE_DECRYPT_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_DECRYPT_OAW                   STD_OFF

/** \brief  Service Encrypt RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_ENCRYPT
  #error CSM_RTE_ENABLED_SERVICE_ENCRYPT is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_ENCRYPT                       STD_OFF

/** \brief  Service Encrypt RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_ENCRYPT_OAW
  #error CSM_RTE_ENABLED_SERVICE_ENCRYPT_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_ENCRYPT_OAW                   STD_OFF

/** \brief  Service Hash RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_HASH
  #error CSM_RTE_ENABLED_SERVICE_HASH is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_HASH                          STD_OFF

/** \brief  Service Hash RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_HASH_OAW
  #error CSM_RTE_ENABLED_SERVICE_HASH_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_HASH_OAW                      STD_OFF

/** \brief  Service JobCertificateParse RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEPARSE
  #error CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEPARSE is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEPARSE           STD_OFF

/** \brief  Service JobCertificateParse RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEPARSE_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEPARSE_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEPARSE_OAW       STD_OFF

/** \brief  Service JobCertificateVerify RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEVERIFY
  #error CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEVERIFY is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEVERIFY          STD_OFF

/** \brief  Service JobCertificateVerify RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEVERIFY_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEVERIFY_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBCERTIFICATEVERIFY_OAW      STD_OFF

/** \brief  Service JobKeyDerive RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYDERIVE
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYDERIVE is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBKEYDERIVE                  STD_OFF

/** \brief  Service JobKeyDerive RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYDERIVE_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYDERIVE_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBKEYDERIVE_OAW              STD_OFF

/** \brief  Service JobKeyExchangeCalcPubVal RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL      STD_OFF

/** \brief  Service JobKeyExchangeCalcPubVal RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCPUBVAL_OAW  STD_OFF

/** \brief  Service JobKeyExchangeCalcSecret RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET      STD_OFF

/** \brief  Service JobKeyExchangeCalcSecret RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBKEYEXCHANGECALCSECRET_OAW  STD_OFF

/** \brief  Service JobKeyGenerate RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYGENERATE
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYGENERATE is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBKEYGENERATE                STD_OFF

/** \brief  Service JobKeyGenerate RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYGENERATE_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYGENERATE_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBKEYGENERATE_OAW            STD_OFF

/** \brief  Service JobKeySetValid RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYSETVALID
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYSETVALID is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBKEYSETVALID                STD_OFF

/** \brief  Service JobKeySetValid RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBKEYSETVALID_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBKEYSETVALID_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBKEYSETVALID_OAW            STD_OFF

/** \brief  Service JobRandomSeed RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBRANDOMSEED
  #error CSM_RTE_ENABLED_SERVICE_JOBRANDOMSEED is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_JOBRANDOMSEED                 STD_OFF

/** \brief  Service JobRandomSeed RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_JOBRANDOMSEED_OAW
  #error CSM_RTE_ENABLED_SERVICE_JOBRANDOMSEED_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_JOBRANDOMSEED_OAW             STD_OFF

/** \brief  Service MacGenerate RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_MACGENERATE
  #error CSM_RTE_ENABLED_SERVICE_MACGENERATE is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_MACGENERATE                   STD_OFF

/** \brief  Service MacGenerate RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_MACGENERATE_OAW
  #error CSM_RTE_ENABLED_SERVICE_MACGENERATE_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_MACGENERATE_OAW               STD_OFF

/** \brief  Service MacVerify RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_MACVERIFY
  #error CSM_RTE_ENABLED_SERVICE_MACVERIFY is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_MACVERIFY                     STD_OFF

/** \brief  Service MacVerify RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_MACVERIFY_OAW
  #error CSM_RTE_ENABLED_SERVICE_MACVERIFY_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_MACVERIFY_OAW                 STD_OFF

/** \brief  Service RandomGenerate RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_RANDOMGENERATE
  #error CSM_RTE_ENABLED_SERVICE_RANDOMGENERATE is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_RANDOMGENERATE                STD_OFF

/** \brief  Service RandomGenerate RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_RANDOMGENERATE_OAW
  #error CSM_RTE_ENABLED_SERVICE_RANDOMGENERATE_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_RANDOMGENERATE_OAW            STD_OFF

/** \brief  Service SignatureGenerate RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_SIGNATUREGENERATE
  #error CSM_RTE_ENABLED_SERVICE_SIGNATUREGENERATE is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_SIGNATUREGENERATE             STD_OFF

/** \brief  Service SignatureGenerate RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_SIGNATUREGENERATE_OAW
  #error CSM_RTE_ENABLED_SERVICE_SIGNATUREGENERATE_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_SIGNATUREGENERATE_OAW         STD_OFF

/** \brief  Service SignatureVerify RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00011,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_SIGNATUREVERIFY
  #error CSM_RTE_ENABLED_SERVICE_SIGNATUREVERIFY is already defined
#endif
#define  CSM_RTE_ENABLED_SERVICE_SIGNATUREVERIFY               STD_OFF

/** \brief  Service SignatureVerify RTE Optimized Async Wrapper APIs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00026,1 */
#ifdef CSM_RTE_ENABLED_SERVICE_SIGNATUREVERIFY_OAW
  #error CSM_RTE_ENABLED_SERVICE_SIGNATUREVERIFY_OAW is already defined
#endif

#define  CSM_RTE_ENABLED_SERVICE_SIGNATUREVERIFY_OAW           STD_OFF

/** \brief  General RTE enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00012,1 */
#ifdef CSM_RTE_ENABLED
  #error CSM_RTE_ENABLED is already defined
#endif
#define  CSM_RTE_ENABLED                                   STD_OFF

/** \brief  Callback notification RTEs enabled/disabled info
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00025,1 */
#ifdef CSM_RTE_ENABLED_CALLBACK
  #error CSM_RTE_ENABLED_CALLBACK is already defined
#endif
#define  CSM_RTE_ENABLED_CALLBACK                   STD_OFF

/* --- Jobs --- */

/** \brief  Csm job 'CsmConf_CsmJob_CsmJob_Pdu_SecuredIn_R'
**/
/* !LINKSTO CSM.Dsn.Api/Macros/00013,1 */
#ifdef CsmConf_CsmJob_CsmJob_Pdu_SecuredIn_R
#error CsmConf_CsmJob_CsmJob_Pdu_SecuredIn_R is already defined
#endif
#define  CsmConf_CsmJob_CsmJob_Pdu_SecuredIn_R   0x00000000U

/** \brief  Csm job 'CsmConf_CsmJob_CsmJob_Pdu_SecuredOut_T'
**/
/* !LINKSTO CSM.Dsn.Api/Macros/00013,1 */
#ifdef CsmConf_CsmJob_CsmJob_Pdu_SecuredOut_T
#error CsmConf_CsmJob_CsmJob_Pdu_SecuredOut_T is already defined
#endif
#define  CsmConf_CsmJob_CsmJob_Pdu_SecuredOut_T  0x00000001U

/** \brief  Number of Csm jobs
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00014,1 */
#ifdef CSM_JOB_COUNT
  #error CSM_JOB_COUNT is already defined
#endif
#define  CSM_JOB_COUNT            0x00000002U

/* --- Keys --- */

/** \brief  The value representing an empty key in Crypto_JobPrimitiveInfoType
**/
#ifdef CSM_KEY_EMPTY
#error CSM_KEY_EMPTY is already defined
#endif
#define  CSM_KEY_EMPTY                    0xFFFFFFFFU

/** \brief  The Csm key 'CsmConf_CsmKey_Pdu_SecuredIn_R'
**/
/* !LINKSTO CSM.Dsn.Api/Macros/00015,1 */
#ifdef CsmConf_CsmKey_Pdu_SecuredIn_R
#error CsmConf_CsmKey_Pdu_SecuredIn_R is already defined
#endif
#define  CsmConf_CsmKey_Pdu_SecuredIn_R   0x00000000U 

/** \brief  The Csm key 'CsmConf_CsmKey_Pdu_SecuredOut_T'
**/
/* !LINKSTO CSM.Dsn.Api/Macros/00015,1 */
#ifdef CsmConf_CsmKey_Pdu_SecuredOut_T
#error CsmConf_CsmKey_Pdu_SecuredOut_T is already defined
#endif
#define  CsmConf_CsmKey_Pdu_SecuredOut_T  0x00000001U 

/** \brief  Number of Csm keys
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00016,1 */
#ifdef CSM_KEY_COUNT
  #error CSM_KEY_COUNT is already defined
#endif
#define  CSM_KEY_COUNT                    0x00000002U

/* --- Misc ------------------------------------------------------------------------------------- */

#ifdef CSM_API_VERSION
  #error CSM_API_VERSION is already defined
#endif
/** \brief  tbd **/
/* !LINKSTO CSM.Dsn.Api/Macros/00022,1 */
#define CSM_API_VERSION CSM_API_VERSION_EB

/*==================[type definitions]============================================================*/

/*==================[external constants]==========================================================*/

#define CSM_START_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/* --- PrimitiveInfo ---------------------------------------------------------------------------- */

/** \brief  Configured instances of Crypto_PrimitiveInfoType referenced in configured
 **         instances of Crypto_JobPrimitiveInfoType
 **/
extern CONST(Crypto_PrimitiveInfoType, CSM_CONST) Csm_PI_CsmJob_Pdu_SecuredIn_R_CsmPrim_MacVer_SecOC;
extern CONST(Crypto_PrimitiveInfoType, CSM_CONST) Csm_PI_CsmJob_Pdu_SecuredOut_T_CsmPrim_MacGen_SecOC;

/* --- JobPrimitiveInfo ------------------------------------------------------------------------- */

/** \brief  Configured instances of Crypto_JobPrimitiveInfoType referenced in configured
 **         instances of Crypto_JobType
 **/
extern CONST(Crypto_JobPrimitiveInfoType, CSM_CONST) Csm_JPI_CsmJob_Pdu_SecuredIn_R;
extern CONST(Crypto_JobPrimitiveInfoType, CSM_CONST) Csm_JPI_CsmJob_Pdu_SecuredOut_T;

/* --- JobInfo ---------------------------------------------------------------------------------- */

/** \brief  Configured instances of Crypto_JobInfoType referenced in configured
 **         instances of Crypto_JobType
 **/
extern CONST(Crypto_JobInfoType, CSM_CONST) Csm_JI_CsmJob_Pdu_SecuredIn_R;
extern CONST(Crypto_JobInfoType, CSM_CONST) Csm_JI_CsmJob_Pdu_SecuredOut_T;

#define CSM_STOP_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external data]===============================================================*/

#define CSM_START_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/* --- Jobs ------------------------------------------------------------------------------------- */

/** \brief  List of configured Csm jobs
 **/
extern VAR(Crypto_JobType, CSM_APPL_DATA) Csm_JobConfigurations[CSM_JOB_COUNT];

#define CSM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external function declarations]==============================================*/

#define CSM_START_SEC_CODE
#include <Csm_MemMap.h>

/* --- Callbacks -------------------------------------------------------------------------------- */

/** \brief  Declarations of configured Csm callbacks
 **/
/* !LINKSTO CSM.Dsn.Api/Funcs/00001,1 */

#define CSM_STOP_SEC_CODE
#include <Csm_MemMap.h>

/*================================================================================================*/

#endif /* #ifndef CSM_CFG_H */

/*==================[end of file]=================================================================*/

