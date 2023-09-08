
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_NullIsrHook/0:

 Propagating constants:

Not considering OS_NullIsrHook for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: OS_NullIsrHook/0:
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

OS_NullIsrHook/0 (OS_NullIsrHook) @06c57a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_NullIsrHook (OS_NullIsrHook, funcdef_no=0, decl_uid=6784, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_NullIsrHook/0
__attribute__((target ("general-regs-only")))
OS_NullIsrHook (os_isrid_t isr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


