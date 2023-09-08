
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode/3:
  Jump functions of caller  Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/2:
  Jump functions of caller  App_StateHandler/0:

 Propagating constants:

Not considering App_StateHandler for cloning; -fipa-cp-clone disabled.

overall_size: 21, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: App_StateHandler/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode/3 (Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode) @06acd9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: App_StateHandler/0 (268435456 (estimated locally),0.25 per call) App_StateHandler/0 (268435456 (estimated locally),0.25 per call) App_StateHandler/0 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/2 (Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode) @06acd8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: App_StateHandler/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Inst_SWC_AppStateHandler/1 (Rte_Inst_SWC_AppStateHandler) @06aa4e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: App_StateHandler/0 (read)
  Availability: not_available
  Varpool flags: read-only
App_StateHandler/0 (App_StateHandler) @06acd700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Rte_Inst_SWC_AppStateHandler/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode/3 (268435456 (estimated locally),0.25 per call) Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode/3 (268435456 (estimated locally),0.25 per call) Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode/3 (268435456 (estimated locally),0.25 per call) Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/2 (1073741824 (estimated locally),1.00 per call) 

;; Function App_StateHandler (App_StateHandler, funcdef_no=0, decl_uid=5719, cgraph_uid=1, symbol_order=0)

Modification phase of node App_StateHandler/0
App_StateHandler ()
{
  AppStateModeRequestType reqMode;
  const struct Rte_CDS_SWC_AppStateHandler * Rte_Inst_SWC_AppStateHandler.0_1;
  struct Rte_DE_AppStateModeRequestType * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Rte_Inst_SWC_AppStateHandler.0_1 = Rte_Inst_SWC_AppStateHandler;
  _2 = Rte_Inst_SWC_AppStateHandler.0_1->Runable_StateHandler_AppStateRequest_If_AppStateRequestMode;
  reqMode_5 = _2->value;
  # DEBUG reqMode => reqMode_5
  # DEBUG BEGIN_STMT
  Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode ();
  # DEBUG currentMode => NULL
  # DEBUG BEGIN_STMT
  switch (reqMode_5) <default: <L5> [25.00%], case 1: <L0> [25.00%], case 2: <L1> [25.00%], case 3: <L2> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode (1);
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode (2);
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  Rte_Switch_SWC_AppStateHandler_AppState_AppStateMode (3);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
<L5>:
  return;

}


