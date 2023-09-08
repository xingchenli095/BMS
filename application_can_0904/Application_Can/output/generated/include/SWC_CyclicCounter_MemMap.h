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

#define MEMMAP_ERROR_SWC_CYCLICCOUNTER

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_CyclicCounter */

#if (defined SWC_CyclicCounter_START_SEC_CODE)
  #undef SWC_CyclicCounter_START_SEC_CODE
  #undef MEMMAP_ERROR_SWC_CYCLICCOUNTER
#elif (defined SWC_CyclicCounter_STOP_SEC_CODE)
  #undef SWC_CyclicCounter_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SWC_CYCLICCOUNTER

#endif

#ifdef MEMMAP_ERROR_SWC_CYCLICCOUNTER
  #undef MEMMAP_ERROR_SWC_CYCLICCOUNTER
  #error MEMMAP_ERROR_SWC_CYCLICCOUNTER the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_CyclicCounter.
#endif
