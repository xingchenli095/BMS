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
#include <Crypto_KeyManagement.h>
#include <Crypto_AL_KeyManagement.h>
#include <Crypto_AL_Mac.h>

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )
#include <Crypto_AL_Cipher.h>
#endif
#if ((CRYPTO_HMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)    \
    )
#include <Crypto_AL_Hash.h>
#endif

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) || \
     (CRYPTO_HMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)    \
    )

/*==[Macros]======================================================================================*/

#if (defined CRYPTO_MAC_DEFAULT_CURRENT_MODE)
#error CRYPTO_MAC_DEFAULT_CURRENT_MODE already defined
#endif
/** \brief The default operation mode which is set after finishing the asynchronous processing
 *         of a mac primitive.
 */
#define CRYPTO_MAC_DEFAULT_CURRENT_MODE 0x00U

/*--CMAC-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )

/* !LINKSTO EB_Crypto_CryptAlgos_0506,2 */
#if (defined CRYPTO_CMAC_BLOCK_LEN_BYTES)
#error CRYPTO_CMAC_BLOCK_LEN_BYTES already defined
#endif
/** \brief the length of one encryption block for the CMAC */
#define CRYPTO_CMAC_BLOCK_LEN_BYTES 16U

#if (defined CRYPTO_MAC_MAX_LENGTH)
#error CRYPTO_MAC_MAX_LENGTH already defined
#endif
/** \brief the max length of MAC. */
#define CRYPTO_MAC_MAX_LENGTH 16U

#if (defined CRYPTO_CMAC_BYTE_WITH_MSB_SET)
#error CRYPTO_CMAC_BYTE_WITH_MSB_SET already defined
#endif
/** \brief a byte which has only its most significant bit set */
#define CRYPTO_CMAC_BYTE_WITH_MSB_SET 0x80U

#endif /* #if ((CRYPTO_CMAC_GEN_ENABLED == STD_ON) ||
               (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)) */

/*--CMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)

/*--Crypto_CMACGenStateType-------------------------------------------------------------*/

#if (defined CRYPTO_CMAC_G_S_IDLE)
#error CRYPTO_CMAC_G_S_IDLE already defined
#endif
/** \brief Idle state of the CMAC routine. */
#define CRYPTO_CMAC_G_S_IDLE 0U

#if (defined CRYPTO_CMAC_G_S_START_REQ_SB_START)
#error CRYPTO_CMAC_G_S_START_REQ_SB_START already defined
#endif
/** \brief The underlying symmetrical block encryption a gets initialized. */
#define CRYPTO_CMAC_G_S_START_REQ_SB_START 1U

#if (defined CRYPTO_CMAC_G_S_START_WAIT_SB_START)
#error CRYPTO_CMAC_G_S_START_WAIT_SB_START already defined
#endif
/** \brief Waiting for the encryption to finish starting. */
#define CRYPTO_CMAC_G_S_START_WAIT_SB_START 2U

#if (defined CRYPTO_CMAC_G_S_START_REQ_SB_UPD)
#error CRYPTO_CMAC_G_S_START_REQ_SB_UPD already defined
#endif
/** \brief Request encryption of zero block. */
#define CRYPTO_CMAC_G_S_START_REQ_SB_UPD 3U

#if (defined CRYPTO_CMAC_G_S_START_WAIT_SB_UPD)
#error CRYPTO_CMAC_G_S_START_WAIT_SB_UPD already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the zero block. */
#define CRYPTO_CMAC_G_S_START_WAIT_SB_UPD 4U

#if (defined CRYPTO_CMAC_G_S_START_K1_AND_K2)
#error CRYPTO_CMAC_G_S_START_K1_AND_K2 already defined
#endif
/** \brief Create K1 and K2 and finish the starting of the CMAC. */
#define CRYPTO_CMAC_G_S_START_K1_AND_K2 5U

#if (defined CRYPTO_CMAC_G_S_UPD_CP_FROM_INPUT)
#error CRYPTO_CMAC_G_S_UPD_CP_FROM_INPUT already defined
#endif
/** \brief Copy bytes from input data to encryption block. */
#define CRYPTO_CMAC_G_S_UPD_CP_FROM_INPUT 6U

#if (defined CRYPTO_CMAC_G_S_UPD_REQ_SB_UPD)
#error CRYPTO_CMAC_G_S_UPD_REQ_SB_UPD already defined
#endif
/** \brief Request encryption of data block. */
#define CRYPTO_CMAC_G_S_UPD_REQ_SB_UPD 7U

#if (defined CRYPTO_CMAC_G_S_UPD_WAIT_SB_UPD)
#error CRYPTO_CMAC_G_S_UPD_WAIT_SB_UPD already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the data block. */
#define CRYPTO_CMAC_G_S_UPD_WAIT_SB_UPD 8U

#if (defined CRYPTO_CMAC_G_S_FIN_PAD_LAST_BLOCK)
#error CRYPTO_CMAC_G_S_FIN_PAD_LAST_BLOCK already defined
#endif
/** \brief Pad last block if necessary and XOR it with K1 or K2. */
#define CRYPTO_CMAC_G_S_FIN_PAD_LAST_BLOCK 9U

#if (defined CRYPTO_CMAC_G_S_FIN_REQ_SB_UPD)
#error CRYPTO_CMAC_G_S_FIN_REQ_SB_UPD already defined
#endif
/** \brief Request encryption of last block. */
#define CRYPTO_CMAC_G_S_FIN_REQ_SB_UPD 10U

#if (defined CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD)
#error CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the last block. */
#define CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD 11U

#if (defined CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT)
#error CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT already defined
#endif
/** \brief Copy the CMAC to the output buffer. */
#define CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT 12U

#if (defined CRYPTO_CMAC_G_S_FIN_REQ_SB_FIN)
#error CRYPTO_CMAC_G_S_FIN_REQ_SB_FIN already defined
#endif
/** \brief Request finish of encryption. */
#define CRYPTO_CMAC_G_S_FIN_REQ_SB_FIN 13U

#if (defined CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN)
#error CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN already defined
#endif
/** \brief Waiting for the encryption to finish. */
#define CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN 14U

#if (defined CRYPTO_CMAC_G_S_INITIALIZED)
#error CRYPTO_CMAC_G_S_INITIALIZED already defined
#endif
/** \brief The CMAC routine is initialized. */
#define CRYPTO_CMAC_G_S_INITIALIZED 15U

#endif /* #if (CRYPTO_CMAC_GEN_ENABLED == STD_ON) */

/*--CMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)

/*--Crypto_CMACVrfyStateType------------------------------------------------------------*/

#if (defined CRYPTO_CMAC_V_S_IDLE)
#error CRYPTO_CMAC_V_S_IDLE already defined
#endif
/** \brief Idle state of the CMAC routine. */
#define CRYPTO_CMAC_V_S_IDLE 0U

#if (defined CRYPTO_CMAC_V_S_START_WAIT_SB_UPD)
#error CRYPTO_CMAC_V_S_START_WAIT_SB_UPD already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the zero block. */
#define CRYPTO_CMAC_V_S_START_WAIT_SB_UPD 4U

#if (defined CRYPTO_CMAC_V_S_START_K1_AND_K2)
#error CRYPTO_CMAC_V_S_START_K1_AND_K2 already defined
#endif
/** \brief Create K1 and K2 and finish the starting of the CMAC. */
#define CRYPTO_CMAC_V_S_START_K1_AND_K2 5U

#if (defined CRYPTO_CMAC_V_S_UPD_CP_FROM_INPUT)
#error CRYPTO_CMAC_V_S_UPD_CP_FROM_INPUT already defined
#endif
/** \brief Copy bytes from input data to encryption block. */
#define CRYPTO_CMAC_V_S_UPD_CP_FROM_INPUT 6U

#if (defined CRYPTO_CMAC_V_S_UPD_REQ_SB_UPD)
#error CRYPTO_CMAC_V_S_UPD_REQ_SB_UPD already defined
#endif
/** \brief Request encryption of data block. */
#define CRYPTO_CMAC_V_S_UPD_REQ_SB_UPD 7U

#if (defined CRYPTO_CMAC_V_S_UPD_WAIT_SB_UPD)
#error CRYPTO_CMAC_V_S_UPD_WAIT_SB_UPD already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the data block. */
#define CRYPTO_CMAC_V_S_UPD_WAIT_SB_UPD 8U

#if (defined CRYPTO_CMAC_V_S_FIN_REQ_SB_UPD)
#error CRYPTO_CMAC_V_S_FIN_REQ_SB_UPD already defined
#endif
/** \brief Request encryption of last block. */
#define CRYPTO_CMAC_V_S_FIN_REQ_SB_UPD 10U

#if (defined CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD)
#error CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD already defined
#endif
/** \brief Waiting for the encryption to finish encrypting the last block. */
#define CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD 11U

#if (defined CRYPTO_CMAC_V_S_FIN_COMPARE)
#error CRYPTO_CMAC_V_S_FIN_COMPARE already defined
#endif
/** \brief Compare the given with the computed CMAC. */
#define CRYPTO_CMAC_V_S_FIN_COMPARE 12U

#if (defined CRYPTO_CMAC_V_S_FIN_REQ_SB_FIN)
#error CRYPTO_CMAC_V_S_FIN_REQ_SB_FIN already defined
#endif
/** \brief Request finish of encryption. */
#define CRYPTO_CMAC_V_S_FIN_REQ_SB_FIN 13U

#if (defined CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN)
#error CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN already defined
#endif
/** \brief Waiting for the encryption to finish. */
#define CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN 14U

#if (defined CRYPTO_CMAC_V_S_INITIALIZED)
#error CRYPTO_CMAC_V_S_INITIALIZED already defined
#endif
/** \brief The CMAC routine is initialized. */
#define CRYPTO_CMAC_V_S_INITIALIZED 15U

#endif /* #if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) */

/*--HMAC-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_HMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)    \
    )
#if (defined CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES)
#error CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES is already defined
#endif
/** \brief the length of one encryption block for the HMAC */
#define CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES 64U

#if (defined CRYPTO_HMAC_HASH_MAX_LEN)
#error CRYPTO_HMAC_HASH_MAX_LEN is already defined
#endif
/** \brief The maximal allowed length for a hash digest in bytes */
#define CRYPTO_HMAC_HASH_MAX_LEN 32U

/* !LINKSTO EB_Crypto_CryptAlgos_0804,1 */
#if (defined CRYPTO_HMAC_IPAD)
#error CRYPTO_HMAC_IPAD is already defined
#endif
/** \brief Macro for the inner Padding according to RFC 2104 */
#define CRYPTO_HMAC_IPAD 0x36U

/* !LINKSTO EB_Crypto_CryptAlgos_0805,1 */
#if (defined CRYPTO_HMAC_OPAD)
#error CRYPTO_HMAC_OPAD is already defined
#endif
/** \brief Macro for the outer Padding according to RFC 2104 */
#define CRYPTO_HMAC_OPAD 0x5cU
#endif /* #if ((CRYPTO_HMAC_GEN_ENABLED == STD_ON) ||
               (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)) */

/*--HMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)

#if (defined CRYPTO_HMAC_G_HANDLE_FAILING_HASH)
#error CRYPTO_HMAC_G_HANDLE_FAILING_HASH is already defined
#endif
/** \brief Defines the actions to be performed in case the hashing algorithm fails */
#define CRYPTO_HMAC_G_HANDLE_FAILING_HASH                                                \
  do                                                                                               \
  {                                                                                                \
    Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_IDLE;                            \
                                                                                                   \
    Crypto_HMACGenCtx.CallbackFlag = TRUE;                                               \
    Crypto_HMACGenCtx.CallbackResult = E_NOT_OK;                                         \
  } while (0U)

/*--Crypto_HMACGenStateType-------------------------------------------------------------*/

#if (defined CRYPTO_HMAC_G_S_IDLE)
#error CRYPTO_HMAC_G_S_IDLE is already defined
#endif
/** \brief Idle state of the HMAC routine. */
#define CRYPTO_HMAC_G_S_IDLE                     0U

#if (defined CRYPTO_HMAC_G_S_PREPAREKEY)
#error CRYPTO_HMAC_G_S_PREPAREKEY is already defined
#endif
/** \brief Copy the user-provided key to the "ProcessedKey" array. */
#define CRYPTO_HMAC_G_S_PREPAREKEY               1U

#if (defined CRYPTO_HMAC_G_S_INIT1)
#error CRYPTO_HMAC_G_S_INIT1 is already defined
#endif
/** \brief The underlying Hash Algorithm gets initialized.
 **        If the key is longer than Crypto_HMAC_HASH_BLOCK_LEN_BYTES,
 **        CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY is the next state. Otherwise
 **        CRYPTO_HMAC_G_S_WAIT_FOR_INIT1 is the next state.
 **/
#define CRYPTO_HMAC_G_S_INIT1                    2U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY)
#error CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY is already defined
#endif
/** \brief If the given key is longer than the block length, it must be hashed.
 **        In this state the routine waits for the hash algorithm to initialize.
 **/
#define CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY         3U

#if (defined CRYPTO_HMAC_G_S_HASHKEY_UPDATE)
#error CRYPTO_HMAC_G_S_HASHKEY_UPDATE is already defined
#endif
/** \brief The key is given to the hash routine. */
#define CRYPTO_HMAC_G_S_HASHKEY_UPDATE           4U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_UPDATE)
#error CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_UPDATE is already defined
#endif
/** \brief Waiting for the hashroutine to handle the key. */
#define CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_UPDATE  5U

#if (defined CRYPTO_HMAC_G_S_HASHKEY_FINISH)
#error CRYPTO_HMAC_G_S_HASHKEY_FINISH is already defined
#endif
/** \brief The hash routine gets finished for the hashing of the key. */
#define CRYPTO_HMAC_G_S_HASHKEY_FINISH           6U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_FINISH)
#error CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_FINISH is already defined
#endif
/** \brief The routine is waiting for the underlying hash algorithm
 **        to finish processing of the key hash.
 **/
#define CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_FINISH  7U

#if (defined CRYPTO_HMAC_G_S_HASHKEY_INIT)
#error CRYPTO_HMAC_G_S_HASHKEY_INIT is already defined
#endif
/** \brief The underlying hash routine has to be initilised again. */
#define CRYPTO_HMAC_G_S_HASHKEY_INIT             8U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_INIT1)
#error CRYPTO_HMAC_G_S_WAIT_FOR_INIT1 is already defined
#endif
/** \brief Inner padding. Update the hash routine with the padded key. */
#define CRYPTO_HMAC_G_S_WAIT_FOR_INIT1           9U

#if (defined CRYPTO_HMAC_G_S_INIT2)
#error CRYPTO_HMAC_G_S_INIT2 is already defined
#endif
/** \brief Pad last block if necessary and XOR it with K1 or K2. */
#define CRYPTO_HMAC_G_S_INIT2                    10U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_INIT2)
#error CRYPTO_HMAC_G_S_WAIT_FOR_INIT2 is already defined
#endif
/** \brief Wait for the hash routine to process the update. */
#define CRYPTO_HMAC_G_S_WAIT_FOR_INIT2           11U

#if (defined CRYPTO_HMAC_G_S_INITIALIZED)
#error CRYPTO_HMAC_G_S_INITIALIZED is already defined
#endif
/** \brief The HMAC routine is initialized. */
#define CRYPTO_HMAC_G_S_INITIALIZED              12U

#if (defined CRYPTO_HMAC_G_S_UPDATE)
#error CRYPTO_HMAC_G_S_UPDATE is already defined
#endif
/** \brief Update the hash algorithm with the given message. */
#define CRYPTO_HMAC_G_S_UPDATE                   13U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_UPDATE)
#error CRYPTO_HMAC_G_S_WAIT_FOR_UPDATE is already defined
#endif
/** \brief Wait for the input message to be hashed */
#define CRYPTO_HMAC_G_S_WAIT_FOR_UPDATE          14U

#if (defined CRYPTO_HMAC_G_S_FINISH1)
#error CRYPTO_HMAC_G_S_FINISH1 is already defined
#endif
/** \brief Finish processing the hash with the inner padded key and the message. */
#define CRYPTO_HMAC_G_S_FINISH1                  15U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_FINISH1)
#error CRYPTO_HMAC_G_S_WAIT_FOR_FINISH1 is already defined
#endif
/** \brief The routine is waiting for the underlying hash algorithm
 **        to finish processing of the hash.
 **/
#define CRYPTO_HMAC_G_S_WAIT_FOR_FINISH1         16U

#if (defined CRYPTO_HMAC_G_S_FINISH2)
#error CRYPTO_HMAC_G_S_FINISH2 is already defined
#endif
/** \brief The underlying hash algorithm is initilized again. */
#define CRYPTO_HMAC_G_S_FINISH2                  17U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_FINISH2)
#error CRYPTO_HMAC_G_S_WAIT_FOR_FINISH2 is already defined
#endif
/** \brief The routine waits in this state, for the initialized Hash algorithm. */
#define CRYPTO_HMAC_G_S_WAIT_FOR_FINISH2         18U

#if (defined CRYPTO_HMAC_G_S_FINISH3)
#error CRYPTO_HMAC_G_S_FINISH3 is already defined
#endif
/** \brief Outer padding. Update the hash routine with the padded key. */
#define CRYPTO_HMAC_G_S_FINISH3                  19U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_FINISH3)
#error CRYPTO_HMAC_G_S_WAIT_FOR_FINISH3 is already defined
#endif
/** \brief Wait for the hash routine to process the update. */
#define CRYPTO_HMAC_G_S_WAIT_FOR_FINISH3         20U

#if (defined CRYPTO_HMAC_G_S_FINISH4)
#error CRYPTO_HMAC_G_S_FINISH4 is already defined
#endif
/** \brief Update the hash routine with the hash result
 **        of calculated within state CRYPTO_HMAC_G_S_FINISH1.
 **/
#define CRYPTO_HMAC_G_S_FINISH4                  21U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_FINISH4)
#error CRYPTO_HMAC_G_S_WAIT_FOR_FINISH4 is already defined
#endif
/** \brief Wait for the hash routine to process the update. */
#define CRYPTO_HMAC_G_S_WAIT_FOR_FINISH4         22U

#if (defined CRYPTO_HMAC_G_S_FINISH5)
#error CRYPTO_HMAC_G_S_FINISH5 is already defined
#endif
/** \brief Finish the outer hash. */
#define CRYPTO_HMAC_G_S_FINISH5                  23U

#if (defined CRYPTO_HMAC_G_S_WAIT_FOR_FINISH5)
#error CRYPTO_HMAC_G_S_WAIT_FOR_FINISH5 is already defined
#endif
/** \brief The routine is waiting for the underlying hash algorithm
 **        to finish processing of the hash.
 **/
#define CRYPTO_HMAC_G_S_WAIT_FOR_FINISH5         24U

#endif /* #if (CRYPTO_HMAC_GEN_ENABLED == STD_ON) */

/*--HMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)

#if (defined CRYPTO_HMAC_V_HANDLE_FAILING_HASH)
#error CRYPTO_HMAC_V_HANDLE_FAILING_HASH is already defined
#endif
/** \brief Defines the actions to be performed in case the hashing algorithm fails */
#define CRYPTO_HMAC_V_HANDLE_FAILING_HASH                                                   \
  do                                                                                                  \
  {                                                                                                   \
    Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_IDLE;                              \
    Crypto_HMACVrfyCtx.CallbackFlag = TRUE;                                                 \
    Crypto_HMACVrfyCtx.CallbackResult = E_NOT_OK;                                           \
                                                                                                      \
    if (                                                                                              \
         (NULL_PTR != Crypto_HMACVrfyCtx.ResultVal) &&                                         \
         (NULL_PTR != Crypto_HMACVrfyCtx.IsBusy)                                            \
       )                                                                                              \
    {                                                                                                 \
      *Crypto_HMACVrfyCtx.IsBusy = FALSE;                                                   \
      *Crypto_HMACVrfyCtx.ResultVal = E_NOT_OK;                                                \
    }                                                                                                 \
  } while (0U)

/*--Crypto_HMACVrfyStateType------------------------------------------------------------*/

#if (defined CRYPTO_HMAC_V_S_IDLE)
#error CRYPTO_HMAC_V_S_IDLE is already defined
#endif
/** \brief Idle state of the HMAC routine. */
#define CRYPTO_HMAC_V_S_IDLE                     0U

#if (defined CRYPTO_HMAC_V_S_INIT1)
#error CRYPTO_HMAC_V_S_INIT1 is already defined
#endif
/** \brief The underlying Hash Algorithm gets initialized.
 **        If the key is longer than CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES,
 **        CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY is the next state. Otherwise
 **        CRYPTO_HMAC_V_S_WAIT_FOR_INIT1 is the next state.
 **/
#define CRYPTO_HMAC_V_S_INIT1                    2U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY)
#error CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY is already defined
#endif
/** \brief If the given key is too long, it must be hashed.
 **        The routine waits in this state, for the initialized Hash algorithm.
 **/
#define CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY         3U

#if (defined CRYPTO_HMAC_V_S_HASHKEY_UPDATE)
#error CRYPTO_HMAC_V_S_HASHKEY_UPDATE is already defined
#endif
/** \brief The key is given to the hash routine. */
#define CRYPTO_HMAC_V_S_HASHKEY_UPDATE           4U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_UPDATE)
#error CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_UPDATE is already defined
#endif
/** \brief Waiting for the hashroutine to handle the key. */
#define CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_UPDATE  5U

#if (defined CRYPTO_HMAC_V_S_HASHKEY_FINISH)
#error CRYPTO_HMAC_V_S_HASHKEY_FINISH is already defined
#endif
/** \brief The hash routine gets finished for the hashing of the key. */
#define CRYPTO_HMAC_V_S_HASHKEY_FINISH           6U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_FINISH)
#error CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_FINISH is already defined
#endif
/** \brief The routine is waiting for the underlying hash algorithm
 **        to finish processing of the key hash.
 **/
#define CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_FINISH  7U

#if (defined CRYPTO_HMAC_V_S_HASHKEY_INIT)
#error CRYPTO_HMAC_V_S_HASHKEY_INIT is already defined
#endif
/** \brief The underlying hash routine has to be initilised again. */
#define CRYPTO_HMAC_V_S_HASHKEY_INIT             8U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_INIT1)
#error CRYPTO_HMAC_V_S_WAIT_FOR_INIT1 is already defined
#endif
/** \brief The routine waits in this state, for the initialized Hash algorithm. */
#define CRYPTO_HMAC_V_S_WAIT_FOR_INIT1           9U

#if (defined CRYPTO_HMAC_V_S_INIT2)
#error CRYPTO_HMAC_V_S_INIT2 is already defined
#endif
/** \brief Inner padding. Update the hash routine with the padded key. */
#define CRYPTO_HMAC_V_S_INIT2                    10U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_INIT2)
#error CRYPTO_HMAC_V_S_WAIT_FOR_INIT2 is already defined
#endif
/** \brief Wait for the hash routine to process the update. */
#define CRYPTO_HMAC_V_S_WAIT_FOR_INIT2           11U

#if (defined CRYPTO_HMAC_V_S_INITIALIZED)
#error CRYPTO_HMAC_V_S_INITIALIZED is already defined
#endif
/** \brief The HMAC routine is initialized. */
#define CRYPTO_HMAC_V_S_INITIALIZED              12U

#if (defined CRYPTO_HMAC_V_S_UPDATE)
#error CRYPTO_HMAC_V_S_UPDATE is already defined
#endif
/** \brief Update the hash algorithm with the given message. */
#define CRYPTO_HMAC_V_S_UPDATE                   13U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_UPDATE)
#error CRYPTO_HMAC_V_S_WAIT_FOR_UPDATE is already defined
#endif
/** \brief Wait for the input message to be hashed */
#define CRYPTO_HMAC_V_S_WAIT_FOR_UPDATE          14U

#if (defined CRYPTO_HMAC_V_S_FINISH1)
#error CRYPTO_HMAC_V_S_FINISH1 is already defined
#endif
/** \brief Finish processing the hash with the inner padded key and the message. */
#define CRYPTO_HMAC_V_S_FINISH1                  15U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_FINISH1)
#error CRYPTO_HMAC_V_S_WAIT_FOR_FINISH1 is already defined
#endif
/** \brief The routine is waiting for the
 **        underlying hash algorithm to finish processing of the hash.
 **/
#define CRYPTO_HMAC_V_S_WAIT_FOR_FINISH1         16U

#if (defined CRYPTO_HMAC_V_S_FINISH2)
#error CRYPTO_HMAC_V_S_FINISH2 is already defined
#endif
/** \brief The underlying hash algorithm is initilized again. */
#define CRYPTO_HMAC_V_S_FINISH2                  17U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_FINISH2)
#error CRYPTO_HMAC_V_S_WAIT_FOR_FINISH2 is already defined
#endif
/** \brief The routine waits in this state, for the initialized Hash algorithm. */
#define CRYPTO_HMAC_V_S_WAIT_FOR_FINISH2         18U

#if (defined CRYPTO_HMAC_V_S_FINISH3)
#error CRYPTO_HMAC_V_S_FINISH3 is already defined
#endif
/** \brief Outer padding. Update the hash routine with the padded. */
#define CRYPTO_HMAC_V_S_FINISH3                  19U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_FINISH3)
#error CRYPTO_HMAC_V_S_WAIT_FOR_FINISH3 is already defined
#endif
/** \brief Wait for the hash routine to process the update. */
#define CRYPTO_HMAC_V_S_WAIT_FOR_FINISH3         20U

#if (defined CRYPTO_HMAC_V_S_FINISH4)
#error CRYPTO_HMAC_V_S_FINISH4 is already defined
#endif
/** \brief Update the hashroutine with the hash result of calculated
 **        within state CRYPTO_HMAC_V_S_FINISH1.
 **/
#define CRYPTO_HMAC_V_S_FINISH4                  21U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_FINISH4)
#error CRYPTO_HMAC_V_S_WAIT_FOR_FINISH4 is already defined
#endif
/** \brief Wait for the hash routine to process the update. */
#define CRYPTO_HMAC_V_S_WAIT_FOR_FINISH4         22U

#if (defined CRYPTO_HMAC_V_S_FINISH5)
#error CRYPTO_HMAC_V_S_FINISH5 is already defined
#endif
/** \brief Finish the outer hash. */
#define CRYPTO_HMAC_V_S_FINISH5                  23U

#if (defined CRYPTO_HMAC_V_S_WAIT_FOR_FINISH5)
#error CRYPTO_HMAC_V_S_WAIT_FOR_FINISH5 is already defined
#endif
/** \brief The routine is waiting for the
 **        underlying hash algorithm to finish processing of the hash.
 **/
#define CRYPTO_HMAC_V_S_WAIT_FOR_FINISH5         24U

#if (defined CRYPTO_HMAC_V_S_FINISH_COMPARE)
#error CRYPTO_HMAC_V_S_FINISH_COMPARE is already defined
#endif
/** \brief Compare HashResult with the Mac Buffer. */
#define CRYPTO_HMAC_V_S_FINISH_COMPARE           25U

#endif /* #if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON) */

/*==[Types]=======================================================================================*/

/*--CMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)

/** \struct Crypto_CMACGenConfigType
 *  \brief The configuration of the CMAC generation.
 *
 *  \var Crypto_CMACGenConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_CMACGenConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_CMACGenConfigType::Job
 *  \brief Reference to the processed job.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)   Job,
    uint8                                                          Error
  );
  uint32                                                           ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)       Job;
}
Crypto_CMACGenConfigType;

/** \brief The internal state type of the CMAC generation. */
typedef uint8 Crypto_CMACGenStateType;

/** \struct Crypto_CMACGenContextType
 *  \brief Structure which contains the context of the CMAC generation.
 *
 *
 *  \var Crypto_CMACGenContextType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_CMACGenContextType::ResultVal
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_CMACGenContextType::State
 *  \brief The current state of the CMAC generation.
 *
 *  \var Crypto_CMACGenContextType::Key
 *  \brief The secret key which is used for creating the CMAC.
 *
 *  \var Crypto_CMACGenContextType::Result
 *  \brief A pointer to the start of a buffer where the created CMAC
 *         bytes should be stored.
 *
 *  \var Crypto_CMACGenContextType::ResultLengthPtr
 *  \brief A pointer to a variable which contains the maximal allowed
 *         space for the CMAC in bytes and where the length of the created CMAC
 *         should be stored.
 *
 *  \var Crypto_CMACGenContextType::DataPtr
 *  \brief A pointer to the start of an array where the data is stored over which
 *         the CMAC has to be computed.
 *
 *  \var Crypto_CMACGenContextType::DataLength
 *  \brief The length of the data over which the CMAC has to be computed.
 *
 *  \var Crypto_CMACGenContextType::TruncationIsAllowed
 *  \brief Is truncation of the result allowed or should an error be
 *         returned when the Result buffer is too small.
 *
 *  \var Crypto_CMACGenContextType::BytesStoredInBlock
 *  \brief How many bytes of Crypto_CMACGenContextType::Block are filled at the moment.
 *
 *  \var Crypto_CMACGenContextType::K1
 *  \brief The CMAC subkey K1.
 *
 *  \var Crypto_CMACGenContextType::K2
 *  \brief The CMAC subkey K2.
 *
 *  \var Crypto_CMACGenContextType::Block
 *  \brief An array which contains the current block of data to encrypt.
 *
 *  \var Crypto_CMACGenContextType::LastEncryptedBlock
 *  \brief The last encrypted block of data.
 *
 *  \var Crypto_CMACGenContextType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_CMACGenContextType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_CMACGenContextType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_CMACGenContextType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_CMACGenContextType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_CMACGenContextType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_CMACGenContextType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)  Job,
    uint8                                                         Error
  );
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) ResultVal;
  Crypto_CMACGenStateType                            State;
  VAR(Crypto_SymKeyType, CRYPTO_APPL_DATA) Key;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)          Result;
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)         ResultLengthPtr;
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)        DataPtr;
  uint32                                                       DataLength;
  boolean                                                      TruncationIsAllowed;
  uint32                                                       BytesStoredInBlock;
  uint8                                                        K1[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  uint8                                                        K2[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  uint8                                                        Block[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  uint8                                                        LastEncryptedBlock[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        IsBusy;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)   Job;
  uint32                                                       ObjId;
  Crypto_OperationModeType                                     CurrentMode;
  boolean                                                      CancelFlag;
  boolean                                                      CallbackFlag;
  Std_ReturnType                                               CallbackResult;
}
Crypto_CMACGenContextType;

#endif /* #if (CRYPTO_CMAC_GEN_ENABLED == STD_ON) */

/*--CMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)

/** \struct Crypto_CMACVrfyConfigType
 *  \brief The configuration of the CMAC verification.
 *
 *  \var Crypto_CMACVrfyConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_CMACVrfyConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_CMACVrfyConfigType::Job
 *  \brief Reference to the processed job.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
    uint8                                                        Error
  );
  uint32                                                         ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)     Job;
}
Crypto_CMACVrfyConfigType;

/** \brief The internal state type of the CMAC verification. */
typedef uint8 Crypto_CMACVrfyStateType;

/** \struct Crypto_CMACVrfyContextType
 *  \brief Structure which contains the context of the CMAC verification.
 *
 *
 *  \var Crypto_CMACVrfyContextType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_CMACVrfyContextType::ResultPtr
 *  \brief The pointer where the verification result should be stored.
 *
 *  \var Crypto_CMACVrfyContextType::Result
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_CMACVrfyContextType::State
 *  \brief The current state of the CMAC verification.
 *
 *  \var Crypto_CMACVrfyContextType::Key
 *  \brief Tthe secret key which is used for creating the CMAC.
 *
 *  \var Crypto_CMACVrfyContextType::CmacPtr
 *  \brief A pointer to the start of a buffer where the CMAC to verify is stored.
 *
 *  \var Crypto_CMACVrfyContextType::DataPtr
 *  \brief A pointer to the start of an array where the data is stored over which
 *         the CMAC has to be computed.
 *
 *  \var Crypto_CMACVrfyContextType::DataLength
 *  \brief The length of the data over which the CMAC has to be computed.
 *
 *  \var Crypto_CMACVrfyContextType::BytesStoredInBlock
 *  \brief How many bytes of Crypto_CMACVrfyContextType::Block are filled at the moment.
 *
 *  \var Crypto_CMACVrfyContextType::CmacLength
 *  \brief The length of the CMAC to verify in bytes.
 *
 *  \var Crypto_CMACVrfyContextType::K1
 *  \brief The CMAC subkey K1.
 *
 *  \var Crypto_CMACVrfyContextType::K2
 *  \brief The CMAC subkey K2.
 *
 *  \var Crypto_CMACVrfyContextType::Block
 *  \brief An array which contains the current block of data to encrypt.
 *
 *  \var Crypto_CMACVrfyContextType::LastEncryptedBlock
 *  \brief The last encrypted block of data.
 *
 *  \var Crypto_CMACVrfyContextType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_CMACVrfyContextType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_CMACVrfyContextType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_CMACVrfyContextType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_CMACVrfyContextType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_CMACVrfyContextType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_CMACVrfyContextType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
      P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)      Job,
      uint8                                                             Error
  );
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr;
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA)          Result;
  Crypto_CMACVrfyStateType                                    State;
  VAR(Crypto_SymKeyType, CRYPTO_APPL_DATA)          Key;
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 CmacPtr;
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 DataPtr;
  uint32                                                                DataLength;
  uint32                                                                BytesStoredInBlock;
  uint32                                                                CmacLength;
  uint8                                                                 K1[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  uint8                                                                 K2[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  uint8                                                                 Block[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  uint8                                                                 LastEncryptedBlock[CRYPTO_CMAC_BLOCK_LEN_BYTES];
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)                 IsBusy;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)            Job;
  uint32                                                                ObjId;
  Crypto_OperationModeType                                              CurrentMode;
  boolean                                                               CancelFlag;
  boolean                                                               CallbackFlag;
  Std_ReturnType                                                        CallbackResult;
}
Crypto_CMACVrfyContextType;

#endif /* #if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) */

/*--HMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)

/** \struct Crypto_HMACGenConfigType
 *  \brief The configuration of the HMAC generation.
 *
 *  \var Crypto_HMACGenConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_HMACGenConfigType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_HMACGenConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 */
typedef struct
{
  uint32                                                           ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)       Job;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)     Job,
    uint8                                                            Error
  );
}
Crypto_HMACGenConfigType;

/** \brief The internal state type of the HMAC generation. */
typedef uint8 Crypto_HMACGenStateType;

/** \struct Crypto_HMACGenCtxType
 *  \brief Structure which contains the context of the HMAC generation
 *
 *  \var Crypto_HMACGenCtxType::DataLength
 *  \brief The length of the data to be signed.
 *
 *  \var Crypto_HMACGenCtxType::ProcessedKeyLength
 *  \brief Length of ProcessedKey.
 *
 *  \var Crypto_HMACGenCtxType::HashResultLength
 *  \brief Length of HashResult.
 *
 *  \var Crypto_HMACGenCtxType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_HMACGenCtxType::Key
 *  \brief Holds the user-provided key.
 *
 *  \var Crypto_HMACGenCtxType::ResultLengthPtr
 *  \brief A pointer to a variable which contains the maximal allowed
 *         space for the MAC and where the length of the created MAC
 *         should be stored.
 *
 *  \var Crypto_HMACGenCtxType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_HMACGenCtxType::ResultVal
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_HMACGenCtxType::Result
 *  \brief A pointer to the start of a buffer where the created HMAC bytes should be stored.
 *
 *  \var Crypto_HMACGenCtxType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_HMACGenCtxType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_HMACGenCtxType::Data
 *  \brief A pointer to the start of an array where the data to be signed is stored.
 *
 *  \var Crypto_HMACGenCtxType::State
 *  \brief The current state the HMAC generation is in.
 *
 *  \var Crypto_HMACGenCtxType::HashResult
 *  \brief Array, where the hashed data is stored after hashing the inner padded key and
 *         the given message.
 *
 *  \var Crypto_HMACGenCtxType::ProcessedKey
 *  \brief Holds the (hashed) key.
 *
 *  \var Crypto_HMACGenCtxType::TruncationIsAllowed
 *  \brief Is truncation of the result allowed or should an error be
 *         returned when the Result buffer is too small.
 *
 *  \var Crypto_HMACGenCtxType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_HMACGenCtxType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_HMACGenCtxType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_HMACGenCtxType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  uint32                                                       DataLength;
  uint32                                                       ProcessedKeyLength;
  uint32                                                       HashResultLength;
  uint32                                                       ObjId;
  Crypto_SymKeyType                                  Key;
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)         ResultLengthPtr;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)   Job;
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) ResultVal;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)          Result;
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        IsBusy;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
    uint8                                                        Error
  );
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)        Data;
  Crypto_HMACGenStateType                            State;
  uint8                                                        HashResult[CRYPTO_HMAC_HASH_MAX_LEN];
  uint8                                                        ProcessedKey[CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES];
  boolean                                                      TruncationIsAllowed;
  Crypto_OperationModeType                                     CurrentMode;
  uint8                                                        RunningState;
  boolean                                                      CancelFlag;
  boolean                                                      CallbackFlag;
  Std_ReturnType                                               CallbackResult;
}
Crypto_HMACGenCtxType;

#endif /* #if (CRYPTO_HMAC_GEN_ENABLED == STD_ON) */

/*--HMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)

/** \struct Crypto_HMACVrfyConfigType
 *  \brief The configuration of the HMAC verification.
 *
 *  \var Crypto_HMACVrfyConfigType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_HMACVrfyConfigType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_HMACVrfyConfigType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 */
typedef struct
{
  uint32                                                       ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)   Job;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
    uint8                                                        Error
  );
}
Crypto_HMACVrfyConfigType;

/** \brief The internal state type of the HMAC verification. */
typedef uint8 Crypto_HMACVrfyStateType;

/** \struct Crypto_HMACVrfyCtxType
 *  \brief Structure which contains the context of the HMAC generation
 *
 *  \var Crypto_HMACVrfyCtxType::DataLength
 *  \brief The length of the data to be signed.
 *
 *  \var Crypto_HMACVrfyCtxType::ProcessedKeyLength
 *  \brief Length of ProcessedKey.
 *
 *  \var Crypto_HMACVrfyCtxType::HashResultLength
 *  \brief Length of HashResult.
 *
 *  \var Crypto_HMACVrfyCtxType::MacLength
 *  \brief The length of the signature to verify.
 *
 *  \var Crypto_HMACVrfyCtxType::ObjId
 *  \brief The driver object ID.
 *
 *  \var Crypto_HMACVrfyCtxType::Key
 *  \brief Holds the user-provided key.
 *
 *  \var Crypto_HMACVrfyCtxType::ResultPtr
 *  \brief A pointer to a variable where the signature verification result has to be stored.
 *
 *  \var Crypto_HMACVrfyCtxType::Job
 *  \brief Reference to the processed job.
 *
 *  \var Crypto_HMACVrfyCtxType::Result
 *  \brief The pointer to the data where the result code should be stored.
 *
 *  \var Crypto_HMACVrfyCtxType::IsBusy
 *  \brief The pointer to the primitive busy state.
 *
 *  \var Crypto_HMACVrfyCtxType::Crypto_Generic_Callback
 *  \brief The pointer to the callback function for handling the primitive states.
 *
 *  \var Crypto_HMACVrfyCtxType::Data
 *  \brief A pointer to the start of an array where the data to be signed is stored.
 *
 *  \var Crypto_HMACVrfyCtxType::Mac
 *  \brief A pointer to the start of a buffer where the signature to verify is stored.
 *
 *  \var Crypto_HMACVrfyCtxType::State
 *  \brief The current state the HMAC generation is in.
 *
 *  \var Crypto_HMACVrfyCtxType::HashResult
 *  \brief Array, where the hashed data is stored after hashing the inner padded key and
 *         the given message.
 *
 *  \var Crypto_HMACVrfyCtxType::ProcessedKey
 *  \brief Holds the (hashed) key.
 *
 *  \var Crypto_HMACVrfyCtxType::CurrentMode
 *  \brief The current operation mode of the primitive used for asynchronous handling.
 *
 *  \var Crypto_HMACVrfyCtxType::CancelFlag
 *  \brief This flag indicates if the processing shall be canceled.
 *
 *  \var Crypto_HMACVrfyCtxType::CallbackFlag
 *  \brief This flag indicates if a callback shall be called at the end of the MainFunction.
 *
 *  \brief Crypto_HMACVrfyCtxType::CallbackResult
 *  \var The value in this variable will be forwarded to the callback.
 */
typedef struct
{
  uint32                                                                DataLength;
  uint32                                                                ProcessedKeyLength;
  uint32                                                                HashResultLength;
  uint32                                                                MacLength;
  uint32                                                                ObjId;
  Crypto_SymKeyType                                           Key;
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)            Job;
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA)          ResultVal;
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)                 IsBusy;
  P2FUNC(void, CRYPTO_CODE, Crypto_Generic_Callback)
  (
    P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)           Job,
    uint8                                                                  Error
  );
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 Data;
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 Mac;
  Crypto_HMACVrfyStateType                                    State;
  uint8                                                                 HashResult[CRYPTO_HMAC_HASH_MAX_LEN];
  uint8                                                                 ProcessedKey[CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES];
  Crypto_OperationModeType                                              CurrentMode;
  boolean                                                               CancelFlag;
  boolean                                                               CallbackFlag;
  Std_ReturnType                                                        CallbackResult;
}
Crypto_HMACVrfyCtxType;

#endif /* #if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON) */

/*==[Declaration of functions with internal linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--CMAC-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )
/** \brief Helper function to encrypt the middle blocks
 *
 *  This function is a helper function for mac generation when more than 2 blocks are
 *  present for mac generation.
 *
 *  \param[in]  NrBlocks              Number of middle blocks
 *  \param[in]  Job                   Pointer to the job structure.
 *  \param[in] ExpandedKeyAvailable   Boolean to know whether to use fast AES or not
 *  \param[in] Key                    Key to be used.
 *
 *  \returns call result
 *  \retval E_OK       Blocks successfully used to mac generation
 *  \retval E_NOT_OK   operation failed.
 *  \Reentrancy{Non-Reentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CipherMiddleBlocks
(
  uint32                                                           NrBlocks,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)   Job,
  VAR(boolean, CRYPTO_APPL_DATA)                         ExpandedKeyAvailable,
  VAR(Crypto_SymKeyType, CRYPTO_APPL_DATA)     Key
);
/** \brief Function to shift the CMAC block one bit to the left
 *
 *  This function shifts the whole cmac block array one bit to the left.
 *
 *  \param[in,out]  Block       Pointer to the array which shall be shifted.
 *
 *  \Reentrancy{Reentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACShiftBlockOneBitLeft
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Block
);

/** \brief Calculate CMAC subkey K1 and K2, respectively
 *
 *  \param[in,out] Kx          A pointer to the K to be calculated
 *  \param[in]     Length      Length of K
 *
 *  \Reentrancy{Reentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACCalcKx
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Kx,
  uint32                                              Length
);

#endif /* #if ((CRYPTO_CMAC_GEN_ENABLED == STD_ON) ||
               (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)) */

/*--CMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)
/**  \brief  Crypto CMAC Generate Reset
 *
 *           This Function resets the Context of CMAC Generate.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_Reset
(
  void
);

/** \brief AL Callback function for CMAC generation
 *
 *  This is the abstraction layer callback function for the CMAC generation.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                      Error
);

/** \brief Start function of CMAC generation
 *
 *  This function requests the start of the CMAC generation for the given configuration
 *  and key. The start is performed in Crypto_CMACGenMainFunction().
 *
 *  \param[in]  CfgPtr A pointer to the configuration for which the start of the CMAC
 *                     generation is requested.
 *
 *  \param[in]  KeyPtr A pointer to the key which will be used in the CMAC
 *                     generation.
 *
 *  \returns Generation operation state
 *  \retval  E_OK           If the start was successfully requested.
 *  \retval  CRYPTO_E_BUSY  If a service of the CMAC generation is already running.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
);

/** \brief Update function of CMAC generation.
 *
 *  This function requests the update of the CMAC generation for the given data.
 *  The update is performed in Crypto_CMACGenMainFunction().
 *
 *  \param[in]  dataPtr     A pointer to the start of an array which contains a part of the
 *                          data for which the CMAC will be generated.
 *
 *  \param[in]  dataLength  The amount of data in bytes.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *  \retval E_NOT_OK        If no CMAC generation has been started via
 *                          Crypto_CMACGenStart() yet or if the finishing of the CMAC
 *                          computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
);

/** \brief Finish function of CMAC generation.
 *
 *  This function requests the finishing of the CMAC
 *  generation and the storing of the CMAC in the given result buffer. The
 *  finishing is performed in Crypto_CMACGenMainFunction().
 *
 *  \param[out]  resultPtr A pointer to the start of a buffer where the generated
 *                         CMAC will be stored.
 *
 *  \param[in,out]  resultLengthPtr A pointer to a variable which contains the maximal allowed
 *                                  length for the CMAC in bits and where the actual length of the
 *                                  CMAC will be stored.
 *
 *  \param[in]  TruncationIsAllowed Is truncation of the result allowed or must an error be
 *                                  returned when the result buffer is too small?
 *
 *  \return Error code
 *
 *  \retval E_OK           If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY  If the main function is processing a requested service at the
 *                         moment.
 *  \retval E_NOT_OK       If no CMAC generation has been started via
 *                         Crypto_CMACGenStart() yet or if the finishing of the CMAC
 *                         computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenFinish
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)  ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ResultLengthPtr,
  boolean                                              TruncationIsAllowed
);

/** \brief CMAC generation main function
 *
 *  This function performs the actual CMAC generation
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
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenMainFunction
(
  P2VAR(Std_ReturnType,AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);
/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality in a single call, instead of having it in the
 *     Crypto_CMACGenMainFunction.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void , CRYPTO_CODE) Crypto_CMACGenCallbackCancel
(
  void
);

/** \brief CMAC generation helper callback function
 *
 *  This is the CMAC generation callback function which is called from the
 *  symmetrical block encryption, when the primitive is called asynchronously.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the symmetrical block encryption step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
);

/** \brief State function: Request starting of symmetrical block encryption during CMAC start
 *
 *  \returns Generation  operation state
 *  \retval  E_OK           If the start was successfully requested.
 *  \retval CRYPTO_E_BUSY   If another job is currently being processed.
 *  \retval E_NOT_OK        Error occurred.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenStateStartReqSBSt
(
  void
);

/** \brief State function: Request update of symmetrical block encryption during CMAC start
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateStartReqSBUpd
(
  void
);

/** \brief State function: Create K1 and K2 during CMAC start
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateStartK1AndK2
(
  void
);

/** \brief State function: Copy data from input during CMAC update
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateUpdCpFromInput
(
  void
);

/** \brief State function: Request the encryption of a data block
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateUpdReqSbUpd
(
  void
);

/** \brief State function: Pad the last block of data
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinPadLastBlock
(
  void
);

/** \brief State function: Request the encryption of the last block
 *
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinReqSbUpd
(
  void
);

/** \brief State function: Copy the result to the result buffer
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinCpToResult
(
  void
);

/** \brief State function: Try finishing the symmetrical block encryption
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinReqSbFin
(
  void
);

#endif /* #if (CRYPTO_CMAC_GEN_ENABLED == STD_ON) */

/*--CMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)
/** \brief  Compare the computed CMAC with the provided CMAC for SyncSingleCall processing.
 *
 *  \param[in] Job            Reference to the currently processed job.
 *
 *  \returns Verification  state
 *
 *  \retval CRYPTO_E_VER_NOT_OK MAC's not the same
 *  \retval CRYPTO_E_VER_OK     MAC'S  the same
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(Crypto_VerifyResultType, CRYPTO_CODE) Crypto_CompareMac
(
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)     Job
);
/**  \brief  Crypto CMAC Verify Reset
 *
 *           This Function resets the Context of CMAC Verify.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_Reset
(
  void
);

/** \brief AL Callback function for CMAC verification
 *
 *  This is the abstraction layer callback function for the CMAC verification.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/** \brief Start function of CMAC verification
 *
 *  This function requests the start of the CMAC verification for the given configuration
 *  and key. The start is performed in Crypto_CMACVrfyMainFunction().
 *
 *  \param[in]  CfgPtr A pointer to the configuration for which the start of the CMAC
 *                     verification is requested.
 *
 *  \param[in]  KeyPtr A pointer to the key which will be used in the CMAC
 *                     verification.
 *
 *  \returns Verification operation state
 *  \retval  E_OK           If the start was successfully requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
);

/** \brief Update function of CMAC verification.
 *
 *  This function requests the update of the CMAC verification for the given data.
 *  The update is performed in Crypto_CMACVrfyMainFunction().
 *
 *  \param[in]  DataPtr A pointer to the start of an array which contains a part of the
 *                      data for which the CMAC will be verified.
 *
 *  \param[in]  DataLength The amount of data in bytes.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *  \retval E_NOT_OK        If no CMAC verification has been started via
 *                          Crypto_CMACVrfyStart() yet or if the finishing of the CMAC
 *                          computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
);

/** \brief Finish function of CMAC verification.
 *
 *  This function requests the finishing of the CMAC
 *  verification. The finishing is performed in Crypto_CMACVrfyMainFunction().
 *
 *  \param[in]   AuthenticationPtr     A pointer to the start of a buffer where the CMAC to verify
 *                                     is stored.
 *
 *  \param[in]   AuthenticationLength  The length of the CMAC to verify in bits.
 *
 *  \param[out]  ResultPtr             A pointer to a variable where the result of the CMAC
 *                                     verification will be stored.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the moment.
 *  \retval E_NOT_OK        If no CMAC verification has been started via
 *                          Crypto_CMACVrfyStart() yet or if the finishing of the CMAC
 *                          computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyFinish
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 AuthenticationPtr,
  uint32                                                                AuthenticationLength,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
);

/** \brief CMAC verification main function
 *
 *  This function performs the actual CMAC verification
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
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);
/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality is a single call, instead of having it in the
 *     Crypto_CMACVrfyMainFunction.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyCallbackCancel
(
  void
);
/** \brief CMAC verification helper callback function
 *
 *  This is the CMAC verification callback function which is called from the
 *  symmetrical block encryption, when the primitive is called asynchronously.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the symmetrical block encryption step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
);

/** \brief State function: Request starting of symmetrical block encryption during CMAC start
 *
 *  \returns Std_ReturnType
 *
 *  \retval E_OK           If the start was successfully requested.
 *  \retval CRYPTO_E_BUSY   If another job is currently being processed.
 *  \retval E_NOT_OK        Error occurred.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyStateStartReqSBSt
(
  void
);

/** \brief State function: Request update of symmetrical block encryption during CMAC start
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateStartReqSBUpd
(
  void
);

/** \brief State function:  Create K1 and K2 during CMAC start
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateStartK1AndK2
(
  void
);

/** \brief State function: Copy data from input during CMAC update
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateUpdCpFromInput
(
  void
);

/** \brief State function: Request the encryption of a data block
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateUpdReqSbUpd
(
  void
);

/** \brief State function: Pad the last block of data
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinPadLastBlock
(
  void
);

/** \brief State function: Request the encryption of the last data block
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinReqSbUpd
(
  void
);

/** \brief State function: Compare the computed CMAC with the provided CMAC
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinCompare
(
  void
);

/** \brief State function: Complete the encryption of a data block
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinReqSbFin
(
  void
);

#endif /* #if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) */

/*--HMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)
/**  \brief  Crypto HMAC Generate Reset
 *
 *           This Function resets the Context of HMAC Generate.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_HMAC_Reset
(
  void
);

/** \brief AL Callback function for HMAC generation
 *
 *  This is the abstraction layer callback function for the HMAC generation.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_Crypto_HMAC_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
);

/** \brief Start function of HMAC generation
 *
 *  This function requests the start of the HMAC generation for the given configuration
 *  and key. The start is performed in Crypto_HMACGenMainFunction().
 *
 *  \param[in]  cfgPtr A pointer to the configuration for which the start of the HMAC
 *                     generation is requested.
 *
 *  \param[in]  keyPtr A pointer to the key which will be used in the HMAC
 *                     generation.
 *
 *  \returns Generation operation state
 *  \retval  E_OK           If the start was successfully requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACGenStart
(
  P2CONST(void,                        AUTOMATIC, CRYPTO_APPL_DATA)   CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA)   KeyPtr
);

/** \brief Update function of HMAC generation.
 *
 *  This function requests the update of the HMAC generation for the given data.
 *  The update is performed in Crypto_HMACGenMainFunction().
 *
 *  \param[in]  dataPtr     A pointer to the start of an array which contains a part of the
 *                          data for which the HMAC will be generated.
 *
 *  \param[in]  dataLength  The amount of data in bytes.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *  \retval E_NOT_OK        If no HMAC generation has been started via
 *                          Crypto_HMACGenStart() yet or if the finishing of the HMAC
 *                          computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACGenUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
);

/** \brief Finish function of HMAC generation.
 *
 *  This function requests the finishing of the HMAC
 *  generation and the storing of the HMAC in the given result buffer. The
 *  finishing is performed in Crypto_HMACGenMainFunction().
 *
 *  \param[out]  resultPtr A pointer to the start of a buffer where the generated
 *                         HMAC will be stored.
 *
 *  \param[in,out]  resultLengthPtr A pointer to a variable which contains the maximal allowed
 *                                  length for the HMAC in bits and where the actual length of the
 *                                  HMAC will be stored.
 *
 *  \param[in]  TruncationIsAllowed Is truncation of the result allowed or must an error be
 *                                  returned when the result buffer is too small?
 *
 *  \return Error code
 *
 *  \retval E_OK           If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY  If the main function is processing a requested service at the
 *                         moment.
 *  \retval E_NOT_OK       If no HMAC generation has been started via
 *                         Crypto_HMACGenStart() yet or if the finishing of the HMAC
 *                         computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACGenFinish
(
   P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)  ResultPtr,
   P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ResultLengthPtr,
   boolean                                              TruncationIsAllowed
);

/** \brief HMAC generation main function
 *
 *  This function performs the actual HMAC generation
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
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);

/** \brief HMAC generation helper callback function
 *
 *  This is the HMAC generation callback function which is called from the
 *  hashing algorithm, when the primitive is called asynchronously.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the hashing step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                             Result
);

/** \brief State function: Copy the user-provided key in the "ProcessedKey" internal array
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStatePrepareKey
(
  void
);

/** \brief State function: Request starting of the underlying hashing algorithm
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateInit1
(
  void
);

/** \brief State function: Request update of the underlying hashing algorithm.
 *         This state function is used only if the key length exceeds the
 *         hashing algorithm block length
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateHashKeyUpdate
(
  void
);

/** \brief State function: Request finishing of the underlying hashing algorithm.
 *         This state function is used only if the key length exceeds the
 *         hashing algorithm block length
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateHashKeyFinish
(
  void
);

/** \brief State function: Request starting of the underlying hashing algorithm.
 *         This state function is used only if the key length exceeds the
 *         hashing algorithm block length
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateHashKeyInit
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the key XORed with the inner pad
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateInit2
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the user-provided message
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateUpdate
(
  void
);

/** \brief State function: Request finishing of the underlying hashing algorithm.
 *         This state function finishes the inner hash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish1
(
  void
);

/** \brief State function: Request starting of the underlying hashing algorithm.
 *         This state function initializes the hashing algorithm to compute the outer hash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish2
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the key XORed with the outer pad
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish3
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the output of the inner hash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish4
(
  void
);

/** \brief State function: Request finishing of the underlying hashing algorithm.
 *         This state function finishes the outer hash, which is the value of the HMAC
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish5
(
  void
);

/** \brief State function: function for the state Default state and to perform the same tasks
 *                         for many different states to reduce complexity.
 *
 *         This function is used to perform the common processing for many states,
 *         which have the same processing.
 *
 * \returns void
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenDefaultWaitState
(
  void
);

/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality is a single call, instead of having it in the
 *     Crypto_HMACGenMainFunction.
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenCallbackCancel
(
  void
);
#endif /* #if (CRYPTO_HMAC_GEN_ENABLED == STD_ON) */

/*--HMAC-VRFY-------------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)
/**  \brief  Crypto HMAC Verify Reset
 *
 *           This Function resets the Context of HMAC Verify.
 *
 * \returns  void
 *
 * \Reentrancy{Non-reentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_HMAC_Reset
(
  void
);

/** \brief AL Callback function for HMAC verification
 *
 *  This is the abstraction layer callback function for the HMAC verification.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Error          The error value of the Crypto step (update/finish)
 *                                which shall be passed to CryIf.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_Crypto_HMAC_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                      Error
);

/** \brief Start function of HMAC verification
 *
 *  This function requests the start of the HMAC verification for the given configuration
 *  and key. The start is performed in Crypto_HMACVrfyMainFunction().
 *
 *  \param[in]  cfgPtr A pointer to the configuration for which the start of the HMAC
 *                     verification is requested.
 *
 *  \param[in]  keyPtr A pointer to the key which will be used in the HMAC
 *                     verification.
 *
 *  \returns Verification operation state
 *  \retval  E_OK           If the start was successfully requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyStart
(
  P2CONST(void,                        AUTOMATIC, CRYPTO_APPL_DATA)        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA)        KeyPtr
);

/** \brief Update function of HMAC verification.
 *
 *  This function requests the update of the HMAC verification for the given data.
 *  The update is performed in Crypto_HMACVrfyMainFunction().
 *
 *  \param[in]  dataPtr A pointer to the start of an array which contains a part of the
 *                      data for which the HMAC will be verified.
 *
 *  \param[in]  dataLength The amount of data in bytes.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the update was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the
 *                          moment.
 *  \retval E_NOT_OK        If no HMAC verification has been started via
 *                          Crypto_HMACVrfyStart() yet or if the finishing of the HMAC
 *                          computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
);

/** \brief Finish function of HMAC verification.
 *
 *  This function requests the finishing of the HMAC
 *  verification. The finishing is performed in Crypto_HMACVrfyMainFunction().
 *
 *  \param[in]   authenticationPtr     A pointer to the start of a buffer where the HMAC to verify
 *                                     is stored.
 *
 *  \param[in]   authenticationLength  The length of the HMAC to verify in bits.
 *
 *  \param[out]  resultPtr             A pointer to a variable where the result of the HMAC
 *                                     verification will be stored.
 *
 *  \return Error code
 *
 *  \retval E_OK            If the finishing was successfully requested.
 *  \retval CRYPTO_E_BUSY   If the main function is processing a requested service at the moment.
 *  \retval E_NOT_OK        If no HMAC verification has been started via
 *                          Crypto_HMACVrfyStart() yet or if the finishing of the HMAC
 *                          computation is already requested.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous/Asynchronous}
 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyFinish
(
  P2CONST(uint8, AUTOMATIC,     CRYPTO_APPL_DATA)               AuthenticationPtr,
          uint32                                                          AuthenticationLength,
  P2VAR  (Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
);

/** \brief HMAC verification main function
 *
 *  This function performs the actual HMAC verification
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
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);

/** \brief HMAC verification helper callback function
 *
 *  This is the HMAC verification callback function which is called from the
 *  hashing algorithm, when the primitive is called asynchronously.
 *
 *  \param[in,out] Job            Reference to the currently processed job.
 *  \param[in]     Result         The error value of the symmetrical block encryption step.
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
);

/** \brief State function: Copy the user-provided key in the "ProcessedKey" internal array
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStatePrepareKey
(
  void
);

/** \brief State function: Request starting of the underlying hashing algorithm
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateInit1
(
  void
);

/** \brief State function: Request update of the underlying hashing algorithm.
 *         This state function is used only if the key length exceeds the
 *         hashing algorithm block length
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateHashKeyUpdate
(
  void
);

/** \brief State function: Request finishing of the underlying hashing algorithm.
 *         This state function is used only if the key length exceeds the
 *         hashing algorithm block length
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateHashKeyFinish
(
  void
);

/** \brief State function: Request starting of the underlying hashing algorithm.
 *         This state function is used only if the key length exceeds the
 *         hashing algorithm block length
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateHashKeyInit
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the key XORed with the inner pad
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateInit2
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the user-provided message
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateUpdate
(
  void
);

/** \brief State function: Request finishing of the underlying hashing algorithm.
 *         This state function finishes the inner hash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish1
(
  void
);

/** \brief State function: Request starting of the underlying hashing algorithm.
 *         This state function initializes the hashing algorithm to compute the outer hash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish2
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the key XORed with the outer pad
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish3
(
  void
);

/** \brief State function: Request updating of the underlying hashing algorithm.
 *         This state function hashes the output of the inner hash
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish4
(
  void
);

/** \brief State function: Request finishing of the underlying hashing algorithm.
 *         This state function finishes the outer hash, which is the value of the HMAC
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish5
(
  void
);
/** \brief State function: function for the state Default state and to perform the same tasks
 *                         for many different stats to reduce complexity.
 *
 *         This function is used to perform the common processing for many state,
 *         which have the same processing.
 *
 * \returns void
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfy_Default_Wait_State
(
  void
);

/** \brief Compares the calculated and the provided MAC.
 *
 * \return MAC comparison result
 *
 * \retval E_OK      The value of the calculated MAC matches the provided MAC.
 * \retval E_NOT_OK  The value of the calculated MAC does not match the provided MAC.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyCompareHMAC
(
  void
);
/** \brief Function to perform the callback and job cancellation.
 *
 *     This function is implemented in order to perform the job cancellation
 *     and callback functionality is a single call, instead of having it in the
 *     Crypto_HMACVrfyMainFunction.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 */
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyCallbackCancel
(
  void
);

#endif /* #if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Constants with internal linkage]=============================================================*/

/*--CMAC-COMMON-----------------------------------------------------------------------------------*/

#define CRYPTO_START_SEC_CONST_8
#include <Crypto_MemMap.h>

/*--CMAC-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )

/* !LINKSTO EB_Crypto_CryptAlgos_0505,1 */
/** \brief The CMAC subkey generation constant
 *
 *  This is the CMAC subkey generation constant as specified in RFC4493 (const_Rb),
 *  which is used for the subkey generation in CMAC generation and verification.
 */
static CONST(uint8, CRYPTO_CONST)
  Crypto_CMACSubKeyGenerationConstant[CRYPTO_CMAC_BLOCK_LEN_BYTES] =
{
  0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U,
  0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x87U
};

/** \brief The CMAC zero block constant
 *
 *  This is the CMAC zero block constant as specified in RFC4493 (const_Zero),
 *  which is used as input for the symmetrical block encryption and for the subkey
 *  generation in CMAC generation and verification.
 */
/* Deviation MISRAC2012-1 */
static CONST(uint8, CRYPTO_CONST)
  Crypto_CMACZeroBlock[CRYPTO_CMAC_BLOCK_LEN_BYTES] =
{
  0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U,
  0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U
};

#endif /* #if ((CRYPTO_CMAC_GEN_ENABLED == STD_ON) ||
               (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)) */

#define CRYPTO_STOP_SEC_CONST_8
#include <Crypto_MemMap.h>

/*==[Variables with internal linkage]=============================================================*/

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )

#define CRYPTO_START_SEC_VAR_CLEARED_32
#include <Crypto_MemMap.h>

/** \brief Expanded key array
 *
 *  Static array to hold the expanded key.
 **/
static VAR(uint32, CRYPTO_VAR) Crypto_CmacGenExpKey32[60U];

#define CRYPTO_STOP_SEC_VAR_CLEARED_32
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

/** \brief Expanded key array
 *
 *  Static array to hold the expanded key.
 **/
static VAR(uint8, CRYPTO_VAR) Crypto_CmacGenExpKey[240U];

/** \brief Variable K1
 *
 * Variable K1 used in CMAC computation according to specification.
 */
static VAR(uint8, CRYPTO_VAR) Crypto_K1[CRYPTO_CMAC_BLOCK_LEN_BYTES];

/** \brief Variable K2
 *
 * Variable K2 used in CMAC computation according to specification.
 */
static VAR(uint8, CRYPTO_VAR) Crypto_K2[CRYPTO_CMAC_BLOCK_LEN_BYTES];

/** \brief The current block
 *
 * Holds the current block.
 */
static VAR(uint8, CRYPTO_VAR) Crypto_Block[CRYPTO_CMAC_BLOCK_LEN_BYTES];

/** \brief The last encrypted block
 *
 *  Last encrypted block. Initial zero as constant C0
 */
static VAR(uint8, CRYPTO_VAR)
  Crypto_LastEncryptedBlock[CRYPTO_CMAC_BLOCK_LEN_BYTES];

/** \brief The final block
 *
 * Holds the final block.
 */
static VAR(uint8, CRYPTO_VAR) Crypto_FinalBlock[CRYPTO_CMAC_BLOCK_LEN_BYTES];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

#endif

#define CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)

/** \brief Key buffer for CMAC generation */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_CmacGenKey = { { 0x00U }, 16U };

#endif

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)

/** \brief Key buffer for CMAC generation */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_CmacVrfyKey = { { 0x00U }, 16U };

#endif

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)

/** \brief Key buffer for HMAC generation */
/* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeSmallerThanBlockSize,1 */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_HmacGenKey = { { 0x00U }, 0U };

/** \brief The PrimitiveInfo for the job used in the HMAC generation helper. */
static VAR(Crypto_PrimitiveInfoType, CRYPTO_VAR) Crypto_HelperHmacPrimitiveInfo =
{
  CRYPTO_HMAC_HASH_MAX_LEN, /* resultLength */
  CRYPTO_MACGENERATE,                 /* service */
  {
    CRYPTO_ALGOFAM_SHA2_256,          /* family */
    CRYPTO_ALGOFAM_NOT_SET,           /* secondaryFamily */
    64U,                              /* keyLength */
    CRYPTO_ALGOMODE_HMAC              /* mode */
  }                                   /* algorithm */
};

/** \brief The JobPrimitiveInfo for the job used in the HMAC generation helper. */
static VAR(Crypto_JobPrimitiveInfoType, CRYPTO_VAR) Crypto_HelperHmacJobPrimitiveInfo =
{
  0U,                                        /* callbackId */
  &Crypto_HelperHmacPrimitiveInfo, /* primitiveInfo */
  0U,                                        /* secureCounterId */
  0U,                                        /* cryIfKeyId */
  CRYPTO_PROCESSING_SYNC,                    /* processingType */
  FALSE                                      /* callbackUpdateNotification */
};

/** \brief The JobInfo for the job used in the HMAC generation helper. */
static VAR(Crypto_JobInfoType, CRYPTO_VAR) Crypto_HelperHmacJobInfo =
{
  0U, /* jobId */
  0U  /* jobPriority*/
};

#endif

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)

/** \brief Key buffer for HMAC verification */
/* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeSmallerThanBlockSize,1 */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_HmacVrfyKey = { { 0x00U }, 0U };

#endif

#define CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )

/** \brief Key used for precalculation */
static VAR(Crypto_SymKeyType, CRYPTO_VAR) Crypto_PreCalcKey;

#endif

/*--CMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)

/** \brief CMAC generation context
 *
 *  The context variable which is used to store the internal state of the CMAC generation.
 */
static VAR(Crypto_CMACGenContextType, CRYPTO_VAR) Crypto_CMACGenContext;

/** \brief CMAC generation configuration
 *
 *  The context variable which is used to store the internal configuration of the CMAC generation.
 */
static VAR(Crypto_CMACGenConfigType, CRYPTO_VAR) Crypto_CMACGenerateConfig;

#endif /* #if (CRYPTO_CMAC_GEN_ENABLED == STD_ON) */

/*--CMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)

/** \brief CMAC verification context
 *
 *  The context variable which is used to store the internal state of the CMAC verification.
 */
static VAR(Crypto_CMACVrfyContextType, CRYPTO_VAR) Crypto_CMACVrfyContext;

/** \brief CMAC verification configuration
 *
 *  The context variable which is used to store the internal configuration of the CMAC verification.
 */
static VAR(Crypto_CMACVrfyConfigType, CRYPTO_VAR) Crypto_CMACVerifyConfig;

#endif /* #if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) */

/*--HMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)

/** \brief HMAC generation context
 *
 *  The context variable which is used to store the internal state of the HMAC generation.
 */
static VAR(Crypto_HMACGenCtxType, CRYPTO_VAR) Crypto_HMACGenCtx;

/** \brief HMAC generation configuration
 *
 *  The context variable which is used to store the internal configuration of the HMAC generation.
 */
static VAR(Crypto_HMACGenConfigType, CRYPTO_VAR) Crypto_HMACGenerateConfig;

#endif /* #if (CRYPTO_HMAC_GEN_ENABLED == STD_ON) */

/*--HMAC-VRFY-------------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)

/** \brief HMAC verification context
 *
 *  The context variable which is used to store the internal state of the HMAC verification.
 */
static VAR(Crypto_HMACVrfyCtxType, CRYPTO_VAR) Crypto_HMACVrfyCtx;

/** \brief HMAC verification configuration
 *
 *  The context variable which is used to store the internal configuration of the HMAC verification.
 */
static VAR(Crypto_HMACVrfyConfigType, CRYPTO_VAR) Crypto_HMACVerifyConfig;

#endif /* #if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Constants with external linkage]=============================================================*/

/*==[Variables with external linkage]=============================================================*/

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--CMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1135, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  Crypto_SymKeyType Key =
  {
    { 0x00U },
    16U
  };
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_MACGENERATE_AES_CMAC_Reset();
  Key.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  Crypto_CMACGenerateConfig.Crypto_Generic_Callback =
  &Crypto_AL_MACGENERATE_AES_CMAC_CallBack;
  Crypto_CMACGenerateConfig.ObjId = ObjectId;
  Crypto_CMACGenerateConfig.Job = Job;
  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Key.data,
                                              &(Key.length)
                                            );
  if (E_OK == RetVal)
  {
    RetVal = Crypto_CMACGenStart(&Crypto_CMACGenerateConfig, &Key);
  }
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1156, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_CMACGenUpdate(
                                           Job->jobPrimitiveInputOutput.inputPtr,
                                           Job->jobPrimitiveInputOutput.inputLength
                                         );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1177, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_CMACGenFinish(
                                           Job->jobPrimitiveInputOutput.outputPtr,
                                           Job->jobPrimitiveInputOutput.outputLengthPtr,
                                           TRUE
                                         );

  return RetVal;
}


/* !LINKSTO EB_Crypto_CryptAlgos_1198, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 NrBlocks;
  uint32 FinalBlockSize;
  uint8 i;
  /* initialize with the length of the expanded key toi check wjther it is available */
  uint32 SubKeyLength = CRYPTO_AES_KEYEXPDLENMAX_FAST * 4U;
  uint32 OutputLengthPtr = CRYPTO_CMAC_BLOCK_LEN_BYTES;
  boolean ExpandedKeyAvailable = FALSE;

  for (i = 0U; CRYPTO_CMAC_BLOCK_LEN_BYTES > i; i++)
  {
    Crypto_LastEncryptedBlock[i] = 0U;
  }

  /*Get the Expanded key to pass on to the precalc function*/
  RetVal = Crypto_AL_KeyElementGet
            (
              Job->cryptoKeyId,
              CRYPTO_KE_AES_EXPANDEDKEY,
              Crypto_CmacGenExpKey,
              &SubKeyLength
            );

  if ((CRYPTO_E_KEY_NOT_AVAILABLE == RetVal) || (240U != SubKeyLength))
  {
    ExpandedKeyAvailable = FALSE;
  }
  else
  {
    TS_MemCpy(Crypto_CmacGenExpKey32, Crypto_CmacGenExpKey, 240U);
    ExpandedKeyAvailable = TRUE;
  }

  SubKeyLength = CRYPTO_CMAC_BLOCK_LEN_BYTES;

  TS_PARAM_UNUSED(ObjectId);

  Crypto_CmacGenKey.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  RetVal = Crypto_AL_KeyElementGet
      (
          Job->cryptoKeyId,
          CRYPTO_KE_MAC_KEY,
          Crypto_CmacGenKey.data,
          &(Crypto_CmacGenKey.length)
      );

  if (E_OK == RetVal) /* Key available? */
  {

    /* check if precalculated key K1 exists */
    RetVal = Crypto_AL_KeyElementGet
          (
            Job->cryptoKeyId,
            CRYPTO_KE_MAC_AESCMAC_SUBKEY1,
            Crypto_K1,
            &SubKeyLength
          );
    if ((E_OK != RetVal) || (0U == SubKeyLength)) /* create K1 */
    {

      /* Encryption of the zero block. */
      if (TRUE == ExpandedKeyAvailable)
      {
        RetVal = Crypto_AL_AES_EncryptPreCalc
            (
              Crypto_CMACZeroBlock,
              Crypto_K1,
              &OutputLengthPtr,
              Crypto_CmacGenKey.length,
              Crypto_CmacGenExpKey32
            );
      }
      else
      {
        RetVal = Crypto_AES_Helper_Encrypt_SyncSingleCall
            (
              Crypto_CMACZeroBlock,
              sizeof(Crypto_CMACZeroBlock),
              Crypto_K1,
              &OutputLengthPtr,
              &Crypto_CmacGenKey
            );
      }
      if (E_OK == RetVal)
      {
        /* Create K1 and K2. */
        /* Create constant K1 from the encrypted zero block. */
        Crypto_CMACCalcKx(Crypto_K1, sizeof(Crypto_K1));
      }
    }

    if (E_OK == RetVal) /* K1 is available */
    {
      /* check if precalculated key K2 exists */
      RetVal = Crypto_AL_KeyElementGet
            (
              Job->cryptoKeyId,
              CRYPTO_KE_MAC_AESCMAC_SUBKEY2,
              Crypto_K2,
              &SubKeyLength
            );

      if ((E_OK != RetVal) || (0U == SubKeyLength))
      {

        /* Create constant K2 from K1. */
        TS_MemCpy
        (
            Crypto_K2,
            Crypto_K1,
            sizeof(Crypto_K2)
        );
        Crypto_CMACCalcKx(Crypto_K2, sizeof(Crypto_K2));
      }

      NrBlocks = Job->jobPrimitiveInputOutput.inputLength / CRYPTO_CMAC_BLOCK_LEN_BYTES;
      FinalBlockSize =
        Job->jobPrimitiveInputOutput.inputLength % CRYPTO_CMAC_BLOCK_LEN_BYTES;
      NrBlocks += ((0U != FinalBlockSize) || (0U == NrBlocks)) ? 1U : 0U;

      if ((0U == FinalBlockSize) && (0U < Job->jobPrimitiveInputOutput.inputLength))
      {
        /* copy last block */
        TS_MemCpy
        (
            Crypto_FinalBlock,
            &((P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)) Job->jobPrimitiveInputOutput.inputPtr)[(NrBlocks - 1U) * CRYPTO_CMAC_BLOCK_LEN_BYTES],
            sizeof(Crypto_Block)
        );

        /* The last block is a complete block, so XOR it with K1. */
        Crypto_CommonXOR
        (
            Crypto_FinalBlock,
            Crypto_K1,
            sizeof(Crypto_Block)
        );
      }
      else
      {
        /* The last block is not a complete block. */

        /* copy last block */
        TS_MemCpy
        (
            Crypto_FinalBlock,
            &((P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)) Job->jobPrimitiveInputOutput.inputPtr)[(NrBlocks - 1U) * CRYPTO_CMAC_BLOCK_LEN_BYTES],
            FinalBlockSize
        );

        /* Pad the block */
        Crypto_FinalBlock[FinalBlockSize] =
          (uint8) CRYPTO_CMAC_BYTE_WITH_MSB_SET;
        FinalBlockSize++;
        TS_MemSet(
                   &Crypto_FinalBlock[FinalBlockSize],
                   0U,
                   ((uint32) sizeof(Crypto_FinalBlock) - FinalBlockSize)
                 );

        /* XOR the padded block with K2. */
        Crypto_CommonXOR
        (
            Crypto_FinalBlock,
            Crypto_K2,
            sizeof(Crypto_Block)
        );
      }

      /* cipher middle block(s) */
      RetVal = Crypto_CipherMiddleBlocks(
                                                    NrBlocks,
                                                    Job,
                                                    ExpandedKeyAvailable,
                                                    Crypto_CmacGenKey
                                                  );
      if (E_OK == RetVal)
      {
        /* cipher first/last block */

        /* XOR the block with the last encrypted block. */
        Crypto_CommonXOR
        (
          Crypto_FinalBlock,
          Crypto_LastEncryptedBlock,
          sizeof(Crypto_Block)
        );
        if (TRUE == ExpandedKeyAvailable)
        {
          RetVal = Crypto_AL_AES_EncryptPreCalc
              (
                Crypto_FinalBlock,
                Job->jobPrimitiveInputOutput.outputPtr,
                Job->jobPrimitiveInputOutput.outputLengthPtr,
                Crypto_CmacGenKey.length,
                Crypto_CmacGenExpKey32
              );
        }
        else
        {
          RetVal = Crypto_AES_Helper_Encrypt_SyncSingleCall
            (
              Crypto_FinalBlock,
              sizeof(Crypto_Block),
              Job->jobPrimitiveInputOutput.outputPtr,
              Job->jobPrimitiveInputOutput.outputLengthPtr,
              &Crypto_CmacGenKey
            );
        }
      }
    } /* K1 available */
  } /* MAC Key available */
  return RetVal;
}


/* !LINKSTO EB_Crypto_CryptAlgos_1217, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_CMAC_G_S_INITIALIZED == Crypto_CMACGenContext.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_MACGENERATE_AES_CMAC_Reset();
    /* !LINKSTO EB_Crypto_00063, 1 */
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled imideatly */
    Crypto_CMACGenContext.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1238, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  Crypto_CMACGenMainFunction(Result, Busy);
}

#endif /* #if (CRYPTO_CMAC_GEN_ENABLED == STD_ON) */

/*--CMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1136, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_Start
(
  uint32                                                     ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  Crypto_SymKeyType Key =
  {
    { 0x00U },
    16U
  };
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_MACVERIFY_AES_CMAC_Reset();
  Key.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  Crypto_CMACVerifyConfig.Crypto_Generic_Callback =
  &Crypto_AL_MACVERIFY_AES_CMAC_CallBack;
  Crypto_CMACVerifyConfig.ObjId = ObjectId;
  Crypto_CMACVerifyConfig.Job = Job;
  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Key.data,
                                              &(Key.length)
                                            );
  if (E_OK == RetVal)
  {
    RetVal = Crypto_CMACVrfyStart(&Crypto_CMACVerifyConfig, &Key);
  }
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1157, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_CMACVrfyUpdate(
                                            Job->jobPrimitiveInputOutput.inputPtr,
                                            Job->jobPrimitiveInputOutput.inputLength
                                          );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1178, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_CMACVrfyFinish(
                                            Job->jobPrimitiveInputOutput.secondaryInputPtr,
                                            Job->jobPrimitiveInputOutput.secondaryInputLength,
                                            Job->jobPrimitiveInputOutput.verifyPtr
                                          );

  return RetVal;
}


/* !LINKSTO EB_Crypto_CryptAlgos_1199, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 NrBlocks;
  uint32 FinalBlockSize;
  /* initialize with the length of the expanded key to check wether it is available */
  uint32 SubKeyLength = CRYPTO_AES_KEYEXPDLENMAX_FAST * 4U;
  uint32 OutputLengthPtr = CRYPTO_CMAC_BLOCK_LEN_BYTES;
  boolean ExpandedKeyAvailable = FALSE;

  uint8 i;

  TS_PARAM_UNUSED(ObjectId);

  for (i = 0U; CRYPTO_CMAC_BLOCK_LEN_BYTES > i; i++)
  {
    Crypto_LastEncryptedBlock[i] = 0U;
  }

  /* Get the expanded key to pass on to the precalc function */
  RetVal = Crypto_AL_KeyElementGet
            (
              Job->cryptoKeyId,
              CRYPTO_KE_AES_EXPANDEDKEY,
              Crypto_CmacGenExpKey,
              &SubKeyLength
            );

  if ((CRYPTO_E_KEY_NOT_AVAILABLE == RetVal) || (240U != SubKeyLength))
  {
    ExpandedKeyAvailable = FALSE;
  }
  else
  {
    TS_MemCpy(Crypto_CmacGenExpKey32, Crypto_CmacGenExpKey, 240U);
    ExpandedKeyAvailable = TRUE;
  }
  SubKeyLength = CRYPTO_CMAC_BLOCK_LEN_BYTES;
  Crypto_CmacVrfyKey.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  RetVal = Crypto_AL_KeyElementGet
      (
        Job->cryptoKeyId,
        CRYPTO_KE_MAC_KEY,
        Crypto_CmacVrfyKey.data,
        &(Crypto_CmacVrfyKey.length)
      );
  if (E_OK == RetVal)
  {
    /* check if precalculated key K1 exists */
    RetVal = Crypto_AL_KeyElementGet
          (
            Job->cryptoKeyId,
            CRYPTO_KE_MAC_AESCMAC_SUBKEY1,
            Crypto_K1,
            &SubKeyLength
          );
    if ((E_OK != RetVal) || (0U == SubKeyLength)) /* create K1 */
    {

      /* Encryption of the zero block. */
      if (TRUE == ExpandedKeyAvailable)
      {
        RetVal = Crypto_AL_AES_EncryptPreCalc
            (
              Crypto_CMACZeroBlock,
              Crypto_K1,
              &OutputLengthPtr,
              Crypto_CmacVrfyKey.length,
              Crypto_CmacGenExpKey32
            );
      }
      else
      {
        RetVal = Crypto_AES_Helper_Encrypt_SyncSingleCall
            (
              Crypto_CMACZeroBlock,
              sizeof(Crypto_CMACZeroBlock),
              Crypto_K1,
              &OutputLengthPtr,
              &Crypto_CmacVrfyKey
            );
      }
      if (E_OK == RetVal)
      {
        /* Create K1 and K2. */
        /* Create constant K1 from the encrypted zero block. */
        Crypto_CMACCalcKx(Crypto_K1, sizeof(Crypto_K1));
      }
    }

    if (E_OK == RetVal)
    {
       /* check if precalculated key K2 exists */
      RetVal = Crypto_AL_KeyElementGet
            (
              Job->cryptoKeyId,
              CRYPTO_KE_MAC_AESCMAC_SUBKEY2,
              Crypto_K2,
              &SubKeyLength
            );

      if ((E_OK != RetVal) || (0U == SubKeyLength))
      {

        /* Create constant K2 from K1. */
        TS_MemCpy
        (
          Crypto_K2,
          Crypto_K1,
          sizeof(Crypto_K2)
        );
        Crypto_CMACCalcKx(Crypto_K2, sizeof(Crypto_K2));
      }

      NrBlocks = Job->jobPrimitiveInputOutput.inputLength / CRYPTO_CMAC_BLOCK_LEN_BYTES;
      FinalBlockSize =
        Job->jobPrimitiveInputOutput.inputLength % CRYPTO_CMAC_BLOCK_LEN_BYTES;
      NrBlocks += ((0U != FinalBlockSize) || (0U == NrBlocks)) ? 1U : 0U;

      if ((0U == FinalBlockSize) && (0U < Job->jobPrimitiveInputOutput.inputLength))
      {
        /* copy last block */
        TS_MemCpy
        (
            Crypto_FinalBlock,
            &((P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)) Job->jobPrimitiveInputOutput.inputPtr)[(NrBlocks - 1U) * CRYPTO_CMAC_BLOCK_LEN_BYTES],
            sizeof(Crypto_Block)
        );

        /* The last block is a complete block, so XOR it with K1. */
        Crypto_CommonXOR
        (
          Crypto_FinalBlock,
          Crypto_K1,
          sizeof(Crypto_Block)
        );
      }
      else
      {
        /* The last block is not a complete block. */

        /* copy last block */
        TS_MemCpy
        (
          Crypto_FinalBlock,
          &((P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)) Job->jobPrimitiveInputOutput.inputPtr)[(NrBlocks - 1U) * CRYPTO_CMAC_BLOCK_LEN_BYTES],
          FinalBlockSize
        );

        /* Pad the block */
        Crypto_FinalBlock[FinalBlockSize] =
          (uint8) CRYPTO_CMAC_BYTE_WITH_MSB_SET;
        FinalBlockSize++;
        TS_MemSet(
                   &Crypto_FinalBlock[FinalBlockSize],
                   0U,
                   ((uint32) sizeof(Crypto_FinalBlock) - FinalBlockSize)
                 );

        /* XOR the padded block with K2. */
        Crypto_CommonXOR
        (
          Crypto_FinalBlock,
          Crypto_K2,
          sizeof(Crypto_Block)
        );
      }

      /*Helper function call to reduce the path and V(G)*/
      RetVal = Crypto_CipherMiddleBlocks(
                                                    NrBlocks,
                                                    Job,
                                                    ExpandedKeyAvailable,
                                                    Crypto_CmacVrfyKey
                                                  );
      if (E_OK == RetVal)
      {
        /* cipher first/last block */

        /* XOR the block with the last encrypted block. */
        Crypto_CommonXOR
        (
          Crypto_FinalBlock,
          Crypto_LastEncryptedBlock,
          sizeof(Crypto_Block)
        );
        if (TRUE == ExpandedKeyAvailable)
        {
          RetVal = Crypto_AL_AES_EncryptPreCalc
              (
                Crypto_FinalBlock,
                Crypto_LastEncryptedBlock,
                &OutputLengthPtr,
                Crypto_CmacVrfyKey.length,
                Crypto_CmacGenExpKey32
              );
        }
        else
        {
          RetVal = Crypto_AES_Helper_Encrypt_SyncSingleCall
            (
              Crypto_FinalBlock,
              sizeof(Crypto_Block),
              Crypto_LastEncryptedBlock,
              &OutputLengthPtr,
              &Crypto_CmacVrfyKey
            );
        }
      }

      if (E_OK == RetVal)
      {
        if(Job->jobPrimitiveInputOutput.secondaryInputLength  <= (CRYPTO_MAC_MAX_LENGTH * 8U))
        {
          /* Compare the CMAC given by the user with the CMAC which has just been computed. */
          *Job->jobPrimitiveInputOutput.verifyPtr = Crypto_CompareMac(Job);
        }
        else
        {
          RetVal = E_NOT_OK;
        }
      }
    }
  }
  return RetVal;
}


/* !LINKSTO EB_Crypto_CryptAlgos_1218, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_CMAC_V_S_INITIALIZED == Crypto_CMACVrfyContext.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_MACVERIFY_AES_CMAC_Reset();
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled imideatly */
    Crypto_CMACVrfyContext.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1239, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  Crypto_CMACVrfyMainFunction(Result, Busy);
}

#endif /* #if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) */

#if ((CRYPTO_CMAC_GEN_ENABLED  == STD_ON) || \
     (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)    \
    )

FUNC(void, CRYPTO_CODE) Crypto_AL_AESCMAC_PrecalculateKeys
(
  uint32 CryptoKeyId
)
{
  uint32 OutputLengthPtr = CRYPTO_CMAC_BLOCK_LEN_BYTES;

  /* if we have a MAC key, check whether the key has key elements to store the subkeys K1 and
   * K2 and the expanded AES key
   */
  boolean K1Exists = FALSE;
  boolean KeyExists = FALSE;
  uint32 K1Index;
  uint32 ExpKeyIndex;
  uint32 KeyContentIndex;

  /* check for subkey element K1 */
  K1Exists = Crypto_AL_FindKeyElement
             (
               CryptoKeyId, CRYPTO_KE_MAC_AESCMAC_SUBKEY1, &K1Index
             );
  /* finds the index of key element with key element id 0x01.*/
  KeyExists = Crypto_AL_FindKeyElement
             (
               CryptoKeyId, CRYPTO_KE_MAC_KEY, &KeyContentIndex
             );
  /* Create K1 and K2. */
  if ((TRUE == K1Exists) && (TRUE == KeyExists))
  {
    Crypto_PreCalcKey.length =
      Crypto_AL_Keys_Data[CryptoKeyId].KeyData[KeyContentIndex].RfKeyElemDataSize;
    TS_MemCpy
    (
      Crypto_PreCalcKey.data,
      Crypto_AL_Keys_Data[CryptoKeyId].KeyData[KeyContentIndex].RfKeyElemData,
      Crypto_PreCalcKey.length
    );

    /* initialize with 0U - to be sure the lentgh is 0, if the key generaion fails */
    Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K1Index].RfKeyElemDataSize = 0U;


    /* Encryption of the zero block. */
    if (E_OK == Crypto_AES_Helper_Encrypt_SyncSingleCall
          (
            Crypto_CMACZeroBlock,
            CRYPTO_CMAC_BLOCK_LEN_BYTES,
            Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K1Index].RfKeyElemData,
            &OutputLengthPtr,
            &Crypto_PreCalcKey
          )
       )
    {
      boolean K2Exists = FALSE;
      uint32  K2Index;

      Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K1Index].RfKeyElemDataSize =
        CRYPTO_CMAC_BLOCK_LEN_BYTES;

      /* Create constant K1 from the encrypted zero block. */
      Crypto_CMACCalcKx
      (
        Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K1Index].RfKeyElemData,
        CRYPTO_CMAC_BLOCK_LEN_BYTES
      );

      K2Exists = Crypto_AL_FindKeyElement(
                                                     CryptoKeyId,
                                                     CRYPTO_KE_MAC_AESCMAC_SUBKEY2,
                                                     &K2Index
                                                   );

      if (TRUE == K2Exists)
      {
        /* Create constant K2 from K1. */
        TS_MemCpy
        (
          Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K2Index].RfKeyElemData,
          Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K1Index].RfKeyElemData,
          CRYPTO_CMAC_BLOCK_LEN_BYTES
        );

        Crypto_CMACCalcKx
        (
          Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K2Index].RfKeyElemData,
          CRYPTO_CMAC_BLOCK_LEN_BYTES
        );

        Crypto_AL_Keys_Data[CryptoKeyId].KeyData[K2Index].RfKeyElemDataSize =
          CRYPTO_CMAC_BLOCK_LEN_BYTES;
      } /* K2Exists */
    } /* encryption OK */
  } /* K1Exists */

  if
  (
    (TRUE ==
     Crypto_AL_FindKeyElement
     (
       CryptoKeyId,
       CRYPTO_KE_AES_EXPANDEDKEY,
       &ExpKeyIndex
     )) &&
     (TRUE == KeyExists)
  )
  {
    Crypto_AL_Keys_Data[CryptoKeyId].KeyData[ExpKeyIndex].RfKeyElemDataSize = 240U;

    /* calculate expanded AES key */
    if (CRYPTO_AES_KEY_128 == Crypto_PreCalcKey.length)
    {
      Crypto_AL_AESPreCalculateKeySchedule
      (
        4U,
        10U,
        Crypto_PreCalcKey.data,
        Crypto_AL_Keys_Data[CryptoKeyId].KeyData[ExpKeyIndex].RfKeyElemData
      );
    }
    else if (CRYPTO_AES_KEY_192 == Crypto_PreCalcKey.length)
    {
      Crypto_AL_AESPreCalculateKeySchedule
      (
        6U,
        12U,
        Crypto_PreCalcKey.data,
        Crypto_AL_Keys_Data[CryptoKeyId].KeyData[ExpKeyIndex].RfKeyElemData
      );
    }
    else if (CRYPTO_AES_KEY_256 == Crypto_PreCalcKey.length)
    {
      Crypto_AL_AESPreCalculateKeySchedule
      (
        8U,
        14U,
        Crypto_PreCalcKey.data,
        Crypto_AL_Keys_Data[CryptoKeyId].KeyData[ExpKeyIndex].RfKeyElemData
      );
    }
    else
    {
      /* reset to 0 for the case the expansion fails*/
      Crypto_AL_Keys_Data[CryptoKeyId].KeyData[ExpKeyIndex].RfKeyElemDataSize = 0U;
    }
  } /* exp Key exists */
}
#endif

/*--HMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HelperHMacSha2256SyncSingleCall
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) InputPtr,
  uint32 InputLength,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) OutputPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) OutputLengthPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 ObjId = 0U;
  boolean Busy = FALSE;

  Crypto_JobType Job = {
                         0U,
                         CRYPTO_JOBSTATE_IDLE,
                         {
                           NULL_PTR,
                           0U,
                           NULL_PTR,
                           0U,
                           NULL_PTR,
                           0U,
                           NULL_PTR,
                           0U,
                           NULL_PTR,
                           NULL_PTR,
                           NULL_PTR,
                           CRYPTO_OPERATIONMODE_SINGLECALL
                         },
                         &Crypto_HelperHmacJobPrimitiveInfo,
                         &Crypto_HelperHmacJobInfo,
                         0U
                       };
  Job.jobPrimitiveInputOutput.inputPtr = InputPtr;
  Job.jobPrimitiveInputOutput.inputLength = InputLength;
  Job.jobPrimitiveInputOutput.outputPtr = OutputPtr;
  Job.jobPrimitiveInputOutput.outputLengthPtr = OutputLengthPtr;

  /*only process if the DriverObjectState is not busy.*/
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  if(
      CRYPTO_DRIVER_OBJECT_STATE_IDLE ==
        Crypto_DriverObjects[ObjId].DriverObjectState
    )
  {
    Crypto_DriverObjects[ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_BUSY;
    Crypto_DriverObjects[ObjId].CurrentJob = &Job;
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* !LINKSTO Crypto.Dsn.JobTransition.Idle2Active, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
    Job.jobState = CRYPTO_JOBSTATE_ACTIVE;

    Crypto_HMACGenCtx.ObjId = ObjId;
    Crypto_HmacGenKey = *KeyPtr;
    Crypto_HMACGenerateConfig.Crypto_Generic_Callback =
      &Crypto_AL_MACGENERATE_SHA2_256_Crypto_HMAC_CallBack;
    Crypto_HMACGenerateConfig.ObjId = ObjId;
    Crypto_HMACGenerateConfig.Job = &Job;

    /* HMACGenStart can only return E_OK */
    (void)Crypto_HMACGenStart(
                                         &Crypto_HMACGenerateConfig,
                                         &Crypto_HmacGenKey
                                       );
    do
    {
      Crypto_HMACGenMainFunction(&RetVal, &Busy);
    } while ((TRUE == Busy) && (E_OK == RetVal));

    /* The previous function can not fail hence we are in a correct state and this funciton can
       not fail. */
    (void)Crypto_HMACGenUpdate(
                                          Job.jobPrimitiveInputOutput.inputPtr,
                                          Job.jobPrimitiveInputOutput.inputLength
                                        );
    do
    {
      Crypto_HMACGenMainFunction(&RetVal, &Busy);
    }while ((TRUE == Busy) && (E_OK == RetVal));

    /* The previous function can not fail hence we are in a correct state and this funciton can
       not fail. */
    (void)Crypto_HMACGenFinish(
                                          Job.jobPrimitiveInputOutput.outputPtr,
                                          Job.jobPrimitiveInputOutput.outputLengthPtr,
                                          TRUE
                                        );
    Busy = FALSE;
    do
    {
      Crypto_HMACGenMainFunction(&RetVal, &Busy);
    } while ((TRUE == Busy) && (E_OK == RetVal));

    /*set DriverObjectState back to idle after processing of the function. Also
    set the currentJob to NULL_PTR.*/
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    Crypto_DriverObjects[ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
    Crypto_DriverObjects[ObjId].CurrentJob = NULL_PTR;
    Crypto_DriverObjects[ObjId].SkipPeriodicMainFunction = TRUE;
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  }
  else
  {
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1137, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_HMAC_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  /* !LINKSTO EB_Crypto_CryptAlgos_0803,1 */
  Crypto_HmacGenKey.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  Crypto_HMACGenerateConfig.Crypto_Generic_Callback =
    &Crypto_AL_MACGENERATE_SHA2_256_Crypto_HMAC_CallBack;
  Crypto_HMACGenerateConfig.ObjId = ObjectId;
  Crypto_HMACGenerateConfig.Job = Job;
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_MACGENERATE_AES_HMAC_Reset();

  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Crypto_HmacGenKey.data,
                                              &(Crypto_HmacGenKey.length)
                                            );
  if (E_OK == RetVal)
  {
    RetVal = Crypto_HMACGenStart(
                                            &Crypto_HMACGenerateConfig,
                                            &Crypto_HmacGenKey
                                          );
  }

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1158, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_HMAC_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_HMACGenUpdate(
                                           Job->jobPrimitiveInputOutput.inputPtr,
                                           Job->jobPrimitiveInputOutput.inputLength
                                         );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1179, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_HMAC_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_HMACGenFinish(
                                           Job->jobPrimitiveInputOutput.outputPtr,
                                           Job->jobPrimitiveInputOutput.outputLengthPtr,
                                           TRUE
                                         );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1219, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_HMAC_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_HMAC_G_S_INITIALIZED == Crypto_HMACGenCtx.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_MACGENERATE_AES_HMAC_Reset();
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled imideatly */
    Crypto_HMACGenCtx.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1240, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_HMAC_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  Crypto_HMACGenMainFunction(Result, Busy);
}
#endif /* #if (CRYPTO_HMAC_GEN_ENABLED == STD_ON) */

/*--HMAC-VRFY-------------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)

/* !LINKSTO EB_Crypto_CryptAlgos_1138, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_HMAC_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  /* !LINKSTO EB_Crypto_CryptAlgos_0803,1 */
  Crypto_HmacVrfyKey.length = Job->jobPrimitiveInfo->primitiveInfo->algorithm.keyLength;

  Crypto_HMACVerifyConfig.Crypto_Generic_Callback =
    &Crypto_AL_MACVERIFY_SHA2_256_Crypto_HMAC_CallBack;
  Crypto_HMACVerifyConfig.ObjId = ObjectId;
  Crypto_HMACVerifyConfig.Job = Job;
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_MACVERIFY_AES_HMAC_Reset();

  RetVal = Crypto_AL_KeyElementGet(
                                              Job->cryptoKeyId,
                                              CRYPTO_KE_MAC_KEY,
                                              Crypto_HmacVrfyKey.data,
                                              &(Crypto_HmacVrfyKey.length)
                                            );
  if (E_OK == RetVal)
  {
    RetVal = Crypto_HMACVrfyStart(&Crypto_HMACVerifyConfig, &Crypto_HmacVrfyKey);
  }
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1159, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_HMAC_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_HMACVrfyUpdate(
                                            Job->jobPrimitiveInputOutput.inputPtr,
                                            Job->jobPrimitiveInputOutput.inputLength
                                          );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1180, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_HMAC_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  TS_PARAM_UNUSED(ObjectId);
  RetVal = Crypto_HMACVrfyFinish(
                                            Job->jobPrimitiveInputOutput.secondaryInputPtr,
                                            Job->jobPrimitiveInputOutput.secondaryInputLength,
                                            Job->jobPrimitiveInputOutput.verifyPtr
                                          );

  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1220, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_HMAC_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(CRYPTO_HMAC_V_S_INITIALIZED == Crypto_HMACVrfyCtx.State)
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_MACVERIFY_AES_HMAC_Reset();
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled imideatly */
    Crypto_HMACVrfyCtx.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

/* !LINKSTO EB_Crypto_CryptAlgos_1241, 1 */
FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_HMAC_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  Crypto_HMACVrfyMainFunction(Result, Busy);
}
#endif /* #if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Definition of functions with internal linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/*--CMAC-COMMON-----------------------------------------------------------------------------------*/

#if ((CRYPTO_CMAC_GEN_ENABLED == STD_ON) || (CRYPTO_CMAC_VRFY_ENABLED == STD_ON))
static FUNC(void, CRYPTO_CODE) Crypto_CMACShiftBlockOneBitLeft
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Block
)
{
  uint8 i;

  for (i = 0U; ((uint8) (CRYPTO_CMAC_BLOCK_LEN_BYTES - 1U)) > i; i++)
  {
    Block[i] = (uint8) (Block[i] << 1U) | (uint8) (Block[i + 1U] >> 7U);
  }

  /* The last byte of the block cannot use a bit from the next byte. */
  Block[CRYPTO_CMAC_BLOCK_LEN_BYTES - 1U] <<= 1U;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACCalcKx
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) Kx,
  uint32                                              Length
)
{
  uint8 Msb;
  Msb = (uint8)CRYPTO_CMAC_BYTE_WITH_MSB_SET & Kx[0U];
  Crypto_CMACShiftBlockOneBitLeft(Kx);
  if (0U != Msb)
  {
    Crypto_CommonXOR
    (
      Kx,
      Crypto_CMACSubKeyGenerationConstant,
      Length
    );
  }
}
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CipherMiddleBlocks
(
  uint32                                                           NrBlocks,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)   Job,
  VAR(boolean, CRYPTO_APPL_DATA)                         ExpandedKeyAvailable,
  VAR(Crypto_SymKeyType, CRYPTO_APPL_DATA)     Key
)
{
  uint32 BlockIdx = 0U;
  uint32 OutputLengthPtr = CRYPTO_CMAC_BLOCK_LEN_BYTES;
  Std_ReturnType RetVal = E_NOT_OK;

  if (2U > NrBlocks)
  {
    RetVal = E_OK;
  }
  else
  {
    /* cipher middle block(s) */
    for (BlockIdx = 0U; BlockIdx < (NrBlocks - 1U); BlockIdx++)
    {
      TS_MemCpy
      (
        Crypto_Block,
        &((const uint8 *) Job->jobPrimitiveInputOutput.inputPtr)[BlockIdx * CRYPTO_CMAC_BLOCK_LEN_BYTES],
        sizeof(Crypto_Block)
      );

      /* XOR the block with the last encrypted block. */
      Crypto_CommonXOR
      (
        Crypto_Block,
        Crypto_LastEncryptedBlock,
        sizeof(Crypto_Block)
      );

      if (TRUE == ExpandedKeyAvailable)
      {
        RetVal = Crypto_AL_AES_EncryptPreCalc
            (
              Crypto_Block,
              Crypto_LastEncryptedBlock,
              &OutputLengthPtr,
              Key.length,
              Crypto_CmacGenExpKey32
            );
      }
      else
      {
        RetVal = Crypto_AES_Helper_Encrypt_SyncSingleCall
          (
            Crypto_Block,
            sizeof(Crypto_Block),
            Crypto_LastEncryptedBlock,
            &OutputLengthPtr,
            &Key
          );
      }
      if (E_OK != RetVal)
      {
        break;
      }
    }
  }
  return RetVal;
}
#endif /* #if ((CRYPTO_CMAC_GEN_ENABLED == STD_ON) || (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)) */

/*--CMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_GEN_ENABLED == STD_ON)
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_Reset
(
  void
)
{
  Crypto_AL_ENCRYPT_AES_ECB_Reset();
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(&Crypto_CMACGenContext, sizeof(Crypto_CMACGenContext));
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_CMAC_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Error
)
{
  if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
  {
    if
    (
      (
         CRYPTO_OPERATIONMODE_FINISH
         == (CRYPTO_OPERATIONMODE_FINISH & Crypto_CMACGenContext.CurrentMode)
      ) ||
      (E_OK != Error)
    )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_CMACGenContext.CurrentMode = CRYPTO_MAC_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_CMACGenContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_CMACGenContext.ObjId].CurrentJob = NULL_PTR;
      Crypto_DriverObjects[Crypto_CMACGenContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_MACGENERATE_AES_CMAC_Reset();
    }
    if
    (
      (
        CRYPTO_OPERATIONMODE_UPDATE ==
        (CRYPTO_OPERATIONMODE_UPDATE & Crypto_CMACGenContext.CurrentMode)
      ) &&
      (
        (
          CRYPTO_OPERATIONMODE_SINGLECALL !=
          (
            CRYPTO_OPERATIONMODE_SINGLECALL &
            Crypto_CMACGenContext.Job->jobPrimitiveInputOutput.mode
          )
        )
      )
    )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

/* !LINKSTO EB_Crypto_CryptAlgos_0962, 1 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
)
{
  Std_ReturnType RetVal = E_OK;
  P2CONST(Crypto_CMACGenConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
    (P2CONST(Crypto_CMACGenConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  /* Set state of the state machine to start */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_START_REQ_SB_START;
  Crypto_CMACGenContext.CurrentMode = CRYPTO_OPERATIONMODE_START;
  /*Reset the addresses from the previous call.*/
  Crypto_CMACGenContext.IsBusy = NULL_PTR;
  Crypto_CMACGenContext.ResultVal = NULL_PTR;

  /* Store data into context */
  TS_MemCpy(Crypto_CMACGenContext.Key.data, KeyPtr->data, KeyPtr->length);
  Crypto_CMACGenContext.Key.length = KeyPtr->length;
  Crypto_CMACGenContext.ObjId = LocCfgPtr->ObjId;
  Crypto_CMACGenContext.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_CMACGenContext.Job = LocCfgPtr->Job;

  /*Main code start*/
  RetVal = Crypto_CMACGenStateStartReqSBSt();
  if (E_OK == RetVal)
  {
    Crypto_CMACGenStateStartReqSBUpd();
  }
  /*Main code end*/
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if
  (
    (CRYPTO_CMAC_G_S_IDLE == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_PAD_LAST_BLOCK == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_REQ_SB_UPD == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_REQ_SB_FIN == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN == Crypto_CMACGenContext.State)
  )
  {
    /* We are either idle or finishing the computation. A call of the update function is
     * not expected here.
     */
    Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_IDLE;
    RetVal = E_NOT_OK;
  }
  else if (CRYPTO_CMAC_G_S_INITIALIZED == Crypto_CMACGenContext.State)
  {
    /* Store data into context */
    Crypto_CMACGenContext.DataPtr = DataPtr;
    Crypto_CMACGenContext.DataLength = DataLength;

    /* Set state of the state machine to update */
    Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_UPD_CP_FROM_INPUT;
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenFinish
(
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)  ResultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ResultLengthPtr,
  boolean                                              TruncationIsAllowed
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if
  (
    (CRYPTO_CMAC_G_S_IDLE == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_PAD_LAST_BLOCK == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_REQ_SB_UPD == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_REQ_SB_FIN == Crypto_CMACGenContext.State) ||
    (CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN == Crypto_CMACGenContext.State)
  )
  {
    /* We are either idle or finishing the computation. A call of the finish function is
     * not expected here.
     */
    Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_IDLE;
    RetVal = E_NOT_OK;
  }
  else if (CRYPTO_CMAC_G_S_INITIALIZED == Crypto_CMACGenContext.State)
  {
    /* Store data into context */
    Crypto_CMACGenContext.Result = ResultPtr;
    Crypto_CMACGenContext.ResultLengthPtr = ResultLengthPtr;
    Crypto_CMACGenContext.TruncationIsAllowed = TruncationIsAllowed;

    /* Set state of the state machine to finish */
    Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_FIN_PAD_LAST_BLOCK;
    Crypto_CMACGenStateFinPadLastBlock();
    Crypto_CMACGenStateFinReqSbUpd();
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if (FALSE == Crypto_CheckSkipMain(Result, Busy, Crypto_CMACGenContext.ObjId))
  {
    Crypto_CMACGenContext.ResultVal = Result;
    Crypto_CMACGenContext.IsBusy = Busy;
    if ((NULL_PTR != Result) && (NULL_PTR != Busy))
    {
      *Crypto_CMACGenContext.ResultVal = E_OK;
      *Crypto_CMACGenContext.IsBusy = TRUE;
    }
    switch (Crypto_CMACGenContext.State)
    {
      case CRYPTO_CMAC_G_S_UPD_CP_FROM_INPUT:
      {
        if (NULL_PTR != Crypto_CMACGenContext.IsBusy)
        {
          *Crypto_CMACGenContext.IsBusy = TRUE;
        }
        Crypto_CMACGenContext.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        Crypto_CMACGenStateUpdCpFromInput();
      }
      break;
      case CRYPTO_CMAC_G_S_UPD_REQ_SB_UPD:
      {
        Crypto_CMACGenStateUpdReqSbUpd();
      }
      break;
      case CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT:
      {
        Crypto_CMACGenStateFinCpToResult();
      }
      break;

      case CRYPTO_CMAC_G_S_INITIALIZED:
      {
        if (NULL_PTR != Busy)
        {
          *Crypto_CMACGenContext.IsBusy=FALSE;
        }
      }
      break;

      case CRYPTO_CMAC_G_S_UPD_WAIT_SB_UPD:
      case CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD:
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
    Crypto_CMACGenCallbackCancel();
  }
}
static FUNC(void , CRYPTO_CODE) Crypto_CMACGenCallbackCancel
(
  void
)
{
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
  if(TRUE == Crypto_CMACGenContext.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_CMACGenContext.ResultVal)
         && (NULL_PTR != Crypto_CMACGenContext.IsBusy)
       )
    {
      *Crypto_CMACGenContext.IsBusy = FALSE;
      *Crypto_CMACGenContext.ResultVal = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_CMACGenContext.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_CMACGenContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_CMACGenContext.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_CMACGenContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_CMACGenContext.Crypto_Generic_Callback
    (
      Crypto_CMACGenContext.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_CMACGenContext.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_CMACGenContext.ResultVal)
           && (NULL_PTR != Crypto_CMACGenContext.IsBusy)
         )
      {
        *Crypto_CMACGenContext.IsBusy = FALSE;
        *Crypto_CMACGenContext.ResultVal =
        Crypto_CMACGenContext.CallbackResult;
      }
      if
      (
        (
          CRYPTO_PROCESSING_ASYNC ==
          Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType
        )
        &&
        (
          (
            (
              CRYPTO_OPERATIONMODE_SINGLECALL &
              Crypto_CMACGenContext.Job->jobPrimitiveInputOutput.mode
            ) == CRYPTO_OPERATIONMODE_SINGLECALL
          ) ||
          (
            CRYPTO_OPERATIONMODE_STREAMSTART ==
            (
              CRYPTO_OPERATIONMODE_STREAMSTART &
              Crypto_CMACGenContext.Job->jobPrimitiveInputOutput.mode
            )
          )
        ) && (CRYPTO_OPERATIONMODE_START == Crypto_CMACGenContext.CurrentMode)
      )
      {
        (void) Crypto_AL_MACGENERATE_AES_CMAC_Update(
                                                                Crypto_CMACGenContext.ObjId,
                                                                Crypto_CMACGenContext.Job
                                                              );
      }
      else
      {
        if
        (
          (
            CRYPTO_PROCESSING_ASYNC ==
            Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType
          ) &&
          (
            (
              CRYPTO_OPERATIONMODE_SINGLECALL ==
              (
                Crypto_CMACGenContext.Job->jobPrimitiveInputOutput.mode &
                CRYPTO_OPERATIONMODE_SINGLECALL
              )
            )
          ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_CMACGenContext.CurrentMode)
        )
        {
          (void)Crypto_AL_MACGENERATE_AES_CMAC_Finish
          (
            Crypto_CMACGenContext.ObjId,
            Crypto_CMACGenContext.Job
          );
        }
      }
      Crypto_CMACGenContext.Crypto_Generic_Callback
      (
        Crypto_CMACGenContext.Job,
        Crypto_CMACGenContext.CallbackResult
      );
      Crypto_CMACGenContext.CallbackFlag = FALSE;
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
)
{
  /*The callback shall always be called with Result E_OK, because the AES ECB is called through
  helpers, always using valid inputs. */
  switch (Crypto_CMACGenContext.State)
  {
    case CRYPTO_CMAC_G_S_START_WAIT_SB_START:
    {
      /* Starting the encryption has succeeded. Now we can request encryption of the zero
       * block.
       */
      Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_START_REQ_SB_UPD;
    }
    break;

    case CRYPTO_CMAC_G_S_START_WAIT_SB_UPD:
    {
      /* Encryption of the zero block has succeeded. Now we can create K1 and K2.
       */
      Crypto_CMACGenStateStartK1AndK2();
    }
    break;

    case CRYPTO_CMAC_G_S_UPD_WAIT_SB_UPD:
    {
      /* Encryption of a block has succeeded. Now we can read more input data into the
       * block.
       */
      Crypto_CMACGenContext.BytesStoredInBlock = 0U;
      if(NULL_PTR != Crypto_CMACGenContext.IsBusy)
      {
        *Crypto_CMACGenContext.IsBusy = TRUE;
      }
      Crypto_CMACGenStateUpdCpFromInput();
    }
    break;

    case CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD:
    {
      /* Encryption of the last block has succeeded. Now we can copy the CMAC to the
       * output buffer.
       */
      Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_FIN_CP_TO_RESULT;
    }
    break;

    case CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN:
    {
      /* Finishing the encryption has succeeded. Now we can successfully finish the CMAC
       * generation.
       */
      Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_IDLE;

      Crypto_CMACGenContext.CallbackFlag = TRUE;
      Crypto_CMACGenContext.CallbackResult = E_OK;
    }
    break;
    /* CHECK: NOPARSE */
    /* All the wait states are addressed in the cases above.*/
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

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACGenStateStartReqSBSt
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* Try requesting the start of the symmetrical block encryption with the CMAC key.
   * If the request succeeds, wait for the callback by the primitive.
   */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_START_WAIT_SB_START;
  switch
  (
    Crypto_AES_Helper_Encrypt_Start
    (
      Crypto_CMACGenContext.ObjId,
      &Crypto_CMACGenCallback,
      Crypto_CMACGenContext.Job,
      Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType,
      &Crypto_CMACGenContext.Key
    )
  )
  {
    case E_OK:
    {
      RetVal = E_OK;
    }
    break;

    default:
    {
      /* Encryption could not be started. Finish the CMAC computation with an error. */
      Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_IDLE;

      Crypto_CMACGenContext.CallbackFlag = TRUE;
      Crypto_CMACGenContext.CallbackResult = E_NOT_OK;
      RetVal = E_NOT_OK;
    }
    break;
  }
  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateStartReqSBUpd
(
  void
)
{
  /* Try requesting the encryption of the zero block. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_START_WAIT_SB_UPD;
  Crypto_CMACGenContext.BytesStoredInBlock = sizeof(Crypto_CMACGenContext.K1);
  Crypto_AES_Helper_Encrypt_Update
  (
    Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType,
    Crypto_CMACZeroBlock,
    sizeof(Crypto_CMACZeroBlock),
    Crypto_CMACGenContext.K1,
    &Crypto_CMACGenContext.BytesStoredInBlock
  );
  Crypto_AES_Helper_Encrypt_MainFunction();
}

/* !LINKSTO EB_Crypto_CryptAlgos_0504,1 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateStartK1AndK2
(
  void
)
{
  /* Create constant K1 from the encrypted zero block. */
  Crypto_CMACCalcKx(Crypto_CMACGenContext.K1, sizeof(Crypto_CMACGenContext.K1));

  /* Create constant K2 from K1. */
  TS_MemCpy
  (
    Crypto_CMACGenContext.K2,
    Crypto_CMACGenContext.K1,
    sizeof(Crypto_CMACGenContext.K2)
  );
  Crypto_CMACCalcKx(Crypto_CMACGenContext.K2, sizeof(Crypto_CMACGenContext.K2));

  /* Use the zero block as constant C0. */
  TS_MemCpy
  (
    Crypto_CMACGenContext.LastEncryptedBlock,
    Crypto_CMACZeroBlock,
    sizeof(Crypto_CMACGenContext.Block)
  );

  /* We have not read any input data yet. */
  Crypto_CMACGenContext.BytesStoredInBlock = 0U;

  /* The starting of the CMAC computation has finished. We can now wait for the input data. */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_INITIALIZED;

  Crypto_CMACGenContext.CallbackFlag = TRUE;
  Crypto_CMACGenContext.CallbackResult = E_OK;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateUpdCpFromInput
(
  void
)
{
  /* Fill the next block to encrypt with input data and, if there is enough data,
   * XOR it with the last encrypted block and start encrypting it.
   */

  if
  (
    (
      Crypto_CMACGenContext.BytesStoredInBlock +
      Crypto_CMACGenContext.DataLength
    ) >
    sizeof(Crypto_CMACGenContext.Block)
  )
  {
    uint32 NewLen;

    /* We have enough data to fill a complete block to encrypt and we know that the
     * block will not be the last.
     */

    /* Copy input data to the block until it is full. */
    NewLen =
      sizeof(Crypto_CMACGenContext.Block) -
      Crypto_CMACGenContext.BytesStoredInBlock;
    TS_MemCpy
    (
      &Crypto_CMACGenContext.Block[Crypto_CMACGenContext.BytesStoredInBlock],
      Crypto_CMACGenContext.DataPtr,
      NewLen
    );
    Crypto_CMACGenContext.BytesStoredInBlock =
      sizeof(Crypto_CMACGenContext.Block);

    /* Skip the bytes we have read in the input data. */
    Crypto_CMACGenContext.DataPtr = &Crypto_CMACGenContext.DataPtr[NewLen];
    Crypto_CMACGenContext.DataLength -= NewLen;

    /* XOR the block of input data with the last encrypted block. */
    Crypto_CommonXOR
    (
      Crypto_CMACGenContext.Block,
      Crypto_CMACGenContext.LastEncryptedBlock,
      sizeof(Crypto_CMACGenContext.Block)
    );

    /* Request encryption of the block. */
    Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_UPD_REQ_SB_UPD;
  }
  else
  {
    /* We do not have enough input data to fill a complete block or we do not know
     * whether the block will be the last one.
     */

    /* Copy the rest of the input data to the block. */
    TS_MemCpy
    (
      &Crypto_CMACGenContext.Block[Crypto_CMACGenContext.BytesStoredInBlock],
      Crypto_CMACGenContext.DataPtr,
      Crypto_CMACGenContext.DataLength
    );
    Crypto_CMACGenContext.BytesStoredInBlock +=
      Crypto_CMACGenContext.DataLength;

    /* We are finished with the current update and wait for more input data or the
     * end of the CMAC computation.
     */
    Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_INITIALIZED;

    Crypto_CMACGenContext.CallbackFlag = TRUE;
    Crypto_CMACGenContext.CallbackResult = E_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateUpdReqSbUpd
(
  void
)
{
  /* Try requesting the encryption of a block of data. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_UPD_WAIT_SB_UPD;
  Crypto_AES_Helper_Encrypt_Update
  (
    Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType,
    Crypto_CMACGenContext.Block,
    sizeof(Crypto_CMACGenContext.Block),
    Crypto_CMACGenContext.LastEncryptedBlock,
    &(Crypto_CMACGenContext.BytesStoredInBlock)
  );
  Crypto_AES_Helper_Encrypt_MainFunction();
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinPadLastBlock
(
  void
)
{
  /* Pad the last block if necessary and XOR it with K1 or K2. */

  if (
       Crypto_CMACGenContext.BytesStoredInBlock ==
       sizeof(Crypto_CMACGenContext.Block)
     )
  {
    /* The last block is a complete block, so XOR it with K1. */
    Crypto_CommonXOR
    (
      Crypto_CMACGenContext.Block,
      Crypto_CMACGenContext.K1,
      sizeof(Crypto_CMACGenContext.Block)
    );
  }
  else
  {
    /* The last block is not a complete block. */

    /* Pad the block */
    Crypto_CMACGenContext.Block[Crypto_CMACGenContext.BytesStoredInBlock] =
    (uint8)CRYPTO_CMAC_BYTE_WITH_MSB_SET;
    Crypto_CMACGenContext.BytesStoredInBlock++;
    for
    (
      ;
      Crypto_CMACGenContext.BytesStoredInBlock <
        (uint32) sizeof(Crypto_CMACGenContext.Block);
      Crypto_CMACGenContext.BytesStoredInBlock++
    )
    {
      Crypto_CMACGenContext.Block[Crypto_CMACGenContext.BytesStoredInBlock] = 0U;
    }

    /* XOR the padded block with K2. */
    Crypto_CommonXOR
    (
      Crypto_CMACGenContext.Block,
      Crypto_CMACGenContext.K2,
      sizeof(Crypto_CMACGenContext.Block)
    );
  }

  /* XOR the block with the last encrypted block. */
  Crypto_CommonXOR
  (
    Crypto_CMACGenContext.Block,
    Crypto_CMACGenContext.LastEncryptedBlock,
    sizeof(Crypto_CMACGenContext.Block)
  );

  /* Request encryption of the block. */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_FIN_REQ_SB_UPD;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinReqSbUpd
(
  void
)
{
  /* Try requesting the encryption of the last block. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_FIN_WAIT_SB_UPD;
  Crypto_AES_Helper_Encrypt_Update
  (
    Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType,
    Crypto_CMACGenContext.Block,
    sizeof(Crypto_CMACGenContext.Block),
    Crypto_CMACGenContext.LastEncryptedBlock,
    &(Crypto_CMACGenContext.BytesStoredInBlock)
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinCpToResult
(
  void
)
{
  if(CRYPTO_OPERATIONMODE_UPDATE == Crypto_CMACGenContext.CurrentMode)
  {
    /* Set current mode to call the Callback correctly */
    Crypto_CMACGenContext.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
  }
  if (
       *Crypto_CMACGenContext.ResultLengthPtr >
       sizeof(Crypto_CMACGenContext.LastEncryptedBlock)
     )
  {
    /* The output buffer for the CMAC is larger than the CMAC. Tell the user that
     * we only wrote as many bytes as there are in a CMAC.
     */
    *Crypto_CMACGenContext.ResultLengthPtr =
      sizeof(Crypto_CMACGenContext.LastEncryptedBlock);
  }

  /* Copy the (possibly truncated) CMAC to the output buffer. */
  TS_MemCpy
  (
    Crypto_CMACGenContext.Result,
    Crypto_CMACGenContext.LastEncryptedBlock,
    *Crypto_CMACGenContext.ResultLengthPtr
  );

  /* We must still finish the symmetrical block encryption. */
  Crypto_CMACGenStateFinReqSbFin();
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACGenStateFinReqSbFin
(
  void
)
{
  /* Try finishing the symmetrical block encryption. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACGenContext.State = CRYPTO_CMAC_G_S_FIN_WAIT_SB_FIN;
  Crypto_AES_Helper_Encrypt_Finish
  (
    Crypto_CMACGenContext.Job->jobPrimitiveInfo->processingType
  );
  Crypto_AES_Helper_Encrypt_MainFunction();
}

#endif /* #if (CRYPTO_CMAC_GEN_ENABLED == STD_ON) */

/*--CMAC-VERIFY-----------------------------------------------------------------------------------*/

#if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON)
static FUNC(Crypto_VerifyResultType, CRYPTO_CODE) Crypto_CompareMac
(
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA)     Job
)
{
  uint8 Mask = 0U;
  uint8 Pos = 0U;
  Crypto_VerifyResultType Result = CRYPTO_E_VER_NOT_OK;
  if
  (
      Crypto_MemCmp_Sec
      (
        Crypto_LastEncryptedBlock,
        Job->jobPrimitiveInputOutput.secondaryInputPtr,
        Job->jobPrimitiveInputOutput.secondaryInputLength / 8U
      ) == E_OK
  )
  {
    Result = CRYPTO_E_VER_OK;

    /* Compare rest of bits */
    if (0U < (Job->jobPrimitiveInputOutput.secondaryInputLength % 8U))
    {
      Mask = 0x00U;
      for (Pos = 0U; Pos < (Job->jobPrimitiveInputOutput.secondaryInputLength % 8U); Pos++)
      {
        Mask = (Mask >> 1U) + 0x80U;
      }

      if
      (
        (
          (Crypto_LastEncryptedBlock[Job->jobPrimitiveInputOutput.secondaryInputLength / 8U]) &
          Mask
        )
        !=
        (
          (Job->jobPrimitiveInputOutput.secondaryInputPtr[Job->jobPrimitiveInputOutput.secondaryInputLength / 8U]) &
          Mask
        )
      )
      {
        Result = CRYPTO_E_VER_NOT_OK;
      }
    }
  }
  else
  {
    Result = CRYPTO_E_VER_NOT_OK;
  }
  return Result;
}
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_Reset
(
  void
)
{
  Crypto_AL_ENCRYPT_AES_ECB_Reset();
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(&Crypto_CMACVrfyContext, sizeof(Crypto_CMACVrfyContext));
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_CMAC_CallBack
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
           (CRYPTO_OPERATIONMODE_FINISH & Crypto_CMACVrfyContext.CurrentMode)
         ) ||
         (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_CMACVrfyContext.CurrentMode = CRYPTO_MAC_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_CMACVrfyContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_CMACVrfyContext.ObjId].CurrentJob = NULL_PTR;
      Crypto_DriverObjects[Crypto_CMACVrfyContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_MACVERIFY_AES_CMAC_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_CMACVrfyContext.CurrentMode)
         ) &&
         (
           (
             CRYPTO_OPERATIONMODE_SINGLECALL !=
             (
               CRYPTO_OPERATIONMODE_SINGLECALL &
               Crypto_CMACVrfyContext.Job->jobPrimitiveInputOutput.mode
             )
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

/* !LINKSTO EB_Crypto_CryptAlgos_0962, 1 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyStart
(
  P2CONST(void, AUTOMATIC, CRYPTO_APPL_DATA)                        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
)
{
  Std_ReturnType RetVal;
  P2CONST(Crypto_CMACVrfyConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
    (P2CONST(Crypto_CMACVrfyConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  Crypto_CMACVrfyContext.CurrentMode = CRYPTO_OPERATIONMODE_START;

  /* Store data into context */
  TS_MemCpy(Crypto_CMACVrfyContext.Key.data, KeyPtr->data, KeyPtr->length);
  Crypto_CMACVrfyContext.Key.length = KeyPtr->length;
  Crypto_CMACVrfyContext.ObjId = LocCfgPtr->ObjId;
  Crypto_CMACVrfyContext.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_CMACVrfyContext.Job = LocCfgPtr->Job;
  /*Clearing the pointers in context, so the address from previous call can be reseted.*/
  Crypto_CMACVrfyContext.IsBusy = NULL_PTR;
  Crypto_CMACVrfyContext.Result = NULL_PTR;

  /*Main code start*/
  RetVal = Crypto_CMACVrfyStateStartReqSBSt();
  if (E_OK == RetVal)
  {
    Crypto_CMACVrfyStateStartReqSBUpd();
  }

  /*Main code end*/
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if
  (
    (CRYPTO_CMAC_V_S_IDLE == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_REQ_SB_UPD == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_COMPARE == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_REQ_SB_FIN == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN == Crypto_CMACVrfyContext.State)
  )
  {
    /* We are either idle or finishing the computation. A call of the update function is
     * not expected here.
     */
    Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_IDLE;
    RetVal = E_NOT_OK;
  }
  else if (CRYPTO_CMAC_V_S_INITIALIZED == Crypto_CMACVrfyContext.State)
  {
    /* Store data into context */
    Crypto_CMACVrfyContext.DataPtr = DataPtr;
    Crypto_CMACVrfyContext.DataLength = DataLength;

    /* Set state of the state machine to update */
    Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_UPD_CP_FROM_INPUT;
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyFinish
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                 AuthenticationPtr,
  uint32                                                                AuthenticationLength,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  if
  (
    (CRYPTO_CMAC_V_S_IDLE == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_REQ_SB_UPD == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_COMPARE == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_REQ_SB_FIN == Crypto_CMACVrfyContext.State) ||
    (CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN == Crypto_CMACVrfyContext.State)
  )
  {
    /* We are either idle or finishing the computation. A call of the finish function is
     * not expected here.
     */
    Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_IDLE;
    RetVal = E_NOT_OK;
  }
  else if (CRYPTO_CMAC_V_S_INITIALIZED == Crypto_CMACVrfyContext.State)
  {
    if (AuthenticationLength > (8U * sizeof(Crypto_CMACVrfyContext.LastEncryptedBlock)))
    {
      /* It is not possible to have a CMAC of the size given by the user. This is an error.
       */
      RetVal = E_NOT_OK;
    }
    else
    {
      /* Store data into context */
      Crypto_CMACVrfyContext.CmacPtr = AuthenticationPtr;
      Crypto_CMACVrfyContext.CmacLength = AuthenticationLength;
      Crypto_CMACVrfyContext.ResultPtr = ResultPtr;
      Crypto_CMACVrfyStateFinPadLastBlock();
      Crypto_CMACVrfyStateFinReqSbUpd();
      RetVal = E_OK;
    }
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if (FALSE == Crypto_CheckSkipMain(Result, Busy, Crypto_CMACVrfyContext.ObjId))
  {
    Crypto_CMACVrfyContext.Result = Result;
    Crypto_CMACVrfyContext.IsBusy = Busy;
    if ((NULL_PTR != Result) && (NULL_PTR != Busy))
    {
      *Crypto_CMACVrfyContext.IsBusy = TRUE;
      *Crypto_CMACVrfyContext.Result = E_OK;
    }
    switch (Crypto_CMACVrfyContext.State)
    {
      case CRYPTO_CMAC_V_S_UPD_CP_FROM_INPUT:
      {
        if(NULL_PTR != Crypto_CMACVrfyContext.IsBusy)
        {
          *Crypto_CMACVrfyContext.IsBusy = TRUE;
        }
        Crypto_CMACVrfyContext.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        Crypto_CMACVrfyStateUpdCpFromInput();
      }
      break;
      case CRYPTO_CMAC_V_S_UPD_REQ_SB_UPD:
      {
        Crypto_CMACVrfyStateUpdReqSbUpd();
      }
      break;

      case CRYPTO_CMAC_V_S_FIN_COMPARE:
      {
        Crypto_CMACVrfyStateFinCompare();
      }
      break;

      case CRYPTO_CMAC_V_S_INITIALIZED:
      {
        if(NULL_PTR != Busy)
        {
          *Crypto_CMACVrfyContext.IsBusy = FALSE;
        }
      }
      break;
      case CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD:
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
    Crypto_CMACVrfyCallbackCancel();
  }
}
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyCallbackCancel
(
  void
)
{
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
  if(TRUE == Crypto_CMACVrfyContext.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_CMACVrfyContext.Result)
         && (NULL_PTR != Crypto_CMACVrfyContext.IsBusy)
       )
    {
      *Crypto_CMACVrfyContext.IsBusy = FALSE;
      *Crypto_CMACVrfyContext.Result = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_CMACVrfyContext.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_CMACVrfyContext.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_CMACVrfyContext.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_CMACVrfyContext.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_CMACVrfyContext.Crypto_Generic_Callback
    (
      Crypto_CMACVrfyContext.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_CMACVrfyContext.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_CMACVrfyContext.Result)
           && (NULL_PTR != Crypto_CMACVrfyContext.IsBusy)
         )
      {
        *Crypto_CMACVrfyContext.IsBusy = FALSE;
        *Crypto_CMACVrfyContext.Result =
        Crypto_CMACVrfyContext.CallbackResult;
      }
      if
      (
        (
          CRYPTO_PROCESSING_ASYNC ==
          Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType
        ) &&
        (
          (
            CRYPTO_OPERATIONMODE_SINGLECALL ==
            (
              CRYPTO_OPERATIONMODE_SINGLECALL &
              Crypto_CMACVrfyContext.Job->jobPrimitiveInputOutput.mode
            )
          ) ||
          (
            CRYPTO_OPERATIONMODE_STREAMSTART ==
            (
              CRYPTO_OPERATIONMODE_STREAMSTART &
              Crypto_CMACVrfyContext.Job->jobPrimitiveInputOutput.mode
            )
          )
        ) && (CRYPTO_OPERATIONMODE_START == Crypto_CMACVrfyContext.CurrentMode)
      )
      {
        (void) Crypto_AL_MACVERIFY_AES_CMAC_Update(
                                                              Crypto_CMACVrfyContext.ObjId,
                                                              Crypto_CMACVrfyContext.Job
                                                            );
      }
      else
      {
        if
        (
          (
            CRYPTO_PROCESSING_ASYNC ==
            Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType
          ) &&
          (
            CRYPTO_OPERATIONMODE_SINGLECALL ==
            (
              CRYPTO_OPERATIONMODE_SINGLECALL &
              Crypto_CMACVrfyContext.Job->jobPrimitiveInputOutput.mode
            )
          ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_CMACVrfyContext.CurrentMode)
        )
        {
          (void) Crypto_AL_MACVERIFY_AES_CMAC_Finish(
                                                                Crypto_CMACVrfyContext.ObjId,
                                                                Crypto_CMACVrfyContext.Job
                                                              );
        }
      }
      Crypto_CMACVrfyContext.Crypto_Generic_Callback
      (
        Crypto_CMACVrfyContext.Job,
        Crypto_CMACVrfyContext.CallbackResult
      );
      Crypto_CMACVrfyContext.CallbackFlag = FALSE;
    }
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType Result
)
{
  /*The callback shall always be called with Result E_OK, because the AES ECB is called through
    helpers, always using valid inputs. */
  switch (Crypto_CMACVrfyContext.State)
  {
    case CRYPTO_CMAC_V_S_START_WAIT_SB_UPD:
    {
      /* Encryption of the zero block has succeeded. Now we can create K1 and K2.
       */
      Crypto_CMACVrfyStateStartK1AndK2();
    }
    break;

    case CRYPTO_CMAC_V_S_UPD_WAIT_SB_UPD:
    {
      /* Encryption of a block has succeeded. Now we can read more input data into the
       * block.
       */
      Crypto_CMACVrfyContext.BytesStoredInBlock = 0U;
      if (NULL_PTR != Crypto_CMACVrfyContext.IsBusy)
      {
        *Crypto_CMACVrfyContext.IsBusy = TRUE;
      }
      Crypto_CMACVrfyStateUpdCpFromInput();
    }
    break;

    case CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD:
    {
      /* Encryption of the last block has succeeded. Now we can compare the computed
       * CMAC with the CMAC given by the user.
       */
      Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_FIN_COMPARE;
    }
    break;

    case CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN:
    {
      /* Finishing the encryption has succeeded. Now we can successfully finish the CMAC
       * verification.
       */
      Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_IDLE;

      Crypto_CMACVrfyContext.CallbackFlag = TRUE;
      Crypto_CMACVrfyContext.CallbackResult = E_OK;
    }
    break;
    /* CHECK: NOPARSE */
    /*All the valid states (wait states) have been addressed in the cases above.*/
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

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CMACVrfyStateStartReqSBSt
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* Try requesting the start of the symmetrical block encryption with the CMAC key.
   * If the request succeeds, wait for the callback by the primitive.
   */
  switch
  (
    Crypto_AES_Helper_Encrypt_Start
    (
      Crypto_CMACVrfyContext.ObjId,
      &Crypto_CMACVrfyCallback,
      Crypto_CMACVrfyContext.Job,
      Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType,
      &Crypto_CMACVrfyContext.Key
    )
  )
  {
    case E_OK:
    {
      RetVal = E_OK;
    }
    break;

    default:
    {
      /* Encryption could not be started. Finish the CMAC computation with an error. */
      RetVal = E_NOT_OK;
    }
    break;
  }
  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateStartReqSBUpd
(
  void
)
{
  /* Try requesting the encryption of the zero block. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_START_WAIT_SB_UPD;
  Crypto_CMACVrfyContext.BytesStoredInBlock = sizeof(Crypto_CMACVrfyContext.K1);
  Crypto_AES_Helper_Encrypt_Update
  (
    Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType,
    Crypto_CMACZeroBlock,
    sizeof(Crypto_CMACZeroBlock),
    Crypto_CMACVrfyContext.K1,
    &Crypto_CMACVrfyContext.BytesStoredInBlock
  );
  Crypto_AES_Helper_Encrypt_MainFunction();
}

/* !LINKSTO EB_Crypto_CryptAlgos_0594,1 */
static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateStartK1AndK2
(
  void
)
{
  /* Create constant K1 from the encrypted zero block. */
  Crypto_CMACCalcKx(
                               Crypto_CMACVrfyContext.K1,
                               sizeof(Crypto_CMACVrfyContext.K1)
                             );

  /* Create constant K2 from K1. */
  TS_MemCpy
  (
    Crypto_CMACVrfyContext.K2,
    Crypto_CMACVrfyContext.K1,
    sizeof(Crypto_CMACVrfyContext.K2)
  );
  Crypto_CMACCalcKx(
                               Crypto_CMACVrfyContext.K2,
                               sizeof(Crypto_CMACVrfyContext.K2)
                             );

  /* Use the zero block as constant C0. */
  TS_MemCpy
  (
    Crypto_CMACVrfyContext.LastEncryptedBlock,
    Crypto_CMACZeroBlock,
    sizeof(Crypto_CMACVrfyContext.Block)
  );

  /* We have not read any input data yet. */
  Crypto_CMACVrfyContext.BytesStoredInBlock = 0U;

  /* The starting of the CMAC computation has finished. We can now wait for the input data. */
  Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_INITIALIZED;

  Crypto_CMACVrfyContext.CallbackFlag = TRUE;
  Crypto_CMACVrfyContext.CallbackResult = E_OK;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateUpdCpFromInput
(
  void
)
{
  /* Fill the next block to encrypt with input data and, if there is enough data,
   * XOR it with the last encrypted block and start encrypting it.
   */

  if
  (
    (
      Crypto_CMACVrfyContext.BytesStoredInBlock +
      Crypto_CMACVrfyContext.DataLength
    ) >
    sizeof(Crypto_CMACVrfyContext.Block)
  )
  {
    uint32 NewLen;

    /* We have enough data to fill a complete block to encrypt and we know that the
     * block will not be the last.
     */

    /* Copy input data to the block until it is full. */
    NewLen = sizeof(Crypto_CMACVrfyContext.Block) -
      Crypto_CMACVrfyContext.BytesStoredInBlock;
    TS_MemCpy
    (
      &Crypto_CMACVrfyContext.Block[Crypto_CMACVrfyContext.BytesStoredInBlock],
      Crypto_CMACVrfyContext.DataPtr,
      NewLen
    );
    Crypto_CMACVrfyContext.BytesStoredInBlock =
      sizeof(Crypto_CMACVrfyContext.Block);

    /* Skip the bytes we have read in the input data. */
    Crypto_CMACVrfyContext.DataPtr = &Crypto_CMACVrfyContext.DataPtr[NewLen];
    Crypto_CMACVrfyContext.DataLength -= NewLen;

    /* XOR the block of input data with the last encrypted block. */
    Crypto_CommonXOR
    (
      Crypto_CMACVrfyContext.Block,
      Crypto_CMACVrfyContext.LastEncryptedBlock,
      sizeof(Crypto_CMACVrfyContext.Block)
    );

    /* Request encryption of the block. */
    Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_UPD_REQ_SB_UPD;
  }
  else
  {
    /* We do not have enough input data to fill a complete block or we do not know
     * whether the block will be the last one.
     */

    /* Copy the rest of the input data to the block. */
    TS_MemCpy
    (
      &Crypto_CMACVrfyContext.Block[Crypto_CMACVrfyContext.BytesStoredInBlock],
      Crypto_CMACVrfyContext.DataPtr,
      Crypto_CMACVrfyContext.DataLength
    );
    Crypto_CMACVrfyContext.BytesStoredInBlock +=
      Crypto_CMACVrfyContext.DataLength;

    /* We are finished with the current update and wait for more input data or the
     * end of the CMAC computation.
     */
    Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_INITIALIZED;

    Crypto_CMACVrfyContext.CallbackFlag = TRUE;
    Crypto_CMACVrfyContext.CallbackResult = E_OK;
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateUpdReqSbUpd
(
  void
)
{
  /* Try requesting the encryption of a block of data. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_UPD_WAIT_SB_UPD;
  Crypto_AES_Helper_Encrypt_Update
  (
    Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType,
    Crypto_CMACVrfyContext.Block,
    sizeof(Crypto_CMACVrfyContext.Block),
    Crypto_CMACVrfyContext.LastEncryptedBlock,
    &(Crypto_CMACVrfyContext.BytesStoredInBlock)
  );
  Crypto_AES_Helper_Encrypt_MainFunction();
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinPadLastBlock
(
  void
)
{
  /* Pad the last block if necessary and XOR it with K1 or K2. */

  if (
       Crypto_CMACVrfyContext.BytesStoredInBlock ==
       sizeof(Crypto_CMACVrfyContext.Block)
     )
  {
    /* The last block is a complete block, so XOR it with K1. */
    Crypto_CommonXOR
    (
      Crypto_CMACVrfyContext.Block,
      Crypto_CMACVrfyContext.K1,
      sizeof(Crypto_CMACVrfyContext.Block)
    );
  }
  else
  {
    /* The last block is not a complete block. */

    /* Pad the block */
    Crypto_CMACVrfyContext.Block[Crypto_CMACVrfyContext.BytesStoredInBlock] =
    (uint8)CRYPTO_CMAC_BYTE_WITH_MSB_SET;
    Crypto_CMACVrfyContext.BytesStoredInBlock++;
    for
    (
      ;
      Crypto_CMACVrfyContext.BytesStoredInBlock <
        (uint32) sizeof(Crypto_CMACVrfyContext.Block);
      Crypto_CMACVrfyContext.BytesStoredInBlock++
    )
    {
      Crypto_CMACVrfyContext.Block[Crypto_CMACVrfyContext.BytesStoredInBlock] =
        0U;
    }

    /* XOR the padded block with K2. */
    Crypto_CommonXOR
    (
      Crypto_CMACVrfyContext.Block,
      Crypto_CMACVrfyContext.K2,
      sizeof(Crypto_CMACVrfyContext.Block)
    );
  }

  /* XOR the block with the last encrypted block. */
  Crypto_CommonXOR
  (
    Crypto_CMACVrfyContext.Block,
    Crypto_CMACVrfyContext.LastEncryptedBlock,
    sizeof(Crypto_CMACVrfyContext.Block)
  );

  /* Request encryption of the block. */
  Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_FIN_REQ_SB_UPD;
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinReqSbUpd
(
  void
)
{
  /* Try requesting the encryption of the last block. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_FIN_WAIT_SB_UPD;
  Crypto_AES_Helper_Encrypt_Update
  (
    Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType,
    Crypto_CMACVrfyContext.Block,
    sizeof(Crypto_CMACVrfyContext.Block),
    Crypto_CMACVrfyContext.LastEncryptedBlock,
    &(Crypto_CMACVrfyContext.BytesStoredInBlock)
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinCompare
(
  void
)
{
  Crypto_VerifyResultType result;
  uint8 Mask;
  uint8 Pos;

  /* Set current mode to call Callback correctly */
  Crypto_CMACVrfyContext.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
  /* Compare the CMAC given by the user with the CMAC which has just been computed. */
  if
  (
    /* Compare whole bytes*/
    Crypto_MemCmp_Sec
    (
      Crypto_CMACVrfyContext.LastEncryptedBlock,
      Crypto_CMACVrfyContext.CmacPtr,
      Crypto_CMACVrfyContext.CmacLength / 8U
    ) == E_OK
  )
  {
    result = CRYPTO_E_VER_OK;

    /* Compare rest of bits */
    if (0U < (Crypto_CMACVrfyContext.CmacLength % 8U))
    {
      Mask = 0x00U;
      for (Pos = 0U; Pos < (Crypto_CMACVrfyContext.CmacLength % 8U); Pos++)
      {
        Mask = (Mask >> 1U) + 0x80U;
      }

      if (
           (
             (Crypto_CMACVrfyContext.LastEncryptedBlock[Crypto_CMACVrfyContext.CmacLength / 8U]) &
             Mask
           ) !=
           (
             (Crypto_CMACVrfyContext.CmacPtr[Crypto_CMACVrfyContext.CmacLength / 8U]) &
             Mask
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

  *Crypto_CMACVrfyContext.ResultPtr = result;
  /* We must still finish the symmetrical block encryption. */
  Crypto_CMACVrfyStateFinReqSbFin();
}

static FUNC(void, CRYPTO_CODE) Crypto_CMACVrfyStateFinReqSbFin
(
  void
)
{
  /* Try finishing the symmetrical block encryption. If the request succeeds, wait
   * for the callback.
   */
  Crypto_CMACVrfyContext.State = CRYPTO_CMAC_V_S_FIN_WAIT_SB_FIN;
  Crypto_AES_Helper_Encrypt_Finish
  (
    Crypto_CMACVrfyContext.Job->jobPrimitiveInfo->processingType
  );
  Crypto_AES_Helper_Encrypt_MainFunction();
}

#endif /* #if (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) */

/*--HMAC-GENERATE---------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_GEN_ENABLED == STD_ON)
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_AES_HMAC_Reset
(
  void
)
{
  Crypto_AL_HASH_SHA2_NOT_SET_Reset();
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(&Crypto_HMACGenCtx, sizeof(Crypto_HMACGenCtx));
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

/* !LINKSTO EB_Crypto_CryptAlgos_0969, 1 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACGenStart
(
  P2CONST(void,           AUTOMATIC, CRYPTO_APPL_DATA) CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr
)
{

  P2CONST(Crypto_HMACGenConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
    (P2CONST(Crypto_HMACGenConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  /* Store data into context */
  TS_MemCpy(Crypto_HMACGenCtx.Key.data, KeyPtr->data, KeyPtr->length);
  Crypto_HMACGenCtx.Key.length = KeyPtr->length;
  Crypto_HMACGenCtx.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_HMACGenCtx.ObjId = LocCfgPtr->ObjId;
  Crypto_HMACGenCtx.Job = LocCfgPtr->Job;

  /* Set state of the state machine to start */
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_PREPAREKEY;
  Crypto_HMACGenCtx.CurrentMode = CRYPTO_OPERATIONMODE_START;

  return E_OK;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACGenUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
)
{
  Std_ReturnType RetVal;

  if (CRYPTO_HMAC_G_S_INITIALIZED == Crypto_HMACGenCtx.State)
  {
    /* Store data into context */
    Crypto_HMACGenCtx.Data = DataPtr;
    Crypto_HMACGenCtx.DataLength = DataLength;

    /* Set state of the state machine to update */
    Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_UPDATE;

    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACGenFinish
(
   P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)  ResultPtr,
   P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA) ResultLengthPtr,
   boolean                                              TruncationIsAllowed
)
{
  Std_ReturnType RetVal;

  if (CRYPTO_HMAC_G_S_INITIALIZED == Crypto_HMACGenCtx.State)
  {
    /* Store data into context */
    Crypto_HMACGenCtx.Result = ResultPtr;
    Crypto_HMACGenCtx.ResultLengthPtr = ResultLengthPtr;
    Crypto_HMACGenCtx.TruncationIsAllowed = TruncationIsAllowed;

    /* Set state of the state machine to finish */
    Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_FINISH1;

    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if (FALSE == Crypto_CheckSkipMain(Result, Busy, Crypto_HMACGenCtx.ObjId))
  {
    Crypto_HMACGenCtx.ResultVal = Result;
    Crypto_HMACGenCtx.IsBusy = Busy;
    if ((NULL_PTR != Result) && (NULL_PTR != Busy))
    {
      *Crypto_HMACGenCtx.ResultVal = E_OK;
      *Crypto_HMACGenCtx.IsBusy = TRUE;
    }
    switch (Crypto_HMACGenCtx.State)
    {
      case CRYPTO_HMAC_G_S_PREPAREKEY:
        Crypto_HMACGenStatePrepareKey();
        break;

      case CRYPTO_HMAC_G_S_INIT1:
        Crypto_HMACGenStateInit1();
        break;

      case CRYPTO_HMAC_G_S_HASHKEY_UPDATE:
        Crypto_HMACGenStateHashKeyUpdate();
        break;

      case CRYPTO_HMAC_G_S_HASHKEY_FINISH:
        Crypto_HMACGenStateHashKeyFinish();
        break;

      case CRYPTO_HMAC_G_S_HASHKEY_INIT:
        Crypto_HMACGenStateHashKeyInit();
        break;

      case CRYPTO_HMAC_G_S_INIT2:
        Crypto_HMACGenStateInit2();
        break;

      case CRYPTO_HMAC_G_S_UPDATE:

        Crypto_HMACGenCtx.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        Crypto_HMACGenStateUpdate();
        break;

      case CRYPTO_HMAC_G_S_FINISH1:
        /* The mode is set to FINISH so that the job and the driver object can be set to idle. */
        Crypto_HMACGenCtx.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
        Crypto_HMACGenCtx.ResultVal = Result;
        Crypto_HMACGenCtx.IsBusy = Busy;
        if ((NULL_PTR != Result) && (NULL_PTR != Busy))
        {
          *Crypto_HMACGenCtx.IsBusy = TRUE;
        }        Crypto_HMACGenStateFinish1();
        break;

      case CRYPTO_HMAC_G_S_FINISH2:
        Crypto_HMACGenStateFinish2();
        break;

      case CRYPTO_HMAC_G_S_FINISH3:
        Crypto_HMACGenStateFinish3();
        break;

      case CRYPTO_HMAC_G_S_FINISH4:
        Crypto_HMACGenStateFinish4();
        break;

      case CRYPTO_HMAC_G_S_FINISH5:
        Crypto_HMACGenStateFinish5();
        break;

      default:
      Crypto_HMACGenDefaultWaitState();
        break;
    }
    Crypto_HMACGenCallbackCancel();
  }
}
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenCallbackCancel
(
  void
)
{
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
  if(TRUE == Crypto_HMACGenCtx.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_HMACGenCtx.ResultVal)
         && (NULL_PTR != Crypto_HMACGenCtx.IsBusy)
       )
    {
      *Crypto_HMACGenCtx.IsBusy = FALSE;
      *Crypto_HMACGenCtx.ResultVal = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_HMACGenCtx.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_HMACGenCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_HMACGenCtx.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_HMACGenCtx.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_HMACGenCtx.Crypto_Generic_Callback
    (
      Crypto_HMACGenCtx.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_HMACGenCtx.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_HMACGenCtx.ResultVal)
           && (NULL_PTR != Crypto_HMACGenCtx.IsBusy)
         )
      {
        *Crypto_HMACGenCtx.IsBusy = FALSE;
        *Crypto_HMACGenCtx.ResultVal =
        Crypto_HMACGenCtx.CallbackResult;
      }
      if (
           (
             CRYPTO_PROCESSING_ASYNC ==
             Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
           ) &&
           (
             (
               CRYPTO_OPERATIONMODE_SINGLECALL ==
               (
                 CRYPTO_OPERATIONMODE_SINGLECALL &
                 Crypto_HMACGenCtx.Job->jobPrimitiveInputOutput.mode
               )
             ) ||
             (
               (
                 CRYPTO_OPERATIONMODE_STREAMSTART ==
                 (
                   CRYPTO_OPERATIONMODE_STREAMSTART &
                   Crypto_HMACGenCtx.Job->jobPrimitiveInputOutput.mode
                 )
               )
             )
           ) && (Crypto_HMACGenCtx.CurrentMode == CRYPTO_OPERATIONMODE_START)
         )
      {
        (void) Crypto_AL_MACGENERATE_SHA2_256_HMAC_Update
        (
          Crypto_HMACGenCtx.ObjId,
          Crypto_HMACGenCtx.Job
        );
      }
      else
      {
        if(
            (
              CRYPTO_PROCESSING_ASYNC ==
              Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
            ) &&
            (
              (
                CRYPTO_OPERATIONMODE_SINGLECALL ==
                (
                  CRYPTO_OPERATIONMODE_SINGLECALL &
                  Crypto_HMACGenCtx.Job->jobPrimitiveInputOutput.mode
                )
              )
            ) && (Crypto_HMACGenCtx.CurrentMode == CRYPTO_OPERATIONMODE_UPDATE)
          )
        {
          (void) Crypto_AL_MACGENERATE_SHA2_256_HMAC_Finish(
                                                                       Crypto_HMACGenCtx.ObjId,
                                                                       Crypto_HMACGenCtx.Job
                                                                     );
        }
      }
      Crypto_HMACGenCtx.Crypto_Generic_Callback
      (
        Crypto_HMACGenCtx.Job,
        Crypto_HMACGenCtx.CallbackResult
      );
      Crypto_HMACGenCtx.CallbackFlag = FALSE;
    }
  }
}
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenDefaultWaitState
(
  void
)
{
  switch (Crypto_HMACGenCtx.State)
  {
    case CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY:
    case CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_UPDATE:
    case CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_FINISH:
    case CRYPTO_HMAC_G_S_WAIT_FOR_INIT1:
    case CRYPTO_HMAC_G_S_WAIT_FOR_INIT2:
    case CRYPTO_HMAC_G_S_WAIT_FOR_UPDATE:
    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH1:
    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH2:
    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH3:
    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH4:
    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH5:
    /* Only called in asynchronous processing type */
    Crypto_SHA2256HelperMainFunction();
    break;

    case CRYPTO_HMAC_G_S_INITIALIZED:
    default:
    {
      /* Nothing to do. */
    }
    break;
  }
}
static FUNC(void, CRYPTO_CODE) Crypto_HMACGenCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
)
{
  /*The callback shall always be called with Result E_OK, because the hash is called through
  helpers, always using valid inputs. */
  switch (Crypto_HMACGenCtx.State)
  {
    case CRYPTO_HMAC_G_S_WAIT_FOR_INIT1:
      {
        uint8 BytesDone = (uint8)0U;

        /* !LINKSTO EB_Crypto_CryptAlgos_0808,1 */
        /* Fill the pad buffer */
        do
        {
          Crypto_HMACGenCtx.ProcessedKey[BytesDone] =
            (
             ((uint8)Crypto_HMACGenCtx.ProcessedKey[BytesDone]) ^
             ((uint8)CRYPTO_HMAC_IPAD)
            );
          BytesDone++;
        } while (
                 ((uint8)CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES > BytesDone) &&
                 ((uint8)Crypto_HMACGenCtx.ProcessedKeyLength > BytesDone)
                );

        /* Fill the rest of buffer with the ipad */
        while ((uint8) CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES > BytesDone)
        {
          Crypto_HMACGenCtx.ProcessedKey[BytesDone] =
            (uint8) CRYPTO_HMAC_IPAD;
          BytesDone++;
        }

        Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_INIT2;
      }
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_HASHKEY_UPDATE;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_UPDATE:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_HASHKEY_FINISH;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_FINISH:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_HASHKEY_INIT;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_INIT2:

      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_INITIALIZED;

      Crypto_HMACGenCtx.CallbackFlag = TRUE;
      Crypto_HMACGenCtx.CallbackResult = E_OK;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_UPDATE:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_INITIALIZED;

      Crypto_HMACGenCtx.CallbackFlag = TRUE;
      Crypto_HMACGenCtx.CallbackResult = E_OK;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH1:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_FINISH2;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH2:
      {
        uint8 BytesDone;
        uint8 IpadXorOpad;
        BytesDone = (uint8)0U;
        IpadXorOpad = (((uint8)CRYPTO_HMAC_OPAD) ^ ((uint8)CRYPTO_HMAC_IPAD));

        /* !LINKSTO EB_Crypto_CryptAlgos_0810,1 */
        /* Fill the pad buffer of ProcessedKey, but no more than 63 bytes */
        do
        {
          Crypto_HMACGenCtx.ProcessedKey[BytesDone] =
            (uint8)((uint8)(Crypto_HMACGenCtx.ProcessedKey[BytesDone]) ^ (IpadXorOpad));
          BytesDone++;
        } while ((uint8) CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES > BytesDone);

        Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_FINISH3;
      }
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH3:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_FINISH4;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH4:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_FINISH5;
      break;

    case CRYPTO_HMAC_G_S_WAIT_FOR_FINISH5:
      Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_IDLE;
      Crypto_HMACGenCtx.CallbackFlag = TRUE;
      Crypto_HMACGenCtx.CallbackResult = E_OK;
      break;

    default:
    {
      /* Nothing to do.  */
    }
    break;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(Result);
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStatePrepareKey
(
  void
)
{
  /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeSmallerThanBlockSize,1 */
  if (CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES >= Crypto_HMACGenCtx.Key.length)
  {
    uint8 BytesDone = (uint8)0U;

    Crypto_HMACGenCtx.ProcessedKeyLength = (uint32)Crypto_HMACGenCtx.Key.length;

    do
    {
      Crypto_HMACGenCtx.ProcessedKey[BytesDone] =
        (((uint8) Crypto_HMACGenCtx.Key.data[BytesDone]));
      BytesDone++;
    } while (BytesDone < (uint8) Crypto_HMACGenCtx.ProcessedKeyLength);
  }

  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_INIT1;
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateInit1
(
  void
)
{
  /* Check key length */
  if (CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES < Crypto_HMACGenCtx.Key.length)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeLargerThanBlockSize,1 */
    Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY;
  }
  else
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeSmallerThanBlockSize,1,
                EB_Crypto_CryptAlgos_0807_KeySizeEqualToBlockSize,1 */
    Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_INIT1;
  }

  /* Initialize the underlying hash algorithm to hash the key */
  Crypto_SHA2256HelperStart
  (
    Crypto_HMACGenCtx.ObjId,
    &Crypto_HMACGenCallback,
    Crypto_HMACGenCtx.Job,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateHashKeyUpdate
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_UPDATE;

  /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeLargerThanBlockSize,1 */
  /* Hash the key, as it's length exceeds the hashing algorithm block length */
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACGenCtx.Key.data,
    Crypto_HMACGenCtx.Key.length,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateHashKeyFinish
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_HASHKEY_FINISH;

  /* Finish the hashing function and store the hashed key into "ProcessedKey" */
  Crypto_HMACGenCtx.ProcessedKeyLength = sizeof(Crypto_HMACGenCtx.HashResult);
  (void)Crypto_SHA2256HelperFinish
  (
    Crypto_HMACGenCtx.ProcessedKey,
    &(Crypto_HMACGenCtx.ProcessedKeyLength),
    FALSE,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateHashKeyInit
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_INIT1;

  /* Initialize the underlying hash algorithm to hash the key and user-provided data */
  Crypto_SHA2256HelperStart
  (
    Crypto_HMACGenCtx.ObjId,
    &Crypto_HMACGenCallback,
    Crypto_HMACGenCtx.Job,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateInit2
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_INIT2;

  /* !LINKSTO EB_Crypto_CryptAlgos_0809,1 */
  /* Bring the new key into the context of the hash algorithm */
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACGenCtx.ProcessedKey,
    CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );

}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateUpdate
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_UPDATE;

  /* !LINKSTO EB_Crypto_CryptAlgos_0809,1 */
  /* Hash the user provided data */
 (void)Crypto_SHA2256HelperUpdate
 (
   Crypto_HMACGenCtx.Data,
   Crypto_HMACGenCtx.DataLength,
   Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
 );

}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish1
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_FINISH1;

  /* Finish the hashing function and receive the hashed value */
  Crypto_HMACGenCtx.HashResultLength = sizeof(Crypto_HMACGenCtx.HashResult);
  (void)Crypto_SHA2256HelperFinish
  (
    Crypto_HMACGenCtx.HashResult,
    &(Crypto_HMACGenCtx.HashResultLength),
    FALSE,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish2
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_FINISH2;

  /* Initialize the hash interface again for the computation of the outer padding */
  Crypto_SHA2256HelperStart
  (
    Crypto_HMACGenCtx.ObjId,
    &Crypto_HMACGenCallback,
    Crypto_HMACGenCtx.Job,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish3
(
  void
)
{
  /* !LINKSTO EB_Crypto_CryptAlgos_0811,1 */
  /* Bring the key into the context of the hash algorithm */
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_FINISH3;
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACGenCtx.ProcessedKey,
    CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish4
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_FINISH4;

  /* !LINKSTO EB_Crypto_CryptAlgos_0811,1 */
  /* Update Hash context with inner hash value */
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACGenCtx.HashResult,
    Crypto_HMACGenCtx.HashResultLength,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACGenStateFinish5
(
  void
)
{
  Crypto_HMACGenCtx.State = CRYPTO_HMAC_G_S_WAIT_FOR_FINISH5;

  /* Compute the outer digest == MAC */
  (void)Crypto_SHA2256HelperFinish
  (
    Crypto_HMACGenCtx.Result,
    Crypto_HMACGenCtx.ResultLengthPtr,
    Crypto_HMACGenCtx.TruncationIsAllowed,
    Crypto_HMACGenCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_MACGENERATE_SHA2_256_Crypto_HMAC_CallBack
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
           (CRYPTO_OPERATIONMODE_FINISH & Crypto_HMACGenCtx.CurrentMode)
         ) ||
         (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_HMACGenCtx.CurrentMode = CRYPTO_MAC_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_HMACGenCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_HMACGenCtx.ObjId].CurrentJob = NULL_PTR;
      Crypto_DriverObjects[Crypto_HMACGenCtx.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_MACGENERATE_AES_HMAC_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_HMACGenCtx.CurrentMode)
         ) &&
         (
           (
             CRYPTO_OPERATIONMODE_SINGLECALL !=
             (
               CRYPTO_OPERATIONMODE_SINGLECALL &
               Crypto_HMACGenCtx.Job->jobPrimitiveInputOutput.mode
             )
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

#endif /* #if (CRYPTO_HMAC_GEN_ENABLED == STD_ON) */

/*--HMAC-VRFY-------------------------------------------------------------------------------------*/

#if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_AES_HMAC_Reset
(
  void
)
{
  Crypto_AL_HASH_SHA2_NOT_SET_Reset();
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  TS_MemBZero(&Crypto_HMACVrfyCtx, sizeof(Crypto_HMACVrfyCtx));
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
}

/* !LINKSTO EB_Crypto_CryptAlgos_0969, 1 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyStart
(
  P2CONST(void,                        AUTOMATIC, CRYPTO_APPL_DATA)        CfgPtr,
  P2CONST(Crypto_SymKeyType, AUTOMATIC, CRYPTO_APPL_DATA)        KeyPtr
)
{

  P2CONST(Crypto_HMACVrfyConfigType, AUTOMATIC, CRYPTO_APPL_DATA) LocCfgPtr =
    (P2CONST(Crypto_HMACVrfyConfigType, AUTOMATIC, CRYPTO_APPL_DATA)) CfgPtr;

  /* Store data into context */
  TS_MemCpy(Crypto_HMACVrfyCtx.Key.data, KeyPtr->data, KeyPtr->length);
  Crypto_HMACVrfyCtx.Key.length = KeyPtr->length;
  Crypto_HMACVrfyCtx.Crypto_Generic_Callback = LocCfgPtr->Crypto_Generic_Callback;
  Crypto_HMACVrfyCtx.ObjId = LocCfgPtr->ObjId;
  Crypto_HMACVrfyCtx.Job = LocCfgPtr->Job;

  /* Set state of the state machine to start */
  Crypto_HMACVrfyStatePrepareKey();
  Crypto_HMACVrfyCtx.CurrentMode = CRYPTO_OPERATIONMODE_START;
  return E_OK;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyUpdate
(
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA) DataPtr,
  uint32                                                DataLength
)
{
  Std_ReturnType RetVal;

  if (CRYPTO_HMAC_V_S_INITIALIZED == Crypto_HMACVrfyCtx.State)
  {
    /* Store data into context */
    Crypto_HMACVrfyCtx.Data = DataPtr;
    Crypto_HMACVrfyCtx.DataLength = DataLength;

    /* Set state of the state machine to update */
    Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_UPDATE;

    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyFinish
(
  P2CONST(uint8, AUTOMATIC,     CRYPTO_APPL_DATA)               AuthenticationPtr,
          uint32                                                          AuthenticationLength,
  P2VAR  (Crypto_VerifyResultType, AUTOMATIC, CRYPTO_APPL_DATA) ResultPtr
)
{
  Std_ReturnType RetVal;

  if (CRYPTO_HMAC_V_S_INITIALIZED == Crypto_HMACVrfyCtx.State)
  {
    if(AuthenticationLength <= (CRYPTO_HMAC_HASH_MAX_LEN * 8U))
    {
      /* Store data into context */
      Crypto_HMACVrfyCtx.ResultPtr = ResultPtr;
      Crypto_HMACVrfyCtx.HashResultLength = AuthenticationLength;
      Crypto_HMACVrfyCtx.MacLength = AuthenticationLength;
      Crypto_HMACVrfyCtx.Mac = AuthenticationPtr;

      /* Set state of the state machine to finish */
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_FINISH1;

      RetVal = E_OK;
    }
    else
    {
      /*AuthenticationLength too large for the verification.*/
      RetVal = E_NOT_OK;
    }
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyMainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if (FALSE == Crypto_CheckSkipMain(Result, Busy, Crypto_HMACVrfyCtx.ObjId))
  {
    Crypto_HMACVrfyCtx.ResultVal = Result;
    Crypto_HMACVrfyCtx.IsBusy = Busy;
    if ((NULL_PTR != Result) && (NULL_PTR != Busy))
    {
      *Crypto_HMACVrfyCtx.ResultVal = E_OK;
      *Crypto_HMACVrfyCtx.IsBusy = TRUE;
    }
    switch (Crypto_HMACVrfyCtx.State)
    {
      case CRYPTO_HMAC_V_S_INIT1:
        Crypto_HMACVrfyStateInit1();
        break;

      case CRYPTO_HMAC_V_S_HASHKEY_UPDATE:
        Crypto_HMACVrfyStateHashKeyUpdate();
        break;

      case CRYPTO_HMAC_V_S_HASHKEY_FINISH:
        Crypto_HMACVrfyStateHashKeyFinish();
        break;

      case CRYPTO_HMAC_V_S_HASHKEY_INIT:
        Crypto_HMACVrfyStateHashKeyInit();
        break;

      case CRYPTO_HMAC_V_S_INIT2:
        Crypto_HMACVrfyStateInit2();
        break;

      case CRYPTO_HMAC_V_S_UPDATE:

        Crypto_HMACVrfyCtx.ResultVal = Result;
        Crypto_HMACVrfyCtx.IsBusy = Busy;
        if ((NULL_PTR != Result) && (NULL_PTR != Busy))
        {
          *Crypto_HMACVrfyCtx.IsBusy = TRUE;
        }
        Crypto_HMACVrfyCtx.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
        Crypto_HMACVrfyStateUpdate();
        break;

      case CRYPTO_HMAC_V_S_FINISH1:

        /* The mode is set to FINISH so that the job and the driver object can be set to idle. */
        Crypto_HMACVrfyCtx.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
        Crypto_HMACVrfyCtx.ResultVal = Result;
        Crypto_HMACVrfyCtx.IsBusy = Busy;
        if ((NULL_PTR != Result) && (NULL_PTR != Busy))
        {
          *Crypto_HMACVrfyCtx.IsBusy = TRUE;
        }

        Crypto_HMACVrfyStateFinish1();
        break;

      case CRYPTO_HMAC_V_S_FINISH2:
        Crypto_HMACVrfyStateFinish2();
        break;

      case CRYPTO_HMAC_V_S_FINISH3:
        Crypto_HMACVrfyStateFinish3();
        break;

      case CRYPTO_HMAC_V_S_FINISH4:
        Crypto_HMACVrfyStateFinish4();
        break;

      case CRYPTO_HMAC_V_S_FINISH5:
        Crypto_HMACVrfyStateFinish5();
        break;

      case CRYPTO_HMAC_V_S_FINISH_COMPARE:
        if (Crypto_HMACVrfyCompareHMAC() == E_OK)
        {
          /* !LINKSTO EB_Crypto_CryptAlgos_0812_VerificationSucceded,1 */
          *Crypto_HMACVrfyCtx.ResultPtr = CRYPTO_E_VER_OK;
        }
        else
        {
          /* !LINKSTO EB_Crypto_CryptAlgos_0812_VerificationFailed,1 */
          *Crypto_HMACVrfyCtx.ResultPtr = CRYPTO_E_VER_NOT_OK;
        }

        Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_IDLE;

        Crypto_HMACVrfyCtx.CallbackFlag = TRUE;
        Crypto_HMACVrfyCtx.CallbackResult = E_OK;
        if (
             (NULL_PTR != Crypto_HMACVrfyCtx.ResultVal) &&
             (NULL_PTR != Crypto_HMACVrfyCtx.IsBusy)
           )
        {
          *Crypto_HMACVrfyCtx.IsBusy = FALSE;
          *Crypto_HMACVrfyCtx.ResultVal = E_OK;
        }
        break;
        default:
        Crypto_HMACVrfy_Default_Wait_State();
          break;
    }
    Crypto_HMACVrfyCallbackCancel();
  }
}
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyCallbackCancel
(
  void
)
{
  /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00181, 1, SWS_Crypto_00144_CORRECTION, 1 */
  if(TRUE == Crypto_HMACVrfyCtx.CancelFlag)
  {
    if (
         (NULL_PTR != Crypto_HMACVrfyCtx.ResultVal)
         && (NULL_PTR != Crypto_HMACVrfyCtx.IsBusy)
       )
    {
      *Crypto_HMACVrfyCtx.IsBusy = FALSE;
      *Crypto_HMACVrfyCtx.ResultVal = CRYPTO_E_JOB_CANCELED;
      /* processingType is synchronous */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Crypto_HMACVrfyCtx.Job->jobState = CRYPTO_JOBSTATE_IDLE;
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_HMACVrfyCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_HMACVrfyCtx.ObjId].CurrentJob =
      NULL_PTR;
      Crypto_DriverObjects[Crypto_HMACVrfyCtx.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
    Crypto_HMACVrfyCtx.Crypto_Generic_Callback
    (
      Crypto_HMACVrfyCtx.Job,
      CRYPTO_E_JOB_CANCELED
    );
  }
  else
  {
    if(TRUE == Crypto_HMACVrfyCtx.CallbackFlag)
    {
      if (
           (NULL_PTR != Crypto_HMACVrfyCtx.ResultVal)
           && (NULL_PTR != Crypto_HMACVrfyCtx.IsBusy)
         )
      {
        *Crypto_HMACVrfyCtx.IsBusy = FALSE;
        *Crypto_HMACVrfyCtx.ResultVal =
        Crypto_HMACVrfyCtx.CallbackResult;
      }
      if (
           (
             CRYPTO_PROCESSING_ASYNC ==
             Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
           ) &&
           (
             (
               CRYPTO_OPERATIONMODE_SINGLECALL ==
               (
                 CRYPTO_OPERATIONMODE_SINGLECALL &
                 Crypto_HMACVrfyCtx.Job->jobPrimitiveInputOutput.mode
               )
             ) ||
             (
               (
                 CRYPTO_OPERATIONMODE_STREAMSTART ==
                 (
                   CRYPTO_OPERATIONMODE_STREAMSTART &
                   Crypto_HMACVrfyCtx.Job->jobPrimitiveInputOutput.mode
                 )
               )
             )
           ) && (Crypto_HMACVrfyCtx.CurrentMode == CRYPTO_OPERATIONMODE_START)
         )
      {
        (void) Crypto_AL_MACVERIFY_SHA2_256_HMAC_Update
        (
          Crypto_HMACVrfyCtx.ObjId,
          Crypto_HMACVrfyCtx.Job
        );
      }
      else
      {
        if(
            (
              CRYPTO_PROCESSING_ASYNC ==
              Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
            ) &&
            (
              (
                CRYPTO_OPERATIONMODE_SINGLECALL ==
                (
                  CRYPTO_OPERATIONMODE_SINGLECALL &
                  Crypto_HMACVrfyCtx.Job->jobPrimitiveInputOutput.mode
                )
              )
            ) && (Crypto_HMACVrfyCtx.CurrentMode == CRYPTO_OPERATIONMODE_UPDATE)
          )
        {
          (void) Crypto_AL_MACVERIFY_SHA2_256_HMAC_Finish
          (
            Crypto_HMACVrfyCtx.ObjId,
            Crypto_HMACVrfyCtx.Job
          );
        }
      }
      Crypto_HMACVrfyCtx.Crypto_Generic_Callback
      (
        Crypto_HMACVrfyCtx.Job,
        Crypto_HMACVrfyCtx.CallbackResult
      );
      Crypto_HMACVrfyCtx.CallbackFlag = FALSE;
    }
  }
}
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyCallback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
)
{
  switch (Crypto_HMACVrfyCtx.State)
  {
    case CRYPTO_HMAC_V_S_WAIT_FOR_INIT1:
      {
        uint8 BytesDone = (uint8) 0U;

        /* !LINKSTO EB_Crypto_CryptAlgos_0808,1 */
        /* Fill the pad buffer */
        do
        {
          Crypto_HMACVrfyCtx.ProcessedKey[BytesDone] =
            (
              (Crypto_HMACVrfyCtx.ProcessedKey[BytesDone]) ^
              ((uint8) CRYPTO_HMAC_IPAD)
            );
          BytesDone++;
        } while (
                  ((uint8) CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES > BytesDone) &&
                  ((uint8) Crypto_HMACVrfyCtx.ProcessedKeyLength > BytesDone)
                );

        /* Fill the rest of buffer with the ipad */
        while ((uint8) CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES > BytesDone)
        {
          Crypto_HMACVrfyCtx.ProcessedKey[BytesDone] =
            (uint8) CRYPTO_HMAC_IPAD;
          BytesDone++;
        }

        Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_INIT2;
      }
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_HASHKEY_UPDATE;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_UPDATE:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_HASHKEY_FINISH;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_FINISH:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_HASHKEY_INIT;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_INIT2:

      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_INITIALIZED;

      Crypto_HMACVrfyCtx.CallbackFlag = TRUE;
      Crypto_HMACVrfyCtx.CallbackResult = E_OK;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_UPDATE:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_INITIALIZED;

      Crypto_HMACVrfyCtx.CallbackFlag = TRUE;
      Crypto_HMACVrfyCtx.CallbackResult = E_OK;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH1:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_FINISH2;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH2:
      {
        uint8 BytesDone;
        uint8 IpadXorOpad;
        BytesDone = (uint8) 0U;
        IpadXorOpad = (
                        ((uint8) CRYPTO_HMAC_OPAD) ^
                        ((uint8) CRYPTO_HMAC_IPAD)
                      );

        /* !LINKSTO EB_Crypto_CryptAlgos_0810,1 */
        /* Fill the pad buffer of ProcessedKey, but no more than 63 bytes */
        do
        {
          Crypto_HMACVrfyCtx.ProcessedKey[BytesDone] =
            (uint8) ((uint8) (Crypto_HMACVrfyCtx.ProcessedKey[BytesDone]) ^
                     (IpadXorOpad)
                    );
          BytesDone++;
        } while ((uint8) CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES > BytesDone);

        Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_FINISH3;
      }
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH3:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_FINISH4;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH4:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_FINISH5;
      break;

    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH5:
      Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_FINISH_COMPARE;
      break;

    /* CHECK: NOPARSE */
    /*All the valid (wait) stated have been addressed in the cases above.*/
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

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStatePrepareKey
(
  void
)
{
  /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeSmallerThanBlockSize,1 */
  if (CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES >= Crypto_HMACVrfyCtx.Key.length)
  {
    uint8 BytesDone = (uint8) 0U;

    Crypto_HMACVrfyCtx.ProcessedKeyLength =
      (uint32) Crypto_HMACVrfyCtx.Key.length;

    do
    {
      Crypto_HMACVrfyCtx.ProcessedKey[BytesDone] =
        (((uint8) Crypto_HMACVrfyCtx.Key.data[BytesDone]));
      BytesDone++;
    } while (BytesDone < (uint8) Crypto_HMACVrfyCtx.ProcessedKeyLength);
  }

  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_INIT1;
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateInit1
(
  void
)
{
  /* Check key length */
  if (CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES < Crypto_HMACVrfyCtx.Key.length)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeLargerThanBlockSize,1 */
    Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY;
  }
  else
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeSmallerThanBlockSize,1,
                EB_Crypto_CryptAlgos_0807_KeySizeEqualToBlockSize,1 */
    Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_INIT1;
  }

  /* Initialize the underlying hash algorithm to hash the key */
  Crypto_SHA2256HelperStart
  (
    Crypto_HMACVrfyCtx.ObjId,
    &Crypto_HMACVrfyCallback,
    Crypto_HMACVrfyCtx.Job,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateHashKeyUpdate
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_UPDATE;

  /* !LINKSTO EB_Crypto_CryptAlgos_0807_KeySizeLargerThanBlockSize,1 */
  /* Hash the key, as it's length exceeds the hashing algorithm block length */
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACVrfyCtx.Key.data,
    Crypto_HMACVrfyCtx.Key.length,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateHashKeyFinish
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_FINISH;

  /* Finish the hashing function and store the hashed key into "ProcessedKey" */
  Crypto_HMACVrfyCtx.ProcessedKeyLength = sizeof(Crypto_HMACVrfyCtx.HashResult);

  (void)Crypto_SHA2256HelperFinish
  (
    Crypto_HMACVrfyCtx.ProcessedKey,
    &(Crypto_HMACVrfyCtx.ProcessedKeyLength),
    FALSE,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateHashKeyInit
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_INIT1;

  /* Initialize the underlying hash algorithm to hash the key and user-provided data */
  Crypto_SHA2256HelperStart
  (
    Crypto_HMACVrfyCtx.ObjId,
    &Crypto_HMACVrfyCallback,
    Crypto_HMACVrfyCtx.Job,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateInit2
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_INIT2;

  /* !LINKSTO EB_Crypto_CryptAlgos_0809,1 */
  /* Bring the new key into the context of the hash algorithm */
  (void)Crypto_SHA2256HelperUpdate(
                                              Crypto_HMACVrfyCtx.ProcessedKey,
                                              CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES,
                                              Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
                                            );

}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateUpdate
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_UPDATE;

  /* !LINKSTO EB_Crypto_CryptAlgos_0809,1 */
  /* Hash the user provided data */
  (void)Crypto_SHA2256HelperUpdate(
                                              Crypto_HMACVrfyCtx.Data,
                                              Crypto_HMACVrfyCtx.DataLength,
                                              Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
                                            );

}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish1
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_FINISH1;

  /* Finish the hashing function and receive the hashed value */
  Crypto_HMACVrfyCtx.HashResultLength = sizeof(Crypto_HMACVrfyCtx.HashResult);
  (void)Crypto_SHA2256HelperFinish
  (
    Crypto_HMACVrfyCtx.HashResult,
    &(Crypto_HMACVrfyCtx.HashResultLength),
    FALSE,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish2
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_FINISH2;

  /* Initialize the hash interface again for the computation of the outer padding */
  Crypto_SHA2256HelperStart
  (
    Crypto_HMACVrfyCtx.ObjId,
    &Crypto_HMACVrfyCallback,
    Crypto_HMACVrfyCtx.Job,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish3
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_FINISH3;

  /* !LINKSTO EB_Crypto_CryptAlgos_0811,1 */
  /* Bring the key into the context of the hash algorithm */
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACVrfyCtx.ProcessedKey,
    CRYPTO_HMAC_HASH_BLOCK_LEN_BYTES,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish4
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_FINISH4;

  /* !LINKSTO EB_Crypto_CryptAlgos_0811,1 */
  /* Update Hash context with inner hash value */
  (void)Crypto_SHA2256HelperUpdate
  (
    Crypto_HMACVrfyCtx.HashResult,
    Crypto_HMACVrfyCtx.HashResultLength,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}

static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfyStateFinish5
(
  void
)
{
  Crypto_HMACVrfyCtx.State = CRYPTO_HMAC_V_S_WAIT_FOR_FINISH5;

  /* Compute the outer digest == MAC */
  (void)Crypto_SHA2256HelperFinish
  (
    Crypto_HMACVrfyCtx.HashResult,
    &(Crypto_HMACVrfyCtx.HashResultLength),
    FALSE,
    Crypto_HMACVrfyCtx.Job->jobPrimitiveInfo->processingType
  );
}
static FUNC(void, CRYPTO_CODE) Crypto_HMACVrfy_Default_Wait_State
(
  void
)
{
  switch (Crypto_HMACVrfyCtx.State)
  {
    case CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY:
    case CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_UPDATE:
    case CRYPTO_HMAC_V_S_WAIT_FOR_HASHKEY_FINISH:
    case CRYPTO_HMAC_V_S_WAIT_FOR_INIT1:
    case CRYPTO_HMAC_V_S_WAIT_FOR_INIT2:
    case CRYPTO_HMAC_V_S_WAIT_FOR_UPDATE:
    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH1:
    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH2:
    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH3:
    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH4:
    case CRYPTO_HMAC_V_S_WAIT_FOR_FINISH5:
    /* Only called in asynchronous processing type */
    Crypto_SHA2256HelperMainFunction();
    break;

    case CRYPTO_HMAC_V_S_INITIALIZED:

    default:
    {
      /* Nothing to do */
    }
    break;

  }
}
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HMACVrfyCompareHMAC
(
  void
)
{
  Std_ReturnType RetVal = E_OK;
  uint8 i;
  uint8 Mask;
  /* Compare whole bytes */
  for (i = 0U; i < (Crypto_HMACVrfyCtx.MacLength / 8U); i++)
  {
    if (Crypto_HMACVrfyCtx.Mac[i] != Crypto_HMACVrfyCtx.HashResult[i])
    {
      RetVal = E_NOT_OK;
      break;
    }
  }

  /* Compare rest of bits */
  if (0U < (Crypto_HMACVrfyCtx.MacLength % 8U))
  {
    Mask = 0x00U;

    for (i = 0U; i < (Crypto_HMACVrfyCtx.MacLength % 8U); i++)
    {
      Mask = (Mask >> 1U) + 0x80U;
    }

    if(
        (
          (Crypto_HMACVrfyCtx.Mac[(Crypto_HMACVrfyCtx.MacLength / 8U)]) & Mask
        ) !=
        (
          (
            Crypto_HMACVrfyCtx.HashResult[(Crypto_HMACVrfyCtx.MacLength / 8U)]
          ) &
          Mask
        )
      )
    {
      RetVal = E_NOT_OK;
    }
  }
  return RetVal;
}
static FUNC(void, CRYPTO_CODE) Crypto_AL_MACVERIFY_SHA2_256_Crypto_HMAC_CallBack
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
           (CRYPTO_OPERATIONMODE_FINISH & Crypto_HMACVrfyCtx.CurrentMode)
         ) ||
         (E_OK != Error)
       )
    {
      /* !LINKSTO SWS_Crypto_00025, 1 */
      /* !LINKSTO SWS_Crypto_00119, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;
      Crypto_HMACVrfyCtx.CurrentMode = CRYPTO_MAC_DEFAULT_CURRENT_MODE;
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      Crypto_DriverObjects[Crypto_HMACVrfyCtx.ObjId].DriverObjectState =
        CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      Crypto_DriverObjects[Crypto_HMACVrfyCtx.ObjId].CurrentJob = NULL_PTR;
      Crypto_DriverObjects[Crypto_HMACVrfyCtx.ObjId].SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      CryIf_CallbackNotification(Job, Error);
      Crypto_AL_MACVERIFY_AES_HMAC_Reset();
    }
    if (
         (
           CRYPTO_OPERATIONMODE_UPDATE ==
           (CRYPTO_OPERATIONMODE_UPDATE & Crypto_HMACVrfyCtx.CurrentMode)
         ) &&
         (
           (
             CRYPTO_OPERATIONMODE_SINGLECALL !=
             (
               CRYPTO_OPERATIONMODE_SINGLECALL &
               Crypto_HMACVrfyCtx.Job->jobPrimitiveInputOutput.mode
             )
           )
         )
       )
    {
      CryIf_CallbackNotification(Job, Error);
    }
  }
}

#endif /* #if (CRYPTO_HMAC_VRFY_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

#endif /* #if ((CRYPTO_CMAC_GEN_ENABLED == STD_ON) ||
               (CRYPTO_CMAC_VRFY_ENABLED == STD_ON) ||
               (CRYPTO_HMAC_GEN_ENABLED == STD_ON) ||
               (CRYPTO_HMAC_VRFY_ENABLED == STD_ON)) */

/*==[end of file]=================================================================================*/

