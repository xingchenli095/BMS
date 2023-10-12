/*==================================================================================================
* Project              : RTD AUTOSAR 4.4
* Platform             : CORTEXM
* Peripheral           : none
* Dependencies         : Fls
*
* Autosar Version      : 4.4.0
* Autosar Revision     : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version           : 2.0.1
* Build Version        : S32K3_RTD_2_0_1_D2207_ASR_REL_4_4_REV_0000_20220707
*
* (c) Copyright 2020 - 2022 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

/**
*   @file
*
*   @addtogroup FEE
*   @{
*/
/*   @implements Fee_Cfg.c_Artifact*/
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fee.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FEE_VENDOR_ID_CFG_C                      43
#define FEE_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define FEE_AR_RELEASE_MINOR_VERSION_CFG_C       4
#define FEE_AR_RELEASE_REVISION_VERSION_CFG_C    0
#define FEE_SW_MAJOR_VERSION_CFG_C               2
#define FEE_SW_MINOR_VERSION_CFG_C               0
#define FEE_SW_PATCH_VERSION_CFG_C               1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Fee header file are of the same vendor */
#if (FEE_VENDOR_ID_CFG_C != FEE_VENDOR_ID)
    #error "Fee_Cfg.c and Fee.h have different vendor ids"
#endif
/* Check if current file and Fee header file are of the same Autosar version */
#if ((FEE_AR_RELEASE_MAJOR_VERSION_CFG_C    != FEE_AR_RELEASE_MAJOR_VERSION) || \
     (FEE_AR_RELEASE_MINOR_VERSION_CFG_C    != FEE_AR_RELEASE_MINOR_VERSION) || \
     (FEE_AR_RELEASE_REVISION_VERSION_CFG_C != FEE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif
/* Check if current file and Fee header file are of the same Software version */
#if ((FEE_SW_MAJOR_VERSION_CFG_C != FEE_SW_MAJOR_VERSION) || \
     (FEE_SW_MINOR_VERSION_CFG_C != FEE_SW_MINOR_VERSION) || \
     (FEE_SW_PATCH_VERSION_CFG_C != FEE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif



/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/




#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"


/* Configuration of cluster group FeeClusterGroup_0 */
static const Fee_ClusterType Fee_FeeClusterGroup_0[2] =
{
    /* FeeCluster_0 */
    {
        0U, /* Start address */
        8192U /* Size */
    },
    /* FeeCluster_1 */
    {
        8192U, /* Start address */
        8192U /* Size */
    }
};

/* Configuration of cluster group set */
const Fee_ClusterGroupType Fee_ClrGrps[FEE_NUMBER_OF_CLUSTER_GROUPS] =
{
    
    /* FeeClusterGroup_0 */
    {
        Fee_FeeClusterGroup_0, /* Cluster set */
        2U, /* Number of clusters */
        0U /* Size of the reserved area */
    }
};

/* Configuration of Fee blocks */
const Fee_BlockConfigType Fee_BlockConfig[FEE_CRT_CFG_NR_OF_BLOCKS] =
{
    /* Fee_NvMBlock_ConfigID */
    {
        FeeConf_FeeBlockConfiguration_Fee_NvMBlock_ConfigID, /* FeeBlockNumber symbol */
        4U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NvMBlock_ConfigID_Red */
    {
        FeeConf_FeeBlockConfiguration_Fee_NvMBlock_ConfigID_Red, /* FeeBlockNumber symbol */
        4U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NVM_BLOCK_DEM_DEFAULT */
    {
        FeeConf_FeeBlockConfiguration_Fee_NVM_BLOCK_DEM_DEFAULT, /* FeeBlockNumber symbol */
        40U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NVM_BLOCK_DEM_PRIMARY_0 */
    {
        FeeConf_FeeBlockConfiguration_Fee_NVM_BLOCK_DEM_PRIMARY_0, /* FeeBlockNumber symbol */
        60U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NVM_BLOCK_DEM_PRIMARY_1 */
    {
        FeeConf_FeeBlockConfiguration_Fee_NVM_BLOCK_DEM_PRIMARY_1, /* FeeBlockNumber symbol */
        60U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NVM_BLOCK_DEM_SECONDARY_0 */
    {
        FeeConf_FeeBlockConfiguration_Fee_NVM_BLOCK_DEM_SECONDARY_0, /* FeeBlockNumber symbol */
        24U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NVM_BLOCK_DEM_SECONDARY_1 */
    {
        FeeConf_FeeBlockConfiguration_Fee_NVM_BLOCK_DEM_SECONDARY_1, /* FeeBlockNumber symbol */
        24U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NVM_BLOCK_DEM_PERMANENT */
    {
        FeeConf_FeeBlockConfiguration_Fee_NVM_BLOCK_DEM_PERMANENT, /* FeeBlockNumber symbol */
        12U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    },
    /* Fee_NvM_BLOCK_voltage */
    {
        FeeConf_FeeBlockConfiguration_Fee_NvM_BLOCK_voltage, /* FeeBlockNumber symbol */
        4U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE,   /* FeeImmediateData */
#if (FEE_SWAP_FOREIGN_BLOCKS_ENABLED == STD_ON) 
        FEE_PROJECT_APPLICATION /* Fee Block Assignment to a project */
#else
        FEE_PROJECT_RESERVED
#endif
    }
};

#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @}*/
