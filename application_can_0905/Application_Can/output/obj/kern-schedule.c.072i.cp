
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RequeueDown/9:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/7:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernSchedule/0:

 Propagating constants:

Not considering OS_KernSchedule for cloning; -fipa-cp-clone disabled.

overall_size: 74, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernSchedule/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_RequeueDown/9 (OS_RequeueDown) @06d741c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSchedule/0 (5204159 (estimated locally),0.00 per call) 
  Calls: 
OS_taskPtrs/8 (OS_taskPtrs) @06dbb120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/7 (OS_CORTEXM_IntSetDisablingLevel) @06d740e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSchedule/0 (92765758 (estimated locally),0.09 per call) OS_KernSchedule/0 (92765758 (estimated locally),0.09 per call) 
  Calls: 
OS_kernDisableLevel/6 (OS_kernDisableLevel) @06dbb090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskActivations/5 (OS_taskActivations) @06dbb048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSchedule/0 (addr)
  Availability: not_available
  Varpool flags:
OS_svc_Schedule/4 (OS_svc_Schedule) @06ca4f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSchedule/0 (addr)OS_KernSchedule/0 (addr)OS_KernSchedule/0 (addr)OS_KernSchedule/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06cc9000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSchedule/0 (524845004 (estimated locally),0.49 per call) OS_KernSchedule/0 (241271637 (estimated locally),0.22 per call) OS_KernSchedule/0 (124291449 (estimated locally),0.12 per call) OS_KernSchedule/0 (90567975 (estimated locally),0.08 per call) 
  Calls: 
OS_iecMode/2 (OS_iecMode) @06ca4ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06ca4e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSchedule/0 (read)OS_KernSchedule/0 (read)OS_KernSchedule/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernSchedule/0 (OS_KernSchedule) @06cc9d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_iecMode/2 (read)OS_svc_Schedule/4 (addr)OS_svc_Schedule/4 (addr)OS_svc_Schedule/4 (addr)OS_kernDisableLevel/6 (read)OS_kernelData/1 (read)OS_taskActivations/5 (addr)OS_taskPtrs/8 (read)OS_svc_Schedule/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (524845004 (estimated locally),0.49 per call) OS_CORTEXM_IntSetDisablingLevel/7 (92765758 (estimated locally),0.09 per call) OS_RequeueDown/9 (5204159 (estimated locally),0.00 per call) OS_CORTEXM_IntSetDisablingLevel/7 (92765758 (estimated locally),0.09 per call) OS_Error/3 (241271637 (estimated locally),0.22 per call) OS_Error/3 (124291449 (estimated locally),0.12 per call) OS_Error/3 (90567975 (estimated locally),0.08 per call) 

;; Function OS_KernSchedule (OS_KernSchedule, funcdef_no=0, decl_uid=7200, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernSchedule/0
__attribute__((target ("general-regs-only")))
OS_KernSchedule ()
{
  os_tasklink_t next;
  os_tasklink_t link;
  struct os_taskdynamic_t * td;
  os_result_t r;
  os_intstatus_t is;
  unsigned char _1;
  const struct os_task_t * _2;
  unsigned char OS_iecMode.0_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  short unsigned int OS_kernDisableLevel.1_7;
  const struct os_task_t * _8;
  short unsigned int _9;
  unsigned char _10;
  short unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  os_tasklink_t * _14;
  unsigned char _15;
  unsigned char _16;
  int _17;
  int _18;
  const struct os_task_t * _19;
  short unsigned int _20;
  int _21;
  struct os_taskdynamic_t * _22;
  unsigned char _23;
  int _24;
  int _25;
  short unsigned int _26;
  unsigned char _27;
  short unsigned int _28;
  int iftmp.2_30;
  int iftmp.2_43;
  int iftmp.2_44;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 18>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.taskCurrent;
  td_36 = _2->dynamic;
  # DEBUG td => td_36
  # DEBUG BEGIN_STMT
  OS_iecMode.0_3 = OS_iecMode;
  if (OS_iecMode.0_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 274448410]:
  _4 = BIT_FIELD_REF <MEM[(void *)td_36], 16, 160>;
  if (_4 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 90567975]:
  # DEBUG BEGIN_STMT
  r_38 = OS_Error (&OS_svc_Schedule, 55, 0B);
  # DEBUG r => r_38
  goto <bb 19>; [100.00%]

  <bb 6> [local count: 458328844]:
  # DEBUG BEGIN_STMT
  _5 = td_36->lastLock;
  if (_5 != 4294967295)
    goto <bb 7>; [79.76%]
  else
    goto <bb 10>; [20.24%]

  <bb 7> [local count: 365563086]:
  # DEBUG BEGIN_STMT
  _6 = _5 >> 24;
  if (_6 == 9)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 124291449]:
  # DEBUG BEGIN_STMT
  r_51 = OS_Error (&OS_svc_Schedule, 156, 0B);
  # DEBUG r => r_51
  goto <bb 19>; [100.00%]

  <bb 9> [local count: 241271637]:
  # DEBUG BEGIN_STMT
  r_49 = OS_Error (&OS_svc_Schedule, 13, 0B);
  # DEBUG r => r_49
  goto <bb 19>; [100.00%]

  <bb 10> [local count: 92765758]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_7 = OS_kernDisableLevel;
  is_40 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_7);
  # DEBUG is => is_40
  # DEBUG BEGIN_STMT
  _8 = OS_kernelData.taskCurrent;
  _9 = _8->linkBase;
  _10 = td_36->cAct;
  _11 = (short unsigned int) _10;
  link_41 = _9 + _11;
  # DEBUG link => link_41
  # DEBUG BEGIN_STMT
  _12 = (unsigned int) link_41;
  _13 = _12 * 2;
  _14 = &OS_taskActivations + _13;
  next_42 = *_14;
  # DEBUG next => next_42
  # DEBUG BEGIN_STMT
  _15 = td_36->state;
  if (_15 == 5)
    goto <bb 11>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 11> [local count: 31540358]:
  if (next_42 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 12> [local count: 15770179]:
  _16 = _8->queuePrio;
  _17 = (int) _16;
  _18 = (int) next_42;
  _19 = OS_taskPtrs[_18];
  _20 = _19->linkBase;
  _21 = (int) _20;
  _22 = _19->dynamic;
  _23 = _22->cAct;
  _24 = (int) _23;
  _25 = _21 + _24;
  if (_18 == _25)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 5361861]:
  _26 = _22->prio;
  iftmp.2_44 = (int) _26;
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 10408318]:
  _27 = _19->queuePrio;
  iftmp.2_43 = (int) _27;

  <bb 15> [local count: 15770179]:
  # iftmp.2_30 = PHI <iftmp.2_44(13), iftmp.2_43(14)>
  if (_17 < iftmp.2_30)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 5204159]:
  # DEBUG BEGIN_STMT
  _28 = (short unsigned int) _16;
  td_36->prio = _28;
  # DEBUG BEGIN_STMT
  OS_RequeueDown (link_41, _28);

  <bb 17> [local count: 92765758]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_40);
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  r_35 = OS_Error (&OS_svc_Schedule, 12, 0B);
  # DEBUG r => r_35

  <bb 19> [local count: 1073741824]:
  # r_29 = PHI <r_49(9), r_35(18), r_38(5), r_51(8), 0(17)>
  # DEBUG r => r_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return r_29;

}

