
IPA constant propagation start:
Determining dynamic type for call: CanIf_SendRxIndication.isra.0 (_21, _22, &PduInfo);
  Starting walk at: CanIf_SendRxIndication.isra.0 (_21, _22, &PduInfo);
  instance pointer: &PduInfo  Outer instance pointer: PduInfo offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: _3 (RxLPduId_4(D), PduInfoPtr_5(D));
  Starting walk at: _3 (RxLPduId_4(D), PduInfoPtr_5(D));
  instance pointer: PduInfoPtr_5(D)  Outer instance pointer: PduInfoPtr_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_18 = CanIf_BinarySwFiltering (FirstIdx_12(D), LastIdx_13(D), CanId_15(D), Index_16(D));
  Starting walk at: RetVal_18 = CanIf_BinarySwFiltering (FirstIdx_12(D), LastIdx_13(D), CanId_15(D), Index_16(D));
  instance pointer: Index_16(D)  Outer instance pointer: Index_16(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_20 = CanIf_PerformSwFiltering (FirstIdx_14, LastIdx_15, CanId_18(D), Index_16(D));
  Starting walk at: RetVal_20 = CanIf_PerformSwFiltering (FirstIdx_14, LastIdx_15, CanId_18(D), Index_16(D));
  instance pointer: Index_16(D)  Outer instance pointer: Index_16(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = CanIf_RxIndication_DetChecks (HrhLcl_25, CanIdLcl_26, LclDlc_29, CanSduPtrLcl_30);
  Starting walk at: _2 = CanIf_RxIndication_DetChecks (HrhLcl_25, CanIdLcl_26, LclDlc_29, CanSduPtrLcl_30);
  instance pointer: CanSduPtrLcl_30  Outer instance pointer: CanSduPtrLcl_30 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SwFilterResult_35 = CanIf_SoftwareFiltering (CanIfHrhIdx_32, CanIdLcl_26, &Index);
  Starting walk at: SwFilterResult_35 = CanIf_SoftwareFiltering (CanIfHrhIdx_32, CanIdLcl_26, &Index);
  instance pointer: &Index  Outer instance pointer: Index offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = CanIf_RxIndication_DetChecks (HrhLcl_25, CanIdLcl_26, LclDlc_29, CanSduPtrLcl_30);
Determining dynamic type for call: CanIf_ProcessRxPdu.isra.0 (&RxPduInfo, PduIdx_36, ControllerId_27);
  Starting walk at: CanIf_ProcessRxPdu.isra.0 (&RxPduInfo, PduIdx_36, ControllerId_27);
  instance pointer: &RxPduInfo  Outer instance pointer: RxPduInfo offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SwFilterResult_35 = CanIf_SoftwareFiltering (CanIfHrhIdx_32, CanIdLcl_26, &Index);
  Function call may change dynamic type:_2 = CanIf_RxIndication_DetChecks (HrhLcl_25, CanIdLcl_26, LclDlc_29, CanSduPtrLcl_30);
Determining dynamic type for call: RetVal_19 = _10 (_11, TrcvWuReasonPtr_15(D));
  Starting walk at: RetVal_19 = _10 (_11, TrcvWuReasonPtr_15(D));
  instance pointer: TrcvWuReasonPtr_15(D)  Outer instance pointer: TrcvWuReasonPtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_19 = _10 (_11, TransceiverModePtr_15(D));
  Starting walk at: RetVal_19 = _10 (_11, TransceiverModePtr_15(D));
  instance pointer: TransceiverModePtr_15(D)  Outer instance pointer: TransceiverModePtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _31 = _30 (CanHth_41, &PduInfo);
  Starting walk at: _31 = _30 (CanHth_41, &PduInfo);
  instance pointer: &PduInfo  Outer instance pointer: PduInfo offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:sduLengthInt_40 = CanIf_ProcessTxLength (CanTxPduId_37(D), _5);
Determining dynamic type for call: _1 = CanIf_IsValidConfig (ConfigPtr_14(D));
  Starting walk at: _1 = CanIf_IsValidConfig (ConfigPtr_14(D));
  instance pointer: ConfigPtr_14(D)  Outer instance pointer: ConfigPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_10 = CanIf_IsValidConfig.part.0 (voidConfigPtr_6(D));
  Starting walk at: RetVal_10 = CanIf_IsValidConfig.part.0 (voidConfigPtr_6(D));
  instance pointer: voidConfigPtr_6(D)  Outer instance pointer: voidConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CanIf_IsValidConfig.part.0/61:
  Jump functions of caller  CanIf_ProcessRxPdu.isra.0/60:
    callsite  CanIf_ProcessRxPdu.isra.0/60 -> CanIf_SendRxIndication.isra.0/59 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  CanIf_SendRxIndication.isra.0/59:
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (RxLPduId_4(D), PduInfoPtr_5(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanSM_CheckTransceiverWakeFlagIndication/57:
  Jump functions of caller  CanSM_ClearTrcvWufFlagIndication/56:
  Jump functions of caller  CanSM_ConfirmPnAvailability/55:
  Jump functions of caller  CanSM_TransceiverModeIndication/54:
  Jump functions of caller  CanSM_ControllerModeIndication/53:
  Jump functions of caller  CanSM_ControllerBusOff/52:
  Jump functions of caller  Det_ASR43_ReportRuntimeError/49:
  Jump functions of caller  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48:
  Jump functions of caller  SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47:
  Jump functions of caller  TS_PlatformSigIsValid/41:
  Jump functions of caller  Det_ASR40_ReportError/40:
  Jump functions of caller  CanIf_ProcessTxLength/39:
  Jump functions of caller  CanIf_SendTxConfirmation/37:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (sourcePduId_11);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanIf_RxIndication_DetChecks/35:
  Jump functions of caller  CanIf_BinarySwFiltering/34:
  Jump functions of caller  CanIf_PerformSwFiltering/33:
    callsite  CanIf_PerformSwFiltering/33 -> CanIf_BinarySwFiltering/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_SoftwareFiltering/32:
    callsite  CanIf_SoftwareFiltering/32 -> CanIf_PerformSwFiltering/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_SetPduModeInternal/30:
  Jump functions of caller  CanIf_SetControllerModeInternal/29:
    indirect simple callsite, calling param -1, offset 0, for stmt _15 = _14 (canCtrlId_31, 3);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _13 = _12 (canCtrlId_31, 1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _11 = _10 (canCtrlId_31, 2);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  CanIf_CheckTrcvWakeFlagIndication/28:
  Jump functions of caller  CanIf_ClearTrcvWufFlagIndication/27:
  Jump functions of caller  CanIf_ConfirmPnAvailability/26:
  Jump functions of caller  CanIf_TrcvModeIndication/25:
  Jump functions of caller  CanIf_ControllerModeIndication/24:
  Jump functions of caller  CanIf_ControllerBusOff/23:
  Jump functions of caller  CanIf_RxIndication/22:
    callsite  CanIf_RxIndication/22 -> CanIf_ProcessRxPdu.isra.0/60 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanIf_RxIndication/22 -> CanIf_SoftwareFiltering/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 65535
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
    callsite  CanIf_RxIndication/22 -> CanIf_RxIndication_DetChecks/35 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_TxConfirmation/21:
    callsite  CanIf_TxConfirmation/21 -> CanIf_SendTxConfirmation/37 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanIf_CheckTrcvWakeFlag/20:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_18 = _10 (_11);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanIf_ClearTrcvWufFlag/19:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_18 = _10 (_11);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanIf_CheckWakeup/18:
    indirect simple callsite, calling param -1, offset 0, for stmt _13 = _11 (_12);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanIf_SetTrcvWakeupMode/17:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_19 = _10 (_11, TrcvWakeupMode_16(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_GetTrcvWakeupReason/16:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_19 = _10 (_11, TrcvWuReasonPtr_15(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_GetTrcvMode/15:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_19 = _10 (_11, TransceiverModePtr_15(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_SetTrcvMode/14:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_19 = _10 (_11, TransceiverMode_16(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_GetPduMode/13:
  Jump functions of caller  CanIf_SetPduMode/12:
    callsite  CanIf_SetPduMode/12 -> CanIf_SetPduModeInternal/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_Transmit/11:
    callsite  CanIf_Transmit/11 -> CanIf_ProcessTxLength/39 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _31 = _30 (CanHth_41, &PduInfo);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  CanIf_GetControllerMode/10:
  Jump functions of caller  CanIf_SetControllerMode/9:
    callsite  CanIf_SetControllerMode/9 -> CanIf_SetControllerModeInternal/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_Init/8:
    callsite  CanIf_Init/8 -> CanIf_IsValidConfig/7 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_IsValidConfig/7:
    callsite  CanIf_IsValidConfig/7 -> CanIf_IsValidConfig.part.0/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanIf_CheckWakeFlag_HlpNoPn/6:
  Jump functions of caller  CanIf_ClearTrcvWufFlag_HlpNoPn/5:

 Propagating constants:

Not considering CanIf_CheckTrcvWakeFlagIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ClearTrcvWufFlagIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ConfirmPnAvailability for cloning; -fipa-cp-clone disabled.
Not considering CanIf_TrcvModeIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ControllerModeIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ControllerBusOff for cloning; -fipa-cp-clone disabled.
Not considering CanIf_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering CanIf_CheckTrcvWakeFlag for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ClearTrcvWufFlag for cloning; -fipa-cp-clone disabled.
Not considering CanIf_CheckWakeup for cloning; -fipa-cp-clone disabled.
Not considering CanIf_SetTrcvWakeupMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_GetTrcvWakeupReason for cloning; -fipa-cp-clone disabled.
Not considering CanIf_GetTrcvMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_SetTrcvMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_GetPduMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_SetPduMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_Transmit for cloning; -fipa-cp-clone disabled.
Not considering CanIf_GetControllerMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_SetControllerMode for cloning; -fipa-cp-clone disabled.
Not considering CanIf_Init for cloning; -fipa-cp-clone disabled.
Not considering CanIf_IsValidConfig for cloning; -fipa-cp-clone disabled.
Not considering CanIf_CheckWakeFlag_HlpNoPn for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ClearTrcvWufFlag_HlpNoPn for cloning; -fipa-cp-clone disabled.

overall_size: 1150, max_new_size: 11001
 - context independent values, size: 26, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 29, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 36, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: CanIf_IsValidConfig.part.0/61:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_ProcessRxPdu.isra.0/60:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct PduInfoType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_SendRxIndication.isra.0/59:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct PduInfoType * ~[0B, 0B]
        AGGS VARIABLE
  Node: CanIf_ProcessTxLength/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_SendTxConfirmation/37:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_RxIndication_DetChecks/35:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_BinarySwFiltering/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         CanIf_LPduIndexType * const ~[0B, 0B]
        ref offset 0: 65535 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: CanIf_PerformSwFiltering/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         CanIf_LPduIndexType * const ~[0B, 0B]
        ref offset 0: 65535 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: CanIf_SoftwareFiltering/32:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         CanIf_LPduIndexType * const ~[0B, 0B]
        ref offset 0: 65535 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: CanIf_SetPduModeInternal/30:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_SetControllerModeInternal/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanIf_CheckTrcvWakeFlagIndication/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ClearTrcvWufFlagIndication/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ConfirmPnAvailability/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_TrcvModeIndication/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ControllerModeIndication/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ControllerBusOff/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_RxIndication/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_TxConfirmation/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_CheckTrcvWakeFlag/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ClearTrcvWufFlag/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_CheckWakeup/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_SetTrcvWakeupMode/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_GetTrcvWakeupReason/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_GetTrcvMode/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_SetTrcvMode/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_GetPduMode/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_SetPduMode/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_Transmit/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_GetControllerMode/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_SetControllerMode/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_Init/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_IsValidConfig/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_CheckWakeFlag_HlpNoPn/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ClearTrcvWufFlag_HlpNoPn/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of CanIf_SoftwareFiltering/32 for all known contexts.
 - Creating a specialized node of CanIf_PerformSwFiltering/33 for all known contexts.
 - Creating a specialized node of CanIf_BinarySwFiltering/34 for all known contexts.
Propagated bits info for function CanIf_BinarySwFiltering.constprop/64:
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanIf_PerformSwFiltering.constprop/63:
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanIf_SoftwareFiltering.constprop/62:
 param 2: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanIf_ProcessRxPdu.isra.0/60:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function CanIf_SendRxIndication.isra.0/59:
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function CanIf_BinarySwFiltering/34:
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanIf_PerformSwFiltering/33:
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanIf_SoftwareFiltering/32:
 param 2: value = 0x0, mask = 0xfffffffe

IPA constant propagation end

Reclaiming functions: CanIf_BinarySwFiltering/34 CanIf_PerformSwFiltering/33 CanIf_SoftwareFiltering/32
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CanIf_BinarySwFiltering.constprop.0/64 (CanIf_BinarySwFiltering.constprop) @0719e2a0
  Type: function definition analyzed
  Visibility:
  References: CanIf_ConfigPtr/1 (read)
  Referring: 
  Clone of CanIf_BinarySwFiltering/34
  Availability: local
  Function flags: count:229727064 (estimated locally) local optimize_size
  Called by: CanIf_PerformSwFiltering.constprop/63 (524845004 (estimated locally),0.49 per call) 
  Calls: 
CanIf_PerformSwFiltering.constprop.0/63 (CanIf_PerformSwFiltering.constprop) @07142ee0
  Type: function definition analyzed
  Visibility:
  References: CanIf_ConfigPtr/1 (read)
  Referring: 
  Clone of CanIf_PerformSwFiltering/33
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: CanIf_SoftwareFiltering.constprop/62 (154348240 (estimated locally),0.14 per call) 
  Calls: CanIf_BinarySwFiltering.constprop/64 (524845004 (estimated locally),0.49 per call) 
CanIf_SoftwareFiltering.constprop.0/62 (CanIf_SoftwareFiltering.constprop) @07138700
  Type: function definition analyzed
  Visibility:
  References: CanIf_ConfigPtr/1 (read)
  Referring: 
  Clone of CanIf_SoftwareFiltering/32
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: CanIf_RxIndication/22 (166183022 (estimated locally),0.15 per call) 
  Calls: CanIf_PerformSwFiltering.constprop/63 (154348240 (estimated locally),0.14 per call) 
CanIf_IsValidConfig.part.0/61 (CanIf_IsValidConfig.part.0) @07356e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanIf_LcfgSignature/42 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanIf_IsValidConfig/7 (66369400 (estimated locally),0.06 per call) 
  Calls: 
CanIf_ProcessRxPdu.isra.0/60 (CanIf_ProcessRxPdu.isra.0) @0725c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanIf_RxPduConfigPtr/3 (read)CanIf_CanControllerMode/43 (read)CanIf_PduMode/45 (read)CanIf_CanControllerFlags/44 (read)CanIf_CanControllerFlags/44 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_RxIndication/22 (54840397 (estimated locally),0.05 per call) 
  Calls: CanIf_SendRxIndication.isra.0/59 (536870913 (estimated locally),0.50 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (536870913 (estimated locally),0.50 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (536870913 (estimated locally),0.50 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (1073741824 (estimated locally),1.00 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (1073741824 (estimated locally),1.00 per call) 
CanIf_SendRxIndication.isra.0/59 (CanIf_SendRxIndication.isra.0) @0725c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanIf_CbkFctPtrTbl/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_ProcessRxPdu.isra.0/60 (536870913 (estimated locally),0.50 per call) 
  Calls: 
   Indirect call(496068723 (estimated locally),0.46 per call) 
CanSM_CheckTransceiverWakeFlagIndication/57 (CanSM_CheckTransceiverWakeFlagIndication) @07226d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_CheckTrcvWakeFlagIndication/28 (359703511 (estimated locally),0.33 per call) 
  Calls: 
CanSM_ClearTrcvWufFlagIndication/56 (CanSM_ClearTrcvWufFlagIndication) @07226b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ClearTrcvWufFlagIndication/27 (359703511 (estimated locally),0.33 per call) 
  Calls: 
CanSM_ConfirmPnAvailability/55 (CanSM_ConfirmPnAvailability) @072269a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ConfirmPnAvailability/26 (359703511 (estimated locally),0.33 per call) 
  Calls: 
CanSM_TransceiverModeIndication/54 (CanSM_TransceiverModeIndication) @072267e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_TrcvModeIndication/25 (359703511 (estimated locally),0.33 per call) 
  Calls: 
CanSM_ControllerModeIndication/53 (CanSM_ControllerModeIndication) @07226620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ControllerModeIndication/24 (357977557 (estimated locally),0.33 per call) 
  Calls: 
CanSM_ControllerBusOff/52 (CanSM_ControllerBusOff) @07226460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ControllerBusOff/23 (359703511 (estimated locally),0.33 per call) 
  Calls: 
CanIf_CanTrcvConfig/51 (CanIf_CanTrcvConfig) @071c3510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_CheckWakeup/18 (read)CanIf_ClearTrcvWufFlag/19 (read)CanIf_SetTrcvMode/14 (read)CanIf_GetTrcvMode/15 (read)CanIf_GetTrcvWakeupReason/16 (read)CanIf_SetTrcvWakeupMode/17 (read)CanIf_CheckTrcvWakeFlag/20 (read)
  Availability: not_available
  Varpool flags: read-only
CanIf_CbkFctPtrTbl/50 (CanIf_CbkFctPtrTbl) @071bd288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_SendTxConfirmation/37 (read)CanIf_SendRxIndication.isra.0/59 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ASR43_ReportRuntimeError/49 (Det_ASR43_ReportRuntimeError) @071b5540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ProcessTxLength/39 (112528143 (estimated locally),0.10 per call) 
  Calls: 
SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0) @071b5000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ControllerBusOff/23 (359703511 (estimated locally),0.33 per call) CanIf_TxConfirmation/21 (359703511 (estimated locally),0.33 per call) CanIf_Transmit/11 (29759104 (estimated locally),0.03 per call) CanIf_Transmit/11 (34026951 (estimated locally),0.03 per call) CanIf_Transmit/11 (29759104 (estimated locally),0.03 per call) CanIf_Transmit/11 (5827183 (estimated locally),0.01 per call) CanIf_Transmit/11 (66562894 (estimated locally),0.06 per call) CanIf_GetControllerMode/10 (337401893 (estimated locally),0.31 per call) CanIf_ProcessRxPdu.isra.0/60 (536870913 (estimated locally),0.50 per call) CanIf_ProcessRxPdu.isra.0/60 (1073741824 (estimated locally),1.00 per call) CanIf_SetPduModeInternal/30 (72434538 (estimated locally),0.07 per call) 
  Calls: 
SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0) @0719eee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_ControllerBusOff/23 (359703511 (estimated locally),0.33 per call) CanIf_TxConfirmation/21 (359703511 (estimated locally),0.33 per call) CanIf_Transmit/11 (29759104 (estimated locally),0.03 per call) CanIf_Transmit/11 (136176133 (estimated locally),0.13 per call) CanIf_GetControllerMode/10 (337401893 (estimated locally),0.31 per call) CanIf_ProcessRxPdu.isra.0/60 (536870913 (estimated locally),0.50 per call) CanIf_ProcessRxPdu.isra.0/60 (1073741824 (estimated locally),1.00 per call) CanIf_SetPduModeInternal/30 (72434538 (estimated locally),0.07 per call) 
  Calls: 
CanIf_CanDrvFctConfig/46 (CanIf_CanDrvFctConfig) @071ac6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_SetControllerModeInternal/29 (read)CanIf_Transmit/11 (read)CanIf_SetControllerModeInternal/29 (read)CanIf_SetControllerModeInternal/29 (read)CanIf_RxIndication/22 (read)
  Availability: not_available
  Varpool flags: read-only
CanIf_PduMode/45 (CanIf_PduMode) @07196ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_SetPduModeInternal/30 (write)CanIf_SetControllerModeInternal/29 (write)CanIf_GetPduMode/13 (read)CanIf_ProcessRxPdu.isra.0/60 (read)CanIf_SetPduModeInternal/30 (write)CanIf_SetPduModeInternal/30 (write)CanIf_SetControllerModeInternal/29 (write)CanIf_ControllerBusOff/23 (write)CanIf_Init/8 (write)CanIf_Transmit/11 (read)
  Availability: not_available
  Varpool flags:
CanIf_CanControllerFlags/44 (CanIf_CanControllerFlags) @07196c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_SetPduModeInternal/30 (write)CanIf_SetControllerModeInternal/29 (read)CanIf_SetControllerModeInternal/29 (write)CanIf_ProcessRxPdu.isra.0/60 (write)CanIf_ProcessRxPdu.isra.0/60 (read)CanIf_Transmit/11 (read)CanIf_SetPduModeInternal/30 (read)CanIf_Init/8 (write)CanIf_TxConfirmation/21 (read)CanIf_TxConfirmation/21 (write)
  Availability: not_available
  Varpool flags:
CanIf_CanControllerMode/43 (CanIf_CanControllerMode) @07196c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_ControllerBusOff/23 (write)CanIf_ProcessRxPdu.isra.0/60 (read)CanIf_Init/8 (write)CanIf_GetControllerMode/10 (read)CanIf_Transmit/11 (read)CanIf_ControllerModeIndication/24 (write)CanIf_SetPduMode/12 (read)
  Availability: not_available
  Varpool flags:
CanIf_LcfgSignature/42 (CanIf_LcfgSignature) @071967e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanIf_IsValidConfig.part.0/61 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/41 (TS_PlatformSigIsValid) @0719ea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_IsValidConfig/7 (574129754 (estimated locally),0.53 per call) 
  Calls: 
Det_ASR40_ReportError/40 (Det_ASR40_ReportError) @0719e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanIf_CheckTrcvWakeFlagIndication/28 (359703511 (estimated locally),0.33 per call) CanIf_CheckTrcvWakeFlagIndication/28 (354334802 (estimated locally),0.33 per call) CanIf_ClearTrcvWufFlagIndication/27 (359703511 (estimated locally),0.33 per call) CanIf_ClearTrcvWufFlagIndication/27 (354334802 (estimated locally),0.33 per call) CanIf_ConfirmPnAvailability/26 (359703511 (estimated locally),0.33 per call) CanIf_ConfirmPnAvailability/26 (354334802 (estimated locally),0.33 per call) CanIf_TrcvModeIndication/25 (359703511 (estimated locally),0.33 per call) CanIf_TrcvModeIndication/25 (354334802 (estimated locally),0.33 per call) CanIf_ControllerModeIndication/24 (124025147 (estimated locally),0.12 per call) CanIf_ControllerModeIndication/24 (237404317 (estimated locally),0.22 per call) CanIf_ControllerModeIndication/24 (354334802 (estimated locally),0.33 per call) CanIf_ControllerBusOff/23 (359703511 (estimated locally),0.33 per call) CanIf_ControllerBusOff/23 (354334802 (estimated locally),0.33 per call) CanIf_RxIndication/22 (215822106 (estimated locally),0.20 per call) CanIf_RxIndication/22 (354334802 (estimated locally),0.33 per call) CanIf_TxConfirmation/21 (359703511 (estimated locally),0.33 per call) CanIf_TxConfirmation/21 (354334802 (estimated locally),0.33 per call) CanIf_CheckTrcvWakeFlag/20 (237404317 (estimated locally),0.22 per call) CanIf_CheckTrcvWakeFlag/20 (354334802 (estimated locally),0.33 per call) CanIf_ClearTrcvWufFlag/19 (237404317 (estimated locally),0.22 per call) CanIf_ClearTrcvWufFlag/19 (354334802 (estimated locally),0.33 per call) CanIf_CheckWakeup/18 (38976828 (estimated locally),0.22 per call) CanIf_CheckWakeup/18 (58174370 (estimated locally),0.33 per call) CanIf_SetTrcvWakeupMode/17 (159060892 (estimated locally),0.15 per call) CanIf_SetTrcvWakeupMode/17 (237404317 (estimated locally),0.22 per call) CanIf_SetTrcvWakeupMode/17 (354334802 (estimated locally),0.33 per call) CanIf_GetTrcvWakeupReason/16 (196024745 (estimated locally),0.18 per call) CanIf_GetTrcvWakeupReason/16 (125392644 (estimated locally),0.12 per call) CanIf_GetTrcvWakeupReason/16 (354334802 (estimated locally),0.33 per call) CanIf_GetTrcvMode/15 (196024745 (estimated locally),0.18 per call) CanIf_GetTrcvMode/15 (125392644 (estimated locally),0.12 per call) CanIf_GetTrcvMode/15 (354334802 (estimated locally),0.33 per call) CanIf_SetTrcvMode/14 (159060892 (estimated locally),0.15 per call) CanIf_SetTrcvMode/14 (237404317 (estimated locally),0.22 per call) CanIf_SetTrcvMode/14 (354334802 (estimated locally),0.33 per call) CanIf_GetPduMode/13 (84013071 (estimated locally),0.08 per call) CanIf_GetPduMode/13 (237404317 (estimated locally),0.22 per call) CanIf_GetPduMode/13 (354334802 (estimated locally),0.33 per call) CanIf_SetPduMode/12 (268861108 (estimated locally),0.25 per call) CanIf_SetPduMode/12 (237404317 (estimated locally),0.22 per call) CanIf_SetPduMode/12 (354334802 (estimated locally),0.33 per call) CanIf_Transmit/11 (119396890 (estimated locally),0.11 per call) CanIf_Transmit/11 (84013071 (estimated locally),0.08 per call) CanIf_Transmit/11 (237404317 (estimated locally),0.22 per call) CanIf_Transmit/11 (354334802 (estimated locally),0.33 per call) CanIf_GetControllerMode/10 (144600811 (estimated locally),0.13 per call) CanIf_GetControllerMode/10 (237404317 (estimated locally),0.22 per call) CanIf_GetControllerMode/10 (354334802 (estimated locally),0.33 per call) CanIf_SetControllerMode/9 (124025147 (estimated locally),0.12 per call) CanIf_SetControllerMode/9 (237404317 (estimated locally),0.22 per call) CanIf_SetControllerMode/9 (354334802 (estimated locally),0.33 per call) CanIf_Init/8 (58174370 (estimated locally),0.23 per call) CanIf_Init/8 (75551130 (estimated locally),0.30 per call) CanIf_CheckWakeFlag_HlpNoPn/6 (1073741824 (estimated locally),1.00 per call) CanIf_ClearTrcvWufFlag_HlpNoPn/5 (1073741824 (estimated locally),1.00 per call) CanIf_ProcessTxLength/39 (70016557 (estimated locally),0.07 per call) CanIf_RxIndication_DetChecks/35 (47937553 (estimated locally),0.04 per call) CanIf_RxIndication_DetChecks/35 (39683574 (estimated locally),0.04 per call) CanIf_RxIndication_DetChecks/35 (112137929 (estimated locally),0.10 per call) CanIf_RxIndication_DetChecks/35 (379595115 (estimated locally),0.35 per call) CanIf_RxIndication_DetChecks/35 (354334802 (estimated locally),0.33 per call) 
  Calls: 
CanIf_ProcessTxLength/39 (CanIf_ProcessTxLength) @0719e620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanIf_TxPduConfigPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_Transmit/11 (278592743 (estimated locally),0.26 per call) 
  Calls: Det_ASR43_ReportRuntimeError/49 (112528143 (estimated locally),0.10 per call) Det_ASR40_ReportError/40 (70016557 (estimated locally),0.07 per call) 
CanIf_SendTxConfirmation/37 (CanIf_SendTxConfirmation) @0719e0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanIf_TxPduConfigPtr/0 (read)CanIf_CbkFctPtrTbl/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_TxConfirmation/21 (359703511 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(496068723 (estimated locally),0.46 per call) 
CanIf_RxIndication_DetChecks/35 (CanIf_RxIndication_DetChecks) @07142d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanIf_DriverConfigPtr/4 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_RxIndication/22 (503584915 (estimated locally),0.47 per call) 
  Calls: Det_ASR40_ReportError/40 (47937553 (estimated locally),0.04 per call) Det_ASR40_ReportError/40 (39683574 (estimated locally),0.04 per call) Det_ASR40_ReportError/40 (112137929 (estimated locally),0.10 per call) Det_ASR40_ReportError/40 (379595115 (estimated locally),0.35 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_BinarySwFiltering/34 (CanIf_BinarySwFiltering) @071429a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:229727064 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_PerformSwFiltering/33 (CanIf_PerformSwFiltering) @07142540
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_SoftwareFiltering/32 (CanIf_SoftwareFiltering) @07138e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_SetPduModeInternal/30 (CanIf_SetPduModeInternal) @07138540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanIf_PduMode/45 (write)CanIf_PduMode/45 (write)CanIf_PduMode/45 (write)CanIf_ConfigPtr/1 (read)CanIf_CanControllerFlags/44 (read)CanIf_CanControllerFlags/44 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_SetPduMode/12 (43139859 (estimated locally),0.04 per call) 
  Calls: SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (72434538 (estimated locally),0.07 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (72434538 (estimated locally),0.07 per call) 
CanIf_SetControllerModeInternal/29 (CanIf_SetControllerModeInternal) @071381c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanIf_ConfigPtr/1 (read)CanIf_PduMode/45 (write)CanIf_CanDrvFctConfig/46 (read)CanIf_CanDrvFctConfig/46 (read)CanIf_CanDrvFctConfig/46 (read)CanIf_PduMode/45 (write)CanIf_ConfigPtr/1 (read)CanIf_CanControllerFlags/44 (read)CanIf_CanControllerFlags/44 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanIf_SetControllerMode/9 (357977557 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(268435456 (estimated locally),0.25 per call) 
   Indirect call(268435456 (estimated locally),0.25 per call) 
   Indirect call(268435456 (estimated locally),0.25 per call) 
CanIf_CheckTrcvWakeFlagIndication/28 (CanIf_CheckTrcvWakeFlagIndication) @07131b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_CheckTransceiverWakeFlagIndication/57 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_ClearTrcvWufFlagIndication/27 (CanIf_ClearTrcvWufFlagIndication) @071319a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_ClearTrcvWufFlagIndication/56 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_ConfirmPnAvailability/26 (CanIf_ConfirmPnAvailability) @071317e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_ConfirmPnAvailability/55 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_TrcvModeIndication/25 (CanIf_TrcvModeIndication) @07131620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_TransceiverModeIndication/54 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_ControllerModeIndication/24 (CanIf_ControllerModeIndication) @07131460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_DriverConfigPtr/4 (read)CanIf_CanControllerMode/43 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_ControllerModeIndication/53 (357977557 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (124025147 (estimated locally),0.12 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_ControllerBusOff/23 (CanIf_ControllerBusOff) @071310e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_DriverConfigPtr/4 (read)CanIf_CanControllerMode/43 (write)CanIf_PduMode/45 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_ControllerBusOff/52 (359703511 (estimated locally),0.33 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (359703511 (estimated locally),0.33 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_RxIndication/22 (CanIf_RxIndication) @07126ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanDrvFctConfig/46 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_ProcessRxPdu.isra.0/60 (54840397 (estimated locally),0.05 per call) CanIf_SoftwareFiltering.constprop/62 (166183022 (estimated locally),0.15 per call) CanIf_RxIndication_DetChecks/35 (503584915 (estimated locally),0.47 per call) Det_ASR40_ReportError/40 (215822106 (estimated locally),0.20 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_TxConfirmation/21 (CanIf_TxConfirmation) @071267e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_TxPduConfigPtr/0 (read)CanIf_CanControllerFlags/44 (read)CanIf_CanControllerFlags/44 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_SendTxConfirmation/37 (359703511 (estimated locally),0.33 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (359703511 (estimated locally),0.33 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_CheckTrcvWakeFlag/20 (CanIf_CheckTrcvWakeFlag) @07126620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanTrcvConfig/51 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(482002704 (estimated locally),0.45 per call) 
CanIf_ClearTrcvWufFlag/19 (CanIf_ClearTrcvWufFlag) @071262a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanTrcvConfig/51 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(482002704 (estimated locally),0.45 per call) 
CanIf_CheckWakeup/18 (CanIf_CheckWakeup) @0710bee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_CanTrcvConfig/51 (read)CanIf_ConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:176285970 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (38976828 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (58174370 (estimated locally),0.33 per call) 
   Indirect call(477815112 (estimated locally),2.71 per call) 
CanIf_SetTrcvWakeupMode/17 (CanIf_SetTrcvWakeupMode) @0710bc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanTrcvConfig/51 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(322941812 (estimated locally),0.30 per call) 
CanIf_GetTrcvWakeupReason/16 (CanIf_GetTrcvWakeupReason) @0710b8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanTrcvConfig/51 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (196024745 (estimated locally),0.18 per call) Det_ASR40_ReportError/40 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(397989633 (estimated locally),0.37 per call) 
CanIf_GetTrcvMode/15 (CanIf_GetTrcvMode) @0710b540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanTrcvConfig/51 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (196024745 (estimated locally),0.18 per call) Det_ASR40_ReportError/40 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(397989633 (estimated locally),0.37 per call) 
CanIf_SetTrcvMode/14 (CanIf_SetTrcvMode) @0710b1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_CanTrcvConfig/51 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(322941812 (estimated locally),0.30 per call) 
CanIf_GetPduMode/13 (CanIf_GetPduMode) @070efe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_DriverConfigPtr/4 (read)CanIf_PduMode/45 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_SetPduMode/12 (CanIf_SetPduMode) @070efb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_DriverConfigPtr/4 (read)CanIf_CanControllerMode/43 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_SetPduModeInternal/30 (43139859 (estimated locally),0.04 per call) Det_ASR40_ReportError/40 (268861108 (estimated locally),0.25 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_Transmit/11 (CanIf_Transmit) @070ef9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_ConfigPtr/1 (read)CanIf_TxPduConfigPtr/0 (read)CanIf_CanControllerMode/43 (read)CanIf_PduMode/45 (read)CanIf_ConfigPtr/1 (read)CanIf_CanControllerFlags/44 (read)CanIf_TxPduConfigPtr/0 (read)CanIf_TxPduConfigPtr/0 (read)CanIf_CanDrvFctConfig/46 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (29759104 (estimated locally),0.03 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (34026951 (estimated locally),0.03 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (29759104 (estimated locally),0.03 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (29759104 (estimated locally),0.03 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (5827183 (estimated locally),0.01 per call) SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (66562894 (estimated locally),0.06 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (136176133 (estimated locally),0.13 per call) CanIf_ProcessTxLength/39 (278592743 (estimated locally),0.26 per call) Det_ASR40_ReportError/40 (119396890 (estimated locally),0.11 per call) Det_ASR40_ReportError/40 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
   Indirect call(29759104 (estimated locally),0.03 per call) 
CanIf_GetControllerMode/10 (CanIf_GetControllerMode) @070ef620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_DriverConfigPtr/4 (read)CanIf_CanControllerMode/43 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/48 (337401893 (estimated locally),0.31 per call) SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0/47 (337401893 (estimated locally),0.31 per call) Det_ASR40_ReportError/40 (144600811 (estimated locally),0.13 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_SetControllerMode/9 (CanIf_SetControllerMode) @070ef460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_State/2 (read)CanIf_DriverConfigPtr/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_SetControllerModeInternal/29 (357977557 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (124025147 (estimated locally),0.12 per call) Det_ASR40_ReportError/40 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) 
CanIf_Init/8 (CanIf_Init) @070ef2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanIf_ConfigPtr/1 (write)CanIf_TxPduConfigPtr/0 (write)CanIf_RxPduConfigPtr/3 (write)CanIf_DriverConfigPtr/4 (write)CanIf_CanControllerMode/43 (write)CanIf_CanControllerFlags/44 (write)CanIf_PduMode/45 (write)CanIf_State/2 (write)
  Referring: 
  Availability: available
  Function flags: count:251837100 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (58174370 (estimated locally),0.23 per call) CanIf_IsValidConfig/7 (176285970 (estimated locally),0.70 per call) Det_ASR40_ReportError/40 (75551130 (estimated locally),0.30 per call) 
CanIf_IsValidConfig/7 (CanIf_IsValidConfig) @06fffe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanIf_Init/8 (176285970 (estimated locally),0.70 per call) 
  Calls: CanIf_IsValidConfig.part.0/61 (66369400 (estimated locally),0.06 per call) TS_PlatformSigIsValid/41 (574129754 (estimated locally),0.53 per call) 
CanIf_CheckWakeFlag_HlpNoPn/6 (CanIf_CheckWakeFlag_HlpNoPn) @06fffc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (1073741824 (estimated locally),1.00 per call) 
CanIf_ClearTrcvWufFlag_HlpNoPn/5 (CanIf_ClearTrcvWufFlag_HlpNoPn) @06fffa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (1073741824 (estimated locally),1.00 per call) 
CanIf_DriverConfigPtr/4 (CanIf_DriverConfigPtr) @0709d708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanIf_SetPduMode/12 (read)CanIf_ControllerBusOff/23 (read)CanIf_RxIndication_DetChecks/35 (read)CanIf_Init/8 (write)CanIf_SetControllerMode/9 (read)CanIf_GetControllerMode/10 (read)CanIf_GetPduMode/13 (read)CanIf_ControllerModeIndication/24 (read)
  Availability: available
  Varpool flags:
CanIf_RxPduConfigPtr/3 (CanIf_RxPduConfigPtr) @0709d6c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanIf_ProcessRxPdu.isra.0/60 (read)CanIf_Init/8 (write)
  Availability: available
  Varpool flags:
CanIf_State/2 (CanIf_State) @0709d678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanIf_ConfirmPnAvailability/26 (read)CanIf_ClearTrcvWufFlagIndication/27 (read)CanIf_Init/8 (write)CanIf_SetControllerMode/9 (read)CanIf_GetControllerMode/10 (read)CanIf_Transmit/11 (read)CanIf_SetPduMode/12 (read)CanIf_GetPduMode/13 (read)CanIf_SetTrcvMode/14 (read)CanIf_GetTrcvMode/15 (read)CanIf_GetTrcvWakeupReason/16 (read)CanIf_SetTrcvWakeupMode/17 (read)CanIf_CheckWakeup/18 (read)CanIf_ClearTrcvWufFlag/19 (read)CanIf_CheckTrcvWakeFlag/20 (read)CanIf_TxConfirmation/21 (read)CanIf_RxIndication/22 (read)CanIf_ControllerBusOff/23 (read)CanIf_ControllerModeIndication/24 (read)CanIf_TrcvModeIndication/25 (read)CanIf_CheckTrcvWakeFlagIndication/28 (read)
  Availability: available
  Varpool flags: initialized
CanIf_ConfigPtr/1 (CanIf_ConfigPtr) @0709d630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanIf_GetTrcvMode/15 (read)CanIf_SetTrcvMode/14 (read)CanIf_SetControllerModeInternal/29 (read)CanIf_SetControllerModeInternal/29 (read)CanIf_ClearTrcvWufFlag/19 (read)CanIf_PerformSwFiltering.constprop.0/63 (read)CanIf_RxIndication_DetChecks/35 (read)CanIf_GetTrcvWakeupReason/16 (read)CanIf_ClearTrcvWufFlagIndication/27 (read)CanIf_TxConfirmation/21 (read)CanIf_RxIndication/22 (read)CanIf_TrcvModeIndication/25 (read)CanIf_ConfirmPnAvailability/26 (read)CanIf_Transmit/11 (read)CanIf_CheckTrcvWakeFlag/20 (read)CanIf_BinarySwFiltering.constprop.0/64 (read)CanIf_SetPduModeInternal/30 (read)CanIf_CheckWakeup/18 (read)CanIf_Init/8 (write)CanIf_SoftwareFiltering.constprop.0/62 (read)CanIf_Transmit/11 (read)CanIf_SetTrcvWakeupMode/17 (read)CanIf_RxIndication/22 (read)CanIf_CheckTrcvWakeFlagIndication/28 (read)
  Availability: available
  Varpool flags:
CanIf_TxPduConfigPtr/0 (CanIf_TxPduConfigPtr) @0709d5e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanIf_SendTxConfirmation/37 (read)CanIf_Init/8 (write)CanIf_ProcessTxLength/39 (read)CanIf_Transmit/11 (read)CanIf_Transmit/11 (read)CanIf_Transmit/11 (read)CanIf_TxConfirmation/21 (read)
  Availability: available
  Varpool flags:

;; Function CanIf_ClearTrcvWufFlag_HlpNoPn (CanIf_ClearTrcvWufFlag_HlpNoPn, funcdef_no=0, decl_uid=8269, cgraph_uid=1, symbol_order=5)

Modification phase of node CanIf_ClearTrcvWufFlag_HlpNoPn/5
CanIf_ClearTrcvWufFlag_HlpNoPn (uint8 TransceiverId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 30, 17);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function CanIf_CheckWakeFlag_HlpNoPn (CanIf_CheckWakeFlag_HlpNoPn, funcdef_no=1, decl_uid=8271, cgraph_uid=2, symbol_order=6)

Modification phase of node CanIf_CheckWakeFlag_HlpNoPn/6
CanIf_CheckWakeFlag_HlpNoPn (uint8 TransceiverId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 31, 17);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function CanIf_IsValidConfig (CanIf_IsValidConfig, funcdef_no=2, decl_uid=8208, cgraph_uid=3, symbol_order=7)

Modification phase of node CanIf_IsValidConfig/7
CanIf_IsValidConfig (const void * voidConfigPtr)
{
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG ConfigPtr => voidConfigPtr_6(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (voidConfigPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct CanIf_ConfigType *)voidConfigPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct CanIf_ConfigType *)voidConfigPtr_6(D)].CfgSignature;
  if (_3 == 4094173456)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 66369400]:
  RetVal_10 = CanIf_IsValidConfig.part.0 (voidConfigPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # RetVal_4 = PHI <1(2), 1(3), 1(4), RetVal_10(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function CanIf_Init (CanIf_Init, funcdef_no=3, decl_uid=8210, cgraph_uid=4, symbol_order=8)

Modification phase of node CanIf_Init/8
CanIf_Init (const struct CanIf_ConfigType * ConfigPtr)
{
  uint16 i;
  unsigned char _1;
  long unsigned int _2;
  const struct CanIf_TxLPduConfigType * _3;
  long unsigned int _4;
  const struct CanIf_RxLPduConfigType * _5;
  long unsigned int _6;
  const struct CanIf_CanDriverConfigType * _7;
  int _8;
  unsigned char _9;
  short unsigned int _10;

  <bb 2> [local count: 251837100]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LocalConfigPtr => ConfigPtr_14(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ConfigPtr_14(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 75551130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 1, 20);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 176285970]:
  # DEBUG BEGIN_STMT
  _1 = CanIf_IsValidConfig (ConfigPtr_14(D));
  if (_1 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 58174370]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 1, 20);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr = ConfigPtr_14(D);
  # DEBUG BEGIN_STMT
  _2 = ConfigPtr_14(D)->txLPduConfigPtr;
  _3 = ConfigPtr_14(D) + _2;
  CanIf_TxPduConfigPtr = _3;
  # DEBUG BEGIN_STMT
  _4 = ConfigPtr_14(D)->rxLPduConfigPtr;
  _5 = ConfigPtr_14(D) + _4;
  CanIf_RxPduConfigPtr = _5;
  # DEBUG BEGIN_STMT
  _6 = ConfigPtr_14(D)->driverConfigPtr;
  _7 = ConfigPtr_14(D) + _6;
  CanIf_DriverConfigPtr = _7;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = (int) i_11;
  CanIf_CanControllerMode[_8] = 2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_CanControllerFlags[_8] = 8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_PduMode[_8] = 0;
  # DEBUG BEGIN_STMT
  i_25 = i_11 + 1;
  # DEBUG i => i_25

  <bb 8> [local count: 1073741824]:
  # i_11 = PHI <0(6), i_25(7)>
  # DEBUG i => i_11
  # DEBUG BEGIN_STMT
  _9 = _7->nrOfControllers;
  _10 = (short unsigned int) _9;
  if (_10 > i_11)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State = 1;

  <bb 10> [local count: 251837101]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_SetControllerMode (CanIf_SetControllerMode, funcdef_no=4, decl_uid=8213, cgraph_uid=5, symbol_order=9)

Modification phase of node CanIf_SetControllerMode/9
CanIf_SetControllerMode (uint8 ControllerId, CanIf_ControllerModeType ControllerMode)
{
  Std_ReturnType RetVal;
  unsigned char CanIf_State.9_1;
  const struct CanIf_CanDriverConfigType * CanIf_DriverConfigPtr.10_2;
  unsigned char _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.9_1 = CanIf_State;
  if (CanIf_State.9_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 3, 30);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_DriverConfigPtr.10_2 = CanIf_DriverConfigPtr;
  _3 = CanIf_DriverConfigPtr.10_2->nrOfControllers;
  if (_3 <= ControllerId_7(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 3, 15);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (ControllerMode_8(D) != 3)
    goto <bb 7>; [79.76%]
  else
    goto <bb 10>; [20.24%]

  <bb 7> [local count: 384445357]:
  if (ControllerMode_8(D) != 1)
    goto <bb 8>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 8> [local count: 253733935]:
  if (ControllerMode_8(D) != 2)
    goto <bb 9>; [48.88%]
  else
    goto <bb 10>; [51.12%]

  <bb 9> [local count: 124025147]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 3, 21);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 357977557]:
  # DEBUG BEGIN_STMT
  RetVal_11 = CanIf_SetControllerModeInternal (ControllerId_7(D), ControllerMode_8(D));
  # DEBUG RetVal => RetVal_11

  <bb 11> [local count: 1073741824]:
  # RetVal_4 = PHI <1(3), 1(5), 1(9), RetVal_11(10)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function CanIf_GetControllerMode (CanIf_GetControllerMode, funcdef_no=5, decl_uid=8216, cgraph_uid=6, symbol_order=10)

Modification phase of node CanIf_GetControllerMode/10
CanIf_GetControllerMode (uint8 ControllerId, CanIf_ControllerModeType * ControllerModePtr)
{
  Std_ReturnType RetVal;
  unsigned char CanIf_State.17_1;
  const struct CanIf_CanDriverConfigType * CanIf_DriverConfigPtr.18_2;
  unsigned char _3;
  int _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.17_1 = CanIf_State;
  if (CanIf_State.17_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 4, 30);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_DriverConfigPtr.18_2 = CanIf_DriverConfigPtr;
  _3 = CanIf_DriverConfigPtr.18_2->nrOfControllers;
  if (_3 <= ControllerId_9(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 4, 15);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (ControllerModePtr_10(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 144600811]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 4, 20);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 337401893]:
  # DEBUG BEGIN_STMT
  SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = (int) ControllerId_9(D);
  _5 = CanIf_CanControllerMode[_4];
  *ControllerModePtr_10(D) = _5;
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 9> [local count: 1073741824]:
  # RetVal_6 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function CanIf_Transmit (CanIf_Transmit, funcdef_no=6, decl_uid=8219, cgraph_uid=7, symbol_order=11)

Modification phase of node CanIf_Transmit/11
CanIf_Transmit (PduIdType CanTxPduId, const struct PduInfoType * PduInfoPtr)
{
  Can_IdType TmpCanId;
  PduLengthType sduLengthInt;
  uint8 ControllerId;
  struct Can_PduType PduInfo;
  Can_HwHandleType CanHth;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.19_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.20_2;
  short unsigned int _3;
  uint8 * _4;
  short unsigned int _5;
  const struct CanIf_TxLPduConfigType * CanIf_TxPduConfigPtr.21_6;
  unsigned int _7;
  unsigned int _8;
  const struct CanIf_TxLPduConfigType * _9;
  int _10;
  <unnamed type> _11;
  <unnamed type> _12;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.23_13;
  long unsigned int _14;
  const struct CanIf_CanDriverConfigType * _15;
  long unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  sizetype _19;
  const struct CanIf_CanControllerConfigType * _20;
  unsigned char _21;
  unsigned char _22;
  const struct CanIf_TxLPduConfigType * CanIf_TxPduConfigPtr.26_23;
  const struct CanIf_TxLPduConfigType * _24;
  unsigned char _25;
  const struct CanIf_TxLPduConfigType * CanIf_TxPduConfigPtr.27_26;
  const struct CanIf_TxLPduConfigType * _27;
  unsigned char _28;
  uint8 * _29;
  Std_ReturnType (*<T8be>) (Can_HwHandleType, const struct Can_PduType *) _30;
  unsigned char _31;
  unsigned char _52;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG send_message => 0
  # DEBUG BEGIN_STMT
  # DEBUG CallTxConfirmation => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.19_1 = CanIf_State;
  if (CanIf_State.19_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 5, 30);
  goto <bb 22>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.20_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.20_2->nrOfTxLPdus;
  if (_3 <= CanTxPduId_37(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 5, 50);
  goto <bb 22>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_38(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 5, 20);
  goto <bb 22>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  _4 = PduInfoPtr_38(D)->SduDataPtr;
  if (_4 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 119396890]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 5, 20);
  goto <bb 22>; [100.00%]

  <bb 10> [local count: 278592743]:
  # DEBUG BEGIN_STMT
  _5 = PduInfoPtr_38(D)->SduLength;
  sduLengthInt_40 = CanIf_ProcessTxLength (CanTxPduId_37(D), _5);
  # DEBUG sduLengthInt => sduLengthInt_40
  # DEBUG BEGIN_STMT
  if (sduLengthInt_40 != 255)
    goto <bb 11>; [48.88%]
  else
    goto <bb 22>; [51.12%]

  <bb 11> [local count: 136176133]:
  # DEBUG BEGIN_STMT
  CanIf_TxPduConfigPtr.21_6 = CanIf_TxPduConfigPtr;
  _7 = (unsigned int) CanTxPduId_37(D);
  _8 = _7 * 16;
  _9 = CanIf_TxPduConfigPtr.21_6 + _8;
  CanHth_41 = _9->hth;
  # DEBUG CanHth => CanHth_41
  # DEBUG BEGIN_STMT
  ControllerId_42 = _9->intCtrlIdx;
  # DEBUG ControllerId => ControllerId_42
  # DEBUG BEGIN_STMT
  SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _10 = (int) ControllerId_42;
  _11 = CanIf_CanControllerMode[_10];
  if (_11 == 1)
    goto <bb 13>; [51.12%]
  else
    goto <bb 12>; [48.88%]

  <bb 12> [local count: 66562894]:
  # DEBUG send_message => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 13> [local count: 69613239]:
  # DEBUG BEGIN_STMT
  _12 = CanIf_PduMode[_10];
  if (_12 == 3)
    goto <bb 14>; [51.12%]
  else
    goto <bb 19>; [48.88%]

  <bb 14> [local count: 35586288]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.23_13 = CanIf_ConfigPtr;
  _14 = CanIf_ConfigPtr.23_13->driverConfigPtr;
  _15 = CanIf_ConfigPtr.23_13 + _14;
  _16 = _15->ctrlConfigPtr;
  _17 = (unsigned int) ControllerId_42;
  _18 = _17 * 12;
  _19 = _16 + _18;
  _20 = CanIf_ConfigPtr.23_13 + _19;
  _21 = _20->pNFilterEnabled;
  if (_21 == 0)
    goto <bb 18>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 15> [local count: 23842813]:
  _22 = CanIf_CanControllerFlags[_10];
  _52 = _22 & 8;
  if (_52 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 11921406]:
  CanIf_TxPduConfigPtr.26_23 = CanIf_TxPduConfigPtr;
  _24 = CanIf_TxPduConfigPtr.26_23 + _8;
  _25 = _24->pNFilterFlag;
  if (_25 == 1)
    goto <bb 18>; [51.12%]
  else
    goto <bb 17>; [48.88%]

  <bb 17> [local count: 5827183]:
  # DEBUG send_message => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 18> [local count: 29759104]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_TxPduConfigPtr.27_26 = CanIf_TxPduConfigPtr;
  _27 = CanIf_TxPduConfigPtr.27_26 + _8;
  TmpCanId_44 = _27->canId;
  # DEBUG TmpCanId => TmpCanId_44
  # DEBUG BEGIN_STMT
  PduInfo.id = TmpCanId_44;
  # DEBUG BEGIN_STMT
  _28 = (unsigned char) sduLengthInt_40;
  PduInfo.length = _28;
  # DEBUG BEGIN_STMT
  _29 = PduInfoPtr_38(D)->SduDataPtr;
  PduInfo.sdu = _29;
  # DEBUG BEGIN_STMT
  PduInfo.swPduHandle = CanTxPduId_37(D);
  # DEBUG BEGIN_STMT
  # DEBUG send_message => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _30 = CanIf_CanDrvFctConfig[0].Write;
  _31 = _30 (CanHth_41, &PduInfo);
  # DEBUG CanRetVal => (Can_ReturnType) _31
  # DEBUG BEGIN_STMT
  if (_31 != 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 34026951]:
  # DEBUG send_message => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 20> [local count: 14879552]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 21> [local count: 29759104]:
  # RetVal_32 = PHI <1(18), 0(20)>
  # DEBUG RetVal => RetVal_32
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();

  <bb 22> [local count: 1073741824]:
  # RetVal_33 = PHI <1(3), 1(5), 1(7), 1(9), 1(10), RetVal_32(21), 1(19), 1(17), 1(12)>
  # DEBUG RetVal => RetVal_33
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduInfo ={v} {CLOBBER};
  return RetVal_33;

}



;; Function CanIf_SetPduMode (CanIf_SetPduMode, funcdef_no=7, decl_uid=8222, cgraph_uid=8, symbol_order=12)

Modification phase of node CanIf_SetPduMode/12
CanIf_SetPduMode (uint8 ControllerId, CanIf_PduModeType PduModeRequest)
{
  CanIf_ControllerModeType CanControllerMode;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.34_1;
  const struct CanIf_CanDriverConfigType * CanIf_DriverConfigPtr.35_2;
  unsigned char _3;
  int _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.34_1 = CanIf_State;
  if (CanIf_State.34_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 9, 30);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_DriverConfigPtr.35_2 = CanIf_DriverConfigPtr;
  _3 = CanIf_DriverConfigPtr.35_2->nrOfControllers;
  if (_3 <= ControllerId_8(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 9, 15);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (PduModeRequest_9(D) > 3)
    goto <bb 8>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 322941812]:
  if (PduModeRequest_9(D) == 2)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 268861108]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 9, 22);
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 213141596]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = (int) ControllerId_8(D);
  CanControllerMode_10 = CanIf_CanControllerMode[_4];
  # DEBUG CanControllerMode => CanControllerMode_10
  # DEBUG BEGIN_STMT
  if (CanControllerMode_10 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 43139859]:
  # DEBUG BEGIN_STMT
  CanIf_SetPduModeInternal (ControllerId_8(D), PduModeRequest_9(D));
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 11> [local count: 1073741824]:
  # RetVal_5 = PHI <1(3), 1(5), 1(8), 1(9), 0(10)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function CanIf_GetPduMode (CanIf_GetPduMode, funcdef_no=8, decl_uid=8225, cgraph_uid=9, symbol_order=13)

Modification phase of node CanIf_GetPduMode/13
CanIf_GetPduMode (uint8 ControllerId, CanIf_PduModeType * PduModePtr)
{
  Std_ReturnType RetVal;
  unsigned char CanIf_State.39_1;
  const struct CanIf_CanDriverConfigType * CanIf_DriverConfigPtr.40_2;
  unsigned char _3;
  int _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.39_1 = CanIf_State;
  if (CanIf_State.39_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 10, 30);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_DriverConfigPtr.40_2 = CanIf_DriverConfigPtr;
  _3 = CanIf_DriverConfigPtr.40_2->nrOfControllers;
  if (_3 <= ControllerId_9(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 10, 15);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduModePtr_10(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 10, 20);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  _4 = (int) ControllerId_9(D);
  _5 = CanIf_PduMode[_4];
  *PduModePtr_10(D) = _5;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 9> [local count: 1073741824]:
  # RetVal_6 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function CanIf_SetTrcvMode (CanIf_SetTrcvMode, funcdef_no=9, decl_uid=8228, cgraph_uid=10, symbol_order=14)

Modification phase of node CanIf_SetTrcvMode/14
CanIf_SetTrcvMode (uint8 TransceiverId, CanTrcv_TrcvModeType TransceiverMode)
{
  uint8 TrcvDrvIdx;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.41_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.42_2;
  unsigned char _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanIf_CanTrcvChnlConfigType * _8;
  int _9;
  Std_ReturnType (*<T8c8>) (uint8, CanTrcv_TrcvModeType) _10;
  unsigned char _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.41_1 = CanIf_State;
  if (CanIf_State.41_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 13, 30);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.42_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.42_2->nrOfTransceivers;
  if (_3 <= TransceiverId_15(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 13, 17);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (TransceiverMode_16(D) > 2)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 13, 18);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.42_2->trcvChnlConfigPtr;
  _5 = (unsigned int) TransceiverId_15(D);
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = CanIf_ConfigPtr.42_2 + _7;
  TrcvDrvIdx_17 = _8->trcvDrvIdx;
  # DEBUG TrcvDrvIdx => TrcvDrvIdx_17
  # DEBUG BEGIN_STMT
  _9 = (int) TrcvDrvIdx_17;
  _10 = CanIf_CanTrcvConfig[_9].setOpMode;
  _11 = _8->trcvChnlId;
  RetVal_19 = _10 (_11, TransceiverMode_16(D));
  # DEBUG RetVal => RetVal_19

  <bb 9> [local count: 1073741824]:
  # RetVal_12 = PHI <1(3), 1(5), 1(7), RetVal_19(8)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function CanIf_GetTrcvMode (CanIf_GetTrcvMode, funcdef_no=10, decl_uid=8231, cgraph_uid=11, symbol_order=15)

Modification phase of node CanIf_GetTrcvMode/15
CanIf_GetTrcvMode (CanTrcv_TrcvModeType * TransceiverModePtr, uint8 TransceiverId)
{
  Std_ReturnType RetVal;
  uint8 TrcvDrvIdx;
  unsigned char CanIf_State.47_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.48_2;
  unsigned char _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanIf_CanTrcvChnlConfigType * _8;
  int _9;
  Std_ReturnType (*<T8cf>) (uint8, CanTrcv_TrcvModeType *) _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.47_1 = CanIf_State;
  if (CanIf_State.47_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 14, 30);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (TransceiverModePtr_15(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 14, 20);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.48_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.48_2->nrOfTransceivers;
  if (_3 <= TransceiverId_16(D))
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 196024745]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 14, 17);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.48_2->trcvChnlConfigPtr;
  _5 = (unsigned int) TransceiverId_16(D);
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = CanIf_ConfigPtr.48_2 + _7;
  TrcvDrvIdx_17 = _8->trcvDrvIdx;
  # DEBUG TrcvDrvIdx => TrcvDrvIdx_17
  # DEBUG BEGIN_STMT
  _9 = (int) TrcvDrvIdx_17;
  _10 = CanIf_CanTrcvConfig[_9].getOpMode;
  _11 = _8->trcvChnlId;
  RetVal_19 = _10 (_11, TransceiverModePtr_15(D));
  # DEBUG RetVal => RetVal_19

  <bb 9> [local count: 1073741824]:
  # RetVal_12 = PHI <1(3), 1(5), 1(7), RetVal_19(8)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function CanIf_GetTrcvWakeupReason (CanIf_GetTrcvWakeupReason, funcdef_no=11, decl_uid=8234, cgraph_uid=12, symbol_order=16)

Modification phase of node CanIf_GetTrcvWakeupReason/16
CanIf_GetTrcvWakeupReason (uint8 TransceiverId, CanTrcv_TrcvWakeupReasonType * TrcvWuReasonPtr)
{
  uint8 TrcvDrvIdx;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.53_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.54_2;
  unsigned char _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanIf_CanTrcvChnlConfigType * _8;
  int _9;
  Std_ReturnType (*<T8d6>) (uint8, CanTrcv_TrcvWakeupReasonType *) _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.53_1 = CanIf_State;
  if (CanIf_State.53_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 15, 30);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (TrcvWuReasonPtr_15(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 15, 20);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.54_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.54_2->nrOfTransceivers;
  if (_3 <= TransceiverId_16(D))
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 196024745]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 15, 17);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.54_2->trcvChnlConfigPtr;
  _5 = (unsigned int) TransceiverId_16(D);
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = CanIf_ConfigPtr.54_2 + _7;
  TrcvDrvIdx_17 = _8->trcvDrvIdx;
  # DEBUG TrcvDrvIdx => TrcvDrvIdx_17
  # DEBUG BEGIN_STMT
  _9 = (int) TrcvDrvIdx_17;
  _10 = CanIf_CanTrcvConfig[_9].getBusWuReason;
  _11 = _8->trcvChnlId;
  RetVal_19 = _10 (_11, TrcvWuReasonPtr_15(D));
  # DEBUG RetVal => RetVal_19

  <bb 9> [local count: 1073741824]:
  # RetVal_12 = PHI <1(3), 1(5), 1(7), RetVal_19(8)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function CanIf_SetTrcvWakeupMode (CanIf_SetTrcvWakeupMode, funcdef_no=12, decl_uid=8237, cgraph_uid=13, symbol_order=17)

Modification phase of node CanIf_SetTrcvWakeupMode/17
CanIf_SetTrcvWakeupMode (uint8 TransceiverId, CanTrcv_TrcvWakeupModeType TrcvWakeupMode)
{
  uint8 TrcvDrvIdx;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.59_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.60_2;
  unsigned char _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanIf_CanTrcvChnlConfigType * _8;
  int _9;
  Std_ReturnType (*<T8db>) (uint8, CanTrcv_TrcvWakeupModeType) _10;
  unsigned char _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.59_1 = CanIf_State;
  if (CanIf_State.59_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 16, 30);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.60_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.60_2->nrOfTransceivers;
  if (_3 <= TransceiverId_15(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 16, 17);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (TrcvWakeupMode_16(D) > 2)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 16, 19);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.60_2->trcvChnlConfigPtr;
  _5 = (unsigned int) TransceiverId_15(D);
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = CanIf_ConfigPtr.60_2 + _7;
  TrcvDrvIdx_17 = _8->trcvDrvIdx;
  # DEBUG TrcvDrvIdx => TrcvDrvIdx_17
  # DEBUG BEGIN_STMT
  _9 = (int) TrcvDrvIdx_17;
  _10 = CanIf_CanTrcvConfig[_9].setWakeupMode;
  _11 = _8->trcvChnlId;
  RetVal_19 = _10 (_11, TrcvWakeupMode_16(D));
  # DEBUG RetVal => RetVal_19

  <bb 9> [local count: 1073741824]:
  # RetVal_12 = PHI <1(3), 1(5), 1(7), RetVal_19(8)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function CanIf_CheckWakeup (CanIf_CheckWakeup, funcdef_no=13, decl_uid=8239, cgraph_uid=14, symbol_order=18)

Modification phase of node CanIf_CheckWakeup/18
CanIf_CheckWakeup (EcuM_WakeupSourceType WakeupSource)
{
  const struct CanIf_CanTrcvChnlConfigType * TrcvChnlConfigPtr;
  uint8_least i;
  Std_ReturnType Result;
  boolean WakeupSourceValid;
  unsigned char CanIf_State.65_1;
  long unsigned int _4;
  long unsigned int _5;
  sizetype _6;
  long unsigned int _7;
  long unsigned int _8;
  unsigned char _9;
  int _10;
  Std_ReturnType (*<T8df>) (uint8) _11;
  unsigned char _12;
  unsigned char _13;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.68_14;
  unsigned char _15;
  long unsigned int _16;

  <bb 2> [local count: 176285970]:
  # DEBUG BEGIN_STMT
  # DEBUG WakeupSourceValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG CheckedSources => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.65_1 = CanIf_State;
  if (CanIf_State.65_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 13> [local count: 118111600]:
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 58174370]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 17, 30);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.68_14->trcvChnlConfigPtr;
  _5 = i_22 * 12;
  _6 = _4 + _5;
  TrcvChnlConfigPtr_28 = CanIf_ConfigPtr.68_14 + _6;
  # DEBUG TrcvChnlConfigPtr => TrcvChnlConfigPtr_28
  # DEBUG BEGIN_STMT
  _7 = TrcvChnlConfigPtr_28->wakeupSourceIn;
  _8 = _7 & WakeupSource_29(D);
  if (_8 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 5> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  _9 = TrcvChnlConfigPtr_28->trcvDrvIdx;
  _10 = (int) _9;
  _11 = CanIf_CanTrcvConfig[_10].chkWakeupByBus;
  _12 = TrcvChnlConfigPtr_28->trcvChnlId;
  _13 = _11 (_12);
  if (_13 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 238907556]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 8> [local count: 955630224]:
  # WakeupSourceValid_17 = PHI <WakeupSourceValid_18(4), 1(6), 1(5)>
  # Result_19 = PHI <Result_20(4), 0(6), Result_20(5)>
  # DEBUG Result => Result_19
  # DEBUG WakeupSourceValid => WakeupSourceValid_17
  # DEBUG BEGIN_STMT
  i_31 = i_22 + 1;
  # DEBUG i => i_31

  <bb 9> [local count: 1073741824]:
  # WakeupSourceValid_18 = PHI <WakeupSourceValid_17(8), 0(13)>
  # Result_20 = PHI <Result_19(8), 1(13)>
  # i_22 = PHI <i_31(8), 0(13)>
  # DEBUG i => i_22
  # DEBUG Result => Result_20
  # DEBUG WakeupSourceValid => WakeupSourceValid_18
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.68_14 = CanIf_ConfigPtr;
  _15 = CanIf_ConfigPtr.68_14->nrOfTransceivers;
  _16 = (long unsigned int) _15;
  if (_16 > i_22)
    goto <bb 4>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 118111601]:
  # WakeupSourceValid_2 = PHI <WakeupSourceValid_18(9)>
  # Result_3 = PHI <Result_20(9)>
  # DEBUG BEGIN_STMT
  if (WakeupSourceValid_2 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 38976828]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 17, 16);

  <bb 12> [local count: 176285971]:
  # Result_21 = PHI <1(3), Result_3(10), Result_3(11)>
  # DEBUG Result => Result_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_21;

}



;; Function CanIf_ClearTrcvWufFlag (CanIf_ClearTrcvWufFlag, funcdef_no=14, decl_uid=8241, cgraph_uid=15, symbol_order=19)

Modification phase of node CanIf_ClearTrcvWufFlag/19
CanIf_ClearTrcvWufFlag (uint8 TransceiverId)
{
  uint8 TrcvDrvIdx;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.69_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.70_2;
  unsigned char _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanIf_CanTrcvChnlConfigType * _8;
  int _9;
  Std_ReturnType (*<T8df>) (uint8) _10;
  unsigned char _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.69_1 = CanIf_State;
  if (CanIf_State.69_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 30, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.70_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.70_2->nrOfTransceivers;
  if (_3 <= TransceiverId_15(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 30, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.70_2->trcvChnlConfigPtr;
  _5 = (unsigned int) TransceiverId_15(D);
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = CanIf_ConfigPtr.70_2 + _7;
  TrcvDrvIdx_16 = _8->trcvDrvIdx;
  # DEBUG TrcvDrvIdx => TrcvDrvIdx_16
  # DEBUG BEGIN_STMT
  _9 = (int) TrcvDrvIdx_16;
  _10 = CanIf_CanTrcvConfig[_9].clearWufFlag;
  _11 = _8->trcvChnlId;
  RetVal_18 = _10 (_11);
  # DEBUG RetVal => RetVal_18

  <bb 7> [local count: 1073741824]:
  # RetVal_12 = PHI <1(3), 1(5), RetVal_18(6)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function CanIf_CheckTrcvWakeFlag (CanIf_CheckTrcvWakeFlag, funcdef_no=15, decl_uid=8243, cgraph_uid=16, symbol_order=20)

Modification phase of node CanIf_CheckTrcvWakeFlag/20
CanIf_CheckTrcvWakeFlag (uint8 TransceiverId)
{
  uint8 TrcvDrvIdx;
  Std_ReturnType RetVal;
  unsigned char CanIf_State.75_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.76_2;
  unsigned char _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanIf_CanTrcvChnlConfigType * _8;
  int _9;
  Std_ReturnType (*<T8df>) (uint8) _10;
  unsigned char _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.75_1 = CanIf_State;
  if (CanIf_State.75_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 31, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.76_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.76_2->nrOfTransceivers;
  if (_3 <= TransceiverId_15(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 31, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _4 = CanIf_ConfigPtr.76_2->trcvChnlConfigPtr;
  _5 = (unsigned int) TransceiverId_15(D);
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = CanIf_ConfigPtr.76_2 + _7;
  TrcvDrvIdx_16 = _8->trcvDrvIdx;
  # DEBUG TrcvDrvIdx => TrcvDrvIdx_16
  # DEBUG BEGIN_STMT
  _9 = (int) TrcvDrvIdx_16;
  _10 = CanIf_CanTrcvConfig[_9].checkWakeFlag;
  _11 = _8->trcvChnlId;
  RetVal_18 = _10 (_11);
  # DEBUG RetVal => RetVal_18

  <bb 7> [local count: 1073741824]:
  # RetVal_12 = PHI <1(3), 1(5), RetVal_18(6)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function CanIf_TxConfirmation (CanIf_TxConfirmation, funcdef_no=16, decl_uid=8245, cgraph_uid=17, symbol_order=21)

Modification phase of node CanIf_TxConfirmation/21
CanIf_TxConfirmation (PduIdType CanTxPduId)
{
  const uint8 ControllerId;
  unsigned char CanIf_State.81_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.82_2;
  short unsigned int _3;
  const struct CanIf_TxLPduConfigType * CanIf_TxPduConfigPtr.83_4;
  unsigned int _5;
  unsigned int _6;
  const struct CanIf_TxLPduConfigType * _7;
  int _8;
  unsigned char _9;
  unsigned char _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.81_1 = CanIf_State;
  if (CanIf_State.81_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 19, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.82_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.82_2->nrOfTxLPdus;
  if (_3 <= CanTxPduId_13(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 19, 13);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  CanIf_TxPduConfigPtr.83_4 = CanIf_TxPduConfigPtr;
  _5 = (unsigned int) CanTxPduId_13(D);
  _6 = _5 * 16;
  _7 = CanIf_TxPduConfigPtr.83_4 + _6;
  ControllerId_14 = _7->intCtrlIdx;
  # DEBUG ControllerId => ControllerId_14
  # DEBUG BEGIN_STMT
  SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = (int) ControllerId_14;
  _9 = CanIf_CanControllerFlags[_8];
  _10 = _9 & 247;
  CanIf_CanControllerFlags[_8] = _10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanIf_SendTxConfirmation (CanTxPduId_13(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_RxIndication (CanIf_RxIndication, funcdef_no=17, decl_uid=8248, cgraph_uid=18, symbol_order=22)

Modification phase of node CanIf_RxIndication/22
CanIf_RxIndication (const struct Can_HwType * Mailbox, const struct PduInfoType * PduInfoPtr)
{
  struct PduInfoType RxPduInfo;
  const CanIf_LPduIndexType PduIdx;
  const Std_ReturnType SwFilterResult;
  CanIf_LPduIndexType Index;
  const uint16 CanIfHrhIdx;
  const uint8 * CanSduPtrLcl;
  const PduLengthType LclDlc;
  const uint8 ControllerId;
  const Can_IdType CanIdLcl;
  const Can_HwHandleType HrhLcl;
  unsigned char CanIf_State.84_1;
  unsigned char _2;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.85_3;
  long unsigned int _4;
  const struct CanIf_CanDriverConfigType * _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  sizetype _12;
  const uint16 * _13;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.88_14;
  long unsigned int _15;
  short unsigned int Index.90_16;
  unsigned int _17;
  unsigned int _18;
  sizetype _19;
  const struct CanIf_SortedRxLPduConfigType * _20;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.84_1 = CanIf_State;
  if (CanIf_State.84_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 20, 30);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (Mailbox_24(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 215822106]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 20, 20);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 503584915]:
  # DEBUG BEGIN_STMT
  HrhLcl_25 = Mailbox_24(D)->Hoh;
  # DEBUG HrhLcl => HrhLcl_25
  # DEBUG BEGIN_STMT
  CanIdLcl_26 = Mailbox_24(D)->CanId;
  # DEBUG CanIdLcl => CanIdLcl_26
  # DEBUG BEGIN_STMT
  ControllerId_27 = Mailbox_24(D)->ControllerId;
  # DEBUG ControllerId => ControllerId_27
  # DEBUG BEGIN_STMT
  LclDlc_29 = PduInfoPtr_28(D)->SduLength;
  # DEBUG LclDlc => LclDlc_29
  # DEBUG BEGIN_STMT
  CanSduPtrLcl_30 = PduInfoPtr_28(D)->SduDataPtr;
  # DEBUG CanSduPtrLcl => CanSduPtrLcl_30
  # DEBUG BEGIN_STMT
  _2 = CanIf_RxIndication_DetChecks (HrhLcl_25, CanIdLcl_26, LclDlc_29, CanSduPtrLcl_30);
  if (_2 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 7> [local count: 166183022]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.85_3 = CanIf_ConfigPtr;
  _4 = CanIf_ConfigPtr.85_3->driverConfigPtr;
  _5 = CanIf_ConfigPtr.85_3 + _4;
  _6 = _5->hohIdToCanIfIdxPtr;
  _7 = (long unsigned int) HrhLcl_25;
  _8 = CanIf_CanDrvFctConfig[0].HohIdOffset;
  _9 = (long unsigned int) _8;
  _10 = _7 + _9;
  _11 = _10 * 2;
  _12 = _6 + _11;
  _13 = CanIf_ConfigPtr.85_3 + _12;
  CanIfHrhIdx_32 = *_13;
  # DEBUG CanIfHrhIdx => CanIfHrhIdx_32
  # DEBUG BEGIN_STMT
  # DEBUG ConfCanId => CanIdLcl_26
  # DEBUG BEGIN_STMT
  Index = 65535;
  # DEBUG BEGIN_STMT
  SwFilterResult_35 = CanIf_SoftwareFiltering (CanIfHrhIdx_32, CanIdLcl_26, &Index);
  # DEBUG SwFilterResult => SwFilterResult_35
  # DEBUG BEGIN_STMT
  if (SwFilterResult_35 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 54840397]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.88_14 = CanIf_ConfigPtr;
  _15 = CanIf_ConfigPtr.88_14->sortedRxLPduConfigPtr;
  Index.90_16 = Index;
  _17 = (unsigned int) Index.90_16;
  _18 = _17 * 12;
  _19 = _15 + _18;
  _20 = CanIf_ConfigPtr.88_14 + _19;
  PduIdx_36 = _20->rxLPduIndex;
  # DEBUG PduIdx => PduIdx_36
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RxPduInfo.SduLength = LclDlc_29;
  # DEBUG BEGIN_STMT
  RxPduInfo.SduDataPtr = CanSduPtrLcl_30;
  # DEBUG BEGIN_STMT
  # DEBUG D#5 => CanIdLcl_26
  CanIf_ProcessRxPdu.isra.0 (&RxPduInfo, PduIdx_36, ControllerId_27);
  RxPduInfo ={v} {CLOBBER};

  <bb 9> [local count: 166183022]:
  Index ={v} {CLOBBER};

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_ControllerBusOff (CanIf_ControllerBusOff, funcdef_no=18, decl_uid=8250, cgraph_uid=19, symbol_order=23)

Modification phase of node CanIf_ControllerBusOff/23
CanIf_ControllerBusOff (uint8 Controller)
{
  unsigned char CanIf_State.126_1;
  const struct CanIf_CanDriverConfigType * CanIf_DriverConfigPtr.127_2;
  unsigned char _3;
  int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.126_1 = CanIf_State;
  if (CanIf_State.126_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 22, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_DriverConfigPtr.127_2 = CanIf_DriverConfigPtr;
  _3 = CanIf_DriverConfigPtr.127_2->nrOfControllers;
  if (_3 <= Controller_7(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 22, 14);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = (int) Controller_7(D);
  CanIf_CanControllerMode[_4] = 2;
  # DEBUG BEGIN_STMT
  CanIf_PduMode[_4] = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_CanIf_SCHM_CANIF_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanSM_ControllerBusOff (Controller_7(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_ControllerModeIndication (CanIf_ControllerModeIndication, funcdef_no=19, decl_uid=8253, cgraph_uid=20, symbol_order=24)

Modification phase of node CanIf_ControllerModeIndication/24
CanIf_ControllerModeIndication (uint8 ControllerId, Can_ControllerStateType ControllerMode)
{
  unsigned char CanIf_State.128_1;
  const struct CanIf_CanDriverConfigType * CanIf_DriverConfigPtr.129_2;
  unsigned char _3;
  int _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.128_1 = CanIf_State;
  if (CanIf_State.128_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 23, 30);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  CanIf_DriverConfigPtr.129_2 = CanIf_DriverConfigPtr;
  _3 = CanIf_DriverConfigPtr.129_2->nrOfControllers;
  if (_3 <= ControllerId_7(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 23, 14);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (ControllerMode_8(D) != 3)
    goto <bb 7>; [79.76%]
  else
    goto <bb 10>; [20.24%]

  <bb 7> [local count: 384445357]:
  if (ControllerMode_8(D) != 1)
    goto <bb 8>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 8> [local count: 253733935]:
  if (ControllerMode_8(D) != 2)
    goto <bb 9>; [48.88%]
  else
    goto <bb 10>; [51.12%]

  <bb 9> [local count: 124025147]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 23, 21);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 357977557]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = (int) ControllerId_7(D);
  CanIf_CanControllerMode[_4] = ControllerMode_8(D);
  # DEBUG BEGIN_STMT
  CanSM_ControllerModeIndication (ControllerId_7(D), ControllerMode_8(D));

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_TrcvModeIndication (CanIf_TrcvModeIndication, funcdef_no=20, decl_uid=8256, cgraph_uid=21, symbol_order=25)

Modification phase of node CanIf_TrcvModeIndication/25
CanIf_TrcvModeIndication (uint8 Transceiver, CanTrcv_TrcvModeType TransceiverMode)
{
  unsigned char CanIf_State.130_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.131_2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.130_1 = CanIf_State;
  if (CanIf_State.130_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 24, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.131_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.131_2->nrOfTransceivers;
  if (_3 <= Transceiver_6(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 24, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  CanSM_TransceiverModeIndication (Transceiver_6(D), TransceiverMode_7(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_ConfirmPnAvailability (CanIf_ConfirmPnAvailability, funcdef_no=21, decl_uid=8258, cgraph_uid=22, symbol_order=26)

Modification phase of node CanIf_ConfirmPnAvailability/26
CanIf_ConfirmPnAvailability (uint8 Transceiver)
{
  unsigned char CanIf_State.132_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.133_2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.132_1 = CanIf_State;
  if (CanIf_State.132_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 26, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.133_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.133_2->nrOfTransceivers;
  if (_3 <= Transceiver_6(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 26, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  CanSM_ConfirmPnAvailability (Transceiver_6(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_ClearTrcvWufFlagIndication (CanIf_ClearTrcvWufFlagIndication, funcdef_no=22, decl_uid=8260, cgraph_uid=23, symbol_order=27)

Modification phase of node CanIf_ClearTrcvWufFlagIndication/27
CanIf_ClearTrcvWufFlagIndication (uint8 Transceiver)
{
  unsigned char CanIf_State.134_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.135_2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.134_1 = CanIf_State;
  if (CanIf_State.134_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 32, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.135_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.135_2->nrOfTransceivers;
  if (_3 <= Transceiver_6(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 32, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  CanSM_ClearTrcvWufFlagIndication (Transceiver_6(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_CheckTrcvWakeFlagIndication (CanIf_CheckTrcvWakeFlagIndication, funcdef_no=23, decl_uid=8262, cgraph_uid=24, symbol_order=28)

Modification phase of node CanIf_CheckTrcvWakeFlagIndication/28
CanIf_CheckTrcvWakeFlagIndication (uint8 Transceiver)
{
  unsigned char CanIf_State.136_1;
  const struct CanIf_ConfigType * CanIf_ConfigPtr.137_2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIf_State.136_1 = CanIf_State;
  if (CanIf_State.136_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 33, 30);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  CanIf_ConfigPtr.137_2 = CanIf_ConfigPtr;
  _3 = CanIf_ConfigPtr.137_2->nrOfTransceivers;
  if (_3 <= Transceiver_6(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (60, 0, 33, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  CanSM_CheckTransceiverWakeFlagIndication (Transceiver_6(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


