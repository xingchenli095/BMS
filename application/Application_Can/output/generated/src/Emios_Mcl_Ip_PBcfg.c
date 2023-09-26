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
/**
*   @file Emios_Mcl_Ip_PBcfg.c
*
*   @version 2.0.1
*
*   @brief   AUTOSAR Mcl - MCL driver source file.
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
#include "Emios_Mcl_Ip_PBcfg.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMIOS_MCL_IP_PBCFG_VENDOR_ID_C                       43
#define EMIOS_MCL_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C        4
#define EMIOS_MCL_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C        4
#define EMIOS_MCL_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C     0
#define EMIOS_MCL_IP_PBCFG_SW_MAJOR_VERSION_C                2
#define EMIOS_MCL_IP_PBCFG_SW_MINOR_VERSION_C                0
#define EMIOS_MCL_IP_PBCFG_SW_PATCH_VERSION_C                1
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (EMIOS_MCL_IP_PBCFG_VENDOR_ID_C != EMIOS_MCL_IP_PBCFG_VENDOR_ID)
    #error "Emios_Mcl_Ip_PBcfg.c and Emios_Mcl_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if  source file and Emios_Mcl_Ip_PBcfg.h file are of the same Autosar version */
#if ((EMIOS_MCL_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != EMIOS_MCL_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != EMIOS_MCL_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != EMIOS_MCL_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Emios_Mcl_Ip_PBcfg.c and Emios_Mcl_Ip_PBcfg.h are different"
#endif

/* Check if source file and Emios_Mcl_Ip_PBcfg.h file are of the same Software version */
#if ((EMIOS_MCL_IP_PBCFG_SW_MAJOR_VERSION_C != EMIOS_MCL_IP_PBCFG_SW_MAJOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_SW_MINOR_VERSION_C != EMIOS_MCL_IP_PBCFG_SW_MINOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_SW_PATCH_VERSION_C != EMIOS_MCL_IP_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Emios_Mcl_Ip_PBcfg.c and Emios_Mcl_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"



/** 
 * @brief   Configuration for EMIOS master bus.
 * @details This structure contains data about the EMIOS master bus.
 */
const Emios_Ip_MasterBusConfigType Emios_Mcl_Ip_0_MasterBusConfig[1U] = 
{
    {
        /** @brief EMIOS hardware channel used. */
        (uint8)23,
        /** @brief Master bus mode for use. */
        EMIOS_IP_MCB_UP_COUNTER,
        /** @brief  Default period */
        (uint32) 65535U,
        /** @brief  Offset at start. */
        (uint32) 0U,
        /** @brief  Prescaler value */
        (uint8) 0U,
        /** @brief  Alternate prescaler value */
        (uint8) 0U,
        /** @brief  Channel Allow Debug Mode */
        (boolean)TRUE
    }
};



/** 
* @brief   Configuration for EMIOS IP instance
* @details This structure should contains data about the EMIOS common
*          part configurated using Mcl driver
* @implements Emios_Ip_GlobalConfigType
*/
/* Emios instance configuration of global parameters */
const Emios_Ip_GlobalConfigType Emios_Ip_0_GlobalConfig = 
{
    /** @brief  Allow Debug Mode */
    (boolean)TRUE,
    /** @brief  Clock Divider Value */
    (uint8) 0U,
    /** @brief  Enable Global Time Base */
    (boolean)TRUE
};
      


/** 
 * @brief   Configuration for EMIOS initialization.
 * @details This structure contains data about one instance of EMIOS.
 */
const Emios_Mcl_Ip_ConfigType Emios_Mcl_Ip_0_Config = 
{
    /** @brief Number of master buses used by this EMIOS IP. */
    (uint8)1,
    /** @brief EMIOS instance configuration. */
    &Emios_Ip_0_GlobalConfig,
    /** @brief EMIOS master buses configuration. */
    &Emios_Mcl_Ip_0_MasterBusConfig
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

