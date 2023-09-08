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

#define MEMMAP_ERROR_WDGM_APPL

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for WdgM_Appl */

#if (defined WDGM_APPL_START_SEC_CODE)
  #undef WDGM_APPL_START_SEC_CODE
  #undef MEMMAP_ERROR_WDGM_APPL
#elif (defined WDGM_APPL_STOP_SEC_CODE)
  #undef WDGM_APPL_STOP_SEC_CODE
  #undef MEMMAP_ERROR_WDGM_APPL

#endif

#if ((!defined MEMMAP_ERROR_WDGM_APPL) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_WDGM_APPL) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_WDGM_APPL
  #error MEMMAP_ERROR_WDGM_APPL the included memory section was not defined within the BSW-IMPLEMENTATION of WdgM_Appl.
#endif
