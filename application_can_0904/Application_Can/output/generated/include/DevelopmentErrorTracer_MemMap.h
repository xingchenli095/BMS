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

#define MEMMAP_ERROR_DEVELOPMENTERRORTRACER

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for DevelopmentErrorTracer */

#if (defined DevelopmentErrorTracer_START_SEC_CODE)
  #undef DevelopmentErrorTracer_START_SEC_CODE
  #undef MEMMAP_ERROR_DEVELOPMENTERRORTRACER
#elif (defined DevelopmentErrorTracer_STOP_SEC_CODE)
  #undef DevelopmentErrorTracer_STOP_SEC_CODE
  #undef MEMMAP_ERROR_DEVELOPMENTERRORTRACER

#endif

#ifdef MEMMAP_ERROR_DEVELOPMENTERRORTRACER
  #undef MEMMAP_ERROR_DEVELOPMENTERRORTRACER
  #error MEMMAP_ERROR_DEVELOPMENTERRORTRACER the included memory section was not defined within the SWC-IMPLEMENTATION of DevelopmentErrorTracer.
#endif
