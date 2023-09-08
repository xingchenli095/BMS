
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetStackInfo/1:
  Jump functions of caller  OS_GetUnusedIsrStack/0:

 Propagating constants:

Not considering OS_GetUnusedIsrStack for cloning; -fipa-cp-clone disabled.

overall_size: 11, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetUnusedIsrStack/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_UserGetStackInfo/1 (OS_UserGetStackInfo) @06b20d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetUnusedIsrStack/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_GetUnusedIsrStack/0 (OS_GetUnusedIsrStack) @06b20b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetStackInfo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_GetUnusedIsrStack (OS_GetUnusedIsrStack, funcdef_no=0, decl_uid=5726, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetUnusedIsrStack/0
__attribute__((target ("general-regs-only")))
OS_GetUnusedIsrStack ()
{
  struct os_stackinfo_t info;
  os_size_t answer;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  info.stackPointer = 0;
  # DEBUG BEGIN_STMT
  _1 = OS_UserGetStackInfo (4351, &info);
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  answer_6 = info.stackClean;
  # DEBUG answer => answer_6

  <bb 4> [local count: 1073741824]:
  # answer_2 = PHI <0(2), answer_6(3)>
  # DEBUG answer => answer_2
  # DEBUG BEGIN_STMT
  info ={v} {CLOBBER};
  return answer_2;

}


