
IPA constant propagation start:
Determining dynamic type for call: _4 = _3 (_1);
  Starting walk at: _4 = _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _10 (_1, _4, OS_hwtStartDelta_12);
  Starting walk at: _10 (_1, _4, OS_hwtStartDelta_12);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = _3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_StartTaskExecTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _10 (_1, _4, OS_hwtStartDelta_12);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _4 = _3 (_1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_StartTaskExecTiming for cloning; -fipa-cp-clone disabled.

overall_size: 39, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartTaskExecTiming/0:
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

OS_executionTimer/2 (OS_executionTimer) @06c48948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartTaskExecTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c48900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartTaskExecTiming/0 (write)OS_StartTaskExecTiming/0 (write)OS_StartTaskExecTiming/0 (write)OS_StartTaskExecTiming/0 (write)OS_StartTaskExecTiming/0 (write)
  Availability: not_available
  Varpool flags:
OS_StartTaskExecTiming/0 (OS_StartTaskExecTiming) @06c68b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(375809638 (estimated locally),0.35 per call) 
   Indirect call(751619277 (estimated locally),0.70 per call) 

;; Function OS_StartTaskExecTiming (OS_StartTaskExecTiming, funcdef_no=0, decl_uid=6925, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartTaskExecTiming/0
__attribute__((target ("general-regs-only")))
OS_StartTaskExecTiming (const struct os_task_t * tp)
{
  os_tick_t OS_hwtStartDelta;
  os_tick_t remaining;
  struct os_taskaccounting_t * acc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned char _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  const struct os_hwtdrv_t * _9;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  acc_16 = tp_15(D)->accounting;
  # DEBUG acc => acc_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (acc_16 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 3> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtRead;
  _4 = _3 (_1);
  OS_kernelData.accounting.frc = _4;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 1;
  # DEBUG BEGIN_STMT
  _5 = acc_16->etType;
  OS_kernelData.accounting.etType = _5;
  # DEBUG BEGIN_STMT
  _6 = acc_16->etUsed;
  OS_kernelData.accounting.etUsed = _6;
  # DEBUG BEGIN_STMT
  _7 = tp_15(D)->execBudget;
  OS_kernelData.accounting.etLimit = _7;
  # DEBUG BEGIN_STMT
  if (_7 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 4> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  if (_6 >= _7)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  remaining_23 = _7 - _6;
  # DEBUG remaining => remaining_23

  <bb 6> [local count: 375809638]:
  # remaining_11 = PHI <1(4), remaining_23(5)>
  # DEBUG remaining => remaining_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_hwtStartDelta => remaining_11
  # DEBUG BEGIN_STMT
  _8 = _1->maxDelta;
  if (_8 < remaining_11)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_24 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_24

  <bb 8> [local count: 375809638]:
  # OS_hwtStartDelta_12 = PHI <remaining_11(6), OS_hwtStartDelta_24(7)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_12
  # DEBUG BEGIN_STMT
  _9 = _1->driver;
  _10 = _9->hwtStart;
  _10 (_1, _4, OS_hwtStartDelta_12);

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


