


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

#ifndef COMM_TYPES_INT_H
#define COMM_TYPES_INT_H



/*==================[inclusions]=============================================*/

#include <Platform_Types.h>
#include <TSAutosar.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_PTR_CLASS COMM_APPL_CONST
#include <TSPBConfig_Types.h>


/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/

typedef struct /* ComM_ConfigType */ {
    VAR( uint32, TYPEDEF ) PlatformSignature; /* Used to validate the platform */
    VAR( uint32, TYPEDEF ) LcfgSignature; /* Used to validate the post build configuration against the link time configuration */
    VAR( uint32, TYPEDEF ) CfgSignature; /* Used to validate the post build configuration against the precompile time configuration */
    VAR( uint32, TYPEDEF ) PublicInfoSignature; /* Used to validate Public information */
    TS_REF2CFG( uint8 )  pUsersOfAllChannel; /* Reference to COMM_ConfigLayoutType.aUsersOfAllChannel */
    VAR( uint16, TYPEDEF ) NumUsersOfAllChannel[2]; /* Index of first user of a channel in COMM_ConfigLayoutType.aUsersOfAllChannel */
    TS_REF2CFG( uint8 )  pChannelsOfAllUser; /* Reference to COMM_ConfigLayoutType.aChannelsOfAllUser */
    VAR( uint16, TYPEDEF ) NumChannelsOfAllUser[2]; /* Index of first channel of a user in COMM_ConfigLayoutType.aChannelsOfAllUser */
    VAR( uint16, TYPEDEF ) DirectNumChannelsOfAllUser[2]; /* Index of first channel of a user in COMM_ConfigLayoutType.aChannelsOfAllUser */
    VAR( boolean, TYPEDEF ) ComMPncEnabled; /* Enabling/Disabling of partial networking */
    TS_REF2CFG( uint8 )  pChannelsOfAllPnc; /* Concatenated array of channels ids for each PNC: Pnc1Chan1,Pnc1Chan2,Pnc2Chan1... */
    VAR( uint16, TYPEDEF ) NumChannelsOfAllPnc[3]; /* Index of first channel of each Pnc in COMM_ConfigLayoutType.aChannelsOfAllPnc */
    TS_REF2CFG( uint16 )  pPNCsOfAllChannel; /* Concatenated array of PNC ids for each channel: Chan1Pnc1,Chan1Pnc2,Chan2Pnc1... */
    VAR( uint16, TYPEDEF ) NumPncOfAllCh[2]; /* Index of first PNC of each channel in COMM_ConfigLayoutType.aPNCsOfAllChannel */
    TS_REF2CFG( uint16 )  pPncOfAllUser; /* Concatenated array of PNC indices (NOT ID) for users: Usr1Pnc1,Usr1Pnc2,Usr2Pnc1.. */
    VAR( uint16, TYPEDEF ) NumPncOfAllUser[2]; /* Index of first PNC of each user in COMM_ConfigLayoutType.aPncOfAllUser */
    TS_REF2CFG( uint8 )  pUsersOfAllPnc; /* Concatenated array of user ids for each PNC: Pnc1Usr1,Pnc1Usr2,Pnc2Usr1... */
    VAR( uint16, TYPEDEF ) NumUsersOfAllPnc[3]; /* Index of first User of each PNC in COMM_ConfigLayoutType.aUsersOfAllPnc */
} ComM_ConfigType;


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/


/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/



#undef TS_RELOCATABLE_CFG_ENABLE

#undef TS_PB_CFG_PTR_CLASS

#endif /* COMM_TYPES_INT_H */

/*==================[end of file]============================================*/

