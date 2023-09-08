
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueDummy/0:

 Propagating constants:

Not considering OS_EnqueueDummy for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_EnqueueDummy/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_EnqueueDummy/0 (OS_EnqueueDummy) @06c38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_EnqueueDummy (OS_EnqueueDummy, funcdef_no=0, decl_uid=7404, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_EnqueueDummy/0
__attribute__((target ("general-regs-only")))
OS_EnqueueDummy ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


