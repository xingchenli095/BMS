


/**
 * \file
 *
 * \brief AUTOSAR ComM
 *
 * This file contains the implementation of the AUTOSAR
 * module ComM.
 *
 * \version 1.4.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef COMM_PBCFG_H
#define COMM_PBCFG_H



/*==================[inclusions]=============================================*/

#include <ComM_SymbolicNames_PBcfg.h>
#include <TSAutosar.h>
#include <ComM_Types_Int.h>
#include <Platform_Types.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_PTR_CLASS COMM_APPL_CONST
#include <TSPBConfig_Types.h>


/*==================[macros]=================================================*/

#if (defined ComMConfigSet) /* To prevent double definition */
#error ComMConfigSet already defined
#endif /* (defined ComMConfigSet) */

#define ComMConfigSet (ComM_Configuration.RootCfg)



/*==================[type definitions]=======================================*/

typedef struct /* ComM_ConfigLayoutType */ {
    VAR( ComM_ConfigType, TYPEDEF ) RootCfg;
    VAR( uint16, TYPEDEF ) aPNCsOfAllChannel[2]; /* PNC Ids of all channels */
    VAR( uint16, TYPEDEF ) aPncOfAllUser[1]; /* PNC Ids of all users */
    VAR( uint8, TYPEDEF ) aChannelsOfAllPnc[2]; /* Channel Id of all channels for all PNC */
    VAR( uint8, TYPEDEF ) aUsersOfAllPnc[1]; /* User Ids of all cwPNCsusers */
    VAR( uint8, TYPEDEF ) aUsersOfAllChannel[1]; /* User Ids referenced by channel or PNCs of channel */
    VAR( uint8, TYPEDEF ) aChannelsOfAllUser[1]; /* Channel Ids or PNC ids referenced by user of channel */
} ComM_ConfigLayoutType;

typedef CONST( ComM_ConfigLayoutType, COMM_APPL_CONST ) ComM_ConstConfigLayoutType;


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <ComM_MemMap.h>

extern ComM_ConstConfigLayoutType ComM_Configuration;

#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <ComM_MemMap.h>


/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/



#undef TS_RELOCATABLE_CFG_ENABLE

#undef TS_PB_CFG_PTR_CLASS

#endif /* COMM_PBCFG_H */

/*==================[end of file]============================================*/

