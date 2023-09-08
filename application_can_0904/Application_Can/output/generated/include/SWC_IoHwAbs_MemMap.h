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

#define MEMMAP_ERROR_SWC_IOHWABS

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_IoHwAbs */

#if (defined SWC_IoHwAbs_START_SEC_CODE)
  #undef SWC_IoHwAbs_START_SEC_CODE
  #undef MEMMAP_ERROR_SWC_IOHWABS
#elif (defined SWC_IoHwAbs_STOP_SEC_CODE)
  #undef SWC_IoHwAbs_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SWC_IOHWABS

#elif (defined SWC_IoHwAbs_START_SEC_VAR)
  #undef SWC_IoHwAbs_START_SEC_VAR
  #undef MEMMAP_ERROR_SWC_IOHWABS
#elif (defined SWC_IoHwAbs_STOP_SEC_VAR)
  #undef SWC_IoHwAbs_STOP_SEC_VAR
  #undef MEMMAP_ERROR_SWC_IOHWABS

#endif

#ifdef MEMMAP_ERROR_SWC_IOHWABS
  #undef MEMMAP_ERROR_SWC_IOHWABS
  #error MEMMAP_ERROR_SWC_IOHWABS the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_IoHwAbs.
#endif
