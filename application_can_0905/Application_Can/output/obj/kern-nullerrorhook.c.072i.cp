
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_NullErrorHook/0:

 Propagating constants:

Not considering OS_NullErrorHook for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: OS_NullErrorHook/0:
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

OS_NullErrorHook/0 (OS_NullErrorHook) @06ce8a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_NullErrorHook (OS_NullErrorHook, funcdef_no=0, decl_uid=6782, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_NullErrorHook/0
__attribute__((target ("general-regs-only")))
OS_NullErrorHook (os_result_t code)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


