


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
        UINT32_C( 1285855334 ), /* ComCfgSignature */
        UINT32_C( 3501822603 ), /* ComLcfgSignature */
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
        TS_MAKENULLREF2CFG, /* ComTxTimeoutNotificationRef */
        TS_MAKENULLREF2CFG, /* ComTxErrorNotificationRef */
        TS_MAKENULLREF2CFG, /* ComTxNotificationRef */
        TS_MAKENULLREF2CFG, /* ComGWSourceRef */
        TS_MAKENULLREF2CFG, /* ComGWDestinationRef */
        UINT16_C( 202 ), /* ComRxIPduStatusBase */
        UINT16_C( 208 ), /* ComTxIPduStatusBase */
        UINT16_C( 8 ), /* ComRxIPduLengthBase */
        UINT16_C( 20 ), /* ComTxIPduLengthBase */
        UINT16_C( 213 ), /* ComTxSignalGroupStatusBase */
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
        UINT16_C( 214 ), /* ComNTimesQueueBaseRemaining */
        UINT16_C( 2 ), /* ComNTimesQueueMax */
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
        UINT16_C( 6 ), /* ComRxIPduArraySize */
        UINT16_C( 5 ), /* ComTxIPduArraySize */
        UINT16_C( 8 ), /* ComRxSignalArraySize */
        UINT16_C( 8 ), /* ComTxSignalArraySize */
        UINT16_C( 0 ), /* ComFilterOneEveryNArraySize */
        UINT16_C( 32 ), /* ComIPduGroupsNum */
        UINT16_C( 1 ), /* ComRxIpduGroupVectorByteEnd */
        UINT16_C( 3 ), /* ComTxIpduGroupVectorByteStart */
        UINT16_C( 0 ), /* ComSigGWRxIPduArraySize */
        UINT16_C( 1 ), /* ComTxSignalGroupArraySize */
        UINT16_C( 1 ) /* ComRxSignalGroupArraySize */
    },
    { /* ComRxIPdu */
        { /* ComRxIPdu[0] -- PDPdu_CounterIn_256R */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 0 ), /* ComIPduGroupMaskRef */
            UINT16_C( 1 ), /* ComIPduInitSize */
            UINT16_C( 1 ), /* ComIPduSizeMax */
            UINT16_C( 30 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 1 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 1 ), /* ComIPduSignalWithDMOnly */
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
        { /* ComRxIPdu[1] -- PDPdu_CounterIn_CAN_FD_257R */
            TS_MAKEREF2CFG( ComIPduInit[1] ), /* ComInitValueRef */
            UINT16_C( 1 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 31 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 1 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 1 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 1 ), /* ComIPduSignalRefFirst */
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
        { /* ComRxIPdu[2] -- PDNm_Pdu_CanIn_NmComUserData_592R */
            TS_MAKEREF2CFG( ComIPduInit[59] ), /* ComInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 6 ), /* ComIPduInitSize */
            UINT16_C( 6 ), /* ComIPduSizeMax */
            UINT16_C( 95 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
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
        { /* ComRxIPdu[3] -- PDPdu_SecuredPayloadIn_281R */
            TS_MAKEREF2CFG( ComIPduInit[61] ), /* ComInitValueRef */
            UINT16_C( 0 ), /* ComIPduGroupMaskRef */
            UINT16_C( 4 ), /* ComIPduInitSize */
            UINT16_C( 4 ), /* ComIPduSizeMax */
            UINT16_C( 101 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 1 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 1 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 3 ), /* ComIPduSignalRefFirst */
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
        { /* ComRxIPdu[4] -- PDISIP_E2EProt_DataIn_280R */
            TS_MAKEREF2CFG( ComIPduInit[57] ), /* ComInitValueRef */
            UINT16_C( 0 ), /* ComIPduGroupMaskRef */
            UINT16_C( 8 ), /* ComIPduInitSize */
            UINT16_C( 8 ), /* ComIPduSizeMax */
            UINT16_C( 105 ), /* ComIPduValueRef */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 0 ), /* ComIPduSignalRefNum */
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
        { /* ComRxIPdu[5] -- CanNmPnEiraRxNSdu */
            TS_MAKEREF2CFG( ComIPduInit[59] ), /* ComInitValueRef */
            UINT16_C( 2 ), /* ComIPduGroupMaskRef */
            UINT16_C( 6 ), /* ComIPduInitSize */
            UINT16_C( 6 ), /* ComIPduSizeMax */
            UINT16_C( 113 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 1 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 1 ), /* ComIPduSignalWithDMOnly */
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
        }
    },
    { /* ComTxIPdu */
        { /* ComTxIPdu[0] -- PDPdu_CounterOut_272T */
            TS_MAKEREF2CFG( ComIPduInit[64] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 3 ), /* ComIPduGroupMaskRef */
            UINT16_C( 1 ), /* ComIPduInitSize */
            UINT16_C( 1 ), /* ComIPduSizeMax */
            UINT16_C( 0 ), /* PduRTxPduId */
            UINT16_C( 119 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
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
        { /* ComTxIPdu[1] -- PDPdu_CounterOut_CAN_FD_273T */
            TS_MAKEREF2CFG( ComIPduInit[65] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 4 ), /* ComIPduGroupMaskRef */
            UINT16_C( 64 ), /* ComIPduInitSize */
            UINT16_C( 64 ), /* ComIPduSizeMax */
            UINT16_C( 1 ), /* PduRTxPduId */
            UINT16_C( 120 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 1 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 65535 ), /* ComIPduTrigTxCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorValue */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 0 ), /* ComTxModeTrueRef */
            UINT16_C( 65535 ), /* ComTxModeFalseRef */
            UINT16_C( 1 ), /* PeriodicQueueRef */
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
        { /* ComTxIPdu[2] -- PDISIP_E2EProt_DataOut_284T */
            TS_MAKEREF2CFG( ComIPduInit[58] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 3 ), /* ComIPduGroupMaskRef */
            UINT16_C( 8 ), /* ComIPduInitSize */
            UINT16_C( 8 ), /* ComIPduSizeMax */
            UINT16_C( 3 ), /* PduRTxPduId */
            UINT16_C( 184 ), /* ComIPduValueRef */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 0 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 2 ), /* ComIPduSignalRefFirst */
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
            UINT8_C( 5 ) /* ComTxModeModes -- True=N_TIMES,False=<undef> */
        },
        { /* ComTxIPdu[3] -- PDPdu_SecuredPayloadOut_285T */
            TS_MAKEREF2CFG( ComIPduInit[62] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 3 ), /* ComIPduGroupMaskRef */
            UINT16_C( 4 ), /* ComIPduInitSize */
            UINT16_C( 4 ), /* ComIPduSizeMax */
            UINT16_C( 2 ), /* PduRTxPduId */
            UINT16_C( 192 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 2 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 65535 ), /* ComIPduTrigTxCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorValue */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 0 ), /* ComTxModeTrueRef */
            UINT16_C( 65535 ), /* ComTxModeFalseRef */
            UINT16_C( 0 ), /* PeriodicQueueRef */
            UINT16_C( 1 ), /* NTimesQueueRef */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComTxTimeoutFactorValue */
            UINT16_C( 65535 ), /* TxDMQueueRef */
            UINT16_C( 0 ), /* ComNotificationFirst */
            UINT16_C( 0 ), /* ComNotificationNum */
            UINT16_C( 0 ), /* ComNotificationDeferredQueueRef */
            UINT8_C( 29 ), /* ComTxIPduFlags -- COM_DYN_IPDU_OFF | COM_CL_UB_NEVER | TM_TRUE | COM_TX_DM_OFF | IMMEDIATE */
            UINT8_C( 5 ) /* ComTxModeModes -- True=N_TIMES,False=<undef> */
        },
        { /* ComTxIPdu[4] -- PDNm_Pdu_CanOut_NmComUserData_593T */
            TS_MAKEREF2CFG( ComIPduInit[60] ), /* ComInitValueRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 65535 ), /* ComIPduGroupMaskRef */
            UINT16_C( 6 ), /* ComIPduInitSize */
            UINT16_C( 6 ), /* ComIPduSizeMax */
            UINT16_C( 4 ), /* PduRTxPduId */
            UINT16_C( 196 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 1 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 2 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            UINT16_C( 3 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 65535 ), /* ComIPduTrigTxCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorValue */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 65535 ), /* ComTxModeTrueRef */
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
            UINT8_C( 0 ) /* ComTxModeModes -- True=NONE,False=<undef> */
        }
    },
    { /* ComTxSignalGroup */
        { /* ComTxSignalGroup[0] -- GRsigGroup_E2EProt_DataOut_284T */
            TS_MAKENULLREF2CFG, /* ComSignalGTMSFlagsInitValueRef */
            TS_MAKENULLREF2CFG, /* ComTOCMaskRef */
            TS_MAKENULLREF2CFG, /* ComWriteMaskRef */
            UINT16_C( 2 ), /* ComIPduRef */
            UINT16_C( 0 ), /* ComSignalPositionInByte */
            UINT16_C( 4 ), /* ComByteSize */
            UINT16_C( 65535 ), /* ComSignalGroupValueRef */
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
            UINT8_C( 2 ) /* ComTxModeNumberOfRepetitions */
        }
    },
    { /* ComTxModePeriodic */
        { /* ComTxModePeriodic[0] */
            UINT16_C( 1 ), /* ComTxModeTimeOffsetFactor */
            UINT16_C( 200 ) /* ComTxModeTimePeriodFactor */
        }
    },
    { /* ComRxIPduSignalGroupList */
        UINT16_C( 0 ) /* ComRxIPduSignalGroupList[0] */
    },
    { /* ComTxIPduSignalGroupList */
        UINT16_C( 0 ) /* ComTxIPduSignalGroupList[0] */
    },
    { /* ComRxIPduSignalList */
        UINT16_C( 0 ), /* ComRxIPduSignalList[0] */
        UINT16_C( 1 ), /* ComRxIPduSignalList[1] */
        UINT16_C( 2 ), /* ComRxIPduSignalList[2] */
        UINT16_C( 3 ), /* ComRxIPduSignalList[3] */
        UINT16_C( 4 ) /* ComRxIPduSignalList[4] */
    },
    { /* ComTxIPduSignalList */
        UINT16_C( 0 ), /* ComTxIPduSignalList[0] */
        UINT16_C( 1 ), /* ComTxIPduSignalList[1] */
        UINT16_C( 4 ), /* ComTxIPduSignalList[2] */
        UINT16_C( 2 ), /* ComTxIPduSignalList[3] */
        UINT16_C( 3 ) /* ComTxIPduSignalList[4] */
    },
    { /* ComRxSignalGroup */
        { /* ComRxSignalGroup[0] -- GRsigGroup_E2EProt_DataIn_280R */
            UINT16_C( 4 ), /* ComIPduRef */
            UINT16_C( 65535 ), /* ComSignalGroupValueRef */
            UINT16_C( 0 ), /* ComSignalPositionInByte */
            UINT16_C( 4 ), /* ComByteSize */
            UINT16_C( 4 ) /* ComSignalExtRef */
        }
    },
    { /* ComRxSignal */
        { /* ComRxSignal[0] -- SGCounterIn_256R */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 30 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 0 ), /* ComSignalExtRef */
            UINT16_C( 0 ) /* ComIPduRef */
        },
        { /* ComRxSignal[1] -- SGCounterIn_CAN_FD_257R */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 31 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 1 ), /* ComSignalExtRef */
            UINT16_C( 1 ) /* ComIPduRef */
        },
        { /* ComRxSignal[2] -- SGNm_SignalIn_592R */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
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
            UINT16_C( 2 ) /* ComIPduRef */
        },
        { /* ComRxSignal[3] -- SGSecuredDataIn_281R */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 101 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 3 ), /* ComSignalExtRef */
            UINT16_C( 3 ) /* ComIPduRef */
        },
        { /* ComRxSignal[4] -- SGCanNmPnEiraRxNSdu */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 6 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 113 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 5 ), /* ComSignalExtRef */
            UINT16_C( 5 ) /* ComIPduRef */
        },
        { /* ComRxSignal[5] -- SafetyE2E_DataIn_CRC_280R */
            { /* ComSignalBase */
                UINT16_C( 515 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_NOLOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 65535 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 4 ) /* ComIPduRef */
        },
        { /* ComRxSignal[6] -- SafetyE2E_DataIn_SQC_Counter_280R */
            { /* ComSignalBase */
                UINT16_C( 801 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_DL */
                UINT16_C( 2 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 65535 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 4 ) /* ComIPduRef */
        },
        { /* ComRxSignal[7] -- SafetyE2E_DataIn_280R */
            { /* ComSignalBase */
                UINT16_C( 801 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_DL */
                UINT16_C( 3 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 65535 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 0 ), /* ComFilterRef */
                    UINT16_C( 0 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType */
                }
            },
            UINT16_C( 65535 ), /* ComSignalExtRef */
            UINT16_C( 4 ) /* ComIPduRef */
        }
    },
    { /* ComRxSignalExt */
        { /* ComRxSignalExt[0] -- SGCounterIn_256R */
            UINT16_C( 0 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[1] -- SGCounterIn_CAN_FD_257R */
            UINT16_C( 1 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[2] -- SGNm_SignalIn_592R */
            UINT16_C( 65535 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[3] -- SGSecuredDataIn_281R */
            UINT16_C( 2 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[4] -- GRsigGroup_E2EProt_DataIn_280R */
            UINT16_C( 3 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        },
        { /* ComRxSignalExt[5] -- SGCanNmPnEiraRxNSdu */
            UINT16_C( 4 ), /* ComNotification */
            UINT16_C( 0 ), /* ComRxTimeoutFactorValue */
            UINT16_C( 0 ), /* ComRxFirstTimeoutFactorValue */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT8_C( 0 ) /* ComRxSignalExtFlags -- COM_RX_DM_OFF | COM_RX_SIG_DM_OFF | COM_UPDATE_BIT_ABSENT | COM_RX_DATA_TOUT_ACTION_NONE */
        }
    },
    { /* ComTxSignal */
        { /* ComTxSignal[0] -- SGCounterOut_272T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 119 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType -- ALWAYS */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 0 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[1] -- SGCounterOut_CAN_FD_273T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 120 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType -- ALWAYS */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 1 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[2] -- SGNm_SignalOut_593T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 196 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 24769 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 4 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[3] -- SGCanNetworkNmPnIraTxNSdu */
            { /* ComSignalBase */
                UINT16_C( 923 ), /* ComRxSignalFlags -- UINT8_N | COM_NO_SIGNALEXT | COM_SIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 6 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 196 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 0 ) /* ComFilterType -- NEVER */
                }
            },
            UINT16_C( 30023 ), /* ComTxSignalFlags -- UINT8_N | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_LITTLE_ENDIAN | COM_SIGNED | COM_SIG_TYPE_AY */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 4 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[4] -- SGSecuredDataOut_285T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 65535 ), /* ComSignalGroupRef */
                UINT16_C( 192 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType -- ALWAYS */
                }
            },
            UINT16_C( 26049 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_TRIG | COM_NO_FILTER | COM_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 3 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[5] -- SafetyE2E_DataOut_CRC_284T */
            { /* ComSignalBase */
                UINT16_C( 523 ), /* ComRxSignalFlags -- UINT16 | COM_NO_SIGNALEXT | COM_UNSIGNED | COM_BUFFER_LOCK | COM_LITTLE_ENDIAN | COM_SIG_TYPE_AY */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 2 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 65535 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType -- ALWAYS */
                }
            },
            UINT16_C( 16451 ), /* ComTxSignalFlags -- UINT16 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_BUFFER_LOCK | COM_UPDATE_BIT_ABSENT | COM_NO_TOC | COM_LITTLE_ENDIAN | COM_UNSIGNED | COM_SIG_TYPE_AY */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 0 ), /* ComSignalPositionInBit */
            UINT16_C( 2 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[6] -- SafetyE2E_DataOut_SQC_Counter_284T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 2 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 65535 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType -- ALWAYS */
                }
            },
            UINT16_C( 24769 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 2 ), /* ComSignalPositionInBit */
            UINT16_C( 2 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        },
        { /* ComTxSignal[7] -- SafetyE2E_DataOut_284T */
            { /* ComSignalBase */
                UINT16_C( 809 ), /* ComRxSignalFlags -- UINT8 | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Read_A1_EL */
                UINT16_C( 3 ), /* ComSignalPositionInBit */
                UINT16_C( 1 ), /* ComBitSize */
                UINT16_C( 0 ), /* ComSignalGroupRef */
                UINT16_C( 65535 ), /* ComBufferRef */
                { /* ComFilterConf */
                    UINT16_C( 65535 ), /* ComFilterRef */
                    UINT16_C( 65535 ), /* ComFilterSignalValueRef */
                    UINT8_C( 1 ) /* ComFilterType -- ALWAYS */
                }
            },
            UINT16_C( 24769 ), /* ComTxSignalFlags -- UINT8 | COM_TRANSFER_PPROPERTY_REPS | COM_TRANSFER_PPROPERTY_PENDING | COM_NO_FILTER | COM_NO_SIGNALEXT | COM_EXT_BASIC_TYPE | Com_EB_Write_A1_EL_DUB_DOC */
            UINT16_C( 65535 ), /* ComUpdateBitPositionInBit */
            UINT16_C( 3 ), /* ComSignalPositionInBit */
            UINT16_C( 2 ), /* ComIPduRef */
            UINT16_C( 0 ) /* ComPositionOfTMSFlag */
        }
    },
    { /* ComPeriodicQueueList */
        UINT16_C( 0 ), /* ComPeriodicQueueList[0] */
        UINT16_C( 1 ) /* ComPeriodicQueueList[1] */
    },
    { /* ComNTimesQueueList */
        UINT16_C( 2 ), /* ComNTimesQueueList[0] */
        UINT16_C( 3 ) /* ComNTimesQueueList[1] */
    },
    { /* ComIPduGroupMask */
        UINT8_C( 1 ), /* ComIPduGroupMask[0] -- [0][0] PN_CAN_IN */
        UINT8_C( 0 ), /* ComIPduGroupMask[1] -- [0][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[2] -- [0][2] */
        UINT8_C( 0 ), /* ComIPduGroupMask[3] -- [0][3] */
        UINT8_C( 2 ), /* ComIPduGroupMask[4] -- [1][0] PN_CANFD_IN */
        UINT8_C( 0 ), /* ComIPduGroupMask[5] -- [1][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[6] -- [1][2] */
        UINT8_C( 0 ), /* ComIPduGroupMask[7] -- [1][3] */
        UINT8_C( 12 ), /* ComIPduGroupMask[8] -- [2][0] RXEIRAPDUS_GLOBAL RNGEIRACanNm */
        UINT8_C( 0 ), /* ComIPduGroupMask[9] -- [2][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[10] -- [2][2] */
        UINT8_C( 0 ), /* ComIPduGroupMask[11] -- [2][3] */
        UINT8_C( 0 ), /* ComIPduGroupMask[12] -- [3][0] */
        UINT8_C( 0 ), /* ComIPduGroupMask[13] -- [3][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[14] -- [3][2] */
        UINT8_C( 64 ), /* ComIPduGroupMask[15] -- [3][3] PN_CAN_OUT */
        UINT8_C( 0 ), /* ComIPduGroupMask[16] -- [4][0] */
        UINT8_C( 0 ), /* ComIPduGroupMask[17] -- [4][1] */
        UINT8_C( 0 ), /* ComIPduGroupMask[18] -- [4][2] */
        UINT8_C( 128 ) /* ComIPduGroupMask[19] -- [4][3] PN_CANFD_OUT */
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
        UINT8_C( 0 ), /* ComIPduInit[65] */
        UINT8_C( 55 ), /* ComIPduInit[66] */
        UINT8_C( 55 ), /* ComIPduInit[67] */
        UINT8_C( 55 ), /* ComIPduInit[68] */
        UINT8_C( 55 ), /* ComIPduInit[69] */
        UINT8_C( 55 ), /* ComIPduInit[70] */
        UINT8_C( 55 ), /* ComIPduInit[71] */
        UINT8_C( 55 ), /* ComIPduInit[72] */
        UINT8_C( 55 ), /* ComIPduInit[73] */
        UINT8_C( 55 ), /* ComIPduInit[74] */
        UINT8_C( 55 ), /* ComIPduInit[75] */
        UINT8_C( 55 ), /* ComIPduInit[76] */
        UINT8_C( 55 ), /* ComIPduInit[77] */
        UINT8_C( 55 ), /* ComIPduInit[78] */
        UINT8_C( 55 ), /* ComIPduInit[79] */
        UINT8_C( 55 ), /* ComIPduInit[80] */
        UINT8_C( 55 ), /* ComIPduInit[81] */
        UINT8_C( 55 ), /* ComIPduInit[82] */
        UINT8_C( 55 ), /* ComIPduInit[83] */
        UINT8_C( 55 ), /* ComIPduInit[84] */
        UINT8_C( 55 ), /* ComIPduInit[85] */
        UINT8_C( 55 ), /* ComIPduInit[86] */
        UINT8_C( 55 ), /* ComIPduInit[87] */
        UINT8_C( 55 ), /* ComIPduInit[88] */
        UINT8_C( 55 ), /* ComIPduInit[89] */
        UINT8_C( 55 ), /* ComIPduInit[90] */
        UINT8_C( 55 ), /* ComIPduInit[91] */
        UINT8_C( 55 ), /* ComIPduInit[92] */
        UINT8_C( 55 ), /* ComIPduInit[93] */
        UINT8_C( 55 ), /* ComIPduInit[94] */
        UINT8_C( 55 ), /* ComIPduInit[95] */
        UINT8_C( 55 ), /* ComIPduInit[96] */
        UINT8_C( 55 ), /* ComIPduInit[97] */
        UINT8_C( 55 ), /* ComIPduInit[98] */
        UINT8_C( 55 ), /* ComIPduInit[99] */
        UINT8_C( 55 ), /* ComIPduInit[100] */
        UINT8_C( 55 ), /* ComIPduInit[101] */
        UINT8_C( 55 ), /* ComIPduInit[102] */
        UINT8_C( 55 ), /* ComIPduInit[103] */
        UINT8_C( 55 ), /* ComIPduInit[104] */
        UINT8_C( 55 ), /* ComIPduInit[105] */
        UINT8_C( 55 ), /* ComIPduInit[106] */
        UINT8_C( 55 ), /* ComIPduInit[107] */
        UINT8_C( 55 ), /* ComIPduInit[108] */
        UINT8_C( 55 ), /* ComIPduInit[109] */
        UINT8_C( 55 ), /* ComIPduInit[110] */
        UINT8_C( 55 ), /* ComIPduInit[111] */
        UINT8_C( 55 ), /* ComIPduInit[112] */
        UINT8_C( 55 ), /* ComIPduInit[113] */
        UINT8_C( 55 ), /* ComIPduInit[114] */
        UINT8_C( 55 ), /* ComIPduInit[115] */
        UINT8_C( 55 ), /* ComIPduInit[116] */
        UINT8_C( 55 ), /* ComIPduInit[117] */
        UINT8_C( 55 ), /* ComIPduInit[118] */
        UINT8_C( 55 ), /* ComIPduInit[119] */
        UINT8_C( 55 ), /* ComIPduInit[120] */
        UINT8_C( 55 ), /* ComIPduInit[121] */
        UINT8_C( 55 ), /* ComIPduInit[122] */
        UINT8_C( 55 ), /* ComIPduInit[123] */
        UINT8_C( 55 ), /* ComIPduInit[124] */
        UINT8_C( 55 ), /* ComIPduInit[125] */
        UINT8_C( 55 ), /* ComIPduInit[126] */
        UINT8_C( 55 ), /* ComIPduInit[127] */
        UINT8_C( 55 ) /* ComIPduInit[128] */
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

