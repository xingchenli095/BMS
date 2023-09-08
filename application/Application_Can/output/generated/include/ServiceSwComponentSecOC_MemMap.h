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

#define MEMMAP_ERROR_SERVICESWCOMPONENTSECOC

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for ServiceSwComponentSecOC */

#if (defined ServiceSwComponentSecOC_START_SEC_CODE)
  #undef ServiceSwComponentSecOC_START_SEC_CODE
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTSECOC
#elif (defined ServiceSwComponentSecOC_STOP_SEC_CODE)
  #undef ServiceSwComponentSecOC_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTSECOC

#endif

#ifdef MEMMAP_ERROR_SERVICESWCOMPONENTSECOC
  #undef MEMMAP_ERROR_SERVICESWCOMPONENTSECOC
  #error MEMMAP_ERROR_SERVICESWCOMPONENTSECOC the included memory section was not defined within the SWC-IMPLEMENTATION of ServiceSwComponentSecOC.
#endif
