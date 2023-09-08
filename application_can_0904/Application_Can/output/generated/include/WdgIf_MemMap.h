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

#define MEMMAP_ERROR_WDGIF

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for WdgIf */

#if (defined WDGIF_START_SEC_CODE_ASIL_D)
  #undef WDGIF_START_SEC_CODE_ASIL_D
  #undef MEMMAP_ERROR_WDGIF
#elif (defined WDGIF_STOP_SEC_CODE_ASIL_D)
  #undef WDGIF_STOP_SEC_CODE_ASIL_D
  #undef MEMMAP_ERROR_WDGIF

#elif (defined WDGIF_START_SEC_CONST_ASIL_D_UNSPECIFIED)
  #undef WDGIF_START_SEC_CONST_ASIL_D_UNSPECIFIED
  #undef MEMMAP_ERROR_WDGIF
#elif (defined WDGIF_STOP_SEC_CONST_ASIL_D_UNSPECIFIED)
  #undef WDGIF_STOP_SEC_CONST_ASIL_D_UNSPECIFIED
  #undef MEMMAP_ERROR_WDGIF

#endif

#if ((!defined MEMMAP_ERROR_WDGIF) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_WDGIF) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_WDGIF
  #error MEMMAP_ERROR_WDGIF the included memory section was not defined within the BSW-IMPLEMENTATION of WdgIf.
#endif
