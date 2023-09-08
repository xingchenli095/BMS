
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12:
  Jump functions of caller  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/10:
  Jump functions of caller  ComM_HsmMainInst/8:
  Jump functions of caller  ComM_ProcessTimers/6:
  Jump functions of caller  ComM_PncMainFunction/5:
  Jump functions of caller  ComM_PncProcessTimers/4:
  Jump functions of caller  ComM_COMCbk_SGCanNmPnEiraRxNSdu/1:
  Jump functions of caller  ComM_MainFunction_0/0:
    indirect simple callsite, calling param -1, offset 0, for stmt ComM_RteNotificationDoActFkp.2_6 (0);
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR

 Propagating constants:

Not considering ComM_COMCbk_SGCanNmPnEiraRxNSdu for cloning; -fipa-cp-clone disabled.
Not considering ComM_MainFunction_0 for cloning; -fipa-cp-clone disabled.

overall_size: 34, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: ComM_COMCbk_SGCanNmPnEiraRxNSdu/1:
  Node: ComM_MainFunction_0/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0) @06d731c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_COMCbk_SGCanNmPnEiraRxNSdu/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_RxEiraSignalStatus/11 (ComM_RxEiraSignalStatus) @06d725e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_COMCbk_SGCanNmPnEiraRxNSdu/1 (write)
  Availability: not_available
  Varpool flags:
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/10 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0) @06d730e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_COMCbk_SGCanNmPnEiraRxNSdu/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_RteNotificationDoActFkp/9 (ComM_RteNotificationDoActFkp) @06d72360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_MainFunction_0/0 (read)
  Availability: not_available
  Varpool flags:
ComM_HsmMainInst/8 (ComM_HsmMainInst) @06d3f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_MainFunction_0/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
ComM_HsmScComM/7 (ComM_HsmScComM) @06d722d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_MainFunction_0/0 (read)ComM_MainFunction_0/0 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_ProcessTimers/6 (ComM_ProcessTimers) @06d3f1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_MainFunction_0/0 (536870911 (estimated locally),0.50 per call) 
  Calls: 
ComM_PncMainFunction/5 (ComM_PncMainFunction) @06d3fee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_MainFunction_0/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
ComM_PncProcessTimers/4 (ComM_PncProcessTimers) @06d3fe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_MainFunction_0/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
ComM_ConfigPtr/3 (ComM_ConfigPtr) @06d721b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_MainFunction_0/0 (read)
  Availability: not_available
  Varpool flags:
ComM_InitStatus/2 (ComM_InitStatus) @06d72168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_MainFunction_0/0 (read)
  Availability: not_available
  Varpool flags:
ComM_COMCbk_SGCanNmPnEiraRxNSdu/1 (ComM_COMCbk_SGCanNmPnEiraRxNSdu) @06d3fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_RxEiraSignalStatus/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (1073741824 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/10 (1073741824 (estimated locally),1.00 per call) 
ComM_MainFunction_0/0 (ComM_MainFunction_0) @06d3fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/2 (read)ComM_ConfigPtr/3 (read)ComM_HsmScComM/7 (read)ComM_HsmScComM/7 (addr)ComM_RteNotificationDoActFkp/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmMainInst/8 (177167401 (estimated locally),0.17 per call) ComM_ProcessTimers/6 (536870911 (estimated locally),0.50 per call) ComM_PncMainFunction/5 (177167401 (estimated locally),0.17 per call) ComM_PncProcessTimers/4 (177167401 (estimated locally),0.17 per call) 
   Indirect call(375809638 (estimated locally),0.35 per call) 

;; Function ComM_MainFunction_0 (ComM_MainFunction_0, funcdef_no=0, decl_uid=6462, cgraph_uid=1, symbol_order=0)

Modification phase of node ComM_MainFunction_0/0
ComM_MainFunction_0 ()
{
  unsigned char ComM_InitStatus.0_1;
  const struct ComM_ConfigType * ComM_ConfigPtr.1_2;
  unsigned char _3;
  struct ComM_HsmInstType * _4;
  unsigned char _5;
  void (*<T683>) (uint8) ComM_RteNotificationDoActFkp.2_6;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  ComM_InitStatus.0_1 = ComM_InitStatus;
  if (ComM_InitStatus.0_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.1_2 = ComM_ConfigPtr;
  _3 = ComM_ConfigPtr.1_2->ComMPncEnabled;
  if (_3 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  ComM_PncProcessTimers ();
  # DEBUG BEGIN_STMT
  ComM_PncMainFunction ();

  <bb 5> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  ComM_ProcessTimers (0);
  # DEBUG BEGIN_STMT
  _4 = ComM_HsmScComM.instances;
  _5 = _4->evQueueFill;
  if (_5 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  ComM_HsmMainInst (&ComM_HsmScComM, 0);

  <bb 7> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  ComM_RteNotificationDoActFkp.2_6 = ComM_RteNotificationDoActFkp;
  if (ComM_RteNotificationDoActFkp.2_6 != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 8> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  ComM_RteNotificationDoActFkp.2_6 (0);

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function ComM_COMCbk_SGCanNmPnEiraRxNSdu (ComM_COMCbk_SGCanNmPnEiraRxNSdu, funcdef_no=1, decl_uid=6135, cgraph_uid=2, symbol_order=1)

Modification phase of node ComM_COMCbk_SGCanNmPnEiraRxNSdu/1
ComM_COMCbk_SGCanNmPnEiraRxNSdu ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_RxEiraSignalStatus = 1;
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  return;

}


