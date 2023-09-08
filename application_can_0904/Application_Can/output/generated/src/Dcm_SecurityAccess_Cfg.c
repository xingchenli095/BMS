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

/* !LINKSTO Dcm.Dsn.File.SecurityAccess.ConfigC,1 */

/*==================[inclusions]=================================================================*/
#include <Dcm_Int.h>
#include <Dcm_API_Cfg.h>                                  /*  Configurable function declarations */
#include <Dcm_DspExternal.h>                          /* Callbacks provided by Central Diag SwC  */

#include <Dcm_SecurityAccess_Cfg.h>
/*==================[macros]=====================================================================*/

/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

/*==================[internal function declarations]=============================================*/

/*==================[internal constants]=========================================================*/

/*==================[internal data]==============================================================*/

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/* Array of configuration information for diagnostic security levels */
CONST(Dcm_SecurityLevelEntryConfigType, DCM_CONST) Dcm_SecurityLevelEntryConfig[2] =
{
/* !LINKSTO Dcm.EB.ServiceAPI.SecurityAccess,1 */
  {
    0U, /* Delay time */
    2000U, /* Delay on boot */
    8U, /* Seed size */
    4U, /* Key size */
    4U, /* ADR Size */
    /* !LINKSTO SWS_Dcm_91003.Port.ADR.USE_SYNCH_FNC,1 */
    NULL_PTR,
    &Rte_Call_SecurityAccess_Level_1_GetSeed,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    /* !LINKSTO SWS_Dcm_91004.AS_42.Port.USE_ASYNCH_CS,1 */
    NULL_PTR,
    &Rte_Call_SecurityAccess_Level_1_CompareKey,
    1U, /* Attempts until delay */
    FALSE, /* Do not force delay on boot */
    FALSE, /* Do not force infinite delay time */
    DCM_USE_SECURITY_ASYNCH_CLIENT_SERVER,
    DCM_USE_AUTOSAR_42,
    1U, /* Security level */
  },
/* !LINKSTO Dcm.EB.ServiceAPI.SecurityAccess,1 */
  {
    0U, /* Delay time */
    2000U, /* Delay on boot */
    8U, /* Seed size */
    4U, /* Key size */
    4U, /* ADR Size */
    /* !LINKSTO SWS_Dcm_91003.Port.ADR.USE_SYNCH_FNC,1 */
    NULL_PTR,
    &Rte_Call_SecurityAccess_Level_3_GetSeed,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    /* !LINKSTO SWS_Dcm_91004.AS_42.Port.USE_ASYNCH_CS,1 */
    NULL_PTR,
    &Rte_Call_SecurityAccess_Level_3_CompareKey,
    1U, /* Attempts until delay */
    FALSE, /* Do not force delay on boot */
    FALSE, /* Do not force infinite delay time */
    DCM_USE_SECURITY_ASYNCH_CLIENT_SERVER,
    DCM_USE_AUTOSAR_42,
    2U, /* Security level */
  },
};

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

/*==================[external constants]=========================================================*/

/*==================[external data]==============================================================*/

/*==================[external function definitions]==============================================*/

/*==================[internal function definitions]==============================================*/

/*==================[end of file]================================================================*/
