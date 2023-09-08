
IPA constant propagation start:
Determining dynamic type for call: OS_stopTaskExecTimingFp.1_6 (t_11(D));
  Starting walk at: OS_stopTaskExecTimingFp.1_6 (t_11(D));
  instance pointer: t_11(D)  Outer instance pointer: t_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_ReleaseLocks (_2);
  Function call may change dynamic type:is_14 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_DequeueAll/4:
  Jump functions of caller  OS_ReleaseLocks/3:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/2:
  Jump functions of caller  OS_KillTask/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrPostTaskHook.2_7 ();
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopTaskExecTimingFp.1_6 (t_11(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_KillTask for cloning; -fipa-cp-clone disabled.

overall_size: 61, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KillTask/0:
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

OS_ptrPostTaskHook/7 (OS_ptrPostTaskHook) @06c18e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_stopTaskExecTimingFp/6 (OS_stopTaskExecTimingFp) @06c18d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/5 (OS_kernelData) @06c18d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillTask/0 (read)OS_KillTask/0 (read)OS_KillTask/0 (read)OS_KillTask/0 (write)OS_KillTask/0 (write)
  Availability: not_available
  Varpool flags:
OS_DequeueAll/4 (OS_DequeueAll) @06c3de00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillTask/0 (153391689 (estimated locally),0.14 per call) OS_KillTask/0 (153391689 (estimated locally),0.14 per call) OS_KillTask/0 (153391689 (estimated locally),0.14 per call) 
  Calls: 
OS_ReleaseLocks/3 (OS_ReleaseLocks) @06c3dd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillTask/0 (1073419798 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/2 (OS_CORTEXM_IntSetDisablingLevel) @06c3dc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillTask/0 (1073741824 (estimated locally),1.00 per call) OS_KillTask/0 (1073419798 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/1 (OS_kernDisableLevel) @06c18c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_KillTask/0 (OS_KillTask) @06c3da80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/1 (read)OS_kernelData/5 (read)OS_kernelData/5 (read)OS_stopTaskExecTimingFp/6 (read)OS_kernelData/5 (read)OS_kernelData/5 (write)OS_ptrPostTaskHook/7 (read)OS_kernelData/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073419798 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/2 (1073741824 (estimated locally),1.00 per call) OS_DequeueAll/4 (153391689 (estimated locally),0.14 per call) OS_DequeueAll/4 (153391689 (estimated locally),0.14 per call) OS_DequeueAll/4 (153391689 (estimated locally),0.14 per call) OS_ReleaseLocks/3 (1073419798 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/2 (1073419798 (estimated locally),1.00 per call) 
   Indirect call(153391689 (estimated locally),0.14 per call) 
   Indirect call(26076587 (estimated locally),0.02 per call) 

;; Function OS_KillTask (OS_KillTask, funcdef_no=0, decl_uid=6819, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KillTask/0
__attribute__((target ("general-regs-only")))
OS_KillTask (const struct os_task_t * t, os_taskstate_t ts)
{
  os_uint8_t Os_CallHookTmp;
  os_intstatus_t is;
  struct os_taskdynamic_t * td;
  short unsigned int OS_kernDisableLevel.0_1;
  unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  void (*<T62f>) (const struct os_task_t *) OS_stopTaskExecTimingFp.1_6;
  void (*<T467>) (void) OS_ptrPostTaskHook.2_7;

  <bb 2> [local count: 1073419798]:
  # DEBUG BEGIN_STMT
  td_12 = t_11(D)->dynamic;
  # DEBUG td => td_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_14 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_14
  # DEBUG BEGIN_STMT
  _2 = td_12->lastLock;
  OS_ReleaseLocks (_2);
  # DEBUG BEGIN_STMT
  td_12->lastLock = 4294967295;
  # DEBUG BEGIN_STMT
  td_12->nestSuspendOs = 0;
  # DEBUG BEGIN_STMT
  td_12->nestSuspendAll = 0;
  # DEBUG BEGIN_STMT
  _3 = td_12->state;
  switch (_3) <default: <L14> [14.29%], case 0: <L9> [14.29%], case 1: <L10> [14.29%], case 2: <L0> [14.29%], case 3 ... 4: <L6> [14.29%], case 5: <L1> [14.29%], case 6: <L8> [14.29%]>

  <bb 3> [local count: 153391689]:
<L0>:
  # DEBUG BEGIN_STMT
  OS_DequeueAll (t_11(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_12->state = ts_19(D);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 153391689]:
<L1>:
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.taskTimingNesting;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 76695844]:
  _5 = OS_kernelData.accounting.inFunction;
  if (_5 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 26076587]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_stopTaskExecTimingFp.1_6 = OS_stopTaskExecTimingFp;
  OS_stopTaskExecTimingFp.1_6 (t_11(D));

  <bb 7> [local count: 153391689]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_22 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_22
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrPostTaskHook.2_7 = OS_ptrPostTaskHook;
  OS_ptrPostTaskHook.2_7 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_22;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_DequeueAll (t_11(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_12->state = ts_19(D);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 153391689]:
<L6>:
  # DEBUG BEGIN_STMT
  OS_DequeueAll (t_11(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_12->state = ts_19(D);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 153391689]:
<L8>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_12->state = ts_19(D);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 153391689]:
<L9>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_12->state = ts_19(D);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 153391689]:
<L10>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_12->state = ts_19(D);
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
<L14>:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_14);
  # DEBUG BEGIN_STMT
  return 0;

}


