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
 *   @file    Cmp_Ip_PBcfg.c
 *   @version 2.0.1
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the ICU module
 *   @details Contains the information that will be exported by the module, as requested by AUTOSAR.
 *
 *   @addtogroup cmp_ip CMP IPL
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
#include "Cmp_Ip_Types.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define CMP_IP_PBCFG_VENDOR_ID_C                    43
#define CMP_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C     4
#define CMP_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C     4
#define CMP_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C  0
#define CMP_IP_PBCFG_SW_MAJOR_VERSION_C             2
#define CMP_IP_PBCFG_SW_MINOR_VERSION_C             0
#define CMP_IP_PBCFG_SW_PATCH_VERSION_C             1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and StandardTypes.h file are of the same Autosar version */
    #if ((CMP_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (CMP_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Cmp_Ip_PBcfg.c and StandardTypes.h are different"
    #endif
#endif

/* Check if source file and ICU header file are of the same vendor */
#if (CMP_IP_PBCFG_VENDOR_ID_C != CMP_IP_TYPES_VENDOR_ID)
    #error "Cmp_Ip_PBcfg.c and Cmp_Ip_Types.h have different vendor IDs"
#endif
/* Check if source file and ICU header file are of the same AutoSar version */
#if ((CMP_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != CMP_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (CMP_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C    != CMP_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (CMP_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CMP_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Cmp_Ip_PBcfg.c and Cmp_Ip_Types.h are different"
#endif
/* Check if source file and ICU header file are of the same Software version */
#if ((CMP_IP_PBCFG_SW_MAJOR_VERSION_C != CMP_IP_TYPES_SW_MAJOR_VERSION) || \
     (CMP_IP_PBCFG_SW_MINOR_VERSION_C != CMP_IP_TYPES_SW_MINOR_VERSION) || \
     (CMP_IP_PBCFG_SW_PATCH_VERSION_C != CMP_IP_TYPES_SW_PATCH_VERSION))
#error "Software Version Numbers of Cmp_Ip_PBcfg.c and Cmp_Ip_Types.h are different"
#endif

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/
 
/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/** @brief Signature of report events interrupt function. */
extern void Icu_ReportEvents(uint16 Channel, boolean bOverflow);

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h" 
/*
 *  @brief    PB CMP IcuLpCmp_0_PTE8 Configuration
 */
const Cmp_Ip_ConfigType Cmp_Ip_0_Config_PB = 
{
    /** @brief CMP HW Module used by the Icu channel */
    0U,
    /** @brief CMP Comparator parameters */
    {
        /** @brief Comparator Functional Mode */
        CMP_IP_FUNCTIONALMODE_CONTINUOUS,
        /** @brief Comparator Hysteresis */
        CMP_IP_HYSTERESISLEVEL_0,
        /** @brief Comparator Offset Level */
        CMP_IP_OFFSETLEVEL_0,
        /** @brief Comparator Enable Pin Output */
        (boolean)FALSE,
        /** @brief Comparator Enable Inverter */
        (boolean)FALSE,
        /** @brief Comparator Enable Comparator Invert */
        (boolean)FALSE,
        /** @brief Comparator Enable High Power */
        (boolean)FALSE,
        /** @brief Comparator Sample Period */
        0U,
        /** @brief Comparator Sample Count */
        0U,
        /** @brief Comparator Enable Dma */
        (boolean)FALSE,
        /** @brief Comparator Negative Input muxing */
        CMP_IP_INPUTMUX_DAC,
        /** @brief Comparator Positive Input muxing */
        CMP_IP_INPUTMUX_IN3,
        /** @brief Comparator Trigger Edge type*/
        CMP_IP_INTTRIG_FALLING_EDGE,
        /** @brief Comparator Close Output Overwrite*/
        CMP_IP_WINDOWCLOSEOUTPUTOVERWRITE_DISABLED,
        /** @brief Comparator Close Output Event */
        CMP_IP_WINDOWCLOSEEVENT_RISING,
        /** @brief Comparator Enable InStop */
        (boolean)FALSE,
        /** @brief Comparator Output Select */
        CMP_IP_OUTPUTSELECT_COUT
    },
    /** @brief CMP DAC parameters */
    {
        /** @brief CMP DAC Voltage Level */
        127U,
        /** @brief CMP Dac Voltage Reference */
        CMP_IP_VOLTAGEREFSOURCE_VREF0,
        /** @brief CMP Dac Power State */
        CMP_IP_DACPOWERSTATE_ENABLED
    },
    /** @brief CMP Triger parameters */
    {
        /** @brief CMP Trigger Round Robin Channel Mask */
        0U,
        /** @brief CMP Trigger Round Robin Preprog State Channel Mask */
        0U,
        /** @brief CMP Trigger Delay Value */
        0U,
        /** @brief CMP Trigger Sample Delay */
        CMP_IP_SAMPLEDELAY_0_CYCLES,
        /** @brief CMP Trigger Fixed Channel */
        CMP_IP_FIXEDCHANNEL_0,
        /** @brief CMP Trigger Fixed Port */
        CMP_IP_FIXEDPORT_PLUS,
        /** @brief CMP Trigger Enable Round Robin interrupt */
        (boolean)FALSE,
        /** @brief CMP Trigger Enable Round Robin */
        (boolean)FALSE
    },
    /** @brief Trigger Callback Pointer */
    &Icu_ReportEvents,
    /** @brief Comparator Callback Pointer */
    &Icu_ReportEvents,
    /** @brief Callback Param1*/
    2U
};
#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h" 

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
