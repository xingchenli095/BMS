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

/* This file contains all definitions of the configuration of the AUTOSAR
 * module Dem that are target independent. */

/* MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 11.1 (required)
 *     Conversions shall not be performed between a pointer to a function and
 *     any other type.
 *
 *     Reason:
 *     In order to save memory, the function pointers necessary for Read Callbacks are generated
 *     as an array of unions (union type which contains all such possible function pointers),
 *     instead of an array of structures containing all possible pointer types.
 *     The array containing the function pointers is initialized using brace-enclosed initializer
 *     list and C90 standard allow only the initialization of the first union member.
 *     The solution is to use a "generic function pointer" and use that type to define the array,
 *     and use explicit casts for each initialized member.
 *     Casting one function pointer type to the general type at initialization and then back again
 *     to the original type is guaranteed to preserve the correct data.
 */



/*==================[inclusions]============================================*/
/* !LINKSTO dsn.Dem.IncludeStr,1 */

#include <TSAutosar.h>                    /* EB specific standard types */
#include <Std_Types.h>                    /* AUTOSAR standard types */
#include <Dem_Int.h>                      /* API and internal declarations,
                                           * dependent and static part */
/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

CONST(Dem_ConfigType, DEM_CONST) DemConfigSet = {0U};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>


/*------------------[PID class configuration]---------------------------------*/
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/* !LINKSTO dsn.Dem.OBD.DemPidDataElementIdxOf,1 */
/** \brief Indexes of data elements contained in PID_1 */
STATIC CONST(Dem_OBDFFDataElementIdxType, DEM_CONST)
  Dem_PidDataElementIdxOf_PID_1[1] =
{
  1U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

/* !LINKSTO dsn.Dem.OBD.Dem_PidDataElementOffsetOf,1 */
/** \brief Start-bytes of data elements in PIDs PID_1 */
STATIC CONST(Dem_OBDFFDataElementOffsetType, DEM_CONST)
  Dem_PidDataElementOffsetOf_PID_1[1] =
{
  0U,/* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

/* !LINKSTO dsn.Dem.OBD.Dem_PidDataElementSizesOf,1 */
/** \brief Size of data elements in PIDs PID_1 */
STATIC CONST(uint8, DEM_CONST)
  Dem_PidDataElementSizesOf_PID_1[1] =
{
  7U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/* !LINKSTO dsn.Dem.OBD.DemPidDataElementIdxOf,1 */
/** \brief Indexes of data elements contained in PID_2 */
STATIC CONST(Dem_OBDFFDataElementIdxType, DEM_CONST)
  Dem_PidDataElementIdxOf_PID_2[4] =
{
  1U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  1U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  1U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  1U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

/* !LINKSTO dsn.Dem.OBD.Dem_PidDataElementOffsetOf,1 */
/** \brief Start-bytes of data elements in PIDs PID_2 */
STATIC CONST(Dem_OBDFFDataElementOffsetType, DEM_CONST)
  Dem_PidDataElementOffsetOf_PID_2[4] =
{
  0U,/* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  7U,/* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  14U,/* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  21U,/* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

/* !LINKSTO dsn.Dem.OBD.Dem_PidDataElementSizesOf,1 */
/** \brief Size of data elements in PIDs PID_2 */
STATIC CONST(uint8, DEM_CONST)
  Dem_PidDataElementSizesOf_PID_2[4] =
{
  7U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  7U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  7U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  7U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>

#define DEM_START_SEC_CALIB_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief OBD freeze frame segments (PIDs) */
/* !LINKSTO dsn.Dem.OBD.PidClass,1 */
/* !LINKSTO Dem.ASR431.SWS_Dem_00597,1 */
/* !LINKSTO Dem733_Conf,1 */
CONST(Dem_PidClassType, DEM_CONST) Dem_PidClass[DEM_NUM_OF_PIDS_IN_OBDFF] =
{
  /* PID_1 */
  {
    Dem_PidDataElementOffsetOf_PID_1,
    Dem_PidDataElementSizesOf_PID_1,
    Dem_PidDataElementIdxOf_PID_1,
    7U,  /* Size of PID in OBD FF in byte */
    1U,  /* Number of data elements in PID */
    DEM_OBDFF_PID_PID_1,  /* PID */
  },
  /* PID_2 */
  {
    Dem_PidDataElementOffsetOf_PID_2,
    Dem_PidDataElementSizesOf_PID_2,
    Dem_PidDataElementIdxOf_PID_2,
    28U,  /* Size of PID in OBD FF in byte */
    4U,  /* Number of data elements in PID */
    DEM_OBDFF_PID_PID_2,  /* PID */
  },
};

#define DEM_STOP_SEC_CALIB_UNSPECIFIED
#include <Dem_MemMap.h>

/*------------------[Freeze frame classes configuration]--------------------*/
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Indexes of element on freeze frame data segment
** DemDidClass_ActiveDiagnosticInformation
**/
STATIC CONST(Dem_DataElementIdxType, DEM_CONST)
  Dem_DataElementIdxDemDidClass_ActiveDiagnosticInformation[1] =
{
  0U, /* DemExternalCSDataElementClass_Session */
};

/** \brief Start-bytes of element on freeze frame data segment
** DemDidClass_ActiveDiagnosticInformation
**/
STATIC CONST(Dem_DataElementOffsetType, DEM_CONST)
  Dem_DataElementOffsetDemDidClass_ActiveDiagnosticInformation[1] =
{
  0U, /* DemExternalCSDataElementClass_Session */
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Freeze frame segments (DIDs) */
CONST(Dem_FFSegmentType, DEM_CONST)
Dem_FFSegment[DEM_NUM_FFSEGS] =
{
  /* DemDidClass_ActiveDiagnosticInformation */
  {
    Dem_DataElementIdxDemDidClass_ActiveDiagnosticInformation,
    Dem_DataElementOffsetDemDidClass_ActiveDiagnosticInformation,
    DEM_FFS_DID_DemDidClass_ActiveDiagnosticInformation,
    1U
  },
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#define DEM_START_SEC_CALIB_16
#include <Dem_MemMap.h>

/* !LINKSTO Dem.Dem_FFSegId.Access,1 */

/*---[Freeze frame class DiagnosticFreezeFrameClass_0]---*/

/** \brief Indexes of segments on freeze frame class
** DiagnosticFreezeFrameClass_0 to ::Dem_FFSegment[]
**/
DEM_STATIC CONST(Dem_FFSegIdxType, DEM_CONST)
Dem_FFSegIdxDiagnosticFreezeFrameClass_0[1] =
{
  0U, /* DemDidClass_ActiveDiagnosticInformation */
};

#define DEM_STOP_SEC_CALIB_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Array containing all freeze frame classes */
CONST(Dem_FFClassType, DEM_CONST)
Dem_FFClass[DEM_NUM_FFCLS] =
{
  {
    Dem_FFSegIdxDiagnosticFreezeFrameClass_0,
    1U /* number of segments */
  },
  {
    NULL_PTR,
    0U
  }
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/*------------------[Freeze frame record number classes configuration]------*/
#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

/** \brief Freeze frame record numbers for
** DiagnosticFrezeFrameRecNumClass_0
**/
STATIC CONST(Dem_FFIdxType, DEM_CONST)
  Dem_FFRecNumClassDiagnosticFrezeFrameRecNumClass_0[2] =
{
  0x10U,
  0x20U,
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Array containing all freeze frame record number classes */
CONST(Dem_FFRecNumerationClassType, DEM_CONST)
  Dem_FFRecNumerationClass[DEM_NUM_FFRECNUMCLS] =
{
  {
    Dem_FFRecNumClassDiagnosticFrezeFrameRecNumClass_0,
/* number of freeze frame records */
    2U
  },
  {
    NULL_PTR,
    0U /* number of freeze frame records */
  }
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/*------------------[Extended data classes configuration]-------------------*/
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Indexes of element on extended data segment
** StandardEnvironmentData
**/
STATIC CONST(Dem_DataElementIdxType, DEM_CONST)
  Dem_DataElementIdxStandardEnvironmentData[1] =
{
  1U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

/** \brief Start-bytes of element on extended data segment
** StandardEnvironmentData
**/
STATIC CONST(Dem_DataElementOffsetType, DEM_CONST)
  Dem_DataElementOffsetStandardEnvironmentData[1] =
{
  0U, /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Extended data segments (Records) */
CONST(Dem_EDSegmentType, DEM_CONST) Dem_EDSegment[DEM_NUM_EDSEGS] =
{
  /* StandardEnvironmentData */
  {
    Dem_DataElementIdxStandardEnvironmentData,
    Dem_DataElementOffsetStandardEnvironmentData,
    1U,
    DEM_EDS_NUM_StandardEnvironmentData,
    TRUE,
    FALSE, /* always available */
  },
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

/*---[Extended data class ED_DTC_0x000001_Properties]---*/

/** \brief Indexes of segments on extended data class
** ED_DTC_0x000001_Properties to ::Dem_EDSegment[]
**/
STATIC CONST(Dem_EDSegIdxType, DEM_CONST)
Dem_EDSegIdxED_DTC_0x000001_Properties[1] =
{
  0U, /* StandardEnvironmentData */
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Start-bytes of segments on extended data class
** ED_DTC_0x000001_Properties
**/
STATIC CONST(Dem_EDStartByteType, DEM_CONST)
  Dem_EDStartByteED_DTC_0x000001_Properties[1] =
{
  0U, /* StandardEnvironmentData */
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Array containing all extended data classes */
CONST(Dem_EDClassType, DEM_CONST)
Dem_EDClass[DEM_NUM_EDCLS] =
{
  {
    Dem_EDSegIdxED_DTC_0x000001_Properties,
    Dem_EDStartByteED_DTC_0x000001_Properties,
    1U /* number of segments */
  },
  {
    NULL_PTR,
    NULL_PTR,
    0U
  }
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/*------------------[Data element classes configuration]--------------------*/

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Array containing all external data elements */
CONST(Dem_DataElementType, DEM_CONST)
Dem_DataElement[DEM_NUM_EXT_DATAELEMENTS] =
{
  /* elements are sorted for optimization reasons presented in design */
  /* DemExternalCSDataElementClass_Session */
  {
    /* Deviation MISRAC2012-1 */
    {(Dem_GeneralFuncType)&Rte_Call_CBReadData_DemExternalCSDataElementClass_Session_ReadData},
    1U,
    DEM_READ_DATA_CS_PROTOTYPE_BASIC,
  },
  /* DemExternalCSDataElementClass_ExtDataRec_0x01 */
  {
    /* Deviation MISRAC2012-1 */
    {(Dem_GeneralFuncType)&Rte_Call_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData},
    7U,
    DEM_READ_DATA_CS_PROTOTYPE_BASIC,
  },
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/*------------------[DTC groups configuration]------------------------------*/

#define DEM_START_SEC_CONST_32
#include <Dem_MemMap.h>
/** \brief Array containing the DTC group values */
CONST(Dem_DTCGroupType, DEM_CONST) Dem_DTCGroups[DEM_NUM_DTC_GROUPS] =
{
    DemConf_DemGroupOfDTC_DEM_DTC_GROUP_CHASSIS_DTCS,
  DemConf_DemGroupOfDTC_DEM_DTC_GROUP_BODY_DTCS,
  DemConf_DemGroupOfDTC_DEM_DTC_GROUP_NETWORK_COM_DTCS,
  DemConf_DemGroupOfDTC_DEM_DTC_GROUP_POWERTRAIN_DTCS,
};

#define DEM_STOP_SEC_CONST_32
#include <Dem_MemMap.h>

/*------------------[Events Class configuration]----------------------------*/

#define DEM_START_SEC_CALIB_UNSPECIFIED
#include <Dem_MemMap.h>


/** \brief EventClass configuration description table */
CONST(Dem_EventClassDescType, DEM_CONST) Dem_EventClassDesc[DEM_NUMBER_OF_EVENT_CLASSES] =
{
  /* Event Class 0 */
  {
    DEM_INDICATOR_UNUSED,
    /* DemAgingCycleCounterThreshold (if 0 DemAgingAllowed == 'false')*/
    100U,
    /* DemEventFailureCycleCounterThreshold (0 if disabled')*/
    1U,
    /* Event priority (0 = most important) */
    1U,
    /* Operation cycle*/
    DEM_OPCYC_POWER,
    /* Bitfield for boolean values
     *   bit 0: DemMinRatio
     *   bit 1: DemFreezeFrameUpdate (always true, for calibration use only)
     */
    ((uint8)0U)
    | ((uint8)(DEM_FFUPDATEEVENTCLASS_MASK & 1U) << DEM_FFUPDATEEVENTCLASS_OFFSET),
    /* enable condition group */
    0U
  },
  /* Event Class 1 */
  {
    0U,
    /* DemAgingCycleCounterThreshold (if 0 DemAgingAllowed == 'false')*/
    0U,
    /* DemEventFailureCycleCounterThreshold (0 if disabled')*/
    0U,
    /* Event priority (0 = most important) */
    0U,
    /* Operation cycle*/
    DEM_OPCYC_OBD_DCY,
    /* Bitfield for boolean values
     *   bit 0: DemMinRatio
     *   bit 1: DemFreezeFrameUpdate (always true, for calibration use only)
     */
    ((uint8)0U)
    | ((uint8)(DEM_FFUPDATEEVENTCLASS_MASK & 1U) << DEM_FFUPDATEEVENTCLASS_OFFSET),
    /* enable condition group */
    DEM_ENCONDITIONGROUP_UNUSED
  },
  /* Event Class 2 */
  {
    DEM_INDICATOR_UNUSED,
    /* DemAgingCycleCounterThreshold (if 0 DemAgingAllowed == 'false')*/
    0U,
    /* DemEventFailureCycleCounterThreshold (0 if disabled')*/
    0U,
    /* Event priority (0 = most important) */
    0U,
    /* Operation cycle*/
    DEM_OPCYC_IGNITION,
    /* Bitfield for boolean values
     *   bit 0: DemMinRatio
     *   bit 1: DemFreezeFrameUpdate (always true, for calibration use only)
     */
    ((uint8)0U)
    | ((uint8)(DEM_FFUPDATEEVENTCLASS_MASK & 1U) << DEM_FFUPDATEEVENTCLASS_OFFSET),
    /* enable condition group */
    DEM_ENCONDITIONGROUP_UNUSED
  },
};

#define DEM_STOP_SEC_CALIB_UNSPECIFIED
#include <Dem_MemMap.h>

/*------------------[Events configuration]----------------------------------*/

#define DEM_START_SEC_CALIB_32
#include <Dem_MemMap.h>

/** \brief Event configuration description table (uses 'bit packing scheme) */
CONST(Dem_EventDescType, DEM_CONST) Dem_EventDesc[DEM_NUMBER_OF_EVENTS] =
{
  { 0U, 0U, 0U },                                 /* invalid event id entry */
  { /* event: DTC_0x000001_Event */
    /* UDS-DTC value */
    0x000001U
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* Severity of DTC: corresponds to DEM_SEVERITY_NO_SEVERITY */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is SWC */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_SWC) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* Freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_IDX_DiagnosticFreezeFrameClass_0) << DEM_FFCLASSIDX_OFFSET)
    /* Index of freeze frame record numeration class */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_IDX_DiagnosticFrezeFrameRecNumClass_0) << DEM_FFRECINFO_OFFSET )
    /* Extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_IDX_ED_DTC_0x000001_Properties) << DEM_EDCLASSIDX_OFFSET )
    /* Group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_ALL_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 0U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Index of failure class configuration */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & 0U) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Counter based event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_COUNTERBASED) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index of debouncing configuration/status */
    | ( (uint32)(DEM_DEBOUNCEIDX_MASK & 0U) << DEM_DEBOUNCEIDX_OFFSET )
    /* DTC Functional Unit */
    | ( (uint32)(DEM_DTCFUNCTIONALUNIT_MASK & 0U) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: Permanent_DTC */
    /* UDS-DTC value */
    0x000007U
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is SWC */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_SWC) << DEM_EVENTKIND_OFFSET )
    /* Warning indicator used */
    | ( (uint32)(DEM_INDICATORUSED_MASK & 1U) << DEM_INDICATORUSED_OFFSET )
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* Freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_IDX_DiagnosticFreezeFrameClass_0) << DEM_FFCLASSIDX_OFFSET)
    /* Index of freeze frame record numeration class */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_IDX_DiagnosticFrezeFrameRecNumClass_0) << DEM_FFRECINFO_OFFSET )
    /* Extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_IDX_ED_DTC_0x000001_Properties) << DEM_EDCLASSIDX_OFFSET )
    /* Group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_BODY_DTCS) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 1U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* DTC Functional Unit */
    | ( (uint32)(DEM_DTCFUNCTIONALUNIT_MASK & 0U) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: WDGM_E_MONITORING */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: WDGM_E_SET_MODE */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: WDGM_E_DATA_CORRUPTION */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: ECUM_E_RAM_CHECK_FAILED */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: MCU_E_CLOCK_FAILURE */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: WDGM_E_MF_TIMINGVIOLATION */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: DTC_0x000002_Event */
    /* UDS-DTC value */
    0x000005U
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is SWC */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_SWC) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* Freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_IDX_DiagnosticFreezeFrameClass_0) << DEM_FFCLASSIDX_OFFSET)
    /* Index of freeze frame record numeration class */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_IDX_DiagnosticFrezeFrameRecNumClass_0) << DEM_FFRECINFO_OFFSET )
    /* Extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_IDX_ED_DTC_0x000001_Properties) << DEM_EDCLASSIDX_OFFSET )
    /* Group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_CHASSIS_DTCS) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 0U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Index of failure class configuration */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & 0U) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Counter based event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_COUNTERBASED) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index of debouncing configuration/status */
    | ( (uint32)(DEM_DEBOUNCEIDX_MASK & 1U) << DEM_DEBOUNCEIDX_OFFSET )
    /* DTC Functional Unit */
    | ( (uint32)(DEM_DTCFUNCTIONALUNIT_MASK & 0U) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: USER_DEFINE_MEMORY_Event */
    /* UDS-DTC value */
    0x000010U
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_SECONDARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is SWC */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_SWC) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage enabled */
    | ( (uint32)(DEM_IMMEDIATESTORAGE_MASK & 1U) << DEM_IMMEDIATESTORAGE_OFFSET )
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* Freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_IDX_DiagnosticFreezeFrameClass_0) << DEM_FFCLASSIDX_OFFSET)
    /* Index of freeze frame record numeration class */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_IDX_DiagnosticFrezeFrameRecNumClass_0) << DEM_FFRECINFO_OFFSET )
    /* Extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_IDX_ED_DTC_0x000001_Properties) << DEM_EDCLASSIDX_OFFSET )
    /* Group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_POWERTRAIN_DTCS) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 0U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Index of failure class configuration */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & 0U) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Counter based event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_COUNTERBASED) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index of debouncing configuration/status */
    | ( (uint32)(DEM_DEBOUNCEIDX_MASK & 2U) << DEM_DEBOUNCEIDX_OFFSET )
    /* DTC Functional Unit */
    | ( (uint32)(DEM_DTCFUNCTIONALUNIT_MASK & 0U) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: MCU_E_TIMEOUT_FAILURE */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: MCU_E_INVALIDFXOSC_CONFIG */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: MCU_E_CLOCKMUXSWITCH_FAILURE */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: SPI_E_HARDWARE_ERROR */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Monitor internal event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_MONITOR) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index not used */
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
  { /* event: CANSM_E_BUS_OFF_0 */
    /* No UDS-DTC value */
    ( (uint32)(DEM_NO_DTC) )
    /* Origin of DTC */
    | ( (uint32) (DEM_DTCORIGIN_MASK & (DEM_DTC_ORIGIN_PRIMARY_MEMORY - 1U)) << DEM_DTCORIGIN_OFFSET )
    /* No severity specified for DTC */
    | ( (uint32)(DEM_DTCSEVERITY_MASK & 0U) << DEM_DTCSEVERITY_OFFSET )
    /* Prestorage disabled */
    /* Event kind is BSW */
    | ( (uint32)(DEM_EVENTKIND_MASK & DEM_EVENT_KIND_BSW) << DEM_EVENTKIND_OFFSET )
    /* No warning indicator used */
    /* Immediate storage disabled */
    ,
    /* DTC Significance */
    ( (uint32)(DEM_EVENTSIGNIFICANCE_MASK & DEM_EVENT_SIGNIFICANCE_FAULT) << DEM_EVENTSIGNIFICANCE_OFFSET )
    /* No freeze frame class */
    | ( (uint32)(DEM_FFCLASSIDX_MASK & DEM_FFCLS_NULL_IDX) << DEM_FFCLASSIDX_OFFSET )
    /* No freeze frame records */
    | ( (uint32)(DEM_FFRECINFO_MASK & DEM_FFRECNUMCLS_NULL) << DEM_FFRECINFO_OFFSET )
    /* No extended data class */
    | ( (uint32)(DEM_EDCLASSIDX_MASK & DEM_EDCLS_NULL_IDX) << DEM_EDCLASSIDX_OFFSET )
    /* No group of DTC */
    | ( (uint32)(DEM_DTCGROUP_MASK & DEM_DTCGRP_IDX_NO_DTC) << DEM_DTCGROUP_OFFSET )
    /* Event Class Description Index */
    | ( (uint32)(DEM_EVENTCLASSDESCIDX_MASK & 2U) << DEM_EVENTCLASSDESCIDX_OFFSET )
    ,
    /* calibration support enabled, enable condition group located in Dem_EventClassDesc */
    /* Fault confirmation not configured */
    ( (uint32)(DEM_EVENTFAILURECLASSIDX_MASK & DEM_NO_FAULT_CONFIRMATION) << DEM_EVENTFAILURECLASSIDX_OFFSET )
    /* Counter based event debouncing */
    | ( (uint32)(DEM_DEBOUNCEALGO_MASK & DEM_DEBOUNCE_COUNTERBASED) << DEM_DEBOUNCEALGO_OFFSET )
    /* Index of debouncing configuration/status */
    | ( (uint32)(DEM_DEBOUNCEIDX_MASK & 3U) << DEM_DEBOUNCEIDX_OFFSET )
    /* No DTC Functional Unit */
    | ( (DEM_DTCFUNCTIONALUNIT_MASK & DEM_NO_DTC_FUNCTIONAL_UNIT) << DEM_DTCFUNCTIONALUNIT_OFFSET )
    /* No aging cycle Id */
    | ( (uint32)(DEM_AGINGCYCLEIDX_MASK & DEM_NUM_AGINGCYCLES) << DEM_AGINGCYCLEIDX_OFFSET )
  },
};

#define DEM_STOP_SEC_CALIB_32
#include <Dem_MemMap.h>


#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

CONST(Dem_PriorityType, DEM_CONST) Dem_ExternalPrioValue[DEM_NUM_EVENT_PRIORITIES] =
{
  (uint8)1U,
  (uint8)2U,
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>


#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>
#if (DEM_STATUS_BIT_STORAGE_TF_PER_EVENT_SUPPORT == STD_ON)
/** \brief Generate the const array Dem_StatusBitStorageTF[],
 ** only if not all configured events do have the same
 ** DemStatusBitStorageTestFailedPerEvent value. */
CONST(uint8, DEM_CONST) Dem_StatusBitStorageTF[DEM_STATUS_BIT_STORAGE_TF_ARRAY_SIZE] =
{
  0x00U,
  0x00U,
};
#endif

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>



#define DEM_START_SEC_CALIB_16
#include <Dem_MemMap.h>

/** \brief OBD specific event configuration description table
 * (partially uses 'bit packing scheme) */
/* !LINKSTO dsn.Dem_OBD_0018,2 */
/* !LINKSTO dsn.Dem.OBD.config.0001,2 */
CONST(Dem_OBDConfigType, DEM_CONST) Dem_OBDConfig[DEM_NUMBER_OF_EVENTS] =
{
  { 0U, 0U },                                     /* invalid event id entry */
  { /* DTC_0x000001_Event */
    0x0003U, /* OBD-DTC value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* Permanent_DTC */
    0x0009U, /* OBD-DTC value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* WDGM_E_MONITORING */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* WDGM_E_SET_MODE */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* WDGM_E_DATA_CORRUPTION */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* ECUM_E_RAM_CHECK_FAILED */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* MCU_E_CLOCK_FAILURE */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* WDGM_E_MF_TIMINGVIOLATION */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* DTC_0x000002_Event */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* USER_DEFINE_MEMORY_Event */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* MCU_E_TIMEOUT_FAILURE */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* MCU_E_INVALIDFXOSC_CONFIG */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* MCU_E_CLOCKMUXSWITCH_FAILURE */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* SPI_E_HARDWARE_ERROR */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
  { /* CANSM_E_BUS_OFF_0 */
    (uint16)(DEM_NO_DTC), /* No OBD-DTC Value */
    0U /* Minimum Ratio Event is not set */
  },
};

#define DEM_STOP_SEC_CALIB_16
#include <Dem_MemMap.h>




#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>
CONST(Dem_EventOBDReadinessGroupType, DEM_CONST)
  Dem_OBDReadinessGroupMap[DEM_NUM_OBD_RDY_GROUPS] =
{
  /* OBD engine type unspecific */
  DEM_OBD_RDY_MISF,     /* DataB:0 */
  DEM_OBD_RDY_FLSYS,    /* DataB:1 */
  DEM_OBD_RDY_CMPRCMPT, /* DataB:2 */
  DEM_OBD_RDY_EGR,      /* DataC:7 */
  DEM_OBD_RDY_FLSYS_NONCONT,

  /* OBD engine type specific: 'compression' */
  DEM_OBD_RDY_HCCAT,    /* DataC:0 */
  DEM_OBD_RDY_NOXCAT,   /* DataC:1 */
  DEM_OBD_RDY_NONE,     /* unused */
  DEM_OBD_RDY_BOOSTPR,  /* DataC:3 */
  DEM_OBD_RDY_EGSENS,   /* DataC:5 */
  DEM_OBD_RDY_PMFLT,    /* DataC:6 */
  DEM_OBD_RDY_NONE,     /* unused */
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>

#define DEM_START_SEC_CALIB_16
#include <Dem_MemMap.h>

CONST(Dem_EventIdType, DEM_CONST)
  Dem_OBDReadinessGroup[DEM_NUM_OBD_RDY_GROUPS][DEM_MAX_EVENTS_PER_READINESS_GROUP] =
  {
    /* DEM_OBD_RDY_MISF */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_FLSYS */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_CMPRCMPT */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_EGR */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_FLSYS_NONCONT */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_HCCAT */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_NOXCAT */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* UNUSED */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_BOOSTPR */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_EGSENS */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* DEM_OBD_RDY_PMFLT */
    {
      DEM_EVENT_ID_INVALID,
    },
    /* UNUSED */
    {
      DEM_EVENT_ID_INVALID,
    },
  };

#define DEM_STOP_SEC_CALIB_16
#include <Dem_MemMap.h>



/*------------------[Enable conditions configuration]-----------------------*/

#define DEM_START_SEC_VAR_INIT_8
#include <Dem_MemMap.h>

/** \brief Enable condition status */
VAR(boolean, DEM_VAR) Dem_EnCondStatus[DEM_NUM_ENABLECONDITIONS] =
{
  TRUE,  /* condition name: DEM_SL_ECU_LEVEL */
};

/** \brief Enable condition group status counter array,
 **   holds the status counters per enable condition group, that counts how
 **   many enable conditions, that are linked to the dedicated condition
 **   group are enabled/disabled. (max. 256 conditions per group) */
VAR(Dem_EnCondGrpStatusCounterType, DEM_VAR)
  Dem_EnCondGrpStatusCounter[DEM_NUM_ENCONDGROUPS + 1U] =
{
  0U, /* group counter: DTC_0x000001_EnableConditionGroup */
  0U  /* Dummy entry for internal processing */
};
#define DEM_STOP_SEC_VAR_INIT_8
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Enable condition link array,
 ** holds the start indexes of Dem_EnCondGrpLink[] */
CONST(Dem_EnCondLnkType, DEM_CONST) Dem_EnCondToEvIdLink[DEM_NUM_ENABLECONDITIONS + 1U] =
{
  0U, /* start index, DEM_SL_ECU_LEVEL */
  1U, /* dummy entry, for internal processing */
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

/** \brief Enable condition group status counter link array,
 ** holds the indexes of Dem_EnCondGrpStatusCounter[]. One enable condition
 ** can refer to several condition group status counters. */
CONST(Dem_EnCondGrpType, DEM_CONST)
  Dem_EnCondGrpLink[DEM_NUM_ENCONDGRP_LINKS] =
{
  0U, /* group: DTC_0x000001_EnableConditionGroup, condition: DEM_SL_ECU_LEVEL */
};

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>

/*------------------[Multi event triggering configuration]------------------*/


/*------------------[Warning indicators configuration]----------------------*/

/* Indicator class index:
 * DTC_0x000001_Event: -
 * Permanent_DTC: 0
 * WDGM_E_MONITORING: -
 * WDGM_E_SET_MODE: -
 * WDGM_E_DATA_CORRUPTION: -
 * ECUM_E_RAM_CHECK_FAILED: -
 * MCU_E_CLOCK_FAILURE: -
 * WDGM_E_MF_TIMINGVIOLATION: -
 * DTC_0x000002_Event: -
 * USER_DEFINE_MEMORY_Event: -
 * MCU_E_TIMEOUT_FAILURE: -
 * MCU_E_INVALIDFXOSC_CONFIG: -
 * MCU_E_CLOCKMUXSWITCH_FAILURE: -
 * SPI_E_HARDWARE_ERROR: -
 * CANSM_E_BUS_OFF_0: -
 */
#if (DEM_NUM_INDICATOR_LINKS > 0U)
#define DEM_START_SEC_CALIB_8
#include <Dem_MemMap.h>

CONST(Dem_IndicatorClassType, DEM_CONST) Dem_IndicatorClasses[DEM_NUM_INDICATOR_LINKS] =
{
  /* Class 0 */
  {
    TRUE, /* Enabled */
    DemConf_DemIndicator_DEM_INDICATOR_0, /* Indicator Id */
    DEM_INDICATOR_CONTINUOUS,
    1U, /* Indicator Healing Cycle Counter Threshold */
    1U, /* Indicator Failure Cycle Counter Threshold */
    /* Flag indicates, whether DemIndicatorFailureCycleSource == DEM_FAILURE_CYCLE_EVENT */
    FALSE,
  },

};
#define DEM_STOP_SEC_CALIB_8
#include <Dem_MemMap.h>
#endif

#if (DEM_NUM_INDICATOR_GROUPS > 0U)
#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>
CONST(Dem_IndicatorIdxType, DEM_CONST) Dem_IndicatorGroups[DEM_NUM_INDICATOR_GROUPS] =
{
  0U,
  1U,
/* !LINKSTO VCC_DEM_006_Req115v1,1 */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#endif



/*------------------[Debouncing configuration]------------------------------*/

/** \brief Counter based debouncing configuration description table */
#define DEM_START_SEC_CALIB_16
#include <Dem_MemMap.h>

CONST(Dem_DebounceCounterClassType, DEM_CONST)
  Dem_DebounceCounterClass[DEM_NUM_DEBOUNCE_COUNTER_CLASSES] =
{
  { /* 0 */
    1U, /* DemDebounceCounterDecrementStepSize */
    1U, /* DemDebounceCounterIncrementStepSize */
    -128, /* DemDebounceCounterPassedThreshold */
    127, /* DemDebounceCounterFailedThreshold */
    0, /* DemDebounceCounterJumpDownValue */
    0, /* DemDebounceCounterJumpUpValue */
    DEM_DEBOUNCE_FREEZE, /* DemDebounceBehavior */
    TRUE, /* DemDebounceCounterJumpDown */
    FALSE, /* DemDebounceCounterJumpUp */
  },
  { /* 1 */
    1U, /* DemDebounceCounterDecrementStepSize */
    1U, /* DemDebounceCounterIncrementStepSize */
    -128, /* DemDebounceCounterPassedThreshold */
    1, /* DemDebounceCounterFailedThreshold */
    0, /* DemDebounceCounterJumpDownValue */
    0, /* DemDebounceCounterJumpUpValue */
    DEM_DEBOUNCE_FREEZE, /* DemDebounceBehavior */
    FALSE, /* DemDebounceCounterJumpDown */
    FALSE, /* DemDebounceCounterJumpUp */
  },
};

/** \brief Counter based debouncing class index table */
CONST(Dem_DebounceCounterClassIdxType, DEM_CONST)
  Dem_DebounceCounterClassIdx[DEM_NUM_DEBOUNCE_COUNTER] =
{
  0U, /* 1 */
  0U, /* 9 */
  0U, /* 10 */
  1U, /* 15 */
};

#define DEM_STOP_SEC_CALIB_16
#include <Dem_MemMap.h>

/** \brief Time based debouncing configuration description table */
/* !LINKSTO Dem.Calibration.DemTimeBasedDebounceClassConcept,1 */
/* none */

#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Time based debouncing configuration description table */
/* none */

/** \brief Frequency based debouncing configuration description table */
/* none */

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>

/*------------------[Fault confirmation configuration]----------------------*/

/* stored in event class */


/*------------------[ Event Availability ]------------------------*/

#define DEM_START_SEC_CALIB_8
#include <Dem_MemMap.h>

/** \brief Calibratable bit-field array that holds availability status (enabled/disabled)
 **        of all events
 ** Note: If an event is available, the corresponding bit is set to one. */
CONST(uint8, DEM_CONST) Dem_EventEnabled[DEM_EVENT_ENABLED_ARRAY_SIZE] =
{
  0xfeU,
  0xffU,
};

#define DEM_STOP_SEC_CALIB_8
#include <Dem_MemMap.h>

/*------------------[RTE / C-callback notifications]------------------------*/

#define DEM_START_SEC_CONST_8
#include <Dem_MemMap.h>

/** \brief Event callback property table */
CONST(Dem_CbPropertyType, DEM_CONST) Dem_CbProperty[DEM_NUMBER_OF_EVENTS] =
{
  0U,
  /* invalid event id entry */
  /* event: DTC_0x000001_Event */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* DEM-internal fault detection counter */
  DEM_ZERO_END,
  /* event: Permanent_DTC */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: WDGM_E_MONITORING */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: WDGM_E_SET_MODE */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: WDGM_E_DATA_CORRUPTION */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: ECUM_E_RAM_CHECK_FAILED */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: MCU_E_CLOCK_FAILURE */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: WDGM_E_MF_TIMINGVIOLATION */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: DTC_0x000002_Event */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* DEM-internal fault detection counter */
  DEM_ZERO_END,
  /* event: USER_DEFINE_MEMORY_Event */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* DEM-internal fault detection counter */
  DEM_ZERO_END,
  /* event: MCU_E_TIMEOUT_FAILURE */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: MCU_E_INVALIDFXOSC_CONFIG */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: MCU_E_CLOCKMUXSWITCH_FAILURE */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: SPI_E_HARDWARE_ERROR */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* no fault detection counter callback */
  DEM_ZERO_END,
  /* event: CANSM_E_BUS_OFF_0 */
  /* no init monitor callback */
  /* no trigger on event status callback(s) */
  /* no trigger on event data changed callback */
  /* no clearEventAllowed callback */
  /* DEM-internal fault detection counter */
  DEM_ZERO_END,
};
/*---------------[Operation cycle automatic end enabled masks]-------------*/

#define DEM_STOP_SEC_CONST_8
#include <Dem_MemMap.h>

/*---[INIT_MONITOR]---*/

#if (DEM_CB_TABLE_INIT_MONITOR_SIZE != 0U)
#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief Generic callback function pointer table for InitMonitor */
CONST(Dem_CbFuncPtrInitMonitorType, DEM_CONST)
  Dem_CbFuncPtrInitMonitor[DEM_CB_TABLE_INIT_MONITOR_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>
#endif

#if (DEM_LOOKUP_TABLE_INIT_MONITOR_SIZE != 0U)
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Generic lookup table for InitMonitor */
CONST(Dem_EventIdType, DEM_CONST)
  Dem_CbLookupTableInitMonitor[DEM_LOOKUP_TABLE_INIT_MONITOR_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>
#endif

/*---[TRIGGER_ON_EVENT_STATUS]---*/

#if (DEM_C_CALLBACK_TABLE_TRIG_ON_EVST_SIZE != 0U)
#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief C-Callback function pointer table for TriggerOnEventStatus */
CONST(Dem_CbFuncPtrTrigOnEvStType, DEM_CONST)
  Dem_CbFuncPtrTrigOnEvSt[DEM_C_CALLBACK_TABLE_TRIG_ON_EVST_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>
#endif

#if (DEM_C_LOOKUP_TABLE_TRIG_ON_EVST_SIZE != 0U)
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief C-Lookup table for TriggerOnEventStatus */
CONST(Dem_CbLookupTableType, DEM_CONST)
  Dem_CbLookupTableTrigOnEvSt[DEM_C_LOOKUP_TABLE_TRIG_ON_EVST_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>
#endif

#if (DEM_RTE_CALLBACK_TABLE_TRIG_ON_EVST_SIZE != 0U)
#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

/** \brief RTE-Callback function pointer table
** for TriggerOnEventStatus
**/
CONST(Dem_RteFuncPtrTrigOnEvStType, DEM_CONST)
  Dem_RteFuncPtrTrigOnEvSt[DEM_RTE_CALLBACK_TABLE_TRIG_ON_EVST_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>
#endif

#if (DEM_RTE_LOOKUP_TABLE_TRIG_ON_EVST_SIZE != 0U)
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief RTE-Lookup table for TriggerOnEventStatus */
CONST(Dem_EventIdType, DEM_CONST)
  Dem_RteLookupTableTrigOnEvSt[DEM_RTE_LOOKUP_TABLE_TRIG_ON_EVST_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>
#endif

/*---[TRIGGER_ON_DTC_STATUS]---*/

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#if (DEM_CB_TABLE_TRIG_ON_DTCST_SIZE != 0U)
/** \brief Generic callback function pointer table for TriggerOnDTCStatus */
CONST(Dem_CbFuncPtrTrigOnDTCStType, DEM_CONST)
  Dem_CbFuncPtrTrigOnDTCSt[DEM_CB_TABLE_TRIG_ON_DTCST_SIZE] =
{
};
#endif

/*---[TRIGGER_ON_EVENT_DATA_CHANGED]---*/

#if (DEM_C_CB_TABLE_TRIG_ON_EVDAT_SIZE != 0U)
/** \brief C-Callback function pointer table for TriggerOnEventDataChanged */
CONST(Dem_CbFuncPtrTrigOnEvDatType, DEM_CONST)
  Dem_CbFuncPtrTrigOnEvDat[DEM_C_CB_TABLE_TRIG_ON_EVDAT_SIZE] =
{
};
#endif

#if (DEM_RTE_CB_TABLE_TRIG_ON_EVDAT_SIZE != 0U)
/** \brief RTE-Callback function pointer table for TriggerOnEventDataChanged */
CONST(Dem_RteFuncPtrTrigOnEvDatType, DEM_CONST)
  Dem_RteFuncPtrTrigOnEvDat[DEM_RTE_CB_TABLE_TRIG_ON_EVDAT_SIZE] =
{
};
#endif

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

#if (DEM_C_LOOKUP_TABLE_TRIG_ON_EVDAT_SIZE != 0U)
/** \brief C-Lookup table for TriggerOnEventDataChanged */
CONST(Dem_CbLookupTableType, DEM_CONST)
  Dem_CbLookupTableTrigOnEvDat[DEM_C_LOOKUP_TABLE_TRIG_ON_EVDAT_SIZE] =
{
};
#endif

#if (DEM_RTE_LOOKUP_TABLE_TRIG_ON_EVDAT_SIZE != 0U)
/** \brief RTE-Lookup table for TriggerOnEventDataChanged */
CONST(Dem_EventIdType, DEM_CONST)
  Dem_RteLookupTableTrigOnEvDat[DEM_RTE_LOOKUP_TABLE_TRIG_ON_EVDAT_SIZE] =
{
};
#endif

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>






/*---[CLEAR_EVENT_ALLOWED]---*/

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#if (DEM_C_CB_TABLE_CLEAR_EVENT_ALLOWED_SIZE != 0U)
/** \brief C-Callback function pointer table for ClearEventAllowed */
CONST(Dem_CbFuncPtrClearEventAllowedType, DEM_CONST)
  Dem_CbFuncPtrClearEventAllowed[DEM_C_CB_TABLE_CLEAR_EVENT_ALLOWED_SIZE] =
{
};
#endif

#if (DEM_C_LOOKUP_TABLE_CLEAR_EVENT_ALLOWED_SIZE != 0U)
/** \brief C-Lookup table for ClearEventAllowed
 ** also Clear Event Behavior info is packed in EventId */
CONST(Dem_CbLookupTableType, DEM_CONST)
  Dem_CbLookupTableClearEventAllowed
    [DEM_C_LOOKUP_TABLE_CLEAR_EVENT_ALLOWED_SIZE] =
{
};
#endif

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#if (DEM_RTE_LOOKUP_TABLE_CLEAR_EVENT_ALLOWED_SIZE != 0U)
#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief RTE-Lookup table for ClearEventAllowed
 ** also Clear Event Behavior info is packed in EventId */
CONST(Dem_EventIdType, DEM_CONST)
  Dem_RteLookupTableClearEventAllowed
    [DEM_RTE_LOOKUP_TABLE_CLEAR_EVENT_ALLOWED_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>
#endif

#define DEM_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>

#if (DEM_RTE_CB_TABLE_CLEAR_EVENT_ALLOWED_SIZE != 0U)
/** \brief RTE-Callback function pointer table for ClearEventAllowed */
CONST(Dem_CbFuncPtrClearEventAllowedType, DEM_CONST)
  Dem_RteFuncPtrClearEventAllowed[DEM_RTE_CB_TABLE_CLEAR_EVENT_ALLOWED_SIZE] =
{
};
#endif

/*---[GET_FDC]---*/

#if (DEM_CB_TABLE_GET_FDC_SIZE != 0U)
/** \brief Generic callback function pointer table for
** GetFaultDetectionCounter
**/
CONST(Dem_CbFuncPtrGetFDCType, DEM_CONST)
  Dem_CbFuncPtrGetFDC[DEM_CB_TABLE_GET_FDC_SIZE] =
{
};
#endif

#define DEM_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h>
#if (DEM_LOOKUP_TABLE_GET_FDC_SIZE != 0U)

#define DEM_START_SEC_CONST_16
#include <Dem_MemMap.h>

/** \brief Generic lookup table for GetFaultDetectionCounter */
CONST(Dem_EventIdType, DEM_CONST)
  Dem_CbLookupTableGetFDC[DEM_LOOKUP_TABLE_GET_FDC_SIZE] =
{
};

#define DEM_STOP_SEC_CONST_16
#include <Dem_MemMap.h>
#endif

/*------------------[OBD Readiness Groups force complete]-------------------*/

/* !LINKSTO dsn.Dem.OBDPidSupport.Dem_ReadinessForceStatus_01,1 */
#define DEM_START_SEC_CALIB_8
#include <Dem_MemMap.h>

#if ((DEM_OBD_Support == STD_ON) || (DEM_J1939_READINESS1_SUPPORT == STD_ON))
CONST(uint8, DEM_CONST) Dem_ObdReadinessForceCompleteMask = 0xFFU;
#endif

/*------------------[OBD Readiness Groups PID41 ByteB Pre-set value]---------*/
#if (DEM_OBD_Support == STD_ON)
CONST(uint8, DEM_CONST) Dem_ObdReadinessPID41ByteB = 0x0CU;
#endif
#if ( (DEM_OBD_Support == STD_ON) || (DEM_J1939_READINESS1_SUPPORT == STD_ON) )
CONST(uint8, DEM_CONST) Dem_ObdCompliancyPID1CByte = 5;
#endif

#define DEM_STOP_SEC_CALIB_8
#include <Dem_MemMap.h>

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
