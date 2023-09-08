


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


/* MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 1.3 (required)
 *    There shall be no occurrence of undefined or critical unspecified behaviour.
 *
 *    Reason:
 *    The postbuild macro TS_MAKEREF2CFG requires the usage of the
 *    C standard macro 'offsetof'.
 *    According to the C90 standard, the usage of 'offsetof' produces
 *    an undefined behaviour when the member designator parameter
 *    is a bit-field or when it is an invalid right operator of the
 *    '.' operator for the type parameter.
 *    This is not the case here as the parameter of TS_MAKEREF2CFG
 *    is always a member of TS_PB_CFG_LAYOUT_TYPE and bitfields are
 *    never used when defining the postbuild structure members.
 *
 * MISRAC2012-2) Deviated Rule: 11.4 (advisory)
 *    A cast should not be performed between a pointer type and an integral
 *    type.
 *
 *    Reason:
 *    Relocatable postbuild macro requires the cast between pointer and
 *    integral type.
 *
 * MISRAC2012-3) Deviated Rule: 11.9 (required)
 *    The macro NULL shall be the only permitted form of integer null pointer constant.
 *
 *    Reason:
 *    Macros are used in order to check the alignment for different data types.
 *
 */

/*==================[inclusions]=============================================*/

#include <ComM_PBcfg.h>
#include <TSAutosar.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_NAME ComM_Configuration
#define TS_PB_CFG_LAYOUT_TYPE ComM_ConstConfigLayoutType
#include <TSPBConfig_Init.h>

/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <ComM_MemMap.h>

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <START> */
ComM_ConstConfigLayoutType ComM_Configuration = {
    { /* RootCfg */
        UINT32_C( 2147485970 ), /* PlatformSignature */
        UINT32_C( 3958107115 ), /* LcfgSignature */
        UINT32_C( 4283348280 ), /* CfgSignature */
        UINT32_C( 1499283658 ), /* PublicInfoSignature */
        TS_MAKEREF2CFG( aUsersOfAllChannel[0] ), /* pUsersOfAllChannel */
        { /* NumUsersOfAllChannel */
            UINT16_C( 0 ), /* NumUsersOfAllChannel[0] */
            UINT16_C( 1 ) /* NumUsersOfAllChannel[1] */
        },
        TS_MAKEREF2CFG( aChannelsOfAllUser[0] ), /* pChannelsOfAllUser */
        { /* NumChannelsOfAllUser */
            UINT16_C( 0 ), /* NumChannelsOfAllUser[0] */
            UINT16_C( 1 ) /* NumChannelsOfAllUser[1] */
        },
        { /* DirectNumChannelsOfAllUser */
            UINT16_C( 0 ), /* DirectNumChannelsOfAllUser[0] */
            UINT16_C( 1 ) /* DirectNumChannelsOfAllUser[1] */
        },
        BOOLEAN_C( 1 ), /* ComMPncEnabled */
        TS_MAKEREF2CFG( aChannelsOfAllPnc[0] ), /* pChannelsOfAllPnc */
        { /* NumChannelsOfAllPnc */
            UINT16_C( 0 ), /* NumChannelsOfAllPnc[0] */
            UINT16_C( 1 ), /* NumChannelsOfAllPnc[1] */
            UINT16_C( 2 ) /* NumChannelsOfAllPnc[2] */
        },
        TS_MAKEREF2CFG( aPNCsOfAllChannel[0] ), /* pPNCsOfAllChannel */
        { /* NumPncOfAllCh */
            UINT16_C( 0 ), /* NumPncOfAllCh[0] */
            UINT16_C( 2 ) /* NumPncOfAllCh[1] */
        },
        TS_MAKEREF2CFG( aPncOfAllUser[0] ), /* pPncOfAllUser */
        { /* NumPncOfAllUser */
            UINT16_C( 0 ), /* NumPncOfAllUser[0] */
            UINT16_C( 0 ) /* NumPncOfAllUser[1] */
        },
        TS_MAKEREF2CFG( aUsersOfAllPnc[0] ), /* pUsersOfAllPnc */
        { /* NumUsersOfAllPnc */
            UINT16_C( 0 ), /* NumUsersOfAllPnc[0] */
            UINT16_C( 0 ), /* NumUsersOfAllPnc[1] */
            UINT16_C( 0 ) /* NumUsersOfAllPnc[2] */
        }
    },
    { /* aPNCsOfAllChannel */
        UINT16_C( 16 ), /* aPNCsOfAllChannel[0] */
        UINT16_C( 17 ) /* aPNCsOfAllChannel[1] */
    },
    { /* aPncOfAllUser */
        UINT16_C( 255 ) /* aPncOfAllUser[0] */
    },
    { /* aChannelsOfAllPnc */
        UINT8_C( 0 ), /* aChannelsOfAllPnc[0] */
        UINT8_C( 0 ) /* aChannelsOfAllPnc[1] */
    },
    { /* aUsersOfAllPnc */
        UINT8_C( 255 ) /* aUsersOfAllPnc[0] */
    },
    { /* aUsersOfAllChannel */
        UINT8_C( 0 ) /* aUsersOfAllChannel[0] */
    },
    { /* aChannelsOfAllUser */
        UINT8_C( 0 ) /* aChannelsOfAllUser[0] */
    }
};

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <STOP> */

#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <ComM_MemMap.h>

/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/


/*==================[end of file]============================================*/

