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

#define MEMMAP_ERROR_RTE

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for Rte */

#if (defined RTE_START_SEC_APPL_CODE)
  #undef RTE_START_SEC_APPL_CODE
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_APPL_CODE)
  #undef RTE_STOP_SEC_APPL_CODE
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_CODE)
  #undef RTE_START_SEC_CODE
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_CODE)
  #undef RTE_STOP_SEC_CODE
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_CONST_16)
  #undef RTE_START_SEC_CONST_16
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_CONST_16)
  #undef RTE_STOP_SEC_CONST_16
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_CONST_32)
  #undef RTE_START_SEC_CONST_32
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_CONST_32)
  #undef RTE_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_CONST_8)
  #undef RTE_START_SEC_CONST_8
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_CONST_8)
  #undef RTE_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_CONST_UNSPECIFIED)
  #undef RTE_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_CONST_UNSPECIFIED)
  #undef RTE_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_VAR_CLEARED_16)
  #undef RTE_START_SEC_VAR_CLEARED_16
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_VAR_CLEARED_16)
  #undef RTE_STOP_SEC_VAR_CLEARED_16
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_VAR_CLEARED_32)
  #undef RTE_START_SEC_VAR_CLEARED_32
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_VAR_CLEARED_32)
  #undef RTE_STOP_SEC_VAR_CLEARED_32
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_VAR_CLEARED_8)
  #undef RTE_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_VAR_CLEARED_8)
  #undef RTE_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_VAR_INIT_8)
  #undef RTE_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_VAR_INIT_8)
  #undef RTE_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_VAR_INIT_UNSPECIFIED)
  #undef RTE_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_VAR_INIT_UNSPECIFIED)
  #undef RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_RTE

#elif (defined RTE_START_SEC_VAR_UNSPECIFIED)
  #undef RTE_START_SEC_VAR_UNSPECIFIED
  #undef MEMMAP_ERROR_RTE
#elif (defined RTE_STOP_SEC_VAR_UNSPECIFIED)
  #undef RTE_STOP_SEC_VAR_UNSPECIFIED
  #undef MEMMAP_ERROR_RTE

#endif

#if ((!defined MEMMAP_ERROR_RTE) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_RTE) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_RTE
  #error MEMMAP_ERROR_RTE the included memory section was not defined within the BSW-IMPLEMENTATION of Rte.
#endif
