
IPA constant propagation start:
Determining dynamic type for call: ModeRuleCheckResult_9 = _3 (CurrentNrc_7(D));
  Starting walk at: ModeRuleCheckResult_9 = _3 (CurrentNrc_7(D));
  instance pointer: CurrentNrc_7(D)  Outer instance pointer: CurrentNrc_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_6 = Dcm_RoutineControl_SubServiceHandler.5_1 (OpStatus_3(D), pMsgContext_4(D));
  Starting walk at: ServiceProcessStatus_6 = Dcm_RoutineControl_SubServiceHandler.5_1 (OpStatus_3(D), pMsgContext_4(D));
  instance pointer: pMsgContext_4(D)  Outer instance pointer: pMsgContext_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RoutineIndexFound_19 = Dcm_Dsp_RoutineControl_SetCurrentRoutine (_3);
  Starting walk at: RoutineIndexFound_19 = Dcm_Dsp_RoutineControl_SetCurrentRoutine (_3);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = Dcm_Dsp_RoutineControl_ModeRuleResult (&CurrentNrc);
  Starting walk at: _6 = Dcm_Dsp_RoutineControl_ModeRuleResult (&CurrentNrc);
  instance pointer: &CurrentNrc  Outer instance pointer: CurrentNrc offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel ();
  Function call may change dynamic type:_4 = Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession ();
  Function call may change dynamic type:RoutineIndexFound_19 = Dcm_Dsp_RoutineControl_SetCurrentRoutine (_3);
Determining dynamic type for call: ServiceProcessStatus_32 = Dcm_Dsp_RoutineControl_SvcCont (OpStatus_28(D), pMsgContext_16(D));
  Starting walk at: ServiceProcessStatus_32 = Dcm_Dsp_RoutineControl_SvcCont (OpStatus_28(D), pMsgContext_16(D));
  instance pointer: pMsgContext_16(D)  Outer instance pointer: pMsgContext_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_10 = Dcm_Dsp_ExtractSubServiceHandler (OpStatus_28(D), pMsgContext_16(D));
  Function call may change dynamic type:_6 = Dcm_Dsp_RoutineControl_ModeRuleResult (&CurrentNrc);
  Function call may change dynamic type:_5 = Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel ();
  Function call may change dynamic type:_4 = Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession ();
  Function call may change dynamic type:RoutineIndexFound_19 = Dcm_Dsp_RoutineControl_SetCurrentRoutine (_3);
Determining dynamic type for call: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  Starting walk at: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  instance pointer: pMsgContext_18(D)  Outer instance pointer: pMsgContext_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  Starting walk at: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  instance pointer: &ErrorCode  Outer instance pointer: ErrorCode offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  Starting walk at: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  instance pointer: pMsgContext_18(D)  Outer instance pointer: pMsgContext_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  Starting walk at: RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  instance pointer: &ErrorCode  Outer instance pointer: ErrorCode offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RoutineSubfunctionResult_19 = _3 (OpStatus_16(D), pMsgContext_17(D), &ErrorCode);
  Starting walk at: RoutineSubfunctionResult_19 = _3 (OpStatus_16(D), pMsgContext_17(D), &ErrorCode);
  instance pointer: pMsgContext_17(D)  Outer instance pointer: pMsgContext_17(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RoutineSubfunctionResult_19 = _3 (OpStatus_16(D), pMsgContext_17(D), &ErrorCode);
  Starting walk at: RoutineSubfunctionResult_19 = _3 (OpStatus_16(D), pMsgContext_17(D), &ErrorCode);
  instance pointer: &ErrorCode  Outer instance pointer: ErrorCode offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_7 = Dcm_Dsp_RoutineControl_SvcCont (OpStatus_3(D), pMsgContext_5(D));
  Starting walk at: ServiceProcessStatus_7 = Dcm_Dsp_RoutineControl_SvcCont (OpStatus_3(D), pMsgContext_5(D));
  instance pointer: pMsgContext_5(D)  Outer instance pointer: pMsgContext_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_9 = Dcm_Dsp_RoutineControl_SvcStart (OpStatus_3(D), pMsgContext_5(D));
  Starting walk at: ServiceProcessStatus_9 = Dcm_Dsp_RoutineControl_SvcStart (OpStatus_3(D), pMsgContext_5(D));
  instance pointer: pMsgContext_5(D)  Outer instance pointer: pMsgContext_5(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Det_ASR40_ReportError/18:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/17:
  Jump functions of caller  Dcm_GetSesCtrlTypeExt/16:
  Jump functions of caller  Dcm_Dsp_ExtractSubServiceHandler/14:
  Jump functions of caller  Dcm_ExternalSetNegResponse/13:
  Jump functions of caller  Dcm_Dsp_RoutineControl_ModeRuleResult/12:
    indirect simple callsite, calling param -1, offset 0, for stmt ModeRuleCheckResult_9 = _3 (CurrentNrc_7(D));
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11:
  Jump functions of caller  Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10:
  Jump functions of caller  Dcm_Dsp_RoutineControl_SvcCont/9:
    indirect simple callsite, calling param -1, offset 0, for stmt ServiceProcessStatus_6 = Dcm_RoutineControl_SubServiceHandler.5_1 (OpStatus_3(D), pMsgContext_4(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_RoutineControl_SvcStart/8:
    callsite  Dcm_Dsp_RoutineControl_SvcStart/8 -> Dcm_Dsp_RoutineControl_SvcCont/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_RoutineControl_SvcStart/8 -> Dcm_Dsp_RoutineControl_ModeRuleResult/12 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_RoutineControl_SvcStart/8 -> Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11 : 
    callsite  Dcm_Dsp_RoutineControl_SvcStart/8 -> Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10 : 
    callsite  Dcm_Dsp_RoutineControl_SvcStart/8 -> Dcm_Dsp_RoutineControl_SetCurrentRoutine/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_RoutineControl_SetCurrentRoutine/7:
  Jump functions of caller  Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6:
    indirect simple callsite, calling param -1, offset 0, for stmt RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5:
    indirect simple callsite, calling param -1, offset 0, for stmt RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4:
    indirect simple callsite, calling param -1, offset 0, for stmt RoutineSubfunctionResult_19 = _3 (OpStatus_16(D), pMsgContext_17(D), &ErrorCode);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 16
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_RoutineControl_SvcH/3:
    callsite  Dcm_Dsp_RoutineControl_SvcH/3 -> Dcm_Dsp_RoutineControl_SvcCont/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_RoutineControl_SvcH/3 -> Dcm_Dsp_RoutineControl_SvcStart/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_RoutineControl_Init/2:

 Propagating constants:

Not considering Dcm_Dsp_RoutineControl_RequestResults_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_RoutineControl_StopRoutine_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_RoutineControl_StartRoutine_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_RoutineControl_SvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_RoutineControl_Init for cloning; -fipa-cp-clone disabled.

overall_size: 346, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_RoutineControl_ModeRuleResult/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dcm_NegativeResponseCodeType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11:
  Node: Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10:
  Node: Dcm_Dsp_RoutineControl_SvcCont/9:
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
  Node: Dcm_Dsp_RoutineControl_SvcStart/8:
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
  Node: Dcm_Dsp_RoutineControl_SetCurrentRoutine/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6:
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
  Node: Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5:
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
  Node: Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4:
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
  Node: Dcm_Dsp_RoutineControl_SvcH/3:
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
  Node: Dcm_Dsp_RoutineControl_Init/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Det_ASR40_ReportError/18 (Det_ASR40_ReportError) @06dfa2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (159523259 (estimated locally),0.15 per call) Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (159523259 (estimated locally),0.15 per call) Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (168105020 (estimated locally),0.16 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/17 (Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel) @06dbdee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11 (229727064 (estimated locally),0.33 per call) 
  Calls: 
Dcm_GetSesCtrlTypeExt/16 (Dcm_GetSesCtrlTypeExt) @06dbdd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Dcm_DspRoutineConfig/15 (Dcm_DspRoutineConfig) @06df7360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (read)Dcm_Dsp_RoutineControl_SetCurrentRoutine/7 (read)Dcm_Dsp_RoutineControl_ModeRuleResult/12 (read)Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (read)Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10 (read)Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11 (read)Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (read)Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (read)Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_ExtractSubServiceHandler/14 (Dcm_Dsp_ExtractSubServiceHandler) @06dbda80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcStart/8 (19873619 (estimated locally),0.02 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/13 (Dcm_ExternalSetNegResponse) @06dbd9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (159523259 (estimated locally),0.15 per call) Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (79761629 (estimated locally),0.07 per call) Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (79761629 (estimated locally),0.07 per call) Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (54814520 (estimated locally),0.05 per call) Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (159523259 (estimated locally),0.15 per call) Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (79761629 (estimated locally),0.07 per call) Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (79761629 (estimated locally),0.07 per call) Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (54814520 (estimated locally),0.05 per call) Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (168105020 (estimated locally),0.16 per call) Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (84052510 (estimated locally),0.08 per call) Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (84052510 (estimated locally),0.08 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (19873619 (estimated locally),0.02 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (19576998 (estimated locally),0.02 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (59324236 (estimated locally),0.06 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (118648472 (estimated locally),0.11 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (460635243 (estimated locally),0.43 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (375809639 (estimated locally),0.35 per call) 
  Calls: 
Dcm_Dsp_RoutineControl_ModeRuleResult/12 (Dcm_Dsp_RoutineControl_ModeRuleResult) @06dbd540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (read)Dcm_DspRoutineConfig/15 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcStart/8 (59324236 (estimated locally),0.06 per call) 
  Calls: 
   Indirect call(751619278 (estimated locally),0.70 per call) 
Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11 (Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel) @06dbd380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (read)Dcm_DspRoutineConfig/15 (read)
  Referring: 
  Availability: local
  Function flags: count:696142619 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcStart/8 (118648472 (estimated locally),0.11 per call) 
  Calls: Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/17 (229727064 (estimated locally),0.33 per call) 
Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10 (Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession) @06dbd1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (read)Dcm_DspRoutineConfig/15 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcStart/8 (237296943 (estimated locally),0.22 per call) 
  Calls: Dcm_GetSesCtrlTypeExt/16 (114863532 (estimated locally),0.33 per call) 
Dcm_Dsp_RoutineControl_SvcCont/9 (Dcm_Dsp_RoutineControl_SvcCont) @06dbd000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoutineControl_SubServiceHandler/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcH/3 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (19873619 (estimated locally),0.02 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_RoutineControl_SvcStart/8 (Dcm_Dsp_RoutineControl_SvcStart) @06dade00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoutineControl_SubServiceHandler/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcH/3 (357878150 (estimated locally),0.33 per call) 
  Calls: Dcm_Dsp_RoutineControl_SvcCont/9 (19873619 (estimated locally),0.02 per call) Dcm_Dsp_ExtractSubServiceHandler/14 (19873619 (estimated locally),0.02 per call) Dcm_ExternalSetNegResponse/13 (19873619 (estimated locally),0.02 per call) Dcm_ExternalSetNegResponse/13 (19576998 (estimated locally),0.02 per call) Dcm_Dsp_RoutineControl_ModeRuleResult/12 (59324236 (estimated locally),0.06 per call) Dcm_ExternalSetNegResponse/13 (59324236 (estimated locally),0.06 per call) Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11 (118648472 (estimated locally),0.11 per call) Dcm_ExternalSetNegResponse/13 (118648472 (estimated locally),0.11 per call) Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10 (237296943 (estimated locally),0.22 per call) Dcm_ExternalSetNegResponse/13 (460635243 (estimated locally),0.43 per call) Dcm_Dsp_RoutineControl_SetCurrentRoutine/7 (697932186 (estimated locally),0.65 per call) Dcm_ExternalSetNegResponse/13 (375809639 (estimated locally),0.35 per call) 
Dcm_Dsp_RoutineControl_SetCurrentRoutine/7 (Dcm_Dsp_RoutineControl_SetCurrentRoutine) @06dadc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (write)Dcm_DspRoutineConfig/15 (read)Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (write)
  Referring: 
  Availability: local
  Function flags: count:312727306 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RoutineControl_SvcStart/8 (697932186 (estimated locally),0.65 per call) 
  Calls: 
Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (Dcm_Dsp_RoutineControl_RequestResults_SSvcH) @06dada80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (read)Dcm_DspRoutineConfig/15 (read)Dcm_DspRoutineConfig/15 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/13 (159523259 (estimated locally),0.15 per call) Det_ASR40_ReportError/18 (159523259 (estimated locally),0.15 per call) Dcm_ExternalSetNegResponse/13 (79761629 (estimated locally),0.07 per call) Dcm_ExternalSetNegResponse/13 (79761629 (estimated locally),0.07 per call) Dcm_ExternalSetNegResponse/13 (54814520 (estimated locally),0.05 per call) 
   Indirect call(1018927305 (estimated locally),0.95 per call) 
Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (Dcm_Dsp_RoutineControl_StopRoutine_SSvcH) @06dad7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (read)Dcm_DspRoutineConfig/15 (read)Dcm_DspRoutineConfig/15 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/13 (159523259 (estimated locally),0.15 per call) Det_ASR40_ReportError/18 (159523259 (estimated locally),0.15 per call) Dcm_ExternalSetNegResponse/13 (79761629 (estimated locally),0.07 per call) Dcm_ExternalSetNegResponse/13 (79761629 (estimated locally),0.07 per call) Dcm_ExternalSetNegResponse/13 (54814520 (estimated locally),0.05 per call) 
   Indirect call(1018927305 (estimated locally),0.95 per call) 
Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (Dcm_Dsp_RoutineControl_StartRoutine_SSvcH) @06dad540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (read)Dcm_DspRoutineConfig/15 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/13 (168105020 (estimated locally),0.16 per call) Det_ASR40_ReportError/18 (168105020 (estimated locally),0.16 per call) Dcm_ExternalSetNegResponse/13 (84052510 (estimated locally),0.08 per call) Dcm_ExternalSetNegResponse/13 (84052510 (estimated locally),0.08 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_RoutineControl_SvcH/3 (Dcm_Dsp_RoutineControl_SvcH) @06dad2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_RoutineControl_SvcCont/9 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_RoutineControl_SvcStart/8 (357878150 (estimated locally),0.33 per call) 
Dcm_Dsp_RoutineControl_Init/2 (Dcm_Dsp_RoutineControl_Init) @06dad0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RoutineControl_SubServiceHandler/1 (write)Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_RoutineControl_SubServiceHandler/1 (Dcm_RoutineControl_SubServiceHandler) @06d35e10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_RoutineControl_SvcCont/9 (read)Dcm_Dsp_RoutineControl_SvcStart/8 (write)Dcm_Dsp_RoutineControl_Init/2 (write)
  Availability: available
  Varpool flags:
Dcm_RoutineControl_CurrentRoutineConfigIndex/0 (Dcm_RoutineControl_CurrentRoutineConfigIndex) @06d35dc8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSession/10 (read)Dcm_Dsp_RoutineControl_Init/2 (write)Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4 (read)Dcm_Dsp_RoutineControl_SetCurrentRoutine/7 (write)Dcm_Dsp_RoutineControl_ModeRuleResult/12 (read)Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5 (read)Dcm_Dsp_RoutineControl_IsRoutineAvailableInCurrentSecurityLevel/11 (read)Dcm_Dsp_RoutineControl_SetCurrentRoutine/7 (write)Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6 (read)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsp_RoutineControl_Init (Dcm_Dsp_RoutineControl_Init, funcdef_no=0, decl_uid=6827, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_Dsp_RoutineControl_Init/2
Dcm_Dsp_RoutineControl_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_RoutineControl_SubServiceHandler = 0B;
  # DEBUG BEGIN_STMT
  Dcm_RoutineControl_CurrentRoutineConfigIndex = 3;
  return;

}



;; Function Dcm_Dsp_RoutineControl_SvcH (Dcm_Dsp_RoutineControl_SvcH, funcdef_no=1, decl_uid=6816, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_Dsp_RoutineControl_SvcH/3
Dcm_Dsp_RoutineControl_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_3(D)) <default: <L9> [33.33%], case 0: <L0> [33.33%], case 1 ... 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_9 = Dcm_Dsp_RoutineControl_SvcStart (OpStatus_3(D), pMsgContext_5(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_9
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_7 = Dcm_Dsp_RoutineControl_SvcCont (OpStatus_3(D), pMsgContext_5(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_7
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
  # ServiceProcessStatus_1 = PHI <ServiceProcessStatus_9(3), ServiceProcessStatus_7(4), 26(2)>
<L9>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_1;

}



;; Function Dcm_Dsp_RoutineControl_StartRoutine_SSvcH (Dcm_Dsp_RoutineControl_StartRoutine_SSvcH, funcdef_no=2, decl_uid=6819, cgraph_uid=3, symbol_order=4)

Modification phase of node Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/4
Dcm_Dsp_RoutineControl_StartRoutine_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType RoutineSubfunctionResult;
  Dcm_NegativeResponseCodeType ErrorCode;
  Std_ReturnType ServiceProcessStatus;
  short unsigned int Dcm_RoutineControl_CurrentRoutineConfigIndex.6_1;
  int _2;
  Std_ReturnType (*<T793>) (Dcm_OpStatusType, struct Dcm_MsgContextType *, Dcm_NegativeResponseCodeType *) _3;
  unsigned char ErrorCode.7_4;
  Dcm_MsgItemType * _5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;
  unsigned char _8;
  Dcm_MsgItemType * _9;
  Dcm_MsgItemType * _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  ErrorCode = 16;
  # DEBUG BEGIN_STMT
  # DEBUG RoutineSubfunctionResult => 1
  # DEBUG BEGIN_STMT
  Dcm_RoutineControl_CurrentRoutineConfigIndex.6_1 = Dcm_RoutineControl_CurrentRoutineConfigIndex;
  _2 = (int) Dcm_RoutineControl_CurrentRoutineConfigIndex.6_1;
  _3 = Dcm_DspRoutineConfig[_2].StartFncHandler;
  RoutineSubfunctionResult_19 = _3 (OpStatus_16(D), pMsgContext_17(D), &ErrorCode);
  # DEBUG RoutineSubfunctionResult => RoutineSubfunctionResult_19
  # DEBUG BEGIN_STMT
  if (OpStatus_16(D) != 2)
    goto <bb 3>; [78.28%]
  else
    goto <bb 10>; [21.72%]

  <bb 3> [local count: 840525101]:
  # DEBUG BEGIN_STMT
  switch (RoutineSubfunctionResult_19) <default: <L9> [20.00%], case 0: <L5> [20.00%], case 1: <L1> [20.00%], case 10: <L7> [20.00%], case 12: <L7> [20.00%], case 131: <L15> [20.00%]>

  <bb 4> [local count: 168105020]:
<L1>:
  # DEBUG BEGIN_STMT
  ErrorCode.7_4 = ErrorCode;
  if (ErrorCode.7_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 84052510]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_17(D), ErrorCode.7_4);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 84052510]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_17(D), 34);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 168105020]:
<L5>:
  # DEBUG BEGIN_STMT
  _5 = pMsgContext_17(D)->resData;
  *_5 = 1;
  # DEBUG BEGIN_STMT
  _6 = pMsgContext_17(D)->reqData;
  _7 = pMsgContext_17(D)->resData;
  _8 = *_6;
  MEM[(Dcm_MsgItemType *)_7 + 1B] = _8;
  # DEBUG BEGIN_STMT
  _9 = pMsgContext_17(D)->reqData;
  _10 = pMsgContext_17(D)->resData;
  _11 = MEM[(Dcm_MsgItemType *)_9 + 1B];
  MEM[(Dcm_MsgItemType *)_10 + 2B] = _11;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 168105020]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => RoutineSubfunctionResult_19
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 168105020]:
<L9>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 170, 2);
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_17(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # ServiceProcessStatus_12 = PHI <26(7), 26(2), 26(6), 26(9), RoutineSubfunctionResult_19(8), 10(3), 26(5)>
<L15>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_12
  # DEBUG BEGIN_STMT
  ErrorCode ={v} {CLOBBER};
  return ServiceProcessStatus_12;

}



;; Function Dcm_Dsp_RoutineControl_StopRoutine_SSvcH (Dcm_Dsp_RoutineControl_StopRoutine_SSvcH, funcdef_no=3, decl_uid=6822, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/5
Dcm_Dsp_RoutineControl_StopRoutine_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType RoutineSubfunctionResult;
  Dcm_NegativeResponseCodeType ErrorCode;
  Std_ReturnType ServiceProcessStatus;
  short unsigned int Dcm_RoutineControl_CurrentRoutineConfigIndex.9_1;
  int _2;
  Std_ReturnType (*<T793>) (Dcm_OpStatusType, struct Dcm_MsgContextType *, Dcm_NegativeResponseCodeType *) _3;
  Std_ReturnType (*<T793>) (Dcm_OpStatusType, struct Dcm_MsgContextType *, Dcm_NegativeResponseCodeType *) _4;
  unsigned char ErrorCode.10_5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;
  Dcm_MsgItemType * _8;
  unsigned char _9;
  Dcm_MsgItemType * _10;
  Dcm_MsgItemType * _11;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  ErrorCode = 16;
  # DEBUG BEGIN_STMT
  Dcm_RoutineControl_CurrentRoutineConfigIndex.9_1 = Dcm_RoutineControl_CurrentRoutineConfigIndex;
  _2 = (int) Dcm_RoutineControl_CurrentRoutineConfigIndex.9_1;
  # DEBUG D#2 => &Dcm_DspRoutineConfig[_2]
  # DEBUG CurrentRoutineConfig => D#2
  # DEBUG BEGIN_STMT
  if (OpStatus_17(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_DspRoutineServicesType *)&Dcm_DspRoutineConfig][_2].StopFncHandler;
  if (_3 == 0B)
    goto <bb 4>; [10.21%]
  else
    goto <bb 5>; [89.79%]

  <bb 4> [local count: 54814520]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), 18);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 1018927305]:
  # DEBUG ServiceProcessStatus => NULL
  # DEBUG BEGIN_STMT
  # DEBUG RoutineSubfunctionResult => 1
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Dcm_DspRoutineServicesType *)&Dcm_DspRoutineConfig][_2].StopFncHandler;
  RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  # DEBUG RoutineSubfunctionResult => RoutineSubfunctionResult_21
  # DEBUG BEGIN_STMT
  if (OpStatus_17(D) != 2)
    goto <bb 6>; [78.28%]
  else
    goto <bb 13>; [21.72%]

  <bb 6> [local count: 797616294]:
  # DEBUG BEGIN_STMT
  switch (RoutineSubfunctionResult_21) <default: <L14> [20.00%], case 0: <L10> [20.00%], case 1: <L6> [20.00%], case 10: <L12> [20.00%], case 12: <L12> [20.00%], case 131: <L21> [20.00%]>

  <bb 7> [local count: 159523259]:
<L6>:
  # DEBUG BEGIN_STMT
  ErrorCode.10_5 = ErrorCode;
  if (ErrorCode.10_5 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 79761629]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), ErrorCode.10_5);
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 79761629]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), 34);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 159523259]:
<L10>:
  # DEBUG BEGIN_STMT
  _6 = pMsgContext_18(D)->resData;
  *_6 = 2;
  # DEBUG BEGIN_STMT
  _7 = pMsgContext_18(D)->reqData;
  _8 = pMsgContext_18(D)->resData;
  _9 = *_7;
  MEM[(Dcm_MsgItemType *)_8 + 1B] = _9;
  # DEBUG BEGIN_STMT
  _10 = pMsgContext_18(D)->reqData;
  _11 = pMsgContext_18(D)->resData;
  _12 = MEM[(Dcm_MsgItemType *)_10 + 1B];
  MEM[(Dcm_MsgItemType *)_11 + 2B] = _12;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 159523259]:
<L12>:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => RoutineSubfunctionResult_21
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 159523259]:
<L14>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 171, 2);
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
  # ServiceProcessStatus_13 = PHI <26(4), 26(10), 26(5), 26(9), 26(12), RoutineSubfunctionResult_21(11), 10(6), 26(8)>
<L21>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_13
  # DEBUG BEGIN_STMT
  ErrorCode ={v} {CLOBBER};
  return ServiceProcessStatus_13;

}



;; Function Dcm_Dsp_RoutineControl_RequestResults_SSvcH (Dcm_Dsp_RoutineControl_RequestResults_SSvcH, funcdef_no=4, decl_uid=6825, cgraph_uid=5, symbol_order=6)

Modification phase of node Dcm_Dsp_RoutineControl_RequestResults_SSvcH/6
Dcm_Dsp_RoutineControl_RequestResults_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType RoutineSubfunctionResult;
  Dcm_NegativeResponseCodeType ErrorCode;
  Std_ReturnType ServiceProcessStatus;
  short unsigned int Dcm_RoutineControl_CurrentRoutineConfigIndex.12_1;
  int _2;
  Std_ReturnType (*<T793>) (Dcm_OpStatusType, struct Dcm_MsgContextType *, Dcm_NegativeResponseCodeType *) _3;
  Std_ReturnType (*<T793>) (Dcm_OpStatusType, struct Dcm_MsgContextType *, Dcm_NegativeResponseCodeType *) _4;
  unsigned char ErrorCode.13_5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;
  Dcm_MsgItemType * _8;
  unsigned char _9;
  Dcm_MsgItemType * _10;
  Dcm_MsgItemType * _11;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  ErrorCode = 16;
  # DEBUG BEGIN_STMT
  Dcm_RoutineControl_CurrentRoutineConfigIndex.12_1 = Dcm_RoutineControl_CurrentRoutineConfigIndex;
  _2 = (int) Dcm_RoutineControl_CurrentRoutineConfigIndex.12_1;
  # DEBUG D#3 => &Dcm_DspRoutineConfig[_2]
  # DEBUG CurrentRoutineConfig => D#3
  # DEBUG BEGIN_STMT
  if (OpStatus_17(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_DspRoutineServicesType *)&Dcm_DspRoutineConfig][_2].RequestResultsFncHandler;
  if (_3 == 0B)
    goto <bb 4>; [10.21%]
  else
    goto <bb 5>; [89.79%]

  <bb 4> [local count: 54814520]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), 18);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 1018927305]:
  # DEBUG ServiceProcessStatus => NULL
  # DEBUG BEGIN_STMT
  # DEBUG RoutineSubfunctionResult => 1
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Dcm_DspRoutineServicesType *)&Dcm_DspRoutineConfig][_2].RequestResultsFncHandler;
  RoutineSubfunctionResult_21 = _4 (OpStatus_17(D), pMsgContext_18(D), &ErrorCode);
  # DEBUG RoutineSubfunctionResult => RoutineSubfunctionResult_21
  # DEBUG BEGIN_STMT
  if (OpStatus_17(D) != 2)
    goto <bb 6>; [78.28%]
  else
    goto <bb 13>; [21.72%]

  <bb 6> [local count: 797616294]:
  # DEBUG BEGIN_STMT
  switch (RoutineSubfunctionResult_21) <default: <L14> [20.00%], case 0: <L10> [20.00%], case 1: <L6> [20.00%], case 10: <L12> [20.00%], case 12: <L12> [20.00%], case 131: <L21> [20.00%]>

  <bb 7> [local count: 159523259]:
<L6>:
  # DEBUG BEGIN_STMT
  ErrorCode.13_5 = ErrorCode;
  if (ErrorCode.13_5 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 79761629]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), ErrorCode.13_5);
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 79761629]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), 34);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 159523259]:
<L10>:
  # DEBUG BEGIN_STMT
  _6 = pMsgContext_18(D)->resData;
  *_6 = 3;
  # DEBUG BEGIN_STMT
  _7 = pMsgContext_18(D)->reqData;
  _8 = pMsgContext_18(D)->resData;
  _9 = *_7;
  MEM[(Dcm_MsgItemType *)_8 + 1B] = _9;
  # DEBUG BEGIN_STMT
  _10 = pMsgContext_18(D)->reqData;
  _11 = pMsgContext_18(D)->resData;
  _12 = MEM[(Dcm_MsgItemType *)_10 + 1B];
  MEM[(Dcm_MsgItemType *)_11 + 2B] = _12;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 159523259]:
<L12>:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => RoutineSubfunctionResult_21
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 159523259]:
<L14>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 172, 2);
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_18(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
  # ServiceProcessStatus_13 = PHI <26(4), 26(10), 26(5), 26(9), 26(12), RoutineSubfunctionResult_21(11), 10(6), 26(8)>
<L21>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_13
  # DEBUG BEGIN_STMT
  ErrorCode ={v} {CLOBBER};
  return ServiceProcessStatus_13;

}


