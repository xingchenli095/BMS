
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_StartupChecksTrustedFunction/0:

 Propagating constants:

Not considering OS_StartupChecksTrustedFunction for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartupChecksTrustedFunction/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_StartupChecksTrustedFunction/0 (OS_StartupChecksTrustedFunction) @06c69a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_StartupChecksTrustedFunction (OS_StartupChecksTrustedFunction, funcdef_no=0, decl_uid=6503, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartupChecksTrustedFunction/0
__attribute__((target ("general-regs-only")))
OS_StartupChecksTrustedFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  return 0;

}


