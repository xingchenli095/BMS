/**
 * \file
 *
 * \brief AUTOSAR WdgM
 *
 * This file contains the implementation of the AUTOSAR
 * module WdgM.
 *
 * \version 6.1.42
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
 * MISRA-C:2012 Deviations:
 *
 * MISRAC2012-1) Deviated Rule: 20.7
 * Expressions resulting from the expansion of macro parameters shall be
 * enclosed in parentheses.
 *
 * Reason:
 * The AUTOSAR compiler abstraction requires these definitions in this way
 * and the arguments cannot be enclosed in parentheses due to C syntax.

 * MISRAC2012-2) Deviated Rule: 8.9 (advisory)
 * An object should be defined at block scope if its identifier only appears
 * in a single function.
 *
 * Reason:
 * The object is defined in this way because the values that are stored
 * in them are required for the next call of this function and should be
 * hold in the data segment memory.
 */

/*==================[inclusions]=================================================================*/
/* !LINKSTO WDGM.EB.Design.IncludeFileStructure,4 */
#include <WdgM_Trace_Stc.h>
#include <WdgM_Lcfg.h>                               /* Module internal BSW declarations and API */

/*------------------[macros for EB Defensive Programming if not provided by Det]-----------------*/
#if (WDGM_UNREACHABLE_CODE_ASSERT_ENABLED == STD_ON)
#ifndef DET_UNREACHABLE_CODE_ASSERT
/** \brief Report a unreachable code assertion (if not already defined by Det)
 **
 ** Use this macro in BSW modules to mark unreachable code as part of
 ** defensive programming.
 **
 ** \param[in] ModuleId The id of the reporting module
 ** \param[in] InstanceId The instance Id of the reporting module
 ** \param[in] ApiId The Api function where the check failed */
#define DET_UNREACHABLE_CODE_ASSERT(ModuleId, InstanceId, ApiId)        \
  do                                                                    \
  {                                                                     \
    WDGM_EB_DET((ApiId), DET_E_UNREACHABLE_CODE_ASSERT_FAILED);         \
  }                                                                     \
  while (0)
#endif
#endif /* (WDGM_UNREACHABLE_CODE_ASSERT_ENABLED == STD_ON) */
/*==================[macros]=====================================================================*/


/*==================[type definitions]===========================================================*/

/*==================[internal function declarations]=============================================*/

/*==================[internal data]==============================================================*/

/*==================[external data]==============================================================*/

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_START_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable3,1,WDGM.EB.DesignDecision.InternalVariable5,1,
 WDGM.EB.DesignDecision.InternalVariable8,1 */
/* Checkpoint individual run-time data for each SE */
VAR(WdgM_EB_CPDataType,WDGM_VAR) WdgM_EB_CPData_WDGM_SE_TASK_SWC_Cyclic[1];
/* Checkpoint individual run-time data for each SE */
VAR(WdgM_EB_CPDataType,WDGM_VAR) WdgM_EB_CPData_WdgMSupervisedLogical[2];
/* Checkpoint individual run-time data for each SE */
VAR(WdgM_EB_CPDataType,WDGM_VAR) WdgM_EB_CPData_WdgM_DeadLineMonitor[2];



#if (WDGM_EB_DEADLINE_SUPERVISION_ENABLED == STD_ON)
#if (WDGM_EB_DM_NUM > 0)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable4,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable11,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable9,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable24,1 */
VAR(WdgM_EB_DMDataType,WDGM_VAR) WdgM_EB_DMData[WDGM_EB_DM_NUM];
#else
VAR(WdgM_EB_DMDataType,WDGM_VAR) WdgM_EB_DMData[1];
#endif
#endif

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_STOP_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

/*==================[internal constants]=========================================================*/

#define WDGM_START_SEC_CONST_ASIL_D_16
#include <WdgM_MemMap.h>


#define WDGM_STOP_SEC_CONST_ASIL_D_16
#include <WdgM_MemMap.h>

#define WDGM_START_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

/*------------------[trigger and watchdog configuration]--------------------*/

/* trigger configuration for mode WDGM_STARTUP */
static CONST(WdgM_EB_TriggerCfgType,WDGM_CONST) WdgM_EB_TrigCfg_M0[1] =
{
  { /* WdgMTrigger_0 */
    WDGIF_SLOW_MODE, /* watchdog trigger mode */
    2000U, /* TriggerCondition */
    0U, /* watchdog device index */
  },
};

/* trigger configuration for mode WDGM_NORMAL_OPERATION */
static CONST(WdgM_EB_TriggerCfgType,WDGM_CONST) WdgM_EB_TrigCfg_M1[1] =
{
  { /* WdgMTrigger_0 */
    WDGIF_SLOW_MODE, /* watchdog trigger mode */
    1U, /* TriggerCondition */
    0U, /* watchdog device index */
  },
};

/* trigger configuration for mode WDGM_SHUTDOWN */
static CONST(WdgM_EB_TriggerCfgType,WDGM_CONST) WdgM_EB_TrigCfg_M2[1] =
{
  { /* WdgMTrigger_0 */
    WDGIF_SLOW_MODE, /* watchdog trigger mode */
    1U, /* TriggerCondition */
    0U, /* watchdog device index */
  },
};

/* trigger configuration for mode WDGM_OFF */
static CONST(WdgM_EB_TriggerCfgType,WDGM_CONST) WdgM_EB_TrigCfg_M3[1] =
{
  { /* WdgMTrigger_0 */
    WDGIF_OFF_MODE, /* watchdog trigger mode */
    1U, /* TriggerCondition */
    0U, /* watchdog device index */
  },
};


/*------------------[SE configuration]--------------------------------------*/

/*------------------Internal configuration data for SE: WDGM_SE_TASK_SWC_Cyclic */

/* alive supervision of CP WdgMCheckpoint_TASK_SWC_Cyclic in mode 0 */
static CONST(WdgM_EB_CPAliveCfgType,WDGM_CONST) WdgM_EB_CPAliveCfg_0_0_0 =
{
  1U, /* ExpextedAliveIndication */
  1000U, /* Amount of supervision reference cycles */
  255U, /* max margin */
  0U /* min margin */
};

/* alive supervision of CP WdgMCheckpoint_TASK_SWC_Cyclic in mode 1 */
static CONST(WdgM_EB_CPAliveCfgType,WDGM_CONST) WdgM_EB_CPAliveCfg_0_0_1 =
{
  1U, /* ExpextedAliveIndication */
  1000U, /* Amount of supervision reference cycles */
  255U, /* max margin */
  0U /* min margin */
};

/* alive supervision of CP WdgMCheckpoint_TASK_SWC_Cyclic in mode 2 */
static CONST(WdgM_EB_CPAliveCfgType,WDGM_CONST) WdgM_EB_CPAliveCfg_0_0_2 =
{
  1U, /* ExpextedAliveIndication */
  1000U, /* Amount of supervision reference cycles */
  255U, /* max margin */
  0U /* min margin */
};


/* checkpoint configuration of SE WDGM_SE_TASK_SWC_Cyclic */
static CONST(WdgM_EB_CPCfgType,WDGM_CONST) WdgM_EB_CPCfg_WDGM_SE_TASK_SWC_Cyclic[1] =
{
  {
    /* CP WdgMCheckpoint_TASK_SWC_Cyclic*/
    {
      /* alive supervision per WdgM mode */
      &(WdgM_EB_CPAliveCfg_0_0_0),
      &(WdgM_EB_CPAliveCfg_0_0_1),
      &(WdgM_EB_CPAliveCfg_0_0_2),
      NULL_PTR,
    },
#if (WDGM_EB_DEADLINE_SUPERVISION_ENABLED == STD_ON)
    /* deadline monitoring per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#endif
#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
    /* internal logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
    /* external logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#endif
  },
};

/*------------------Internal configuration data for SE: WdgMSupervisedLogical */

/* External logical supervision of CP WdgMCheckpoint_0_SWC_CyclicCounter_Cyclic in mode 1 */
static CONST(WdgM_EB_CPLogicalCfgType,WDGM_CONST) WdgM_EB_CPExtLogicalCfg_1_0_1 =
{
  NULL_PTR, /* initial node has no predecessor CPs */
  0U, /* graph id */
  0U, /* checkpoint sequence */
  0U, /* number of predecessors */
  FALSE /* isFinal */
};

/* predecessor points of CP WdgMCheckpoint_1_SWC_IoHwAbs_SetDiscreteValue in mode 1 */
static CONST(WdgM_EB_CPType,WDGM_CONST) WdgM_EB_CPPred_1_1_1[1] =
{
  {
    1U, /* Internal SEId of predecessor 0 */
    0U /* CPId of predecessor 0 */
  },
};

/* External logical supervision of CP WdgMCheckpoint_1_SWC_IoHwAbs_SetDiscreteValue in mode 1 */
static CONST(WdgM_EB_CPLogicalCfgType,WDGM_CONST) WdgM_EB_CPExtLogicalCfg_1_1_1 =
{
  WdgM_EB_CPPred_1_1_1, /* pointer to predecessor CPs */
  0U, /* graph id */
  0U, /* checkpoint sequence */
  1U, /* number of predecessors */
  TRUE/* isFinal */
};


/* checkpoint configuration of SE WdgMSupervisedLogical */
static CONST(WdgM_EB_CPCfgType,WDGM_CONST) WdgM_EB_CPCfg_WdgMSupervisedLogical[2] =
{
  {
    /* CP WdgMCheckpoint_0_SWC_CyclicCounter_Cyclic*/
    {
      /* alive supervision per WdgM mode */
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#if (WDGM_EB_DEADLINE_SUPERVISION_ENABLED == STD_ON)
    /* deadline monitoring per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#endif
#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
    /* internal logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
    /* external logical supervision per WdgM mode */
    {
      NULL_PTR,
      &(WdgM_EB_CPExtLogicalCfg_1_0_1),
      NULL_PTR,
      NULL_PTR,
    },
#endif
  },
  {
    /* CP WdgMCheckpoint_1_SWC_IoHwAbs_SetDiscreteValue*/
    {
      /* alive supervision per WdgM mode */
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#if (WDGM_EB_DEADLINE_SUPERVISION_ENABLED == STD_ON)
    /* deadline monitoring per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#endif
#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
    /* internal logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
    /* external logical supervision per WdgM mode */
    {
      NULL_PTR,
      &(WdgM_EB_CPExtLogicalCfg_1_1_1),
      NULL_PTR,
      NULL_PTR,
    },
#endif
  },
};

/*------------------Internal configuration data for SE: WdgM_DeadLineMonitor */

/* deadline configuration for start CP DeadLineStart in mode 1 */
static CONST(WdgM_EB_CPDeadlineCfgType,WDGM_CONST) WdgM_EB_CPDeadlineCfg_2_0_1 =
{
  5000U, /* maximum Deadline in granularity of 1us */
  1U, /* minimum Deadline in granularity of 1us */
  1U, /* maximum allowed main function calls until deadline violation */
  NULL_PTR,
  0U, /* internal Deadline Monitoring ID for runtime data */
  0U, /* Internal Checkpoint id of start checkpoint */
  1U, /* Internal Checkpoint id of stop checkpoint */
};


/* checkpoint configuration of SE WdgM_DeadLineMonitor */
static CONST(WdgM_EB_CPCfgType,WDGM_CONST) WdgM_EB_CPCfg_WdgM_DeadLineMonitor[2] =
{
  {
    /* CP DeadLineStart*/
    {
      /* alive supervision per WdgM mode */
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#if (WDGM_EB_DEADLINE_SUPERVISION_ENABLED == STD_ON)
    /* deadline monitoring per WdgM mode */
    {
      NULL_PTR,
      &(WdgM_EB_CPDeadlineCfg_2_0_1),
      NULL_PTR,
      NULL_PTR,
    },
#endif
#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
    /* internal logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
    /* external logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#endif
  },
  {
    /* CP DeadLineStop*/
    {
      /* alive supervision per WdgM mode */
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#if (WDGM_EB_DEADLINE_SUPERVISION_ENABLED == STD_ON)
    /* deadline monitoring per WdgM mode */
    {
      NULL_PTR,
      &(WdgM_EB_CPDeadlineCfg_2_0_1),
      NULL_PTR,
      NULL_PTR,
    },
#endif
#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
    /* internal logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
    /* external logical supervision per WdgM mode */
    {
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
      NULL_PTR,
    },
#endif
  },
};

#define WDGM_STOP_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>


/*==================[external constants]=========================================================*/

#define WDGM_START_SEC_CONST_ASIL_D_8
#include <WdgM_MemMap.h>

CONST(WdgM_ModeType,WDGM_CONST) WdgM_EB_InitialModeId =
    WdgMConf_WdgMMode_WDGM_STARTUP;

CONST(WdgM_ModeType,WDGM_CONST) WdgM_EB_DeInitModeId =
    WdgMConf_WdgMMode_WDGM_OFF;


CONST(WdgM_ModeType,WDGM_CONST) WdgM_EB_ModeCfgSize = WDGM_EB_MODE_NUM;

CONST(WdgM_EB_SEIdType, WDGM_CONST) WdgM_EB_SEIntSEId[WDGM_EB_SE_NUM] =
{
  0U, /* Internal Id of WDGM_SE_TASK_SWC_Cyclic */
  1U, /* Internal Id of WdgMSupervisedLogical */
  2U, /* Internal Id of WdgM_DeadLineMonitor */
};



#define WDGM_STOP_SEC_CONST_ASIL_D_8
#include <WdgM_MemMap.h>

/*------------------[mode configuration]------------------------------------*/
#define WDGM_START_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

CONST(WdgM_EB_ModeCfgType, WDGM_CONST) WdgM_EB_ModeCfg[WDGM_EB_MODE_NUM] =
{
  { /* mode WDGM_STARTUP (id 0) */
    1000U, /* least common multiple of all reference cycle values */
    WdgM_EB_TrigCfg_M0, /* trigger configuration */
    1U, /* number of supervision cycles in stats EXPIRED */
    1U /* number of watchdogs (triggers) */
  },
  { /* mode WDGM_NORMAL_OPERATION (id 1) */
    1000U, /* least common multiple of all reference cycle values */
    WdgM_EB_TrigCfg_M1, /* trigger configuration */
    1U, /* number of supervision cycles in stats EXPIRED */
    1U /* number of watchdogs (triggers) */
  },
  { /* mode WDGM_SHUTDOWN (id 2) */
    1000U, /* least common multiple of all reference cycle values */
    WdgM_EB_TrigCfg_M2, /* trigger configuration */
    1U, /* number of supervision cycles in stats EXPIRED */
    1U /* number of watchdogs (triggers) */
  },
  { /* mode WDGM_OFF (id 3) */
    1U, /* least common multiple of all reference cycle values */
    WdgM_EB_TrigCfg_M3, /* trigger configuration */
    0U, /* number of supervision cycles in stats EXPIRED */
    1U /* number of watchdogs (triggers) */
  },
};

/* -----------------[SE configuration]--------------------- */

CONST(WdgM_EB_SECfgType,WDGM_CONST) WdgM_EB_SECfg[WDGM_EB_SE_NUM] =
{
  { /* SE WDGM_SE_TASK_SWC_Cyclic (internal SEId: 0) */
    WdgM_EB_CPCfg_WDGM_SE_TASK_SWC_Cyclic, /* pointer to the array of checkpoints */
    WdgM_EB_CPData_WDGM_SE_TASK_SWC_Cyclic, /* pointer to the run-time data of the CPs */
    WdgMConf_WdgMSupervisedEntity_WDGM_SE_TASK_SWC_Cyclic, /* external SEId */
    1U, /* number of CPs in this SE */
    FALSE, /* Support for Error Recovery */
    /* number of tolerated reference cycles which are allowed to fail in each WdgM mode*/
    {
      0U, /* WdgM mode WDGM_STARTUP */
      1U, /* WdgM mode WDGM_NORMAL_OPERATION */
      1U, /* WdgM mode WDGM_SHUTDOWN */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_OFF */
    }
  },
  { /* SE WdgMSupervisedLogical (internal SEId: 1) */
    WdgM_EB_CPCfg_WdgMSupervisedLogical, /* pointer to the array of checkpoints */
    WdgM_EB_CPData_WdgMSupervisedLogical, /* pointer to the run-time data of the CPs */
    WdgMConf_WdgMSupervisedEntity_WdgMSupervisedLogical, /* external SEId */
    2U, /* number of CPs in this SE */
    FALSE, /* Support for Error Recovery */
    /* number of tolerated reference cycles which are allowed to fail in each WdgM mode*/
    {
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_STARTUP */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_NORMAL_OPERATION */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_SHUTDOWN */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_OFF */
    }
  },
  { /* SE WdgM_DeadLineMonitor (internal SEId: 2) */
    WdgM_EB_CPCfg_WdgM_DeadLineMonitor, /* pointer to the array of checkpoints */
    WdgM_EB_CPData_WdgM_DeadLineMonitor, /* pointer to the run-time data of the CPs */
    WdgMConf_WdgMSupervisedEntity_WdgM_DeadLineMonitor, /* external SEId */
    2U, /* number of CPs in this SE */
    FALSE, /* Support for Error Recovery */
    /* number of tolerated reference cycles which are allowed to fail in each WdgM mode*/
    {
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_STARTUP */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_NORMAL_OPERATION */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_SHUTDOWN */
      WDGM_EB_DUMMY_FAILEDREFCYCLETOL, /* WdgM mode WDGM_OFF */
    }
  },
};

/* Dummy module configuration structure*/
CONST(WdgM_ConfigType, WDGM_APPL_CONST) WDGM_CONFIG_NAME = 0;

#define WDGM_STOP_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

/*============[WdgM internal data]===============*/
#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_START_SEC_SATELLITE_R_VAR_INIT_16
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

#if (WDGM_EB_EXT_GET_EXPECTED_INIT_STATE_ENABLED == STD_OFF || WDGM_EB_MULTICORE_ENABLED == STD_ON)
/* For multicore this variable is also used by the master to announce the satellites of the
 * result of the WdgMGetExpectedInitStateCallout(), so this is not under the
 * WDGM_EB_EXT_GET_EXPECTED_INIT_STATE_ENABLED == STD_OFF compiler switch. */
/** \brief Expected initialization state of the WdgM module */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable18,1 */
VAR(WdgM_EB_InitStatusType, WDGM_VAR) WdgM_EB_ExpectedInitState = WDGM_EB_INIT_STATUS_DEINIT;
#endif

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_STOP_SEC_SATELLITE_R_VAR_INIT_16
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020307,1 */
#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_START_SEC_SATELLITE_R_VAR_INIT_8
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable2,1 */
/** \brief WdgM global supervision status */
VAR(WdgM_GlobalStatusType, WDGM_VAR) WdgM_EB_GlobalStatus = WDGM_GLOBAL_STATUS_DEACTIVATED;

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_STOP_SEC_SATELLITE_R_VAR_INIT_8
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

#define WDGM_START_SEC_VAR_CLEARED_ASIL_D_8
#include <WdgM_MemMap.h>

/* !LINKSTO WDGM.ASR40.WDGM200,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable1,4 */
/** \brief defines the local statuses of all SE */
VAR(WdgM_LocalStatusType, WDGM_VAR) WdgM_EB_SELocalStatus[WDGM_EB_SE_NUM];

#if (WDGM_EB_EXT_GET_EXPECTED_WDGM_MODE_ENABLED == STD_OFF)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable17,1 */
VAR(WdgM_ModeType, WDGM_VAR) WdgM_EB_ExpectedWdgMModeId;
#endif

#define WDGM_STOP_SEC_VAR_CLEARED_ASIL_D_8
#include <WdgM_MemMap.h>

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_START_SEC_VAR_CLEARED_16
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_CLEARED_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable26,1 */
/** \brief has the expired SEId been set? */
#if (WDGM_MIXED_CRITICALITY == STD_ON)
VAR(uint16, WDGM_VAR) WdgM_EB_IsExpiredSEIdSet;
#else
VAR(boolean, WDGM_VAR) WdgM_EB_IsExpiredSEIdSet;
#endif

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_STOP_SEC_VAR_CLEARED_16
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_CLEARED_ASIL_D_8
#include <WdgM_MemMap.h>
#endif


#define WDGM_START_SEC_VAR_POWER_ON_INIT_ASIL_D_16
#include <WdgM_MemMap.h>

/** \brief the Supervised Entity Id which first expired */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable19,1 */
VAR(WdgM_EB_ExpiredSEIDType, WDGM_VAR_POWER_ON_INIT) WdgM_EB_ExpiredSEID = 0U;

#define WDGM_STOP_SEC_VAR_POWER_ON_INIT_ASIL_D_16
#include <WdgM_MemMap.h>



#define WDGM_START_SEC_VAR_CLEARED_ASIL_D_16
#include <WdgM_MemMap.h>

/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable25,1 */
/** \brief Internal RAM data holding a copy of the alive counter values for each checkpoint */
VAR(WdgM_EB_CPInternalDataType, WDGM_VAR) WdgM_EB_IntRAMData[WDGM_EB_CHECKPOINTS_NUM];

/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable10,3 */
/** \brief failed reference cycle counter for the SE  */
VAR(uint16, WDGM_VAR) WdgM_EB_FailedAliveSupervisionRefCycleCnt[WDGM_EB_SE_NUM];

#define WDGM_STOP_SEC_VAR_CLEARED_ASIL_D_16
#include <WdgM_MemMap.h>

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_START_SEC_VAR_INIT_16
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

/** \brief WdgM global initialization status */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable15,3 */
VAR(WdgM_EB_InitStatusType, WDGM_VAR) WdgM_EB_InitStatus = WDGM_EB_INIT_STATUS_DEINIT;

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_STOP_SEC_VAR_INIT_16
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

#define WDGM_START_SEC_VAR_INIT_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>


/** \brief The WdgM specific context data.
 ** This variable holds the specific run time data of the WdgM. */
VAR(WdgM_EB_CoreContextType, WDGM_VAR) WdgM_EB_Context =
{
  WdgM_EB_SELocalStatus,
  WdgM_EB_FailedAliveSupervisionRefCycleCnt,
  WdgM_EB_IntRAMData,
  &WdgM_EB_InitStatus,
  0U,
  0U,
  FALSE,
#if (WDGM_EB_CHECK_MAINFUNCTION_TIMING == STD_ON)
  0U,
#endif
  0U,
};

#define WDGM_STOP_SEC_VAR_INIT_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>




/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_START_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
#if (WDGM_EB_EXTERNAL_GRAPH_NUM > 0U)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable12,1,WDGM.EB.DesignDecision.InternalVariable13,1 */
VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_ExternalGraphData[WDGM_EB_EXTERNAL_GRAPH_NUM];
/** \brief run-time data for each external graph to store the sequence
  *  number of checkpoint for each supervised entity */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable16,1 */
static VAR(WdgM_EB_ExtGraphDataSeqArrayType, WDGM_VAR) WdgM_EB_ExtGraphDataSeq_0[WDGM_EB_SE_NUM_GRAPHID_0];

#else
VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_ExternalGraphData[1];
#endif

#if (WDGM_EB_INTERNAL_GRAPH_NUM > 0U)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable6,2,WDGM.EB.DesignDecision.InternalVariable7,2 */
VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_InternalGraphData[WDGM_EB_INTERNAL_GRAPH_NUM];
#else
VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_InternalGraphData[1];
#endif
#endif

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_STOP_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

#define WDGM_START_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

#if (WDGM_EB_EXTERNAL_GRAPH_NUM > 0U)
/** \brief array of pointers to the run-time data for each external graph and length of the pointed arrays */
CONST(WdgM_EB_ExtGraphDataSeqType,WDGM_CONST) WdgM_EB_ExtGraphDataSeqPtr[WDGM_EB_EXTERNAL_GRAPH_NUM] =
{
 /* pointer to the run-time data for each external graph and length of the array */
 { &WdgM_EB_ExtGraphDataSeq_0[0], WDGM_EB_SE_NUM_GRAPHID_0 },
};
#endif

#define WDGM_STOP_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

/*==================[external function definitions]==============================================*/
/*==================[internal function definitions]==============================================*/

/*==================[end of file]================================================================*/
