
IPA constant propagation start:
Determining dynamic type for call: OS_startResLockTimingFp.2_23 (rd_42(D), _22);
  Starting walk at: OS_startResLockTimingFp.2_23 (rd_42(D), _22);
  instance pointer: rd_42(D)  Outer instance pointer: rd_42(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_40 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_11);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RaiseTaskPriority/8:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_GetResourceFromTask/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startResLockTimingFp.2_23 (rd_42(D), _22);
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_GetResourceFromTask for cloning; -fipa-cp-clone disabled.

overall_size: 82, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetResourceFromTask/0:
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
    param [2]: BOTTOM
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

OS_RaiseTaskPriority/8 (OS_RaiseTaskPriority) @06d78380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetResourceFromTask/0 (35603430 (estimated locally),0.03 per call) 
  Calls: 
OS_startResLockTimingFp/7 (OS_startResLockTimingFp) @06ca9ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/6 (OS_CORTEXM_IntSetDisablingLevel) @06d782a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetResourceFromTask/0 (201802904 (estimated locally),0.19 per call) OS_GetResourceFromTask/0 (175447397 (estimated locally),0.16 per call) OS_GetResourceFromTask/0 (17801715 (estimated locally),0.02 per call) OS_GetResourceFromTask/0 (17801715 (estimated locally),0.02 per call) OS_GetResourceFromTask/0 (412853731 (estimated locally),0.38 per call) 
  Calls: 
OS_kernDisableLevel/5 (OS_kernDisableLevel) @06ca9e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetResource/4 (OS_svc_GetResource) @06ca9dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromTask/0 (addr)OS_GetResourceFromTask/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d780e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetResourceFromTask/0 (412853731 (estimated locally),0.38 per call) OS_GetResourceFromTask/0 (248034361 (estimated locally),0.23 per call) 
  Calls: 
OS_resourceTableBase/2 (OS_resourceTableBase) @06ca9d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06ca9cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromTask/0 (read)OS_GetResourceFromTask/0 (read)
  Availability: not_available
  Varpool flags:
OS_GetResourceFromTask/0 (OS_GetResourceFromTask) @06cc9ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_resourceTableBase/2 (read)OS_kernelData/1 (read)OS_svc_GetResource/4 (addr)OS_svc_GetResource/4 (addr)OS_kernDisableLevel/5 (read)OS_kernelData/1 (read)OS_startResLockTimingFp/7 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/6 (201802904 (estimated locally),0.19 per call) OS_CORTEXM_IntSetDisablingLevel/6 (175447397 (estimated locally),0.16 per call) OS_CORTEXM_IntSetDisablingLevel/6 (17801715 (estimated locally),0.02 per call) OS_CORTEXM_IntSetDisablingLevel/6 (17801715 (estimated locally),0.02 per call) OS_RaiseTaskPriority/8 (35603430 (estimated locally),0.03 per call) OS_CORTEXM_IntSetDisablingLevel/6 (412853731 (estimated locally),0.38 per call) OS_Error/3 (412853731 (estimated locally),0.38 per call) OS_Error/3 (248034361 (estimated locally),0.23 per call) 
   Indirect call(73867790 (estimated locally),0.07 per call) 

;; Function OS_GetResourceFromTask (OS_GetResourceFromTask, funcdef_no=0, decl_uid=6842, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetResourceFromTask/0
__attribute__((target ("general-regs-only")))
OS_GetResourceFromTask (os_resourceid_t r, struct os_resourcedynamic_t * rd, os_paramtype_t * p)
{
  os_prio_t newLevel;
  const struct os_appcontext_t * const app;
  struct os_taskdynamic_t * td;
  os_intstatus_t is;
  const struct os_resource_t * rs;
  os_result_t result;
  const struct os_resource_t * OS_resourceTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_task_t * _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned char _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int OS_kernDisableLevel.1_11;
  unsigned char _12;
  unsigned int _13;
  unsigned int _14;
  short unsigned int _15;
  const struct os_task_t * _16;
  unsigned char _17;
  short unsigned int _18;
  const os_tick_t * _19;
  unsigned int _20;
  const os_tick_t * _21;
  unsigned int _22;
  void (*<T63c>) (struct os_resourcedynamic_t *, os_tick_t) OS_startResLockTimingFp.2_23;
  unsigned char _24;
  short unsigned int _25;
  short unsigned int _26;
  short unsigned int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  OS_resourceTableBase.0_1 = OS_resourceTableBase;
  _2 = (unsigned int) r_32(D);
  _3 = _2 * 16;
  rs_33 = OS_resourceTableBase.0_1 + _3;
  # DEBUG rs => rs_33
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.taskCurrent;
  app_34 = _4->app;
  # DEBUG app => app_34
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (app_34 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619278]:
  _5 = app_34->permissionBit;
  _6 = rs_33->permissions;
  _7 = _5 & _6;
  if (_7 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  result_37 = OS_Error (&OS_svc_GetResource, 37, p_35(D));
  # DEBUG result => result_37
  goto <bb 18>; [100.00%]

  <bb 5> [local count: 825707464]:
  # DEBUG BEGIN_STMT
  _8 = _4->queuePrio;
  _9 = (short unsigned int) _8;
  _10 = rs_33->prio;
  if (_9 > _10)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 412853731]:
  # DEBUG BEGIN_STMT
  result_54 = OS_Error (&OS_svc_GetResource, 26, p_35(D));
  # DEBUG result => result_54
  goto <bb 18>; [100.00%]

  <bb 7> [local count: 412853731]:
  # DEBUG BEGIN_STMT
  td_38 = _4->dynamic;
  # DEBUG td => td_38
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_11 = OS_kernDisableLevel;
  is_40 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_11);
  # DEBUG is => is_40
  # DEBUG BEGIN_STMT
  _12 = td_38->state;
  if (_12 == 5)
    goto <bb 8>; [51.12%]
  else
    goto <bb 17>; [48.88%]

  <bb 8> [local count: 211050827]:
  # DEBUG BEGIN_STMT
  _13 = td_38->lastLock;
  rd_42(D)->next = _13;
  # DEBUG BEGIN_STMT
  _14 = _2 | 67108864;
  td_38->lastLock = _14;
  # DEBUG BEGIN_STMT
  _15 = td_38->prio;
  rd_42(D)->lastPrio = _15;
  # DEBUG BEGIN_STMT
  _16 = OS_kernelData.taskCurrent;
  _17 = _16->taskId;
  _18 = (short unsigned int) _17;
  rd_42(D)->takenBy = _18;
  # DEBUG BEGIN_STMT
  _19 = _16->resourceLockTime;
  if (_19 != 0B)
    goto <bb 9>; [70.00%]
  else
    goto <bb 11>; [30.00%]

  <bb 9> [local count: 147735579]:
  _20 = _2 * 4;
  _21 = _19 + _20;
  _22 = *_21;
  if (_22 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 73867790]:
  # DEBUG BEGIN_STMT
  OS_startResLockTimingFp.2_23 = OS_startResLockTimingFp;
  OS_startResLockTimingFp.2_23 (rd_42(D), _22);

  <bb 11> [local count: 211050827]:
  # DEBUG BEGIN_STMT
  _24 = td_38->state;
  if (_24 == 5)
    goto <bb 12>; [51.12%]
  else
    goto <bb 16>; [48.88%]

  <bb 12> [local count: 107889183]:
  _25 = rs_33->prio;
  _26 = rd_42(D)->lastPrio;
  if (_25 > _26)
    goto <bb 13>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 13> [local count: 35603430]:
  # DEBUG BEGIN_STMT
  OS_RaiseTaskPriority (td_38, _25);
  # DEBUG BEGIN_STMT
  _27 = rs_33->prio;
  if (_27 > 255)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 17801715]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  newLevel_50 = 272 - _27;
  # DEBUG newLevel => newLevel_50
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (newLevel_50);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 15> [local count: 17801715]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_40);
  goto <bb 18>; [100.00%]

  <bb 16> [local count: 175447397]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_40);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 201802904]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_40);

  <bb 18> [local count: 1073741824]:
  # result_28 = PHI <result_37(4), result_54(6), 0(16), 0(17), 0(15), 0(14)>
  # DEBUG result => result_28
  # DEBUG BEGIN_STMT
  return result_28;

}


