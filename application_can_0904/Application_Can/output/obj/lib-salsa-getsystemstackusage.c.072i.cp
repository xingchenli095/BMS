
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetStackInfo/1:
  Jump functions of caller  GetSystemStackUsage/0:

 Propagating constants:

Not considering GetSystemStackUsage for cloning; -fipa-cp-clone disabled.

overall_size: 17, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: GetSystemStackUsage/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_UserGetStackInfo/1 (OS_UserGetStackInfo) @06bd0d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: GetSystemStackUsage/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
GetSystemStackUsage/0 (GetSystemStackUsage) @06bd0b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetStackInfo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function GetSystemStackUsage (GetSystemStackUsage, funcdef_no=0, decl_uid=5426, cgraph_uid=1, symbol_order=0)

Modification phase of node GetSystemStackUsage/0
__attribute__((target ("general-regs-only")))
GetSystemStackUsage ()
{
  struct os_stackinfo_t info;
  os_uint8_t answer;
  unsigned char _1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  info.stackPointer = 0;
  # DEBUG BEGIN_STMT
  _1 = OS_UserGetStackInfo (4351, &info);
  if (_1 == 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _2 = info.stackLen;
  _3 = info.stackClean;
  _4 = _2 - _3;
  _5 = _4 * 100;
  _6 = _2 >> 1;
  _7 = _5 + _6;
  _8 = _7 / _2;
  answer_13 = (os_uint8_t) _8;
  # DEBUG answer => answer_13

  <bb 4> [local count: 1073741824]:
  # answer_9 = PHI <255(2), answer_13(3)>
  # DEBUG answer => answer_9
  # DEBUG BEGIN_STMT
  info ={v} {CLOBBER};
  return answer_9;

}


