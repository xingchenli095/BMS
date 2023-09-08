
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitTasks/0:

 Propagating constants:

Not considering OS_InitTasks for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitTasks/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nTasks/2 (OS_nTasks) @06c77828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitTasks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/1 (OS_taskTableBase) @06c777e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitTasks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitTasks/0 (OS_InitTasks) @06c9ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskTableBase/1 (read)OS_nTasks/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitTasks (OS_InitTasks, funcdef_no=0, decl_uid=6772, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitTasks/0
__attribute__((target ("general-regs-only")))
OS_InitTasks ()
{
  const struct os_task_t * const tp;
  os_taskid_t tid;
  const struct os_task_t * OS_taskTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  struct os_taskdynamic_t * _4;
  unsigned char OS_nTasks.2_5;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG tid => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.0_1 = OS_taskTableBase;
  _2 = (unsigned int) tid_6;
  _3 = _2 * 76;
  tp_9 = OS_taskTableBase.0_1 + _3;
  # DEBUG tp => tp_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = tp_9->dynamic;
  _4->lastLock = 4294967295;
  # DEBUG BEGIN_STMT
  tid_11 = tid_6 + 1;
  # DEBUG tid => tid_11

  <bb 4> [local count: 1073741824]:
  # tid_6 = PHI <0(2), tid_11(3)>
  # DEBUG tid => tid_6
  # DEBUG BEGIN_STMT
  OS_nTasks.2_5 = OS_nTasks;
  if (OS_nTasks.2_5 > tid_6)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


