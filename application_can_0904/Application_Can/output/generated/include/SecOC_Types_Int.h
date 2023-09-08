


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

#ifndef SECOC_TYPES_INT_H
#define SECOC_TYPES_INT_H



/*==================[inclusions]=============================================*/

#include <Platform_Types.h>
#include <ComStack_Cfg.h>
#include <TSAutosar.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_PTR_CLASS SECOC_APPL_CONST
#include <TSPBConfig_Types.h>


/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/

/** 
 \brief Rx buffers configuration type

 This type is used for configuration of Rx buffers that will be used during the receiving, verification and forwarding procedure.
 */
typedef struct /* SecOC_RxBuffersConfigType */ {
    VAR( uint32, TYPEDEF ) ReceivedSecuredPduBufferIndex; /* Buffer index where the Received Secured PDU will be stored */
    VAR( uint32, TYPEDEF ) SecuredPduBufferIndex; /* Buffer index where the Secured PDU will be stored */
    VAR( uint32, TYPEDEF ) AuthenticatorIndex; /* Buffer index where the Authenticator will be stored */
    VAR( uint32, TYPEDEF ) DataToAuthenticatorIndex; /* Buffer index where the data to authenticator will be stored */
    VAR( PduLengthType, TYPEDEF ) SecuredPduBufferLength; /* Buffer length where the Secured PDU will be stored */
    VAR( PduLengthType, TYPEDEF ) AuthPduBufferLength; /* Buffer length where the Authentic PDU will be stored */
} SecOC_RxBuffersConfigType;

/** 
 \brief Tx buffers configuration type

 This type is used for configuration of Tx buffers that will be used during the receiving, verification and transmission procedure.
 */
typedef struct /* SecOC_TxBuffersConfigType */ {
    VAR( uint32, TYPEDEF ) ULAuthPduBufferIndex; /* Buffer index where the upper layer Authentic PDU will be stored */
    VAR( uint32, TYPEDEF ) SecuredPduBufferIndex; /* Buffer index where the Secured PDU will be stored */
    VAR( uint32, TYPEDEF ) AuthenticatorIndex; /* Buffer index where the Authenticator will be stored */
    VAR( uint32, TYPEDEF ) DataToAuthenticatorIndex; /* Buffer index where the data to authenticator will be stored */
    VAR( PduLengthType, TYPEDEF ) SecuredPduBufferLength; /* Buffer length where the Secured PDU will be stored */
    VAR( PduLengthType, TYPEDEF ) AuthPduBufferLength; /* Buffer length where the Authentic PDU will be stored */
} SecOC_TxBuffersConfigType;

/** 
 \brief Rx PDU configuration type

 This type is used for configuration of Rx PDUs.
 */
typedef struct /* SecOC_RxPduConfigType */ {
    VAR( SecOC_RxBuffersConfigType, TYPEDEF ) BuffersConfig; /* Rx PDU buffer lengths */
    VAR( uint16, TYPEDEF ) DataId; /* Data ID */
    VAR( uint16, TYPEDEF ) AuthenticLayerPduIdAtPduR; /* ID of authentic Pdu (ID defined in PduR used for PduR_SecOCRxIndication) */
    VAR( uint16, TYPEDEF ) AuthInfoTxLength; /* Truncated MAC length in bits */
    VAR( uint16, TYPEDEF ) FreshnessValueId; /* Freshness value ID */
    VAR( uint8, TYPEDEF ) FreshnessValueLength; /* Freshness value length in bits */
    VAR( uint8, TYPEDEF ) FreshnessValueTxLength; /* Truncated freshness value length in bits */
} SecOC_RxPduConfigType;

/** 
 \brief Tx PDU configuration type

 This type is used for configuration of Tx PDUs.
 */
typedef struct /* SecOC_TxPduConfigType */ {
    VAR( SecOC_TxBuffersConfigType, TYPEDEF ) BuffersConfig; /* Tx PDU buffer lengths */
    VAR( uint16, TYPEDEF ) DataId; /* Data ID */
    VAR( uint16, TYPEDEF ) SecuredLayerPduIdAtPduR; /* ID of secured Pdu at PduR (used for e.g. PduR_SecOCTpTransmit) */
    VAR( uint16, TYPEDEF ) ULAuthLayerPduIdAtPduR; /* ID of authentic Pdu at PduR (used for e.g. PduR_SecOCTxConfirmation) */
    VAR( uint16, TYPEDEF ) AuthInfoTxLength; /* Truncated MAC length in bits */
    VAR( uint16, TYPEDEF ) FreshnessValueId; /* Freshness value ID */
    VAR( uint8, TYPEDEF ) FreshnessValueLength; /* Freshness value length in bits */
    VAR( uint8, TYPEDEF ) FreshnessValueTxLength; /* Truncated freshness value length in bits */
    VAR( boolean, TYPEDEF ) UseReAuthenticate; /* Flag which indicates if the authentication information shall be updated after triggered transmission */
} SecOC_TxPduConfigType;

/** 
 \brief Type for the SecOC configuration
 This type defines the global configuration of the SecOC.
 */
typedef struct /* SecOC_ConfigType */ {
    VAR( uint32, TYPEDEF ) PlatformSignature; /* Used to validate the platform */
    VAR( uint32, TYPEDEF ) LcfgSignature; /* Used to validate the post build configuration against the link time configuration */
    VAR( uint32, TYPEDEF ) CfgSignature; /* Used to validate the post build configuration against the precompile time configuration */
    VAR( uint32, TYPEDEF ) PublicInfoSignature; /* Used to validate the post build configuration against the precompile time published information configuration */
    VAR( uint32, TYPEDEF ) PduBufferSize; /* Required buffer size for storing PDUs */
    VAR( uint32, TYPEDEF ) IntBufferSize; /* Required buffer size for internal processing */
    TS_REF2CFG( SecOC_RxPduConfigType )  RxPduConfigPtr; /* ptr. to array of Rx PDU configurations */
    TS_REF2CFG( SecOC_TxPduConfigType )  TxPduConfigPtr; /* ptr. to array of Tx PDU configurations */
} SecOC_ConfigType;


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

#endif /* SECOC_TYPES_INT_H */

/*==================[end of file]============================================*/

