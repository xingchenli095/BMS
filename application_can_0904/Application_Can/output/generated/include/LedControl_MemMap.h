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

#define MEMMAP_ERROR_LEDCONTROL

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for LedControl */

#if (defined LedControl_START_SEC_CODE)
  #undef LedControl_START_SEC_CODE
  #undef MEMMAP_ERROR_LEDCONTROL
#elif (defined LedControl_STOP_SEC_CODE)
  #undef LedControl_STOP_SEC_CODE
  #undef MEMMAP_ERROR_LEDCONTROL

#endif

#ifdef MEMMAP_ERROR_LEDCONTROL
  #undef MEMMAP_ERROR_LEDCONTROL
  #error MEMMAP_ERROR_LEDCONTROL the included memory section was not defined within the SWC-IMPLEMENTATION of LedControl.
#endif
