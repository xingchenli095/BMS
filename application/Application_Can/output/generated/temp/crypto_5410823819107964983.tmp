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

#include <Std_Types.h>
#include <TSAutosar.h>
#include <Csm_Types.h>
#include <CryIf_Cbk.h>
#include <Crypto.h>
#include <Crypto_KeyManagement.h>
#include <Crypto_AL_Common.h>
#include <Crypto_AL_RsaesOaep.h>
#include <Crypto_AL_Random.h>
#include <Crypto_AL_Hash.h>
#include <Crypto_AL_SHA3.h>
#include <Crypto_AL_KeyManagement.h>

#include <TSMem.h>
#include <SchM_Crypto.h>

#if ( (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) || \
      (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)    \
    )

/*==[Macros]======================================================================================*/

#if (defined CRYPTO_RSAESOAEP_DEFAULT_CURRENT_MODE)
#error CRYPTO_RSAESOAEP_DEFAULT_CURRENT_MODE is already defined
#endif
/** \brief To set the default current mode. */
#define CRYPTO_RSAESOAEP_DEFAULT_CURRENT_MODE 0x00U

#if (defined CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD)
  #error CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD is already defined
#endif
/** \brief The maximum length in words of the RSA key. */
#define CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD \
(CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE / CRYPTO_LN_WORD_LEN_BYTES) + 1U

#if (defined CRYPTO_RSAESOAEP_HASH_MAX_LEN)
#error CRYPTO_RSAESOAEP_HASH_MAX_LEN is already defined
#endif
/** \brief The maximal allowed length for a hash digest in bytes. */
#define CRYPTO_RSAESOAEP_HASH_MAX_LEN 64U

#if (defined CRYPTO_RSAESOAEP_MAX_DB_LEN)
#error CRYPTO_RSAESOAEP_MAX_DB_LEN is already defined
#endif
/** \brief The maximum length to allocate of DB buffer. Not the actual size of DB. */
#define CRYPTO_RSAESOAEP_MAX_DB_LEN CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE

#if (defined CRYPTO_RSAESOAEP_MASK_CNT_LEN)
#error CRYPTO_RSAESOAEP_MASK_CNT_LEN is already defined
#endif
/** \brief The length of count unsed during MGF. */
#define CRYPTO_RSAESOAEP_MASK_CNT_LEN 4U

#if (defined CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE)
#error CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE is already defined
#elif (8U > CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE)
#error CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE is to small
#endif
/** \brief The maximum length in bytes of the RSA key (modulus + exponent)
 *         The size of two Tags(a 1Byte), two lengths (a 2Byte) and at least 1 Byte
 *         modulo or exponent can be subtracted.
 */
#define CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE \
(CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE - 7U)

#if (defined CRYPTO_AL_DER_SEQUENCE_TAG)
#error CRYPTO_AL_DER_SEQUENCE_TAG is already defined
#endif
/** \brief The DER tag of a Sequence. */
#define CRYPTO_AL_DER_SEQUENCE_TAG 0x30U

#if (defined CRYPTO_AL_DER_INTEGER_TAG)
#error CRYPTO_AL_DER_INTEGER_TAG is already defined
#endif
/** \brief The DER tag of a Integer. */
#define CRYPTO_AL_DER_INTEGER_TAG 0x02U

/*--Crypto_RsaesOaepEncryptStateType----------------------------------------------------*/

#if (defined CRYPTO_RSAESOAEP_ENC_IDLE_START)
#error CRYPTO_RSAESOAEP_ENC_IDLE_START is already defined
#endif
/** \brief The initialization of the algorithm is in progress. */
#define CRYPTO_RSAESOAEP_ENC_IDLE_START           2U

#if (defined CRYPTO_RSAESOAEP_ENC_HASH_START)
#error CRYPTO_RSAESOAEP_ENC_HASH_START is already defined
#endif
/** \brief Call the Hash start operation. */
#define CRYPTO_RSAESOAEP_ENC_HASH_START           3U

#if (defined CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT)
#error CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT is already defined
#endif
/** \brief The Hash start operation is in progress. */
#define CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT      4U

#if (defined CRYPTO_RSAESOAEP_ENC_HASH_UPDATE)
#error CRYPTO_RSAESOAEP_ENC_HASH_UPDATE is already defined
#endif
/** \brief Call the Hash update operation. */
#define CRYPTO_RSAESOAEP_ENC_HASH_UPDATE          5U

#if (defined CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT)
#error CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT is already defined
#endif
/** \brief The Hash update operation is in progress. */
#define CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT     6U

#if (defined CRYPTO_RSAESOAEP_ENC_HASH_FINISH)
#error CRYPTO_RSAESOAEP_ENC_HASH_FINISH is already defined
#endif
/** \brief Call the Hash finish operation. */
#define CRYPTO_RSAESOAEP_ENC_HASH_FINISH          7U

#if (defined CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT)
#error CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT is already defined
#endif
/** \brief The Hash finish operation is in progress. */
#define CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT     8U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE)
  #error CRYPTO_RSAESOAEP_ENC_UPDATE is already defined
#endif
/** \brief The update operation of the algorithm is in progress. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE               9U

#if (defined CRYPTO_RSAESOAEP_ENC_START_MASK)
  #error CRYPTO_RSAESOAEP_ENC_START_MASK is already defined
#endif
/** \brief Starting the Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_START_MASK           10U

#if (defined CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT is already defined
#endif
/** \brief Wait for the start Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT      11U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_MASK)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_MASK is already defined
#endif
/** \brief Update Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_MASK          12U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT     13U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK is already defined
#endif
/** \brief Update Count for Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK      14U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Count for Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT 15U

#if (defined CRYPTO_RSAESOAEP_ENC_END_MASK)
#error CRYPTO_RSAESOAEP_ENC_END_MASK is already defined
#endif
/** \brief End the Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_END_MASK             16U

#if (defined CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT is already defined
#endif
/** \brief Wait for Mask Hash End to finish. */
#define CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT        17U

#if (defined CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK)
#error CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK is already defined
#endif
/** \brief Check if another mask iteration is needed. */
#define CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK       18U

#if (defined CRYPTO_RSAESOAEP_ENC_DONE_MASK)
#error CRYPTO_RSAESOAEP_ENC_DONE_MASK is already defined
#endif
/** \brief Mask processing is done. */
#define CRYPTO_RSAESOAEP_ENC_DONE_MASK            19U

#if (defined CRYPTO_RSAESOAEP_ENC_SEED_START_MASK)
  #error CRYPTO_RSAESOAEP_ENC_START_SEED_MASK is already defined
#endif
/** \brief Starting the Seed Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_START_SEED_MASK      20U

#if (defined CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for the start Seed Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT 21U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK is already defined
#endif
/** \brief Update Seed Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK     22U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Seed Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT 23U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK is already defined
#endif
/** \brief Update Count for Seed Mask Hash. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK 24U

#if (defined CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Count for Seed Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT 25U

#if (defined CRYPTO_RSAESOAEP_ENC_END_SEED_MASK)
#error CRYPTO_RSAESOAEP_ENC_END_SEED_MASK is already defined
#endif
/** \brief End the seed mask hash. */
#define CRYPTO_RSAESOAEP_ENC_END_SEED_MASK       26U

#if (defined CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for Seed Mask Hash End to finish. */
#define CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT  27U

#if (defined CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK)
#error CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK is already defined
#endif
/** \brief Check if another seed mask iteration is needed. */
#define CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK 28U

#if (defined CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK)
#error CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK is already defined
#endif
/** \brief Mask processing is done. */
#define CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK      29U

#if (defined CRYPTO_RSAESOAEP_ENC_FINISH)
#error CRYPTO_RSAESOAEP_ENC_FINISH is already defined
#endif
/** \brief The finish operation of the algorithm is in progress. */
#define CRYPTO_RSAESOAEP_ENC_FINISH              30U

/*--State machine settings------------------------------------------------------------------------*/

#if (defined CRYPTO_SM_RSAESOAEP_ENC_TRANSITION_COUNT)
#error CRYPTO_SM_RSAESOAEP_ENC_TRANSITION_COUNT is already defined
#endif
/** \brief Number of transitions in Crypto_RsaesOaepEncryptCtxType.State state machine */
#define CRYPTO_SM_RSAESOAEP_ENC_TRANSITION_COUNT 58U

#if (defined CRYPTO_SM_RSAESOAEP_ENC_ACTION_COUNT)
#error CRYPTO_SM_RSAESOAEP_ENC_ACTION_COUNT is already defined
#endif
/** \brief Number of action functions in Crypto_RsaesOaepEncryptCtxType.State
 *         state machine
 */
#define CRYPTO_SM_RSAESOAEP_ENC_ACTION_COUNT 31U

/*--Crypto_RsaesOaepDecryptStateType----------------------------------------------------*/

#if (defined CRYPTO_RSAESOAEP_DEC_IDLE_START)
#error CRYPTO_RSAESOAEP_DEC_IDLE_START is already defined
#endif
/** \brief The initialization of the algorithm is in progress. */
#define CRYPTO_RSAESOAEP_DEC_IDLE_START          2U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE)
  #error CRYPTO_RSAESOAEP_DEC_UPDATE is already defined
#endif
/** \brief The update operation of the algorithm is in progress. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE              3U

#if (defined CRYPTO_RSAESOAEP_DEC_HASH_START)
#error CRYPTO_RSAESOAEP_DEC_HASH_START is already defined
#endif
/** \brief Call the Hash start operation. */
#define CRYPTO_RSAESOAEP_DEC_HASH_START          4U

#if (defined CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT)
#error CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT is already defined
#endif
/** \brief The Hash start operation is in progress. */
#define CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT     5U

#if (defined CRYPTO_RSAESOAEP_DEC_HASH_UPDATE)
#error CRYPTO_RSAESOAEP_DEC_HASH_UPDATE is already defined
#endif
/** \brief Call the Hash update operation. */
#define CRYPTO_RSAESOAEP_DEC_HASH_UPDATE         6U

#if (defined CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT)
#error CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT is already defined
#endif
/** \brief The Hash update operation is in progress. */
#define CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT    7U

#if (defined CRYPTO_RSAESOAEP_DEC_HASH_FINISH)
#error CRYPTO_RSAESOAEP_DEC_HASH_FINISH is already defined
#endif
/** \brief Call the Hash finish operation. */
#define CRYPTO_RSAESOAEP_DEC_HASH_FINISH         8U

#if (defined CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT)
#error CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT is already defined
#endif
/** \brief The Hash finish operation is in progress. */
#define CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT    9U

#if (defined CRYPTO_RSAESOAEP_DEC_SEED_START_MASK)
  #error CRYPTO_RSAESOAEP_DEC_START_SEED_MASK is already defined
#endif
/** \brief Starting the Seed Mask Hash. */
#define CRYPTO_RSAESOAEP_DEC_START_SEED_MASK 10U

#if (defined CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for the start Seed Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT 11U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK is already defined
#endif
/** \brief Update Seed Mask Hash. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK 12U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Seed Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT 13U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK is already defined
#endif
/** \brief Update Count for Seed Mask Hash. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK 14U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Count for Seed Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT 15U

#if (defined CRYPTO_RSAESOAEP_DEC_END_SEED_MASK)
#error CRYPTO_RSAESOAEP_DEC_END_SEED_MASK is already defined
#endif
/** \brief End the seed mask hash. */
#define CRYPTO_RSAESOAEP_DEC_END_SEED_MASK 16U

#if (defined CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT is already defined
#endif
/** \brief Wait for Seed Mask Hash End to finish. */
#define CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT 17U

#if (defined CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK)
#error CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK is already defined
#endif
/** \brief Check if another seed mask iteration is needed. */
#define CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK 18U

#if (defined CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK)
#error CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK is already defined
#endif
/** \brief Mask processing is done. */
#define CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK 19U

#if (defined CRYPTO_RSAESOAEP_DEC_START_MASK)
  #error CRYPTO_RSAESOAEP_DEC_START_MASK is already defined
#endif
/** \brief Starting the Mask Hash. */
#define CRYPTO_RSAESOAEP_DEC_START_MASK 20U

#if (defined CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT is already defined
#endif
/** \brief Wait for the start Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT 21U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_MASK)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_MASK is already defined
#endif
/** \brief Update Mask Hash. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_MASK 22U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT 23U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK is already defined
#endif
/** \brief Update Count for Mask Hash. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK 24U

#if (defined CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT is already defined
#endif
/** \brief Wait for Update Count for Mask Hash to finish. */
#define CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT 25U

#if (defined CRYPTO_RSAESOAEP_DEC_END_MASK)
#error CRYPTO_RSAESOAEP_DEC_END_MASK is already defined
#endif
/** \brief End the mask hash. */
#define CRYPTO_RSAESOAEP_DEC_END_MASK 26U

#if (defined CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT)
#error CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT is already defined
#endif
/** \brief Wait for Mask Hash End to finish. */
#define CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT 27U

#if (defined CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK)
#error CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK is already defined
#endif
/** \brief Check if another mask iteration is needed. */
#define CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK 28U

#if (defined CRYPTO_RSAESOAEP_DEC_DONE_MASK)
#error CRYPTO_RSAESOAEP_DEC_DONE_MASK is already defined
#endif
/** \brief Mask processing is done. */
#define CRYPTO_RSAESOAEP_DEC_DONE_MASK 29U

#if (defined CRYPTO_RSAESOAEP_DEC_FINISH)
#error CRYPTO_RSAESOAEP_DEC_FINISH is already defined
#endif
/** \brief The finish operation of the algorithm is in progress. */
#define CRYPTO_RSAESOAEP_DEC_FINISH 30U

/*--State machine settings------------------------------------------------------------------------*/

#if (defined CRYPTO_SM_RSAESOAEP_DEC_TRANSITION_COUNT)
#error CRYPTO_SM_RSAESOAEP_DEC_TRANSITION_COUNT is already defined
#endif
/** \brief Number of transitions in Crypto_RsaesOaepEncryptCtxType.State state machine  */
#define CRYPTO_SM_RSAESOAEP_DEC_TRANSITION_COUNT 59U

#if (defined CRYPTO_SM_RSAESOAEP_DEC_ACTION_COUNT)
#error CRYPTO_SM_RSAESOAEP_DEC_ACTION_COUNT is already defined
#endif
/** \brief Number of action functions in Crypto_RsaesOaepDecryptCtxType.State
 *         state machine
 */
#define CRYPTO_SM_RSAESOAEP_DEC_ACTION_COUNT 31U

/*==[Types]=======================================================================================*/

/** \brief The public RSA key used for encryption/decryption.
 *
 * \var Crypto_RsaesOaepPublicKeyType::Length
 * \brief Dummy element to make the type compatible with the Csm key type.
 *
 * \var Crypto_RsaesOaepPublicKeyType::PublicExponent
 * \brief The public exponent of the RSA key.
 *
 * \var Crypto_RsaesOaepPublicKeyType::Modulus
 * \brief The modulus of the RSA key.
 */
typedef struct
{
  uint32                      Length;
  Crypto_LNWordType PublicExponent[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD];
  Crypto_LNWordType Modulus[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD];
}
Crypto_RsaesOaepPublicKeyType;

/** \brief The context for a MGF1 calculation.
 *
 * \var Crypto_Mgf1CtxType::Cnt
 * \brief The integer counter of the current hash round.
 *
 * \var Crypto_Mgf1CtxType::Itr
 * \brief The number of hash iterations which are needed to generate the output.
 *
 * \var Crypto_Mgf1CtxType::MaskHashResultLength
 * \brief The number of bytes which shall be generated by the next hash iteration.
 *
 * \var Crypto_Mgf1CtxType::MaskInputLength
 * \brief The length of the MGF1 input array.
 *
 * \var Crypto_Mgf1CtxType::MaskOutputLength
 * \brief The number of bytes which shall be generated during the MGF1 generation.
 *
 * \var Crypto_Mgf1CtxType::MaskInputPtr
 * \brief The pointer to the input array for the MGF1 generation.
 *
 * \var Crypto_Mgf1CtxType::MaskOutputPtr
 * \brief The pointer where the generated MGF1 output is saved to.
 *
 * \var Crypto_Mgf1CtxType::MaskCntStr
 * \brief The bytestring representation of the current hash round integer counter-
*/
typedef struct
{
  uint32 Cnt;
  uint32 Itr;
  uint32 MaskHashResultLength;
  uint32 MaskInputLength;
  uint32 MaskOutputLength;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) MaskInputPtr;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) MaskOutputPtr;
  uint8 MaskCntStr[CRYPTO_RSAESOAEP_MASK_CNT_LEN];
}
Crypto_Mgf1CtxType;

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

/** \brief Internal state of the RSAES-OAEP encryption. */
typedef uint8 Crypto_RsaesOaepEncryptStateType;

/** \brief Structure which contains the context of the RSAES-OAEP encryption.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::AdditionalInput
 * \brief Array where the RSA additional input is stored if used.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::AdditionalInputLength
 * \brief The length of the RSA additional input.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::DbLength
 * \brief The length of the DB.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::PsLength
 * \brief The length of the PS.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::NLength
 * \brief The length of the Modulus.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::HashAlgorithm
 * \brief The used hash algorithm family.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::HashLength
 * \brief The length of the hash algorithm.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::HashResultLength
 * \brief The length of the hash value of the data.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::DataLength
 * \brief The length of the input data.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::EMLength
 * \brief The length of the EM.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::HashResult
 * \brief Array where the hash value of the
 *        data will be buffered during the computation.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::MgfSeed
 * \brief Array where the MgfSeed is stored.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::MgfSeedMask
 * \brief Array where the MgfSeedMask is stored.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Db
 * \brief Array where the DB is stored during the computation.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::DbMask
 * \brief Array where the dBMask is stored during the computation.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Ps
 * \brief Array where the Ps is stored during the computation.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::EM
 * \brief An array which is used as a buffer for the value "EM".
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Tmp1Value
 * \brief An array which is used as a buffer during RSA encryption.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Tmp2Value
 * \brief An array which is used as a buffer during RSA encryption.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::LNCtx
 * \brief The context which has to be used for long number arithmetic.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Mgf1Ctx
 * \brief The context for the MGF1 masking function.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::HashJob
 * \brief The Job for calling the hash helper, needed due to missing secondary family in own job.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::RsaKey
 * \brief The public key which should be used for verifying the signature.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Data
 * \brief A pointer to the start of an array where the data to be encrypted is stored.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::ObjId
 * \brief The driver object id.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::Job
 * \brief The currently processed job.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::IsBusy
 * \brief Flag which indicates if another MainFunction is needed.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::CancelFlag
 * \brief Flag that states if the job shall be canceld.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::CallbackFlag
 * \brief Flag that states if the callback shall be called.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::ProcessDone
 * \brief Flag that states if the restart of the service is active.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::ShiftState
 * \brief Flag that states if the statemachine shall exit a wait state.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::CallbackResult
 * \brief The result which will be forwarded to the callback.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::CurrentMode
 * \brief The currently processed mode.
 *
 * \var Crypto_RsaesOaepEncryptCtxType::State
 * \brief The current state the RSAES-OAEP encryption is in.
 *
 */
typedef struct
{
  uint8  AdditionalInput[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE];
  uint32 AdditionalInputLength;
  uint32 DbLength;
  uint32 PsLength;
  uint32 NLength;
  uint8  HashAlgorithm;
  uint32 HashLength;
  uint32 HashResultLength;
  uint32 DataLength;
  uint32 EMLength;
  uint8  HashResult[CRYPTO_RSAESOAEP_HASH_MAX_LEN];
  uint8  MgfSeed[CRYPTO_RSAESOAEP_HASH_MAX_LEN];
  uint8  MgfSeedMask[CRYPTO_RSAESOAEP_HASH_MAX_LEN];
  uint8  Db[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE];
  uint8  DbMask[CRYPTO_RSAESOAEP_MAX_DB_LEN];
  uint8  Ps[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE];
  uint8  EM[CRYPTO_RSAESOAEP_MAX_DB_LEN + CRYPTO_RSAESOAEP_HASH_MAX_LEN + 1U];
  Crypto_LNWordType  Tmp1Value[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD];
  Crypto_LNWordType  Tmp2Value[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD];
  Crypto_LNCtxType                         LNCtx;
  Crypto_Mgf1CtxType                       Mgf1Ctx;
  Crypto_JobType                                     HashJob;
  Crypto_RsaesOaepPublicKeyType            RsaKey;
  P2CONST(uint8, TYPEDEF, CRYPTO_APPL_DATA)          Data;
  uint32                                             ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)   Job;
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        IsBusy;
  boolean                                            CancelFlag;
  boolean                                            CallbackFlag;
  boolean                                            ProcessDone;
  boolean                                            ShiftState;
  Std_ReturnType                                     CallbackResult;
  Crypto_OperationModeType                           CurrentMode;
  Crypto_RsaesOaepEncryptStateType         State;
}
Crypto_RsaesOaepEncryptCtxType;

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

/** \brief Internal state of the RSAES-OAEP decryption. */
typedef uint8 Crypto_RsaesOaepDecryptStateType;

/** \brief Structure which contains the context of the RSAES-OAEP decryption.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::AdditionalInput
 * \brief Array where the RSA additional input is stored if used.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::AdditionalInputLength
 * \brief The length of the RSA additional input.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::DbLength
 * \brief The length of the DB.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::PsLength
 * \brief The length of the PS.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::NLength
 * \brief The length of the Modulus.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::HashAlgorithm
 * \brief The used hash algorithm family.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::HashLength
 * \brief The length of the hash algorithm.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::HashResultLength
 * \brief The length of the hash value of the data.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::DataLength
 * \brief The length of the input data.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::EMLength
 * \brief The length of the EM.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::HashResult
 * \brief Array where the hash value of the
 *        data will be buffered during the computation.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::MgfSeed
 * \brief Array where the MgfSeed is stored.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::MgfSeedMask
 * \brief Array where the MgfSeedMask is stored.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Db
 * \brief Array where the DB is stored during the computation.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::DbMask
 * \brief Array where the dBMask is stored during the computation.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Ps
 * \brief Array where the Ps is stored during the computation.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::EM
 * \brief An array which is used as a buffer for the value "EM".
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Tmp1Value
 * \brief An array which is used as a buffer during RSA encryption.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Tmp2Value
 * \brief An array which is used as a buffer during RSA encryption.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::LNCtx
 * \brief The context which has to be used for long number arithmetic.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::LNCtx
 * \brief The context which has to be used for long number arithmetic.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Mgf1Ctx
 * \brief The context for the MGF1 masking function.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::HashJob
 * \brief The Job for calling the hash helper, needed due to missing secondary family in own job.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::RsaKey
 * \brief The public key which should be used for verifying the signature.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Data
 * \brief A pointer to the start of an array where the data to be decrypted is stored.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::ObjId
 * \brief The driver object id.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::Job
 * \brief The currently processed job.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::IsBusy
 * \brief Flag which indicates if another MainFunction is needed.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::CancelFlag
 * \brief Flag that states if the job shall be canceld.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::CallbackFlag
 * \brief Flag that states if the callback shall be called.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::ProcessDone
 * \brief Flag that states if the restart of the service is active.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::ShiftState
 * \brief Flag that states if the statemachine shall exit a wait state.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::CallbackResult
 * \brief The result which will be forwarded to the callback.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::CurrentMode
 * \brief The currently processed mode.
 *
 * \var Crypto_RsaesOaepDecryptCtxType::State
 * \brief The current state the RSAES-OAEP decryption is in.
 *
 */
typedef struct
{
  uint8  AdditionalInput[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE];
  uint32 AdditionalInputLength;
  uint32 DbLength;
  uint32 PsLength;
  uint32 NLength;
  uint8  HashAlgorithm;
  uint32 HashLength;
  uint32 HashResultLength;
  uint32 DataLength;
  uint32 EMLength;
  uint8  HashResult[CRYPTO_RSAESOAEP_HASH_MAX_LEN];
  uint8  MgfSeed[CRYPTO_RSAESOAEP_HASH_MAX_LEN];
  uint8  MgfSeedMask[CRYPTO_RSAESOAEP_HASH_MAX_LEN];
  uint8  Db[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE];
  uint8  DbMask[CRYPTO_RSAESOAEP_MAX_DB_LEN];
  uint8  Ps[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_BYTE];
  uint8  EM[CRYPTO_RSAESOAEP_MAX_DB_LEN + CRYPTO_RSAESOAEP_HASH_MAX_LEN + 1U];
  Crypto_LNWordType  Tmp1Value[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD];
  Crypto_LNWordType  Tmp2Value[CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD];
  Crypto_LNCtxType                         LNCtx;
  Crypto_Mgf1CtxType                       Mgf1Ctx;
  Crypto_JobType                                     HashJob;
  Crypto_RsaesOaepPublicKeyType            RsaKey;
  P2CONST(uint8, TYPEDEF, CRYPTO_APPL_DATA)          Data;
  uint32                                             ObjId;
  P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_APPL_DATA)   Job;
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        IsBusy;
  boolean                                            CancelFlag;
  boolean                                            CallbackFlag;
  boolean                                            ProcessDone;
  boolean                                            ShiftState;
  Std_ReturnType                                     CallbackResult;
  Crypto_OperationModeType                           CurrentMode;
  Crypto_RsaesOaepDecryptStateType         State;
}
Crypto_RsaesOaepDecryptCtxType;

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

/*==[Declaration of functions with internal linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/** \brief Helper function for the idle state.
 *
 *         This function does nothing and is used for looping in idle states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_Idle
(
  void
);

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

/**  \brief This function resets the context of the RSAES-OAEP encryption.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset
(
  void
);

/** \brief RSAES-OAEP encryption callback function
 *
 *         This is the RSAES-OAEP encryption callback function which is called,
 *         when the primitive is called asynchronously.
 *
 * \param[in,out] Job     Reference to the currently processed job.
 * \param[in]     Result  The error value.
 *
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Result
);

/* Statemachine functions */

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_HASH_START,
 *         CRYPTO_RSAESOAEP_ENC_START_MASK,
 *         CRYPTO_RSAESOAEP_ENC_START_SEED_MASK
 *         states. It calls the hash start operation.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashStart
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_HASH_START,
 *         CRYPTO_RSAESOAEP_ENC_START_MASK,
 *         CRYPTO_RSAESOAEP_ENC_START_SEED_MASK
 *         states. It calls the hash update operation.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashUpdate
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_HASH_UPDATE state.
 *         It calls the hash finish operation.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashFinish
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT
 *         states. It calls the hash mainfunction.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashMainFunction
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_UPDATE state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptUpdate
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_FINISH state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptFinish
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_MASK,
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskUpdate
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK,
 *         CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskUpdateCnt
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_END_MASK,
 *         CRYPTO_RSAESOAEP_ENC_END_SEED_MASK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskEnd
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK,
 *         CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskEndCheck
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_DONE_MASK state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskDone
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptSeedMaskDone
(
  void
);

/**  \brief This function calls the helper hash start function depending on the secondaryFamily.
 *
 * \param[in] Ctx  A pointer to the context.
 *
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Start
(
  P2VAR(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
);

/**  \brief This function calls the helper hash update function depending on the secondaryFamily.
 *
 * \param[in] Ctx         A pointer to the context.
 * \param[in] DataPtr     A pointer to the data.
 * \param[in] DataLength  The length of the data.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Update
(
  P2CONST(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                    DataPtr,
  uint32                                                                                   DataLength
);

/** \brief This function calls the helper hash finish function depending on the secondaryFamily.
 *
 * \param[in] Ctx        A pointer to the context.
 * \param[out] ResPtr    A pointer to where the result is to be stored.
 * \param[in] ResLenPtr  A pointer where the length of the result is to be stored.
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Finish
(
  P2CONST(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                      ResPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)                                     ResLenPtr
);

/** \brief This function calls the helper hash main function depending on the secondaryFamily.
 *
 * \param[in] Ctx A pointer to the context.
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_MainFunction
(
  P2CONST(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
);

/** \brief This is the callback function of the underlying hash primitive.
 *
 * \param[in,out] Job     Reference to the currently processed job.
 * \param[in]     Result  The error value.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Callback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
);

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

/**  \brief This function resets the context of the RSAES-OAEP decryption.
 *
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset
(
  void
);

/** \brief RSAES-OAEP decryption callback function
 *
 *         This is the RSAES-OAEP decryption callback function which is called,
 *         when the primitive is called asynchronously.
 *
 * \param[in,out] Job     Reference to the currently processed job.
 * \param[in]     Result  The error value.
 *
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Result
);

/* Statemachine functions */

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_HASH_START,
 *         CRYPTO_RSAESOAEP_DEC_START_MASK,
 *         CRYPTO_RSAESOAEP_DEC_START_SEED_MASK
 *         states. It calls the hash start operation.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashStart
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_HASH_START,
 *         CRYPTO_RSAESOAEP_DEC_START_MASK,
 *         CRYPTO_RSAESOAEP_DEC_START_SEED_MASK
 *         states. It calls the hash update operation.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashUpdate
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_HASH_UPDATE state.
 *         It calls the hash finish operation.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashFinish
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT,
 *         CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT
 *         states. It calls the hash mainfunction.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashMainFunction
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_UPDATE state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptUpdate
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_FINISH state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptFinish
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_MASK,
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskUpdate
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK,
 *         CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskUpdateCnt
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_END_MASK,
 *         CRYPTO_RSAESOAEP_DEC_END_SEED_MASK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskEnd
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK,
 *         CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK
 *         states.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskEndCheck
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_DONE_MASK state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskDone
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_START_SEED_MASK state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptSeedMaskStart
(
  void
);

/** \brief State helper function: This function performs the required processing for the
 *         CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK state.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptSeedMaskDone
(
  void
);

/**  \brief This function calls the helper hash start function depending on the secondaryFamily.
 *
 * \param[in] Ctx  A pointer to the context.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Start
(
  P2VAR(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
);

/**  \brief This function calls the helper hash update function depending on the secondaryFamily.
 *
 * \param[in] Ctx         A pointer to the context.
 * \param[in] DataPtr     A pointer to the data.
 * \param[in] DataLength  The length of the data.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Update
(
  P2CONST(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                    DataPtr,
  uint32                                                                                   DataLength
);

/** \brief This function calls the helper hash finish function depending on the secondaryFamily.
 *
 * \param[in] Ctx        A pointer to the context.
 * \param[out] ResPtr    A pointer to where the result is to be stored.
 * \param[in] ResLenPtr  A pointer where the length of the result is to be stored.
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Finish
(
  P2CONST(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                      ResPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)                                     ResLenPtr
);

/** \brief This function calls the helper hash main function depending on the secondaryFamily.
 *
 * \param[in] Ctx A pointer to the context.
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_MainFunction
(
  P2CONST(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
);

/** \brief This is the callback function of the underlying hash primitive.
 *
 * \param[in,out] Job     Reference to the currently processed job.
 * \param[in]     Result  The error value.
 *
 *
 * \Reentrancy {Nonreentrant}
 * \Synchronicity {Synchronous/Asynchronous}
 *
 */
static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Callback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
);

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Constants with internal linkage]=============================================================*/

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

/** \brief State machine for RSAES-OAEP encryption: Transitions
 *
 *        This constant array is needed for specifying the
 *        state transistions of RSAES-OAEP encryption.
 *        First entry denotes the source state, 2nd entry the return
 *        value of the processing of source state, and 3rd entry
 *        names the target state.
 *
 *  NOTE: If another crypto primitive is used (by helper or internal job),
 *        the state stays in the state of WAITING! The callback of the helper and the internal
 *        job will set the state to its next one.
 */
static CONST(Crypto_StateTransitionType, CRYPTO_CONST)
Crypto_StateTrans_RsaesOeapEncrypt[CRYPTO_SM_RSAESOAEP_ENC_TRANSITION_COUNT] =
{
  {
    CRYPTO_IDLE_STATE,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_ERROR_STATE,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_IDLE_START,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_IDLE_START
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_START,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_START,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_START_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE,
    E_NOT_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_DONE_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_START_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_DONE_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK,
    E_OK,
    CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_ENC_START_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK,
    E_NOT_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_FINISH,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_ENC_FINISH,
    CRYPTO_E_SMALL_BUFFER,
    CRYPTO_IDLE_STATE
  },
};

/** \brief State machine for RSAES-OAEP encryption: Action function-pointers
 *
 *        This constant array is needed for specifying the
 *        functions to be executed in the particular states of GenFinishSig.
 *        The index corresponds to the value of the states.
 *
 *  NOTE: If there is a state that requires some processing just before the transition
 *        to it, an additional state has to be introduced, which will lead to the necessary
 *        processing. For example: In case of error, do transition to
 *        CRYPTO_ERROR_STATE, and then do the action
 *        Crypto_RsaesOeapEncryptError().
 */
static CONST(Crypto_StateFctPtrType, CRYPTO_CONST)
Crypto_Actions_RsaesOeapEncrypt[CRYPTO_SM_RSAESOAEP_ENC_ACTION_COUNT] =
{
  /* CRYPTO_IDLE_STATE */
  &Crypto_Idle,
  /* CRYPTO_ERROR_STATE */
  &Crypto_Idle,
  /* CRYPTO_RSAESOAEP_ENC_IDLE_START */
  &Crypto_Idle,
  /* CRYPTO_RSAESOAEP_ENC_HASH_START */
  &Crypto_RsaesOeapEncryptHashStart,
  /* CRYPTO_RSAESOAEP_ENC_HASH_START_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_HASH_UPDATE */
  &Crypto_RsaesOeapEncryptHashUpdate,
  /* CRYPTO_RSAESOAEP_ENC_HASH_UPDATE_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_HASH_FINISH */
  &Crypto_RsaesOeapEncryptHashFinish,
  /* CRYPTO_RSAESOAEP_ENC_HASH_FINISH_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE */
  &Crypto_RsaesOeapEncryptUpdate,
  /* CRYPTO_RSAESOAEP_ENC_START_MASK */
  &Crypto_RsaesOeapEncryptHashStart,
  /* CRYPTO_RSAESOAEP_ENC_START_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_MASK */
  &Crypto_RsaesOeapEncryptMaskUpdate,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK */
  &Crypto_RsaesOeapEncryptMaskUpdateCnt,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_END_MASK */
  &Crypto_RsaesOeapEncryptMaskEnd,
  /* CRYPTO_RSAESOAEP_ENC_END_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_END_MASK_CHECK */
  &Crypto_RsaesOeapEncryptMaskEndCheck,
  /* CRYPTO_RSAESOAEP_ENC_DONE_MASK */
  &Crypto_RsaesOeapEncryptMaskDone,
  /* CRYPTO_RSAESOAEP_ENC_START_SEED_MASK */
  &Crypto_RsaesOeapEncryptHashStart,
  /* CRYPTO_RSAESOAEP_ENC_START_SEED_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK */
  &Crypto_RsaesOeapEncryptMaskUpdate,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_SEED_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK */
  &Crypto_RsaesOeapEncryptMaskUpdateCnt,
  /* CRYPTO_RSAESOAEP_ENC_UPDATE_CNT_SEED_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_END_SEED_MASK */
  &Crypto_RsaesOeapEncryptMaskEnd,
  /* CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_WAIT */
  &Crypto_RsaesOeapEncryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_ENC_END_SEED_MASK_CHECK */
  &Crypto_RsaesOeapEncryptMaskEndCheck,
  /* CRYPTO_RSAESOAEP_ENC_DONE_SEED_MASK */
  &Crypto_RsaesOeapEncryptSeedMaskDone,
  /* CRYPTO_RSAESOAEP_ENC_FINISH */
  &Crypto_RsaesOeapEncryptFinish,
};

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

/** \brief State machine for RSAES-OAEP decryption: Transitions
 *
 *        This constant array is needed for specifying the
 *        state transistions of RSAES-OAEP encryption.
 *        First entry denotes the source state, 2nd entry the return
 *        value of the processing of source state, and 3rd entry
 *        names the target state.
 *
 *  NOTE: If another crypto primitive is used (by helper or internal job),
 *        the state stays in the state of WAITING! The callback of the helper and the internal
 *        job will set the state to its next one.
 */
static CONST(Crypto_StateTransitionType, CRYPTO_CONST)
Crypto_StateTrans_RsaesOeapDecrypt[CRYPTO_SM_RSAESOAEP_DEC_TRANSITION_COUNT] =
{
  {
    CRYPTO_IDLE_STATE,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_ERROR_STATE,
    E_OK,
    CRYPTO_ERROR_STATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_IDLE_START,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_IDLE_START
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_HASH_START
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE,
    E_NOT_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_START,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_START,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_SEED_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_MASK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_MASK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK,
    E_OK,
    CRYPTO_RSAESOAEP_DEC_DONE_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK,
    CRYPTO_E_BUSY,
    CRYPTO_RSAESOAEP_DEC_START_MASK
  },
  {
    CRYPTO_RSAESOAEP_DEC_DONE_MASK,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_FINISH,
    E_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_FINISH,
    E_NOT_OK,
    CRYPTO_IDLE_STATE
  },
  {
    CRYPTO_RSAESOAEP_DEC_FINISH,
    CRYPTO_E_SMALL_BUFFER,
    CRYPTO_IDLE_STATE
  },
};

/** \brief State machine for RSAES-OAEP decryption: Action function-pointers
 *
 *        This constant array is needed for specifying the
 *        functions to be executed in the particular states of GenFinishSig.
 *        The index corresponds to the value of the states.
 *
 *  NOTE: If there is a state that requires some processing just before the transition
 *        to it, an additional state has to be introduced, which will lead to the necessary
 *        processing. For example: In case of error, do transition to
 *        CRYPTO_ERROR_STATE, and then do the action
 *        Crypto_RsaesOeapDecryptError().
 */
static CONST(Crypto_StateFctPtrType, CRYPTO_CONST)
Crypto_Actions_RsaesOeapDecrypt[CRYPTO_SM_RSAESOAEP_DEC_ACTION_COUNT] =
{
  /* CRYPTO_IDLE_STATE */
  &Crypto_Idle,
  /* CRYPTO_ERROR_STATE */
  &Crypto_Idle,
  /* CRYPTO_RSAESOAEP_DEC_IDLE_START */
  &Crypto_Idle,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE */
  &Crypto_RsaesOeapDecryptUpdate,
  /* CRYPTO_RSAESOAEP_DEC_HASH_START */
  &Crypto_RsaesOeapDecryptHashStart,
  /* CRYPTO_RSAESOAEP_DEC_HASH_START_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_HASH_UPDATE */
  &Crypto_RsaesOeapDecryptHashUpdate,
  /* CRYPTO_RSAESOAEP_DEC_HASH_UPDATE_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_HASH_FINISH */
  &Crypto_RsaesOeapDecryptHashFinish,
  /* CRYPTO_RSAESOAEP_DEC_HASH_FINISH_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_START_SEED_MASK */
  &Crypto_RsaesOeapDecryptSeedMaskStart,
  /* CRYPTO_RSAESOAEP_DEC_START_SEED_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK */
  &Crypto_RsaesOeapDecryptMaskUpdate,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_SEED_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK */
  &Crypto_RsaesOeapDecryptMaskUpdateCnt,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_SEED_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_END_SEED_MASK */
  &Crypto_RsaesOeapDecryptMaskEnd,
  /* CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_END_SEED_MASK_CHECK */
  &Crypto_RsaesOeapDecryptMaskEndCheck,
  /* CRYPTO_RSAESOAEP_DEC_DONE_SEED_MASK */
  &Crypto_RsaesOeapDecryptSeedMaskDone,
  /* CRYPTO_RSAESOAEP_DEC_START_MASK */
  &Crypto_RsaesOeapDecryptHashStart,
  /* CRYPTO_RSAESOAEP_DEC_START_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_MASK */
  &Crypto_RsaesOeapDecryptMaskUpdate,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK */
  &Crypto_RsaesOeapDecryptMaskUpdateCnt,
  /* CRYPTO_RSAESOAEP_DEC_UPDATE_CNT_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_END_MASK */
  &Crypto_RsaesOeapDecryptMaskEnd,
  /* CRYPTO_RSAESOAEP_DEC_END_MASK_WAIT */
  &Crypto_RsaesOeapDecryptHashMainFunction,
  /* CRYPTO_RSAESOAEP_DEC_END_MASK_CHECK */
  &Crypto_RsaesOeapDecryptMaskEndCheck,
  /* CRYPTO_RSAESOAEP_DEC_DONE_MASK */
  &Crypto_RsaesOeapDecryptMaskDone,
  /* CRYPTO_RSAESOAEP_DEC_FINISH */
  &Crypto_RsaesOeapDecryptFinish,
};

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Variables with internal linkage]=============================================================*/

#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

/** \brief RSAES-OAEP encryption context.
 *
 *  The context variable which is used to store the internal state of the RSAES-OAEP encryption.
 */
static VAR(Crypto_RsaesOaepEncryptCtxType, CRYPTO_VAR)
Crypto_RsaesOaepEncryptCtx;

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

/** \brief RSAES-OAEP decryption context.
 *
 *  The context variable which is used to store the internal state of the RSAES-OAEP decryption.
 */
static VAR(Crypto_RsaesOaepDecryptCtxType, CRYPTO_VAR)
Crypto_RsaesOaepDecryptCtx;

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Constants with external linkage]=============================================================*/

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

/** \brief The primitive info for encryption. */
static CONST(Crypto_PrimitiveInfoType, EBTEST_CONST) Crypto_RsaOaepEncryptPrimitiveInfo =
{
  0U,
  CRYPTO_ENCRYPT,
  {
    CRYPTO_ALGOFAM_RSA,
    CRYPTO_RSAESOAEP_ENC_HASH_ALGORITHM,
    0U,
    CRYPTO_ALGOMODE_RSAES_OAEP
  }
};

/** \brief The job info for a job. */
static CONST(Crypto_JobPrimitiveInfoType, EBTEST_CONST)
Crypto_RsaOaepEncryptJobPrimitiveInfo =
{ 0U, &Crypto_RsaOaepEncryptPrimitiveInfo, 0U, 0U, CRYPTO_PROCESSING_SYNC, FALSE };

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

/** \brief The primitive info for decryption. */
static CONST(Crypto_PrimitiveInfoType, EBTEST_CONST) Crypto_RsaOaepDecryptPrimitiveInfo =
{
  0U,
  CRYPTO_DECRYPT,
  {
    CRYPTO_ALGOFAM_RSA,
    CRYPTO_RSAESOAEP_DEC_HASH_ALGORITHM,
    0U,
    CRYPTO_ALGOMODE_RSAES_OAEP
  }
};

/** \brief The job info for a job. */
static CONST(Crypto_JobPrimitiveInfoType, EBTEST_CONST)
Crypto_RsaOaepDecryptJobPrimitiveInfo =
{ 0U, &Crypto_RsaOaepDecryptPrimitiveInfo, 0U, 0U, CRYPTO_PROCESSING_SYNC, FALSE };

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==[Variables with external linkage]=============================================================*/

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  boolean IsExponentValid = FALSE;
  boolean IsModuloValid = FALSE;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr;
  uint32 KeyLength = CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE;
  /* reset context */
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset();

  /* Workaround for Autosar RfC 81809, missing "Secondary Family" values in Csm configuration */
  /* !LINKSTO EB_Crypto_CryptAlgos_1502, 1 */
  Crypto_RsaesOaepEncryptCtx.HashAlgorithm =
    CRYPTO_RSAESOAEP_ENC_HASH_ALGORITHM;
  Crypto_RsaesOaepEncryptCtx.HashLength = CRYPTO_RSAESOAEP_ENC_HASH_LENGTH;

  Crypto_RsaesOaepEncryptCtx.HashJob.jobPrimitiveInfo =
    &Crypto_RsaOaepEncryptJobPrimitiveInfo;

  /* !LINKSTO EB_Crypto_CryptAlgos_1527, 1 */
  if(
      E_OK == Crypto_AL_KeyElementGetPtr
              (
                Job->cryptoKeyId,
                CRYPTO_KE_CIPHER_KEY,
                &KeyPtr,
                &KeyLength
              )
    )
  {
    /* Convert to rsa key type */
    Crypto_RsaesOaepEncryptCtx.RsaKey.PublicExponent[0U] =
    CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD - 1U;
    Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus[0U] =
    CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD - 1U;

    if(
        E_OK == Crypto_AL_DecodeRsaKey
                (
                  KeyPtr,
                  KeyLength,
                  Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
                  Crypto_RsaesOaepEncryptCtx.RsaKey.PublicExponent
                )
      )
    {
      /* Check if key is valid */
      IsExponentValid = Crypto_LNIsValid
                        (
                          Crypto_RsaesOaepEncryptCtx.RsaKey.PublicExponent,
                          CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD
                        );
      IsModuloValid = Crypto_LNIsValid
                      (
                        Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
                        CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD
                      );
      /* !LINKSTO EB_Crypto_CryptAlgos_1528, 1 */
      if((TRUE == IsExponentValid) && (TRUE == IsModuloValid))
      {
        Crypto_RsaesOaepEncryptCtx.NLength =
         Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus[0U] *
         CRYPTO_LN_WORD_LEN_BYTES;
        Crypto_RsaesOaepEncryptCtx.ObjId = ObjectId;
        Crypto_RsaesOaepEncryptCtx.Job = Job;
        Crypto_RsaesOaepEncryptCtx.CurrentMode = CRYPTO_OPERATIONMODE_START;
        Crypto_RsaesOaepEncryptCtx.State = CRYPTO_RSAESOAEP_ENC_IDLE_START;
        Crypto_RsaesOaepEncryptCtx.CallbackFlag = TRUE;
        RetVal = E_OK;
      }
    }
  }

  /* Check for additional input */
  if (E_OK == RetVal)
  {
    Crypto_RsaesOaepEncryptCtx.AdditionalInputLength =
      CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE;
    /* !LINKSTO EB_Crypto_CryptAlgos_1503, 1 */
    if (E_OK != Crypto_AL_KeyElementGet
                (
                  Job->cryptoKeyId,
                  CRYPTO_KE_RSA_ADDITIONAL_INPUT,
                  Crypto_RsaesOaepEncryptCtx.AdditionalInput,
                  &Crypto_RsaesOaepEncryptCtx.AdditionalInputLength
                )
       )
    {
      /* Additional input does not exist. Use empty additional input */
      /* !LINKSTO EB_Crypto_CryptAlgos_1504, 1 */
      Crypto_RsaesOaepEncryptCtx.AdditionalInputLength = 0U;
    }
  }

  if (E_NOT_OK == RetVal)
  {
    /* reset context */
    /* !LINKSTO EB_Crypto_CryptAlgos_1524, 1 */
    Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset();
  }

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = CRYPTO_E_BUSY;
  TS_PARAM_UNUSED(ObjectId);

  Crypto_RsaesOaepEncryptCtx.CallbackFlag = FALSE;

  /* !LINKSTO EB_Crypto_CryptAlgos_1525, 1 */
  if (CRYPTO_RSAESOAEP_ENC_IDLE_START == Crypto_RsaesOaepEncryptCtx.State)
  {
    Crypto_RsaesOaepEncryptCtx.HashResultLength =
      Crypto_RsaesOaepEncryptCtx.HashLength;

    /* Store data into context */
    Crypto_RsaesOaepEncryptCtx.Data = Job->jobPrimitiveInputOutput.inputPtr;
    Crypto_RsaesOaepEncryptCtx.DataLength = Job->jobPrimitiveInputOutput.inputLength;

    RetVal = E_OK;
  }

  if (E_OK == RetVal)
  {
    Crypto_RsaesOaepEncryptCtx.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
    Crypto_RsaesOaepEncryptCtx.State = CRYPTO_RSAESOAEP_ENC_HASH_START;
  }
  else
  {
    Crypto_RsaesOaepEncryptCtx.State = CRYPTO_IDLE_STATE;
    Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset();
  }

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = CRYPTO_E_BUSY;
  TS_PARAM_UNUSED(ObjectId);
  TS_PARAM_UNUSED(Job);

  /* !LINKSTO EB_Crypto_CryptAlgos_1526, 1 */
  if(
      (CRYPTO_IDLE_STATE == Crypto_RsaesOaepEncryptCtx.State) &&
      (Crypto_RsaesOaepEncryptCtx.CurrentMode == CRYPTO_OPERATIONMODE_UPDATE)
    )
  {
    Crypto_RsaesOaepEncryptCtx.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
    Crypto_RsaesOaepEncryptCtx.State = CRYPTO_RSAESOAEP_ENC_FINISH;
    RetVal = E_OK;
  }
  Crypto_RsaesOaepEncryptCtx.CallbackFlag = FALSE;

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(
      (CRYPTO_IDLE_STATE == Crypto_RsaesOaepEncryptCtx.State) ||
      (CRYPTO_RSAESOAEP_ENC_IDLE_START == Crypto_RsaesOaepEncryptCtx.State)
    )
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset();
    RetVal = E_OK;
  }
  else
  {
    /* Job can not be canceled immediately */
    Crypto_RsaesOaepEncryptCtx.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

FUNC(void, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if(!Crypto_CheckSkipMain(
                                      Result,
                                      Busy,
                                      Crypto_RsaesOaepEncryptCtx.ObjId
                                    )
    )
  {
    if (NULL_PTR != Busy)
    {
      *Busy = TRUE;
    }

    CRYPTO_DOTRANSITION
    (
      CRYPTO_SM_RSAESOAEP_ENC_TRANSITION_COUNT,
      Crypto_RsaesOaepEncryptCtx.State,
      Crypto_Actions_RsaesOeapEncrypt,
      Crypto_StateTrans_RsaesOeapEncrypt
    );

    /* !LINKSTO SWS_Crypto_00144_CORRECTION, 1 */
    if (TRUE == Crypto_RsaesOaepEncryptCtx.CancelFlag)
    {
      if ((NULL_PTR != Result) && (NULL_PTR != Busy))
      {
        *Result = CRYPTO_E_JOB_CANCELED;
        *Busy = FALSE;
      }
      else
      {
        Crypto_RsaesOaepEncryptCtx.ProcessDone = TRUE;
        Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_CallBack
        (
          Crypto_RsaesOaepEncryptCtx.Job,
          CRYPTO_E_JOB_CANCELED
        );
      }
      /* !LINKSTO EB_Crypto_CryptAlgos_1523, 1 */
      Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset();
    }
    else
    {
      if (TRUE == Crypto_RsaesOaepEncryptCtx.CallbackFlag)
      {
        if ((NULL_PTR != Result) && (NULL_PTR != Busy))
        {
          *Result = Crypto_RsaesOaepEncryptCtx.CallbackResult;
          *Busy = FALSE;
        }
        else
        {
          Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_CallBack
          (
            Crypto_RsaesOaepEncryptCtx.Job,
            Crypto_RsaesOaepEncryptCtx.CallbackResult
          );
        }
        Crypto_RsaesOaepEncryptCtx.CallbackFlag = FALSE;
        /* reset the context if finished or error */
        if (TRUE == Crypto_RsaesOaepEncryptCtx.ProcessDone)
        {
          /* !LINKSTO EB_Crypto_CryptAlgos_1522, 1 */
          Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset();
        }
      }
    }
  }
}

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  boolean IsExponentValid = FALSE;
  boolean IsModuloValid = FALSE;
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA) KeyPtr;
  uint32 KeyLength = CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE;
  /* reset context */
  /* !LINKSTO SWS_Crypto_00017, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Start2Start, 1 */
  /* !LINKSTO Crypto.Dsn.JobTransition.Update2Start, 1 */
  Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset();

  /* Workaround for Autosar RfC 81809, missing "Secondary Family" values in Csm configuration */
  /* !LINKSTO EB_Crypto_CryptAlgos_1552, 1 */
  Crypto_RsaesOaepDecryptCtx.HashAlgorithm =
    CRYPTO_RSAESOAEP_DEC_HASH_ALGORITHM;
  Crypto_RsaesOaepDecryptCtx.HashLength = CRYPTO_RSAESOAEP_DEC_HASH_LENGTH;

  Crypto_RsaesOaepDecryptCtx.HashJob.jobPrimitiveInfo =
    &Crypto_RsaOaepDecryptJobPrimitiveInfo;

  /* !LINKSTO EB_Crypto_CryptAlgos_1577, 1 */
  if(
      E_OK == Crypto_AL_KeyElementGetPtr
              (
                Job->cryptoKeyId,
                CRYPTO_KE_CIPHER_KEY,
                &KeyPtr,
                &KeyLength
              )
    )
  {
    /* Convert to rsa key type */
    Crypto_RsaesOaepDecryptCtx.RsaKey.PublicExponent[0U] =
      CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD - 1U;
    Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus[0U] =
      CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD - 1U;

    if(
        E_OK == Crypto_AL_DecodeRsaKey
                (
                  KeyPtr,
                  KeyLength,
                  Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus,
                  Crypto_RsaesOaepDecryptCtx.RsaKey.PublicExponent
                )
      )
    {
      /* Check if key is valid */
      IsExponentValid = Crypto_LNIsValid
                        (
                          Crypto_RsaesOaepDecryptCtx.RsaKey.PublicExponent,
                          CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD
                        );
      IsModuloValid = Crypto_LNIsValid
                      (
                        Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus,
                        CRYPTO_AL_ASYM_PUBLIC_RSA_MAX_KEY_SIZE_WORD
                      );
      /* !LINKSTO EB_Crypto_CryptAlgos_1578, 1 */
      if((TRUE == IsExponentValid) && (TRUE == IsModuloValid))
      {
        Crypto_RsaesOaepDecryptCtx.NLength =
          Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus[0U] *
          CRYPTO_LN_WORD_LEN_BYTES;
        Crypto_RsaesOaepDecryptCtx.ObjId = ObjectId;
        Crypto_RsaesOaepDecryptCtx.Job = Job;
        Crypto_RsaesOaepDecryptCtx.CurrentMode = CRYPTO_OPERATIONMODE_START;
        Crypto_RsaesOaepDecryptCtx.CallbackFlag = TRUE;
        Crypto_RsaesOaepDecryptCtx.State = CRYPTO_RSAESOAEP_DEC_IDLE_START;
        RetVal = E_OK;
      }
    }
  }

  /* Check for additional input */
  if (E_OK == RetVal)
  {
    Crypto_RsaesOaepDecryptCtx.AdditionalInputLength =
      CRYPTO_AL_ASYM_PUBLIC_MAX_KEY_ELEMENT_SIZE;
    /* !LINKSTO EB_Crypto_CryptAlgos_1553, 1 */
    if (E_OK != Crypto_AL_KeyElementGet
                (
                  Job->cryptoKeyId,
                  CRYPTO_KE_RSA_ADDITIONAL_INPUT,
                  Crypto_RsaesOaepDecryptCtx.AdditionalInput,
                  &Crypto_RsaesOaepDecryptCtx.AdditionalInputLength
                )
       )
    {
      /* Additional input does not exist. Use empty additional input */
      /* !LINKSTO EB_Crypto_CryptAlgos_1554, 1 */
      Crypto_RsaesOaepDecryptCtx.AdditionalInputLength = 0U;
    }
  }

  if (E_NOT_OK == RetVal)
  {
    /* reset context */
    /* !LINKSTO EB_Crypto_CryptAlgos_1574, 1 */
    Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset();
  }

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = CRYPTO_E_BUSY;
  TS_PARAM_UNUSED(ObjectId);

  Crypto_RsaesOaepDecryptCtx.CallbackFlag = FALSE;

  /* !LINKSTO EB_Crypto_CryptAlgos_1575, 1 */
  if (CRYPTO_RSAESOAEP_DEC_IDLE_START == Crypto_RsaesOaepDecryptCtx.State)
  {
    Crypto_RsaesOaepDecryptCtx.HashResultLength =
      Crypto_RsaesOaepDecryptCtx.HashLength;

    /* Store data into context */
    Crypto_RsaesOaepDecryptCtx.Data = Job->jobPrimitiveInputOutput.inputPtr;
    Crypto_RsaesOaepDecryptCtx.DataLength = Job->jobPrimitiveInputOutput.inputLength;

    Crypto_RsaesOaepDecryptCtx.CurrentMode = CRYPTO_OPERATIONMODE_UPDATE;
    Crypto_RsaesOaepDecryptCtx.State = CRYPTO_RSAESOAEP_DEC_UPDATE;
    RetVal = E_OK;
  }
  else
  {
    Crypto_RsaesOaepDecryptCtx.State = CRYPTO_IDLE_STATE;
    Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset();
  }

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = CRYPTO_E_BUSY;
  TS_PARAM_UNUSED(ObjectId);
  TS_PARAM_UNUSED(Job);

  /* !LINKSTO EB_Crypto_CryptAlgos_1576, 1 */
  if(
      (CRYPTO_IDLE_STATE == Crypto_RsaesOaepDecryptCtx.State) &&
      (Crypto_RsaesOaepDecryptCtx.CurrentMode == CRYPTO_OPERATIONMODE_UPDATE)
    )
  {
    Crypto_RsaesOaepDecryptCtx.CurrentMode = CRYPTO_OPERATIONMODE_FINISH;
    Crypto_RsaesOaepDecryptCtx.State = CRYPTO_RSAESOAEP_DEC_FINISH;
    RetVal = E_OK;
  }
  Crypto_RsaesOaepDecryptCtx.CallbackFlag = FALSE;

  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  /* This state indicates, that the Primitive is currently waiting for an Update/Finish call */
  if(
      (CRYPTO_IDLE_STATE == Crypto_RsaesOaepDecryptCtx.State) ||
      (CRYPTO_RSAESOAEP_DEC_IDLE_START == Crypto_RsaesOaepDecryptCtx.State)
    )
  {
    /* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
    Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset();
    RetVal = E_OK;
  }
  else
  {
    /* job can not be canceled immediately */
    Crypto_RsaesOaepDecryptCtx.CancelFlag = TRUE;
    /* !LINKSTO SWS_Crypto_00143_CORRECTION_SWS_Crypto_00183, 1 */
    RetVal = CRYPTO_E_JOB_CANCELED;
  }
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(ObjectId);
  return RetVal;
}

FUNC(void, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_MainFunction
(
  P2VAR(Std_ReturnType, AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean, AUTOMATIC, CRYPTO_APPL_DATA)        Busy
)
{
  if(!Crypto_CheckSkipMain(
                                      Result,
                                      Busy,
                                      Crypto_RsaesOaepDecryptCtx.ObjId
                                    )
    )
  {
    if (NULL_PTR != Busy)
    {
      *Busy = TRUE;
    }

    CRYPTO_DOTRANSITION
    (
      CRYPTO_SM_RSAESOAEP_DEC_TRANSITION_COUNT,
      Crypto_RsaesOaepDecryptCtx.State,
      Crypto_Actions_RsaesOeapDecrypt,
      Crypto_StateTrans_RsaesOeapDecrypt
    );

    /* !LINKSTO SWS_Crypto_00144_CORRECTION, 1 */
    if (TRUE == Crypto_RsaesOaepDecryptCtx.CancelFlag)
    {
      if ((NULL_PTR != Result) && (NULL_PTR != Busy))
      {
        *Result = CRYPTO_E_JOB_CANCELED;
        *Busy = FALSE;
      }
      else
      {
        Crypto_RsaesOaepDecryptCtx.ProcessDone = TRUE;
        Crypto_AL_DECRYPT_RSA_RSAES_OAEP_CallBack
        (
          Crypto_RsaesOaepDecryptCtx.Job,
          CRYPTO_E_JOB_CANCELED
        );
      }
      /* !LINKSTO EB_Crypto_CryptAlgos_1573, 1 */
      Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset();
    }
    else
    {
      if (TRUE == Crypto_RsaesOaepDecryptCtx.CallbackFlag)
      {
        if ((NULL_PTR != Result) && (NULL_PTR != Busy))
        {
          *Result = Crypto_RsaesOaepDecryptCtx.CallbackResult;
          *Busy = FALSE;
        }
        else
        {
          Crypto_AL_DECRYPT_RSA_RSAES_OAEP_CallBack
          (
            Crypto_RsaesOaepDecryptCtx.Job,
            Crypto_RsaesOaepDecryptCtx.CallbackResult
          );
        }
        Crypto_RsaesOaepDecryptCtx.CallbackFlag = FALSE;
        /* reset the context if finished or error */
        if (TRUE == Crypto_RsaesOaepDecryptCtx.ProcessDone)
        {
          /* !LINKSTO EB_Crypto_CryptAlgos_1572, 1 */
          Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset();
        }
      }
    }
  }
}

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Definition of functions with internal linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_Idle
(
  void
)
{
  return E_OK;
}

#if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED)

static FUNC(void, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Reset
(
  void
)
{
  switch(Crypto_RsaesOaepEncryptCtx.HashAlgorithm)
  {
#if(                                                    \
       (CRYPTO_SHA2_224_ENABLED == STD_ON)    \
    || (CRYPTO_SHA2_256_ENABLED == STD_ON)    \
    || (CRYPTO_SHA2_384_ENABLED == STD_ON)    \
    || (CRYPTO_SHA2_512_ENABLED == STD_ON)    \
   )
    case CRYPTO_ALGOFAM_SHA2_224:
    case CRYPTO_ALGOFAM_SHA2_256:
    case CRYPTO_ALGOFAM_SHA2_384:
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      Crypto_AL_HASH_SHA2_NOT_SET_Reset();
      break;
    }
#endif

#if(                                                    \
       (CRYPTO_SHA3_224_ENABLED == STD_ON)    \
    || (CRYPTO_SHA3_256_ENABLED == STD_ON)    \
    || (CRYPTO_SHA3_384_ENABLED == STD_ON)    \
    || (CRYPTO_SHA3_512_ENABLED == STD_ON)    \
   )
    case CRYPTO_ALGOFAM_SHA3_224:
    case CRYPTO_ALGOFAM_SHA3_256:
    case CRYPTO_ALGOFAM_SHA3_384:
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      Crypto_AL_HASH_SHA3_NOT_SET_Reset();
      break;
    }
#endif

    /* CHECK: NOPARSE */
    /* All the possible secondary family algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }

  TS_MemBZero(
               &Crypto_RsaesOaepEncryptCtx,
               sizeof(Crypto_RsaesOaepEncryptCtx)
             );
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Start
(
  P2VAR(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      Crypto_SHA2224HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 28U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      Crypto_SHA2256HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 32U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      Crypto_SHA2384HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 48U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      Crypto_SHA2512HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 64U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      Crypto_SHA3224HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 28U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      Crypto_SHA3256HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 32U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      Crypto_SHA3384HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 48U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      Crypto_SHA3512HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_ENC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 64U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Update
(
  P2CONST(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                    DataPtr,
  uint32                                                                         DataLength
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2224HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2256HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2384HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2512HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3224HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3256HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3384HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3512HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Finish
(
  P2CONST(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                      ResPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)                                     ResLenPtr
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2224HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2256HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2384HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2512HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3224HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3256HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3384HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3512HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_MainFunction
(
  P2CONST(Crypto_RsaesOaepEncryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      Crypto_SHA2224HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      Crypto_SHA2256HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      Crypto_SHA2384HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      Crypto_SHA2512HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      Crypto_SHA3224HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      Crypto_SHA3256HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      Crypto_SHA3384HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      Crypto_SHA3512HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_ENC_HASH_Callback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                     Result
)
{
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(Result);
  Crypto_RsaesOaepEncryptCtx.ShiftState = TRUE;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashStart
(
  void
)
{
  Std_ReturnType RetVal;
  Crypto_RSA_ENC_HASH_Start(&Crypto_RsaesOaepEncryptCtx);
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashUpdate
(
  void
)
{
  Std_ReturnType RetVal;
  Crypto_RSA_ENC_HASH_Update
  (
    &Crypto_RsaesOaepEncryptCtx,
    Crypto_RsaesOaepEncryptCtx.AdditionalInput,
    Crypto_RsaesOaepEncryptCtx.AdditionalInputLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashFinish
(
  void
)
{
  Std_ReturnType RetVal;
  Crypto_RSA_ENC_HASH_Finish
  (
    &Crypto_RsaesOaepEncryptCtx,
    Crypto_RsaesOaepEncryptCtx.HashResult,
    &Crypto_RsaesOaepEncryptCtx.HashResultLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptHashMainFunction
(
  void
)
{
  Std_ReturnType RetVal = CRYPTO_E_BUSY;

  Crypto_RSA_ENC_HASH_MainFunction(&Crypto_RsaesOaepEncryptCtx);

  if (Crypto_RsaesOaepEncryptCtx.ShiftState)
  {
    RetVal = E_OK;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskUpdate
(
  void
)
{
  Std_ReturnType RetVal;
  /* !LINKSTO EB_Crypto_CryptAlgos_1531, 1 */
  Crypto_RSA_ENC_HASH_Update
  (
    &Crypto_RsaesOaepEncryptCtx,
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskInputPtr,
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskInputLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskUpdateCnt
(
  void
)
{
  Std_ReturnType RetVal;
  /* D = I2BS(counter, 4) */
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskCntStr[0U] =
  (uint8)((Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt >> 24U) & (uint8)0xFFU);
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskCntStr[1U] =
  (uint8)((Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt >> 16U) & (uint8)0xFFU);
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskCntStr[2U] =
  (uint8)((Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt >> 8U) & (uint8)0xFFU);
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskCntStr[3U] =
  (uint8)((Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt) & (uint8)0xFFU);
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt++;

  /* !LINKSTO EB_Crypto_CryptAlgos_1531, 1 */
  Crypto_RSA_ENC_HASH_Update
  (
    &Crypto_RsaesOaepEncryptCtx,
    &Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskCntStr[0U],
    CRYPTO_RSAESOAEP_MASK_CNT_LEN
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskEnd
(
  void
)
{
  Std_ReturnType RetVal;
  if (
       Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt <
       Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Itr
     )
  {
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskHashResultLength =
      Crypto_RsaesOaepEncryptCtx.HashLength;
  }
  else
  {
    /* Truncate last hash block if needed */
    /* !LINKSTO EB_Crypto_CryptAlgos_1533, 1 */
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskHashResultLength =
      Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskOutputLength -
      (
        (Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt - 1U) *
        Crypto_RsaesOaepEncryptCtx.HashLength
      );
  }

  Crypto_RSA_ENC_HASH_Finish
  (
    &Crypto_RsaesOaepEncryptCtx,
    /* !LINKSTO EB_Crypto_CryptAlgos_1532, 1 */
    &Crypto_RsaesOaepEncryptCtx.Mgf1Ctx
      .MaskOutputPtr[
                      (Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt - 1U) *
                      Crypto_RsaesOaepEncryptCtx.HashLength
                    ],
    /* !LINKSTO EB_Crypto_CryptAlgos_1533, 1 */
    &Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskHashResultLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepEncryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskEndCheck
(
  void
)
{
  Std_ReturnType RetVal = E_OK;
  /* !LINKSTO EB_Crypto_CryptAlgos_1530, 1 */
  if (
       Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt <
       Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Itr
     )
  {
    /* Mask is not finished. Start next hash. */
    RetVal = CRYPTO_E_BUSY;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptUpdate
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 TmpLen;
  uint32 DbIndex = 0U;
  uint32 RandomLength = Crypto_RsaesOaepEncryptCtx.HashLength;

  /* 2. KLen > nlen-2HLen-2 => error */
  /* !LINKSTO EB_Crypto_CryptAlgos_1501, 1 */
  TmpLen = (2U * Crypto_RsaesOaepEncryptCtx.HashLength) + 2U;
  if (
       (TmpLen <= Crypto_RsaesOaepEncryptCtx.NLength) &&
       (
         Crypto_RsaesOaepEncryptCtx.DataLength <=
         (Crypto_RsaesOaepEncryptCtx.NLength - TmpLen)
       )
     )
  {
    RetVal = E_OK;
  }

  if (E_OK == RetVal)
  {
    /* 3. */
    /* 3. b) PS[nLen-KLen-2HLen-2] = 0 */
    TmpLen = Crypto_RsaesOaepEncryptCtx.DataLength
      + (2U * Crypto_RsaesOaepEncryptCtx.HashLength) + 2U;

    if (TmpLen < Crypto_RsaesOaepEncryptCtx.NLength)
    {
      Crypto_RsaesOaepEncryptCtx.PsLength = Crypto_RsaesOaepEncryptCtx.NLength -
        TmpLen;
      /* !LINKSTO EB_Crypto_CryptAlgos_1506, 1 */
      TS_MemBZero(
                   Crypto_RsaesOaepEncryptCtx.Ps,
                   Crypto_RsaesOaepEncryptCtx.PsLength
                 );
    }
    else
    {
      /* !LINKSTO EB_Crypto_CryptAlgos_1507, 1 */
      Crypto_RsaesOaepEncryptCtx.PsLength = 0U;
    }

    /* 3. c) DB[nLen-HLen-1]=HA||PS||0x01||K */
    /* !LINKSTO EB_Crypto_CryptAlgos_1508, 1 */
    Crypto_RsaesOaepEncryptCtx.DbLength = Crypto_RsaesOaepEncryptCtx.NLength -
      Crypto_RsaesOaepEncryptCtx.HashLength - 1U;
    TS_MemCpy(
               Crypto_RsaesOaepEncryptCtx.Db,
               Crypto_RsaesOaepEncryptCtx.HashResult,
               Crypto_RsaesOaepEncryptCtx.HashResultLength
             );
    DbIndex = Crypto_RsaesOaepEncryptCtx.HashResultLength;
    TS_MemCpy(
               &Crypto_RsaesOaepEncryptCtx.Db[DbIndex],
               Crypto_RsaesOaepEncryptCtx.Ps,
               Crypto_RsaesOaepEncryptCtx.PsLength
             );
    DbIndex += Crypto_RsaesOaepEncryptCtx.PsLength;
    Crypto_RsaesOaepEncryptCtx.Db[DbIndex] = 0x01U;
    DbIndex += 1U;
    TS_MemCpy(
               &Crypto_RsaesOaepEncryptCtx.Db[DbIndex],
               Crypto_RsaesOaepEncryptCtx.Data,
               Crypto_RsaesOaepEncryptCtx.DataLength
             );
  }

  if (E_OK == RetVal)
  {
    /* 3. d) mgfSeed[Hlen] = RNG() */
    /* !LINKSTO EB_Crypto_CryptAlgos_1509, 1 */
    /* !LINKSTO EB_Crypto_CryptAlgos_1529, 1 */
    if (
         E_OK !=
         Crypto_AL_RANDOMGENERATE_AES_CTRDRBG_HelperSyncSingleCall
         (
           Crypto_RsaesOaepEncryptCtx.ObjId,
           Crypto_RsaesOaepEncryptCtx.Job,
           Crypto_RsaesOaepEncryptCtx.MgfSeed,
           &RandomLength
         )
       )
    {
      /* !LINKSTO EB_Crypto_CryptAlgos_1534, 1 */
      RetVal = E_NOT_OK;
    }
  }

  if (E_OK == RetVal)
  {
    /* 3. e) dbMask = MGF(mgfSeed, nLen-HLen-1) */
      /* !LINKSTO EB_Crypto_CryptAlgos_1510,1 */
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt = 0U;
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Itr =
    (
      (
        Crypto_RsaesOaepEncryptCtx.DbLength +
        Crypto_RsaesOaepEncryptCtx.HashLength
      ) - 1U
    ) / Crypto_RsaesOaepEncryptCtx.HashLength;

    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskOutputPtr =
    &Crypto_RsaesOaepEncryptCtx.DbMask[0U];
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskOutputLength =
    Crypto_RsaesOaepEncryptCtx.DbLength;

    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskInputPtr =
    &Crypto_RsaesOaepEncryptCtx.MgfSeed[0U]; /* mgfSeed */
    Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskInputLength =
    Crypto_RsaesOaepEncryptCtx.HashLength;
  }

  if (E_NOT_OK == RetVal)
  {
    Crypto_RsaesOaepEncryptCtx.CallbackResult = E_NOT_OK;
    Crypto_RsaesOaepEncryptCtx.CallbackFlag = TRUE;
    Crypto_RsaesOaepEncryptCtx.ProcessDone = TRUE;
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptMaskDone
(
  void
)
{
  /* 3. f) maskedDB = DB XOR dbMask */
  /* !LINKSTO EB_Crypto_CryptAlgos_1511, 1 */
  Crypto_CommonXOR
  (
    Crypto_RsaesOaepEncryptCtx.DbMask,
    Crypto_RsaesOaepEncryptCtx.Db,
    Crypto_RsaesOaepEncryptCtx.DbLength
  );

  /* 3. g) mgfSeedMask = MGF(maskedDB, HLen) */
  /* !LINKSTO EB_Crypto_CryptAlgos_1512, 1 */
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Cnt = 0U;
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.Itr =
  (
    (
      Crypto_RsaesOaepEncryptCtx.HashLength +
      Crypto_RsaesOaepEncryptCtx.HashLength
    ) - 1U
  ) / Crypto_RsaesOaepEncryptCtx.HashLength;

  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskOutputPtr =
  &Crypto_RsaesOaepEncryptCtx.MgfSeedMask[0U]; /* maskedMGFSeed */
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskOutputLength =
  Crypto_RsaesOaepEncryptCtx.HashLength;

  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskInputPtr =
  &Crypto_RsaesOaepEncryptCtx.DbMask[0U]; /* maskedDB */
  Crypto_RsaesOaepEncryptCtx.Mgf1Ctx.MaskInputLength =
  Crypto_RsaesOaepEncryptCtx.DbLength;

  return E_OK;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptSeedMaskDone
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 EMIndex = 0U;
  uint32 NumberLength = Crypto_RsaesOaepEncryptCtx.NLength;
  Crypto_LNWordType TmpLnWord[2U] = {1U, 1U};

  /* 3. h) maskedMGFSeed = mgfSeed XOR mgfSeedMask */
  /* !LINKSTO EB_Crypto_CryptAlgos_1513, 1 */
  Crypto_CommonXOR
  (
    Crypto_RsaesOaepEncryptCtx.MgfSeedMask,
    Crypto_RsaesOaepEncryptCtx.MgfSeed,
    Crypto_RsaesOaepEncryptCtx.HashLength
  );

  /* 3. i) EM = 0x00 || maskedMGFSeed || maskedDB */
  /* !LINKSTO EB_Crypto_CryptAlgos_1514, 1 */
  Crypto_RsaesOaepEncryptCtx.EMLength = Crypto_RsaesOaepEncryptCtx.HashLength
    + 1U + Crypto_RsaesOaepEncryptCtx.DbLength;
  Crypto_RsaesOaepEncryptCtx.EM[0U] = 0x00U;
  EMIndex = 1U;
  TS_MemCpy(
             &Crypto_RsaesOaepEncryptCtx.EM[EMIndex],
             Crypto_RsaesOaepEncryptCtx.MgfSeedMask,
             Crypto_RsaesOaepEncryptCtx.HashLength
           );
  EMIndex += Crypto_RsaesOaepEncryptCtx.HashLength;
  TS_MemCpy(
             &Crypto_RsaesOaepEncryptCtx.EM[EMIndex],
             Crypto_RsaesOaepEncryptCtx.DbMask,
             Crypto_RsaesOaepEncryptCtx.DbLength
           );

  /* 4. RSA encryption */
  /* 4. a) em = BS2I(EM) */
  /* !LINKSTO EB_Crypto_CryptAlgos_1515, 1 */
  RetVal =
  Crypto_LNBEByteArrayToNumber
  (
    Crypto_RsaesOaepEncryptCtx.EM,
    Crypto_RsaesOaepEncryptCtx.EMLength,
    Crypto_RsaesOaepEncryptCtx.Tmp2Value,
    (Crypto_LNWordType)
    (
      sizeof(Crypto_RsaesOaepEncryptCtx.Tmp2Value) /
      sizeof(Crypto_RsaesOaepEncryptCtx.Tmp2Value[0U])
    )
  );

  /* 4. b) c = RSAEP((n,e), em) */
  /* check 1 < em < n-1 */
  /* !LINKSTO EB_Crypto_CryptAlgos_1516, 1 */
  if (RetVal == E_OK)
    {
    if (
         CRYPTO_E_LARGER !=
         Crypto_LNCompareNumbers
         (
           Crypto_RsaesOaepEncryptCtx.Tmp2Value, /* em */
           TmpLnWord /* 1 */
         )
       )
    {
      /* c <= 1 */
      RetVal = E_NOT_OK;
    }
  }

  if (RetVal == E_OK)
  {
    Crypto_LNSubtraction
    (
      Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
      Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
      TmpLnWord
    );
    if (
         CRYPTO_E_SMALLER !=
         Crypto_LNCompareNumbers
         (
           Crypto_RsaesOaepEncryptCtx.Tmp2Value, /* em */
           Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus /* n - 1 */
         )
       )
    {
      /* em >= n - 1 */
      RetVal = E_NOT_OK;
    }
    else
    {
      /* Return value (carry) can be discarded as we just add the previous subtracted 1 again */
      (void) Crypto_LNAddition
             (
               Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
               Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
               TmpLnWord
             );
    }
  }

  /* 4. c) C = I2BS(c, nLen) */
  if (RetVal == E_OK)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_1517, 1 */
    Crypto_LNModExp
    (
      Crypto_RsaesOaepEncryptCtx.Tmp1Value,
      Crypto_RsaesOaepEncryptCtx.Tmp2Value,
      Crypto_RsaesOaepEncryptCtx.RsaKey.Modulus,
      Crypto_RsaesOaepEncryptCtx.RsaKey.PublicExponent,
      &Crypto_RsaesOaepEncryptCtx.LNCtx
    );

    /* !LINKSTO EB_Crypto_CryptAlgos_1518, 1 */
    RetVal =
    Crypto_LNNumberToBEByteArray
    (
      Crypto_RsaesOaepEncryptCtx.Tmp1Value,
      Crypto_RsaesOaepEncryptCtx.EM,
      &NumberLength
    );
    Crypto_RsaesOaepEncryptCtx.EMLength = NumberLength;
  }

  /* Result will be written in finish step */
  if (RetVal == E_OK)
  {
    if (
         (
           (
             (Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInputOutput.mode) &
             ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
           ) !=
           ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
         ) ||
         (
           CRYPTO_PROCESSING_SYNC ==
           Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInfo->processingType
         )
       )
     {
       /* No output is done in the update step */
       /* !LINKSTO EB_Crypto_CryptAlgos_1519, 1 */
       *Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInputOutput.outputLengthPtr = 0U;
     }
  }

  if (RetVal == E_NOT_OK)
  {
    Crypto_RsaesOaepEncryptCtx.ProcessDone = TRUE;
  }
  Crypto_RsaesOaepEncryptCtx.CallbackResult = RetVal;
  Crypto_RsaesOaepEncryptCtx.CallbackFlag = TRUE;

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapEncryptFinish
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;

  /* 5. Zeroize all intermediate values and output the ciphertext C */
  if (
       *Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInputOutput.outputLengthPtr >=
       Crypto_RsaesOaepEncryptCtx.EMLength
     )
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_1520, 1 */
    TS_MemCpy(
               Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInputOutput.outputPtr,
               Crypto_RsaesOaepEncryptCtx.EM,
               Crypto_RsaesOaepEncryptCtx.EMLength
             );
    *Crypto_RsaesOaepEncryptCtx.Job->jobPrimitiveInputOutput.outputLengthPtr =
      Crypto_RsaesOaepEncryptCtx.EMLength;

    RetVal = E_OK;
  }
  else
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_1521, 1 */
    RetVal = CRYPTO_E_SMALL_BUFFER;
  }
  Crypto_RsaesOaepEncryptCtx.CallbackResult = RetVal;
  /* Setting the ProcessDone flag to true also zeroizes the context */
  Crypto_RsaesOaepEncryptCtx.ProcessDone = TRUE;
  Crypto_RsaesOaepEncryptCtx.CallbackFlag = TRUE;

  return RetVal;
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Result
)
{
  if(TRUE == Crypto_RsaesOaepEncryptCtx.ProcessDone)
  {
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    Crypto_DriverObjects[Crypto_RsaesOaepEncryptCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
    Crypto_DriverObjects[Crypto_RsaesOaepEncryptCtx.ObjId].CurrentJob =
      NULL_PTR;
    Crypto_DriverObjects[Crypto_RsaesOaepEncryptCtx.ObjId].SkipPeriodicMainFunction = TRUE;
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
    Job->jobState = CRYPTO_JOBSTATE_IDLE;
    CryIf_CallbackNotification(Job, Result);
  }
  else
  {
    if(
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) !=
            ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
        ) &&
        (
          (
            ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) !=
              ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
          ) || (CRYPTO_OPERATIONMODE_START != Crypto_RsaesOaepEncryptCtx.CurrentMode)
        )
      )
    {
      CryIf_CallbackNotification(Job, Result);
    }
  }

  /* processing for async SingleCall and StreamStart */
  if(
      (
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) ==
            ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
        ) ||
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) ==
            ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
        )
      ) && (CRYPTO_OPERATIONMODE_START == Crypto_RsaesOaepEncryptCtx.CurrentMode)
    )
  {
    /* Update always returns OK */
    (void) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Update
           (
             Crypto_RsaesOaepEncryptCtx.ObjId,
             Job
           );
  }
  else
  {
    if(
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) ==
            ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
        ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_RsaesOaepEncryptCtx.CurrentMode)
      )
    {

      /* Finish always returns OK */
      (void) Crypto_AL_ENCRYPT_RSA_RSAES_OAEP_Finish
             (
               Crypto_RsaesOaepEncryptCtx.ObjId,
               Job
             );
    }
  }
}

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_ENC_ENABLED) */

#if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED)

static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Start
(
  P2VAR(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      Crypto_SHA2224HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 28U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      Crypto_SHA2256HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 32U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      Crypto_SHA2384HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 48U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      Crypto_SHA2512HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           &Ctx->HashJob,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 64U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      Crypto_SHA3224HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 28U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      Crypto_SHA3256HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 32U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      Crypto_SHA3384HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 48U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      Crypto_SHA3512HelperStart(
                                           Ctx->ObjId,
                                           &Crypto_RSA_DEC_HASH_Callback,
                                           Ctx->Job,
                                           Ctx->Job->jobPrimitiveInfo->processingType
                                         );
      /* set selected hash length in byte */
      Ctx->HashLength = 64U;
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Update
(
  P2CONST(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2CONST(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                    DataPtr,
  uint32                                                                                   DataLength
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2224HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2256HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2384HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2512HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3224HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3256HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3384HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3512HelperUpdate(
                                                  DataPtr,
                                                  DataLength,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Finish
(
  P2CONST(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx,
  P2VAR(uint8, AUTOMATIC, CRYPTO_APPL_DATA)                                      ResPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_APPL_DATA)                                     ResLenPtr
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2224HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2256HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2384HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA2512HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  TRUE,
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3224HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3256HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3384HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      /* we are in the correct state when this is called so it can not fail */
      (void)Crypto_SHA3512HelperFinish(
                                                  ResPtr,
                                                  ResLenPtr,
                                                  /* Truncation */
                                                  Ctx->Job->jobPrimitiveInfo->processingType
                                                );
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_MainFunction
(
  P2CONST(Crypto_RsaesOaepDecryptCtxType, AUTOMATIC, CRYPTO_APPL_DATA) Ctx
)
{
  switch(Ctx->HashAlgorithm)
  {
#if(STD_ON == CRYPTO_SHA2_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_224:
    {
      Crypto_SHA2224HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_256:
    {
      Crypto_SHA2256HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_384:
    {
      Crypto_SHA2384HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA2_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      Crypto_SHA2512HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA2_512_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_224_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_224:
    {
      Crypto_SHA3224HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_224_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_256_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_256:
    {
      Crypto_SHA3256HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_256_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_384_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_384:
    {
      Crypto_SHA3384HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_384_ENABLED) */

#if(STD_ON == CRYPTO_SHA3_512_ENABLED)
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      Crypto_SHA3512HelperMainFunction();
      break;
    }
#endif /* #if(STD_ON == CRYPTO_SHA3_512_ENABLED) */

    /* CHECK: NOPARSE */
    /* All the possible hashing algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }
}

static FUNC(void, CRYPTO_CODE) Crypto_RSA_DEC_HASH_Callback
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Std_ReturnType                                               Result
)
{
  TS_PARAM_UNUSED(Job);
  TS_PARAM_UNUSED(Result);
  Crypto_RsaesOaepDecryptCtx.ShiftState = TRUE;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashStart
(
  void
)
{
  Std_ReturnType RetVal;
  Crypto_RSA_DEC_HASH_Start(&Crypto_RsaesOaepDecryptCtx);
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashUpdate
(
  void
)
{
  Std_ReturnType RetVal;
  Crypto_RSA_DEC_HASH_Update
  (
    &Crypto_RsaesOaepDecryptCtx,
    Crypto_RsaesOaepDecryptCtx.AdditionalInput,
    Crypto_RsaesOaepDecryptCtx.AdditionalInputLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashFinish
(
  void
)
{
  Std_ReturnType RetVal;
  Crypto_RSA_DEC_HASH_Finish
  (
    &Crypto_RsaesOaepDecryptCtx,
    Crypto_RsaesOaepDecryptCtx.HashResult,
    &Crypto_RsaesOaepDecryptCtx.HashResultLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptHashMainFunction
(
  void
)
{
  Std_ReturnType RetVal = CRYPTO_E_BUSY;

  Crypto_RSA_DEC_HASH_MainFunction(&Crypto_RsaesOaepDecryptCtx);

  if (Crypto_RsaesOaepDecryptCtx.ShiftState)
  {
    RetVal = E_OK;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskUpdate
(
  void
)
{
  Std_ReturnType RetVal;
  /* !LINKSTO EB_Crypto_CryptAlgos_1584, 1 */
  Crypto_RSA_DEC_HASH_Update
  (
    &Crypto_RsaesOaepDecryptCtx,
    Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskInputPtr,
    Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskInputLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskUpdateCnt
(
  void
)
{
  Std_ReturnType RetVal;
  /* D = I2BS(counter, 4) */
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskCntStr[0U] =
  (uint8)((Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt >> 24U) & (uint8)0xFFU);
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskCntStr[1U] =
  (uint8)((Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt >> 16U) & (uint8)0xFFU);
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskCntStr[2U] =
  (uint8)((Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt >>  8U) & (uint8)0xFFU);
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskCntStr[3U] =
  (uint8)((Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt) & (uint8)0xFFU);
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt++;

  /* !LINKSTO EB_Crypto_CryptAlgos_1584, 1 */
  Crypto_RSA_DEC_HASH_Update
  (
    &Crypto_RsaesOaepDecryptCtx,
    &Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskCntStr[0U],
    CRYPTO_RSAESOAEP_MASK_CNT_LEN
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskEnd
(
  void
)
{
  Std_ReturnType RetVal;
  if (
       Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt <
       Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Itr
     )
  {
    Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskHashResultLength =
      Crypto_RsaesOaepDecryptCtx.HashLength;
  }
  else
  {
    /* Truncate last hash block if needed */
    /* !LINKSTO EB_Crypto_CryptAlgos_1586, 1 */
    Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskHashResultLength =
      Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskOutputLength -
      (
        (Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt - 1U) *
        Crypto_RsaesOaepDecryptCtx.HashLength
      );
  }

  Crypto_RSA_DEC_HASH_Finish
  (
    &Crypto_RsaesOaepDecryptCtx,
    /* !LINKSTO EB_Crypto_CryptAlgos_1585, 1 */
    &Crypto_RsaesOaepDecryptCtx.Mgf1Ctx
      .MaskOutputPtr[
                      (Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt - 1U) *
                      Crypto_RsaesOaepDecryptCtx.HashLength
                    ],
    /* !LINKSTO EB_Crypto_CryptAlgos_1586, 1 */
    &Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskHashResultLength
  );
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskEndCheck
(
  void
)
{
  Std_ReturnType RetVal = E_OK;
  /* !LINKSTO EB_Crypto_CryptAlgos_1583, 1 */
  if (
       Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt <
       Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Itr
     )
  {
    /* Mask is not finished. Start next hash. */
    RetVal = CRYPTO_E_BUSY;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptUpdate
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 NumberLength = Crypto_RsaesOaepDecryptCtx.NLength;
  Crypto_LNWordType TmpLnWord[2U] = {1U, 1U};
  /* 2. a) len(C) != nlLen => error */
  /* !LINKSTO EB_Crypto_CryptAlgos_1551, 1 */
  if (
       Crypto_RsaesOaepDecryptCtx.DataLength ==
       Crypto_RsaesOaepDecryptCtx.NLength
     )
  {
    RetVal = E_OK;
  }

  if (RetVal == E_OK)
  {
    /* 2. b) c = BS2I(C) */
    /* !LINKSTO EB_Crypto_CryptAlgos_1555, 1 */
    RetVal =
    Crypto_LNBEByteArrayToNumber
    (
      Crypto_RsaesOaepDecryptCtx.Data,
      Crypto_RsaesOaepDecryptCtx.DataLength,
      Crypto_RsaesOaepDecryptCtx.Tmp1Value,
      (Crypto_LNWordType)
      (
        sizeof(Crypto_RsaesOaepDecryptCtx.Tmp1Value) /
        sizeof(Crypto_RsaesOaepDecryptCtx.Tmp1Value[0U])
      )
    );
  }

  /* 2. c) 1 < c < n - 1 */
  /* !LINKSTO EB_Crypto_CryptAlgos_1556, 1 */
  if (RetVal == E_OK)
  {
    if (
         CRYPTO_E_LARGER !=
         Crypto_LNCompareNumbers
         (
           Crypto_RsaesOaepDecryptCtx.Tmp1Value, /* c */
           TmpLnWord /* 1 */
         )
       )
    {
      /* c <= 1 */
      RetVal = E_NOT_OK;
    }
  }

  if (RetVal == E_OK)
  {
    Crypto_LNSubtraction
    (
      Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus,
      Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus,
      TmpLnWord
    );
    if (
         CRYPTO_E_SMALLER !=
         Crypto_LNCompareNumbers
         (
           Crypto_RsaesOaepDecryptCtx.Tmp1Value, /* c */
           Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus /* n - 1 */
         )
       )
    {
      /* c >= n - 1 */
      RetVal = E_NOT_OK;
    }
    else
    {
      /* Return value (carry) can be discarded as we just add the previous subtracted 1 again */
      (void) Crypto_LNAddition
             (
               Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus,
               Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus,
               TmpLnWord
             );
    }
  }

  /* 3. RSA decryption */
  /* 3. a) em = RSADP((n,d),c) */
  if (RetVal == E_OK)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_1557, 1 */
    Crypto_LNModExp
    (
      Crypto_RsaesOaepDecryptCtx.Tmp2Value, /* em */
      Crypto_RsaesOaepDecryptCtx.Tmp1Value, /* c */
      Crypto_RsaesOaepDecryptCtx.RsaKey.Modulus, /* n */
      Crypto_RsaesOaepDecryptCtx.RsaKey.PublicExponent, /* d */
      &Crypto_RsaesOaepDecryptCtx.LNCtx
    );
  }

  /* 3. b) EM = I2BS(em,nLen) */
  if (RetVal == E_OK)
  {
    /* !LINKSTO EB_Crypto_CryptAlgos_1558, 1 */
    RetVal =
    Crypto_LNNumberToBEByteArray
    (
      Crypto_RsaesOaepDecryptCtx.Tmp2Value,
      Crypto_RsaesOaepDecryptCtx.EM,
      &NumberLength
    );
    Crypto_RsaesOaepDecryptCtx.EMLength = NumberLength;
  }

  /* 4. OAEP decoding */
  /* 4. a) HA = H(A) */
  /* Next state will start the hash */

  if (RetVal == E_NOT_OK)
  {
    Crypto_RsaesOaepDecryptCtx.CallbackResult = RetVal;
    Crypto_RsaesOaepDecryptCtx.CallbackFlag = TRUE;
    Crypto_RsaesOaepDecryptCtx.ProcessDone = TRUE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptFinish
(
  void
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  uint32 i;
  uint32 Index = 0U;
  boolean SeparatorFound = FALSE;
  boolean DecryptErrorFlag = FALSE;

  /* 4. g) DB' = HA' || X */
  /* 5. check for decryption errors, do not abort - set DecryptErrorFlag */
  /* 5. a) check Y == 0x00 */
  /* !LINKSTO EB_Crypto_CryptAlgos_1559, 1 */
  if (Crypto_RsaesOaepDecryptCtx.EM[0U] != 0x00)
  {
    /* Invalid Y */
    /* !LINKSTO EB_Crypto_CryptAlgos_1566, 1 */
    DecryptErrorFlag = TRUE;
  }
  /* 5. b) check HA' == HA */
  if (E_NOT_OK == Crypto_MemCmp_Sec
                  (
                      /* !LINKSTO EB_Crypto_CryptAlgos_1565, 1 */
                    Crypto_RsaesOaepDecryptCtx.DbMask,
                    Crypto_RsaesOaepDecryptCtx.HashResult,
                    Crypto_RsaesOaepDecryptCtx.HashLength
                  )
     )
  {
    /* Invalid HA' */
    /* !LINKSTO EB_Crypto_CryptAlgos_1567, 1 */
    DecryptErrorFlag = TRUE;
  }
  /* 5. c) check format of X, should be PS||0x01||K */
  /* !LINKSTO EB_Crypto_CryptAlgos_1568, 1 */
  /* !LINKSTO EB_Crypto_CryptAlgos_1565, 1 */
  /* !LINKSTO EB_Crypto_CryptAlgos_1581, 1 */
  for (
        i = Crypto_RsaesOaepDecryptCtx.HashLength;
        (i < Crypto_RsaesOaepDecryptCtx.DbLength);
        i++
      )
  {
    /* PS can be 0 or more 0x00 bytes */
    if (
         (SeparatorFound == FALSE) &&
         (Crypto_RsaesOaepDecryptCtx.DbMask[i] > 0x01U)
       )
    {
      /* Invalid X */
      DecryptErrorFlag = TRUE;
    }
    else
    {
      if ((SeparatorFound == FALSE) && (Crypto_RsaesOaepDecryptCtx.DbMask[i] == 0x01U))
      {
        SeparatorFound = TRUE;
        Index = i + 1U;
      }
    }
  }
  if ((SeparatorFound == FALSE) || (Index == Crypto_RsaesOaepDecryptCtx.DbLength))
  {
    /* No Separator or K found */
    DecryptErrorFlag = TRUE;
  }

  /* 6. output */
  /* 6. a) only output if no error was detected */
  /* !LINKSTO EB_Crypto_CryptAlgos_1569, 1 */
  if (DecryptErrorFlag == FALSE)
  {
    if (
         *Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInputOutput.outputLengthPtr >=
         (Crypto_RsaesOaepDecryptCtx.DbLength - Index)
       )
    {
      /* 6. b) output K */
      /* !LINKSTO EB_Crypto_CryptAlgos_1570, 1 */
      TS_MemCpy(
                 Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInputOutput.outputPtr,
                 &Crypto_RsaesOaepDecryptCtx.DbMask[Index],
                 Crypto_RsaesOaepDecryptCtx.DbLength - Index
               );
      *Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInputOutput.outputLengthPtr =
      Crypto_RsaesOaepDecryptCtx.DbLength - Index;
      RetVal = E_OK;
    }
    else
    {
      /* !LINKSTO EB_Crypto_CryptAlgos_1571, 1 */
      RetVal = CRYPTO_E_SMALL_BUFFER;
    }
  }
  Crypto_RsaesOaepDecryptCtx.CallbackResult = RetVal;
  Crypto_RsaesOaepDecryptCtx.CallbackFlag = TRUE;
  Crypto_RsaesOaepDecryptCtx.ProcessDone = TRUE;

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptSeedMaskStart
(
  void
)
{
  Std_ReturnType RetVal;
  /* 4. b) EM = Y || maskedMgfSeed' || maskedDB' */
  /* 4. c) mgfSeedMask' = MGF(maskedDB', HLen) */
  /* !LINKSTO EB_Crypto_CryptAlgos_1560, 1 */
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt = 0U;

  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Itr =
  (
    (
      Crypto_RsaesOaepDecryptCtx.HashLength +
      Crypto_RsaesOaepDecryptCtx.HashLength
    ) - 1U
  ) / Crypto_RsaesOaepDecryptCtx.HashLength;

  Crypto_RsaesOaepDecryptCtx.DbLength = Crypto_RsaesOaepDecryptCtx.NLength -
    Crypto_RsaesOaepDecryptCtx.HashLength - 1U;

  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskOutputPtr =
  &Crypto_RsaesOaepDecryptCtx.MgfSeedMask[0U];
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskOutputLength =
  Crypto_RsaesOaepDecryptCtx.HashLength;

  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskInputPtr =
  /* !LINKSTO EB_Crypto_CryptAlgos_1580, 1 */
  &Crypto_RsaesOaepDecryptCtx.EM[1U + Crypto_RsaesOaepDecryptCtx.HashLength];
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskInputLength =
  Crypto_RsaesOaepDecryptCtx.DbLength;

  Crypto_RSA_DEC_HASH_Start(&Crypto_RsaesOaepDecryptCtx);
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
    Crypto_RsaesOaepDecryptCtx.ShiftState = FALSE;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptSeedMaskDone
(
  void
)
{
  Std_ReturnType RetVal;
  /* 4. */
  /* 4. d) mgfSeed' = maskedMGFSeed' XOR mgfSeedMask' */
  /* !LINKSTO EB_Crypto_CryptAlgos_1561, 1 */
  Crypto_CommonXOR
  (
    Crypto_RsaesOaepDecryptCtx.MgfSeedMask, /* mgfSeedMask' */
    /* !LINKSTO EB_Crypto_CryptAlgos_1579, 1 */
    &Crypto_RsaesOaepDecryptCtx.EM[1U], /* maskedMGFSeed'*/
    Crypto_RsaesOaepDecryptCtx.HashLength
  );

  /* 4. e) dbMask' = MGF(mgfSeed', nlen-HLen-1) */
  /* !LINKSTO EB_Crypto_CryptAlgos_1562, 1 */
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Cnt = 0U;

  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.Itr =
  (
    (
      Crypto_RsaesOaepDecryptCtx.DbLength +
      Crypto_RsaesOaepDecryptCtx.HashLength
    ) - 1U
  ) / Crypto_RsaesOaepDecryptCtx.HashLength;

  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskOutputPtr =
  &Crypto_RsaesOaepDecryptCtx.DbMask[0U];
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskOutputLength =
  Crypto_RsaesOaepDecryptCtx.HashLength;

  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskInputPtr =
  &Crypto_RsaesOaepDecryptCtx.MgfSeedMask[0U]; /* mgfSeed' */
  Crypto_RsaesOaepDecryptCtx.Mgf1Ctx.MaskInputLength =
  Crypto_RsaesOaepDecryptCtx.HashLength;

  Crypto_RSA_DEC_HASH_Start(&Crypto_RsaesOaepDecryptCtx);
  if(
      CRYPTO_PROCESSING_SYNC ==
      Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
    )
  {
    RetVal = E_OK;
  }
  else
  {
    RetVal = CRYPTO_E_BUSY;
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_RsaesOeapDecryptMaskDone
(
  void
)
{
  /* 4. f) DB' = maskedDB' XOR dbMask' */
  /* !LINKSTO EB_Crypto_CryptAlgos_1563, 1 */
  Crypto_CommonXOR
  (
    Crypto_RsaesOaepDecryptCtx.DbMask, /* dbMask' */
    /* !LINKSTO EB_Crypto_CryptAlgos_1580, 1 */
    &Crypto_RsaesOaepDecryptCtx.EM[1U + Crypto_RsaesOaepDecryptCtx.HashLength],
    Crypto_RsaesOaepDecryptCtx.DbLength
  );

  /* result will be written in finish step */
  if (
       (
         (
           (Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInputOutput.mode) &
           ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
         ) !=
         ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
       ) ||
       (
         CRYPTO_PROCESSING_SYNC ==
         Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInfo->processingType
       )
     )
  {
    /* No output is done in the update step */
    /* !LINKSTO EB_Crypto_CryptAlgos_1564, 1 */
    *Crypto_RsaesOaepDecryptCtx.Job->jobPrimitiveInputOutput.outputLengthPtr = 0U;
  }
  Crypto_RsaesOaepDecryptCtx.CallbackResult = E_OK;
  Crypto_RsaesOaepDecryptCtx.CallbackFlag = TRUE;

  return E_OK;
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Reset
(
  void
)
{
  switch(Crypto_RsaesOaepDecryptCtx.HashAlgorithm)
  {
#if(                                                    \
       (CRYPTO_SHA2_224_ENABLED == STD_ON)    \
    || (CRYPTO_SHA2_256_ENABLED == STD_ON)    \
    || (CRYPTO_SHA2_384_ENABLED == STD_ON)    \
    || (CRYPTO_SHA2_512_ENABLED == STD_ON)    \
   )
    case CRYPTO_ALGOFAM_SHA2_224:
    case CRYPTO_ALGOFAM_SHA2_256:
    case CRYPTO_ALGOFAM_SHA2_384:
    case CRYPTO_ALGOFAM_SHA2_512:
    {
      Crypto_AL_HASH_SHA2_NOT_SET_Reset();
      break;
    }
#endif

#if(                                                    \
       (CRYPTO_SHA3_224_ENABLED == STD_ON)    \
    || (CRYPTO_SHA3_256_ENABLED == STD_ON)    \
    || (CRYPTO_SHA3_384_ENABLED == STD_ON)    \
    || (CRYPTO_SHA3_512_ENABLED == STD_ON)    \
   )
    case CRYPTO_ALGOFAM_SHA3_224:
    case CRYPTO_ALGOFAM_SHA3_256:
    case CRYPTO_ALGOFAM_SHA3_384:
    case CRYPTO_ALGOFAM_SHA3_512:
    {
      Crypto_AL_HASH_SHA3_NOT_SET_Reset();
      break;
    }
#endif

    /* CHECK: NOPARSE */
    /* All the possible secondary family algorithms have been addressed in the cases above.*/
    default:
    {
      /* default case required by MISRA-C */
      break;
    }
    /* CHECK: PARSE */
  }

  TS_MemBZero(
               &Crypto_RsaesOaepDecryptCtx,
               sizeof(Crypto_RsaesOaepDecryptCtx)
             );
}

static FUNC(void, CRYPTO_CODE) Crypto_AL_DECRYPT_RSA_RSAES_OAEP_CallBack
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  uint8                                                        Result
)
{
  if(TRUE == Crypto_RsaesOaepDecryptCtx.ProcessDone)
  {
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    Crypto_DriverObjects[Crypto_RsaesOaepDecryptCtx.ObjId].DriverObjectState =
      CRYPTO_DRIVER_OBJECT_STATE_IDLE;
    Crypto_DriverObjects[Crypto_RsaesOaepDecryptCtx.ObjId].CurrentJob =
      NULL_PTR;
    Crypto_DriverObjects[Crypto_RsaesOaepDecryptCtx.ObjId].SkipPeriodicMainFunction = TRUE;
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* !LINKSTO Crypto.Dsn.JobTransition.ActiveError2Idle, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.Finish2Idle, 1 */
    /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
    Job->jobState = CRYPTO_JOBSTATE_IDLE;
    CryIf_CallbackNotification(Job, Result);
  }
  else
  {
    if(
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) !=
            ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
        ) &&
        (
          (
            ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) !=
              ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
          ) || (CRYPTO_OPERATIONMODE_START != Crypto_RsaesOaepDecryptCtx.CurrentMode)
        )
      )
    {
      CryIf_CallbackNotification(Job, Result);
    }
  }

  /* processing for async SingleCall and StreamStart */
  if(
      (
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) ==
            ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
        ) ||
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) ==
            ((uint8) CRYPTO_OPERATIONMODE_STREAMSTART)
        )
      ) && (CRYPTO_OPERATIONMODE_START == Crypto_RsaesOaepDecryptCtx.CurrentMode)
    )
  {
    /* Update always returns OK */
    (void)Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Update(
                                                      Crypto_RsaesOaepDecryptCtx.ObjId,
                                                      Job
                                                    );
  }
  else
  {
    if(
        (
          ((Job->jobPrimitiveInputOutput.mode) & ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)) ==
            ((uint8) CRYPTO_OPERATIONMODE_SINGLECALL)
        ) && (CRYPTO_OPERATIONMODE_UPDATE == Crypto_RsaesOaepDecryptCtx.CurrentMode)
      )
    {
      /* Finish always returns OK */
      (void)Crypto_AL_DECRYPT_RSA_RSAES_OAEP_Finish(
                                                        Crypto_RsaesOaepDecryptCtx.ObjId,
                                                        Job
                                                      );
    }
  }
}

#endif /* #if (STD_ON == CRYPTO_RSAESOAEP_DEC_ENABLED) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

#else

/* Dummy type definition to prevent compiler warnings about empty translation units */
typedef uint8 Crypto_RsaOaep_PrvtEmptyTranslationUnitType;

#endif

/*==[end of file]=================================================================================*/

