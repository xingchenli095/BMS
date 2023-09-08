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

#define MEMMAP_ERROR_PBCFGM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for PbcfgM */

#if (defined PBCFGM_START_SEC_CODE)
  #undef PBCFGM_START_SEC_CODE
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_SEC_CODE)
  #undef PBCFGM_STOP_SEC_CODE
  #undef MEMMAP_ERROR_PBCFGM

#elif (defined PBCFGM_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef PBCFGM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef PBCFGM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM

#elif (defined PBCFGM_START_CONFIG_DATA_UNSPECIFIED)
  #undef PBCFGM_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef PBCFGM_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM

#elif (defined PBCFGM_START_SEC_CONST_32)
  #undef PBCFGM_START_SEC_CONST_32
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_SEC_CONST_32)
  #undef PBCFGM_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_PBCFGM

#elif (defined PBCFGM_START_SEC_CONST_UNSPECIFIED)
  #undef PBCFGM_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_SEC_CONST_UNSPECIFIED)
  #undef PBCFGM_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM

#elif (defined PBCFGM_START_SEC_VAR_FAST_INIT_8)
  #undef PBCFGM_START_SEC_VAR_FAST_INIT_8
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_SEC_VAR_FAST_INIT_8)
  #undef PBCFGM_STOP_SEC_VAR_FAST_INIT_8
  #undef MEMMAP_ERROR_PBCFGM

#elif (defined PBCFGM_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
  #undef PBCFGM_START_SEC_VAR_FAST_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM
#elif (defined PBCFGM_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
  #undef PBCFGM_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_PBCFGM

#endif

#if ((!defined MEMMAP_ERROR_PBCFGM) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_PBCFGM) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_PBCFGM
  #error MEMMAP_ERROR_PBCFGM the included memory section was not defined within the BSW-IMPLEMENTATION of PbcfgM.
#endif
