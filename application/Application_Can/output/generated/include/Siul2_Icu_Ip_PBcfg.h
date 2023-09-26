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

#ifndef SIUL2_ICU_IP_PBCFG_H
#define SIUL2_ICU_IP_PBCFG_H

/**
 *   @file    Siul2_Icu_Ip_PBcfg.h
 *   @version 2.0.1
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the Icu module
 *   @details Contains the information that will be exported by the module, as requested by Autosar.
 *
 *   @addtogroup siul2_icu_ip SIUL2 IPL
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
#include "Siul2_Icu_Ip_Types.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define SIUL2_ICU_IP_PBCFG_VENDOR_ID                    43
#define SIUL2_ICU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION     4
#define SIUL2_ICU_IP_PBCFG_AR_RELEASE_MINOR_VERSION     4
#define SIUL2_ICU_IP_PBCFG_AR_RELEASE_REVISION_VERSION  0
#define SIUL2_ICU_IP_PBCFG_SW_MAJOR_VERSION             2
#define SIUL2_ICU_IP_PBCFG_SW_MINOR_VERSION             0
#define SIUL2_ICU_IP_PBCFG_SW_PATCH_VERSION             1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
/* Check if source file and ICU header file are of the same vendor */
#if (SIUL2_ICU_IP_PBCFG_VENDOR_ID != SIUL2_ICU_IP_TYPES_VENDOR_ID)
    #error "Siul2_Icu_Ip_PBcfg.h and Siul2_Icu_Ip_Types.h have different vendor IDs"
#endif
/* Check if source file and ICU header file are of the same AutoSar version */
#if ((SIUL2_ICU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION    != SIUL2_ICU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (SIUL2_ICU_IP_PBCFG_AR_RELEASE_MINOR_VERSION    != SIUL2_ICU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (SIUL2_ICU_IP_PBCFG_AR_RELEASE_REVISION_VERSION != SIUL2_ICU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Siul2_Icu_Ip_PBcfg.h and Siul2_Icu_Ip_Types.h are different"
#endif
/* Check if source file and ICU header file are of the same Software version */
#if ((SIUL2_ICU_IP_PBCFG_SW_MAJOR_VERSION != SIUL2_ICU_IP_TYPES_SW_MAJOR_VERSION) || \
     (SIUL2_ICU_IP_PBCFG_SW_MINOR_VERSION != SIUL2_ICU_IP_TYPES_SW_MINOR_VERSION) || \
     (SIUL2_ICU_IP_PBCFG_SW_PATCH_VERSION != SIUL2_ICU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Siul2_Icu_Ip_PBcfg.h and Siul2_Icu_Ip_Types.h are different"
#endif

/*==================================================================================================
 *                                       DEFINES AND MACROS
 *================================================================================================*/
#define SIUL2_ICU_CONFIG_PB \
        extern const Siul2_Icu_Ip_ChannelConfigType Siul2_Icu_Ip_0_ChannelConfig_PB[1U]; \
        extern const Siul2_Icu_Ip_InstanceConfigType Siul2_Icu_Ip_0_InstanceConfig_PB; \
        extern const Siul2_Icu_Ip_ConfigType Siul2_Icu_Ip_0_Config_PB; \


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SIUL2_ICU_IP_PBCFG_H */

