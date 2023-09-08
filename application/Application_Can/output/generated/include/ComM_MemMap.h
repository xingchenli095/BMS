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

#define MEMMAP_ERROR_COMM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for ComM */

#if (defined COMM_START_SEC_CODE)
  #undef COMM_START_SEC_CODE
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_CODE)
  #undef COMM_STOP_SEC_CODE
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_CONFIG_DATA_UNSPECIFIED)
  #undef COMM_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef COMM_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_CONST_16)
  #undef COMM_START_SEC_CONST_16
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_CONST_16)
  #undef COMM_STOP_SEC_CONST_16
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_CONST_32)
  #undef COMM_START_SEC_CONST_32
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_CONST_32)
  #undef COMM_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_CONST_8)
  #undef COMM_START_SEC_CONST_8
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_CONST_8)
  #undef COMM_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_CONST_UNSPECIFIED)
  #undef COMM_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_CONST_UNSPECIFIED)
  #undef COMM_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_CLEARED_16)
  #undef COMM_START_SEC_VAR_CLEARED_16
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_CLEARED_16)
  #undef COMM_STOP_SEC_VAR_CLEARED_16
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_CLEARED_8)
  #undef COMM_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_CLEARED_8)
  #undef COMM_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef COMM_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef COMM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_INIT_16)
  #undef COMM_START_SEC_VAR_INIT_16
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_INIT_16)
  #undef COMM_STOP_SEC_VAR_INIT_16
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_INIT_8)
  #undef COMM_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_INIT_8)
  #undef COMM_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_INIT_UNSPECIFIED)
  #undef COMM_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_INIT_UNSPECIFIED)
  #undef COMM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM

#elif (defined COMM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED)
  #undef COMM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM
#elif (defined COMM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED)
  #undef COMM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_COMM

#elif (defined ComM_START_SEC_CODE)
  #undef ComM_START_SEC_CODE
  #undef MEMMAP_ERROR_COMM
#elif (defined ComM_STOP_SEC_CODE)
  #undef ComM_STOP_SEC_CODE
  #undef MEMMAP_ERROR_COMM

#endif

#if ((!defined MEMMAP_ERROR_COMM) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_COMM) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_COMM
  #error MEMMAP_ERROR_COMM the included memory section was not defined within the BSW-IMPLEMENTATION or SWC-IMPLEMENTATION of ComM.
#endif
