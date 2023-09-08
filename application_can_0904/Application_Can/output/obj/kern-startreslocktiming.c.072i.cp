
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _22 (_1, _23, OS_hwtStartDelta_25);
  Starting walk at: _22 (_1, _23, OS_hwtStartDelta_25);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_33 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/5:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_StartResLockTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _22 (_1, _23, OS_hwtStartDelta_25);
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

Not considering OS_StartResLockTiming for cloning; -fipa-cp-clone disabled.

overall_size: 78, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartResLockTiming/0:
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

OS_ExceedExecTime/5 (OS_ExceedExecTime) @06d112a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartResLockTiming/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_isrTableBase/4 (OS_isrTableBase) @06c3cea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartResLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06d110e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartResLockTiming/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c3cd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartResLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c3cd38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (write)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (write)OS_StartResLockTiming/0 (write)OS_StartResLockTiming/0 (write)OS_StartResLockTiming/0 (write)OS_StartResLockTiming/0 (write)OS_StartResLockTiming/0 (read)OS_StartResLockTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_StartResLockTiming/0 (OS_StartResLockTiming) @06c5cee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_isrTableBase/4 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/5 (177167401 (estimated locally),0.17 per call) OS_GetTimeUsed/3 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(896574424 (estimated locally),0.84 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_StartResLockTiming (OS_StartResLockTiming, funcdef_no=0, decl_uid=6952, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartResLockTiming/0
__attribute__((target ("general-regs-only")))
OS_StartResLockTiming (struct os_resourcedynamic_t * rd, os_tick_t tLim)
{
  os_tick_t OS_hwtStartDelta;
  const struct os_isr_t * isr;
  const struct os_task_t * const taskCurrent;
  os_tick_t remaining;
  os_tick_t used;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  struct os_taskaccounting_t * _8;
  unsigned int _9;
  const struct os_isr_t * OS_isrTableBase.0_10;
  short unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  unsigned char _14;
  struct os_israccounting_t * _15;
  unsigned int _16;
  unsigned int _17;
  unsigned char _18;
  unsigned char _19;
  unsigned int _20;
  const struct os_hwtdrv_t * _21;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _22;
  unsigned int _23;
  unsigned char _29;
  unsigned char _41;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  used_33 = OS_GetTimeUsed ();
  # DEBUG used => used_33
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.etUsed;
  _5 = _4 + used_33;
  OS_kernelData.accounting.etUsed = _5;
  # DEBUG BEGIN_STMT
  _6 = OS_kernelData.accounting.inFunction;
  if (_6 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  taskCurrent_37 = OS_kernelData.taskCurrent;
  # DEBUG taskCurrent => taskCurrent_37
  # DEBUG BEGIN_STMT
  _7 = taskCurrent_37->flags;
  _41 = _7 & 64;
  if (_41 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 4> [local count: 182536110]:
  _8 = taskCurrent_37->accounting;
  _9 = _8->etMax;
  if (_5 > _9)
    goto <bb 5>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8->etMax = _5;
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_6 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 7> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_10 = OS_isrTableBase;
  _11 = OS_kernelData.isrCurrent;
  _12 = (unsigned int) _11;
  _13 = _12 * 68;
  isr_35 = OS_isrTableBase.0_10 + _13;
  # DEBUG isr => isr_35
  # DEBUG BEGIN_STMT
  _14 = isr_35->flags;
  _29 = _14 & 64;
  if (_29 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 120473833]:
  _15 = isr_35->accounting;
  _16 = _15->etMax;
  if (_5 > _16)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _15->etMax = _5;

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _17 = OS_kernelData.accounting.etLimit;
  if (_17 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 11> [local count: 536870913]:
  if (_5 >= _17)
    goto <bb 12>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 12> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  goto <bb 21>; [100.00%]

  <bb 13> [local count: 896574424]:
  # DEBUG BEGIN_STMT
  if (_17 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 448287212]:
  # DEBUG BEGIN_STMT
  remaining_40 = _17 - _5;
  # DEBUG remaining => remaining_40

  <bb 15> [local count: 896574424]:
  # remaining_24 = PHI <4294967295(13), remaining_40(14)>
  # DEBUG remaining => remaining_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  rd_42(D)->etUsed = _5;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  rd_42(D)->etLimit = _17;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _18 = OS_kernelData.accounting.etType;
  rd_42(D)->etType = _18;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19 = OS_kernelData.inFunction;
  OS_kernelData.accounting.inFunction = _19;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 0;
  # DEBUG BEGIN_STMT
  if (remaining_24 <= tLim_48(D))
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 448287212]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = remaining_24;
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 448287212]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = tLim_48(D);
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etType = 2;

  <bb 18> [local count: 896574424]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_52 = OS_kernelData.accounting.etLimit;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_52
  # DEBUG BEGIN_STMT
  _20 = _1->maxDelta;
  if (_20 < OS_hwtStartDelta_52)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 448287212]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_53 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_53

  <bb 20> [local count: 896574424]:
  # OS_hwtStartDelta_25 = PHI <OS_hwtStartDelta_52(18), OS_hwtStartDelta_53(19)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_25
  # DEBUG BEGIN_STMT
  _21 = _1->driver;
  _22 = _21->hwtStart;
  _23 = OS_kernelData.accounting.frc;
  _22 (_1, _23, OS_hwtStartDelta_25);

  <bb 21> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}

