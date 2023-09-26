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

#ifndef EMIOS_ICU_IP_PBCFG_H
#define EMIOS_ICU_IP_PBCFG_H

/**
 *   @file    Emios_Icu_PBCfg.c
 *   @version 2.0.1
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the ICU module.
 *   @details Contains the information that will be exported by the module, as requested by Autosar.
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

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define EMIOS_ICU_IP_PBCFG_VENDOR_ID                    43
#define EMIOS_ICU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION     4
#define EMIOS_ICU_IP_PBCFG_AR_RELEASE_MINOR_VERSION     4
#define EMIOS_ICU_IP_PBCFG_AR_RELEASE_REVISION_VERSION  0
#define EMIOS_ICU_IP_PBCFG_SW_MAJOR_VERSION             2
#define EMIOS_ICU_IP_PBCFG_SW_MINOR_VERSION             0
#define EMIOS_ICU_IP_PBCFG_SW_PATCH_VERSION             1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#ifndef ICU_EMIOS_0_CH_1_ISR_USED
    /** @brief Macros for indicate EMIOS interrupts used by ICU. */
    #define ICU_EMIOS_0_CH_1_ISR_USED    (STD_ON)
#endif

#ifndef EMIOS_0_CH_1_ISR_USED
    /** @brief Macros for indicate EMIOS interrupts used. */
    #define EMIOS_0_CH_1_ISR_USED        (STD_ON)
#endif


#define EMIOS_ICU_CONFIG_PB \
        extern const eMios_Icu_Ip_ChannelConfigType  eMios_Icu_Ip_0_ChannelConfig_PB[1U]; \
        extern const eMios_Icu_Ip_ConfigType         eMios_Icu_Ip_0_Config_PB; \



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

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* EMIOS_ICU_IP_PBCFG_H */

