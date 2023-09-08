
IPA constant propagation start:
Determining dynamic type for call: serviceProcessStatus_27 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_22(D), &Dcm_DspReqVehInfoContext);
  Starting walk at: serviceProcessStatus_27 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_22(D), &Dcm_DspReqVehInfoContext);
  instance pointer: &Dcm_DspReqVehInfoContext  Outer instance pointer: Dcm_DspReqVehInfoContext offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_44 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_22(D), &Dcm_DspReqVehInfoContext);
  Starting walk at: serviceProcessStatus_44 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_22(D), &Dcm_DspReqVehInfoContext);
  instance pointer: &Dcm_DspReqVehInfoContext  Outer instance pointer: Dcm_DspReqVehInfoContext offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:serviceProcessStatus_36 = Dcm_Dsp_VinServices_HelperInit (firstReqVehInfo_30, &Dcm_DspReqVehInfoContext, &Dcm_DspReqVehInfoBufferConfig);
Determining dynamic type for call: serviceProcessStatus_46 = Dcm_ReqVehInfoAvailability (pMsgContext_20(D));
  Starting walk at: serviceProcessStatus_46 = Dcm_ReqVehInfoAvailability (pMsgContext_20(D));
  instance pointer: pMsgContext_20(D)  Outer instance pointer: pMsgContext_20(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _11 = Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType (_10, &Dcm_DspReqVehInfoBufferConfig);
  Starting walk at: _11 = Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType (_10, &Dcm_DspReqVehInfoBufferConfig);
  instance pointer: &Dcm_DspReqVehInfoBufferConfig  Outer instance pointer: Dcm_DspReqVehInfoBufferConfig offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_11 = Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType (_10, &Dcm_DspReqVehInfoBufferConfig);
  Function call may change dynamic type:_1 = Dcm_OBDSupport_CheckRequestCombinedIds (reqData_25, reqDataLen_24);
Determining dynamic type for call: ServiceProcessStatus_8 = Dcm_Dsp_RequestVehicleInformation_ServiceExecution (OpStatus_5(D), pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_8 = Dcm_Dsp_RequestVehicleInformation_ServiceExecution (OpStatus_5(D), pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_13 = Dcm_Dsp_RequestVehicleInformation_ServiceExecution (0, pMsgContext_6(D));
  Starting walk at: ServiceProcessStatus_13 = Dcm_Dsp_RequestVehicleInformation_ServiceExecution (0, pMsgContext_6(D));
  instance pointer: pMsgContext_6(D)  Outer instance pointer: pMsgContext_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:VinLockStatus_10 = Dcm_Dsp_VinServices_LockService ();
Determining dynamic type for call: InterfaceReturnValue_38 = pGetInfotypeValueData_36 (OperationStatus_24, _8);
  Starting walk at: InterfaceReturnValue_38 = pGetInfotypeValueData_36 (OperationStatus_24, _8);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:InterfaceReturnValue_38 = pGetInfotypeValueData_36 (OperationStatus_24, _8);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 96, 2);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_OBDSupport_CheckRequestCombinedIds/18:
  Jump functions of caller  Dcm_Dsp_VinServices_UnlockService/17:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperCancel/16:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperInit/15:
  Jump functions of caller  Dcm_Dsp_VinServices_LockService/14:
  Jump functions of caller  Det_ASR40_ReportError/13:
  Jump functions of caller  Dcm_OBDSupport_UpdateAvailableInfoWithID/11:
  Jump functions of caller  TS_MemSet32/8:
  Jump functions of caller  Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7:
    callsite  Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 -> Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: &Dcm_DspReqVehInfoContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 -> Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: &Dcm_DspReqVehInfoContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 -> Dcm_ReqVehInfoAvailability/6 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_ReqVehInfoAvailability/6:
    callsite  Dcm_ReqVehInfoAvailability/6 -> Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: &Dcm_DspReqVehInfoBufferConfig
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DspInternal_RequestVehicleInformation_SvcH/5:
    callsite  Dcm_DspInternal_RequestVehicleInformation_SvcH/5 -> Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_DspInternal_RequestVehicleInformation_SvcH/5 -> Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4:
    indirect simple callsite, calling param -1, offset 0, for stmt InterfaceReturnValue_38 = pGetInfotypeValueData_36 (OperationStatus_24, _8);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3:

 Propagating constants:

Not considering Dcm_DspInternal_RequestVehicleInformation_SvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType for cloning; -fipa-cp-clone disabled.
Not considering Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType for cloning; -fipa-cp-clone disabled.

overall_size: 233, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7:
    param [0]: VARIABLE
               0 [loc_time: 5, loc_size: 62, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_ReqVehInfoAvailability/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DspInternal_RequestVehicleInformation_SvcH/5:
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
  Node: Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4:
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
  Node: Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3:
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


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_OBDSupport_CheckRequestCombinedIds/18 (Dcm_OBDSupport_CheckRequestCombinedIds) @06d0fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_ReqVehInfoAvailability/6 (306875412 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_VinServices_UnlockService/17 (Dcm_Dsp_VinServices_UnlockService) @06d0f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (235642185 (estimated locally),0.22 per call) Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (96912734 (estimated locally),0.09 per call) Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (214748365 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsp_VinServices_HelperCancel/16 (Dcm_Dsp_VinServices_HelperCancel) @06d0f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (214748365 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsp_VinServices_HelperInit/15 (Dcm_Dsp_VinServices_HelperInit) @06d0f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (29955389 (estimated locally),0.03 per call) 
  Calls: 
Dcm_Dsp_VinServices_LockService/14 (Dcm_Dsp_VinServices_LockService) @06d0f2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DspInternal_RequestVehicleInformation_SvcH/5 (140285624 (estimated locally),0.13 per call) 
  Calls: 
Det_ASR40_ReportError/13 (Det_ASR40_ReportError) @06d0f0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (253671506 (estimated locally),0.91 per call) 
  Calls: 
Dcm_DspVehInfoData/12 (Dcm_DspVehInfoData) @06d0e5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (read)Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_OBDSupport_UpdateAvailableInfoWithID/11 (Dcm_OBDSupport_UpdateAvailableInfoWithID) @06ae4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (233896052 (estimated locally),0.22 per call) 
  Calls: 
Dcm_DspVehInfo/10 (Dcm_DspVehInfo) @06d0e0d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (read)Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (read)Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (read)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_DspVehInfoUsed/9 (Dcm_DspVehInfoUsed) @06d0e090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (read)
  Availability: not_available
  Varpool flags: read-only
TS_MemSet32/8 (TS_MemSet32) @06ae4e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (Dcm_Dsp_RequestVehicleInformation_ServiceExecution) @06ae4c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DspReqVehInfoContext/0 (write)Dcm_DspReqVehInfoBufferConfig/1 (write)Dcm_DspReqVehInfoBufferConfig/1 (write)Dcm_DspReqVehInfoBufferConfig/1 (write)Dcm_DspReqVehInfoContext/0 (addr)Dcm_DspReqVehInfoBufferConfig/1 (addr)Dcm_DspReqVehInfoContext/0 (read)Dcm_DspReqVehInfoContext/0 (read)Dcm_DspVehInfo/10 (read)Dcm_DspReqVehInfoContext/0 (addr)Dcm_DspReqVehInfoContext/0 (write)Dcm_DspReqVehInfoContext/0 (write)Dcm_DspReqVehInfoContext/0 (addr)Dcm_DspReqVehInfoContext/0 (addr)Dcm_RequestVehicleInformation_LockStatus/2 (write)Dcm_DspReqVehInfoBufferConfig/1 (read)Dcm_RequestVehicleInformation_LockStatus/2 (write)Dcm_RequestVehicleInformation_LockStatus/2 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DspInternal_RequestVehicleInformation_SvcH/5 (357878150 (estimated locally),0.33 per call) Dcm_DspInternal_RequestVehicleInformation_SvcH/5 (89740714 (estimated locally),0.08 per call) 
  Calls: Dcm_Dsp_VinServices_UnlockService/17 (235642185 (estimated locally),0.22 per call) Dcm_Dsp_VinServices_UnlockService/17 (96912734 (estimated locally),0.09 per call) Dcm_Dsp_VinServices_UnlockService/17 (214748365 (estimated locally),0.20 per call) Dcm_Dsp_VinServices_HelperCancel/16 (214748365 (estimated locally),0.20 per call) Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (214748365 (estimated locally),0.20 per call) Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (9885278 (estimated locally),0.01 per call) Dcm_Dsp_VinServices_HelperInit/15 (29955389 (estimated locally),0.03 per call) Dcm_ReqVehInfoAvailability/6 (46063524 (estimated locally),0.04 per call) 
Dcm_ReqVehInfoAvailability/6 (Dcm_ReqVehInfoAvailability) @06ae49a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DspReqVehInfoBufferConfig/1 (read)Dcm_DspReqVehInfoBufferConfig/1 (read)Dcm_DspReqVehInfoBufferConfig/1 (read)Dcm_DspReqVehInfoBufferConfig/1 (write)Dcm_DspReqVehInfoBufferConfig/1 (addr)Dcm_DspReqVehInfoBufferConfig/1 (read)Dcm_DspReqVehInfoBufferConfig/1 (write)Dcm_DspReqVehInfoBufferConfig/1 (read)Dcm_DspReqVehInfoContext/0 (write)
  Referring: 
  Availability: local
  Function flags: count:929925492 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (46063524 (estimated locally),0.04 per call) 
  Calls: Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (920304119 (estimated locally),0.99 per call) Dcm_OBDSupport_CheckRequestCombinedIds/18 (306875412 (estimated locally),0.33 per call) 
Dcm_DspInternal_RequestVehicleInformation_SvcH/5 (Dcm_DspInternal_RequestVehicleInformation_SvcH) @06ae47e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RequestVehicleInformation_LockStatus/2 (read)Dcm_RequestVehicleInformation_LockStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (89740714 (estimated locally),0.08 per call) Dcm_Dsp_VinServices_LockService/14 (140285624 (estimated locally),0.13 per call) 
Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4 (Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType) @06ae4620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DspVehInfo/10 (read)Dcm_DspVehInfoData/12 (read)Dcm_DspVehInfoData/12 (read)Dcm_DspVehInfo/10 (read)
  Referring: 
  Availability: available
  Function flags: count:280154957 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (214748365 (estimated locally),0.20 per call) Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (9885278 (estimated locally),0.01 per call) 
  Calls: Det_ASR40_ReportError/13 (253671506 (estimated locally),0.91 per call) 
   Indirect call(1014686025 (estimated locally),3.62 per call) 
Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType) @06ae4380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DspVehInfoUsed/9 (read)Dcm_DspVehInfo/10 (read)Dcm_DspReqVehInfoContext/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_ReqVehInfoAvailability/6 (920304119 (estimated locally),0.99 per call) 
  Calls: Dcm_OBDSupport_UpdateAvailableInfoWithID/11 (233896052 (estimated locally),0.22 per call) TS_MemSet32/8 (354334802 (estimated locally),0.33 per call) 
Dcm_RequestVehicleInformation_LockStatus/2 (Dcm_RequestVehicleInformation_LockStatus) @06cd29d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_DspInternal_RequestVehicleInformation_SvcH/5 (read)Dcm_DspInternal_RequestVehicleInformation_SvcH/5 (write)
  Availability: available
  Varpool flags: initialized
Dcm_DspReqVehInfoBufferConfig/1 (Dcm_DspReqVehInfoBufferConfig) @06cd2990
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_ReqVehInfoAvailability/6 (write)Dcm_ReqVehInfoAvailability/6 (addr)Dcm_ReqVehInfoAvailability/6 (read)Dcm_ReqVehInfoAvailability/6 (write)Dcm_ReqVehInfoAvailability/6 (read)Dcm_ReqVehInfoAvailability/6 (read)Dcm_ReqVehInfoAvailability/6 (read)Dcm_ReqVehInfoAvailability/6 (read)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (addr)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (read)
  Availability: available
  Varpool flags:
Dcm_DspReqVehInfoContext/0 (Dcm_DspReqVehInfoContext) @06cd2948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_ReqVehInfoAvailability/6 (write)Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (addr)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (read)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (read)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (addr)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (write)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (addr)Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7 (addr)
  Availability: available
  Varpool flags:

;; Function Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType (Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType, funcdef_no=0, decl_uid=6652, cgraph_uid=1, symbol_order=3)

Modification phase of node Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/3
Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType (Dcm_DspVehInfoInfoTypeType VehInfoInfoType, struct Dcm_DspMsgBufferCfgType * svcBufferContext)
{
  const uint8 currentVehInfoInfoType;
  uint8_least vehInfoIndex;
  Std_ReturnType retVal;
  long unsigned int _1;
  long unsigned int _2;
  unsigned int _4;
  uint8 * _5;
  uint8 * _6;
  unsigned char _7;
  long unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  uint8 * _12;
  uint8 * _13;
  unsigned char _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _23;
  long unsigned int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  _1 = svcBufferContext_25(D)->Occupied;
  # DEBUG Occupied => (const uint16) _1
  # DEBUG BEGIN_STMT
  _2 = svcBufferContext_25(D)->Size;
  # DEBUG Size => (const uint16) _2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _23 = _2 & 65535;
  _27 = _1 & 65535;
  _4 = _27 + 4;
  if (_4 <= _23)
    goto <bb 3>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = svcBufferContext_25(D)->BufferPtr;
  _6 = _5 + _27;
  TS_MemSet32 (_6, 0, 4);
  # DEBUG BEGIN_STMT
  # DEBUG vehInfoIndex => 0
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 708775916]:
  # DEBUG BEGIN_STMT
  _7 = Dcm_DspVehInfoUsed[0];
  _8 = vehInfoIndex_19;
  _9 = 1 << _8;
  _10 = (unsigned char) _9;
  _11 = _7 & _10;
  if (_11 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 233896052]:
  # DEBUG BEGIN_STMT
  currentVehInfoInfoType_28 = Dcm_DspVehInfo[vehInfoIndex_19].VehInfoInfoType;
  # DEBUG currentVehInfoInfoType => currentVehInfoInfoType_28
  # DEBUG BEGIN_STMT
  _12 = svcBufferContext_25(D)->BufferPtr;
  _13 = _12 + _27;
  _14 = Dcm_OBDSupport_UpdateAvailableInfoWithID (currentVehInfoInfoType_28, VehInfoInfoType_29(D), _13);
  if (_14 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 116948026]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 7> [local count: 708775916]:
  # retVal_17 = PHI <retVal_18(4), retVal_18(5), 0(6)>
  # DEBUG retVal => retVal_17
  # DEBUG BEGIN_STMT
  vehInfoIndex_31 = vehInfoIndex_19 + 1;
  # DEBUG vehInfoIndex => vehInfoIndex_31

  <bb 8> [local count: 1063110718]:
  # retVal_18 = PHI <1(3), retVal_17(7)>
  # vehInfoIndex_19 = PHI <0(3), vehInfoIndex_31(7)>
  # DEBUG vehInfoIndex => vehInfoIndex_19
  # DEBUG retVal => retVal_18
  # DEBUG BEGIN_STMT
  if (vehInfoIndex_19 != 2)
    goto <bb 4>; [66.67%]
  else
    goto <bb 9>; [33.33%]

  <bb 9> [local count: 354334802]:
  # retVal_3 = PHI <retVal_18(8)>
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  if (retVal_3 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _15 = svcBufferContext_25(D)->Occupied;
  _16 = _15 + 4;
  svcBufferContext_25(D)->Occupied = _16;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 896574424]:
  # retVal_34 = PHI <retVal_3(9), 1(2)>
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  Dcm_DspReqVehInfoContext.nrc = 49;

  <bb 12> [local count: 1073741824]:
  # retVal_35 = PHI <0(10), retVal_34(11)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_35;

}



;; Function Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType, funcdef_no=1, decl_uid=6655, cgraph_uid=2, symbol_order=4)

Modification phase of node Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/4
Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (Dcm_OpStatusType OpStatus, struct Dcm_DspReqVehInfoContextType * svcContext)
{
  Std_ReturnType (*Dcm_GetInfotypeValueDataFunctionPointerType) (Dcm_OpStatusType, uint8 *) pGetInfotypeValueData;
  Dcm_OpStatusType OperationStatus;
  uint32 BufferOccupied;
  uint8 * const pBuffer;
  uint8_least VehInfoDataRelIndex;
  const uint8 VehInfoIdx;
  Std_ReturnType InterfaceReturnValue;
  int _1;
  struct Dcm_DspMsgBufferCfgType * _2;
  unsigned char _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  uint8 * _8;
  unsigned char _9;
  long unsigned int _10;
  unsigned char _11;
  long unsigned int _12;
  unsigned char _13;
  struct Dcm_DspMsgBufferCfgType * _14;

  <bb 2> [local count: 280154957]:
  # DEBUG BEGIN_STMT
  # DEBUG InterfaceReturnValue => 1
  # DEBUG BEGIN_STMT
  VehInfoIdx_31 = svcContext_30(D)->currentVehInfoIdx;
  # DEBUG VehInfoIdx => VehInfoIdx_31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (VehInfoIdx_31 <= 1)
    goto <bb 3>; [41.00%]
  else
    goto <bb 12>; [59.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _1 = (int) VehInfoIdx_31;
  # DEBUG D#2 => &Dcm_DspVehInfo[_1]
  # DEBUG pVehInfo => D#2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = svcContext_30(D)->BufferCfgPtr;
  pBuffer_32 = _2->BufferPtr;
  # DEBUG pBuffer => pBuffer_32
  # DEBUG BEGIN_STMT
  BufferOccupied_33 = _2->Occupied;
  # DEBUG BufferOccupied => BufferOccupied_33
  # DEBUG BEGIN_STMT
  # DEBUG OperationStatus => OpStatus_34(D)
  # DEBUG BEGIN_STMT
  _4 = svcContext_30(D)->currentVehInfoDataIdx;
  VehInfoDataRelIndex_35 = (uint8_least) _4;
  # DEBUG VehInfoDataRelIndex => VehInfoDataRelIndex_35
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Dcm_DspVehInfoType *)&Dcm_DspVehInfo][_1].StartIndexOfVehInfoData;
  _6 = (long unsigned int) _5;
  _7 = _6 + VehInfoDataRelIndex_19;
  # DEBUG D#3 => &Dcm_DspVehInfoData[_7]
  # DEBUG pVehInfoData => D#3
  # DEBUG BEGIN_STMT
  pGetInfotypeValueData_36 = MEM[(const struct Dcm_DspVehInfoDataType *)&Dcm_DspVehInfoData][_7].GetInfotypeValueDataFunctionPointer;
  # DEBUG pGetInfotypeValueData => pGetInfotypeValueData_36
  # DEBUG BEGIN_STMT
  _8 = pBuffer_32 + BufferOccupied_21;
  InterfaceReturnValue_38 = pGetInfotypeValueData_36 (OperationStatus_24, _8);
  # DEBUG InterfaceReturnValue => InterfaceReturnValue_38
  # DEBUG BEGIN_STMT
  switch (InterfaceReturnValue_38) <default: <L5> [25.00%], case 0: <L2> [25.00%], case 1: <L3> [25.00%], case 10: <L12> [25.00%]>

  <bb 5> [local count: 253671506]:
<L2>:
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct Dcm_DspVehInfoDataType *)&Dcm_DspVehInfoData][_7].VehInfoDataSize;
  _10 = (long unsigned int) _9;
  BufferOccupied_40 = _10 + BufferOccupied_21;
  # DEBUG BufferOccupied => BufferOccupied_40
  # DEBUG BEGIN_STMT
  # DEBUG InterfaceReturnValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG OperationStatus => 0
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 253671506]:
<L3>:
  # DEBUG BEGIN_STMT
  svcContext_30(D)->nrc = 34;
  # DEBUG BEGIN_STMT
  # DEBUG InterfaceReturnValue => 1
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 253671506]:
<L5>:
  # DEBUG BEGIN_STMT
  svcContext_30(D)->nrc = 34;
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 96, 2);
  # DEBUG BEGIN_STMT
  # DEBUG InterfaceReturnValue => 1
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1014686026]:
  # InterfaceReturnValue_15 = PHI <0(5), 1(6), InterfaceReturnValue_38(4), 1(7)>
  # BufferOccupied_20 = PHI <BufferOccupied_40(5), BufferOccupied_21(6), BufferOccupied_21(4), BufferOccupied_21(7)>
  # OperationStatus_23 = PHI <0(5), OperationStatus_24(6), OperationStatus_24(4), OperationStatus_24(7)>
<L12>:
  # DEBUG OperationStatus => OperationStatus_23
  # DEBUG BufferOccupied => BufferOccupied_20
  # DEBUG InterfaceReturnValue => InterfaceReturnValue_15
  # DEBUG BEGIN_STMT
  if (InterfaceReturnValue_15 != 0)
    goto <bb 11>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878295]:
  # DEBUG BEGIN_STMT
  VehInfoDataRelIndex_43 = VehInfoDataRelIndex_19 + 1;
  # DEBUG VehInfoDataRelIndex => VehInfoDataRelIndex_43

  <bb 10> [local count: 1073741824]:
  # InterfaceReturnValue_16 = PHI <1(3), 0(9)>
  # VehInfoDataRelIndex_19 = PHI <VehInfoDataRelIndex_35(3), VehInfoDataRelIndex_43(9)>
  # BufferOccupied_21 = PHI <BufferOccupied_33(3), BufferOccupied_20(9)>
  # OperationStatus_24 = PHI <OpStatus_34(D)(3), OperationStatus_23(9)>
  # DEBUG OperationStatus => OperationStatus_24
  # DEBUG BufferOccupied => BufferOccupied_21
  # DEBUG VehInfoDataRelIndex => VehInfoDataRelIndex_19
  # DEBUG InterfaceReturnValue => InterfaceReturnValue_16
  # DEBUG BEGIN_STMT
  _11 = MEM[(const struct Dcm_DspVehInfoType *)&Dcm_DspVehInfo][_1].NumOfVehInfoData;
  _12 = (long unsigned int) _11;
  if (_12 > VehInfoDataRelIndex_19)
    goto <bb 4>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 11> [local count: 114863532]:
  # InterfaceReturnValue_17 = PHI <InterfaceReturnValue_15(8), InterfaceReturnValue_16(10)>
  # BufferOccupied_22 = PHI <BufferOccupied_20(8), BufferOccupied_21(10)>
  # VehInfoDataRelIndex_3 = PHI <VehInfoDataRelIndex_19(8), VehInfoDataRelIndex_19(10)>
  # DEBUG BufferOccupied => BufferOccupied_22
  # DEBUG InterfaceReturnValue => InterfaceReturnValue_17
  # DEBUG BEGIN_STMT
  _13 = (unsigned char) VehInfoDataRelIndex_3;
  svcContext_30(D)->currentVehInfoDataIdx = _13;
  # DEBUG BEGIN_STMT
  _14 = svcContext_30(D)->BufferCfgPtr;
  _14->Occupied = BufferOccupied_22;

  <bb 12> [local count: 280154956]:
  # InterfaceReturnValue_18 = PHI <1(2), InterfaceReturnValue_17(11)>
  # DEBUG InterfaceReturnValue => InterfaceReturnValue_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return InterfaceReturnValue_18;

}



;; Function Dcm_Dsp_RequestVehicleInformation_ServiceExecution (Dcm_Dsp_RequestVehicleInformation_ServiceExecution, funcdef_no=4, decl_uid=6675, cgraph_uid=5, symbol_order=7)

Modification phase of node Dcm_Dsp_RequestVehicleInformation_ServiceExecution/7
Dcm_Dsp_RequestVehicleInformation_ServiceExecution (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  const uint8 VehInfoIdx;
  struct Dcm_DspMsgBufferCfgType * const pBuffer;
  const uint8 firstReqVehInfo;
  const Dcm_MsgLenType reqDataLen;
  Std_ReturnType serviceProcessStatus;
  Dcm_MsgItemType * _1;
  Dcm_MsgItemType * _2;
  long unsigned int _3;
  unsigned char _4;
  uint8 * _5;
  long unsigned int _6;
  long unsigned int _7;
  int _8;
  uint8 * _9;
  unsigned char _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 131
  # DEBUG BEGIN_STMT
  reqDataLen_21 = pMsgContext_20(D)->reqDataLen;
  # DEBUG reqDataLen => reqDataLen_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_22(D)) <default: <L28> [20.00%], case 0: <L0> [20.00%], case 1: <L12> [20.00%], case 2: <L13> [20.00%], case 5 ... 6: <L26> [20.00%]>

  <bb 3> [local count: 214748365]:
<L28>:
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 214748365]:
<L0>:
  # DEBUG BEGIN_STMT
  Dcm_DspReqVehInfoContext.nrc = 0;
  # DEBUG BEGIN_STMT
  if (reqDataLen_21 != 0)
    goto <bb 5>; [65.00%]
  else
    goto <bb 11>; [35.00%]

  <bb 5> [local count: 139586437]:
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_20(D)->reqData;
  firstReqVehInfo_30 = *_1;
  # DEBUG firstReqVehInfo => firstReqVehInfo_30
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_20(D)->resData;
  Dcm_DspReqVehInfoBufferConfig.BufferPtr = _2;
  # DEBUG BEGIN_STMT
  _3 = pMsgContext_20(D)->resMaxDataLen;
  Dcm_DspReqVehInfoBufferConfig.Size = _3;
  # DEBUG BEGIN_STMT
  Dcm_DspReqVehInfoBufferConfig.Occupied = 0;
  # DEBUG BEGIN_STMT
  _4 = firstReqVehInfo_30 & 31;
  if (_4 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 46063524]:
  # DEBUG BEGIN_STMT
  serviceProcessStatus_46 = Dcm_ReqVehInfoAvailability (pMsgContext_20(D));
  # DEBUG serviceProcessStatus => serviceProcessStatus_46
  goto <bb 14>; [100.00%]

  <bb 7> [local count: 93522913]:
  # DEBUG BEGIN_STMT
  if (reqDataLen_21 == 1)
    goto <bb 8>; [32.03%]
  else
    goto <bb 10>; [67.97%]

  <bb 8> [local count: 29955389]:
  # DEBUG BEGIN_STMT
  serviceProcessStatus_36 = Dcm_Dsp_VinServices_HelperInit (firstReqVehInfo_30, &Dcm_DspReqVehInfoContext, &Dcm_DspReqVehInfoBufferConfig);
  # DEBUG serviceProcessStatus => serviceProcessStatus_36
  # DEBUG BEGIN_STMT
  if (serviceProcessStatus_36 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 9> [local count: 9885278]:
  # DEBUG BEGIN_STMT
  pBuffer_37 = Dcm_DspReqVehInfoContext.BufferCfgPtr;
  # DEBUG pBuffer => pBuffer_37
  # DEBUG BEGIN_STMT
  VehInfoIdx_38 = Dcm_DspReqVehInfoContext.currentVehInfoIdx;
  # DEBUG VehInfoIdx => VehInfoIdx_38
  # DEBUG BEGIN_STMT
  _5 = pBuffer_37->BufferPtr;
  *_5 = firstReqVehInfo_30;
  # DEBUG BEGIN_STMT
  _6 = pBuffer_37->Occupied;
  _7 = _6 + 1;
  pBuffer_37->Occupied = _7;
  # DEBUG BEGIN_STMT
  _8 = (int) VehInfoIdx_38;
  _9 = pBuffer_37->BufferPtr;
  _10 = Dcm_DspVehInfo[_8].NumOfVehInfoData;
  MEM[(uint8 *)_9 + 1B] = _10;
  # DEBUG BEGIN_STMT
  _11 = pBuffer_37->Occupied;
  _12 = _11 + 1;
  pBuffer_37->Occupied = _12;
  # DEBUG BEGIN_STMT
  serviceProcessStatus_44 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_22(D), &Dcm_DspReqVehInfoContext);
  # DEBUG serviceProcessStatus => serviceProcessStatus_44
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 63567524]:
  # DEBUG BEGIN_STMT
  Dcm_DspReqVehInfoContext.nrc = 19;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 1
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 75161928]:
  # DEBUG BEGIN_STMT
  Dcm_DspReqVehInfoContext.nrc = 19;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 1
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 12> [local count: 214748365]:
<L12>:
  # DEBUG BEGIN_STMT
  serviceProcessStatus_27 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_22(D), &Dcm_DspReqVehInfoContext);
  # DEBUG serviceProcessStatus => serviceProcessStatus_27
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 214748365]:
<L13>:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_HelperCancel (&Dcm_DspReqVehInfoContext);
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_UnlockService ();
  # DEBUG BEGIN_STMT
  Dcm_RequestVehicleInformation_LockStatus = 0;
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 290767278]:
  # serviceProcessStatus_14 = PHI <serviceProcessStatus_46(6), serviceProcessStatus_27(12), serviceProcessStatus_44(9), serviceProcessStatus_36(8)>
<L25>:
  # DEBUG serviceProcessStatus => serviceProcessStatus_14
  # DEBUG BEGIN_STMT
  switch (serviceProcessStatus_14) <default: <L26> [33.33%], case 0: <L18> [33.33%], case 1: <L19> [33.33%]>

  <bb 15> [local count: 96912734]:
<L18>:
  # DEBUG BEGIN_STMT
  _13 = Dcm_DspReqVehInfoBufferConfig.Occupied;
  _18 = _13 & 65535;
  pMsgContext_20(D)->resDataLen = _18;
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_UnlockService ();
  # DEBUG BEGIN_STMT
  Dcm_RequestVehicleInformation_LockStatus = 0;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 235642185]:
<L19>:
  # DEBUG BEGIN_STMT
  pMsgContext_20(D)->msgAddInfo.suppressPosResponse = 1;
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_UnlockService ();
  # DEBUG BEGIN_STMT
  Dcm_RequestVehicleInformation_LockStatus = 0;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073712749]:
  # serviceProcessStatus_15 = PHI <26(15), 26(16), serviceProcessStatus_14(14), 131(3), 26(13), 26(2)>
<L26>:
  # DEBUG serviceProcessStatus => serviceProcessStatus_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_15;

}



;; Function Dcm_DspInternal_RequestVehicleInformation_SvcH (Dcm_DspInternal_RequestVehicleInformation_SvcH, funcdef_no=2, decl_uid=6649, cgraph_uid=3, symbol_order=5)

Modification phase of node Dcm_DspInternal_RequestVehicleInformation_SvcH/5
Dcm_DspInternal_RequestVehicleInformation_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType VinLockStatus;
  Std_ReturnType ServiceProcessStatus;
  unsigned char Dcm_RequestVehicleInformation_LockStatus.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_RequestVehicleInformation_LockStatus.0_1 = Dcm_RequestVehicleInformation_LockStatus;
  switch (Dcm_RequestVehicleInformation_LockStatus.0_1) <default: <L13> [33.33%], case 0: <L0> [33.33%], case 1: <L9> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  if (OpStatus_5(D) != 2)
    goto <bb 4>; [78.28%]
  else
    goto <bb 9>; [21.72%]

  <bb 4> [local count: 280147016]:
  if (OpStatus_5(D) != 5)
    goto <bb 5>; [78.28%]
  else
    goto <bb 9>; [21.72%]

  <bb 5> [local count: 219299084]:
  if (OpStatus_5(D) != 6)
    goto <bb 6>; [63.97%]
  else
    goto <bb 9>; [36.03%]

  <bb 6> [local count: 140285624]:
  # DEBUG BEGIN_STMT
  VinLockStatus_10 = Dcm_Dsp_VinServices_LockService ();
  # DEBUG VinLockStatus => VinLockStatus_10
  # DEBUG BEGIN_STMT
  if (VinLockStatus_10 == 31)
    goto <bb 9>; [36.03%]
  else
    goto <bb 7>; [63.97%]

  <bb 7> [local count: 89740714]:
  # DEBUG BEGIN_STMT
  Dcm_RequestVehicleInformation_LockStatus = 1;
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_13 = Dcm_Dsp_RequestVehicleInformation_ServiceExecution (0, pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_13
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 357878150]:
<L9>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_8 = Dcm_Dsp_RequestVehicleInformation_ServiceExecution (OpStatus_5(D), pMsgContext_6(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_8
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073634451]:
  # ServiceProcessStatus_2 = PHI <26(4), ServiceProcessStatus_8(8), 26(2), ServiceProcessStatus_13(7), 10(6), 26(3), 26(5)>
<L13>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_2;

}


