
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KillCalledContext/1:
  Jump functions of caller  OS_KillHook/0:

 Propagating constants:

Not considering OS_KillHook for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KillHook/0:
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

OS_KillCalledContext/1 (OS_KillCalledContext) @06c89c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillHook/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_KillHook/0 (OS_KillHook) @06c89a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_KillCalledContext/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_KillHook (OS_KillHook, funcdef_no=0, decl_uid=6823, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KillHook/0
__attribute__((target ("general-regs-only")))
OS_KillHook (struct os_hookcontext_t * hc)
{
  struct os_savedcontext_t * _1;
  os_result_t _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = &hc_2(D)->c;
  _5 = OS_KillCalledContext (_1);
  return _5;

}


