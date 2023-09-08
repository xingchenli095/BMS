
/**
 * \file
 *
 * \brief AUTOSAR BswM
 *
 * This file contains the implementation of the AUTOSAR
 * module BswM.
 *
 * \version 1.16.0
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /* \addtogroup Mode Management Stack
  * @{ */

/* !LINKSTO BswM0024,1 */
/* The BswM_Lcfg.c contains all link-time configuration parameters. */

/* !LINKSTO BswM.Impl.SourceFile.BswM_Partition_Lcfg_c,1 */

/* MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 17.8 (advisory)
 * A function parameter should not be modified.
 *
 * Reason:
 * For BswMJ1939DcmBroadcastStatus ports the mode parameter has no significance
 * and it intentionally set to 0 when calling the HandleStaticRequest function.
 * It is then directly modified in order to call the BswM_HandleRequest function
 * with the correct mode (depending on the current channel) in order to avoid
 * creating a new stack variable.
 */

/*==================[inclusions]============================================*/

#include <BswM_Trace.h>       /* Dbg macros */
#include <BswM.h>
#include <BswM_Int_Cfg.h>
#include <BswM_Int.h>
#include <TSMem.h>            /* Used for TS_MemSet */
#include <SchM_BswM.h>        /* SchM API for BswM         */

#include <Rte_BswM.h>         /* RTE-generated BswM header */

#include <BswM_Lcfg.h>

/*==================[macros]================================================*/

#define BSWM_INVALID_INITIAL_VALUE_INDEX 0xFFU

/*==================[type definitions]======================================*/

/*==================[internal function declarations]========================*/

/* !LINKSTO BswM.Impl.MemoryMapping.InstanceCode,1 */
#define BSWM_START_SEC_CODE
#include <BswM_MemMap.h>

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_ComMFullCom(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_ComMNoCom(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_ComMSilentCom(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_Dcm_Reset(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_GoOffOneA(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_GoOffOneB(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanFDStart(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanFDStop(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanStart(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanStop(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PostRun(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PostRunToRunTwo(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PrpShutdown(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_RunTwo(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_RunTwoToPostRun(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_StartupTwoA(void);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_StartupTwoB(void);

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_ComMFullCom(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_ComMNoCom(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_ComMSilentCom(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_Dcm_Reset(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_GoOffOneA(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_GoOffOneB(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanFDStart(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanFDStop(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanStart(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanStop(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PostRun(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PostRunToRunTwo(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PrpShutdown(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PrpShutdown_Transition(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_RunTwo(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_RunTwoToPostRun(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_StartupTwoA(void);
STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_StartupTwoB(void);

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_AllowCom(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_DemDeinit(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_GoOffOneA(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_GoOffOneB(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnGoOffOneA(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnGoOffOneB(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnPostRun(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnPrpShutdown(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnRunTwo(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnStartupTwoA(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnStartupTwoB(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_InitDriverInitThree(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_NvMReadAll(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCanFD_Disable(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCanFD_Enable(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCan_Disable(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCan_Enable(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqGoOffOneA(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqPostRun(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqPrpShutDown(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqRunTwo(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqStartupTwoB(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Reset(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteModeReq_AppActive(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteModeReq_AppInactive(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteModeReq_AppStartup(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteStart(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_GoOffOneA(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_GoOffOneB(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_PrpShutdown(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_Run(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_Startup(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RunTwo(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Sleep(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartDemOpCycleState_POWER(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartInternalPDUs(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StopDemOpCycleState_POWER(void);
STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY(void);

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprGetState(uint16 exprIndex);
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprGetResult(uint16 exprIndex);

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_ExecuteAction(uint16 actionIndex);

STATIC FUNC(void, BSWM_CODE) BswM_InitRteModeRequestPorts(void);

#define BSWM_STOP_SEC_CODE
#include <BswM_MemMap.h>

/*==================[external function declarations]========================*/

/*==================[internal constants]====================================*/

/*==================[external constants]====================================*/

/*==================[internal data]=========================================*/

#define BSWM_START_SEC_CONST_8
#include <BswM_MemMap.h>

STATIC CONST(uint8, AUTOMATIC) BswM_InitialValueMappings[9] = 
{
  /* BswM_ModeReqPort_AppState */
  0U,
  /* BswM_ModeReqPort_ComM_CurrentMode */
  0xFFU,
  /* BswM_ModeReqPort_DcmCommunicationControl */
  1U,
  /* BswM_ModeReqPort_DcmDiagnosticSessionControl */
  2U,
  /* BswM_ModeReqPort_DcmResponseOnEvent */
  3U,
  /* BswM_ModeReqPort_Dcm_ResetModeRequest */
  4U,
  /* BswM_ModeReqPort_EcuState */
  0U,
  /* BswM_ModeReqPort_PncCan */
  0xFFU,
  /* BswM_ModeReqPort_PncCanFD */
  0xFFU,
};

#define BSWM_STOP_SEC_CONST_8
#include <BswM_MemMap.h>

#define BSWM_START_SEC_CONST_16
#include <BswM_MemMap.h>

/**
 * BswM_NumModeRequestPortsTable
 */
STATIC CONST( uint16 , AUTOMATIC ) BswM_NumModeRequestPortsTable[15] = 
{
  UINT16_C( 0 ), /* Number of ports of type BSWM_CAN_SM_INDICATION */
  UINT16_C( 1 ), /* Number of ports of type BSWM_COMM_INDICATION */
  UINT16_C( 0 ), /* Number of ports of type BSWM_COMM_INITIATE_RESET */
  UINT16_C( 2 ), /* Number of ports of type BSWM_COMM_PNC_REQUEST */
  UINT16_C( 0 ), /* Number of ports of type BSWM_DCM_APPLICATION_UPDATED_INDICATION */
  UINT16_C( 0 ), /* Number of ports of type BSWM_DCM_COM_MODE_CURRENT_STATE */
  UINT16_C( 0 ), /* Number of ports of type BSWM_DCM_COM_MODE_REQUEST */
  UINT16_C( 0 ), /* Number of ports of type BSWM_DCM_RESET_MODE_REQUEST */
  UINT16_C( 0 ), /* Number of ports of type BSWM_DCM_SESSION_MODE_REQUEST */
  UINT16_C( 0 ), /* Number of ports of type BSWM_ECUM_INDICATION */
  UINT16_C( 0 ), /* Number of ports of type BSWM_ECUM_WAKEUP_SOURCE */
  UINT16_C( 1 ), /* Number of ports of type BSWM_GENERIC_REQUEST */
  UINT16_C( 0 ), /* Number of ports of type BSWM_NM_CAR_WAKEUP_INDICATION */
  UINT16_C( 0 ), /* Number of ports of type BSWM_NVM_JOB_MODE_INDICATION */
  UINT16_C( 0 )  /* Number of ports of type BSWM_NVM_REQUEST */
};

#define BSWM_STOP_SEC_CONST_16
#include <BswM_MemMap.h>

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include <BswM_MemMap.h>

/*
 * The logical expressions table contains both the state
 * and the result function pointers for each defined logical
 * expression configured in the current BswM instance.
 */
/**
 * BswM_LogicalExprTable
 */
STATIC CONST( BswMLogicalExprType , AUTOMATIC ) BswM_LogicalExprTable[18] = 
{
  { /* [0] */
    &BswM_ExprState_BswM_LogEx_ComMFullCom, /* GetState */
    &BswM_ExprResult_BswM_LogEx_ComMFullCom  /* GetResult */
  },
  { /* [1] */
    &BswM_ExprState_BswM_LogEx_ComMNoCom, /* GetState */
    &BswM_ExprResult_BswM_LogEx_ComMNoCom  /* GetResult */
  },
  { /* [2] */
    &BswM_ExprState_BswM_LogEx_ComMSilentCom, /* GetState */
    &BswM_ExprResult_BswM_LogEx_ComMSilentCom  /* GetResult */
  },
  { /* [3] */
    &BswM_ExprState_BswM_LogEx_Dcm_Reset, /* GetState */
    &BswM_ExprResult_BswM_LogEx_Dcm_Reset  /* GetResult */
  },
  { /* [4] */
    &BswM_ExprState_BswM_LogEx_GoOffOneA, /* GetState */
    &BswM_ExprResult_BswM_LogEx_GoOffOneA  /* GetResult */
  },
  { /* [5] */
    &BswM_ExprState_BswM_LogEx_GoOffOneB, /* GetState */
    &BswM_ExprResult_BswM_LogEx_GoOffOneB  /* GetResult */
  },
  { /* [6] */
    &BswM_ExprState_BswM_LogEx_PncCanFDStart, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PncCanFDStart  /* GetResult */
  },
  { /* [7] */
    &BswM_ExprState_BswM_LogEx_PncCanFDStop, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PncCanFDStop  /* GetResult */
  },
  { /* [8] */
    &BswM_ExprState_BswM_LogEx_PncCanStart, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PncCanStart  /* GetResult */
  },
  { /* [9] */
    &BswM_ExprState_BswM_LogEx_PncCanStop, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PncCanStop  /* GetResult */
  },
  { /* [10] */
    &BswM_ExprState_BswM_LogEx_PostRun, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PostRun  /* GetResult */
  },
  { /* [11] */
    &BswM_ExprState_BswM_LogEx_PostRunToRunTwo, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PostRunToRunTwo  /* GetResult */
  },
  { /* [12] */
    &BswM_ExprState_BswM_LogEx_PrpShutdown, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PrpShutdown  /* GetResult */
  },
  { /* [13] */
    &BswM_ExprState_BswM_LogEx_PrpShutdown_Transition, /* GetState */
    &BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition  /* GetResult */
  },
  { /* [14] */
    &BswM_ExprState_BswM_LogEx_RunTwo, /* GetState */
    &BswM_ExprResult_BswM_LogEx_RunTwo  /* GetResult */
  },
  { /* [15] */
    &BswM_ExprState_BswM_LogEx_RunTwoToPostRun, /* GetState */
    &BswM_ExprResult_BswM_LogEx_RunTwoToPostRun  /* GetResult */
  },
  { /* [16] */
    &BswM_ExprState_BswM_LogEx_StartupTwoA, /* GetState */
    &BswM_ExprResult_BswM_LogEx_StartupTwoA  /* GetResult */
  },
  { /* [17] */
    &BswM_ExprState_BswM_LogEx_StartupTwoB, /* GetState */
    &BswM_ExprResult_BswM_LogEx_StartupTwoB  /* GetResult */
  }
};

#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include <BswM_MemMap.h>

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include <BswM_MemMap.h>

/*
 * The action table contains function pointers to all configured
 * actions within the current BswM instance.
 */
/**
 * BswM_ActionTable
 */
STATIC CONST( BswMActionFuncPtrType , AUTOMATIC ) BswM_ActionTable[45] = 
{
  &BswM_Action_BswM_Act_AllowCom, /* [0] */
  &BswM_Action_BswM_Act_DemDeinit, /* [1] */
  &BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can, /* [2] */
  &BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can, /* [3] */
  &BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can, /* [4] */
  &BswM_Action_BswM_Act_GoOffOneA, /* [5] */
  &BswM_Action_BswM_Act_GoOffOneB, /* [6] */
  &BswM_Action_BswM_Act_HookOnGoOffOneA, /* [7] */
  &BswM_Action_BswM_Act_HookOnGoOffOneB, /* [8] */
  &BswM_Action_BswM_Act_HookOnPostRun, /* [9] */
  &BswM_Action_BswM_Act_HookOnPrpShutdown, /* [10] */
  &BswM_Action_BswM_Act_HookOnRunTwo, /* [11] */
  &BswM_Action_BswM_Act_HookOnStartupTwoA, /* [12] */
  &BswM_Action_BswM_Act_HookOnStartupTwoB, /* [13] */
  &BswM_Action_BswM_Act_InitDriverInitThree, /* [14] */
  &BswM_Action_BswM_Act_NvMReadAll, /* [15] */
  &BswM_Action_BswM_Act_PncCanFD_Disable, /* [16] */
  &BswM_Action_BswM_Act_PncCanFD_Enable, /* [17] */
  &BswM_Action_BswM_Act_PncCan_Disable, /* [18] */
  &BswM_Action_BswM_Act_PncCan_Enable, /* [19] */
  &BswM_Action_BswM_Act_ReqGoOffOneA, /* [20] */
  &BswM_Action_BswM_Act_ReqPostRun, /* [21] */
  &BswM_Action_BswM_Act_ReqPrpShutDown, /* [22] */
  &BswM_Action_BswM_Act_ReqRunTwo, /* [23] */
  &BswM_Action_BswM_Act_ReqStartupTwoB, /* [24] */
  &BswM_Action_BswM_Act_Reset, /* [25] */
  &BswM_Action_BswM_Act_RteModeReq_AppActive, /* [26] */
  &BswM_Action_BswM_Act_RteModeReq_AppInactive, /* [27] */
  &BswM_Action_BswM_Act_RteModeReq_AppStartup, /* [28] */
  &BswM_Action_BswM_Act_RteStart, /* [29] */
  &BswM_Action_BswM_Act_RteSwitch_GoOffOneA, /* [30] */
  &BswM_Action_BswM_Act_RteSwitch_GoOffOneB, /* [31] */
  &BswM_Action_BswM_Act_RteSwitch_PrpShutdown, /* [32] */
  &BswM_Action_BswM_Act_RteSwitch_Run, /* [33] */
  &BswM_Action_BswM_Act_RteSwitch_Startup, /* [34] */
  &BswM_Action_BswM_Act_RunTwo, /* [35] */
  &BswM_Action_BswM_Act_Sleep, /* [36] */
  &BswM_Action_BswM_Act_StartDemOpCycleState_POWER, /* [37] */
  &BswM_Action_BswM_Act_StartInternalPDUs, /* [38] */
  &BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY, /* [39] */
  &BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION, /* [40] */
  &BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY, /* [41] */
  &BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION, /* [42] */
  &BswM_Action_BswM_Act_StopDemOpCycleState_POWER, /* [43] */
  &BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY  /* [44] */
};

#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include <BswM_MemMap.h>

/* !LINKSTO BswM.Impl.MemoryMapping.InstanceData,1 */
#define BSWM_START_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h>

/* Dynamically Generated Mode Request Ports */
/**
 * BswM_UInt8RteRequestPortTable
 */
STATIC BswMUInt8RteModeRequestPortType BswM_UInt8RteRequestPortTable[5] = 
{
  { /* BswM_ModeReqPort_AppState */
    { /* base */
      UINT16_C( 0 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT8_C( 1 )  /* mode */
  },
  { /* BswM_ModeReqPort_DcmCommunicationControl */
    { /* base */
      UINT16_C( 2 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT8_C( 8 )  /* mode */
  },
  { /* BswM_ModeReqPort_DcmDiagnosticSessionControl */
    { /* base */
      UINT16_C( 3 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT8_C( 1 )  /* mode */
  },
  { /* BswM_ModeReqPort_DcmResponseOnEvent */
    { /* base */
      UINT16_C( 4 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT8_C( 0 )  /* mode */
  },
  { /* BswM_ModeReqPort_Dcm_ResetModeRequest */
    { /* base */
      UINT16_C( 5 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT8_C( 5 )  /* mode */
  }
};

/**
 * BswMComMIndicationPortTable
 */
BswMModeRequestPortType BswMComMIndicationPortTable[1] = 
{
  { /* [0] */
    { /* base */
      UINT16_C( 1 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    0U, /* channel */
    UINT8_C( 0 )  /* mode */
  }
};

/**
 * BswMComMPncRequestPortTable
 */
BswMComMPncRequestPortType BswMComMPncRequestPortTable[2] = 
{
  { /* [0] */
    { /* base */
      UINT16_C( 7 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT16_C( 16 ), /* channel */
    UINT8_C( 0 )  /* mode */
  },
  { /* [1] */
    { /* base */
      UINT16_C( 8 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT16_C( 17 ), /* channel */
    UINT8_C( 0 )  /* mode */
  }
};

/**
 * BswMGenericRequestPortTable
 */
BswMGenericRequestPortType BswMGenericRequestPortTable[1] = 
{
  { /* [0] */
    { /* base */
      UINT16_C( 6 ), /* id */
      UINT8_C( 0 ), /* isImmediate */
      UINT8_C( 0 )  /* isDefined */
    },
    UINT16_C( 0 ), /* channel */
    UINT16_C( 0 )  /* mode */
  }
};

#define BSWM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h>

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include <BswM_MemMap.h>
/**
 * BswM_PtrModeRequestPortsTable
 */
STATIC CONSTP2VAR( BswMModeRequestPortType, BSWM_CONST, BSWM_VAR ) BswM_PtrModeRequestPortsTable[15] = 
{
  NULL_PTR, /* BSWM_CAN_SM_INDICATION */
  &BswMComMIndicationPortTable[0], /* BSWM_COMM_INDICATION */
  NULL_PTR, /* BSWM_COMM_INITIATE_RESET */
  NULL_PTR, /* BSWM_COMM_PNC_REQUEST */
  NULL_PTR, /* BSWM_DCM_APPLICATION_UPDATED_INDICATION */
  NULL_PTR, /* BSWM_DCM_COM_MODE_CURRENT_STATE */
  NULL_PTR, /* BSWM_DCM_COM_MODE_REQUEST */
  NULL_PTR, /* BSWM_DCM_RESET_MODE_REQUEST */
  NULL_PTR, /* BSWM_DCM_SESSION_MODE_REQUEST */
  NULL_PTR, /* BSWM_ECUM_INDICATION */
  NULL_PTR, /* BSWM_ECUM_WAKEUP_SOURCE */
  NULL_PTR, /* BSWM_GENERIC_REQUEST */
  NULL_PTR, /* BSWM_NM_CAR_WAKEUP_INDICATION */
  NULL_PTR, /* BSWM_NVM_JOB_MODE_INDICATION */
  NULL_PTR  /* BSWM_NVM_REQUEST */
};

#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include <BswM_MemMap.h>

/*==================[external data]=========================================*/

#define BSWM_START_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h>
/**
 * BswM_LinkTimeContext
 */
STATIC BswM_LinkTimeContextType BswM_LinkTimeContext = 
{
  &BswM_ExprGetState, /* logicalExprGetStateFuncPtr */
  &BswM_ExprGetResult, /* logicalExprGetResultFuncPtr */
  &BswM_ExecuteAction, /* executeActionFuncPtr */
  &BswM_HandleStaticRequest, /* handleStaticRequestFuncPtr */
  &BswMGenericRequestPortTable[0], /* genericRequestPortsTablePtr */
  &BswMComMPncRequestPortTable[0], /* comMPncRequestPortsTablePtr */
  UINT16_C( 1 ), /* numBswMGenericRequestPorts */
  UINT16_C( 2 ), /* numBswMComMPncRequestPorts */
  UINT16_C( 18 )  /* numBswMExpressions */
};

/**
 * BswM_Context
 */
BswM_PartitionContextType BswM_Context = 
{
  &SchM_Enter_BswM_SCHM_BSWM_EXCLUSIVE_AREA, /* SchMEnter */
  &SchM_Exit_BswM_SCHM_BSWM_EXCLUSIVE_AREA, /* SchMExit */
  &BswM_LinkTimeContext, /* LinkTimeContext */
  { /* RunTimeContext */
    { /* IPduGroupReInitVector */
      UINT8_C( 0 ), /* [0] */
      UINT8_C( 0 ), /* [1] */
      UINT8_C( 0 ), /* [2] */
      UINT8_C( 0 )  /* [3] */
    },
    { /* IPduGroupVector */
      UINT8_C( 0 ), /* [0] */
      UINT8_C( 0 ), /* [1] */
      UINT8_C( 0 ), /* [2] */
      UINT8_C( 0 )  /* [3] */
    },
    { /* RuleResultTable */
      UINT8_C( 0 ), /* [0] */
      UINT8_C( 0 ), /* [1] */
      UINT8_C( 0 ), /* [2] */
      UINT8_C( 0 ), /* [3] */
      UINT8_C( 0 ), /* [4] */
      UINT8_C( 0 ), /* [5] */
      UINT8_C( 0 ), /* [6] */
      UINT8_C( 0 ), /* [7] */
      UINT8_C( 0 ), /* [8] */
      UINT8_C( 0 ), /* [9] */
      UINT8_C( 0 ), /* [10] */
      UINT8_C( 0 ), /* [11] */
      UINT8_C( 0 ), /* [12] */
      UINT8_C( 0 ), /* [13] */
      UINT8_C( 0 ), /* [14] */
      UINT8_C( 0 ), /* [15] */
      UINT8_C( 0 )  /* [16] */
    },
    { /* LogicalExprInitStatus */
      UINT8_C( 0 ), /* [0] */
      UINT8_C( 0 ), /* [1] */
      UINT8_C( 0 ), /* [2] */
      UINT8_C( 0 ), /* [3] */
      UINT8_C( 0 ), /* [4] */
      UINT8_C( 0 ), /* [5] */
      UINT8_C( 0 ), /* [6] */
      UINT8_C( 0 ), /* [7] */
      UINT8_C( 0 ), /* [8] */
      UINT8_C( 0 ), /* [9] */
      UINT8_C( 0 ), /* [10] */
      UINT8_C( 0 ), /* [11] */
      UINT8_C( 0 ), /* [12] */
      UINT8_C( 0 ), /* [13] */
      UINT8_C( 0 ), /* [14] */
      UINT8_C( 0 ), /* [15] */
      UINT8_C( 0 ), /* [16] */
      UINT8_C( 0 )  /* [17] */
    },
    UINT8_C( 0 ), /* IsInitialized */
    UINT8_C( 0 ), /* PduGroupSwitchTriggered */
    UINT8_C( 0 )  /* PduGroupSwitchReInitTriggered */
  },
  UINT8_C( 0 )  /* ID */
};

#define BSWM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h>

/*==================[external function definitions]=========================*/

#define BswM_START_SEC_CODE
#include <BswM_MemMap.h>

FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_AppState(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    uint8 prevMode;
    uint8 nextMode;
    (void)Rte_Mode_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode(&prevMode, &nextMode);
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[0], nextMode, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[0].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}

#define BswM_STOP_SEC_CODE
#include <BswM_MemMap.h>

#define BSWM_START_SEC_CODE
#include <BswM_MemMap.h>

STATIC FUNC(void, BSWM_CODE) BswM_InitRteModeRequestPorts(void)
{
  {
    BswM_IndexType i;
    for ( i = 0; i < 5U; i++)
    {
      uint16 table_index = BswM_InitialValueMappings[BswM_UInt8RteRequestPortTable[i].base.id];
      if (table_index != BSWM_INVALID_INITIAL_VALUE_INDEX)
      {
        BswM_UInt8RteRequestPortTable[i].mode = BSWM_GET_UINT8_INITIAL_VALUES_TABLE(BswM_Context.ID)[table_index];
        BswM_UInt8RteRequestPortTable[i].base.isDefined = TRUE;
      }
      else
      {
        BswM_UInt8RteRequestPortTable[i].base.isDefined = FALSE;
      }
    }
  }

}

FUNC(void, BSWM_CODE) BswM_LT_Init(void)
{
  DBG_BSWM_LT_INIT_ENTRY();

  BswM_InitRteModeRequestPorts();

  {
    BswM_IndexType i,j;
    for (i = 0U; i < 15U; i++)
    {
      BswMModeRequestPortType* arrPtr = BswM_PtrModeRequestPortsTable[i];
      if ( arrPtr != NULL_PTR)
      {
        for (j = 0U; j < BswM_NumModeRequestPortsTable[i]; j++)
        {
          uint16 table_index = BswM_InitialValueMappings[arrPtr[j].base.id];
          if (table_index != BSWM_INVALID_INITIAL_VALUE_INDEX)
          {
            arrPtr[j].mode = BSWM_GET_UINT8_INITIAL_VALUES_TABLE(BswM_Context.ID)[table_index];
            arrPtr[j].base.isDefined = TRUE;
          }
          else
          {
            arrPtr[j].base.isDefined = FALSE;
          }
        }
      }
    }
  }

  {
    BswM_IndexType i;
    for (i = 0U; i < BswM_NumModeRequestPortsTable[BSWM_GENERIC_REQUEST]; i++)
    {
      uint16 table_index = BswM_InitialValueMappings[BswMGenericRequestPortTable[i].base.id];
      if (table_index != BSWM_INVALID_INITIAL_VALUE_INDEX)
      {
        BswMGenericRequestPortTable[i].mode = BSWM_GET_UINT16_INITIAL_VALUES_TABLE(BswM_Context.ID)[table_index];
        BswMGenericRequestPortTable[i].base.isDefined = TRUE;
      }
      else
      {
        BswMGenericRequestPortTable[i].base.isDefined = FALSE;
      }
    }
  }
  {
    BswM_IndexType i;
    for (i = 0U; i < BswM_NumModeRequestPortsTable[BSWM_COMM_PNC_REQUEST]; i++)
    {
      uint16 table_index = BswM_InitialValueMappings[BswMComMPncRequestPortTable[i].base.id];
      if (table_index != BSWM_INVALID_INITIAL_VALUE_INDEX)
      {
        BswMComMPncRequestPortTable[i].mode = BSWM_GET_UINT8_INITIAL_VALUES_TABLE(BswM_Context.ID)[table_index];
        BswMComMPncRequestPortTable[i].base.isDefined = TRUE;
      }
      else
      {
        BswMComMPncRequestPortTable[i].base.isDefined = FALSE;
      }
    }
  }

  /* !LINKSTO SWS_BswM_00251,1 */

  DBG_BSWM_LT_INIT_EXIT();
}

FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[1], RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[1].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[2], RTE_MODE_DcmDiagnosticSessionControl_Default, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[2].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[2], RTE_MODE_DcmDiagnosticSessionControl_Programming, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[2].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[2], RTE_MODE_DcmDiagnosticSessionControl_Extended, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[2].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[3], RTE_MODE_DcmResponseOnEvent_0_EVENT_STARTED, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[3].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[3], RTE_MODE_DcmResponseOnEvent_0_EVENT_STOPPED, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[3].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[3], RTE_MODE_DcmResponseOnEvent_0_EVENT_CLEARED, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[3].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_NONE, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_HARD, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_KEYONOFF, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_SOFT, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}
FUNC(void, BSWM_CODE) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE(void)
{
  if (TRUE == BswM_Context.RunTimeContext.IsInitialized)
  {
    BswM_HandleRequest(&BswM_Context, &BswM_UInt8RteRequestPortTable[4], RTE_MODE_DcmEcuReset_EXECUTE, BSWM_ARBITRATION_RTE_PORT_UINT8, BSWM_SID_INVALID, BswM_UInt8RteRequestPortTable[4].base.isImmediate);
  }
  else
  {
    /* No arbitration shall be performed if BswM is not initialized */
  }
}

/*==================[internal function definitions]=========================*/

/* INDENT:OFF */
STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_ComMFullCom(void)
{
  return
  (
    (BswMComMIndicationPortTable[0U].mode == 2)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_ComMNoCom(void)
{
  return
  (
    (BswMComMIndicationPortTable[0U].mode == 0)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_ComMSilentCom(void)
{
  return
  (
    (BswMComMIndicationPortTable[0U].mode == 0)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_Dcm_Reset(void)
{
  return
  (
    (BswM_UInt8RteRequestPortTable[4].mode == RTE_MODE_DcmEcuReset_EXECUTE)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_GoOffOneA(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 0)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_GoOffOneB(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 1)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanFDStart(void)
{
  return
  (
    (BswMComMPncRequestPortTable[1U].mode == PNC_FULL_COMMUNICATION) ||
    (BswMComMPncRequestPortTable[1U].mode == PNC_READY_SLEEP)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanFDStop(void)
{
  return
  (
    (BswMComMPncRequestPortTable[1U].mode == PNC_NO_COMMUNICATION)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanStart(void)
{
  return
  (
    (BswMComMPncRequestPortTable[0U].mode == PNC_FULL_COMMUNICATION) ||
    (BswMComMPncRequestPortTable[0U].mode == PNC_READY_SLEEP)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PncCanStop(void)
{
  return
  (
    (BswMComMPncRequestPortTable[0U].mode == PNC_NO_COMMUNICATION)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PostRun(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 2)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PostRunToRunTwo(void)
{
  return
  (
    (BswMComMIndicationPortTable[0U].mode == 2) &&
    (BswMGenericRequestPortTable[0U].mode == 2)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PrpShutdown(void)
{
  return
  (
    (BswM_UInt8RteRequestPortTable[0].mode == RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_INACTIVE) &&
    (
      (BswMGenericRequestPortTable[0U].mode == 2) ||
      (BswMGenericRequestPortTable[0U].mode == 3)
    )
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 2) ||
    (BswMGenericRequestPortTable[0U].mode == 3)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_RunTwo(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 4) &&
    (BswM_UInt8RteRequestPortTable[0].mode == RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_ACTIVE)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_RunTwoToPostRun(void)
{
  return
  (
    (BswMComMIndicationPortTable[0U].mode == 0) &&
    (BswMGenericRequestPortTable[0U].mode == 4)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_StartupTwoA(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 6)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprResult_BswM_LogEx_StartupTwoB(void)
{
  return
  (
    (BswMGenericRequestPortTable[0U].mode == 7) &&
    (BswM_UInt8RteRequestPortTable[0].mode == RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_STARTUP)
  ) ? BSWM_TRUE : BSWM_FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_ComMFullCom(void)
{
  return
  (
    (TRUE == BswMComMIndicationPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_ComMNoCom(void)
{
  return
  (
    (TRUE == BswMComMIndicationPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_ComMSilentCom(void)
{
  return
  (
    (TRUE == BswMComMIndicationPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_Dcm_Reset(void)
{
  return
  (
    (TRUE == BswM_UInt8RteRequestPortTable[4].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_GoOffOneA(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_GoOffOneB(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanFDStart(void)
{
  return
  (
    (TRUE == BswMComMPncRequestPortTable[1U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanFDStop(void)
{
  return
  (
    (TRUE == BswMComMPncRequestPortTable[1U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanStart(void)
{
  return
  (
    (TRUE == BswMComMPncRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PncCanStop(void)
{
  return
  (
    (TRUE == BswMComMPncRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PostRun(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PostRunToRunTwo(void)
{
  return
  (
    (TRUE == BswMComMIndicationPortTable[0U].base.isDefined) && 
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PrpShutdown(void)
{
  return
  (
    (TRUE == BswM_UInt8RteRequestPortTable[0].base.isDefined) && 
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_PrpShutdown_Transition(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_RunTwo(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined) && 
    (TRUE == BswM_UInt8RteRequestPortTable[0].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_RunTwoToPostRun(void)
{
  return
  (
    (TRUE == BswMComMIndicationPortTable[0U].base.isDefined) && 
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_StartupTwoA(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined)
  ) ? TRUE : FALSE;
}

STATIC FUNC(boolean, BSWM_CODE) BswM_ExprState_BswM_LogEx_StartupTwoB(void)
{
  return
  (
    (TRUE == BswMGenericRequestPortTable[0U].base.isDefined) && 
    (TRUE == BswM_UInt8RteRequestPortTable[0].base.isDefined)
  ) ? TRUE : FALSE;
}


/* INDENT:ON */

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_AllowCom(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_ALLOWCOM_ENTRY();
  ComM_CommunicationAllowed(0,TRUE);
  DBG_BSWM_ACTION_BSWM_ACT_ALLOWCOM_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_DemDeinit(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_DEMDEINIT_ENTRY();
  (void)Dem_Shutdown();
  DBG_BSWM_ACTION_BSWM_ACT_DEMDEINIT_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_DISABLE_RX_DISABLE_TX_CAN_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 0U);
  DBG_BSWM_ACTION_BSWM_ACT_DISABLE_RX_DISABLE_TX_CAN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_DISABLE_TX_CAN_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 1U);
  DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_DISABLE_TX_CAN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_ENABLE_TX_CAN_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 2U);
  DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_ENABLE_TX_CAN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_GoOffOneA(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEA_ENTRY();
  (void)Eb_Intgr_BswM_GoOffOneA();
  DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEA_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_GoOffOneB(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEB_ENTRY();
  (void)Eb_Intgr_BswM_GoOffOneB();
  DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEB_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnGoOffOneA(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEA_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnGoOffOneA();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEA_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnGoOffOneB(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEB_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnGoOffOneB();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEB_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnPostRun(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONPOSTRUN_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnPostRun();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONPOSTRUN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnPrpShutdown(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONPRPSHUTDOWN_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnPrpShutdown();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONPRPSHUTDOWN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnRunTwo(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONRUNTWO_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnRunTwo();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONRUNTWO_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnStartupTwoA(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOA_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnStartupTwoA();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOA_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_HookOnStartupTwoB(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOB_ENTRY();
  (void)Eb_Intgr_BswM_Hook_OnStartupTwoB();
  DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOB_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_InitDriverInitThree(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_INITDRIVERINITTHREE_ENTRY();
  (void)Eb_Intgr_BswM_DriverInitThree();
  DBG_BSWM_ACTION_BSWM_ACT_INITDRIVERINITTHREE_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_NvMReadAll(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_NVMREADALL_ENTRY();
  (void)Eb_Intgr_BswM_InitNvMReadAll();
  DBG_BSWM_ACTION_BSWM_ACT_NVMREADALL_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCanFD_Disable(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_DISABLE_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 3U);
  DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_DISABLE_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCanFD_Enable(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_ENABLE_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 4U);
  DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_ENABLE_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCan_Disable(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_DISABLE_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 5U);
  DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_DISABLE_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_PncCan_Enable(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_ENABLE_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 6U);
  DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_ENABLE_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqGoOffOneA(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_REQGOOFFONEA_ENTRY();
  (void)BswM_RequestMode(0, EB_INTGR_BSWM_GO_OFF_ONE_A);
  DBG_BSWM_ACTION_BSWM_ACT_REQGOOFFONEA_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqPostRun(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_REQPOSTRUN_ENTRY();
  (void)BswM_RequestMode(EB_INTGR_BSWM_BSWM_SM, EB_INTGR_BSWM_POST_RUN);
  DBG_BSWM_ACTION_BSWM_ACT_REQPOSTRUN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqPrpShutDown(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_REQPRPSHUTDOWN_ENTRY();
  (void)BswM_RequestMode(0, EB_INTGR_BSWM_PRP_SHUTDOWN);
  DBG_BSWM_ACTION_BSWM_ACT_REQPRPSHUTDOWN_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqRunTwo(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_REQRUNTWO_ENTRY();
  (void)BswM_RequestMode(0, EB_INTGR_BSWM_RUN_TWO);
  DBG_BSWM_ACTION_BSWM_ACT_REQRUNTWO_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_ReqStartupTwoB(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_REQSTARTUPTWOB_ENTRY();
  (void)BswM_RequestMode(0, EB_INTGR_BSWM_STARTUP_TWO_B);
  DBG_BSWM_ACTION_BSWM_ACT_REQSTARTUPTWOB_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Reset(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RESET_ENTRY();
  result = EcuM_SelectShutdownTarget(ECUM_STATE_RESET, 0);
  DBG_BSWM_ACTION_BSWM_ACT_RESET_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteModeReq_AppActive(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPACTIVE_ENTRY();
  result =  Rte_Write_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode(RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_ACTIVE);
  DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPACTIVE_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteModeReq_AppInactive(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPINACTIVE_ENTRY();
  result =  Rte_Write_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode(RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_INACTIVE);
  DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPINACTIVE_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteModeReq_AppStartup(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPSTARTUP_ENTRY();
  result =  Rte_Write_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode(RTE_MODE_BSWM_AppStateModeGroup_EB_INTGR_APP_STARTUP);
  DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPSTARTUP_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteStart(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_RTESTART_ENTRY();
  (void)Rte_Start();
  DBG_BSWM_ACTION_BSWM_ACT_RTESTART_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_GoOffOneA(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEA_ENTRY();
  result = Rte_Switch_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode(RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_A);
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEA_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_GoOffOneB(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEB_ENTRY();
  result = Rte_Switch_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode(RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_GO_OFF_ONE_B);
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEB_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_PrpShutdown(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_PRPSHUTDOWN_ENTRY();
  result = Rte_Switch_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode(RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_PRP_SHUTDOWN);
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_PRPSHUTDOWN_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_Run(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_RUN_ENTRY();
  result = Rte_Switch_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode(RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_RUN_TWO);
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_RUN_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RteSwitch_Startup(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_STARTUP_ENTRY();
  result = Rte_Switch_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode(RTE_MODE_BSWM_BswMModeGroup_EB_INTGR_BSWM_STARTUP_TWO_B);
  DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_STARTUP_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_RunTwo(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_RUNTWO_ENTRY();
  (void)Eb_Intgr_BswM_RunTwo();
  DBG_BSWM_ACTION_BSWM_ACT_RUNTWO_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_Sleep(void)
{
  Std_ReturnType result;
  DBG_BSWM_ACTION_BSWM_ACT_SLEEP_ENTRY();
  result = EcuM_SelectShutdownTarget(ECUM_STATE_SLEEP, 0);
  DBG_BSWM_ACTION_BSWM_ACT_SLEEP_EXIT(result);
  return result;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartDemOpCycleState_POWER(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STARTDEMOPCYCLESTATE_POWER_ENTRY();
  (void)Dem_SetOperationCycleState(DEM_OPCYC_POWER, DEM_CYCLE_STATE_START);
  DBG_BSWM_ACTION_BSWM_ACT_STARTDEMOPCYCLESTATE_POWER_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartInternalPDUs(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STARTINTERNALPDUS_ENTRY();
  BswM_ExecutePduGroupSwitchAction(&BswM_Context, 7U);
  DBG_BSWM_ACTION_BSWM_ACT_STARTINTERNALPDUS_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_QUALIFYDEMOPCYCLE_OBD_DCY_ENTRY();
  (void)Dem_SetCycleQualified(DEM_OPCYC_OBD_DCY);
  DBG_BSWM_ACTION_BSWM_ACT_QUALIFYDEMOPCYCLE_OBD_DCY_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STARTDEMOPCYCLESTATE_IGNITION_ENTRY();
  (void)Dem_SetOperationCycleState(DEM_OPCYC_IGNITION, DEM_CYCLE_STATE_START);
  DBG_BSWM_ACTION_BSWM_ACT_STARTDEMOPCYCLESTATE_IGNITION_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STARTDEMOPCYCLESTATE_OBD_DCY_ENTRY();
  (void)Dem_SetOperationCycleState(DEM_OPCYC_OBD_DCY, DEM_CYCLE_STATE_START);
  DBG_BSWM_ACTION_BSWM_ACT_STARTDEMOPCYCLESTATE_OBD_DCY_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STOPDEMOPCYCLESTATE_IGNITION_ENTRY();
  (void)Dem_SetOperationCycleState(DEM_OPCYC_IGNITION, DEM_CYCLE_STATE_END);
  DBG_BSWM_ACTION_BSWM_ACT_STOPDEMOPCYCLESTATE_IGNITION_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StopDemOpCycleState_POWER(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STOPDEMOPCYCLESTATE_POWER_ENTRY();
  (void)Dem_SetOperationCycleState(DEM_OPCYC_POWER, DEM_CYCLE_STATE_END);
  DBG_BSWM_ACTION_BSWM_ACT_STOPDEMOPCYCLESTATE_POWER_EXIT();
  return E_OK;
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY(void)
{
  DBG_BSWM_ACTION_BSWM_ACT_STOPDEMOPCYCLESTATE_OBD_DCY_ENTRY();
  (void)Dem_SetOperationCycleState(DEM_OPCYC_OBD_DCY, DEM_CYCLE_STATE_END);
  DBG_BSWM_ACTION_BSWM_ACT_STOPDEMOPCYCLESTATE_OBD_DCY_EXIT();
  return E_OK;
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprGetState(uint16 exprIndex)
{
  return BswM_LogicalExprTable[exprIndex].GetState();
}

STATIC FUNC(BswMResultType, BSWM_CODE) BswM_ExprGetResult(uint16 exprIndex)
{
  return BswM_LogicalExprTable[exprIndex].GetResult();
}

STATIC FUNC(Std_ReturnType, BSWM_CODE) BswM_ExecuteAction(uint16 actionIndex)
{
  return BswM_ActionTable[actionIndex]();
}

FUNC(Std_ReturnType, BSWM_CODE) BswM_HandleStaticRequest(uint32 channel, uint16 mode, uint8 source, uint8 sid)
{
  if (BswM_Context.RunTimeContext.IsInitialized == TRUE)
  {
    BswMModeRequestPortType* arrPtr = BswM_PtrModeRequestPortsTable[source];
    uint16 i;
    boolean eval;
    for (i= 0U; i < BswM_NumModeRequestPortsTable[source]; i++)
    {
      switch(source)
      {
        case BSWM_ECUM_WAKEUP_SOURCE:
        eval = ((((uint32)1U << arrPtr[i].channel) & channel) != 0U);
        break;
        default:
        eval = (arrPtr[i].channel == channel);
        break;
      }
      if (eval == TRUE)
      {
        BswM_HandleRequest(&BswM_Context, &arrPtr[i], mode, BSWM_ARBITRATION_STATIC_HANDLER_PORT, sid, arrPtr[i].base.isImmediate);
      }
    }
  }
  return E_OK;
}

#define BSWM_STOP_SEC_CODE
#include <BswM_MemMap.h>

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/
