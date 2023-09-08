
IPA constant propagation start:
Determining dynamic type for call: OS_stopTaskExecTimingFp.1_3 (tp_25(D));
  Starting walk at: OS_stopTaskExecTimingFp.1_3 (tp_25(D));
  instance pointer: tp_25(D)  Outer instance pointer: tp_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_23 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Dequeue/6:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/2:
  Jump functions of caller  OS_DoTerminateTask/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrPostTaskHook.2_5 ();
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopTaskExecTimingFp.1_3 (tp_25(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_DoTerminateTask for cloning; -fipa-cp-clone disabled.

overall_size: 53, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_DoTerminateTask/0:
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

OS_Dequeue/6 (OS_Dequeue) @06c77ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoTerminateTask/0 (365072220 (estimated locally),0.34 per call) 
  Calls: 
OS_ptrPostTaskHook/5 (OS_ptrPostTaskHook) @06c53d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoTerminateTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/4 (OS_kernelData) @06c53d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoTerminateTask/0 (read)OS_DoTerminateTask/0 (write)OS_DoTerminateTask/0 (write)
  Availability: not_available
  Varpool flags:
OS_stopTaskExecTimingFp/3 (OS_stopTaskExecTimingFp) @06c53c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoTerminateTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/2 (OS_CORTEXM_IntSetDisablingLevel) @06c77d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoTerminateTask/0 (1073741824 (estimated locally),1.00 per call) OS_DoTerminateTask/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/1 (OS_kernDisableLevel) @06c53bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoTerminateTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_DoTerminateTask/0 (OS_DoTerminateTask) @06c77b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/1 (read)OS_stopTaskExecTimingFp/3 (read)OS_kernelData/4 (read)OS_kernelData/4 (write)OS_ptrPostTaskHook/5 (read)OS_kernelData/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/2 (1073741824 (estimated locally),1.00 per call) OS_Dequeue/6 (365072220 (estimated locally),0.34 per call) OS_CORTEXM_IntSetDisablingLevel/2 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(365072220 (estimated locally),0.34 per call) 
   Indirect call(365072220 (estimated locally),0.34 per call) 

;; Function OS_DoTerminateTask (OS_DoTerminateTask, funcdef_no=0, decl_uid=6864, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_DoTerminateTask/0
__attribute__((target ("general-regs-only")))
OS_DoTerminateTask (const struct os_task_t * tp, struct os_taskdynamic_t * td)
{
  os_uint8_t Os_CallHookTmp;
  os_intstatus_t is;
  short unsigned int OS_kernDisableLevel.0_1;
  unsigned char _2;
  void (*<T62f>) (const struct os_task_t *) OS_stopTaskExecTimingFp.1_3;
  unsigned char _4;
  void (*<T467>) (void) OS_ptrPostTaskHook.2_5;
  short unsigned int _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  short unsigned int _13;
  struct os_taskaccounting_t * _14;
  unsigned char _15;
  unsigned char _16;
  unsigned char _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_23 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_23
  # DEBUG BEGIN_STMT
  _2 = td_24(D)->state;
  if (_2 == 5)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_stopTaskExecTimingFp.1_3 = OS_stopTaskExecTimingFp;
  OS_stopTaskExecTimingFp.1_3 (tp_25(D));

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = td_24(D)->state;
  if (_4 == 5)
    goto <bb 5>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_27 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_27
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrPostTaskHook.2_5 = OS_ptrPostTaskHook;
  OS_ptrPostTaskHook.2_5 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_27;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = tp_25(D)->linkBase;
  _7 = td_24(D)->cAct;
  _8 = (short unsigned int) _7;
  _9 = _6 + _8;
  OS_Dequeue (_9);
  # DEBUG BEGIN_STMT
  _10 = td_24(D)->nAct;
  if (_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 6> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _11 = _10 + 255;
  td_24(D)->nAct = _11;
  # DEBUG BEGIN_STMT
  _12 = tp_25(D)->queuePrio;
  _13 = (short unsigned int) _12;
  td_24(D)->prio = _13;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_24(D)->state = 2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = tp_25(D)->accounting;
  if (_14 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 7> [local count: 127775277]:
  # DEBUG BEGIN_STMT
  _14->etUsed = 0;
  # DEBUG BEGIN_STMT
  _14->etType = 1;

  <bb 8> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _15 = td_24(D)->cAct;
  _16 = tp_25(D)->maxAct;
  if (_15 >= _16)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  td_24(D)->cAct = 0;
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  _17 = _15 + 1;
  td_24(D)->cAct = _17;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_24(D)->state = 0;

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_23);
  return;

}


