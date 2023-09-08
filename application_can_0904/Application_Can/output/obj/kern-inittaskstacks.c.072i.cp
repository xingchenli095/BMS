
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitTaskStacks/0:

 Propagating constants:

Not considering OS_InitTaskStacks for cloning; -fipa-cp-clone disabled.

overall_size: 18, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitTaskStacks/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nTasks/2 (OS_nTasks) @06c1b900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitTaskStacks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/1 (OS_taskTableBase) @06c1b8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitTaskStacks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitTaskStacks/0 (OS_InitTaskStacks) @06c3fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskTableBase/1 (read)OS_nTasks/2 (read)
  Referring: 
  Availability: available
  Function flags: count:14598062 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitTaskStacks (OS_InitTaskStacks, funcdef_no=0, decl_uid=6770, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitTaskStacks/0
__attribute__((target ("general-regs-only")))
OS_InitTaskStacks ()
{
  os_size_t numElems;
  os_stackelement_t * p;
  const struct os_task_t * const tp;
  os_taskid_t tid;
  const struct os_task_t * OS_taskTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned char OS_nTasks.2_5;

  <bb 2> [local count: 14598062]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG tid => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.0_1 = OS_taskTableBase;
  _2 = (unsigned int) tid_6;
  _3 = _2 * 76;
  tp_12 = OS_taskTableBase.0_1 + _3;
  # DEBUG tp => tp_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p_13 = tp_12->stackBase;
  # DEBUG p => p_13
  # DEBUG BEGIN_STMT
  _4 = tp_12->stackLen;
  numElems_14 = _4 >> 2;
  # DEBUG numElems => numElems_14
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  *p_7 = 3958107115;
  # DEBUG BEGIN_STMT
  p_17 = p_7 + 4;
  # DEBUG p => p_17
  # DEBUG BEGIN_STMT
  numElems_18 = numElems_8 + 4294967295;
  # DEBUG numElems => numElems_18

  <bb 5> [local count: 1073741824]:
  # p_7 = PHI <p_13(3), p_17(4)>
  # numElems_8 = PHI <numElems_14(3), numElems_18(4)>
  # DEBUG numElems => numElems_8
  # DEBUG p => p_7
  # DEBUG BEGIN_STMT
  if (numElems_8 != 0)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  tid_15 = tid_6 + 1;
  # DEBUG tid => tid_15

  <bb 7> [local count: 132709663]:
  # tid_6 = PHI <0(2), tid_15(6)>
  # DEBUG tid => tid_6
  # DEBUG BEGIN_STMT
  OS_nTasks.2_5 = OS_nTasks;
  if (OS_nTasks.2_5 > tid_6)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 14598063]:
  return;

}


