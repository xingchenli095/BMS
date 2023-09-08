
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _23 (_1, _24, OS_hwtStartDelta_25);
  Starting walk at: _23 (_1, _24, OS_hwtStartDelta_25);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_32 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/5:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_StopResLockTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _23 (_1, _24, OS_hwtStartDelta_25);
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

Not considering OS_StopResLockTiming for cloning; -fipa-cp-clone disabled.

overall_size: 68, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StopResLockTiming/0:
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

OS_ExceedExecTime/5 (OS_ExceedExecTime) @06c38000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopResLockTiming/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_isrTableBase/4 (OS_isrTableBase) @06c18d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopResLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06c38ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopResLockTiming/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c18c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopResLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c18bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopResLockTiming/0 (read)OS_StopResLockTiming/0 (write)OS_StopResLockTiming/0 (write)OS_StopResLockTiming/0 (write)OS_StopResLockTiming/0 (read)OS_StopResLockTiming/0 (read)OS_StopResLockTiming/0 (read)OS_StopResLockTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_StopResLockTiming/0 (OS_StopResLockTiming) @06c38c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_isrTableBase/4 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/5 (177167401 (estimated locally),0.17 per call) OS_GetTimeUsed/3 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(359703511 (estimated locally),0.33 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_StopResLockTiming (OS_StopResLockTiming, funcdef_no=0, decl_uid=6954, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StopResLockTiming/0
__attribute__((target ("general-regs-only")))
OS_StopResLockTiming (struct os_resourcedynamic_t * rd)
{
  os_tick_t OS_hwtStartDelta;
  const struct os_isr_t * isr;
  const struct os_task_t * const taskCurrent;
  os_tick_t used;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  struct os_taskaccounting_t * _12;
  unsigned int _13;
  const struct os_isr_t * OS_isrTableBase.0_14;
  short unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  unsigned char _18;
  struct os_israccounting_t * _19;
  unsigned int _20;
  unsigned int _21;
  const struct os_hwtdrv_t * _22;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _23;
  unsigned int _24;
  unsigned char _28;
  unsigned char _45;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  used_32 = OS_GetTimeUsed ();
  # DEBUG used => used_32
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.etUsed;
  _5 = rd_33(D)->etUsed;
  _6 = _5 + used_32;
  _7 = _4 + _6;
  OS_kernelData.accounting.etUsed = _7;
  # DEBUG BEGIN_STMT
  _8 = rd_33(D)->etLimit;
  OS_kernelData.accounting.etLimit = _8;
  # DEBUG BEGIN_STMT
  _9 = rd_33(D)->etType;
  OS_kernelData.accounting.etType = _9;
  # DEBUG BEGIN_STMT
  _10 = OS_kernelData.accounting.inFunction;
  if (_10 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  taskCurrent_39 = OS_kernelData.taskCurrent;
  # DEBUG taskCurrent => taskCurrent_39
  # DEBUG BEGIN_STMT
  _11 = taskCurrent_39->flags;
  _45 = _11 & 64;
  if (_45 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 4> [local count: 182536110]:
  _12 = taskCurrent_39->accounting;
  _13 = _12->etMax;
  if (_7 > _13)
    goto <bb 5>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12->etMax = _7;
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_10 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 7> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_14 = OS_isrTableBase;
  _15 = OS_kernelData.isrCurrent;
  _16 = (unsigned int) _15;
  _17 = _16 * 68;
  isr_37 = OS_isrTableBase.0_14 + _17;
  # DEBUG isr => isr_37
  # DEBUG BEGIN_STMT
  _18 = isr_37->flags;
  _28 = _18 & 64;
  if (_28 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 120473833]:
  _19 = isr_37->accounting;
  _20 = _19->etMax;
  if (_7 > _20)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19->etMax = _7;

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (_8 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 11> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (_7 >= _8)
    goto <bb 12>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 12> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_41 = _8 - _7;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_41
  # DEBUG BEGIN_STMT
  _21 = _1->maxDelta;
  if (_21 < OS_hwtStartDelta_41)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 179851756]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_42 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_42

  <bb 15> [local count: 359703511]:
  # OS_hwtStartDelta_25 = PHI <OS_hwtStartDelta_41(13), OS_hwtStartDelta_42(14)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_25
  # DEBUG BEGIN_STMT
  _22 = _1->driver;
  _23 = _22->hwtStart;
  _24 = OS_kernelData.accounting.frc;
  _23 (_1, _24, OS_hwtStartDelta_25);

  <bb 16> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


