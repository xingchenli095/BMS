/**
 * \file
 *
 * \brief AUTOSAR CryIf
 *
 * This file contains the implementation of the AUTOSAR
 * module CryIf.
 *
 * \version 1.0.32
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[misra deviations]============================================================*/

/*==================[inclusions]==================================================================*/

/* !LINKSTO EB_CryIf_00011, 1 */
#include <CryIf.h>
/* !LINKSTO SWS_CryIf_00008, 1 */
#include <CryIf_Cfg.h>

/*==================[macros]======================================================================*/

/*==================[declaration of types]========================================================*/

/*==================[declaration of internal functions]===========================================*/

/*==================[definition of internal constants]============================================*/

/*==================[definition of internal variables]============================================*/

/*==================[definition of external constants]============================================*/

#define CRYIF_START_SEC_CONST_32
#include <CryIf_MemMap.h>

#if (CRYIF_CHANNEL_COUNT != 0U)
/* !LINKSTO CryIf.Dsn.Api/Consts/00017, 1 */
/* !LINKSTO CryIf.Req.Cfg/SymbolicNames/General/00001, 1 */
CONST(uint32, CRYIF_CONST) CryIf_Channels[CRYIF_CHANNEL_COUNT] =
{
#if defined(CryptoConf_CryptoDriverObject_CryptoDriverObject_Software)
  CryptoConf_CryptoDriverObject_CryptoDriverObject_Software,
#else
  0U,
#endif
};
#endif /* #if (CRYIF_CHANNEL_COUNT != 0U) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00016, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
/* !LINKSTO CryIf.Req.Cfg/SymbolicNames/General/00001, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(uint32, CRYIF_CONST) CryIf_Keys[CRYIF_KEY_COUNT] =
{
#if defined(CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredIn_R)
  CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredIn_R,
#else
  1U,
#endif
#if defined(CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredOut_T)
  CryptoConf_CryptoKey_CryptoKey_Pdu_SecuredOut_T,
#else
  0U,
#endif
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

#define CRYIF_STOP_SEC_CONST_32
#include <CryIf_MemMap.h>

#define CRYIF_START_SEC_CONST_UNSPECIFIED
#include <CryIf_MemMap.h>

#if (CRYIF_CHANNEL_COUNT != 0U)
/* !LINKSTO CryIf.Dsn.Api/Consts/00001, 1 */
CONST(CryIf_ProcessJobPtrType, CRYIF_CONST) CryIf_ProcessJobJumpTable[CRYIF_CHANNEL_COUNT] =
{
  &Crypto_ProcessJob,
};
#endif /* #if (CRYIF_CHANNEL_COUNT != 0U) */

#if (CRYIF_CHANNEL_COUNT != 0U)
/* !LINKSTO CryIf.Dsn.Api/Consts/00002, 1 */
CONST(CryIf_CancelJobPtrType, CRYIF_CONST) CryIf_CancelJobJumpTable[CRYIF_CHANNEL_COUNT] =
{
  &Crypto_CancelJob,
};
#endif /* #if (CRYIF_CHANNEL_COUNT != 0U) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00003, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyElementSetPtrType, CRYIF_CONST) CryIf_KeyElementSetJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyElementSet,
  &Crypto_KeyElementSet,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00004, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeySetValidPtrType, CRYIF_CONST) CryIf_KeySetValidJumpTable[CRYIF_KEY_COUNT] =
{
    &Crypto_KeyValidSet,
    &Crypto_KeyValidSet,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00005, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyElementGetPtrType, CRYIF_CONST) CryIf_KeyElementGetJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyElementGet,
  &Crypto_KeyElementGet,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00006, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyElementCopyPtrType, CRYIF_CONST) CryIf_KeyElementCopyJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyElementCopy,
  &Crypto_KeyElementCopy,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00020, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (   (CRYIF_API_VERSION           == CRYIF_API_VERSION_440) \
     && (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON               ) \
    )
CONST(CryIf_KeyElementCopyPartialPtrType, CRYIF_CONST) CryIf_KeyElementCopyPartialJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyElementCopyPartial,
  &Crypto_KeyElementCopyPartial,
};
#endif /* #if (   (CRYIF_API_VERSION           == CRYIF_API_VERSION_440) ... */

/* !LINKSTO CryIf.Dsn.Api/Consts/00007, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyElementIdsPtrType, CRYIF_CONST) CryIf_KeyElementIdsGetJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyElementIdsGet,
  &Crypto_KeyElementIdsGet,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00008, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_RandomSeedPtrType, CRYIF_CONST) CryIf_RandomSeedJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_RandomSeed,
  &Crypto_RandomSeed,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00009, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyGeneratePtrType, CRYIF_CONST) CryIf_KeyGenerateJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyGenerate,
  &Crypto_KeyGenerate,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00010, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyDerivePtrType, CRYIF_CONST) CryIf_KeyDeriveJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyDerive,
  &Crypto_KeyDerive,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00011, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyExchangeCalcPubValPtrType, CRYIF_CONST)
CryIf_KeyExchangeCalcPubValJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyExchangeCalcPubVal,
  &Crypto_KeyExchangeCalcPubVal,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00012, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyExchangeCalcSecretPtrType, CRYIF_CONST)
CryIf_KeyExchangeCalcSecretJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyExchangeCalcSecret,
  &Crypto_KeyExchangeCalcSecret,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00013, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_CertificateParsePtrType, CRYIF_CONST)
CryIf_CertificateParseJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_CertificateParse,
  &Crypto_CertificateParse,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00014, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_CertificateVerifyPtrType, CRYIF_CONST)
CryIf_CertificateVerifyJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_CertificateVerify,
  &Crypto_CertificateVerify,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

/* !LINKSTO CryIf.Dsn.Api/Consts/00015, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(CryIf_KeyCopyPtrType, CRYIF_CONST) CryIf_KeyCopyJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyCopy,
  &Crypto_KeyCopy,
};
#endif /* #if (CRYIF_API_ENABLED_KEYMNGMNT == STD_ON) */

#if (CRYIF_API_ENABLED_KEYGETSTATUS == STD_ON)
/* !LINKSTO CryIf.Dsn.Api/Consts/00018, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
CONST(CryIf_KeyGetStatusPtrType, CRYIF_CONST) CryIf_KeyGetStatusJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeyGetStatus,
  &Crypto_KeyGetStatus,
};
#endif /* #if (CRYIF_API_ENABLED_KEYGETSTATUS == STD_ON) */

#if (CRYIF_API_ENABLED_KEYSETINVALID == STD_ON)
/* !LINKSTO CryIf.Dsn.Api/Consts/00019, 1 */
/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
CONST(CryIf_KeySetInvalidPtrType, CRYIF_CONST) CryIf_KeySetInvalidJumpTable[CRYIF_KEY_COUNT] =
{
  &Crypto_KeySetInvalid,
  &Crypto_KeySetInvalid,
};
#endif /* #if (CRYIF_API_ENABLED_KEYSETINVALID == STD_ON) */

#define CRYIF_STOP_SEC_CONST_UNSPECIFIED
#include <CryIf_MemMap.h>

/*==================[definition of external variables]============================================*/

/*==================[definition of external functions]============================================*/

/*==================[definition of internal functions]============================================*/

/*==================[end of file]=================================================================*/
