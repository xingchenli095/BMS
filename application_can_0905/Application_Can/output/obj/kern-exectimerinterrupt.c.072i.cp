
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _23 (_1, _24, OS_hwtStartDelta_25);
  Starting walk at: _23 (_1, _24, OS_hwtStartDelta_25);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:used_33 = OS_GetTimeUsed ();
  Function call may change dynamic type:_3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/5:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_ExecTimerInterrupt/0:
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

Not considering OS_ExecTimerInterrupt for cloning; -fipa-cp-clone disabled.

overall_size: 67, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ExecTimerInterrupt/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_ExceedExecTime/5 (OS_ExceedExecTime) @06d7d0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ExecTimerInterrupt/0 (536870913 (estimated locally),0.50 per call) 
  Calls: 
OS_isrTableBase/4 (OS_isrTableBase) @06cabdc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExecTimerInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06ccb000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ExecTimerInterrupt/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06cabca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExecTimerInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06cabc60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExecTimerInterrupt/0 (read)OS_ExecTimerInterrupt/0 (write)OS_ExecTimerInterrupt/0 (write)OS_ExecTimerInterrupt/0 (read)OS_ExecTimerInterrupt/0 (read)OS_ExecTimerInterrupt/0 (read)OS_ExecTimerInterrupt/0 (write)OS_ExecTimerInterrupt/0 (read)OS_ExecTimerInterrupt/0 (read)OS_ExecTimerInterrupt/0 (read)
  Availability: not_available
  Varpool flags:
OS_ExecTimerInterrupt/0 (OS_ExecTimerInterrupt) @06ccbd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_isrTableBase/4 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/5 (536870913 (estimated locally),0.50 per call) OS_GetTimeUsed/3 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(536870913 (estimated locally),0.50 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_ExecTimerInterrupt (OS_ExecTimerInterrupt, funcdef_no=0, decl_uid=6958, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ExecTimerInterrupt/0
__attribute__((target ("general-regs-only")))
OS_ExecTimerInterrupt ()
{
  os_tick_t OS_hwtStartDelta;
  const struct os_isr_t * isr;
  os_tick_t remaining;
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
  const struct os_task_t * _10;
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
  unsigned char _29;
  unsigned char _37;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
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
  _5 = ~_4;
  if (_5 < used_33)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 4294967295;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = _4 + used_33;
  OS_kernelData.accounting.etUsed = _6;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _7 = OS_kernelData.accounting.etUsed;
  _8 = OS_kernelData.accounting.etLimit;
  if (_7 >= _8)
    goto <bb 6>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.inFunction;
  if (_9 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 7> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.taskTimingNesting = 1;
  # DEBUG BEGIN_STMT
  _10 = OS_kernelData.taskCurrent;
  _11 = _10->flags;
  _37 = _11 & 64;
  if (_37 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 8> [local count: 91268055]:
  _12 = _10->accounting;
  _13 = _12->etMax;
  if (_7 > _13)
    goto <bb 9>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 9> [local count: 45634028]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12->etMax = _7;
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (_9 == 3)
    goto <bb 11>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 11> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_14 = OS_isrTableBase;
  _15 = OS_kernelData.isrCurrent;
  _16 = (unsigned int) _15;
  _17 = _16 * 68;
  isr_40 = OS_isrTableBase.0_14 + _17;
  # DEBUG isr => isr_40
  # DEBUG BEGIN_STMT
  _18 = isr_40->flags;
  _29 = _18 & 64;
  if (_29 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 60236916]:
  _19 = isr_40->accounting;
  _20 = _19->etMax;
  if (_7 > _20)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 30118458]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19->etMax = _7;

  <bb 14> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();
  goto <bb 18>; [100.00%]

  <bb 15> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  remaining_36 = _8 - _7;
  # DEBUG remaining => remaining_36
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_hwtStartDelta => remaining_36
  # DEBUG BEGIN_STMT
  _21 = _1->maxDelta;
  if (_21 < remaining_36)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_38 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_38

  <bb 17> [local count: 536870913]:
  # OS_hwtStartDelta_25 = PHI <remaining_36(15), OS_hwtStartDelta_38(16)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_25
  # DEBUG BEGIN_STMT
  _22 = _1->driver;
  _23 = _22->hwtStart;
  _24 = OS_kernelData.accounting.frc;
  _23 (_1, _24, OS_hwtStartDelta_25);

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


