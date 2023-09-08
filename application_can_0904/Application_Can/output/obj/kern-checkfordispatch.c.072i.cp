
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Panic/3:
  Jump functions of caller  OS_CheckForDispatch/0:

 Propagating constants:

Not considering OS_CheckForDispatch for cloning; -fipa-cp-clone disabled.

overall_size: 37, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CheckForDispatch/0:
    param [0]: BOTTOM
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

OS_Panic/3 (OS_Panic) @06c3ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CheckForDispatch/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_configMode/2 (OS_configMode) @06c19cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CheckForDispatch/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c19ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CheckForDispatch/0 (read)OS_CheckForDispatch/0 (read)OS_CheckForDispatch/0 (read)
  Availability: not_available
  Varpool flags:
OS_CheckForDispatch/0 (OS_CheckForDispatch) @06c3cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_configMode/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Panic/3 (177167401 (estimated locally),0.17 per call) 

;; Function OS_CheckForDispatch (OS_CheckForDispatch, funcdef_no=0, decl_uid=6887, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CheckForDispatch/0
__attribute__((target ("general-regs-only")))
OS_CheckForDispatch (os_uint8_t old_inKernel)
{
  const struct os_task_t * const current_task;
  os_unsigned_t disp;
  unsigned int OS_configMode.0_1;
  unsigned int _2;
  unsigned char _3;
  const struct os_task_t * _4;
  struct os_taskdynamic_t * _5;
  unsigned char _6;
  short unsigned int _7;
  unsigned char _8;
  short unsigned int _9;
  struct os_taskdynamic_t * _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG disp => 0
  # DEBUG BEGIN_STMT
  OS_configMode.0_1 = OS_configMode;
  _2 = OS_configMode.0_1 & 32;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _3 = OS_kernelData.inKernel;
  if (_3 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_Panic (14);
  goto <bb 16>; [100.00%]

  <bb 5> [local count: 896574424]:
  # DEBUG BEGIN_STMT
  if (old_inKernel_16(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 6> [local count: 448287212]:
  # DEBUG BEGIN_STMT
  current_task_17 = OS_kernelData.taskCurrent;
  # DEBUG current_task => current_task_17
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.taskQueueHead;
  if (_4 == current_task_17)
    goto <bb 7>; [30.00%]
  else
    goto <bb 13>; [70.00%]

  <bb 7> [local count: 134486164]:
  # DEBUG BEGIN_STMT
  if (current_task_17 == 0B)
    goto <bb 16>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 8> [local count: 94140314]:
  # DEBUG BEGIN_STMT
  _5 = current_task_17->dynamic;
  _6 = _5->state;
  if (_6 == 5)
    goto <bb 9>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 9> [local count: 32007707]:
  # DEBUG BEGIN_STMT
  _7 = _5->prio;
  _8 = current_task_17->runPrio;
  _9 = (short unsigned int) _8;
  if (_7 < _9)
    goto <bb 10>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 10> [local count: 16003853]:
  # DEBUG BEGIN_STMT
  _5->prio = _9;
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 62132608]:
  # DEBUG BEGIN_STMT
  if (_6 > 2)
    goto <bb 16>; [35.00%]
  else
    goto <bb 12>; [65.00%]

  <bb 12> [local count: 40386195]:
  # DEBUG BEGIN_STMT
  # DEBUG disp => 1
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 313801048]:
  # DEBUG BEGIN_STMT
  if (current_task_17 == 0B)
    goto <bb 16>; [30.00%]
  else
    goto <bb 14>; [70.00%]

  <bb 14> [local count: 219660734]:
  _10 = current_task_17->dynamic;
  _11 = _10->state;
  if (_11 <= 2)
    goto <bb 16>; [65.00%]
  else
    goto <bb 15>; [35.00%]

  <bb 15> [local count: 76881257]:
  # DEBUG BEGIN_STMT
  # DEBUG disp => 2

  <bb 16> [local count: 1073741824]:
  # disp_12 = PHI <0(4), 0(5), 1(14), 0(10), 2(11), 1(12), 0(9), 1(7), 2(15), 1(13)>
  # DEBUG disp => disp_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return disp_12;

}


