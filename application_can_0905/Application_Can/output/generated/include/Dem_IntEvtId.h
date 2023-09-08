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
#ifndef DEM_INT_EVT_ID_H
#define DEM_INT_EVT_ID_H

/* This file contains the configuration declarations of the
 * SW-C Event ID symbols for AUTOSAR module Dem. */



/*==================[inclusions]============================================*/

/*==================[macros]================================================*/

/*------------------[Events configuration]----------------------------------*/

/* !LINKSTO Dem115,2 */
/* Symbolic names of configured SW-C event IDs */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_DTC_0x000001_Event != 1U)
#error Definition of macro DemConf_DemEventParameter_DTC_0x000001_Event does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_DTC_0x000001_Event)
#error Dem_DTC_0x000001_Event already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_DTC_0x000001_Event              1U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_Permanent_DTC != 2U)
#error Definition of macro DemConf_DemEventParameter_Permanent_DTC does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_Permanent_DTC)
#error Dem_Permanent_DTC already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_Permanent_DTC                   2U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_DTC_0x000002_Event != 10U)
#error Definition of macro DemConf_DemEventParameter_DTC_0x000002_Event does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_DTC_0x000002_Event)
#error Dem_DTC_0x000002_Event already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_DTC_0x000002_Event              10U
#endif /* defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* Following macro is generated by the RTE to identify if it is in synch with the current DEM configuration.
* Furthermore, the macro is not only intended for the usage via an RTE interface but also via a c API. */
#if (DemConf_DemEventParameter_USER_DEFINE_MEMORY_Event != 11U)
#error Definition of macro DemConf_DemEventParameter_USER_DEFINE_MEMORY_Event does not match to the DEM configuration due to RTE and DEM are out of synch. Please update the RTE based on the newest DEM BSWMD file!
#endif
#if (defined DEM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dem_USER_DEFINE_MEMORY_Event)
#error Dem_USER_DEFINE_MEMORY_Event already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) **/
#define Dem_USER_DEFINE_MEMORY_Event        11U
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

#endif /* ifndef DEM_INT_EVT_ID_H */
/*==================[end of file]===========================================*/
