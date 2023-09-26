/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Emios Siul2 Wkpu LpCmp
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.1
*   Build Version        : S32K3_RTD_2_0_1_D2207_ASR_REL_4_4_REV_0000_20220707
*
*   (c) Copyright 2020 - 2022 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
#ifndef EMIOS_ICU_IP_DEFINES_H
#define EMIOS_ICU_IP_DEFINES_H

/**
 *   @file
 *
 *   @addtogroup emios_icu_ip EMIOS IPL
 *   @{
 */

#ifdef __cplusplus
extern "C"{
#endif

 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "StandardTypes.h"
/* Include platform header file. */
#include "S32K342_EMIOS.h"
/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define EMIOS_ICU_IP_DEFINES_VENDOR_ID                       43
#define EMIOS_ICU_IP_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define EMIOS_ICU_IP_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define EMIOS_ICU_IP_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define EMIOS_ICU_IP_DEFINES_SW_MAJOR_VERSION                2
#define EMIOS_ICU_IP_DEFINES_SW_MINOR_VERSION                0
#define EMIOS_ICU_IP_DEFINES_SW_PATCH_VERSION                1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Std_Types.h file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((EMIOS_ICU_IP_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (EMIOS_ICU_IP_DEFINES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Emios_Icu_Ip_Defines.h and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define EMIOS_ICU_IP_CHANNEL_24_USED             (STD_OFF)

/** @brief The number of EMIOS instances available on platform */
#define EMIOS_ICU_IP_INSTANCE_COUNT               (2U)

/** @brief The number of channels available on each EMIOS instance */
#define EMIOS_ICU_IP_NUM_OF_CHANNELS               (24U)

/** @brief Switches the Development Error Detection and Notification on or off.  */
#define EMIOS_ICU_IP_DEV_ERROR_DETECT             (STD_OFF)
#define EMIOS_ICU_IP_VALIDATE_GLOBAL_CALL         (EMIOS_ICU_IP_DEV_ERROR_DETECT)

/** @brief Adds or removes all services related to the timestamp functionality. */
#define EMIOS_ICU_IP_TIMESTAMP_API                (STD_ON)

/** @brief Adds or removes all services related to the edge detect functionality. */
#define EMIOS_ICU_IP_EDGE_DETECT_API              (STD_ON)

/** @brief Adds or removes all services related to the signal mesurement functionality. */
#define EMIOS_ICU_IP_SIGNAL_MEASUREMENT_API       (STD_ON)

/** @brief Adds or removes all services related to the input level. */
#define EMIOS_ICU_IP_GET_INPUT_LEVEL_API          (STD_ON)

/** @brief define SAIC mode if any channels not supporting IPWM or IPM mode is configured. */
#define EMIOS_ICU_IP_SIGNAL_MEASUREMENT_USES_SAIC_MODE            (STD_ON)

/** @brief Adds or removes all services related to the deinitialization functionality. */
#define EMIOS_ICU_IP_DEINIT_API                   (STD_ON)

/** @brief Adds or removes all services related to mode set functionality. */
#define EMIOS_ICU_IP_SET_MODE_API                 (STD_ON)

/** @brief Adds or removes all services related to edge count functionality. */
#define EMIOS_ICU_IP_EDGE_COUNT_API               (STD_ON)

/** @brief Adds or removes all services related to input state functionality. */
#define EMIOS_ICU_IP_GET_INPUT_STATE_API          (STD_ON)

/** @brief Adds or removes all services related to dual clock edge functionality. */
#define EMIOS_ICU_IP_DUAL_CLOCK_MODE_API          (STD_ON)

/** @brief Support for User mode.
 *  If this parameter has been configured to STD_ON, the EMIOS driver code
 *  can be executed from both supervisor and user mode. */
#define EMIOS_ICU_IP_ENABLE_USER_MODE_SUPPORT     (STD_OFF)

#define EMIOS_ICU_IP_CAPTURERGISTER_API           (STD_ON)

/** @brief Adds or Removes the code related to overflow notification */
#define EMIOS_ICU_IP_OVERFLOW_NOTIFICATION_API    (STD_ON)

/** @brief    Adds or removes the support  measurement with DMA*/
#define EMIOS_ICU_IP_SIGNALMEASUREMENT_USES_DMA   (STD_OFF)
#define EMIOS_ICU_IP_TIMESTAMP_USES_DMA           (STD_OFF)

#define EMIOS_ICU_IP_GET_PULSE_WIDTH_API          (STD_ON)

/* Verification for user mode support. */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (defined (EMIOS_ICU_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == EMIOS_ICU_IP_ENABLE_USER_MODE_SUPPORT))
        #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Icu in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
    #endif
#endif

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

/** @implements PwmExclusivAccessMacro_Activity */




        







#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* EMIOS_ICU_IP_DEFINES_H */

