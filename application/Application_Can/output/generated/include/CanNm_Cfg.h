/**
 * \file
 *
 * \brief AUTOSAR CanNm
 *
 * This file contains the implementation of the AUTOSAR
 * module CanNm.
 *
 * \version 6.20.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/* !LINKSTO CANNM304,1 */
#ifndef CANNM_CFG_H
#define CANNM_CFG_H

/*------------------[Defensive programming]---------------------------------*/

#if (defined CANNM_DEFENSIVE_PROGRAMMING_ENABLED)
#error CANNM_DEFENSIVE_PROGRAMMING_ENABLED is already defined
#endif
/** \brief Defensive programming usage
 **
 ** En- or disables the usage of the defensive programming */
#define CANNM_DEFENSIVE_PROGRAMMING_ENABLED   STD_OFF

#if (defined CANNM_PRECONDITION_ASSERT_ENABLED)
#error CANNM_PRECONDITION_ASSERT_ENABLED is already defined
#endif
/** \brief Precondition assertion usage
 **
 ** En- or disables the usage of precondition assertion checks */
#define CANNM_PRECONDITION_ASSERT_ENABLED     STD_OFF

#if (defined CANNM_POSTCONDITION_ASSERT_ENABLED)
#error CANNM_POSTCONDITION_ASSERT_ENABLED is already defined
#endif
/** \brief Postcondition assertion usage
 **
 ** En- or disables the usage of postcondition assertion checks */
#define CANNM_POSTCONDITION_ASSERT_ENABLED    STD_OFF

#if (defined CANNM_UNREACHABLE_CODE_ASSERT_ENABLED)
#error CANNM_UNREACHABLE_CODE_ASSERT_ENABLED is already defined
#endif
/** \brief Unreachable code assertion usage
 **
 ** En- or disables the usage of unreachable code assertion checks */
#define CANNM_UNREACHABLE_CODE_ASSERT_ENABLED STD_OFF

#if (defined CANNM_INVARIANT_ASSERT_ENABLED)
#error CANNM_INVARIANT_ASSERT_ENABLED is already defined
#endif
/** \brief Invariant assertion usage
 **
 ** En- or disables the usage of invariant assertion checks */
#define CANNM_INVARIANT_ASSERT_ENABLED        STD_OFF

#if (defined CANNM_STATIC_ASSERT_ENABLED)
#error CANNM_STATIC_ASSERT_ENABLED is already defined
#endif
/** \brief Static assertion usage
 **
 ** En- or disables the usage of static assertion checks */
#define CANNM_STATIC_ASSERT_ENABLED           STD_OFF






#if (defined CANNM_DET_RUNTIME_CHECKS)
#error CANNM_DET_RUNTIME_CHECKS is already defined
#endif
/** \brief DET runtime checks reporting
 **
 ** En- or disables the reporting of the DET runtime checks */
#define CANNM_DET_RUNTIME_CHECKS   STD_ON




/*==================[includes]==============================================*/

#include <TSAutosar.h>    /* EB specific standard types      */
/* !LINKSTO CanNm.EB.CanNmNodeIdCallbackHeaderName,1 */


#ifndef CANNM_NO_CFGCLASSMIX_REQUIRED
#include <CanNm_SymbolicNames_PBcfg.h>
#endif /* CANNM_NO_CFGCLASSMIX_REQUIRED */

#undef CANNM_NO_CFGCLASSMIX_REQUIRED








/*==================[macros]================================================*/
#if (defined CANNM_CFG_SIGNATURE)
#error CANNM_CFG_SIGNATURE is already defined
#endif

#define CANNM_CFG_SIGNATURE 4148416505U /* Compile time verification value */

#if (defined CANNM_PUBLIC_INFO_SIGNATURE)
#error CANNM_PUBLIC_INFO_SIGNATURE is already defined
#endif

#define CANNM_PUBLIC_INFO_SIGNATURE 1778921991U /* PublicInfoSignature */

#if (defined CANNM_PBCFGM_SUPPORT_ENABLED)
#error CANNM_PBCFGM_SUPPORT_ENABLED is already defined
#endif
/* !LINKSTO CanNm.Impl.PbCfgM,1 */
#define CANNM_PBCFGM_SUPPORT_ENABLED STD_OFF

/* ----- Pre-processor switch to enable/diable relocateable postbuild config ----- */
#if (defined CANNM_RELOCATABLE_CFG_ENABLE)
#error CANNM_RELOCATABLE_CFG_ENABLE is already defined
#endif

/* !LINKSTO CanNm.Impl.Relocatable,1 */
#if (CANNM_PBCFGM_SUPPORT_ENABLED == STD_ON)
#define CANNM_RELOCATABLE_CFG_ENABLE STD_ON
#else
#define CANNM_RELOCATABLE_CFG_ENABLE STD_ON
#endif

#if (defined CANNM_VERSION_INFO_API)
#error CANNM_VERSION_INFO_API is already defined
#endif
/* !LINKSTO CANNM003_Conf,1 */
#define CANNM_VERSION_INFO_API            STD_OFF

#if (defined CANNM_COM_CONTROL_ENABLED)
#error CANNM_COM_CONTROL_ENABLED is already defined
#endif
/* !LINKSTO CANNM013_Conf,1, CANNM168,1 */
#define CANNM_COM_CONTROL_ENABLED         STD_ON

#if (defined CANNM_STATE_CHANGE_IND_ENABLED)
#error CANNM_STATE_CHANGE_IND_ENABLED is already defined
#endif
/* !LINKSTO CANNM012_Conf,1 */
#define CANNM_STATE_CHANGE_IND_ENABLED    STD_OFF

#if (defined CANNM_PASSIVE_MODE_ENABLED)
#error CANNM_PASSIVE_MODE_ENABLED is already defined
#endif
/* !LINKSTO CANNM010_Conf,1, CANNM161,1 */
#define CANNM_PASSIVE_MODE_ENABLED        STD_OFF

#if (defined CANNM_PDU_RX_INDICATION_ENABLED)
#error CANNM_PDU_RX_INDICATION_ENABLED is already defined
#endif
/* !LINKSTO CANNM011_Conf,1 */
#define CANNM_PDU_RX_INDICATION_ENABLED   STD_OFF

#if (defined CANNM_IMMEDIATE_RESTART_ENABLED)
#error CANNM_IMMEDIATE_RESTART_ENABLED is already defined
#endif
/* !LINKSTO CANNM009_Conf,1 */
#define CANNM_IMMEDIATE_RESTART_ENABLED   STD_OFF

#if (defined CANNM_IMMEDIATE_TXCONF_ENABLED)
#error CANNM_IMMEDIATE_TXCONF_ENABLED is already defined
#endif
/* !LINKSTO CANNM041_Conf,1, CANNM071,1 */
#define CANNM_IMMEDIATE_TXCONF_ENABLED    STD_OFF

#if (defined CANNM_USER_DATA_ENABLED)
#error CANNM_USER_DATA_ENABLED is already defined
#endif
/* !LINKSTO CANNM004_Conf,1, CANNM158,1 */
#define CANNM_USER_DATA_ENABLED           STD_ON

#if (defined CANNM_COM_USER_DATA_SUPPORT)
#error CANNM_COM_USER_DATA_SUPPORT is already defined
#endif
/* !LINKSTO CANNM044_Conf,1 */
#define CANNM_COM_USER_DATA_SUPPORT       STD_ON

#if (defined CANNM_REMOTE_SLEEP_IND_ENABLED)
#error CANNM_REMOTE_SLEEP_IND_ENABLED is already defined
#endif
/* !LINKSTO CANNM055_Conf,1, CANNM149,1 */
#define CANNM_REMOTE_SLEEP_IND_ENABLED    STD_OFF

#if (defined CANNM_NODE_ID_ENABLED)
#error CANNM_NODE_ID_ENABLED is already defined
#endif

/* !LINKSTO CanNm.EB.CanNmNodeIdEnabled,1 */
#define CANNM_NODE_ID_ENABLED             STD_ON

#if (defined CANNM_REPEAT_MSG_IND_ENABLED)
#error CANNM_REPEAT_MSG_IND_ENABLED is already defined
#endif
/* !LINKSTO CANNM005_Conf,1 */
#define CANNM_REPEAT_MSG_IND_ENABLED      STD_OFF

#if (defined CANNM_NODE_DETECTION_ENABLED)
#error CANNM_NODE_DETECTION_ENABLED is already defined
#endif
/* !LINKSTO CANNM007_Conf,1 */
#define CANNM_NODE_DETECTION_ENABLED      STD_OFF

#if (defined CANNM_BUS_SYNCHRONIZATION_ENABLED)
#error CANNM_BUS_SYNCHRONIZATION_ENABLED is already defined
#endif
/* !LINKSTO CANNM006_Conf,1, CANNM185,1 */
#define CANNM_BUS_SYNCHRONIZATION_ENABLED STD_OFF

#if (defined CANNM_BUS_LOAD_REDUCTION_ENABLED)
#error CANNM_BUS_LOAD_REDUCTION_ENABLED is already defined
#endif
/* !LINKSTO CANNM040_Conf,1, CANNM052,1 */
#define CANNM_BUS_LOAD_REDUCTION_ENABLED  STD_OFF

#if (defined CANNM_IMMEDIATE_TRANSMISSION)
#error CANNM_IMMEDIATE_TRANSMISSION is already defined
#endif
#define CANNM_IMMEDIATE_TRANSMISSION  STD_ON

#if (defined CANNM_DEV_ERROR_DETECT)
#error CANNM_DEV_ERROR_DETECT is already defined
#endif
/** \brief Switch for DET usage */
/* !LINKSTO CANNM002_Conf,1, CANNM188,1 */
#define CANNM_DEV_ERROR_DETECT            STD_ON

#if (defined CANNM_NUMBER_OF_CHANNELS)
#error CANNM_NUMBER_OF_CHANNELS is already defined
#endif
/* !LINKSTO CANNM014_Conf,1 */
/** \brief Maximum number of channels */
#define CANNM_NUMBER_OF_CHANNELS               1U

#if (defined CANNM_INDEXFROMNMCHANNELHANDLE_NUM)
#error CANNM_INDEXFROMNMCHANNELHANDLE_NUM is already defined
#endif
/** \brief Number of elements in array CanNm_IndexFromComMChannelHandle[] */
#define CANNM_INDEXFROMNMCHANNELHANDLE_NUM     1U

#if (defined CANNM_ACTIVE_WAKEUP_BIT_ENABLED)
#error CANNM_ACTIVE_WAKEUP_BIT_ENABLED is already defined
#endif
/* !LINKSTO CanNm.CanNmActiveWakeupBitEnabled,1 */
/** \brief Macro to indicate if Active wake up bit is present in CBV */
#define CANNM_ACTIVE_WAKEUP_BIT_ENABLED        STD_ON

#if (defined CANNM_NODEID_CALLBACK_ENABLED)
#error CANNM_NODEID_CALLBACK_ENABLED is already defined
#endif
/* !LINKSTO CanNm.EB.CanNmNodeIdCallbackName,1 */
/** \brief Macro to indicate if Node Id callback is enabled */
#define CANNM_NODEID_CALLBACK_ENABLED          STD_OFF



#if (defined CANNM_CARWAKEUP_RX_ENABLED)
#error CANNM_CARWAKEUP_RX_ENABLED is already defined
#endif

#define CANNM_CARWAKEUP_RX_ENABLED        STD_OFF

/*------------------[PN Extensions]-------------------------------------*/

/* !LINKSTO CANNM415,1 */
/* !LINKSTO CanNm.R20-11.ECUC_CanNm_00061,1 */
#if (defined CANNM_PN_INFO_LENGTH)
#error CANNM_PN_INFO_LENGTH is already defined
#endif
#define CANNM_PN_INFO_LENGTH    6U

/* Size of array for mapping PN EIRA timer */


#if (defined CANNM_EIRA_MAX_TIMER_SIZE)
#error CANNM_EIRA_MAX_TIMER_SIZE is already defined
#endif

#define CANNM_EIRA_MAX_TIMER_SIZE    48U  /* CanNm Eira Maximum Timer array size */


/* !LINKSTO CanNm.R20-11.ECUC_CanNm_00060,1 */
#if (defined CANNM_PN_INFO_OFFSET)
#error CANNM_PN_INFO_OFFSET is already defined
#endif
#define CANNM_PN_INFO_OFFSET                   2U

/** CanNmPnEiraCalcEnabled **/
/* !LINKSTO CANNM070_Conf,1 */
#if (defined CANNM_PN_EIRA_CALC_ENABLED)
#error CANNM_PN_EIRA_CALC_ENABLED is already defined
#endif
#define CANNM_PN_EIRA_CALC_ENABLED             STD_ON

/** CanNmPnEraCalcEnabled **/
/* !LINKSTO CANNM067_Conf,1 */
#if (defined CANNM_PN_ERA_CALC_ENABLED)
#error CANNM_PN_ERA_CALC_ENABLED is already defined
#endif

#define CANNM_PN_ERA_CALC_ENABLED              STD_OFF

/** CanNmPnResetTime **/
#if (defined CANNM_PN_RESET_TIME)
#error CANNM_PN_RESET_TIME is already defined
#endif
#define CANNM_PN_RESET_TIME     64U

#if (defined CANNM_PN_EIRA_PDUID)
#error CANNM_PN_EIRA_PDUID is already defined
#endif
#define CANNM_PN_EIRA_PDUID      1U/* CanNmPnEraRx Id*/


        
/** CanNmSynchronizedPncShutdownEnabled **/
/* !LINKSTO ECUC_CanNm_00097,1 */
#if (defined CANNM_PN_SYNCHRONIZED_SHUTDOWN_ENABLED)
#error CANNM_PN_SYNCHRONIZED_SHUTDOWN_ENABLED is already defined
#endif
#define CANNM_PN_SYNCHRONIZED_SHUTDOWN_ENABLED             STD_OFF

/** CanNmPnShutdownMessageRetransmissionDuration **/
#if (defined CANNM_PN_SHUTDOWN_MESSAGE_RETRANSMISSION_DURATION)
#error CANNM_PN_SHUTDOWN_MESSAGE_RETRANSMISSION_DURATION is already defined
#endif

#define CANNM_PN_SHUTDOWN_MESSAGE_RETRANSMISSION_DURATION 0


#if (defined CANNM_PN_SYNC_SHUTDOWN_ERROR_REACTION_ENABLED)
#error CANNM_PN_SYNC_SHUTDOWN_ERROR_REACTION_ENABLED is already defined
#endif
#define CANNM_PN_SYNC_SHUTDOWN_ERROR_REACTION_ENABLED             STD_OFF

/** Number of active gateways with synchronized shutdown enabled **/
#if (defined CANNM_PN_GATEWAY_TYPE_ACTIVE_NUM)
#error CANNM_PN_GATEWAY_TYPE_ACTIVE_NUM is already defined
#endif
#define CANNM_PN_GATEWAY_TYPE_ACTIVE_NUM                 0

/** Number of passive gateways with synchronized shutdown enabled **/
#if (defined CANNM_PN_GATEWAY_TYPE_PASSIVE_NUM)
#error CANNM_PN_GATEWAY_TYPE_PASSIVE_NUM is already defined
#endif
#define CANNM_PN_GATEWAY_TYPE_PASSIVE_NUM                 0

#define CANNM_PN_SUPPORTED  STD_ON


/** \brief Enable multicore support*/
#if (defined CANNM_MULTICORE_ENABLED)
#error CANNM_MULTICORE_ENABLED already defined
#endif

/* !LINKSTO CanNm.Config.CanNmMultiCoreSupport,1 */
#define CANNM_MULTICORE_ENABLED           STD_OFF

/* !LINKSTO CanNm.EB.Config.CanNmChannelMultiCoreSupport,1 */
/** \brief Enable multicore support*/
#if (defined CANNM_MULTICORE_CHANNEL_ENABLED)
#error CANNM_MULTICORE_CHANNEL_ENABLED already defined
#endif

      
    
    #define CANNM_MULTICORE_CHANNEL_SUPPORT   STD_OFF

/*------------------[Symbolic Name for CanNmRxPduId]------------------------*/

/* !LINKSTO CanNm.EB.SymbolicName.CanNmRxPduId.NoShortName,1, CanNm.EB.SymbolicName.ecuc_sws_2108_3,1 */
/* It is possible to change SHORT-NAME of containers with multiplicity
 * of one within EB tresos Studio. So, the symbolic name generation shall be
 * according to requirement [ecuc_sws_2108] if a SHORT-NAME for the container
 * is specified and the macro is defined as follows:
 *   #define CanNmConf_CanNmRxPdu_<CTR_SHORT_NAME>
 *
 * If a SHORT-NAME is not specified the macro is defined as follows:
 *   #define CanNmConf_CanNmChannelConfig_<CHANNEL_NAME>_<CTR_NAME>
 */
          
#if (defined CanNmConf_CanNmChannelConfig_CanNmCluster_Nm_Pdu_CanIn_592R)
#error CanNmConf_CanNmChannelConfig_CanNmCluster_Nm_Pdu_CanIn_592R already defined
#endif

/** \brief Symbolic name for the CanNm channel "CanNmCluster" */
#define CanNmConf_CanNmChannelConfig_CanNmCluster_Nm_Pdu_CanIn_592R  0U

#if (defined CANNM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined CanNmCluster_Nm_Pdu_CanIn_592R)
#error CanNmCluster_Nm_Pdu_CanIn_592R already defined
#endif

/** \brief Export symbolic name value without prefix (AUTOSAR version <= 3.1 rev4) 0 */
#define CanNmCluster_Nm_Pdu_CanIn_592R 0U

#if (defined CanNm_CanNmCluster_Nm_Pdu_CanIn_592R)
#error CanNm_CanNmCluster_Nm_Pdu_CanIn_592R already defined
#endif

/** \brief Export symbolic name value with module abbreviation as prefix
 ** only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) */
#define CanNm_CanNmCluster_Nm_Pdu_CanIn_592R 0U
#endif /* CANNM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/*------------[Symbolic Name for CanNmTxConfirmationPduId]-------------------*/

/* !LINKSTO CanNm.EB.SymbolicName.ecuc_sws_2108_1,2, CanNm.EB.SymbolicName.CanNmTxConfirmationPduId.NoShortName,1 */
/* It is possible to change short name values of containers with multiplicity
 * of one within EB tresos Studio. So, the symbolic name generation shall be
 * according to requirement [ecuc_sws_2108] if a SHORT-NAME for the container
 * is specified and the macro is defined as follows:
 *   #define CanNmConf_CanNmTxPdu_<CTR_SHORT_NAME>
 *
 * If a SHORT-NAME is not specified the macro is defined as follows:
 *   #define CanNmConf_CanNmChannelConfig_<CHANNEL_NAME>_<CTR_NAME>
 */

          
#if (defined CanNmConf_CanNmTxPdu_Nm_Pdu_CanOut_593T)
#error CanNmConf_CanNmTxPdu_Nm_Pdu_CanOut_593T already defined
#endif

/** \brief Symbolic name for the CanNm channel "CanNmCluster" */
#define CanNmConf_CanNmTxPdu_Nm_Pdu_CanOut_593T  0U

#if (defined CANNM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined CanNmCluster_CanNmTxPdu)
#error CanNmCluster_CanNmTxPdu already defined
#endif

/** \brief Export symbolic name value without prefix (AUTOSAR version <= 3.1 rev4) 0 */
#define CanNmCluster_CanNmTxPdu  0U

#if (defined CanNm_CanNmCluster_CanNmTxPdu)
#error CanNm_CanNmCluster_CanNmTxPdu already defined
#endif

/** \brief Export symbolic name value with module abbreviation as prefix
 ** only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) */
#define CanNm_CanNmCluster_CanNmTxPdu  0U
#endif /* CANNM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/*-------------[Symbolic Name for CanNmTxUserDataPduId]--------------------*/

/* !LINKSTO CanNm.EB.SymbolicName.ecuc_sws_2108_2,1 */
/* !LINKSTO CanNm.EB.SymbolicName.CanNmTxUserDataPduId.NoShortName,1 */
/* It is possible to change short name values of containers with multiplicity
 * of one within EB tresos Studio. So, the symbolic name generation shall be
 * according to requirement [ecuc_sws_2108] if a SHORT-NAME for the container
 * is specified and the macro is defined as follows:
 *   #define CanNmConf_CanNmUserDataTxPdu_<CTR_SHORT_NAME>
 *
 * If a SHORT-NAME is not specified the macro is defined as follows:
 *   #define CanNmConf_CanNmChannelConfig_<CHANNEL_NAME>_<CTR_NAME>
 */

          
#if (defined CanNmConf_CanNmUserDataTxPdu_Nm_Pdu_CanOut_NmComUserData_593T)
#error CanNmConf_CanNmUserDataTxPdu_Nm_Pdu_CanOut_NmComUserData_593T already defined
#endif

/** \brief Symbolic name for the CanNm channel "CanNmCluster" */
#define CanNmConf_CanNmUserDataTxPdu_Nm_Pdu_CanOut_NmComUserData_593T  0U

#if (defined CANNM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined CanNmCluster_CanNmUserDataTxPdu)
#error CanNmCluster_CanNmUserDataTxPdu already defined
#endif

/** \brief Export symbolic name value without prefix (AUTOSAR version <= 3.1 rev4) 0 */
#define CanNmCluster_CanNmUserDataTxPdu  0U

#if (defined CanNm_CanNmCluster_CanNmUserDataTxPdu)
#error CanNm_CanNmCluster_CanNmUserDataTxPdu already defined
#endif

/** \brief Export symbolic name value with module abbreviation as prefix
 ** only (3.1 rev4 < AUTOSAR version <= AUTOSAR 4.0 rev2) */
#define CanNm_CanNmCluster_CanNmUserDataTxPdu  0U
#endif /* CANNM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/*------------------[Hsm configuration]-------------------------------------*/

#if (defined CANNM_HSM_INST_MULTI_ENABLED)
#error CANNM_HSM_INST_MULTI_ENABLED already defined
#endif

#if (CANNM_NUMBER_OF_CHANNELS > 1U)
#define CANNM_HSM_INST_MULTI_ENABLED STD_ON
#else
#define CANNM_HSM_INST_MULTI_ENABLED STD_OFF
#endif

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef CANNM_CFG_H */
/*==================[end of file]===========================================*/
