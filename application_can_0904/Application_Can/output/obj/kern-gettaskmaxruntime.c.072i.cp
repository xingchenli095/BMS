
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTaskMaxRuntime/0:

 Propagating constants:

Not considering OS_GetTaskMaxRuntime for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetTaskMaxRuntime/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_taskTableBase/2 (OS_taskTableBase) @06be8750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTaskMaxRuntime/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/1 (OS_nTasks) @06be8708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTaskMaxRuntime/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetTaskMaxRuntime/0 (OS_GetTaskMaxRuntime) @06c08a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_nTasks/1 (read)OS_taskTableBase/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_GetTaskMaxRuntime (OS_GetTaskMaxRuntime, funcdef_no=0, decl_uid=7408, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetTaskMaxRuntime/0
__attribute__((target ("general-regs-only")))
OS_GetTaskMaxRuntime (os_taskid_t t, os_tick_t * out)
{
  struct os_taskaccounting_t * ta;
  const struct os_task_t * ts;
  os_result_t r;
  unsigned char OS_nTasks.0_1;
  const struct os_task_t * OS_taskTableBase.1_2;
  unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  unsigned int _6;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_nTasks.0_1 = OS_nTasks;
  if (OS_nTasks.0_1 > t_11(D))
    goto <bb 3>; [65.00%]
  else
    goto <bb 5>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.1_2 = OS_taskTableBase;
  _3 = (unsigned int) t_11(D);
  _4 = _3 * 76;
  ts_12 = OS_taskTableBase.1_2 + _4;
  # DEBUG ts => ts_12
  # DEBUG BEGIN_STMT
  ta_13 = ts_12->accounting;
  # DEBUG ta => ta_13
  # DEBUG BEGIN_STMT
  _5 = ts_12->flags;
  _9 = _5 & 64;
  if (_9 != 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 5>; [35.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  _6 = ta_13->etMax;
  *out_14(D) = _6;
  # DEBUG BEGIN_STMT
  # DEBUG r => 0

  <bb 5> [local count: 1073741824]:
  # r_7 = PHI <3(2), 3(3), 0(4)>
  # DEBUG r => r_7
  # DEBUG BEGIN_STMT
  return r_7;

}


