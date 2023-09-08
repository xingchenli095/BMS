


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

#include <SecOC_PBcfg.h>
#include <TSAutosar.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_NAME SecOC_ConfigLayout
#define TS_PB_CFG_LAYOUT_TYPE SecOC_ConstConfigLayoutType
#include <TSPBConfig_Init.h>

/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define SECOC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <SecOC_MemMap.h>

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <START> */
SecOC_ConstConfigLayoutType SecOC_ConfigLayout = {
    { /* RootCfg */
        UINT32_C( 2147485970 ), /* PlatformSignature */
        UINT32_C( 3958107115 ), /* LcfgSignature */
        UINT32_C( 1275670664 ), /* CfgSignature */
        UINT32_C( 844678326 ), /* PublicInfoSignature */
        UINT32_C( 20 ), /* PduBufferSize */
        UINT32_C( 34 ), /* IntBufferSize */
        TS_MAKEREF2CFG( RxPduConfig[0] ), /* RxPduConfigPtr */
        TS_MAKEREF2CFG( TxPduConfig[0] ) /* TxPduConfigPtr */
    },
    { /* RxPduConfig */
        { /* RxPduConfig[0] */
            { /* BuffersConfig */
                UINT32_C( 0 ), /* ReceivedSecuredPduBufferIndex */
                UINT32_C( 0 ), /* SecuredPduBufferIndex */
                UINT32_C( 0 ), /* AuthenticatorIndex */
                UINT32_C( 3 ), /* DataToAuthenticatorIndex */
                UINT16_C( 8 ), /* SecuredPduBufferLength */
                UINT16_C( 4 ) /* AuthPduBufferLength */
            },
            UINT16_C( 12345 ), /* DataId */
            UINT16_C( 0 ), /* AuthenticLayerPduIdAtPduR */
            UINT16_C( 24 ), /* AuthInfoTxLength */
            UINT16_C( 0 ), /* FreshnessValueId */
            UINT8_C( 40 ), /* FreshnessValueLength */
            UINT8_C( 8 ) /* FreshnessValueTxLength */
        }
    },
    { /* TxPduConfig */
        { /* TxPduConfig[0] */
            { /* BuffersConfig */
                UINT32_C( 8 ), /* ULAuthPduBufferIndex */
                UINT32_C( 12 ), /* SecuredPduBufferIndex */
                UINT32_C( 17 ), /* AuthenticatorIndex */
                UINT32_C( 20 ), /* DataToAuthenticatorIndex */
                UINT16_C( 8 ), /* SecuredPduBufferLength */
                UINT16_C( 4 ) /* AuthPduBufferLength */
            },
            UINT16_C( 12345 ), /* DataId */
            UINT16_C( 0 ), /* SecuredLayerPduIdAtPduR */
            UINT16_C( 0 ), /* ULAuthLayerPduIdAtPduR */
            UINT16_C( 24 ), /* AuthInfoTxLength */
            UINT16_C( 1 ), /* FreshnessValueId */
            UINT8_C( 40 ), /* FreshnessValueLength */
            UINT8_C( 8 ), /* FreshnessValueTxLength */
            BOOLEAN_C( 0 ) /* UseReAuthenticate */
        }
    }
};

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <STOP> */

#define SECOC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <SecOC_MemMap.h>

/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/


/*==================[end of file]============================================*/

