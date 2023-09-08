/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifndef POWER_IP_CFG_H
#define POWER_IP_CFG_H

/**
*   @file       Power_Ip_Cfg.h
*   @version    2.0.1
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup POWER_DRIVER_CONFIGURATION Power Ip Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Power_Ip_PBcfg.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_CFG_VENDOR_ID                      43
#define POWER_IP_CFG_AR_RELEASE_MAJOR_VERSION       4
#define POWER_IP_CFG_AR_RELEASE_MINOR_VERSION       4
#define POWER_IP_CFG_AR_RELEASE_REVISION_VERSION    0
#define POWER_IP_CFG_SW_MAJOR_VERSION               2
#define POWER_IP_CFG_SW_MINOR_VERSION               0
#define POWER_IP_CFG_SW_PATCH_VERSION               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_Cfg.h file and Power_Ip_PBcfg.h file are of the same vendor */
#if (POWER_IP_CFG_VENDOR_ID != POWER_IP_PBCFG_VENDOR_ID)
    #error "Power_Ip_Cfg.h and Power_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if Power_Ip_Cfg.h file and Power_Ip_PBcfg.h file are of the same Autosar version */
#if ((POWER_IP_CFG_AR_RELEASE_MAJOR_VERSION != POWER_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_CFG_AR_RELEASE_MINOR_VERSION != POWER_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_CFG_AR_RELEASE_REVISION_VERSION != POWER_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_Cfg.h and Power_Ip_PBcfg.h are different"
#endif

/* Check if Power_Ip_Cfg.h file and Power_Ip_PBcfg.h file are of the same Software version */
#if ((POWER_IP_CFG_SW_MAJOR_VERSION != POWER_IP_PBCFG_SW_MAJOR_VERSION) || \
     (POWER_IP_CFG_SW_MINOR_VERSION != POWER_IP_PBCFG_SW_MINOR_VERSION) || \
     (POWER_IP_CFG_SW_PATCH_VERSION != POWER_IP_PBCFG_SW_PATCH_VERSION) \
    )
  #error "Software Version Numbers of Power_Ip_Cfg.h and Power_Ip_PBcfg.h are different"
#endif
/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
#define POWER_IP_DEV_ERROR_DETECT         (STD_OFF)

#define POWER_IP_TIMEOUT_TYPE                (OSIF_COUNTER_DUMMY)

#define POWER_IP_TIMEOUT_VALUE_US            (50000U)

/**
* @brief        Support for User mode.
*               If this parameter has been configured to 'TRUE' the Clock can be executed from both supervisor and user mode.
*/
#define POWER_IP_ENABLE_USER_MODE_SUPPORT  (STD_OFF)

/** Check the driver user mode is enabled only when the MCAL_ENABLE_USER_MODE_SUPPORT is enabled */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Clock in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
  #endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
#endif /* #ifndef POWER_IP_CFG_H */

