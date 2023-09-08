
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD/7:
  Jump functions of caller  Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD/6:
  Jump functions of caller  Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd/5:
  Jump functions of caller  Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage/3:
  Jump functions of caller  Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue/2:
  Jump functions of caller  SWC_ModifyEcho_ModifyEcho_FD/1:
  Jump functions of caller  SWC_ModifyEcho_ModifyEcho/0:

 Propagating constants:

Not considering SWC_ModifyEcho_ModifyEcho_FD for cloning; -fipa-cp-clone disabled.
Not considering SWC_ModifyEcho_ModifyEcho for cloning; -fipa-cp-clone disabled.

overall_size: 38, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SWC_ModifyEcho_ModifyEcho_FD/1:
  Node: SWC_ModifyEcho_ModifyEcho/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD/7 (Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD) @06ba9000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_ModifyEcho_ModifyEcho_FD/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD/6 (Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD) @06b6e540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_ModifyEcho_ModifyEcho_FD/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd/5 (Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd) @06b6eee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_ModifyEcho_ModifyEcho/0 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Rte_Inst_SWC_ModifyEcho/4 (Rte_Inst_SWC_ModifyEcho) @06ba7090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SWC_ModifyEcho_ModifyEcho/0 (read)SWC_ModifyEcho_ModifyEcho/0 (read)SWC_ModifyEcho_ModifyEcho_FD/1 (read)
  Availability: not_available
  Varpool flags: read-only
Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage/3 (Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage) @06b6ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_ModifyEcho_ModifyEcho/0 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue/2 (Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue) @06b6ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_ModifyEcho_ModifyEcho/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SWC_ModifyEcho_ModifyEcho_FD/1 (SWC_ModifyEcho_ModifyEcho_FD) @06b6eb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Rte_Inst_SWC_ModifyEcho/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD/7 (1073741824 (estimated locally),1.00 per call) Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD/6 (1073741824 (estimated locally),1.00 per call) 
SWC_ModifyEcho_ModifyEcho/0 (SWC_ModifyEcho_ModifyEcho) @06b6e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Rte_Inst_SWC_ModifyEcho/4 (read)Rte_Inst_SWC_ModifyEcho/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd/5 (536870913 (estimated locally),0.50 per call) Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage/3 (536870913 (estimated locally),0.50 per call) Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue/2 (1073741824 (estimated locally),1.00 per call) 

;; Function SWC_ModifyEcho_ModifyEcho (SWC_ModifyEcho_ModifyEcho, funcdef_no=0, decl_uid=5718, cgraph_uid=1, symbol_order=0)

Modification phase of node SWC_ModifyEcho_ModifyEcho/0
SWC_ModifyEcho_ModifyEcho ()
{
  uint8 inputValue;
  uint8 echoValue;
  unsigned char inputValue.0_1;
  const struct Rte_CDS_SWC_ModifyEcho * Rte_Inst_SWC_ModifyEcho.2_2;
  struct Rte_DE_uint8 * _3;
  unsigned char inputValue.3_4;
  const struct Rte_CDS_SWC_ModifyEcho * Rte_Inst_SWC_ModifyEcho.5_5;
  struct Rte_DE_uint8 * _6;
  unsigned char echoValue.6_7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  echoValue = 0;
  # DEBUG BEGIN_STMT
  inputValue = 0;
  # DEBUG BEGIN_STMT
  Rte_Read_SWC_ModifyEcho_R_NewCounterIn_CounterValue (&inputValue);
  # DEBUG BEGIN_STMT
  inputValue.0_1 = inputValue;
  if (inputValue.0_1 > 239)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Rte_Send_SWC_ModifyEcho_P_SpecialRequest_EventMessage (inputValue.0_1);
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_ModifyEcho.2_2 = Rte_Inst_SWC_ModifyEcho;
  _3 = Rte_Inst_SWC_ModifyEcho.2_2->ModifyEcho_P_EchoOut_CounterValue;
  inputValue.3_4 = inputValue;
  _3->value = inputValue.3_4;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Rte_Call_SWC_ModifyEcho_R_EchoResult_SetCounterAndAdd (inputValue.0_1, &echoValue);
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_ModifyEcho.5_5 = Rte_Inst_SWC_ModifyEcho;
  _6 = Rte_Inst_SWC_ModifyEcho.5_5->ModifyEcho_P_EchoOut_CounterValue;
  echoValue.6_7 = echoValue;
  _6->value = echoValue.6_7;

  <bb 5> [local count: 1073741824]:
  echoValue ={v} {CLOBBER};
  inputValue ={v} {CLOBBER};
  return;

}



;; Function SWC_ModifyEcho_ModifyEcho_FD (SWC_ModifyEcho_ModifyEcho_FD, funcdef_no=1, decl_uid=5720, cgraph_uid=2, symbol_order=1)

Modification phase of node SWC_ModifyEcho_ModifyEcho_FD/1
SWC_ModifyEcho_ModifyEcho_FD ()
{
  uint8 echoValue;
  uint8 inputValue;
  unsigned char inputValue.7_1;
  const struct Rte_CDS_SWC_ModifyEcho * Rte_Inst_SWC_ModifyEcho.8_2;
  struct Rte_DE_uint8 * _3;
  unsigned char echoValue.9_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  inputValue = 0;
  # DEBUG BEGIN_STMT
  echoValue = 0;
  # DEBUG BEGIN_STMT
  Rte_Read_SWC_ModifyEcho_R_NewCounterIn_FD_CounterValue_FD (&inputValue);
  # DEBUG BEGIN_STMT
  inputValue.7_1 = inputValue;
  Rte_Call_SWC_ModifyEcho_R_EchoResult_FD_SetCounterAndAdd_FD (inputValue.7_1, &echoValue);
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_ModifyEcho.8_2 = Rte_Inst_SWC_ModifyEcho;
  _3 = Rte_Inst_SWC_ModifyEcho.8_2->ModifyEcho_FD_P_EchoOut_FD_CounterValue_FD;
  echoValue.9_4 = echoValue;
  _3->value = echoValue.9_4;
  inputValue ={v} {CLOBBER};
  echoValue ={v} {CLOBBER};
  return;

}


