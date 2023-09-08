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

#define MEMMAP_ERROR_SWC_APPSTATEHANDLER

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_AppStateHandler */

#if (defined SWC_AppStateHandler_START_SEC_CODE)
  #undef SWC_AppStateHandler_START_SEC_CODE
  #undef MEMMAP_ERROR_SWC_APPSTATEHANDLER
#elif (defined SWC_AppStateHandler_STOP_SEC_CODE)
  #undef SWC_AppStateHandler_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SWC_APPSTATEHANDLER

#endif

#ifdef MEMMAP_ERROR_SWC_APPSTATEHANDLER
  #undef MEMMAP_ERROR_SWC_APPSTATEHANDLER
  #error MEMMAP_ERROR_SWC_APPSTATEHANDLER the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_AppStateHandler.
#endif
