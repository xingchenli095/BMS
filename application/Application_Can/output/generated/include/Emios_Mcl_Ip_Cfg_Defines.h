/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,LCU,EMIOS,FLEXIO
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

#ifndef EMIOS_MCL_IP_CFG_DEFINES_H
#define EMIOS_MCL_IP_CFG_DEFINES_H
/**
*   @file Emios_Mcl_Ip_Cfg_Defines.h
*
*   @version 2.0.1
*
*   @brief   AUTOSAR Mcl - MCL driver header file.
*   @details 
*
*   @addtogroup MCL_DRIVER MCL Driver
*   @{
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Emios_Mcl_Ip_Cfg_DeviceRegisters.h"

#include "Emios_Icu_Ip_Cfg.h"

/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define EMIOS_MCL_IP_CFG_DEFINES_VENDOR_ID                       43
#define EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define EMIOS_MCL_IP_CFG_DEFINES_SW_MAJOR_VERSION                2
#define EMIOS_MCL_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define EMIOS_MCL_IP_CFG_DEFINES_SW_PATCH_VERSION                1
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (EMIOS_MCL_IP_CFG_DEFINES_VENDOR_ID != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_VENDOR_ID)
    #error "Emios_Mcl_Ip_Cfg_Defines.h and Emios_Mcl_Ip_Cfg_DeviceRegisters.h have different vendor ids"
#endif

/* Check if  header file and Emios_Mcl_Ip_Cfg_DeviceRegisters.h file are of the same Autosar version */
#if ((EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Emios_Mcl_Ip_Cfg_Defines.h and Emios_Mcl_Ip_Cfg_DeviceRegisters.h are different"
#endif

/* Check if header file and Emios_Mcl_Ip_Cfg_DeviceRegisters.h file are of the same Software version */
#if ((EMIOS_MCL_IP_CFG_DEFINES_SW_MAJOR_VERSION != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION) || \
     (EMIOS_MCL_IP_CFG_DEFINES_SW_MINOR_VERSION != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION) || \
     (EMIOS_MCL_IP_CFG_DEFINES_SW_PATCH_VERSION != EMIOS_MCL_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Emios_Mcl_Ip_Cfg_Defines.h and Emios_Mcl_Ip_Cfg_DeviceRegisters.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if this header file and Emios_Icu_Ip_Cfg.h file are of the same Autosar version */
    #if ((EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != EMIOS_ICU_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
        (EMIOS_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != EMIOS_ICU_IP_CFG_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Emios_Mcl_Ip_Cfg_Defines.h and Emios_Icu_Ip_Cfg.h are different"
    #endif
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/* Macros that indicate EMIOS channels used by MCL. */
#ifndef EMIOS_0_CH_23_USED
    #define EMIOS_0_CH_23_USED
#else
    #error "EMIOS_0_CH_23 channel cannot be used by MCL driver. Channel locked by other driver!"
#endif


/* Macros used to save logic MCL EMIOS channel encoding. */
#define MCL_EMIOS_LOGIC_CH0 (uint16)((0U << 8U) + 23U)

#define EMIOS_MCL_IP_DEV_ERROR_DETECT  (STD_OFF)

/** @brief Enable/disable EMIOS multicore support. */
#define EMIOS_IP_MULTICORE_IS_AVAILABLE    (STD_OFF)


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

#endif /* EMIOS_MCL_IP_CFG_DEFINES_H */
