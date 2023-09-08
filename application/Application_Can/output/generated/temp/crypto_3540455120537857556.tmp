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

/*
 * Misra-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 8.9 (advisory)
 * An object should be defined at block scope if its identifier only appears in a single function.
 *
 * Reason:
 * The object is actually used in multiple functions which are only enabled depending on the
 * module configuration. Additionaly, the AUTOSAR memory mapping requires that functions are
 * mapped to SEC_CODE memory sections. Objects at block scope require a different mapping,
 * e.g. to a SEC_VAR section, which leads to nested memory sections, which is not supported
 * by some compilers.
 */

/*==[Includes]====================================================================================*/

#include <Std_Types.h>
#include <Csm_Types.h>
#include <TSAutosar.h>
#include <CryIf_Cbk.h>
#include <SchM_Crypto.h>
#include <TSMem.h>

#include <Crypto.h>
#include <Crypto_AL_Cfg.h>
#include <Crypto_AL_Common.h>
#include <Crypto_AL_KeyManagement.h>
#include <Crypto_AL_AEAD.h>
#include <Crypto_AL_Cipher.h>

#if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED == STD_ON))

/*==[Macros]======================================================================================*/

#if (defined CRYPTO_GCM_DEFAULT_CURRENT_MODE)
#error CRYPTO_GCM_DEFAULT_CURRENT_MODE already defined
#endif
/** \brief The default operation mode which is set after finishing the asynchronous processing
 *         of a mac primitive.
 */
#define CRYPTO_GCM_DEFAULT_CURRENT_MODE 0x00U

/*--GCM-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED == STD_ON))

#if (defined CRYPTO_GCM_RMS)
#error CRYPTO_GCM_RMS already defined
#endif
/** \brief Macro used in bit reversing a 32 bit value */
#define CRYPTO_GCM_RMS(x, m, s)                            \
do                                                                   \
{                                                                    \
  (x) = (((x) & (uint32)(m)) << (s)) | (((x) >> (s)) & (uint32)(m)); \
} while (0U)

#if (defined CRYPTO_GCM_ENCU32BE)
#error CRYPTO_GCM_ENCU32BE already defined
#endif

/** \brief Encode an uint32 into a uint8 byte array in BE */
#define CRYPTO_GCM_ENCU32BE(dst, x) \
do                                            \
{                                             \
  (dst)[0U] = (uint8)((x) >> 24U);            \
  (dst)[1U] = (uint8)((x) >> 16U);            \
  (dst)[2U] = (uint8)((x) >> 8U);             \
  (dst)[3U] = (uint8)(x);                     \
} while (0U)

#if (defined CRYPTO_GCM_DECU32BE)
#error CRYPTO_GCM_DECU32BE already defined
#endif

/** \brief Decode a uint8 byte array into a uint32 in BE */
#define CRYPTO_GCM_DECU32BE(src)                            \
(((uint32)(src)[0U] << 24U) |                                         \
 ((uint32)(src)[1U] << 16U) |                                         \
 ((uint32)(src)[2U] << 8U)  |                                         \
 (uint32)(src)[3U]                                                    \
);

/* !LINKSTO EB_Crypto_CryptAlgos_0813,1 */
#if (defined CRYPTO_GCM_BLOCK_LEN_BYTES)
#error CRYPTO_GCM_BLOCK_LEN_BYTES already defined
#endif
/** \brief The length of one encryption block for GCM */
#define CRYPTO_GCM_BLOCK_LEN_BYTES 16U

/* !LINKSTO EB_Crypto_CryptAlgos_0818,1 */
#if (defined CRYPTO_GCM_IV_LEN_BYTES)
#error CRYPTO_GCM_IV_LEN_BYTES already defined
#endif
/** \brief The length of the initialization vector for GCM */
#define CRYPTO_GCM_IV_LEN_BYTES 12U

#endif /* #if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED \
          == STD_ON)) */

/*--GCM-ENCRYPT---------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_ENC_ENABLED == STD_ON)

/*--Crypto_GCMEncStateType------------------------------------------------------------*/

#if (defined CRYPTO_GCM_E_S_IDLE)
#error CRYPTO_GCM_E_S_IDLE already defined
#endif
/** \brief Idle state of the GCM routine. */
#define CRYPTO_GCM_E_S_IDLE 0U

#if (defined CRYPTO_GCM_E_S_PRE_CALCULATIONS)
#error CRYPTO_GCM_E_S_PRE_CALCULATIONS already defined
#endif
/** \brief Compute values needed by the symetric block encryption. */
#define CRYPTO_GCM_E_S_PRE_CALCULATIONS 1U

#if (defined CRYPTO_GCM_E_S_REQ_AES_START)
#error CRYPTO_GCM_E_S_REQ_AES_START already defined
#endif
/** \brief The underlying symmetrical block encryption a gets initialized. */
#define CRYPTO_GCM_E_S_REQ_AES_START 2U

#if (defined CRYPTO_GCM_E_S_WAIT_AES_START)
#error CRYPTO_GCM_E_S_WAIT_AES_START already defined
#endif
/** \brief Waiting for the encryption to finish starting. */
#define CRYPTO_GCM_E_S_WAIT_AES_START 3U

#if (defined CRYPTO_GCM_E_S_CALC_HASHED_KEY)
#error CRYPTO_GCM_E_S_CALC_HASHED_KEY already defined
#endif
/** \brief Request encryption of zero block. */
#define CRYPTO_GCM_E_S_CALC_HASHED_KEY 4U

#if (defined CRYPTO_GCM_E_S_WAIT_CALC_HASHED_KEY)
#error CRYPTO_GCM_E_S_WAIT_CALC_HASHED_KEY already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the zero block. */
#define CRYPTO_GCM_E_S_WAIT_CALC_HASHED_KEY 5U

#if (defined CRYPTO_GCM_E_S_CALC_ENC_C0)
#error CRYPTO_GCM_E_S_CALC_ENC_C0 already defined
#endif
/** \brief Request encryption of ENC(IV || 0^31 || 1) block. */
#define CRYPTO_GCM_E_S_CALC_ENC_C0 6U

#if (defined CRYPTO_GCM_E_S_WAIT_C0)
#error CRYPTO_GCM_E_S_WAIT_C0 already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the ENC(IV || 0^31 || 1) block. */
#define CRYPTO_GCM_E_S_WAIT_C0 7U

#if (defined CRYPTO_GCM_E_S_GHASH_AAD)
#error CRYPTO_GCM_E_S_GHASH_AAD already defined
#endif
/** \brief Hash the additional authenticated data. */
#define CRYPTO_GCM_E_S_GHASH_AAD 8U

#if (defined CRYPTO_GCM_E_S_ENC_CTR)
#error CRYPTO_GCM_E_S_ENC_CTR already defined
#endif
/** \brief Request encryption of counter block. */
#define CRYPTO_GCM_E_S_ENC_CTR 9U

#if (defined CRYPTO_GCM_E_S_WAIT_ENC_CTR)
#error CRYPTO_GCM_E_S_WAIT_ENC_CTR already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the counter block. */
#define CRYPTO_GCM_E_S_WAIT_ENC_CTR 10U

#if (defined CRYPTO_GCM_E_S_COPY_FROM_INPUT)
#error CRYPTO_GCM_E_S_COPY_FROM_INPUT already defined
#endif
/** \brief Copy bytes from input data. */
#define CRYPTO_GCM_E_S_COPY_FROM_INPUT 11U

#if (defined CRYPTO_GCM_E_S_PROC_INCOMPLETE_BLOCK)
#error CRYPTO_GCM_E_S_PROC_INCOMPLETE_BLOCK already defined
#endif
/** \brief Processes an incomplete block. */
#define CRYPTO_GCM_E_S_PROC_INCOMPLETE_BLOCK 12U

#if (defined CRYPTO_GCM_E_S_REQ_AES_FINISH)
#error CRYPTO_GCM_E_S_REQ_AES_FINISH already defined
#endif
/** \brief Request finish of encryption. */
#define CRYPTO_GCM_E_S_REQ_AES_FINISH 13U

#if (defined CRYPTO_GCM_E_S_WAIT_AES_FINISH)
#error CRYPTO_GCM_E_S_WAIT_AES_FINISH already defined
#endif
/** \brief Waiting for the encryption to finish. */
#define CRYPTO_GCM_E_S_WAIT_AES_FINISH 14U

#if (defined CRYPTO_GCM_E_S_INITIALIZED)
#error CRYPTO_GCM_E_S_INITIALIZED already defined
#endif
/** \brief The GCM routine is initialized. */
#define CRYPTO_GCM_E_S_INITIALIZED 15U

#if (defined CRYPTO_GCM_ENC_SET_BUSY)
#error CRYPTO_GCM_ENC_SET_BUSY already defined
#endif
/** \brief Set the encryption state machine to busy */
#define CRYPTO_GCM_ENC_SET_BUSY              \
do                                                     \
{                                                      \
  Crypto_GCMEncContext.ResultVal = Result;   \
  Crypto_GCMEncContext.IsBusy    = Busy;     \
  if ((NULL_PTR != Result) && (NULL_PTR != Busy))      \
  {                                                    \
    *Crypto_GCMEncContext.ResultVal = E_OK;  \
    *Crypto_GCMEncContext.IsBusy = TRUE;     \
  }                                                    \
} while (0U)

#endif /* #if (CRYPTO_GCM_ENC_ENABLED == STD_ON) */

/*--GCM-DECRYPT-----------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_DEC_ENABLED == STD_ON)

/*--Crypto_GCMDecStateType--------------------------------------------------------------*/

#if (defined CRYPTO_GCM_D_S_IDLE)
#error CRYPTO_GCM_D_S_IDLE already defined
#endif
/** \brief Idle state of the GCM routine. */
#define CRYPTO_GCM_D_S_IDLE 0U

#if (defined CRYPTO_GCM_D_S_PRE_CALCULATIONS)
#error CRYPTO_GCM_D_S_PRE_CALCULATIONS already defined
#endif
/** \brief Compute values needed by the symetric block encryption. */
#define CRYPTO_GCM_D_S_PRE_CALCULATIONS 1U

#if (defined CRYPTO_GCM_D_S_REQ_AES_START)
#error CRYPTO_GCM_D_S_REQ_AES_START already defined
#endif
/** \brief The underlying symmetrical block encryption a gets initialized. */
#define CRYPTO_GCM_D_S_REQ_AES_START 2U

#if (defined CRYPTO_GCM_D_S_WAIT_AES_START)
#error CRYPTO_GCM_D_S_WAIT_AES_START already defined
#endif
/** \brief Waiting for the encryption to finish starting. */
#define CRYPTO_GCM_D_S_WAIT_AES_START 3U

#if (defined CRYPTO_GCM_D_S_CALC_HASHED_KEY)
#error CRYPTO_GCM_D_S_CALC_HASHED_KEY already defined
#endif
/** \brief Request encryption of zero block. */
#define CRYPTO_GCM_D_S_CALC_HASHED_KEY 4U

#if (defined CRYPTO_GCM_D_S_WAIT_CALC_HASHED_KEY)
#error CRYPTO_GCM_D_S_WAIT_CALC_HASHED_KEY already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the zero block. */
#define CRYPTO_GCM_D_S_WAIT_CALC_HASHED_KEY 5U

#if (defined CRYPTO_GCM_D_S_CALC_ENC_C0)
#error CRYPTO_GCM_D_S_CALC_ENC_C0 already defined
#endif
/** \brief Request encryption of ENC(IV || 0^31 || 1) block. */
#define CRYPTO_GCM_D_S_CALC_ENC_C0 6U

#if (defined CRYPTO_GCM_D_S_WAIT_C0)
#error CRYPTO_GCM_D_S_WAIT_C0 already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the ENC(IV || 0^31 || 1) block. */
#define CRYPTO_GCM_D_S_WAIT_C0 7U

#if (defined CRYPTO_GCM_D_S_GHASH_AAD)
#error CRYPTO_GCM_D_S_GHASH_AAD already defined
#endif
/** \brief Hash the additional authenticated data. */
#define CRYPTO_GCM_D_S_GHASH_AAD 8U

#if (defined CRYPTO_GCM_D_S_ENC_CTR)
#error CRYPTO_GCM_D_S_ENC_CTR already defined
#endif
/** \brief Request encryption of counter block. */
#define CRYPTO_GCM_D_S_ENC_CTR 9U

#if (defined CRYPTO_GCM_D_S_WAIT_ENC_CTR)
#error CRYPTO_GCM_D_S_WAIT_ENC_CTR already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the counter block. */
#define CRYPTO_GCM_D_S_WAIT_ENC_CTR 10U

#if (defined CRYPTO_GCM_D_S_COPY_FROM_INPUT)
#error CRYPTO_GCM_D_S_COPY_FROM_INPUT already defined
#endif
/** \brief Copy bytes from input data. */
#define CRYPTO_GCM_D_S_COPY_FROM_INPUT 11U

#if (defined CRYPTO_GCM_D_S_PROC_INCOMPLETE_BLOCK)
#error CRYPTO_GCM_D_S_PROC_INCOMPLETE_BLOCK already defined
#endif
/** \brief Processes an incomplete block. */
#define CRYPTO_GCM_D_S_PROC_INCOMPLETE_BLOCK 12U

#if (defined CRYPTO_GCM_D_S_COMPARE_TAG)
#error CRYPTO_GCM_D_S_COMPARE_TAG already defined
#endif
/** \brief Compare the computed tag with the received tag. */
#define CRYPTO_GCM_D_S_COMPARE_TAG 13U

#if (defined CRYPTO_GCM_D_S_REQ_AES_FINISH)
#error CRYPTO_GCM_D_S_REQ_AES_FINISH already defined
#endif
/** \brief Request finish of encryption. */
#define CRYPTO_GCM_D_S_REQ_AES_FINISH 14U

#if (defined CRYPTO_GCM_D_S_WAIT_AES_FINISH)
#error CRYPTO_GCM_D_S_WAIT_AES_FINISH already defined
#endif
/** \brief Waiting for the encryption to finish. */
#define CRYPTO_GCM_D_S_WAIT_AES_FINISH 15U

#if (defined CRYPTO_GCM_D_S_INITIALIZED)
#error CRYPTO_GCM_D_S_INITIALIZED already defined
#endif
/** \brief The GCM routine is initialized. */
#define CRYPTO_GCM_D_S_INITIALIZED 16U

#if (defined CRYPTO_GCM_DEC_SET_BUSY)
#error CRYPTO_GCM_DEC_SET_BUSY already defined
#endif

/** \brief Set the decryption state machine to busy */
#define CRYPTO_GCM_DEC_SET_BUSY              \
do                                                     \
{                                                      \
  Crypto_GCMDecContext.ResultVal = Result;   \
  Crypto_GCMDecContext.IsBusy    = Busy;     \
  if ((NULL_PTR != Result) && (NULL_PTR != Busy))      \
  {                                                    \
    *Crypto_GCMDecContext.ResultVal = E_OK;  \
    *Crypto_GCMDecContext.IsBusy = TRUE;     \
  }                                                    \
} while (0U)

#endif /* #if (CRYPTO_GCM_DEC_ENABLED == STD_ON) */

/*==[Types]=======================================================================================*/

/*--GCM-ENCRYPT---------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_ENC_ENABLED == STD_ON)

/** \struct Crypto_GCMEncConfigType
 *  \brief The configuration of the GCM encryption.
 *
 *  \var Crypto_GCMEncConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_GCMEncConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_GCMEncConfigType::Job
 *  \brief Reference to the processed job.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)     Job,
    uint8                                                          Error
  );
  uint32                                                           ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)       Job;
}
Crypto_GCMEncConfigType;

/** \brief The internal state type of the GCM encryption. */
typedef uint8 Crypto_GCMEncStateType;

/** \struct Crypto_GCMEncContextType
 *
 *  \brief Structure which contains the context of the GCM encryption.
 *
 *  \var Crypto_GCMEncContextType::EncLenCT
 *  \brief Total length of the CT to be encoded with GHASH.
 *
 *  \var Crypto_GCMEncContextType::AADLength
 *  \brief Total length of the AAD to be encoded with GHASH.
 *
 *  \var Crypto_GCMEncContextType::PTLength
 *  \brief Length of the PT.
 *
 *  \var Crypto_GCMEncContextType::AvailCTLen
 *  \brief Available CT after the last Update call.
 *
 *  \var Crypto_GCMEncContextType::BytesStoredInBlock
 *  \brief How many bytes of Crypto_GCMEncContextType::Block are filled at the moment.
 *
 *  \var Crypto_GCMEncContextType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_GCMEncContextType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_GCMEncContextType::AADPtr
 *  \brief A pointer to the start of an array where the additional data is stored over which
 *         the GCM has to be computed.
 *
 *  \var Crypto_GCMEncContextType::PTPtr
 *  \brief A pointer to the start of an array where the data is stored over which
 *         the GCM has to be computed.
 *
 *  \var Crypto_GCMEncContextType::InBuf
 *  \brief Temporary pointer that points to the data that needs to be processed with
 *         Crypto_GCMEncBlock.
 *
 *  \var Crypto_GCMEncContextType::TagLengthPtr
 *  \brief A pointer to the length of the TAG.
 *
 *  \var Crypto_GCMEncContextType::CTLenPtr
 *  \brief A pointer to the start of an array where the cypthertext length will be stored.
 *
 *  \var Crypto_GCMEncContextType::TagPtr
 *  \brief A pointer to the start of an array where the TAG will be stored.
 *
 *  \var Crypto_GCMEncContextType::CTPtr
 *  \brief A pointer to the start of an array where the cypthertext will be stored.
 *
 *  \var Crypto_GCMEncContextType::OutBuf
 *  \brief Temporary pointer that points to the data that processed by Crypto_GCMEncBlock.
 *
 *  \var Crypto_GCMEncContextType::ResultVal
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_GCMEncContextType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_GCMEncContextType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_GCMEncContextType::IV
 *  \brief The IV which is used for creating the GCM.
 *
 *  \var Crypto_GCMEncContextType::Key
 *  \brief The secret key which is used for creating the GCM.
 *
 *  \var Crypto_GCMEncContextType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_GCMEncContextType::State
 *  \brief The current state of the GCM encryption.
 *
 *  \var Crypto_GCMEncContextType::NextState
 *  \brief The next state of the GCM encryption.
 *
 *  \var Crypto_GCMEncContextType::BusyState
 *  \brief The target state of the GCM encryption if the underlying primitive returns busy.
 *
 *  \var Crypto_GCMEncContextType::AADProcessed
 *  \brief Flag that indicates if the additional data was processed.
 *
 *  \var Crypto_GCMEncContextType::Block
 *  \brief An array which contains the current block of data to encrypt.
 *
 *  \var Crypto_GCMEncContextType::H
 *  \brief An temporary array which contains the current processed block.
 *
 *  \var Crypto_GCMEncContextType::First
 *  \brief Block containing ENC(IV || 0^31 || 1)
 *
 *  \var Crypto_GCMEncContextType::Counter
 *  \brief Block containing counter
 *
 *  \var Crypto_GCMEncContextType::CTRKey
 *  \brief Block containing ENC(CTR)
 *
 *  \var Crypto_GCMEncContextType::Tag
 *  \brief Block containing Tag
 *
 *  \var Crypto_GCMDecContextType::CurrOutputLength
 *  \brief To store the current outputLength for SingleCall
 *
 *  \var Crypto_GCMDecContextType::StartOutputLength
 *  \brief To store the outputLength at the beginning for SingleCall
 *
 *  \var Crypto_GCMEncContextType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_GCMEncContextType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_GCMEncContextType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  uint32                                                       EncLenCT;
  uint32                                                       AADLength;
  uint32                                                       PTLength;
  uint32                                                       AvailCTLen;
  uint32                                                       BytesStoredInBlock;
  uint32                                                       ObjId;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
    uint8                                                        Error
  );
  P2CONST(uint8,        AUTOMATIC, CRYPTO_APPL_DATA) AADPtr;
  P2CONST(uint8,        AUTOMATIC, CRYPTO_APPL_DATA) PTPtr;
  P2CONST(uint8,        AUTOMATIC, CRYPTO_APPL_DATA) InBuf;
  P2VAR(uint32,         AUTOMATIC, CRYPTO_APPL_DATA) TagLengthPtr;
  P2VAR(uint32,         AUTOMATIC, CRYPTO_APPL_DATA) CTLenPtr;
  P2VAR(uint8,          AUTOMATIC, CRYPTO_APPL_DATA) TagPtr;
  P2VAR(uint8,          AUTOMATIC, CRYPTO_APPL_DATA) CTPtr;
  P2VAR(uint8,          AUTOMATIC, CRYPTO_APPL_DATA) OutBuf;
  P2VAR(Std_ReturnType, TYPEDEF,   CRYPTO_APPL_DATA) ResultVal;
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) IsBusy;
  P2VAR(Crypto_JobType, TYPEDEF,   CRYPTO_APPL_DATA) Job;
  Crypto_SymKeyType                                  IV;
  Crypto_SymKeyType                                  Key;
  Crypto_OperationModeType                                     CurrentMode;
  Crypto_GCMEncStateType                             State;
  Crypto_GCMEncStateType                             NextState;
  Crypto_GCMEncStateType                             BusyState;
  boolean                                                      AADProcessed;
  uint8                                                        Block[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                        H[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                        First[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                        Counter[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                        CTRKey[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                        Tag[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint32                                                       CurrOutputLength;
  uint32                                                       StartOutputLength;
  boolean                                                      CancelFlag;
  boolean                                                      CallbackFlag;
  Std_ReturnType                                               CallbackResult;
}
Crypto_GCMEncContextType;

#endif /* #if (CRYPTO_GCM_ENC_ENABLED == STD_ON) */

/*--GCM-DECRYPT-----------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_DEC_ENABLED == STD_ON)

/** \struct Crypto_GCMDecConfigType
 *  \brief The configuration of the GCM decryption.
 *
 *  \var Crypto_GCMDecConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_GCMDecConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_GCMDecConfigType::Job
 *  \brief Reference to the processed job.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)     Job,
    uint8                                                          Error
  );
  uint32                                                           ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)       Job;
}
Crypto_GCMDecConfigType;

/** \brief The internal state type of the GCM decryption. */
typedef uint8 Crypto_GCMDecStateType;

/** \struct Crypto_GCMDecContextType
 *
 *  \brief Structure which contains the context of the GCM decryption.
 *
 *  \var Crypto_GCMDecContextType::EncLenCT
 *  \brief Total length of the CT to be encoded with GHASH.
 *
 *  \var Crypto_GCMDecContextType::AADLength
 *  \brief Total length of the AAD to be encoded with GHASH.
 *
 *  \var Crypto_GCMDecContextType::PTLength
 *  \brief Length of the PT.
 *
 *  \var Crypto_GCMDecContextType::AvailPTLen
 *  \brief Available PT after the last Update call.
 *
 *  \var Crypto_GCMDecContextType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_GCMDecContextType::BytesStoredInBlock
 *  \brief How many bytes of Crypto_GCMDecContextType::Block are filled at the moment.
 *
 *  \var Crypto_GCMDecContextType::TagLength
 *  \brief The length of the Tag.
 *
 *  \var Crypto_GCMDecContextType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_GCMDecContextType::TagPtr
 *  \brief A pointer to the start of an array where the TAG will be stored.
 *
 *  \var Crypto_GCMDecContextType::AADPtr
 *  \brief A pointer to the start of an array where the additional data is stored over which
 *         the GCM has to be computed.
 *
 *  \var Crypto_GCMDecContextType::PTPtr
 *  \brief A pointer to the start of an array where the data is stored over which
 *         the GCM has to be computed.
 *
 *  \var Crypto_GCMDecContextType::InBuf
 *  \brief Temporary pointer that points to the data that needs to be processed with
 *         Crypto_GCMEncBlock.
 *
 *  \var Crypto_GCMDecContextType::TagLengthPtr
 *  \brief A pointer to the length of the TAG.
 *
 *  \var Crypto_GCMDecContextType::CTLenPtr
 *  \brief A pointer to the start of an array where the cypthertext length will be stored.
 *
 *  \var Crypto_GCMDecContextType::CTPtr
 *  \brief A pointer to the start of an array where the cypthertext will be stored.
 *
 *  \var Crypto_GCMDecContextType::OutBuf
 *  \brief Temporary pointer that points to the data that processed by Crypto_GCMEncBlock.
 *
 *  \var Crypto_GCMDecContextType::ResultVal
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_GCMDecContextType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_GCMDecContextType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_GCMDecContextType::IV
 *  \brief The IV which is used for creating the GCM.
 *
 *  \var Crypto_GCMDecContextType::Key
 *  \brief The secret key which is used for creating the GCM.
 *
 *  \var Crypto_GCMDecContextType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_GCMDecContextType::State
 *  \brief The current state of the GCM decryption.
 *
 *  \var Crypto_GCMDecContextType::NextState
 *  \brief The next state of the GCM decryption.
 *
 *  \var Crypto_GCMDecContextType::BusyState
 *  \brief The target state of the GCM decryption if the underlying primitive returns busy.
 *
 *  \var Crypto_GCMDecContextType::AADProcessed
 *  \brief Flag that indicates if the additional data was processed.
 *
 *  \var Crypto_GCMDecContextType::Block
 *  \brief An array which contains the current block of data to encrypt.
 *
 *  \var Crypto_GCMDecContextType::H
 *  \brief An temporary array which contains the current processed block.
 *
 *  \var Crypto_GCMDecContextType::First
 *  \brief Block containing ENC(IV || 0^31 || 1)
 *
 *  \var Crypto_GCMDecContextType::Counter
 *  \brief Block containing counter
 *
 *  \var Crypto_GCMDecContextType::CTRKey
 *  \brief Block containing ENC(CTR)
 *
 *  \var Crypto_GCMDecContextType::Tag
 *  \brief Block containing Tag
 *
 *  \var Crypto_GCMDecContextType::CurrOutputLength
 *  \brief To store the current outputLength for SingleCall
 *
 *  \var Crypto_GCMDecContextType::StartOutputLength
 *  \brief To store the outputLength at the beginning for SingleCall
 *
 *  \var Crypto_GCMDecContextType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_GCMDecContextType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_GCMDecContextType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  uint32                                                                EncLenCT;
  uint32                                                                AADLength;
  uint32                                                                CTLength;
  uint32                                                                PTLength;
  uint32                                                                AvailPTLen;
  uint32                                                                ObjId;
  uint32                                                                BytesStoredInBlock;
  uint32                                                                TagLength;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
      P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)       Job,
      uint8                                                              Error
  );
  P2CONST(uint8,                 AUTOMATIC, CRYPTO_APPL_DATA) TagPtr;
  P2CONST(uint8,                 AUTOMATIC, CRYPTO_APPL_DATA) AADPtr;
  P2CONST(uint8,                 AUTOMATIC, CRYPTO_APPL_DATA) CTPtr;
  P2CONST(uint8,                 AUTOMATIC, CRYPTO_APPL_DATA) InBuf;
  P2VAR(uint32,                  AUTOMATIC, CRYPTO_APPL_DATA) PTLenPtr;
  P2VAR(uint8,                   AUTOMATIC, CRYPTO_APPL_DATA) PTPtr;
  P2VAR(uint8,                   AUTOMATIC, CRYPTO_APPL_DATA) OutBuf;
  P2VAR(Crypto_VerifyResultType, TYPEDEF,   CRYPTO_APPL_DATA) ResultPtr;
  P2VAR(Std_ReturnType,          TYPEDEF,   CRYPTO_APPL_DATA) ResultVal;
  P2VAR(boolean,                 AUTOMATIC, CRYPTO_APPL_DATA) IsBusy;
  P2VAR(Crypto_JobType,          TYPEDEF,   CRYPTO_APPL_DATA) Job;
  Crypto_GCMDecStateType                                      State;
  Crypto_GCMDecStateType                                      NextState;
  Crypto_GCMDecStateType                                      BusyState;
  Crypto_SymKeyType                                           IV;
  Crypto_SymKeyType                                           Key;
  uint8                                                                 H[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                                 First[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                                 Counter[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                                 CTRKey[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                                 Tag[CRYPTO_GCM_BLOCK_LEN_BYTES];
  uint8                                                                 Block[CRYPTO_GCM_BLOCK_LEN_BYTES];
  boolean                                                               AADProcessed;
  Crypto_OperationModeType                                              CurrentMode;
  uint32                                                                CurrOutputLength;
  uint32                                                                StartOutputLength;
  boolean                                                               CancelFlag;
  boolean                                                               CallbackFlag;
  Std_ReturnType                                                        CallbackResult;
}
Crypto_GCMDecContextType;

#endif /* #if (CRYPTO_GCM_DEC_ENABLED == STD_ON) */

/*==[Declaration of functions with internal linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--GCM-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED == STD_ON))

/** \brief Hashing using the GHASH algorithm
 *
 *  Calculate Y = GHASH(Data)
 *  GHASH implemented based on the following approach:
 *  www.bearssl.org/constanttime.html#ghash-for-gcm
 *
 *  This hashing function cointains a padding function in case the data is not block size aligned.
 *
 *  \param[in,out] Y            Array to be updated.
 *  \param[in]     H            The GHASH key.
 *  \param[in]     Data         Input data.
 *  \param[in]     Len          Input data length.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
/* !LINKSTO EB_Crypto_CryptAlgos_0821,1 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMGHashCTMul
(
  P2VAR(uint8,   AUTOMATIC, CRYPTO_APPL_DATA) Y,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) H,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Data,
  uint32 Len
);

/** \brief Helper function for hashing using the GHASH algorithm
 *
 *  This  is a helper function for hashing function.It sets the needed variabled to the required
 *  values by referencing the pointers passed as argument.
 *
 *  \param[in Yb           pointer to read the values from.
 *  \param[in] Hb          pointer to read the values from.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMGHashCTMulSetVariables
(
    P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Yb,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Hb
);

/** \brief Helper function for hashing using the GHASH algorithm
 *
 *  This  is a helper function for hashing function. It performes the Karatsuba multiplication algo.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMGHashCTMulKaratsuba
(
  void
);

/** \brief Multiplication in GF(2)[x] with truncation to the lower 32 bits
 *
 *  Multiply two uint32s and keep only the low 32 bits.
 *
 *  \param[in]  Multiplicator Multiplicator.
 *  \param[in]  Multiplicand  Multiplicand.
 *
 *  \return Result of the multiplication.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(uint32, CRYPTO_CODE) Crypto_GCMBmul32
(
  uint32 Multiplicator,
  uint32 Multiplicand
);

/** \brief Bit-reverse a 32-bit word
 *
 *  Algorithm based on Chapter 7-1 from "Hackers Delight" by Henry S. Warren
 *
 *  \param[in]  ReverseValue Value to be reversed.
 *
 *  \return Reversed value.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(uint32, CRYPTO_CODE) Crypto_GCMRev32
(
  uint32 ReverseValue
);

/** \brief Increment the IV
 *
 *  Increment the IV stored in a 16 Byte array.
 *
 *  \param[in]  IV The initialization vector.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMInc
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) IV
);

#endif /* #if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED \
          == STD_ON)) */

/*--GCM-ENCRYPT---------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_ENC_ENABLED == STD_ON)

/**  \brief  Crypto GCM Encrypt Reset
 *
 *           This Function resets the Context of GCM Encrypt.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_Reset
(
  void
);

/** \brief AL Callback function for GCM encryption
 *
 *  This is the abstraction layer callback function for the GCM encryption.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                              Error
);

/** \brief Start function of GCM encryption
 *
 *  This function requests the start of the GCM encryption for the given configuration
 *  and key. The start is performed in Crypto_GCMEncMainFunction().
 *
 *  \param[in]  CfgPtr A pointer to the configuration for which the start of the GCM
 *                     encryption is requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncStart
(
  P2CONST(void,           AUTOMATIC, CRYPTO_APPL_DATA) CfgPtr
);

/** \brief Update function of GCM encryption.
 *
 *  This function requests the update of the GCM encryption for the given data.
 *  The update is performed in Crypto_GCMEncMainFunction().
 *
 *  \param[in]  AADPtr      A pointer to the start of an array which contains the additional data.
 *
 *  \param[in]  AADLength   The amount of data in bytes.
 *
 *  \param[in]  PTPtr       A pointer to the start of an array which contains a part of the
 *                          plain text for which the GCM will be generated.
 *
 *  \param[in]  PTLength    The amount of plain text in bytes.
 *
 *  \param[out] OutPtr      A pointer output buffer.
 *
 *  \param[in,out] OutLength  Pointer to the output data length.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMEncUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) AADPtr,
  uint32                                                AADLength,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) PTPtr,
  uint32                                                PTLength,
  P2VAR(uint8,   AUTOMATIC, CRYPTO_APPL_DATA) OutPtr,
  P2VAR(uint32,  AUTOMATIC, CRYPTO_APPL_DATA) OutLength
);

/** \brief Finish function of GCM encryption.
 *
 *  This function requests the finishing of the GCM
 *  encryption and the storing of the GCM in the given result buffer. The
 *  finishing is performed in Crypto_GCMEncMainFunction().
 *
 *  \param[out]  TagPtr    A pointer to the start of a buffer where the generated Tag will be stored.
 *
 *  \param[in,out]  TagLengthPtr A pointer to a variable which contains the maximal allowed
 *                               length for the GCM in bytes of the Tag
 *
 *  \return Error code
 *
 *  \retval E_OK           If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY  If the main function is processing a requested service at the
 *                         moment.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMEncFinish
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) TagPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) TagLengthPtr
);

/** \brief GCM encryption main function
 *
 *  This function performs the actual GCM encryption
 *  tasks which have been requested by the service functions. When a task has
 *  finished and the primitive was called asynchronously, the callback function
 *  is called to inform the caller of the result.
 *
 *  \param[out] Result  Pointer to where the result of the processing should be stored.
 *  \param[out] Busy    After the function returns, this location indicates whether the computation
 *                      has finished or whether the primitive is still busy.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) Busy
);
/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality is a single function call, instead of having it in the
 *     Crypto_GCMEncMainFunction.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncCallbackCancel
(
  void
);
/** \brief GCM encryption helper callback function
 *
 *  This is the GCM encryption callback function which is called from the
 *  symmetrical block encryption, when the primitive is called asynchronously.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the symmetrical block encryption step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
);

/** \brief State function: Request starting of symmetrical block encryption during GCM start
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncStartAES
(
  void
);

/** \brief State function: Prepare the IV and the Tag
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncPrepareData
(
  void
);

/** \brief State function: Encrypt a block of data.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncBlock
(
  void
);

/** \brief State function: Copy data from input during GCM update
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncCopyFromInput
(
  void
);

/** \brief State function: Process an incomplete block
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncProcIncompleteBlock
(
  void
);

/** \brief State function: Request finishing of symmetrical block encryption
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncFinishAES
(
  void
);

#endif /* #if (CRYPTO_GCM_ENC_ENABLED == STD_ON) */

/*--GCM-DECRYPT-----------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_DEC_ENABLED == STD_ON)

/**  \brief  Crypto GCM Decrypt Reset
 *
 *           This Function resets the Context of GCM Decrypt.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_Reset
(
  void
);

/** \brief AL Callback function for GCM decryption
 *
 *  This is the abstraction layer callback function for the GCM decryption.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/** \brief Start function of GCM decryption
 *
 *  This function requests the start of the GCM decryption for the given configuration
 *  and key. The start is performed in Crypto_GCMDecMainFunction().
 *
 *  \param[in]  CfgPtr A pointer to the configuration for which the start of the GCM
 *                     decryption is requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecStart
(
  P2CONST(void,           AUTOMATIC, CRYPTO_APPL_DATA) CfgPtr
);

/** \brief Update function of GCM decryption.
 *
 *  This function requests the update of the GCM decryption for the given data.
 *  The update is performed in Crypto_GCMEncMainFunction().
 *
 *  \param[in]  AADPtr      A pointer to the start of an array which contains the additional data.
 *
 *  \param[in]  AADLength   The amount of data in bytes.
 *
 *  \param[in]  CTPtr       A pointer to the start of an array which contains a part of the
 *                          cypther text for which the GCM will be generated.
 *
 *  \param[in]  CTLength    The amount of cypther text in bytes.
 *
 *  \param[out] OutPtr      A pointer output buffer.
 *
 *  \param[in,out] OutLength  Pointer to the output data length.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMDecUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) AADPtr,
  uint32                                                AADLength,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) CTPtr,
  uint32                                                CTLength,
  P2VAR(uint8,   AUTOMATIC, CRYPTO_APPL_DATA) OutPtr,
  P2VAR(uint32,  AUTOMATIC, CRYPTO_APPL_DATA) OutLength
);

/** \brief Finish function of GCM decryption.
 *
 *  This function requests the finishing of the GCM
 *  decryption. The finishing is performed in Crypto_GCMDecMainFunction().
 *
 *  \param[in]   TagPtr     A pointer to the start of a buffer where Tag to be verified is stored.
 *
 *  \param[in]   TagLength  The length of the Tag to verify in bits.
 *
 *  \param[out]  ResultPtr  A pointer to a variable where the result of the GCM
 *                          decryption will be stored.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the moment.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMDecFinish
(
  P2CONST(uint8,                 AUTOMATIC, CRYPTO_APPL_DATA) TagPtr,
  uint32                                                                TagLength,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
);

/** \brief GCM decryption main function
 *
 *  This function performs the actual GCM decryption
 *  tasks which have been requested by the service functions. When a task has
 *  finished and the primitive was called asynchronously, the callback function
 *  is called to inform the caller of the result.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the symmetrical block encryption step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) Busy
);
/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality is a single function call, instead of having it in the
 *     Crypto_GCMDecMainFunction.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCallbackCancel
(
  void
);
/** \brief GCM decryption helper callback function
 *
 *  This is the GCM decryption callback function which is called from the
 *  symmetrical block encryption, when the primitive is called asynchronously.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the symmetrical block encryption step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                     Result
);

/** \brief State function: Request starting of symmetrical block encryption during GCM start
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecStartAES
(
  void
);

/** \brief State function: Prepare the IV and Tag
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecPrepareData
(
  void
);

/** \brief State function: Encrypt a block of data.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecBlock
(
  void
);

/** \brief State function: Copy data from input during GCM update
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCopyFromInput
(
  void
);

/** \brief State function: Process an incomplete block
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecProcIncompleteBlock
(
  void
);

/** \brief State function: Compare the generated Tag with the received one.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCompareTag
(
  void
);

/** \brief State function: Request finishing of symmetrical block encryption
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecFinishAES
(
  void
);

#endif /* #if (CRYPTO_GCM_DEC_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Constants with internal linkage]=============================================================*/

/*--GCM-COMMON-----------------------------------------------------------------------------------*/

#define CRYPTO_START_SEC_CONST_8
#include <Crypto_MemMap.h>

/*--GCM-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED == STD_ON))

/** \brief The GCM zero block constant
 */
/* Deviation MISRAC2012-1 */
static CONST(uint8, CRYPTO_CONST) Crypto_GCMZeroBlock[CRYPTO_GCM_BLOCK_LEN_BYTES] =
{
  0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U,
  0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U
};

#endif /* #if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) ||
               (CRYPTO_GCM_DEC_ENABLED == STD_ON)) */

#define CRYPTO_STOP_SEC_CONST_8
#include <Crypto_MemMap.h>

/*==[Variables with internal linkage]=============================================================*/

#if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED == STD_ON))

#define CRYPTO_START_SEC_VAR_CLEARED_32
#include <Crypto_MemMap.h>

/** \brief GCM variable A
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_A[18U];

/** \brief GCM variable B
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_B[18U];

/** \brief GCM variable C
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_C[18U];

/** \brief GCM variable Zw
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_Zw[8U];

/** \brief GCM variable Yw
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_Yw[4U];

/** \brief GCM variable Hw
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_Hw[4U];

/** \brief GCM variable Hwr
 *
 * Variable used in GCM computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_Hwr[4U];

#define CRYPTO_STOP_SEC_VAR_CLEARED_32
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

/** \brief GCM temporary storage
 *
 * Temporary storage for GCM computation.
 */
static VAR(uint8,  CRYPTO_VAR) Crypto_Tmp[16U];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

#endif /* #if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) ||
               (CRYPTO_GCM_DEC_ENABLED == STD_ON)) */

#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

/*--GCM-ENCRYPT---------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_ENC_ENABLED == STD_ON)

/** \brief GCM encryption context
 *
 *  The context variable which is used to store the internal state of the GCM encryption.
 */
static VAR(Crypto_GCMEncContextType, CRYPTO_VAR) Crypto_GCMEncContext;

#endif /* #if (CRYPTO_GCM_ENC_ENABLED == STD_ON) */

/*--GCM-DECRYPT-----------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_DEC_ENABLED == STD_ON)

/** \brief GCM decryption context
 *
 *  The context variable which is used to store the internal state of the GCM decryption.
 */
static VAR(Crypto_GCMDecContextType, CRYPTO_VAR) Crypto_GCMDecContext;

#endif /* #if (CRYPTO_GCM_DEC_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Constants with external linkage]=============================================================*/

/*==[Variables with external linkage]=============================================================*/

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--GCM-ENCRYPT---------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_ENC_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1253, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Crypto_GCMEncConfigType Crypto_GCMEncConfig;
  Std_ReturnType          RetVal  = E_NOT_OK;

  Crypto_GCMEncConfig.Crypto_Generic_Callback =
    &Crypto_AL_AEADENCRYPT_AES_GCM_CallBack;
  Crypto_GCMEncConfig.ObjId                   = ObjectId;
  Crypto_GCMEncConfig.Job                     = Job;
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_AEADENCRYPT_AES_GCM_Reset();
  Crypto_GCMEncContext.Key.length =
  Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;
  RetVal = Crypto_AL_KeyElementGet(Job->cryptoKeyId,
                                             CRYPTO_KE_CIPHER_KEY,
                                             Crypto_GCMEncContext.Key.data,
                                             &(Crypto_GCMEncContext.Key.length)
                                            );

  if(E_OK == RetVal)
  {
    Crypto_GCMEncContext.IV.length  = CRYPTO_GCM_IV_LEN_BYTES;
    RetVal = Crypto_AL_KeyElementGet(Job->cryptoKeyId,
                                               CRYPTO_KE_CIPHER_IV,
                                               Crypto_GCMEncContext.IV.data,
                                               &(Crypto_GCMEncContext.IV.length)
                                              );

    if ((E_OK == RetVal) &&
        (CRYPTO_GCM_IV_LEN_BYTES == Crypto_GCMEncContext.IV.length)
       )
    {
      Crypto_GCMEncStart(&Crypto_GCMEncConfig);
    }
    else
    {
      RetVal = E_NOT_OK;
    }
  }
  else
  {
    RetVal = E_NOT_OK;
  }
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1146, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);

  RetVal = Crypto_GCMEncUpdate(Job->jobPrimitiveInputOutput.secondaryInputPtr,
                               Job->jobPrimitiveInputOutput.secondaryInputLength,
                               Job->jobPrimitiveInputOutput.inputPtr,
                               Job->jobPrimitiveInputOutput.inputLength,
                               Job->jobPrimitiveInputOutput.outputPtr,
                               Job->jobPrimitiveInputOutput.outputLengthPtr
                              );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1167, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);

  RetVal = Crypto_GCMEncFinish(Job->jobPrimitiveInputOutput.secondaryOutputPtr,
                               Job->jobPrimitiveInputOutput.secondaryOutputLengthPtr
                              );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1207, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_GCM_E_S_INITIALIZED == Crypto_GCMEncContext.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_AEADENCRYPT_AES_GCM_Reset();
    /* !LINKSTO EB_Crypto_00063, 1 */
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled immediately */
    Crypto_GCMEncContext.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1228, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) Busy
)
{
  Crypto_GCMEncMainFunction(Result, Busy);
}

#endif /* #if (CRYPTO_GCM_ENC_ENABLED == STD_ON) */

/*--GCM-DECRYPT-----------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_DEC_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1254, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Crypto_GCMDecConfigType Crypto_GCMDecConfig;
  Std_ReturnType           RetVal  = E_NOT_OK;

  Crypto_GCMDecConfig.Crypto_Generic_Callback =
    &Crypto_AL_AEADDECRYPT_AES_GCM_CallBack;
  Crypto_GCMDecConfig.ObjId                   = ObjectId;
  Crypto_GCMDecConfig.Job                     = Job;
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_AEADDECRYPT_AES_GCM_Reset();
  Crypto_GCMDecContext.Key.length =
  Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;
  RetVal = Crypto_AL_KeyElementGet(Job->cryptoKeyId,
                                             CRYPTO_KE_CIPHER_KEY,
                                             Crypto_GCMDecContext.Key.data,
                                             &(Crypto_GCMDecContext.Key.length)
                                            );

  if (E_OK == RetVal)
  {
    Crypto_GCMDecContext.IV.length  = CRYPTO_GCM_IV_LEN_BYTES;
    RetVal = Crypto_AL_KeyElementGet(Job->cryptoKeyId,
                                               CRYPTO_KE_CIPHER_IV,
                                               Crypto_GCMDecContext.IV.data,
                                               &(Crypto_GCMDecContext.IV.length)
                                              );

    if ((E_OK                              == RetVal                                  ) &&
        (CRYPTO_GCM_IV_LEN_BYTES == Crypto_GCMDecContext.IV.length)
       )
    {
      Crypto_GCMDecStart(&Crypto_GCMDecConfig);
    }
    else
    {
      RetVal = E_NOT_OK;
    }
  }
  else
  {
    RetVal = E_NOT_OK;
  }
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1147, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  TS_PARAM_UNUSED(ObjectId);

  RetVal = Crypto_GCMDecUpdate(Job->jobPrimitiveInputOutput.secondaryInputPtr,
                               Job->jobPrimitiveInputOutput.secondaryInputLength,
                               Job->jobPrimitiveInputOutput.inputPtr,
                               Job->jobPrimitiveInputOutput.inputLength,
                               Job->jobPrimitiveInputOutput.outputPtr,
                               Job->jobPrimitiveInputOutput.outputLengthPtr
                              );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1168, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  TS_PARAM_UNUSED(ObjectId);

  RetVal = Crypto_GCMDecFinish(Job->jobPrimitiveInputOutput.tertiaryInputPtr,
                               Job->jobPrimitiveInputOutput.tertiaryInputLength,
                               Job->jobPrimitiveInputOutput.verifyPtr
                              );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1208, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_GCM_D_S_INITIALIZED == Crypto_GCMDecContext.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_AEADDECRYPT_AES_GCM_Reset();
    /* !LINKSTO EB_Crypto_00063, 1 */
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled immediately */
    Crypto_GCMDecContext.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1229, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) Busy
)
{
  Crypto_GCMDecMainFunction(Result, Busy);
}

#endif /* #if (CRYPTO_GCM_DEC_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Definition of functions with internal linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--GCM-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED == STD_ON))

static FUNC(uint32, CRYPTO_CODE) Crypto_GCMBmul32
(
  uint32 Multiplicator,
  uint32 Multiplicand
)
{
  uint32 X0, X1, X2, X3;
  uint32 Y0, Y1, Y2, Y3;
  uint32 Z0, Z1, Z2, Z3;

  X0 = Multiplicator & (uint32)0x11111111UL;
  X1 = Multiplicator & (uint32)0x22222222UL;
  X2 = Multiplicator & (uint32)0x44444444UL;
  X3 = Multiplicator & (uint32)0x88888888UL;
  Y0 = Multiplicand & (uint32)0x11111111UL;
  Y1 = Multiplicand & (uint32)0x22222222UL;
  Y2 = Multiplicand & (uint32)0x44444444UL;
  Y3 = Multiplicand & (uint32)0x88888888UL;
  Z0 = (X0 * Y0) ^ (X1 * Y3) ^ (X2 * Y2) ^ (X3 * Y1);
  Z1 = (X0 * Y1) ^ (X1 * Y0) ^ (X2 * Y3) ^ (X3 * Y2);
  Z2 = (X0 * Y2) ^ (X1 * Y1) ^ (X2 * Y0) ^ (X3 * Y3);
  Z3 = (X0 * Y3) ^ (X1 * Y2) ^ (X2 * Y1) ^ (X3 * Y0);
  Z0 &= (uint32)0x11111111UL;
  Z1 &= (uint32)0x22222222UL;
  Z2 &= (uint32)0x44444444UL;
  Z3 &= (uint32)0x88888888UL;

  return Z0 | Z1 | Z2 | Z3;
}

static FUNC(uint32, CRYPTO_CODE) Crypto_GCMRev32
(
  uint32 ReverseValue
)
{
  CRYPTO_GCM_RMS(ReverseValue, 0x55555555U, 1U);
  CRYPTO_GCM_RMS(ReverseValue, 0x33333333U, 2U);
  CRYPTO_GCM_RMS(ReverseValue, 0x0F0F0F0FU, 4U);
  CRYPTO_GCM_RMS(ReverseValue, 0x00FF00FFU, 8U);

  return (ReverseValue << 16U) | (ReverseValue >> 16U);
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMInc
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) IV
)
{
  uint8 N;

  for (N = CRYPTO_GCM_BLOCK_LEN_BYTES; N != CRYPTO_GCM_IV_LEN_BYTES; N--)
  {
    ++IV[N - 1U];

    if (IV[N - 1U] != 0x00U)
    {
      break;
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMGHashCTMul
(
  P2VAR(uint8,   AUTOMATIC, CRYPTO_APPL_DATA) Y,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) H,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Data,
  uint32 Len
)
{
  /* Some compilers complain that the stack size is too big(432 Bytes).
   * Unfortunately there is no easy solution to fix this warning without
   * impacting in a important manner the execution speed.
   * The most convenient fix is to use uint64 variables instead of uint32;
   * at the moment there is only limited support for it.
   */

  /*
   * This implementation is similar to the one where the result is an uint64
   * except that we have to do the multiplication twice, with the
   * "normal" and "bit reversed" operands. Hence we end up with
   * eighteen 32-bit multiplications instead of nine.
   */
  const uint8 *Buf, *Hb;
  uint8 *      Yb;

  Buf    = Data;
  Yb     = Y;
  Hb     = H;
  /*Call the helper function to set the */
  Crypto_GCMGHashCTMulSetVariables(Yb,Hb);

  while (0U < Len)
  {
    const uint8 *Src;
    uint32       D0, D1, D2, D3, D4, D5, D6, D7;
    uint8        I;

    if (16U <= Len)
    {
      Src = Buf;
      Buf = &Buf[16U];
      Len -= 16U;
    }
    else
    {
      TS_MemCpy(Crypto_Tmp, Buf, Len);
      TS_MemSet(&Crypto_Tmp[Len], 0U, (sizeof(Crypto_Tmp) - Len));
      Src = Crypto_Tmp;
      Len = 0U;
    }
    Crypto_Yw[3U] ^= CRYPTO_GCM_DECU32BE(Src);
    Crypto_Yw[2U] ^= CRYPTO_GCM_DECU32BE(&Src[4U]);
    Crypto_Yw[1U] ^= CRYPTO_GCM_DECU32BE(&Src[8U]);
    Crypto_Yw[0U] ^= CRYPTO_GCM_DECU32BE(&Src[12U]);

    /*
     * We are using Karatsuba: the 128x128 multiplication is
     * reduced to three 64x64 multiplications, hence nine
     * 32x32 multiplications. With the bit-reversal trick,
     * we have to perform 18 32x32 multiplications.
     */

    /*
     * y[0,1]*h[0,1] -> 0,1,4
     * y[2,3]*h[2,3] -> 2,3,5
     * (y[0,1]+y[2,3])*(h[0,1]+h[2,3]) -> 6,7,8
     */
    Crypto_GCMGHashCTMulKaratsuba();

    for (I = 0U; I < 18U; I++)
    {
      Crypto_C[I] = Crypto_GCMBmul32(Crypto_A[I], Crypto_B[I]);
    }

    Crypto_C[4U] ^= Crypto_C[0U] ^ Crypto_C[1U];
    Crypto_C[5U] ^= Crypto_C[2U] ^ Crypto_C[3U];
    Crypto_C[8U] ^= Crypto_C[6U] ^ Crypto_C[7U];

    Crypto_C[13U] ^= Crypto_C[9U]  ^ Crypto_C[10U];
    Crypto_C[14U] ^= Crypto_C[11U] ^ Crypto_C[12U];
    Crypto_C[17U] ^= Crypto_C[15U] ^ Crypto_C[16U];

    /*
     * y[0,1]*h[0,1] -> 0,9^4,1^13,10
     * y[2,3]*h[2,3] -> 2,11^5,3^14,12
     * (y[0,1]+y[2,3])*(h[0,1]+h[2,3]) -> 6,15^8,7^17,16
     */
    D0 = Crypto_C[0U];
    D1 = Crypto_C[4U] ^ (Crypto_GCMRev32(Crypto_C[9U]) >> 1U);
    D2 = Crypto_C[1U] ^ Crypto_C[0U] ^ Crypto_C[2U] ^
         Crypto_C[6U] ^ (Crypto_GCMRev32(Crypto_C[13U]) >> 1U);
    D3 = Crypto_C[4U] ^ Crypto_C[5U] ^ Crypto_C[8U] ^
         (
          Crypto_GCMRev32(
                          Crypto_C[10U] ^ Crypto_C[9U] ^
                          Crypto_C[11U] ^ Crypto_C[15U]
                         ) >> 1U
         );
    D4 = Crypto_C[2U] ^ Crypto_C[1U] ^
         Crypto_C[3U] ^ Crypto_C[7U] ^
         (
          Crypto_GCMRev32(
                          Crypto_C[13U] ^ Crypto_C[14U] ^
                          Crypto_C[17U]
                         ) >> 1U
         );
    D5 = Crypto_C[5U] ^
         (
          Crypto_GCMRev32(
                          Crypto_C[11U] ^ Crypto_C[10U] ^
                          Crypto_C[12U] ^ Crypto_C[16U]
                         ) >> 1U
         );
    D6 = Crypto_C[3U] ^ (Crypto_GCMRev32(Crypto_C[14U]) >> 1U);
    D7 = Crypto_GCMRev32(Crypto_C[12U]) >> 1U;

    Crypto_Zw[0U] =  D0 << 1U;
    Crypto_Zw[1U] = (D1 << 1U) | (D0 >> 31U);
    Crypto_Zw[2U] = (D2 << 1U) | (D1 >> 31U);
    Crypto_Zw[3U] = (D3 << 1U) | (D2 >> 31U);
    Crypto_Zw[4U] = (D4 << 1U) | (D3 >> 31U);
    Crypto_Zw[5U] = (D5 << 1U) | (D4 >> 31U);
    Crypto_Zw[6U] = (D6 << 1U) | (D5 >> 31U);
    Crypto_Zw[7U] = (D7 << 1U) | (D6 >> 31U);

    for (I = 0U; I < 4U; I++)
    {
      uint32 Lw;

      Lw = Crypto_Zw[I];
      Crypto_Zw[I + 4] ^= Lw ^ (Lw >> 1U) ^ (Lw >> 2U) ^ (Lw >> 7U);
      Crypto_Zw[I + 3] ^= (Lw << 31U) ^ (Lw << 30U) ^ (Lw << 25U);
    }
    TS_MemCpy(Crypto_Yw, &Crypto_Zw[4U], sizeof(Crypto_Yw));
  }

  CRYPTO_GCM_ENCU32BE(Yb, Crypto_Yw[3U]);
  CRYPTO_GCM_ENCU32BE(&Yb[4U],  Crypto_Yw[2U]);
  CRYPTO_GCM_ENCU32BE(&Yb[8U],  Crypto_Yw[1U]);
  CRYPTO_GCM_ENCU32BE(&Yb[12U], Crypto_Yw[0U]);
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMGHashCTMulSetVariables
(
    P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Yb,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Hb
)
{
  Crypto_Yw[3U]  = CRYPTO_GCM_DECU32BE(Yb);
  Crypto_Yw[2U]  = CRYPTO_GCM_DECU32BE(&Yb[4U]);
  Crypto_Yw[1U]  = CRYPTO_GCM_DECU32BE(&Yb[8U]);
  Crypto_Yw[0U]  = CRYPTO_GCM_DECU32BE(&Yb[12U]);
  Crypto_Hw[3U]  = CRYPTO_GCM_DECU32BE(Hb);
  Crypto_Hw[2U]  = CRYPTO_GCM_DECU32BE(&Hb[4U]);
  Crypto_Hw[1U]  = CRYPTO_GCM_DECU32BE(&Hb[8U]);
  Crypto_Hw[0U]  = CRYPTO_GCM_DECU32BE(&Hb[12U]);
  Crypto_Hwr[3U] = Crypto_GCMRev32(Crypto_Hw[3U]);
  Crypto_Hwr[2U] = Crypto_GCMRev32(Crypto_Hw[2U]);
  Crypto_Hwr[1U] = Crypto_GCMRev32(Crypto_Hw[1U]);
  Crypto_Hwr[0U] = Crypto_GCMRev32(Crypto_Hw[0U]);
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMGHashCTMulKaratsuba
(
  void
)
{
  Crypto_A[0U] = Crypto_Yw[0U];
  Crypto_A[1U] = Crypto_Yw[1U];
  Crypto_A[2U] = Crypto_Yw[2U];
  Crypto_A[3U] = Crypto_Yw[3U];
  Crypto_A[4U] = Crypto_A[0U] ^ Crypto_A[1U];
  Crypto_A[5U] = Crypto_A[2U] ^ Crypto_A[3U];
  Crypto_A[6U] = Crypto_A[0U] ^ Crypto_A[2U];
  Crypto_A[7U] = Crypto_A[1U] ^ Crypto_A[3U];
  Crypto_A[8U] = Crypto_A[6U] ^ Crypto_A[7U];

  Crypto_A[9U ] = Crypto_GCMRev32(Crypto_Yw[0U]);
  Crypto_A[10U] = Crypto_GCMRev32(Crypto_Yw[1U]);
  Crypto_A[11U] = Crypto_GCMRev32(Crypto_Yw[2U]);
  Crypto_A[12U] = Crypto_GCMRev32(Crypto_Yw[3U]);
  Crypto_A[13U] = Crypto_A[9U ] ^ Crypto_A[10U];
  Crypto_A[14U] = Crypto_A[11U] ^ Crypto_A[12U];
  Crypto_A[15U] = Crypto_A[9U ] ^ Crypto_A[11U];
  Crypto_A[16U] = Crypto_A[10U] ^ Crypto_A[12U];
  Crypto_A[17U] = Crypto_A[15U] ^ Crypto_A[16U];

  Crypto_B[0U] = Crypto_Hw[0U];
  Crypto_B[1U] = Crypto_Hw[1U];
  Crypto_B[2U] = Crypto_Hw[2U];
  Crypto_B[3U] = Crypto_Hw[3U];
  Crypto_B[4U] = Crypto_B[0U] ^ Crypto_B[1U];
  Crypto_B[5U] = Crypto_B[2U] ^ Crypto_B[3U];
  Crypto_B[6U] = Crypto_B[0U] ^ Crypto_B[2U];
  Crypto_B[7U] = Crypto_B[1U] ^ Crypto_B[3U];
  Crypto_B[8U] = Crypto_B[6U] ^ Crypto_B[7U];

  Crypto_B[9U]  = Crypto_Hwr[0U];
  Crypto_B[10U] = Crypto_Hwr[1U];
  Crypto_B[11U] = Crypto_Hwr[2U];
  Crypto_B[12U] = Crypto_Hwr[3U];
  Crypto_B[13U] = Crypto_B[9U]  ^ Crypto_B[10U];
  Crypto_B[14U] = Crypto_B[11U] ^ Crypto_B[12U];
  Crypto_B[15U] = Crypto_B[9U]  ^ Crypto_B[11U];
  Crypto_B[16U] = Crypto_B[10U] ^ Crypto_B[12U];
  Crypto_B[17U] = Crypto_B[15U] ^ Crypto_B[16U];
}

#endif /* #if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) ||
               (CRYPTO_GCM_DEC_ENABLED == STD_ON)) */

/*--GCM-ENCRYPT---------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_ENC_ENABLED == STD_ON)

static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_Reset
(
  void
)
{
  Crypto_AL_ENCRYPT_AES_ECB_Reset();
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(
               &Crypto_GCMEncContext,
               sizeof(Crypto_GCMEncContext)
             );
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADENCRYPT_AES_GCM_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                              Error
)
{
  if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
  {
    if (
         (
           CRYPTO_OPERATIONMODE_FINISH
           == (CRYPTO_OPERATIONMODE_FINISH & Crypto_GCMEncContext.CurrentMode)
         ) || (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_GCMEncContext.CurrentMode = CRYPTO_GCM_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_GCMEncContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_GCMEncContext.ObjId].CurrentJob = NULL_PTR;
      Crypto_DriverObjects[Crypto_GCMEncContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_AEADENCRYPT_AES_GCM_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_GCMEncContext.CurrentMode)
         ) &&
         (
           (
             CRYPTO_OPERATIONMODE_SINGLECALL !=
             (
               Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.mode
               & CRYPTO_OPERATIONMODE_SINGLECALL
             )
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

/* !LINKSTO EB_Crypto_CryptAlgos_0964, 1 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMEncStart
(
  P2CONST(void,           AUTOMATIC, CRYPTO_APPL_DATA) CfgPtr
)
{
  P2CONST(Crypto_GCMEncConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
  (P2CONST(Crypto_GCMEncConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  /* Set state of the state machine to start */
  Crypto_GCMEncContext.State       = CRYPTO_GCM_E_S_PRE_CALCULATIONS;
  Crypto_GCMEncContext.CurrentMode = CRYPTO_OPERATIONMODE_START;

  Crypto_GCMEncContext.ObjId                   = LocCfgPtr->ObjId;
  Crypto_GCMEncContext.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_GCMEncContext.Job                     = LocCfgPtr->Job;
  Crypto_GCMEncContext.AADProcessed            = FALSE;
  Crypto_GCMEncContext.CurrOutputLength        = 0U;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMEncUpdate
(
  P2CONST(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) AADPtr,
  uint32                                                 AADLength,
  P2CONST(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) PTPtr,
  uint32                                                 PTLength,
  P2VAR(uint8,    AUTOMATIC, CRYPTO_APPL_DATA) OutPtr,
  P2VAR(uint32,   AUTOMATIC, CRYPTO_APPL_DATA) OutLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if(CRYPTO_GCM_E_S_INITIALIZED == Crypto_GCMEncContext.State)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0820,1 */
    /* Store data into context */
    Crypto_GCMEncContext.AADPtr     = AADPtr;
    Crypto_GCMEncContext.AADLength  = AADLength;
    Crypto_GCMEncContext.PTPtr      = PTPtr;
    Crypto_GCMEncContext.PTLength   = PTLength;
    Crypto_GCMEncContext.CTPtr      = OutPtr;
    Crypto_GCMEncContext.AvailCTLen = *OutLength;
    Crypto_GCMEncContext.CTLenPtr   = OutLength;
    *Crypto_GCMEncContext.CTLenPtr  = 0U;

    /* Set state of the state machine to update */
    if (FALSE == Crypto_GCMEncContext.AADProcessed)
    {
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_GHASH_AAD;
    }
    else
    {
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_COPY_FROM_INPUT;
    }
    RetVal = E_OK;
  }
  else
  {
    Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMEncFinish
(
  P2VAR(uint8,  AUTOMATIC, CRYPTO_APPL_DATA) TagPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) TagLengthPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if(CRYPTO_GCM_E_S_INITIALIZED == Crypto_GCMEncContext.State)
  {

    /* !LINKSTO EB_Crypto_01030, 1 */
    *Crypto_GCMEncContext.CTLenPtr = 0U;

    /* Store data into context */
    /* !LINKSTO EB_Crypto_01029, 1 */
    Crypto_GCMEncContext.TagPtr       = TagPtr;
    Crypto_GCMEncContext.TagLengthPtr = TagLengthPtr;

    /* Set state of the state machine to finish */
    Crypto_GCMEncContext.State       = CRYPTO_GCM_E_S_PROC_INCOMPLETE_BLOCK;
    RetVal                                     = E_OK;

    /* !LINKSTO EB_Crypto_CryptAlgos_0819,1 */
    if (12U > *TagLengthPtr)
    {
      /* NIST 800-38D Section 5.2.1.2: 128, 120, 112, 104, or 96 bit */
      RetVal                               = CRYPTO_E_SMALL_BUFFER;
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
    }
    else
    {
      if(16U < *TagLengthPtr)
      {
        *TagLengthPtr = 16U;
      }
    }
  }
  else
  {
    Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) Busy
)
{
  if (!Crypto_CheckSkipMain(Result, Busy, Crypto_GCMEncContext.ObjId))
  {
    CRYPTO_GCM_ENC_SET_BUSY;

    switch (Crypto_GCMEncContext.State)
    {
      case CRYPTO_GCM_E_S_PRE_CALCULATIONS:
      {

        /* Step 2: Ctx.Counter = J0 = IV || 0^31 || 1 */
        Crypto_GCMEncPrepareData();
      }
      break;

      case CRYPTO_GCM_E_S_REQ_AES_START:
      {
        Crypto_GCMEncStartAES();
      }
      break;

      case CRYPTO_GCM_E_S_CALC_HASHED_KEY:
      {
        /* !LINKSTO EB_Crypto_CryptAlgos_0824,1 */
        /* Step 1 in GCM algo. Calculate H = CIPHk(0^128) */
        Crypto_GCMEncContext.NextState = CRYPTO_GCM_E_S_WAIT_CALC_HASHED_KEY;
        Crypto_GCMEncContext.BusyState = CRYPTO_GCM_E_S_CALC_HASHED_KEY;
        Crypto_GCMEncContext.InBuf     = Crypto_GCMZeroBlock;
        Crypto_GCMEncContext.OutBuf    = Crypto_GCMEncContext.H;

        Crypto_GCMEncBlock();
      }
      break;

      case CRYPTO_GCM_E_S_CALC_ENC_C0:
      {
        /* !LINKSTO EB_Crypto_CryptAlgos_0825,1 */
        /* Step 6 in GCM algo. part of GCTR(J0,S): CIPHk(J0) */
        Crypto_GCMEncContext.NextState = CRYPTO_GCM_E_S_WAIT_C0;
        Crypto_GCMEncContext.BusyState = CRYPTO_GCM_E_S_CALC_ENC_C0;
        Crypto_GCMEncContext.InBuf     = Crypto_GCMEncContext.Counter;
        Crypto_GCMEncContext.OutBuf    = Crypto_GCMEncContext.First;

        /* !LINKSTO EB_Crypto_CryptAlgos_0822,1 */
        Crypto_GCMEncBlock();
      }
      break;

      case CRYPTO_GCM_E_S_GHASH_AAD:
      {
        CRYPTO_GCM_ENC_SET_BUSY;
        Crypto_GCMEncContext.State              = CRYPTO_GCM_E_S_ENC_CTR;
        Crypto_GCMEncContext.AADProcessed       = TRUE;
        Crypto_GCMEncContext.BytesStoredInBlock = 0U;

        /* !LINKSTO EB_Crypto_CryptAlgos_0817,1, EB_Crypto_CryptAlgos_0827,1 */
        /* Part of step 5 in GCM algo. Calculate Ctx.Tag = GHASH(A || 0^v) */
        Crypto_GCMGHashCTMul(Crypto_GCMEncContext.Tag,
                                         Crypto_GCMEncContext.H,
                                         Crypto_GCMEncContext.AADPtr,
                                         Crypto_GCMEncContext.AADLength
                                        );

        /* Increment the CTR
         * Part of step 3: inc32(J0) */
        Crypto_GCMInc(Crypto_GCMEncContext.Counter);
      }
      break;

      case CRYPTO_GCM_E_S_ENC_CTR:
      {
        Crypto_GCMEncContext.NextState = CRYPTO_GCM_E_S_WAIT_ENC_CTR;
        Crypto_GCMEncContext.BusyState = CRYPTO_GCM_E_S_ENC_CTR;
        Crypto_GCMEncContext.InBuf     = Crypto_GCMEncContext.Counter;
        Crypto_GCMEncContext.OutBuf    = Crypto_GCMEncContext.CTRKey;

        /* !LINKSTO EB_Crypto_CryptAlgos_0822,1 */
        /* Part of step 3: part of GCTRk(inc32(J0),P): CIPHk(inc32(J0)) */
        Crypto_GCMEncBlock();
      }
      break;

      case CRYPTO_GCM_E_S_COPY_FROM_INPUT:
      {
        /* Set current mode to call Callback correctly */
        Crypto_GCMEncContext.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        /* !LINKSTO EB_Crypto_CryptAlgos_0826,1 */
        /* Part of step 3: Ctx.Block = C = GCTRk(inc32(J0), P): CIPHk(inc32(J0) ^ P
         * Part of step 5: Ctx.Tag = GHASHh(C) */
        Crypto_GCMEncCopyFromInput();
      }
      break;

      case CRYPTO_GCM_E_S_PROC_INCOMPLETE_BLOCK:
      {
        /* Set current mode to call Callback correctly */
        Crypto_GCMEncContext.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
        /* !LINKSTO EB_Crypto_CryptAlgos_0826,1 */
        /* Part of step 3: Ctx.Block = C = inc32(J0) ^ P (for last incomplete block)
         * Part of step 5: Ctx.Tag = GHASHh(C || 0^u) */
        Crypto_GCMEncProcIncompleteBlock();
      }
      break;

      case CRYPTO_GCM_E_S_REQ_AES_FINISH:
      {
        if(
            CRYPTO_OPERATIONMODE_SINGLECALL ==
            (
              Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.mode
              & CRYPTO_OPERATIONMODE_SINGLECALL
            )
          )
        {
          *(Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.outputLengthPtr) +=
          Crypto_GCMEncContext.CurrOutputLength;
        }
        Crypto_GCMEncFinishAES();
      }
      break;

      case CRYPTO_GCM_E_S_WAIT_AES_START:
      case CRYPTO_GCM_E_S_WAIT_CALC_HASHED_KEY:
      case CRYPTO_GCM_E_S_WAIT_C0:
      case CRYPTO_GCM_E_S_WAIT_ENC_CTR:
      case CRYPTO_GCM_E_S_WAIT_AES_FINISH:
      {
        /* Only called in asynchronous processing type */
        Crypto_AES_Helper_Encrypt_MainFunction();
      }
      break;
      default:
      {
        /* Nothing to do.*/
      }
      break;
    }
    Crypto_GCMEncCallbackCancel();
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncCallbackCancel
(
  void
)
{
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
  if(TRUE == Crypto_GCMEncContext.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_GCMEncContext.ResultVal)
         && (NULL_PTR != Crypto_GCMEncContext.IsBusy)
       )
    {
      *Crypto_GCMEncContext.IsBusy = FALSE;
      *Crypto_GCMEncContext.ResultVal = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_GCMEncContext.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_GCMEncContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_GCMEncContext.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_GCMEncContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_GCMEncContext.Crypto_Generic_Callback
    (
      Crypto_GCMEncContext.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_GCMEncContext.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_GCMEncContext.ResultVal)
           && (NULL_PTR != Crypto_GCMEncContext.IsBusy)
         )
      {
        *Crypto_GCMEncContext.IsBusy = FALSE;
        *Crypto_GCMEncContext.ResultVal =
        Crypto_GCMEncContext.CallbackResult;
      }
      if(
          (
            CRYPTO_PROCESSING_ASYNC ==
            Crypto_GCMEncContext.Job->jobPrimitiveInfo->processingType
          ) &&
          (
            (
              (
                ((uint8)Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.mode) &
                ((uint8)CRYPTO_OPERATIONMODE_SINGLECALL)
              ) == ((uint8)CRYPTO_OPERATIONMODE_SINGLECALL)
            ) ||
            (
              (
                ((uint8)Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.mode) &
                ((uint8)CRYPTO_OPERATIONMODE_STREAMSTART)
              ) == ((uint8)CRYPTO_OPERATIONMODE_STREAMSTART)
            )
          ) && (CRYPTO_OPERATIONMODE_START == Crypto_GCMEncContext.CurrentMode)
        )
      {
         Crypto_GCMEncContext.StartOutputLength =
         *Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.outputLengthPtr;
        (void)Crypto_AL_AEADENCRYPT_AES_GCM_Update
              (
                Crypto_GCMEncContext.ObjId,
                Crypto_GCMEncContext.Job
              );
      }
      else
      {
        if(
            (
              CRYPTO_PROCESSING_ASYNC ==
              Crypto_GCMEncContext.Job->jobPrimitiveInfo->processingType
            ) &&
            (
              (
                (
                  ((uint8)Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.mode) &
                  ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
              )
            ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_GCMEncContext.CurrentMode)
          )
        {
          Crypto_GCMEncContext.CurrOutputLength =
          *(Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.outputLengthPtr);
          /* !LINKSTO EB_Crypto_01029, 1 */
          Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.outputPtr =
          &(Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.outputPtr[Crypto_GCMEncContext.CurrOutputLength]);
          /* !LINKSTO EB_Crypto_01030, 1 */
          *(Crypto_GCMEncContext.Job->jobPrimitiveInputOutput.outputLengthPtr) =
          Crypto_GCMEncContext.StartOutputLength - Crypto_GCMEncContext.CurrOutputLength;
          (void)Crypto_AL_AEADENCRYPT_AES_GCM_Finish
                (
                  Crypto_GCMEncContext.ObjId,
                  Crypto_GCMEncContext.Job
                );
        }
      }
      Crypto_GCMEncContext.Crypto_Generic_Callback
      (
        Crypto_GCMEncContext.Job,
        Crypto_GCMEncContext.CallbackResult
      );
      Crypto_GCMEncContext.CallbackFlag = FALSE;
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
)
{
  /* This function is only called with Result = E_OK, because the helper update and finish is always
     called with valid buffers and valid lengths.*/
  switch (Crypto_GCMEncContext.State)
  {
    case CRYPTO_GCM_E_S_WAIT_AES_START:
    {
      /* Starting the encryption has succeeded.
       * Now we can request encryption of the zero block.
       */
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_CALC_HASHED_KEY;
    }
    break;

    case CRYPTO_GCM_E_S_WAIT_CALC_HASHED_KEY:
    {
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_CALC_ENC_C0;
    }
    break;

    case CRYPTO_GCM_E_S_WAIT_C0:
    {
      /* Waiting for Update with the AAD and CT */
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_INITIALIZED;
      Crypto_GCMEncContext.CallbackFlag = TRUE;
      Crypto_GCMEncContext.CallbackResult = E_OK;
    }
    break;

    case CRYPTO_GCM_E_S_WAIT_ENC_CTR:
    {
      Crypto_GCMEncContext.State             = CRYPTO_GCM_E_S_COPY_FROM_INPUT;
      Crypto_GCMEncContext.BytesStoredInBlock = 0U;
    }
    break;

    case CRYPTO_GCM_E_S_WAIT_AES_FINISH:
    {
      /* Finishing the encryption has succeeded.
       * Now we can successfully finish the GCM encryption.
       */
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
      Crypto_GCMEncContext.CallbackFlag = TRUE;
      Crypto_GCMEncContext.CallbackResult = E_OK;
    }
    break;
    /* CHECK: NOPARSE */
    /* default case can not be covered because the all the cases that the state machine can have
       when this callback is called are covered in the cases above.*/
    default:
    {
      /* Caution: this 'default' is required by MISRA-C:2012 */
    }
    break;
   /* CHECK: PARSE */
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(Result);
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncStartAES
(
  void
)
{
  /* Try requesting the start of the symmetrical block encryption with the GCM key.
   * If the request succeeds, wait for the callback by the primitive.
   */
  Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_WAIT_AES_START;

  if(
      E_OK != Crypto_AES_Helper_Encrypt_Start
              (
                Crypto_GCMEncContext.ObjId,
                &Crypto_GCMEncCallback,
                Crypto_GCMEncContext.Job,
                Crypto_GCMEncContext.Job->jobPrimitiveInfo->processingType,
                &Crypto_GCMEncContext.Key
              )
    )
  {
    /* Encryption could not be started. Finish the GCM computation with an error. */
    Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
    Crypto_GCMEncContext.CallbackFlag = TRUE;
    Crypto_GCMEncContext.CallbackResult = E_NOT_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncPrepareData
(
  void
)
{
  Crypto_GCMEncContext.State    = CRYPTO_GCM_E_S_REQ_AES_START;
  Crypto_GCMEncContext.EncLenCT = 0U;

  /* Step 2 in GCM algo. Prepare J0 */

  /* J0 = IV || 0^31 || 1 */
  TS_MemCpy(
             Crypto_GCMEncContext.Counter,
             Crypto_GCMEncContext.IV.data,
             CRYPTO_GCM_BLOCK_LEN_BYTES
           );

  TS_MemBZero(&Crypto_GCMEncContext.Counter[CRYPTO_GCM_IV_LEN_BYTES], 3U);

  Crypto_GCMEncContext.Counter[CRYPTO_GCM_BLOCK_LEN_BYTES - 1U] = 0x01U;

  TS_MemCpy(
             Crypto_GCMEncContext.Tag,
             Crypto_GCMZeroBlock,
             CRYPTO_GCM_BLOCK_LEN_BYTES
           );
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncBlock
(
  void
)
{
  uint32 OutSize                       = CRYPTO_GCM_BLOCK_LEN_BYTES;
  Crypto_GCMEncContext.State = Crypto_GCMEncContext.NextState;

  Crypto_AES_Helper_Encrypt_Update
  (
    CRYPTO_PROCESSING_ASYNC,
    Crypto_GCMEncContext.InBuf,
    CRYPTO_GCM_BLOCK_LEN_BYTES,
    Crypto_GCMEncContext.OutBuf,
    &OutSize
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncCopyFromInput
(
  void
)
{
  /* Fill the next block to encrypt with input data and, if there is enough data,
   * XOR it with the last encrypted block and start encrypting it.
   */
  if ((Crypto_GCMEncContext.BytesStoredInBlock + Crypto_GCMEncContext.PTLength)
      >= sizeof(Crypto_GCMEncContext.Block)
     )
  {
    if ((uint32)(Crypto_GCMEncContext.AvailCTLen - CRYPTO_GCM_BLOCK_LEN_BYTES) <
        (uint32)(0xFFFFFFFFUL - CRYPTO_GCM_BLOCK_LEN_BYTES))
    {
      uint32 NewLen;

      /* We have enough data to fill a complete block to encrypt and we know that the
       * block will not be the last.
       */

      /* Copy input data to the block until it is full. */
      NewLen =
        CRYPTO_GCM_BLOCK_LEN_BYTES - Crypto_GCMEncContext.BytesStoredInBlock;
      TS_MemCpy
      (
       &Crypto_GCMEncContext.Block[Crypto_GCMEncContext.BytesStoredInBlock],
       Crypto_GCMEncContext.PTPtr,
       NewLen
      );
      Crypto_GCMEncContext.BytesStoredInBlock =
        sizeof(Crypto_GCMEncContext.Block);

      /* Skip the bytes we have read in the input data. */
      Crypto_GCMEncContext.PTPtr     = &Crypto_GCMEncContext.PTPtr[NewLen];
      Crypto_GCMEncContext.PTLength -= NewLen;

      /* CT = Ek ^ PT */
      Crypto_CommonXOR(Crypto_GCMEncContext.Block,
                                 Crypto_GCMEncContext.CTRKey,
                                 CRYPTO_GCM_BLOCK_LEN_BYTES
                                );

      /* !LINKSTO EB_Crypto_CryptAlgos_0829,1 */
      /* Copy to output the CT */
      TS_MemCpy(Crypto_GCMEncContext.CTPtr,
                Crypto_GCMEncContext.Block,
                CRYPTO_GCM_BLOCK_LEN_BYTES
               );

      Crypto_GCMEncContext.CTPtr =
        &Crypto_GCMEncContext.CTPtr[CRYPTO_GCM_BLOCK_LEN_BYTES];
      *Crypto_GCMEncContext.CTLenPtr  += CRYPTO_GCM_BLOCK_LEN_BYTES;
      Crypto_GCMEncContext.EncLenCT   += CRYPTO_GCM_BLOCK_LEN_BYTES;
      Crypto_GCMEncContext.AvailCTLen -= CRYPTO_GCM_BLOCK_LEN_BYTES;

      /* !LINKSTO EB_Crypto_CryptAlgos_0827,1 */
      /* Step 5 in GCM algo. Calculate GHASH(C) */
      Crypto_GCMGHashCTMul(Crypto_GCMEncContext.Tag,
                                       Crypto_GCMEncContext.H,
                                       Crypto_GCMEncContext.Block,
                                       CRYPTO_GCM_BLOCK_LEN_BYTES
                                      );

      /* Increment the CTR */
      Crypto_GCMInc(Crypto_GCMEncContext.Counter);

      /* Request encryption of the CTR for the next block. */
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_ENC_CTR;
    }
    else
    {
      Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
      Crypto_GCMEncContext.CallbackFlag = TRUE;
      Crypto_GCMEncContext.CallbackResult = CRYPTO_E_SMALL_BUFFER;
    }

  }
  else
  {
    /* We do not have enough input data to fill a complete block or we do not know
     * whether the block will be the last one.
     */

    /* Copy the rest of the input data to the block. */
    TS_MemCpy
    (
      &Crypto_GCMEncContext.Block[Crypto_GCMEncContext.BytesStoredInBlock],
      Crypto_GCMEncContext.PTPtr,
      Crypto_GCMEncContext.PTLength
    );
    Crypto_GCMEncContext.BytesStoredInBlock += Crypto_GCMEncContext.PTLength;

    /* We are finished with the current update and wait for more input data or the
     * end of the GCM computation.
     */
    Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_INITIALIZED;
    Crypto_GCMEncContext.CallbackFlag = TRUE;
    Crypto_GCMEncContext.CallbackResult = E_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncProcIncompleteBlock
(
  void
)
{
  if ((uint32)(Crypto_GCMEncContext.AvailCTLen -
               Crypto_GCMEncContext.BytesStoredInBlock
              ) < (uint32)(0xFFFFFFFFUL - Crypto_GCMEncContext.BytesStoredInBlock)
     )
  {
    uint8 encLen[CRYPTO_GCM_BLOCK_LEN_BYTES];
    /* check if last block was complete block */
    if(0U != Crypto_GCMEncContext.BytesStoredInBlock)
    {
      /* CT = Ek ^ PT on last partial block */
      Crypto_CommonXOR(Crypto_GCMEncContext.Block,
                                 Crypto_GCMEncContext.CTRKey,
                                 Crypto_GCMEncContext.BytesStoredInBlock
                                );

      /* !LINKSTO EB_Crypto_CryptAlgos_0829,1 */
      /* Copy to output the CT */
      TS_MemCpy(Crypto_GCMEncContext.CTPtr,
                Crypto_GCMEncContext.Block,
                Crypto_GCMEncContext.BytesStoredInBlock
               );

      Crypto_GCMEncContext.CTPtr =
        &Crypto_GCMEncContext.CTPtr[Crypto_GCMEncContext.BytesStoredInBlock];
      Crypto_GCMEncContext.EncLenCT  += Crypto_GCMEncContext.BytesStoredInBlock;
      *Crypto_GCMEncContext.CTLenPtr += Crypto_GCMEncContext.BytesStoredInBlock;

      /* Pad the CT with 0^u */
      TS_MemSet
      (
        &Crypto_GCMEncContext.Block[Crypto_GCMEncContext.BytesStoredInBlock],
        0U,
        (CRYPTO_GCM_BLOCK_LEN_BYTES - Crypto_GCMEncContext.BytesStoredInBlock)
      );

      /* !LINKSTO EB_Crypto_CryptAlgos_0827,1 */
      /* Step 5 in GCM algo. Calculate GHASH(C || 0^u) */
      Crypto_GCMGHashCTMul(Crypto_GCMEncContext.Tag,
                                       Crypto_GCMEncContext.H,
                                       Crypto_GCMEncContext.Block,
                                       CRYPTO_GCM_BLOCK_LEN_BYTES
                                      );
    }
    TS_MemCpy(Crypto_GCMEncContext.Block,
              Crypto_GCMEncContext.Tag,
              CRYPTO_GCM_BLOCK_LEN_BYTES
             );

    /* Lengths > 2^32 are not supported for both AAD and PT */
    /* Code len(A) || len(C) */
    TS_MemSet(encLen,
              0U,
              CRYPTO_GCM_BLOCK_LEN_BYTES
             );

    /* Lengths are in bits */
    CRYPTO_GCM_ENCU32BE(&encLen[4U], (Crypto_GCMEncContext.AADLength * 8U));
    CRYPTO_GCM_ENCU32BE(&encLen[12U], (Crypto_GCMEncContext.EncLenCT * 8U));

    /* !LINKSTO EB_Crypto_CryptAlgos_0827,1 */
    /* Step 5 in GCM algo. Calculate GHASH(len(A) || len(C)) */
    Crypto_GCMGHashCTMul(Crypto_GCMEncContext.Tag,
                                     Crypto_GCMEncContext.H,
                                     encLen,
                                     CRYPTO_GCM_BLOCK_LEN_BYTES
                                    );

    /* !LINKSTO EB_Crypto_CryptAlgos_0828,1 */
    /*
     * Tag is the GHASH output XORed with the encryption of the
     * nonce with the initial counter value.
     */
    Crypto_CommonXOR(Crypto_GCMEncContext.Tag,
                               Crypto_GCMEncContext.First,
                               CRYPTO_GCM_BLOCK_LEN_BYTES
                              );

    /* !LINKSTO EB_Crypto_CryptAlgos_0829,1 */
    /* Copy the Tag */
    TS_MemCpy(Crypto_GCMEncContext.TagPtr,
              Crypto_GCMEncContext.Tag,
              *Crypto_GCMEncContext.TagLengthPtr
             );

    /* Request encryption of the block. */
    Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_REQ_AES_FINISH;
  }
  else
  {
    Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_IDLE;
    Crypto_GCMEncContext.CallbackFlag = TRUE;
    Crypto_GCMEncContext.CallbackResult = CRYPTO_E_SMALL_BUFFER;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMEncFinishAES
(
  void
)
{
  /* Try finishing the symmetrical block encryption. If the request succeeds, wait
   * for the callback.
   */
  Crypto_GCMEncContext.State = CRYPTO_GCM_E_S_WAIT_AES_FINISH;

  Crypto_AES_Helper_Encrypt_Finish
  (
    Crypto_GCMEncContext.Job->jobPrimitiveInfo->processingType
  );
}

#endif /* #if (CRYPTO_GCM_ENC_ENABLED == STD_ON) */

/*--GCM-DECRYPT-----------------------------------------------------------------------------------*/

#if (CRYPTO_GCM_DEC_ENABLED == STD_ON)

static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_Reset
(
  void
)
{
  Crypto_AL_ENCRYPT_AES_ECB_Reset();
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(
               &Crypto_GCMDecContext,
               sizeof(Crypto_GCMDecContext)
             );
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_AEADDECRYPT_AES_GCM_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
)
{
  if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
  {
    if (
         (
           CRYPTO_OPERATIONMODE_FINISH ==
           (CRYPTO_OPERATIONMODE_FINISH & Crypto_GCMDecContext.CurrentMode)
         ) ||
         (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_GCMDecContext.CurrentMode = CRYPTO_GCM_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_GCMDecContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_GCMDecContext.ObjId].CurrentJob = NULL_PTR;
      Crypto_DriverObjects[Crypto_GCMDecContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_AEADDECRYPT_AES_GCM_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_GCMDecContext.CurrentMode)
         ) &&
         (
           (
             CRYPTO_OPERATIONMODE_SINGLECALL !=
             (
               Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.mode
               & CRYPTO_OPERATIONMODE_SINGLECALL
             )
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

/* !LINKSTO EB_Crypto_CryptAlgos_0964, 1 */
static FUNC(void, CRYPTO_CODE) Crypto_GCMDecStart
(
  P2CONST(void,           AUTOMATIC, CRYPTO_APPL_DATA) CfgPtr
)
{
  P2CONST(Crypto_GCMDecConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
  (P2CONST(Crypto_GCMDecConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  /* Set state of the state machine to start */
  Crypto_GCMDecContext.State       = CRYPTO_GCM_D_S_PRE_CALCULATIONS;
  Crypto_GCMDecContext.CurrentMode = CRYPTO_OPERATIONMODE_START;

  Crypto_GCMDecContext.ObjId                   = LocCfgPtr->ObjId;
  Crypto_GCMDecContext.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_GCMDecContext.Job                     = LocCfgPtr->Job;
  Crypto_GCMDecContext.AADProcessed            = FALSE;
  Crypto_GCMDecContext.CurrOutputLength        = 0U;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMDecUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) AADPtr,
  uint32                                                AADLength,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) CTPtr,
  uint32                                                CTLength,
  P2VAR(uint8,   AUTOMATIC, CRYPTO_APPL_DATA) OutPtr,
  P2VAR(uint32,  AUTOMATIC, CRYPTO_APPL_DATA) OutLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if(CRYPTO_GCM_D_S_INITIALIZED == Crypto_GCMDecContext.State)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0820,1 */
    /* Store data into context */
    Crypto_GCMDecContext.AADPtr     = AADPtr;
    Crypto_GCMDecContext.AADLength  = AADLength;
    Crypto_GCMDecContext.CTPtr      = CTPtr;
    Crypto_GCMDecContext.CTLength   = CTLength;
    Crypto_GCMDecContext.PTPtr      = OutPtr;
    Crypto_GCMDecContext.AvailPTLen = *OutLength;
    Crypto_GCMDecContext.PTLenPtr   = OutLength;
    *Crypto_GCMDecContext.PTLenPtr  = 0U;

    /* Set state of the state machine to update */
    Crypto_GCMDecContext.State       = CRYPTO_GCM_D_S_GHASH_AAD;
    RetVal                                     = E_OK;

    if (FALSE == Crypto_GCMDecContext.AADProcessed)
    {
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_GHASH_AAD;
    }
    else
    {
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_COPY_FROM_INPUT;
    }
  }
  else
  {
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_GCMDecFinish
(
  P2CONST(uint8,                 AUTOMATIC, CRYPTO_APPL_DATA) TagPtr,
  uint32                                                                TagLength,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if(CRYPTO_GCM_D_S_INITIALIZED == Crypto_GCMDecContext.State)
  {

    /* !LINKSTO EB_Crypto_01030, 1 */
    *Crypto_GCMDecContext.PTLenPtr = 0U;

    /* !LINKSTO EB_Crypto_01029, 1 */
    /* Store data into context */
    Crypto_GCMDecContext.TagPtr    = TagPtr;
    Crypto_GCMDecContext.TagLength = TagLength;
    Crypto_GCMDecContext.ResultPtr = ResultPtr;

    /* Set state of the state machine to finish */
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_PROC_INCOMPLETE_BLOCK;
    RetVal                               = E_OK;

    /* !LINKSTO EB_Crypto_CryptAlgos_0831,1 */
    if ((12U > TagLength) || (16U < TagLength))
    {
      /* NIST 800-38D Section 5.2.1.2: 128, 120, 112, 104, or 96 bit */
      RetVal                               = E_NOT_OK;
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
    }
  }
  else
  {
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,        AUTOMATIC, CRYPTO_APPL_DATA) Busy
)
{
  if(!Crypto_CheckSkipMain(Result, Busy, Crypto_GCMDecContext.ObjId))
  {
    CRYPTO_GCM_DEC_SET_BUSY;

    switch(Crypto_GCMDecContext.State)
    {
      case CRYPTO_GCM_D_S_PRE_CALCULATIONS:
      {

        /* !LINKSTO EB_Crypto_CryptAlgos_0833,1 */
        /* Step 2: Ctx.Counter = J0 = IV || 0^31 || 1 */
        Crypto_GCMDecPrepareData();
      }
      break;

      case CRYPTO_GCM_D_S_REQ_AES_START:
      {
        Crypto_GCMDecStartAES();
      }
      break;

      case CRYPTO_GCM_D_S_CALC_HASHED_KEY:
      {
        /* !LINKSTO EB_Crypto_CryptAlgos_0832,1 */
        /* Step 2 in GCM algo. calculate H = CIPHk(0^128) */
        Crypto_GCMDecContext.NextState = CRYPTO_GCM_D_S_WAIT_CALC_HASHED_KEY;
        Crypto_GCMDecContext.BusyState = CRYPTO_GCM_D_S_CALC_HASHED_KEY;
        Crypto_GCMDecContext.InBuf     = Crypto_GCMZeroBlock;
        Crypto_GCMDecContext.OutBuf    = Crypto_GCMDecContext.H;

        Crypto_GCMDecBlock();
      }
      break;

      case CRYPTO_GCM_D_S_CALC_ENC_C0:
      {
        /* Step 6 in GCM algo. part of GCTR(J0,S): CIPHk(J0) */
        Crypto_GCMDecContext.NextState = CRYPTO_GCM_D_S_WAIT_C0;
        Crypto_GCMDecContext.BusyState = CRYPTO_GCM_D_S_CALC_ENC_C0;
        Crypto_GCMDecContext.InBuf     = Crypto_GCMDecContext.Counter;
        Crypto_GCMDecContext.OutBuf    = Crypto_GCMDecContext.First;

        /* !LINKSTO EB_Crypto_CryptAlgos_0822,1, EB_Crypto_CryptAlgos_0834,1 */
        Crypto_GCMDecBlock();
      }
      break;

      case CRYPTO_GCM_D_S_GHASH_AAD:
      {
        Crypto_GCMDecContext.State              = CRYPTO_GCM_D_S_ENC_CTR;
        Crypto_GCMDecContext.AADProcessed       = TRUE;
        Crypto_GCMDecContext.BytesStoredInBlock = 0U;

        /* !LINKSTO EB_Crypto_CryptAlgos_0835,1 */
        /* Part of step 5 in GCM algo. Calculate Ctx.Tag = GHASH(A || 0^v) */
        Crypto_GCMGHashCTMul(Crypto_GCMDecContext.Tag,
                                         Crypto_GCMDecContext.H,
                                         Crypto_GCMDecContext.AADPtr,
                                         Crypto_GCMDecContext.AADLength
                                        );

        /* Increment the CTR
         * Part of step 3: inc32(J0) */
        Crypto_GCMInc(Crypto_GCMDecContext.Counter);
      }
      break;

      case CRYPTO_GCM_D_S_ENC_CTR:
      {
        Crypto_GCMDecContext.NextState = CRYPTO_GCM_D_S_WAIT_ENC_CTR;
        Crypto_GCMDecContext.BusyState = CRYPTO_GCM_D_S_ENC_CTR;
        Crypto_GCMDecContext.InBuf     = Crypto_GCMDecContext.Counter;
        Crypto_GCMDecContext.OutBuf    = Crypto_GCMDecContext.CTRKey;

        /* !LINKSTO EB_Crypto_CryptAlgos_0822,1 */
        /* Part of step 3: part of GCTRk(inc32(J0),P): CIPHk(inc32(J0)) */
        Crypto_GCMDecBlock();
      }
      break;

      case CRYPTO_GCM_D_S_COPY_FROM_INPUT:
      {
        /* Set current mode to call Callback correctly */
        Crypto_GCMDecContext.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        /* !LINKSTO EB_Crypto_CryptAlgos_0834,1 */
        /* Part of step 3: Ctx.Block = C = GCTRk(inc32(J0), P): CIPHk(inc32(J0) ^ P
         * Part of step 5: Ctx.Tag = GHASHh(C) */
        Crypto_GCMDecCopyFromInput();
      }
      break;

      case CRYPTO_GCM_D_S_PROC_INCOMPLETE_BLOCK:
      {
        /* Set current mode to call Callback correctly */
        Crypto_GCMDecContext.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
        /* !LINKSTO EB_Crypto_CryptAlgos_0834,1 */
        /* Part of step 3: Ctx.Block = C = inc32(J0) ^ P (for last incomplete block)
         * Part of step 5: Ctx.Tag = GHASHh(C || 0^u) */
        Crypto_GCMDecProcIncompleteBlock();
      }
      break;

      case CRYPTO_GCM_D_S_COMPARE_TAG:
      {
        Crypto_GCMDecCompareTag();
      }
      break;

      case CRYPTO_GCM_D_S_REQ_AES_FINISH:
      {
        if(
            CRYPTO_OPERATIONMODE_SINGLECALL ==
            (
              Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.mode
              & CRYPTO_OPERATIONMODE_SINGLECALL
            )
          )
        {
          *(Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.outputLengthPtr) +=
          Crypto_GCMDecContext.CurrOutputLength;
        }
        Crypto_GCMDecFinishAES();
      }
      break;

      case CRYPTO_GCM_D_S_WAIT_AES_START:
      case CRYPTO_GCM_D_S_WAIT_CALC_HASHED_KEY:
      case CRYPTO_GCM_D_S_WAIT_C0:
      case CRYPTO_GCM_D_S_WAIT_ENC_CTR:
      case CRYPTO_GCM_D_S_WAIT_AES_FINISH:
      {
        /* Only called in asynchronous processing type */
        Crypto_AES_Helper_Encrypt_MainFunction();
      }
      break;


      default:
      {
        /* Nothing to do. */
      }
      break;

    }
     Crypto_GCMDecCallbackCancel();
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCallbackCancel
(
  void
)
{
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1 */
  if(TRUE == Crypto_GCMDecContext.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_GCMDecContext.ResultVal)
         && (NULL_PTR != Crypto_GCMDecContext.IsBusy)
       )
    {
      *Crypto_GCMDecContext.IsBusy = FALSE;
      *Crypto_GCMDecContext.ResultVal = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_GCMDecContext.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_GCMDecContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_GCMDecContext.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_GCMDecContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_GCMDecContext.Crypto_Generic_Callback
    (
      Crypto_GCMDecContext.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_GCMDecContext.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_GCMDecContext.ResultVal)
           && (NULL_PTR != Crypto_GCMDecContext.IsBusy)
         )
      {
        *Crypto_GCMDecContext.IsBusy = FALSE;
        *Crypto_GCMDecContext.ResultVal =
        Crypto_GCMDecContext.CallbackResult;
      }
      if(
          (
            CRYPTO_PROCESSING_ASYNC ==
            Crypto_GCMDecContext.Job->jobPrimitiveInfo->processingType
          ) &&
          (
            (
              (
                ((uint8)Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.mode) &
                  ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
              ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
            ) ||
            (
              (
                ((uint8)Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.mode) &
                ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
              ) == ( (uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
            )
          ) && (CRYPTO_OPERATIONMODE_START == Crypto_GCMDecContext.CurrentMode)
        )
      {
        Crypto_GCMDecContext.StartOutputLength =
        *(Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.outputLengthPtr);
        (void)Crypto_AL_AEADDECRYPT_AES_GCM_Update
              (
                Crypto_GCMDecContext.ObjId,
                Crypto_GCMDecContext.Job
              );
      }
      else
      {
        if(
            (
              CRYPTO_PROCESSING_ASYNC ==
              Crypto_GCMDecContext.Job->jobPrimitiveInfo->processingType
            ) &&
            (
              (
                (
                  ((uint8)Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.mode) &
                  ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
              )
            ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_GCMDecContext.CurrentMode)
          )
        {
          Crypto_GCMDecContext.CurrOutputLength =
          *(Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.outputLengthPtr);
          /* !LINKSTO EB_Crypto_01029, 1 */
          Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.outputPtr =
          &(Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.outputPtr[Crypto_GCMDecContext.CurrOutputLength]);
          /* !LINKSTO EB_Crypto_01030, 1 */
          *(Crypto_GCMDecContext.Job->jobPrimitiveInputOutput.outputLengthPtr) =
          Crypto_GCMDecContext.StartOutputLength - Crypto_GCMDecContext.CurrOutputLength;
          (void)Crypto_AL_AEADDECRYPT_AES_GCM_Finish
                (
                  Crypto_GCMDecContext.ObjId,
                  Crypto_GCMDecContext.Job
                );
        }
      }
      Crypto_GCMDecContext.Crypto_Generic_Callback
      (
        Crypto_GCMDecContext.Job,
        Crypto_GCMDecContext.CallbackResult
      );
      Crypto_GCMDecContext.CallbackFlag = FALSE;
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
)
{

  /* This function is only called with Result = E_OK, because the helper update and finish is always
     called with valid buffers and valid lengths.*/

  switch (Crypto_GCMDecContext.State)
  {
    case CRYPTO_GCM_D_S_WAIT_AES_START:
    {
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_CALC_HASHED_KEY;
    }
    break;

    case CRYPTO_GCM_D_S_WAIT_CALC_HASHED_KEY:
    {
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_CALC_ENC_C0;
    }
    break;

    case CRYPTO_GCM_D_S_WAIT_C0:
    {
      /* Waiting for Update with the AAD */
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_INITIALIZED;
      Crypto_GCMDecContext.CallbackFlag = TRUE;
      Crypto_GCMDecContext.CallbackResult = E_OK;
    }
    break;

    case CRYPTO_GCM_D_S_WAIT_ENC_CTR:
    {
      Crypto_GCMDecContext.State              = CRYPTO_GCM_D_S_COPY_FROM_INPUT;
      Crypto_GCMDecContext.BytesStoredInBlock = 0U;
    }
    break;

    case CRYPTO_GCM_D_S_WAIT_AES_FINISH:
    {
      /* Finishing the encryption has succeeded. Now we can successfully finish the GCM
       * encryption.
       */
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
      Crypto_GCMDecContext.CallbackFlag = TRUE;
      Crypto_GCMDecContext.CallbackResult = E_OK;
    }
    break;
    /* CHECK: NOPARSE */
    /* default case can not be covered because the all the cases that the state machine can have
       when this callback is called are covered in the cases above.*/
    default:
    {
      /* Caution: this 'default' is required by MISRA-C:2012 */
    }
    break;
    /* CHECK: PARSE */
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(Result);
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecStartAES
(
  void
)
{
  Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_WAIT_AES_START;

  if(
      E_OK != Crypto_AES_Helper_Encrypt_Start
              (Crypto_GCMDecContext.ObjId,
               &Crypto_GCMDecCallback,
               Crypto_GCMDecContext.Job,
               Crypto_GCMDecContext.Job->jobPrimitiveInfo->processingType,
               &Crypto_GCMDecContext.Key
              )
    )
  {
    /* Encryption could not be started. Finish the GCM computation with an error. */
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
    Crypto_GCMDecContext.CallbackFlag = TRUE;
    Crypto_GCMDecContext.CallbackResult = E_NOT_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecPrepareData
(
  void
)
{
  Crypto_GCMDecContext.State    = CRYPTO_GCM_D_S_REQ_AES_START;
  Crypto_GCMDecContext.EncLenCT = 0U;

  /* Step 3 in GCM algo. Prepare J0 */
  /* J0 = IV || 0^31 || 1 */
  TS_MemCpy(
             Crypto_GCMDecContext.Counter,
             Crypto_GCMDecContext.IV.data,
             CRYPTO_GCM_IV_LEN_BYTES
           );

  TS_MemBZero(&Crypto_GCMDecContext.Counter[CRYPTO_GCM_IV_LEN_BYTES], 3U);

  Crypto_GCMDecContext.Counter[CRYPTO_GCM_BLOCK_LEN_BYTES - 1U] = 0x01U;

  TS_MemCpy(
             Crypto_GCMDecContext.Tag,
             Crypto_GCMZeroBlock,
             CRYPTO_GCM_BLOCK_LEN_BYTES
           );
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecBlock
(
  void
)
{
  uint32 OutSize                       = CRYPTO_GCM_BLOCK_LEN_BYTES;
  Crypto_GCMDecContext.State = Crypto_GCMDecContext.NextState;

  Crypto_AES_Helper_Encrypt_Update
  (
    CRYPTO_PROCESSING_ASYNC,
    Crypto_GCMDecContext.InBuf,
    CRYPTO_GCM_BLOCK_LEN_BYTES,
    Crypto_GCMDecContext.OutBuf,
    &OutSize
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCopyFromInput
(
  void
)
{
  if ((Crypto_GCMDecContext.BytesStoredInBlock + Crypto_GCMDecContext.CTLength)
      >= sizeof(Crypto_GCMDecContext.Block)
     )
  {
    if ((uint32)(Crypto_GCMDecContext.AvailPTLen - CRYPTO_GCM_BLOCK_LEN_BYTES) <
        (uint32)(0xFFFFFFFFUL - CRYPTO_GCM_BLOCK_LEN_BYTES)
       )
    {
      uint32 NewLen;

      /* We have enough data to fill a complete block to encrypt and we know that the
       * block will not be the last.
       */

      /* Copy input data to the block until it is full. */
      NewLen =
        CRYPTO_GCM_BLOCK_LEN_BYTES - Crypto_GCMDecContext.BytesStoredInBlock;
      TS_MemCpy
      (
        &Crypto_GCMDecContext.Block[Crypto_GCMDecContext.BytesStoredInBlock],
        Crypto_GCMDecContext.CTPtr,
        NewLen
      );
      Crypto_GCMDecContext.BytesStoredInBlock =
        sizeof(Crypto_GCMDecContext.Block);

      /* !LINKSTO EB_Crypto_CryptAlgos_0835,1 */
      /* Step 5 in GCM algo. Calculate GHASH(C) */
      Crypto_GCMGHashCTMul(Crypto_GCMDecContext.Tag,
                                       Crypto_GCMDecContext.H,
                                       Crypto_GCMDecContext.Block,
                                       CRYPTO_GCM_BLOCK_LEN_BYTES
                                       );

      /* Skip the bytes we have read in the input data. */
      Crypto_GCMDecContext.CTPtr     = &Crypto_GCMDecContext.CTPtr[NewLen];
      Crypto_GCMDecContext.CTLength -= NewLen;

      /* PT = Ek ^ CT */
      Crypto_CommonXOR(Crypto_GCMDecContext.Block,
                                 Crypto_GCMDecContext.CTRKey,
                                 CRYPTO_GCM_BLOCK_LEN_BYTES
                                );

      /* Copy to output the PT */
      TS_MemCpy(Crypto_GCMDecContext.PTPtr,
                Crypto_GCMDecContext.Block,
                CRYPTO_GCM_BLOCK_LEN_BYTES
               );

      Crypto_GCMDecContext.PTPtr =
        &Crypto_GCMDecContext.PTPtr[CRYPTO_GCM_BLOCK_LEN_BYTES];
      Crypto_GCMDecContext.EncLenCT   += CRYPTO_GCM_BLOCK_LEN_BYTES;
      *Crypto_GCMDecContext.PTLenPtr  += CRYPTO_GCM_BLOCK_LEN_BYTES;
      Crypto_GCMDecContext.AvailPTLen -= CRYPTO_GCM_BLOCK_LEN_BYTES;

      /* Increment the CTR */
      Crypto_GCMInc(Crypto_GCMDecContext.Counter);

      /* Request encryption of the block. */
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_ENC_CTR;
    }
    else
    {
      Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
      Crypto_GCMDecContext.CallbackFlag = TRUE;
      Crypto_GCMDecContext.CallbackResult = CRYPTO_E_SMALL_BUFFER;
    }
  }
  else
  {
    /* We do not have enough input data to fill a complete block or we do not know
     * whether the block will be the last one.
     */

    /* Copy the rest of the input data to the block. */
    TS_MemCpy
    (
     &Crypto_GCMDecContext.Block[Crypto_GCMDecContext.BytesStoredInBlock],
     Crypto_GCMDecContext.CTPtr,
     Crypto_GCMDecContext.CTLength
    );
    Crypto_GCMDecContext.BytesStoredInBlock += Crypto_GCMDecContext.CTLength;

    /* We are finished with the current update and wait for more input data or the
     * end of the GCM computation.
     */
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_INITIALIZED;
    Crypto_GCMDecContext.CallbackFlag = TRUE;
    Crypto_GCMDecContext.CallbackResult = E_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecProcIncompleteBlock
(
  void
)
{
  if ((uint32)(Crypto_GCMDecContext.AvailPTLen -
               Crypto_GCMDecContext.BytesStoredInBlock
              ) < (uint32)(0xFFFFFFFFUL - Crypto_GCMDecContext.BytesStoredInBlock)
     )
  {
    uint8 encLen[CRYPTO_GCM_BLOCK_LEN_BYTES];
    uint8 lastCTBlock[CRYPTO_GCM_BLOCK_LEN_BYTES];

    /* Save the last CT block */
    TS_MemCpy(lastCTBlock,
              Crypto_GCMDecContext.Block,
              CRYPTO_GCM_BLOCK_LEN_BYTES
             );
    /* check if last block was a complete block */
    if(0U != Crypto_GCMDecContext.BytesStoredInBlock)
    {
      /* PT = Ek ^ CT on last partial block */
      Crypto_CommonXOR(Crypto_GCMDecContext.Block,
                                 Crypto_GCMDecContext.CTRKey,
                                 Crypto_GCMDecContext.BytesStoredInBlock
                                );

      /* Copy to output the PT */
      TS_MemCpy(Crypto_GCMDecContext.PTPtr,
                Crypto_GCMDecContext.Block,
                Crypto_GCMDecContext.BytesStoredInBlock
               );

      Crypto_GCMDecContext.PTPtr =
        &Crypto_GCMDecContext.PTPtr[Crypto_GCMDecContext.BytesStoredInBlock];
      Crypto_GCMDecContext.EncLenCT  += Crypto_GCMDecContext.BytesStoredInBlock;
      *Crypto_GCMDecContext.PTLenPtr += Crypto_GCMDecContext.BytesStoredInBlock;

      /* Pad the CT with 0^u */
      TS_MemSet
        (&lastCTBlock[Crypto_GCMDecContext.BytesStoredInBlock],
         0U,
         (CRYPTO_GCM_BLOCK_LEN_BYTES - Crypto_GCMDecContext.BytesStoredInBlock)
        );

      /* !LINKSTO EB_Crypto_CryptAlgos_0835,1 */
      /* Step 5 in GCM algo. Calculate GHASH(C || 0^u) */
      Crypto_GCMGHashCTMul(Crypto_GCMDecContext.Tag,
                                       Crypto_GCMDecContext.H,
                                       lastCTBlock,
                                       CRYPTO_GCM_BLOCK_LEN_BYTES
                                      );
    }
    TS_MemCpy(Crypto_GCMDecContext.Block,
              Crypto_GCMDecContext.Tag,
              CRYPTO_GCM_BLOCK_LEN_BYTES
             );

    /* Lengths > 2^32 are not supported for both AAD and PT */
    /* Code len(A) || len(C) */
    TS_MemSet(encLen,
              0U,
              CRYPTO_GCM_BLOCK_LEN_BYTES
             );

    CRYPTO_GCM_ENCU32BE(&encLen[4U], (Crypto_GCMDecContext.AADLength * 8U));
    CRYPTO_GCM_ENCU32BE(&encLen[12U], (Crypto_GCMDecContext.EncLenCT * 8U));

    /* !LINKSTO EB_Crypto_CryptAlgos_0835,1 */
    /* Step 5 in GCM algo. Calculate GHASH(len(A) || len(C)) */
    Crypto_GCMGHashCTMul(Crypto_GCMDecContext.Tag,
                                     Crypto_GCMDecContext.H,
                                     encLen,
                                     CRYPTO_GCM_BLOCK_LEN_BYTES
                                    );

    /* !LINKSTO EB_Crypto_CryptAlgos_0836,1 */
    /*
     * Tag is the GHASH output XORed with the encryption of the
     * nonce with the initial counter value.
     */
    Crypto_CommonXOR(Crypto_GCMDecContext.Tag,
                               Crypto_GCMDecContext.First,
                               CRYPTO_GCM_BLOCK_LEN_BYTES
                              );

    /* Request encryption of the block. */
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_COMPARE_TAG;
  }
  else
  {
    Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_IDLE;
    Crypto_GCMDecContext.CallbackFlag = TRUE;
    Crypto_GCMDecContext.CallbackResult = CRYPTO_E_SMALL_BUFFER;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecCompareTag
(
  void
)
{
  Crypto_ReturnType TagComp;
  Crypto_VerifyResultType     verResult;

  TagComp = Crypto_MemCmp_Sec(Crypto_GCMDecContext.TagPtr,
                                        Crypto_GCMDecContext.Tag,
                                        Crypto_GCMDecContext.TagLength
                                       );

  /* !LINKSTO EB_Crypto_CryptAlgos_0837,1 */
  verResult = (E_OK == TagComp) ? CRYPTO_E_VER_OK : CRYPTO_E_VER_NOT_OK;

  *Crypto_GCMDecContext.ResultPtr = verResult;
  Crypto_GCMDecContext.State      = CRYPTO_GCM_D_S_REQ_AES_FINISH;
}

static FUNC(void, CRYPTO_CODE) Crypto_GCMDecFinishAES
(
  void
)
{
  Crypto_GCMDecContext.State = CRYPTO_GCM_D_S_WAIT_AES_FINISH;

  Crypto_AES_Helper_Encrypt_Finish
  (
    Crypto_GCMDecContext.Job->jobPrimitiveInfo->processingType
  );
}

#endif /* #if (CRYPTO_GCM_DEC_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

#endif /* #if ((CRYPTO_GCM_ENC_ENABLED == STD_ON) || (CRYPTO_GCM_DEC_ENABLED \
          == STD_ON)) */

/*==[end of file]=================================================================================*/

