
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetErrorInfo/0:

 Propagating constants:

Not considering OS_GetErrorInfo for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetErrorInfo/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_kernelData/1 (OS_kernelData) @06b93e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetErrorInfo/0 (addr)
  Availability: not_available
  Varpool flags:
OS_GetErrorInfo/0 (OS_GetErrorInfo) @06ba0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_GetErrorInfo (OS_GetErrorInfo, funcdef_no=0, decl_uid=5710, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetErrorInfo/0
__attribute__((target ("general-regs-only")))
OS_GetErrorInfo ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return &OS_kernelData.errorStatus;

}


