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

#define MEMMAP_ERROR_COMXF

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for ComXf */

#if (defined COMXF_START_SEC_CODE)
  #undef COMXF_START_SEC_CODE
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_SEC_CODE)
  #undef COMXF_STOP_SEC_CODE
  #undef MEMMAP_ERROR_COMXF

#elif (defined COMXF_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef COMXF_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef COMXF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF

#elif (defined COMXF_START_CONFIG_DATA_UNSPECIFIED)
  #undef COMXF_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef COMXF_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF

#elif (defined COMXF_START_SEC_CONST_32)
  #undef COMXF_START_SEC_CONST_32
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_SEC_CONST_32)
  #undef COMXF_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_COMXF

#elif (defined COMXF_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef COMXF_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef COMXF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF

#elif (defined COMXF_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
  #undef COMXF_START_SEC_VAR_FAST_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
  #undef COMXF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_COMXF

#elif (defined COMXF_START_SEC_VAR_INIT_8)
  #undef COMXF_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_COMXF
#elif (defined COMXF_STOP_SEC_VAR_INIT_8)
  #undef COMXF_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_COMXF

#endif

#if ((!defined MEMMAP_ERROR_COMXF) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_COMXF) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_COMXF
  #error MEMMAP_ERROR_COMXF the included memory section was not defined within the BSW-IMPLEMENTATION of ComXf.
#endif
