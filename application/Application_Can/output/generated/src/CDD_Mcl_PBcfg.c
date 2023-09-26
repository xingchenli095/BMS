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

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
**/

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Mcl_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_MCL_PBCFG_VENDOR_ID_C                     43
#define CDD_MCL_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define CDD_MCL_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define CDD_MCL_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define CDD_MCL_PBCFG_SW_MAJOR_VERSION_C              2
#define CDD_MCL_PBCFG_SW_MINOR_VERSION_C              0
#define CDD_MCL_PBCFG_SW_PATCH_VERSION_C              1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if CDD_Mcl_PBcfg.c file and CDD_Mcl_Cfg.h file are of the same vendor */
#if (CDD_MCL_PBCFG_VENDOR_ID_C != CDD_MCL_CFG_VENDOR_ID)
    #error "CDD_Mcl_PBcfg.c and CDD_Mcl_Cfg.h have different vendor ids"
#endif

/* Check if CDD_Mcl_PBcfg.c file and CDD_Mcl_Cfg.h file are of the same Autosar version */
#if ((CDD_MCL_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CDD_MCL_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_MCL_PBCFG_AR_RELEASE_MINOR_VERSION_C != CDD_MCL_CFG_AR_RELEASE_MINOR_VERSION) || \
     (CDD_MCL_PBCFG_AR_RELEASE_REVISION_VERSION_C != CDD_MCL_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl_PBcfg.c and CDD_Mcl_Cfg.h are different"
#endif

/* Check if CDD_Mcl_PBcfg.c file and CDD_Mcl_Cfg.h file are of the same Software version */
#if ((CDD_MCL_PBCFG_SW_MAJOR_VERSION_C != CDD_MCL_CFG_SW_MAJOR_VERSION) || \
     (CDD_MCL_PBCFG_SW_MINOR_VERSION_C != CDD_MCL_CFG_SW_MINOR_VERSION) || \
     (CDD_MCL_PBCFG_SW_PATCH_VERSION_C != CDD_MCL_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of CDD_Mcl_PBcfg.c and CDD_Mcl_Cfg.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                      LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

const Mcl_ConfigType Mcl_Config =
{
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    &Mcl_EmiosConfig,
    NULL_PTR
};


    

    

/** 
* @brief   Configuration for EMIOS instance
* @details This structure should contains data about the EMIOS common
*          part configurated using Mcl driver
* @implements Mcl_EmiosInstanceConfigType
*/
const Mcl_EmiosInstanceConfigType Mcl_EmiosInstanceConfig[1U] = 
{

    {
        /** @brief  Hardware EMIOS instace number */
        (uint8) 0U,
        /** @brief  Address of configuration for EMIOS hardware instance */
        &Emios_Mcl_Ip_0_Config
    }
    
};
    
    

/** 
* @brief   Configuration for EMIOS initialization
* @details This structure should contains data about the EMIOS common
*          part configurated using Mcl driver
* @implements Mcl_EmiosInitConfigType
*/
const Mcl_EmiosInitConfigType Mcl_EmiosConfig = 
{
    /** @brief  Number of EMIOS instaces to configure. */
    (uint8)1,
    /** @brief  Address of the EMIOS instances configuration. */
    &Mcl_EmiosInstanceConfig,
};




#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
