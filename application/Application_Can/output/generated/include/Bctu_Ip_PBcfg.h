/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : ADC_SAR
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

#ifndef BCTU_IP_PBCFG_H
#define BCTU_IP_PBCFG_H

/**
*   @file
*
*   @addtogroup bctu_ip_driver_config Bctu IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Bctu_Ip_Types.h"
#ifdef BCTU_IP_DMA_SUPPORTED
#include "Dma_Ip.h"
#endif /* BCTU_IP_DMA_SUPPORTED */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define BCTU_IP_VENDOR_ID_PBCFG                       43
#define BCTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG        4
#define BCTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG        4
#define BCTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG     0
#define BCTU_IP_SW_MAJOR_VERSION_PBCFG                2
#define BCTU_IP_SW_MINOR_VERSION_PBCFG                0
#define BCTU_IP_SW_PATCH_VERSION_PBCFG                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Bctu_Ip_PBcfg.h file and Bctu_Ip_Types.h file are of the same vendor */
#if (BCTU_IP_VENDOR_ID_PBCFG != BCTU_IP_VENDOR_ID_TYPES)
    #error "Bctu_Ip_PBcfg.h and Bctu_Ip_Types.h have different vendor ids"
#endif

/* Check if Bctu_Ip_PBcfg.h file and Bctu_Ip_Types.h file are of the same Autosar version */
#if ((BCTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != BCTU_IP_AR_RELEASE_MAJOR_VERSION_TYPES) || \
     (BCTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG != BCTU_IP_AR_RELEASE_MINOR_VERSION_TYPES) || \
     (BCTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG != BCTU_IP_AR_RELEASE_REVISION_VERSION_TYPES) \
    )
    #error "AutoSar Version Numbers of Bctu_Ip_PBcfg.h and Bctu_Ip_Types.h are different"
#endif

/* Check if Bctu_Ip_PBcfg.h file and Bctu_Ip_Types.h file are of the same Software version */
#if ((BCTU_IP_SW_MAJOR_VERSION_PBCFG != BCTU_IP_SW_MAJOR_VERSION_TYPES) || \
     (BCTU_IP_SW_MINOR_VERSION_PBCFG != BCTU_IP_SW_MINOR_VERSION_TYPES) || \
     (BCTU_IP_SW_PATCH_VERSION_PBCFG != BCTU_IP_SW_PATCH_VERSION_TYPES) \
    )
  #error "Software Version Numbers of Bctu_Ip_PBcfg.h and Bctu_Ip_Types.h are different"
#endif

#ifdef BCTU_IP_DMA_SUPPORTED
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Bctu_Ip_PBcfg.c file and Dma_Ip.h file are of the same Autosar version */
#if ((BCTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
     (BCTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG != DMA_IP_AR_RELEASE_MINOR_VERSION)    \
    )
    #error "AutoSar Version Numbers of Bctu_Ip_PBcfg.c and Dma_Ip.h are different"
#endif
#endif
#endif /* BCTU_IP_DMA_SUPPORTED */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"



#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"





#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* BCTU_IP_PBCFG_H */

