
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD/21:
  Jump functions of caller  Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD/20:
  Jump functions of caller  Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD/19:
  Jump functions of caller  Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD/18:
  Jump functions of caller  Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD/17:
  Jump functions of caller  Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue/16:
  Jump functions of caller  Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue/15:
  Jump functions of caller  Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue/14:
  Jump functions of caller  Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue/13:
  Jump functions of caller  Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage/12:
  Jump functions of caller  Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError/11:
  Jump functions of caller  WdgM_CheckpointReached/10:
  Jump functions of caller  Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus/9:
  Jump functions of caller  Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue/8:
  Jump functions of caller  Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue/7:
  Jump functions of caller  SWC_CyclicCounter_Cyclic_FD/5:
  Jump functions of caller  SWC_CyclicCounter_SetCounter_FD/4:
  Jump functions of caller  SWC_CyclicCounter_SetCounter/3:
  Jump functions of caller  SWC_CyclicCounter_Cyclic/2:
  Jump functions of caller  SWC_CyclicCounter_Shutdown/1:
  Jump functions of caller  SWC_CyclicCounter_Init/0:

 Propagating constants:

Not considering SWC_CyclicCounter_Cyclic_FD for cloning; -fipa-cp-clone disabled.
Not considering SWC_CyclicCounter_SetCounter_FD for cloning; -fipa-cp-clone disabled.
Not considering SWC_CyclicCounter_SetCounter for cloning; -fipa-cp-clone disabled.
Not considering SWC_CyclicCounter_Cyclic for cloning; -fipa-cp-clone disabled.
Not considering SWC_CyclicCounter_Shutdown for cloning; -fipa-cp-clone disabled.
Not considering SWC_CyclicCounter_Init for cloning; -fipa-cp-clone disabled.

overall_size: 90, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SWC_CyclicCounter_Cyclic_FD/5:
  Node: SWC_CyclicCounter_SetCounter_FD/4:
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
  Node: SWC_CyclicCounter_SetCounter/3:
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
  Node: SWC_CyclicCounter_Cyclic/2:
  Node: SWC_CyclicCounter_Shutdown/1:
  Node: SWC_CyclicCounter_Init/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD/21 (Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD) @06c26c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic_FD/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD/20 (Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD) @06c26b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic_FD/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD/19 (Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD) @06c26a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic_FD/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD/18 (Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD) @06c268c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_SetCounter_FD/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD/17 (Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD) @06c267e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_SetCounter_FD/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue/16 (Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue) @06c26620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_SetCounter/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue/15 (Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue) @06c26540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_SetCounter/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue/14 (Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue) @06c26380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (49925951 (estimated locally),0.33 per call) 
  Calls: 
Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue/13 (Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue) @06c262a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (24962975 (estimated locally),0.16 per call) SWC_CyclicCounter_Cyclic/2 (24962975 (estimated locally),0.16 per call) 
  Calls: 
Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage/12 (Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage) @06c261c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (1073741824 (estimated locally),7.10 per call) 
  Calls: 
Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError/11 (Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError) @06c260e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (186704095 (estimated locally),1.23 per call) 
  Calls: 
WdgM_CheckpointReached/10 (WdgM_CheckpointReached) @06c26000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (151290760 (estimated locally),1.00 per call) 
  Calls: 
Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus/9 (Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus) @06c09e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Shutdown/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue/8 (Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue) @06c09d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (49925951 (estimated locally),0.33 per call) SWC_CyclicCounter_Shutdown/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue/7 (Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue) @06c09b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_CyclicCounter_Cyclic/2 (49925951 (estimated locally),0.33 per call) SWC_CyclicCounter_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Inst_SWC_CyclicCounter/6 (Rte_Inst_SWC_CyclicCounter) @06b8edc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SWC_CyclicCounter_Init/0 (read)SWC_CyclicCounter_Shutdown/1 (read)
  Availability: not_available
  Varpool flags: read-only
SWC_CyclicCounter_Cyclic_FD/5 (SWC_CyclicCounter_Cyclic_FD) @06c099a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD/21 (1073741824 (estimated locally),1.00 per call) Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD/20 (1073741824 (estimated locally),1.00 per call) Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD/19 (1073741824 (estimated locally),1.00 per call) 
SWC_CyclicCounter_SetCounter_FD/4 (SWC_CyclicCounter_SetCounter_FD) @06c097e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD/18 (1073741824 (estimated locally),1.00 per call) Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD/17 (1073741824 (estimated locally),1.00 per call) 
SWC_CyclicCounter_SetCounter/3 (SWC_CyclicCounter_SetCounter) @06c09620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue/16 (1073741824 (estimated locally),1.00 per call) Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue/15 (1073741824 (estimated locally),1.00 per call) 
SWC_CyclicCounter_Cyclic/2 (SWC_CyclicCounter_Cyclic) @06c09460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:151290760 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue/14 (49925951 (estimated locally),0.33 per call) Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue/7 (49925951 (estimated locally),0.33 per call) Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue/13 (24962975 (estimated locally),0.16 per call) Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue/13 (24962975 (estimated locally),0.16 per call) Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue/8 (49925951 (estimated locally),0.33 per call) Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage/12 (1073741824 (estimated locally),7.10 per call) Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError/11 (186704095 (estimated locally),1.23 per call) WdgM_CheckpointReached/10 (151290760 (estimated locally),1.00 per call) 
SWC_CyclicCounter_Shutdown/1 (SWC_CyclicCounter_Shutdown) @06c092a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Rte_Inst_SWC_CyclicCounter/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus/9 (1073741824 (estimated locally),1.00 per call) Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue/8 (1073741824 (estimated locally),1.00 per call) 
SWC_CyclicCounter_Init/0 (SWC_CyclicCounter_Init) @06c090e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Rte_Inst_SWC_CyclicCounter/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue/7 (1073741824 (estimated locally),1.00 per call) 

;; Function SWC_CyclicCounter_Init (SWC_CyclicCounter_Init, funcdef_no=0, decl_uid=5724, cgraph_uid=1, symbol_order=0)

Modification phase of node SWC_CyclicCounter_Init/0
SWC_CyclicCounter_Init ()
{
  uint8 counterValue;
  const struct Rte_CDS_SWC_CyclicCounter * Rte_Inst_SWC_CyclicCounter.0_1;
  Rte_PimType_SWC_CyclicCounter_CounterValueType * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG counterValue => 0
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_CyclicCounter.0_1 = Rte_Inst_SWC_CyclicCounter;
  _2 = Rte_Inst_SWC_CyclicCounter.0_1->Pim_PimCounterValue;
  counterValue_4 = *_2;
  # DEBUG counterValue => counterValue_4
  # DEBUG BEGIN_STMT
  Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue (counterValue_4);
  return;

}



;; Function SWC_CyclicCounter_Shutdown (SWC_CyclicCounter_Shutdown, funcdef_no=1, decl_uid=5732, cgraph_uid=2, symbol_order=1)

Modification phase of node SWC_CyclicCounter_Shutdown/1
SWC_CyclicCounter_Shutdown ()
{
  uint8 counterValue;
  const struct Rte_CDS_SWC_CyclicCounter * Rte_Inst_SWC_CyclicCounter.1_1;
  Rte_PimType_SWC_CyclicCounter_CounterValueType * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG counterValue => 0
  # DEBUG BEGIN_STMT
  counterValue_5 = Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue ();
  # DEBUG counterValue => counterValue_5
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_CyclicCounter.1_1 = Rte_Inst_SWC_CyclicCounter;
  _2 = Rte_Inst_SWC_CyclicCounter.1_1->Pim_PimCounterValue;
  *_2 = counterValue_5;
  # DEBUG BEGIN_STMT
  Rte_Call_SWC_CyclicCounter_PS_PersistentCounterValue_SetRamBlockStatus (1);
  return;

}



;; Function SWC_CyclicCounter_Cyclic (SWC_CyclicCounter_Cyclic, funcdef_no=2, decl_uid=5720, cgraph_uid=3, symbol_order=2)

Modification phase of node SWC_CyclicCounter_Cyclic/2
SWC_CyclicCounter_Cyclic ()
{
  boolean specialReceiveCommand;
  uint8 i;
  uint8 specialReceiveCommands[10];
  uint8 counterValue;
  unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  int _4;
  unsigned char _5;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 151290760]:
  # DEBUG BEGIN_STMT
  # DEBUG counterValue => 0
  # DEBUG BEGIN_STMT
  specialReceiveCommands = "\x00";
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG specialReceiveCommand => 0
  # DEBUG BEGIN_STMT
  WdgM_CheckpointReached (1, 0);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  if (i_10 == 10)
    goto <bb 8>; [9.09%]
  else
    goto <bb 4>; [90.91%]

  <bb 4> [local count: 922451064]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) i_10;
  _2 = 9 - _1;
  _3 = specialReceiveCommands[0];
  specialReceiveCommands[_2] = _3;
  # DEBUG BEGIN_STMT
  _4 = (int) i_10;
  _5 = specialReceiveCommands[_4];
  if (_5 == 241)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 186704095]:
  # DEBUG BEGIN_STMT
  Rte_Call_SWC_CyclicCounter_R_CyclicCounterDet_ReportError (1, 2, 3);
  # DEBUG BEGIN_STMT
  # DEBUG specialReceiveCommand => 1

  <bb 6> [local count: 922451064]:
  # specialReceiveCommand_11 = PHI <specialReceiveCommand_12(4), 1(5)>
  # DEBUG specialReceiveCommand => specialReceiveCommand_11
  # DEBUG BEGIN_STMT
  i_23 = i_10 + 1;
  # DEBUG i => i_23

  <bb 7> [local count: 1073741824]:
  # i_10 = PHI <0(2), i_23(6)>
  # specialReceiveCommand_12 = PHI <0(2), specialReceiveCommand_11(6)>
  # DEBUG specialReceiveCommand => specialReceiveCommand_12
  # DEBUG i => i_10
  # DEBUG BEGIN_STMT
  _7 = Rte_Receive_SWC_CyclicCounter_R_SpecialHandling_EventMessage (&specialReceiveCommands[0]);
  if (_7 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 151290760]:
  # specialReceiveCommand_6 = PHI <specialReceiveCommand_12(3), specialReceiveCommand_12(7)>
  # DEBUG BEGIN_STMT
  if (specialReceiveCommand_6 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 9> [local count: 49925951]:
  # DEBUG BEGIN_STMT
  counterValue_25 = Rte_IrvRead_SWC_CyclicCounter_Cyclic_CurrentCounterValue ();
  # DEBUG counterValue => counterValue_25
  # DEBUG BEGIN_STMT
  _8 = counterValue_25 & 1;
  if (_8 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 24962975]:
  # DEBUG BEGIN_STMT
  Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue (1);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 24962975]:
  # DEBUG BEGIN_STMT
  Rte_Call_SWC_CyclicCounter_R_MyLED_SetDiscreteValue (0);

  <bb 12> [local count: 49925951]:
  # DEBUG BEGIN_STMT
  _9 = counterValue_25 + 1;
  Rte_IrvWrite_SWC_CyclicCounter_Cyclic_CurrentCounterValue (_9);
  # DEBUG BEGIN_STMT
  Rte_Write_SWC_CyclicCounter_P_CounterOut_CounterValue (counterValue_25);

  <bb 13> [local count: 151290760]:
  specialReceiveCommands ={v} {CLOBBER};
  return;

}



;; Function SWC_CyclicCounter_SetCounter (SWC_CyclicCounter_SetCounter, funcdef_no=3, decl_uid=5727, cgraph_uid=4, symbol_order=3)

Modification phase of node SWC_CyclicCounter_SetCounter/3
SWC_CyclicCounter_SetCounter (uint8 newCounterValue, uint8 * returnSum)
{
  uint8 currentCounter;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG currentCounter => 0
  # DEBUG BEGIN_STMT
  currentCounter_4 = Rte_IrvRead_SWC_CyclicCounter_SetCounter_CurrentCounterValue ();
  # DEBUG currentCounter => currentCounter_4
  # DEBUG BEGIN_STMT
  Rte_IrvWrite_SWC_CyclicCounter_SetCounter_CurrentCounterValue (newCounterValue_5(D));
  # DEBUG BEGIN_STMT
  _1 = currentCounter_4 + newCounterValue_5(D);
  *returnSum_7(D) = _1;
  return;

}



;; Function SWC_CyclicCounter_SetCounter_FD (SWC_CyclicCounter_SetCounter_FD, funcdef_no=4, decl_uid=5730, cgraph_uid=5, symbol_order=4)

Modification phase of node SWC_CyclicCounter_SetCounter_FD/4
SWC_CyclicCounter_SetCounter_FD (uint8 newCounterValue, uint8 * returnSum)
{
  uint8 currentCounter;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG currentCounter => 0
  # DEBUG BEGIN_STMT
  currentCounter_4 = Rte_IrvRead_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD ();
  # DEBUG currentCounter => currentCounter_4
  # DEBUG BEGIN_STMT
  Rte_IrvWrite_SWC_CyclicCounter_SetCounter_FD_CurrentCounterValue_FD (newCounterValue_5(D));
  # DEBUG BEGIN_STMT
  _1 = currentCounter_4 + newCounterValue_5(D);
  *returnSum_7(D) = _1;
  return;

}



;; Function SWC_CyclicCounter_Cyclic_FD (SWC_CyclicCounter_Cyclic_FD, funcdef_no=5, decl_uid=5722, cgraph_uid=6, symbol_order=5)

Modification phase of node SWC_CyclicCounter_Cyclic_FD/5
SWC_CyclicCounter_Cyclic_FD ()
{
  uint8 counterValue;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG counterValue => 0
  # DEBUG BEGIN_STMT
  counterValue_4 = Rte_IrvRead_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD ();
  # DEBUG counterValue => counterValue_4
  # DEBUG BEGIN_STMT
  _1 = counterValue_4 + 1;
  Rte_IrvWrite_SWC_CyclicCounter_Cyclic_FD_CurrentCounterValue_FD (_1);
  # DEBUG BEGIN_STMT
  Rte_Write_SWC_CyclicCounter_P_CounterOut_FD_CounterValue_FD (counterValue_4);
  return;

}


