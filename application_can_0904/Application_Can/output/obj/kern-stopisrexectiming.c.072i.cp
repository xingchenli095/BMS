
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_StopIsrExecTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (_1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_StopIsrExecTiming for cloning; -fipa-cp-clone disabled.

overall_size: 26, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StopIsrExecTiming/0:
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

OS_GetTimeUsed/3 (OS_GetTimeUsed) @06c18c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StopIsrExecTiming/0 (574129754 (estimated locally),0.53 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06bf87e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopIsrExecTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06bf8798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopIsrExecTiming/0 (read)OS_StopIsrExecTiming/0 (write)
  Availability: not_available
  Varpool flags:
OS_StopIsrExecTiming/0 (OS_StopIsrExecTiming) @06c18a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_GetTimeUsed/3 (574129754 (estimated locally),0.53 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_StopIsrExecTiming (OS_StopIsrExecTiming, funcdef_no=0, decl_uid=6943, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StopIsrExecTiming/0
__attribute__((target ("general-regs-only")))
OS_StopIsrExecTiming (const struct os_isr_t * isr)
{
  os_tick_t used;
  struct os_israccounting_t * acc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned int _7;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  acc_12 = isr_11(D)->accounting;
  # DEBUG acc => acc_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  if (acc_12 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  used_15 = OS_GetTimeUsed ();
  # DEBUG used => used_15
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.etUsed;
  _5 = _4 + used_15;
  OS_kernelData.accounting.etUsed = _5;
  # DEBUG BEGIN_STMT
  _6 = isr_11(D)->flags;
  _9 = _6 & 64;
  if (_9 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 287064877]:
  _7 = acc_12->etMax;
  if (_5 > _7)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 143532438]:
  # DEBUG BEGIN_STMT
  acc_12->etMax = _5;

  <bb 6> [local count: 1073741824]:
  return;

}


