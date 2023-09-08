
IPA constant propagation start:
Determining dynamic type for call: OS_stopTaskIntLockTimingFp.7_24 (_25, locktype_44(D));
  Starting walk at: OS_stopTaskIntLockTimingFp.7_24 (_25, locktype_44(D));
  instance pointer: _25  Outer instance pointer: _25 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_56 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.6_20);
  Function call may change dynamic type:OS_Error (&OS_svc_ResumeInterrupts, 12, &p);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LowerCurrentTasksPriority/9:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/7:
  Jump functions of caller  OS_Error/4:
  Jump functions of caller  OS_KernResumeInterrupts/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopIsrIntLockTimingFp.8_27 (_28, locktype_44(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopTaskIntLockTimingFp.7_24 (_25, locktype_44(D));
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_KernResumeInterrupts for cloning; -fipa-cp-clone disabled.

overall_size: 111, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernResumeInterrupts/0:
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

OS_stopIsrIntLockTimingFp/10 (OS_stopIsrIntLockTimingFp) @06d34990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LowerCurrentTasksPriority/9 (OS_LowerCurrentTasksPriority) @06d028c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernResumeInterrupts/0 (23345240 (estimated locally),0.02 per call) 
  Calls: 
OS_stopTaskIntLockTimingFp/8 (OS_stopTaskIntLockTimingFp) @06d34870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/7 (OS_CORTEXM_IntSetDisablingLevel) @06d027e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernResumeInterrupts/0 (149862592 (estimated locally),0.14 per call) OS_KernResumeInterrupts/0 (128413076 (estimated locally),0.12 per call) OS_KernResumeInterrupts/0 (196444236 (estimated locally),0.18 per call) OS_KernResumeInterrupts/0 (574129754 (estimated locally),0.53 per call) 
  Calls: 
OS_intDisableLevelMax/6 (OS_intDisableLevelMax) @06d34798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ResumeInterrupts/5 (OS_svc_ResumeInterrupts) @06d34750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/4 (OS_Error) @06d02700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernResumeInterrupts/0 (49454655 (estimated locally),0.05 per call) OS_KernResumeInterrupts/0 (77174120 (estimated locally),0.07 per call) 
  Calls: 
OS_configMode/3 (OS_configMode) @06d346c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/2 (OS_permittedContext) @06d34678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d34630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (addr)OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)OS_KernResumeInterrupts/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernResumeInterrupts/0 (OS_KernResumeInterrupts) @06d022a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_configMode/3 (read)OS_svc_ResumeInterrupts/5 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_kernelData/1 (addr)OS_intDisableLevelMax/6 (read)OS_kernelData/1 (read)OS_stopTaskIntLockTimingFp/8 (read)OS_kernelData/1 (read)OS_stopIsrIntLockTimingFp/10 (read)OS_kernelData/1 (read)OS_configMode/3 (read)OS_svc_ResumeInterrupts/5 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/4 (49454655 (estimated locally),0.05 per call) OS_CORTEXM_IntSetDisablingLevel/7 (149862592 (estimated locally),0.14 per call) OS_CORTEXM_IntSetDisablingLevel/7 (128413076 (estimated locally),0.12 per call) OS_LowerCurrentTasksPriority/9 (23345240 (estimated locally),0.02 per call) OS_CORTEXM_IntSetDisablingLevel/7 (196444236 (estimated locally),0.18 per call) OS_CORTEXM_IntSetDisablingLevel/7 (574129754 (estimated locally),0.53 per call) OS_Error/4 (77174120 (estimated locally),0.07 per call) 
   Indirect call(28815894 (estimated locally),0.03 per call) 
   Indirect call(43660446 (estimated locally),0.04 per call) 

;; Function OS_KernResumeInterrupts (OS_KernResumeInterrupts, funcdef_no=0, decl_uid=7226, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernResumeInterrupts/0
__attribute__((target ("general-regs-only")))
OS_KernResumeInterrupts (os_intlocktype_t locktype)
{
  os_paramtype_t p[3];
  os_prio_t * pPrioBeforeSuspend;
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
  void (*<T636>) (const struct os_task_t *, os_intlocktype_t) OS_stopTaskIntLockTimingFp.7_24;
  const struct os_task_t * _25;
  short unsigned int _26;
  void (*<T657>) (os_isrid_t, os_intlocktype_t) OS_stopIsrIntLockTimingFp.8_27;
  short unsigned int _28;
  short unsigned int _29;
  unsigned char _30;
  unsigned int OS_configMode.9_31;
  unsigned int _32;
  _Bool iftmp.0_37;
  int iftmp.1_38;
  short unsigned int _42;
  _Bool iftmp.0_46;
  _Bool iftmp.0_47;

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
  # DEBUG pPrioBeforeSuspend => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p[0] = locktype_44(D);
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
  td_49 = _2->dynamic;
  # DEBUG td => td_49
  # DEBUG BEGIN_STMT
  if (locktype_44(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _3 = td_49->nestSuspendAll;
  if (_3 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  olp_52 = &td_49->oldSuspendOs;
  # DEBUG olp => olp_52
  # DEBUG BEGIN_STMT
  ncp_53 = &td_49->nestSuspendOs;
  # DEBUG ncp => ncp_53
  # DEBUG BEGIN_STMT
  pPrioBeforeSuspend_54 = &td_49->prioBeforeSuspendOs;
  # DEBUG pPrioBeforeSuspend => pPrioBeforeSuspend_54
  goto <bb 22>; [100.00%]

  <bb 6> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  olp_50 = &td_49->oldSuspendAll;
  # DEBUG olp => olp_50
  # DEBUG BEGIN_STMT
  ncp_51 = &td_49->nestSuspendAll;
  # DEBUG ncp => ncp_51
  goto <bb 22>; [100.00%]

  <bb 7> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 8>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 8> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  if (locktype_44(D) == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 9> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.nestSuspendAll;
  if (_4 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 10> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  # DEBUG olp => &OS_kernelData.oldSuspendOs
  # DEBUG BEGIN_STMT
  # DEBUG ncp => &OS_kernelData.nestSuspendOs
  goto <bb 22>; [100.00%]

  <bb 11> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  if (_1 == 10)
    goto <bb 12>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 12> [local count: 159025459]:
  OS_permittedContext.2_5 = OS_permittedContext;
  _6 = MEM[(const os_callermask_t *)OS_permittedContext.2_5 + 58B];
  _42 = _6 & 1024;
  if (_42 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 79512730]:
  _7 = OS_kernelData.errorStatus.calledFrom;
  _8 = (int) _7;
  _9 = 1 << _8;
  _10 = (short unsigned int) _9;
  _11 = _6 & _10;
  if (_11 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 119269094]:

  <bb 15> [local count: 159025459]:
  # iftmp.1_38 = PHI <1(13), 0(14)>
  iftmp.0_47 = (_Bool) iftmp.1_38;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 308696480]:
  OS_permittedContext.4_12 = OS_permittedContext;
  _13 = MEM[(const os_callermask_t *)OS_permittedContext.4_12 + 58B];
  _14 = (int) _1;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _13 & _16;
  iftmp.0_46 = _17 != 0;

  <bb 17> [local count: 467721939]:
  # iftmp.0_37 = PHI <iftmp.0_47(15), iftmp.0_46(16)>
  if (iftmp.0_37 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 18> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  if (locktype_44(D) != 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 19> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  # DEBUG olp => &OS_kernelData.oldSuspendAll
  # DEBUG BEGIN_STMT
  # DEBUG ncp => &OS_kernelData.nestSuspendAll
  goto <bb 22>; [100.00%]

  <bb 20> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  OS_configMode.5_18 = OS_configMode;
  _19 = OS_configMode.5_18 & 1024;
  if (_19 != 0)
    goto <bb 21>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 21> [local count: 77174120]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_ResumeInterrupts, 12, &p);

  <bb 22> [local count: 1073741824]:
  # td_33 = PHI <td_49(6), 0B(8), 0B(19), 0B(20), 0B(21), td_49(5), td_49(4), 0B(10), 0B(9), 0B(18)>
  # olp_34 = PHI <olp_50(6), &OS_kernelData.oldSuspendAll(8), &OS_kernelData.oldSuspendAll(19), 0B(20), 0B(21), olp_52(5), 0B(4), &OS_kernelData.oldSuspendOs(10), 0B(9), 0B(18)>
  # ncp_35 = PHI <ncp_51(6), &OS_kernelData.nestSuspendAll(8), &OS_kernelData.nestSuspendAll(19), 0B(20), 0B(21), ncp_53(5), 0B(4), &OS_kernelData.nestSuspendOs(10), 0B(9), 0B(18)>
  # pPrioBeforeSuspend_36 = PHI <0B(6), 0B(8), 0B(19), 0B(20), 0B(21), pPrioBeforeSuspend_54(5), 0B(4), 0B(10), 0B(9), 0B(18)>
  # DEBUG pPrioBeforeSuspend => pPrioBeforeSuspend_36
  # DEBUG ncp => ncp_35
  # DEBUG olp => olp_34
  # DEBUG td => td_33
  # DEBUG BEGIN_STMT
  if (ncp_35 != 0B)
    goto <bb 23>; [53.47%]
  else
    goto <bb 38>; [46.53%]

  <bb 23> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  OS_intDisableLevelMax.6_20 = OS_intDisableLevelMax;
  is_56 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.6_20);
  # DEBUG is => is_56
  # DEBUG BEGIN_STMT
  if (td_33 != 0B)
    goto <bb 24>; [70.00%]
  else
    goto <bb 26>; [30.00%]

  <bb 24> [local count: 401890827]:
  _21 = td_33->state;
  if (_21 != 5)
    goto <bb 25>; [48.88%]
  else
    goto <bb 26>; [51.12%]

  <bb 25> [local count: 196444236]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_56);
  goto <bb 38>; [100.00%]

  <bb 26> [local count: 377685517]:
  # DEBUG BEGIN_STMT
  _22 = *ncp_35;
  if (_22 == 1)
    goto <bb 27>; [34.00%]
  else
    goto <bb 33>; [66.00%]

  <bb 27> [local count: 128413076]:
  # DEBUG BEGIN_STMT
  _23 = OS_kernelData.inFunction;
  if (_23 == 1)
    goto <bb 28>; [34.00%]
  else
    goto <bb 30>; [66.00%]

  <bb 28> [local count: 43660446]:
  # DEBUG BEGIN_STMT
  OS_stopTaskIntLockTimingFp.7_24 = OS_stopTaskIntLockTimingFp;
  _25 = OS_kernelData.taskCurrent;
  OS_stopTaskIntLockTimingFp.7_24 (_25, locktype_44(D));
  # DEBUG BEGIN_STMT
  if (pPrioBeforeSuspend_36 != 0B)
    goto <bb 29>; [53.47%]
  else
    goto <bb 32>; [46.53%]

  <bb 29> [local count: 23345240]:
  # DEBUG BEGIN_STMT
  _26 = *pPrioBeforeSuspend_36;
  OS_LowerCurrentTasksPriority (_26);
  # DEBUG BEGIN_STMT
  *pPrioBeforeSuspend_36 = 0;
  goto <bb 32>; [100.00%]

  <bb 30> [local count: 84752630]:
  # DEBUG BEGIN_STMT
  if (_23 == 3)
    goto <bb 31>; [34.00%]
  else
    goto <bb 32>; [66.00%]

  <bb 31> [local count: 28815894]:
  # DEBUG BEGIN_STMT
  OS_stopIsrIntLockTimingFp.8_27 = OS_stopIsrIntLockTimingFp;
  _28 = OS_kernelData.isrCurrent;
  OS_stopIsrIntLockTimingFp.8_27 (_28, locktype_44(D));

  <bb 32> [local count: 128413076]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *ncp_35 = 0;
  # DEBUG BEGIN_STMT
  _29 = *olp_34;
  OS_CORTEXM_IntSetDisablingLevel (_29);
  # DEBUG BEGIN_STMT
  goto <bb 38>; [100.00%]

  <bb 33> [local count: 249272441]:
  # DEBUG BEGIN_STMT
  if (locktype_44(D) != 2)
    goto <bb 34>; [79.76%]
  else
    goto <bb 36>; [20.24%]

  <bb 34> [local count: 198819699]:
  if (_22 != 0)
    goto <bb 35>; [50.00%]
  else
    goto <bb 36>; [50.00%]

  <bb 35> [local count: 99409849]:
  # DEBUG BEGIN_STMT
  _30 = _22 + 255;
  *ncp_35 = _30;
  # DEBUG BEGIN_STMT
  goto <bb 38>; [100.00%]

  <bb 36> [local count: 149862592]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_56);
  # DEBUG BEGIN_STMT
  OS_configMode.9_31 = OS_configMode;
  _32 = OS_configMode.9_31 & 1024;
  if (_32 != 0)
    goto <bb 37>; [33.00%]
  else
    goto <bb 38>; [67.00%]

  <bb 37> [local count: 49454655]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_ResumeInterrupts, 29, &p);

  <bb 38> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return;

}


