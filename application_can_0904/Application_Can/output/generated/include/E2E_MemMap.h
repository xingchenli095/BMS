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

#define MEMMAP_ERROR_E2E

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for E2E */

#if (defined E2E_START_SEC_CODE)
  #undef E2E_START_SEC_CODE
  #undef MEMMAP_ERROR_E2E
#elif (defined E2E_STOP_SEC_CODE)
  #undef E2E_STOP_SEC_CODE
  #undef MEMMAP_ERROR_E2E

#elif (defined E2E_START_SEC_CONST_16)
  #undef E2E_START_SEC_CONST_16
  #undef MEMMAP_ERROR_E2E
#elif (defined E2E_STOP_SEC_CONST_16)
  #undef E2E_STOP_SEC_CONST_16
  #undef MEMMAP_ERROR_E2E

#elif (defined E2E_START_SEC_CONST_32)
  #undef E2E_START_SEC_CONST_32
  #undef MEMMAP_ERROR_E2E
#elif (defined E2E_STOP_SEC_CONST_32)
  #undef E2E_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_E2E

#elif (defined E2E_START_SEC_CONST_8)
  #undef E2E_START_SEC_CONST_8
  #undef MEMMAP_ERROR_E2E
#elif (defined E2E_STOP_SEC_CONST_8)
  #undef E2E_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_E2E

#elif (defined E2E_START_SEC_CONST_UNSPECIFIED)
  #undef E2E_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_E2E
#elif (defined E2E_STOP_SEC_CONST_UNSPECIFIED)
  #undef E2E_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_E2E

#endif

#if ((!defined MEMMAP_ERROR_E2E) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_E2E) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_E2E
  #error MEMMAP_ERROR_E2E the included memory section was not defined within the BSW-IMPLEMENTATION of E2E.
#endif
