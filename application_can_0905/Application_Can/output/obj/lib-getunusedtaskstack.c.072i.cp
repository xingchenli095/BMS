
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetStackInfo/1:
  Jump functions of caller  OS_GetUnusedTaskStack/0:

 Propagating constants:

Not considering OS_GetUnusedTaskStack for cloning; -fipa-cp-clone disabled.

overall_size: 11, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetUnusedTaskStack/0:
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

OS_UserGetStackInfo/1 (OS_UserGetStackInfo) @06b68d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetUnusedTaskStack/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_GetUnusedTaskStack/0 (OS_GetUnusedTaskStack) @06b68b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetStackInfo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_GetUnusedTaskStack (OS_GetUnusedTaskStack, funcdef_no=0, decl_uid=5722, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetUnusedTaskStack/0
__attribute__((target ("general-regs-only")))
OS_GetUnusedTaskStack (os_taskid_t t)
{
  struct os_stackinfo_t info;
  os_size_t answer;
  short unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  info.stackPointer = 0;
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) t_6(D);
  _2 = OS_UserGetStackInfo (_1, &info);
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  answer_8 = info.stackClean;
  # DEBUG answer => answer_8

  <bb 4> [local count: 1073741824]:
  # answer_3 = PHI <0(2), answer_8(3)>
  # DEBUG answer => answer_3
  # DEBUG BEGIN_STMT
  info ={v} {CLOBBER};
  return answer_3;

}


