
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _33 (_1, _34, OS_hwtStartDelta_35);
  Starting walk at: _33 (_1, _34, OS_hwtStartDelta_35);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_AdvanceTimeStampGeneric (_4);
  Function call may change dynamic type:used_44 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);
Determining dynamic type for call: _28 (_1, _29, _30);
  Starting walk at: _28 (_1, _29, _30);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_ExceedExecTime ();
  Function call may change dynamic type:OS_AdvanceTimeStampGeneric (_4);
  Function call may change dynamic type:used_44 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);
Determining dynamic type for call: _7 (_1, _8, _9);
  Starting walk at: _7 (_1, _8, _9);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_AdvanceTimeStampGeneric (_4);
  Function call may change dynamic type:used_44 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/6:
  Jump functions of caller  OS_AdvanceTimeStampGeneric/4:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_ExecTimerTimestampInterrupt/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _33 (_1, _34, OS_hwtStartDelta_35);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _28 (_1, _29, _30);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (_1, _8, _9);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (_1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_ExecTimerTimestampInterrupt for cloning; -fipa-cp-clone disabled.

overall_size: 93, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ExecTimerTimestampInterrupt/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_ExceedExecTime/6 (OS_ExceedExecTime) @06d700e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ExecTimerTimestampInterrupt/0 (268435456 (estimated locally),0.25 per call) 
  Calls: 
OS_isrTableBase/5 (OS_isrTableBase) @06c9cee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExecTimerTimestampInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AdvanceTimeStampGeneric/4 (OS_AdvanceTimeStampGeneric) @06cbce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ExecTimerTimestampInterrupt/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06cbc000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ExecTimerTimestampInterrupt/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c9ccf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExecTimerTimestampInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c9cca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (write)OS_ExecTimerTimestampInterrupt/0 (write)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (write)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)OS_ExecTimerTimestampInterrupt/0 (read)
  Availability: not_available
  Varpool flags:
OS_ExecTimerTimestampInterrupt/0 (OS_ExecTimerTimestampInterrupt) @06cbcd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_isrTableBase/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/6 (268435456 (estimated locally),0.25 per call) OS_AdvanceTimeStampGeneric/4 (1073741824 (estimated locally),1.00 per call) OS_GetTimeUsed/3 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(268435456 (estimated locally),0.25 per call) 
   Indirect call(268435456 (estimated locally),0.25 per call) 
   Indirect call(536870913 (estimated locally),0.50 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_ExecTimerTimestampInterrupt (OS_ExecTimerTimestampInterrupt, funcdef_no=0, decl_uid=6960, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ExecTimerTimestampInterrupt/0
__attribute__((target ("general-regs-only")))
OS_ExecTimerTimestampInterrupt ()
{
  os_tick_t OS_hwtStartDelta;
  const struct os_isr_t * isr;
  os_tick_t remaining;
  os_tick_t used;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned char _5;
  const struct os_hwtdrv_t * _6;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned char _15;
  const struct os_task_t * _16;
  unsigned char _17;
  struct os_taskaccounting_t * _18;
  unsigned int _19;
  const struct os_isr_t * OS_isrTableBase.0_20;
  short unsigned int _21;
  unsigned int _22;
  unsigned int _23;
  unsigned char _24;
  struct os_israccounting_t * _25;
  unsigned int _26;
  const struct os_hwtdrv_t * _27;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _28;
  unsigned int _29;
  unsigned int _30;
  unsigned int _31;
  const struct os_hwtdrv_t * _32;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _33;
  unsigned int _34;
  unsigned char _39;
  unsigned char _40;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  used_44 = OS_GetTimeUsed ();
  # DEBUG used => used_44
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.frc;
  OS_AdvanceTimeStampGeneric (_4);
  # DEBUG BEGIN_STMT
  _5 = OS_kernelData.accounting.etType;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = _1->driver;
  _7 = _6->hwtStart;
  _8 = OS_kernelData.accounting.frc;
  _9 = _1->maxDelta;
  _7 (_1, _8, _9);
  goto <bb 20>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _10 = OS_kernelData.accounting.etUsed;
  _11 = ~_10;
  if (_11 < used_44)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 4294967295;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _12 = _10 + used_44;
  OS_kernelData.accounting.etUsed = _12;

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _13 = OS_kernelData.accounting.etUsed;
  _14 = OS_kernelData.accounting.etLimit;
  if (_13 >= _14)
    goto <bb 8>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 8> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _15 = OS_kernelData.inFunction;
  if (_15 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 9> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.taskTimingNesting = 1;
  # DEBUG BEGIN_STMT
  _16 = OS_kernelData.taskCurrent;
  _17 = _16->flags;
  _40 = _17 & 64;
  if (_40 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 10> [local count: 45634028]:
  _18 = _16->accounting;
  _19 = _18->etMax;
  if (_13 > _19)
    goto <bb 11>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 11> [local count: 22817014]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _18->etMax = _13;
  goto <bb 16>; [100.00%]

  <bb 12> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  if (_15 == 3)
    goto <bb 13>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 13> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_20 = OS_isrTableBase;
  _21 = OS_kernelData.isrCurrent;
  _22 = (unsigned int) _21;
  _23 = _22 * 68;
  isr_51 = OS_isrTableBase.0_20 + _23;
  # DEBUG isr => isr_51
  # DEBUG BEGIN_STMT
  _24 = isr_51->flags;
  _39 = _24 & 64;
  if (_39 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 14> [local count: 30118458]:
  _25 = isr_51->accounting;
  _26 = _25->etMax;
  if (_13 > _26)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 15059229]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _25->etMax = _13;

  <bb 16> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  # DEBUG BEGIN_STMT
  _27 = _1->driver;
  _28 = _27->hwtStart;
  _29 = OS_kernelData.accounting.frc;
  _30 = _1->maxDelta;
  _28 (_1, _29, _30);
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  remaining_48 = _14 - _13;
  # DEBUG remaining => remaining_48
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_hwtStartDelta => remaining_48
  # DEBUG BEGIN_STMT
  _31 = _1->maxDelta;
  if (_31 < remaining_48)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_49 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_49

  <bb 19> [local count: 268435456]:
  # OS_hwtStartDelta_35 = PHI <remaining_48(17), OS_hwtStartDelta_49(18)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_35
  # DEBUG BEGIN_STMT
  _32 = _1->driver;
  _33 = _32->hwtStart;
  _34 = OS_kernelData.accounting.frc;
  _33 (_1, _34, OS_hwtStartDelta_35);

  <bb 20> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


