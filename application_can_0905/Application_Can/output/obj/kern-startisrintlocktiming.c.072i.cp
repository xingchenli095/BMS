
IPA constant propagation start:
Determining dynamic type for call: _6 (_4);
  Starting walk at: _6 (_4);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _17 (_4, _18, OS_hwtStartDelta_20);
  Starting walk at: _17 (_4, _18, OS_hwtStartDelta_20);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_35 = OS_GetTimeUsed ();
  Function call may change dynamic type:_6 (_4);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/5:
  Jump functions of caller  OS_GetTimeUsed/4:
  Jump functions of caller  OS_StartIsrIntLockTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _17 (_4, _18, OS_hwtStartDelta_20);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (_4);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_StartIsrIntLockTiming for cloning; -fipa-cp-clone disabled.

overall_size: 73, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartIsrIntLockTiming/0:
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

OS_ExceedExecTime/5 (OS_ExceedExecTime) @06d1b000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartIsrIntLockTiming/0 (88583700 (estimated locally),0.08 per call) 
  Calls: 
OS_GetTimeUsed/4 (OS_GetTimeUsed) @06d1bee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartIsrIntLockTiming/0 (536870911 (estimated locally),0.50 per call) 
  Calls: 
OS_executionTimer/3 (OS_executionTimer) @06cfbe10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartIsrIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/2 (OS_isrTableBase) @06cfbdc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartIsrIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06cfbd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartIsrIntLockTiming/0 (read)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (read)OS_StartIsrIntLockTiming/0 (read)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (read)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (write)OS_StartIsrIntLockTiming/0 (read)OS_StartIsrIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_StartIsrIntLockTiming/0 (OS_StartIsrIntLockTiming) @06d1bc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/2 (read)OS_executionTimer/3 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/5 (88583700 (estimated locally),0.08 per call) OS_GetTimeUsed/4 (536870911 (estimated locally),0.50 per call) 
   Indirect call(448287211 (estimated locally),0.42 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 

;; Function OS_StartIsrIntLockTiming (OS_StartIsrIntLockTiming, funcdef_no=0, decl_uid=6946, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartIsrIntLockTiming/0
__attribute__((target ("general-regs-only")))
OS_StartIsrIntLockTiming (os_isrid_t i, os_intlocktype_t locktype)
{
  os_tick_t OS_hwtStartDelta;
  os_tick_t remaining;
  os_tick_t used;
  const struct os_isr_t * const isr;
  const struct os_isr_t * OS_isrTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_hwt_t * _4;
  const struct os_hwtdrv_t * _5;
  void (*<T521>) (const struct os_hwt_t *) _6;
  unsigned int _7;
  unsigned int _8;
  unsigned char _9;
  struct os_israccounting_t * _10;
  unsigned int _11;
  unsigned int _12;
  unsigned char _13;
  unsigned char _14;
  unsigned int _15;
  const struct os_hwtdrv_t * _16;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _17;
  unsigned int _18;
  const os_tick_t iftmp.1_21;
  unsigned char _26;
  const os_tick_t iftmp.1_31;
  const os_tick_t iftmp.1_32;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_1 = OS_isrTableBase;
  _2 = (unsigned int) i_28(D);
  _3 = _2 * 68;
  isr_29 = OS_isrTableBase.0_1 + _3;
  # DEBUG isr => isr_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (locktype_30(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  iftmp.1_32 = isr_29->osLockTime;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870911]:
  iftmp.1_31 = isr_29->allLockTime;

  <bb 5> [local count: 1073741823]:
  # iftmp.1_21 = PHI <iftmp.1_32(3), iftmp.1_31(4)>
  # DEBUG locktime => iftmp.1_21
  # DEBUG BEGIN_STMT
  if (iftmp.1_21 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 6> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _4 = OS_executionTimer[0];
  _5 = _4->driver;
  _6 = _5->hwtStop;
  _6 (_4);
  # DEBUG BEGIN_STMT
  used_35 = OS_GetTimeUsed ();
  # DEBUG used => used_35
  # DEBUG BEGIN_STMT
  _7 = OS_kernelData.accounting.etUsed;
  _8 = _7 + used_35;
  OS_kernelData.accounting.etUsed = _8;
  # DEBUG BEGIN_STMT
  _9 = isr_29->flags;
  _26 = _9 & 64;
  if (_26 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 268435456]:
  _10 = isr_29->accounting;
  _11 = _10->etMax;
  if (_8 > _11)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10->etMax = _8;

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = OS_kernelData.accounting.etLimit;
  if (_12 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 268435456]:
  if (_8 >= _12)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  goto <bb 23>; [100.00%]

  <bb 12> [local count: 448287211]:
  # DEBUG BEGIN_STMT
  if (_12 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  remaining_39 = _12 - _8;
  # DEBUG remaining => remaining_39

  <bb 14> [local count: 448287211]:
  # remaining_19 = PHI <4294967295(12), remaining_39(13)>
  # DEBUG remaining => remaining_19
  # DEBUG BEGIN_STMT
  if (locktype_30(D) == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  _13 = OS_kernelData.accounting.etType;
  OS_kernelData.accounting.osSaveType = _13;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.osSaveUsed = _8;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.osSaveLimit = _12;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  _14 = OS_kernelData.accounting.etType;
  OS_kernelData.accounting.allSaveType = _14;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.allSaveUsed = _8;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.allSaveLimit = _12;

  <bb 17> [local count: 448287211]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 0;
  # DEBUG BEGIN_STMT
  if (remaining_19 <= iftmp.1_21)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = remaining_19;
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = iftmp.1_21;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 3;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etType = 3;

  <bb 20> [local count: 448287211]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_51 = OS_kernelData.accounting.etLimit;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_51
  # DEBUG BEGIN_STMT
  _15 = _4->maxDelta;
  if (_15 < OS_hwtStartDelta_51)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_52 = _4->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_52

  <bb 22> [local count: 448287211]:
  # OS_hwtStartDelta_20 = PHI <OS_hwtStartDelta_51(20), OS_hwtStartDelta_52(21)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_20
  # DEBUG BEGIN_STMT
  _16 = _4->driver;
  _17 = _16->hwtStart;
  _18 = OS_kernelData.accounting.frc;
  _17 (_4, _18, OS_hwtStartDelta_20);

  <bb 23> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


