
#ifndef BSWM_TRACE_H
#define BSWM_TRACE_H

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

/*==================[inclusions]============================================*/

/*==================[macros]================================================*/
#ifndef DBG_BSWM_INIT_ENTRY
/** \brief Entry point of function BswM_Init */
#define DBG_BSWM_INIT_ENTRY(a)
#endif

#ifndef DBG_BSWM_INIT_EXIT
/** \brief Exit point of function BswM_Init */
#define DBG_BSWM_INIT_EXIT(a)
#endif

#ifndef DBG_BSWM_GETVERSIONINFO_ENTRY
/** \brief Entry point of function BswM_GetVersionInfo */
#define DBG_BSWM_GETVERSIONINFO_ENTRY(a)
#endif

#ifndef DBG_BSWM_GETVERSIONINFO_EXIT
/** \brief Exit point of function BswM_GetVersionInfo */
#define DBG_BSWM_GETVERSIONINFO_EXIT(a)
#endif

#ifndef DBG_BSWM_DEINIT_ENTRY
/** \brief Entry point of function BswM_Deinit */
#define DBG_BSWM_DEINIT_ENTRY()
#endif

#ifndef DBG_BSWM_DEINIT_EXIT
/** \brief Exit point of function BswM_Deinit */
#define DBG_BSWM_DEINIT_EXIT()
#endif

#ifndef DBG_BSWM_REQUESTMODE_ENTRY
/** \brief Entry point of function BswM_RequestMode */
#define DBG_BSWM_REQUESTMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_REQUESTMODE_EXIT
/** \brief Exit point of function BswM_RequestMode */
#define DBG_BSWM_REQUESTMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_COMM_CURRENTMODE_ENTRY
/** \brief Entry point of function BswM_ComM_CurrentMode */
#define DBG_BSWM_COMM_CURRENTMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_COMM_CURRENTMODE_EXIT
/** \brief Exit point of function BswM_ComM_CurrentMode */
#define DBG_BSWM_COMM_CURRENTMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_COMM_CURRENTPNCMODE_ENTRY
/** \brief Entry point of function BswM_ComM_CurrentPNCMode */
#define DBG_BSWM_COMM_CURRENTPNCMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_COMM_CURRENTPNCMODE_EXIT
/** \brief Exit point of function BswM_ComM_CurrentPNCMode */
#define DBG_BSWM_COMM_CURRENTPNCMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_DCM_REQUESTCOMMUNICATIONMODE_ENTRY
/** \brief Entry point of function BswM_Dcm_RequestCommunicationMode */
#define DBG_BSWM_DCM_REQUESTCOMMUNICATIONMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_DCM_REQUESTCOMMUNICATIONMODE_EXIT
/** \brief Exit point of function BswM_Dcm_RequestCommunicationMode */
#define DBG_BSWM_DCM_REQUESTCOMMUNICATIONMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_DCM_COMMUNICATIONMODE_CURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_Dcm_CommunicationMode_CurrentState */
#define DBG_BSWM_DCM_COMMUNICATIONMODE_CURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_DCM_COMMUNICATIONMODE_CURRENTSTATE_EXIT
/** \brief Exit point of function BswM_Dcm_CommunicationMode_CurrentState */
#define DBG_BSWM_DCM_COMMUNICATIONMODE_CURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_DCM_REQUESTSESSIONMODE_ENTRY
/** \brief Entry point of function BswM_Dcm_RequestSessionMode */
#define DBG_BSWM_DCM_REQUESTSESSIONMODE_ENTRY(a)
#endif

#ifndef DBG_BSWM_DCM_REQUESTSESSIONMODE_EXIT
/** \brief Exit point of function BswM_Dcm_RequestSessionMode */
#define DBG_BSWM_DCM_REQUESTSESSIONMODE_EXIT(a)
#endif

#ifndef DBG_BSWM_DCM_REQUESTRESETMODE_ENTRY
/** \brief Entry point of function BswM_Dcm_RequestResetMode */
#define DBG_BSWM_DCM_REQUESTRESETMODE_ENTRY(a)
#endif

#ifndef DBG_BSWM_DCM_REQUESTRESETMODE_EXIT
/** \brief Exit point of function BswM_Dcm_RequestResetMode */
#define DBG_BSWM_DCM_REQUESTRESETMODE_EXIT(a)
#endif

#ifndef DBG_BSWM_DCM_APPLICATIONUPDATED_ENTRY
/** \brief Exit point of function BswM_Dcm_ApplicationUpdated */
#define DBG_BSWM_DCM_APPLICATIONUPDATED_ENTRY()
#endif

#ifndef DBG_BSWM_DCM_APPLICATIONUPDATED_EXIT
/** \brief Exit point of function BswM_Dcm_ApplicationUpdated */
#define DBG_BSWM_DCM_APPLICATIONUPDATED_EXIT()
#endif

#ifndef DBG_BSWM_CANSM_CURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_CanSM_CurrentState */
#define DBG_BSWM_CANSM_CURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_CANSM_CURRENTSTATE_EXIT
/** \brief Exit point of function BswM_CanSM_CurrentState */
#define DBG_BSWM_CANSM_CURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_ETHIF_PORTGROUPLINKSTATECHG_ENTRY
/** \brief Entry point of function BswM_EthIf_PortGroupLinkStateChg */
#define DBG_BSWM_ETHIF_PORTGROUPLINKSTATECHG_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_ETHIF_PORTGROUPLINKSTATECHG_EXIT
/** \brief Exit point of function BswM_EthIf_PortGroupLinkStateChg */
#define DBG_BSWM_ETHIF_PORTGROUPLINKSTATECHG_EXIT(a,b)
#endif

#ifndef DBG_BSWM_ETHSM_CURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_EthSM_CurrentState */
#define DBG_BSWM_ETHSM_CURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_ETHSM_CURRENTSTATE_EXIT
/** \brief Exit point of function BswM_EthSM_CurrentState */
#define DBG_BSWM_ETHSM_CURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_FRSM_CURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_FrSM_CurrentState */
#define DBG_BSWM_FRSM_CURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_FRSM_CURRENTSTATE_EXIT
/** \brief Exit point of function BswM_FrSM_CurrentState */
#define DBG_BSWM_FRSM_CURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_LINSM_CURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_LinSM_CurrentState */
#define DBG_BSWM_LINSM_CURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_LINSM_CURRENTSTATE_EXIT
/** \brief Exit point of function BswM_LinSM_CurrentState */
#define DBG_BSWM_LINSM_CURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_ECUM_CURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_EcuM_CurrentState */
#define DBG_BSWM_ECUM_CURRENTSTATE_ENTRY(a)
#endif

#ifndef DBG_BSWM_ECUM_CURRENTSTATE_EXIT
/** \brief Exit point of function BswM_EcuM_CurrentState */
#define DBG_BSWM_ECUM_CURRENTSTATE_EXIT(a)
#endif

#ifndef DBG_BSWM_ECUM_CURRENTWAKEUP_ENTRY
/** \brief Entry point of function BswM_EcuM_CurrentWakeup */
#define DBG_BSWM_ECUM_CURRENTWAKEUP_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_ECUM_CURRENTWAKEUP_EXIT
/** \brief Exit point of function BswM_EcuM_CurrentWakeup */
#define DBG_BSWM_ECUM_CURRENTWAKEUP_EXIT(a,b)
#endif

#ifndef DBG_BSWM_NMIF_CARWAKEUPINDICATION_ENTRY
/** \brief Entry point of function BswM_NmIf_CarWakeUpIndication */
#define DBG_BSWM_NMIF_CARWAKEUPINDICATION_ENTRY(a)
#endif

#ifndef DBG_BSWM_NMIF_CARWAKEUPINDICATION_EXIT
/** \brief Exit point of function BswM_NmIf_CarWakeUpIndication */
#define DBG_BSWM_NMIF_CARWAKEUPINDICATION_EXIT(a)
#endif

#ifndef DBG_BSWM_NVM_CURRENTBLOCKMODE_ENTRY
/** \brief Entry point of function BswM_NvM_CurrentBlockMode */
#define DBG_BSWM_NVM_CURRENTBLOCKMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_NVM_CURRENTBLOCKMODE_EXIT
/** \brief Exit point of function BswM_NvM_CurrentBlockMode */
#define DBG_BSWM_NVM_CURRENTBLOCKMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_NVM_CURRENTJOBMODE_ENTRY
/** \brief Entry point of function BswM_NvM_CurrentJobMode */
#define DBG_BSWM_NVM_CURRENTJOBMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_NVM_CURRENTJOBMODE_EXIT
/** \brief Exit point of function BswM_NvM_CurrentJobMode */
#define DBG_BSWM_NVM_CURRENTJOBMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_LINSM_CURRENTSCHEDULE_ENTRY
/** \brief Entry point of function BswM_LinSM_CurrentSchedule */
#define DBG_BSWM_LINSM_CURRENTSCHEDULE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_LINSM_CURRENTSCHEDULE_EXIT
/** \brief Exit point of function BswM_LinSM_CurrentSchedule */
#define DBG_BSWM_LINSM_CURRENTSCHEDULE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_LINTP_REQUESTMODE_ENTRY
/** \brief Entry point of function BswM_LinTp_RequestMode */
#define DBG_BSWM_LINTP_REQUESTMODE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_LINTP_REQUESTMODE_EXIT
/** \brief Exit point of function BswM_LinTp_RequestMode */
#define DBG_BSWM_LINTP_REQUESTMODE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_SD_CLIENTSERVICECURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_Sd_ClientServiceCurrentState */
#define DBG_BSWM_SD_CLIENTSERVICECURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_SD_CLIENTSERVICECURRENTSTATE_EXIT
/** \brief Exit point of function BswM_Sd_ClientServiceCurrentState */
#define DBG_BSWM_SD_CLIENTSERVICECURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_SD_CONSUMEDEVENTGROUPCURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_Sd_ConsumedEventGroupCurrentState */
#define DBG_BSWM_SD_CONSUMEDEVENTGROUPCURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_SD_CONSUMEDEVENTGROUPCURRENTSTATE_EXIT
/** \brief Exit point of function BswM_Sd_ConsumedEventGroupCurrentState */
#define DBG_BSWM_SD_CONSUMEDEVENTGROUPCURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_SD_EVENTHANDLERCURRENTSTATE_ENTRY
/** \brief Entry point of function BswM_Sd_EventHandlerCurrentState */
#define DBG_BSWM_SD_EVENTHANDLERCURRENTSTATE_ENTRY(a,b)
#endif

#ifndef DBG_BSWM_SD_EVENTHANDLERCURRENTSTATE_EXIT
/** \brief Exit point of function BswM_Sd_EventHandlerCurrentState */
#define DBG_BSWM_SD_EVENTHANDLERCURRENTSTATE_EXIT(a,b)
#endif

#ifndef DBG_BSWM_WDGM_REQUESTPARTITIONRESET_ENTRY
/** \brief Entry point of function BswM_WdgM_RequestPartitionReset */
#define DBG_BSWM_WDGM_REQUESTPARTITIONRESET_ENTRY(a)
#endif

#ifndef DBG_BSWM_WDGM_REQUESTPARTITIONRESET_EXIT
/** \brief Exit point of function BswM_WdgM_RequestPartitionReset */
#define DBG_BSWM_WDGM_REQUESTPARTITIONRESET_EXIT(a)
#endif

#ifndef DBG_BSWM_TRIGGERSTARTUPPHASE2_ENTRY
/** \brief Entry point of function BswM_TriggerStartUpPhase2 */
#define DBG_BSWM_TRIGGERSTARTUPPHASE2_ENTRY(a)
#endif

#ifndef DBG_BSWM_TRIGGERSTARTUPPHASE2_EXIT
/** \brief Exit point of function BswM_TriggerStartUpPhase2 */
#define DBG_BSWM_TRIGGERSTARTUPPHASE2_EXIT(a,b)
#endif

#ifndef DBG_BSWM_TRIGGERSLAVERTESTOP_ENTRY
/** \brief Entry point of function BswM_TriggerSlaveRTEStop */
#define DBG_BSWM_TRIGGERSLAVERTESTOP_ENTRY(a)
#endif

#ifndef DBG_BSWM_TRIGGERSLAVERTESTOP_EXIT
/** \brief Exit point of function BswM_TriggerSlaveRTEStop */
#define DBG_BSWM_TRIGGERSLAVERTESTOP_EXIT(a,b)
#endif

#ifndef DBG_BSWM_MAINFUNCTION_ENTRY
/** \brief Entry point of function BswM_MainFunction */
#define DBG_BSWM_MAINFUNCTION_ENTRY()
#endif

#ifndef DBG_BSWM_MAINFUNCTION_EXIT
/** \brief Exit point of function BswM_MainFunction */
#define DBG_BSWM_MAINFUNCTION_EXIT()
#endif

#ifndef DBG_BSWM_CORE_INIT_ENTRY
/** \brief Entry point of function BswM_Core_Init */
#define DBG_BSWM_CORE_INIT_ENTRY()
#endif

#ifndef DBG_BSWM_CORE_INIT_EXIT
/** \brief Exit point of function BswM_Core_Init */
#define DBG_BSWM_CORE_INIT_EXIT()
#endif

#ifndef DBG_BSWM_PARTITION_INIT_ENTRY
/** \brief Entry point of function BswM_Partition_Init */
#define DBG_BSWM_PARTITION_INIT_ENTRY(a)
#endif

#ifndef DBG_BSWM_PARTITION_INIT_EXIT
/** \brief Exit point of function BswM_Partition_Init */
#define DBG_BSWM_PARTITION_INIT_EXIT(a)
#endif

#ifndef DBG_BSWM_PB_INIT_ENTRY
/** \brief Entry point of function BswM_PB_Init */
#define DBG_BSWM_PB_INIT_ENTRY(a,b,c)
#endif

#ifndef DBG_BSWM_PB_INIT_EXIT
/** \brief Exit point of function BswM_PB_Init */
#define DBG_BSWM_PB_INIT_EXIT(a,b,c,d)
#endif

#ifndef DBG_BSWM_RT_INIT_ENTRY
/** \brief Entry point of function BswM_RT_Init */
#define DBG_BSWM_RT_INIT_ENTRY(a)
#endif

#ifndef DBG_BSWM_RT_INIT_EXIT
/** \brief Exit point of function BswM_RT_Init */
#define DBG_BSWM_RT_INIT_EXIT(a)
#endif

#ifndef DBG_BSWM_LT_INIT_ENTRY
/** \brief Entry point of function BswM_LT_Init */
#define DBG_BSWM_LT_INIT_ENTRY()
#endif

#ifndef DBG_BSWM_LT_INIT_EXIT
/** \brief Exit point of function BswM_LT_Init */
#define DBG_BSWM_LT_INIT_EXIT()
#endif

/* Dynamically generated macros */
#ifndef DBG_BSWM_ACTION_BSWM_ACT_ALLOWCOM_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_AllowCom */
#define DBG_BSWM_ACTION_BSWM_ACT_ALLOWCOM_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_ALLOWCOM_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_AllowCom */
#define DBG_BSWM_ACTION_BSWM_ACT_ALLOWCOM_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_DEMDEINIT_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_DemDeinit */
#define DBG_BSWM_ACTION_BSWM_ACT_DEMDEINIT_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_DEMDEINIT_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_DemDeinit */
#define DBG_BSWM_ACTION_BSWM_ACT_DEMDEINIT_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_DISABLE_RX_DISABLE_TX_CAN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can */
#define DBG_BSWM_ACTION_BSWM_ACT_DISABLE_RX_DISABLE_TX_CAN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_DISABLE_RX_DISABLE_TX_CAN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can */
#define DBG_BSWM_ACTION_BSWM_ACT_DISABLE_RX_DISABLE_TX_CAN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_DISABLE_TX_CAN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can */
#define DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_DISABLE_TX_CAN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_DISABLE_TX_CAN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can */
#define DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_DISABLE_TX_CAN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_ENABLE_TX_CAN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can */
#define DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_ENABLE_TX_CAN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_ENABLE_TX_CAN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can */
#define DBG_BSWM_ACTION_BSWM_ACT_ENABLE_RX_ENABLE_TX_CAN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEA_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_GoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEA_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEA_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_GoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEA_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEB_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_GoOffOneB */
#define DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEB_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEB_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_GoOffOneB */
#define DBG_BSWM_ACTION_BSWM_ACT_GOOFFONEB_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEA_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnGoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEA_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEA_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnGoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEA_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEB_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnGoOffOneB */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEB_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEB_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnGoOffOneB */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONGOOFFONEB_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONPOSTRUN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnPostRun */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONPOSTRUN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONPOSTRUN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnPostRun */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONPOSTRUN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONPRPSHUTDOWN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnPrpShutdown */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONPRPSHUTDOWN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONPRPSHUTDOWN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnPrpShutdown */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONPRPSHUTDOWN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONRUNTWO_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnRunTwo */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONRUNTWO_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONRUNTWO_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnRunTwo */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONRUNTWO_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOA_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnStartupTwoA */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOA_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOA_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnStartupTwoA */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOA_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOB_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_HookOnStartupTwoB */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOB_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOB_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_HookOnStartupTwoB */
#define DBG_BSWM_ACTION_BSWM_ACT_HOOKONSTARTUPTWOB_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_INITDRIVERINITTHREE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_InitDriverInitThree */
#define DBG_BSWM_ACTION_BSWM_ACT_INITDRIVERINITTHREE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_INITDRIVERINITTHREE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_InitDriverInitThree */
#define DBG_BSWM_ACTION_BSWM_ACT_INITDRIVERINITTHREE_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_NVMREADALL_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_NvMReadAll */
#define DBG_BSWM_ACTION_BSWM_ACT_NVMREADALL_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_NVMREADALL_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_NvMReadAll */
#define DBG_BSWM_ACTION_BSWM_ACT_NVMREADALL_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_DISABLE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_PncCanFD_Disable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_DISABLE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_DISABLE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_PncCanFD_Disable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_DISABLE_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_ENABLE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_PncCanFD_Enable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_ENABLE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_ENABLE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_PncCanFD_Enable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCANFD_ENABLE_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_DISABLE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_PncCan_Disable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_DISABLE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_DISABLE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_PncCan_Disable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_DISABLE_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_ENABLE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_PncCan_Enable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_ENABLE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_ENABLE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_PncCan_Enable */
#define DBG_BSWM_ACTION_BSWM_ACT_PNCCAN_ENABLE_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQGOOFFONEA_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_ReqGoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_REQGOOFFONEA_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQGOOFFONEA_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_ReqGoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_REQGOOFFONEA_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQPOSTRUN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_ReqPostRun */
#define DBG_BSWM_ACTION_BSWM_ACT_REQPOSTRUN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQPOSTRUN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_ReqPostRun */
#define DBG_BSWM_ACTION_BSWM_ACT_REQPOSTRUN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQPRPSHUTDOWN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_ReqPrpShutDown */
#define DBG_BSWM_ACTION_BSWM_ACT_REQPRPSHUTDOWN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQPRPSHUTDOWN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_ReqPrpShutDown */
#define DBG_BSWM_ACTION_BSWM_ACT_REQPRPSHUTDOWN_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQRUNTWO_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_ReqRunTwo */
#define DBG_BSWM_ACTION_BSWM_ACT_REQRUNTWO_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQRUNTWO_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_ReqRunTwo */
#define DBG_BSWM_ACTION_BSWM_ACT_REQRUNTWO_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQSTARTUPTWOB_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_ReqStartupTwoB */
#define DBG_BSWM_ACTION_BSWM_ACT_REQSTARTUPTWOB_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_REQSTARTUPTWOB_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_ReqStartupTwoB */
#define DBG_BSWM_ACTION_BSWM_ACT_REQSTARTUPTWOB_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RESET_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_Reset */
#define DBG_BSWM_ACTION_BSWM_ACT_RESET_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RESET_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_Reset */
#define DBG_BSWM_ACTION_BSWM_ACT_RESET_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPACTIVE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteModeReq_AppActive */
#define DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPACTIVE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPACTIVE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteModeReq_AppActive */
#define DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPACTIVE_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPINACTIVE_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteModeReq_AppInactive */
#define DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPINACTIVE_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPINACTIVE_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteModeReq_AppInactive */
#define DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPINACTIVE_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPSTARTUP_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteModeReq_AppStartup */
#define DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPSTARTUP_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPSTARTUP_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteModeReq_AppStartup */
#define DBG_BSWM_ACTION_BSWM_ACT_RTEMODEREQ_APPSTARTUP_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESTART_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteStart */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESTART_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESTART_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteStart */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESTART_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEA_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteSwitch_GoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEA_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEA_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteSwitch_GoOffOneA */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEA_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEB_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteSwitch_GoOffOneB */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEB_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEB_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteSwitch_GoOffOneB */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_GOOFFONEB_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_PRPSHUTDOWN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteSwitch_PrpShutdown */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_PRPSHUTDOWN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_PRPSHUTDOWN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteSwitch_PrpShutdown */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_PRPSHUTDOWN_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_RUN_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteSwitch_Run */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_RUN_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_RUN_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteSwitch_Run */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_RUN_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_STARTUP_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RteSwitch_Startup */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_STARTUP_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_STARTUP_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RteSwitch_Startup */
#define DBG_BSWM_ACTION_BSWM_ACT_RTESWITCH_STARTUP_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RUNTWO_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_RunTwo */
#define DBG_BSWM_ACTION_BSWM_ACT_RUNTWO_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_RUNTWO_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_RunTwo */
#define DBG_BSWM_ACTION_BSWM_ACT_RUNTWO_EXIT()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_SLEEP_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_Sleep */
#define DBG_BSWM_ACTION_BSWM_ACT_SLEEP_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_SLEEP_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_Sleep */
#define DBG_BSWM_ACTION_BSWM_ACT_SLEEP_EXIT(a)
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_STARTINTERNALPDUS_ENTRY
/** \brief Entry point of function BswM_Action_BswM_Act_StartInternalPDUs */
#define DBG_BSWM_ACTION_BSWM_ACT_STARTINTERNALPDUS_ENTRY()
#endif

#ifndef DBG_BSWM_ACTION_BSWM_ACT_STARTINTERNALPDUS_EXIT
/** \brief Exit point of function BswM_Action_BswM_Act_StartInternalPDUs */
#define DBG_BSWM_ACTION_BSWM_ACT_STARTINTERNALPDUS_EXIT()
#endif

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[external data]=========================================*/

/*==================[end of file]===========================================*/
/** @} doxygen end group definition */
#endif /* ifndef BSWM_TRACE_H */
/*==================[end of file]============================================*/

