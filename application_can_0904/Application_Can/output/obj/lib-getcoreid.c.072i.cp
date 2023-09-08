
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetCoreId/0:

 Propagating constants:

Not considering OS_GetCoreId for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetCoreId/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_GetCoreId/0 (OS_GetCoreId) @06d1fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_GetCoreId (OS_GetCoreId, funcdef_no=0, decl_uid=7637, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetCoreId/0
__attribute__((target ("general-regs-only")))
OS_GetCoreId ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}


