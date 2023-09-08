/**
 * \file
 *
 * \brief AUTOSAR MemMap
 *
 * This file contains the implementation of the AUTOSAR
 * module MemMap.
 *
 * \version 1.3.12
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]=============================================*/

#define MEMMAP_ERROR_CRYPTO

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for Crypto */

#if (defined CRYPTO_START_SEC_CODE)
  #undef CRYPTO_START_SEC_CODE
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_CODE)
  #undef CRYPTO_STOP_SEC_CODE
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_CONST_32)
  #undef CRYPTO_START_SEC_CONST_32
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_CONST_32)
  #undef CRYPTO_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_CONST_8)
  #undef CRYPTO_START_SEC_CONST_8
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_CONST_8)
  #undef CRYPTO_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_CONST_UNSPECIFIED)
  #undef CRYPTO_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_CONST_UNSPECIFIED)
  #undef CRYPTO_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_CLEARED_32)
  #undef CRYPTO_START_SEC_VAR_CLEARED_32
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_CLEARED_32)
  #undef CRYPTO_STOP_SEC_VAR_CLEARED_32
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_CLEARED_64)
  #undef CRYPTO_START_SEC_VAR_CLEARED_64
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_CLEARED_64)
  #undef CRYPTO_STOP_SEC_VAR_CLEARED_64
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_CLEARED_8)
  #undef CRYPTO_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_CLEARED_8)
  #undef CRYPTO_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_INIT_8)
  #undef CRYPTO_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_INIT_8)
  #undef CRYPTO_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_INIT_BOOLEAN)
  #undef CRYPTO_START_SEC_VAR_INIT_BOOLEAN
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_INIT_BOOLEAN)
  #undef CRYPTO_STOP_SEC_VAR_INIT_BOOLEAN
  #undef MEMMAP_ERROR_CRYPTO

#elif (defined CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED)
  #undef CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYPTO
#elif (defined CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED)
  #undef CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYPTO

#endif

#if ((!defined MEMMAP_ERROR_CRYPTO) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_CRYPTO) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_CRYPTO
  #error MEMMAP_ERROR_CRYPTO the included memory section was not defined within the BSW-IMPLEMENTATION of Crypto.
#endif
