


/**
 * \file
 *
 * \brief AUTOSAR PbcfgM
 *
 * This file contains the implementation of the AUTOSAR
 * module PbcfgM.
 *
 * \version 1.4.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */


/* MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 1.3 (required)
 *    There shall be no occurrence of undefined or critical unspecified behaviour.
 *
 *    Reason:
 *    The postbuild macro TS_MAKEREF2CFG requires the usage of the
 *    C standard macro 'offsetof'.
 *    According to the C90 standard, the usage of 'offsetof' produces
 *    an undefined behaviour when the member designator parameter
 *    is a bit-field or when it is an invalid right operator of the
 *    '.' operator for the type parameter.
 *    This is not the case here as the parameter of TS_MAKEREF2CFG
 *    is always a member of TS_PB_CFG_LAYOUT_TYPE and bitfields are
 *    never used when defining the postbuild structure members.
 *
 * MISRAC2012-2) Deviated Rule: 11.4 (advisory)
 *    A cast should not be performed between a pointer type and an integral
 *    type.
 *
 *    Reason:
 *    Relocatable postbuild macro requires the cast between pointer and
 *    integral type.
 *
 * MISRAC2012-3) Deviated Rule: 11.9 (required)
 *    The macro NULL shall be the only permitted form of integer null pointer constant.
 *
 *    Reason:
 *    Macros are used in order to check the alignment for different data types.
 *
 */

/*==================[inclusions]=============================================*/

#include <PbcfgM_PBcfg.h>
#include <TSAutosar.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_NAME PbcfgM_Config
#define TS_PB_CFG_LAYOUT_TYPE PbcfgM_ConstConfigLayoutType
#include <TSPBConfig_Init.h>

/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define PBCFGM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <PbcfgM_MemMap.h>

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <START> */
PbcfgM_ConstConfigLayoutType PbcfgM_Config = {
    { /* PbcfgM_RootConfig */
        UINT32_C( 2147485970 ), /* PlatformSignature */
        UINT32_C( 3958107115 ), /* LcfgSignature */
        UINT32_C( 2582618360 ), /* CfgSignature */
        UINT32_C( 3637215948 ), /* PublicInfoSignature */
        UINT16_C( 1 ), /* numConfigEntry */
        TS_MAKEREF2CFG( ConfigEntries[0] ) /* ConfigEntryRef */
    },
    { /* ConfigEntries */
        { /* ConfigEntries[0] */
            TS_MAKEREF2CFG( ConfigBswM ), /* ConfigRef */
            UINT16_C( 42 ), /* ModuleId */
            UINT16_C( 0 ) /* InstanceId */
        }
    },


#undef TS_PB_CFG_LAYOUT_TYPE
#define TS_PB_CFG_LAYOUT_TYPE BswM_ConfigLayoutType

#undef TS_PB_CFG_NAME
#define TS_PB_CFG_NAME PbcfgM_Config.ConfigBswM
#include <TSPBConfig_Init.h>

    { /* ConfigBswM */
        { /* BswM_RootConfig */
            { /* BswM_RootConfig[0] */
                TS_MAKEREF2CFG( RuleTable[0] ), /* RuleTable */
                TS_MAKEREF2CFG( RuleDependencyTable[0] ), /* RuleDependencyTable */
                TS_MAKEREF2CFG( RuleDependencyListRangeTable[0] ), /* RuleDependencyListRangeTable */
                TS_MAKEREF2CFG( ActionListTable[0] ), /* ActionListTable */
                TS_MAKEREF2CFG( ActionListItemTable[0] ), /* ActionListItemTable */
                TS_MAKEREF2CFG( PduGroupSwitchActionTable[0] ), /* PduGroupSwitchActionTable */
                TS_MAKEREF2CFG( UInt8InitialValuesTable[0] ), /* UInt8InitialValuesTable */
                TS_MAKEREF2CFG( UInt16InitialValuesTable[0] ), /* UInt16InitialValuesTable */
                TS_MAKENULLREF2CFG, /* UInt32InitialValuesTable */
                UINT32_C( 2147485970 ), /* PlatformSignature */
                UINT32_C( 3986728524 ), /* LcfgSignature */
                UINT32_C( 1248659870 ), /* CfgSignature */
                UINT32_C( 3613472969 ), /* PublicInfoSignature */
                UINT16_C( 16 ), /* NumRules */
                UINT16_C( 16 ), /* NumRulesDeferred */
                UINT16_C( 17 ) /* NumActionLists */
            }
        },
        { /* RuleTable */
            { /* RuleTable[0] -- BswM_EB_Rule_BswM_Rule_StartupTwoB */
                UINT16_C( 15 ), /* ID */
                UINT16_C( 16 ), /* LogicalExprIndex */
                UINT16_C( 16 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[1] -- BswM_EB_Rule_BswM_Rule_StartupTwoA */
                UINT16_C( 14 ), /* ID */
                UINT16_C( 15 ), /* LogicalExprIndex */
                UINT16_C( 15 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 2 ) /* RuleInitState */
            },
            { /* RuleTable[2] -- BswM_EB_Rule_BswM_Rule_RunTwo */
                UINT16_C( 13 ), /* ID */
                UINT16_C( 13 ), /* LogicalExprIndex */
                UINT16_C( 13 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[3] -- BswM_EB_Rule_BswM_Rule_PrpShutdown */
                UINT16_C( 12 ), /* ID */
                UINT16_C( 11 ), /* LogicalExprIndex */
                UINT16_C( 11 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[4] -- BswM_EB_Rule_BswM_Rule_PncCanStop */
                UINT16_C( 11 ), /* ID */
                UINT16_C( 8 ), /* LogicalExprIndex */
                UINT16_C( 5 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[5] -- BswM_EB_Rule_BswM_Rule_PncCanStart */
                UINT16_C( 10 ), /* ID */
                UINT16_C( 7 ), /* LogicalExprIndex */
                UINT16_C( 6 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[6] -- BswM_EB_Rule_BswM_Rule_PncCanFDStop */
                UINT16_C( 9 ), /* ID */
                UINT16_C( 6 ), /* LogicalExprIndex */
                UINT16_C( 7 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[7] -- BswM_EB_Rule_BswM_Rule_PncCanFDStart */
                UINT16_C( 8 ), /* ID */
                UINT16_C( 5 ), /* LogicalExprIndex */
                UINT16_C( 8 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[8] -- BswM_EB_Rule_BswM_Rule_GoOffOneB */
                UINT16_C( 7 ), /* ID */
                UINT16_C( 4 ), /* LogicalExprIndex */
                UINT16_C( 4 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[9] -- BswM_EB_Rule_BswM_Rule_GoOffOneA */
                UINT16_C( 6 ), /* ID */
                UINT16_C( 3 ), /* LogicalExprIndex */
                UINT16_C( 3 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[10] -- BswM_EB_Rule_BswM_Rule_ComM_SilentCom */
                UINT16_C( 5 ), /* ID */
                UINT16_C( 1 ), /* LogicalExprIndex */
                UINT16_C( 1 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[11] -- BswM_EB_Rule_BswM_Rule_ComM_NoCom */
                UINT16_C( 4 ), /* ID */
                UINT16_C( 1 ), /* LogicalExprIndex */
                UINT16_C( 1 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[12] -- BswM_EB_Rule_BswM_Rule_ComM_FullCom */
                UINT16_C( 3 ), /* ID */
                UINT16_C( 0 ), /* LogicalExprIndex */
                UINT16_C( 0 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[13] -- BswM_EB_Rule_BswMRule_RunTwoToPostRun */
                UINT16_C( 2 ), /* ID */
                UINT16_C( 14 ), /* LogicalExprIndex */
                UINT16_C( 14 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[14] -- BswM_EB_Rule_BswMRule_PostRunToRunTwo */
                UINT16_C( 1 ), /* ID */
                UINT16_C( 10 ), /* LogicalExprIndex */
                UINT16_C( 10 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            },
            { /* RuleTable[15] -- BswM_EB_Rule_BswMRule_PostRun */
                UINT16_C( 0 ), /* ID */
                UINT16_C( 9 ), /* LogicalExprIndex */
                UINT16_C( 9 ), /* TrueActionListIndex */
                UINT16_C( 65535 ), /* FalseActionListIndex */
                UINT8_C( 0 ) /* RuleInitState */
            }
        },
        { /* RuleDependencyTable */
            UINT16_C( 3 ), /* RuleDependencyTable[0] -- BswM_EB_Rule_BswM_Rule_PrpShutdown */
            UINT16_C( 2 ), /* RuleDependencyTable[1] -- BswM_EB_Rule_BswM_Rule_RunTwo */
            UINT16_C( 0 ), /* RuleDependencyTable[2] -- BswM_EB_Rule_BswM_Rule_StartupTwoB */
            UINT16_C( 14 ), /* RuleDependencyTable[3] -- BswM_EB_Rule_BswMRule_PostRunToRunTwo */
            UINT16_C( 13 ), /* RuleDependencyTable[4] -- BswM_EB_Rule_BswMRule_RunTwoToPostRun */
            UINT16_C( 12 ), /* RuleDependencyTable[5] -- BswM_EB_Rule_BswM_Rule_ComM_FullCom */
            UINT16_C( 11 ), /* RuleDependencyTable[6] -- BswM_EB_Rule_BswM_Rule_ComM_NoCom */
            UINT16_C( 10 ), /* RuleDependencyTable[7] -- BswM_EB_Rule_BswM_Rule_ComM_SilentCom */
            UINT16_C( 15 ), /* RuleDependencyTable[8] -- BswM_EB_Rule_BswMRule_PostRun */
            UINT16_C( 14 ), /* RuleDependencyTable[9] -- BswM_EB_Rule_BswMRule_PostRunToRunTwo */
            UINT16_C( 13 ), /* RuleDependencyTable[10] -- BswM_EB_Rule_BswMRule_RunTwoToPostRun */
            UINT16_C( 9 ), /* RuleDependencyTable[11] -- BswM_EB_Rule_BswM_Rule_GoOffOneA */
            UINT16_C( 8 ), /* RuleDependencyTable[12] -- BswM_EB_Rule_BswM_Rule_GoOffOneB */
            UINT16_C( 3 ), /* RuleDependencyTable[13] -- BswM_EB_Rule_BswM_Rule_PrpShutdown */
            UINT16_C( 2 ), /* RuleDependencyTable[14] -- BswM_EB_Rule_BswM_Rule_RunTwo */
            UINT16_C( 1 ), /* RuleDependencyTable[15] -- BswM_EB_Rule_BswM_Rule_StartupTwoA */
            UINT16_C( 0 ), /* RuleDependencyTable[16] -- BswM_EB_Rule_BswM_Rule_StartupTwoB */
            UINT16_C( 5 ), /* RuleDependencyTable[17] -- BswM_EB_Rule_BswM_Rule_PncCanStart */
            UINT16_C( 4 ), /* RuleDependencyTable[18] -- BswM_EB_Rule_BswM_Rule_PncCanStop */
            UINT16_C( 7 ), /* RuleDependencyTable[19] -- BswM_EB_Rule_BswM_Rule_PncCanFDStart */
            UINT16_C( 6 ) /* RuleDependencyTable[20] -- BswM_EB_Rule_BswM_Rule_PncCanFDStop */
        },
        { /* RuleDependencyListRangeTable */
            { /* RuleDependencyListRangeTable[0] -- BswM_ModeReqPort_AppState */
                UINT16_C( 0 ), /* Head */
                UINT16_C( 3 ) /* Tail */
            },
            { /* RuleDependencyListRangeTable[1] -- BswM_ModeReqPort_ComM_CurrentMode */
                UINT16_C( 3 ), /* Head */
                UINT16_C( 8 ) /* Tail */
            },
            { /* RuleDependencyListRangeTable[2] -- BswM_ModeReqPort_EcuState */
                UINT16_C( 8 ), /* Head */
                UINT16_C( 17 ) /* Tail */
            },
            { /* RuleDependencyListRangeTable[3] -- BswM_ModeReqPort_PncCan */
                UINT16_C( 17 ), /* Head */
                UINT16_C( 19 ) /* Tail */
            },
            { /* RuleDependencyListRangeTable[4] -- BswM_ModeReqPort_PncCanFD */
                UINT16_C( 19 ), /* Head */
                UINT16_C( 21 ) /* Tail */
            }
        },
        { /* ActionListTable */
            { /* ActionListTable[0] -- BswM_ActLst_ComM_FullCom_Can */
                { /* ActionListItemSegment */
                    UINT16_C( 0 ), /* Head */
                    UINT16_C( 1 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[1] -- BswM_ActLst_ComM_NoCom_Can */
                { /* ActionListItemSegment */
                    UINT16_C( 1 ), /* Head */
                    UINT16_C( 2 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[2] -- BswM_ActLst_ComM_SilentCom_Can */
                { /* ActionListItemSegment */
                    UINT16_C( 2 ), /* Head */
                    UINT16_C( 3 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[3] -- BswM_ActLst_GoOffOneA */
                { /* ActionListItemSegment */
                    UINT16_C( 3 ), /* Head */
                    UINT16_C( 6 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[4] -- BswM_ActLst_GoOffOneB */
                { /* ActionListItemSegment */
                    UINT16_C( 6 ), /* Head */
                    UINT16_C( 9 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[5] -- BswM_ActLst_PnCanDisable */
                { /* ActionListItemSegment */
                    UINT16_C( 9 ), /* Head */
                    UINT16_C( 10 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[6] -- BswM_ActLst_PnCanEnable */
                { /* ActionListItemSegment */
                    UINT16_C( 10 ), /* Head */
                    UINT16_C( 11 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[7] -- BswM_ActLst_PnCanFDDisable */
                { /* ActionListItemSegment */
                    UINT16_C( 11 ), /* Head */
                    UINT16_C( 12 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[8] -- BswM_ActLst_PnCanFDEnable */
                { /* ActionListItemSegment */
                    UINT16_C( 12 ), /* Head */
                    UINT16_C( 13 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[9] -- BswM_ActLst_PostRun */
                { /* ActionListItemSegment */
                    UINT16_C( 13 ), /* Head */
                    UINT16_C( 15 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[10] -- BswM_ActLst_PostRunToRunTwo */
                { /* ActionListItemSegment */
                    UINT16_C( 15 ), /* Head */
                    UINT16_C( 17 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[11] -- BswM_ActLst_PrpShutdown */
                { /* ActionListItemSegment */
                    UINT16_C( 17 ), /* Head */
                    UINT16_C( 21 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[12] -- BswM_ActLst_Reset */
                { /* ActionListItemSegment */
                    UINT16_C( 21 ), /* Head */
                    UINT16_C( 24 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[13] -- BswM_ActLst_RunTwo */
                { /* ActionListItemSegment */
                    UINT16_C( 24 ), /* Head */
                    UINT16_C( 27 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[14] -- BswM_ActLst_RunTwoToPostRun */
                { /* ActionListItemSegment */
                    UINT16_C( 27 ), /* Head */
                    UINT16_C( 29 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[15] -- BswM_ActLst_StartupTwoA */
                { /* ActionListItemSegment */
                    UINT16_C( 29 ), /* Head */
                    UINT16_C( 35 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            },
            { /* ActionListTable[16] -- BswM_ActLst_StartupTwoB */
                { /* ActionListItemSegment */
                    UINT16_C( 35 ), /* Head */
                    UINT16_C( 41 ) /* Tail */
                },
                UINT8_C( 1 ) /* IsTriggered */
            }
        },
        { /* ActionListItemTable */
            { /* ActionListItemTable[0] */
                UINT16_C( 4 ), /* ArtifactIndex -- BswM_Act_Enable_Rx_Enable_Tx_Can */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[1] */
                UINT16_C( 2 ), /* ArtifactIndex -- BswM_Act_Disable_Rx_Disable_Tx_Can */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[2] */
                UINT16_C( 3 ), /* ArtifactIndex -- BswM_Act_Enable_Rx_Disable_Tx_Can */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[3] */
                UINT16_C( 7 ), /* ArtifactIndex -- BswM_Act_HookOnGoOffOneA */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[4] */
                UINT16_C( 5 ), /* ArtifactIndex -- BswM_Act_GoOffOneA */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[5] */
                UINT16_C( 30 ), /* ArtifactIndex -- BswM_Act_RteSwitch_GoOffOneA */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[6] */
                UINT16_C( 31 ), /* ArtifactIndex -- BswM_Act_RteSwitch_GoOffOneB */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[7] */
                UINT16_C( 8 ), /* ArtifactIndex -- BswM_Act_HookOnGoOffOneB */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[8] */
                UINT16_C( 6 ), /* ArtifactIndex -- BswM_Act_GoOffOneB */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[9] */
                UINT16_C( 18 ), /* ArtifactIndex -- BswM_Act_PncCan_Disable */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[10] */
                UINT16_C( 19 ), /* ArtifactIndex -- BswM_Act_PncCan_Enable */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[11] */
                UINT16_C( 16 ), /* ArtifactIndex -- BswM_Act_PncCanFD_Disable */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[12] */
                UINT16_C( 17 ), /* ArtifactIndex -- BswM_Act_PncCanFD_Enable */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[13] */
                UINT16_C( 9 ), /* ArtifactIndex -- BswM_Act_HookOnPostRun */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[14] */
                UINT16_C( 27 ), /* ArtifactIndex -- BswM_Act_RteModeReq_AppInactive */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[15] */
                UINT16_C( 26 ), /* ArtifactIndex -- BswM_Act_RteModeReq_AppActive */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[16] */
                UINT16_C( 23 ), /* ArtifactIndex -- BswM_Act_ReqRunTwo */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[17] */
                UINT16_C( 32 ), /* ArtifactIndex -- BswM_Act_RteSwitch_PrpShutdown */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[18] */
                UINT16_C( 10 ), /* ArtifactIndex -- BswM_Act_HookOnPrpShutdown */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[19] */
                UINT16_C( 1 ), /* ArtifactIndex -- BswM_Act_DemDeinit */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[20] */
                UINT16_C( 20 ), /* ArtifactIndex -- BswM_Act_ReqGoOffOneA */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[21] */
                UINT16_C( 25 ), /* ArtifactIndex -- BswM_Act_Reset */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[22] */
                UINT16_C( 22 ), /* ArtifactIndex -- BswM_Act_ReqPrpShutDown */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[23] */
                UINT16_C( 27 ), /* ArtifactIndex -- BswM_Act_RteModeReq_AppInactive */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[24] */
                UINT16_C( 11 ), /* ArtifactIndex -- BswM_Act_HookOnRunTwo */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[25] */
                UINT16_C( 35 ), /* ArtifactIndex -- BswM_Act_RunTwo */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[26] */
                UINT16_C( 33 ), /* ArtifactIndex -- BswM_Act_RteSwitch_Run */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[27] */
                UINT16_C( 36 ), /* ArtifactIndex -- BswM_Act_Sleep */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[28] */
                UINT16_C( 21 ), /* ArtifactIndex -- BswM_Act_ReqPostRun */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[29] */
                UINT16_C( 12 ), /* ArtifactIndex -- BswM_Act_HookOnStartupTwoA */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[30] */
                UINT16_C( 15 ), /* ArtifactIndex -- BswM_Act_NvMReadAll */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[31] */
                UINT16_C( 29 ), /* ArtifactIndex -- BswM_Act_RteStart */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[32] */
                UINT16_C( 34 ), /* ArtifactIndex -- BswM_Act_RteSwitch_Startup */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[33] */
                UINT16_C( 24 ), /* ArtifactIndex -- BswM_Act_ReqStartupTwoB */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[34] */
                UINT16_C( 28 ), /* ArtifactIndex -- BswM_Act_RteModeReq_AppStartup */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[35] */
                UINT16_C( 13 ), /* ArtifactIndex -- BswM_Act_HookOnStartupTwoB */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[36] */
                UINT16_C( 14 ), /* ArtifactIndex -- BswM_Act_InitDriverInitThree */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[37] */
                UINT16_C( 37 ), /* ArtifactIndex -- BswM_Act_StartInternalPDUs */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 1 ) /* ActionType */
            },
            { /* ActionListItemTable[38] */
                UINT16_C( 0 ), /* ArtifactIndex -- BswM_Act_AllowCom */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[39] */
                UINT16_C( 26 ), /* ArtifactIndex -- BswM_Act_RteModeReq_AppActive */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            },
            { /* ActionListItemTable[40] */
                UINT16_C( 23 ), /* ArtifactIndex -- BswM_Act_ReqRunTwo */
                UINT8_C( 0 ), /* ActionListItemType -- BSWM_ACTION */
                UINT8_C( 0 ), /* IsAbortOnFail */
                UINT8_C( 0 ) /* ActionType */
            }
        },
        { /* PduGroupSwitchActionTable */
            { /* PduGroupSwitchActionTable[0] */
                { /* EnableMask */
                    UINT8_C( 0 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 250 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[1] */
                { /* EnableMask */
                    UINT8_C( 1 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 251 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[2] */
                { /* EnableMask */
                    UINT8_C( 5 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 255 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[3] */
                { /* EnableMask */
                    UINT8_C( 0 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 245 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[4] */
                { /* EnableMask */
                    UINT8_C( 10 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 255 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[5] */
                { /* EnableMask */
                    UINT8_C( 0 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 245 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[6] */
                { /* EnableMask */
                    UINT8_C( 10 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 255 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            },
            { /* PduGroupSwitchActionTable[7] */
                { /* EnableMask */
                    UINT8_C( 2 ), /* EnableMask[0] */
                    UINT8_C( 0 ), /* EnableMask[1] */
                    UINT8_C( 0 ), /* EnableMask[2] */
                    UINT8_C( 0 ) /* EnableMask[3] */
                },
                { /* DisableMask */
                    UINT8_C( 255 ), /* DisableMask[0] */
                    UINT8_C( 255 ), /* DisableMask[1] */
                    UINT8_C( 255 ), /* DisableMask[2] */
                    UINT8_C( 255 ) /* DisableMask[3] */
                },
                UINT8_C( 0 ) /* RequestInit */
            }
        },
        { /* UInt16InitialValuesTable */
            UINT16_C( 0 ) /* UInt16InitialValuesTable[0] -- Initial value of Port BswM_ModeReqPort_EcuState */
        },
        { /* UInt8InitialValuesTable */
            UINT8_C( 1 ) /* UInt8InitialValuesTable[0] -- Initial value of Port BswM_ModeReqPort_AppState */
        }
    }
};

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <STOP> */

#define PBCFGM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <PbcfgM_MemMap.h>

/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/


/*==================[end of file]============================================*/

