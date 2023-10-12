


/**
 * \file
 *
 * \brief AUTOSAR BswM
 *
 * This file contains the implementation of the AUTOSAR
 * module BswM.
 *
 * \version 1.4.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef BSWM_PBCFG_H
#define BSWM_PBCFG_H



/*==================[inclusions]=============================================*/

#include <BswM_SymbolicNames_PBcfg.h>
#include <TSAutosar.h>
#include <BswM_CfgTypes.h>
#include <Platform_Types.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_PTR_CLASS BSWM_APPL_CONST
#include <TSPBConfig_Types.h>


/*==================[macros]=================================================*/

#if (defined BSWM_PB_CFG_NAME) /* To prevent double definition */
#error BSWM_PB_CFG_NAME already defined
#endif /* (defined BSWM_PB_CFG_NAME) */

#define BSWM_PB_CFG_NAME (BswM_ConfigLayout.BswM_RootConfig)



/*==================[type definitions]=======================================*/

typedef struct /* BswM_ConfigLayoutType */ {
    VAR( BswM_ConfigType, TYPEDEF ) BswM_RootConfig[1];
    VAR( BswMRuleType, TYPEDEF ) RuleTable[16];
    VAR( uint16, TYPEDEF ) RuleDependencyTable[21];
    VAR( BswMRangeType, TYPEDEF ) RuleDependencyListRangeTable[5];
    VAR( BswMActionListType, TYPEDEF ) ActionListTable[17];
    VAR( BswMActionListItemType, TYPEDEF ) ActionListItemTable[41];
    VAR( BswMPduGroupSwitchActionType, TYPEDEF ) PduGroupSwitchActionTable[8];
    VAR( uint16, TYPEDEF ) UInt16InitialValuesTable[1];
    VAR( uint8, TYPEDEF ) UInt8InitialValuesTable[1];
} BswM_ConfigLayoutType;

typedef CONST( BswM_ConfigLayoutType, TYPEDEF ) BswM_ConstConfigLayoutType;


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define BSWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <BswM_MemMap.h>

extern BswM_ConstConfigLayoutType BswM_ConfigLayout;

#define BSWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <BswM_MemMap.h>


/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/



#undef TS_RELOCATABLE_CFG_ENABLE

#undef TS_PB_CFG_PTR_CLASS

#endif /* BSWM_PBCFG_H */

/*==================[end of file]============================================*/

