
IPA constant propagation start:
Determining dynamic type for call: ServiceProcessStatus_7 = Dcm_ControlDTCSetting_SubServiceHandler.1_1 (OpStatus_4(D), pMsgContext_5(D));
  Starting walk at: ServiceProcessStatus_7 = Dcm_ControlDTCSetting_SubServiceHandler.1_1 (OpStatus_4(D), pMsgContext_5(D));
  instance pointer: pMsgContext_5(D)  Outer instance pointer: pMsgContext_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_9 = _1 (OpStatus_4(D), pMsgContext_5(D));
  Starting walk at: ServiceProcessStatus_9 = _1 (OpStatus_4(D), pMsgContext_5(D));
  instance pointer: pMsgContext_5(D)  Outer instance pointer: pMsgContext_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = Dcm_Dsp_ExtractSubServiceHandler (OpStatus_4(D), pMsgContext_5(D));
Determining dynamic type for call: Dcm_DspModeRuleDTCFunction.3_1 (&nrc);
  Starting walk at: Dcm_DspModeRuleDTCFunction.3_1 (&nrc);
  instance pointer: &nrc  Outer instance pointer: nrc offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_8 = Dcm_Dsp_ControlDTCSetting_SvcCont (OpStatus_4(D), pMsgContext_6(D));
  Starting walk at: serviceProcessStatus_8 = Dcm_Dsp_ControlDTCSetting_SvcCont (OpStatus_4(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_10 = Dcm_Dsp_ControlDTCSetting_SvcStart (OpStatus_4(D), pMsgContext_6(D));
  Starting walk at: serviceProcessStatus_10 = Dcm_Dsp_ControlDTCSetting_SvcStart (OpStatus_4(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29:
    callsite  Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 -> Dcm_Dsp_ControlDTCSetting_SetState/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_DspInternal_GetSidConfig/28:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/27:
  Jump functions of caller  SchM_Switch_Dcm_DcmControlDTCSetting/25:
  Jump functions of caller  Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/24:
  Jump functions of caller  Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/23:
  Jump functions of caller  Dcm_Internal_ReleaseLock/22:
  Jump functions of caller  Dcm_Internal_GetLock/21:
  Jump functions of caller  Dcm_Dsl_GetDemClientId/20:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/19:
  Jump functions of caller  Dcm_Dsp_ExtractSubServiceHandler/18:
  Jump functions of caller  Dcm_ExternalSetNegResponse/17:
  Jump functions of caller  Dcm_ResetDTCSettingStatusOnSessionChange/16:
    callsite  Dcm_ResetDTCSettingStatusOnSessionChange/16 -> Dcm_Dsp_ControlDTCSetting_ReEnable/9 : 
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SetState/15:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SvcCont/14:
    indirect simple callsite, calling param -1, offset 0, for stmt ServiceProcessStatus_7 = Dcm_ControlDTCSetting_SubServiceHandler.1_1 (OpStatus_4(D), pMsgContext_5(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SvcStart/13:
    indirect simple callsite, calling param -1, offset 0, for stmt ServiceProcessStatus_9 = _1 (OpStatus_4(D), pMsgContext_5(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SessionChange/12:
    callsite  Dcm_Dsp_ControlDTCSetting_SessionChange/12 -> Dcm_ResetDTCSettingStatusOnSessionChange/16 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsp_ControlDTCSetting_SessionChange/12 -> Dcm_Dsp_ControlDTCSetting_ReEnable/9 : 
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_MainFunction/11:
    callsite  Dcm_Dsp_ControlDTCSetting_MainFunction/11 -> Dcm_Dsp_ControlDTCSetting_ReEnable/9 : 
    indirect simple callsite, calling param -1, offset 0, for stmt Dcm_DspModeRuleDTCFunction.3_1 (&nrc);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_GetState/10:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_ReEnable/9:
    callsite  Dcm_Dsp_ControlDTCSetting_ReEnable/9 -> Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 : 
  Jump functions of caller  Dcm_Dsp_ControlDTCSettingState_Init/8:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7:
    callsite  Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 -> Dcm_Dsp_ControlDTCSetting_SetState/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_On_SSvcH/6:
    callsite  Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 -> Dcm_Dsp_ControlDTCSetting_SetState/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SvcH/5:
    callsite  Dcm_Dsp_ControlDTCSetting_SvcH/5 -> Dcm_Dsp_ControlDTCSetting_SvcCont/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_ControlDTCSetting_SvcH/5 -> Dcm_Dsp_ControlDTCSetting_SvcStart/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Dcm_Dsp_ControlDTCSetting_SessionChange for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSetting_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSetting_GetState for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSetting_ReEnable for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSettingState_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSetting_Off_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSetting_On_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ControlDTCSetting_SvcH for cloning; -fipa-cp-clone disabled.

overall_size: 249, max_new_size: 11001
 - context independent values, size: 11, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29:
  Node: Dcm_ResetDTCSettingStatusOnSessionChange/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_ControlDTCSetting_SetState/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 3, loc_size: 26, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 24, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
    param [2]: 0 [loc_time: 4, loc_size: 16, prop_time: 0, prop_size: 0]
               1 [loc_time: 4, loc_size: 15, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         Dcm_Dsp_DtcSettingControlType [0, 1]
        AGGS VARIABLE
  Node: Dcm_Dsp_ControlDTCSetting_SvcCont/14:
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
  Node: Dcm_Dsp_ControlDTCSetting_SvcStart/13:
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
  Node: Dcm_Dsp_ControlDTCSetting_SessionChange/12:
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
  Node: Dcm_Dsp_ControlDTCSetting_MainFunction/11:
  Node: Dcm_Dsp_ControlDTCSetting_GetState/10:
  Node: Dcm_Dsp_ControlDTCSetting_ReEnable/9:
  Node: Dcm_Dsp_ControlDTCSettingState_Init/8:
  Node: Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7:
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
  Node: Dcm_Dsp_ControlDTCSetting_On_SSvcH/6:
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
  Node: Dcm_Dsp_ControlDTCSetting_SvcH/5:
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

Propagated bits info for function Dcm_Dsp_ControlDTCSetting_SetState/15:
 param 1: value = 0x0, mask = 0x1
 param 2: value = 0x1, mask = 0x1

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (Dcm_Dsp_ControlDTCSetting_ReEnable.part.0) @06df48c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_ReEnableDemClientId/4 (read)Dcm_ControlDtcStatus/3 (write)Dcm_ReAttemptEnableDTCSetting/2 (write)Dcm_ControlDTCSetting_Lock/1 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_ReEnable/9 (354334800 (estimated locally),0.33 per call) 
  Calls: Dcm_Dsp_ControlDTCSetting_SetState/15 (1073741824 (estimated locally),1.00 per call) Dcm_Internal_ReleaseLock/22 (1073741824 (estimated locally),1.00 per call) 
Dcm_DspInternal_GetSidConfig/28 (Dcm_DspInternal_GetSidConfig) @06daf7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_ResetDTCSettingStatusOnSessionChange/16 (227268940 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/27 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol) @06daf700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_ResetDTCSettingStatusOnSessionChange/16 (227268940 (estimated locally),0.33 per call) 
  Calls: 
Dcm_DspModeRuleDTCFunction/26 (Dcm_DspModeRuleDTCFunction) @06de31f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_ControlDTCSetting_MainFunction/11 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Switch_Dcm_DcmControlDTCSetting/25 (SchM_Switch_Dcm_DcmControlDTCSetting) @06da3ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SetState/15 (402653184 (estimated locally),0.38 per call) Dcm_Dsp_ControlDTCSetting_SetState/15 (402653184 (estimated locally),0.38 per call) 
  Calls: 
Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/24 (Dcm_Dsp_DemFacade_ControlDTCSetting_Enable) @06da3e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SetState/15 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/23 (Dcm_Dsp_DemFacade_ControlDTCSetting_Disable) @06da3d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SetState/15 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_Internal_ReleaseLock/22 (Dcm_Internal_ReleaseLock) @06da3b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Internal_GetLock/21 (Dcm_Internal_GetLock) @06da3a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_ReEnable/9 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_GetDemClientId/20 (Dcm_Dsl_GetDemClientId) @06da39a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/19 (Dcm_Dsl_Supervisor_GetProcessingProtocolIndex) @06da38c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ExtractSubServiceHandler/18 (Dcm_Dsp_ExtractSubServiceHandler) @06da3620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SvcStart/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/17 (Dcm_ExternalSetNegResponse) @06da3460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (86599426 (estimated locally),0.08 per call) Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (86599426 (estimated locally),0.08 per call) Dcm_Dsp_ControlDTCSetting_SvcH/5 (182911522 (estimated locally),0.17 per call) 
  Calls: 
Dcm_ResetDTCSettingStatusOnSessionChange/16 (Dcm_ResetDTCSettingStatusOnSessionChange) @06da32a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ControlDtcStatus/3 (read)
  Referring: 
  Availability: local
  Function flags: count:688693758 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SessionChange/12 (524845004 (estimated locally),0.49 per call) 
  Calls: Dcm_Dsp_ControlDTCSetting_ReEnable/9 (22999617 (estimated locally),0.03 per call) Dcm_DspInternal_GetSidConfig/28 (227268940 (estimated locally),0.33 per call) Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/27 (227268940 (estimated locally),0.33 per call) 
Dcm_Dsp_ControlDTCSetting_SetState/15 (Dcm_Dsp_ControlDTCSetting_SetState) @06da3000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ControlDtcStatus/3 (write)Dcm_ReEnableDemClientId/4 (write)Dcm_ControlDtcStatus/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (354334802 (estimated locally),0.33 per call) 
  Calls: SchM_Switch_Dcm_DcmControlDTCSetting/25 (402653184 (estimated locally),0.38 per call) SchM_Switch_Dcm_DcmControlDTCSetting/25 (402653184 (estimated locally),0.38 per call) Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/24 (536870913 (estimated locally),0.50 per call) Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/23 (536870913 (estimated locally),0.50 per call) 
Dcm_Dsp_ControlDTCSetting_SvcCont/14 (Dcm_Dsp_ControlDTCSetting_SvcCont) @06d6be00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ControlDTCSetting_SubServiceHandler/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SvcH/5 (357878150 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ControlDTCSetting_SvcStart/13 (Dcm_Dsp_ControlDTCSetting_SvcStart) @06d6bc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ControlDTCSetting_SubServiceHandler/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SvcH/5 (174966628 (estimated locally),0.16 per call) 
  Calls: Dcm_Dsp_ExtractSubServiceHandler/18 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ControlDTCSetting_SessionChange/12 (Dcm_Dsp_ControlDTCSetting_SessionChange) @06d6ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ControlDtcStatus/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ResetDTCSettingStatusOnSessionChange/16 (524845004 (estimated locally),0.49 per call) Dcm_Dsp_ControlDTCSetting_ReEnable/9 (181135951 (estimated locally),0.17 per call) 
Dcm_Dsp_ControlDTCSetting_MainFunction/11 (Dcm_Dsp_ControlDTCSetting_MainFunction) @06d6b8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DspModeRuleDTCFunction/26 (read)Dcm_ControlDtcStatus/3 (read)Dcm_ReAttemptEnableDTCSetting/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ControlDTCSetting_ReEnable/9 (254253474 (estimated locally),0.24 per call) 
   Indirect call(751619278 (estimated locally),0.70 per call) 
Dcm_Dsp_ControlDTCSetting_GetState/10 (Dcm_Dsp_ControlDTCSetting_GetState) @06d6b700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ControlDtcStatus/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ControlDTCSetting_ReEnable/9 (Dcm_Dsp_ControlDTCSetting_ReEnable) @06d6b540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ControlDTCSetting_Lock/1 (addr)Dcm_ReAttemptEnableDTCSetting/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_ControlDTCSetting_SessionChange/12 (181135951 (estimated locally),0.17 per call) Dcm_Dsp_ControlDTCSetting_MainFunction/11 (254253474 (estimated locally),0.24 per call) Dcm_ResetDTCSettingStatusOnSessionChange/16 (22999617 (estimated locally),0.03 per call) 
  Calls: Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (354334800 (estimated locally),0.33 per call) Dcm_Internal_GetLock/21 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ControlDTCSettingState_Init/8 (Dcm_Dsp_ControlDTCSettingState_Init) @06d6b380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ControlDTCSetting_Lock/1 (write)Dcm_ControlDtcStatus/3 (write)Dcm_ReAttemptEnableDTCSetting/2 (write)Dcm_ControlDTCSetting_SubServiceHandler/0 (write)Dcm_ReEnableDemClientId/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (Dcm_Dsp_ControlDTCSetting_Off_SSvcH) @06d6b1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ControlDTCSetting_Lock/1 (addr)Dcm_ControlDTCSetting_Lock/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/17 (86599426 (estimated locally),0.08 per call) Dcm_Internal_ReleaseLock/22 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_ControlDTCSetting_SetState/15 (354334802 (estimated locally),0.33 per call) Dcm_Internal_GetLock/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_GetDemClientId/20 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (Dcm_Dsp_ControlDTCSetting_On_SSvcH) @06d6b000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ControlDTCSetting_Lock/1 (addr)Dcm_ControlDTCSetting_Lock/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/17 (86599426 (estimated locally),0.08 per call) Dcm_Internal_ReleaseLock/22 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_ControlDTCSetting_SetState/15 (354334802 (estimated locally),0.33 per call) Dcm_Internal_GetLock/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_GetDemClientId/20 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ControlDTCSetting_SvcH/5 (Dcm_Dsp_ControlDTCSetting_SvcH) @06d46e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ControlDTCSetting_SvcCont/14 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_ControlDTCSetting_SvcStart/13 (174966628 (estimated locally),0.16 per call) Dcm_ExternalSetNegResponse/17 (182911522 (estimated locally),0.17 per call) 
Dcm_ReEnableDemClientId/4 (Dcm_ReEnableDemClientId) @06bbab88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_ControlDTCSetting_SetState/15 (write)Dcm_Dsp_ControlDTCSettingState_Init/8 (write)Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (read)
  Availability: available
  Varpool flags:
Dcm_ControlDtcStatus/3 (Dcm_ControlDtcStatus) @06bbab40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_ControlDTCSetting_SetState/15 (write)Dcm_Dsp_ControlDTCSettingState_Init/8 (write)Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (write)Dcm_Dsp_ControlDTCSetting_SetState/15 (write)Dcm_Dsp_ControlDTCSetting_GetState/10 (read)Dcm_ResetDTCSettingStatusOnSessionChange/16 (read)Dcm_Dsp_ControlDTCSetting_MainFunction/11 (read)Dcm_Dsp_ControlDTCSetting_SessionChange/12 (read)
  Availability: available
  Varpool flags:
Dcm_ReAttemptEnableDTCSetting/2 (Dcm_ReAttemptEnableDTCSetting) @06bbaaf8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_ControlDTCSettingState_Init/8 (write)Dcm_Dsp_ControlDTCSetting_ReEnable/9 (write)Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (write)Dcm_Dsp_ControlDTCSetting_MainFunction/11 (read)
  Availability: available
  Varpool flags:
Dcm_ControlDTCSetting_Lock/1 (Dcm_ControlDTCSetting_Lock) @06bbaab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (addr)Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (addr)Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7 (addr)Dcm_Dsp_ControlDTCSettingState_Init/8 (write)Dcm_Dsp_ControlDTCSetting_On_SSvcH/6 (addr)Dcm_Dsp_ControlDTCSetting_ReEnable.part.0/29 (addr)Dcm_Dsp_ControlDTCSetting_ReEnable/9 (addr)
  Availability: available
  Varpool flags:
Dcm_ControlDTCSetting_SubServiceHandler/0 (Dcm_ControlDTCSetting_SubServiceHandler) @06bbaa68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_ControlDTCSetting_SvcCont/14 (read)Dcm_Dsp_ControlDTCSetting_SvcStart/13 (write)Dcm_Dsp_ControlDTCSettingState_Init/8 (write)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsp_ControlDTCSetting_SvcH (Dcm_Dsp_ControlDTCSetting_SvcH, funcdef_no=0, decl_uid=6779, cgraph_uid=1, symbol_order=5)

Modification phase of node Dcm_Dsp_ControlDTCSetting_SvcH/5
Dcm_Dsp_ControlDTCSetting_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType serviceProcessStatus;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_4(D)) <default: <L8> [33.33%], case 0: <L0> [33.33%], case 1 ... 2: <L3> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_6(D)->reqDataLen;
  if (_1 != 1)
    goto <bb 4>; [51.11%]
  else
    goto <bb 5>; [48.89%]

  <bb 4> [local count: 182911522]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_6(D), 19);
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 174966628]:
  # DEBUG BEGIN_STMT
  serviceProcessStatus_10 = Dcm_Dsp_ControlDTCSetting_SvcStart (OpStatus_4(D), pMsgContext_6(D));
  # DEBUG serviceProcessStatus => serviceProcessStatus_10
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 357878150]:
<L3>:
  # DEBUG BEGIN_STMT
  serviceProcessStatus_8 = Dcm_Dsp_ControlDTCSetting_SvcCont (OpStatus_4(D), pMsgContext_6(D));
  # DEBUG serviceProcessStatus => serviceProcessStatus_8
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073634451]:
  # serviceProcessStatus_2 = PHI <26(4), serviceProcessStatus_10(5), serviceProcessStatus_8(6), 26(2)>
<L8>:
  # DEBUG serviceProcessStatus => serviceProcessStatus_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_2;

}



;; Function Dcm_Dsp_ControlDTCSetting_On_SSvcH (Dcm_Dsp_ControlDTCSetting_On_SSvcH, funcdef_no=1, decl_uid=6782, cgraph_uid=2, symbol_order=6)

Modification phase of node Dcm_Dsp_ControlDTCSetting_On_SSvcH/6
Dcm_Dsp_ControlDTCSetting_On_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Dcm_DemClientIdType DemClientId;
  Dcm_ProtocolIndexType ProtocolIndex;
  Dcm_ReturnControlDTCSettingType DTCSettingStatus;
  Std_ReturnType serviceProcessStatus;
  Std_ReturnType MutexLockState;
  short unsigned int _1;
  <unnamed-unsigned:3> _2;
  unsigned char _3;
  Dcm_MsgItemType * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG MutexLockState => 31
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_9(D)->dcmRxPduId;
  _2 = pMsgContext_9(D)->msgAddInfo.requestOrigin;
  _3 = (unsigned char) _2;
  ProtocolIndex_11 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_1, _3);
  # DEBUG ProtocolIndex => ProtocolIndex_11
  # DEBUG BEGIN_STMT
  DemClientId_13 = Dcm_Dsl_GetDemClientId (ProtocolIndex_11);
  # DEBUG DemClientId => DemClientId_13
  # DEBUG BEGIN_STMT
  if (OpStatus_14(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = pMsgContext_9(D)->resData;
  *_4 = 1;
  # DEBUG BEGIN_STMT
  pMsgContext_9(D)->resDataLen = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MutexLockState_18 = Dcm_Internal_GetLock (&Dcm_ControlDTCSetting_Lock);
  # DEBUG MutexLockState => MutexLockState_18
  # DEBUG BEGIN_STMT
  if (MutexLockState_18 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  DTCSettingStatus_20 = Dcm_Dsp_ControlDTCSetting_SetState (DemClientId_13, 1, 1);
  # DEBUG DTCSettingStatus => DTCSettingStatus_20
  # DEBUG BEGIN_STMT
  Dcm_Internal_ReleaseLock (&Dcm_ControlDTCSetting_Lock);
  # DEBUG BEGIN_STMT
  if (DTCSettingStatus_20 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  if (DTCSettingStatus_20 == 1)
    goto <bb 8>; [51.12%]
  else
    goto <bb 7>; [48.88%]

  <bb 7> [local count: 86599426]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_9(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26

  <bb 8> [local count: 1073741824]:
  # serviceProcessStatus_5 = PHI <10(6), 10(4), 26(5), 26(7)>
  # DEBUG serviceProcessStatus => serviceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_5;

}



;; Function Dcm_Dsp_ControlDTCSetting_Off_SSvcH (Dcm_Dsp_ControlDTCSetting_Off_SSvcH, funcdef_no=2, decl_uid=6785, cgraph_uid=3, symbol_order=7)

Modification phase of node Dcm_Dsp_ControlDTCSetting_Off_SSvcH/7
Dcm_Dsp_ControlDTCSetting_Off_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Dcm_DemClientIdType DemClientId;
  Dcm_ProtocolIndexType ProtocolIndex;
  Dcm_ReturnControlDTCSettingType DTCSettingStatus;
  Std_ReturnType MutexLockState;
  Std_ReturnType serviceProcessStatus;
  short unsigned int _1;
  <unnamed-unsigned:3> _2;
  unsigned char _3;
  Dcm_MsgItemType * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG MutexLockState => 31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_9(D)->dcmRxPduId;
  _2 = pMsgContext_9(D)->msgAddInfo.requestOrigin;
  _3 = (unsigned char) _2;
  ProtocolIndex_11 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_1, _3);
  # DEBUG ProtocolIndex => ProtocolIndex_11
  # DEBUG BEGIN_STMT
  DemClientId_13 = Dcm_Dsl_GetDemClientId (ProtocolIndex_11);
  # DEBUG DemClientId => DemClientId_13
  # DEBUG BEGIN_STMT
  if (OpStatus_14(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = pMsgContext_9(D)->resData;
  *_4 = 2;
  # DEBUG BEGIN_STMT
  pMsgContext_9(D)->resDataLen = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MutexLockState_18 = Dcm_Internal_GetLock (&Dcm_ControlDTCSetting_Lock);
  # DEBUG MutexLockState => MutexLockState_18
  # DEBUG BEGIN_STMT
  if (MutexLockState_18 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  DTCSettingStatus_20 = Dcm_Dsp_ControlDTCSetting_SetState (DemClientId_13, 1, 0);
  # DEBUG DTCSettingStatus => DTCSettingStatus_20
  # DEBUG BEGIN_STMT
  Dcm_Internal_ReleaseLock (&Dcm_ControlDTCSetting_Lock);
  # DEBUG BEGIN_STMT
  if (DTCSettingStatus_20 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  if (DTCSettingStatus_20 == 1)
    goto <bb 8>; [51.12%]
  else
    goto <bb 7>; [48.88%]

  <bb 7> [local count: 86599426]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_9(D), 16);
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26

  <bb 8> [local count: 1073741824]:
  # serviceProcessStatus_5 = PHI <10(6), 10(4), 26(5), 26(7)>
  # DEBUG serviceProcessStatus => serviceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_5;

}



;; Function Dcm_Dsp_ControlDTCSettingState_Init (Dcm_Dsp_ControlDTCSettingState_Init, funcdef_no=3, decl_uid=6787, cgraph_uid=4, symbol_order=8)

Modification phase of node Dcm_Dsp_ControlDTCSettingState_Init/8
Dcm_Dsp_ControlDTCSettingState_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_ControlDTCSetting_Lock = 0;
  # DEBUG BEGIN_STMT
  Dcm_ControlDtcStatus = 1;
  # DEBUG BEGIN_STMT
  Dcm_ReAttemptEnableDTCSetting = 0;
  # DEBUG BEGIN_STMT
  Dcm_ControlDTCSetting_SubServiceHandler = 0B;
  # DEBUG BEGIN_STMT
  Dcm_ReEnableDemClientId = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_ControlDTCSetting_ReEnable (Dcm_Dsp_ControlDTCSetting_ReEnable, funcdef_no=4, decl_uid=6789, cgraph_uid=5, symbol_order=9)

Modification phase of node Dcm_Dsp_ControlDTCSetting_ReEnable/9
Dcm_Dsp_ControlDTCSetting_ReEnable ()
{
  Std_ReturnType MutexLockState;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG MutexLockState => 31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MutexLockState_4 = Dcm_Internal_GetLock (&Dcm_ControlDTCSetting_Lock);
  # DEBUG MutexLockState => MutexLockState_4
  # DEBUG BEGIN_STMT
  if (MutexLockState_4 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334800]:
  Dcm_Dsp_ControlDTCSetting_ReEnable.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Dcm_ReAttemptEnableDTCSetting = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_ControlDTCSetting_GetState (Dcm_Dsp_ControlDTCSetting_GetState, funcdef_no=5, decl_uid=6791, cgraph_uid=6, symbol_order=10)

Modification phase of node Dcm_Dsp_ControlDTCSetting_GetState/10
Dcm_Dsp_ControlDTCSetting_GetState ()
{
  Dcm_Dsp_DtcSettingControlType ControlDtcStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ControlDtcStatus_2 = Dcm_ControlDtcStatus;
  # DEBUG ControlDtcStatus => ControlDtcStatus_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ControlDtcStatus_2;

}



;; Function Dcm_Dsp_ControlDTCSetting_MainFunction (Dcm_Dsp_ControlDTCSetting_MainFunction, funcdef_no=6, decl_uid=6793, cgraph_uid=7, symbol_order=11)

Modification phase of node Dcm_Dsp_ControlDTCSetting_MainFunction/11
Dcm_Dsp_ControlDTCSetting_MainFunction ()
{
  Dcm_Dsp_DtcSettingControlType ControlDtcStatus;
  Dcm_NegativeResponseCodeType nrc;
  boolean ModeRuleFailed;
  boolean (*<T68a>) (uint8 *) Dcm_DspModeRuleDTCFunction.3_1;
  unsigned char nrc.5_2;
  unsigned char Dcm_ReAttemptEnableDTCSetting.6_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ModeRuleFailed => 0
  # DEBUG BEGIN_STMT
  Dcm_DspModeRuleDTCFunction.3_1 = Dcm_DspModeRuleDTCFunction;
  if (Dcm_DspModeRuleDTCFunction.3_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_DspModeRuleDTCFunction.3_1 (&nrc);
  # DEBUG BEGIN_STMT
  nrc.5_2 = nrc;
  if (nrc.5_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG ModeRuleFailed => 1

  <bb 5> [local count: 751619278]:
  # ModeRuleFailed_4 = PHI <0(3), 1(4)>
  # DEBUG ModeRuleFailed => ModeRuleFailed_4
  nrc ={v} {CLOBBER};

  <bb 6> [local count: 1073741824]:
  # ModeRuleFailed_5 = PHI <0(2), ModeRuleFailed_4(5)>
  # DEBUG ModeRuleFailed => ModeRuleFailed_5
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dcm_Dsp_ControlDTCSetting_GetState
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ControlDtcStatus_11 = Dcm_ControlDtcStatus;
  # DEBUG ControlDtcStatus => ControlDtcStatus_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ControlDtcStatus => NULL
  if (ControlDtcStatus_11 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 7> [local count: 536870913]:
  if (ModeRuleFailed_5 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 8> [local count: 428208240]:
  Dcm_ReAttemptEnableDTCSetting.6_3 = Dcm_ReAttemptEnableDTCSetting;
  if (Dcm_ReAttemptEnableDTCSetting.6_3 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 254253474]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ControlDTCSetting_ReEnable ();

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_ControlDTCSetting_SessionChange (Dcm_Dsp_ControlDTCSetting_SessionChange, funcdef_no=7, decl_uid=6796, cgraph_uid=8, symbol_order=12)

Modification phase of node Dcm_Dsp_ControlDTCSetting_SessionChange/12
Dcm_Dsp_ControlDTCSetting_SessionChange (Dcm_SesCtrlType OldSession, Dcm_SesCtrlType NewSession)
{
  Dcm_Dsp_DtcSettingControlType ControlDtcStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NewSession_2(D) == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 5>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dcm_Dsp_ControlDTCSetting_GetState
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ControlDtcStatus_5 = Dcm_ControlDtcStatus;
  # DEBUG ControlDtcStatus => ControlDtcStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ControlDtcStatus => NULL
  if (ControlDtcStatus_5 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 4> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ControlDTCSetting_ReEnable ();
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Dcm_ResetDTCSettingStatusOnSessionChange (NewSession_2(D));

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


