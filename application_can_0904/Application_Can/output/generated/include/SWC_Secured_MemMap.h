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

#define MEMMAP_ERROR_SWC_SECURED

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_Secured */

#if (defined SWC_Secured_START_SEC_CODE)
  #undef SWC_Secured_START_SEC_CODE
  #undef MEMMAP_ERROR_SWC_SECURED
#elif (defined SWC_Secured_STOP_SEC_CODE)
  #undef SWC_Secured_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SWC_SECURED

#endif

#ifdef MEMMAP_ERROR_SWC_SECURED
  #undef MEMMAP_ERROR_SWC_SECURED
  #error MEMMAP_ERROR_SWC_SECURED the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_Secured.
#endif
