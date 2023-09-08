


/**
 * \file
 *
 * \brief AUTOSAR Com
 *
 * This file contains the implementation of the AUTOSAR
 * module Com.
 *
 * \version 1.4.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef COM_PBCFG_H
#define COM_PBCFG_H



/*==================[inclusions]=============================================*/

#include <Com_SymbolicNames_PBcfg.h>
#include <TSAutosar.h>
#include <Com_Types.h>
#include <Platform_Types.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_PTR_CLASS COM_APPL_CONST
#include <TSPBConfig_Types.h>


/*==================[macros]=================================================*/

#if (defined ComConfig) /* To prevent double definition */
#error ComConfig already defined
#endif /* (defined ComConfig) */

#define ComConfig (Com_ConfigLayout.Com_RootConfig)



/*==================[type definitions]=======================================*/

typedef struct /* Com_ConfigLayoutType */ {
    VAR( Com_ConfigType, TYPEDEF ) Com_RootConfig;
    VAR( ComRxIPduType, TYPEDEF ) ComRxIPdu[6];
    VAR( ComTxIPduType, TYPEDEF ) ComTxIPdu[5];
    VAR( ComTxSignalGroupType, TYPEDEF ) ComTxSignalGroup[1];
    VAR( ComTxModeNTimesType, TYPEDEF ) ComTxModeNTimes[1];
    VAR( ComTxModePeriodicType, TYPEDEF ) ComTxModePeriodic[1];
    VAR( ComSignalGroupRefType, TYPEDEF ) ComRxIPduSignalGroupList[1];
    VAR( ComSignalGroupRefType, TYPEDEF ) ComTxIPduSignalGroupList[1];
    VAR( ComSignalRefType, TYPEDEF ) ComRxIPduSignalList[5];
    VAR( ComSignalRefType, TYPEDEF ) ComTxIPduSignalList[5];
    VAR( ComRxSignalGroupType, TYPEDEF ) ComRxSignalGroup[1];
    VAR( ComRxSignalType, TYPEDEF ) ComRxSignal[8];
    VAR( ComRxSignalExtType, TYPEDEF ) ComRxSignalExt[6];
    VAR( ComTxSignalType, TYPEDEF ) ComTxSignal[8];
    VAR( ComIPduRefType, TYPEDEF ) ComPeriodicQueueList[2];
    VAR( ComIPduRefType, TYPEDEF ) ComNTimesQueueList[2];
    VAR( ComIPduGroupMaskType, TYPEDEF ) ComIPduGroupMask[20];
    VAR( uint8, TYPEDEF ) ComIPduInit[129];
} Com_ConfigLayoutType;

typedef CONST( Com_ConfigLayoutType, TYPEDEF ) Com_ConstConfigLayoutType;


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <Com_MemMap.h>

extern Com_ConstConfigLayoutType Com_ConfigLayout;

#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <Com_MemMap.h>


/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/



#undef TS_RELOCATABLE_CFG_ENABLE

#undef TS_PB_CFG_PTR_CLASS

#endif /* COM_PBCFG_H */

/*==================[end of file]============================================*/

