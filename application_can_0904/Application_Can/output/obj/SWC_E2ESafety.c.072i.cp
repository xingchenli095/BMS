
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Send_SWC_E2ESafety_P_E2E_SafeData_E2EProt_Data/5:
  Jump functions of caller  Rte_Receive_SWC_E2ESafety_R_E2E_SafeData_E2EProt_Data/3:
  Jump functions of caller  SWC_E2EProtSafe_Data_Cyclic/2:
  Jump functions of caller  SWC_E2EProtSafe_Data_Received/1:

 Propagating constants:

Not considering SWC_E2EProtSafe_Data_Cyclic for cloning; -fipa-cp-clone disabled.
Not considering SWC_E2EProtSafe_Data_Received for cloning; -fipa-cp-clone disabled.

overall_size: 27, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SWC_E2EProtSafe_Data_Cyclic/2:
  Node: SWC_E2EProtSafe_Data_Received/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Send_SWC_E2ESafety_P_E2E_SafeData_E2EProt_Data/5 (Rte_Send_SWC_E2ESafety_P_E2E_SafeData_E2EProt_Data) @06b4dc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_E2EProtSafe_Data_Cyclic/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Inst_SWC_E2ESafety/4 (Rte_Inst_SWC_E2ESafety) @06b23ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SWC_E2EProtSafe_Data_Received/1 (read)
  Availability: not_available
  Varpool flags: read-only
Rte_Receive_SWC_E2ESafety_R_E2E_SafeData_E2EProt_Data/3 (Rte_Receive_SWC_E2ESafety_R_E2E_SafeData_E2EProt_Data) @06b4da80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_E2EProtSafe_Data_Received/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SWC_E2EProtSafe_Data_Cyclic/2 (SWC_E2EProtSafe_Data_Cyclic) @06b4d8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: E2E_Data_Safety/0 (read)E2E_Data_Safety/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Send_SWC_E2ESafety_P_E2E_SafeData_E2EProt_Data/5 (1073741824 (estimated locally),1.00 per call) 
SWC_E2EProtSafe_Data_Received/1 (SWC_E2EProtSafe_Data_Received) @06b4d700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: E2E_Data_Safety/0 (read)E2E_Data_Safety/0 (write)Rte_Inst_SWC_E2ESafety/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Receive_SWC_E2ESafety_R_E2E_SafeData_E2EProt_Data/3 (1073741824 (estimated locally),1.00 per call) 
E2E_Data_Safety/0 (E2E_Data_Safety) @06b23bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: SWC_E2EProtSafe_Data_Received/1 (read)SWC_E2EProtSafe_Data_Received/1 (write)SWC_E2EProtSafe_Data_Cyclic/2 (read)SWC_E2EProtSafe_Data_Cyclic/2 (write)
  Availability: available
  Varpool flags: initialized

;; Function SWC_E2EProtSafe_Data_Received (SWC_E2EProtSafe_Data_Received, funcdef_no=0, decl_uid=5718, cgraph_uid=1, symbol_order=1)

Modification phase of node SWC_E2EProtSafe_Data_Received/1
SWC_E2EProtSafe_Data_Received ()
{
  struct E2EProt_Data arg_Receive_data;
  unsigned char E2E_Data_Safety.0_1;
  unsigned char _2;
  unsigned char _3;
  const struct Rte_CDS_SWC_E2ESafety * Rte_Inst_SWC_E2ESafety.1_4;
  struct Rte_DE_E2EProt_Data * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  E2E_Data_Safety.0_1 = E2E_Data_Safety;
  # DEBUG arg_IWrite_data$SafetyE2E_Data => E2E_Data_Safety.0_1
  # DEBUG arg_IWrite_data$SafetyE2E_Data_CRC => 0
  # DEBUG arg_IWrite_data$SafetyE2E_Data_SQC_Counter => 0
  # DEBUG BEGIN_STMT
  _2 = Rte_Receive_SWC_E2ESafety_R_E2E_SafeData_E2EProt_Data (&arg_Receive_data);
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = arg_Receive_data.SafetyE2E_Data;
  E2E_Data_Safety = _3;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_E2ESafety.1_4 = Rte_Inst_SWC_E2ESafety;
  _5 = Rte_Inst_SWC_E2ESafety.1_4->UpdateE2EProtSafeData_P_E2E_SafeData_E2EProt_Data;
  MEM[(struct Rte_DE_E2EProt_Data *)_5] = E2E_Data_Safety.0_1;
  MEM[(struct Rte_DE_E2EProt_Data *)_5 + 2B] = 0;
  MEM[(struct Rte_DE_E2EProt_Data *)_5 + 4B] = 0;
  arg_Receive_data ={v} {CLOBBER};
  # DEBUG D#1 => {CLOBBER}
  # DEBUG arg_IWrite_data$SafetyE2E_Data => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG arg_IWrite_data$SafetyE2E_Data_CRC => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG arg_IWrite_data$SafetyE2E_Data_SQC_Counter => D#3
  return;

}



;; Function SWC_E2EProtSafe_Data_Cyclic (SWC_E2EProtSafe_Data_Cyclic, funcdef_no=1, decl_uid=5720, cgraph_uid=2, symbol_order=2)

Modification phase of node SWC_E2EProtSafe_Data_Cyclic/2
SWC_E2EProtSafe_Data_Cyclic ()
{
  struct E2EProt_Data arg_Send_data;
  unsigned char E2E_Data_Safety.2_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  E2E_Data_Safety.2_1 = E2E_Data_Safety;
  _2 = E2E_Data_Safety.2_1 + 1;
  E2E_Data_Safety = _2;
  arg_Send_data.SafetyE2E_Data = _2;
  arg_Send_data.SafetyE2E_Data_CRC = 0;
  arg_Send_data.SafetyE2E_Data_SQC_Counter = 0;
  # DEBUG BEGIN_STMT
  Rte_Send_SWC_E2ESafety_P_E2E_SafeData_E2EProt_Data (&arg_Send_data);
  arg_Send_data ={v} {CLOBBER};
  return;

}


