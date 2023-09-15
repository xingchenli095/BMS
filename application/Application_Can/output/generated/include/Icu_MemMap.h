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

#define MEMMAP_ERROR_ICU

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for Icu */

#if (defined ICU_START_SEC_CODE)
  #undef ICU_START_SEC_CODE
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_SEC_CODE)
  #undef ICU_STOP_SEC_CODE
  #undef MEMMAP_ERROR_ICU

#elif (defined ICU_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU

#elif (defined ICU_START_CONFIG_DATA_UNSPECIFIED)
  #undef ICU_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef ICU_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU

#elif (defined ICU_START_SEC_CONST_UNSPECIFIED)
  #undef ICU_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_SEC_CONST_UNSPECIFIED)
  #undef ICU_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU

#elif (defined ICU_START_SEC_VAR_CLEARED_BOOLEAN)
  #undef ICU_START_SEC_VAR_CLEARED_BOOLEAN
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_SEC_VAR_CLEARED_BOOLEAN)
  #undef ICU_STOP_SEC_VAR_CLEARED_BOOLEAN
  #undef MEMMAP_ERROR_ICU

#elif (defined ICU_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef ICU_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef ICU_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_ICU

#elif (defined ICU_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE)
  #undef ICU_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
  #undef MEMMAP_ERROR_ICU
#elif (defined ICU_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE)
  #undef ICU_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
  #undef MEMMAP_ERROR_ICU

#endif

#if ((!defined MEMMAP_ERROR_ICU) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_ICU) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_ICU
  #error MEMMAP_ERROR_ICU the included memory section was not defined within the BSW-IMPLEMENTATION of Icu.
#endif
