
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_TaskSpOutOfBounds/0:

 Propagating constants:

Not considering OS_TaskSpOutOfBounds for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_TaskSpOutOfBounds/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
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

OS_TaskSpOutOfBounds/0 (OS_TaskSpOutOfBounds) @06c6ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_TaskSpOutOfBounds (OS_TaskSpOutOfBounds, funcdef_no=0, decl_uid=6622, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_TaskSpOutOfBounds/0
__attribute__((target ("general-regs-only")))
OS_TaskSpOutOfBounds (os_address_t sp, const struct os_task_t * tp)
{
  os_address_t base;
  os_stackelement_t * _1;
  unsigned int _2;
  unsigned int _3;
  int iftmp.0_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = tp_6(D)->stackBase;
  base_7 = (os_address_t) _1;
  # DEBUG base => base_7
  # DEBUG BEGIN_STMT
  if (sp_8(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (base_7 > sp_8(D))
    goto <bb 6>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  _2 = tp_6(D)->stackLen;
  _3 = _2 + base_7;
  if (_3 < sp_8(D))
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 671088641]:

  <bb 6> [local count: 1073741824]:
  # iftmp.0_4 = PHI <1(4), 0(5), 1(3)>
  return iftmp.0_4;

}


