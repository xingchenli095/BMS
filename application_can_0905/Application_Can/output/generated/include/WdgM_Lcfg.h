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

#ifndef WDGM_LCFG_H
#define WDGM_LCFG_H

/*==================[inclusions]=================================================================*/
/* !LINKSTO WDGM.EB.Design.IncludeFileStructure,4 */
#include <WdgM_Cfg.h>
#include <WdgM_BSW_Lcfg.h>

/*==================[macros]=====================================================================*/

/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

/*==================[external constants]=========================================================*/

/*==================[external data]==============================================================*/

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_START_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable3,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable5,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable8,1 */
/* Checkpoint individual run-time data for each SE */
extern VAR(WdgM_EB_CPDataType,WDGM_VAR) WdgM_EB_CPData_WDGM_SE_TASK_SWC_Cyclic[1];
/* Checkpoint individual run-time data for each SE */
extern VAR(WdgM_EB_CPDataType,WDGM_VAR) WdgM_EB_CPData_WdgMSupervisedLogical[2];
/* Checkpoint individual run-time data for each SE */
extern VAR(WdgM_EB_CPDataType,WDGM_VAR) WdgM_EB_CPData_WdgM_DeadLineMonitor[2];

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_STOP_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

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
extern VAR(WdgM_EB_InitStatusType, WDGM_VAR) WdgM_EB_ExpectedInitState;
#endif

/** \brief WdgM/WdgM core instance initialization status */
extern VAR(WdgM_EB_InitStatusType, WDGM_VAR) WdgM_EB_InitStatus;

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
extern VAR(WdgM_GlobalStatusType, WDGM_VAR) WdgM_EB_GlobalStatus;

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_STOP_SEC_SATELLITE_R_VAR_INIT_8
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_INIT_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#define WDGM_START_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

#if (WDGM_EB_EXTERNAL_GRAPH_NUM > 0U)
/** \brief array of pointers to the run-time data for each external graph and length of the pointed arrays */
extern CONST(WdgM_EB_ExtGraphDataSeqType,WDGM_CONST) WdgM_EB_ExtGraphDataSeqPtr[WDGM_EB_EXTERNAL_GRAPH_NUM];
#endif

#define WDGM_STOP_SEC_CONST_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

#define WDGM_START_SEC_VAR_CLEARED_ASIL_D_8
#include <WdgM_MemMap.h>

/* !LINKSTO WDGM.ASR40.WDGM200,1 */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable1,4 */
/** \brief defines the local statuses of all SE*/
extern VAR(WdgM_LocalStatusType, WDGM_VAR) WdgM_EB_SELocalStatus[WDGM_EB_SE_NUM];

#if (WDGM_EB_EXT_GET_EXPECTED_WDGM_MODE_ENABLED == STD_OFF)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable17,1 */
extern VAR(WdgM_ModeType, WDGM_VAR) WdgM_EB_ExpectedWdgMModeId;
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
extern VAR(uint16, WDGM_VAR) WdgM_EB_IsExpiredSEIdSet;
#else
extern VAR(boolean, WDGM_VAR) WdgM_EB_IsExpiredSEIdSet;
#endif

#if (WDGM_MIXED_CRITICALITY == STD_ON)
#define WDGM_STOP_SEC_VAR_CLEARED_16
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_CLEARED_ASIL_D_8
#include <WdgM_MemMap.h>
#endif

#define WDGM_START_SEC_VAR_CLEARED_ASIL_D_16
#include <WdgM_MemMap.h>

/** \brief Internal RAM data holding a copy of the alive counter values for each checkpoint */
extern VAR(WdgM_EB_CPInternalDataType, WDGM_VAR) WdgM_EB_IntRAMData[WDGM_EB_CHECKPOINTS_NUM];

/** \brief failed reference cycle counter for the SE  */
extern VAR(uint16, WDGM_VAR) WdgM_EB_FailedAliveSupervisionRefCycleCnt[WDGM_EB_SE_NUM];

#define WDGM_STOP_SEC_VAR_CLEARED_ASIL_D_16
#include <WdgM_MemMap.h>

#if (WDGM_EB_LOGICAL_SUPERVISION_ENABLED == STD_ON)
/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_START_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

#if (WDGM_EB_EXTERNAL_GRAPH_NUM > 0U)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable12,1,WDGM.EB.DesignDecision.InternalVariable13,1 */
extern VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_ExternalGraphData[WDGM_EB_EXTERNAL_GRAPH_NUM];
#else
extern VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_ExternalGraphData[1];
#endif

#if (WDGM_EB_INTERNAL_GRAPH_NUM > 0U)
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable6,2,WDGM.EB.DesignDecision.InternalVariable7,2 */
extern VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_InternalGraphData[WDGM_EB_INTERNAL_GRAPH_NUM];
#else
extern VAR(WdgM_EB_GraphDataType,WDGM_VAR) WdgM_EB_InternalGraphData[1];
#endif

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020304,2 */
#if (WDGM_EB_PARTITIONING_ENABLED == STD_ON)
#define WDGM_STOP_SEC_VAR_CLEARED_SHARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#else
#define WDGM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h>
#endif

#endif

#define WDGM_START_SEC_VAR_POWER_ON_INIT_ASIL_D_16
#include <WdgM_MemMap.h>

/** \brief the Supervised Entity Id which first expired */
/* !LINKSTO WDGM.EB.DesignDecision.InternalVariable19,1 */
extern VAR(WdgM_EB_ExpiredSEIDType, WDGM_VAR_POWER_ON_INIT) WdgM_EB_ExpiredSEID;

#define WDGM_STOP_SEC_VAR_POWER_ON_INIT_ASIL_D_16
#include <WdgM_MemMap.h>

#define WDGM_START_SEC_VAR_INIT_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

/** \brief The WdgM specific context data.
 ** This variable holds the specific run time data of the WdgM. */
extern VAR(WdgM_EB_CoreContextType, WDGM_VAR) WdgM_EB_Context;

#define WDGM_STOP_SEC_VAR_INIT_ASIL_D_UNSPECIFIED
#include <WdgM_MemMap.h>

/*==================[external function definitions]==============================================*/

#define WDGM_START_SEC_CODE_ASIL_D
#include <WdgM_MemMap.h>





/** \brief stores redundant data in first call only
 *
 * \pre parameter \a RedundantData is a valid pointer
 *
 * \param[out] RedundantData pointer to store data
 * \param[in] Data the data to store */
extern FUNC(void, WDGM_CODE) WdgM_EB_StoreRedundantData8
(
  P2VAR(uint16,AUTOMATIC,AUTOMATIC) RedundantData,
  uint8 Data
);

/** \brief retrieves the redundant data
 *
 * \param[in] RedundantData the redundant data stored
 * \param[out] Data pointer to store checked data
 *
 * \return Success of operation
 * \retval E_OK data is valid
 * \retval E_NOT_OK data is invalid */
extern FUNC(Std_ReturnType,WDGM_CODE) WdgM_EB_GetCheckedRedundantData8
(
  uint16 RedundantData,
  P2VAR(uint8,AUTOMATIC,AUTOMATIC) Data
);



#define WDGM_STOP_SEC_CODE_ASIL_D
#include <WdgM_MemMap.h>

#endif /* ifndef WDGM_LCFG_H */
/*==================[end of file]================================================================*/
