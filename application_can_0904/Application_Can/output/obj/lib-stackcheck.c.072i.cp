
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetStackInfo/1:
  Jump functions of caller  OS_StackCheck/0:

 Propagating constants:

Not considering OS_StackCheck for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StackCheck/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_UserGetStackInfo/1 (OS_UserGetStackInfo) @06ccd000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StackCheck/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_StackCheck/0 (OS_StackCheck) @06ba01c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetStackInfo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_StackCheck (OS_StackCheck, funcdef_no=0, decl_uid=5701, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StackCheck/0
__attribute__((target ("general-regs-only")))
OS_StackCheck ()
{
  register os_stackelement_t * OS_getSpResult;
  struct os_stackinfo_t info;
  os_int_t answer;
  unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_4);
  # DEBUG OS_getSpResult => OS_getSpResult_4
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) OS_getSpResult_4;
  info.stackPointer = _1;
  # DEBUG BEGIN_STMT
  _2 = OS_UserGetStackInfo (65535, &info);
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  answer_8 = info.stackStatus;
  # DEBUG answer => answer_8

  <bb 4> [local count: 1073741824]:
  # answer_3 = PHI <0(2), answer_8(3)>
  # DEBUG answer => answer_3
  # DEBUG BEGIN_STMT
  info ={v} {CLOBBER};
  return answer_3;

}


