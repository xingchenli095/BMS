
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_SetProgConditions/21:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20:
  Jump functions of caller  Dcm_Dsl_RxConnectionRxIndication/19:
  Jump functions of caller  Dcm_Dsl_Supervisor_IncomingReception/18:
  Jump functions of caller  Dcm_Dsl_Supervisor_RequestRxPermission/17:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/16:
  Jump functions of caller  Det_ASR40_ReportError/12:
  Jump functions of caller  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/11:
  Jump functions of caller  Dcm_Dsl_Supervisor_InhibitRequestProcessing/10:
  Jump functions of caller  BswM_Dcm_ApplicationUpdated/9:
  Jump functions of caller  Dcm_GetProgConditions/7:
  Jump functions of caller  Dcm_Dsl_PostBootOperationsHandler_MainFunction/6:
  Jump functions of caller  Dcm_Dsl_PostBootOperationsHandler_JumpInhibited/5:
  Jump functions of caller  Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted/4:
  Jump functions of caller  Dcm_Dsl_PostBootOperationsHandler_Init/3:

 Propagating constants:

Not considering Dcm_Dsl_PostBootOperationsHandler_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_PostBootOperationsHandler_JumpInhibited for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_PostBootOperationsHandler_Init for cloning; -fipa-cp-clone disabled.

overall_size: 133, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6:
  Node: Dcm_Dsl_PostBootOperationsHandler_JumpInhibited/5:
  Node: Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted/4:
  Node: Dcm_Dsl_PostBootOperationsHandler_Init/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_SetProgConditions/21 (Dcm_SetProgConditions) @06ca92a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (120708414 (estimated locally),0.39 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ca91c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (51696905 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_RxConnectionRxIndication/19 (Dcm_Dsl_RxConnectionRxIndication) @06ca90e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (51696905 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_Supervisor_IncomingReception/18 (Dcm_Dsl_Supervisor_IncomingReception) @06ca9000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (51696905 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_Supervisor_RequestRxPermission/17 (Dcm_Dsl_Supervisor_RequestRxPermission) @06ab0e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (51696905 (estimated locally),0.17 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/16 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ab0ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (51696905 (estimated locally),0.17 per call) 
  Calls: 
Dcm_RxPduIdBL/15 (Dcm_RxPduIdBL) @06ca7870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)
  Availability: not_available
  Varpool flags:
Dcm_MainConnectionConfig/14 (Dcm_MainConnectionConfig) @06ca77e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_RxPduIdConfig/13 (Dcm_RxPduIdConfig) @06ca7798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ASR40_ReportError/12 (Det_ASR40_ReportError) @06ab07e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (26290292 (estimated locally),0.09 per call) Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (13543484 (estimated locally),0.04 per call) Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (25462655 (estimated locally),0.08 per call) Dcm_Dsl_PostBootOperationsHandler_Init/3 (173198851 (estimated locally),0.16 per call) 
  Calls: 
Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/11 (Dcm_Dsl_Supervisor_DisinhibitRequestProcessing) @06ab0700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (77159559 (estimated locally),0.25 per call) Dcm_Dsl_PostBootOperationsHandler_Init/3 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Dsl_Supervisor_InhibitRequestProcessing/10 (Dcm_Dsl_Supervisor_InhibitRequestProcessing) @06ab0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_Init/3 (548896821 (estimated locally),0.51 per call) 
  Calls: 
BswM_Dcm_ApplicationUpdated/9 (BswM_Dcm_ApplicationUpdated) @06ab0540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_Init/3 (37772884 (estimated locally),0.04 per call) 
  Calls: 
Dcm_ProgConditions/8 (Dcm_ProgConditions) @06c279d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_Init/3 (addr)Dcm_Dsl_PostBootOperationsHandler_Init/3 (read)Dcm_Dsl_PostBootOperationsHandler_Init/3 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (addr)
  Availability: not_available
  Varpool flags:
Dcm_GetProgConditions/7 (Dcm_GetProgConditions) @06ab0460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_PostBootOperationsHandler_Init/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (Dcm_Dsl_PostBootOperationsHandler_MainFunction) @06ab02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_PostBootOperationsState/0 (read)Dcm_RxPduIdConfig/13 (read)Dcm_MainConnectionConfig/14 (read)Dcm_ProgConditions/8 (read)Dcm_PostBootOperationsState/0 (write)Dcm_RxPduIdBL/15 (write)Dcm_ProgConditions/8 (read)Dcm_BootloaderRequestToRespondTo/1 (write)Dcm_ProgConditions/8 (read)Dcm_BootloaderRequestToRespondTo/1 (write)Dcm_BootloaderRequestToRespondTo/1 (addr)Dcm_ProgConditions/8 (read)Dcm_RxPduIdBL/15 (read)Dcm_RxPduIdBL/15 (read)Dcm_RxPduIdBL/15 (read)Dcm_PostBootOperationsState/0 (write)Dcm_ProgConditions/8 (read)Dcm_ProgConditions/8 (read)Dcm_ProgConditions/8 (write)Dcm_ProgConditions/8 (write)Dcm_PostBootOperationsState/0 (write)Dcm_InhibitJumpToBootloader/2 (write)Dcm_PostBootOperationsState/0 (write)Dcm_ProgConditions/8 (addr)Dcm_InhibitJumpToBootloader/2 (write)Dcm_PostBootOperationsState/0 (write)Dcm_InhibitJumpToBootloader/2 (write)Dcm_PostBootOperationsState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:308638235 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/12 (26290292 (estimated locally),0.09 per call) Det_ASR40_ReportError/12 (13543484 (estimated locally),0.04 per call) Dcm_SetProgConditions/21 (120708414 (estimated locally),0.39 per call) Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/11 (77159559 (estimated locally),0.25 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20 (51696905 (estimated locally),0.17 per call) Dcm_Dsl_RxConnectionRxIndication/19 (51696905 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_IncomingReception/18 (51696905 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RequestRxPermission/17 (51696905 (estimated locally),0.17 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/16 (51696905 (estimated locally),0.17 per call) Det_ASR40_ReportError/12 (25462655 (estimated locally),0.08 per call) 
Dcm_Dsl_PostBootOperationsHandler_JumpInhibited/5 (Dcm_Dsl_PostBootOperationsHandler_JumpInhibited) @06aa8c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_InhibitJumpToBootloader/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted/4 (Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted) @06aa8a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_PostBootOperationsState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_PostBootOperationsHandler_Init/3 (Dcm_Dsl_PostBootOperationsHandler_Init) @06aa88c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_PostBootOperationsState/0 (write)Dcm_ProgConditions/8 (addr)Dcm_ProgConditions/8 (read)Dcm_ProgConditions/8 (read)Dcm_PostBootOperationsState/0 (write)Dcm_InhibitJumpToBootloader/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/12 (173198851 (estimated locally),0.16 per call) Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/11 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_Supervisor_InhibitRequestProcessing/10 (548896821 (estimated locally),0.51 per call) BswM_Dcm_ApplicationUpdated/9 (37772884 (estimated locally),0.04 per call) Dcm_GetProgConditions/7 (1073741824 (estimated locally),1.00 per call) 
Dcm_InhibitJumpToBootloader/2 (Dcm_InhibitJumpToBootloader) @06c273f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_Init/3 (write)Dcm_Dsl_PostBootOperationsHandler_JumpInhibited/5 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)
  Availability: available
  Varpool flags:
Dcm_BootloaderRequestToRespondTo/1 (Dcm_BootloaderRequestToRespondTo) @06c273a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (addr)
  Availability: available
  Varpool flags:
Dcm_PostBootOperationsState/0 (Dcm_PostBootOperationsState) @06c27360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_PostBootOperationsHandler_Init/3 (write)Dcm_Dsl_PostBootOperationsHandler_Init/3 (write)Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted/4 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (read)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)Dcm_Dsl_PostBootOperationsHandler_MainFunction/6 (write)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_PostBootOperationsHandler_Init (Dcm_Dsl_PostBootOperationsHandler_Init, funcdef_no=0, decl_uid=6565, cgraph_uid=1, symbol_order=3)

Modification phase of node Dcm_Dsl_PostBootOperationsHandler_Init/3
Dcm_Dsl_PostBootOperationsHandler_Init ()
{
  Dcm_EcuStartModeType EcuStartModeType;
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 4;
  # DEBUG BEGIN_STMT
  EcuStartModeType_8 = Dcm_GetProgConditions (&Dcm_ProgConditions);
  # DEBUG EcuStartModeType => EcuStartModeType_8
  # DEBUG BEGIN_STMT
  if (EcuStartModeType_8 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 7>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProgConditions.Sid;
  if (_1 == 16)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 186624919]:
  _2 = Dcm_ProgConditions.ApplUpdated;
  if (_2 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 37772884]:
  # DEBUG BEGIN_STMT
  BswM_Dcm_ApplicationUpdated ();

  <bb 6> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_InhibitRequestProcessing ();
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 0;
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing ();
  # DEBUG BEGIN_STMT
  if (EcuStartModeType_8 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 75, 2);

  <bb 9> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  Dcm_InhibitJumpToBootloader = 0;
  return;

}



;; Function Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted (Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted, funcdef_no=1, decl_uid=6571, cgraph_uid=2, symbol_order=4)

Modification phase of node Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted/4
Dcm_Dsl_PostBootOperationsHandler_ActionsCompleted ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 2;
  return;

}



;; Function Dcm_Dsl_PostBootOperationsHandler_JumpInhibited (Dcm_Dsl_PostBootOperationsHandler_JumpInhibited, funcdef_no=2, decl_uid=6569, cgraph_uid=3, symbol_order=5)

Modification phase of node Dcm_Dsl_PostBootOperationsHandler_JumpInhibited/5
Dcm_Dsl_PostBootOperationsHandler_JumpInhibited ()
{
  boolean _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_InhibitJumpToBootloader;
  return _2;

}



;; Function Dcm_Dsl_PostBootOperationsHandler_MainFunction (Dcm_Dsl_PostBootOperationsHandler_MainFunction, funcdef_no=3, decl_uid=6567, cgraph_uid=4, symbol_order=6)

Modification phase of node Dcm_Dsl_PostBootOperationsHandler_MainFunction/6
Dcm_Dsl_PostBootOperationsHandler_MainFunction ()
{
  Std_ReturnType SetProgConditionsReturn;
  struct Dcm_BufferType BootloaderResponseRequest;
  Dcm_RequestTypeType RequestType;
  Dcm_RequestOriginType RequestOrigin;
  uint16_least RxPduIdx;
  boolean TesterSourceAddrFound;
  unsigned char Dcm_PostBootOperationsState.0_1;
  unsigned char _2;
  int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  short unsigned int Dcm_RxPduIdBL.1_10;
  short unsigned int Dcm_RxPduIdBL.2_11;
  short unsigned int Dcm_RxPduIdBL.3_12;
  unsigned char _13;
  unsigned char _14;

  <bb 2> [local count: 308638235]:
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState.0_1 = Dcm_PostBootOperationsState;
  switch (Dcm_PostBootOperationsState.0_1) <default: <L33> [25.00%], case 0: <L37> [25.00%], case 2: <L15> [25.00%], case 3: <L19> [25.00%]>

  <bb 24> [local count: 77159559]:
<L37>:
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 996582266]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_RxPduIdConfig[RxPduIdx_16].MainConnectionIndex;
  _3 = (int) _2;
  _4 = Dcm_MainConnectionConfig[_3].TesterSourceAddress;
  _5 = Dcm_ProgConditions.TesterSourceAddr;
  if (_4 == _5)
    goto <bb 25>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 25> [local count: 328872148]:
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 667710118]:
  # RxPduIdx_38 = PHI <RxPduIdx_16(3)>
  # DEBUG BEGIN_STMT
  RxPduIdx_29 = RxPduIdx_38 + 1;
  # DEBUG RxPduIdx => RxPduIdx_29

  <bb 5> [local count: 744869677]:
  # TesterSourceAddrFound_27 = PHI <0(4), 0(24)>
  # RxPduIdx_28 = PHI <RxPduIdx_29(4), 0(24)>
<L34>:

  <bb 6> [local count: 1073741824]:
  # TesterSourceAddrFound_15 = PHI <TesterSourceAddrFound_27(5), 1(25)>
  # RxPduIdx_16 = PHI <RxPduIdx_28(5), RxPduIdx_16(25)>
  # DEBUG RxPduIdx => RxPduIdx_16
  # DEBUG TesterSourceAddrFound => TesterSourceAddrFound_15
  # DEBUG BEGIN_STMT
  if (RxPduIdx_16 <= 5)
    goto <bb 7>; [96.34%]
  else
    goto <bb 8>; [3.66%]

  <bb 7> [local count: 1034442875]:
  if (TesterSourceAddrFound_15 == 0)
    goto <bb 3>; [96.34%]
  else
    goto <bb 8>; [3.66%]

  <bb 8> [local count: 77159560]:
  # TesterSourceAddrFound_37 = PHI <TesterSourceAddrFound_15(6), TesterSourceAddrFound_15(7)>
  # RxPduIdx_49 = PHI <RxPduIdx_16(6), RxPduIdx_16(7)>
  # DEBUG BEGIN_STMT
  if (TesterSourceAddrFound_37 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 25462655]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 75, 6);
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 2;
  goto <bb 23>; [100.00%]

  <bb 10> [local count: 51696905]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) RxPduIdx_49;
  Dcm_RxPduIdBL = _6;
  # DEBUG BEGIN_STMT
  _7 = Dcm_ProgConditions.Sid;
  Dcm_BootloaderRequestToRespondTo[0] = _7;
  # DEBUG BEGIN_STMT
  _8 = Dcm_ProgConditions.SubFncId;
  Dcm_BootloaderRequestToRespondTo[1] = _8;
  # DEBUG BEGIN_STMT
  BootloaderResponseRequest.BufferPtr = &Dcm_BootloaderRequestToRespondTo[0];
  # DEBUG BEGIN_STMT
  BootloaderResponseRequest.FilledLength = 2;
  # DEBUG BEGIN_STMT
  BootloaderResponseRequest.Size = 2;
  # DEBUG BEGIN_STMT
  BootloaderResponseRequest.BufferId = 18;
  # DEBUG BEGIN_STMT
  _9 = Dcm_ProgConditions.ResponseRequired;
  if (_9 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 25848453]:
  # DEBUG BEGIN_STMT
  # DEBUG RequestOrigin => 5

  <bb 12> [local count: 51696905]:
  # RequestOrigin_17 = PHI <4(10), 5(11)>
  # DEBUG RequestOrigin => RequestOrigin_17
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_RxPduIdBL.1_10 = Dcm_RxPduIdBL;
  RequestType_41 = Dcm_Dsl_Supervisor_RequestRxPermission (Dcm_RxPduIdBL.1_10, 0, RequestOrigin_17);
  # DEBUG RequestType => RequestType_41
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_RxPduIdBL.2_11 = Dcm_RxPduIdBL;
  Dcm_Dsl_Supervisor_IncomingReception (Dcm_RxPduIdBL.2_11, RequestType_41);
  # DEBUG BEGIN_STMT
  Dcm_RxPduIdBL.3_12 = Dcm_RxPduIdBL;
  Dcm_Dsl_RxConnectionRxIndication (Dcm_RxPduIdBL.3_12, RequestType_41, BootloaderResponseRequest);
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  BootloaderResponseRequest ={v} {CLOBBER};
  goto <bb 23>; [100.00%]

  <bb 13> [local count: 77159559]:
<L15>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing ();
  # DEBUG BEGIN_STMT
  _13 = Dcm_ProgConditions.ResponseRequired;
  if (_13 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 14> [local count: 50925309]:
  _14 = Dcm_ProgConditions.ApplUpdated;
  if (_14 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 43548855]:
  # DEBUG BEGIN_STMT
  Dcm_ProgConditions.ResponseRequired = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProgConditions.ApplUpdated = 0;
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 3;
  # DEBUG BEGIN_STMT
  Dcm_InhibitJumpToBootloader = 1;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 33610704]:
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 4;
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 17> [local count: 120708414]:
<L19>:
  # DEBUG BEGIN_STMT
  # DEBUG SetProgConditionsReturn => 0
  # DEBUG BEGIN_STMT
  SetProgConditionsReturn_51 = Dcm_SetProgConditions (&Dcm_ProgConditions);
  # DEBUG SetProgConditionsReturn => SetProgConditionsReturn_51
  # DEBUG BEGIN_STMT
  if (SetProgConditionsReturn_51 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 60354207]:
  # DEBUG BEGIN_STMT
  Dcm_InhibitJumpToBootloader = 0;
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 4;
  goto <bb 23>; [100.00%]

  <bb 19> [local count: 60354207]:
  # DEBUG BEGIN_STMT
  if (SetProgConditionsReturn_51 == 10)
    goto <bb 23>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 20> [local count: 39833776]:
  # DEBUG BEGIN_STMT
  Dcm_InhibitJumpToBootloader = 0;
  # DEBUG BEGIN_STMT
  Dcm_PostBootOperationsState = 4;
  # DEBUG BEGIN_STMT
  if (SetProgConditionsReturn_51 == 1)
    goto <bb 21>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 21> [local count: 13543484]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 74, 9);
  goto <bb 23>; [100.00%]

  <bb 22> [local count: 26290292]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 74, 2);

  <bb 23> [local count: 308638236]:
<L33>:
  return;

}


