
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_StopTaskExecTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (_1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_StopTaskExecTiming for cloning; -fipa-cp-clone disabled.

overall_size: 23, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StopTaskExecTiming/0:
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
  Called by: OS_StopTaskExecTiming/0 (751619278 (estimated locally),0.70 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06c2a7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopTaskExecTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c2a798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StopTaskExecTiming/0 (read)OS_StopTaskExecTiming/0 (write)OS_StopTaskExecTiming/0 (write)
  Availability: not_available
  Varpool flags:
OS_StopTaskExecTiming/0 (OS_StopTaskExecTiming) @06ba0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_GetTimeUsed/3 (751619278 (estimated locally),0.70 per call) 
   Indirect call(751619278 (estimated locally),0.70 per call) 

;; Function OS_StopTaskExecTiming (OS_StopTaskExecTiming, funcdef_no=0, decl_uid=6929, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StopTaskExecTiming/0
__attribute__((target ("general-regs-only")))
OS_StopTaskExecTiming (const struct os_task_t * tp)
{
  os_tick_t used;
  struct os_taskaccounting_t * acc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  acc_11 = tp_10(D)->accounting;
  # DEBUG acc => acc_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (acc_11 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  used_14 = OS_GetTimeUsed ();
  # DEBUG used => used_14
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.etUsed;
  _5 = _4 + used_14;
  OS_kernelData.accounting.etUsed = _5;
  # DEBUG BEGIN_STMT
  _6 = acc_11->etMax;
  if (_5 > _6)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  acc_11->etMax = _5;

  <bb 5> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 255;

  <bb 6> [local count: 1073741824]:
  return;

}


