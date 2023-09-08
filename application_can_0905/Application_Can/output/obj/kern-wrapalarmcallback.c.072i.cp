
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_WrapAlarmCallback/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _3 ();

 Propagating constants:

Not considering OS_WrapAlarmCallback for cloning; -fipa-cp-clone disabled.

overall_size: 29, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_WrapAlarmCallback/0:
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

OS_svc_HookHandler/6 (OS_svc_HookHandler) @06c39900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapAlarmCallback/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06c59e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapAlarmCallback/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_alarmCallback/4 (OS_alarmCallback) @06c397e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapAlarmCallback/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06c59c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapAlarmCallback/0 (1073741824 (estimated locally),1.00 per call) OS_WrapAlarmCallback/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c39750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapAlarmCallback/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c39708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapAlarmCallback/0 (read)OS_WrapAlarmCallback/0 (write)OS_WrapAlarmCallback/0 (read)OS_WrapAlarmCallback/0 (read)OS_WrapAlarmCallback/0 (write)OS_WrapAlarmCallback/0 (read)OS_WrapAlarmCallback/0 (write)OS_WrapAlarmCallback/0 (write)OS_WrapAlarmCallback/0 (write)
  Availability: not_available
  Varpool flags:
OS_WrapAlarmCallback/0 (OS_WrapAlarmCallback) @06c59a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernDisableLevel/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_alarmCallback/4 (read)OS_kernelData/1 (read)OS_svc_HookHandler/6 (addr)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) OS_Error/5 (354334802 (estimated locally),0.33 per call) OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_WrapAlarmCallback (OS_WrapAlarmCallback, funcdef_no=0, decl_uid=6326, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_WrapAlarmCallback/0
__attribute__((target ("general-regs-only")))
OS_WrapAlarmCallback (const struct os_alarm_t * a)
{
  os_oldlevel_t saveOldSuspendAll;
  os_uint8_t saveNestSuspendAll;
  os_uint8_t saveInFunction;
  os_intstatus_t is;
  short unsigned int OS_kernDisableLevel.0_1;
  unsigned int _2;
  void (*<T467>) (void) _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  saveInFunction_7 = OS_kernelData.inFunction;
  # DEBUG saveInFunction => saveInFunction_7
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 4;
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_10 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_10
  # DEBUG BEGIN_STMT
  saveNestSuspendAll_11 = OS_kernelData.nestSuspendAll;
  # DEBUG saveNestSuspendAll => saveNestSuspendAll_11
  # DEBUG BEGIN_STMT
  saveOldSuspendAll_12 = OS_kernelData.oldSuspendAll;
  # DEBUG saveOldSuspendAll => saveOldSuspendAll_12
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendAll = 0;
  # DEBUG BEGIN_STMT
  _2 = a_14(D)->object;
  _3 = OS_alarmCallback[_2];
  _3 ();
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.nestSuspendAll;
  if (_4 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_HookHandler, 55, 0B);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendAll = saveNestSuspendAll_11;
  # DEBUG BEGIN_STMT
  OS_kernelData.oldSuspendAll = saveOldSuspendAll_12;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_10);
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = saveInFunction_7;
  return;

}


