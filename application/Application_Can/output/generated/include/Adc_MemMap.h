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

#define MEMMAP_ERROR_ADC

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for Adc */

#if (defined ADC_START_SEC_CODE)
  #undef ADC_START_SEC_CODE
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CODE)
  #undef ADC_STOP_SEC_CODE
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_CONFIG_DATA_16)
  #undef ADC_START_SEC_CONFIG_DATA_16
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CONFIG_DATA_16)
  #undef ADC_STOP_SEC_CONFIG_DATA_16
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_CONFIG_DATA_16)
  #undef ADC_START_CONFIG_DATA_16
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_CONFIG_DATA_16)
  #undef ADC_STOP_CONFIG_DATA_16
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_CONFIG_DATA_8)
  #undef ADC_START_SEC_CONFIG_DATA_8
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CONFIG_DATA_8)
  #undef ADC_STOP_SEC_CONFIG_DATA_8
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_CONFIG_DATA_8)
  #undef ADC_START_CONFIG_DATA_8
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_CONFIG_DATA_8)
  #undef ADC_STOP_CONFIG_DATA_8
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_CONFIG_DATA_UNSPECIFIED)
  #undef ADC_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef ADC_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_CONST_32)
  #undef ADC_START_SEC_CONST_32
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CONST_32)
  #undef ADC_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_CONST_8)
  #undef ADC_START_SEC_CONST_8
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CONST_8)
  #undef ADC_STOP_SEC_CONST_8
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_CONST_UNSPECIFIED)
  #undef ADC_START_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_CONST_UNSPECIFIED)
  #undef ADC_STOP_SEC_CONST_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_VAR_CLEARED_32)
  #undef ADC_START_SEC_VAR_CLEARED_32
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_VAR_CLEARED_32)
  #undef ADC_STOP_SEC_VAR_CLEARED_32
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_VAR_CLEARED_32_NO_CACHEABLE)
  #undef ADC_START_SEC_VAR_CLEARED_32_NO_CACHEABLE
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_VAR_CLEARED_32_NO_CACHEABLE)
  #undef ADC_STOP_SEC_VAR_CLEARED_32_NO_CACHEABLE
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_VAR_CLEARED_8)
  #undef ADC_START_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_VAR_CLEARED_8)
  #undef ADC_STOP_SEC_VAR_CLEARED_8
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_VAR_CLEARED_8_NO_CACHEABLE)
  #undef ADC_START_SEC_VAR_CLEARED_8_NO_CACHEABLE
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_VAR_CLEARED_8_NO_CACHEABLE)
  #undef ADC_STOP_SEC_VAR_CLEARED_8_NO_CACHEABLE
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_VAR_CLEARED_BOOLEAN)
  #undef ADC_START_SEC_VAR_CLEARED_BOOLEAN
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_VAR_CLEARED_BOOLEAN)
  #undef ADC_STOP_SEC_VAR_CLEARED_BOOLEAN
  #undef MEMMAP_ERROR_ADC

#elif (defined ADC_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC
#elif (defined ADC_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef ADC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_ADC

#endif

#if ((!defined MEMMAP_ERROR_ADC) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_ADC) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_ADC
  #error MEMMAP_ERROR_ADC the included memory section was not defined within the BSW-IMPLEMENTATION of Adc.
#endif
