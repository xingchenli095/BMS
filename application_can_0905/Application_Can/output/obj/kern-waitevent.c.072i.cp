
IPA constant propagation start:
Determining dynamic type for call: OS_stopTaskExecTimingFp.2_9 (ts_35);
  Starting walk at: OS_stopTaskExecTimingFp.2_9 (ts_35);
  instance pointer: ts_35  Outer instance pointer: ts_35 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_WaitEvent, 14, &p);
  Function call may change dynamic type:is_42 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_7);
Determining dynamic type for call: OS_startTaskExecTimingFp.6_22 (ts_35);
  Starting walk at: OS_startTaskExecTimingFp.6_22 (ts_35);
  instance pointer: ts_35  Outer instance pointer: ts_35 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_stopTaskExecTimingFp.2_9 (ts_35);
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_WaitEvent, 14, &p);
  Function call may change dynamic type:is_42 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_7);
  Function call may change dynamic type:_17 = OS_rateMonitorFunc.4_16 (_15);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Dequeue/9:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernWaitEvent/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startTaskExecTimingFp.6_22 (ts_35);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrPostTaskHook.5_19 ();
    indirect simple callsite, calling param -1, offset 0, for stmt _17 = OS_rateMonitorFunc.4_16 (_15);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrPostTaskHook.3_13 ();
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopTaskExecTimingFp.2_9 (ts_35);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_KernWaitEvent for cloning; -fipa-cp-clone disabled.

overall_size: 134, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernWaitEvent/0:
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

OS_startTaskExecTimingFp/11 (OS_startTaskExecTimingFp) @06d7e990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_rateMonitorFunc/10 (OS_rateMonitorFunc) @06d7e798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Dequeue/9 (OS_Dequeue) @06d499a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernWaitEvent/0 (111067 (estimated locally),0.00 per call) OS_KernWaitEvent/0 (2999693 (estimated locally),0.00 per call) 
  Calls: 
OS_ptrPostTaskHook/8 (OS_ptrPostTaskHook) @06d7e678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)OS_KernWaitEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_stopTaskExecTimingFp/7 (OS_stopTaskExecTimingFp) @06d7e5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/6 (OS_CORTEXM_IntSetDisablingLevel) @06d498c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernWaitEvent/0 (62153058 (estimated locally),0.06 per call) OS_KernWaitEvent/0 (62153058 (estimated locally),0.06 per call) 
  Calls: 
OS_kernDisableLevel/5 (OS_kernDisableLevel) @06d7e4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_WaitEvent/4 (OS_svc_WaitEvent) @06d7e3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (addr)OS_KernWaitEvent/0 (addr)OS_KernWaitEvent/0 (addr)OS_KernWaitEvent/0 (addr)OS_KernWaitEvent/0 (addr)OS_KernWaitEvent/0 (addr)OS_KernWaitEvent/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d49700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernWaitEvent/0 (524845004 (estimated locally),0.49 per call) OS_KernWaitEvent/0 (181135951 (estimated locally),0.17 per call) OS_KernWaitEvent/0 (653333 (estimated locally),0.00 per call) OS_KernWaitEvent/0 (6973573 (estimated locally),0.01 per call) OS_KernWaitEvent/0 (161651997 (estimated locally),0.15 per call) OS_KernWaitEvent/0 (83275271 (estimated locally),0.08 per call) OS_KernWaitEvent/0 (60680543 (estimated locally),0.06 per call) 
  Calls: 
OS_iecMode/2 (OS_iecMode) @06d7e360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d7e318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernWaitEvent/0 (read)OS_KernWaitEvent/0 (read)OS_KernWaitEvent/0 (read)OS_KernWaitEvent/0 (write)OS_KernWaitEvent/0 (write)OS_KernWaitEvent/0 (read)OS_KernWaitEvent/0 (write)OS_KernWaitEvent/0 (write)
  Availability: not_available
  Varpool flags:
OS_KernWaitEvent/0 (OS_KernWaitEvent) @06d49380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_iecMode/2 (read)OS_svc_WaitEvent/4 (addr)OS_svc_WaitEvent/4 (addr)OS_svc_WaitEvent/4 (addr)OS_kernDisableLevel/5 (read)OS_svc_WaitEvent/4 (addr)OS_stopTaskExecTimingFp/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_ptrPostTaskHook/8 (read)OS_kernelData/1 (write)OS_rateMonitorFunc/10 (read)OS_svc_WaitEvent/4 (addr)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_ptrPostTaskHook/8 (read)OS_kernelData/1 (write)OS_startTaskExecTimingFp/11 (read)OS_svc_WaitEvent/4 (addr)OS_svc_WaitEvent/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (524845004 (estimated locally),0.49 per call) OS_Error/3 (181135951 (estimated locally),0.17 per call) OS_CORTEXM_IntSetDisablingLevel/6 (62153058 (estimated locally),0.06 per call) OS_Dequeue/9 (111067 (estimated locally),0.00 per call) OS_Error/3 (653333 (estimated locally),0.00 per call) OS_Dequeue/9 (2999693 (estimated locally),0.00 per call) OS_Error/3 (6973573 (estimated locally),0.01 per call) OS_CORTEXM_IntSetDisablingLevel/6 (62153058 (estimated locally),0.06 per call) OS_Error/3 (161651997 (estimated locally),0.15 per call) OS_Error/3 (83275271 (estimated locally),0.08 per call) OS_Error/3 (60680543 (estimated locally),0.06 per call) 
   Indirect call(2346360 (estimated locally),0.00 per call) 
   Indirect call(111067 (estimated locally),0.00 per call) 
   Indirect call(1979797 (estimated locally),0.00 per call) 
   Indirect call(2999693 (estimated locally),0.00 per call) 
   Indirect call(17645253 (estimated locally),0.02 per call) 

;; Function OS_KernWaitEvent (OS_KernWaitEvent, funcdef_no=0, decl_uid=7219, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernWaitEvent/0
__attribute__((target ("general-regs-only")))
OS_KernWaitEvent (os_eventmask_t e)
{
  os_uint8_t Os_CallHookTmp;
  os_uint8_t Os_CallHookTmp;
  os_paramtype_t p[3];
  os_result_t r;
  struct os_taskdynamic_t * td;
  const struct os_task_t * ts;
  os_intstatus_t is;
  unsigned char _1;
  unsigned char _2;
  unsigned char OS_iecMode.0_3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  short unsigned int OS_kernDisableLevel.1_7;
  unsigned char _8;
  void (*<T62f>) (const struct os_task_t *) OS_stopTaskExecTimingFp.2_9;
  unsigned char _10;
  unsigned int _11;
  unsigned int _12;
  void (*<T467>) (void) OS_ptrPostTaskHook.3_13;
  short unsigned int _14;
  short unsigned int _15;
  os_boolean_t (*<T68c>) (os_ratemonitorid_t) OS_rateMonitorFunc.4_16;
  int _17;
  unsigned char _18;
  void (*<T467>) (void) OS_ptrPostTaskHook.5_19;
  short unsigned int _20;
  struct os_taskaccounting_t * _21;
  void (*<T62f>) (const struct os_task_t *) OS_startTaskExecTimingFp.6_22;
  unsigned char _29;

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
  p[0] = e_31(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 27>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  ts_35 = OS_kernelData.taskCurrent;
  # DEBUG ts => ts_35
  # DEBUG BEGIN_STMT
  _2 = ts_35->flags;
  _29 = _2 & 2;
  if (_29 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 26>; [33.00%]

  <bb 4> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  td_38 = ts_35->dynamic;
  # DEBUG td => td_38
  # DEBUG BEGIN_STMT
  OS_iecMode.0_3 = OS_iecMode;
  if (OS_iecMode.0_3 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 183880435]:
  _4 = BIT_FIELD_REF <MEM[(void *)td_38], 16, 160>;
  if (_4 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 60680543]:
  # DEBUG BEGIN_STMT
  r_40 = OS_Error (&OS_svc_WaitEvent, 55, 0B);
  # DEBUG r => r_40
  goto <bb 28>; [100.00%]

  <bb 7> [local count: 307080326]:
  # DEBUG BEGIN_STMT
  _5 = td_38->lastLock;
  if (_5 != 4294967295)
    goto <bb 8>; [79.76%]
  else
    goto <bb 11>; [20.24%]

  <bb 8> [local count: 244927268]:
  # DEBUG BEGIN_STMT
  _6 = _5 >> 24;
  if (_6 == 9)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 83275271]:
  # DEBUG BEGIN_STMT
  r_71 = OS_Error (&OS_svc_WaitEvent, 156, &p);
  # DEBUG r => r_71
  goto <bb 28>; [100.00%]

  <bb 10> [local count: 161651997]:
  # DEBUG BEGIN_STMT
  r_69 = OS_Error (&OS_svc_WaitEvent, 13, &p);
  # DEBUG r => r_69
  goto <bb 28>; [100.00%]

  <bb 11> [local count: 62153058]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_7 = OS_kernDisableLevel;
  is_42 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_7);
  # DEBUG is => is_42
  # DEBUG BEGIN_STMT
  _8 = td_38->state;
  if (_8 == 5)
    goto <bb 12>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 12> [local count: 21132040]:
  # DEBUG BEGIN_STMT
  if (e_31(D) == 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 6973573]:
  # DEBUG BEGIN_STMT
  r_44 = OS_Error (&OS_svc_WaitEvent, 14, &p);
  # DEBUG r => r_44
  # DEBUG BEGIN_STMT
  if (r_44 != 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 17645253]:
  # r_49 = PHI <r_44(13), 0(12)>
  # DEBUG r => NULL
  # DEBUG BEGIN_STMT
  OS_stopTaskExecTimingFp.2_9 = OS_stopTaskExecTimingFp;
  OS_stopTaskExecTimingFp.2_9 (ts_35);
  # DEBUG BEGIN_STMT
  _10 = td_38->state;
  if (_10 == 5)
    goto <bb 15>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 15> [local count: 5999386]:
  # DEBUG BEGIN_STMT
  _11 = td_38->pEvents;
  _12 = _11 & e_31(D);
  if (_12 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 2999693]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_60 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_60
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrPostTaskHook.3_13 = OS_ptrPostTaskHook;
  OS_ptrPostTaskHook.3_13 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_60;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = ts_35->linkBase;
  OS_Dequeue (_14);
  # DEBUG BEGIN_STMT
  td_38->wEvents = e_31(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_38->state = 6;
  goto <bb 25>; [100.00%]

  <bb 17> [local count: 2999693]:
  # DEBUG BEGIN_STMT
  _15 = ts_35->rateMonitor;
  if (_15 != 65535)
    goto <bb 18>; [66.00%]
  else
    goto <bb 22>; [34.00%]

  <bb 18> [local count: 1979797]:
  OS_rateMonitorFunc.4_16 = OS_rateMonitorFunc;
  _17 = OS_rateMonitorFunc.4_16 (_15);
  if (_17 != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 19> [local count: 653333]:
  # DEBUG BEGIN_STMT
  r_48 = OS_Error (&OS_svc_WaitEvent, 54, &p);
  # DEBUG r => r_48
  # DEBUG BEGIN_STMT
  if (r_48 != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 20> [local count: 326667]:
  _18 = td_38->state;
  if (_18 == 5)
    goto <bb 21>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 21> [local count: 111067]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_50 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_50
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrPostTaskHook.5_19 = OS_ptrPostTaskHook;
  OS_ptrPostTaskHook.5_19 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_50;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _20 = ts_35->linkBase;
  OS_Dequeue (_20);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_38->state = 1;
  goto <bb 25>; [100.00%]

  <bb 22> [local count: 2346360]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _21 = ts_35->accounting;
  if (_21 != 0B)
    goto <bb 23>; [70.00%]
  else
    goto <bb 24>; [30.00%]

  <bb 23> [local count: 1642452]:
  # DEBUG BEGIN_STMT
  _21->etUsed = 0;
  # DEBUG BEGIN_STMT
  _21->etType = 1;

  <bb 24> [local count: 2346360]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_startTaskExecTimingFp.6_22 = OS_startTaskExecTimingFp;
  OS_startTaskExecTimingFp.6_22 (ts_35);

  <bb 25> [local count: 62153058]:
  # r_23 = PHI <0(11), r_44(13), r_49(14), r_49(16), r_48(20), r_49(24), r_48(19), r_48(21)>
  # DEBUG r => r_23
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_42);
  goto <bb 28>; [100.00%]

  <bb 26> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  r_37 = OS_Error (&OS_svc_WaitEvent, 15, &p);
  # DEBUG r => r_37
  goto <bb 28>; [100.00%]

  <bb 27> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  r_34 = OS_Error (&OS_svc_WaitEvent, 12, &p);
  # DEBUG r => r_34

  <bb 28> [local count: 1073741824]:
  # r_24 = PHI <r_37(26), r_34(27), r_69(10), r_23(25), r_71(9), r_40(6)>
  # DEBUG r => r_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_24;

}


