
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetScheduleTableStatus/1:
  Jump functions of caller  OS_GetScheduleTableStatus/0:

 Propagating constants:

Not considering OS_GetScheduleTableStatus for cloning; -fipa-cp-clone disabled.

overall_size: 25, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetScheduleTableStatus/0:
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

OS_UserGetScheduleTableStatus/1 (OS_UserGetScheduleTableStatus) @06bb6c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetScheduleTableStatus/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_GetScheduleTableStatus/0 (OS_GetScheduleTableStatus) @06bb6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetScheduleTableStatus/1 (1073741823 (estimated locally),1.00 per call) 

;; Function OS_GetScheduleTableStatus (OS_GetScheduleTableStatus, funcdef_no=0, decl_uid=5769, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetScheduleTableStatus/0
__attribute__((target ("general-regs-only")))
OS_GetScheduleTableStatus (ScheduleTableType s, os_schedulestatus_t * sr)
{
  ScheduleTableStatusType state;
  ScheduleTableStatusType status;
  StatusType r;
  unsigned char _14;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  r_6 = OS_UserGetScheduleTableStatus (s_3(D), sr_4(D));
  # DEBUG r => r_6
  # DEBUG BEGIN_STMT
  if (r_6 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  status_7 = *sr_4(D);
  # DEBUG status => status_7
  # DEBUG BEGIN_STMT
  state_8 = status_7 & 7;
  # DEBUG state => state_8
  # DEBUG BEGIN_STMT
  if (state_8 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _14 = status_7 & 8;
  if (_14 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  *sr_4(D) = 4;
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  *sr_4(D) = 5;
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (state_8 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  *sr_4(D) = 3;
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  if (state_8 == 2)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 79512729]:
  # DEBUG BEGIN_STMT
  *sr_4(D) = 2;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 154348240]:
  # DEBUG BEGIN_STMT
  *sr_4(D) = 1;

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return r_6;

}


