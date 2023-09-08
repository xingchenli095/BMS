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
 * The AUTOSAR memory mapping requires that functions are mapped to SEC_CODE memory sections.
 * Objects at block scope require a different mapping, e.g. to a SEC_VAR section, which leads
 * to nested memory sections, which is not supported by some compilers.
 */

/* !LINKSTO EB_Crypto_CryptAlgos_0604,1 */

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
#include <Crypto_AL_Random.h>
#include <Crypto_AL_Cipher.h>

#if ( (CRYPTO_SSGGENERATE_ENABLED     == STD_ON) || \
      (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)    \
    )

/*==[Macros]======================================================================================*/

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

#if (defined CRYPTO_SSG_PRIM_POLY_SIZE)
#error CRYPTO_SSG_PRIM_POLY_SIZE already defined
#endif
/** \brief Size of the primitive polynomial for SSG. This will also define the size of the state. */
#define CRYPTO_SSG_PRIM_POLY_SIZE 20U

/*--Crypto_SSGStateMachineType--------------------------------------------------------------------*/

#if (defined CRYPTO_SSG_S_IDLE)
#error CRYPTO_SSG_S_IDLE already defined
#endif
/** \brief The idle state of Crypto_SSGStateMachine */
#define CRYPTO_SSG_S_IDLE 0U

#if (defined CRYPTO_SSG_S_GENERATE)
#error CRYPTO_SSG_S_GENERATE already defined
#endif
/** \brief The generate state of Crypto_SSGStateMachine */
#define CRYPTO_SSG_S_GENERATE 1U

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

/*--CTRDRBG--------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

#if (defined CRYPTO_AES_CTRDRBG_SEEDLEN)
#error CRYPTO_AES_CTRDRBG_SEEDLEN already defined
#endif
/** \brief Length of the generated seed value for CTRDRBG. */
#define CRYPTO_AES_CTRDRBG_SEEDLEN           48U

#if (defined CRYPTO_AES_CTRDRBG_KEYLEN)
#error CRYPTO_AES_CTRDRBG_KEYLEN already defined
#endif
/** \brief The key length for the CTRDRBG according to NIST SP-800-90A */
#define CRYPTO_AES_CTRDRBG_KEYLEN            32U

#if (defined CRYPTO_AES_CTRDRBG_BLOCKLEN)
#error CRYPTO_AES_CTRDRBG_BLOCKLEN already defined
#endif
/** \brief The block length for the CTRDRBG according to NIST SP-800-90A */
#define CRYPTO_AES_CTRDRBG_BLOCKLEN          16U

#if(defined CRYPTO_KE_RANDOM_SEED_COUNT)
#error CRYPTO_KE_RANDOM_SEED_COUNT is already defined
#endif
/** \brief Key element which can be used together with the key element CRYPTO_KE_RANDOM_SEED_STATE
 *         to store the seed count.
 */
#define CRYPTO_KE_RANDOM_SEED_COUNT          1005U

#if (defined CRYPTO_MAX_SEED_COUNT)
#error CRYPTO_MAX_SEED_COUNT already defined
#endif
/** \brief The reseed counter limit 2^32-1 */
#define CRYPTO_MAX_SEED_COUNT                0xFFFFFFFFU

#if (defined CRYPTO_AES_CTRDRBG_SEED_COUNTLEN)
#error CRYPTO_AES_CTRDRBG_SEED_COUNTLEN already defined
#endif
/** \brief The length of seed count in bytes to store 2^32-1 */
#define CRYPTO_AES_CTRDRBG_SEED_COUNTLEN     4U

#if (defined CRYPTO_AES_CTRDRBG_INT_STATELEN)
#error CRYPTO_AES_CTRDRBG_INT_STATELEN already defined
#endif
/** \brief The length of the internal state for the CTRDRBG which consists of Key || Block. */
#define CRYPTO_AES_CTRDRBG_INT_STATELEN                      \
((CRYPTO_AES_CTRDRBG_KEYLEN) + (CRYPTO_AES_CTRDRBG_BLOCKLEN))

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

/*==[Types]=======================================================================================*/

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

/** \brief The internal state type for the SSG. */
typedef uint8 Crypto_SSGStateType[CRYPTO_SSG_PRIM_POLY_SIZE];

/** \brief The internal state type of the SSG computation */
typedef uint8 Crypto_SSGStateMachineType;

/** \struct Crypto_SSGCtxType
 *  \brief  Structure which contains the context of the SSG algorithm
 *
 *  \var Crypto_SSGCtxType::LfsrState
 *  \brief An array which contains the state of the linear feedback shift register
 *         which is the base for the SSG Generate
 *
 *  \var Crypto_SSGCtxType::ErrorCode
 *  \brief The error code which should be returned when the current task finishes
 *
 *  \var Crypto_SSGCtxType::State
 *  \brief The current state the SSG is in
 *
 *  \var Crypto_SSGCtxType::Result
 *  \brief A pointer to the start of a buffer where the created pseudo random
 *  bytes should be stored
 *
 *  \var Crypto_SSGCtxType::ResultLength
 *  \brief  The amount of bytes which should be written into the result buffer
 *
 *  \var Crypto_SSGCtxType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states
 *
 *  \var Crypto_SSGCtxType::IsBusy
 *  \brief The pointer to the primitive busy state
 *
 *  \var Crypto_SSGCtxType::ResultVal
 *  \brief The pointer to the data where the result code should be stored
 *
 *  \var Crypto_SSGCtxType::ObjId
 *  \brief The driver object ID
 *
 *  \var Crypto_SSGCtxType::Job
 *  \brief The processed job
 *
 *  \var Crypto_SSGCtxType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_SSGCtxType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_SSGCtxType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  Crypto_SSGStateType                                   LfsrState;
  Std_ReturnType                                                  ErrorCode;
  Crypto_SSGStateMachineType                            State;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)             Result;
  uint32                                                          ResultLength;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
      P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)  Job,
      uint8                                                         Error
  );
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)           IsBusy;
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA)    ResultVal;
  uint32                                                          ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)      Job;
  boolean                                                         CancelFlag;
  boolean                                                         CallbackFlag;
  Std_ReturnType                                                  CallbackResult;
}
Crypto_SSGCtxType;

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

/*--CTRDRBG--------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

/** \struct Crypto_AesCtrdrbgCtxType
 *  \brief  Structure which contains the context of the AES-CTRDRBG algorithm
 *
 *  \var Crypto_AesCtrdrbgCtxType::Block
 *  \brief The Block (V) of the block cipher, which is updated each time another
 *         block of output is produced.
 *
 *  \var Crypto_AesCtrdrbgCtxType::BlockOut
 *  \brief The buffer for one block of the block cipher, which is updated each time another
 *         block of output is produced.
 *
 *  \var Crypto_AesCtrdrbgCtxType::NewEntropy
 *  \brief Holds the computed entropy value.
 *
 *  \var Crypto_AesCtrdrbgCtxType::IntState
 *  \brief The internal state.
 *
 *  According to NIST Sp800 90A the internal state of the AES-CTRDRBG consists of
 *  V (Block), Key and some other variables, which are ommitted in this implementation.
 *  Therefore the length is set to 48 bytes.
 *
 *  \var Crypto_AesCtrdrbgCtxType::Output
 *  \brief The output buffer which is written to the job result pointer.
 *
 *  \var Crypto_AesCtrdrbgCtxType::OutputLength
 *  \brief The length of the output buffer.
 *
 *  \var Crypto_AesCtrdrbgCtxType::Key
 *  \brief  The Key of the block cipher, which is updated whenever a predetermined number of
 *          output blocks are generated.
 *
 *  \var Crypto_AesCtrdrbgCtxType::ErrorCode
 *  \brief The error code which should be returned when the current task finishes.
 *
 *  \var Crypto_AesCtrdrbgCtxType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states
 *
 *  \var Crypto_AesCtrdrbgCtxType::IsBusy
 *  \brief The pointer to the primitive busy state
 *
 *  \var Crypto_AesCtrdrbgCtxType::ResultVal
 *  \brief The pointer to the data where the result code should be stored
 *
 *  \var Crypto_AesCtrdrbgCtxType::ObjId
 *  \brief The driver object ID
 *
 *  \var Crypto_AesCtrdrbgCtxType::Job
 *  \brief The processed job
 *
 *  \var Crypto_AesCtrdrbgCtxType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_AesCtrdrbgCtxType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_AesCtrdrbgCtxType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  uint8                                                           Block[CRYPTO_AES_CTRDRBG_BLOCKLEN];
  uint8                                                           BlockOut[CRYPTO_AES_CTRDRBG_BLOCKLEN];
  uint8                                                           NewEntropy[CRYPTO_AES_CTRDRBG_INT_STATELEN];
  uint8                                                           IntState[CRYPTO_AES_CTRDRBG_INT_STATELEN];
  uint8                                                           Output[CRYPTO_AES_CTRDRBG_BLOCKLEN];
  uint32                                                          OutputLength;
  uint32                                                          ResultLength;
  Crypto_SymKeyType                                     Key;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)             OutputPtr;
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)            OutputLengthPtr;
  Std_ReturnType                                                  ErrorCode;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
      P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)  Job,
      uint8                                                         Error
  );
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)           IsBusy;
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA)    ResultVal;
  uint32                                                          ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)      Job;
  boolean                                                         CancelFlag;
  boolean                                                         CallbackFlag;
  Std_ReturnType                                                  CallbackResult;
}
Crypto_AesCtrdrbgCtxType;

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

/*==[Declaration of functions with internal linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

/** \brief Crypto SSG reset function
 *
 *  This function resets the context of SSG.
 *
 *  \Reentrancy{Non-reentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_Reset
(
  void
);

/** \brief AL Callback function for SSG random number generation
 *
 *  This is the abstraction layer callback function for the SSG random number generation.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/**
 *  \brief SSG random number generation main function
 *
 *  This function performs the actual SSG tasks which have been requested by
 *  the service functions. When a task has finished, the the configured callback function
 *  is called to inform the caller of the result.
 *
 *  \param[in,out] Result  Pointer to where the result of the processing should be stored.
 *  \param[in,out] Busy    After the function returns, this location indicates whether the
 *                         computation has finished or whether the primitive is still busy.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SSGGenerateMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);

/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality is a single function call, instead of having it in the
 *     Crypto_SSGGenerateMainFunction.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void , CRYPTO_CODE) Crypto_SSGGenerate_Callback_Cancel
(
  void
);

/**
 *  \brief SSG random number generation byte generation function
 *
 *  This function performs as many rounds of the self shrinking generator as are
 *  needed to get a single pseudo random byte.
 *
 *  \returns The generated byte value.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(uint8, CRYPTO_CODE) Crypto_SSGGetByte
(
  void
);

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

/*--CTRDRBG--------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

/** \brief Crypto AES-CTRDRBG reset function
 *
 *  This function resets the context of AES-CTRDRBG.
 *
 *  \Reentrancy{Non-reentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_Reset
(
  void
);

/** \brief AL Callback function for AES-CTRDRBG random number generation
 *
 *  This is the abstraction layer callback function for the AES-CTRDRBG random number generation.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/** \brief AES-CTRDRBG seed derivation function
 *
 *  This function is an auxiliary internal function that is used during
 *  DRBG instantiation and reseeding to either derive internal state values
 *  or to distribute entropy throughout a bitstring as described in NIST SP-800-90A.
 *
 *  \param[in] InputString        Holds a pointer to the memory location which contains
 *                                the data to feed the Seed (seed value).
 *  \param[in] InputStringLength  Contains the length of the entropy in bytes.
 *  \param[out] OutputString      Holds a pointer to the memory location where
 *                                the result shall be stored.
 *  \param[in] ObjectId           Identifier of the crypto driver object that shall
 *                                process the request.
 *  \param[in] Job                Reference to the job that shall be processed.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_RandomSeedAESCTRDRBGDF
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)           InputString,
  uint32                                                          InputStringLength,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)             OutputString,
  uint32                                                          ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)    Job
);

/** \brief AES-CTRDRBG seed update function
 *
 *         This function updates the internal state of the CTRDRBG using the
 *         seed value as described in NIST SP-800-90A.
 *
 *  \param[in] ProvidedData   Holds a pointer to the memory location which contains
 *                            the data to feed the Seed (seed value).
 *  \param[in] ObjectId       Identifier of the crypto driver object that shall
 *                            process the request.
 *  \param[in] Job            Reference to the job that shall be processed.
 *
 *  \returns      Result of the request
 *  \retval       E_OK                     Request successful
 *  \retval       E_NOT_OK                 Request failed
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RandomSeedAESCTRDRBGUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)           ProvidedData,
  uint32                                                          ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)    Job
);

/** \brief AES-CTRDRBG BCC function
 *
 *  This function is an auxiliary internal function that is used during DRBG
 *  instantiation and reseeding to either derive internal state values or
 *  to distribute entropy throughout a bitstring as described in NIST SP-800-90A.
 *
 *  \param[in]     Buf                The IV || L || N
 *  \param[in]     InputString        The Entropy for the RandomSeed
 *  \param[in]     InputStringLength  The length of the Entropy
 *  \param[in]     ObjectId           Identifier of the crypto driver object that shall
 *                                    process the request.
 *  \param[in,out] Job                Reference to the job that shall be processed.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_RandomSeedAESCTRDRBGBCC
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)         Buf,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)         InputString,
  uint32                                                        InputStringLength,
  uint32                                                        ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)  Job
);

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AesCtrdrbgGenerateMainFunction
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Constants with internal linkage]=============================================================*/

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

/*--CTRDRBG---------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

/** \brief The AES-ECB job PrimitiveInfo
 *
 *  The PrimitiveInfo is used for processing of a synchronous AES ECB-256 job.
 */
static CONST(Crypto_PrimitiveInfoType, CRYPTO_CONST) Crypto_AESCTRDRBGPrimitiveInfo =
{
  CRYPTO_AES_CTRDRBG_BLOCKLEN,  /* resultLength */
  CRYPTO_ENCRYPT,                         /* service */
  {
    CRYPTO_ALGOFAM_AES,                   /* family */
    CRYPTO_ALGOFAM_NOT_SET,               /* secondaryFamily */
    32U,                                  /* keyLength */
    CRYPTO_ALGOMODE_ECB                   /* mode*/
  }
};

/** \brief The AES ECB job JobPrimitiveInfo
 *
 *  The JobPrimitiveInfo is used for processing of a synchronous AES ECB-256 job.
 */
static CONST(Crypto_JobPrimitiveInfoType, CRYPTO_CONST) Crypto_AESCTRDRBGJobPI =
{
  0U,                                         /* callbackId */
  &Crypto_AESCTRDRBGPrimitiveInfo,  /* primitiveInfo */
  0U,                                         /* secureCounterId */
  0U,                                         /* cryIfKeyId */
  CRYPTO_PROCESSING_SYNC,                     /* processingType */
  FALSE                                       /* callbackUpdateNotification*/
};

/** \brief The AES ECB job JobInfo
 *
 *  The JobInfo is used for processing of a synchronous AES ECB-256 job.
 */
static CONST(Crypto_JobInfoType, CRYPTO_CONST) Crypto_AESCTRDRBGJobInfo =
{
  1U, /* jobId */
  2U  /* jobPriority*/
};

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_CONST_8
#include <Crypto_MemMap.h>

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

/** \brief The SSG primitive polynomial
 *
 *  The primitive polynomial over GF_2^160 used in the linear feedback shift register of the
 *  self shrinking generator. The size of the polynomial will also be the size of the state.
 */
/* Deviation MISRAC2012-1 */
static CONST(uint8, CRYPTO_CONST) Crypto_SSGPrimPoly[CRYPTO_SSG_PRIM_POLY_SIZE] =
{
  0xB7U, 0x36U, 0xA6U, 0xEBU, 0x4AU, 0x68U, 0x19U, 0xF6U,
  0x49U, 0xC7U, 0x9FU, 0x91U, 0x79U, 0xF3U, 0xB0U, 0x81U,
  0x6CU, 0x8EU, 0x95U, 0x67U
};

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CONST_8
#include <Crypto_MemMap.h>

/*==[Variables with internal linkage]=============================================================*/

#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

/** \brief SSG context
 *
 *  The context variable which is used to store the internal state of the
 *  self shrinking generator.
 */
static VAR(Crypto_SSGCtxType, CRYPTO_VAR) Crypto_SSGCtx;

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

/*--CTRDRBG---------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

/** \brief AES-CTRDRBG context
 *
 *  The context variable which is used to store the internal state of the AES-CTRDRBG.
 */
static VAR(Crypto_AesCtrdrbgCtxType, CRYPTO_VAR) Crypto_AesCtrdrbgCtx;

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/*--CTRDRBG---------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

/** \brief The AES-ECB job
 *
 *  The job is used for processing of a synchronous AES ECB-256 job.
 */
/* Deviation MISRAC2012-1 */
static VAR(Crypto_JobType, CRYPTO_VAR) Crypto_AESCTRDRBGJob =
{
  1U,                                             /* jobId */
  CRYPTO_JOBSTATE_IDLE,                           /* state */
  {
    NULL_PTR,                                     /* inputPtr */
    0U,                                           /* inputLength */
    NULL_PTR,                                     /* secondaryInputPtr */
    0U,                                           /* secondaryInputLength */
    NULL_PTR,                                     /* tertiaryInputPtr */
    0U,                                           /* tertiaryInputLength */
    Crypto_AesCtrdrbgCtx.Output,        /* outputPtr */
    &Crypto_AesCtrdrbgCtx.OutputLength, /* outputLengthPtr */
    NULL_PTR,                                     /* secondaryOutputPtr */
    NULL_PTR,                                     /* secondaryOutputLengthPtr */
    NULL_PTR,                                     /* verifyPtr */
    CRYPTO_OPERATIONMODE_SINGLECALL               /* mode */
  },                                              /* jobPrimitiveInputOutput */
  &Crypto_AESCTRDRBGJobPI,              /* jobPrimitiveInfo */
  &Crypto_AESCTRDRBGJobInfo,            /* jobInfo */
  0U                                              /* cryptoKeyId */
};

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Constants with external linkage]=============================================================*/

/*==[Variables with external linkage]=============================================================*/

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_00071, 1 */
/* !LINKSTO EB_Crypto_CryptAlgos_1202, 1, EB_Crypto_CryptAlgos_0967, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_SyncSingleCall
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Std_ReturnType RetVal = E_NOT_OK;
  boolean Busy = FALSE;
  uint32 LfsrStateLength = CRYPTO_SSG_PRIM_POLY_SIZE;

  Crypto_SSGCtx.State = CRYPTO_SSG_S_GENERATE;
  Crypto_SSGCtx.ErrorCode = E_OK;
  Crypto_SSGCtx.ObjId = ObjectId;
  Crypto_SSGCtx.Job = Job;
  Crypto_SSGCtx.Crypto_Generic_Callback =
    &Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_CallBack;
  Crypto_SSGCtx.Result = Job->jobPrimitiveInputOutput.outputPtr;
  Crypto_SSGCtx.ResultLength = *Job->jobPrimitiveInputOutput.outputLengthPtr;

  if (
       E_OK == Crypto_AL_KeyElementGet
               (
                 Job->cryptoKeyId,
                 CRYPTO_KE_RANDOM_SEED_STATE,
                 Crypto_SSGCtx.LfsrState,
                 &LfsrStateLength
               )
     )
  {
    /* Check for correct seed state length */
    if (LfsrStateLength != CRYPTO_SSG_PRIM_POLY_SIZE)
    {
      RetVal = CRYPTO_E_KEY_SIZE_MISMATCH;
    }
    else
    {
      RetVal = E_OK;
    }
  }

  if (
       (E_OK == RetVal) &&
       (CRYPTO_PROCESSING_SYNC == Job->jobPrimitiveInfo->processingType)
     )
  {
    Crypto_SSGGenerateMainFunction(&RetVal, &Busy);
  }

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1221, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  /* Job can not be canceled immediately */
  Crypto_SSGCtx.CancelFlag = TRUE;
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
  RetVal = CRYPTO_E_JOB_CANCELED;

  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1242, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if (!Crypto_CheckSkipMain(Result, Busy, Crypto_SSGCtx.ObjId))
  {
    Crypto_SSGGenerateMainFunction(Result, Busy);
  }
}

/* !LINKSTO EB_Crypto_01028,1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_RandomSeed
(
  uint32                                                CryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) EntropyPtr,
  uint32                                                EntropyLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 Temp;
  uint8 Seed[CRYPTO_SSG_PRIM_POLY_SIZE];

  for (Temp = 0U; Temp < sizeof(Seed); Temp++)
  {
    Seed[Temp] = 0U;
  }

  Temp = EntropyLength;
  while (Temp > sizeof(Seed))
  {
    Crypto_CommonXOR
    (
      Seed,
      &EntropyPtr[EntropyLength - Temp],
      sizeof(Seed)
    );

    Temp -= sizeof(Seed);
  }

  Crypto_CommonXOR
  (
    Seed,
    &EntropyPtr[EntropyLength - Temp],
    Temp
  );

  /* Store the generated seed in the key element */
  RetVal = Crypto_AL_KeyElementSet
           (
             CryptoKeyId,
             CRYPTO_KE_RANDOM_SEED_STATE,
             Seed,
             sizeof(Seed)
           );
  if (E_OK == RetVal)
  {
    RetVal = Crypto_KeyValidSet(CryptoKeyId);
  }

  return RetVal;
}

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

/*--CTRDRBG--------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_01028,1 */
/* !LINKSTO EB_Crypto_CryptAlgos_0603,1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_RandomSeed
(
  uint32                                                CryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) EntropyPtr,
  uint32                                                EntropyLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 ObjectId = 0U;
  uint32 i;
  uint32 SeedCount;
  uint32 SeedCountLength = CRYPTO_AES_CTRDRBG_SEED_COUNTLEN;

  Crypto_AesCtrdrbgCtx.Key.length = CRYPTO_AES_CTRDRBG_KEYLEN;
  Crypto_AESCTRDRBGJob.cryptoKeyId = CryptoKeyId;

  /* 2. seed_material = Block_Cipher_df(seed_material, seedlen) */
  Crypto_RandomSeedAESCTRDRBGDF
  (
    EntropyPtr,
    EntropyLength,
    Crypto_AesCtrdrbgCtx.NewEntropy,
    ObjectId,
    &Crypto_AESCTRDRBGJob
  );
  /* step 3 & 4 */
  for (i = 0U; i < CRYPTO_AES_CTRDRBG_KEYLEN; i++)
  {
    Crypto_AesCtrdrbgCtx.Key.data[i] = 0U;
  }

  for (i = 0U; i < CRYPTO_AES_CTRDRBG_BLOCKLEN; i++)
  {
    Crypto_AesCtrdrbgCtx.Block[i] = 0U;
  }

  /* 5. (Key, V) = CTRDRBG_Update(seed_material, Key, V) */
  RetVal = Crypto_RandomSeedAESCTRDRBGUpdate
           (
             Crypto_AesCtrdrbgCtx.NewEntropy,
             ObjectId,
             &Crypto_AESCTRDRBGJob
           );

  if(
      E_OK == Crypto_AL_KeyElementGet
               (
                 Crypto_AESCTRDRBGJob.cryptoKeyId,
                 CRYPTO_KE_RANDOM_SEED_COUNT,
                 (uint8 *)&SeedCount,
                 &SeedCountLength
               )
    )
  {
    if (SeedCountLength != CRYPTO_AES_CTRDRBG_SEED_COUNTLEN)
    {
      RetVal = E_NOT_OK;
    }
    else
    {
      /* !LINKSTO EB_Crypto_01031,1 */
      SeedCount = 0U;
      /* Store the incremented seed count in key Element */
      /* function can not fail as the availability of the key is checked
         with KeyElementGet and the size check is immediately after. */
      (void)Crypto_AL_KeyElementSet
             (
               Crypto_AESCTRDRBGJob.cryptoKeyId,
               CRYPTO_KE_RANDOM_SEED_COUNT,
               (const uint8 *)&SeedCount,
               SeedCountLength
              );
    }
  }

  return RetVal;
}

/* !LINKSTO EB_Crypto_00071,1 */
/* !LINKSTO EB_Crypto_CryptAlgos_1252,1, EB_Crypto_CryptAlgos_0960,1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_SyncSingleCall
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */

  Std_ReturnType RetVal = E_NOT_OK;

  Crypto_AesCtrdrbgCtx.ObjId = ObjectId;
  Crypto_AesCtrdrbgCtx.Job = Job;
  Crypto_AesCtrdrbgCtx.Crypto_Generic_Callback =
    &Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_CallBack;
  Crypto_AesCtrdrbgCtx.ResultLength = Job->jobPrimitiveInfo->primitiveInfo->resultLength;
  Crypto_AesCtrdrbgCtx.OutputPtr = Job->jobPrimitiveInputOutput.outputPtr;
  Crypto_AesCtrdrbgCtx.OutputLengthPtr = Job->jobPrimitiveInputOutput.outputLengthPtr;
  if (CRYPTO_PROCESSING_SYNC == Job->jobPrimitiveInfo->processingType)
  {
    RetVal = Crypto_AesCtrdrbgGenerateMainFunction(ObjectId, Job);
  }
  else
  {
    RetVal = E_OK;
  }

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1243, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  boolean SkipMain = TRUE;

  if ((NULL_PTR == Result) && (NULL_PTR == Busy))
  {
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    if (FALSE == Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].SkipPeriodicMainFunction)
    {
      if (
           (
             CRYPTO_ALGOFAM_AES ==
             Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].CurrentJob->jobPrimitiveInfo->primitiveInfo->algorithm.family
           ) &&
           (
             CRYPTO_ALGOMODE_CTRDRBG ==
             Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].CurrentJob->jobPrimitiveInfo->primitiveInfo->algorithm.mode
           )
         )
      {
        SkipMain = FALSE;
      }
    }
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  }

  if(!SkipMain)
  {
    Crypto_AesCtrdrbgCtx.IsBusy = Busy;
    Crypto_AesCtrdrbgCtx.ResultVal = Result;

    Crypto_AesCtrdrbgCtx.CallbackResult =
    Crypto_AesCtrdrbgGenerateMainFunction
    (
       Crypto_AesCtrdrbgCtx.ObjId,
       Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].CurrentJob
    );
  }
}

/* !LINKSTO EB_Crypto_CryptAlgos_1222, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_Cancel
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  /* job can not be canceled imideatly */
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  Crypto_AesCtrdrbgCtx.CancelFlag = TRUE;
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
  RetVal = CRYPTO_E_JOB_CANCELED;
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_HelperSyncSingleCall
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)          ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)         ResultLengthPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  Crypto_AesCtrdrbgCtx.ObjId = ObjectId;
  Crypto_AesCtrdrbgCtx.Job = Job;
  Crypto_AesCtrdrbgCtx.Crypto_Generic_Callback = NULL_PTR;
  Crypto_AesCtrdrbgCtx.ResultLength = *ResultLengthPtr;
  Crypto_AesCtrdrbgCtx.OutputPtr = ResultPtr;
  Crypto_AesCtrdrbgCtx.OutputLengthPtr = ResultLengthPtr;

  RetVal = Crypto_AesCtrdrbgGenerateMainFunction(ObjectId, Job);

  return RetVal;
}

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Definition of functions with internal linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--SSG-GENERATE----------------------------------------------------------------------------------*/

#if (CRYPTO_SSGGENERATE_ENABLED == STD_ON)

static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_Reset
(
  void
)
{
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(
               &Crypto_SSGCtx,
               sizeof(Crypto_SSGCtx)
             );
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
)
{
  if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
  {
    /* !LINKSTO SWS_Crypto_00025, 1 */
    /* !LINKSTO SWS_Crypto_00119, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
    Job->jobState = CRYPTO_JOBSTATE_IDLE;
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    Crypto_DriverObjects[Crypto_SSGCtx.ObjId].DriverObjectState = CRYPTO_DRIVER_OBJECT_STATE_IDLE;
    Crypto_DriverObjects[Crypto_SSGCtx.ObjId].CurrentJob = NULL_PTR;
    Crypto_DriverObjects[Crypto_SSGCtx.ObjId].SkipPeriodicMainFunction = TRUE;
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* !LINKSTO SWS_Crypto_00028,1 */
    CryIf_CallbackNotification(Job, Error);
  }
  Crypto_AL_RANDOMGENERATE_RNG_NOT_SET_Reset();
}

static FUNC(void, CRYPTO_CODE) Crypto_SSGGenerateMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  uint32 i;

  Crypto_SSGCtx.IsBusy = Busy;
  Crypto_SSGCtx.ResultVal = Result;
  if ((NULL_PTR != Result) && (NULL_PTR != Busy))
  {
    *Crypto_SSGCtx.IsBusy = TRUE;
    *Crypto_SSGCtx.ResultVal = E_OK;
  }
  switch(Crypto_SSGCtx.State)
  {
    case CRYPTO_SSG_S_GENERATE:
    {
      Crypto_SSGCtx.ErrorCode = CRYPTO_E_ENTROPY_EXHAUSTION;
      for(i = 0U; i < CRYPTO_SSG_PRIM_POLY_SIZE; i++)
      {
        if(0U != Crypto_SSGCtx.LfsrState[i])
        {
          Crypto_SSGCtx.ErrorCode = E_OK;
          break;
        }
      }

      if (CRYPTO_E_ENTROPY_EXHAUSTION != Crypto_SSGCtx.ErrorCode)
      {
        for(i = 0U; i < Crypto_SSGCtx.ResultLength; i++)
        {
          /* Generate each byte individually */
          Crypto_SSGCtx.Result[i] = Crypto_SSGGetByte();
        }
      }

      Crypto_SSGCtx.State = CRYPTO_SSG_S_IDLE;

      /* Write seed state back to key */
      if (E_OK != Crypto_AL_KeyElementSet
          (
            Crypto_SSGCtx.Job->cryptoKeyId,
            CRYPTO_KE_RANDOM_SEED_STATE,
            Crypto_SSGCtx.LfsrState,
            CRYPTO_SSG_PRIM_POLY_SIZE
          )
        )
      {
        Crypto_SSGCtx.ErrorCode = E_NOT_OK;
      }
      Crypto_SSGCtx.CallbackFlag = TRUE;
      Crypto_SSGCtx.CallbackResult = Crypto_SSGCtx.ErrorCode;
    }
    break;

    default:
    {
      /* Default state required by MISRA.
       * Idle and initialized states are ignored.
       */
    }
    break;
  }
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
 Crypto_SSGGenerate_Callback_Cancel();
}
static FUNC(void , CRYPTO_CODE) Crypto_SSGGenerate_Callback_Cancel
(
  void
)
{
  if(TRUE == Crypto_SSGCtx.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_SSGCtx.ResultVal)
         && (NULL_PTR != Crypto_SSGCtx.IsBusy)
       )
    {
      *Crypto_SSGCtx.IsBusy = FALSE;
      *Crypto_SSGCtx.ResultVal = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_SSGCtx.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_SSGCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_SSGCtx.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_SSGCtx.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_SSGCtx.Crypto_Generic_Callback
    (
      Crypto_SSGCtx.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_SSGCtx.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_SSGCtx.ResultVal)
           && (NULL_PTR != Crypto_SSGCtx.IsBusy)
         )
      {
        *Crypto_SSGCtx.IsBusy = FALSE;
        *Crypto_SSGCtx.ResultVal =
        Crypto_SSGCtx.CallbackResult;
      }
      Crypto_SSGCtx.Crypto_Generic_Callback
      (
        Crypto_SSGCtx.Job,
        Crypto_SSGCtx.CallbackResult
      );
      Crypto_SSGCtx.CallbackFlag = FALSE;
    }
  }
}
static FUNC(uint8, CRYPTO_CODE) Crypto_SSGGetByte
(
  void
)
{
  uint8_least WordCounter; /* temporary word counter */
  uint8 RetByte = 0U; /* the byte to return */
  uint8 BitCount = 8U; /* bit loop counter */

  boolean IsCheckBit = TRUE;
  uint8 MustOutput = 0U;
  uint8 CurrentBit;

  do
  {
    CurrentBit = Crypto_SSGCtx.LfsrState[CRYPTO_SSG_PRIM_POLY_SIZE - 1U] & 1U;

    /* !LINKSTO EB_Crypto_CryptAlgos_0607, 1 */
    if (TRUE == IsCheckBit)
    {
      MustOutput = CurrentBit;

      IsCheckBit = FALSE;
    }
    else
    {
      /* !LINKSTO EB_Crypto_CryptAlgos_0609, 1 */
      if (0U != MustOutput)
      {
        --BitCount;
        /* !LINKSTO EB_Crypto_CryptAlgos_0608, 1 */
        RetByte |= (uint8)(CurrentBit << BitCount);
      }

      IsCheckBit = TRUE;
    }

    WordCounter = CRYPTO_SSG_PRIM_POLY_SIZE - 1U;
    /* !LINKSTO EB_Crypto_CryptAlgos_0606, 1 */
    do
    {
      /* we only xor the state with the poly if the OutBit is != 0 */
      if (0U != CurrentBit)
      {
        /* xor state and poly */
        /* !LINKSTO EB_Crypto_CryptAlgos_0605, 1 */
        Crypto_SSGCtx.LfsrState[WordCounter] ^= Crypto_SSGPrimPoly[WordCounter];
      }

      /* right shift by one */
      Crypto_SSGCtx.LfsrState[WordCounter] >>= 1U;

      /* test lowest bit of previous word to look for a carry */
      if (0U != (Crypto_SSGCtx.LfsrState[WordCounter - 1U] & 1U))
      {
        /* set the highest bit */
        Crypto_SSGCtx.LfsrState[WordCounter] |= 0x80U;
      }

      /* go to next word */
      --WordCounter;

    } /* until all but the last word finished */
    while (0U != WordCounter);

    /* the last word is the feedback word */
    if (0U != CurrentBit)
    {
      /* xor with polynomial */
      /* !LINKSTO EB_Crypto_CryptAlgos_0605, 1 */
      Crypto_SSGCtx.LfsrState[0U] ^= Crypto_SSGPrimPoly[0U];

      /* shift 0th word */
      Crypto_SSGCtx.LfsrState[0U] >>= 1U;
      /* this is the place to look for smaller polynomials!! */
      /* and feed back */
      Crypto_SSGCtx.LfsrState[0U] |= 0x80U;
    }
    else
    {
      /* the output bit was a zero, no feedback then */
      /* just shift the 0th word */
      Crypto_SSGCtx.LfsrState[0U] >>= 1U;
    }
  } /* until all bits are done */
  while (0U != BitCount);

  return RetByte;
}

#endif /* #if (CRYPTO_SSGGENERATE_ENABLED == STD_ON) */

/*--CTRDRBG--------------------------------------------------------------------------------------*/

#if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON)

static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_Reset
(
  void
)
{
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(
               &Crypto_AesCtrdrbgCtx,
               sizeof(Crypto_AesCtrdrbgCtx)
             );
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
)
{
  if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
  {
    /* !LINKSTO SWS_Crypto_00025, 1 */
    /* !LINKSTO SWS_Crypto_00119, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
    Job->jobState = CRYPTO_JOBSTATE_IDLE;
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
    Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].CurrentJob = NULL_PTR;
    Crypto_DriverObjects[Crypto_AesCtrdrbgCtx.ObjId].SkipPeriodicMainFunction = TRUE;
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* !LINKSTO SWS_Crypto_00028,1 */
    CryIf_CallbackNotification(Job, Error);
  }
  Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_Reset();
}

static FUNC(void, CRYPTO_CODE) Crypto_RandomSeedAESCTRDRBGDF
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)           InputString,
  uint32                                                          InputStringLength,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)             OutputString,
  uint32                                                          ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)    Job
)
{
  /* the temporary String - 48 Byte */
  uint8 Temp[CRYPTO_AES_CTRDRBG_INT_STATELEN] = { 0U };
  uint32 TempLength = 0U;
  /* Buf - 16 Bytes IV + 4 Bytes L + 4 Bytes N*/
  uint8 Buf[CRYPTO_AES_CTRDRBG_BLOCKLEN + 8U] = { 0U };
  uint32 i;
  uint32 OutputLengthPtr = CRYPTO_AES_CTRDRBG_BLOCKLEN;

  /* 2. L = len(input_string) */
  Buf[16U] = (uint8)(InputStringLength >> 24U);
  Buf[17U] = (uint8)(InputStringLength >> 16U);
  Buf[18U] = (uint8)(InputStringLength >> 8U);
  Buf[19U] = (uint8)(InputStringLength);

  /* 3. N = number_of_bits_to_return/8 */
  Buf[20U] = (uint8)((uint32)CRYPTO_AES_CTRDRBG_INT_STATELEN >> 24U);
  Buf[21U] = (uint8)((uint32)CRYPTO_AES_CTRDRBG_INT_STATELEN >> 16U);
  Buf[22U] = (uint8)((uint32)CRYPTO_AES_CTRDRBG_INT_STATELEN >> 8U);
  Buf[23U] = CRYPTO_AES_CTRDRBG_INT_STATELEN;

  /* 4. S = L || N || input_string || 0x80 is done in the BCC function */

  /* 5. While(len(S) mod outlen) != 0 S = S || 0x00 is done in the BCC function */

  /* 8. K = Leftmost keylen bits of 0x00010203...1E1F */
  for (i = 0U; i < CRYPTO_AES_CTRDRBG_KEYLEN; i++)
  {
    Crypto_AesCtrdrbgCtx.Key.data[i] = (uint8)i;
  }

  /* 7. i = 0 */
  i = 0U;

  /* 9: while len(temp) < keylen + outlen */
  while (TempLength < CRYPTO_AES_CTRDRBG_INT_STATELEN)
  {
    /* 9.1 IV = i */
    Buf[0U] = (uint8)(i >> 24U);
    Buf[1U] = (uint8)(i >> 16U);
    Buf[2U] = (uint8)(i >> 8U);
    Buf[3U] = (uint8)(i);

    /* 9.2 temp = temp || BCC(K, (IV||S)) */
    Crypto_RandomSeedAESCTRDRBGBCC(
                                              Buf,
                                              InputString,
                                              InputStringLength,
                                              ObjectId, Job
                                            );
    TS_MemCpy(&Temp[TempLength], Crypto_AesCtrdrbgCtx.BlockOut, CRYPTO_AES_CTRDRBG_BLOCKLEN);
    TempLength += CRYPTO_AES_CTRDRBG_BLOCKLEN;
    i++;
  }

  /* 10 K = Leftmost keylen bits of temp */
  TS_MemCpy(Crypto_AesCtrdrbgCtx.Key.data, Temp, CRYPTO_AES_CTRDRBG_KEYLEN);

  /* 11 X = Next outlen bits of temp*/
  TS_MemCpy(
             Crypto_AesCtrdrbgCtx.Block,
             &Temp[CRYPTO_AES_CTRDRBG_KEYLEN],
             CRYPTO_AES_CTRDRBG_INT_STATELEN - CRYPTO_AES_CTRDRBG_KEYLEN
           );

  InputStringLength = 0U;
  /* 13 While len(temp) < number_of_bits_to_return */
  while (InputStringLength < CRYPTO_AES_CTRDRBG_INT_STATELEN)
  {
    /* 13.1 X = Block_Encrypt(K, X) */
    /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
       and result in this function always returning E_OK. */
    (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
          (
            Crypto_AesCtrdrbgCtx.Block,
            CRYPTO_AES_CTRDRBG_BLOCKLEN,
            Crypto_AesCtrdrbgCtx.Block,
            &OutputLengthPtr,
            &Crypto_AesCtrdrbgCtx.Key
          );

    /* 13.2 temp = temp || X */
    TS_MemCpy(
               &OutputString[InputStringLength],
               Crypto_AesCtrdrbgCtx.Block,
               CRYPTO_AES_CTRDRBG_BLOCKLEN
             );
    InputStringLength += CRYPTO_AES_CTRDRBG_BLOCKLEN;
  }
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RandomSeedAESCTRDRBGUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)           ProvidedData,
  uint32                                                          ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)    Job
)
{
  Std_ReturnType RetVal;
  /* buffer which will be used as temporary storage */
  uint8 Temp[CRYPTO_AES_CTRDRBG_INT_STATELEN] = { 0U };
  uint32 i = 0U;
  uint32 j;
  uint32 OutputLengthPtr = CRYPTO_AES_CTRDRBG_BLOCKLEN;
  TS_PARAM_UNUSED(ObjectId);

  /* 2 While(len(temp) < seedlen) */
  while (i < CRYPTO_AES_CTRDRBG_INT_STATELEN)
  {
    /* 2.1 V = (V + 1) mod 2^outlen*/
    /* it is hard to simulate with test that encryption gives all 16 bytes as 0xFF */

    for (j = CRYPTO_AES_CTRDRBG_BLOCKLEN - 1U; j != 0U; j--)
    {
      if (0xFFUL != Crypto_AesCtrdrbgCtx.Block[j])
      {
        Crypto_AesCtrdrbgCtx.Block[j] += 1U;
        break;
      }
      else
      {
        Crypto_AesCtrdrbgCtx.Block[j] = 0U;
      }
    }


    /* 2.2 output = Block_Encrypt(symKey, V) */
    /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
       and result in this function always returning E_OK. */
    (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
          (
            Crypto_AesCtrdrbgCtx.Block,
            CRYPTO_AES_CTRDRBG_BLOCKLEN,
            &Temp[i],
            &OutputLengthPtr,
            &Crypto_AesCtrdrbgCtx.Key
          );
    /* 2.3 temp = temp || output_block */
    i += CRYPTO_AES_CTRDRBG_BLOCKLEN;
  }

  /* step 4: temp XOR providedData */
  for(i = 0U; i < CRYPTO_AES_CTRDRBG_INT_STATELEN; i++)
  {
    Temp[i] ^= ProvidedData[i];
  }

  /* step 5: symKey is the first 32 elements of state */
  TS_MemCpy(Crypto_AesCtrdrbgCtx.Key.data, Temp, CRYPTO_AES_CTRDRBG_KEYLEN);
  TS_MemCpy(Crypto_AesCtrdrbgCtx.IntState, Temp, CRYPTO_AES_CTRDRBG_KEYLEN);

  /* step 6: V is the last 16 elements of state */
  TS_MemCpy(Crypto_AesCtrdrbgCtx.Block, &Temp[32U], CRYPTO_AES_CTRDRBG_BLOCKLEN);
  TS_MemCpy(
             &Crypto_AesCtrdrbgCtx.IntState[32U],
             &Temp[32U],
             CRYPTO_AES_CTRDRBG_BLOCKLEN
           );

  RetVal = Crypto_AL_KeyElementSet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_RANDOM_SEED_STATE,
                                              Crypto_AesCtrdrbgCtx.IntState,
                                              CRYPTO_AES_CTRDRBG_SEEDLEN
                                            );

  if (E_OK == RetVal)
  {
    RetVal = Crypto_KeyValidSet(Job->cryptoKeyId);
  }
  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_RandomSeedAESCTRDRBGBCC
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)           Buf,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)           InputString,
  uint32                                                          InputStringLength,
  uint32                                                          ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)    Job
)
{
  uint32 i = 0U;
  uint32 j = 0U;
  uint32 OutputLengthPtr = CRYPTO_AES_CTRDRBG_BLOCKLEN;
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);

  /* step 3 and 4 */
  TS_MemSet(Crypto_AesCtrdrbgCtx.BlockOut, 0U, CRYPTO_AES_CTRDRBG_BLOCKLEN);

  /* Buf contains IV + L + N so size is constant 24 Bytes */
  for (i = 0U; i < CRYPTO_AES_CTRDRBG_BLOCKLEN; i++)
  {
    Crypto_AesCtrdrbgCtx.Block[i] = Crypto_AesCtrdrbgCtx.BlockOut[i] ^ Buf[i];
  }
  /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
     and result in this function always returning E_OK. */
  (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
        (
          Crypto_AesCtrdrbgCtx.Block,
          CRYPTO_AES_CTRDRBG_BLOCKLEN,
          Crypto_AesCtrdrbgCtx.BlockOut,
          &OutputLengthPtr,
          &Crypto_AesCtrdrbgCtx.Key
        );
  /* next block is L + N + first 8 Bytes of InputString */
  for (i = 0U; i < CRYPTO_AES_CTRDRBG_BLOCKLEN >> 1U; i++)
  {
    Crypto_AesCtrdrbgCtx.Block[i] =
    Crypto_AesCtrdrbgCtx.BlockOut[i] ^ Buf[CRYPTO_AES_CTRDRBG_BLOCKLEN + i];
  }
  for (
        i = CRYPTO_AES_CTRDRBG_BLOCKLEN >> 1;
        i < CRYPTO_AES_CTRDRBG_BLOCKLEN;
        i++
      )
  {
    Crypto_AesCtrdrbgCtx.Block[i] = Crypto_AesCtrdrbgCtx.BlockOut[i] ^ InputString[j];
    j++;
  }
  /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
     and result in this function always returning E_OK. */
  (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
        (
          Crypto_AesCtrdrbgCtx.Block,
          CRYPTO_AES_CTRDRBG_BLOCKLEN,
          Crypto_AesCtrdrbgCtx.BlockOut,
          &OutputLengthPtr,
          &Crypto_AesCtrdrbgCtx.Key
        );
  /* process for all complete blocks */
  while(CRYPTO_AES_CTRDRBG_BLOCKLEN <= (InputStringLength - j))
  {
    for (i = 0U; i < CRYPTO_AES_CTRDRBG_BLOCKLEN; i++)
    {
      Crypto_AesCtrdrbgCtx.Block[i] = Crypto_AesCtrdrbgCtx.BlockOut[i] ^ InputString[j];
      j++;
    }

    /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
       and result in this function always returning E_OK. */
    (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
          (
            Crypto_AesCtrdrbgCtx.Block,
            CRYPTO_AES_CTRDRBG_BLOCKLEN,
            Crypto_AesCtrdrbgCtx.BlockOut,
            &OutputLengthPtr,
            &Crypto_AesCtrdrbgCtx.Key
          );
  };
  /* copy remaining Bytes */
  for (i = 0U; i < (InputStringLength - j); i++)
  {
    Crypto_AesCtrdrbgCtx.Block[i] = Crypto_AesCtrdrbgCtx.BlockOut[i] ^ InputString[j + i];
  }
  /* append 0x80 */
  Crypto_AesCtrdrbgCtx.Block[i] = Crypto_AesCtrdrbgCtx.BlockOut[i] ^ 0x80U;
  /* The rest of the next block is the last block XOR 0U */
  for (i = (InputStringLength - j) + 1U; i < CRYPTO_AES_CTRDRBG_BLOCKLEN; i++)
  {
    Crypto_AesCtrdrbgCtx.Block[i] = Crypto_AesCtrdrbgCtx.BlockOut[i];
  }
  /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
     and result in this function always returning E_OK. */
  (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
        (
          Crypto_AesCtrdrbgCtx.Block,
          CRYPTO_AES_CTRDRBG_BLOCKLEN,
          Crypto_AesCtrdrbgCtx.BlockOut,
          &OutputLengthPtr,
          &Crypto_AesCtrdrbgCtx.Key
        );
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AesCtrdrbgGenerateMainFunction
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* The additional input string */
  uint8 AddInput[CRYPTO_AES_CTRDRBG_INT_STATELEN] = { 0U };
  /* Temporary buffer */
  uint8 Temp[CRYPTO_AES_CTRDRBG_INT_STATELEN] = { 0U };
  uint32 i = 0U;
  uint32 j;
  uint32 OutputLengthPtr = CRYPTO_AES_CTRDRBG_BLOCKLEN;
  uint32 TmpLength = CRYPTO_AES_CTRDRBG_INT_STATELEN;
  uint32 SeedCount;
  uint32 SeedCountLength = CRYPTO_AES_CTRDRBG_SEED_COUNTLEN;

  if (
       Crypto_AesCtrdrbgCtx.ResultLength <=
       *(Crypto_AesCtrdrbgCtx.OutputLengthPtr)
     )
  {
    if (
         E_OK == Crypto_AL_KeyElementGet
                 (
                   Job->cryptoKeyId,
                   CRYPTO_KE_RANDOM_SEED_STATE,
                   Crypto_AesCtrdrbgCtx.IntState,
                   &TmpLength
                 )
       )
    {
      /* Check for correct seed state length */
      if (TmpLength != CRYPTO_AES_CTRDRBG_INT_STATELEN)
      {
        RetVal = CRYPTO_E_KEY_SIZE_MISMATCH;
      }
      else
      {
        RetVal = E_OK;
        if (E_OK == Crypto_AL_KeyElementGet
                  (
                    Job->cryptoKeyId,
                    CRYPTO_KE_RANDOM_SEED_COUNT,
                    (uint8 *)&SeedCount,
                    &SeedCountLength
                  )
         )
        {
          /* Check for correct seed state length */
          if (SeedCountLength != CRYPTO_AES_CTRDRBG_SEED_COUNTLEN)
          {
            RetVal = CRYPTO_E_KEY_SIZE_MISMATCH;
          }
          else
          {
            if(
                SeedCount == CRYPTO_MAX_SEED_COUNT
              )
            {
              /* !LINKSTO EB_Crypto_CryptAlgos_1800,1 */
              RetVal = CRYPTO_E_ENTROPY_EXHAUSTION;
            }
          }
        }
      }
    }

    if (RetVal == E_OK)
    {
      for (j = 0U; j < CRYPTO_AES_CTRDRBG_KEYLEN; j++)
      {
        /* Key is the first 32 elements of intState*/
        Crypto_AesCtrdrbgCtx.Key.data[j] = Crypto_AesCtrdrbgCtx.IntState[j];
      }
      Crypto_AesCtrdrbgCtx.Key.length = CRYPTO_AES_CTRDRBG_KEYLEN;

      i = 32U;
      for (j = 0U; j < CRYPTO_AES_CTRDRBG_BLOCKLEN; j++)
      {
        /* V is the last 16 elements of intState */
        Crypto_AesCtrdrbgCtx.Block[j] = Crypto_AesCtrdrbgCtx.IntState[i];
        i++;
      }

      *Crypto_AesCtrdrbgCtx.OutputLengthPtr = 0U;
      /* 4. While(len(temp) < requested_number_of_bits */
      i = 0U;
      while (i < Crypto_AesCtrdrbgCtx.ResultLength)
      {
        /* 4.1 V = (V + 1) mod 2^outlen */
        /* it is hard to simulate with test that encryption gives all 16 bytes as 0xFF */

        for (j = CRYPTO_AES_CTRDRBG_BLOCKLEN - 1U; j != 0U; j--)
        {
          if (Crypto_AesCtrdrbgCtx.Block[j] != 0xFFUL)
          {
            Crypto_AesCtrdrbgCtx.Block[j] += 1U;
            break;
          }
          else
          {
            Crypto_AesCtrdrbgCtx.Block[j] = 0U;
          }
        }


        /* 4.2 output_block = Block_Encrypt(Key, V) */
        /* The KeyLength is hardcoded to CRYPTO_AES_CTRDRBG_KEYLEN which is valid input size
           and result in this function always returning E_OK. */
        (void)Crypto_AES_Helper_Encrypt_SyncSingleCall
                 (
                   Crypto_AesCtrdrbgCtx.Block,
                   CRYPTO_AES_CTRDRBG_BLOCKLEN,
                   Temp,
                   &OutputLengthPtr,
                   &Crypto_AesCtrdrbgCtx.Key
                 );

        /* 5. returned_bits = Leftmost requested_number_of_bits of temp */
        if (CRYPTO_AES_CTRDRBG_BLOCKLEN > (Crypto_AesCtrdrbgCtx.ResultLength - *Crypto_AesCtrdrbgCtx.OutputLengthPtr))
        {
          TmpLength = (Crypto_AesCtrdrbgCtx.ResultLength - *Crypto_AesCtrdrbgCtx.OutputLengthPtr) % CRYPTO_AES_CTRDRBG_BLOCKLEN;
        }
        else
        {
          TmpLength = CRYPTO_AES_CTRDRBG_BLOCKLEN;
        }

        for (j = 0U; j < TmpLength ; j++)
        {
          (Crypto_AesCtrdrbgCtx.OutputPtr)[i + j] = Temp[j];
        }

        i += TmpLength;
        *Crypto_AesCtrdrbgCtx.OutputLengthPtr = i;
      }

#ifdef CRYPTO_RANDOM_CTRDRBG_USE_PREDEFINED
      /* Overwrites the output with a predefined value */
      RetVal = Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_Predefinition
                   (
                     Crypto_AesCtrdrbgCtx.OutputPtr,
                     *Crypto_AesCtrdrbgCtx.OutputLengthPtr
                   );
#endif

      /* 6 (Key, V) = CTRDRBG_Update(additional_input, Key, V) */
      /* function can not fail as the availability of the key is checked with
         KeyElementGet and the size check is immediately after. */
      (void)Crypto_RandomSeedAESCTRDRBGUpdate
               (
                 AddInput,
                 ObjectId,
                 Job
               );

      /* Store the new intState in key Element */
      /* function can not fail as the availability of the key is checked with
         KeyElementGet and the size check is immediately after. */
      (void)Crypto_AL_KeyElementSet
               (
                 Job->cryptoKeyId,
                 CRYPTO_KE_RANDOM_SEED_STATE,
                 Crypto_AesCtrdrbgCtx.IntState,
                 CRYPTO_AES_CTRDRBG_INT_STATELEN
               );

      if (E_OK == Crypto_AL_KeyElementGet
                    (
                      Job->cryptoKeyId,
                      CRYPTO_KE_RANDOM_SEED_COUNT,
                      (uint8 *)&SeedCount,
                      &SeedCountLength
                    )
         )
      {
        /* !LINKSTO EB_Crypto_CryptAlgos_1801,1 */
        /* Updating the seed entropy count */
        SeedCount = SeedCount + 1U;
        /* Store the incremented seed count in key Element */
        /* function can not fail as the availability of the key is checked with
           KeyElementGet and the size check is immediately after. */
        (void)Crypto_AL_KeyElementSet
                 (
                   Job->cryptoKeyId,
                   CRYPTO_KE_RANDOM_SEED_COUNT,
                   (const uint8 *)&SeedCount,
                   SeedCountLength
                 );
      }
    }
  }

  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
  if (TRUE == Crypto_AesCtrdrbgCtx.CancelFlag)
  {
    RetVal = CRYPTO_E_JOB_CANCELED;
    Crypto_AesCtrdrbgCtx.CancelFlag = FALSE;
  }

  if (Crypto_AesCtrdrbgCtx.Crypto_Generic_Callback != NULL_PTR)
  {
    /* Only call callback whenprimitive is not used as helper */
    Crypto_AesCtrdrbgCtx.Crypto_Generic_Callback
    (
      Crypto_AesCtrdrbgCtx.Job,
      RetVal
    );
  }

  return RetVal;
}

#endif /* #if (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

#endif /* #if ( (CRYPTO_SSGGENERATE_ENABLED     == STD_ON) ||
                (CRYPTO_CTRDRBGGENERATE_ENABLED == STD_ON) ) */

/*==[end of file]=================================================================================*/

