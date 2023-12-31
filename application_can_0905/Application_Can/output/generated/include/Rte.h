#ifndef RTE_H
#define RTE_H
/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \version 6.8.4
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains Rte hook declarations
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.8.4
  * on Tue Aug 29 10:19:26 CST 2023. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*
 *  Misra deviations:
 *  - none -
 */

/*==================[inclusions]=============================================*/

#include <Std_Types.h>         /* AUTOSAR standard types */
#include <TSAutosar.h>         /* EB specific standard types */
#include <Rte_Version.h>       /* this module's version declaration */

/*==================[macros]=================================================*/

/*------------------[AUTOSAR vendor identification check]-------------------*/

#ifndef RTE_VENDOR_ID /* configuration check */
#error RTE_VENDOR_ID must be defined
#endif

#if (RTE_VENDOR_ID != 1U) /* vendor check */
#error RTE_VENDOR_ID has wrong vendor id
#endif

/*------------------[AUTOSAR release version identification check]----------*/

#ifndef RTE_AR_RELEASE_MAJOR_VERSION /* configuration check */
#error RTE_AR_RELEASE_MAJOR_VERSION must be defined
#endif

/* major version check */
#if (RTE_AR_RELEASE_MAJOR_VERSION != 4U)
#error RTE_AR_RELEASE_MAJOR_VERSION wrong (!= 4U)
#endif

#ifndef RTE_AR_RELEASE_MINOR_VERSION /* configuration check */
#error RTE_AR_RELEASE_MINOR_VERSION must be defined
#endif

/* minor version check */
#if (RTE_AR_RELEASE_MINOR_VERSION != 0U )
#error RTE_AR_RELEASE_MINOR_VERSION wrong (!= 0U)
#endif

#ifndef RTE_AR_RELEASE_REVISION_VERSION /* configuration check */
#error RTE_AR_RELEASE_REVISION_VERSION must be defined
#endif

/* revision version check */
#if (RTE_AR_RELEASE_REVISION_VERSION != 3U )
#error RTE_AR_RELEASE_REVISION_VERSION wrong (!= 3U)
#endif

/*------------------[AUTOSAR module version identification check]-----------*/

#ifndef RTE_SW_MAJOR_VERSION /* configuration check */
#error RTE_SW_MAJOR_VERSION must be defined
#endif

/* major version check */
#if (RTE_SW_MAJOR_VERSION != 6U)
#error RTE_SW_MAJOR_VERSION wrong (!= 6U)
#endif

#ifndef RTE_SW_MINOR_VERSION /* configuration check */
#error RTE_SW_MINOR_VERSION must be defined
#endif

/* minor version check */
#if (RTE_SW_MINOR_VERSION < 8U)
#error RTE_SW_MINOR_VERSION wrong (< 8U)
#endif

#ifndef RTE_SW_PATCH_VERSION /* configuration check */
#error RTE_SW_PATCH_VERSION must be defined
#endif

/* patch version check */
#if (RTE_SW_PATCH_VERSION < 4U)
#error RTE_SW_PATCH_VERSION wrong (< 4U)
#endif

/*------------------[RTE Constants ]----------------------------------------*/

#ifdef RTE_TRANSFORMER_UNSPECIFIED /* to prevent double declaration */
#error RTE_TRANSFORMER_UNSPECIFIED already defined
#endif /* #ifdef RTE_TRANSFORMER_UNSPECIFIED */

/** \brief Transformer of a unspecified transformer class. */
#define RTE_TRANSFORMER_UNSPECIFIED 0x00U

#ifdef RTE_TRANSFORMER_SERIALIZER /* to prevent double declaration */
#error RTE_TRANSFORMER_SERIALIZER already defined
#endif /* #ifdef RTE_TRANSFORMER_SERIALIZER */

/** \brief Transformer of a serializer class. */
#define RTE_TRANSFORMER_SERIALIZER 0x01U

#ifdef RTE_TRANSFORMER_SAFETY /* to prevent double declaration */
#error RTE_TRANSFORMER_SAFETY already defined
#endif /* #ifdef RTE_TRANSFORMER_SAFETY */

/** \brief Transformer of a safety class. */
#define RTE_TRANSFORMER_SAFETY 0x02U

#ifdef RTE_TRANSFORMER_SECURITY /* to prevent double declaration */
#error RTE_TRANSFORMER_SECURITY already defined
#endif /* #ifdef RTE_TRANSFORMER_SECURITY */

/** \brief  Transformer of a security class. */
#define RTE_TRANSFORMER_SECURITY 0x03U

#ifdef RTE_TRANSFORMER_CUSTOM /* to prevent double declaration */
#error RTE_TRANSFORMER_CUSTOM already defined
#endif /* #ifdef RTE_TRANSFORMER_CUSTOM */

/** \brief  Transformer of a custom class not standardized by AUTOSAR. */
#define RTE_TRANSFORMER_CUSTOM 0xffU

/*------------------[RTE Error Codes ]--------------------------------------*/

#ifdef RTE_E_OK /* to prevent double declaration */
#error RTE_E_OK already defined
#endif /* #ifdef RTE_E_OK */

/** \brief Definition of error code: No error occured  */
#define RTE_E_OK 0U

#ifdef RTE_E_INVALID /* to prevent double declaration */
#error RTE_E_INVALID already defined
#endif /* #ifdef RTE_E_INVALID */

/** \brief Definition of error code: An invalidated signal was received */
#define RTE_E_INVALID 1U

#ifdef RTE_E_COMMS_ERROR /* to prevent double declaration */
#error RTE_E_COMMS_ERROR already defined
#endif /* #ifdef RTE_E_COMMS_ERROR */

/** \brief Definition of error code: A communication's error occurred
           defined due to backward compatiblity to AUTOSAR 2.1 */
#define RTE_E_COMMS_ERROR 128U

#ifdef RTE_E_COM_STOPPED /* to prevent double declaration */
#error RTE_E_COM_STOPPED already defined
#endif /* #ifdef RTE_E_COM_STOPPED */

/** \brief Definition of error code: A communication's error occurred  */
#define RTE_E_COM_STOPPED 128U

#ifdef RTE_E_TIMEOUT /* to prevent double declaration */
#error RTE_E_TIMEOUT already defined
#endif /* #ifdef RTE_E_TIMEOUT */

/** \brief Definition of error code: API call returned due to a timeout */
#define RTE_E_TIMEOUT 129U

#ifdef RTE_E_LIMIT /* to prevent double declaration */
#error RTE_E_LIMIT already defined
#endif /* #ifdef RTE_E_LIMIT */

/** \brief Definition of error code: Internal limit has been exceeded */
#define RTE_E_LIMIT 130U

#ifdef RTE_E_NO_DATA /* to prevent double declaration */
#error RTE_E_NO_DATA already defined
#endif /* #ifdef RTE_E_NO_DATA */

/** \brief Definition of error code: An explicit API call returned no data */
#define RTE_E_NO_DATA 131U

#ifdef RTE_E_TRANSMIT_ACK /* to prevent double declaration */
#error RTE_E_TRANSMIT_ACK already defined
#endif /* #ifdef RTE_E_TRANSMIT_ACK */

/** \brief Definition of status code: Transmission acknowledge received */
#define RTE_E_TRANSMIT_ACK 132U

#ifdef RTE_E_NEVER_RECEIVED /* to prevent double declaration */
#error RTE_E_NEVER_RECEIVED already defined
#endif /* #ifdef RTE_E_NEVER_RECEIVED */

/** \brief Definition of status code: No data received for the corresponding
           unqueued data element since system start or partition restart.
 */
#define RTE_E_NEVER_RECEIVED 133U

#ifdef RTE_E_LOST_DATA /* to prevent double declaration */
#error RTE_E_LOST_DATA already defined
#endif /* #ifdef RTE_E_LOST_DATA */

/** \brief Definition of error code: data lost */
#define RTE_E_LOST_DATA 64U

#ifdef RTE_E_MAX_AGE_EXCEEDED /* to prevent double declaration */
#error RTE_E_MAX_AGE_EXCEEDED already defined
#endif /* #ifdef RTE_E_MAX_AGE_EXCEEDED */

/** \brief Definition of error code: data lost */
#define RTE_E_MAX_AGE_EXCEEDED 64U

#ifdef RTE_E_SHUTDOWN_NOTIFICATION /* to prevent double declaration */
#error RTE_E_SHUTDOWN_NOTIFICATION already defined
#endif /* #ifdef RTE_E_SHUTDOWN_NOTIFICATION */

/** \brief Definition of error code: A shutdown notification was received
           (non standard)  */
#define RTE_E_SHUTDOWN_NOTIFICATION 156U

#ifdef RTE_E_UNCONNECTED /* to prevent double declaration */
#error RTE_E_UNCONNECTED already defined
#endif /* #ifdef RTE_E_UNCONNECTED */

/** \brief Definition of error code: Port is not connected */
#define RTE_E_UNCONNECTED 134U

#ifdef RTE_E_UNKNOWN_ERROR /* to prevent double declaration */
#error RTE_E_UNKNOWN_ERROR already defined
#endif /* #ifdef RTE_E_UNKNOWN_ERROR */

/** \brief Definition of error code: An unknown error occured
           (non standard)  */
#define RTE_E_UNKNOWN_ERROR 254U

#ifdef RTE_E_HARD_TRANSFORMER_ERROR /* to prevent double declaration */
#error RTE_E_HARD_TRANSFORMER_ERROR already defined
#endif /* #ifdef RTE_E_HARD_TRANSFORMER_ERROR */

/** \brief An error during transformation occurred. */
#define RTE_E_HARD_TRANSFORMER_ERROR 138U
#ifdef RTE_E_TRANSFORMER_LIMIT /* to prevent double declaration */
#error RTE_E_TRANSFORMER_LIMIT already defined
#endif /* #ifdef RTE_E_TRANSFORMER_LIMIT */

/** \brief Buffer for transformation operation could not be created.*/
#define RTE_E_TRANSFORMER_LIMIT 139U

#ifdef RTE_E_SOFT_TRANSFORMER_ERROR /* to prevent double declaration */
#error RTE_E_SOFT_TRANSFORMER_ERROR already defined
#endif /* #ifdef RTE_E_SOFT_TRANSFORMER_ERROR */

/** \brief An error during transformation occurred which shall be notified to
           the SWC but still produces valid data as output (comparable to a
           warning).*/
#define RTE_E_SOFT_TRANSFORMER_ERROR 140U

#ifdef RTE_E_RAM_UNCHANGED /* to prevent double declaration */
#error RTE_E_RAM_UNCHANGED already defined
#endif /* #ifdef RTE_E_RAM_UNCHANGED */

/** \brief Definition of error code: Indication that the NVM RAM block was not changed  */
#define RTE_E_RAM_UNCHANGED 142U

#ifdef SCHM_E_OK /* to prevent double declaration */
#error SCHM_E_OK already defined
#endif /* #ifdef SCHM_E_OK */

/** \brief Definition of error code: No error occurred  */
#define SCHM_E_OK 0U

#ifdef SCHM_E_TIMEOUT /* to prevent double declaration */
#error SCHM_E_TIMEOUT already defined
#endif /* #ifdef SCHM_E_TIMEOUT */

/** \brief Definition of error code: The configured timeout exceeds before the
           intended result was ready */
#define SCHM_E_TIMEOUT 129U

#ifdef SCHM_E_LIMIT /* to prevent double declaration */
#error SCHM_E_LIMIT already defined
#endif /* #ifdef SCHM_E_LIMIT */

/** \brief Definition of error code: An internal Basic Software Scheduler limit
           has been exceeded. The request could not be handled. OUT buffers
           were not modified. */
#define SCHM_E_LIMIT 130U

#ifdef SCHM_E_NO_DATA /* to prevent double declaration */
#error SCHM_E_NO_DATA already defined
#endif /* #ifdef SCHM_E_NO_DATA */

/** \brief Definition of error code: An explicit read API call returned no
           data. (This is not an error.) */
#define SCHM_E_NO_DATA 131U

#ifdef SCHM_E_LOST_DATA /* to prevent double declaration */
#error SCHM_E_LOST_DATA already defined
#endif /* #ifdef SCHM_E_LOST_DATA) */

/** \brief Definition of error code: An API call for reading received data with
           event semantics indicates that some incoming data has been lost due
           to an overflow of the receive queue or due to an error of the
           underlying communication stack. */
#define SCHM_E_LOST_DATA 64U

#ifdef SCHM_E_TRANSMIT_ACK /* to prevent double declaration */
#error SCHM_E_TRANSMIT_ACK already defined
#endif /* #ifdef SCHM_E_TRANSMIT_ACK) */

/** \brief Definition of error code: Transmission acknowledgement received */
#define SCHM_E_TRANSMIT_ACK 132U

#ifdef SCHM_E_IN_EXCLUSIVE_AREA /* to prevent double declaration */
#error SCHM_E_IN_EXCLUSIVE_AREA already defined
#endif /* #ifdef SCHM_E_IN_EXCLUSIVE_AREA) */

/** \brief Definition of error code: The error is returned by a blocking API
           and indicates that the schedulable entity could not enter a wait
           state, because one ExecutableEntity of the current task's call
           stack has entered or is running in an ExclusiveArea. */
#define SCHM_E_IN_EXCLUSIVE_AREA 135U

#ifdef Rte_IsInfrastructureError /* to prevent double declaration */
#error Rte_IsInfrastructureError already defined
#endif /* #ifdef Rte_IsInfrastructureError */

/** \brief Definition of error code: Indicates an immediate infrastructure error  */
#define Rte_IsInfrastructureError(status)  ((status & 128U) !=0)

#ifdef Rte_HasOverlayedError /* to prevent double declaration */
#error Rte_HasOverlayedError already defined
#endif /* #ifdef Rte_HasOverlayedError */

/** \brief Definition of error code: Indicates an Overlayed Error  */
#define Rte_HasOverlayedError(status)  ((status & 64U) !=0)

#ifdef Rte_ApplicationError /* to prevent double declaration */
#error Rte_ApplicationError already defined
#endif /* #ifdef Rte_ApplicationError */

/** \brief Definition of error code:  Returns the lower 6 bits of the error code  */
#define Rte_ApplicationError(status)  (status & 63U)

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/
/** @} doxygen end group definition */
#endif /* #ifndef(RTE_H) */
/*==================[end of file]============================================*/

