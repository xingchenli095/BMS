
IPA constant propagation start:
Determining dynamic type for call: _4 = _3 (_1);
  Starting walk at: _4 = _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 (_1, _4, OS_hwtStartDelta_8);
  Starting walk at: _7 (_1, _4, OS_hwtStartDelta_8);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = _3 (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_StartIsrExecTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (_1, _4, OS_hwtStartDelta_8);
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

Not considering OS_StartIsrExecTiming for cloning; -fipa-cp-clone disabled.

overall_size: 30, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartIsrExecTiming/0:
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

OS_executionTimer/2 (OS_executionTimer) @06bf97e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartIsrExecTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06bf9798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartIsrExecTiming/0 (write)OS_StartIsrExecTiming/0 (write)OS_StartIsrExecTiming/0 (write)OS_StartIsrExecTiming/0 (write)OS_StartIsrExecTiming/0 (write)
  Availability: not_available
  Varpool flags:
OS_StartIsrExecTiming/0 (OS_StartIsrExecTiming) @06c19b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_executionTimer/2 (read)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(536870913 (estimated locally),0.50 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_StartIsrExecTiming (OS_StartIsrExecTiming, funcdef_no=0, decl_uid=6937, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartIsrExecTiming/0
__attribute__((target ("general-regs-only")))
OS_StartIsrExecTiming (os_tick_t budget)
{
  os_tick_t OS_hwtStartDelta;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  const struct os_hwtdrv_t * _6;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 0;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = budget_12(D);
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 3;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etType = 1;
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtRead;
  _4 = _3 (_1);
  OS_kernelData.accounting.frc = _4;
  # DEBUG BEGIN_STMT
  if (budget_12(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_hwtStartDelta => budget_12(D)
  # DEBUG BEGIN_STMT
  _5 = _1->maxDelta;
  if (_5 < budget_12(D))
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  OS_hwtStartDelta_18 = _1->defDelta;
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_18

  <bb 5> [local count: 536870913]:
  # OS_hwtStartDelta_8 = PHI <budget_12(D)(3), OS_hwtStartDelta_18(4)>
  # DEBUG OS_hwtStartDelta => OS_hwtStartDelta_8
  # DEBUG BEGIN_STMT
  _6 = _1->driver;
  _7 = _6->hwtStart;
  _7 (_1, _4, OS_hwtStartDelta_8);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


