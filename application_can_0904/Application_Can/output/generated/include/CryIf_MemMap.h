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

#define MEMMAP_ERROR_CRYIF

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for CryIf */

#if (defined CRYIF_START_SEC_CODE)
  #undef CRYIF_START_SEC_CODE
  #undef MEMMAP_ERROR_CRYIF
#elif (defined CRYIF_STOP_SEC_CODE)
  #undef CRYIF_STOP_SEC_CODE
  #undef MEMMAP_ERROR_CRYIF

#elif (defined CRYIF_START_SEC_CONST_32)
  #undef CRYIF_START_SEC_CONST_32
  #undef MEMMAP_ERROR_CRYIF
#elif (defined CRYIF_STOP_SEC_CONST_32)
  #undef CRYIF_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_CRYIF

#elif (defined CRYIF_START_SEC_CONST_UNSPECIFIED)
  #undef CRYIF_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYIF
#elif (defined CRYIF_STOP_SEC_CONST_UNSPECIFIED)
  #undef CRYIF_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_CRYIF

#elif (defined CRYIF_START_SEC_VAR_INIT_BOOLEAN)
  #undef CRYIF_START_SEC_VAR_INIT_BOOLEAN
  #undef MEMMAP_ERROR_CRYIF
#elif (defined CRYIF_STOP_SEC_VAR_INIT_BOOLEAN)
  #undef CRYIF_STOP_SEC_VAR_INIT_BOOLEAN
  #undef MEMMAP_ERROR_CRYIF

#endif

#if ((!defined MEMMAP_ERROR_CRYIF) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_CRYIF) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_CRYIF
  #error MEMMAP_ERROR_CRYIF the included memory section was not defined within the BSW-IMPLEMENTATION of CryIf.
#endif
