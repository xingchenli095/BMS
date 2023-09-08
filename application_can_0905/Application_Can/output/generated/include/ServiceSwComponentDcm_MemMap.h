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

#define MEMMAP_ERROR_SERVICESWCOMPONENTDCM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for ServiceSwComponentDcm */

#if (defined ServiceSwComponentDcm_START_SEC_CODE)
  #undef ServiceSwComponentDcm_START_SEC_CODE
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTDCM
#elif (defined ServiceSwComponentDcm_STOP_SEC_CODE)
  #undef ServiceSwComponentDcm_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTDCM

#endif

#ifdef MEMMAP_ERROR_SERVICESWCOMPONENTDCM
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTDCM
  #error MEMMAP_ERROR_SERVICESWCOMPONENTDCM the included memory section was not defined within the SWC-IMPLEMENTATION of ServiceSwComponentDcm.
#endif
