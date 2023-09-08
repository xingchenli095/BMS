
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetStackInfo/1:
  Jump functions of caller  OS_GetUsedTaskStack/0:

 Propagating constants:

Not considering OS_GetUsedTaskStack for cloning; -fipa-cp-clone disabled.

overall_size: 13, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetUsedTaskStack/0:
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

OS_UserGetStackInfo/1 (OS_UserGetStackInfo) @06bf8d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetUsedTaskStack/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_GetUsedTaskStack/0 (OS_GetUsedTaskStack) @06bf8b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetStackInfo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_GetUsedTaskStack (OS_GetUsedTaskStack, funcdef_no=0, decl_uid=5720, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetUsedTaskStack/0
__attribute__((target ("general-regs-only")))
OS_GetUsedTaskStack (os_taskid_t t)
{
  struct os_stackinfo_t info;
  os_size_t answer;
  short unsigned int _1;
  unsigned char _2;
  unsigned int _3;
  unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  info.stackPointer = 0;
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) t_8(D);
  _2 = OS_UserGetStackInfo (_1, &info);
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = info.stackLen;
  _4 = info.stackClean;
  answer_10 = _3 - _4;
  # DEBUG answer => answer_10

  <bb 4> [local count: 1073741824]:
  # answer_5 = PHI <0(2), answer_10(3)>
  # DEBUG answer => answer_5
  # DEBUG BEGIN_STMT
  info ={v} {CLOBBER};
  return answer_5;

}

