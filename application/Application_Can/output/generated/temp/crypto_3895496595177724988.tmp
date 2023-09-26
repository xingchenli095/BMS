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
 * module configuration. Additionally, the AUTOSAR memory mapping requires that functions are
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
#include <Crypto_AL_SipHash.h>

#if ((CRYPTO_SIPHASH_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)    \
    )

/*==[Macros]======================================================================================*/

#if (defined CRYPTO_MAC_SIPHASH_DEFAULT_CURRENT_MODE)
#error CRYPTO_MAC_SIPHASH_DEFAULT_CURRENT_MODE already defined
#endif
/** \brief The default operation mode which is set after finishing the asynchronous processing
 *         of a SipHash primitive.
 */
#define CRYPTO_MAC_SIPHASH_DEFAULT_CURRENT_MODE 0x00U

/*--SIPHASH-COMMON--------------------------------------------------------------------------------*/

#if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON))

/* !LINKSTO EB_Crypto_CryptAlgos_0905,1 */
#if (defined CRYPTO_SIPHASH_BLOCK_LEN_BYTES)
#error CRYPTO_SIPHASH_BLOCK_LEN_BYTES already defined
#endif
/** \brief the length of one encryption block for the SipHash */
#define CRYPTO_SIPHASH_BLOCK_LEN_BYTES 8U

/* !LINKSTO EB_Crypto_CryptAlgos_0906,1 */
#if (defined CRYPTO_SIPHASH_KEY_LEN_BYTES)
#error CRYPTO_SIPHASH_KEY_LEN_BYTES already defined
#endif
/** \brief the length of the key for the SipHash */
#define CRYPTO_SIPHASH_KEY_LEN_BYTES 16U

/* !LINKSTO EB_Crypto_CryptAlgos_0903,1 */
#if (defined CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS)
#error CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS already defined
#endif
/** \brief the number of C iterations for the SipHash-2-4 */
#define CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS 2U

/* !LINKSTO EB_Crypto_CryptAlgos_0904,1 */
#if (defined CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS)
#error CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS already defined
#endif
/** \brief the number of D iterations for the SipHash-2-4 */
#define CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS 4U

#if (defined CRYPTO_SIPHASH_INITV0)
#error CRYPTO_SIPHASH_INITV0 already defined
#endif
/** \brief one part of the initialization value for state v0 */
#define CRYPTO_SIPHASH_INITV0 0x736F6D6570736575ULL

#if (defined CRYPTO_SIPHASH_INITV1)
#error CRYPTO_SIPHASH_INITV1 already defined
#endif
/** \brief one part of the initialization value for state v1 */
#define CRYPTO_SIPHASH_INITV1 0x646F72616E646F6DULL

#if (defined CRYPTO_SIPHASH_INITV2)
#error CRYPTO_SIPHASH_INITV2 already defined
#endif
/** \brief one part of the initialization value for state v2 */
#define CRYPTO_SIPHASH_INITV2 0x6C7967656E657261ULL

#if (defined CRYPTO_SIPHASH_INITV3)
#error CRYPTO_SIPHASH_INITV3 already defined
#endif
/** \brief one part of the initialization value for state v3 */
#define CRYPTO_SIPHASH_INITV3 0x7465646279746573ULL

#if (defined CRYPTO_SIPHASH_ROTATE64_LEFT)
#error CRYPTO_SIPHASH_ROTATE64_LEFT already defined
#endif
/** \brief rotation to the left of a 64 bit word */
#define CRYPTO_SIPHASH_ROTATE64_LEFT(u64, count) \
  (uint64) (((u64) << count) | ((u64) >> ((64U) - count)))

#if (defined CRYPTO_SIPHASH_UINT8_TO_UINT64)
#error CRYPTO_SIPHASH_UINT8_TO_UINT64 already defined
#endif
/** \brief conversion of 8 x 8 bit values to a 64 bit word in little endian format */
#define CRYPTO_SIPHASH_UINT8_TO_UINT64(byte_array_ptr) \
  (((uint64) ((byte_array_ptr)[0U]) << 0U ) | \
   ((uint64) ((byte_array_ptr)[1U]) << 8U ) | \
   ((uint64) ((byte_array_ptr)[2U]) << 16U) | \
   ((uint64) ((byte_array_ptr)[3U]) << 24U) | \
   ((uint64) ((byte_array_ptr)[4U]) << 32U) | \
   ((uint64) ((byte_array_ptr)[5U]) << 40U) | \
   ((uint64) ((byte_array_ptr)[6U]) << 48U) | \
   ((uint64) ((byte_array_ptr)[7U]) << 56U)   \
  )

#if (defined CRYPTO_SIPHASH_UINT64_TO_UINT8)
#error CRYPTO_SIPHASH_UINT64_TO_UINT8 already defined
#endif
/** \brief conversion of a 64 bit word in little endian format to 8 x 8 bit values */
#define CRYPTO_SIPHASH_UINT64_TO_UINT8(u64, byte_array_ptr) \
  (byte_array_ptr)[0U] = (uint8) ((u64)       ); \
  (byte_array_ptr)[1U] = (uint8) ((u64) >> 8U ); \
  (byte_array_ptr)[2U] = (uint8) ((u64) >> 16U); \
  (byte_array_ptr)[3U] = (uint8) ((u64) >> 24U); \
  (byte_array_ptr)[4U] = (uint8) ((u64) >> 32U); \
  (byte_array_ptr)[5U] = (uint8) ((u64) >> 40U); \
  (byte_array_ptr)[6U] = (uint8) ((u64) >> 48U); \
  (byte_array_ptr)[7U] = (uint8) ((u64) >> 56U);

/* !LINKSTO EB_Crypto_CryptAlgos_0917,1 */
#if (defined CRYPTO_SIPHASH_SIPROUND)
#error CRYPTO_SIPHASH_SIPROUND already defined
#endif
/** \brief transformation of the internal states V0, V1, V2, V3 using an ARX network */
#define CRYPTO_SIPHASH_SIPROUND(V0, V1, V2, V3)      \
    (V0) += (V1);                                              \
    (V1)  = CRYPTO_SIPHASH_ROTATE64_LEFT((V1), 13U); \
    (V1) ^= (V0);                                              \
    (V0)  = CRYPTO_SIPHASH_ROTATE64_LEFT((V0), 32U); \
                                                               \
    (V2) += (V3);                                              \
    (V3)  = CRYPTO_SIPHASH_ROTATE64_LEFT((V3), 16U); \
    (V3) ^= (V2);                                              \
                                                               \
    (V0) += (V3);                                              \
    (V3)  = CRYPTO_SIPHASH_ROTATE64_LEFT((V3), 21U); \
    (V3) ^= (V0);                                              \
                                                               \
    (V2) += (V1);                                              \
    (V1)  = CRYPTO_SIPHASH_ROTATE64_LEFT((V1), 17U); \
    (V1) ^= (V2);                                              \
    (V2)  = CRYPTO_SIPHASH_ROTATE64_LEFT((V2), 32U);

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
               (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

/*--SIPHASH-GENERATE------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

/*--Crypto_SipHashGenStateType----------------------------------------------------------*/

#if (defined CRYPTO_SIPHASH_G_S_IDLE)
#error CRYPTO_SIPHASH_G_S_IDLE already defined
#endif
/** \brief Idle state of the SipHash routine. */
#define CRYPTO_SIPHASH_G_S_IDLE 0U

#if (defined CRYPTO_SIPHASH_G_S_START)
#error CRYPTO_SIPHASH_G_S_START already defined
#endif
/** \brief The SipHash algorithm gets initialized. */
#define CRYPTO_SIPHASH_G_S_START 1U

#if (defined CRYPTO_SIPHASH_G_S_UPDATE)
#error CRYPTO_SIPHASH_G_S_UPDATE already defined
#endif
/** \brief Copy bytes from input data and compress block-wise. */
#define CRYPTO_SIPHASH_G_S_UPDATE 2U

#if (defined CRYPTO_SIPHASH_G_S_FINISH)
#error CRYPTO_SIPHASH_G_S_FINISH already defined
#endif
/** \brief Pad last block and compress if necessary and
 *         copy the SipHash value to the output buffer. */
#define CRYPTO_SIPHASH_G_S_FINISH 3U

#if (defined CRYPTO_SIPHASH_G_S_INITIALIZED)
#error CRYPTO_SIPHASH_G_S_INITIALIZED already defined
#endif
/** \brief The SipHash routine is initialized. */
#define CRYPTO_SIPHASH_G_S_INITIALIZED 4U

#endif /* #if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) */

/*--SIPHASH-VERIFY--------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

/*--Crypto_SipHashVrfyStateType---------------------------------------------------------*/

#if (defined CRYPTO_SIPHASH_V_S_IDLE)
#error CRYPTO_SIPHASH_V_S_IDLE already defined
#endif
/** \brief Idle state of the SipHash routine. */
#define CRYPTO_SIPHASH_V_S_IDLE 0U

#if (defined CRYPTO_SIPHASH_V_S_START)
#error CRYPTO_SIPHASH_V_S_START already defined
#endif
/** \brief The SipHash algorithm gets initialized. */
#define CRYPTO_SIPHASH_V_S_START 1U

#if (defined CRYPTO_SIPHASH_V_S_UPDATE)
#error CRYPTO_SIPHASH_V_S_UPDATE already defined
#endif
/** \brief Copy bytes from input data and compress block-wise. */
#define CRYPTO_SIPHASH_V_S_UPDATE 2U

#if (defined CRYPTO_SIPHASH_V_S_FINISH)
#error CRYPTO_SIPHASH_V_S_FINISH already defined
#endif
/** \brief Pad last block and compress if necessary and
 *         compare the SipHash value with the given SipHash value. */
#define CRYPTO_SIPHASH_V_S_FINISH 3U

#if (defined CRYPTO_SIPHASH_V_S_INITIALIZED)
#error CRYPTO_SIPHASH_V_S_INITIALIZED already defined
#endif
/** \brief The SipHash routine is initialized. */
#define CRYPTO_SIPHASH_V_S_INITIALIZED 4U

#endif /* #if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON) */

/*==[Types]=======================================================================================*/

/*--SIPHASH-GENERATE------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

/** \struct Crypto_SipHashGenConfigType
 *  \brief The configuration of the SipHash generation.
 *
 *  \var Crypto_SipHashGenConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_SipHashGenConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_SipHashGenConfigType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_SipHashGenConfigType::C
 *  \brief Number of iterations c of SipRound for each message block, cf. SipHash-c-d.
 *
 *  \var Crypto_SipHashGenConfigType::D
 *  \brief Number of iterations d of SipRound for finalization, cf. SipHash-c-d.
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
  uint8                                                            C;
  uint8                                                            D;
}
Crypto_SipHashGenConfigType;

/** \brief The internal state type of the SipHash generation. */
typedef uint8 Crypto_SipHashGenStateType;

/** \struct Crypto_SipHashGenContextType
 *  \brief Structure which contains the context of the SipHash generation.
 *
 *
 *  \var Crypto_SipHashGenContextType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_SipHashGenContextType::ResultVal
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_SipHashGenContextType::State
 *  \brief The current state of the SipHash generation.
 *
 *  \var Crypto_SipHashGenContextType::Key
 *  \brief The secret key which is used for creating the SipHash.
 *
 *  \var Crypto_SipHashGenContextType::Result
 *  \brief A pointer to the start of a buffer where the created SipHash
 *         bytes should be stored.
 *
 *  \var Crypto_SipHashGenContextType::ResultLengthPtr
 *  \brief A pointer to a variable which contains the maximal allowed
 *         space for the SipHash in bytes and where the length of the created SipHash
 *         should be stored.
 *
 *  \var Crypto_SipHashGenContextType::DataPtr
 *  \brief A pointer to the start of an array where the data is stored over which
 *         the SipHash has to be computed.
 *
 *  \var Crypto_SipHashGenContextType::DataLength
 *  \brief The length of the data over which the SipHash has to be computed.
 *
 *  \var Crypto_SipHashGenContextType::TotalNumberOfBytes
 *  \brief The total number of data bytes already processed.
 *
 *  \var Crypto_SipHashGenContextType::RemainingBytes
 *  \brief The number of remaining bytes, i.e. total data length modulo block size.
 *
 *  \var Crypto_SipHashGenContextType::C
 *  \brief Number of iterations c of SipRound for each message block, cf. SipHash-c-d.
 *
 *  \var Crypto_SipHashGenContextType::D
 *  \brief Number of iterations d of SipRound for finalization, cf. SipHash-c-d.
 *
 *  \var Crypto_SipHashGenContextType::MessageBlock
 *  \brief Containg the data of one message block.
 *
 *  \var Crypto_SipHashGenContextType::V0
 *  \brief State variable V0 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashGenContextType::V1
 *  \brief State variable V1 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashGenContextType::V2
 *  \brief State variable V2 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashGenContextType::V3
 *  \brief State variable V3 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashGenContextType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_SipHashGenContextType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_SipHashGenContextType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_SipHashGenContextType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_SipHashGenContextType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_SipHashGenContextType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_SipHashGenContextType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)  Job,
    uint8                                                       Error
  );
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA)  ResultVal;
  Crypto_SipHashGenStateType                          State;
  VAR(Crypto_SymKeyType, CRYPTO_APPL_DATA)  Key;
  P2VAR(uint8, TYPEDEF, CRYPTO_APPL_DATA)             Result;
  P2VAR(uint32, TYPEDEF, CRYPTO_APPL_DATA)            ResultLengthPtr;
  P2CONST(uint8, TYPEDEF, CRYPTO_APPL_DATA)           DataPtr;
  uint32                                                        DataLength;
  uint32                                                        TotalNumberOfBytes;
  uint32                                                        RemainingBytes;
  uint8                                                         C;
  uint8                                                         D;
  uint64                                                        MessageBlock;
  uint64                                                        V0;
  uint64                                                        V1;
  uint64                                                        V2;
  uint64                                                        V3;
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)         IsBusy;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)    Job;
  uint32                                                        ObjId;
  Crypto_OperationModeType                                      CurrentMode;
  boolean                                                       CancelFlag;
  boolean                                                       CallbackFlag;
  Std_ReturnType                                                CallbackResult;
}
Crypto_SipHashGenContextType;

#endif /* #if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) */

/*--SIPHASH-VERIFY--------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

/** \struct Crypto_SipHashVrfyConfigType
 *  \brief The configuration of the SipHash verification.
 *
 *  \var Crypto_SipHashVrfyConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_SipHashVrfyConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_SipHashVrfyConfigType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_SipHashGenConfigType::C
 *  \brief Number of iterations c of SipRound for each message block, cf. SipHash-c-d.
 *
 *  \var Crypto_SipHashGenConfigType::D
 *  \brief Number of iterations d of SipRound for finalization, cf. SipHash-c-d.
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
  uint8                                                            C;
  uint8                                                            D;
}
Crypto_SipHashVrfyConfigType;

/** \brief The internal state type of the SipHash verification. */
typedef uint8 Crypto_SipHashVrfyStateType;

/** \struct Crypto_SipHashVrfyContextType
 *  \brief Structure which contains the context of the SipHash verification.
 *
 *
 *  \var Crypto_SipHashVrfyContextType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_SipHashVrfyContextType::ResultPtr
 *  \brief The pointer where the verification result should be stored.
 *
 *  \var Crypto_SipHashVrfyContextType::ResultVal
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_SipHashVrfyContextType::State
 *  \brief The current state of the SipHash verification.
 *
 *  \var Crypto_SipHashVrfyContextType::Key
 *  \brief Tthe secret key which is used for creating the SipHash.
 *
 *  \var Crypto_SipHashVrfyContextType::SipHashPtr
 *  \brief A pointer to the start of a buffer where the SipHash value to verify is stored.
 *
 *  \var Crypto_SipHashVrfyContextType::DataPtr
 *  \brief A pointer to the start of an array where the data is stored over which
 *         the SipHash has to be computed.
 *
 *  \var Crypto_SipHashVrfyContextType::DataLength
 *  \brief The length of the data over which the SipHash has to be computed.
 *
 *  \var Crypto_SipHashVrfyContextType::SipHashLength
 *  \brief The length of the SipHash value to verify in bits.
 *
 *  \var Crypto_SipHashVrfyContextType::TotalNumberOfBytes
 *  \brief The total number of data bytes already processed.
 *
 *  \var Crypto_SipHashVrfyContextType::RemainingBytes
 *  \brief The number of remaining bytes, i.e. total data length modulo block size.
 *
 *  \var Crypto_SipHashVrfyContextType::C
 *  \brief Number of iterations c of SipRound for each message block, cf. SipHash-c-d.
 *
 *  \var Crypto_SipHashVrfyContextType::D
 *  \brief Number of iterations d of SipRound for finalization, cf. SipHash-c-d.
 *
 *  \var Crypto_SipHashVrfyContextType::MessageBlock
 *  \brief Containg the data of one message block.
 *
 *  \var Crypto_SipHashVrfyContextType::V0
 *  \brief State variable V0 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashVrfyContextType::V1
 *  \brief State variable V1 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashVrfyContextType::V2
 *  \brief State variable V2 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashVrfyContextType::V3
 *  \brief State variable V3 of the SipHash algorithm.
 *
 *  \var Crypto_SipHashVrfyContextType::SipHashResult
 *  \brief An array which contains the calculated SipHash value.
 *
 *  \var Crypto_SipHashVrfyContextType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_SipHashVrfyContextType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_SipHashVrfyContextType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_SipHashVrfyContextType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_SipHashVrfyContextType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_SipHashVrfyContextType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_SipHashVrfyContextType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
      P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)      Job,
      uint8                                                           Error
  );
  P2VAR(Crypto_VerifyResultType, TYPEDEF, CRYPTO_APPL_DATA) ResultPtr;
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA)        ResultVal;
  Crypto_SipHashVrfyStateType                               State;
  VAR(Crypto_SymKeyType, CRYPTO_APPL_DATA)        Key;
  P2CONST(uint8, TYPEDEF, CRYPTO_APPL_DATA)                 SipHashPtr;
  P2CONST(uint8, TYPEDEF, CRYPTO_APPL_DATA)                 DataPtr;
  uint32                                                              DataLength;
  uint32                                                              SipHashLength;
  uint32                                                              TotalNumberOfBytes;
  uint32                                                              RemainingBytes;
  uint8                                                               C;
  uint8                                                               D;
  uint64                                                              MessageBlock;
  uint64                                                              V0;
  uint64                                                              V1;
  uint64                                                              V2;
  uint64                                                              V3;
  uint8                                                               SipHashResult[CRYPTO_SIPHASH_BLOCK_LEN_BYTES];
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)               IsBusy;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)          Job;
  uint32                                                              ObjId;
  Crypto_OperationModeType                                            CurrentMode;
  boolean                                                             CancelFlag;
  boolean                                                             CallbackFlag;
  Std_ReturnType                                                      CallbackResult;
}
Crypto_SipHashVrfyContextType;

#endif /* #if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON) */

/*==[Declaration of functions with internal linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--SIPHASH-COMMON--------------------------------------------------------------------------------*/

#if ((CRYPTO_SIPHASH_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)    \
    )

/** \brief Function CompressEntireMessage
 *
 *  This function calculates the SipHash message digest over the entire message.
 *
 *  \param[in]  C           Number of iterations of SipRound during compression.
 *
 *  \param[in]  D           Number of iterations of SipRound during finalization.
 *
 *  \param[in]  KeyDataPtr   A pointer to the key data which will be used in the SipHash
 *                           compression.
 *
 *  \param[in]  InputPtr     A pointer to the start of an array which contains a part of the
 *                           data for which the SipHash will be generated.
 *
 *  \param[in]  InputLength  The amount of data in bytes.
 *
 *  \param[out]  ResultPtr   A pointer to the start of a buffer where the generated
 *                           SipHash will be stored.
 *
 *  \param[in,out]  ResultLengthPtr A pointer to a variable which contains the maximal allowed
 *                                  length for the SipHash in bytes and where the actual length
 *                                  of the SipHash will be stored.
 *
 *  \Reentrancy{Reentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHash_CompressEntireMessage
(
  uint8                                                 C,
  uint8                                                 D,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) KeyDataPtr,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) InputPtr,
  uint32                                                InputLength,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)   ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)  ResultLengthPtr
);

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
               (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

/*--SIPHASH-GENERATE------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

/**  \brief  Crypto SipHash Generate Reset
 *
 *           This Function resets the Context of SipHash Generate.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Reset
(
  void
);

/** \brief AL Callback function for SipHash generation
 *
 *  This is the abstraction layer callback function for the SipHash generation.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/** \brief Start function of SipHash generation
 *
 *  This function requests the start of the SipHash generation for the given configuration
 *  and key. The start is performed in Crypto_SipHashGenMainFunction().
 *
 *  \param[in]  CfgPtr A pointer to the configuration for which the start of the SipHash
 *                     generation is requested.
 *
 *  \param[in]  KeyPtr A pointer to the key which will be used in the SipHash
 *                     generation.
 *
 *  \returns Generation operation state
 *  \retval  E_OK      If the start was successfully requested. It is always returned.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashGenStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
);

/** \brief Update function of SipHash generation.
 *
 *  This function requests the update of the SipHash generation for the given data.
 *  The update is performed in Crypto_SipHashGenMainFunction().
 *
 *  \param[in]  DataPtr     A pointer to the start of an array which contains a part of the
 *                          data for which the SipHash will be generated.
 *
 *  \param[in]  DataLength  The amount of data in bytes.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *  \retval E_NOT_OK        If no SipHash generation has been started via
 *                          Crypto_SipHashGenStart() yet or if the finishing of
 *                          the SipHash computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashGenUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
);

/** \brief Finish function of SipHash generation.
 *
 *  This function requests the finishing of the SipHash generation and the storing of the
 *  SipHash in the given result buffer. The finishing is performed in
 *  Crypto_SipHashGenMainFunction().
 *
 *  \param[out]  ResultPtr A pointer to the start of a buffer where the generated
 *                         SipHash will be stored.
 *
 *  \param[in,out]  ResultLengthPtr A pointer to a variable which contains the maximal allowed
 *                                  length for the SipHash in bytes and where the actual length
 *                                  of the SipHash will be stored.
 *
 *  \return Error code
 *
 *  \retval E_OK           If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY  If the main function is processing a requested service at the
 *                         moment.
 *  \retval E_NOT_OK       If no SipHash generation has been started via
 *                         Crypto_SipHashGenStart() yet or if the finishing of
 *                         the SipHash computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashGenFinish
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)  ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ResultLengthPtr
);

/** \brief SipHash generation main function
 *
 *  This function performs the actual SipHash generation tasks which have been requested by
 *  the service functions. When a task has finished and the primitive was called asynchronously,
 *  the callback function is called to inform the caller of the result.
 *
 *  \param[out] Result  Pointer to where the result of the processing should be stored.
 *  \param[out] Busy    After the function returns, this location indicates whether the computation
 *                      has finished or whether the primitive is still busy.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHashGenMainFunction
(
  P2VAR(Std_ReturnType,AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);

/** \brief State function: Process that input data block-wise during SipHash update
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHashGenStateUpdate
(
  void
);

/** \brief State function: Process the last block of data and finish SipHash processing
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHashGenStateFinish
(
  void
);

#endif /* #if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) */

/*--SIPHASH-VERIFY--------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

/**  \brief  Crypto SipHash Verify Reset
 *
 *           This Function resets the Context of SipHash Verify.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Reset
(
  void
);

/** \brief AL Callback function for SipHash verification
 *
 *  This is the abstraction layer callback function for the SipHash verification.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/** \brief Start function of SipHash verification
 *
 *  This function requests the start of the SipHash verification for the given configuration
 *  and key. The start is performed in Crypto_SipHashVrfyMainFunction().
 *
 *  \param[in]  CfgPtr A pointer to the configuration for which the start of the SipHash
 *                     verification is requested.
 *
 *  \param[in]  KeyPtr A pointer to the key which will be used in the SipHash
 *                     verification.
 *
 *  \returns Verification operation state
 *  \retval  E_OK      If the start was successfully requested. It is always requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashVrfyStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
);

/** \brief Update function of SipHash verification.
 *
 *  This function requests the update of the SipHash verification for the given data.
 *  The update is performed in Crypto_SipHashVrfyMainFunction().
 *
 *  \param[in]  DataPtr A pointer to the start of an array which contains a part of the
 *                      data for which the SipHash will be verified.
 *
 *  \param[in]  DataLength The amount of data in bytes.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *  \retval E_NOT_OK        If no SipHash verification has been started via
 *                          Crypto_SipHashVrfyStart() yet or if the finishing of
 *                          the SipHash computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashVrfyUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
);

/** \brief Finish function of SipHash verification.
 *
 *  This function requests the finishing of the SipHash verification. The finishing is performed
 *  in Crypto_SipHashVrfyMainFunction().
 *
 *  \param[in]   AuthenticationPtr     A pointer to the start of a buffer where the SipHash to
 *                                     verify is stored.
 *
 *  \param[in]   AuthenticationLength  The length of the SipHash to verify in bits.
 *
 *  \param[out]  ResultPtr             A pointer to a variable where the result of the SipHash
 *                                     verification will be stored.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the moment.
 *  \retval E_NOT_OK        If no SipHash verification has been started via
 *                          Crypto_SipHashVrfyStart() yet or if the finishing of the
 *                          SipHash computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashVrfyFinish
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 AuthenticationPtr,
  uint32                                                                AuthenticationLength,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
);

/** \brief SipHash verification main function
 *
 *  This function performs the actual SipHash verification tasks which have been requested
 *  by the service functions. When a task has finished and the primitive was called asynchronously,
 *  the callback function is called to inform the caller of the result.
 *
 *  \param[out] Result  Pointer to where the result of the processing should be stored.
 *  \param[out] Busy    After the function returns, this location indicates whether the computation
 *                      has finished or whether the primitive is still busy.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHashVrfyMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);

/** \brief State function: Process that input data block-wise during SipHash update
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHashVrfyStateUpdate
(
  void
);

/** \brief State function: Finish and compare the computed SipHash with the provided SipHash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_SipHashVrfyStateFinish
(
  void
);

#endif /* #if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Constants with internal linkage]=============================================================*/

/*==[Variables with internal linkage]=============================================================*/

#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

/*--SIPHASH-GENERATE------------------------------------------------------------------------------*/

/** \brief SipHash generation context
 *
 *  The context variable which is used to store the internal state of the SipHash generation.
 */
static VAR(Crypto_SipHashGenContextType, CRYPTO_VAR) Crypto_SipHashGenContext;

/** \brief SipHash generation configuration
 *
 * The context variable which is used to store the internal configuration of the SipHash generation.
 */
static VAR(Crypto_SipHashGenConfigType, CRYPTO_VAR)
  Crypto_SipHashGenerateConfig;

#endif /* #if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) */

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

/*--SIPHASH-VERIFY--------------------------------------------------------------------------------*/

/** \brief SipHash verification context
 *
 *  The context variable which is used to store the internal state of the SipHash verification.
 */
static VAR(Crypto_SipHashVrfyContextType, CRYPTO_VAR) Crypto_SipHashVrfyContext;

/** \brief SipHash verification configuration
 *
 * The context variable which is used to store the internal configuration of the SipHash
 * verification.
 */
static VAR(Crypto_SipHashVrfyConfigType, CRYPTO_VAR) Crypto_SipHashVerifyConfig;

#endif /* #if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_CLEARED_64
#include <Crypto_MemMap.h>

#if ((CRYPTO_SIPHASH_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)    \
    )

/** \brief Key for SipHash computation
 *
 * Variable Key0 used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_Key0;

/** \brief Key for SipHash computation
 *
 * Variable Key1 used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_Key1;

/** \brief Variable for SipHash computation
 *
 * Variable V0 used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_V0;

/** \brief Variable for SipHash computation
 *
 * Variable V1 used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_V1;

/** \brief Variable for SipHash computation
 *
 * Variable V2 used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_V2;

/** \brief Variable for SipHash computation
 *
 * Variable V3 used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_V3;

/** \brief Message block used by SipHash computation
 *
 * Message block used by SipHash computation according to specification.
 */
static VAR(uint64, CRYPTO_VAR) Crypto_MessageBlock;

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
(CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_64
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_CLEARED_32
#include <Crypto_MemMap.h>

#if ((CRYPTO_SIPHASH_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)    \
    )

/** \brief Offset used by SipHash computation
 *
 * Offset used by SipHash computation according to specification.
 */
static VAR(uint32, CRYPTO_VAR) Crypto_Offset;

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
(CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_32
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

#if ((CRYPTO_SIPHASH_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)    \
    )

/** \brief SipHash key used by SyncSinglecall
 *
 * SipHash key which is used for Sync Singlecall computation of SipHash.
 */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_SipHashKeyGenSingleCall =
{
  { 0x00U },
  CRYPTO_SIPHASH_KEY_LEN_BYTES
};

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
(CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

/** \brief Key for SipHash generation */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_SipHashKeyGen =
{
  { 0x00U },
  CRYPTO_SIPHASH_KEY_LEN_BYTES
};

#endif

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

/** \brief Key for SipHash verification */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_SipHashKeyVrfy =
{
  { 0x00U },
  CRYPTO_SIPHASH_KEY_LEN_BYTES
};

#endif

#define CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Constants with external linkage]=============================================================*/

/*==[Variables with external linkage]=============================================================*/

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--SIPHASH-GENERATE------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1144, 1, EB_Crypto_CryptAlgos_0966, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Start
(
  uint32                                                      ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  Crypto_SipHashKeyGen.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Reset();

  Crypto_SipHashGenerateConfig.Crypto_Generic_Callback =
  &Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_CallBack;
  Crypto_SipHashGenerateConfig.ObjId = ObjectId;
  Crypto_SipHashGenerateConfig.Job = Job;
  Crypto_SipHashGenerateConfig.C = CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS;
  Crypto_SipHashGenerateConfig.D = CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS;

  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Crypto_SipHashKeyGen.data,
                                              &(Crypto_SipHashKeyGen.length)
                                            );

  if (CRYPTO_SIPHASH_KEY_LEN_BYTES != Crypto_SipHashKeyGen.length)
  {
    RetVal = E_NOT_OK;

    /* Set state back to idle. */
    Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_IDLE;
  }

  if (E_OK == RetVal)
  {
    RetVal = Crypto_SipHashGenStart(
                                               &Crypto_SipHashGenerateConfig,
                                               &Crypto_SipHashKeyGen
                                             );
  }

  /* !LINKSTO EB_Crypto_00065,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1165, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_SipHashGenUpdate(
                                              Job->jobPrimitiveInputOutput.inputPtr,
                                              Job->jobPrimitiveInputOutput.inputLength
                                            );

  /* !LINKSTO EB_Crypto_00067,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1186, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_SipHashGenFinish(
                                              Job->jobPrimitiveInputOutput.outputPtr,
                                              Job->jobPrimitiveInputOutput.outputLengthPtr
                                            );

  /* !LINKSTO EB_Crypto_00069,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1205, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_SyncSingleCall
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* Due to usage of Crypto_SipHash_CompressEntireMessage stack usage is 240 bytes. Stack
   * usage cannot be reduced without considerable increase in runtime.
   * For details see explanation in Crypto_SipHash_CompressEntireMessage.*/

  /* Local variables. */
  Std_ReturnType RetVal = E_NOT_OK;

  TS_PARAM_UNUSED(ObjectId);

  if (CRYPTO_SIPHASH_BLOCK_LEN_BYTES < *(Job->jobPrimitiveInputOutput.outputLengthPtr))
  {
    /* Set length of result. Limit to block length. */
    /* !LINKSTO EB_Crypto_CryptAlgos_0922,1 */
    *(Job->jobPrimitiveInputOutput.outputLengthPtr) = CRYPTO_SIPHASH_BLOCK_LEN_BYTES;
  }

  Crypto_SipHashKeyGenSingleCall.length =
    Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  /* Get key data. */
  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Crypto_SipHashKeyGenSingleCall.data,
                                              &(Crypto_SipHashKeyGenSingleCall.length)
                                            );

  if (CRYPTO_SIPHASH_KEY_LEN_BYTES != Crypto_SipHashKeyGenSingleCall.length)
  {
    RetVal = E_NOT_OK;
  }

  if (E_OK == RetVal)
  {
    Crypto_SipHash_CompressEntireMessage
    (
      CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS,
      CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS,
      Crypto_SipHashKeyGenSingleCall.data,
      Job->jobPrimitiveInputOutput.inputPtr,
      Job->jobPrimitiveInputOutput.inputLength,
      Job->jobPrimitiveInputOutput.outputPtr,
      Job->jobPrimitiveInputOutput.outputLengthPtr
    );
  }

  /* !LINKSTO EB_Crypto_00071,1 */
  /* !LINKSTO EB_Crypto_00072,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1226, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_SIPHASH_G_S_INITIALIZED == Crypto_SipHashGenContext.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Reset();
    /* !LINKSTO EB_Crypto_00063, 1 */
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled imideatly */
    Crypto_SipHashGenContext.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1247, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  Crypto_SipHashGenMainFunction(Result, Busy);
}

#endif /* #if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) */

/*--SIPHASH-VERIFY--------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1145, 1, EB_Crypto_CryptAlgos_0966, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Reset();

  Crypto_SipHashKeyVrfy.length =
    Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  Crypto_SipHashVerifyConfig.Crypto_Generic_Callback =
    &Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_CallBack;
  Crypto_SipHashVerifyConfig.ObjId = ObjectId;
  Crypto_SipHashVerifyConfig.Job = Job;
  Crypto_SipHashVerifyConfig.C = CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS;
  Crypto_SipHashVerifyConfig.D = CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS;

  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Crypto_SipHashKeyVrfy.data,
                                              &(Crypto_SipHashKeyVrfy.length)
                                            );

  if (CRYPTO_SIPHASH_KEY_LEN_BYTES != Crypto_SipHashKeyVrfy.length)
  {
    RetVal = E_NOT_OK;

    /* Set state back to idle. */
    Crypto_SipHashVrfyContext.State = CRYPTO_SIPHASH_V_S_IDLE;
  }

  if (E_OK == RetVal)
  {
    RetVal = Crypto_SipHashVrfyStart(
                                                &Crypto_SipHashVerifyConfig,
                                                &Crypto_SipHashKeyVrfy
                                              );
  }

  /* !LINKSTO EB_Crypto_00065,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1166, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_SipHashVrfyUpdate(
                                               Job->jobPrimitiveInputOutput.inputPtr,
                                               Job->jobPrimitiveInputOutput.inputLength
                                             );

  /* !LINKSTO EB_Crypto_00067,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1187, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_SipHashVrfyFinish(
                                               Job->jobPrimitiveInputOutput.secondaryInputPtr,
                                               Job->jobPrimitiveInputOutput.secondaryInputLength,
                                               Job->jobPrimitiveInputOutput.verifyPtr
                                             );

  /* !LINKSTO EB_Crypto_00069,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1206, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_SyncSingleCall
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* Due to usage of Crypto_SipHash_CompressEntireMessage stack usage is 240 bytes. Stack
   * usage cannot be reduced without considerable increase in runtime.
   * For details see explanation in Crypto_SipHash_CompressEntireMessage.*/

  /* Local variables. */
  uint8 SipHashResult[CRYPTO_SIPHASH_BLOCK_LEN_BYTES];
  uint32 SipHashLength;
  uint8 Mask;
  uint8 Pos;
  Std_ReturnType RetVal = E_OK;

  TS_PARAM_UNUSED(ObjectId);

  if (
       Job->jobPrimitiveInputOutput.secondaryInputLength >
       (CRYPTO_SIPHASH_BLOCK_LEN_BYTES << 3U)
     )
  {
    /* It is not possible to have a SipHash value of the size given by the user. This is an error.
     */
    /* !LINKSTO EB_Crypto_CryptAlgos_0920,1 */
    RetVal = E_NOT_OK;
  }

  if (E_OK == RetVal)
  {
    Crypto_SipHashKeyGenSingleCall.length =
      Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

    /* Get key data. */
    RetVal = Crypto_AL_KeyElementGet(
                                                Job->cryptoKeyId,
                                                CRYPTO_KE_MAC_KEY,
                                                Crypto_SipHashKeyGenSingleCall.data,
                                                &(Crypto_SipHashKeyGenSingleCall.length)
                                              );

    if (Crypto_SipHashKeyGenSingleCall.length != CRYPTO_SIPHASH_KEY_LEN_BYTES)
    {
      RetVal = E_NOT_OK;
    }
  }

  if (E_OK == RetVal)
  {
    SipHashLength = CRYPTO_SIPHASH_BLOCK_LEN_BYTES;
    Crypto_SipHash_CompressEntireMessage
    (
      CRYPTO_SIPHASH_SIPHASH_2_4_C_ITERATIONS,
      CRYPTO_SIPHASH_SIPHASH_2_4_D_ITERATIONS,
      Crypto_SipHashKeyGenSingleCall.data,
      Job->jobPrimitiveInputOutput.inputPtr,
      Job->jobPrimitiveInputOutput.inputLength,
      SipHashResult,
      &SipHashLength
    );

    /* Compare the SipHash value given by the user with the SipHash value which
     * has just been computed. */
    /* !LINKSTO EB_Crypto_CryptAlgos_0919,1 */
    if
    (
      /* Compare whole bytes*/
      Crypto_MemCmp_Sec
      (
        SipHashResult,
        Job->jobPrimitiveInputOutput.secondaryInputPtr,
        Job->jobPrimitiveInputOutput.secondaryInputLength >> 3U
      ) == E_OK
    )
    {
      *(Job->jobPrimitiveInputOutput.verifyPtr) = CRYPTO_E_VER_OK;

      SipHashLength = Job->jobPrimitiveInputOutput.secondaryInputLength;

      /* Compare rest of bits */
      if (0U < (SipHashLength % 8U))
      {
        Mask = 0x00U;
        for (Pos = 0U; Pos < (SipHashLength % 8U); Pos++)
        {
          Mask = (Mask >> 1U) + 0x80U;
        }

        if (
             ((SipHashResult[SipHashLength >> 3U]) & Mask)
             !=
             ((Job->jobPrimitiveInputOutput.secondaryInputPtr[SipHashLength >> 3U]) & Mask)
           )
        {
          *(Job->jobPrimitiveInputOutput.verifyPtr) = CRYPTO_E_VER_NOT_OK;
        }
      }
    }
    else
    {
      *(Job->jobPrimitiveInputOutput.verifyPtr) = CRYPTO_E_VER_NOT_OK;
    }
  }

  /* !LINKSTO EB_Crypto_00071,1 */
  /* !LINKSTO EB_Crypto_00072,1 */
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1227, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_SIPHASH_V_S_INITIALIZED == Crypto_SipHashVrfyContext.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Reset();
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled imideatly */
    Crypto_SipHashVrfyContext.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1248, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  Crypto_SipHashVrfyMainFunction(Result, Busy);
}

#endif /* #if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Definition of functions with internal linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--SIPHASH-COMMON--------------------------------------------------------------------------------*/

#if ((CRYPTO_SIPHASH_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)    \
    )

static FUNC(void, CRYPTO_CODE) Crypto_SipHash_CompressEntireMessage
(
  uint8                                                 C,
  uint8                                                 D,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) KeyDataPtr,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) InputPtr,
  uint32                                                InputLength,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)   ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)  ResultLengthPtr
)
{
  /* Due to usage of macros CRYPTO_SIPHASH_UINT8_TO_UINT64,
   * CRYPTO_SIPHASH_UINT64_TO_UINT8 and CRYPTO_SIPHASH_SIPROUND stack usage of
   * this function is 240 bytes.
   * Since runtime increases significantly if functions are used instead, the macros are kept here.
   */

  /* Local variables. */
  uint8  i;

  /* Extract key. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0907,1 */
  Crypto_Key0 = CRYPTO_SIPHASH_UINT8_TO_UINT64(KeyDataPtr);
  /* !LINKSTO EB_Crypto_CryptAlgos_0908,1 */
  Crypto_Key1 =
    CRYPTO_SIPHASH_UINT8_TO_UINT64
    (
      &KeyDataPtr[CRYPTO_SIPHASH_KEY_LEN_BYTES >> 1U]
    );

  /* Initialize state variables. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0909,1 */
  Crypto_V0 = Crypto_Key0 ^ CRYPTO_SIPHASH_INITV0;
  /* !LINKSTO EB_Crypto_CryptAlgos_0910,1 */
  Crypto_V1 = Crypto_Key1 ^ CRYPTO_SIPHASH_INITV1;
  /* !LINKSTO EB_Crypto_CryptAlgos_0911,1 */
  Crypto_V2 = Crypto_Key0 ^ CRYPTO_SIPHASH_INITV2;
  /* !LINKSTO EB_Crypto_CryptAlgos_0912,1 */
  Crypto_V3 = Crypto_Key1 ^ CRYPTO_SIPHASH_INITV3;

  /* Compress the input data block-wise (64 bit), at first full blocks. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0913,1 */
  Crypto_Offset = 0U;
  while (Crypto_Offset < (InputLength & (uint32) 0xFFF8))
  {
    /* Extract single block (64 bit). */
    Crypto_MessageBlock =
      CRYPTO_SIPHASH_UINT8_TO_UINT64(&InputPtr[Crypto_Offset]);

    /* Process a single block (64 bit). */
    /* !LINKSTO EB_Crypto_CryptAlgos_0915,1 */
    Crypto_V3 ^= Crypto_MessageBlock;
    for (i = 0U; i < C; i++)
    {
      CRYPTO_SIPHASH_SIPROUND(
                                         Crypto_V0,
                                         Crypto_V1,
                                         Crypto_V2,
                                         Crypto_V3
                                      );
    }
    Crypto_V0 ^= Crypto_MessageBlock;

    /* Advance pointer for reading the input data from. */
    Crypto_Offset += CRYPTO_SIPHASH_BLOCK_LEN_BYTES;
  }

  /* Process the last block. */

  /* Fill the number of total message bytes modulo 256. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0914,1 */
  Crypto_MessageBlock = (uint64) (((uint64) InputLength & 0xFFU) << 56U);

  /* Fill block with remaining data bytes. */
  for (i = (uint8) (InputLength & 0x7U); i > 0U ; i--)
  {
    Crypto_MessageBlock |=
      (((uint64) InputPtr[(Crypto_Offset + i) - 1U]) << ((i - 1U) << 3U));
  }

  /* Process a single block (64 bit). */
  /* !LINKSTO EB_Crypto_CryptAlgos_0915,1 */
  Crypto_V3 ^= Crypto_MessageBlock;
  for (i = 0U; i < C; i++)
  {
    CRYPTO_SIPHASH_SIPROUND(
                                       Crypto_V0,
                                       Crypto_V1,
                                       Crypto_V2,
                                       Crypto_V3
                                     );
  }
  Crypto_V0 ^= Crypto_MessageBlock;

  /* XOR the constant 0xFF to the state Crypto_V2. Perform d x SipRound. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0916,1 */
  Crypto_V2 ^= 0xFFU;
  for (i = 0U; i < D; i++)
  {
    CRYPTO_SIPHASH_SIPROUND(
                                       Crypto_V0,
                                       Crypto_V1,
                                       Crypto_V2,
                                       Crypto_V3
                                     );
  }

  /* XOR all state variables. Finally,the result is available in state variable
   * Crypto_V0. */
  Crypto_V0 ^= Crypto_V1;
  Crypto_V0 ^= Crypto_V2;
  Crypto_V0 ^= Crypto_V3;

  /* Export the result to the output buffer. */
  if (*(ResultLengthPtr) == CRYPTO_SIPHASH_BLOCK_LEN_BYTES)
  {
    CRYPTO_SIPHASH_UINT64_TO_UINT8(Crypto_V0, ResultPtr);
  }
  else
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0921,1 */
    for (i = 0U; i < *(ResultLengthPtr); i++)
    {
      ResultPtr[i] = (uint8) (Crypto_V0 >> (i << 3U));
    }
  }
}

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
               (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

/*--SIPHASH-GENERATE------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON)

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Reset
(
  void
)
{
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(
               &Crypto_SipHashGenContext,
               sizeof(Crypto_SipHashGenContext)
             );
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_CallBack
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
           (CRYPTO_OPERATIONMODE_FINISH & Crypto_SipHashGenContext.CurrentMode)
         ) || (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_SipHashGenContext.CurrentMode =
        CRYPTO_MAC_SIPHASH_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_SipHashGenContext.ObjId].DriverObjectState =
        CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_SipHashGenContext.ObjId].CurrentJob =
        NULL_PTR;
      Crypto_DriverObjects[Crypto_SipHashGenContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_SipHashGenContext.CurrentMode)
         ) &&
         (
           CRYPTO_OPERATIONMODE_SINGLECALL !=
           (
             Crypto_SipHashGenContext.Job->jobPrimitiveInputOutput.mode
             & CRYPTO_OPERATIONMODE_SINGLECALL
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashGenStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
)
{
  /* Local variables. */
  Std_ReturnType RetVal = E_OK;
  P2CONST(Crypto_SipHashGenConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
  (P2CONST(Crypto_SipHashGenConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  /* Set state of the state machine to start. */
  Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_START;
  Crypto_SipHashGenContext.CurrentMode = CRYPTO_OPERATIONMODE_START;

  /* Store data into context. */
  TS_MemCpy(Crypto_SipHashGenContext.Key.data, KeyPtr->data, KeyPtr->length);
  Crypto_SipHashGenContext.Key.length = KeyPtr->length;
  Crypto_SipHashGenContext.ObjId = LocCfgPtr->ObjId;
  Crypto_SipHashGenContext.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_SipHashGenContext.Job = LocCfgPtr->Job;
  /*reseting the pointers from the last call, to avoid access violations. */
  Crypto_SipHashGenContext.IsBusy = NULL_PTR;
  Crypto_SipHashGenContext.ResultVal = NULL_PTR;

  /* Extract key. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0907,1 */
  Crypto_Key0 =
    CRYPTO_SIPHASH_UINT8_TO_UINT64(Crypto_SipHashGenContext.Key.data);
  /* !LINKSTO EB_Crypto_CryptAlgos_0908,1 */
  Crypto_Key1 =
    CRYPTO_SIPHASH_UINT8_TO_UINT64
    (
      &Crypto_SipHashGenContext.Key.data[CRYPTO_SIPHASH_KEY_LEN_BYTES >> 1U]
    );

  /* Initialize state variables. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0909,1 */
  Crypto_SipHashGenContext.V0 = Crypto_Key0 ^ CRYPTO_SIPHASH_INITV0;
  /* !LINKSTO EB_Crypto_CryptAlgos_0910,1 */
  Crypto_SipHashGenContext.V1 = Crypto_Key1 ^ CRYPTO_SIPHASH_INITV1;
  /* !LINKSTO EB_Crypto_CryptAlgos_0911,1 */
  Crypto_SipHashGenContext.V2 = Crypto_Key0 ^ CRYPTO_SIPHASH_INITV2;
  /* !LINKSTO EB_Crypto_CryptAlgos_0912,1 */
  Crypto_SipHashGenContext.V3 = Crypto_Key1 ^ CRYPTO_SIPHASH_INITV3;
  Crypto_SipHashGenContext.TotalNumberOfBytes = 0U;
  Crypto_SipHashGenContext.RemainingBytes = 0U;
  Crypto_SipHashGenContext.C = LocCfgPtr->C;
  Crypto_SipHashGenContext.D = LocCfgPtr->D;

  /* The initialization of the SipHash computation has finished.
   * We can now wait for the input data. */
  Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_INITIALIZED;

  /* Call callback. */
  Crypto_SipHashGenContext.CallbackFlag = TRUE;
  Crypto_SipHashGenContext.CallbackResult = E_OK;

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashGenUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if (CRYPTO_SIPHASH_G_S_INITIALIZED == Crypto_SipHashGenContext.State)
  {
    /* Store data into context. */
    Crypto_SipHashGenContext.DataPtr = DataPtr;
    Crypto_SipHashGenContext.DataLength = DataLength;

    /* Set state of the state machine to update. */
    Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_UPDATE;
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashGenFinish
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)  ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ResultLengthPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if (CRYPTO_SIPHASH_G_S_INITIALIZED == Crypto_SipHashGenContext.State)
  {
    /* Store data into context. */
    Crypto_SipHashGenContext.Result = ResultPtr;

    if (CRYPTO_SIPHASH_BLOCK_LEN_BYTES < *ResultLengthPtr)
    {
      /* Set length of result. Limit to block length. */
      /* !LINKSTO EB_Crypto_CryptAlgos_0922,1 */
      *ResultLengthPtr = CRYPTO_SIPHASH_BLOCK_LEN_BYTES;
    }
    Crypto_SipHashGenContext.ResultLengthPtr = ResultLengthPtr;

    /* Set state of the state machine to finish. */
    Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_FINISH;
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_SipHashGenMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if(!Crypto_CheckSkipMain(Result, Busy, Crypto_SipHashGenContext.ObjId))
  {
    Crypto_SipHashGenContext.ResultVal = Result;
    Crypto_SipHashGenContext.IsBusy = Busy;
    if ((NULL_PTR != Result) && (NULL_PTR != Busy))
    {
      *Crypto_SipHashGenContext.ResultVal = E_OK;
      *Crypto_SipHashGenContext.IsBusy = TRUE;
    }
    switch (Crypto_SipHashGenContext.State)
    {
      case CRYPTO_SIPHASH_G_S_UPDATE:
      {
        if (NULL_PTR != Crypto_SipHashGenContext.IsBusy)
        {
          *Crypto_SipHashGenContext.IsBusy = TRUE;
        }
        Crypto_SipHashGenContext.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        Crypto_SipHashGenStateUpdate();
      }
      break;

      case CRYPTO_SIPHASH_G_S_FINISH:
      {
        Crypto_SipHashGenContext.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
        Crypto_SipHashGenStateFinish();
      }
      break;

      case CRYPTO_SIPHASH_G_S_INITIALIZED:
      {
        if (NULL_PTR != Busy)
        {
          *Crypto_SipHashGenContext.IsBusy = FALSE;
        }
      }
      break;

      default:
      {
        /* Nothing to do. */
      }
      break;

    }
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
    if(TRUE == Crypto_SipHashGenContext.CancelFlag)
    {
      if (
           (NULL_PTR != Crypto_SipHashGenContext.ResultVal)
           && (NULL_PTR != Crypto_SipHashGenContext.IsBusy)
         )
      {
        *Crypto_SipHashGenContext.IsBusy = FALSE;
        *Crypto_SipHashGenContext.ResultVal = CRYPTO_E_JOB_CANCELED;
        /* processingType is synchronous */
        /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
        Crypto_SipHashGenContext.Job->jobState = CRYPTO_JOBSTATE_IDLE;
        SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
        Crypto_DriverObjects[Crypto_SipHashGenContext.ObjId].DriverObjectState =
        CRYPTO_DRIVER_OBJECT_STATE_IDLE;
        Crypto_DriverObjects[Crypto_SipHashGenContext.ObjId].CurrentJob =
        NULL_PTR;
        Crypto_DriverObjects[Crypto_SipHashGenContext.ObjId].SkipPeriodicMainFunction = TRUE;
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      }
      Crypto_SipHashGenContext.Crypto_Generic_Callback
      (
        Crypto_SipHashGenContext.Job,
        CRYPTO_E_JOB_CANCELED
      );
    }
    else
    {
      if(TRUE == Crypto_SipHashGenContext.CallbackFlag)
      {
        if (
             (NULL_PTR != Crypto_SipHashGenContext.ResultVal)
             && (NULL_PTR != Crypto_SipHashGenContext.IsBusy)
           )
        {
          *Crypto_SipHashGenContext.IsBusy = FALSE;
          *Crypto_SipHashGenContext.ResultVal =
          Crypto_SipHashGenContext.CallbackResult;
        }
        if(
            ( CRYPTO_PROCESSING_ASYNC ==
                Crypto_SipHashGenContext.Job->jobPrimitiveInfo->processingType
            ) &&
            (
              (
                (
                  ((uint8)Crypto_SipHashGenContext.Job->jobPrimitiveInputOutput.mode) &
                    ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
              ) ||
              (
                (
                  ((uint8)Crypto_SipHashGenContext.Job->jobPrimitiveInputOutput.mode) &
                  ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
                ) == ( (uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
              )
            ) && (CRYPTO_OPERATIONMODE_START == Crypto_SipHashGenContext.CurrentMode)
          )
        {
          (void)Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Update
                (
                  Crypto_SipHashGenContext.ObjId,
                  Crypto_SipHashGenContext.Job
                );
        }
        else
        {
          if(
              (
                CRYPTO_PROCESSING_ASYNC ==
                    Crypto_SipHashGenContext.Job->jobPrimitiveInfo->processingType
              ) &&
              (
                (
                  (
                    ((uint8)Crypto_SipHashGenContext.Job->jobPrimitiveInputOutput.mode) &
                    ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                  ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                )
              ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_SipHashGenContext.CurrentMode)
            )
          {
            (void)Crypto_AL_MACGENERATE_SIPHASH_SIPHASH_2_4_Finish
                  (
                    Crypto_SipHashGenContext.ObjId,
                    Crypto_SipHashGenContext.Job
                  );
          }
        }
        Crypto_SipHashGenContext.Crypto_Generic_Callback
        (
          Crypto_SipHashGenContext.Job,
          Crypto_SipHashGenContext.CallbackResult
        );
        Crypto_SipHashGenContext.CallbackFlag = FALSE;
      }
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_SipHashGenStateUpdate
(
  void
)
{
  /* Fill the next block to compress with input data and, if there is enough data,
   * process it by running SipRound.
   */

  /* Local variables. */
  uint32 Shift;
  uint32 i;

  /* !LINKSTO EB_Crypto_CryptAlgos_0913,1 */
  if
  (
    (
      CRYPTO_SIPHASH_BLOCK_LEN_BYTES <=
      (
        Crypto_SipHashGenContext.DataLength +
        Crypto_SipHashGenContext.RemainingBytes
      )
    )
  )
  {
    /* We have enough data to fill a complete block to compress and we know that the
     * block will not be the last.
     */

    if
    (
      (0U == Crypto_SipHashGenContext.RemainingBytes)
    )
    {
      /* Extract single block (64 bit). */
      Crypto_SipHashGenContext.MessageBlock =
        CRYPTO_SIPHASH_UINT8_TO_UINT64(
                                                  Crypto_SipHashGenContext.DataPtr
                                                );
    }
    else
    {
      /* Consider remaining message bytes from previous update call. */

      /* Take further bytes to fill the block. */
      Shift = Crypto_SipHashGenContext.RemainingBytes << 3;

      i =
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashGenContext.RemainingBytes;
      for ( ; i > 0U; i--)
      {
        Crypto_SipHashGenContext.MessageBlock |=
          (
            (
              (uint64) Crypto_SipHashGenContext.DataPtr[i - 1U]
            ) <<
            (Shift + ((i - 1U) << 3U))
          );
      }
    }

    /* Process a single block (64 bit). */
    /* !LINKSTO EB_Crypto_CryptAlgos_0915,1 */
    Crypto_SipHashGenContext.V3 ^= Crypto_SipHashGenContext.MessageBlock;

    for (i = 0U; i < Crypto_SipHashGenContext.C; i++)
    {
      CRYPTO_SIPHASH_SIPROUND(
                                         Crypto_SipHashGenContext.V0,
                                         Crypto_SipHashGenContext.V1,
                                         Crypto_SipHashGenContext.V2,
                                         Crypto_SipHashGenContext.V3
                                       );
    }

    Crypto_SipHashGenContext.V0 ^= Crypto_SipHashGenContext.MessageBlock;

    /* Skip the bytes we have read in the input data. */
    Crypto_SipHashGenContext.DataPtr =
      &Crypto_SipHashGenContext.DataPtr
      [
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashGenContext.RemainingBytes
      ];

    Crypto_SipHashGenContext.DataLength -=
      (
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashGenContext.RemainingBytes
      );

    /* Increase the number of total bytes. */
    Crypto_SipHashGenContext.TotalNumberOfBytes +=
      (
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashGenContext.RemainingBytes
      );

    /* Reset remaining message bytes. */
    Crypto_SipHashGenContext.RemainingBytes = 0U;
  }
  else
  {
    /* We do not have enough input data to fill a complete block or we do not know
     * whether the block will be the last one.
     */

    /* Determine the number of total message bytes by adding the remaining message bytes. */
    Crypto_SipHashGenContext.TotalNumberOfBytes +=
        Crypto_SipHashGenContext.DataLength;

    /* Clear block only if number of remaining bytes are zero, i.e. start case or a previous block
     * was completed. */
    if (0U == Crypto_SipHashGenContext.RemainingBytes)
    {
      Crypto_SipHashGenContext.MessageBlock = 0U;
    }

    /* Determine the number of remaining bytes. Consider remaining bytes from a previous update
     * call. */
    Crypto_SipHashGenContext.RemainingBytes +=
      Crypto_SipHashGenContext.DataLength;

    /* Respect the data already written to the message block. */
    Shift = (Crypto_SipHashGenContext.RemainingBytes -
             Crypto_SipHashGenContext.DataLength) << 3U;

    /* Fill block with remaining data bytes. */
    for (i = Crypto_SipHashGenContext.DataLength; i > 0U ; i--)
    {
      Crypto_SipHashGenContext.MessageBlock |=
        (
          (
            (uint64) Crypto_SipHashGenContext.DataPtr[i - 1U]
          ) <<
          (Shift + ((i - 1U) << 3U))
        );
    }

    /* Reset data length. */
    Crypto_SipHashGenContext.DataLength = 0U;

    /* We are finished with the current update and wait for more input data or the
     * end of the SipHash computation.
     */
    Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_INITIALIZED;

    /* Call callback. */
    Crypto_SipHashGenContext.CallbackFlag = TRUE;
    Crypto_SipHashGenContext.CallbackResult = E_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_SipHashGenStateFinish
(
  void
)
{
  /* Process the last block. */

  /* Local variables */
  uint8 i;

  /* Fill the number of total message bytes modulo 256. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0914,1 */
  Crypto_SipHashGenContext.MessageBlock |=
      (uint64)(((uint64)Crypto_SipHashGenContext.TotalNumberOfBytes & 0xFFU) << 56U);

  /* Process a single block (64 bit). */
  /* !LINKSTO EB_Crypto_CryptAlgos_0915,1 */
  Crypto_SipHashGenContext.V3 ^= Crypto_SipHashGenContext.MessageBlock;

  for (i = 0U; i < Crypto_SipHashGenContext.C; i++)
  {
    CRYPTO_SIPHASH_SIPROUND(
                                       Crypto_SipHashGenContext.V0,
                                       Crypto_SipHashGenContext.V1,
                                       Crypto_SipHashGenContext.V2,
                                       Crypto_SipHashGenContext.V3
                                     );
  }

  Crypto_SipHashGenContext.V0 ^= Crypto_SipHashGenContext.MessageBlock;

  /* XOR the constant 0xFF to the state V2. Perform d x SipRound. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0916,1 */
  Crypto_SipHashGenContext.V2 ^= 0xFFU;

  for (i = 0U; i < Crypto_SipHashGenContext.D; i++)
  {
    CRYPTO_SIPHASH_SIPROUND(
                                       Crypto_SipHashGenContext.V0,
                                       Crypto_SipHashGenContext.V1,
                                       Crypto_SipHashGenContext.V2,
                                       Crypto_SipHashGenContext.V3
                                     );
  }

  /* XOR all state variables. Finally,the result is available in state variable V0. */
  Crypto_SipHashGenContext.V0 ^= Crypto_SipHashGenContext.V1;
  Crypto_SipHashGenContext.V0 ^= Crypto_SipHashGenContext.V2;
  Crypto_SipHashGenContext.V0 ^= Crypto_SipHashGenContext.V3;
  if (
       CRYPTO_SIPHASH_BLOCK_LEN_BYTES ==
       *(Crypto_SipHashGenContext.ResultLengthPtr)
     )
  {
    CRYPTO_SIPHASH_UINT64_TO_UINT8(
                                              Crypto_SipHashGenContext.V0,
                                              Crypto_SipHashGenContext.Result
                                            );
  }
  else
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0921,1 */
    for (i = 0U; i < *(Crypto_SipHashGenContext.ResultLengthPtr); i++)
    {
      Crypto_SipHashGenContext.Result[i] =
                                       (uint8)(Crypto_SipHashGenContext.V0 >> (i << 3U));
    }
  }

  /* Set state to idle. */
  Crypto_SipHashGenContext.State = CRYPTO_SIPHASH_G_S_IDLE;

  /* Call callback. */
  Crypto_SipHashGenContext.CallbackFlag = TRUE;
  Crypto_SipHashGenContext.CallbackResult = E_OK;
}

#endif /* #if (CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) */

/*--SIPHASH-VERIFY--------------------------------------------------------------------------------*/

#if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Reset
(
  void
)
{
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(
               &Crypto_SipHashVrfyContext,
               sizeof(Crypto_SipHashVrfyContext)
             );
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_CallBack
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
           (CRYPTO_OPERATIONMODE_FINISH & Crypto_SipHashVrfyContext.CurrentMode)
         ) ||
         (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_SipHashVrfyContext.CurrentMode =
        CRYPTO_MAC_SIPHASH_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_SipHashVrfyContext.ObjId].DriverObjectState =
        CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_SipHashVrfyContext.ObjId].CurrentJob =
        NULL_PTR;
      Crypto_DriverObjects[Crypto_SipHashVrfyContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_SipHashVrfyContext.CurrentMode)
         ) &&
         (
           CRYPTO_OPERATIONMODE_SINGLECALL !=
           (
             Crypto_SipHashVrfyContext.Job->jobPrimitiveInputOutput.mode
             & CRYPTO_OPERATIONMODE_SINGLECALL
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashVrfyStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
)
{
  /* Local variables. */
  Std_ReturnType RetVal = E_OK;
  uint64 Key0;
  uint64 Key1;
  P2CONST(Crypto_SipHashVrfyConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
  (P2CONST(Crypto_SipHashVrfyConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  Crypto_SipHashVrfyContext.CurrentMode = CRYPTO_OPERATIONMODE_START;

  /* Store data into context. */
  TS_MemCpy(Crypto_SipHashVrfyContext.Key.data, KeyPtr->data, KeyPtr->length);
  Crypto_SipHashVrfyContext.Key.length = KeyPtr->length;
  Crypto_SipHashVrfyContext.ObjId = LocCfgPtr->ObjId;
  Crypto_SipHashVrfyContext.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_SipHashVrfyContext.Job = LocCfgPtr->Job;
  /*Resting the IsBusy and ResultVal pointers in context from the old call*/
  Crypto_SipHashVrfyContext.ResultVal = NULL_PTR;
  Crypto_SipHashVrfyContext.IsBusy = NULL_PTR;

  /* Extract key. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0907,1 */
  Key0 = CRYPTO_SIPHASH_UINT8_TO_UINT64(Crypto_SipHashVrfyContext.Key.data);
  /* !LINKSTO EB_Crypto_CryptAlgos_0908,1 */
  Key1 =
    CRYPTO_SIPHASH_UINT8_TO_UINT64
    (
      &Crypto_SipHashVrfyContext.Key.data[CRYPTO_SIPHASH_KEY_LEN_BYTES >> 1U]
    );

  /* Initialize state variables. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0909,1 */
  Crypto_SipHashVrfyContext.V0 = Key0 ^ CRYPTO_SIPHASH_INITV0;
  /* !LINKSTO EB_Crypto_CryptAlgos_0910,1 */
  Crypto_SipHashVrfyContext.V1 = Key1 ^ CRYPTO_SIPHASH_INITV1;
  /* !LINKSTO EB_Crypto_CryptAlgos_0911,1 */
  Crypto_SipHashVrfyContext.V2 = Key0 ^ CRYPTO_SIPHASH_INITV2;
  /* !LINKSTO EB_Crypto_CryptAlgos_0912,1 */
  Crypto_SipHashVrfyContext.V3 = Key1 ^ CRYPTO_SIPHASH_INITV3;
  Crypto_SipHashVrfyContext.TotalNumberOfBytes = 0U;
  Crypto_SipHashVrfyContext.RemainingBytes = 0U;
  Crypto_SipHashVrfyContext.C = LocCfgPtr->C;
  Crypto_SipHashVrfyContext.D = LocCfgPtr->D;

  /* The initialization of the SipHash computation has finished. We can now wait for the input
   * data. */
  Crypto_SipHashVrfyContext.State = CRYPTO_SIPHASH_V_S_INITIALIZED;

  /* Call callback. */
  Crypto_SipHashVrfyContext.CallbackFlag = TRUE;
  Crypto_SipHashVrfyContext.CallbackResult = E_OK;
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashVrfyUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if (CRYPTO_SIPHASH_V_S_INITIALIZED == Crypto_SipHashVrfyContext.State)
  {
    /* Store data into context */
    Crypto_SipHashVrfyContext.DataPtr = DataPtr;
    Crypto_SipHashVrfyContext.DataLength = DataLength;

    /* Set state of the state machine to update */
    Crypto_SipHashVrfyContext.State = CRYPTO_SIPHASH_V_S_UPDATE;
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_SipHashVrfyFinish
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 AuthenticationPtr,
  uint32                                                                AuthenticationLength,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if (CRYPTO_SIPHASH_V_S_INITIALIZED == Crypto_SipHashVrfyContext.State)
  {
    if (AuthenticationLength > (CRYPTO_SIPHASH_BLOCK_LEN_BYTES << 3U))
    {
      /* It is not possible to have a SipHash value of the size given by the user. This is an
       * error. */
      /* !LINKSTO EB_Crypto_CryptAlgos_0920,1 */
      RetVal = E_NOT_OK;
    }
    else
    {
      /* Store data into context */
      Crypto_SipHashVrfyContext.SipHashPtr = AuthenticationPtr;
      Crypto_SipHashVrfyContext.SipHashLength = AuthenticationLength;
      Crypto_SipHashVrfyContext.ResultPtr = ResultPtr;
      /* Set state machine to finish. */
      Crypto_SipHashVrfyContext.State = CRYPTO_SIPHASH_V_S_FINISH;
      RetVal = E_OK;
    }
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_SipHashVrfyMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if(!Crypto_CheckSkipMain(Result, Busy, Crypto_SipHashVrfyContext.ObjId))
  {
    Crypto_SipHashVrfyContext.ResultVal = Result;
    Crypto_SipHashVrfyContext.IsBusy = Busy;
    if ((NULL_PTR != Result) && (NULL_PTR != Busy))
    {
      *Crypto_SipHashVrfyContext.ResultVal = E_OK;
      *Crypto_SipHashVrfyContext.IsBusy = TRUE;
    }
    switch (Crypto_SipHashVrfyContext.State)
    {
      case CRYPTO_SIPHASH_V_S_UPDATE:
      {
        if (NULL_PTR != Crypto_SipHashVrfyContext.IsBusy)
        {
          *Crypto_SipHashVrfyContext.IsBusy = TRUE;
        }
        Crypto_SipHashVrfyContext.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        Crypto_SipHashVrfyStateUpdate();
      }
      break;

      case CRYPTO_SIPHASH_V_S_FINISH:
      {
        Crypto_SipHashVrfyContext.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
        Crypto_SipHashVrfyStateFinish();
      }
      break;

      case CRYPTO_SIPHASH_V_S_INITIALIZED:
      {
        if (NULL_PTR != Busy)
        {
          *Crypto_SipHashVrfyContext.IsBusy = FALSE;
        }
      }
      break;

      default:
      {
        /* Nothing to do. */
      }
      break;

    }
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
    if(TRUE == Crypto_SipHashVrfyContext.CancelFlag)
    {
      if (
           (NULL_PTR != Crypto_SipHashVrfyContext.ResultVal)
           && (NULL_PTR != Crypto_SipHashVrfyContext.IsBusy)
         )
      {
        *Crypto_SipHashVrfyContext.IsBusy = FALSE;
        *Crypto_SipHashVrfyContext.ResultVal = CRYPTO_E_JOB_CANCELED;
        /* processingType is synchronous */
        /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
        Crypto_SipHashVrfyContext.Job->jobState = CRYPTO_JOBSTATE_IDLE;
        SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
        Crypto_DriverObjects[Crypto_SipHashVrfyContext.ObjId].DriverObjectState =
        CRYPTO_DRIVER_OBJECT_STATE_IDLE;
        Crypto_DriverObjects[Crypto_SipHashVrfyContext.ObjId].CurrentJob =
        NULL_PTR;
        Crypto_DriverObjects[Crypto_SipHashVrfyContext.ObjId].SkipPeriodicMainFunction = TRUE;
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      }
      Crypto_SipHashVrfyContext.Crypto_Generic_Callback
      (
        Crypto_SipHashVrfyContext.Job,
        CRYPTO_E_JOB_CANCELED
      );
    }
    else
    {
      if(TRUE == Crypto_SipHashVrfyContext.CallbackFlag)
      {
        if (
             (NULL_PTR != Crypto_SipHashVrfyContext.ResultVal)
             && (NULL_PTR != Crypto_SipHashVrfyContext.IsBusy)
           )
        {
          *Crypto_SipHashVrfyContext.IsBusy = FALSE;
          *Crypto_SipHashVrfyContext.ResultVal =
          Crypto_SipHashVrfyContext.CallbackResult;
        }
        if(
            ( CRYPTO_PROCESSING_ASYNC ==
                Crypto_SipHashVrfyContext.Job->jobPrimitiveInfo->processingType
            ) &&
            (
              (
                (
                  ((uint8)Crypto_SipHashVrfyContext.Job->jobPrimitiveInputOutput.mode) &
                    ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
              ) ||
              (
                (
                  ((uint8)Crypto_SipHashVrfyContext.Job->jobPrimitiveInputOutput.mode) &
                  ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
                ) == ( (uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
              )
            ) && (CRYPTO_OPERATIONMODE_START == Crypto_SipHashVrfyContext.CurrentMode)
          )
        {
          (void)Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Update
                (
                  Crypto_SipHashVrfyContext.ObjId,
                  Crypto_SipHashVrfyContext.Job
                );
        }
        else
        {
          if(
              (
                CRYPTO_PROCESSING_ASYNC ==
                    Crypto_SipHashVrfyContext.Job->jobPrimitiveInfo->processingType
              ) &&
              (
                (
                  (
                    ((uint8)Crypto_SipHashVrfyContext.Job->jobPrimitiveInputOutput.mode) &
                    ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                  ) == ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
                )
              ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_SipHashVrfyContext.CurrentMode)
            )
          {
            (void)Crypto_AL_MACVERIFY_SIPHASH_SIPHASH_2_4_Finish
                  (
                    Crypto_SipHashVrfyContext.ObjId,
                    Crypto_SipHashVrfyContext.Job
                  );
          }
        }
        Crypto_SipHashVrfyContext.Crypto_Generic_Callback
        (
          Crypto_SipHashVrfyContext.Job,
          Crypto_SipHashVrfyContext.CallbackResult
        );
        Crypto_SipHashVrfyContext.CallbackFlag = FALSE;
      }
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_SipHashVrfyStateUpdate
(
  void
)
{
  /* Fill the next block to compress with input data and, if there is enough data,
   * process it by running SipRound.
   */

  /* Local variables. */
  uint32 Shift;
  uint32 i;

  /* !LINKSTO EB_Crypto_CryptAlgos_0913,1 */
  if
  (
    (
      (
        Crypto_SipHashVrfyContext.DataLength +
        Crypto_SipHashVrfyContext.RemainingBytes
      ) >=
      CRYPTO_SIPHASH_BLOCK_LEN_BYTES
    )
  )
  {
    /* We have enough data to fill a complete block to compress and we know that the
     * block will not be the last.
     */

    if
    (
      (Crypto_SipHashVrfyContext.RemainingBytes == 0U)
    )
    {
      /* Extract single block (64 bit). */
      Crypto_SipHashVrfyContext.MessageBlock =
        CRYPTO_SIPHASH_UINT8_TO_UINT64(
                                                  Crypto_SipHashVrfyContext.DataPtr
                                                );
    }
    else
    {
      /* Consider remaining message bytes from previous update call. */

      /* Take further bytes to fill the block. */
      Shift = Crypto_SipHashVrfyContext.RemainingBytes << 3;

      i =
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashVrfyContext.RemainingBytes;
      for ( ; i > 0U; i--)
      {
        Crypto_SipHashVrfyContext.MessageBlock |=
          (
            (
              (uint64) Crypto_SipHashVrfyContext.DataPtr[i - 1U]
            ) <<
            (Shift + ((i - 1U) << 3U))
          );
      }
    }

    /* Process a single block (64 bit). */
    /* !LINKSTO EB_Crypto_CryptAlgos_0915,1 */
    Crypto_SipHashVrfyContext.V3 ^= Crypto_SipHashVrfyContext.MessageBlock;

    for (i = 0U; i < Crypto_SipHashVrfyContext.C; i++)
    {
      CRYPTO_SIPHASH_SIPROUND(
                                         Crypto_SipHashVrfyContext.V0,
                                         Crypto_SipHashVrfyContext.V1,
                                         Crypto_SipHashVrfyContext.V2,
                                         Crypto_SipHashVrfyContext.V3
                                       );
    }

    Crypto_SipHashVrfyContext.V0 ^= Crypto_SipHashVrfyContext.MessageBlock;

    /* Skip the bytes we have read in the input data. */
    Crypto_SipHashVrfyContext.DataPtr =
      &Crypto_SipHashVrfyContext.DataPtr
      [
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashVrfyContext.RemainingBytes
      ];

    Crypto_SipHashVrfyContext.DataLength -=
      (
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashVrfyContext.RemainingBytes
      );

    /* Increase the number of total bytes. */
    Crypto_SipHashVrfyContext.TotalNumberOfBytes +=
      (
        CRYPTO_SIPHASH_BLOCK_LEN_BYTES -
        Crypto_SipHashVrfyContext.RemainingBytes
      );

    /* Reset remaining message bytes. */
    Crypto_SipHashVrfyContext.RemainingBytes = 0U;
  }
  else
  {
    /* We do not have enough input data to fill a complete block or we do not know
     * whether the block will be the last one.
     */

    /* Determine the number of total message bytes by adding the remaining message bytes. */
    Crypto_SipHashVrfyContext.TotalNumberOfBytes +=
        Crypto_SipHashVrfyContext.DataLength;

    /* Clear block only if number of remaining bytes are zero, i.e. start case or a previous block
     * was completed. */
    if (0U == Crypto_SipHashVrfyContext.RemainingBytes)
    {
      Crypto_SipHashVrfyContext.MessageBlock = 0U;
    }

    /* Determine the number of remaining bytes. Consider remaining bytes from a previous update
     * call. */
    Crypto_SipHashVrfyContext.RemainingBytes +=
      Crypto_SipHashVrfyContext.DataLength;

    /* Respect the data already written to the message block. */
    Shift = (Crypto_SipHashVrfyContext.RemainingBytes -
             Crypto_SipHashVrfyContext.DataLength) << 3U;

    /* Fill block with remaining data bytes. */
    for (i = Crypto_SipHashVrfyContext.DataLength; i > 0U; i--)
    {
      Crypto_SipHashVrfyContext.MessageBlock |=
        (
          (
            (uint64) Crypto_SipHashVrfyContext.DataPtr[i - 1U]
          ) <<
          (Shift + ((i - 1U) << 3U))
        );
    }

    /* Reset data length. */
    Crypto_SipHashVrfyContext.DataLength = 0U;

    /* We are finished with the current update and wait for more input data or the
     * end of the SipHash computation.
     */
    Crypto_SipHashVrfyContext.State = CRYPTO_SIPHASH_V_S_INITIALIZED;

    /* Call callback. */
    Crypto_SipHashVrfyContext.CallbackFlag = TRUE;
    Crypto_SipHashVrfyContext.CallbackResult = E_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_SipHashVrfyStateFinish
(
  void
)
{
  /* Local variables. */
  Crypto_VerifyResultType result;
  uint8 Mask;
  uint8 Pos;
  uint8 i;

  /* Process the last block. */

  /* Fill the number of total message bytes modulo 256. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0914,1 */
  Crypto_SipHashVrfyContext.MessageBlock |=
      (uint64) (((uint64) Crypto_SipHashVrfyContext.TotalNumberOfBytes & 0xFFU) << 56U);

  /* Process a single block (64 bit). */
  /* !LINKSTO EB_Crypto_CryptAlgos_0915,1 */
  Crypto_SipHashVrfyContext.V3 ^= Crypto_SipHashVrfyContext.MessageBlock;

  for (i = 0U; i < Crypto_SipHashVrfyContext.C; i++)
  {
    CRYPTO_SIPHASH_SIPROUND(
                                       Crypto_SipHashVrfyContext.V0,
                                       Crypto_SipHashVrfyContext.V1,
                                       Crypto_SipHashVrfyContext.V2,
                                       Crypto_SipHashVrfyContext.V3
                                    );
  }

  Crypto_SipHashVrfyContext.V0 ^= Crypto_SipHashVrfyContext.MessageBlock;

  /* XOR the constant 0xFF to the state V2. Perform d x SipRound. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0916,1 */
  Crypto_SipHashVrfyContext.V2 ^= 0xFFU;

  for (i = 0U; i < Crypto_SipHashVrfyContext.D; i++)
  {
    CRYPTO_SIPHASH_SIPROUND(
                                       Crypto_SipHashVrfyContext.V0,
                                       Crypto_SipHashVrfyContext.V1,
                                       Crypto_SipHashVrfyContext.V2,
                                       Crypto_SipHashVrfyContext.V3
                                     );
  }

  /* XOR all state variables. Finally,the result is available in state variable V0. */
  Crypto_SipHashVrfyContext.V0 ^= Crypto_SipHashVrfyContext.V1;
  Crypto_SipHashVrfyContext.V0 ^= Crypto_SipHashVrfyContext.V2;
  Crypto_SipHashVrfyContext.V0 ^= Crypto_SipHashVrfyContext.V3;
  CRYPTO_SIPHASH_UINT64_TO_UINT8(
                                            Crypto_SipHashVrfyContext.V0,
                                            Crypto_SipHashVrfyContext.SipHashResult
                                          );

  /* Compare the SipHash value given by the user with the SipHash value which
   * has just been computed. */
  /* !LINKSTO EB_Crypto_CryptAlgos_0919,1 */
  if
  (
    /* Compare whole bytes*/
    Crypto_MemCmp_Sec
    (
      Crypto_SipHashVrfyContext.SipHashResult,
      Crypto_SipHashVrfyContext.SipHashPtr,
      Crypto_SipHashVrfyContext.SipHashLength >> 3U
    ) == E_OK
  )
  {
    result = CRYPTO_E_VER_OK;

    /* Compare rest of bits */
    if (0U < (Crypto_SipHashVrfyContext.SipHashLength % 8U))
    {
      Mask = 0x00U;
      for (Pos = 0U; Pos < (Crypto_SipHashVrfyContext.SipHashLength % 8U); Pos++)
      {
        Mask = (Mask >> 1U) + 0x80U;
      }

      if (
           (
             (Crypto_SipHashVrfyContext.SipHashResult[
                Crypto_SipHashVrfyContext.SipHashLength >> 3U]) & Mask
           )
           !=
           (
             (Crypto_SipHashVrfyContext.SipHashPtr[
                Crypto_SipHashVrfyContext.SipHashLength >> 3U]) & Mask
           )
         )
      {
        result = CRYPTO_E_VER_NOT_OK;
      }
    }
  }
  else
  {
    result = CRYPTO_E_VER_NOT_OK;
  }

  *Crypto_SipHashVrfyContext.ResultPtr = result;

  /* Set state to idle. */
  Crypto_SipHashVrfyContext.State = CRYPTO_SIPHASH_V_S_IDLE;

  /* Call callback. */
  Crypto_SipHashVrfyContext.CallbackFlag = TRUE;
  Crypto_SipHashVrfyContext.CallbackResult = E_OK;
}

#endif /* #if (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

#endif /* #if ((CRYPTO_SIPHASH_GEN_ENABLED == STD_ON) ||
               (CRYPTO_SIPHASH_VRFY_ENABLED == STD_ON)) */

/*==[end of file]=================================================================================*/

