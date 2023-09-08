
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _14 (_1, _15, OS_hwtStartDelta_17);
  Starting walk at: _14 (_1, _15, OS_hwtStartDelta_17);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_32 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/4:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_StartTaskIntLockTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _14 (_1, _15, OS_hwtStartDelta_17);
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

Not considering OS_StartTaskIntLockTiming for cloning; -fipa-cp-clone disabled.

overall_size: 71, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartTaskIntLockTiming/0:
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

OS_ExceedExecTime/4 (OS_ExceedExecTime) @06bf6000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartTaskIntLockTiming/0 (88583700 (estimated locally),0.08 per call) 
  Calls: 
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06bf6ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartTaskIntLockTiming/0 (536870911 (estimated locally),0.50 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c7ddc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartTaskIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c7dd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartTaskIntLockTiming/0 (read)OS_StartTaskIntLockTiming/0 (write)OS_StartTaskIntLockTiming/0 (read)OS_StartTaskIntLockTiming/0 (read)OS_StartTaskIntLockTiming/0 (read)OS_StartTaskIntLockTiming/0 (write)OS_StartTaskIntLockTiming/0 (write)OS_StartTaskIntLockTiming/0 (write)OS_StartTaskIntLockTiming/0 (write)OS_StartTaskIntLockTiming/0 (write)OS_StartTaskIntLockTiming/0 (read)OS_StartTaskIntLockTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_StartTaskIntLockTiming/0 (OS_StartTaskIntLockTiming) @06bf6c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/4 (88583700 (estimated locally),0.08 per call) OS_GetTimeUsed/3 (536870911 (estimated locally),0.50 per call) 
   Indirect call(448287211 (estimated locally),0.42 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 

;; Function OS_StartTaskIntLockTiming (OS_StartTaskIntLockTiming, funcdef_no=0, decl_uid=6932, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartTaskIntLockTiming/0
__attribute__((target ("general-regs-only")))
OS_StartTaskIntLockTiming (const struct os_task_t * tp, os_intlocktype_t locktype)
{
  os_tick_t OS_hwtStartDelta;
  os_tick_t remaining;
  os_tick_t used;
  struct os_taskaccounting_t * acc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  struct os_taskaccounting_t * _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  unsigned int _12;
  const struct os_hwtdrv_t * _13;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _14;
  unsigned int _15;
  const os_tick_t iftmp.0_18;
  unsigned char _23;
  const os_tick_t iftmp.0_28;
  const os_tick_t iftmp.0_29;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  acc_26 = tp_25(D)->accounting;
  # DEBUG acc => acc_26
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (locktype_27(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  iftmp.0_29 = tp_25(D)->osLockTime;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870911]:
  iftmp.0_28 = tp_25(D)->allLockTime;

  <bb 5> [local count: 1073741823]:
  # iftmp.0_18 = PHI <iftmp.0_29(3), iftmp.0_28(4)>
  # DEBUG locktime => iftmp.0_18
  # DEBUG BEGIN_STMT
  if (iftmp.0_18 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 6> [local count: 536870911]:
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
  _5 = _4 + used_32;
  OS_kernelData.accounting.etUsed = _5;
  # DEBUG BEGIN_STMT
  _6 = tp_25(D)->flags;
  _23 = _6 & 64;
  if (_23 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 268435456]:
  _7 = tp_25(D)->accounting;
  _8 = _7->etMax;
  if (_5 > _8)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7->etMax = _5;

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.accounting.etLimit;
  if (_9 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 268435456]:
  if (_5 >= _9)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  goto <bb 23>; [100.00%]

  <bb 12> [local count: 448287211]:
  # DEBUG BEGIN_STMT
  if (_9 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  remaining_36 = _9 - _5;
  # DEBUG remaining => remaining_36

  <bb 14> [local count: 448287211]:
  # remaining_16 = PHI <4294967295(12), remaining_36(13)>
  # DEBUG remaining => remaining_16
  # DEBUG BEGIN_STMT
  if (locktype_27(D) == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  _10 = OS_kernelData.accounting.etType;
  acc_26->osSaveType = _10;
  # DEBUG BEGIN_STMT
  acc_26->osSaveUsed = _5;
  # DEBUG BEGIN_STMT
  acc_26->osSaveLimit = _9;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  _11 = OS_kernelData.accounting.etType;
  acc_26->allSaveType = _11;
  # DEBUG BEGIN_STMT
  acc_26->allSaveUsed = _5;
  # DEBUG BEGIN_STMT
  acc_26->allSaveLimit = _9;

  <bb 17> [local count: 448287211]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 0;
  # DEBUG BEGIN_STMT
  if (remaining_16 <= iftmp.0_18)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = remaining_16;
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = iftmp.0_18;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 1;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etType = 3;

  <bb 20> [local count: 448287211]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_48 = OS_kernelData.accounting.etLimit;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_48
  # DEBUG BEGIN_STMT
  _12 = _1->maxDelta;
  if (_12 < OS_hwtStartDelta_48)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 224143605]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_49 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_49

  <bb 22> [local count: 448287211]:
  # OS_hwtStartDelta_17 = PHI <OS_hwtStartDelta_48(20), OS_hwtStartDelta_49(21)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_17
  # DEBUG BEGIN_STMT
  _13 = _1->driver;
  _14 = _13->hwtStart;
  _15 = OS_kernelData.accounting.frc;
  _14 (_1, _15, OS_hwtStartDelta_17);

  <bb 23> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


