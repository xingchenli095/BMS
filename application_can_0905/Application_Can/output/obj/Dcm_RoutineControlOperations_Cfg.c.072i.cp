
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9:
  Jump functions of caller  Dcm_DspInternal_CopySignalData/8:
  Jump functions of caller  Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/7:
  Jump functions of caller  TS_MemSet32/6:
  Jump functions of caller  PROG_ReqCheckProgPreCondition/5:
  Jump functions of caller  Dcm_Dsp_RoutineControl_ClearInternalArrays/4:
  Jump functions of caller  Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3:
    callsite  Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 -> Dcm_Dsp_RoutineControl_ClearInternalArrays/4 : 
  Jump functions of caller  Dcm_DIAGNOSTIC_LOOPBACK_Start/2:
    callsite  Dcm_DIAGNOSTIC_LOOPBACK_Start/2 -> Dcm_Dsp_RoutineControl_ClearInternalArrays/4 : 
  Jump functions of caller  Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1:
    callsite  Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1 -> Dcm_Dsp_RoutineControl_ClearInternalArrays/4 : 

 Propagating constants:

Not considering Dcm_DIAGNOSTIC_TRIGGER_DTC_Start for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DIAGNOSTIC_LOOPBACK_Start for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DIAGNOSTIC_CHECK_PRECOND_Start for cloning; -fipa-cp-clone disabled.

overall_size: 123, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_RoutineControl_ClearInternalArrays/4:
  Node: Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3:
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
  Node: Dcm_DIAGNOSTIC_LOOPBACK_Start/2:
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
  Node: Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start) @06d45d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (354334802 (estimated locally),0.33 per call) Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (145607981 (estimated locally),0.14 per call) 
  Calls: 
Dcm_DspInternal_CopySignalData/8 (Dcm_DspInternal_CopySignalData) @06d45c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (164981119 (estimated locally),0.15 per call) Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (145607981 (estimated locally),0.14 per call) 
  Calls: 
Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/7 (Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start) @06d45a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIAGNOSTIC_LOOPBACK_Start/2 (354334802 (estimated locally),0.33 per call) Dcm_DIAGNOSTIC_LOOPBACK_Start/2 (237404317 (estimated locally),0.22 per call) 
  Calls: 
TS_MemSet32/6 (TS_MemSet32) @06d458c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_RoutineControl_ClearInternalArrays/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PROG_ReqCheckProgPreCondition/5 (PROG_ReqCheckProgPreCondition) @06d45700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1 (354334802 (estimated locally),0.33 per call) Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1 (145607981 (estimated locally),0.14 per call) 
  Calls: 
Dcm_Dsp_RoutineControl_ClearInternalArrays/4 (Dcm_Dsp_RoutineControl_ClearInternalArrays) @06d45540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Uint8Array/0 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (145607981 (estimated locally),0.14 per call) Dcm_DIAGNOSTIC_LOOPBACK_Start/2 (237404317 (estimated locally),0.22 per call) Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1 (145607981 (estimated locally),0.14 per call) 
  Calls: TS_MemSet32/6 (1073741824 (estimated locally),1.00 per call) 
Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (Dcm_DIAGNOSTIC_TRIGGER_DTC_Start) @06d452a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Uint8Array/0 (addr)Uint8Array/0 (read)Uint8Array/0 (addr)Uint8Array/0 (read)Uint8Array/0 (addr)Uint8Array/0 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DspInternal_CopySignalData/8 (164981119 (estimated locally),0.15 per call) Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (354334802 (estimated locally),0.33 per call) Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (145607981 (estimated locally),0.14 per call) Dcm_DspInternal_CopySignalData/8 (145607981 (estimated locally),0.14 per call) Dcm_Dsp_RoutineControl_ClearInternalArrays/4 (145607981 (estimated locally),0.14 per call) 
Dcm_DIAGNOSTIC_LOOPBACK_Start/2 (Dcm_DIAGNOSTIC_LOOPBACK_Start) @06d450e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/7 (354334802 (estimated locally),0.33 per call) Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/7 (237404317 (estimated locally),0.22 per call) Dcm_Dsp_RoutineControl_ClearInternalArrays/4 (237404317 (estimated locally),0.22 per call) 
Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1 (Dcm_DIAGNOSTIC_CHECK_PRECOND_Start) @06d15e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PROG_ReqCheckProgPreCondition/5 (354334802 (estimated locally),0.33 per call) PROG_ReqCheckProgPreCondition/5 (145607981 (estimated locally),0.14 per call) Dcm_Dsp_RoutineControl_ClearInternalArrays/4 (145607981 (estimated locally),0.14 per call) 
Uint8Array/0 (Uint8Array) @06cd86c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_RoutineControl_ClearInternalArrays/4 (addr)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (addr)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (read)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (addr)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (read)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (addr)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3 (addr)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsp_RoutineControl_ClearInternalArrays (Dcm_Dsp_RoutineControl_ClearInternalArrays, funcdef_no=3, decl_uid=6825, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_Dsp_RoutineControl_ClearInternalArrays/4
Dcm_Dsp_RoutineControl_ClearInternalArrays ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&Uint8Array, 0, 2);
  return;

}



;; Function Dcm_DIAGNOSTIC_CHECK_PRECOND_Start (Dcm_DIAGNOSTIC_CHECK_PRECOND_Start, funcdef_no=0, decl_uid=6580, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/1
Dcm_DIAGNOSTIC_CHECK_PRECOND_Start (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Std_ReturnType ServiceProcessStatus;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_7(D)->reqDataLen;
  # DEBUG InDataLength => _1 + 4294967294
  # DEBUG BEGIN_STMT
  if (OpStatus_8(D) == 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (_1 == 2)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_RoutineControl_ClearInternalArrays ();
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_15 = PROG_ReqCheckProgPreCondition (0, ErrorCode_9(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_15
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  *ErrorCode_9(D) = 19;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_11 = PROG_ReqCheckProgPreCondition (OpStatus_8(D), ErrorCode_9(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_11

  <bb 7> [local count: 499942784]:
  # ServiceProcessStatus_2 = PHI <ServiceProcessStatus_15(4), ServiceProcessStatus_11(6)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_2
  # DEBUG BEGIN_STMT
  if (ServiceProcessStatus_2 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 249971392]:
  # DEBUG BEGIN_STMT
  pMsgContext_7(D)->resDataLen = 3;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 0
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 823770433]:
  # ServiceProcessStatus_16 = PHI <ServiceProcessStatus_2(7), 1(5)>
  # DEBUG BEGIN_STMT
  if (ServiceProcessStatus_16 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 280081947]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1

  <bb 11> [local count: 1073741824]:
  # ServiceProcessStatus_3 = PHI <0(8), ServiceProcessStatus_16(9), 1(10)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_3;

}



;; Function Dcm_DIAGNOSTIC_LOOPBACK_Start (Dcm_DIAGNOSTIC_LOOPBACK_Start, funcdef_no=1, decl_uid=6584, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_DIAGNOSTIC_LOOPBACK_Start/2
Dcm_DIAGNOSTIC_LOOPBACK_Start (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Dcm_MsgLenType InDataLength;
  uint16 CurrentDataLength;
  Std_ReturnType ServiceProcessStatus;
  long unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;
  Dcm_MsgItemType * _4;
  Dcm_MsgItemType * _5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;
  Dcm_MsgItemType * _8;
  Dcm_MsgItemType * _9;
  Dcm_MsgItemType * _10;
  Dcm_MsgItemType * _11;
  short unsigned int CurrentDataLength.0_12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_22(D)->reqDataLen;
  InDataLength_23 = _1 + 4294967294;
  # DEBUG InDataLength => InDataLength_23
  # DEBUG BEGIN_STMT
  _2 = (short unsigned int) InDataLength_23;
  _3 = _2 * 8;
  CurrentDataLength = _3;
  # DEBUG BEGIN_STMT
  if (OpStatus_25(D) == 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 3> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (InDataLength_23 <= 1024)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_RoutineControl_ClearInternalArrays ();
  # DEBUG BEGIN_STMT
  _4 = pMsgContext_22(D)->reqData;
  _5 = _4 + 2;
  _6 = pMsgContext_22(D)->resData;
  _7 = _6 + 3;
  ServiceProcessStatus_32 = Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start (_5, 0, _7, &CurrentDataLength, ErrorCode_26(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_32
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  *ErrorCode_26(D) = 19;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _8 = pMsgContext_22(D)->reqData;
  _9 = _8 + 2;
  _10 = pMsgContext_22(D)->resData;
  _11 = _10 + 3;
  ServiceProcessStatus_28 = Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start (_9, OpStatus_25(D), _11, &CurrentDataLength, ErrorCode_26(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_28

  <bb 7> [local count: 591739120]:
  # ServiceProcessStatus_17 = PHI <ServiceProcessStatus_32(4), ServiceProcessStatus_28(6)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_17
  # DEBUG BEGIN_STMT
  if (ServiceProcessStatus_17 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 295869560]:
  # DEBUG BEGIN_STMT
  CurrentDataLength.0_12 = CurrentDataLength;
  _13 = (long unsigned int) CurrentDataLength.0_12;
  _14 = _13 + 7;
  _15 = _14 >> 3;
  _16 = _15 + 3;
  pMsgContext_22(D)->resDataLen = _16;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 0
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 777872265]:
  # ServiceProcessStatus_33 = PHI <ServiceProcessStatus_17(7), 1(5)>
  # DEBUG BEGIN_STMT
  if (ServiceProcessStatus_33 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 264476570]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1

  <bb 11> [local count: 1073741824]:
  # ServiceProcessStatus_18 = PHI <0(8), ServiceProcessStatus_33(9), 1(10)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentDataLength ={v} {CLOBBER};
  return ServiceProcessStatus_18;

}



;; Function Dcm_DIAGNOSTIC_TRIGGER_DTC_Start (Dcm_DIAGNOSTIC_TRIGGER_DTC_Start, funcdef_no=2, decl_uid=6588, cgraph_uid=3, symbol_order=3)

Modification phase of node Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/3
Dcm_DIAGNOSTIC_TRIGGER_DTC_Start (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Std_ReturnType ServiceProcessStatus;
  long unsigned int _1;
  Dcm_MsgItemType * _2;
  Dcm_MsgItemType * _3;
  unsigned char _4;
  unsigned char _5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_13(D)->reqDataLen;
  # DEBUG InDataLength => _1 + 4294967294
  # DEBUG BEGIN_STMT
  if (OpStatus_14(D) == 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_RoutineControl_ClearInternalArrays ();
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_13(D)->reqData;
  _3 = _2 + 2;
  Dcm_DspInternal_CopySignalData (_3, &Uint8Array[0], 0, 0, 8, 6, 1);
  # DEBUG BEGIN_STMT
  _4 = Uint8Array[0];
  ServiceProcessStatus_22 = Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start (_4, 0, &Uint8Array[1], ErrorCode_15(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_22
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  *ErrorCode_15(D) = 19;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _5 = Uint8Array[0];
  ServiceProcessStatus_17 = Rte_Call_Dcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start (_5, OpStatus_14(D), &Uint8Array[1], ErrorCode_15(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_17

  <bb 7> [local count: 499942784]:
  # ServiceProcessStatus_8 = PHI <ServiceProcessStatus_22(4), ServiceProcessStatus_17(6)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_8
  # DEBUG BEGIN_STMT
  if (ServiceProcessStatus_8 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 164981119]:
  # DEBUG BEGIN_STMT
  pMsgContext_13(D)->resDataLen = 4;
  # DEBUG BEGIN_STMT
  _6 = pMsgContext_13(D)->resData;
  _7 = _6 + 3;
  Dcm_DspInternal_CopySignalData (&Uint8Array[1], _7, 0, 0, 8, 3, 1);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 0
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 908760706]:
  # ServiceProcessStatus_23 = PHI <ServiceProcessStatus_8(7), 1(5)>
  # DEBUG BEGIN_STMT
  if (ServiceProcessStatus_23 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 308978640]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1

  <bb 11> [local count: 1073741824]:
  # ServiceProcessStatus_9 = PHI <0(8), ServiceProcessStatus_23(9), 1(10)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_9;

}


