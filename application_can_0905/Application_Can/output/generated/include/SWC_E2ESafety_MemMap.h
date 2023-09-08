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

#define MEMMAP_ERROR_SWC_E2ESAFETY

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_E2ESafety */

#if (defined SWC_E2ESafety_START_SEC_CODE)
  #undef SWC_E2ESafety_START_SEC_CODE
  #undef MEMMAP_ERROR_SWC_E2ESAFETY
#elif (defined SWC_E2ESafety_STOP_SEC_CODE)
  #undef SWC_E2ESafety_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SWC_E2ESAFETY

#endif

#ifdef MEMMAP_ERROR_SWC_E2ESAFETY
  #undef MEMMAP_ERROR_SWC_E2ESAFETY
  #error MEMMAP_ERROR_SWC_E2ESAFETY the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_E2ESafety.
#endif
