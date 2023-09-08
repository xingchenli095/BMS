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

#define MEMMAP_ERROR_NM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for Nm */

#if (defined NM_START_SEC_CODE)
  #undef NM_START_SEC_CODE
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_CODE)
  #undef NM_STOP_SEC_CODE
  #undef MEMMAP_ERROR_NM

#elif (defined NM_START_SEC_CONST_8)
  #undef NM_START_SEC_CONST_8
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_CONST_8)
  #undef NM_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_NM

#elif (defined NM_START_SEC_CONST_UNSPECIFIED)
  #undef NM_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_CONST_UNSPECIFIED)
  #undef NM_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_NM

#elif (defined NM_START_SEC_VAR_CLEARED_16)
  #undef NM_START_SEC_VAR_CLEARED_16
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_VAR_CLEARED_16)
  #undef NM_STOP_SEC_VAR_CLEARED_16
  #undef MEMMAP_ERROR_NM

#elif (defined NM_START_SEC_VAR_CLEARED_8)
  #undef NM_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_VAR_CLEARED_8)
  #undef NM_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_NM

#elif (defined NM_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef NM_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef NM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_NM

#elif (defined NM_START_SEC_VAR_INIT_8)
  #undef NM_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_NM
#elif (defined NM_STOP_SEC_VAR_INIT_8)
  #undef NM_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_NM

#endif

#if ((!defined MEMMAP_ERROR_NM) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_NM) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_NM
  #error MEMMAP_ERROR_NM the included memory section was not defined within the BSW-IMPLEMENTATION of Nm.
#endif
