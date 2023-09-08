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

#define MEMMAP_ERROR_SWC_MODIFYECHO

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_ModifyEcho */

#if (defined SWC_ModifyEcho_START_SEC_CODE)
  #undef SWC_ModifyEcho_START_SEC_CODE
  #undef MEMMAP_ERROR_SWC_MODIFYECHO
#elif (defined SWC_ModifyEcho_STOP_SEC_CODE)
  #undef SWC_ModifyEcho_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SWC_MODIFYECHO

#endif

#ifdef MEMMAP_ERROR_SWC_MODIFYECHO
  #undef MEMMAP_ERROR_SWC_MODIFYECHO
  #error MEMMAP_ERROR_SWC_MODIFYECHO the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_ModifyEcho.
#endif
