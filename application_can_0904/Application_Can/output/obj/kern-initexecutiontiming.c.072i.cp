
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitExecutionTiming/0:

 Propagating constants:

Not considering OS_InitExecutionTiming for cloning; -fipa-cp-clone disabled.

overall_size: 4, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitExecutionTiming/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_kernelData/1 (OS_kernelData) @06d185e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitExecutionTiming/0 (write)
  Availability: not_available
  Varpool flags:
OS_InitExecutionTiming/0 (OS_InitExecutionTiming) @06d38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitExecutionTiming (OS_InitExecutionTiming, funcdef_no=0, decl_uid=6923, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitExecutionTiming/0
__attribute__((target ("general-regs-only")))
OS_InitExecutionTiming ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 255;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


