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

/*==[Includes]====================================================================================*/

#include <Crypto_AL_Der.h>
#include <Crypto_AL_DerCVC.h>
#include <Crypto_AL_Common.h>
#include <TSMem.h>

/*
 * MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 20.7 (required)
 * Expressions resulting from the expansion of macro parameters shall be
 * enclosed in parentheses.
 *
 * Reason:
 * The AUTOSAR compiler abstraction requires these definitions in this way
 * and the arguments cannot be enclosed in parentheses due to C syntax.
 *
 */

/*==[Macros]======================================================================================*/

/*==[Types]=======================================================================================*/

/*==[Declaration of functions with internal linkage]==============================================*/

/*==[Constants with internal linkage]=============================================================*/

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

/* The description of a CV certificate */

/* The description of an RSA public key inside a CVC certificate */

/** \brief A description of the subcomponent "OID" of "RSAPublicKey" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST) Crypto_DerCVCRSAPubKCptOid =
{
  &Crypto_DerParseFunctionsObjectIdentifier,
  0U,
  0U,
  0U,
  0U
};

/** \brief A description of the subcomponent "modulus" of "RSAPublicKey" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST)
  Crypto_DerCVCRSAPubKCptModulus =
{
  &Crypto_DerParseFunctionsInteger,
  0U,
  0U,
  0U,
  0U
};

/** \brief A description of the subcomponent "exponent" of "RSAPublicKey" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST)
  Crypto_DerCVCRSAPubKCptPubKeyExp =
{
  &Crypto_DerParseFunctionsInteger,
  0U,
  0U,
  0U,
  0U
};

/** \brief An array holding the subcomponents of the component "RSA public key" */
static CONST(Crypto_DerSubComponentType, CRYPTO_CONST)
  Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[3U] =
{
  { CRYPTO_DER_TAG_OID,     &Crypto_DerCVCRSAPubKCptOid,       FALSE },
  { CRYPTO_DER_TAG_MODULUS, &Crypto_DerCVCRSAPubKCptModulus,   FALSE },
  { CRYPTO_DER_TAG_EXP,     &Crypto_DerCVCRSAPubKCptPubKeyExp, FALSE }
};

/** \brief A description of the subcomponent "Rsa public key" of "RSAPublicKey" whose tag shall be
 * ignored by the certificate parser. */
static CONST(Crypto_DerComponentType, CRYPTO_CONST)
  Crypto_DerCVCCptSbjPbKeyRsaInfo =
{
  &Crypto_DerParseFunctionsSequenceIgnoreTag,
  0U,
  0U,
  CRYPTO_DER_ARRAY_INFO(Crypto_DerCVCSubCptsSbjPbKeyRsaInfo)
};

/** \brief An array holding the different possible subcomponents of the public key, e.g. it could be
 * an RSA or ECC key. The component itself shall be ignored in the parsing of the certificate. */
static CONST(Crypto_DerSubComponentType, CRYPTO_CONST)
  Crypto_DerCVCSubCptsSbjPbKeyInfo[1U] =
{
  { CRYPTO_DER_TAG_IGNORED, &Crypto_DerCVCCptSbjPbKeyRsaInfo, FALSE }
};

/** \brief A description of the component "SubjectPublicKeyInfo" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST)
  Crypto_DerCVCCptSbjPbKeyInfo =
{
  &Crypto_DerParseFunctionsPublicKey,
  0U,
  0U,
  CRYPTO_DER_ARRAY_INFO(Crypto_DerCVCSubCptsSbjPbKeyInfo)
};

/** \brief A description of the subcomponents of "Hold Auth template" */
static CONST(Crypto_DerSubComponentType, CRYPTO_CONST)
  Crypto_DerCVCSubCptsHoldAuthTem[2U] =
{
  { CRYPTO_DER_TAG_OID,            &Crypto_DerCptObjIdentifier, FALSE },
  { CRYPTO_DER_TAG_DISCRETIONDATA, &Crypto_DerCptOctetString,   FALSE },
};

/** \brief A description of the component "Hold Auth template" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST)
  Crypto_DerCVCCptHoldAuthTem =
{
  &Crypto_DerParseFunctionsSequence,
  0U,
  0U,
  CRYPTO_DER_ARRAY_INFO(Crypto_DerCVCSubCptsHoldAuthTem)
};

/** \brief The allowed ranges for "Identifier"  */
static CONST(Crypto_DerRangeType, CRYPTO_CONST) Crypto_DerCVCRangesIden[1U] =
{
  {
    0U,
    0U,
    FALSE
  }
};

/** \brief A description of the component "Version" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST) Crypto_DerCVCCptIden =
{
  &Crypto_DerParseFunctionsInteger,
  CRYPTO_DER_ARRAY_INFO(Crypto_DerCVCRangesIden),
  0U,
  0U
};

/** \brief A description of the component "CertificateSerialNumber" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST) Crypto_DerCVCCptCertDate =
{
  &Crypto_DerParseFunctionsDate,
  0U,
  0U,
  0U,
  0U
};

/** \brief A description of the component "CertificateCharacterString" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST) Crypto_DerCptCharacterS =
{
  &Crypto_DerParseFunctionsCharacterS,
  0U,
  0U,
  0U,
  0U
};

/** \brief A description of the subcomponents of "TBSCertificate" */
static CONST(Crypto_DerSubComponentType, CRYPTO_CONST)
  Crypto_DerCVCSubCptsTBSCert[7U] =
{
  /* Profile Identifier */
  { CRYPTO_DER_TAG_PROFILE_ID,     &Crypto_DerCVCCptIden,         FALSE },
  /* Authority Reference */
  { CRYPTO_DER_TAG_AUTHREF,        &Crypto_DerCptCharacterS,      FALSE },
  /* Public Key */
  { CRYPTO_DER_TAG_PUBKEY,         &Crypto_DerCVCCptSbjPbKeyInfo, FALSE },
  /* Holder Reference */
  { CRYPTO_DER_TAG_HOLDREF,        &Crypto_DerCptCharacterS,      FALSE },
  /* Holder Authorization Template */
  { CRYPTO_DER_TAG_HOLDAUTHTEMPL,  &Crypto_DerCVCCptHoldAuthTem,  FALSE },
  /* Effective Date */
  { CRYPTO_DER_TAG_EFFECTIVEDATE,  &Crypto_DerCVCCptCertDate,     FALSE },
  /* Expiration Date */
  { CRYPTO_DER_TAG_EXPIRATIONDATE, &Crypto_DerCVCCptCertDate,     FALSE },
};

/** \brief A description of the component "TBSCertificate" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST) Crypto_DerCVCCptTBSCert =
{
  &Crypto_DerParseFunctionsSequence,
  0U,
  0U,
  CRYPTO_DER_ARRAY_INFO(Crypto_DerCVCSubCptsTBSCert)
};

/** \brief A description of the subcomponents of "Certificate" */
static CONST(Crypto_DerSubComponentType, CRYPTO_CONST)
  Crypto_DerCVCSubCptsCertificate[2U] =
{
  { CRYPTO_DER_TAG_CERTBODY,  &Crypto_DerCVCCptTBSCert,  FALSE },
  { CRYPTO_DER_TAG_SIGNATURE, &Crypto_DerCptOctetString, FALSE }
};

/** \brief A description of the component "Certificate" */
static CONST(Crypto_DerComponentType, CRYPTO_CONST)
  Crypto_DerCVCCptCertificate =
{
  &Crypto_DerParseFunctionsSequence,
  0U,
  0U,
  CRYPTO_DER_ARRAY_INFO(Crypto_DerCVCSubCptsCertificate)
};

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Variables with internal linkage]=============================================================*/

/*==[Constants with external linkage]=============================================================*/

/*==[Variables with external linkage]=============================================================*/

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DerCVCCheckCertificate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Encoding,
          uint32                                        EncodingLength
)
{
  uint32 CurrentPos = 0U;   /* The current position in the encoding */
  Std_ReturnType Valid = E_NOT_OK;

  /* Check the validity of the CVC certificate */
  if
  (
    CRYPTO_DER_CHECK_FUNCTION
    (
      &Crypto_DerCVCCptCertificate,
      Encoding,
      EncodingLength,
      &CurrentPos
    ) &&
    (CurrentPos == EncodingLength)
  )
  {
    Valid = E_OK;
  }
  return Valid;
}

/*------------------------------------------------------------------------------------------------*/

/* Deviation MISRAC2012-1 */
FUNC(P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA), CRYPTO_CODE) Crypto_AL_DerCVCGetSignatureValue
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) Encoding,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ThingLengthPtr
)
{
  return &Encoding[CRYPTO_DER_1ST_SUB_CMP_CONTENTS
                  (
                     &Crypto_DerCVCCptCertificate,
                     Encoding,
                     &Crypto_DerCVCSubCptsCertificate[1U],
                     ThingLengthPtr
                  )];
}

/*------------------------------------------------------------------------------------------------*/

/* Deviation MISRAC2012-1 */
FUNC(P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA), CRYPTO_CODE) Crypto_AL_DerCVCGetSignedData
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) Encoding,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ThingLengthPtr
)
{
  uint32 Position;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr;
  /* Because the certificate is already checked for validity, the function should be found. The only
   * possibility for this call to fail is when the initial buffer is valid but later it is somehow
   * corrupted.
   */
  (void)CRYPTO_DER_FIND_FUNCTION
  (
     &Crypto_DerCVCCptCertificate,
     Encoding,
     &Crypto_DerCVCSubCptsCertificate[0U],
     &Position,
     0U
  );
  *ThingLengthPtr = Crypto_AL_DerEncGetContentsStart(&Encoding[Position]) +
                    Crypto_AL_DerEncGetContentsLength(&Encoding[Position]);

  ResultPtr = &Encoding[Position];

  return ResultPtr;
}

/*------------------------------------------------------------------------------------------------*/

/* Deviation MISRAC2012-1 */
FUNC(P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA), CRYPTO_CODE) Crypto_AL_DerCVCRSAPubKeyGetExponent
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) Encoding,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ExponentLengthPtr
)
{

  /* Get to the start of the exponent */

  return &Encoding[CRYPTO_DER_1ST_SUB_CMP_CONTENTS
                    (
                      &Crypto_DerCVCCptCertificate,
                      Encoding,
                      &Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[2U],
                      ExponentLengthPtr
                    )];
}

/*------------------------------------------------------------------------------------------------*/

FUNC(uint8, CRYPTO_CODE) Crypto_AL_DerCVCRSAPubKeyGetOid
(
  P2CONST(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) Encoding
)
{
  uint8 i;
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) OidPtr = NULL_PTR;
  uint32 OidLength = 0U;
  uint8 IdTaRsaPssSha256[CRYPTO_ID_TA_RSA_PSS_SHA_256_LENGTH] =
    { 0x04U, 0x00U, 0x7FU, 0x00U, 0x07U, 0x02U, 0x02U, 0x02U, 0x01U, 0x04U };
  uint8 RetVal = CRYPTO_KEY_FORMAT_NOT_SUPPORTED;

  /* Get to the start of the oid */
  OidPtr = &Encoding[CRYPTO_DER_1ST_SUB_CMP_CONTENTS
                      (
                        &Crypto_DerCVCCptCertificate,
                        Encoding,
                        &Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[0U],
                        &OidLength
                      )];

  if (CRYPTO_ID_TA_RSA_PSS_SHA_256_LENGTH == OidLength)
  {
    RetVal = CRYPTO_ID_TA_RSA_PSS_SHA_256;
    for (i = 0U; CRYPTO_ID_TA_RSA_PSS_SHA_256_LENGTH > i; i++)
    {
      if (IdTaRsaPssSha256[i] != OidPtr[i])
      {
        RetVal = CRYPTO_KEY_FORMAT_NOT_SUPPORTED;
      }
    }
  }
  return RetVal;
}
/* Deviation MISRAC2012-1 */
FUNC(P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA), CRYPTO_CODE) Crypto_AL_DerCVCRSAPubKeyGetModulos
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) Encoding,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ModulusLengthPtr
)
{
  /* Get to the start of the modulus */

  return &Encoding[CRYPTO_DER_1ST_SUB_CMP_CONTENTS
                      (
                        &Crypto_DerCVCCptCertificate,
                        Encoding,
                        &Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[1U],
                        ModulusLengthPtr
                      )];
}

/*------------------------------------------------------------------------------------------------*/

FUNC(void, CRYPTO_CODE) Crypto_AL_DerCVCGetDate
(
  P2CONST(uint8,                           AUTOMATIC, CRYPTO_APPL_DATA) Encoding,
    P2VAR(Crypto_CVDateInfoType, AUTOMATIC, CRYPTO_APPL_DATA) CVDate
)
{
  uint32 ThingLengthPtr;
  uint32 CurrentPos;

  /* Effective date */
  CurrentPos = Crypto_AL_DerSubComponentContents(&Crypto_DerCVCCptCertificate,
                                           Encoding,
                                           &Crypto_DerCVCSubCptsTBSCert[5U],
                                           &ThingLengthPtr,
                                           0U
                                           );

  TS_MemCpy(&(CVDate->EffectiveDate), &Encoding[CurrentPos], 6U);

  /* Expiration date */
  CurrentPos = Crypto_AL_DerSubComponentContents(&Crypto_DerCVCCptCertificate,
                                           Encoding,
                                           &Crypto_DerCVCSubCptsTBSCert[6U],
                                           &ThingLengthPtr,
                                           0U
                                           );

  TS_MemCpy(&(CVDate->ExpirationDate), &Encoding[CurrentPos], 6U);
}

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Definition of functions with internal linkage]==============================================*/

/*==[end of file]=================================================================================*/

