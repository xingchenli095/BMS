/**
 * \file
 *
 * \brief AUTOSAR Dcm
 *
 * This file contains the implementation of the AUTOSAR
 * module Dcm.
 *
 * \version 5.0.13
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/* !LINKSTO Dcm.Dsn.File.RoutineControlConst.ConfigC,1 */

/*==================[inclusions]=================================================================*/

#include <Dcm_RoutineControl_Cfg.h>                             /*  RoutineControl Configuration */

/*==================[macros]=====================================================================*/

/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

/*==================[internal function declarations]=============================================*/

/*==================[internal constants]=========================================================*/

/*==================[internal data]==============================================================*/

#define DCM_START_SEC_CONST_8
#include <Dcm_MemMap.h>

/* Array of session types for all routines */
STATIC CONST(Dcm_SesCtrlType, DCM_CONST) Dcm_RoutineControl_SessionTypes[3] =
{
  0x03U,
  0x03U,
  0x03U,
};

#define DCM_STOP_SEC_CONST_8
#include <Dcm_MemMap.h>

/*==================[external constants]=========================================================*/

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/* Configuration parameters for 'Routine Control' service */
CONST(Dcm_DspRoutineServicesType, DCM_CONST) Dcm_DspRoutineConfig[DCM_NUM_ROUTINES] =
{
  {
    /* Pointer to request service handler function */
    NULL_PTR,
    /* Pointer to start service handler function */
    &Dcm_DIAGNOSTIC_CHECK_PRECOND_Start,
    /* Pointer to stop service handler function */
    NULL_PTR,
    /* Pointer to assigned RoutineInfo configuration */
    &Dcm_DspRoutineInfoConfig[0],
    /* Routine mode rule */
    NULL_PTR,
    /* RID Identifier */
    0x203U,
  },
  {
    /* Pointer to request service handler function */
    NULL_PTR,
    /* Pointer to start service handler function */
    &Dcm_DIAGNOSTIC_LOOPBACK_Start,
    /* Pointer to stop service handler function */
    NULL_PTR,
    /* Pointer to assigned RoutineInfo configuration */
    &Dcm_DspRoutineInfoConfig[1],
    /* Routine mode rule */
    NULL_PTR,
    /* RID Identifier */
    0x100U,
  },
  {
    /* Pointer to request service handler function */
    NULL_PTR,
    /* Pointer to start service handler function */
    &Dcm_DIAGNOSTIC_TRIGGER_DTC_Start,
    /* Pointer to stop service handler function */
    NULL_PTR,
    /* Pointer to assigned RoutineInfo configuration */
    &Dcm_DspRoutineInfoConfig[2],
    /* Routine mode rule */
    NULL_PTR,
    /* RID Identifier */
    0x101U,
  },
};

/* Contains the configuration (parameters) for Routine's Info */
CONST(Dcm_DspRoutineServicesInfoType, DCM_CONST) Dcm_DspRoutineInfoConfig[3] =
{
  {
    /* Pointer to security levels */
    NULL_PTR,
    /* Pointer to sessions */
    &(Dcm_RoutineControl_SessionTypes[0]),
    /* Number of sessions */
    1U,
    /* Number of security levels */
    0U
  },
  {
    /* Pointer to security levels */
    NULL_PTR,
    /* Pointer to sessions */
    &(Dcm_RoutineControl_SessionTypes[1]),
    /* Number of sessions */
    1U,
    /* Number of security levels */
    0U
  },
  {
    /* Pointer to security levels */
    NULL_PTR,
    /* Pointer to sessions */
    &(Dcm_RoutineControl_SessionTypes[2]),
    /* Number of sessions */
    1U,
    /* Number of security levels */
    0U
  },
};

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/*==================[external data]==============================================================*/

/*==================[external function definitions]==============================================*/

/*==================[internal function definitions]==============================================*/

/*==================[end of file]================================================================*/
