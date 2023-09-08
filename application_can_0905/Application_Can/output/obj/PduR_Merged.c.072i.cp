
IPA constant propagation start:
Determining dynamic type for call: RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
  Starting walk at: RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
  instance pointer: PduInfoPtr_14(D)  Outer instance pointer: PduInfoPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  Starting walk at: RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  instance pointer: PduInfoPtr_14(D)  Outer instance pointer: PduInfoPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  Starting walk at: RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  instance pointer: RetryInfoPtr_20(D)  Outer instance pointer: RetryInfoPtr_20(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  Starting walk at: RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  instance pointer: AvailableDataPtr_15(D)  Outer instance pointer: AvailableDataPtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_21 = CopyRxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), BufferSizePtr_15(D));
  Starting walk at: RetVal_21 = CopyRxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), BufferSizePtr_15(D));
  instance pointer: PduInfoPtr_14(D)  Outer instance pointer: PduInfoPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_21 = CopyRxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), BufferSizePtr_15(D));
  Starting walk at: RetVal_21 = CopyRxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), BufferSizePtr_15(D));
  instance pointer: BufferSizePtr_15(D)  Outer instance pointer: BufferSizePtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_21 = StrtOfRcptnFp_17 (TargetPduId_18, TpSduLength_19(D), BufferSizePtr_14(D));
  Starting walk at: RetVal_21 = StrtOfRcptnFp_17 (TargetPduId_18, TpSduLength_19(D), BufferSizePtr_14(D));
  instance pointer: BufferSizePtr_14(D)  Outer instance pointer: BufferSizePtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_20 = TriggerTransmitFp_18 (TargetPduId_16, PduInfoPtr_14(D));
  Starting walk at: RetVal_20 = TriggerTransmitFp_18 (TargetPduId_16, PduInfoPtr_14(D));
  instance pointer: PduInfoPtr_14(D)  Outer instance pointer: PduInfoPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
  Starting walk at: RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
  instance pointer: PduInfoPtr_14(D)  Outer instance pointer: PduInfoPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RxIndFp_16 (TargetPduId_17, PduInfoPtr_13(D));
  Starting walk at: RxIndFp_16 (TargetPduId_17, PduInfoPtr_13(D));
  instance pointer: PduInfoPtr_13(D)  Outer instance pointer: PduInfoPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_10 = PduR_IsValidConfig.part.0 (ConfigPtr_6(D));
  Starting walk at: RetVal_10 = PduR_IsValidConfig.part.0 (ConfigPtr_6(D));
  instance pointer: ConfigPtr_6(D)  Outer instance pointer: ConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);
Determining dynamic type for call: _1 = PduR_IsValidConfig (ConfigPtr_5(D));
  Starting walk at: _1 = PduR_IsValidConfig (ConfigPtr_5(D));
  instance pointer: ConfigPtr_5(D)  Outer instance pointer: ConfigPtr_5(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  PduR_IsValidConfig.part.0/22:
  Jump functions of caller  TS_PlatformSigIsValid/18:
  Jump functions of caller  Det_ASR40_ReportError/17:
  Jump functions of caller  PduR_GetConfigurationId/16:
  Jump functions of caller  PduR_GenericTpTransmit/15:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_GenericTpTxConfirmation/14:
    indirect simple callsite, calling param -1, offset 0, for stmt TxConfirmationFp_15 (TargetPduId_16, Result_17(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  PduR_GenericTpCopyTxData/13:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_GenericTpRxIndication/12:
    indirect simple callsite, calling param -1, offset 0, for stmt RxIndFp_15 (TargetPduId_16, Result_17(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  PduR_GenericTpCopyRxData/11:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_21 = CopyRxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), BufferSizePtr_15(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_GenericTpStartOfReception/10:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_21 = StrtOfRcptnFp_17 (TargetPduId_18, TpSduLength_19(D), BufferSizePtr_14(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_GenericTpCancelReceive/9:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_19 = CancelReceiveFp_16 (TargetPduId_17);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  PduR_GenericTpCancelTransmit/8:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_19 = CancelTransmitFp_16 (TargetPduId_17);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  PduR_GenericIfTxConfirmation/7:
    indirect simple callsite, calling param -1, offset 0, for stmt TxConfirmationFp_16 (TargetPduId_14);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  PduR_GenericIfTriggerTransmit/6:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_20 = TriggerTransmitFp_18 (TargetPduId_16, PduInfoPtr_14(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_GenericIfTransmit/5:
    indirect simple callsite, calling param -1, offset 0, for stmt RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_GenericIfRxIndication/4:
    indirect simple callsite, calling param -1, offset 0, for stmt RxIndFp_16 (TargetPduId_17, PduInfoPtr_13(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_IsValidConfig/3:
    callsite  PduR_IsValidConfig/3 -> PduR_IsValidConfig.part.0/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PduR_Init/2:
    callsite  PduR_Init/2 -> PduR_IsValidConfig/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering PduR_GetConfigurationId for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpCopyTxData for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpRxIndication for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpCopyRxData for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpStartOfReception for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpCancelReceive for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericTpCancelTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericIfTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericIfTriggerTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericIfTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_GenericIfRxIndication for cloning; -fipa-cp-clone disabled.
Not considering PduR_IsValidConfig for cloning; -fipa-cp-clone disabled.
Not considering PduR_Init for cloning; -fipa-cp-clone disabled.

overall_size: 571, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: PduR_IsValidConfig.part.0/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: PduR_GetConfigurationId/16:
  Node: PduR_GenericTpTransmit/15:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericTpTxConfirmation/14:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericTpCopyTxData/13:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericTpRxIndication/12:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericTpCopyRxData/11:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericTpStartOfReception/10:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericTpCancelReceive/9:
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
  Node: PduR_GenericTpCancelTransmit/8:
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
  Node: PduR_GenericIfTxConfirmation/7:
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
  Node: PduR_GenericIfTriggerTransmit/6:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericIfTransmit/5:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_GenericIfRxIndication/4:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_IsValidConfig/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_Init/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

PduR_IsValidConfig.part.0/22 (PduR_IsValidConfig.part.0) @06c3c8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: PduR_LcfgSignature/19 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: PduR_IsValidConfig/3 (66369400 (estimated locally),0.06 per call) 
  Calls: 
PduR_TpModuleAPI/21 (PduR_TpModuleAPI) @06bbcc60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_GenericTpCopyTxData/13 (read)PduR_GenericTpTxConfirmation/14 (read)PduR_GenericTpCancelTransmit/8 (read)PduR_GenericTpCancelReceive/9 (read)PduR_GenericTpStartOfReception/10 (read)PduR_GenericTpCopyRxData/11 (read)PduR_GenericTpRxIndication/12 (read)PduR_GenericTpTransmit/15 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_IfModuleAPI/20 (PduR_IfModuleAPI) @06bb59d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_GenericIfTransmit/5 (read)PduR_GenericIfTriggerTransmit/6 (read)PduR_GenericIfRxIndication/4 (read)PduR_GenericIfTxConfirmation/7 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_LcfgSignature/19 (PduR_LcfgSignature) @06bb5558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_IsValidConfig.part.0/22 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/18 (TS_PlatformSigIsValid) @06b8ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_IsValidConfig/3 (574129754 (estimated locally),0.53 per call) 
  Calls: 
Det_ASR40_ReportError/17 (Det_ASR40_ReportError) @06b8c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_GetConfigurationId/16 (225056286 (estimated locally),0.21 per call) PduR_GenericTpTransmit/15 (108444613 (estimated locally),0.10 per call) PduR_GenericTpTransmit/15 (69369593 (estimated locally),0.06 per call) PduR_GenericTpTransmit/15 (84013071 (estimated locally),0.08 per call) PduR_GenericTpTransmit/15 (237404317 (estimated locally),0.22 per call) PduR_GenericTpTransmit/15 (354334802 (estimated locally),0.33 per call) PduR_GenericTpTxConfirmation/14 (84013071 (estimated locally),0.08 per call) PduR_GenericTpTxConfirmation/14 (237404317 (estimated locally),0.22 per call) PduR_GenericTpTxConfirmation/14 (354334802 (estimated locally),0.33 per call) PduR_GenericTpCopyTxData/13 (48558715 (estimated locally),0.05 per call) PduR_GenericTpCopyTxData/13 (203409961 (estimated locally),0.19 per call) PduR_GenericTpCopyTxData/13 (237404317 (estimated locally),0.22 per call) PduR_GenericTpCopyTxData/13 (354334802 (estimated locally),0.33 per call) PduR_GenericTpRxIndication/12 (84013071 (estimated locally),0.08 per call) PduR_GenericTpRxIndication/12 (237404317 (estimated locally),0.22 per call) PduR_GenericTpRxIndication/12 (354334802 (estimated locally),0.33 per call) PduR_GenericTpCopyRxData/11 (48558715 (estimated locally),0.05 per call) PduR_GenericTpCopyRxData/11 (203409961 (estimated locally),0.19 per call) PduR_GenericTpCopyRxData/11 (237404317 (estimated locally),0.22 per call) PduR_GenericTpCopyRxData/11 (354334802 (estimated locally),0.33 per call) PduR_GenericTpStartOfReception/10 (69369593 (estimated locally),0.06 per call) PduR_GenericTpStartOfReception/10 (84013071 (estimated locally),0.08 per call) PduR_GenericTpStartOfReception/10 (237404317 (estimated locally),0.22 per call) PduR_GenericTpStartOfReception/10 (354334802 (estimated locally),0.33 per call) PduR_GenericTpCancelReceive/9 (237404317 (estimated locally),0.22 per call) PduR_GenericTpCancelReceive/9 (354334802 (estimated locally),0.33 per call) PduR_GenericTpCancelTransmit/8 (84013071 (estimated locally),0.08 per call) PduR_GenericTpCancelTransmit/8 (237404317 (estimated locally),0.22 per call) PduR_GenericTpCancelTransmit/8 (354334802 (estimated locally),0.33 per call) PduR_GenericIfTxConfirmation/7 (237404317 (estimated locally),0.22 per call) PduR_GenericIfTxConfirmation/7 (354334802 (estimated locally),0.33 per call) PduR_GenericIfTriggerTransmit/6 (84013071 (estimated locally),0.08 per call) PduR_GenericIfTriggerTransmit/6 (237404317 (estimated locally),0.22 per call) PduR_GenericIfTriggerTransmit/6 (354334802 (estimated locally),0.33 per call) PduR_GenericIfTransmit/5 (69369593 (estimated locally),0.06 per call) PduR_GenericIfTransmit/5 (84013071 (estimated locally),0.08 per call) PduR_GenericIfTransmit/5 (237404317 (estimated locally),0.22 per call) PduR_GenericIfTransmit/5 (354334802 (estimated locally),0.33 per call) PduR_GenericIfRxIndication/4 (69369593 (estimated locally),0.06 per call) PduR_GenericIfRxIndication/4 (84013071 (estimated locally),0.08 per call) PduR_GenericIfRxIndication/4 (237404317 (estimated locally),0.22 per call) PduR_GenericIfRxIndication/4 (354334802 (estimated locally),0.33 per call) PduR_Init/2 (145607981 (estimated locally),0.14 per call) PduR_Init/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
PduR_GetConfigurationId/16 (PduR_GetConfigurationId) @06b8c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_State/0 (read)PduR_GConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (225056286 (estimated locally),0.21 per call) 
PduR_GenericTpTransmit/15 (PduR_GenericTpTransmit) @06b8c380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (108444613 (estimated locally),0.10 per call) Det_ASR40_ReportError/17 (69369593 (estimated locally),0.06 per call) Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(328620040 (estimated locally),0.31 per call) 
PduR_GenericTpTxConfirmation/14 (PduR_GenericTpTxConfirmation) @06b8c1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(397989633 (estimated locally),0.37 per call) 
PduR_GenericTpCopyTxData/13 (PduR_GenericTpCopyTxData) @06b8c000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (48558715 (estimated locally),0.05 per call) Det_ASR40_ReportError/17 (203409961 (estimated locally),0.19 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(230034028 (estimated locally),0.21 per call) 
PduR_GenericTpRxIndication/12 (PduR_GenericTpRxIndication) @06b5de00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(397989633 (estimated locally),0.37 per call) 
PduR_GenericTpCopyRxData/11 (PduR_GenericTpCopyRxData) @06b5dc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (48558715 (estimated locally),0.05 per call) Det_ASR40_ReportError/17 (203409961 (estimated locally),0.19 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(230034028 (estimated locally),0.21 per call) 
PduR_GenericTpStartOfReception/10 (PduR_GenericTpStartOfReception) @06b5da80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (69369593 (estimated locally),0.06 per call) Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(328620040 (estimated locally),0.31 per call) 
PduR_GenericTpCancelReceive/9 (PduR_GenericTpCancelReceive) @06b5d8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(337401893 (estimated locally),0.31 per call) 
PduR_GenericTpCancelTransmit/8 (PduR_GenericTpCancelTransmit) @06b5d700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_TpModuleAPI/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(397989633 (estimated locally),0.37 per call) 
PduR_GenericIfTxConfirmation/7 (PduR_GenericIfTxConfirmation) @06b5d540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_IfModuleAPI/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(337401893 (estimated locally),0.31 per call) 
PduR_GenericIfTriggerTransmit/6 (PduR_GenericIfTriggerTransmit) @06b5d380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_IfModuleAPI/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(397989633 (estimated locally),0.37 per call) 
PduR_GenericIfTransmit/5 (PduR_GenericIfTransmit) @06b5d1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_IfModuleAPI/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (69369593 (estimated locally),0.06 per call) Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(328620040 (estimated locally),0.31 per call) 
PduR_GenericIfRxIndication/4 (PduR_GenericIfRxIndication) @06b5d000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (read)PduR_State/0 (read)PduR_IfModuleAPI/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (69369593 (estimated locally),0.06 per call) Det_ASR40_ReportError/17 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
   Indirect call(328620040 (estimated locally),0.31 per call) 
PduR_IsValidConfig/3 (PduR_IsValidConfig) @06a877e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: PduR_Init/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: PduR_IsValidConfig.part.0/22 (66369400 (estimated locally),0.06 per call) TS_PlatformSigIsValid/18 (574129754 (estimated locally),0.53 per call) 
PduR_Init/2 (PduR_Init) @06a87620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_GConfigPtr/1 (write)PduR_State/0 (read)PduR_State/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/17 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) PduR_IsValidConfig/3 (1073741824 (estimated locally),1.00 per call) 
PduR_GConfigPtr/1 (PduR_GConfigPtr) @06a84090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: PduR_GenericTpCopyTxData/13 (read)PduR_GenericTpTxConfirmation/14 (read)PduR_GenericTpTransmit/15 (read)PduR_Init/2 (write)PduR_GenericIfRxIndication/4 (read)PduR_GenericIfTransmit/5 (read)PduR_GenericIfTriggerTransmit/6 (read)PduR_GenericIfTxConfirmation/7 (read)PduR_GenericTpCancelTransmit/8 (read)PduR_GenericTpCancelReceive/9 (read)PduR_GenericTpStartOfReception/10 (read)PduR_GenericTpCopyRxData/11 (read)PduR_GenericTpRxIndication/12 (read)PduR_GetConfigurationId/16 (read)
  Availability: available
  Varpool flags:
PduR_State/0 (PduR_State) @06a84048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: PduR_GenericTpCopyTxData/13 (read)PduR_GenericTpTxConfirmation/14 (read)PduR_GenericTpTransmit/15 (read)PduR_Init/2 (write)PduR_GenericIfRxIndication/4 (read)PduR_GenericIfTransmit/5 (read)PduR_GenericIfTriggerTransmit/6 (read)PduR_GenericIfTxConfirmation/7 (read)PduR_GenericTpCancelTransmit/8 (read)PduR_GenericTpCancelReceive/9 (read)PduR_GenericTpStartOfReception/10 (read)PduR_GenericTpCopyRxData/11 (read)PduR_GenericTpRxIndication/12 (read)PduR_Init/2 (read)PduR_GetConfigurationId/16 (read)
  Availability: available
  Varpool flags: initialized

;; Function PduR_IsValidConfig (PduR_IsValidConfig, funcdef_no=1, decl_uid=5787, cgraph_uid=2, symbol_order=3)

Modification phase of node PduR_IsValidConfig/3
PduR_IsValidConfig (const void * ConfigPtr)
{
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ConfigPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  # DEBUG PBConfigPtr => ConfigPtr_6(D)
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct PduR_PBConfigType *)ConfigPtr_6(D)].PduR_PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct PduR_PBConfigType *)ConfigPtr_6(D)].PduR_CfgSignature;
  if (_3 == 4174011813)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 66369400]:
  RetVal_10 = PduR_IsValidConfig.part.0 (ConfigPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # RetVal_4 = PHI <1(2), 1(3), 1(4), RetVal_10(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function PduR_Init (PduR_Init, funcdef_no=0, decl_uid=5783, cgraph_uid=1, symbol_order=2)

Modification phase of node PduR_Init/2
PduR_Init (const struct PduR_PBConfigType * ConfigPtr)
{
  unsigned char _1;
  unsigned char PduR_State.1_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr = ConfigPtr_5(D);
  # DEBUG BEGIN_STMT
  _1 = PduR_IsValidConfig (ConfigPtr_5(D));
  if (_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 1, 0);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  PduR_State.1_2 = PduR_State;
  if (PduR_State.1_2 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 1, 1);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  PduR_State = 1;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function PduR_GenericIfRxIndication (PduR_GenericIfRxIndication, funcdef_no=2, decl_uid=5736, cgraph_uid=3, symbol_order=4)

Modification phase of node PduR_GenericIfRxIndication/4
PduR_GenericIfRxIndication (PduIdType RxPduId, struct PduInfoType * PduInfoPtr, uint8 RTabLoIfConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  void (*PduR_IfRxIndFpType) (PduIdType, struct PduInfoType *) RxIndFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabLoIfType * const pIfRTabRx;
  const struct PduR_PBConfigType * PduR_GConfigPtr.3_1;
  int _2;
  unsigned char PduR_State.4_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoIfType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.3_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoIfConfigIdx_11(D);
  # DEBUG D#1 => &PduR_GConfigPtr.3_1->PduR_RTabLoIfConfig[_2]
  # DEBUG pRTabLoIfConfig => D#1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.4_3 = PduR_State;
  if (PduR_State.4_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 66, 1);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoIfConfigType *)PduR_GConfigPtr.3_1].PduR_RTabLoIfConfig[_2].RTabRxCount;
  if (_4 <= RxPduId_12(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 66, 2);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_13(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 66, 9);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  pIfRTabRx_14 = MEM[(const struct PduR_RTabLoIfConfigType *)PduR_GConfigPtr.3_1].PduR_RTabLoIfConfig[_2].RTabRxRef;
  # DEBUG pIfRTabRx => pIfRTabRx_14
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) RxPduId_12(D);
  _6 = _5 * 4;
  _7 = pIfRTabRx_14 + _6;
  TargetAPIRef_15 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_15
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_15;
  RxIndFp_16 = PduR_IfModuleAPI[_8].IfRxIndication;
  # DEBUG RxIndFp => RxIndFp_16
  # DEBUG BEGIN_STMT
  if (RxIndFp_16 == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 69369593]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 66, 9);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 328620040]:
  # DEBUG BEGIN_STMT
  TargetPduId_17 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_17
  # DEBUG BEGIN_STMT
  RxIndFp_16 (TargetPduId_17, PduInfoPtr_13(D));

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function PduR_GenericIfTransmit (PduR_GenericIfTransmit, funcdef_no=3, decl_uid=5740, cgraph_uid=4, symbol_order=5)

Modification phase of node PduR_GenericIfTransmit/5
PduR_GenericIfTransmit (PduIdType TxPduId, const struct PduInfoType * PduInfoPtr, uint8 RTabUpIfConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  Std_ReturnType (*PduR_TransmitFpType) (PduIdType, const struct PduInfoType *) TransmitFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabUpIfTxType * const pIfRTabUpTx;
  Std_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.5_1;
  int _2;
  unsigned char PduR_State.6_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabUpIfTxType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.5_1 = PduR_GConfigPtr;
  _2 = (int) RTabUpIfConfigIdx_12(D);
  # DEBUG D#2 => &PduR_GConfigPtr.5_1->PduR_RTabUpIfTxConfig[_2]
  # DEBUG pRTabUpIfTxConfig => D#2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.6_3 = PduR_State;
  if (PduR_State.6_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 1);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabUpIfTxConfigType *)PduR_GConfigPtr.5_1].PduR_RTabUpIfTxConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 2);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_14(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 9);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  pIfRTabUpTx_15 = MEM[(const struct PduR_RTabUpIfTxConfigType *)PduR_GConfigPtr.5_1].PduR_RTabUpIfTxConfig[_2].RTabTxRef;
  # DEBUG pIfRTabUpTx => pIfRTabUpTx_15
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_13(D);
  _6 = _5 * 4;
  _7 = pIfRTabUpTx_15 + _6;
  TargetAPIRef_16 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_16
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_16;
  TransmitFp_17 = PduR_IfModuleAPI[_8].IfTransmit;
  # DEBUG TransmitFp => TransmitFp_17
  # DEBUG BEGIN_STMT
  if (TransmitFp_17 == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 69369593]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 9);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 328620040]:
  # DEBUG BEGIN_STMT
  TargetPduId_18 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_18
  # DEBUG BEGIN_STMT
  RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
  # DEBUG RetVal => RetVal_20

  <bb 11> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(7), 1(9), RetVal_20(10)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericIfTriggerTransmit (PduR_GenericIfTriggerTransmit, funcdef_no=4, decl_uid=5744, cgraph_uid=5, symbol_order=6)

Modification phase of node PduR_GenericIfTriggerTransmit/6
PduR_GenericIfTriggerTransmit (PduIdType TxPduId, struct PduInfoType * PduInfoPtr, uint8 RTabLoIfConfigIdx)
{
  Std_ReturnType (*PduR_IfTrTxFpType) (PduIdType, struct PduInfoType *) TriggerTransmitFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const PduR_PduIdType TargetPduId;
  const struct PduR_RTabLoIfType * const pIfRTabTx;
  Std_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.7_1;
  int _2;
  unsigned char PduR_State.8_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoIfType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.7_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoIfConfigIdx_12(D);
  # DEBUG D#3 => &PduR_GConfigPtr.7_1->PduR_RTabLoIfConfig[_2]
  # DEBUG pRTabLoIfConfig => D#3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.8_3 = PduR_State;
  if (PduR_State.8_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 65, 1);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoIfConfigType *)PduR_GConfigPtr.7_1].PduR_RTabLoIfConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 65, 2);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_14(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 65, 9);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  pIfRTabTx_15 = MEM[(const struct PduR_RTabLoIfConfigType *)PduR_GConfigPtr.7_1].PduR_RTabLoIfConfig[_2].RTabTxRef;
  # DEBUG pIfRTabTx => pIfRTabTx_15
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_13(D);
  _6 = _5 * 4;
  _7 = pIfRTabTx_15 + _6;
  TargetPduId_16 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_16
  # DEBUG BEGIN_STMT
  TargetAPIRef_17 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_17
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_17;
  TriggerTransmitFp_18 = PduR_IfModuleAPI[_8].IfTriggerTransmit;
  # DEBUG TriggerTransmitFp => TriggerTransmitFp_18
  # DEBUG BEGIN_STMT
  RetVal_20 = TriggerTransmitFp_18 (TargetPduId_16, PduInfoPtr_14(D));
  # DEBUG RetVal => RetVal_20

  <bb 9> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(7), RetVal_20(8)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericIfTxConfirmation (PduR_GenericIfTxConfirmation, funcdef_no=5, decl_uid=5747, cgraph_uid=6, symbol_order=7)

Modification phase of node PduR_GenericIfTxConfirmation/7
PduR_GenericIfTxConfirmation (PduIdType TxPduId, uint8 RTabLoIfConfigIdx)
{
  void (*PduR_IfTxConfFpType) (PduIdType) TxConfirmationFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const PduR_PduIdType TargetPduId;
  const struct PduR_RTabLoIfType * const pIfRTabTx;
  const struct PduR_PBConfigType * PduR_GConfigPtr.9_1;
  int _2;
  unsigned char PduR_State.10_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoIfType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.9_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoIfConfigIdx_11(D);
  # DEBUG D#4 => &PduR_GConfigPtr.9_1->PduR_RTabLoIfConfig[_2]
  # DEBUG pRTabLoIfConfig => D#4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.10_3 = PduR_State;
  if (PduR_State.10_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 64, 1);
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoIfConfigType *)PduR_GConfigPtr.9_1].PduR_RTabLoIfConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_12(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 64, 2);
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  pIfRTabTx_13 = MEM[(const struct PduR_RTabLoIfConfigType *)PduR_GConfigPtr.9_1].PduR_RTabLoIfConfig[_2].RTabTxRef;
  # DEBUG pIfRTabTx => pIfRTabTx_13
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_12(D);
  _6 = _5 * 4;
  _7 = pIfRTabTx_13 + _6;
  TargetPduId_14 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_14
  # DEBUG BEGIN_STMT
  TargetAPIRef_15 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_15
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_15;
  TxConfirmationFp_16 = PduR_IfModuleAPI[_8].IfTxConfirmation;
  # DEBUG TxConfirmationFp => TxConfirmationFp_16
  # DEBUG BEGIN_STMT
  if (TxConfirmationFp_16 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 7> [local count: 337401893]:
  # DEBUG BEGIN_STMT
  TxConfirmationFp_16 (TargetPduId_14);

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function PduR_GenericTpCancelTransmit (PduR_GenericTpCancelTransmit, funcdef_no=6, decl_uid=5750, cgraph_uid=7, symbol_order=8)

Modification phase of node PduR_GenericTpCancelTransmit/8
PduR_GenericTpCancelTransmit (PduIdType TxPduId, uint8 RTabUpTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  Std_ReturnType (*PduR_CancelTransmitFpType) (PduIdType) CancelTransmitFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabUpTpType * const pRTabUpTpTx;
  Std_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.11_1;
  int _2;
  unsigned char PduR_State.12_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabUpTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.11_1 = PduR_GConfigPtr;
  _2 = (int) RTabUpTpConfigIdx_12(D);
  # DEBUG D#5 => &PduR_GConfigPtr.11_1->PduR_RTabUpTpConfig[_2]
  # DEBUG pRTabUpTpConfig => D#5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.12_3 = PduR_State;
  if (PduR_State.12_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 28, 1);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabUpTpConfigType *)PduR_GConfigPtr.11_1].PduR_RTabUpTpConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 28, 2);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  pRTabUpTpTx_14 = MEM[(const struct PduR_RTabUpTpConfigType *)PduR_GConfigPtr.11_1].PduR_RTabUpTpConfig[_2].RTabTxRef;
  # DEBUG pRTabUpTpTx => pRTabUpTpTx_14
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_13(D);
  _6 = _5 * 4;
  _7 = pRTabUpTpTx_14 + _6;
  TargetAPIRef_15 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_15
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_15;
  CancelTransmitFp_16 = PduR_TpModuleAPI[_8].TpCancelTransmit;
  # DEBUG CancelTransmitFp => CancelTransmitFp_16
  # DEBUG BEGIN_STMT
  if (CancelTransmitFp_16 == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 28, 2);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  TargetPduId_17 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_17
  # DEBUG BEGIN_STMT
  RetVal_19 = CancelTransmitFp_16 (TargetPduId_17);
  # DEBUG RetVal => RetVal_19

  <bb 9> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(7), RetVal_19(8)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericTpCancelReceive (PduR_GenericTpCancelReceive, funcdef_no=7, decl_uid=5753, cgraph_uid=8, symbol_order=9)

Modification phase of node PduR_GenericTpCancelReceive/9
PduR_GenericTpCancelReceive (PduIdType RxPduId, uint8 RTabUpTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  Std_ReturnType (*PduR_CancelReceiveFpType) (PduIdType) CancelReceiveFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabUpTpType * const pTpRTabUpRx;
  Std_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.13_1;
  int _2;
  unsigned char PduR_State.14_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabUpTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.13_1 = PduR_GConfigPtr;
  _2 = (int) RTabUpTpConfigIdx_12(D);
  # DEBUG D#6 => &PduR_GConfigPtr.13_1->PduR_RTabUpTpConfig[_2]
  # DEBUG pRTabUpTpConfig => D#6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.14_3 = PduR_State;
  if (PduR_State.14_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 33, 1);
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabUpTpConfigType *)PduR_GConfigPtr.13_1].PduR_RTabUpTpConfig[_2].RTabRxCount;
  if (_4 <= RxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 33, 2);
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  pTpRTabUpRx_14 = MEM[(const struct PduR_RTabUpTpConfigType *)PduR_GConfigPtr.13_1].PduR_RTabUpTpConfig[_2].RTabRxRef;
  # DEBUG pTpRTabUpRx => pTpRTabUpRx_14
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) RxPduId_13(D);
  _6 = _5 * 4;
  _7 = pTpRTabUpRx_14 + _6;
  TargetAPIRef_15 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_15
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_15;
  CancelReceiveFp_16 = PduR_TpModuleAPI[_8].TpCancelReceive;
  # DEBUG CancelReceiveFp => CancelReceiveFp_16
  # DEBUG BEGIN_STMT
  if (CancelReceiveFp_16 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 7> [local count: 337401893]:
  # DEBUG BEGIN_STMT
  TargetPduId_17 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_17
  # DEBUG BEGIN_STMT
  RetVal_19 = CancelReceiveFp_16 (TargetPduId_17);
  # DEBUG RetVal => RetVal_19

  <bb 8> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(6), RetVal_19(7)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericTpStartOfReception (PduR_GenericTpStartOfReception, funcdef_no=8, decl_uid=5758, cgraph_uid=9, symbol_order=10)

Modification phase of node PduR_GenericTpStartOfReception/10
PduR_GenericTpStartOfReception (PduIdType RxPduId, PduLengthType TpSduLength, PduLengthType * BufferSizePtr, uint8 RTabLoTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  BufReq_ReturnType (*PduR_StrtOfRcptnFpType) (PduIdType, PduLengthType, PduLengthType *) StrtOfRcptnFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabLoTpType * const pTpRTabRx;
  BufReq_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.15_1;
  int _2;
  unsigned char PduR_State.16_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.15_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoTpConfigIdx_12(D);
  # DEBUG D#7 => &PduR_GConfigPtr.15_1->PduR_RTabLoTpConfig[_2]
  # DEBUG pRTabLoTpConfig => D#7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.16_3 = PduR_State;
  if (PduR_State.16_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 52, 1);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.15_1].PduR_RTabLoTpConfig[_2].RTabRxCount;
  if (_4 <= RxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 52, 2);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (BufferSizePtr_14(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 52, 9);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  pTpRTabRx_15 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.15_1].PduR_RTabLoTpConfig[_2].RTabRxRef;
  # DEBUG pTpRTabRx => pTpRTabRx_15
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) RxPduId_13(D);
  _6 = _5 * 4;
  _7 = pTpRTabRx_15 + _6;
  TargetAPIRef_16 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_16
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_16;
  StrtOfRcptnFp_17 = PduR_TpModuleAPI[_8].TpStartOfReception;
  # DEBUG StrtOfRcptnFp => StrtOfRcptnFp_17
  # DEBUG BEGIN_STMT
  if (StrtOfRcptnFp_17 == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 69369593]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 52, 9);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 328620040]:
  # DEBUG BEGIN_STMT
  TargetPduId_18 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_18
  # DEBUG BEGIN_STMT
  RetVal_21 = StrtOfRcptnFp_17 (TargetPduId_18, TpSduLength_19(D), BufferSizePtr_14(D));
  # DEBUG RetVal => RetVal_21

  <bb 11> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(7), 1(9), RetVal_21(10)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericTpCopyRxData (PduR_GenericTpCopyRxData, funcdef_no=9, decl_uid=5763, cgraph_uid=10, symbol_order=11)

Modification phase of node PduR_GenericTpCopyRxData/11
PduR_GenericTpCopyRxData (PduIdType RxPduId, const struct PduInfoType * PduInfoPtr, PduLengthType * BufferSizePtr, uint8 RTabLoTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  BufReq_ReturnType (*PduR_CopyRxDataFpType) (PduIdType, const struct PduInfoType *, PduLengthType *) CopyRxDataFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabLoTpType * const pTpRTabRx;
  BufReq_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.17_1;
  int _2;
  unsigned char PduR_State.18_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.17_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoTpConfigIdx_12(D);
  # DEBUG D#8 => &PduR_GConfigPtr.17_1->PduR_RTabLoTpConfig[_2]
  # DEBUG pRTabLoTpConfig => D#8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.18_3 = PduR_State;
  if (PduR_State.18_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 50, 1);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.17_1].PduR_RTabLoTpConfig[_2].RTabRxCount;
  if (_4 <= RxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 50, 2);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_14(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 397989633]:
  if (BufferSizePtr_15(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 203409961]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 50, 9);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 278592743]:
  # DEBUG BEGIN_STMT
  pTpRTabRx_16 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.17_1].PduR_RTabLoTpConfig[_2].RTabRxRef;
  # DEBUG pTpRTabRx => pTpRTabRx_16
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) RxPduId_13(D);
  _6 = _5 * 4;
  _7 = pTpRTabRx_16 + _6;
  TargetAPIRef_17 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_17
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_17;
  CopyRxDataFp_18 = PduR_TpModuleAPI[_8].TpCopyRxData;
  # DEBUG CopyRxDataFp => CopyRxDataFp_18
  # DEBUG BEGIN_STMT
  if (CopyRxDataFp_18 == 0B)
    goto <bb 10>; [17.43%]
  else
    goto <bb 11>; [82.57%]

  <bb 10> [local count: 48558715]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 50, 9);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 230034028]:
  # DEBUG BEGIN_STMT
  TargetPduId_19 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_19
  # DEBUG BEGIN_STMT
  RetVal_21 = CopyRxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), BufferSizePtr_15(D));
  # DEBUG RetVal => RetVal_21

  <bb 12> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(8), 1(10), RetVal_21(11)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericTpRxIndication (PduR_GenericTpRxIndication, funcdef_no=10, decl_uid=5767, cgraph_uid=11, symbol_order=12)

Modification phase of node PduR_GenericTpRxIndication/12
PduR_GenericTpRxIndication (PduIdType RxPduId, NotifResultType Result, uint8 RTabLoTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  void (*PduR_TpRxIndFpType) (PduIdType, NotifResultType) RxIndFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabLoTpType * const pTpRTabRx;
  const struct PduR_PBConfigType * PduR_GConfigPtr.19_1;
  int _2;
  unsigned char PduR_State.20_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.19_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoTpConfigIdx_11(D);
  # DEBUG D#9 => &PduR_GConfigPtr.19_1->PduR_RTabLoTpConfig[_2]
  # DEBUG pRTabLoTpConfig => D#9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.20_3 = PduR_State;
  if (PduR_State.20_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 51, 1);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.19_1].PduR_RTabLoTpConfig[_2].RTabRxCount;
  if (_4 <= RxPduId_12(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 51, 2);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  pTpRTabRx_13 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.19_1].PduR_RTabLoTpConfig[_2].RTabRxRef;
  # DEBUG pTpRTabRx => pTpRTabRx_13
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) RxPduId_12(D);
  _6 = _5 * 4;
  _7 = pTpRTabRx_13 + _6;
  TargetAPIRef_14 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_14
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_14;
  RxIndFp_15 = PduR_TpModuleAPI[_8].TpRxIndication;
  # DEBUG RxIndFp => RxIndFp_15
  # DEBUG BEGIN_STMT
  if (RxIndFp_15 == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 51, 9);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  TargetPduId_16 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_16
  # DEBUG BEGIN_STMT
  RxIndFp_15 (TargetPduId_16, Result_17(D));

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function PduR_GenericTpCopyTxData (PduR_GenericTpCopyTxData, funcdef_no=11, decl_uid=5773, cgraph_uid=12, symbol_order=13)

Modification phase of node PduR_GenericTpCopyTxData/13
PduR_GenericTpCopyTxData (PduIdType TxPduId, struct PduInfoType * PduInfoPtr, struct RetryInfoType * RetryInfoPtr, PduLengthType * AvailableDataPtr, uint8 RTabLoTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  BufReq_ReturnType (*PduR_CopyTxDataFpType) (PduIdType, struct PduInfoType *, struct RetryInfoType *, PduLengthType *) CopyTxDataFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabLoTpType * const pTpRTabTx;
  BufReq_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.21_1;
  int _2;
  unsigned char PduR_State.22_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.21_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoTpConfigIdx_12(D);
  # DEBUG D#10 => &PduR_GConfigPtr.21_1->PduR_RTabLoTpConfig[_2]
  # DEBUG pRTabLoTpConfig => D#10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.22_3 = PduR_State;
  if (PduR_State.22_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 54, 1);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.21_1].PduR_RTabLoTpConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 54, 2);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_14(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 397989633]:
  if (AvailableDataPtr_15(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 203409961]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 54, 9);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 278592743]:
  # DEBUG BEGIN_STMT
  pTpRTabTx_16 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.21_1].PduR_RTabLoTpConfig[_2].RTabTxRef;
  # DEBUG pTpRTabTx => pTpRTabTx_16
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_13(D);
  _6 = _5 * 4;
  _7 = pTpRTabTx_16 + _6;
  TargetAPIRef_17 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_17
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_17;
  CopyTxDataFp_18 = PduR_TpModuleAPI[_8].TpCopyTxData;
  # DEBUG CopyTxDataFp => CopyTxDataFp_18
  # DEBUG BEGIN_STMT
  if (CopyTxDataFp_18 == 0B)
    goto <bb 10>; [17.43%]
  else
    goto <bb 11>; [82.57%]

  <bb 10> [local count: 48558715]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 54, 9);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 230034028]:
  # DEBUG BEGIN_STMT
  TargetPduId_19 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_19
  # DEBUG BEGIN_STMT
  RetVal_22 = CopyTxDataFp_18 (TargetPduId_19, PduInfoPtr_14(D), RetryInfoPtr_20(D), AvailableDataPtr_15(D));
  # DEBUG RetVal => RetVal_22

  <bb 12> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(8), 1(10), RetVal_22(11)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GenericTpTxConfirmation (PduR_GenericTpTxConfirmation, funcdef_no=12, decl_uid=5777, cgraph_uid=13, symbol_order=14)

Modification phase of node PduR_GenericTpTxConfirmation/14
PduR_GenericTpTxConfirmation (PduIdType TxPduId, NotifResultType Result, uint8 RTabLoTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  void (*PduR_TpTxConfFpType) (PduIdType, NotifResultType) TxConfirmationFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabLoTpType * const pTpRTabTx;
  const struct PduR_PBConfigType * PduR_GConfigPtr.23_1;
  int _2;
  unsigned char PduR_State.24_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabLoTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.23_1 = PduR_GConfigPtr;
  _2 = (int) RTabLoTpConfigIdx_11(D);
  # DEBUG D#11 => &PduR_GConfigPtr.23_1->PduR_RTabLoTpConfig[_2]
  # DEBUG pRTabLoTpConfig => D#11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.24_3 = PduR_State;
  if (PduR_State.24_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 55, 1);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.23_1].PduR_RTabLoTpConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_12(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 55, 2);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  pTpRTabTx_13 = MEM[(const struct PduR_RTabLoTpConfigType *)PduR_GConfigPtr.23_1].PduR_RTabLoTpConfig[_2].RTabTxRef;
  # DEBUG pTpRTabTx => pTpRTabTx_13
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_12(D);
  _6 = _5 * 4;
  _7 = pTpRTabTx_13 + _6;
  TargetAPIRef_14 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_14
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_14;
  TxConfirmationFp_15 = PduR_TpModuleAPI[_8].TpTxConfirmation;
  # DEBUG TxConfirmationFp => TxConfirmationFp_15
  # DEBUG BEGIN_STMT
  if (TxConfirmationFp_15 == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 55, 9);
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  TargetPduId_16 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_16
  # DEBUG BEGIN_STMT
  TxConfirmationFp_15 (TargetPduId_16, Result_17(D));

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function PduR_GenericTpTransmit (PduR_GenericTpTransmit, funcdef_no=13, decl_uid=5781, cgraph_uid=14, symbol_order=15)

Modification phase of node PduR_GenericTpTransmit/15
PduR_GenericTpTransmit (PduIdType TxPduId, const struct PduInfoType * PduInfoPtr, uint8 RTabUpTpConfigIdx)
{
  const PduR_PduIdType TargetPduId;
  Std_ReturnType (*PduR_TransmitFpType) (PduIdType, const struct PduInfoType *) TransmitFp;
  const PduR_RefToModuleAPI TargetAPIRef;
  const struct PduR_RTabUpTpType * const pRTabUpTpTx;
  Std_ReturnType RetVal;
  const struct PduR_PBConfigType * PduR_GConfigPtr.25_1;
  int _2;
  unsigned char PduR_State.26_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  const struct PduR_RTabUpTpType * _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.25_1 = PduR_GConfigPtr;
  _2 = (int) RTabUpTpConfigIdx_12(D);
  # DEBUG D#12 => &PduR_GConfigPtr.25_1->PduR_RTabUpTpConfig[_2]
  # DEBUG pRTabUpTpConfig => D#12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.26_3 = PduR_State;
  if (PduR_State.26_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 1);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct PduR_RTabUpTpConfigType *)PduR_GConfigPtr.25_1].PduR_RTabUpTpConfig[_2].RTabTxCount;
  if (_4 <= TxPduId_13(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 2);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_14(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 9);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  pRTabUpTpTx_15 = MEM[(const struct PduR_RTabUpTpConfigType *)PduR_GConfigPtr.25_1].PduR_RTabUpTpConfig[_2].RTabTxRef;
  # DEBUG pRTabUpTpTx => pRTabUpTpTx_15
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) TxPduId_13(D);
  _6 = _5 * 4;
  _7 = pRTabUpTpTx_15 + _6;
  TargetAPIRef_16 = _7->TargetModuleAPIRef;
  # DEBUG TargetAPIRef => TargetAPIRef_16
  # DEBUG BEGIN_STMT
  _8 = (int) TargetAPIRef_16;
  TransmitFp_17 = PduR_TpModuleAPI[_8].TpTransmit;
  # DEBUG TransmitFp => TransmitFp_17
  # DEBUG BEGIN_STMT
  if (TransmitFp_17 == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 69369593]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 9);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 328620040]:
  # DEBUG BEGIN_STMT
  TargetPduId_18 = _7->TargetPduId;
  # DEBUG TargetPduId => TargetPduId_18
  # DEBUG BEGIN_STMT
  RetVal_20 = TransmitFp_17 (TargetPduId_18, PduInfoPtr_14(D));
  # DEBUG RetVal => RetVal_20
  # DEBUG BEGIN_STMT
  if (RetVal_20 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 108444613]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 20, 3);

  <bb 12> [local count: 1073741824]:
  # RetVal_9 = PHI <1(3), 1(5), 1(7), 1(9), RetVal_20(10), RetVal_20(11)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function PduR_GetConfigurationId (PduR_GetConfigurationId, funcdef_no=14, decl_uid=5785, cgraph_uid=15, symbol_order=16)

Modification phase of node PduR_GetConfigurationId/16
PduR_GetConfigurationId ()
{
  PduR_PBConfigIdType RetVal;
  unsigned char PduR_State.27_1;
  const struct PduR_PBConfigType * PduR_GConfigPtr.28_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_State.27_1 = PduR_State;
  if (PduR_State.27_1 == 0)
    goto <bb 3>; [20.96%]
  else
    goto <bb 4>; [79.04%]

  <bb 3> [local count: 225056286]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (51, 0, 16, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 65535
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 848685538]:
  # DEBUG BEGIN_STMT
  PduR_GConfigPtr.28_2 = PduR_GConfigPtr;
  RetVal_6 = PduR_GConfigPtr.28_2->PduR_ConfigurationId;
  # DEBUG RetVal => RetVal_6

  <bb 5> [local count: 1073741824]:
  # RetVal_3 = PHI <65535(3), RetVal_6(4)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_3;

}


