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

#define MEMMAP_ERROR_SCRC

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for SCrc */

#if (defined SCRC_START_SEC_CODE)
  #undef SCRC_START_SEC_CODE
  #undef MEMMAP_ERROR_SCRC
#elif (defined SCRC_STOP_SEC_CODE)
  #undef SCRC_STOP_SEC_CODE
  #undef MEMMAP_ERROR_SCRC

#elif (defined SCRC_START_SEC_CONST_16)
  #undef SCRC_START_SEC_CONST_16
  #undef MEMMAP_ERROR_SCRC
#elif (defined SCRC_STOP_SEC_CONST_16)
  #undef SCRC_STOP_SEC_CONST_16
  #undef MEMMAP_ERROR_SCRC

#elif (defined SCRC_START_SEC_CONST_32)
  #undef SCRC_START_SEC_CONST_32
  #undef MEMMAP_ERROR_SCRC
#elif (defined SCRC_STOP_SEC_CONST_32)
  #undef SCRC_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_SCRC

#elif (defined SCRC_START_SEC_CONST_8)
  #undef SCRC_START_SEC_CONST_8
  #undef MEMMAP_ERROR_SCRC
#elif (defined SCRC_STOP_SEC_CONST_8)
  #undef SCRC_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_SCRC

#endif

#if ((!defined MEMMAP_ERROR_SCRC) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_SCRC) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_SCRC
  #error MEMMAP_ERROR_SCRC the included memory section was not defined within the BSW-IMPLEMENTATION of SCrc.
#endif
