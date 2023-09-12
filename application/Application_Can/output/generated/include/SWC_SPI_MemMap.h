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

#define MEMMAP_ERROR_SWC_SPI

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SWC_SPI */

#if (defined SWC_SPI_START_SEC_RTE_START_SEC_APPL_CODE)
  #undef SWC_SPI_START_SEC_RTE_START_SEC_APPL_CODE
  #undef MEMMAP_ERROR_SWC_SPI
#elif (defined SWC_SPI_STOP_SEC_RTE_START_SEC_APPL_CODE)
  #undef SWC_SPI_STOP_SEC_RTE_START_SEC_APPL_CODE
  #undef MEMMAP_ERROR_SWC_SPI

#endif

#ifdef MEMMAP_ERROR_SWC_SPI
  #undef MEMMAP_ERROR_SWC_SPI
  #error MEMMAP_ERROR_SWC_SPI the included memory section was not defined within the SWC-IMPLEMENTATION of SWC_SPI.
#endif
