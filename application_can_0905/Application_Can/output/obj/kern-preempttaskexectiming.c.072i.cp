
IPA constant propagation start:
Determining dynamic type for call: _3 (_1);
  Starting walk at: _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ExceedExecTime/4:
  Jump functions of caller  OS_GetTimeUsed/3:
  Jump functions of caller  OS_PreemptTaskExecTiming/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (_1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_PreemptTaskExecTiming for cloning; -fipa-cp-clone disabled.

overall_size: 35, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_PreemptTaskExecTiming/0:
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

OS_ExceedExecTime/4 (OS_ExceedExecTime) @06cfbe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_PreemptTaskExecTiming/0 (124017180 (estimated locally),0.12 per call) 
  Calls: 
OS_GetTimeUsed/3 (OS_GetTimeUsed) @06cfbc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_PreemptTaskExecTiming/0 (751619277 (estimated locally),0.70 per call) 
  Calls: 
OS_executionTimer/2 (OS_executionTimer) @06cdb900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_PreemptTaskExecTiming/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06cdb8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_PreemptTaskExecTiming/0 (read)OS_PreemptTaskExecTiming/0 (write)OS_PreemptTaskExecTiming/0 (read)OS_PreemptTaskExecTiming/0 (read)
  Availability: not_available
  Varpool flags:
OS_PreemptTaskExecTiming/0 (OS_PreemptTaskExecTiming) @06cfba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ExceedExecTime/4 (124017180 (estimated locally),0.12 per call) OS_GetTimeUsed/3 (751619277 (estimated locally),0.70 per call) 
   Indirect call(751619277 (estimated locally),0.70 per call) 

;; Function OS_PreemptTaskExecTiming (OS_PreemptTaskExecTiming, funcdef_no=0, decl_uid=6927, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_PreemptTaskExecTiming/0
__attribute__((target ("general-regs-only")))
OS_PreemptTaskExecTiming (const struct os_task_t * tp)
{
  os_tick_t used;
  struct os_taskaccounting_t * acc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  acc_15 = tp_14(D)->accounting;
  # DEBUG acc => acc_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (acc_15 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 3> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtStop;
  _3 (_1);
  # DEBUG BEGIN_STMT
  used_18 = OS_GetTimeUsed ();
  # DEBUG used => used_18
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.etUsed;
  _5 = _4 + used_18;
  OS_kernelData.accounting.etUsed = _5;
  # DEBUG BEGIN_STMT
  acc_15->etUsed = _5;
  # DEBUG BEGIN_STMT
  _6 = OS_kernelData.accounting.etType;
  acc_15->etType = _6;
  # DEBUG BEGIN_STMT
  _7 = tp_14(D)->flags;
  _12 = _7 & 64;
  if (_12 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 375809638]:
  _8 = acc_15->etMax;
  if (_5 > _8)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  acc_15->etMax = _5;

  <bb 6> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.accounting.etLimit;
  if (_9 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 375809638]:
  if (_5 >= _9)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 124017180]:
  # DEBUG BEGIN_STMT
  OS_ExceedExecTime ();

  <bb 9> [local count: 1073741824]:
  return;

}


