


/**
 * \file
 *
 * \brief AUTOSAR Com
 *
 * This file contains the implementation of the AUTOSAR
 * module Com.
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

#include <Com_PBcfg.h>
#include <TSAutosar.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_NAME Com_ConfigLayout
#define TS_PB_CFG_LAYOUT_TYPE Com_ConstConfigLayoutType
#include <TSPBConfig_Init.h>

/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <Com_MemMap.h>

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <START> */
Com_ConstConfigLayoutType Com_ConfigLayout = {
    { /* Com_RootConfig */
        UINT32_C( 2147485970 ), /* ComPlatformSignature */
        UINT32_C( 698836561 ), /* ComPublicInfoSignature */
        UINT32_C( 573542818 ), /* ComCfgSignature */
        UINT32_C( 3807814892 ), /* ComLcfgSignature */
        UINT32_C( 0 ), /* ComConfigurationId */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutQueueListRef */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutSignalQueueListRef */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutSignalGroupQueueListRef */
        TS_MAKEREF2CFG( ComRxIPdu[0] ), /* ComRxIPduRef */
        TS_MAKEREF2CFG( ComTxIPdu[0] ), /* ComTxIPduRef */
        TS_MAKEREF2CFG( ComTxModeNTimes[0] ), /* ComTxModeNTimesRef */
        TS_MAKEREF2CFG( ComTxModePeriodic[0] ), /* ComTxModePeriodicRef */
        TS_MAKENULLREF2CFG, /* ComTxModeMixedNTimesRef */
        TS_MAKEREF2CFG( ComIPduGroupMask[0] ), /* ComIPduGroupMaskRef */
        TS_MAKENULLREF2CFG, /* ComSigGWRxIPduListRef */
        TS_MAKEREF2CFG( ComRxIPduSignalGroupList[0] ), /* ComRxIPduSignalGroupListRef */
        TS_MAKEREF2CFG( ComTxIPduSignalGroupList[0] ), /* ComTxIPduSignalGroupListRef */
        TS_MAKEREF2CFG( ComRxIPduSignalList[0] ), /* ComRxIPduSignalListRef */
        TS_MAKEREF2CFG( ComTxIPduSignalList[0] ), /* ComTxIPduSignalListRef */
        TS_MAKEREF2CFG( ComRxSignalGroup[0] ), /* ComRxSignalGroupRef */
        TS_MAKEREF2CFG( ComTxSignalGroup[0] ), /* ComTxSignalGroupRef */
        TS_MAKENULLREF2CFG, /* ComTxSignalGroupGroupSignalListRef */
        TS_MAKENULLREF2CFG, /* ComFilter8BitMaskRef */
        TS_MAKENULLREF2CFG, /* ComFilter16BitMaskRef */
        TS_MAKENULLREF2CFG, /* ComFilter32BitMaskRef */
        TS_MAKENULLREF2CFG, /* ComFilter8BitMaskXMinMaxRef */
        TS_MAKENULLREF2CFG, /* ComFilter16BitMaskXMinMaxRef */
        TS_MAKENULLREF2CFG, /* ComFilter32BitMaskXMinMaxRef */
        TS_MAKENULLREF2CFG, /* ComFilterOneEveryNRef */
        TS_MAKEREF2CFG( ComRxSignal[0] ), /* ComRxSignalRef */
        TS_MAKEREF2CFG( ComRxSignalExt[0] ), /* ComRxSignalExtRef */
        TS_MAKEREF2CFG( ComTxSignal[0] ), /* ComTxSignalRef */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutNotificationRef */
        TS_MAKEREF2CFG( ComTxTimeoutNotificationList[0] ), /* ComTxTimeoutNotificationRef */
        TS_MAKEREF2CFG( ComTxErrorNotificationList[0] ), /* ComTxErrorNotificationRef */
        TS_MAKEREF2CFG( ComTxNotificationList[0] ), /* ComTxNotificationRef */
        TS_MAKENULLREF2CFG, /* ComGWSourceRef */
        TS_MAKENULLREF2CFG, /* ComGWDestinationRef */
        UINT16_C( 630 ), /* ComRxIPduStatusBase */
        UINT16_C( 638 ), /* ComTxIPduStatusBase */
        UINT16_C( 6 ), /* ComRxIPduLengthBase */
        UINT16_C( 22 ), /* ComTxIPduLengthBase */
        UINT16_C( 641 ), /* ComTxSignalGroupStatusBase */
        UINT16_C( 0 ), /* ComBufferBaseUInt32 */
        UINT16_C( 0 ), /* ComBufferBaseSInt32 */
        UINT16_C( 0 ), /* ComBufferBaseUInt16 */
        UINT16_C( 0 ), /* ComBufferBaseSInt16 */
        UINT16_C( 0 ), /* ComBufferBaseUInt8 */
        UINT16_C( 0 ), /* ComBufferBaseSInt8 */
        UINT16_C( 0 ), /* ComBufferBaseBool */
        UINT16_C( 0 ), /* ComFilterOneEveryNBase */
        UINT16_C( 0 ), /* ComSigGWRxPduFlagBase */
        UINT16_C( 0 ), /* ComSigGWTxSignalGroupQueueBase */
        UINT16_C( 0 ), /* ComSigGWTxSignalGroupQueueMax */
        UINT16_C( 0 ), /* ComMDTQueueBase */
        UINT16_C( 0 ), /* ComMDTQueueMax */
        UINT16_C( 0 ), /* ComPeriodicQueueBase */
        UINT16_C( 2 ), /* ComPeriodicQueueMax */
        UINT16_C( 4 ), /* ComNTimesQueueBaseNextTime */
        UINT16_C( 643 ), /* ComNTimesQueueBaseRemaining */
        UINT16_C( 1 ), /* ComNTimesQueueMax */
        UINT16_C( 0 ), /* ComRxTimeoutQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutQueueMax */
        UINT16_C( 0 ), /* ComRxTimeoutSignalQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalStatusQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalQueueMax */
        UINT16_C( 0 ), /* ComRxDMInvSignalGroupStatusQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalGroupQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalGroupQueueMax */
        UINT16_C( 0 ), /* ComTxTimeoutQueueBase */
        UINT16_C( 0 ), /* ComTxTimeoutQueueMax */
        UINT16_C( 0 ), /* ComCbkTxAckDeferredStatusBase */
        UINT16_C( 0 ), /* ComCbkTxAckDeferredListMax */
        UINT16_C( 8 ), /* ComRxIPduArraySize */
        UINT16_C( 3 ), /* ComTxIPduArraySize */
        UINT16_C( 21 ), /* ComRxSignalArraySize */
        UINT16_C( 74 ), /* ComTxSignalArraySize */
        UINT16_C( 0 ), /* ComFilterOneEveryNArraySize */
        UINT16_C( 4 ), /* ComIPduGroupsNum */
        UINT16_C( 1 ), /* ComRxIpduGroupVectorByteEnd */
        UINT16_C( 0 ), /* ComTxIpduGroupVectorByteStart */
        UINT16_C( 0 ), /* ComSigGWRxIPduArraySize */
        UINT16_C( 2 ), /* ComTxSignalGroupArraySize */
        UINT16_C( 1 ) /* ComRxSignalGroupArraySize */
    },
    { /* ComRxIPdu */
        { /* ComRxIPdu[0] -- PDEVC_BCMA_PR1_Rio_10ms_78R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 0 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 28 ), /* ComIPduValueRef */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 0 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 0 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[1] -- PDEVC_BCMA_PR1_Rio_20ms_122R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 0 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 95 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 2 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 0 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[2] -- PDEVC_BCMA_PR1_Rio_40ms_165R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 159 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 2 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 2 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[3] -- PDEVC_BCMA_PR1_Rio_80ms_262R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 223 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 6 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 4 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[4] -- PDEVC_BCMA_PR2_Rio_80ms_267R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 287 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 10 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[5] -- PDVEHCONFIG__400RIO_MUX_1024R */
            TS_MAKEREF2CFG( ComIPduInit[56] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 8 ), /* ComIPduInitSize */
            UINT16_C( 8 ), /* ComIPduSizeMax */
            UINT16_C( 351 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 0 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 11 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[6] -- PDTST_PhysicalReqPBU_RIO_1911R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 359 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 11 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        },
        { /* ComRxIPdu[7] -- PDTST_FunctionalReq_RIOBus_2015R */
            TS_MAKEREF2CFG( ComIPduInit[56] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 8 ), /* ComIPduInitSize */
            UINT16_C( 8 ), /* ComIPduSizeMax */
            UINT16_C( 423 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 0 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 12 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT8_C( 1 ) /* ComRxIPduFlags -- COM_DYN_IPDU_OFF | COM_RX_DM_OFF | IMMEDIATE */
        }
    },
    { /* ComTxIPdu */
        { /* ComTxIPdu[0] -- PDEVC_PBU_PR1_Rio_40ms_172T */
            TS_MAKEREF2CFG( ComIPduInit[64] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 1 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 0 ), /* PduRTxPduId */
            UINT16_C( 431 ), /* ComIPduValueRef */
            UINT16_C( 2 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 8 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 0 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 65535 ), /* ComIPduTrigTxCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorValue */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 0 ), /* ComTxModeTrueRef */
            UINT16_C( 65535 ), /* ComTxModeFalseRef */
            UINT16_C( 0 ), /* PeriodicQueueRef */
            UINT16_C( 0 ), /* NTimesQueueRef */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComTxTimeoutFactorValue */
            UINT16_C( 65535 ), /* TxDMQueueRef */
            UINT16_C( 0 ), /* ComNotificationFirst */
            UINT16_C( 0 ), /* ComNotificationNum */
            UINT16_C( 0 ), /* ComNotificationDeferredQueueRef */
            UINT8_C( 29 ), /* ComTxIPduFlags -- COM_DYN_IPDU_OFF | COM_CL_UB_NEVER | TM_TRUE | COM_TX_DM_OFF | IMMEDIATE */
            UINT8_C( 1 ) /* ComTxModeModes -- True=PERIODIC,False=<undef> */
        },
        { /* ComTxIPdu[1] -- PDEVC_PBU_PR1_Rio_Pdu_100ms_323T */
            TS_MAKEREF2CFG( ComIPduInit[128] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 1 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 1 ), /* PduRTxPduId */
            UINT16_C( 502 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 2 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 56 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 8 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 65535 ), /* ComIPduTrigTxCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorValue */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 1 ), /* ComTxModeTrueRef */
            UINT16_C( 65535 ), /* ComTxModeFalseRef */
            UINT16_C( 1 ), /* PeriodicQueueRef */
            UINT16_C( 0 ), /* NTimesQueueRef */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationFirst */
            UINT16_C( 1 ), /* ComTxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComTxTimeoutFactorValue */
            UINT16_C( 65535 ), /* TxDMQueueRef */
            UINT16_C( 0 ), /* ComNotificationFirst */
            UINT16_C( 1 ), /* ComNotificationNum */
            UINT16_C( 0 ), /* ComNotificationDeferredQueueRef */
            UINT8_C( 29 ), /* ComTxIPduFlags -- COM_DYN_IPDU_OFF | COM_CL_UB_NEVER | TM_TRUE | COM_TX_DM_OFF | IMMEDIATE */
            UINT8_C( 1 ) /* ComTxModeModes -- True=PERIODIC,False=<undef> */
        },
        { /* ComTxIPdu[2] -- PDTST_PhysicalRespPBU_RIO_1919T */
            TS_MAKEREF2CFG( ComIPduInit[1] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 1 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 2 ), /* PduRTxPduId */
            UINT16_C( 566 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 2 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 64 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 65535 ), /* ComIPduTrigTxCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorValue */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 0 ), /* ComTxModeTrueRef */
            UINT16_C( 65535 ), /* ComTxModeFalseRef */
            UINT16_C( 0 ), /* PeriodicQueueRef */
            UINT16_C( 0 ), /* NTimesQueueRef */
            UINT16_C( 1 ), /* ComTxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComTxTimeoutFactorValue */
            UINT16_C( 65535 ), /* TxDMQueueRef */
            UINT16_C( 1 ), /* ComNotificationFirst */
            UINT16_C( 0 ), /* ComNotificationNum */
            UINT16_C( 0 ), /* ComNotificationDeferredQueueRef */
            UINT8_C( 29 ), /* ComTxIPduFlags -- COM_DYN_IPDU_OFF | COM_CL_UB_NEVER | TM_TRUE | COM_TX_DM_OFF | IMMEDIATE */
            UINT8_C( 5 ) /* ComTxModeModes -- True=N_TIMES,False=<undef> */
        }
    },
    { /* ComTxSignalGroup */
        { /* ComTxSignalGroup[0] -- GRPBCriticErrGp_172T */
            TS_MAKENULLREF2CFG, /* ComSignalGTMSFlagsInitValueRef */
            TS_MAKENULLREF2CFG, /* ComTOCMaskRef */
            TS_MAKEREF2CFG( ComTOCMask[0] ), /* ComWriteMaskRef */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 4 ), /* ComSignalPositionInByte */
            UINT16_C( 3 ), /* ComByteSize */
            UINT16_C( 495 ), /* ComSignalGroupValueRef */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComGroupSignalWithFilterRefNum */
            UINT16_C( 65535 ), /* ComSignalGTMSFlagsRef */
            UINT16_C( 0 ), /* ComPositionOfTMSFlag */
            UINT16_C( 0 ), /* ComGroupSignalRefFirst */
            UINT8_C( 17 ) /* ComTxSignalGroupFlags -- COM_INIT_BUFFER | COM_UPDATE_BIT_ABSENT | TRIGGERED */
        },
        { /* ComTxSignalGroup[1] -- GRPBDegradationGp_172T */
            TS_MAKENULLREF2CFG, /* ComSignalGTMSFlagsInitValueRef */
            TS_MAKENULLREF2CFG, /* ComTOCMaskRef */
            TS_MAKEREF2CFG( ComTOCMask[3] ), /* ComWriteMaskRef */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ), /* ComSignalPositionInByte */
            UINT16_C( 4 ), /* ComByteSize */
            UINT16_C( 498 ), /* ComSignalGroupValueRef */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComGroupSignalWithFilterRefNum */
            UINT16_C( 65535 ), /* ComSignalGTMSFlagsRef */
            UINT16_C( 0 ), /* ComPositionOfTMSFlag */
            UINT16_C( 0 ), /* ComGroupSignalRefFirst */
            UINT8_C( 17 ) /* ComTxSignalGroupFlags -- COM_INIT_BUFFER | COM_UPDATE_BIT_ABSENT | TRIGGERED */
        }
    },
    { /* ComTxModeNTimes */
        { /* ComTxModeNTimes[0] */
            UINT16_C( 200 ), /* ComTxModeRepetitionPeriodFactor */
            UINT8_C( 1 ) /* ComTxModeNumberOfRepetitions */
        }
    },
    { /* ComTxModePeriodic */
        { /* ComTxModePeriodic[0] */
            UINT16_C( 1 ), /* ComTxModeTimeOffsetFactor */
            UINT16_C( 8 ) /* ComTxModeTimePeriodFactor */
        },
        { /* ComTxModePeriodic[1] */
            UINT16_C( 1 ), /* ComTxModeTimeOffsetFactor */
            UINT16_C( 20 ) /* ComTxModeTimePeriodFactor */
        }
    },
    { /* ComRxIPduSignalGroupList */
        UINT16_C( 0 ) /* ComRxIPduSignalGroupList[0] */
    },
    { /* ComTxIPduSignalGroupList */
        UINT16_C( 0 ), /* ComTxIPduSignalGroupList[0] */
        UINT16_C( 1 ) /* ComTxIPduSignalGroupList[1] */
    },
    { /* ComRxIPduSignalList */
        UINT16_C( 0 ), /* ComRxIPduSignalList[0] */
        UINT16_C( 1 ), /* ComRxIPduSignalList[1] */
        UINT16_C( 2 ), /* ComRxIPduSignalList[2] */
        UINT16_C( 3 ), /* ComRxIPduSignalList[3] */
        UINT16_C( 4 ), /* ComRxIPduSignalList[4] */
        UINT16_C( 5 ), /* ComRxIPduSignalList[5] */
        UINT16_C( 6 ), /* ComRxIPduSignalList[6] */
        UINT16_C( 7 ), /* ComRxIPduSignalList[7] */
        UINT16_C( 8 ), /* ComRxIPduSignalList[8] */
        UINT16_C( 9 ), /* ComRxIPduSignalList[9] */
        UINT16_C( 10 ), /* ComRxIPduSignalList[10] */
        UINT16_C( 11 ), /* ComRxIPduSignalList[11] */
        UINT16_C( 12 ) /* ComRxIPduSignalList[12] */
    },
    { /* ComTxIPduSignalList */
        UINT16_C( 0 ), /* ComTxIPduSignalList[0] */
        UINT16_C( 1 ), /* ComTxIPduSignalList[1] */
        UINT16_C( 2 ), /* ComTxIPduSignalList[2] */
        UINT16_C( 3 ), /* ComTxIPduSignalList[3] */
        UINT16_C( 4 ), /* ComTxIPduSignalList[4] */
        UINT16_C( 5 ), /* ComTxIPduSignalList[5] */
        UINT16_C( 6 ), /* ComTxIPduSignalList[6] */
        UINT16_C( 7 ), /* ComTxIPduSignalList[7] */
        UINT16_C( 8 ), /* ComTxIPduSignalList[8] */
        UINT16_C( 9 ), /* ComTxIPduSignalList[9] */
        UINT16_C( 10 ), /* ComTxIPduSignalList[10] */
        UINT16_C( 11 ), /* ComTxIPduSignalList[11] */
        UINT16_C( 12 ), /* ComTxIPduSignalList[12] */
        UINT16_C( 13 ), /* ComTxIPduSignalList[13] */
        UINT16_C( 14 ), /* ComTxIPduSignalList[14] */
        UINT16_C( 15 ), /* ComTxIPduSignalList[15] */
        UINT16_C( 16 ), /* ComTxIPduSignalList[16] */
        UINT16_C( 17 ), /* ComTxIPduSignalList[17] */
        UINT16_C( 18 ), /* ComTxIPduSignalList[18] */
        UINT16_C( 19 ), /* ComTxIPduSignalList[19] */
        UINT16_C( 20 ), /* ComTxIPduSignalList[20] */
        UINT16_C( 21 ), /* ComTxIPduSignalList[21] */
        UINT16_C( 22 ), /* ComTxIPduSignalList[22] */
        UINT16_C( 23 ), /* ComTxIPduSignalList[23] */
        UINT16_C( 24 ), /* ComTxIPduSignalList[24] */
        UINT16_C( 25 ), /* ComTxIPduSignalList[25] */
        UINT16_C( 26 ), /* ComTxIPduSignalList[26] */
        UINT16_C( 27 ), /* ComTxIPduSignalList[27] */
        UINT16_C( 28 ), /* ComTxIPduSignalList[28] */
        UINT16_C( 29 ), /* ComTxIPduSignalList[29] */
        UINT16_C( 30 ), /* ComTxIPduSignalList[30] */
        UINT16_C( 31 ), /* ComTxIPduSignalList[31] */
        UINT16_C( 32 ), /* ComTxIPduSignalList[32] */
        UINT16_C( 33 ), /* ComTxIPduSignalList[33] */
        UINT16_C( 34 ), /* ComTxIPduSignalList[34] */
        UINT16_C( 35 ), /* ComTxIPduSignalList[35] */
        UINT16_C( 36 ), /* ComTxIPduSignalList[36] */
        UINT16_C( 37 ), /* ComTxIPduSignalList[37] */
        UINT16_C( 38 ), /* ComTxIPduSignalList[38] */
        UINT16_C( 39 ), /* ComTxIPduSignalList[39] */
        UINT16_C( 40 ), /* ComTxIPduSignalList[40] */
        UINT16_C( 41 ), /* ComTxIPduSignalList[41] */
        UINT16_C( 42 ), /* ComTxIPduSignalList[42] */
        UINT16_C( 43 ), /* ComTxIPduSignalList[43] */
        UINT16_C( 44 ), /* ComTxIPduSignalList[44] */
        UINT16_C( 45 ), /* ComTxIPduSignalList[45] */
        UINT16_C( 46 ), /* ComTxIPduSignalList[46] */
        UINT16_C( 47 ), /* ComTxIPduSignalList[47] */
        UINT16_C( 48 ), /* ComTxIPduSignalList[48] */
        UINT16_C( 49 ), /* ComTxIPduSignalList[49] */
        UINT16_C( 50 ), /* ComTxIPduSignalList[50] */
        UINT16_C( 51 ), /* ComTxIPduSignalList[51] */
        UINT16_C( 52 ), /* ComTxIPduSignalList[52] */
        UINT16_C( 53 ), /* ComTxIPduSignalList[53] */
        UINT16_C( 54 ), /* ComTxIPduSignalList[54] */
        UINT16_C( 55 ), /* ComTxIPduSignalList[55] */
        UINT16_C( 56 ), /* ComTxIPduSignalList[56] */
        UINT16_C( 57 ), /* ComTxIPduSignalList[57] */
        UINT16_C( 58 ), /* ComTxIPduSignalList[58] */
        UINT16_C( 59 ), /* ComTxIPduSignalList[59] */
        UINT16_C( 60 ), /* ComTxIPduSignalList[60] */
        UINT16_C( 61 ), /* ComTxIPduSignalList[61] */
        UINT16_C( 62 ), /* ComTxIPduSignalList[62] */
        UINT16_C( 63 ), /* ComTxIPduSignalList[63] */
        UINT16_C( 64 ) /* ComTxIPduSignalList[64] */
    },
    { /* ComRxSignalGroup */
        { /* ComRxSignalGroup[0] -- GRVehMovement_78R */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 92 ), /* ComSignalGroupValueRef */
            UINT16_C( 18 ), /* ComSignalPositionInByte */
            UINT16_C( 3 ), /* ComByteSize */
            UINT16_C( 0 ) /* ComSignalExtRef */
        }
    },
    { /* ComRxSignal */
        { /* ComRxSignal[0] -- SGPowerPackStatus_122R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 39 ), /* ComSignalPositionInBit */
                UINT16_C( 4 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 95 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 1 ), /* ComSignalExtRef */
            UINT16_C( 1 ) /* ComIPduRef */
        },
        { /* ComRxSignal[1] -- SGPowerPackStatus_UB_122R */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 49 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 95 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 2 ), /* ComSignalExtRef */
            UINT16_C( 1 ) /* ComIPduRef */
        },
        { /* ComRxSignal[2] -- SGCarMode_165R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 27 ), /* ComSignalPositionInBit */
                UINT16_C( 4 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 159 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 3 ), /* ComSignalExtRef */
            UINT16_C( 2 ) /* ComIPduRef */
        },
        { /* ComRxSignal[3] -- SGPowerMode_165R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 20 ), /* ComSignalPositionInBit */
                UINT16_C( 5 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 159 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 4 ), /* ComSignalExtRef */
            UINT16_C( 2 ) /* ComIPduRef */
        },
        { /* ComRxSignal[4] -- SGGWMEL2Threshold_262R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 86 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 223 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 5 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[5] -- SGGWMEL3Threshold_262R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 94 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 223 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 6 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[6] -- SGGWMWakeUpToChargeThr_262R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 102 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 223 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 7 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[7] -- SGOdometerMasterValue_262R */
            { /* ComSignalBase */
                UINT16_C( 654 ), /* ComRxSignalFlags -- UINT32 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_32 */
                UINT16_C( 159 ), /* ComSignalPositionInBit */
                UINT16_C( 24 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 223 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 8 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[8] -- SGOdometerMasterValue_UB_262R */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 151 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 223 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 9 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[9] -- SGSBShortVehID_262R */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 4 ), /* ComSignalPositionInBit */
                UINT16_C( 6 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 223 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 10 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[10] -- SGSOTAPrepRequest_267R */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 81 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 287 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 11 ), /* ComSignalExtRef */
            UINT16_C( 4 ) /* ComIPduRef */
        },
        { /* ComRxSignal[11] -- SGTST_PhysicalReqPBU_RIO_PDU_1911R */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 64 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 359 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 12 ), /* ComSignalExtRef */
            UINT16_C( 6 ) /* ComIPduRef */
        },
        { /* ComRxSignal[12] -- SGTST_FunctionalReq_RIO_PDU_2015R */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 8 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 423 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 13 ), /* ComSignalExtRef */
            UINT16_C( 7 ) /* ComIPduRef */
        },
        { /* ComRxSignal[13] -- VehMovementChecksum_78R */
            { /* ComSignalBase */
                UINT16_C( 801 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_DL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[14] -- VehMovementCounter_78R */
            { /* ComSignalBase */
                UINT16_C( 772 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 11 ), /* ComSignalPositionInBit */
                UINT16_C( 4 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[15] -- VehMovementDirection_78R */
            { /* ComSignalBase */
                UINT16_C( 772 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 13 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[16] -- VehMovementStatus_78R */
            { /* ComSignalBase */
                UINT16_C( 32 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_DL */
                UINT16_C( 17 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[17] -- WheelDirectionFL_78R */
            { /* ComSignalBase */
                UINT16_C( 772 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 19 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[18] -- WheelDirectionFR_78R */
            { /* ComSignalBase */
                UINT16_C( 772 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 21 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[19] -- WheelDirectionRL_78R */
            { /* ComSignalBase */
                UINT16_C( 772 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 23 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[20] -- WheelDirectionRR_78R */
            { /* ComSignalBase */
                UINT16_C( 772 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 15 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 92 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        }
    },
    { /* ComRxSignalExt */
        { /* ComRxSignalExt[0] -- GRVehMovement_78R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[1] -- SGPowerPackStatus_122R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[2] -- SGPowerPackStatus_UB_122R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[3] -- SGCarMode_165R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[4] -- SGPowerMode_165R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[5] -- SGGWMEL2Threshold_262R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[6] -- SGGWMEL3Threshold_262R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[7] -- SGGWMWakeUpToChargeThr_262R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[8] -- SGOdometerMasterValue_262R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[9] -- SGOdometerMasterValue_UB_262R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[10] -- SGSBShortVehID_262R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[11] -- SGSOTAPrepRequest_267R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[12] -- SGTST_PhysicalReqPBU_RIO_PDU_1911R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[13] -- SGTST_FunctionalReq_RIO_PDU_2015R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        }
    },
    { /* ComTxSignal */
        { /* ComTxSignal[0] -- SGPBBatCurr_172T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 71 ), /* ComSignalPositionInBit */
                UINT16_C( 14 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 74 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[1] -- SGPBBatCurrFlt_172T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 73 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 73 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[2] -- SGPBBatVolt_172T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 10 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 10 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[3] -- SGPBBatVoltFlt_172T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 72 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 72 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[4] -- SGPBCriticErr_172T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 7 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 7 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[5] -- SGPBMaxChrgCurrLmt_172T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 103 ), /* ComSignalPositionInBit */
                UINT16_C( 9 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 111 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[6] -- SGPBMaxChrgVoltLmt_172T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 11 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 11 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[7] -- SGPBMaxDchgCurrLmt_172T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 110 ), /* ComSignalPositionInBit */
                UINT16_C( 9 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 431 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 118 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[8] -- SGPBAgeing_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 8 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 8 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[9] -- SGPBAhChange_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 7 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 9 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[10] -- SGPBAliveCounter_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 59 ), /* ComSignalPositionInBit */
                UINT16_C( 4 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 56 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[11] -- SGPBBalActvCell1_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 60 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 60 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[12] -- SGPBBalActvCell2_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 61 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 61 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[13] -- SGPBBalActvCell3_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 62 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 62 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[14] -- SGPBBalActvCell4_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 63 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 63 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[15] -- SGPBBattQd_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 6 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 6 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[16] -- SGPBCell1Volt_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 22 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 16 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[17] -- SGPBCell1VoltFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 23 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 23 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[18] -- SGPBCell2Volt_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 30 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 24 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[19] -- SGPBCell2VoltFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 31 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 31 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[20] -- SGPBCell3Volt_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 38 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 32 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[21] -- SGPBCell3VoltFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 39 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 39 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[22] -- SGPBCell4Volt_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 46 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 40 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[23] -- SGPBCell4VoltFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 47 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 47 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[24] -- SGPBCpctyAbsolute_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 70 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 64 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[25] -- SGPBCpctyRelative_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 78 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 72 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[26] -- SGPBECUFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 79 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 79 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[27] -- SGPBECUSerial_323T */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 42 ), /* ComSignalPositionInBit */
                UINT16_C( 5 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 30023 ), /* ComTxSignalFlags -- UINT8_N | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_LITTLE_ENDIAN | COM_SIGNED | COM_SIG_TYPE_AY */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 42 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[28] -- SGPBErsoStatus_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 71 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 71 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[29] -- SGPBMinBatCurr_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 10 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 10 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[30] -- SGPBMinBatVolt_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 11 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 11 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[31] -- SGPBMinCrnkSOCLmt_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 110 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 104 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[32] -- SGPBPackVolt_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 12 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 12 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[33] -- SGPBPackVoltFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 111 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 111 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[34] -- SGPBParkingTime_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 118 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 112 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[35] -- SGPBPos1Temp_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 15 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 15 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[36] -- SGPBPos1TempFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 119 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 119 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[37] -- SGPBPos2Temp_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 16 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 16 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[38] -- SGPBPos2TempFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 143 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 143 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[39] -- SGPBQChaRideCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 142 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 144 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[40] -- SGPBQChaRunCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 159 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 161 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[41] -- SGPBQDchActCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 160 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 178 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[42] -- SGPBQDchActHiCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 177 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 195 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[43] -- SGPBQDchEcoStpCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 228 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 246 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[44] -- SGPBQDchQdCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 245 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 263 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[45] -- SGPBQDchaRideCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 194 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 212 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[46] -- SGPBQDchaRunCn_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 211 ), /* ComSignalPositionInBit */
                UINT16_C( 15 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 229 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[47] -- SGPBRelayClsFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 279 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 279 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[48] -- SGPBRelayOpenFlt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 287 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 287 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[49] -- SGPBRelayStatus_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 265 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 264 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[50] -- SGPBSOHCapFade_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 294 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 288 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[51] -- SGPBSOHImpGrowth_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 318 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 312 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[52] -- SGPBSOHImpedanceAbs_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 325 ), /* ComSignalPositionInBit */
                UINT16_C( 6 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 320 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[53] -- SGPBSWVer_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 37 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 37 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[54] -- SGPBSoCAbsolute_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 278 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 272 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[55] -- SGPBSoCRelative_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 286 ), /* ComSignalPositionInBit */
                UINT16_C( 7 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 280 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[56] -- SGPBTIS_323T */
            { /* ComSignalBase */
                UINT16_C( 525 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_16 */
                UINT16_C( 262 ), /* ComSignalPositionInBit */
                UINT16_C( 13 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 17737 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_16 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 266 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[57] -- SGPBTOCReq_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 295 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 295 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[58] -- SGPBVehCount_323T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 332 ), /* ComSignalPositionInBit */
                UINT16_C( 5 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 25928 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 328 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[59] -- SGPBVehQd_323T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 38 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 38 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[60] -- SGPBWURLowChargeLmt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 327 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 327 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[61] -- SGPBWURMinChargeLmt_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 333 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 333 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[62] -- SGPBWakeUpToChgReq_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 326 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 326 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[63] -- SGPBWakeupStat_323T */
            { /* ComSignalBase */
                UINT16_C( 40 ), /* ComRxSignalFlags -- BOOLEAN | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_BO_EL */
                UINT16_C( 319 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 502 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 1472 ), /* ComTxSignalFlags -- BOOLEAN | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_BO_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 319 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[64] -- SGTST_PhysicalRespPBU_RIO_PDU_1919T */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 64 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 566 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 30023 ), /* ComTxSignalFlags -- UINT8_N | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_LITTLE_ENDIAN | COM_SIGNED | COM_SIG_TYPE_AY */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 2 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[65] -- PBCriticErrGpAC_172T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 11 ), /* ComSignalPositionInBit */
                UINT16_C( 4 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 495 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24648 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 8 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[66] -- PBCriticErrGpCS_172T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 495 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24769 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[67] -- PBCriticErrProtd_172T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 2 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 495 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24769 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 2 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[68] -- PB1FETStatus_172T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 31 ), /* ComSignalPositionInBit */
                UINT16_C( 3 ), /* ComBitSize */
                UINT16_C( 1 ), /* ComSignalGroupRef */
                UINT16_C( 498 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24648 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 29 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[69] -- PB2Degradation_172T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 28 ), /* ComSignalPositionInBit */
                UINT16_C( 3 ), /* ComBitSize */
                UINT16_C( 1 ), /* ComSignalGroupRef */
                UINT16_C( 498 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24648 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 26 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[70] -- PB2FETStatus_172T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 20 ), /* ComSignalPositionInBit */
                UINT16_C( 3 ), /* ComBitSize */
                UINT16_C( 1 ), /* ComSignalGroupRef */
                UINT16_C( 498 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24648 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 18 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[71] -- PBDegradation_172T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 23 ), /* ComSignalPositionInBit */
                UINT16_C( 3 ), /* ComBitSize */
                UINT16_C( 1 ), /* ComSignalGroupRef */
                UINT16_C( 498 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24648 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 21 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[72] -- PBDegradationGpAC_172T */
            { /* ComSignalBase */
                UINT16_C( 780 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_BIG_ENDIAN | COM_SIG_TYPE_08 */
                UINT16_C( 11 ), /* ComSignalPositionInBit */
                UINT16_C( 4 ), /* ComBitSize */
                UINT16_C( 1 ), /* ComSignalGroupRef */
                UINT16_C( 498 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24648 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_BIG_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_08 */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 8 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[73] -- PBDegradationGpCS_172T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 1 ), /* ComSignalGroupRef */
                UINT16_C( 498 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24769 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        }
    },
    { /* ComTxTimeoutNotificationList */
        UINT16_C( 1 ) /* ComTxTimeoutNotificationList[0] */
    },
    { /* ComTxErrorNotificationList */
        UINT16_C( 1 ) /* ComTxErrorNotificationList[0] */
    },
    { /* ComTxNotificationList */
        UINT16_C( 0 ) /* ComTxNotificationList[0] */
    },
    { /* ComPeriodicQueueList */
        UINT16_C( 0 ), /* ComPeriodicQueueList[0] */
        UINT16_C( 1 ) /* ComPeriodicQueueList[1] */
    },
    { /* ComNTimesQueueList */
        UINT16_C( 2 ) /* ComNTimesQueueList[0] */
    },
    { /* ComIPduGroupMask */
        UINT8_C( 3 ), /* ComIPduGroupMask[0] -- [0][0] RGCanNetwork RXPDUS_GLOBAL */
        UINT8_C( 0 ), /* ComIPduGroupMask[1] -- [0][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[2] -- [0][2] */
        UINT8_C( 0 ), /* ComIPduGroupMask[3] -- [0][3] */
        UINT8_C( 12 ), /* ComIPduGroupMask[4] -- [1][0] TGCanNetwork TXPDUS_GLOBAL */
        UINT8_C( 0 ), /* ComIPduGroupMask[5] -- [1][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[6] -- [1][2] */
        UINT8_C( 0 ) /* ComIPduGroupMask[7] -- [1][3] */
    },
    { /* ComTOCMask */
        UINT8_C( 255 ), /* ComTOCMask[0] */
        UINT8_C( 15 ), /* ComTOCMask[1] */
        UINT8_C( 255 ), /* ComTOCMask[2] */
        UINT8_C( 255 ), /* ComTOCMask[3] */
        UINT8_C( 15 ), /* ComTOCMask[4] */
        UINT8_C( 252 ), /* ComTOCMask[5] */
        UINT8_C( 252 ) /* ComTOCMask[6] */
    },
    { /* ComIPduInit */
        UINT8_C( 0 ), /* ComIPduInit[0] */
        UINT8_C( 0 ), /* ComIPduInit[1] */
        UINT8_C( 0 ), /* ComIPduInit[2] */
        UINT8_C( 0 ), /* ComIPduInit[3] */
        UINT8_C( 0 ), /* ComIPduInit[4] */
        UINT8_C( 0 ), /* ComIPduInit[5] */
        UINT8_C( 0 ), /* ComIPduInit[6] */
        UINT8_C( 0 ), /* ComIPduInit[7] */
        UINT8_C( 0 ), /* ComIPduInit[8] */
        UINT8_C( 0 ), /* ComIPduInit[9] */
        UINT8_C( 0 ), /* ComIPduInit[10] */
        UINT8_C( 0 ), /* ComIPduInit[11] */
        UINT8_C( 0 ), /* ComIPduInit[12] */
        UINT8_C( 0 ), /* ComIPduInit[13] */
        UINT8_C( 0 ), /* ComIPduInit[14] */
        UINT8_C( 0 ), /* ComIPduInit[15] */
        UINT8_C( 0 ), /* ComIPduInit[16] */
        UINT8_C( 0 ), /* ComIPduInit[17] */
        UINT8_C( 0 ), /* ComIPduInit[18] */
        UINT8_C( 0 ), /* ComIPduInit[19] */
        UINT8_C( 0 ), /* ComIPduInit[20] */
        UINT8_C( 0 ), /* ComIPduInit[21] */
        UINT8_C( 0 ), /* ComIPduInit[22] */
        UINT8_C( 0 ), /* ComIPduInit[23] */
        UINT8_C( 0 ), /* ComIPduInit[24] */
        UINT8_C( 0 ), /* ComIPduInit[25] */
        UINT8_C( 0 ), /* ComIPduInit[26] */
        UINT8_C( 0 ), /* ComIPduInit[27] */
        UINT8_C( 0 ), /* ComIPduInit[28] */
        UINT8_C( 0 ), /* ComIPduInit[29] */
        UINT8_C( 0 ), /* ComIPduInit[30] */
        UINT8_C( 0 ), /* ComIPduInit[31] */
        UINT8_C( 0 ), /* ComIPduInit[32] */
        UINT8_C( 0 ), /* ComIPduInit[33] */
        UINT8_C( 0 ), /* ComIPduInit[34] */
        UINT8_C( 0 ), /* ComIPduInit[35] */
        UINT8_C( 0 ), /* ComIPduInit[36] */
        UINT8_C( 0 ), /* ComIPduInit[37] */
        UINT8_C( 0 ), /* ComIPduInit[38] */
        UINT8_C( 0 ), /* ComIPduInit[39] */
        UINT8_C( 0 ), /* ComIPduInit[40] */
        UINT8_C( 0 ), /* ComIPduInit[41] */
        UINT8_C( 0 ), /* ComIPduInit[42] */
        UINT8_C( 0 ), /* ComIPduInit[43] */
        UINT8_C( 0 ), /* ComIPduInit[44] */
        UINT8_C( 0 ), /* ComIPduInit[45] */
        UINT8_C( 0 ), /* ComIPduInit[46] */
        UINT8_C( 0 ), /* ComIPduInit[47] */
        UINT8_C( 0 ), /* ComIPduInit[48] */
        UINT8_C( 0 ), /* ComIPduInit[49] */
        UINT8_C( 0 ), /* ComIPduInit[50] */
        UINT8_C( 0 ), /* ComIPduInit[51] */
        UINT8_C( 0 ), /* ComIPduInit[52] */
        UINT8_C( 0 ), /* ComIPduInit[53] */
        UINT8_C( 0 ), /* ComIPduInit[54] */
        UINT8_C( 0 ), /* ComIPduInit[55] */
        UINT8_C( 0 ), /* ComIPduInit[56] */
        UINT8_C( 0 ), /* ComIPduInit[57] */
        UINT8_C( 0 ), /* ComIPduInit[58] */
        UINT8_C( 0 ), /* ComIPduInit[59] */
        UINT8_C( 0 ), /* ComIPduInit[60] */
        UINT8_C( 0 ), /* ComIPduInit[61] */
        UINT8_C( 0 ), /* ComIPduInit[62] */
        UINT8_C( 0 ), /* ComIPduInit[63] */
        UINT8_C( 0 ), /* ComIPduInit[64] */
        UINT8_C( 240 ), /* ComIPduInit[65] */
        UINT8_C( 3 ), /* ComIPduInit[66] */
        UINT8_C( 3 ), /* ComIPduInit[67] */
        UINT8_C( 0 ), /* ComIPduInit[68] */
        UINT8_C( 240 ), /* ComIPduInit[69] */
        UINT8_C( 0 ), /* ComIPduInit[70] */
        UINT8_C( 0 ), /* ComIPduInit[71] */
        UINT8_C( 0 ), /* ComIPduInit[72] */
        UINT8_C( 0 ), /* ComIPduInit[73] */
        UINT8_C( 0 ), /* ComIPduInit[74] */
        UINT8_C( 0 ), /* ComIPduInit[75] */
        UINT8_C( 0 ), /* ComIPduInit[76] */
        UINT8_C( 0 ), /* ComIPduInit[77] */
        UINT8_C( 63 ), /* ComIPduInit[78] */
        UINT8_C( 255 ), /* ComIPduInit[79] */
        UINT8_C( 255 ), /* ComIPduInit[80] */
        UINT8_C( 255 ), /* ComIPduInit[81] */
        UINT8_C( 255 ), /* ComIPduInit[82] */
        UINT8_C( 255 ), /* ComIPduInit[83] */
        UINT8_C( 255 ), /* ComIPduInit[84] */
        UINT8_C( 255 ), /* ComIPduInit[85] */
        UINT8_C( 255 ), /* ComIPduInit[86] */
        UINT8_C( 255 ), /* ComIPduInit[87] */
        UINT8_C( 255 ), /* ComIPduInit[88] */
        UINT8_C( 255 ), /* ComIPduInit[89] */
        UINT8_C( 255 ), /* ComIPduInit[90] */
        UINT8_C( 255 ), /* ComIPduInit[91] */
        UINT8_C( 255 ), /* ComIPduInit[92] */
        UINT8_C( 255 ), /* ComIPduInit[93] */
        UINT8_C( 255 ), /* ComIPduInit[94] */
        UINT8_C( 255 ), /* ComIPduInit[95] */
        UINT8_C( 255 ), /* ComIPduInit[96] */
        UINT8_C( 255 ), /* ComIPduInit[97] */
        UINT8_C( 255 ), /* ComIPduInit[98] */
        UINT8_C( 255 ), /* ComIPduInit[99] */
        UINT8_C( 255 ), /* ComIPduInit[100] */
        UINT8_C( 255 ), /* ComIPduInit[101] */
        UINT8_C( 255 ), /* ComIPduInit[102] */
        UINT8_C( 255 ), /* ComIPduInit[103] */
        UINT8_C( 255 ), /* ComIPduInit[104] */
        UINT8_C( 255 ), /* ComIPduInit[105] */
        UINT8_C( 255 ), /* ComIPduInit[106] */
        UINT8_C( 255 ), /* ComIPduInit[107] */
        UINT8_C( 255 ), /* ComIPduInit[108] */
        UINT8_C( 255 ), /* ComIPduInit[109] */
        UINT8_C( 255 ), /* ComIPduInit[110] */
        UINT8_C( 255 ), /* ComIPduInit[111] */
        UINT8_C( 255 ), /* ComIPduInit[112] */
        UINT8_C( 255 ), /* ComIPduInit[113] */
        UINT8_C( 255 ), /* ComIPduInit[114] */
        UINT8_C( 255 ), /* ComIPduInit[115] */
        UINT8_C( 255 ), /* ComIPduInit[116] */
        UINT8_C( 255 ), /* ComIPduInit[117] */
        UINT8_C( 255 ), /* ComIPduInit[118] */
        UINT8_C( 255 ), /* ComIPduInit[119] */
        UINT8_C( 255 ), /* ComIPduInit[120] */
        UINT8_C( 255 ), /* ComIPduInit[121] */
        UINT8_C( 255 ), /* ComIPduInit[122] */
        UINT8_C( 255 ), /* ComIPduInit[123] */
        UINT8_C( 255 ), /* ComIPduInit[124] */
        UINT8_C( 255 ), /* ComIPduInit[125] */
        UINT8_C( 255 ), /* ComIPduInit[126] */
        UINT8_C( 255 ), /* ComIPduInit[127] */
        UINT8_C( 0 ), /* ComIPduInit[128] */
        UINT8_C( 0 ), /* ComIPduInit[129] */
        UINT8_C( 0 ), /* ComIPduInit[130] */
        UINT8_C( 0 ), /* ComIPduInit[131] */
        UINT8_C( 0 ), /* ComIPduInit[132] */
        UINT8_C( 0 ), /* ComIPduInit[133] */
        UINT8_C( 0 ), /* ComIPduInit[134] */
        UINT8_C( 0 ), /* ComIPduInit[135] */
        UINT8_C( 0 ), /* ComIPduInit[136] */
        UINT8_C( 0 ), /* ComIPduInit[137] */
        UINT8_C( 0 ), /* ComIPduInit[138] */
        UINT8_C( 0 ), /* ComIPduInit[139] */
        UINT8_C( 0 ), /* ComIPduInit[140] */
        UINT8_C( 0 ), /* ComIPduInit[141] */
        UINT8_C( 0 ), /* ComIPduInit[142] */
        UINT8_C( 0 ), /* ComIPduInit[143] */
        UINT8_C( 0 ), /* ComIPduInit[144] */
        UINT8_C( 0 ), /* ComIPduInit[145] */
        UINT8_C( 0 ), /* ComIPduInit[146] */
        UINT8_C( 0 ), /* ComIPduInit[147] */
        UINT8_C( 0 ), /* ComIPduInit[148] */
        UINT8_C( 0 ), /* ComIPduInit[149] */
        UINT8_C( 0 ), /* ComIPduInit[150] */
        UINT8_C( 0 ), /* ComIPduInit[151] */
        UINT8_C( 0 ), /* ComIPduInit[152] */
        UINT8_C( 0 ), /* ComIPduInit[153] */
        UINT8_C( 0 ), /* ComIPduInit[154] */
        UINT8_C( 0 ), /* ComIPduInit[155] */
        UINT8_C( 0 ), /* ComIPduInit[156] */
        UINT8_C( 0 ), /* ComIPduInit[157] */
        UINT8_C( 0 ), /* ComIPduInit[158] */
        UINT8_C( 0 ), /* ComIPduInit[159] */
        UINT8_C( 0 ), /* ComIPduInit[160] */
        UINT8_C( 0 ), /* ComIPduInit[161] */
        UINT8_C( 0 ), /* ComIPduInit[162] */
        UINT8_C( 0 ), /* ComIPduInit[163] */
        UINT8_C( 0 ), /* ComIPduInit[164] */
        UINT8_C( 0 ), /* ComIPduInit[165] */
        UINT8_C( 0 ), /* ComIPduInit[166] */
        UINT8_C( 0 ), /* ComIPduInit[167] */
        UINT8_C( 0 ), /* ComIPduInit[168] */
        UINT8_C( 192 ), /* ComIPduInit[169] */
        UINT8_C( 0 ), /* ComIPduInit[170] */
        UINT8_C( 0 ), /* ComIPduInit[171] */
        UINT8_C( 0 ), /* ComIPduInit[172] */
        UINT8_C( 0 ), /* ComIPduInit[173] */
        UINT8_C( 0 ), /* ComIPduInit[174] */
        UINT8_C( 255 ), /* ComIPduInit[175] */
        UINT8_C( 255 ), /* ComIPduInit[176] */
        UINT8_C( 255 ), /* ComIPduInit[177] */
        UINT8_C( 255 ), /* ComIPduInit[178] */
        UINT8_C( 255 ), /* ComIPduInit[179] */
        UINT8_C( 255 ), /* ComIPduInit[180] */
        UINT8_C( 255 ), /* ComIPduInit[181] */
        UINT8_C( 255 ), /* ComIPduInit[182] */
        UINT8_C( 255 ), /* ComIPduInit[183] */
        UINT8_C( 255 ), /* ComIPduInit[184] */
        UINT8_C( 255 ), /* ComIPduInit[185] */
        UINT8_C( 255 ), /* ComIPduInit[186] */
        UINT8_C( 255 ), /* ComIPduInit[187] */
        UINT8_C( 255 ), /* ComIPduInit[188] */
        UINT8_C( 255 ), /* ComIPduInit[189] */
        UINT8_C( 255 ), /* ComIPduInit[190] */
        UINT8_C( 255 ) /* ComIPduInit[191] */
    }
};

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <STOP> */

#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <Com_MemMap.h>

/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/


/*==================[end of file]============================================*/

