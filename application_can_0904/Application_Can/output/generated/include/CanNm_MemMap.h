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

#define MEMMAP_ERROR_CANNM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for CanNm */

#if (defined CANNM_START_SEC_CODE)
  #undef CANNM_START_SEC_CODE
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_CODE)
  #undef CANNM_STOP_SEC_CODE
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_CONFIG_DATA_UNSPECIFIED)
  #undef CANNM_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef CANNM_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_CONST_32)
  #undef CANNM_START_SEC_CONST_32
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_CONST_32)
  #undef CANNM_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_CONST_8)
  #undef CANNM_START_SEC_CONST_8
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_CONST_8)
  #undef CANNM_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_CONST_UNSPECIFIED)
  #undef CANNM_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_CONST_UNSPECIFIED)
  #undef CANNM_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_VAR_CLEARED_8)
  #undef CANNM_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_VAR_CLEARED_8)
  #undef CANNM_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef CANNM_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef CANNM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_VAR_INIT_8)
  #undef CANNM_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_VAR_INIT_8)
  #undef CANNM_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_VAR_INIT_BOOLEAN)
  #undef CANNM_START_SEC_VAR_INIT_BOOLEAN
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_VAR_INIT_BOOLEAN)
  #undef CANNM_STOP_SEC_VAR_INIT_BOOLEAN
  #undef MEMMAP_ERROR_CANNM

#elif (defined CANNM_START_SEC_VAR_INIT_UNSPECIFIED)
  #undef CANNM_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM
#elif (defined CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED)
  #undef CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_CANNM

#endif

#if ((!defined MEMMAP_ERROR_CANNM) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_CANNM) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_CANNM
  #error MEMMAP_ERROR_CANNM the included memory section was not defined within the BSW-IMPLEMENTATION of CanNm.
#endif
