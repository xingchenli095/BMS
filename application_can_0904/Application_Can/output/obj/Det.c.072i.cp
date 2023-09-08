
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Det_ReportErrorStatus.part.0/22:
  Jump functions of caller  Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/18:
  Jump functions of caller  Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/17:
  Jump functions of caller  Det_ASR40_ReportError/16:
    callsite  Det_ASR40_ReportError/16 -> Det_ReportErrorStatus/13 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Det_ASR43_ReportRuntimeError/15:
    callsite  Det_ASR43_ReportRuntimeError/15 -> Det_ReportErrorStatus/13 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Det_ASR43_ReportTransientFault/14:
    callsite  Det_ASR43_ReportTransientFault/14 -> Det_ReportErrorStatus/13 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Det_ReportErrorStatus/13:
    callsite  Det_ReportErrorStatus/13 -> Det_ReportErrorStatus.part.0/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Det_Start/12:
  Jump functions of caller  Det_Init/11:

 Propagating constants:

Not considering Det_ASR40_ReportError for cloning; -fipa-cp-clone disabled.
Not considering Det_ASR43_ReportRuntimeError for cloning; -fipa-cp-clone disabled.
Not considering Det_ASR43_ReportTransientFault for cloning; -fipa-cp-clone disabled.
Not considering Det_Start for cloning; -fipa-cp-clone disabled.
Not considering Det_Init for cloning; -fipa-cp-clone disabled.

overall_size: 100, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Det_ReportErrorStatus.part.0/22:
    param [0]: 0 [loc_time: 51, loc_size: 26, prop_time: 0, prop_size: 0]
               1 [loc_time: 51, loc_size: 26, prop_time: 0, prop_size: 0]
               2 [loc_time: 51, loc_size: 26, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         uint8 [0, 2]
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
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Det_ASR40_ReportError/16:
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
  Node: Det_ASR43_ReportRuntimeError/15:
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
  Node: Det_ASR43_ReportTransientFault/14:
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
  Node: Det_ReportErrorStatus/13:
    param [0]: 2 [loc_time: 1, loc_size: 12, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 12, prop_time: 0, prop_size: 0]
               0 [loc_time: 1, loc_size: 12, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         uint8 [0, 2]
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
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Det_Start/12:
  Node: Det_Init/11:

IPA decision stage:

Propagated bits info for function Det_ReportErrorStatus.part.0/22:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function Det_ReportErrorStatus/13:
 param 0: value = 0x0, mask = 0x3

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Det_ReportErrorStatus.part.0/22 (Det_ReportErrorStatus.part.0) @06b5b7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CSWTCH.3/19 (read)CSWTCH.4/20 (read)CSWTCH.5/21 (read)Det_ErrorBuffer/9 (write)Det_ErrorBuffer/9 (write)Det_ErrorBuffer/9 (write)Det_ErrorBuffer/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Det_ReportErrorStatus/13 (536870912 (estimated locally),0.50 per call) 
  Calls: Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/17 (1073741824 (estimated locally),1.00 per call) Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/18 (1073741824 (estimated locally),1.00 per call) 
CSWTCH.5/21 (CSWTCH.5) @06afbaf8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Det_ErrorLost_DevelopmentError/6 (addr)Det_ErrorLost_RuntimeError/7 (addr)Det_FaultLost_TransientFault/8 (addr)
  Referring: Det_ReportErrorStatus.part.0/22 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
CSWTCH.4/20 (CSWTCH.4) @06afbab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Det_UsedSlots_DevelopmentError/3 (addr)Det_UsedSlots_RuntimeError/4 (addr)Det_UsedSlots_TransientFault/5 (addr)
  Referring: Det_ReportErrorStatus.part.0/22 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
CSWTCH.3/19 (CSWTCH.3) @06afba68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Det_WriteIndex_DevelopmentError/0 (addr)Det_WriteIndex_RuntimeError/1 (addr)Det_WriteIndex_TransientFault/2 (addr)
  Referring: Det_ReportErrorStatus.part.0/22 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/18 (Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0) @06af6a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_ReportErrorStatus.part.0/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/17 (Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0) @06af69a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_ReportErrorStatus.part.0/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/16 (Det_ASR40_ReportError) @06af6380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ReportErrorStatus/13 (1073741824 (estimated locally),1.00 per call) 
Det_ASR43_ReportRuntimeError/15 (Det_ASR43_ReportRuntimeError) @06af61c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ReportErrorStatus/13 (1073741824 (estimated locally),1.00 per call) 
Det_ASR43_ReportTransientFault/14 (Det_ASR43_ReportTransientFault) @06af6000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ReportErrorStatus/13 (1073741824 (estimated locally),1.00 per call) 
Det_ReportErrorStatus/13 (Det_ReportErrorStatus) @06af0e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Det_State/10 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Det_ASR40_ReportError/16 (1073741824 (estimated locally),1.00 per call) Det_ASR43_ReportRuntimeError/15 (1073741824 (estimated locally),1.00 per call) Det_ASR43_ReportTransientFault/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Det_ReportErrorStatus.part.0/22 (536870912 (estimated locally),0.50 per call) 
Det_Start/12 (Det_Start) @06af0c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_State/10 (read)Det_State/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_Init/11 (Det_Init) @06af0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ErrorBuffer/9 (write)Det_ErrorBuffer/9 (write)Det_ErrorBuffer/9 (write)Det_ErrorBuffer/9 (write)Det_WriteIndex_DevelopmentError/0 (write)Det_WriteIndex_RuntimeError/1 (write)Det_WriteIndex_TransientFault/2 (write)Det_ErrorLost_DevelopmentError/6 (write)Det_ErrorLost_RuntimeError/7 (write)Det_FaultLost_TransientFault/8 (write)Det_UsedSlots_DevelopmentError/3 (write)Det_UsedSlots_RuntimeError/4 (write)Det_UsedSlots_TransientFault/5 (write)Det_State/10 (write)
  Referring: 
  Availability: available
  Function flags: count:32534378 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Det_State/10 (Det_State) @06892990
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Det_Init/11 (write)Det_ReportErrorStatus/13 (read)Det_Start/12 (read)Det_Start/12 (write)
  Availability: available
  Varpool flags: initialized
Det_ErrorBuffer/9 (Det_ErrorBuffer) @06892948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportErrorStatus.part.0/22 (write)Det_ReportErrorStatus.part.0/22 (write)Det_ReportErrorStatus.part.0/22 (write)Det_ReportErrorStatus.part.0/22 (write)Det_Init/11 (write)Det_Init/11 (write)Det_Init/11 (write)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_FaultLost_TransientFault/8 (Det_FaultLost_TransientFault) @06892900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.5/21 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_ErrorLost_RuntimeError/7 (Det_ErrorLost_RuntimeError) @068928b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.5/21 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_ErrorLost_DevelopmentError/6 (Det_ErrorLost_DevelopmentError) @06892870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.5/21 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_UsedSlots_TransientFault/5 (Det_UsedSlots_TransientFault) @06892828
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.4/20 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_UsedSlots_RuntimeError/4 (Det_UsedSlots_RuntimeError) @068927e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.4/20 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_UsedSlots_DevelopmentError/3 (Det_UsedSlots_DevelopmentError) @06892798
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.4/20 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_WriteIndex_TransientFault/2 (Det_WriteIndex_TransientFault) @06892750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.3/19 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_WriteIndex_RuntimeError/1 (Det_WriteIndex_RuntimeError) @06892708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.3/19 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:
Det_WriteIndex_DevelopmentError/0 (Det_WriteIndex_DevelopmentError) @068926c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CSWTCH.3/19 (addr)Det_Init/11 (write)
  Availability: available
  Varpool flags:

;; Function Det_ReportErrorStatus.part.0 (Det_ReportErrorStatus.part.0, funcdef_no=6, decl_uid=5536, cgraph_uid=9, symbol_order=22)

Modification phase of node Det_ReportErrorStatus.part.0/22
Adjusting mask for param 0 to 0x3
Setting value range of param 0 [0, 2]
Det_ReportErrorStatus.part.0 (uint8 ErrorType, uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  Std_ReturnType transientFaultRetVal;
  uint16 * Det_WriteIndex;
  uint16 * Det_UsedSlots;
  uint16 * Det_ErrorLost;
  int _2;
  unsigned char _3;
  short unsigned int _11;
  int _12;
  short unsigned int _17;
  short unsigned int _18;
  short unsigned int _20;
  short unsigned int _21;
  short unsigned int _23;
  short unsigned int _24;

  <bb 11> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = (int) ErrorType_1(D);
  _3 = ErrorType_1(D);
  if (_3 <= 2)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
<L0>:
  Det_WriteIndex_4 = 0B;
  Det_UsedSlots_5 = 0B;
  Det_ErrorLost_6 = 0B;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
<L1>:
  Det_WriteIndex_7 = CSWTCH.3[_3];
  Det_UsedSlots_8 = CSWTCH.4[_3];
  Det_ErrorLost_9 = CSWTCH.5[_3];

  <bb 5> [local count: 1073741824]:
  # Det_WriteIndex_10 = PHI <Det_WriteIndex_4(3), Det_WriteIndex_7(4)>
  # Det_UsedSlots_19 = PHI <Det_UsedSlots_5(3), Det_UsedSlots_8(4)>
  # Det_ErrorLost_22 = PHI <Det_ErrorLost_6(3), Det_ErrorLost_9(4)>
<L2>:
<L3>:
  # DEBUG Det_ErrorLost => Det_ErrorLost_22
  # DEBUG Det_UsedSlots => Det_UsedSlots_19
  # DEBUG Det_WriteIndex => Det_WriteIndex_10
  # DEBUG BEGIN_STMT
  Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _11 = *Det_WriteIndex_10;
  _12 = (int) _11;
  Det_ErrorBuffer[_2][_12].ModuleId = ModuleId_13(D);
  # DEBUG BEGIN_STMT
  Det_ErrorBuffer[_2][_12].InstanceId = InstanceId_14(D);
  # DEBUG BEGIN_STMT
  Det_ErrorBuffer[_2][_12].ApiId = ApiId_15(D);
  # DEBUG BEGIN_STMT
  Det_ErrorBuffer[_2][_12].ErrorId = ErrorId_16(D);
  # DEBUG BEGIN_STMT
  _17 = _11 + 1;
  # DEBUG BEGIN_STMT
  _18 = _17 % 10;
  *Det_WriteIndex_10 = _18;
  # DEBUG BEGIN_STMT
  _20 = *Det_UsedSlots_19;
  if (_20 <= 9)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _21 = _20 + 1;
  *Det_UsedSlots_19 = _21;
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _23 = *Det_ErrorLost_22;
  if (_23 != 65535)
    goto <bb 8>; [66.00%]
  else
    goto <bb 9>; [34.00%]

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _24 = _23 + 1;
  *Det_ErrorLost_22 = _24;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0 ();

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function Det_Init (Det_Init, funcdef_no=0, decl_uid=5408, cgraph_uid=1, symbol_order=11)

Modification phase of node Det_Init/11
Det_Init ()
{
  uint8 Det_ErrorType;
  uint16 Det_ErrorNumber;
  int _1;
  int _2;

  <bb 2> [local count: 32534378]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Det_ErrorType => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 976138694]:
  # DEBUG BEGIN_STMT
  _1 = (int) Det_ErrorType_4;
  _2 = (int) Det_ErrorNumber_3;
  Det_ErrorBuffer[_1][_2].ModuleId = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorBuffer[_1][_2].InstanceId = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorBuffer[_1][_2].ApiId = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorBuffer[_1][_2].ErrorId = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorNumber_23 = Det_ErrorNumber_3 + 1;
  # DEBUG Det_ErrorNumber => Det_ErrorNumber_23

  <bb 4> [local count: 1073741824]:
  # Det_ErrorNumber_3 = PHI <Det_ErrorNumber_23(3), 0(8)>
  # DEBUG Det_ErrorNumber => Det_ErrorNumber_3
  # DEBUG BEGIN_STMT
  if (Det_ErrorNumber_3 != 10)
    goto <bb 3>; [90.91%]
  else
    goto <bb 5>; [9.09%]

  <bb 5> [local count: 97603132]:
  # DEBUG BEGIN_STMT
  Det_ErrorType_18 = Det_ErrorType_4 + 1;
  # DEBUG Det_ErrorType => Det_ErrorType_18

  <bb 6> [local count: 130137509]:
  # Det_ErrorType_4 = PHI <0(2), Det_ErrorType_18(5)>
  # DEBUG Det_ErrorType => Det_ErrorType_4
  # DEBUG BEGIN_STMT
  if (Det_ErrorType_4 != 3)
    goto <bb 8>; [75.00%]
  else
    goto <bb 7>; [25.00%]

  <bb 8> [local count: 97603132]:
  goto <bb 4>; [100.00%]

  <bb 7> [local count: 32534377]:
  # DEBUG BEGIN_STMT
  Det_WriteIndex_DevelopmentError = 0;
  # DEBUG BEGIN_STMT
  Det_WriteIndex_RuntimeError = 0;
  # DEBUG BEGIN_STMT
  Det_WriteIndex_TransientFault = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorLost_DevelopmentError = 0;
  # DEBUG BEGIN_STMT
  Det_ErrorLost_RuntimeError = 0;
  # DEBUG BEGIN_STMT
  Det_FaultLost_TransientFault = 0;
  # DEBUG BEGIN_STMT
  Det_UsedSlots_DevelopmentError = 0;
  # DEBUG BEGIN_STMT
  Det_UsedSlots_RuntimeError = 0;
  # DEBUG BEGIN_STMT
  Det_UsedSlots_TransientFault = 0;
  # DEBUG BEGIN_STMT
  Det_State = 1;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Det_Start (Det_Start, funcdef_no=1, decl_uid=5410, cgraph_uid=2, symbol_order=12)

Modification phase of node Det_Start/12
Det_Start ()
{
  unsigned char Det_State.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_State.0_1 = Det_State;
  if (Det_State.0_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Det_State = 2;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Det_ASR43_ReportTransientFault (Det_ASR43_ReportTransientFault, funcdef_no=3, decl_uid=5396, cgraph_uid=4, symbol_order=14)

Modification phase of node Det_ASR43_ReportTransientFault/14
Det_ASR43_ReportTransientFault (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_7 = Det_ReportErrorStatus (2, ModuleId_2(D), InstanceId_3(D), ApiId_4(D), FaultId_5(D));
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_7;

}



;; Function Det_ASR43_ReportRuntimeError (Det_ASR43_ReportRuntimeError, funcdef_no=4, decl_uid=5401, cgraph_uid=5, symbol_order=15)

Modification phase of node Det_ASR43_ReportRuntimeError/15
Det_ASR43_ReportRuntimeError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_7 = Det_ReportErrorStatus (1, ModuleId_2(D), InstanceId_3(D), ApiId_4(D), ErrorId_5(D));
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_7;

}



;; Function Det_ASR40_ReportError (Det_ASR40_ReportError, funcdef_no=5, decl_uid=5406, cgraph_uid=6, symbol_order=16)

Modification phase of node Det_ASR40_ReportError/16
Det_ASR40_ReportError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_7 = Det_ReportErrorStatus (0, ModuleId_2(D), InstanceId_3(D), ApiId_4(D), ErrorId_5(D));
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_7;

}


