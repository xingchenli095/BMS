
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KernActivateTask/4:
  Jump functions of caller  OS_ActivateAutoTasks/0:

 Propagating constants:

Not considering OS_ActivateAutoTasks for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ActivateAutoTasks/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nTasks/5 (OS_nTasks) @06ca9870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoTasks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_KernActivateTask/4 (OS_KernActivateTask) @06cc9c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ActivateAutoTasks/0 (955630223 (estimated locally),8.09 per call) 
  Calls: 
OS_autoStartTasks/3 (OS_autoStartTasks) @06ca97e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoTasks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_startModeTasks/2 (OS_startModeTasks) @06ca9798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoTasks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_appMode/1 (OS_appMode) @06ca9750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoTasks/0 (read)
  Availability: not_available
  Varpool flags:
OS_ActivateAutoTasks/0 (OS_ActivateAutoTasks) @06cc9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_appMode/1 (read)OS_startModeTasks/2 (read)OS_autoStartTasks/3 (read)OS_nTasks/5 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_KernActivateTask/4 (955630223 (estimated locally),8.09 per call) 

;; Function OS_ActivateAutoTasks (OS_ActivateAutoTasks, funcdef_no=0, decl_uid=6409, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ActivateAutoTasks/0
__attribute__((target ("general-regs-only")))
OS_ActivateAutoTasks ()
{
  os_uint16_t idx;
  unsigned char OS_appMode.0_1;
  int _2;
  int _3;
  unsigned char _4;
  unsigned char OS_nTasks.2_5;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  OS_appMode.0_1 = OS_appMode;
  _2 = (int) OS_appMode.0_1;
  idx_9 = OS_startModeTasks[_2];
  # DEBUG idx => idx_9
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  # DEBUG tid => _4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_KernActivateTask (_4);
  # DEBUG BEGIN_STMT
  idx_11 = idx_6 + 1;
  # DEBUG idx => idx_11

  <bb 4> [local count: 1073741824]:
  # idx_6 = PHI <idx_9(2), idx_11(3)>
  # DEBUG idx => idx_6
  # DEBUG BEGIN_STMT
  _3 = (int) idx_6;
  _4 = OS_autoStartTasks[_3];
  OS_nTasks.2_5 = OS_nTasks;
  if (_4 < OS_nTasks.2_5)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


