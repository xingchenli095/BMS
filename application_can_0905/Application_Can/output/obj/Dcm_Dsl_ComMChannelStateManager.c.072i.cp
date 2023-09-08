
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_DCM_InactiveDiagnostic/18:
  Jump functions of caller  ComM_DCM_ActiveDiagnostic/17:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/16:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15:
  Jump functions of caller  Det_ASR40_ReportError/14:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_EnterMode/8:
  Jump functions of caller  Dcm_ComM_FullComModeEntered/7:
    callsite  Dcm_ComM_FullComModeEntered/7 -> Dcm_Dsl_ComMChannelStateManager_EnterMode/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_ComM_SilentComModeEntered/6:
    callsite  Dcm_ComM_SilentComModeEntered/6 -> Dcm_Dsl_ComMChannelStateManager_EnterMode/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_ComM_NoComModeEntered/5:
    callsite  Dcm_ComM_NoComModeEntered/5 -> Dcm_Dsl_ComMChannelStateManager_EnterMode/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetTxState/4:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetRxState/3:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_Init/2:
    callsite  Dcm_Dsl_ComMChannelStateManager_Init/2 -> Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11 : 

 Propagating constants:

Not considering Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ComMChannelStateManager_EnterMode for cloning; -fipa-cp-clone disabled.
Not considering Dcm_ComM_FullComModeEntered for cloning; -fipa-cp-clone disabled.
Not considering Dcm_ComM_SilentComModeEntered for cloning; -fipa-cp-clone disabled.
Not considering Dcm_ComM_NoComModeEntered for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ComMChannelStateManager_GetTxState for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ComMChannelStateManager_GetRxState for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ComMChannelStateManager_Init for cloning; -fipa-cp-clone disabled.

overall_size: 119, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11:
  Node: Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_ComMChannelStateManager_EnterMode/8:
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
  Node: Dcm_ComM_FullComModeEntered/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_ComM_SilentComModeEntered/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_ComM_NoComModeEntered/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_ComMChannelStateManager_GetTxState/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_ComMChannelStateManager_GetRxState/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_ComMChannelStateManager_Init/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CSWTCH.6/19 (CSWTCH.6) @06e2de10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
ComM_DCM_InactiveDiagnostic/18 (ComM_DCM_InactiveDiagnostic) @06df0e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10 (24438190 (estimated locally),0.32 per call) 
  Calls: 
ComM_DCM_ActiveDiagnostic/17 (ComM_DCM_ActiveDiagnostic) @06df0c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9 (24438190 (estimated locally),0.32 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/16 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06df0a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (220216089 (estimated locally),0.21 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06df09a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (220216089 (estimated locally),0.21 per call) 
  Calls: 
Det_ASR40_ReportError/14 (Det_ASR40_ReportError) @06df08c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Initialized/13 (Dcm_Initialized) @06df4900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (read)
  Availability: not_available
  Varpool flags:
Dcm_RxComMChannelIDs/12 (Dcm_RxComMChannelIDs) @06de7990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11 (Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit) @06df00e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RxComMChannelIDs/12 (read)Dcm_ComMChannelInfo/1 (write)Dcm_ComMChannelInfo/1 (write)
  Referring: 
  Availability: local
  Function flags: count:536870913 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_ComMChannelStateManager_Init/2 (536870913 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10 (Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic) @06d87ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:77159559 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_DCM_InactiveDiagnostic/18 (24438190 (estimated locally),0.32 per call) 
Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9 (Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic) @06d87d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:77159559 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_DCM_ActiveDiagnostic/17 (24438190 (estimated locally),0.32 per call) 
Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (Dcm_Dsl_ComMChannelStateManager_EnterMode) @06d87b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CSWTCH.6/19 (read)Dcm_Initialized/13 (read)Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelOperationEnabled/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_ComM_FullComModeEntered/7 (1073741824 (estimated locally),1.00 per call) Dcm_ComM_SilentComModeEntered/6 (1073741824 (estimated locally),1.00 per call) Dcm_ComM_NoComModeEntered/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/16 (220216089 (estimated locally),0.21 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (220216089 (estimated locally),0.21 per call) Det_ASR40_ReportError/14 (524845004 (estimated locally),0.49 per call) 
Dcm_ComM_FullComModeEntered/7 (Dcm_ComM_FullComModeEntered) @06d878c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (1073741824 (estimated locally),1.00 per call) 
Dcm_ComM_SilentComModeEntered/6 (Dcm_ComM_SilentComModeEntered) @06d87700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (1073741824 (estimated locally),1.00 per call) 
Dcm_ComM_NoComModeEntered/5 (Dcm_ComM_NoComModeEntered) @06d87540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_ComMChannelStateManager_GetTxState/4 (Dcm_Dsl_ComMChannelStateManager_GetTxState) @06d87380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelOperationEnabled/0 (read)
  Referring: 
  Availability: available
  Function flags: count:77159559 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_GetRxState/3 (Dcm_Dsl_ComMChannelStateManager_GetRxState) @06d871c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ComMChannelInfo/1 (read)Dcm_ComMChannelOperationEnabled/0 (read)
  Referring: 
  Availability: available
  Function flags: count:77159559 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_Init/2 (Dcm_Dsl_ComMChannelStateManager_Init) @06d87000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ComMChannelOperationEnabled/0 (read)Dcm_ComMChannelOperationEnabled/0 (write)
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11 (536870913 (estimated locally),1.00 per call) 
Dcm_ComMChannelInfo/1 (Dcm_ComMChannelInfo) @06de71b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11 (write)Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (read)Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9 (write)Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit/11 (write)Dcm_Dsl_ComMChannelStateManager_GetRxState/3 (read)Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9 (read)Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9 (read)Dcm_Dsl_ComMChannelStateManager_GetTxState/4 (read)Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10 (read)Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10 (read)Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10 (write)
  Availability: available
  Varpool flags:
Dcm_ComMChannelOperationEnabled/0 (Dcm_ComMChannelOperationEnabled) @06de7168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_ComMChannelStateManager_Init/2 (write)Dcm_Dsl_ComMChannelStateManager_GetRxState/3 (read)Dcm_Dsl_ComMChannelStateManager_GetTxState/4 (read)Dcm_Dsl_ComMChannelStateManager_Init/2 (read)Dcm_Dsl_ComMChannelStateManager_EnterMode/8 (write)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_ComMChannelStateManager_Init (Dcm_Dsl_ComMChannelStateManager_Init, funcdef_no=0, decl_uid=5786, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_Dsl_ComMChannelStateManager_Init/2
Dcm_Dsl_ComMChannelStateManager_Init ()
{
  uint8_least ComMChannelIndex;
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManger_ChannelInfoInit ();
  # DEBUG BEGIN_STMT
  # DEBUG ComMChannelIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ComMChannelOperationEnabled[0];
  _2 = _1 & 252;
  Dcm_ComMChannelOperationEnabled[0] = _2;
  # DEBUG BEGIN_STMT
  # DEBUG ComMChannelIndex => 1

  <bb 4> [local count: 1073741824]:
  # ComMChannelIndex_3 = PHI <0(2), 1(3)>
  # DEBUG ComMChannelIndex => ComMChannelIndex_3
  # DEBUG BEGIN_STMT
  if (ComMChannelIndex_3 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_ComMChannelStateManager_GetRxState (Dcm_Dsl_ComMChannelStateManager_GetRxState, funcdef_no=1, decl_uid=5788, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_Dsl_ComMChannelStateManager_GetRxState/3
Dcm_Dsl_ComMChannelStateManager_GetRxState (NetworkHandleType ComMChannelID)
{
  Dcm_ComMChannelOperationStateType RxStateResult;
  boolean Found;
  uint8_least ChannelIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _9;

  <bb 2> [local count: 77159559]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG RxStateResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 996582265]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ComMChannelInfo[0].NetworkID;
  if (_1 == ComMChannelID_13(D))
    goto <bb 4>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 12> [local count: 328872147]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 667710118]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ComMChannelOperationEnabled[0];
  _9 = _2 & 1;
  if (_9 != 0)
    goto <bb 10>; [3.66%]
  else
    goto <bb 11>; [96.34%]

  <bb 11> [local count: 643271928]:
  goto <bb 6>; [100.00%]

  <bb 10> [local count: 24438190]:

  <bb 5> [local count: 101597750]:
  # ChannelIndex_14 = PHI <0(2), 1(10)>
  # Found_10 = PHI <0(2), 1(10)>
  # RxStateResult_11 = PHI <0(2), 1(10)>
  # DEBUG RxStateResult => NULL

  <bb 6> [local count: 744869679]:
  # ChannelIndex_6 = PHI <ChannelIndex_14(5), 1(11)>
  # Found_7 = PHI <Found_10(5), 1(11)>
  # RxStateResult_4 = PHI <RxStateResult_11(5), RxStateResult_8(11)>

  <bb 7> [local count: 1073741824]:
  # ChannelIndex_3 = PHI <ChannelIndex_6(6), 1(12)>
  # Found_5 = PHI <Found_7(6), 0(12)>
  # RxStateResult_8 = PHI <RxStateResult_4(6), RxStateResult_8(12)>
  # DEBUG RxStateResult => RxStateResult_8
  # DEBUG Found => Found_5
  # DEBUG ChannelIndex => ChannelIndex_3
  # DEBUG BEGIN_STMT
  if (ChannelIndex_3 == 0)
    goto <bb 8>; [96.34%]
  else
    goto <bb 9>; [3.66%]

  <bb 8> [local count: 1034442874]:
  if (Found_5 == 0)
    goto <bb 3>; [96.34%]
  else
    goto <bb 9>; [3.66%]

  <bb 9> [local count: 77159560]:
  # RxStateResult_15 = PHI <RxStateResult_8(7), RxStateResult_8(8)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RxStateResult_15;

}



;; Function Dcm_Dsl_ComMChannelStateManager_GetTxState (Dcm_Dsl_ComMChannelStateManager_GetTxState, funcdef_no=2, decl_uid=5790, cgraph_uid=3, symbol_order=4)

Modification phase of node Dcm_Dsl_ComMChannelStateManager_GetTxState/4
Dcm_Dsl_ComMChannelStateManager_GetTxState (NetworkHandleType ComMChannelID)
{
  Dcm_ComMChannelOperationStateType TxStateResult;
  boolean Found;
  uint8_least ChannelIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _9;

  <bb 2> [local count: 77159559]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG TxStateResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 996582265]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ComMChannelInfo[0].NetworkID;
  if (_1 == ComMChannelID_13(D))
    goto <bb 4>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 12> [local count: 328872147]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 667710118]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ComMChannelOperationEnabled[0];
  _9 = _2 & 2;
  if (_9 != 0)
    goto <bb 10>; [3.66%]
  else
    goto <bb 11>; [96.34%]

  <bb 11> [local count: 643271928]:
  goto <bb 6>; [100.00%]

  <bb 10> [local count: 24438190]:

  <bb 5> [local count: 101597750]:
  # ChannelIndex_14 = PHI <0(2), 1(10)>
  # Found_10 = PHI <0(2), 1(10)>
  # TxStateResult_11 = PHI <0(2), 1(10)>
  # DEBUG TxStateResult => NULL

  <bb 6> [local count: 744869679]:
  # ChannelIndex_6 = PHI <ChannelIndex_14(5), 1(11)>
  # Found_7 = PHI <Found_10(5), 1(11)>
  # TxStateResult_4 = PHI <TxStateResult_11(5), TxStateResult_8(11)>

  <bb 7> [local count: 1073741824]:
  # ChannelIndex_3 = PHI <ChannelIndex_6(6), 1(12)>
  # Found_5 = PHI <Found_7(6), 0(12)>
  # TxStateResult_8 = PHI <TxStateResult_4(6), TxStateResult_8(12)>
  # DEBUG TxStateResult => TxStateResult_8
  # DEBUG Found => Found_5
  # DEBUG ChannelIndex => ChannelIndex_3
  # DEBUG BEGIN_STMT
  if (ChannelIndex_3 == 0)
    goto <bb 8>; [96.34%]
  else
    goto <bb 9>; [3.66%]

  <bb 8> [local count: 1034442874]:
  if (Found_5 == 0)
    goto <bb 3>; [96.34%]
  else
    goto <bb 9>; [3.66%]

  <bb 9> [local count: 77159560]:
  # TxStateResult_15 = PHI <TxStateResult_8(7), TxStateResult_8(8)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return TxStateResult_15;

}



;; Function Dcm_Dsl_ComMChannelStateManager_EnterMode (Dcm_Dsl_ComMChannelStateManager_EnterMode, funcdef_no=6, decl_uid=5793, cgraph_uid=7, symbol_order=8)

Modification phase of node Dcm_Dsl_ComMChannelStateManager_EnterMode/8
Dcm_Dsl_ComMChannelStateManager_EnterMode (Dcm_NetworkIdType NetworkId, Dcm_ComMChannelModeType CommunicationMode)
{
  uint8_least ChannelIndex;
  uint8 EnableOp;
  uint8 CallerServiceIdOnError;
  unsigned char _1;
  unsigned char Dcm_Initialized.0_2;
  unsigned char _3;
  unsigned char _8;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CallerServiceIdOnError => 255
  # DEBUG BEGIN_STMT
  # DEBUG EnableOp => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CommunicationMode_10(D) + 255;
  if (_1 <= 2)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
<L14>:
  CallerServiceIdOnError_12 = 255;
  EnableOp_13 = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
<L15>:
  _8 = CommunicationMode_10(D) + 32;
  CallerServiceIdOnError_16 = _8;
  _11 = CSWTCH.6[_1];
  EnableOp_9 = _11;

  <bb 5> [local count: 1073741824]:
  # CallerServiceIdOnError_4 = PHI <CallerServiceIdOnError_16(4), CallerServiceIdOnError_12(3)>
  # EnableOp_5 = PHI <EnableOp_9(4), EnableOp_13(3)>
<L16>:
<L13>:
  # DEBUG EnableOp => EnableOp_5
  # DEBUG CallerServiceIdOnError => CallerServiceIdOnError_4
  # DEBUG BEGIN_STMT
  Dcm_Initialized.0_2 = Dcm_Initialized;
  if (Dcm_Initialized.0_2 != 1)
    goto <bb 6>; [48.88%]
  else
    goto <bb 11>; [51.12%]

  <bb 6> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, CallerServiceIdOnError_4, 5);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 328680731]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_ComMChannelInfo[0].NetworkID;
  if (_3 == NetworkId_15(D))
    goto <bb 8>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 12> [local count: 108464641]:
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 220216089]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_ComMChannelOperationEnabled[0] = EnableOp_5;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 548896821]:

  <bb 9> [local count: 657361462]:
  # ChannelIndex_6 = PHI <0(11), 1(12)>
  # DEBUG ChannelIndex => ChannelIndex_6
  # DEBUG BEGIN_STMT
  if (ChannelIndex_6 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_ComM_NoComModeEntered (Dcm_ComM_NoComModeEntered, funcdef_no=3, decl_uid=5700, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_ComM_NoComModeEntered/5
Dcm_ComM_NoComModeEntered (uint8 NetworkId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManager_EnterMode (NetworkId_2(D), 1);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_ComM_SilentComModeEntered (Dcm_ComM_SilentComModeEntered, funcdef_no=4, decl_uid=5702, cgraph_uid=5, symbol_order=6)

Modification phase of node Dcm_ComM_SilentComModeEntered/6
Dcm_ComM_SilentComModeEntered (uint8 NetworkId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManager_EnterMode (NetworkId_2(D), 2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_ComM_FullComModeEntered (Dcm_ComM_FullComModeEntered, funcdef_no=5, decl_uid=5704, cgraph_uid=6, symbol_order=7)

Modification phase of node Dcm_ComM_FullComModeEntered/7
Dcm_ComM_FullComModeEntered (uint8 NetworkId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManager_EnterMode (NetworkId_2(D), 3);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic (Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic, funcdef_no=7, decl_uid=5795, cgraph_uid=8, symbol_order=9)

Modification phase of node Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/9
Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic (NetworkHandleType NetworkId)
{
  Std_ReturnType Result;
  boolean NetworkStatusFound;
  uint8_least NetworkStatusArrayIndex;
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 77159559]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NetworkStatusFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NetworkStatusArrayIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 996582265]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ComMChannelInfo[0].NetworkID;
  if (_1 == NetworkId_15(D))
    goto <bb 4>; [67.00%]
  else
    goto <bb 14>; [33.00%]

  <bb 14> [local count: 328872147]:
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 667710118]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ComMChannelInfo[0].ActiveFlag;
  if (_2 == 0)
    goto <bb 5>; [3.66%]
  else
    goto <bb 13>; [96.34%]

  <bb 13> [local count: 643271928]:
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 24438190]:
  # DEBUG BEGIN_STMT
  ComM_DCM_ActiveDiagnostic (NetworkId_15(D));
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  Dcm_ComMChannelInfo[0].ActiveFlag = 1;

  <bb 8> [local count: 101597750]:
  # NetworkStatusArrayIndex_4 = PHI <0(2), 1(5)>
  # NetworkStatusFound_18 = PHI <0(2), 1(5)>
  # Result_12 = PHI <1(2), 0(5)>

  <bb 12> [local count: 744869679]:
  # NetworkStatusArrayIndex_9 = PHI <NetworkStatusArrayIndex_4(8), 1(13)>
  # NetworkStatusFound_6 = PHI <NetworkStatusFound_18(8), 1(13)>
  # Result_10 = PHI <Result_12(8), Result_8(13)>

  <bb 11> [local count: 1073741824]:
  # NetworkStatusArrayIndex_3 = PHI <NetworkStatusArrayIndex_9(12), 1(14)>
  # NetworkStatusFound_5 = PHI <NetworkStatusFound_6(12), 0(14)>
  # Result_8 = PHI <Result_10(12), Result_8(14)>
  # DEBUG Result => Result_8
  # DEBUG NetworkStatusFound => NetworkStatusFound_5
  # DEBUG NetworkStatusArrayIndex => NetworkStatusArrayIndex_3
  # DEBUG BEGIN_STMT
  if (NetworkStatusArrayIndex_3 == 0)
    goto <bb 9>; [96.34%]
  else
    goto <bb 10>; [3.66%]

  <bb 9> [local count: 1034442874]:
  if (NetworkStatusFound_5 == 0)
    goto <bb 3>; [96.34%]
  else
    goto <bb 10>; [3.66%]

  <bb 10> [local count: 77159560]:
  # Result_19 = PHI <Result_8(11), Result_8(9)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_19;

}



;; Function Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic (Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic, funcdef_no=8, decl_uid=5797, cgraph_uid=9, symbol_order=10)

Modification phase of node Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/10
Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic (NetworkHandleType NetworkId)
{
  Std_ReturnType Result;
  boolean NetworkStatusFound;
  uint8_least NetworkStatusArrayIndex;
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 77159559]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NetworkStatusFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NetworkStatusArrayIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 996582265]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ComMChannelInfo[0].NetworkID;
  if (_1 == NetworkId_15(D))
    goto <bb 4>; [67.00%]
  else
    goto <bb 14>; [33.00%]

  <bb 14> [local count: 328872147]:
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 667710118]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ComMChannelInfo[0].ActiveFlag;
  if (_2 == 1)
    goto <bb 5>; [3.66%]
  else
    goto <bb 13>; [96.34%]

  <bb 13> [local count: 643271928]:
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 24438190]:
  # DEBUG BEGIN_STMT
  ComM_DCM_InactiveDiagnostic (_1);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  Dcm_ComMChannelInfo[0].ActiveFlag = 0;

  <bb 8> [local count: 101597750]:
  # NetworkStatusArrayIndex_5 = PHI <0(2), 1(5)>
  # NetworkStatusFound_18 = PHI <0(2), 1(5)>
  # Result_19 = PHI <1(2), 0(5)>

  <bb 12> [local count: 744869679]:
  # NetworkStatusArrayIndex_10 = PHI <NetworkStatusArrayIndex_5(8), 1(13)>
  # NetworkStatusFound_7 = PHI <NetworkStatusFound_18(8), 1(13)>
  # Result_11 = PHI <Result_19(8), Result_9(13)>

  <bb 11> [local count: 1073741824]:
  # NetworkStatusArrayIndex_4 = PHI <NetworkStatusArrayIndex_10(12), 1(14)>
  # NetworkStatusFound_6 = PHI <NetworkStatusFound_7(12), 0(14)>
  # Result_9 = PHI <Result_11(12), Result_9(14)>
  # DEBUG Result => Result_9
  # DEBUG NetworkStatusFound => NetworkStatusFound_6
  # DEBUG NetworkStatusArrayIndex => NetworkStatusArrayIndex_4
  # DEBUG BEGIN_STMT
  if (NetworkStatusArrayIndex_4 == 0)
    goto <bb 9>; [96.34%]
  else
    goto <bb 10>; [3.66%]

  <bb 9> [local count: 1034442874]:
  if (NetworkStatusFound_6 == 0)
    goto <bb 3>; [96.34%]
  else
    goto <bb 10>; [3.66%]

  <bb 10> [local count: 77159560]:
  # Result_3 = PHI <Result_9(11), Result_9(9)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}


