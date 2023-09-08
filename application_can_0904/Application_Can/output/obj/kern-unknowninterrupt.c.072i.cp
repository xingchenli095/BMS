
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Panic/1:
  Jump functions of caller  OS_UnknownInterrupt/0:

 Propagating constants:

Not considering OS_UnknownInterrupt for cloning; -fipa-cp-clone disabled.

overall_size: 5, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: OS_UnknownInterrupt/0:
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

OS_Panic/1 (OS_Panic) @06b95c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_UnknownInterrupt/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_UnknownInterrupt/0 (OS_UnknownInterrupt) @06b95a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Panic/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_UnknownInterrupt (OS_UnknownInterrupt, funcdef_no=0, decl_uid=6889, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_UnknownInterrupt/0
__attribute__((target ("general-regs-only")))
OS_UnknownInterrupt (os_isrid_t iid)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_Panic (17);
  # DEBUG BEGIN_STMT
  return 0;

}


