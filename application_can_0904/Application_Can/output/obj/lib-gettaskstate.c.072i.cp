
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetTaskState/2:
  Jump functions of caller  OS_GetTaskState/1:

 Propagating constants:

Not considering OS_GetTaskState for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetTaskState/1:
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

OS_UserGetTaskState/2 (OS_UserGetTaskState) @06c280e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetTaskState/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_GetTaskState/1 (OS_GetTaskState) @06b60ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskStateToOsek/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetTaskState/2 (1073741824 (estimated locally),1.00 per call) 
OS_taskStateToOsek/0 (OS_taskStateToOsek) @06b595a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OS_GetTaskState/1 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function OS_GetTaskState (OS_GetTaskState, funcdef_no=0, decl_uid=5744, cgraph_uid=1, symbol_order=1)

Modification phase of node OS_GetTaskState/1
__attribute__((target ("general-regs-only")))
OS_GetTaskState (os_taskid_t t, os_taskstate_t * sr)
{
  os_result_t r;
  unsigned char _1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  r_10 = OS_UserGetTaskState (t_7(D), sr_8(D));
  # DEBUG r => r_10
  # DEBUG BEGIN_STMT
  if (r_10 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = *sr_8(D);
  if (_1 > 6)
    goto <bb 5>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 348966093]:
  # DEBUG BEGIN_STMT
  _2 = (int) _1;
  _3 = OS_taskStateToOsek[_2];
  *sr_8(D) = _3;

  <bb 5> [local count: 1073741824]:
  # r_4 = PHI <r_10(2), 31(3), 0(4)>
  # DEBUG r => r_4
  # DEBUG BEGIN_STMT
  return r_4;

}


