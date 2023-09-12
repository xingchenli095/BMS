/**
 * \file
 *
 * \brief AUTOSAR Dem
 *
 * This file contains the implementation of the AUTOSAR
 * module Dem.
 *
 * \version 6.4.5
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef DEM_INT_ERR_ID_H
#define DEM_INT_ERR_ID_H

/* This file contains the configuration declarations of the
 * BSW and SEV Event ID symbols for AUTOSAR module Dem. */



/*==================[inclusions]============================================*/

/*==================[macros]================================================*/

/*------------------[Events configuration]----------------------------------*/

/* !LINKSTO Dem115,2 */
/* Symbolic names of configured BSW and SEV event IDs */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_CANSM_E_BUS_OFF_0 != 3U)
#error Definition of macro DemConf_DemEventParameter_CANSM_E_BUS_OFF_0 does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_CANSM_E_BUS_OFF_0)
#error Dem_CANSM_E_BUS_OFF_0 already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_CANSM_E_BUS_OFF_0               3U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_WDGM_E_MONITORING != 4U)
#error Definition of macro DemConf_DemEventParameter_WDGM_E_MONITORING does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_WDGM_E_MONITORING)
#error Dem_WDGM_E_MONITORING already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_WDGM_E_MONITORING               4U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_WDGM_E_SET_MODE != 5U)
#error Definition of macro DemConf_DemEventParameter_WDGM_E_SET_MODE does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_WDGM_E_SET_MODE)
#error Dem_WDGM_E_SET_MODE already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_WDGM_E_SET_MODE                 5U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_WDGM_E_DATA_CORRUPTION != 6U)
#error Definition of macro DemConf_DemEventParameter_WDGM_E_DATA_CORRUPTION does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_WDGM_E_DATA_CORRUPTION)
#error Dem_WDGM_E_DATA_CORRUPTION already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_WDGM_E_DATA_CORRUPTION          6U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_ECUM_E_RAM_CHECK_FAILED != 7U)
#error Definition of macro DemConf_DemEventParameter_ECUM_E_RAM_CHECK_FAILED does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_ECUM_E_RAM_CHECK_FAILED)
#error Dem_ECUM_E_RAM_CHECK_FAILED already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_ECUM_E_RAM_CHECK_FAILED         7U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_MCU_E_CLOCK_FAILURE != 8U)
#error Definition of macro DemConf_DemEventParameter_MCU_E_CLOCK_FAILURE does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_MCU_E_CLOCK_FAILURE)
#error Dem_MCU_E_CLOCK_FAILURE already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_MCU_E_CLOCK_FAILURE             8U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_WDGM_E_MF_TIMINGVIOLATION != 9U)
#error Definition of macro DemConf_DemEventParameter_WDGM_E_MF_TIMINGVIOLATION does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_WDGM_E_MF_TIMINGVIOLATION)
#error Dem_WDGM_E_MF_TIMINGVIOLATION already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_WDGM_E_MF_TIMINGVIOLATION       9U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_MCU_E_TIMEOUT_FAILURE != 12U)
#error Definition of macro DemConf_DemEventParameter_MCU_E_TIMEOUT_FAILURE does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_MCU_E_TIMEOUT_FAILURE)
#error Dem_MCU_E_TIMEOUT_FAILURE already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_MCU_E_TIMEOUT_FAILURE           12U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_MCU_E_INVALIDFXOSC_CONFIG != 13U)
#error Definition of macro DemConf_DemEventParameter_MCU_E_INVALIDFXOSC_CONFIG does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_MCU_E_INVALIDFXOSC_CONFIG)
#error Dem_MCU_E_INVALIDFXOSC_CONFIG already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_MCU_E_INVALIDFXOSC_CONFIG       13U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_MCU_E_CLOCKMUXSWITCH_FAILURE != 14U)
#error Definition of macro DemConf_DemEventParameter_MCU_E_CLOCKMUXSWITCH_FAILURE does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_MCU_E_CLOCKMUXSWITCH_FAILURE)
#error Dem_MCU_E_CLOCKMUXSWITCH_FAILURE already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_MCU_E_CLOCKMUXSWITCH_FAILURE    14U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_SPI_E_HARDWARE_ERROR != 15U)
#error Definition of macro DemConf_DemEventParameter_SPI_E_HARDWARE_ERROR does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_SPI_E_HARDWARE_ERROR)
#error Dem_SPI_E_HARDWARE_ERROR already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_SPI_E_HARDWARE_ERROR            15U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef DEM_INT_ERR_ID_H */
/*==================[end of file]===========================================*/
