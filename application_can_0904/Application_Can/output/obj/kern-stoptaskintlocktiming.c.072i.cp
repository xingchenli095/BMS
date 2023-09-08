
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _24 (_1, _25, OS_hwtStartDelta_26);
  Starting walk at: _24 (_1, _25, OS_hwtStartDelta_26);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_40 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/4:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_StopTaskIntLockTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _24 (_1, _25, OS_hwtStartDelta_26);
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

Not considering OS_StopTaskIntLockTiming for cloning; -fipa-cp-clone disabled.

overall_size: 70, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StopTaskIntLockTiming/0:
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

OS_ExceedExecTime/4 (OS_ExceedExecTime) @06c68000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopTaskIntLockTiming/0 (88583700 (estimated locally),0.08 per call) 
  Calls: 
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06c68e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopTaskIntLockTiming/0 (536870911 (estimated locally),0.50 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c48c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopTaskIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c48bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopTaskIntLockTiming/0 (read)OS_StopTaskIntLockTiming/0 (write)OS_StopTaskIntLockTiming/0 (write)OS_StopTaskIntLockTiming/0 (write)OS_StopTaskIntLockTiming/0 (read)OS_StopTaskIntLockTiming/0 (write)OS_StopTaskIntLockTiming/0 (write)OS_StopTaskIntLockTiming/0 (write)OS_StopTaskIntLockTiming/0 (read)OS_StopTaskIntLockTiming/0 (read)OS_StopTaskIntLockTiming/0 (read)OS_StopTaskIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_StopTaskIntLockTiming/0 (OS_StopTaskIntLockTiming) @06c68c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/4 (88583700 (estimated locally),0.08 per call) OS_GetTimeUsed/3 (536870911 (estimated locally),0.50 per call) 
   Indirect call(179851755 (estimated locally),0.17 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 

;; Function OS_StopTaskIntLockTiming (OS_StopTaskIntLockTiming, funcdef_no=0, decl_uid=6935, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StopTaskIntLockTiming/0
__attribute__((target ("general-regs-only")))
OS_StopTaskIntLockTiming (const struct os_task_t * tp, os_intlocktype_t locktype)
{
  os_tick_t OS_hwtStartDelta;
  os_tick_t used;
  struct os_taskaccounting_t * acc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned char _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned char _15;
  unsigned char _16;
  struct os_taskaccounting_t * _17;
  unsigned int _18;
  unsigned int _19;
  unsigned int _20;
  unsigned int _21;
  unsigned int _22;
  const struct os_hwtdrv_t * _23;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _24;
  unsigned int _25;
  const os_tick_t iftmp.0_27;
  unsigned char _31;
  const os_tick_t iftmp.0_36;
  const os_tick_t iftmp.0_37;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  acc_34 = tp_33(D)->accounting;
  # DEBUG acc => acc_34
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (locktype_35(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  iftmp.0_37 = tp_33(D)->osLockTime;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870911]:
  iftmp.0_36 = tp_33(D)->allLockTime;

  <bb 5> [local count: 1073741823]:
  # iftmp.0_27 = PHI <iftmp.0_37(3), iftmp.0_36(4)>
  # DEBUG locktime => iftmp.0_27
  # DEBUG BEGIN_STMT
  if (iftmp.0_27 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 6> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  used_40 = OS_GetTimeUsed ();
  # DEBUG used => used_40
  # DEBUG BEGIN_STMT
  if (locktype_35(D) == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.etUsed;
  _5 = acc_34->osSaveUsed;
  _6 = _5 + used_40;
  _7 = _4 + _6;
  OS_kernelData.accounting.etUsed = _7;
  # DEBUG BEGIN_STMT
  _8 = acc_34->osSaveLimit;
  OS_kernelData.accounting.etLimit = _8;
  # DEBUG BEGIN_STMT
  _9 = acc_34->osSaveType;
  OS_kernelData.accounting.etType = _9;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _10 = OS_kernelData.accounting.etUsed;
  _11 = acc_34->allSaveUsed;
  _12 = _11 + used_40;
  _13 = _10 + _12;
  OS_kernelData.accounting.etUsed = _13;
  # DEBUG BEGIN_STMT
  _14 = acc_34->allSaveLimit;
  OS_kernelData.accounting.etLimit = _14;
  # DEBUG BEGIN_STMT
  _15 = acc_34->allSaveType;
  OS_kernelData.accounting.etType = _15;

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _16 = tp_33(D)->flags;
  _31 = _16 & 64;
  if (_31 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 268435456]:
  _17 = tp_33(D)->accounting;
  _18 = _17->etMax;
  _19 = OS_kernelData.accounting.etUsed;
  if (_18 < _19)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _17->etMax = _19;

  <bb 12> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _20 = OS_kernelData.accounting.etLimit;
  if (_20 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 13> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _21 = OS_kernelData.accounting.etUsed;
  if (_20 <= _21)
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
  OS_hwtStartDelta_48 = _20 - _21;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_48
  # DEBUG BEGIN_STMT
  _22 = _1->maxDelta;
  if (_22 < OS_hwtStartDelta_48)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 89925878]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_49 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_49

  <bb 17> [local count: 179851755]:
  # OS_hwtStartDelta_26 = PHI <OS_hwtStartDelta_48(15), OS_hwtStartDelta_49(16)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_26
  # DEBUG BEGIN_STMT
  _23 = _1->driver;
  _24 = _23->hwtStart;
  _25 = OS_kernelData.accounting.frc;
  _24 (_1, _25, OS_hwtStartDelta_26);

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}

