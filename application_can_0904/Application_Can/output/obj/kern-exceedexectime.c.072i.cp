
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/2:
  Jump functions of caller  OS_ExceedExecTime/0:

 Propagating constants:

Not considering OS_ExceedExecTime for cloning; -fipa-cp-clone disabled.

overall_size: 52, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ExceedExecTime/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_svc_TrapHandler/3 (OS_svc_TrapHandler) @06c7bab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExceedExecTime/0 (addr)OS_ExceedExecTime/0 (addr)OS_ExceedExecTime/0 (addr)OS_ExceedExecTime/0 (addr)OS_ExceedExecTime/0 (addr)OS_ExceedExecTime/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/2 (OS_Error) @06c9fd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ExceedExecTime/0 (80307857 (estimated locally),0.07 per call) OS_ExceedExecTime/0 (80307857 (estimated locally),0.07 per call) OS_ExceedExecTime/0 (80307857 (estimated locally),0.07 per call) OS_ExceedExecTime/0 (121678571 (estimated locally),0.11 per call) OS_ExceedExecTime/0 (121678571 (estimated locally),0.11 per call) OS_ExceedExecTime/0 (121678571 (estimated locally),0.11 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06c7ba20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ExceedExecTime/0 (read)OS_ExceedExecTime/0 (read)OS_ExceedExecTime/0 (write)OS_ExceedExecTime/0 (write)OS_ExceedExecTime/0 (write)OS_ExceedExecTime/0 (read)OS_ExceedExecTime/0 (write)OS_ExceedExecTime/0 (read)OS_ExceedExecTime/0 (write)
  Availability: not_available
  Varpool flags:
OS_ExceedExecTime/0 (OS_ExceedExecTime) @06c9fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_svc_TrapHandler/3 (addr)OS_svc_TrapHandler/3 (addr)OS_svc_TrapHandler/3 (addr)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_svc_TrapHandler/3 (addr)OS_svc_TrapHandler/3 (addr)OS_svc_TrapHandler/3 (addr)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/2 (80307857 (estimated locally),0.07 per call) OS_Error/2 (80307857 (estimated locally),0.07 per call) OS_Error/2 (80307857 (estimated locally),0.07 per call) OS_Error/2 (121678571 (estimated locally),0.11 per call) OS_Error/2 (121678571 (estimated locally),0.11 per call) OS_Error/2 (121678571 (estimated locally),0.11 per call) 

;; Function OS_ExceedExecTime (OS_ExceedExecTime, funcdef_no=0, decl_uid=6956, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ExceedExecTime/0
__attribute__((target ("general-regs-only")))
OS_ExceedExecTime ()
{
  os_uint8_t inFunctionSave;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  inFunctionSave_7 = OS_kernelData.inFunction;
  # DEBUG inFunctionSave => inFunctionSave_7
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.accounting.inFunction;
  OS_kernelData.inFunction = _1;
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 255;
  # DEBUG BEGIN_STMT
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.taskTimingNesting = 1;
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.accounting.etType;
  switch (_2) <default: <L3> [33.33%], case 2: <L1> [33.33%], case 3: <L2> [33.33%]>

  <bb 4> [local count: 121678571]:
<L1>:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TrapHandler, 63, 0B);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 121678571]:
<L2>:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TrapHandler, 65, 0B);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 121678571]:
<L3>:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TrapHandler, 34, 0B);
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 365035713]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.taskTimingNesting = 0;
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 9>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 9> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.accounting.etType;
  switch (_3) <default: <L9> [33.33%], case 2: <L7> [33.33%], case 3: <L8> [33.33%]>

  <bb 10> [local count: 80307857]:
<L7>:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TrapHandler, 64, 0B);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 80307857]:
<L8>:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TrapHandler, 66, 0B);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 80307857]:
<L9>:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TrapHandler, 35, 0B);
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073681224]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = inFunctionSave_7;
  return;

}

