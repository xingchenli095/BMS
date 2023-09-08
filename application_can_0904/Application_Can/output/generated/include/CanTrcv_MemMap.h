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

#define MEMMAP_ERROR_CANTRCV

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for CanTrcv */

#if (defined CANTRCV_START_SEC_CODE)
  #undef CANTRCV_START_SEC_CODE
  #undef MEMMAP_ERROR_CANTRCV
#elif (defined CANTRCV_STOP_SEC_CODE)
  #undef CANTRCV_STOP_SEC_CODE
  #undef MEMMAP_ERROR_CANTRCV

#endif

#if ((!defined MEMMAP_ERROR_CANTRCV) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_CANTRCV) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_CANTRCV
  #error MEMMAP_ERROR_CANTRCV the included memory section was not defined within the BSW-IMPLEMENTATION of CanTrcv.
#endif
