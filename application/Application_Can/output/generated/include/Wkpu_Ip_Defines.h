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
#ifndef WKPU_IP_DEFINES_H
#define WKPU_IP_DEFINES_H

/**
 *   @file    Wkpu_Ip_Defines.h
 *   @version 2.0.1
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the Icu module
 *   @details Contains the information that will be exported by the module, as requested by Autosar.
 *
 *   @addtogroup wkpu_icu_ip WKPU IPL
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
#include "S32K342_WKPU.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/

#define WKPU_IP_DEFINES_VENDOR_ID                    43
#define WKPU_IP_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define WKPU_IP_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define WKPU_IP_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define WKPU_IP_DEFINES_SW_MAJOR_VERSION             2
#define WKPU_IP_DEFINES_SW_MINOR_VERSION             0
#define WKPU_IP_DEFINES_SW_PATCH_VERSION             1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
/* Check if header file and StandardTypes.h file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((WKPU_IP_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (WKPU_IP_DEFINES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wkpu_Ip_Defines.h and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

#ifndef WKPU_IP_DERIVATIVE_NOT_SUPPORT_WKPU
#define WKPU_IP_NMI_API               (STD_OFF)
/** @brief The number core support for WKPU module */
#if (defined (WKPU_IP_NMI_API) && (STD_ON == WKPU_IP_NMI_API))
#define WKPU_IP_NMI_NUM_CORES                  (2U)
#endif
#if (defined (WKPU_IP_NMI_API) && (STD_ON == WKPU_IP_NMI_API))
/** @brief The WKPU core array */
#define WKPU_IP_CORE_ARRAY \
{                          \
    WKPU_CORE0    /*!< Core 0 */,\
    WKPU_CORE1    /*!< Core 1 */\
}
#endif

#if (defined (WKPU_IP_NMI_API) && (STD_ON == WKPU_IP_NMI_API))
/*! @brief The distance between cores */
#define     WKPU_IP_CORE_OFFSET_SIZE            (8U)
#define     WKPU_IP_SUPPORT_NONE_REQUEST
#define     WKPU_IP_SUPPORT_NON_MASK_INT
#endif
#define     WKPU_IP_SUPPORT_INTERRUPT_REQUEST
#define     WKPU_IP_NUM_OF_CHANNELS             (64U)

#define     WKPU_IP_NUM_OF_CHANNELS_IN_ONE_REG  (32U)

/** @brief Switch for enabling Standby wakeup support  on or off */
#define     WKPU_IP_STANDBY_WAKEUP_SUPPORT      (STD_OFF)


#endif /* WKPU_IP_DERIVATIVE_NOT_SUPPORT_WKPU */

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* WKPU_IP_DEFINES_H */
