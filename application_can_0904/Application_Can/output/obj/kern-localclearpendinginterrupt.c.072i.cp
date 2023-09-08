
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntClearIsr/2:
  Jump functions of caller  OS_AppIsAccessible/1:
  Jump functions of caller  OS_LocalClearPendingInterrupt/0:

 Propagating constants:

Not considering OS_LocalClearPendingInterrupt for cloning; -fipa-cp-clone disabled.

overall_size: 11, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalClearPendingInterrupt/0:
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

OS_CORTEXM_IntClearIsr/2 (OS_CORTEXM_IntClearIsr) @06ccbd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalClearPendingInterrupt/0 (512926469 (estimated locally),0.48 per call) 
  Calls: 
OS_AppIsAccessible/1 (OS_AppIsAccessible) @06ccbc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalClearPendingInterrupt/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_LocalClearPendingInterrupt/0 (OS_LocalClearPendingInterrupt) @06ccba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntClearIsr/2 (512926469 (estimated locally),0.48 per call) OS_AppIsAccessible/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LocalClearPendingInterrupt (OS_LocalClearPendingInterrupt, funcdef_no=0, decl_uid=6871, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalClearPendingInterrupt/0
__attribute__((target ("general-regs-only")))
OS_LocalClearPendingInterrupt (const struct os_isr_t * isr)
{
  os_errorresult_t result;
  const struct os_appcontext_t * _1;
  int _2;
  const struct os_archisr_t * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = isr_7(D)->app;
  _2 = OS_AppIsAccessible (_1);
  if (_2 == 0)
    goto <bb 4>; [52.23%]
  else
    goto <bb 3>; [47.77%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  _3 = &isr_7(D)->arch;
  OS_CORTEXM_IntClearIsr (_3);

  <bb 4> [local count: 1073741824]:
  # result_4 = PHI <154(2), 0(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}


