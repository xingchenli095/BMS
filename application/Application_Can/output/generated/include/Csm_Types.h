


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

#ifndef CSM_TYPES_H
#define CSM_TYPES_H

/* !LINKSTO CSM.Dsn.SWS_Csm_00004,1 */

/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/

/* !LINKSTO SWS_Csm_00068,1 */
#include <Std_Types.h>


#include <Csm_Version.h>

/*==================[macros]======================================================================*/

/* --- Crypto_AlgorithmFamilyType --------------------------------------------------------------- */

/** \brief  Algorithm family is not set.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_NOT_SET
  #define  CRYPTO_ALGOFAM_NOT_SET  0x0000U
#endif /* #ifndef  CRYPTO_ALGOFAM_NOT_SET */

/** \brief  SHA1 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA1
  #define  CRYPTO_ALGOFAM_SHA1  0x0001U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA1 */

/** \brief  SHA2-224 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA2_224
  #define  CRYPTO_ALGOFAM_SHA2_224  0x0002U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA2_224 */

/** \brief  SHA2-256 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA2_256
  #define  CRYPTO_ALGOFAM_SHA2_256  0x0003U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA2_256 */

/** \brief  SHA2-384 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA2_384
  #define  CRYPTO_ALGOFAM_SHA2_384  0x0004U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA2_384 */

/** \brief  SHA2-512 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA2_512
  #define  CRYPTO_ALGOFAM_SHA2_512  0x0005U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA2_512 */

/** \brief  SHA2-512/224 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA2_512_224
  #define  CRYPTO_ALGOFAM_SHA2_512_224  0x0006U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA2_512_224 */

/** \brief  SHA2-512/256 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA2_512_256
  #define  CRYPTO_ALGOFAM_SHA2_512_256  0x0007U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA2_512_256 */

/** \brief  SHA3-224 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA3_224
  #define  CRYPTO_ALGOFAM_SHA3_224  0x0008U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA3_224 */

/** \brief  SHA3-256 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA3_256
  #define  CRYPTO_ALGOFAM_SHA3_256  0x0009U
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA3_256 */

/** \brief  SHA3-384 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA3_384
  #define  CRYPTO_ALGOFAM_SHA3_384  0x000AU
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA3_384 */

/** \brief  SHA3-512 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHA3_512
  #define  CRYPTO_ALGOFAM_SHA3_512  0x000BU
#endif /* #ifndef  CRYPTO_ALGOFAM_SHA3_512 */

/** \brief  SHAKE128 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHAKE128
  #define  CRYPTO_ALGOFAM_SHAKE128  0x000CU
#endif /* #ifndef  CRYPTO_ALGOFAM_SHAKE128 */

/** \brief  SHAKE256 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SHAKE256
  #define  CRYPTO_ALGOFAM_SHAKE256  0x000DU
#endif /* #ifndef  CRYPTO_ALGOFAM_SHAKE256 */

/** \brief  RIPEMD hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_RIPEMD160
  #define  CRYPTO_ALGOFAM_RIPEMD160  0x000EU
#endif /* #ifndef  CRYPTO_ALGOFAM_RIPEMD160 */

/** \brief  BLAKE-1-256 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_BLAKE_1_256
  #define  CRYPTO_ALGOFAM_BLAKE_1_256  0x000FU
#endif /* #ifndef  CRYPTO_ALGOFAM_BLAKE_1_256 */

/** \brief  BLAKE-1-512 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_BLAKE_1_512
  #define  CRYPTO_ALGOFAM_BLAKE_1_512  0x0010U
#endif /* #ifndef  CRYPTO_ALGOFAM_BLAKE_1_512 */

/** \brief  BLAKE-2s-256 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_BLAKE_2s_256
  #define  CRYPTO_ALGOFAM_BLAKE_2s_256  0x0011U
#endif /* #ifndef  CRYPTO_ALGOFAM_BLAKE_2s_256 */

/** \brief  BLAKE-2s-512 hash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_BLAKE_2s_512
  #define  CRYPTO_ALGOFAM_BLAKE_2s_512  0x0012U
#endif /* #ifndef  CRYPTO_ALGOFAM_BLAKE_2s_512 */

/** \brief  3DES cipher.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_3DES
  #define  CRYPTO_ALGOFAM_3DES  0x0013U
#endif /* #ifndef  CRYPTO_ALGOFAM_3DES */

/** \brief  AES cipher.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_AES
  #define  CRYPTO_ALGOFAM_AES  0x0014U
#endif /* #ifndef  CRYPTO_ALGOFAM_AES */

/** \brief  ChaCha cipher.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_CHACHA
  #define  CRYPTO_ALGOFAM_CHACHA  0x0015U
#endif /* #ifndef  CRYPTO_ALGOFAM_CHACHA */

/** \brief  RSA cipher.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_RSA
  #define  CRYPTO_ALGOFAM_RSA  0x0016U
#endif /* #ifndef  CRYPTO_ALGOFAM_RSA */

/** \brief  ED22518 elliptic curve.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_ED25519
  #define  CRYPTO_ALGOFAM_ED25519  0x0017U
#endif /* #ifndef  CRYPTO_ALGOFAM_ED25519 */

/** \brief  Brainpool elliptic curve.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_BRAINPOOL
  #define  CRYPTO_ALGOFAM_BRAINPOOL  0x0018U
#endif /* #ifndef  CRYPTO_ALGOFAM_BRAINPOOL */

/** \brief  NIST ECC elliptic curves.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_ECCNIST
  #define  CRYPTO_ALGOFAM_ECCNIST  0x0019U
#endif /* #ifndef  CRYPTO_ALGOFAM_ECCNIST */

/** \brief  Secure Counter.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SECURECOUNTER
  #define  CRYPTO_ALGOFAM_SECURECOUNTER  0x001AU
#endif /* #ifndef  CRYPTO_ALGOFAM_SECURECOUNTER */

/** \brief  Random Number Generator.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_RNG
  #define  CRYPTO_ALGOFAM_RNG  0x001BU
#endif /* #ifndef  CRYPTO_ALGOFAM_RNG */

/** \brief  SipHash.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_SIPHASH
  #define  CRYPTO_ALGOFAM_SIPHASH  0x001CU
#endif /* #ifndef  CRYPTO_ALGOFAM_SIPHASH */

/** \brief  ECIES Cipher.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_ECIES
  #define  CRYPTO_ALGOFAM_ECIES  0x001DU
#endif /* #ifndef  CRYPTO_ALGOFAM_ECIES */










/** \brief  Custom algorithm family.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef  CRYPTO_ALGOFAM_CUSTOM
  #define  CRYPTO_ALGOFAM_CUSTOM  0x00FFU
#endif /* #ifndef  CRYPTO_ALGOFAM_CUSTOM */

/* --- Crypto_AlgorithmModeType ----------------------------------------------------------------- */

/** \brief  Algorithm key is not set.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_NOT_SET
  #define  CRYPTO_ALGOMODE_NOT_SET  0x0000U
#endif /* #ifndef  CRYPTO_ALGOMODE_NOT_SET */

/** \brief  Blockmode: Electronic Code Book.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_ECB
  #define  CRYPTO_ALGOMODE_ECB  0x0001U
#endif /* #ifndef  CRYPTO_ALGOMODE_ECB */

/** \brief  Blockmode: Cipher Block Chaining.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_CBC
  #define  CRYPTO_ALGOMODE_CBC  0x0002U
#endif /* #ifndef  CRYPTO_ALGOMODE_CBC */

/** \brief  Blockmode: Cipher Feedback Mode.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_CFB
  #define  CRYPTO_ALGOMODE_CFB  0x0003U
#endif /* #ifndef  CRYPTO_ALGOMODE_CFB */

/** \brief  Blockmode: Output Feedback Mode.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_OFB
  #define  CRYPTO_ALGOMODE_OFB  0x0004U
#endif /* #ifndef  CRYPTO_ALGOMODE_OFB */

/** \brief  Blockmode: Counter Modex.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_CTR
  #define  CRYPTO_ALGOMODE_CTR  0x0005U
#endif /* #ifndef  CRYPTO_ALGOMODE_CTR */

/** \brief  Blockmode: Galois/Counter Mode.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_GCM
  #define  CRYPTO_ALGOMODE_GCM  0x0006U
#endif /* #ifndef  CRYPTO_ALGOMODE_GCM */

/** \brief  XOR-encryption-based tweaked-codebook mode with ciphertext stealing.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_XTS
  #define  CRYPTO_ALGOMODE_XTS  0x0007U
#endif /* #ifndef  CRYPTO_ALGOMODE_XTS */

/** \brief  RSA Optimal Asymmetric Encryption Padding.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_RSAES_OAEP
  #define  CRYPTO_ALGOMODE_RSAES_OAEP  0x0008U
#endif /* #ifndef  CRYPTO_ALGOMODE_RSAES_OAEP */

/** \brief  RSA encryption/decryption with PKCS#1 v1.5 padding.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_RSAES_PKCS1_v1_5
  #define  CRYPTO_ALGOMODE_RSAES_PKCS1_v1_5  0x0009U
#endif /* #ifndef  CRYPTO_ALGOMODE_RSAES_PKCS1_v1_5 */

/** \brief  RSA Probabilistic Signature Scheme.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_RSASSA_PSS
  #define  CRYPTO_ALGOMODE_RSASSA_PSS  0x000AU
#endif /* #ifndef  CRYPTO_ALGOMODE_RSASSA_PSS */

/** \brief  RSA signature with PKCS#1 v1.5.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5
  #define  CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5  0x000BU
#endif /* #ifndef  CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5 */

/** \brief  8 rounds (e.g. ChaCha8).
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_8ROUNDS
  #define  CRYPTO_ALGOMODE_8ROUNDS  0x000CU
#endif /* #ifndef  CRYPTO_ALGOMODE_8ROUNDS */

/** \brief  12 rounds (e.g. ChaCha12).
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_12ROUNDS
  #define  CRYPTO_ALGOMODE_12ROUNDS  0x000DU
#endif /* #ifndef  CRYPTO_ALGOMODE_12ROUNDS */

/** \brief  20 rounds (e.g. ChaCha20).
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_20ROUNDS
  #define  CRYPTO_ALGOMODE_20ROUNDS  0x000EU
#endif /* #ifndef  CRYPTO_ALGOMODE_20ROUNDS */

/** \brief  Hashed-based MAC.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_HMAC
  #define  CRYPTO_ALGOMODE_HMAC  0x000FU
#endif /* #ifndef  CRYPTO_ALGOMODE_HMAC */

/** \brief  Cipher-based MAC.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_CMAC
  #define  CRYPTO_ALGOMODE_CMAC  0x0010U
#endif /* #ifndef  CRYPTO_ALGOMODE_CMAC */

/** \brief  Galois MAC.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_GMAC
  #define  CRYPTO_ALGOMODE_GMAC  0x0011U
#endif /* #ifndef  CRYPTO_ALGOMODE_GMAC */

/** \brief  Counter-based Deterministic Random Bit Generator.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_CTRDRBG
  #define  CRYPTO_ALGOMODE_CTRDRBG  0x0012U
#endif /* #ifndef  CRYPTO_ALGOMODE_CTRDRBG */

/** \brief  Siphash-2-4.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_SIPHASH_2_4
  #define  CRYPTO_ALGOMODE_SIPHASH_2_4  0x0013U
#endif /* #ifndef  CRYPTO_ALGOMODE_SIPHASH_2_4 */

/** \brief  Siphash-4-8.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_SIPHASH_4_8
  #define  CRYPTO_ALGOMODE_SIPHASH_4_8  0x0014U
#endif /* #ifndef  CRYPTO_ALGOMODE_SIPHASH_4_8 */


/** \brief  Custom algorithm mode.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef  CRYPTO_ALGOMODE_CUSTOM
  #define  CRYPTO_ALGOMODE_CUSTOM  0x00FFU
#endif /* #ifndef  CRYPTO_ALGOMODE_CUSTOM */

/* --- Crypto_OperationModeType ----------------------------------------------------------------- */

/** \brief  Operation Mode is 'Start'. The job's state shall be reset, i.e. previous input data
 **         and intermediate results shall be deleted.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01029,1 */
#ifndef  CRYPTO_OPERATIONMODE_START
  #define  CRYPTO_OPERATIONMODE_START  0x0001U
#endif /* #ifndef  CRYPTO_OPERATIONMODE_START */

/** \brief  Operation Mode is 'Update'. Used to calculate intermediate results.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01029,1 */
#ifndef  CRYPTO_OPERATIONMODE_UPDATE
  #define  CRYPTO_OPERATIONMODE_UPDATE  0x0002U
#endif /* #ifndef  CRYPTO_OPERATIONMODE_UPDATE */

/** \brief  Operation Mode is 'Stream Start'. Mixture of 'Start' and 'Update'. Used for
 **         streaming.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01029,1 */
#ifndef  CRYPTO_OPERATIONMODE_STREAMSTART
  #define  CRYPTO_OPERATIONMODE_STREAMSTART  0x0003U
#endif /* #ifndef  CRYPTO_OPERATIONMODE_STREAMSTART */

/** \brief  Operation Mode is 'Finish'. The calculations shall be finalized.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01029,1 */
#ifndef  CRYPTO_OPERATIONMODE_FINISH
  #define  CRYPTO_OPERATIONMODE_FINISH  0x0004U
#endif /* #ifndef  CRYPTO_OPERATIONMODE_FINISH */

/** \brief  Operation Mode is 'Single Call'. Mixture of 'Start', 'Update' and 'Finish'.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01029,1 */
#ifndef  CRYPTO_OPERATIONMODE_SINGLECALL
  #define  CRYPTO_OPERATIONMODE_SINGLECALL  0x0007U
#endif /* #ifndef  CRYPTO_OPERATIONMODE_SINGLECALL */

/* --- Crypto_ProcessingType -------------------------------------------------------------------- */

/** \brief  Asynchronous job processing.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01049,1 */
#ifndef  CRYPTO_PROCESSING_ASYNC
  #define  CRYPTO_PROCESSING_ASYNC  0x0000U
#endif /* #ifndef  CRYPTO_PROCESSING_ASYNC */

/** \brief  Synchronous job processing.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01049,1 */
#ifndef  CRYPTO_PROCESSING_SYNC
  #define  CRYPTO_PROCESSING_SYNC  0x0001U
#endif /* #ifndef  CRYPTO_PROCESSING_SYNC */

/* --- Crypto_VerifyResultType ------------------------------------------------------------------ */

/** \brief  The result of the verification is 'true', i.e. the two compared elements are
 **         identical. This return code shall be given as value '0'.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01024,1 */
#ifndef  CRYPTO_E_VER_OK
  #define  CRYPTO_E_VER_OK  0x0000U
#endif /* #ifndef  CRYPTO_E_VER_OK */

/** \brief  The result of the verification is 'false', i.e. the two compared elements are not
 **         identical. This return code shall be given as value '1'.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01024,1 */
#ifndef  CRYPTO_E_VER_NOT_OK
  #define  CRYPTO_E_VER_NOT_OK  0x0001U
#endif /* #ifndef  CRYPTO_E_VER_NOT_OK */

/* --- Crypto_JobStateType ---------------------------------------------------------------------- */

/** \brief  Job is in the state 'idle'. This state is reached after Csm_Init() or when the
 **         'Finish' state is finished.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01028,1 */
#ifndef  CRYPTO_JOBSTATE_IDLE
  #define  CRYPTO_JOBSTATE_IDLE  0x0000U
#endif /* #ifndef  CRYPTO_JOBSTATE_IDLE */

/** \brief  Job is in the state 'active'. There was already some input or there are
 **         intermediate results. This state is reached, when the 'update' or 'start' operation
 **         finishes.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01028,1 */
#ifndef  CRYPTO_JOBSTATE_ACTIVE
  #define  CRYPTO_JOBSTATE_ACTIVE  0x0001U
#endif /* #ifndef  CRYPTO_JOBSTATE_ACTIVE */

/* --- Crypto_InputOutputRedirectionConfigType -------------------------------------------------- */






/* --- Crypto_ServiceInfoType ------------------------------------------------------------------- */

/** \brief  Hash Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_HASH
  #define  CRYPTO_HASH  0x0000U
#endif /* #ifndef  CRYPTO_HASH */

/** \brief  MacGenerate Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_MACGENERATE
  #define  CRYPTO_MACGENERATE  0x0001U
#endif /* #ifndef  CRYPTO_MACGENERATE */

/** \brief  MacVerify Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_MACVERIFY
  #define  CRYPTO_MACVERIFY  0x0002U
#endif /* #ifndef  CRYPTO_MACVERIFY */

/** \brief  Encrypt Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_ENCRYPT
  #define  CRYPTO_ENCRYPT  0x0003U
#endif /* #ifndef  CRYPTO_ENCRYPT */

/** \brief  Decrypt Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_DECRYPT
  #define  CRYPTO_DECRYPT  0x0004U
#endif /* #ifndef  CRYPTO_DECRYPT */

/** \brief  AEADEncrypt Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_AEADENCRYPT
  #define  CRYPTO_AEADENCRYPT  0x0005U
#endif /* #ifndef  CRYPTO_AEADENCRYPT */

/** \brief  AEADDecrypt Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_AEADDECRYPT
  #define  CRYPTO_AEADDECRYPT  0x0006U
#endif /* #ifndef  CRYPTO_AEADDECRYPT */

/** \brief  SignatureGenerate Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_SIGNATUREGENERATE
  #define  CRYPTO_SIGNATUREGENERATE  0x0007U
#endif /* #ifndef  CRYPTO_SIGNATUREGENERATE */

/** \brief  SignatureVerify Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_SIGNATUREVERIFY
  #define  CRYPTO_SIGNATUREVERIFY  0x0008U
#endif /* #ifndef  CRYPTO_SIGNATUREVERIFY */

/** \brief  SecureCounterIncrement Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_SECCOUNTERINCREMENT
  #define  CRYPTO_SECCOUNTERINCREMENT  0x0009U
#endif /* #ifndef  CRYPTO_SECCOUNTERINCREMENT */

/** \brief  SecureCounterRead Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_SECCOUNTERREAD
  #define  CRYPTO_SECCOUNTERREAD  0x000AU
#endif /* #ifndef  CRYPTO_SECCOUNTERREAD */

/** \brief  RandomGenerate Service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef  CRYPTO_RANDOMGENERATE
  #define  CRYPTO_RANDOMGENERATE  0x000BU
#endif /* #ifndef  CRYPTO_RANDOMGENERATE */









/* --- Csm_ResultType --------------------------------------------------------------------------- */

/** \brief  The service request failed because the provided buffer is too small to store the
 **         result.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_SMALL_BUFFER
  #define  E_SMALL_BUFFER  0x0002
#endif  /* #ifndef  E_SMALL_BUFFER */

/** \brief  The service request failed because the entropy of random number generator is
 **         exhausted.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_ENTROPY_EXHAUSTION
  #define  E_ENTROPY_EXHAUSTION  0x0003
#endif  /* #ifndef  E_ENTROPY_EXHAUSTION */

/** \brief  The service request failed because read access was denied.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_KEY_READ_FAIL
  #define  E_KEY_READ_FAIL  0x0004
#endif  /* #ifndef  E_KEY_READ_FAIL */

/** \brief  The service request failed because the key is not available.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_KEY_NOT_AVAILABLE
  #define  E_KEY_NOT_AVAILABLE  0x0005
#endif  /* #ifndef  E_KEY_NOT_AVAILABLE */

/** \brief  The service request failed because key was not valid.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_KEY_NOT_VALID
  #define  E_KEY_NOT_VALID  0x0006
#endif  /* #ifndef  E_KEY_NOT_VALID */

/** \brief  The service request failed because the job was canceled.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_JOB_CANCELED
  #define  E_JOB_CANCELED  0x0007
#endif  /* #ifndef  E_JOB_CANCELED */

/** \brief  The service request failed because of uninitialized source key element.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef  E_KEY_EMPTY
  #define  E_KEY_EMPTY  0x0008
#endif  /* #ifndef  E_KEY_EMPTY */

/* --- Crypto_ResultType ------------------------------------------------------------------------ */

/** \brief  The service request failed because the service is still busy
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_BUSY
  #define  CRYPTO_E_BUSY  0x0002
#endif  /* #ifndef  CRYPTO_E_BUSY */

/** \brief  The service request failed because the entropy of the random number generator is
 **         exhausted
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_ENTROPY_EXHAUSTED
  #define  CRYPTO_E_ENTROPY_EXHAUSTED  0x0004
#endif  /* #ifndef  CRYPTO_E_ENTROPY_EXHAUSTED */

/** \brief  The service request failed because read access was denied
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_KEY_READ_FAIL
  #define  CRYPTO_E_KEY_READ_FAIL  0x0006
#endif  /* #ifndef  CRYPTO_E_KEY_READ_FAIL */

/** \brief  The service request failed because the writing access failed
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_KEY_WRITE_FAIL
  #define  CRYPTO_E_KEY_WRITE_FAIL  0x0007
#endif  /* #ifndef  CRYPTO_E_KEY_WRITE_FAIL */

/** \brief  The service request failed because the key is not available
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_KEY_NOT_AVAILABLE
  #define  CRYPTO_E_KEY_NOT_AVAILABLE  0x0008
#endif  /* #ifndef  CRYPTO_E_KEY_NOT_AVAILABLE */

/** \brief  The service request failed because the key is invalid.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_KEY_NOT_VALID
  #define  CRYPTO_E_KEY_NOT_VALID  0x0009
#endif  /* #ifndef  CRYPTO_E_KEY_NOT_VALID */

/** \brief  The service request failed because the key size does not match.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_KEY_SIZE_MISMATCH
  #define  CRYPTO_E_KEY_SIZE_MISMATCH  0x000A
#endif  /* #ifndef  CRYPTO_E_KEY_SIZE_MISMATCH */

/** \brief  The service request failed because the Job has been canceled.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_JOB_CANCELED
  #define  CRYPTO_E_JOB_CANCELED  0x000C
#endif  /* #ifndef  CRYPTO_E_JOB_CANCELED */

/** \brief  The service request failed because of uninitialized source key element.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef  CRYPTO_E_KEY_EMPTY
  #define  CRYPTO_E_KEY_EMPTY  0x000D
#endif  /* #ifndef  CRYPTO_E_KEY_EMPTY */

/* --- Key element symbolic names --------------------------------------------------------------- */

/* !LINKSTO SWS_Csm_01022,1 */

/** \brief  Crypto stack key element 'CRYPTO_KE_MAC_KEY'
 **/
#ifdef CRYPTO_KE_MAC_KEY
  #error CRYPTO_KE_MAC_KEY is already defined
#endif /* #ifdef CRYPTO_KE_MAC_KEY */
#define  CRYPTO_KE_MAC_KEY                          0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_MAC_PROOF'
 **/
#ifdef CRYPTO_KE_MAC_PROOF
  #error CRYPTO_KE_MAC_PROOF is already defined
#endif /* #ifdef CRYPTO_KE_MAC_PROOF */
#define  CRYPTO_KE_MAC_PROOF                        0x0002U

/** \brief  Crypto stack key element 'CRYPTO_KE_SIGNATURE_KEY'
 **/
#ifdef CRYPTO_KE_SIGNATURE_KEY
  #error CRYPTO_KE_SIGNATURE_KEY is already defined
#endif /* #ifdef CRYPTO_KE_SIGNATURE_KEY */
#define  CRYPTO_KE_SIGNATURE_KEY                    0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_RANDOM_SEED_STATE'
 **/
#ifdef CRYPTO_KE_RANDOM_SEED_STATE
  #error CRYPTO_KE_RANDOM_SEED_STATE is already defined
#endif /* #ifdef CRYPTO_KE_RANDOM_SEED_STATE */
#define  CRYPTO_KE_RANDOM_SEED_STATE                0x0003U

/** \brief  Crypto stack key element 'CRYPTO_KE_RANDOM_ALGORITHM'
 **/
#ifdef CRYPTO_KE_RANDOM_ALGORITHM
  #error CRYPTO_KE_RANDOM_ALGORITHM is already defined
#endif /* #ifdef CRYPTO_KE_RANDOM_ALGORITHM */
#define  CRYPTO_KE_RANDOM_ALGORITHM                 0x0004U

/** \brief  Crypto stack key element 'CRYPTO_KE_CIPHER_KEY'
 **/
#ifdef CRYPTO_KE_CIPHER_KEY
  #error CRYPTO_KE_CIPHER_KEY is already defined
#endif /* #ifdef CRYPTO_KE_CIPHER_KEY */
#define  CRYPTO_KE_CIPHER_KEY                       0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_CIPHER_IV'
 **/
#ifdef CRYPTO_KE_CIPHER_IV
  #error CRYPTO_KE_CIPHER_IV is already defined
#endif /* #ifdef CRYPTO_KE_CIPHER_IV */
#define  CRYPTO_KE_CIPHER_IV                        0x0005U

/** \brief  Crypto stack key element 'CRYPTO_KE_CIPHER_PROOF'
 **/
#ifdef CRYPTO_KE_CIPHER_PROOF
  #error CRYPTO_KE_CIPHER_PROOF is already defined
#endif /* #ifdef CRYPTO_KE_CIPHER_PROOF */
#define  CRYPTO_KE_CIPHER_PROOF                     0x0006U

/** \brief  Crypto stack key element 'CRYPTO_KE_CIPHER_2NDKEY'
 **/
#ifdef CRYPTO_KE_CIPHER_2NDKEY
  #error CRYPTO_KE_CIPHER_2NDKEY is already defined
#endif /* #ifdef CRYPTO_KE_CIPHER_2NDKEY */
#define  CRYPTO_KE_CIPHER_2NDKEY                    0x0007U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYEXCHANGE_BASE'
 **/
#ifdef CRYPTO_KE_KEYEXCHANGE_BASE
  #error CRYPTO_KE_KEYEXCHANGE_BASE is already defined
#endif /* #ifdef CRYPTO_KE_KEYEXCHANGE_BASE */
#define  CRYPTO_KE_KEYEXCHANGE_BASE                 0x0008U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYEXCHANGE_PRIVKEY'
 **/
#ifdef CRYPTO_KE_KEYEXCHANGE_PRIVKEY
  #error CRYPTO_KE_KEYEXCHANGE_PRIVKEY is already defined
#endif /* #ifdef CRYPTO_KE_KEYEXCHANGE_PRIVKEY */
#define  CRYPTO_KE_KEYEXCHANGE_PRIVKEY              0x0009U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY'
 **/
#ifdef CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY
  #error CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY is already defined
#endif /* #ifdef CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY */
#define  CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY            0x000AU

/** \brief  Crypto stack key element 'CYRPTO_KE_KEYEXCHANGE_SHAREDVALUE'
 **         (naming as specified by AUTOSAR; including typo)
 **/
#ifdef CYRPTO_KE_KEYEXCHANGE_SHAREDVALUE
  #error CYRPTO_KE_KEYEXCHANGE_SHAREDVALUE is already defined
#endif /* #ifdef CYRPTO_KE_KEYEXCHANGE_SHAREDVALUE */
#define  CYRPTO_KE_KEYEXCHANGE_SHAREDVALUE          0x0001U

/* !LINKSTO CSM.Req.Api/CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE/00001,1 */
/** \brief  Crypto stack key element 'CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE'
 **         (naming as intended by AUTOSAR; adjusted typo)
 **/
#ifdef CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE
  #error CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE is already defined
#endif /* #ifdef CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE */
#define  CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE          0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYEXCHANGE_ALGORITHM'
 **/
#ifdef CRYPTO_KE_KEYEXCHANGE_ALGORITHM
  #error CRYPTO_KE_KEYEXCHANGE_ALGORITHM is already defined
#endif /* #ifdef CRYPTO_KE_KEYEXCHANGE_ALGORITHM */
#define  CRYPTO_KE_KEYEXCHANGE_ALGORITHM            0x000CU

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYDERIVATION_PASSWORD'
 **/
#ifdef CRYPTO_KE_KEYDERIVATION_PASSWORD
  #error CRYPTO_KE_KEYDERIVATION_PASSWORD is already defined
#endif /* #ifdef CRYPTO_KE_KEYDERIVATION_PASSWORD */
#define  CRYPTO_KE_KEYDERIVATION_PASSWORD           0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYDERIVATION_SALT'
 **/
#ifdef CRYPTO_KE_KEYDERIVATION_SALT
  #error CRYPTO_KE_KEYDERIVATION_SALT is already defined
#endif /* #ifdef CRYPTO_KE_KEYDERIVATION_SALT */
#define  CRYPTO_KE_KEYDERIVATION_SALT               0x000DU

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYDERIVATION_ITERATIONS'
 **/
#ifdef CRYPTO_KE_KEYDERIVATION_ITERATIONS
  #error CRYPTO_KE_KEYDERIVATION_ITERATIONS is already defined
#endif /* #ifdef CRYPTO_KE_KEYDERIVATION_ITERATIONS */
#define  CRYPTO_KE_KEYDERIVATION_ITERATIONS         0x000EU

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYDERIVATION_ALGORITHM'
 **/
#ifdef CRYPTO_KE_KEYDERIVATION_ALGORITHM
  #error CRYPTO_KE_KEYDERIVATION_ALGORITHM is already defined
#endif /* #ifdef CRYPTO_KE_KEYDERIVATION_ALGORITHM */
#define  CRYPTO_KE_KEYDERIVATION_ALGORITHM          0x000FU

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYGENERATE_KEY'
 **/
#ifdef CRYPTO_KE_KEYGENERATE_KEY
  #error CRYPTO_KE_KEYGENERATE_KEY is already defined
#endif /* #ifdef CRYPTO_KE_KEYGENERATE_KEY */
#define  CRYPTO_KE_KEYGENERATE_KEY                  0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYGENERATE_SEED'
 **/
#ifdef CRYPTO_KE_KEYGENERATE_SEED
  #error CRYPTO_KE_KEYGENERATE_SEED is already defined
#endif /* #ifdef CRYPTO_KE_KEYGENERATE_SEED */
#define  CRYPTO_KE_KEYGENERATE_SEED                 0x0010U

/** \brief  Crypto stack key element 'CRYPTO_KE_KEYGENERATE_ALGORITHM'
 **/
#ifdef CRYPTO_KE_KEYGENERATE_ALGORITHM
  #error CRYPTO_KE_KEYGENERATE_ALGORITHM is already defined
#endif /* #ifdef CRYPTO_KE_KEYGENERATE_ALGORITHM */
#define  CRYPTO_KE_KEYGENERATE_ALGORITHM            0x0011U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_DATA'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_DATA
  #error CRYPTO_KE_CERTIFICATE_DATA is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_DATA */
#define  CRYPTO_KE_CERTIFICATE_DATA                 0x0000U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_PARSING_FORMAT'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_PARSING_FORMAT
  #error CRYPTO_KE_CERTIFICATE_PARSING_FORMAT is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_PARSING_FORMAT */
#define  CRYPTO_KE_CERTIFICATE_PARSING_FORMAT       0x0012U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_CURRENT_TIME'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_CURRENT_TIME
  #error CRYPTO_KE_CERTIFICATE_CURRENT_TIME is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_CURRENT_TIME */
#define  CRYPTO_KE_CERTIFICATE_CURRENT_TIME         0x0013U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_VERSION'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_VERSION
  #error CRYPTO_KE_CERTIFICATE_VERSION is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_VERSION */
#define  CRYPTO_KE_CERTIFICATE_VERSION              0x0014U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_SERIALNUMBER'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_SERIALNUMBER
  #error CRYPTO_KE_CERTIFICATE_SERIALNUMBER is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_SERIALNUMBER */
#define  CRYPTO_KE_CERTIFICATE_SERIALNUMBER         0x0015U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM
  #error CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM */
#define  CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM  0x0016U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_ISSUER'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_ISSUER
  #error CRYPTO_KE_CERTIFICATE_ISSUER is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_ISSUER */
#define  CRYPTO_KE_CERTIFICATE_ISSUER               0x0017U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE
  #error CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE */
#define  CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE  0x0018U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER
  #error CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER */
#define  CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER   0x0019U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_SUBJECT'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_SUBJECT
  #error CRYPTO_KE_CERTIFICATE_SUBJECT is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_SUBJECT */
#define  CRYPTO_KE_CERTIFICATE_SUBJECT              0x001AU

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY
  #error CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY */
#define  CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY   0x0001U

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_EXTENSIONS'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_EXTENSIONS
  #error CRYPTO_KE_CERTIFICATE_EXTENSIONS is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_EXTENSIONS */
#define  CRYPTO_KE_CERTIFICATE_EXTENSIONS           0x001BU

/** \brief  Crypto stack key element 'CRYPTO_KE_CERTIFICATE_SIGNATURE'
 **/
#ifdef CRYPTO_KE_CERTIFICATE_SIGNATURE
  #error CRYPTO_KE_CERTIFICATE_SIGNATURE is already defined
#endif /* #ifdef CRYPTO_KE_CERTIFICATE_SIGNATURE */
#define  CRYPTO_KE_CERTIFICATE_SIGNATURE            0x001CU

/* --- Std_ReturnType --------------------------------------------------------------------------- */

/* !LINKSTO CSM.Dsn.SWS_Csm_01069,1 */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_BUSY'
 **/
#ifndef CRYPTO_E_BUSY
  #define  CRYPTO_E_BUSY                0x0002U
#endif /* #ifndef CRYPTO_E_BUSY */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_SMALL_BUFFER'
 **/
#ifndef CRYPTO_E_SMALL_BUFFER
  #define  CRYPTO_E_SMALL_BUFFER        0x0003U
#endif /* #ifndef CRYPTO_E_SMALL_BUFFER */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_ENTROPY_EXHAUSTION'
 **/
#ifndef CRYPTO_E_ENTROPY_EXHAUSTION
  #define  CRYPTO_E_ENTROPY_EXHAUSTION  0x0004U
#endif /* #ifndef CRYPTO_E_ENTROPY_EXHAUSTION */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_QUEUE_FULL'
 **/
#ifndef CRYPTO_E_QUEUE_FULL
  #define  CRYPTO_E_QUEUE_FULL          0x0005U
#endif /* #ifndef CRYPTO_E_QUEUE_FULL */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_KEY_READ_FAIL'
 **/
#ifndef CRYPTO_E_KEY_READ_FAIL
  #define  CRYPTO_E_KEY_READ_FAIL       0x0006U
#endif /* #ifndef CRYPTO_E_KEY_READ_FAIL */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_KEY_WRITE_FAIL'
 **/
#ifndef CRYPTO_E_KEY_WRITE_FAIL
  #define  CRYPTO_E_KEY_WRITE_FAIL      0x0007U
#endif /* #ifndef CRYPTO_E_KEY_WRITE_FAIL */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_KEY_NOT_AVAILABLE'
 **/
#ifndef CRYPTO_E_KEY_NOT_AVAILABLE
  #define  CRYPTO_E_KEY_NOT_AVAILABLE   0x0008U
#endif /* #ifndef CRYPTO_E_KEY_NOT_AVAILABLE */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_KEY_NOT_VALID'
 **/
#ifndef CRYPTO_E_KEY_NOT_VALID
  #define  CRYPTO_E_KEY_NOT_VALID       0x0009U
#endif /* #ifndef CRYPTO_E_KEY_NOT_VALID */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_KEY_SIZE_MISMATCH'
 **/
#ifndef CRYPTO_E_KEY_SIZE_MISMATCH
  #define  CRYPTO_E_KEY_SIZE_MISMATCH   0x000AU
#endif /* #ifndef CRYPTO_E_KEY_SIZE_MISMATCH */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_COUNTER_OVERFLOW'
 **/
#ifndef CRYPTO_E_COUNTER_OVERFLOW
  #define  CRYPTO_E_COUNTER_OVERFLOW    0x000BU
#endif /* #ifndef CRYPTO_E_COUNTER_OVERFLOW */

/** \brief  Crypto stack Std_ReturnType extension 'CRYPTO_E_JOB_CANCELED'
 **/
#ifndef CRYPTO_E_JOB_CANCELED
  #define  CRYPTO_E_JOB_CANCELED        0x000CU
#endif /* #ifndef CRYPTO_E_JOB_CANCELED */


/* --- Key lengths ------------------------------------------------------------------------------ */




/* --- Misc ------------------------------------------------------------------------------------- */

/* !LINKSTO CSM.Req.Api/CSM_API_VERSION_430/00001,1 */
#ifdef CSM_API_VERSION_430
  #error CSM_API_VERSION_430 is already defined
#endif /* #ifdef CSM_API_VERSION_430 */
#define CSM_API_VERSION_430  0x00U

/* !LINKSTO CSM.Req.Api/CSM_API_VERSION_431/00001,1 */
#ifdef CSM_API_VERSION_431
  #error CSM_API_VERSION_431 is already defined
#endif /* #ifdef CSM_API_VERSION_431 */
#define CSM_API_VERSION_431  0x01U

/* !LINKSTO CSM.Req.Api/CSM_API_VERSION_440/00001,1 */
#ifdef CSM_API_VERSION_440
  #error CSM_API_VERSION_440 is already defined
#endif /* #ifdef CSM_API_VERSION_440 */
#define CSM_API_VERSION_440  0x02U

/* !LINKSTO CSM.Req.Api/CSM_API_VERSION_EB/00001,2 */
#ifdef CSM_API_VERSION_EB
  #error CSM_API_VERSION_EB is already defined
#endif /* #ifdef CSM_API_VERSION_EB */
#define CSM_API_VERSION_EB   0x0FU

/*==================[type definitions]============================================================*/




/** \brief  Enumeration of the algorithm family.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01047,2 */
#ifndef RTE_TYPE_Crypto_AlgorithmFamilyType
  #define RTE_TYPE_Crypto_AlgorithmFamilyType
typedef uint8 Crypto_AlgorithmFamilyType;
#endif /* #ifndef RTE_TYPE_Crypto_AlgorithmFamilyType */

/** \brief  Enumeration of the algorithm mode.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01048,2 */
#ifndef RTE_TYPE_Crypto_AlgorithmModeType
  #define RTE_TYPE_Crypto_AlgorithmModeType
typedef uint8 Crypto_AlgorithmModeType;
#endif /* #ifndef RTE_TYPE_Crypto_AlgorithmModeType */

/** \brief  Enumeration which operation shall be performed. This enumeration is constructed
 **         from a bit mask, where the first bit indicates 'Start', the second 'Update' and the
 **         third 'Finish'.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01029,1 */
#ifndef RTE_TYPE_Crypto_OperationModeType
  #define RTE_TYPE_Crypto_OperationModeType
typedef uint8 Crypto_OperationModeType;
#endif /* #ifndef RTE_TYPE_Crypto_OperationModeType */

/** \brief  Enumeration of the processing type.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01049,1 */
#ifndef RTE_TYPE_Crypto_ProcessingType
  #define RTE_TYPE_Crypto_ProcessingType
typedef uint8 Crypto_ProcessingType;
#endif /* #ifndef RTE_TYPE_Crypto_ProcessingType */

/** \brief  Enumeration of the result type of verification operations.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01024,1 */
#ifndef RTE_TYPE_Crypto_VerifyResultType
  #define RTE_TYPE_Crypto_VerifyResultType
typedef uint8 Crypto_VerifyResultType;
#endif /* #ifndef RTE_TYPE_Crypto_VerifyResultType */

/** \brief  Enumeration of the current job state.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01028,1 */
#ifndef RTE_TYPE_Crypto_JobStateType
  #define RTE_TYPE_Crypto_JobStateType
typedef uint8 Crypto_JobStateType;
#endif /* #ifndef RTE_TYPE_Crypto_JobStateType */


/** \brief  Enumeration of the kind of the service.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01031,2 */
#ifndef RTE_TYPE_Crypto_ServiceInfoType
  #define RTE_TYPE_Crypto_ServiceInfoType
typedef uint8 Crypto_ServiceInfoType;
#endif /* #ifndef RTE_TYPE_Crypto_ServiceInfoType */

/** \brief  Identification of a CSM service configuration via a numeric identifier, that is
 **         unique within a service. The name of a CSM service configuration, i.e. the name of
 **         the container Csm_&lt;Service&gt;Config, shall serve as a symbolic name for this
 **         parameter.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_00691,1 */
#ifndef RTE_TYPE_Csm_ConfigIdType
  #define RTE_TYPE_Csm_ConfigIdType
typedef uint16 Csm_ConfigIdType;
#endif /* #ifndef RTE_TYPE_Csm_ConfigIdType */

/** \brief  Csm module specific return values for use in Std_ReturnType that could occur on
 **         async.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91001,2 */
#ifndef RTE_TYPE_Csm_ResultType
  #define RTE_TYPE_Csm_ResultType
typedef Std_ReturnType Csm_ResultType;
#endif /* #ifndef RTE_TYPE_Csm_ResultType */

/** \brief  Crypto stack specific return values for use in Std_ReturnType that could occur on
 **         async.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_91044,1 */
#ifndef RTE_TYPE_Crypto_ResultType
  #define RTE_TYPE_Crypto_ResultType
typedef Std_ReturnType Crypto_ResultType;
#endif /* #ifndef RTE_TYPE_Crypto_ResultType */

/** \brief  Structure which determines the exact algorithm. Note, not every algorithm needs to
 **         specify all fields. AUTOSAR shall only allow valid combinations.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01008,1 */
#ifndef RTE_TYPE_Crypto_AlgorithmInfoType
  #define RTE_TYPE_Crypto_AlgorithmInfoType
typedef struct
{
  Crypto_AlgorithmFamilyType family;
  Crypto_AlgorithmFamilyType secondaryFamily;
  uint32 keyLength;
  Crypto_AlgorithmModeType mode;
}
Crypto_AlgorithmInfoType;
#endif /* #ifndef RTE_TYPE_Crypto_AlgorithmInfoType */

/** \brief  Structure which contains basic information about the crypto primitive.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01011,1 */
#ifndef RTE_TYPE_Crypto_PrimitiveInfoType
  #define RTE_TYPE_Crypto_PrimitiveInfoType
typedef struct
{
  CONST(uint32, CSM_CONST) resultLength;
  CONST(Crypto_ServiceInfoType, CSM_CONST) service;
  CONST(Crypto_AlgorithmInfoType, CSM_CONST) algorithm;
}
Crypto_PrimitiveInfoType;
#endif /* #ifndef RTE_TYPE_Crypto_PrimitiveInfoType */

/** \brief  Structure which contains job information (job ID and job priority).
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01010,1 */
#ifndef RTE_TYPE_Crypto_JobInfoType
  #define RTE_TYPE_Crypto_JobInfoType
typedef struct
{
  CONST(uint32, CSM_CONST) jobId;
  CONST(uint32, CSM_CONST) jobPriority;
}
Crypto_JobInfoType;
#endif /* #ifndef RTE_TYPE_Crypto_JobInfoType */

/** \brief  Structure which contains further information, which depends on the job and the
 **         crypto primitive.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01012,1 */
#ifndef RTE_TYPE_Crypto_JobPrimitiveInfoType
  #define RTE_TYPE_Crypto_JobPrimitiveInfoType
typedef struct
{
  CONST(uint32, CSM_CONST) callbackId;
  P2CONST(Crypto_PrimitiveInfoType, AUTOMATIC, CSM_APPL_DATA) primitiveInfo;
  CONST(uint32, CSM_CONST) secureCounterId;
  CONST(uint32, CSM_CONST) cryIfKeyId;
  CONST(Crypto_ProcessingType, CSM_CONST) processingType;
  CONST(boolean, CSM_CONST) callbackUpdateNotification;
}
Crypto_JobPrimitiveInfoType;
#endif /* #ifndef RTE_TYPE_Crypto_JobPrimitiveInfoType */

/** \brief  Structure which contains input and output information depending on the job and the
 **         crypto primitive.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01009,3 */
#ifndef RTE_TYPE_Crypto_JobPrimitiveInputOutputType
  #define RTE_TYPE_Crypto_JobPrimitiveInputOutputType
typedef struct
{
  P2CONST(uint8, AUTOMATIC, CSM_APPL_DATA) inputPtr;
  uint32 inputLength;
  P2CONST(uint8, AUTOMATIC, CSM_APPL_DATA) secondaryInputPtr;
  uint32 secondaryInputLength;
  P2CONST(uint8, AUTOMATIC, CSM_APPL_DATA) tertiaryInputPtr;
  uint32 tertiaryInputLength;
  P2VAR(uint8, AUTOMATIC, CSM_APPL_DATA) outputPtr;
  P2VAR(uint32, AUTOMATIC, CSM_APPL_DATA) outputLengthPtr;
  P2VAR(uint8, AUTOMATIC, CSM_APPL_DATA) secondaryOutputPtr;
  P2VAR(uint32, AUTOMATIC, CSM_APPL_DATA) secondaryOutputLengthPtr;
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CSM_APPL_DATA) verifyPtr;
  Crypto_OperationModeType mode;
}
Crypto_JobPrimitiveInputOutputType;
#endif /* #ifndef RTE_TYPE_Crypto_JobPrimitiveInputOutputType */

/** \brief  Structure which contains further information, which depends on the job and the
 **         crypto primitive.
 **/
/* !LINKSTO CSM.Dsn.SWS_Csm_01013,3 */
#ifndef RTE_TYPE_Crypto_JobType
  #define RTE_TYPE_Crypto_JobType
typedef struct
{
  CONST(uint32, CSM_CONST) jobId;
  Crypto_JobStateType jobState;
  Crypto_JobPrimitiveInputOutputType jobPrimitiveInputOutput;
  P2CONST(Crypto_JobPrimitiveInfoType, AUTOMATIC, CSM_APPL_DATA) jobPrimitiveInfo;
  P2CONST(Crypto_JobInfoType, AUTOMATIC, CSM_APPL_DATA) jobInfo;
  uint32 cryptoKeyId;
}
Crypto_JobType;
#endif /* #ifndef RTE_TYPE_Crypto_JobType */

/*==================[external constants]==========================================================*/

/*==================[external data]===============================================================*/

/*==================[external function declarations]==============================================*/

/*================================================================================================*/

#endif /* #ifndef CSM_TYPES_H */

/*==================[end of file]=================================================================*/

