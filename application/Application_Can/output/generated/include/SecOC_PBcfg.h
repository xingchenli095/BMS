


/**
 * \file
 *
 * \brief AUTOSAR SecOC
 *
 * This file contains the implementation of the AUTOSAR
 * module SecOC.
 *
 * \version 1.4.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef SECOC_PBCFG_H
#define SECOC_PBCFG_H



/*==================[inclusions]=============================================*/

#include <SecOC_SymbolicNames_PBcfg.h>
#include <TSAutosar.h>
#include <SecOC_Types_Int.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_PTR_CLASS SECOC_APPL_CONST
#include <TSPBConfig_Types.h>


/*==================[macros]=================================================*/

#if (defined SECOC_PBCFG_PDU_MEM_SIZE) /* To prevent double definition */
#error SECOC_PBCFG_PDU_MEM_SIZE already defined
#endif /* (defined SECOC_PBCFG_PDU_MEM_SIZE) */

#define SECOC_PBCFG_PDU_MEM_SIZE 20U


#if (defined SECOC_PBCFG_INT_MEM_SIZE) /* To prevent double definition */
#error SECOC_PBCFG_INT_MEM_SIZE already defined
#endif /* (defined SECOC_PBCFG_INT_MEM_SIZE) */

#define SECOC_PBCFG_INT_MEM_SIZE 34U


#if (defined SecOC_Config) /* To prevent double definition */
#error SecOC_Config already defined
#endif /* (defined SecOC_Config) */

#define SecOC_Config (SecOC_ConfigLayout.RootCfg)



/*==================[type definitions]=======================================*/

typedef struct /* SecOC_ConfigLayoutType */ {
    VAR( SecOC_ConfigType, TYPEDEF ) RootCfg;
    VAR( SecOC_RxPduConfigType, TYPEDEF ) RxPduConfig[1];
    VAR( SecOC_TxPduConfigType, TYPEDEF ) TxPduConfig[1];
} SecOC_ConfigLayoutType;

typedef CONST( SecOC_ConfigLayoutType, SECOC_APPL_CONST ) SecOC_ConstConfigLayoutType;


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define SECOC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <SecOC_MemMap.h>

extern SecOC_ConstConfigLayoutType SecOC_ConfigLayout;

#define SECOC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <SecOC_MemMap.h>


/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/



#undef TS_RELOCATABLE_CFG_ENABLE

#undef TS_PB_CFG_PTR_CLASS

#endif /* SECOC_PBCFG_H */

/*==================[end of file]============================================*/

