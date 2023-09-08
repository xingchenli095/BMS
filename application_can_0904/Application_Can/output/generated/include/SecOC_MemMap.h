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

#define MEMMAP_ERROR_SECOC

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SecOC */

#if (defined SECOC_START_SEC_CODE)
  #undef SECOC_START_SEC_CODE
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_CODE)
  #undef SECOC_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef SECOC_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef SECOC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_CONFIG_DATA_UNSPECIFIED)
  #undef SECOC_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef SECOC_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_CONST_32)
  #undef SECOC_START_SEC_CONST_32
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_CONST_32)
  #undef SECOC_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_CONST_UNSPECIFIED)
  #undef SECOC_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_CONST_UNSPECIFIED)
  #undef SECOC_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_VAR_CLEARED_8)
  #undef SECOC_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_VAR_CLEARED_8)
  #undef SECOC_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_VAR_CLEARED_BOOLEAN)
  #undef SECOC_START_SEC_VAR_CLEARED_BOOLEAN
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_VAR_CLEARED_BOOLEAN)
  #undef SECOC_STOP_SEC_VAR_CLEARED_BOOLEAN
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef SECOC_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef SECOC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_VAR_INIT_8)
  #undef SECOC_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_VAR_INIT_8)
  #undef SECOC_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_SECOC

#elif (defined SECOC_START_SEC_VAR_INIT_UNSPECIFIED)
  #undef SECOC_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC
#elif (defined SECOC_STOP_SEC_VAR_INIT_UNSPECIFIED)
  #undef SECOC_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_SECOC

#elif (defined SecOC_START_SEC_CODE)
  #undef SecOC_START_SEC_CODE
  #undef MEMMAP_ERROR_SECOC
#elif (defined SecOC_STOP_SEC_CODE)
  #undef SecOC_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SECOC

#endif

#if ((!defined MEMMAP_ERROR_SECOC) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_SECOC) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_SECOC
  #error MEMMAP_ERROR_SECOC the included memory section was not defined within the BSW-IMPLEMENTATION or SWC-IMPLEMENTATION of SecOC.
#endif
