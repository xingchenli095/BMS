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

/**
 *   @file    Emios_Icu_Ip_PBcfg.c
 *   @version 2.0.1
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the ICU module.
 *   @details Contains the information that will be exported by the module, as requested by AUTOSAR.
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
#include "Emios_Icu_Ip_Types.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define EMIOS_ICU_IP_PBCFG_VENDOR_ID_C                    43
#define EMIOS_ICU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C     4
#define EMIOS_ICU_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C     4
#define EMIOS_ICU_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C  0
#define EMIOS_ICU_IP_PBCFG_SW_MAJOR_VERSION_C             2
#define EMIOS_ICU_IP_PBCFG_SW_MINOR_VERSION_C             0
#define EMIOS_ICU_IP_PBCFG_SW_PATCH_VERSION_C             1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#if (EMIOS_ICU_IP_PBCFG_VENDOR_ID_C != EMIOS_ICU_IP_TYPES_VENDOR_ID)
    #error "Emios_Icu_Ip_PBcfg.c and Emios_Icu_Ip_Types.h have different vendor ids"
#endif

/* Check if  source file and Emios_Icu_Ip_Types.h file are of the same Autosar version */
#if ((EMIOS_ICU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != EMIOS_ICU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_ICU_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != EMIOS_ICU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_ICU_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != EMIOS_ICU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Emios_Icu_Ip_PBcfg.c and Emios_Icu_Ip_Types.h are different"
#endif

/* Check if source file and Emios_Icu_Ip_Types.h file are of the same Software version */
#if ((EMIOS_ICU_IP_PBCFG_SW_MAJOR_VERSION_C != EMIOS_ICU_IP_TYPES_SW_MAJOR_VERSION) || \
     (EMIOS_ICU_IP_PBCFG_SW_MINOR_VERSION_C != EMIOS_ICU_IP_TYPES_SW_MINOR_VERSION) || \
     (EMIOS_ICU_IP_PBCFG_SW_PATCH_VERSION_C != EMIOS_ICU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Emios_Icu_Ip_PBcfg.c and Emios_Icu_Ip_Types.h are different"
#endif

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/** @brief Signature of report events interrupt function. */
extern void Icu_ReportEvents(uint16 Channel, boolean bOverflow);

/** @brief Signature of wakeup and overflow interrupt function. */
extern void Icu_ReportWakeupAndOverflow(uint16 Channel, boolean bOverflow);

/** @brief Signature of wakeup and overflow interrupt function. */
extern void Icu_LogicChStateCallback(uint16 logicChannel, uint8 mask, boolean set);


#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"
/*
 *  @brief    PB 0 Channels Configuration 
 */
const eMios_Icu_Ip_ChannelConfigType eMios_Icu_Ip_0_ChannelConfig_PB[1U] =
{
    /** @brief IcueMiosChannel0 */
    {
        /** @brief EMIOS hardware channel used by the ICU driver. */
        1U,
        /** @brief Channel DutyCycle measurement mode. */
        EMIOS_ICU_SAIC,
        /** @brief Emios Channel Freeze bit. */
        (boolean)TRUE,
        /** @brief Value of EMIOS channel prescaler. */
        EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Value of EMIOS channel alternate prescaler. */
        EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Channel Counter bus selection. */
        EMIOS_ICU_BUS_INTERNAL_COUNTER,
        /** @brief eMios IPL mode of operation */
        EMIOS_ICU_MODE_EDGE_COUNTER,
        /** @brief DMA support for timestamp measurement. */
        EMIOS_ICU_MODE_WITH_DMA,
        /** @brief Measurement mode for signal measurement. */
        EMIOS_ICU_NO_MEASUREMENT,
        /** @brief Edge alignment for signal measurement. */
        EMIOS_ICU_RISING_EDGE,
        /** @brief Value of EMIOS channel digital filter. */
        EMIOS_DIGITAL_FILTER_BYPASSED,
        /** @brief Callback function for channels. */
        &Icu_ReportWakeupAndOverflow,
        /** @brief Callback function for changing channels status */
        &Icu_LogicChStateCallback,
        /** @brief Parameters used by callback function. */
        (uint8)0U,
        /** @brief Channel perform measurements without interrupt. */
        (boolean)FALSE,
#if (STD_ON == EMIOS_ICU_IP_TIMESTAMP_API)
        /** @brief Timestamp buffer used. */
        EMIOS_ICU_NO_TIMESTAMP,
#endif
        /** @brief Channel specific notification */
        NULL_PTR,
        /** @brief Channel overflow notification. */
        NULL_PTR
    }
};

/** @brief Emios PB instance 0 IP configuration. */
const eMios_Icu_Ip_ConfigType eMios_Icu_Ip_0_Config_PB = 
{
    /** @brief Number of channels in the configuration */
    (uint8) 1U,
    /** @brief Instance Channels Config */
    &eMios_Icu_Ip_0_ChannelConfig_PB
};

#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
