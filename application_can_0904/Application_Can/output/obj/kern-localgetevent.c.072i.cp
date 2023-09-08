
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalGetEvent/0:

 Propagating constants:

Not considering OS_LocalGetEvent for cloning; -fipa-cp-clone disabled.

overall_size: 9, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalGetEvent/0:
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

OS_LocalGetEvent/0 (OS_LocalGetEvent) @06b82a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_LocalGetEvent (OS_LocalGetEvent, funcdef_no=0, decl_uid=6861, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalGetEvent/0
__attribute__((target ("general-regs-only")))
OS_LocalGetEvent (const struct os_task_t * tp, os_eventmask_t * ep)
{
  os_errorresult_t result;
  struct os_taskdynamic_t * td;
  unsigned char _1;
  unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_7 = tp_6(D)->dynamic;
  # DEBUG td => td_7
  # DEBUG BEGIN_STMT
  _1 = td_7->state;
  if (_1 <= 1)
    goto <bb 4>; [27.23%]
  else
    goto <bb 3>; [72.77%]

  <bb 3> [local count: 781361926]:
  # DEBUG BEGIN_STMT
  _2 = td_7->pEvents;
  *ep_8(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG result => 0

  <bb 4> [local count: 1073741824]:
  # result_3 = PHI <28(2), 0(3)>
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  return result_3;

}


