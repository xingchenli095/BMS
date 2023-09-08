
IPA constant propagation start:
Determining dynamic type for call: ServiceProcessStatus_8 = Dcm_CommunicationControl_SubServiceHandler.1_1 (OpStatus_5(D), pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_8 = Dcm_CommunicationControl_SubServiceHandler.1_1 (OpStatus_5(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_9 = Dcm_Dsp_CommunicationControl_SvcCont (OpStatus_4(D), pMsgContext_5(D));
  Starting walk at: ServiceProcessStatus_9 = Dcm_Dsp_CommunicationControl_SvcCont (OpStatus_4(D), pMsgContext_5(D));
  instance pointer: pMsgContext_5(D)  Outer instance pointer: pMsgContext_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = Dcm_Dsp_ExtractSubServiceHandler (OpStatus_4(D), pMsgContext_5(D));
Determining dynamic type for call: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 3, pMsgContext_3(D));
  Starting walk at: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 3, pMsgContext_3(D));
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 2, pMsgContext_3(D));
  Starting walk at: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 2, pMsgContext_3(D));
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 1, pMsgContext_3(D));
  Starting walk at: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 1, pMsgContext_3(D));
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 0, pMsgContext_3(D));
  Starting walk at: ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 0, pMsgContext_3(D));
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_8 = Dcm_Dsp_CommunicationControl_SvcCont (OpStatus_4(D), pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_8 = Dcm_Dsp_CommunicationControl_SvcCont (OpStatus_4(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_10 = Dcm_Dsp_CommunicationControl_SvcCont (2, pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_10 = Dcm_Dsp_CommunicationControl_SvcCont (2, pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_12 = Dcm_Dsp_CommunicationControl_SvcCont (1, pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_12 = Dcm_Dsp_CommunicationControl_SvcCont (1, pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_14 = Dcm_Dsp_CommunicationControl_SvcStart (0, pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_14 = Dcm_Dsp_CommunicationControl_SvcStart (0, pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_DspInternal_GetSidConfig/32:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/31:
  Jump functions of caller  BswM_Dcm_CommunicationMode_CurrentState/29:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/27:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/26:
  Jump functions of caller  Dcm_ExternalSetNegResponse/25:
  Jump functions of caller  TS_MemSet32/24:
  Jump functions of caller  Dcm_Dsp_ExtractSubServiceHandler/23:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22:
    callsite  Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 -> Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 : 
  Jump functions of caller  Dcm_Dsp_CommunicationControl_ClearInternalVariables/21:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20:
    indirect simple callsite, calling param -1, offset 0, for stmt _9 (Dcm_CommunicationControl_RequestedModeDeclarationConfirmation.7_10);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (Dcm_CommunicationControl_RequestedModeDeclarationConfirmation.4_3);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19:
    callsite  Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 -> Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 : 
    callsite  Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 -> Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 : 
    callsite  Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 -> Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 15]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 -> Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 15]
  Jump functions of caller  Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType/18:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SvcCont/17:
    indirect simple callsite, calling param -1, offset 0, for stmt ServiceProcessStatus_8 = Dcm_CommunicationControl_SubServiceHandler.1_1 (OpStatus_5(D), pMsgContext_6(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SvcStart/16:
    callsite  Dcm_Dsp_CommunicationControl_SvcStart/16 -> Dcm_Dsp_CommunicationControl_SvcCont/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SessionChange/15:
    callsite  Dcm_Dsp_CommunicationControl_SessionChange/15 -> Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsp_CommunicationControl_SessionChange/15 -> Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 : 
  Jump functions of caller  Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (8);
       param 0: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/13:
    callsite  Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/13 -> Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/12:
    callsite  Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/12 -> Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/11:
    callsite  Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/11 -> Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/10:
    callsite  Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/10 -> Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_CommunicationControl_Init/9:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SvcH/8:
    callsite  Dcm_Dsp_CommunicationControl_SvcH/8 -> Dcm_Dsp_CommunicationControl_SvcCont/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_CommunicationControl_SvcH/8 -> Dcm_Dsp_CommunicationControl_SvcCont/17 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_CommunicationControl_SvcH/8 -> Dcm_Dsp_CommunicationControl_SvcCont/17 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_CommunicationControl_SvcH/8 -> Dcm_Dsp_CommunicationControl_SvcStart/16 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Dcm_Dsp_CommunicationControl_SessionChange for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_ResetCommunicationControl for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_CommunicationControl_SvcH for cloning; -fipa-cp-clone disabled.

overall_size: 283, max_new_size: 11001
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 12, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_CommunicationControl_ClearInternalVariables/21:
  Node: Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         uint8 [0, 15]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 1, loc_size: 53, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 53, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 53, prop_time: 0, prop_size: 0]
               3 [loc_time: 1, loc_size: 53, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x3
         uint8 [0, 3]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         uint8 [0, 3]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         uint8 [0, 15]
        AGGS VARIABLE
  Node: Dcm_Dsp_CommunicationControl_SvcCont/17:
    param [0]: VARIABLE
               0 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_CommunicationControl_SvcStart/16:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         Dcm_OpStatusType [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_CommunicationControl_SessionChange/15:
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
  Node: Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14:
  Node: Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/13:
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
  Node: Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/12:
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
  Node: Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/11:
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
  Node: Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/10:
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
  Node: Dcm_Dsp_CommunicationControl_Init/9:
  Node: Dcm_Dsp_CommunicationControl_SvcH/8:
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

IPA decision stage:

 - Creating a specialized node of Dcm_Dsp_CommunicationControl_SvcStart/16 for all known contexts.
    replacing param #0 OpStatus with const 0
Propagated bits info for function Dcm_Dsp_CommunicationControl_SvcStart.constprop/33:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20:
 param 0: value = 0x0, mask = 0xf
Propagated bits info for function Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19:
 param 1: value = 0x3, mask = 0x3
Propagated bits info for function Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType/18:
 param 0: value = 0x0, mask = 0x3
 param 1: value = 0x0, mask = 0xf
Propagated bits info for function Dcm_Dsp_CommunicationControl_SvcStart/16:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Dcm_Dsp_CommunicationControl_SvcStart/16
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_CommunicationControl_SvcStart.constprop.0/33 (Dcm_Dsp_CommunicationControl_SvcStart.constprop) @06ea2540
  Type: function definition analyzed
  Visibility:
  References: Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (write)Dcm_CommunicationControl_SubServiceHandler/7 (write)
  Referring: 
  Clone of Dcm_Dsp_CommunicationControl_SvcStart/16
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_SvcH/8 (214748364 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsp_ExtractSubServiceHandler/23 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_CommunicationControl_SvcCont/17 (1073741824 (estimated locally),1.00 per call) 
Dcm_DspInternal_GetSidConfig/32 (Dcm_DspInternal_GetSidConfig) @06dacb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 (668438060 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/31 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol) @06daca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 (668438060 (estimated locally),1.00 per call) 
  Calls: 
Dcm_CommunicationControlAllChannel/30 (Dcm_CommunicationControlAllChannel) @06daf678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)
  Availability: not_available
  Varpool flags: read-only
BswM_Dcm_CommunicationMode_CurrentState/29 (BswM_Dcm_CommunicationMode_CurrentState) @06dac2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (679839637 (estimated locally),11.51 per call) Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (667710118 (estimated locally),27.92 per call) Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (41883786 (estimated locally),1.75 per call) 
  Calls: 
Dcm_CommunicationControlLookUpTable/28 (Dcm_CommunicationControlLookUpTable) @06daf558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (read)Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_RxConnectionGetRxPduIdInformation/27 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06dac1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (4840026 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/26 (Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured) @06da0e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (72434538 (estimated locally),0.07 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/25 (Dcm_ExternalSetNegResponse) @06da0d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (174930840 (estimated locally),0.16 per call) Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (89424645 (estimated locally),0.08 per call) 
  Calls: 
TS_MemSet32/24 (TS_MemSet32) @06da08c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_Init/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ExtractSubServiceHandler/23 (Dcm_Dsp_ExtractSubServiceHandler) @06da0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_CommunicationControl_SvcStart.constprop/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 (Dcm_Dsp_CommunicationControl_ResetOnSessionChange) @06da0380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:668438060 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_SessionChange/15 (708669605 (estimated locally),0.66 per call) 
  Calls: Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (22999617 (estimated locally),0.03 per call) Dcm_DspInternal_GetSidConfig/32 (668438060 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/31 (668438060 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (Dcm_Dsp_CommunicationControl_ClearInternalVariables) @06da00e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_CommunicationControl_RequestedModeConfirmation/3 (write)Dcm_CommunicationControl_RequestedModeDeclarationConfirmation/4 (write)Dcm_CommunicationControl_PositiveResponse/5 (write)Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (write)Dcm_CommunicationControl_SubServiceHandler/7 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue) @06d1cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_CommunicationControlLookUpTable/28 (read)Dcm_CommunicationControlLookUpTable/28 (read)Dcm_CommunicationControl_RequestedModeDeclarationConfirmation/4 (read)Dcm_CommunicationControl_RequestedModeConfirmation/3 (read)Dcm_CommunicationControl_RequestedModeConfirmation/3 (read)Dcm_CommunicationControl_CommunicationMode/2 (write)Dcm_CommunicationControlLookUpTable/28 (read)Dcm_CommunicationControlAllChannel/30 (read)Dcm_CommunicationControlLookUpTable/28 (read)Dcm_CommunicationControl_RequestedModeDeclarationConfirmation/4 (read)Dcm_CommunicationControl_RequestedModeConfirmation/3 (read)Dcm_CommunicationControl_RequestedModeConfirmation/3 (read)Dcm_CommunicationControl_CommunicationMode/2 (write)
  Referring: 
  Availability: local
  Function flags: count:23913173 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (23903397 (estimated locally),0.02 per call) 
  Calls: BswM_Dcm_CommunicationMode_CurrentState/29 (667710118 (estimated locally),27.92 per call) BswM_Dcm_CommunicationMode_CurrentState/29 (41883786 (estimated locally),1.75 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/27 (4840026 (estimated locally),0.20 per call) 
   Indirect call(667710118 (estimated locally),27.92 per call) 
   Indirect call(41883786 (estimated locally),1.75 per call) 
Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation) @06d1cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_CommunicationControl_PositiveResponse/5 (write)Dcm_AllCommunicationMode/0 (read)Dcm_CommunicationControl_RequestedModeConfirmation/3 (write)Dcm_AllCommunicationControlModeDeclarations/1 (read)Dcm_CommunicationControl_RequestedModeDeclarationConfirmation/4 (write)Dcm_CommunicationControl_PositiveResponse/5 (write)Dcm_CommunicationControl_PositiveResponse/5 (write)Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (write)Dcm_CommunicationControl_PositiveResponse/5 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/13 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/12 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/11 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (23903397 (estimated locally),0.02 per call) Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/26 (72434538 (estimated locally),0.07 per call) Dcm_ExternalSetNegResponse/25 (174930840 (estimated locally),0.16 per call) Dcm_ExternalSetNegResponse/25 (89424645 (estimated locally),0.08 per call) Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType/18 (182947310 (estimated locally),0.17 per call) 
Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType/18 (Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType) @06d1cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (182947310 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsp_CommunicationControl_SvcCont/17 (Dcm_Dsp_CommunicationControl_SvcCont) @06d1c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_CommunicationControl_SubServiceHandler/7 (read)Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_CommunicationControl_SvcStart.constprop/33 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_CommunicationControl_SvcH/8 (68783901 (estimated locally),0.06 per call) Dcm_Dsp_CommunicationControl_SvcH/8 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_CommunicationControl_SvcH/8 (214748364 (estimated locally),0.20 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_SvcStart/16 (Dcm_Dsp_CommunicationControl_SvcStart) @06d1c7e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_CommunicationControl_SessionChange/15 (Dcm_Dsp_CommunicationControl_SessionChange) @06d1c620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (Dcm_Dsp_CommunicationControl_ResetCommunicationControl) @06d1c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationControl_CommunicationMode/2 (read)Dcm_CommunicationControlLookUpTable/28 (read)Dcm_CommunicationControlLookUpTable/28 (read)Dcm_CommunicationControl_CommunicationMode/2 (write)
  Referring: 
  Availability: available
  Function flags: count:59055800 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_CommunicationControl_SessionChange/15 (365072220 (estimated locally),0.34 per call) Dcm_Dsp_CommunicationControl_ResetOnSessionChange/22 (22999617 (estimated locally),0.03 per call) 
  Calls: BswM_Dcm_CommunicationMode_CurrentState/29 (679839637 (estimated locally),11.51 per call) 
   Indirect call(679839637 (estimated locally),11.51 per call) 
Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/13 (Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH) @06d1c2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/12 (Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH) @06d1c0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/11 (Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH) @06d17ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/10 (Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH) @06d17d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_Init/9 (Dcm_Dsp_CommunicationControl_Init) @06d17b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationControl_CommunicationMode/2 (addr)Dcm_CommunicationControl_RequestedModeConfirmation/3 (write)Dcm_CommunicationControl_RequestedModeDeclarationConfirmation/4 (write)Dcm_CommunicationControl_PositiveResponse/5 (write)Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (write)Dcm_CommunicationControl_SubServiceHandler/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemSet32/24 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_CommunicationControl_SvcH/8 (Dcm_Dsp_CommunicationControl_SvcH) @06d178c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_CommunicationControl_SvcCont/17 (68783901 (estimated locally),0.06 per call) Dcm_Dsp_CommunicationControl_SvcCont/17 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_CommunicationControl_SvcCont/17 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_CommunicationControl_SvcStart.constprop/33 (214748364 (estimated locally),0.20 per call) 
Dcm_CommunicationControl_SubServiceHandler/7 (Dcm_CommunicationControl_SubServiceHandler) @06d153f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_CommunicationControl_SvcCont/17 (read)Dcm_Dsp_CommunicationControl_SvcStart.constprop.0/33 (write)Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (write)Dcm_Dsp_CommunicationControl_Init/9 (write)
  Availability: available
  Varpool flags:
Dcm_CommunicationControl_SubFunctionHandlerIsInternal/6 (Dcm_CommunicationControl_SubFunctionHandlerIsInternal) @06d153a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_CommunicationControl_SvcStart.constprop.0/33 (write)Dcm_Dsp_CommunicationControl_SvcCont/17 (read)Dcm_Dsp_CommunicationControl_SvcH/8 (read)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (write)Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (write)Dcm_Dsp_CommunicationControl_Init/9 (write)
  Availability: available
  Varpool flags: initialized
Dcm_CommunicationControl_PositiveResponse/5 (Dcm_CommunicationControl_PositiveResponse) @06d15360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (write)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (read)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (write)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (write)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (write)Dcm_Dsp_CommunicationControl_Init/9 (write)
  Availability: available
  Varpool flags: initialized
Dcm_CommunicationControl_RequestedModeDeclarationConfirmation/4 (Dcm_CommunicationControl_RequestedModeDeclarationConfirmation) @06d15318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (write)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (write)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_Init/9 (write)
  Availability: available
  Varpool flags:
Dcm_CommunicationControl_RequestedModeConfirmation/3 (Dcm_CommunicationControl_RequestedModeConfirmation) @06d152d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_ClearInternalVariables/21 (write)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (write)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (read)Dcm_Dsp_CommunicationControl_Init/9 (write)
  Availability: available
  Varpool flags:
Dcm_CommunicationControl_CommunicationMode/2 (Dcm_CommunicationControl_CommunicationMode) @06d15288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_CommunicationControl_Init/9 (addr)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (write)Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue/20 (write)Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (read)Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14 (write)
  Availability: available
  Varpool flags:
Dcm_AllCommunicationControlModeDeclarations/1 (Dcm_AllCommunicationControlModeDeclarations) @06d15240
  Type: variable definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Dcm_AllCommunicationMode/0 (alias)
  Referring: Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (read)
  Availability: available
  Varpool flags: read-only const-value-known
Dcm_AllCommunicationMode/0 (Dcm_AllCommunicationMode) @06d151f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_AllCommunicationControlModeDeclarations/1 (alias)Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Dcm_Dsp_CommunicationControl_SvcCont (Dcm_Dsp_CommunicationControl_SvcCont, funcdef_no=9, decl_uid=7167, cgraph_uid=10, symbol_order=17)

Modification phase of node Dcm_Dsp_CommunicationControl_SvcCont/17
Dcm_Dsp_CommunicationControl_SvcCont (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;
  Std_ReturnType (*<T686>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) Dcm_CommunicationControl_SubServiceHandler.1_1;
  unsigned char Dcm_CommunicationControl_SubFunctionHandlerIsInternal.2_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_SubServiceHandler.1_1 = Dcm_CommunicationControl_SubServiceHandler;
  ServiceProcessStatus_8 = Dcm_CommunicationControl_SubServiceHandler.1_1 (OpStatus_5(D), pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_8
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_SubFunctionHandlerIsInternal.2_2 = Dcm_CommunicationControl_SubFunctionHandlerIsInternal;
  if (Dcm_CommunicationControl_SubFunctionHandlerIsInternal.2_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (ServiceProcessStatus_8 <= 1)
    goto <bb 4>; [27.23%]
  else
    goto <bb 5>; [72.77%]

  <bb 4> [local count: 146189949]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26

  <bb 5> [local count: 1073741824]:
  # ServiceProcessStatus_3 = PHI <ServiceProcessStatus_8(2), ServiceProcessStatus_8(3), 26(4)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_3;

}



;; Function Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation, funcdef_no=11, decl_uid=7174, cgraph_uid=12, symbol_order=19)

Modification phase of node Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation/19
Adjusting mask for param 1 to 0x3
Setting value range of param 1 [0, 3]
Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (Dcm_OpStatusType OpStatus, uint8 subService, struct Dcm_MsgContextType * pMsgContext)
{
  boolean ValidSubNetAndCommType;
  const uint8 SubnetNumber;
  const uint8 MessageType;
  Dcm_MsgItemType * _1;
  unsigned char _2;
  long unsigned int _3;
  int _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  Dcm_MsgItemType * _8;
  unsigned char Dcm_CommunicationControl_PositiveResponse.3_9;
  unsigned char _10;
  short unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_16(D)->reqData;
  _2 = *_1;
  MessageType_17 = _2 & 3;
  # DEBUG MessageType => MessageType_17
  # DEBUG BEGIN_STMT
  SubnetNumber_18 = _2 >> 4;
  # DEBUG SubnetNumber => SubnetNumber_18
  # DEBUG BEGIN_STMT
  switch (OpStatus_19(D)) <default: <L12> [33.33%], case 0: <L0> [33.33%], case 5: <L7> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _3 = pMsgContext_16(D)->reqDataLen;
  if (_3 == 1)
    goto <bb 4>; [51.12%]
  else
    goto <bb 7>; [48.88%]

  <bb 4> [local count: 182947310]:
  # DEBUG BEGIN_STMT
  # DEBUG ValidSubNetAndCommType => 0
  # DEBUG BEGIN_STMT
  ValidSubNetAndCommType_25 = Dcm_Dsp_CommunicationControl_CheckSubnetNumberAndCommType (MessageType_17, SubnetNumber_18);
  # DEBUG ValidSubNetAndCommType => ValidSubNetAndCommType_25
  # DEBUG BEGIN_STMT
  if (ValidSubNetAndCommType_25 == 1)
    goto <bb 5>; [51.12%]
  else
    goto <bb 6>; [48.88%]

  <bb 5> [local count: 93522665]:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_PositiveResponse = 1;
  # DEBUG BEGIN_STMT
  _4 = (int) MessageType_17;
  _5 = (int) subService_29(D);
  _6 = Dcm_AllCommunicationMode[_4][_5];
  Dcm_CommunicationControl_RequestedModeConfirmation = _6;
  # DEBUG BEGIN_STMT
  _7 = Dcm_AllCommunicationControlModeDeclarations[_4][_5];
  Dcm_CommunicationControl_RequestedModeDeclarationConfirmation = _7;
  # DEBUG BEGIN_STMT
  pMsgContext_16(D)->resDataLen = 1;
  # DEBUG BEGIN_STMT
  _8 = pMsgContext_16(D)->resData;
  *_8 = subService_29(D);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 89424645]:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_PositiveResponse = 0;
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_16(D), 49);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 174930840]:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_PositiveResponse = 0;
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_16(D), 19);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26

  <bb 8> [local count: 357878150]:
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_SubFunctionHandlerIsInternal = 1;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 357878150]:
<L7>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_PositiveResponse.3_9 = Dcm_CommunicationControl_PositiveResponse;
  if (Dcm_CommunicationControl_PositiveResponse.3_9 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 10> [local count: 72434538]:
  # DEBUG BEGIN_STMT
  _10 = Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured (40);
  if (_10 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 23903397]:
  # DEBUG BEGIN_STMT
  _11 = pMsgContext_16(D)->dcmRxPduId;
  Dcm_Dsp_CommunicationControl_SetComMode_ModeDeclarationTrue (SubnetNumber_18, _11);

  <bb 12> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_CommunicationControl_ClearInternalVariables ();
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 357878150]:
<L12>:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_CommunicationControl_ClearInternalVariables ();
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073634451]:
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  return 26;

}



;; Function Dcm_Dsp_CommunicationControl_SvcH (Dcm_Dsp_CommunicationControl_SvcH, funcdef_no=0, decl_uid=7072, cgraph_uid=1, symbol_order=8)

Modification phase of node Dcm_Dsp_CommunicationControl_SvcH/8
Dcm_Dsp_CommunicationControl_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;
  unsigned char Dcm_CommunicationControl_SubFunctionHandlerIsInternal.0_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_4(D)) <default: <L11> [20.00%], case 0: <L0> [20.00%], case 1: <L1> [20.00%], case 2: <L2> [20.00%], case 5 ... 6: <L3> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_14 = Dcm_Dsp_CommunicationControl_SvcStart (0, pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_14
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_12 = Dcm_Dsp_CommunicationControl_SvcCont (1, pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_12
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_10 = Dcm_Dsp_CommunicationControl_SvcCont (2, pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_10
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_SubFunctionHandlerIsInternal.0_1 = Dcm_CommunicationControl_SubFunctionHandlerIsInternal;
  if (Dcm_CommunicationControl_SubFunctionHandlerIsInternal.0_1 == 1)
    goto <bb 7>; [32.03%]
  else
    goto <bb 8>; [67.97%]

  <bb 7> [local count: 68783901]:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_8 = Dcm_Dsp_CommunicationControl_SvcCont (OpStatus_4(D), pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_8

  <bb 8> [local count: 1073741824]:
  # ServiceProcessStatus_2 = PHI <ServiceProcessStatus_14(3), ServiceProcessStatus_12(4), ServiceProcessStatus_10(5), 26(6), 26(2), ServiceProcessStatus_8(7)>
<L11>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_2;

}



;; Function Dcm_Dsp_CommunicationControl_Init (Dcm_Dsp_CommunicationControl_Init, funcdef_no=1, decl_uid=7086, cgraph_uid=2, symbol_order=9)

Modification phase of node Dcm_Dsp_CommunicationControl_Init/9
Dcm_Dsp_CommunicationControl_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&Dcm_CommunicationControl_CommunicationMode, 8, 1);
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_RequestedModeConfirmation = 255;
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_RequestedModeDeclarationConfirmation = 255;
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_PositiveResponse = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_SubFunctionHandlerIsInternal = 0;
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_SubServiceHandler = 0B;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH (Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH, funcdef_no=2, decl_uid=7075, cgraph_uid=3, symbol_order=10)

Modification phase of node Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/10
Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 0, pMsgContext_3(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_5;

}



;; Function Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH (Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH, funcdef_no=3, decl_uid=7078, cgraph_uid=4, symbol_order=11)

Modification phase of node Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/11
Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 1, pMsgContext_3(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_5;

}



;; Function Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH (Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH, funcdef_no=4, decl_uid=7081, cgraph_uid=5, symbol_order=12)

Modification phase of node Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/12
Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 2, pMsgContext_3(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_5;

}



;; Function Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH (Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH, funcdef_no=5, decl_uid=7084, cgraph_uid=6, symbol_order=13)

Modification phase of node Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/13
Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_5 = Dcm_Dsp_CommunicationControl_CommonUnenhancedAddressInformation (OpStatus_2(D), 3, pMsgContext_3(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_5;

}



;; Function Dcm_Dsp_CommunicationControl_ResetCommunicationControl (Dcm_Dsp_CommunicationControl_ResetCommunicationControl, funcdef_no=6, decl_uid=7069, cgraph_uid=7, symbol_order=14)

Modification phase of node Dcm_Dsp_CommunicationControl_ResetCommunicationControl/14
Dcm_Dsp_CommunicationControl_ResetCommunicationControl ()
{
  uint8_least ModeAndLookUpIndex;
  unsigned char _1;
  Std_ReturnType (*<T737>) (uint8) _2;
  unsigned char _3;

  <bb 2> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  # DEBUG ModeAndLookUpIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG ModeAndLookUpIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_CommunicationControl_CommunicationMode[0];
  if (_1 != 8)
    goto <bb 4>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 9> [local count: 334846388]:
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 679839637]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_CommunicationControlLookUpTable[0].SchMSwitchCommunicationControl;
  _2 (8);
  # DEBUG BEGIN_STMT
  _3 = Dcm_CommunicationControlLookUpTable[0].ComMChannelId;
  BswM_Dcm_CommunicationMode_CurrentState (_3, 8);
  # DEBUG BEGIN_STMT
  Dcm_CommunicationControl_CommunicationMode[0] = 8;

  <bb 6> [local count: 738895437]:
  # ModeAndLookUpIndex_5 = PHI <0(2), 1(4)>

  <bb 8> [local count: 1073741824]:
  # ModeAndLookUpIndex_4 = PHI <ModeAndLookUpIndex_5(6), 1(9)>
  # DEBUG ModeAndLookUpIndex => ModeAndLookUpIndex_4
  # DEBUG BEGIN_STMT
  if (ModeAndLookUpIndex_4 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 59055800]:
  return;

}



;; Function Dcm_Dsp_CommunicationControl_SessionChange (Dcm_Dsp_CommunicationControl_SessionChange, funcdef_no=7, decl_uid=7089, cgraph_uid=8, symbol_order=15)

Modification phase of node Dcm_Dsp_CommunicationControl_SessionChange/15
Dcm_Dsp_CommunicationControl_SessionChange (Dcm_SesCtrlType OldSession, Dcm_SesCtrlType NewSession)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NewSession_2(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_CommunicationControl_ResetCommunicationControl ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_CommunicationControl_ResetOnSessionChange (NewSession_2(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


