
IPA constant propagation start:
Determining dynamic type for call: ServiceProcessStatus_9 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue (OpStatus_3(D), pMsgContext_7(D));
  Starting walk at: ServiceProcessStatus_9 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue (OpStatus_3(D), pMsgContext_7(D));
  instance pointer: pMsgContext_7(D)  Outer instance pointer: pMsgContext_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_11 = Dcm_Dsp_WriteDataByIdentifier_SvcStart (pMsgContext_7(D));
  Starting walk at: ServiceProcessStatus_11 = Dcm_Dsp_WriteDataByIdentifier_SvcStart (pMsgContext_7(D));
  instance pointer: pMsgContext_7(D)  Outer instance pointer: pMsgContext_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_6 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0 (pMsgContext_15(D));
  Starting walk at: serviceProcessStatus_6 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0 (pMsgContext_15(D));
  instance pointer: pMsgContext_15(D)  Outer instance pointer: pMsgContext_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:serviceProcessStatus_14 = Dcm_Dsp_DidServices_WriteDid_Execute (&Dcm_WriteDidContext);
Determining dynamic type for call: serviceProcessStatus_20 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue (0, pMsgContext_12(D));
  Starting walk at: serviceProcessStatus_20 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue (0, pMsgContext_12(D));
  instance pointer: pMsgContext_12(D)  Outer instance pointer: pMsgContext_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_Dsp_DidServices_WriteDid_Init (&Dcm_WriteDidContext, Did_17, _7, _8, instIdx_14);
  Function call may change dynamic type:instIdx_14 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_1, 1);
Determining dynamic type for call: ServiceProcessStatus_5 = Dcm_Dsp_WriteDataByIdentifier_ServiceExecution (OpStatus_2(D), pMsgContext_3(D));
  Starting walk at: ServiceProcessStatus_5 = Dcm_Dsp_WriteDataByIdentifier_ServiceExecution (OpStatus_2(D), pMsgContext_3(D));
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_Execute/10:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_Init/9:
  Jump functions of caller  Dcm_ExternalSetNegResponse/8:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/7:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_Cancel/6:
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5:
    callsite  Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 -> Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 -> Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4:
    callsite  Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 -> Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_SvcStart/3:
    callsite  Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 -> Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_SvcH/2:
    callsite  Dcm_Dsp_WriteDataByIdentifier_SvcH/2 -> Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_Init/1:

 Propagating constants:

Not considering Dcm_Dsp_WriteDataByIdentifier_SvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_WriteDataByIdentifier_Init for cloning; -fipa-cp-clone disabled.

overall_size: 92, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5:
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
  Node: Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4:
    param [0]: VARIABLE
               0 [loc_time: 1, loc_size: 23, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_WriteDataByIdentifier_SvcStart/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_WriteDataByIdentifier_SvcH/2:
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
  Node: Dcm_Dsp_WriteDataByIdentifier_Init/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11 (Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0) @06d6aa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_WriteDidContext/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (141261474 (estimated locally),0.13 per call) 
  Calls: Dcm_ExternalSetNegResponse/8 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_WriteDid_Execute/10 (Dcm_Dsp_DidServices_WriteDid_Execute) @06d637e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidServices_WriteDid_Init/9 (Dcm_Dsp_DidServices_WriteDid_Init) @06d63620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/8 (Dcm_ExternalSetNegResponse) @06d63540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (536870913 (estimated locally),0.50 per call) Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/7 (Dcm_Dsl_Supervisor_GetProcessingProtocolIndex) @06d63460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidServices_WriteDid_Cancel/6 (Dcm_Dsp_DidServices_WriteDid_Cancel) @06d632a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 (Dcm_Dsp_WriteDataByIdentifier_ServiceExecution) @06d1bc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_WriteDidContext/0 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_SvcH/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_DidServices_WriteDid_Cancel/6 (268435456 (estimated locally),0.25 per call) Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (268435456 (estimated locally),0.25 per call) Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (268435456 (estimated locally),0.25 per call) 
Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (Dcm_Dsp_WriteDataByIdentifier_SvcContinue) @06d43ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_WriteDidContext/0 (write)Dcm_WriteDidContext/0 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 (268435456 (estimated locally),0.25 per call) Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (536870913 (estimated locally),0.50 per call) 
  Calls: Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11 (141261474 (estimated locally),0.13 per call) Dcm_Dsp_DidServices_WriteDid_Execute/10 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (Dcm_Dsp_WriteDataByIdentifier_SvcStart) @06d43b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_WriteDidContext/0 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 (268435456 (estimated locally),0.25 per call) 
  Calls: Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (536870913 (estimated locally),0.50 per call) Dcm_Dsp_DidServices_WriteDid_Init/9 (536870913 (estimated locally),0.50 per call) Dcm_ExternalSetNegResponse/8 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/7 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_WriteDataByIdentifier_SvcH/2 (Dcm_Dsp_WriteDataByIdentifier_SvcH) @06d439a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_WriteDataByIdentifier_Init/1 (Dcm_Dsp_WriteDataByIdentifier_Init) @06d437e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_WriteDidContext/0 (Dcm_WriteDidContext) @06aafe10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (addr)Dcm_Dsp_WriteDataByIdentifier_SvcStart/3 (addr)Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0/11 (read)Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4 (write)Dcm_Dsp_WriteDataByIdentifier_ServiceExecution/5 (addr)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsp_WriteDataByIdentifier_SvcContinue (Dcm_Dsp_WriteDataByIdentifier_SvcContinue, funcdef_no=3, decl_uid=7321, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_Dsp_WriteDataByIdentifier_SvcContinue/4
Dcm_Dsp_WriteDataByIdentifier_SvcContinue (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType serviceProcessStatus;
  Dcm_MsgItemType * _1;
  Dcm_MsgItemType * _2;
  unsigned char _3;
  Dcm_MsgItemType * _4;
  Dcm_MsgItemType * _5;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_WriteDidContext.BaseContext.opstatus = OpStatus_11(D);
  # DEBUG BEGIN_STMT
  serviceProcessStatus_14 = Dcm_Dsp_DidServices_WriteDid_Execute (&Dcm_WriteDidContext);
  # DEBUG serviceProcessStatus => serviceProcessStatus_14
  # DEBUG BEGIN_STMT
  if (serviceProcessStatus_14 == 0)
    goto <bb 3>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_15(D)->reqData;
  _2 = pMsgContext_15(D)->resData;
  _3 = *_1;
  *_2 = _3;
  # DEBUG BEGIN_STMT
  _4 = pMsgContext_15(D)->reqData;
  _5 = pMsgContext_15(D)->resData;
  _7 = MEM[(Dcm_MsgItemType *)_4 + 1B];
  MEM[(Dcm_MsgItemType *)_5 + 1B] = _7;
  # DEBUG BEGIN_STMT
  pMsgContext_15(D)->resDataLen = 2;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  if (serviceProcessStatus_14 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 141261474]:
  # DEBUG D#1 => OpStatus_11(D)
  serviceProcessStatus_6 = Dcm_Dsp_WriteDataByIdentifier_SvcContinue.part.0 (pMsgContext_15(D));

  <bb 6> [local count: 1073741824]:
  # serviceProcessStatus_8 = PHI <26(3), serviceProcessStatus_14(4), serviceProcessStatus_6(5)>
  # DEBUG serviceProcessStatus => serviceProcessStatus_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_8;

}



;; Function Dcm_Dsp_WriteDataByIdentifier_Init (Dcm_Dsp_WriteDataByIdentifier_Init, funcdef_no=0, decl_uid=7249, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_Dsp_WriteDataByIdentifier_Init/1
Dcm_Dsp_WriteDataByIdentifier_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_WriteDataByIdentifier_SvcH (Dcm_Dsp_WriteDataByIdentifier_SvcH, funcdef_no=1, decl_uid=7252, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_Dsp_WriteDataByIdentifier_SvcH/2
Dcm_Dsp_WriteDataByIdentifier_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType ServiceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_5 = Dcm_Dsp_WriteDataByIdentifier_ServiceExecution (OpStatus_2(D), pMsgContext_3(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_5;

}


