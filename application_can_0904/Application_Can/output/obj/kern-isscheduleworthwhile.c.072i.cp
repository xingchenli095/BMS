
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_IsScheduleWorthwhile/0:

 Propagating constants:

Not considering OS_IsScheduleWorthwhile for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_IsScheduleWorthwhile/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_kernelData/2 (OS_kernelData) @06c38e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IsScheduleWorthwhile/0 (read)
  Availability: not_available
  Varpool flags:
OS_taskActivations/1 (OS_taskActivations) @06c38e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IsScheduleWorthwhile/0 (addr)
  Availability: not_available
  Varpool flags:
OS_IsScheduleWorthwhile/0 (OS_IsScheduleWorthwhile) @06c8ce00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/2 (read)OS_taskActivations/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_IsScheduleWorthwhile (OS_IsScheduleWorthwhile, funcdef_no=0, decl_uid=7574, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_IsScheduleWorthwhile/0
__attribute__((target ("general-regs-only")))
OS_IsScheduleWorthwhile ()
{
  const os_tasklink_t next;
  const os_tasklink_t link;
  struct os_taskdynamic_t * const td;
  const struct os_task_t * const current_task;
  os_boolean_t answer;
  short unsigned int _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  os_tasklink_t * _6;
  _Bool _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 1
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  current_task_10 = OS_kernelData.taskCurrent;
  # DEBUG current_task => current_task_10
  # DEBUG BEGIN_STMT
  if (current_task_10 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  td_11 = current_task_10->dynamic;
  # DEBUG td => td_11
  # DEBUG BEGIN_STMT
  _1 = current_task_10->linkBase;
  _2 = td_11->cAct;
  _3 = (short unsigned int) _2;
  link_12 = _1 + _3;
  # DEBUG link => link_12
  # DEBUG BEGIN_STMT
  _4 = (unsigned int) link_12;
  _5 = _4 * 2;
  _6 = &OS_taskActivations + _5;
  next_13 = *_6;
  # DEBUG next => next_13
  # DEBUG BEGIN_STMT
  _7 = next_13 != 0;
  answer_14 = (os_boolean_t) _7;
  # DEBUG answer => answer_14

  <bb 4> [local count: 1073741824]:
  # answer_8 = PHI <1(2), answer_14(3)>
  # DEBUG answer => answer_8
  # DEBUG BEGIN_STMT
  return answer_8;

}


