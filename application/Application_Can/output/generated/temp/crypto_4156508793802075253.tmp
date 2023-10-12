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

/*==================[includes]====================================================================*/

#include <Crypto_AL_KeyManagement.h>
#include <Crypto_AL_Cfg.h>

/*==================[macros]======================================================================*/

/*==================[type definitions]============================================================*/

/*==================[external function declarations]==============================================*/

/*==================[internal function declarations]==============================================*/

/*==================[external constants]==========================================================*/

/*==================[internal constants]==========================================================*/

/*==================[internal data]===============================================================*/

#define CRYPTO_START_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

/**
* \brief Keys elements data.
*/
VAR(uint8, CRYPTO_VAR) Crypto_AL_KeyElemData_0_0[CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE];
VAR(uint8, CRYPTO_VAR) Crypto_AL_KeyElemData_0_1[CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE];
VAR(uint8, CRYPTO_VAR) Crypto_AL_KeyElemData_1_0[CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE];
VAR(uint8, CRYPTO_VAR) Crypto_AL_KeyElemData_1_1[CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8
#include <Crypto_MemMap.h>

#define CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/**
* \brief Keys data.
*/
static VAR(Crypto_AL_KeyDataType, CRYPTO_VAR) Crypto_AL_KeyData_0[2U] =
{
{
CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE,
&Crypto_AL_KeyElemData_0_0[0U],
&Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE[0U],

},
{
CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE,
&Crypto_AL_KeyElemData_0_1[0U],
&Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE[0U],

},
};
static VAR(Crypto_AL_KeyDataType, CRYPTO_VAR) Crypto_AL_KeyData_1[2U] =
{
{
CRYPTO_KE_CRYPTOKEYELEMENT_SECOC_KEY_SIZE,
&Crypto_AL_KeyElemData_1_0[0U],
&Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE[0U],

},
{
CRYPTO_KE_CRYPTOKEYELEMENT_KEY_CHECKSUM_SIZE,
&Crypto_AL_KeyElemData_1_1[0U],
&Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE[0U],

},
};

#define CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==================[external data]===============================================================*/

#define CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/**
 * \brief Array holding all keys data.
 */
/* !LINKSTO EB_Crypto_01018,1 */
#if (CRYPTO_API_ENABLED_KEYMNGMNT == STD_ON)
VAR(Crypto_AL_KeysDataType, CRYPTO_VAR) Crypto_AL_Keys_Data[CRYPTO_KEY_COUNT] =
{
  {
    2U,
    &Crypto_AL_KeyData_0[0U]
  },
  {
    2U,
    &Crypto_AL_KeyData_1[0U]
  },
};
#endif /* #if (CRYPTO_API_ENABLED_KEYMNGMNT == STD_ON) */

#define CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Crypto_MemMap.h>

/*==================[external function definitions]===============================================*/

/*==================[internal function definitions]===============================================*/

/*================================================================================================*/

/*==================[end of file]=================================================================*/

