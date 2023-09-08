
IPA constant propagation start:
Determining dynamic type for call: _4 (_2);
  Starting walk at: _4 (_2);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_PreemptIsrExecTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (_2);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_PreemptIsrExecTiming for cloning; -fipa-cp-clone disabled.

overall_size: 32, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_PreemptIsrExecTiming/0:
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

OS_GetTimeUsed/3 (OS_GetTimeUsed) @06ba0c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_PreemptIsrExecTiming/0 (708669605 (estimated locally),0.66 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c2a798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_PreemptIsrExecTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c2a750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_PreemptIsrExecTiming/0 (read)OS_PreemptIsrExecTiming/0 (read)OS_PreemptIsrExecTiming/0 (read)OS_PreemptIsrExecTiming/0 (read)OS_PreemptIsrExecTiming/0 (read)OS_PreemptIsrExecTiming/0 (write)OS_PreemptIsrExecTiming/0 (write)OS_PreemptIsrExecTiming/0 (write)OS_PreemptIsrExecTiming/0 (write)
  Availability: not_available
  Varpool flags:
OS_PreemptIsrExecTiming/0 (OS_PreemptIsrExecTiming) @06ba0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_GetTimeUsed/3 (708669605 (estimated locally),0.66 per call) 
   Indirect call(708669605 (estimated locally),0.66 per call) 

;; Function OS_PreemptIsrExecTiming (OS_PreemptIsrExecTiming, funcdef_no=0, decl_uid=6939, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_PreemptIsrExecTiming/0
__attribute__((target ("general-regs-only")))
OS_PreemptIsrExecTiming (struct os_accountingsave_t * save)
{
  os_tick_t used;
  unsigned char _1;
  const struct os_hwt_t * _2;
  const struct os_hwtdrv_t * _3;
  void (*<T521>) (const struct os_hwt_t *) _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.accounting.inFunction;
  if (_1 == 255)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  save_15(D)->inFunction = 255;
  # DEBUG BEGIN_STMT
  save_15(D)->etType = 0;
  # DEBUG BEGIN_STMT
  save_15(D)->etUsed = 0;
  # DEBUG BEGIN_STMT
  save_15(D)->etLimit = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _2 = OS_executionTimer[0];
  _3 = _2->driver;
  _4 = _3->hwtStop;
  _4 (_2);
  # DEBUG BEGIN_STMT
  used_14 = OS_GetTimeUsed ();
  # DEBUG used => used_14
  # DEBUG BEGIN_STMT
  _5 = OS_kernelData.accounting.etUsed;
  _6 = _5 + used_14;
  save_15(D)->etUsed = _6;
  # DEBUG BEGIN_STMT
  _7 = OS_kernelData.accounting.etLimit;
  save_15(D)->etLimit = _7;
  # DEBUG BEGIN_STMT
  _8 = OS_kernelData.accounting.inFunction;
  save_15(D)->inFunction = _8;
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.accounting.etType;
  save_15(D)->etType = _9;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 255;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etType = 0;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etUsed = 0;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.etLimit = 0;

  <bb 5> [local count: 1073741824]:
  return;

}


