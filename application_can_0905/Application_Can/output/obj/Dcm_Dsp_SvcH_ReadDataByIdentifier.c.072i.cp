
IPA constant propagation start:
Determining dynamic type for call: ServiceProcessStatus_8 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue (OpStatus_4(D), pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_8 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue (OpStatus_4(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_10 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue (OpStatus_4(D), pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_10 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue (OpStatus_4(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_12 = Dcm_Dsp_ReadDataByIdentifier_SvcStart (pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_12 = Dcm_Dsp_ReadDataByIdentifier_SvcStart (pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_3 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0 (pMsgContext_7(D));
  Starting walk at: serviceProcessStatus_3 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0 (pMsgContext_7(D));
  instance pointer: pMsgContext_7(D)  Outer instance pointer: pMsgContext_7(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:result_10 = Dcm_Dsp_Context_Execute (&Dcm_ReadDidListContext.BaseContext);
Determining dynamic type for call: serviceProcessStatus_15 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue (0, pMsgContext_11(D));
  Starting walk at: serviceProcessStatus_15 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue (0, pMsgContext_11(D));
  instance pointer: pMsgContext_11(D)  Outer instance pointer: pMsgContext_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_Dsp_Context_Init (&Dcm_ReadDidListContext.BaseContext, &Dcm_ReadDidListContext, &Dcm_ReadDidListStateConfig);
Determining dynamic type for call: ServiceProcessStatus_5 = Dcm_Dsp_ReadDataByIdentifier_ServiceExecution (OpStatus_2(D), pMsgContext_3(D));
  Starting walk at: ServiceProcessStatus_5 = Dcm_Dsp_ReadDataByIdentifier_ServiceExecution (OpStatus_2(D), pMsgContext_3(D));
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19:
  Jump functions of caller  Dcm_Dsp_Context_Cancel/18:
  Jump functions of caller  Dcm_Dsp_Context_Execute/17:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_Init/16:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_Execute/15:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_Cancel/14:
  Jump functions of caller  Dcm_Dsp_Context_Init/13:
  Jump functions of caller  Dcm_ExternalSetNegResponse/12:
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11:
    callsite  Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 -> Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 -> Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 -> Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10:
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect/9:
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5:
    callsite  Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 -> Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_SvcStart/4:
    callsite  Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 -> Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_SvcH/3:
    callsite  Dcm_Dsp_ReadDataByIdentifier_SvcH/3 -> Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_Init/2:

 Propagating constants:

Not considering Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ReadDataByIdentifier_SvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ReadDataByIdentifier_Init for cloning; -fipa-cp-clone disabled.

overall_size: 179, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11:
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
  Node: Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5:
    param [0]: VARIABLE
               0 [loc_time: 1, loc_size: 16, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_ReadDataByIdentifier_SvcStart/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_ReadDataByIdentifier_SvcH/3:
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
  Node: Dcm_Dsp_ReadDataByIdentifier_Init/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19 (Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0) @06d6d380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_ReadDidListContext/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (141261474 (estimated locally),0.13 per call) 
  Calls: Dcm_ExternalSetNegResponse/12 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_Context_Cancel/18 (Dcm_Dsp_Context_Cancel) @06d75d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (214748364 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsp_Context_Execute/17 (Dcm_Dsp_Context_Execute) @06d75b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidServices_ReadDid_Init/16 (Dcm_Dsp_DidServices_ReadDid_Init) @06d758c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect/9 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_DidServices_ReadDid_Execute/15 (Dcm_Dsp_DidServices_ReadDid_Execute) @06d75700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsp_DidServices_ReadDid_Cancel/14 (Dcm_Dsp_DidServices_ReadDid_Cancel) @06d75620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_Dsp_Context_Init/13 (Dcm_Dsp_Context_Init) @06d75460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (332030740 (estimated locally),0.31 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/12 (Dcm_ExternalSetNegResponse) @06d752a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (257303197 (estimated locally),0.24 per call) Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (484407887 (estimated locally),0.45 per call) Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (Dcm_Dsp_ReadDataByIdentifier_ServiceExecution) @06d6de00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ReadDidListContext/1 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_SvcH/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_Context_Cancel/18 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (214748364 (estimated locally),0.20 per call) 
Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10 (Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead) @06d6dc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dcm_ReadDidListContext/1 (read)Dcm_ReadDidListContext/1 (read)
  Referring: Dcm_ReadDidListStateConfig/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_ReadDid_Execute/15 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_DidServices_ReadDid_Cancel/14 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect/9 (Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect) @06d6d700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadDidListStateConfig/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_ReadDid_Init/16 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (Dcm_Dsp_ReadDataByIdentifier_SvcContinue) @06d6d000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (addr)Dcm_ReadDidListContext/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (332030740 (estimated locally),0.31 per call) 
  Calls: Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19 (141261474 (estimated locally),0.13 per call) Dcm_Dsp_Context_Execute/17 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (Dcm_Dsp_ReadDataByIdentifier_SvcStart) @06d43c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ReadDidListContext/1 (addr)Dcm_ReadDidListContext/1 (addr)Dcm_ReadDidListStateConfig/0 (addr)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)Dcm_ReadDidListContext/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (214748364 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (332030740 (estimated locally),0.31 per call) Dcm_Dsp_Context_Init/13 (332030740 (estimated locally),0.31 per call) Dcm_ExternalSetNegResponse/12 (257303197 (estimated locally),0.24 per call) Dcm_ExternalSetNegResponse/12 (484407887 (estimated locally),0.45 per call) 
Dcm_Dsp_ReadDataByIdentifier_SvcH/3 (Dcm_Dsp_ReadDataByIdentifier_SvcH) @06d43a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ReadDataByIdentifier_Init/2 (Dcm_Dsp_ReadDataByIdentifier_Init) @06d438c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_ReadDidListContext/1 (Dcm_ReadDidListContext) @06ccaf30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (read)Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10 (read)Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10 (read)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0/19 (read)Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (write)Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5 (addr)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (addr)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (addr)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (write)Dcm_Dsp_ReadDataByIdentifier_ServiceExecution/11 (addr)
  Availability: available
  Varpool flags:
Dcm_ReadDidListStateConfig/0 (Dcm_ReadDidListStateConfig) @06ccaee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect/9 (addr)Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10 (addr)
  Referring: Dcm_Dsp_ReadDataByIdentifier_SvcStart/4 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead (Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead, funcdef_no=8, decl_uid=7351, cgraph_uid=9, symbol_order=10)

Modification phase of node Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead/10
Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidRead (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  struct Dcm_ReadDidContextType * ReadDidContextPtr;
  void * _1;
  unsigned char _2;
  void * _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  struct Dcm_DspMsgBufferCfgType * _8;
  long unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _13;
  void * _14;
  short unsigned int _15;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_20(D)->SpecialPtr;
  ReadDidContextPtr_21 = &MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.ReadDidContext;
  # DEBUG ReadDidContextPtr => ReadDidContextPtr_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = context_20(D)->opstatus;
  if (_2 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  result_32 = Dcm_Dsp_DidServices_ReadDid_Cancel (ReadDidContextPtr_21);
  # DEBUG result => result_32
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  result_23 = Dcm_Dsp_DidServices_ReadDid_Execute (ReadDidContextPtr_21);
  # DEBUG result => result_23
  # DEBUG BEGIN_STMT
  if (result_23 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _3 = context_20(D)->SpecialPtr;
  _4 = MEM[(struct Dcm_ReadDidListContextType *)_3].ReadDidListContext.DidsRead;
  _5 = _4 + 1;
  MEM[(struct Dcm_ReadDidListContextType *)_3].ReadDidListContext.DidsRead = _5;
  # DEBUG BEGIN_STMT
  _6 = MEM[(struct Dcm_ReadDidListContextType *)_3].ReadDidListContext.DidIdx;
  _7 = _6 + 1;
  MEM[(struct Dcm_ReadDidListContextType *)_3].ReadDidListContext.DidIdx = _7;
  # DEBUG BEGIN_STMT
  _8 = MEM[(struct Dcm_ReadDidContextType *)_1 + 16B].ReadDidContext.DidBufferCfgPtr;
  _9 = _8->Occupied;
  MEM[(struct Dcm_ReadDidListContextType *)_3].ReadDidListContext.BufferCfg.Occupied = _9;
  # DEBUG BEGIN_STMT
  context_20(D)->next_state = 0;
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (result_23 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 7> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG ForceStopProcessing => 0
  # DEBUG BEGIN_STMT
  _10 = Dcm_ReadDidListContext.ReadDidListContext.ReadDidContext.ReadDidContext.ReadStaticDidContext.ReadStaticDidContext.ReadSingleStaticDidContext.ReadSingleStaticDidContext.ReadSignalContext.SignalReadContext.ConditionCheckFailed;
  if (_10 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 79512730]:
  _11 = Dcm_ReadDidListContext.ReadDidListContext.ReadDidContext.ReadDidContext.DidInfoContext.DidInfoContext.ModeRuleFailed;
  if (_11 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 52478402]:
  # DEBUG ForceStopProcessing => 0
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct Dcm_ReadDidContextType *)_1 + 16B].BaseContext.nrc;
  if (_12 != 49)
    goto <bb 10>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 10> [local count: 102631176]:
  # DEBUG ForceStopProcessing => NULL
  # DEBUG BEGIN_STMT
  _13 = MEM[(struct Dcm_ReadDidContextType *)_1 + 16B].BaseContext.nrc;
  context_20(D)->nrc = _13;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 17842657]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = context_20(D)->SpecialPtr;
  _15 = MEM[(struct Dcm_ReadDidListContextType *)_14].ReadDidListContext.DidIdx;
  _16 = _15 + 1;
  MEM[(struct Dcm_ReadDidListContextType *)_14].ReadDidListContext.DidIdx = _16;
  # DEBUG BEGIN_STMT
  context_20(D)->next_state = 0;

  <bb 12> [local count: 1073741824]:
  # result_17 = PHI <result_32(3), 0(5), result_23(6), 1(11), 1(10)>
  # DEBUG result => result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  context_20(D)->result = result_17;
  return;

}



;; Function Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect (Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect, funcdef_no=7, decl_uid=7349, cgraph_uid=8, symbol_order=9)

Modification phase of node Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect/9
Dcm_Dsp_ReadDataByIdentifier_ReadDidList_DidSelect (struct Dcm_Dsp_ContextBaseType * context)
{
  const uint16 Did;
  uint8 LowByte;
  uint8 HighByte;
  const uint16 DidPos;
  void * _1;
  short unsigned int _2;
  short unsigned int _3;
  uint8 * _4;
  sizetype _5;
  uint8 * _6;
  sizetype _7;
  uint8 * _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  struct Dcm_ReadDidContextType * _12;
  struct Dcm_DspMsgBufferCfgType * _13;
  short unsigned int _14;
  short unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_18(D)->SpecialPtr;
  _2 = MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.DidIdx;
  _3 = MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.DidCount;
  if (_2 < _3)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  DidPos_22 = _2 * 2;
  # DEBUG DidPos => DidPos_22
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.DidList;
  _5 = (sizetype) DidPos_22;
  _6 = _4 + _5;
  HighByte_23 = *_6;
  # DEBUG HighByte => HighByte_23
  # DEBUG BEGIN_STMT
  _7 = _5 + 1;
  _8 = _4 + _7;
  LowByte_24 = *_8;
  # DEBUG LowByte => LowByte_24
  # DEBUG BEGIN_STMT
  _9 = (short unsigned int) HighByte_23;
  _10 = _9 << 8;
  _11 = (short unsigned int) LowByte_24;
  Did_25 = _10 | _11;
  # DEBUG Did => Did_25
  # DEBUG BEGIN_STMT
  _12 = &MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.ReadDidContext;
  _13 = &MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.BufferCfg;
  _14 = MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.RxPduId;
  Dcm_Dsp_DidServices_ReadDid_Init (_12, Did_25, 0, 1, _13, 1, _14);
  # DEBUG BEGIN_STMT
  context_18(D)->next_state = 1;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _15 = MEM[(struct Dcm_ReadDidListContextType *)_1].ReadDidListContext.DidsRead;
  if (_15 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  context_18(D)->nrc = 49;
  # DEBUG BEGIN_STMT
  context_18(D)->result = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  context_18(D)->result = 0;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_ReadDataByIdentifier_SvcContinue (Dcm_Dsp_ReadDataByIdentifier_SvcContinue, funcdef_no=3, decl_uid=7335, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_Dsp_ReadDataByIdentifier_SvcContinue/5
Dcm_Dsp_ReadDataByIdentifier_SvcContinue (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType result;
  Std_ReturnType serviceProcessStatus;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_ReadDidListContext.BaseContext.opstatus = OpStatus_5(D);
  # DEBUG BEGIN_STMT
  # DEBUG ReadDidListContext => &Dcm_ReadDidListContext
  # DEBUG INLINE_ENTRY Dcm_Dsp_ReadDataByIdentifier_ReadDidList_Execute
  # DEBUG BEGIN_STMT
  result_10 = Dcm_Dsp_Context_Execute (&Dcm_ReadDidListContext.BaseContext);
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  # DEBUG ReadDidListContext => NULL
  # DEBUG result => NULL
  # DEBUG serviceProcessStatus => result_10
  # DEBUG BEGIN_STMT
  if (result_10 == 0)
    goto <bb 3>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG BufferCfg => &Dcm_ReadDidListContext.ReadDidListContext.BufferCfg
  # DEBUG BEGIN_STMT
  _1 = Dcm_ReadDidListContext.ReadDidListContext.BufferCfg.Occupied;
  pMsgContext_7(D)->resDataLen = _1;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  if (result_10 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 141261474]:
  # DEBUG D#2 => OpStatus_5(D)
  serviceProcessStatus_3 = Dcm_Dsp_ReadDataByIdentifier_SvcContinue.part.0 (pMsgContext_7(D));

  <bb 6> [local count: 1073741824]:
  # serviceProcessStatus_2 = PHI <26(3), result_10(4), serviceProcessStatus_3(5)>
  # DEBUG serviceProcessStatus => serviceProcessStatus_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_2;

}



;; Function Dcm_Dsp_ReadDataByIdentifier_Init (Dcm_Dsp_ReadDataByIdentifier_Init, funcdef_no=0, decl_uid=7249, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_Dsp_ReadDataByIdentifier_Init/2
Dcm_Dsp_ReadDataByIdentifier_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_ReadDataByIdentifier_SvcH (Dcm_Dsp_ReadDataByIdentifier_SvcH, funcdef_no=1, decl_uid=7252, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_Dsp_ReadDataByIdentifier_SvcH/3
Dcm_Dsp_ReadDataByIdentifier_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_5 = Dcm_Dsp_ReadDataByIdentifier_ServiceExecution (OpStatus_2(D), pMsgContext_3(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_5;

}


