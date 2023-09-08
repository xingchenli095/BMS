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

#define MEMMAP_ERROR_MEMIF

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for MemIf */

#if (defined MEMIF_START_SEC_CODE)
  #undef MEMIF_START_SEC_CODE
  #undef MEMMAP_ERROR_MEMIF
#elif (defined MEMIF_STOP_SEC_CODE)
  #undef MEMIF_STOP_SEC_CODE
  #undef MEMMAP_ERROR_MEMIF

#elif (defined MEMIF_START_SEC_CONST_UNSPECIFIED)
  #undef MEMIF_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_MEMIF
#elif (defined MEMIF_STOP_SEC_CONST_UNSPECIFIED)
  #undef MEMIF_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_MEMIF

#endif

#if ((!defined MEMMAP_ERROR_MEMIF) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_MEMIF) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_MEMIF
  #error MEMMAP_ERROR_MEMIF the included memory section was not defined within the BSW-IMPLEMENTATION of MemIf.
#endif
