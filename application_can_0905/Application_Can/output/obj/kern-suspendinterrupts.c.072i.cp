
IPA constant propagation start:
Determining dynamic type for call: OS_startTaskIntLockTimingFp.7_24 (_25, locktype_45(D));
  Starting walk at: OS_startTaskIntLockTimingFp.7_24 (_25, locktype_45(D));
  instance pointer: _25  Outer instance pointer: _25 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_62 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.6_20);
  Function call may change dynamic type:OS_Error (&OS_svc_SuspendInterrupts, 12, &p);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RaiseTaskPriority/12:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/9:
  Jump functions of caller  OS_Error/6:
  Jump functions of caller  OS_KernSuspendInterrupts/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startIsrIntLockTimingFp.8_28 (_29, locktype_45(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startTaskIntLockTimingFp.7_24 (_25, locktype_45(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_KernSuspendInterrupts for cloning; -fipa-cp-clone disabled.

overall_size: 120, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernSuspendInterrupts/0:
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

OS_startIsrIntLockTimingFp/13 (OS_startIsrIntLockTimingFp) @06cdfab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_RaiseTaskPriority/12 (OS_RaiseTaskPriority) @06cb28c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSuspendInterrupts/0 (34331236 (estimated locally),0.03 per call) 
  Calls: 
OS_maxPrio/11 (OS_maxPrio) @06cdfa20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_startTaskIntLockTimingFp/10 (OS_startTaskIntLockTimingFp) @06cdf948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/9 (OS_CORTEXM_IntSetDisablingLevel) @06cb27e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSuspendInterrupts/0 (115219221 (estimated locally),0.11 per call) OS_KernSuspendInterrupts/0 (73623537 (estimated locally),0.07 per call) OS_KernSuspendInterrupts/0 (188842758 (estimated locally),0.18 per call) OS_KernSuspendInterrupts/0 (196444236 (estimated locally),0.18 per call) OS_KernSuspendInterrupts/0 (574129754 (estimated locally),0.53 per call) 
  Calls: 
OS_intDisableLevelMax/8 (OS_intDisableLevelMax) @06cdf870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_SuspendInterrupts/7 (OS_svc_SuspendInterrupts) @06cdf828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/6 (OS_Error) @06cb2700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSuspendInterrupts/0 (38022343 (estimated locally),0.04 per call) OS_KernSuspendInterrupts/0 (77174120 (estimated locally),0.07 per call) 
  Calls: 
OS_configMode/5 (OS_configMode) @06cdf798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/4 (OS_permittedContext) @06cdf750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_intDisableLevelAll/3 (OS_intDisableLevelAll) @06cdf708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_intDisableLevel/2 (OS_intDisableLevel) @06cdf6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06cdf678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (addr)OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)OS_KernSuspendInterrupts/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernSuspendInterrupts/0 (OS_KernSuspendInterrupts) @06cb22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_intDisableLevel/2 (read)OS_intDisableLevelAll/3 (read)OS_kernelData/1 (read)OS_intDisableLevel/2 (read)OS_intDisableLevelAll/3 (read)OS_permittedContext/4 (read)OS_kernelData/1 (read)OS_permittedContext/4 (read)OS_intDisableLevelAll/3 (read)OS_configMode/5 (read)OS_svc_SuspendInterrupts/7 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_intDisableLevelMax/8 (read)OS_kernelData/1 (read)OS_startTaskIntLockTimingFp/10 (read)OS_kernelData/1 (read)OS_maxPrio/11 (read)OS_startIsrIntLockTimingFp/13 (read)OS_kernelData/1 (read)OS_configMode/5 (read)OS_svc_SuspendInterrupts/7 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/6 (38022343 (estimated locally),0.04 per call) OS_CORTEXM_IntSetDisablingLevel/9 (115219221 (estimated locally),0.11 per call) OS_CORTEXM_IntSetDisablingLevel/9 (73623537 (estimated locally),0.07 per call) OS_CORTEXM_IntSetDisablingLevel/9 (188842758 (estimated locally),0.18 per call) OS_RaiseTaskPriority/12 (34331236 (estimated locally),0.03 per call) OS_CORTEXM_IntSetDisablingLevel/9 (196444236 (estimated locally),0.18 per call) OS_CORTEXM_IntSetDisablingLevel/9 (574129754 (estimated locally),0.53 per call) OS_Error/6 (77174120 (estimated locally),0.07 per call) 
   Indirect call(42376315 (estimated locally),0.04 per call) 
   Indirect call(64206538 (estimated locally),0.06 per call) 

;; Function OS_KernSuspendInterrupts (OS_KernSuspendInterrupts, funcdef_no=0, decl_uid=7224, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernSuspendInterrupts/0
__attribute__((target ("general-regs-only")))
OS_KernSuspendInterrupts (os_intlocktype_t locktype)
{
  const os_taskprio_t maxPrio;
  os_paramtype_t p[3];
  os_prio_t * pPrioBeforeSuspend;
  os_intstatus_t level;
  os_intstatus_t is;
  os_uint8_t * ncp;
  os_oldlevel_t * olp;
  struct os_taskdynamic_t * td;
  unsigned char _1;
  const struct os_task_t * _2;
  unsigned char _3;
  unsigned char _4;
  const os_callermask_t * OS_permittedContext.2_5;
  short unsigned int _6;
  unsigned char _7;
  int _8;
  int _9;
  short unsigned int _10;
  short unsigned int _11;
  const os_callermask_t * OS_permittedContext.4_12;
  short unsigned int _13;
  int _14;
  int _15;
  short unsigned int _16;
  short unsigned int _17;
  unsigned int OS_configMode.5_18;
  unsigned int _19;
  short unsigned int OS_intDisableLevelMax.6_20;
  unsigned char _21;
  unsigned char _22;
  unsigned char _23;
  void (*<T636>) (const struct os_task_t *, os_intlocktype_t) OS_startTaskIntLockTimingFp.7_24;
  const struct os_task_t * _25;
  short unsigned int _26;
  short unsigned int _27;
  void (*<T657>) (os_isrid_t, os_intlocktype_t) OS_startIsrIntLockTimingFp.8_28;
  short unsigned int _29;
  unsigned char _30;
  unsigned int OS_configMode.9_31;
  unsigned int _32;
  _Bool iftmp.0_38;
  int iftmp.1_39;
  short unsigned int _43;
  _Bool iftmp.0_47;
  _Bool iftmp.0_48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG td => 0B
  # DEBUG BEGIN_STMT
  # DEBUG olp => 0B
  # DEBUG BEGIN_STMT
  # DEBUG ncp => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG level => 0
  # DEBUG BEGIN_STMT
  # DEBUG pPrioBeforeSuspend => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p[0] = locktype_45(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.taskCurrent;
  td_53 = _2->dynamic;
  # DEBUG td => td_53
  # DEBUG BEGIN_STMT
  if (locktype_45(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _3 = td_53->nestSuspendAll;
  if (_3 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  level_57 = OS_intDisableLevel;
  # DEBUG level => level_57
  # DEBUG BEGIN_STMT
  olp_58 = &td_53->oldSuspendOs;
  # DEBUG olp => olp_58
  # DEBUG BEGIN_STMT
  ncp_59 = &td_53->nestSuspendOs;
  # DEBUG ncp => ncp_59
  # DEBUG BEGIN_STMT
  pPrioBeforeSuspend_60 = &td_53->prioBeforeSuspendOs;
  # DEBUG pPrioBeforeSuspend => pPrioBeforeSuspend_60
  goto <bb 23>; [100.00%]

  <bb 6> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  level_54 = OS_intDisableLevelAll;
  # DEBUG level => level_54
  # DEBUG BEGIN_STMT
  olp_55 = &td_53->oldSuspendAll;
  # DEBUG olp => olp_55
  # DEBUG BEGIN_STMT
  ncp_56 = &td_53->nestSuspendAll;
  # DEBUG ncp => ncp_56
  goto <bb 23>; [100.00%]

  <bb 7> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 8>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 8> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  if (locktype_45(D) == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.nestSuspendAll;
  if (_4 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 10> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  level_52 = OS_intDisableLevel;
  # DEBUG level => level_52
  # DEBUG BEGIN_STMT
  # DEBUG olp => &OS_kernelData.oldSuspendOs
  # DEBUG BEGIN_STMT
  # DEBUG ncp => &OS_kernelData.nestSuspendOs
  goto <bb 23>; [100.00%]

  <bb 11> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  level_51 = OS_intDisableLevelAll;
  # DEBUG level => level_51
  # DEBUG BEGIN_STMT
  # DEBUG olp => &OS_kernelData.oldSuspendAll
  # DEBUG BEGIN_STMT
  # DEBUG ncp => &OS_kernelData.nestSuspendAll
  goto <bb 23>; [100.00%]

  <bb 12> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  if (_1 == 10)
    goto <bb 13>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 13> [local count: 159025459]:
  OS_permittedContext.2_5 = OS_permittedContext;
  _6 = MEM[(const os_callermask_t *)OS_permittedContext.2_5 + 56B];
  _43 = _6 & 1024;
  if (_43 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 79512730]:
  _7 = OS_kernelData.errorStatus.calledFrom;
  _8 = (int) _7;
  _9 = 1 << _8;
  _10 = (short unsigned int) _9;
  _11 = _6 & _10;
  if (_11 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 119269094]:

  <bb 16> [local count: 159025459]:
  # iftmp.1_39 = PHI <1(14), 0(15)>
  iftmp.0_48 = (_Bool) iftmp.1_39;
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 308696480]:
  OS_permittedContext.4_12 = OS_permittedContext;
  _13 = MEM[(const os_callermask_t *)OS_permittedContext.4_12 + 56B];
  _14 = (int) _1;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _13 & _16;
  iftmp.0_47 = _17 != 0;

  <bb 18> [local count: 467721939]:
  # iftmp.0_38 = PHI <iftmp.0_48(16), iftmp.0_47(17)>
  if (iftmp.0_38 != 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 19> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  if (locktype_45(D) != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 20> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  level_50 = OS_intDisableLevelAll;
  # DEBUG level => level_50
  # DEBUG BEGIN_STMT
  # DEBUG olp => &OS_kernelData.oldSuspendAll
  # DEBUG BEGIN_STMT
  # DEBUG ncp => &OS_kernelData.nestSuspendAll
  goto <bb 23>; [100.00%]

  <bb 21> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  OS_configMode.5_18 = OS_configMode;
  _19 = OS_configMode.5_18 & 1024;
  if (_19 != 0)
    goto <bb 22>; [33.00%]
  else
    goto <bb 23>; [67.00%]

  <bb 22> [local count: 77174120]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_SuspendInterrupts, 12, &p);

  <bb 23> [local count: 1073741824]:
  # td_33 = PHI <td_53(6), 0B(11), 0B(20), 0B(21), 0B(22), td_53(5), td_53(4), 0B(10), 0B(9), 0B(19)>
  # olp_34 = PHI <olp_55(6), &OS_kernelData.oldSuspendAll(11), &OS_kernelData.oldSuspendAll(20), 0B(21), 0B(22), olp_58(5), 0B(4), &OS_kernelData.oldSuspendOs(10), 0B(9), 0B(19)>
  # ncp_35 = PHI <ncp_56(6), &OS_kernelData.nestSuspendAll(11), &OS_kernelData.nestSuspendAll(20), 0B(21), 0B(22), ncp_59(5), 0B(4), &OS_kernelData.nestSuspendOs(10), 0B(9), 0B(19)>
  # level_36 = PHI <level_54(6), level_51(11), level_50(20), 0(21), 0(22), level_57(5), 0(4), level_52(10), 0(9), 0(19)>
  # pPrioBeforeSuspend_37 = PHI <0B(6), 0B(11), 0B(20), 0B(21), 0B(22), pPrioBeforeSuspend_60(5), 0B(4), 0B(10), 0B(9), 0B(19)>
  # DEBUG pPrioBeforeSuspend => pPrioBeforeSuspend_37
  # DEBUG level => level_36
  # DEBUG ncp => ncp_35
  # DEBUG olp => olp_34
  # DEBUG td => td_33
  # DEBUG BEGIN_STMT
  if (ncp_35 != 0B)
    goto <bb 24>; [53.47%]
  else
    goto <bb 39>; [46.53%]

  <bb 24> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  OS_intDisableLevelMax.6_20 = OS_intDisableLevelMax;
  is_62 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.6_20);
  # DEBUG is => is_62
  # DEBUG BEGIN_STMT
  if (td_33 != 0B)
    goto <bb 25>; [70.00%]
  else
    goto <bb 27>; [30.00%]

  <bb 25> [local count: 401890827]:
  _21 = td_33->state;
  if (_21 != 5)
    goto <bb 26>; [48.88%]
  else
    goto <bb 27>; [51.12%]

  <bb 26> [local count: 196444236]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_62);
  goto <bb 39>; [100.00%]

  <bb 27> [local count: 377685517]:
  # DEBUG BEGIN_STMT
  _22 = *ncp_35;
  if (_22 == 0)
    goto <bb 28>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 28> [local count: 188842758]:
  # DEBUG BEGIN_STMT
  *ncp_35 = 1;
  # DEBUG BEGIN_STMT
  _23 = OS_kernelData.inFunction;
  if (_23 == 1)
    goto <bb 29>; [34.00%]
  else
    goto <bb 31>; [66.00%]

  <bb 29> [local count: 64206538]:
  # DEBUG BEGIN_STMT
  OS_startTaskIntLockTimingFp.7_24 = OS_startTaskIntLockTimingFp;
  _25 = OS_kernelData.taskCurrent;
  OS_startTaskIntLockTimingFp.7_24 (_25, locktype_45(D));
  # DEBUG BEGIN_STMT
  if (pPrioBeforeSuspend_37 != 0B)
    goto <bb 30>; [53.47%]
  else
    goto <bb 33>; [46.53%]

  <bb 30> [local count: 34331236]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  maxPrio_71 = OS_maxPrio[0];
  # DEBUG maxPrio => maxPrio_71
  # DEBUG BEGIN_STMT
  _26 = td_33->prio;
  *pPrioBeforeSuspend_37 = _26;
  # DEBUG BEGIN_STMT
  _27 = (short unsigned int) maxPrio_71;
  OS_RaiseTaskPriority (td_33, _27);
  goto <bb 33>; [100.00%]

  <bb 31> [local count: 124636220]:
  # DEBUG BEGIN_STMT
  if (_23 == 3)
    goto <bb 32>; [34.00%]
  else
    goto <bb 33>; [66.00%]

  <bb 32> [local count: 42376315]:
  # DEBUG BEGIN_STMT
  OS_startIsrIntLockTimingFp.8_28 = OS_startIsrIntLockTimingFp;
  _29 = OS_kernelData.isrCurrent;
  OS_startIsrIntLockTimingFp.8_28 (_29, locktype_45(D));

  <bb 33> [local count: 188842758]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *olp_34 = is_62;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (level_36);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 39>; [100.00%]

  <bb 34> [local count: 188842758]:
  # DEBUG BEGIN_STMT
  if (locktype_45(D) != 2)
    goto <bb 35>; [79.76%]
  else
    goto <bb 37>; [20.24%]

  <bb 35> [local count: 150620984]:
  if (_22 != 255)
    goto <bb 36>; [48.88%]
  else
    goto <bb 37>; [51.12%]

  <bb 36> [local count: 73623537]:
  # DEBUG BEGIN_STMT
  _30 = _22 + 1;
  *ncp_35 = _30;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_62);
  goto <bb 39>; [100.00%]

  <bb 37> [local count: 115219221]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_62);
  # DEBUG BEGIN_STMT
  OS_configMode.9_31 = OS_configMode;
  _32 = OS_configMode.9_31 & 1024;
  if (_32 != 0)
    goto <bb 38>; [33.00%]
  else
    goto <bb 39>; [67.00%]

  <bb 38> [local count: 38022343]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_SuspendInterrupts, 30, &p);

  <bb 39> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return;

}


