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

#define MEMMAP_ERROR_SERVICESWCOMPONENTDEM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for ServiceSwComponentDem */

#if (defined ServiceSwComponentDem_START_SEC_CODE)
  #undef ServiceSwComponentDem_START_SEC_CODE
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTDEM
#elif (defined ServiceSwComponentDem_STOP_SEC_CODE)
  #undef ServiceSwComponentDem_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTDEM

#endif

#ifdef MEMMAP_ERROR_SERVICESWCOMPONENTDEM
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTDEM
  #error MEMMAP_ERROR_SERVICESWCOMPONENTDEM the included memory section was not defined within the SWC-IMPLEMENTATION of ServiceSwComponentDem.
#endif
