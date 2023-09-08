
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KernCheckIsrMemoryAccess/3:
  Jump functions of caller  OS_KernCheckTaskMemoryAccess/2:
  Jump functions of caller  OS_KernIocCheckMemoryAccess/0:

 Propagating constants:

Not considering OS_KernIocCheckMemoryAccess for cloning; -fipa-cp-clone disabled.

overall_size: 21, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernIocCheckMemoryAccess/0:
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

OS_KernCheckIsrMemoryAccess/3 (OS_KernCheckIsrMemoryAccess) @06c52d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernIocCheckMemoryAccess/0 (173338695 (estimated locally),0.16 per call) 
  Calls: 
OS_KernCheckTaskMemoryAccess/2 (OS_KernCheckTaskMemoryAccess) @06c52c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernIocCheckMemoryAccess/0 (217325345 (estimated locally),0.20 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06c32708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernIocCheckMemoryAccess/0 (read)OS_KernIocCheckMemoryAccess/0 (read)OS_KernIocCheckMemoryAccess/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernIocCheckMemoryAccess/0 (OS_KernIocCheckMemoryAccess) @06c52a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_KernCheckIsrMemoryAccess/3 (173338695 (estimated locally),0.16 per call) OS_KernCheckTaskMemoryAccess/2 (217325345 (estimated locally),0.20 per call) 

;; Function OS_KernIocCheckMemoryAccess (OS_KernIocCheckMemoryAccess, funcdef_no=0, decl_uid=7405, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernIocCheckMemoryAccess/0
__attribute__((target ("general-regs-only")))
OS_KernIocCheckMemoryAccess (const void * data, os_size_t len)
{
  const os_isrid_t current_isr;
  const struct os_task_t * const current_task;
  const os_uint8_t inFunction;
  os_memoryaccess_t access;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  inFunction_5 = OS_kernelData.inFunction;
  # DEBUG inFunction => inFunction_5
  # DEBUG BEGIN_STMT
  if (inFunction_5 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  current_task_11 = OS_kernelData.taskCurrent;
  # DEBUG current_task => current_task_11
  # DEBUG BEGIN_STMT
  _1 = current_task_11->taskId;
  access_13 = OS_KernCheckTaskMemoryAccess (_1, data_7(D), len_8(D));
  # DEBUG access => access_13
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  if (inFunction_5 == 3)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 173338695]:
  # DEBUG BEGIN_STMT
  current_isr_6 = OS_kernelData.isrCurrent;
  # DEBUG current_isr => current_isr_6
  # DEBUG BEGIN_STMT
  access_10 = OS_KernCheckIsrMemoryAccess (current_isr_6, data_7(D), len_8(D));
  # DEBUG access => access_10

  <bb 6> [local count: 1073741824]:
  # access_2 = PHI <access_13(3), access_10(5), 0(4)>
  # DEBUG access => access_2
  # DEBUG BEGIN_STMT
  return access_2;

}


