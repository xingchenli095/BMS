
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Read_SWC_Secured_R_SecuredData_CounterValue/1:
  Jump functions of caller  SWC_Secured_Data_Received/0:

 Propagating constants:

Not considering SWC_Secured_Data_Received for cloning; -fipa-cp-clone disabled.

overall_size: 13, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SWC_Secured_Data_Received/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Inst_SWC_Secured/2 (Rte_Inst_SWC_Secured) @06b75cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SWC_Secured_Data_Received/0 (read)
  Availability: not_available
  Varpool flags: read-only
Rte_Read_SWC_Secured_R_SecuredData_CounterValue/1 (Rte_Read_SWC_Secured_R_SecuredData_CounterValue) @06bad8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SWC_Secured_Data_Received/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SWC_Secured_Data_Received/0 (SWC_Secured_Data_Received) @06bad700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Rte_Inst_SWC_Secured/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Read_SWC_Secured_R_SecuredData_CounterValue/1 (1073741824 (estimated locally),1.00 per call) 

;; Function SWC_Secured_Data_Received (SWC_Secured_Data_Received, funcdef_no=0, decl_uid=5718, cgraph_uid=1, symbol_order=0)

Modification phase of node SWC_Secured_Data_Received/0
SWC_Secured_Data_Received ()
{
  uint8 arg_IWrite_data;
  uint8 arg_Read_data;
  unsigned char _1;
  unsigned char arg_Read_data.0_2;
  const struct Rte_CDS_SWC_Secured * Rte_Inst_SWC_Secured.1_3;
  struct Rte_DE_uint8 * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG arg_IWrite_data => 0
  # DEBUG BEGIN_STMT
  _1 = Rte_Read_SWC_Secured_R_SecuredData_CounterValue (&arg_Read_data);
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  arg_Read_data.0_2 = arg_Read_data;
  arg_IWrite_data_8 = arg_Read_data.0_2 + 1;
  # DEBUG arg_IWrite_data => arg_IWrite_data_8

  <bb 4> [local count: 1073741824]:
  # arg_IWrite_data_5 = PHI <0(2), arg_IWrite_data_8(3)>
  # DEBUG arg_IWrite_data => arg_IWrite_data_5
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_Secured.1_3 = Rte_Inst_SWC_Secured;
  _4 = Rte_Inst_SWC_Secured.1_3->UpdateSecureData_P_SecuredData_CounterValue;
  _4->value = arg_IWrite_data_5;
  arg_Read_data ={v} {CLOBBER};
  return;

}


