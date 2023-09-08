
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernClearEvent/0:

 Propagating constants:

Not considering OS_KernClearEvent for cloning; -fipa-cp-clone disabled.

overall_size: 44, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernClearEvent/0:
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

OS_CORTEXM_IntSetDisablingLevel/6 (OS_CORTEXM_IntSetDisablingLevel) @06da01c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernClearEvent/0 (229164422 (estimated locally),0.21 per call) OS_KernClearEvent/0 (229164422 (estimated locally),0.21 per call) 
  Calls: 
OS_kernDisableLevel/5 (OS_kernDisableLevel) @06cd4ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ClearEvent/4 (OS_svc_ClearEvent) @06cd4c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearEvent/0 (addr)OS_KernClearEvent/0 (addr)OS_KernClearEvent/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06da0000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernClearEvent/0 (524845004 (estimated locally),0.49 per call) OS_KernClearEvent/0 (229164422 (estimated locally),0.21 per call) OS_KernClearEvent/0 (90567975 (estimated locally),0.08 per call) 
  Calls: 
OS_iecMode/2 (OS_iecMode) @06cd4bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06cd4b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearEvent/0 (read)OS_KernClearEvent/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernClearEvent/0 (OS_KernClearEvent) @06cf8ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_iecMode/2 (read)OS_svc_ClearEvent/4 (addr)OS_kernDisableLevel/5 (read)OS_svc_ClearEvent/4 (addr)OS_svc_ClearEvent/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (524845004 (estimated locally),0.49 per call) OS_Error/3 (229164422 (estimated locally),0.21 per call) OS_CORTEXM_IntSetDisablingLevel/6 (229164422 (estimated locally),0.21 per call) OS_CORTEXM_IntSetDisablingLevel/6 (229164422 (estimated locally),0.21 per call) OS_Error/3 (90567975 (estimated locally),0.08 per call) 

;; Function OS_KernClearEvent (OS_KernClearEvent, funcdef_no=0, decl_uid=7217, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernClearEvent/0
__attribute__((target ("general-regs-only")))
OS_KernClearEvent (os_eventmask_t e)
{
  os_paramtype_t p[3];
  os_result_t r;
  struct os_taskdynamic_t * td;
  const struct os_task_t * ts;
  os_intstatus_t is;
  unsigned char _1;
  unsigned char OS_iecMode.0_2;
  short unsigned int _3;
  unsigned char _4;
  short unsigned int OS_kernDisableLevel.1_5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p[0] = e_13(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 9>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  ts_17 = OS_kernelData.taskCurrent;
  # DEBUG ts => ts_17
  # DEBUG BEGIN_STMT
  td_18 = ts_17->dynamic;
  # DEBUG td => td_18
  # DEBUG BEGIN_STMT
  OS_iecMode.0_2 = OS_iecMode;
  if (OS_iecMode.0_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 274448410]:
  _3 = BIT_FIELD_REF <MEM[(void *)td_18], 16, 160>;
  if (_3 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 90567975]:
  # DEBUG BEGIN_STMT
  r_20 = OS_Error (&OS_svc_ClearEvent, 55, 0B);
  # DEBUG r => r_20
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 458328844]:
  # DEBUG BEGIN_STMT
  _4 = ts_17->flags;
  _11 = _4 & 2;
  if (_11 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 229164422]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_5 = OS_kernDisableLevel;
  is_24 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_5);
  # DEBUG is => is_24
  # DEBUG BEGIN_STMT
  _6 = td_18->pEvents;
  _7 = ~e_13(D);
  _8 = _6 & _7;
  td_18->pEvents = _8;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_24);
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 229164422]:
  # DEBUG BEGIN_STMT
  r_22 = OS_Error (&OS_svc_ClearEvent, 15, &p);
  # DEBUG r => r_22
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  r_16 = OS_Error (&OS_svc_ClearEvent, 12, &p);
  # DEBUG r => r_16

  <bb 10> [local count: 1073741824]:
  # r_9 = PHI <0(7), r_16(9), r_20(5), r_22(8)>
  # DEBUG r => r_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_9;

}


