
IPA constant propagation start:
Determining dynamic type for call: ServiceProcessStatus_8 = Dcm_TesterPresent_SubServiceHandler.0_1 (OpStatus_5(D), pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_8 = Dcm_TesterPresent_SubServiceHandler.0_1 (OpStatus_5(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_8 = Dcm_Dsp_TesterPresent_SvcCont (OpStatus_3(D), pMsgContext_4(D));
  Starting walk at: ServiceProcessStatus_8 = Dcm_Dsp_TesterPresent_SvcCont (OpStatus_3(D), pMsgContext_4(D));
  instance pointer: pMsgContext_4(D)  Outer instance pointer: pMsgContext_4(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = Dcm_Dsp_ExtractSubServiceHandler (OpStatus_3(D), pMsgContext_4(D));
Determining dynamic type for call: ServiceProcessStatus_9 = Dcm_Dsp_TesterPresent_SvcCont (2, pMsgContext_7(D));
  Starting walk at: ServiceProcessStatus_9 = Dcm_Dsp_TesterPresent_SvcCont (2, pMsgContext_7(D));
  instance pointer: pMsgContext_7(D)  Outer instance pointer: pMsgContext_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_12 = Dcm_Dsp_TesterPresent_SvcCont (1, pMsgContext_7(D));
  Starting walk at: ServiceProcessStatus_12 = Dcm_Dsp_TesterPresent_SvcCont (1, pMsgContext_7(D));
  instance pointer: pMsgContext_7(D)  Outer instance pointer: pMsgContext_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_14 = Dcm_Dsp_TesterPresent_SvcStart (0, pMsgContext_7(D));
  Starting walk at: ServiceProcessStatus_14 = Dcm_Dsp_TesterPresent_SvcStart (0, pMsgContext_7(D));
  instance pointer: pMsgContext_7(D)  Outer instance pointer: pMsgContext_7(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_ExternalSetNegResponse/7:
  Jump functions of caller  Dcm_Dsp_ExtractSubServiceHandler/6:
  Jump functions of caller  Dcm_Dsp_TesterPresent_SvcCont/5:
    indirect simple callsite, calling param -1, offset 0, for stmt ServiceProcessStatus_8 = Dcm_TesterPresent_SubServiceHandler.0_1 (OpStatus_5(D), pMsgContext_6(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_TesterPresent_SvcStart/4:
    callsite  Dcm_Dsp_TesterPresent_SvcStart/4 -> Dcm_Dsp_TesterPresent_SvcCont/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/3:
  Jump functions of caller  Dcm_Dsp_TesterPresent_SvcH/2:
    callsite  Dcm_Dsp_TesterPresent_SvcH/2 -> Dcm_Dsp_TesterPresent_SvcCont/5 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_TesterPresent_SvcH/2 -> Dcm_Dsp_TesterPresent_SvcCont/5 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_TesterPresent_SvcH/2 -> Dcm_Dsp_TesterPresent_SvcStart/4 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_TesterPresent_SvcH for cloning; -fipa-cp-clone disabled.

overall_size: 68, max_new_size: 11001
 - context independent values, size: 13, time_benefit: 1.000000
 - context independent values, size: 11, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_TesterPresent_SvcCont/5:
    param [0]: 0 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x2, mask = 0x3
         Dcm_OpStatusType [0, 2]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_TesterPresent_SvcStart/4:
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
  Node: Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/3:
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
  Node: Dcm_Dsp_TesterPresent_SvcH/2:
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

 - Creating a specialized node of Dcm_Dsp_TesterPresent_SvcStart/4 for all known contexts.
    replacing param #0 OpStatus with const 0
Propagated bits info for function Dcm_Dsp_TesterPresent_SvcStart.constprop/8:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dcm_Dsp_TesterPresent_SvcCont/5:
 param 0: value = 0x2, mask = 0x3
Propagated bits info for function Dcm_Dsp_TesterPresent_SvcStart/4:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Dcm_Dsp_TesterPresent_SvcStart/4
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_TesterPresent_SvcStart.constprop.0/8 (Dcm_Dsp_TesterPresent_SvcStart.constprop) @06cc8d20
  Type: function definition analyzed
  Visibility:
  References: Dcm_TesterPresent_SubServiceHandler/1 (write)
  Referring: 
  Clone of Dcm_Dsp_TesterPresent_SvcStart/4
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsp_TesterPresent_SvcH/2 (214748364 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsp_ExtractSubServiceHandler/6 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_TesterPresent_SvcCont/5 (1073741824 (estimated locally),1.00 per call) 
Dcm_ExternalSetNegResponse/7 (Dcm_ExternalSetNegResponse) @06c19b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/3 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_ExtractSubServiceHandler/6 (Dcm_Dsp_ExtractSubServiceHandler) @06c198c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_TesterPresent_SvcStart.constprop/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_TesterPresent_SvcCont/5 (Dcm_Dsp_TesterPresent_SvcCont) @06c19620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_TesterPresent_SubServiceHandler/1 (read)Dcm_TesterPresent_SubFunctionHandlerIsInternal/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_TesterPresent_SvcStart.constprop/8 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_TesterPresent_SvcH/2 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_TesterPresent_SvcH/2 (214748364 (estimated locally),0.20 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_TesterPresent_SvcStart/4 (Dcm_Dsp_TesterPresent_SvcStart) @06c19460
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/3 (Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH) @06c192a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TesterPresent_SubFunctionHandlerIsInternal/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/7 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsp_TesterPresent_SvcH/2 (Dcm_Dsp_TesterPresent_SvcH) @06c190e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TesterPresent_SubFunctionHandlerIsInternal/0 (write)Dcm_TesterPresent_SubFunctionHandlerIsInternal/0 (write)Dcm_TesterPresent_SubServiceHandler/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_TesterPresent_SvcCont/5 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_TesterPresent_SvcCont/5 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_TesterPresent_SvcStart.constprop/8 (214748364 (estimated locally),0.20 per call) 
Dcm_TesterPresent_SubServiceHandler/1 (Dcm_TesterPresent_SubServiceHandler) @06c90900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_TesterPresent_SvcCont/5 (read)Dcm_Dsp_TesterPresent_SvcStart.constprop.0/8 (write)Dcm_Dsp_TesterPresent_SvcH/2 (write)
  Availability: available
  Varpool flags:
Dcm_TesterPresent_SubFunctionHandlerIsInternal/0 (Dcm_TesterPresent_SubFunctionHandlerIsInternal) @06c908b8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_TesterPresent_SvcCont/5 (read)Dcm_Dsp_TesterPresent_SvcH/2 (write)Dcm_Dsp_TesterPresent_SvcH/2 (write)Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/3 (write)
  Availability: available
  Varpool flags: initialized

;; Function Dcm_Dsp_TesterPresent_SvcCont (Dcm_Dsp_TesterPresent_SvcCont, funcdef_no=3, decl_uid=6571, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_Dsp_TesterPresent_SvcCont/5
Adjusting mask for param 0 to 0x3
Setting value range of param 0 [0, 2]
Dcm_Dsp_TesterPresent_SvcCont (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;
  Std_ReturnType (*<T686>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) Dcm_TesterPresent_SubServiceHandler.0_1;
  unsigned char Dcm_TesterPresent_SubFunctionHandlerIsInternal.1_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_TesterPresent_SubServiceHandler.0_1 = Dcm_TesterPresent_SubServiceHandler;
  ServiceProcessStatus_8 = Dcm_TesterPresent_SubServiceHandler.0_1 (OpStatus_5(D), pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_8
  # DEBUG BEGIN_STMT
  Dcm_TesterPresent_SubFunctionHandlerIsInternal.1_2 = Dcm_TesterPresent_SubFunctionHandlerIsInternal;
  if (Dcm_TesterPresent_SubFunctionHandlerIsInternal.1_2 == 0)
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



;; Function Dcm_Dsp_TesterPresent_SvcH (Dcm_Dsp_TesterPresent_SvcH, funcdef_no=0, decl_uid=6560, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_Dsp_TesterPresent_SvcH/2
Dcm_Dsp_TesterPresent_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_3(D)) <default: <L8> [20.00%], case 0: <L0> [20.00%], case 1: <L1> [20.00%], case 2: <L2> [20.00%], case 5 ... 6: <L3> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_14 = Dcm_Dsp_TesterPresent_SvcStart (0, pMsgContext_7(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_14
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_12 = Dcm_Dsp_TesterPresent_SvcCont (1, pMsgContext_7(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_12
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_9 = Dcm_Dsp_TesterPresent_SvcCont (2, pMsgContext_7(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_9
  # DEBUG BEGIN_STMT
  Dcm_TesterPresent_SubFunctionHandlerIsInternal = 0;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  Dcm_TesterPresent_SubFunctionHandlerIsInternal = 0;
  # DEBUG BEGIN_STMT
  Dcm_TesterPresent_SubServiceHandler = 0B;
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # ServiceProcessStatus_1 = PHI <ServiceProcessStatus_14(3), ServiceProcessStatus_12(4), ServiceProcessStatus_9(5), 26(6), 26(2)>
<L8>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_1;

}



;; Function Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH (Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH, funcdef_no=1, decl_uid=6563, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/3
Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  long unsigned int _1;
  Dcm_MsgItemType * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_TesterPresent_SubFunctionHandlerIsInternal = 1;
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_6(D)->reqDataLen;
  if (_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_6(D), 19);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_6(D)->resData;
  *_2 = 0;
  # DEBUG BEGIN_STMT
  pMsgContext_6(D)->resDataLen = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 26;

}


