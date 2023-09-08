
IPA constant propagation start:
Determining dynamic type for call: _6 (_4);
  Starting walk at: _6 (_4);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _27 (_4, _28, OS_hwtStartDelta_29);
  Starting walk at: _27 (_4, _28, OS_hwtStartDelta_29);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_43 = OS_GetTimeUsed ();
  Function call may change dynamic type:_6 (_4);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/5:
  Jump functions of caller  OS_GetTimeUsed/4:
  Jump functions of caller  OS_StopIsrIntLockTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _27 (_4, _28, OS_hwtStartDelta_29);
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

Not considering OS_StopIsrIntLockTiming for cloning; -fipa-cp-clone disabled.

overall_size: 72, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StopIsrIntLockTiming/0:
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

OS_ExceedExecTime/5 (OS_ExceedExecTime) @06c0a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopIsrIntLockTiming/0 (88583700 (estimated locally),0.08 per call) 
  Calls: 
OS_GetTimeUsed/4 (OS_GetTimeUsed) @06c0ae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopIsrIntLockTiming/0 (536870911 (estimated locally),0.50 per call) 
  Calls: 
OS_executionTimer/3 (OS_executionTimer) @06beac60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopIsrIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/2 (OS_isrTableBase) @06beac18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopIsrIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06beabd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (write)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (write)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (write)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (write)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (write)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (write)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (read)OS_StopIsrIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_StopIsrIntLockTiming/0 (OS_StopIsrIntLockTiming) @06c0ac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/2 (read)OS_executionTimer/3 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/5 (88583700 (estimated locally),0.08 per call) OS_GetTimeUsed/4 (536870911 (estimated locally),0.50 per call) 
   Indirect call(179851755 (estimated locally),0.17 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 

;; Function OS_StopIsrIntLockTiming (OS_StopIsrIntLockTiming, funcdef_no=0, decl_uid=6949, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StopIsrIntLockTiming/0
__attribute__((target ("general-regs-only")))
OS_StopIsrIntLockTiming (os_isrid_t i, os_intlocktype_t locktype)
{
  os_tick_t OS_hwtStartDelta;
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
  unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  unsigned char _12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  unsigned char _18;
  unsigned char _19;
  struct os_israccounting_t * _20;
  unsigned int _21;
  unsigned int _22;
  unsigned int _23;
  unsigned int _24;
  unsigned int _25;
  const struct os_hwtdrv_t * _26;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _27;
  unsigned int _28;
  const os_tick_t iftmp.1_30;
  unsigned char _34;
  const os_tick_t iftmp.1_39;
  const os_tick_t iftmp.1_40;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_1 = OS_isrTableBase;
  _2 = (unsigned int) i_36(D);
  _3 = _2 * 68;
  isr_37 = OS_isrTableBase.0_1 + _3;
  # DEBUG isr => isr_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (locktype_38(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  iftmp.1_40 = isr_37->osLockTime;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870911]:
  iftmp.1_39 = isr_37->allLockTime;

  <bb 5> [local count: 1073741823]:
  # iftmp.1_30 = PHI <iftmp.1_40(3), iftmp.1_39(4)>
  # DEBUG locktime => iftmp.1_30
  # DEBUG BEGIN_STMT
  if (iftmp.1_30 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 6> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _4 = OS_executionTimer[0];
  _5 = _4->driver;
  _6 = _5->hwtStop;
  _6 (_4);
  # DEBUG BEGIN_STMT
  used_43 = OS_GetTimeUsed ();
  # DEBUG used => used_43
  # DEBUG BEGIN_STMT
  if (locktype_38(D) == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _7 = OS_kernelData.accounting.etUsed;
  _8 = OS_kernelData.accounting.osSaveUsed;
  _9 = _8 + used_43;
  _10 = _7 + _9;
  OS_kernelData.accounting.etUsed = _10;
  # DEBUG BEGIN_STMT
  _11 = OS_kernelData.accounting.osSaveLimit;
  OS_kernelData.accounting.etLimit = _11;
  # DEBUG BEGIN_STMT
  _12 = OS_kernelData.accounting.osSaveType;
  OS_kernelData.accounting.etType = _12;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _13 = OS_kernelData.accounting.etUsed;
  _14 = OS_kernelData.accounting.allSaveUsed;
  _15 = _14 + used_43;
  _16 = _13 + _15;
  OS_kernelData.accounting.etUsed = _16;
  # DEBUG BEGIN_STMT
  _17 = OS_kernelData.accounting.allSaveLimit;
  OS_kernelData.accounting.etLimit = _17;
  # DEBUG BEGIN_STMT
  _18 = OS_kernelData.accounting.allSaveType;
  OS_kernelData.accounting.etType = _18;

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _19 = isr_37->flags;
  _34 = _19 & 64;
  if (_34 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 268435456]:
  _20 = isr_37->accounting;
  _21 = _20->etMax;
  _22 = OS_kernelData.accounting.etUsed;
  if (_21 < _22)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _20->etMax = _22;

  <bb 12> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _23 = OS_kernelData.accounting.etLimit;
  if (_23 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 13> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _24 = OS_kernelData.accounting.etUsed;
  if (_23 <= _24)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  goto <bb 18>; [100.00%]

  <bb 15> [local count: 179851755]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_51 = _23 - _24;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_51
  # DEBUG BEGIN_STMT
  _25 = _4->maxDelta;
  if (_25 < OS_hwtStartDelta_51)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 89925878]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_52 = _4->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_52

  <bb 17> [local count: 179851755]:
  # OS_hwtStartDelta_29 = PHI <OS_hwtStartDelta_51(15), OS_hwtStartDelta_52(16)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_29
  # DEBUG BEGIN_STMT
  _26 = _4->driver;
  _27 = _26->hwtStart;
  _28 = OS_kernelData.accounting.frc;
  _27 (_4, _28, OS_hwtStartDelta_29);

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


