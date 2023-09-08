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

#define MEMMAP_ERROR_E2EXF

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for E2EXf */

#if (defined E2EXF_START_SEC_CODE)
  #undef E2EXF_START_SEC_CODE
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_CODE)
  #undef E2EXF_STOP_SEC_CODE
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef E2EXF_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #undef E2EXF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_CONFIG_DATA_UNSPECIFIED)
  #undef E2EXF_START_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_CONFIG_DATA_UNSPECIFIED)
  #undef E2EXF_STOP_CONFIG_DATA_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_CONST_32)
  #undef E2EXF_START_SEC_CONST_32
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_CONST_32)
  #undef E2EXF_STOP_SEC_CONST_32
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_VAR_CLEARED_ASIL_D_UNSPECIFIED)
  #undef E2EXF_START_SEC_VAR_CLEARED_ASIL_D_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_VAR_CLEARED_ASIL_D_UNSPECIFIED)
  #undef E2EXF_STOP_SEC_VAR_CLEARED_ASIL_D_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef E2EXF_START_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #undef E2EXF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
  #undef E2EXF_START_SEC_VAR_FAST_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
  #undef E2EXF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_VAR_INIT_8)
  #undef E2EXF_START_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_VAR_INIT_8)
  #undef E2EXF_STOP_SEC_VAR_INIT_8
  #undef MEMMAP_ERROR_E2EXF

#elif (defined E2EXF_START_SEC_VAR_INIT_ASIL_D_8)
  #undef E2EXF_START_SEC_VAR_INIT_ASIL_D_8
  #undef MEMMAP_ERROR_E2EXF
#elif (defined E2EXF_STOP_SEC_VAR_INIT_ASIL_D_8)
  #undef E2EXF_STOP_SEC_VAR_INIT_ASIL_D_8
  #undef MEMMAP_ERROR_E2EXF

#endif

#if ((!defined MEMMAP_ERROR_E2EXF) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_E2EXF) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_E2EXF
  #error MEMMAP_ERROR_E2EXF the included memory section was not defined within the BSW-IMPLEMENTATION of E2EXf.
#endif
