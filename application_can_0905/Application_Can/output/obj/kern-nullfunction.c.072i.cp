
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_NullFunction/0:

 Propagating constants:

Not considering OS_NullFunction for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_NullFunction/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_NullFunction/0 (OS_NullFunction) @06c5aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_NullFunction (OS_NullFunction, funcdef_no=0, decl_uid=6397, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_NullFunction/0
__attribute__((target ("general-regs-only")))
OS_NullFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


