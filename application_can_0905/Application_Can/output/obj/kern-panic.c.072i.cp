
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ShutdownNoHooks/3:
  Jump functions of caller  OS_Shutdown/2:
  Jump functions of caller  OS_Panic/0:

 Propagating constants:

Not considering OS_Panic for cloning; -fipa-cp-clone disabled.

overall_size: 11, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_Panic/0:
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

OS_ShutdownNoHooks/3 (OS_ShutdownNoHooks) @06c49d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Panic/0 (536870913 (estimated locally),0.50 per call) 
  Calls: 
OS_Shutdown/2 (OS_Shutdown) @06c49c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Panic/0 (536870913 (estimated locally),0.50 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06c28750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Panic/0 (read)OS_Panic/0 (write)
  Availability: not_available
  Varpool flags:
OS_Panic/0 (OS_Panic) @06c49a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ShutdownNoHooks/3 (536870913 (estimated locally),0.50 per call) OS_Shutdown/2 (536870913 (estimated locally),0.50 per call) 

;; Function OS_Panic (OS_Panic, funcdef_no=0, decl_uid=5612, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_Panic/0
__attribute__((target ("general-regs-only")))
OS_Panic (os_panic_t curPanicCode)
{
  os_panic_e _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.panicCode;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_kernelData.panicCode = curPanicCode_5(D);
  # DEBUG BEGIN_STMT
  OS_Shutdown (22, 0);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_ShutdownNoHooks ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 22;

}


