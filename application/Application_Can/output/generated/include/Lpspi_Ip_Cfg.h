/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LPSPI
*   Dependencies         : 
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

#ifndef LPSPI_IP_CFG_H
#define LPSPI_IP_CFG_H

/**
*   @file    Lpspi_Ip_Cfg.h
*   @version 2.0.1
*
*   @brief   AUTOSAR Spi - Spi configuration header file.
*   @details This file is the header containing all the necessary information for SPI
*            module configuration(s).
*   @addtogroup LPSPI_DRIVER_CONFIGURATION Lpspi Driver Configuration
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
* 4) user callback header files
==================================================================================================*/
#include "Mcal.h"
#include "OsIf.h"

#include "Lpspi_Ip_PBcfg.h"

#include "S32K342_LPSPI.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LPSPI_IP_VENDOR_ID_CFG                       43
#define LPSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG        4
#define LPSPI_IP_AR_RELEASE_MINOR_VERSION_CFG        4
#define LPSPI_IP_AR_RELEASE_REVISION_VERSION_CFG     0
#define LPSPI_IP_SW_MAJOR_VERSION_CFG                2
#define LPSPI_IP_SW_MINOR_VERSION_CFG                0
#define LPSPI_IP_SW_PATCH_VERSION_CFG                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal header file are of the same Autosar version */
    #if ((LPSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LPSPI_IP_AR_RELEASE_MINOR_VERSION_CFG != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lpspi_Ip_Cfg.h and Mcal.h are different"
    #endif

    /* Check if current file and OsIf header file are of the same Autosar version */
    #if ((LPSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG != OSIF_AR_RELEASE_MAJOR_VERSION) || \
         (LPSPI_IP_AR_RELEASE_MINOR_VERSION_CFG != OSIF_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lpspi_Ip_Cfg.h and OsIf.h are different"
    #endif
#endif


/* Check if Lpspi_Ip_PBcfg header file and Spi configuration header file are of the same vendor */
#if (LPSPI_IP_VENDOR_ID_PBCFG != LPSPI_IP_VENDOR_ID_CFG)
    #error "Lpspi_Ip_PBcfg.h and Lpspi_Ip_Cfg.h have different vendor IDs"
#endif
    /* Check if Lpspi_Ip_PBcfg header file and Spi  configuration header file are of the same Autosar version */
#if ((LPSPI_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != LPSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (LPSPI_IP_AR_RELEASE_MINOR_VERSION_PBCFG != LPSPI_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (LPSPI_IP_AR_RELEASE_REVISION_VERSION_PBCFG != LPSPI_IP_AR_RELEASE_REVISION_VERSION_CFG))
#error "AutoSar Version Numbers of Lpspi_Ip_PBcfg.h and Lpspi_Ip_Cfg.h are different"
#endif
/* Check if Lpspi_Ip_PBcfg header file and Spi configuration header file are of the same software version */
#if ((LPSPI_IP_SW_MAJOR_VERSION_PBCFG != LPSPI_IP_SW_MAJOR_VERSION_CFG) || \
     (LPSPI_IP_SW_MINOR_VERSION_PBCFG != LPSPI_IP_SW_MINOR_VERSION_CFG) || \
     (LPSPI_IP_SW_PATCH_VERSION_PBCFG != LPSPI_IP_SW_PATCH_VERSION_CFG))
#error "Software Version Numbers of Lpspi_Ip_PBcfg.h and Lpspi_Ip_Cfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
#define LPSPI_IP_CONFIG_EXT \
 LPSPI_IP_CONFIG_PB


/** @brief Total number of SpiPhyUnit configured. */
#define LPSPI_IP_NUMBER_OF_INSTANCES           (1U)

/** @brief Number of FIFO entries supported */
#define LPSPI_IP_FIFO_SIZE_U8   ((uint8)4U)

/** @brief HWUnits enabled/disabled */

#define LPSPI_IP_0_ENABLED  (STD_ON)
    
#define LPSPI_IP_SLAVE_SUPPORT  ((STD_OFF))


/**
* @brief Defines if transfers are made using DMA or FIFO.
* @details Defines if transfers are made using DMA or FIFO.
*/
#define LPSPI_IP_DMA_USED     (STD_OFF)

/**
* @brief If enabled, allows dual MCU clock configuration settings.
* @details If enabled, allows dual MCU clock configuration settings.
*/
#define LPSPI_IP_DUAL_CLOCK_MODE  (STD_OFF)

/**
* @brief          Enable Dma Fast transfer support.
* @details        When SpiAutosarExt/SpiEnableDmaFastTransferSupport = TRUE,
*                 the SPI driver can be supported to transfer multiple Jobs, Channels and CPU used only for processing end of Sequence transfer.
*/
#define LPSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT   (STD_OFF)

/**
* @brief          Enable User Mode Support.
* @details        When SpiAutosarExt/SpiEnableUserModeSupport = TRUE,
*                 the SPI driver can be executed from both supervisor and user mode.
*
* @api
*/
#define LPSPI_IP_ENABLE_USER_MODE_SUPPORT   (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef LPSPI_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == LPSPI_IP_ENABLE_USER_MODE_SUPPORT)
   #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running  Spi in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* (STD_ON == LPSPI_IP_ENABLE_USER_MODE_SUPPORT) */
 #endif /* ifdef MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT*/

/**
* @brief SPI registers is controlled by REG_PROT IP.
*/
#define LPSPI_IP_REG_PROT_AVAILABLE   (STD_OFF)

#if (STD_ON == LPSPI_IP_REG_PROT_AVAILABLE)
/**
* @brief The protection size
*/
    #define LPSPI_IP_PROT_MEM_U32                           ((uint32)4U)
#endif

/**
* @brief Maximum of frame size supported.
*/
#define LPSPI_IP_FRAMESIZE_MAX_U8                              ((uint8)32U)

/**
* @brief Minimum of frame size supported.
*/
#define LPSPI_IP_FRAMESIZE_MIN_U8                              ((uint8)4U)

/**
* @brief Define Timeout Method.
* @details Define a certain timeout method from OsIf will be used in the driver.
*/
#define LPSPI_IP_TIMEOUT_METHOD           (OSIF_COUNTER_DUMMY)

/**
* @brief Switches ON or OFF for the detection and reporting of development errors(API parameter checking) at IP level.
*/
/** @implements LPSPI_IP_DEV_ERROR_DETECT_define  */
#define LPSPI_IP_DEV_ERROR_DETECT     (STD_OFF)

/**
* @brief Half duplex supported.
*/
/** @implements LPSPI_IP_HALF_DUPLEX_MODE_SUPPORT_define  */
#define LPSPI_IP_HALF_DUPLEX_MODE_SUPPORT     (STD_OFF)

/**
* @brief Defines the "Number of Loops" timeout.
* @details Defines the "Number of Loops" timeout used Spi_AsyncTransmitHalfDuplex in half duplex mode
*         during the wait on TX transmission to complete before start next channel that in receive mode or latest channel in job.
*        One timeout unit means that no TX or RX was executed(the IF statements are returning FALSE).
*/
#define LPSPI_IP_HALF_DUPLEX_TIMEOUT_COUNTER       ((uint32)(50000))

/*==================================================================================================
 *                                     DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/


/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif
#endif 

/** @} */
