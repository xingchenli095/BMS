
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserGetStackInfo/1:
  Jump functions of caller  GetStackUsage/0:

 Propagating constants:

Not considering GetStackUsage for cloning; -fipa-cp-clone disabled.

overall_size: 17, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: GetStackUsage/0:
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

OS_UserGetStackInfo/1 (OS_UserGetStackInfo) @06b78d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: GetStackUsage/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
GetStackUsage/0 (GetStackUsage) @06b78b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserGetStackInfo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function GetStackUsage (GetStackUsage, funcdef_no=0, decl_uid=5424, cgraph_uid=1, symbol_order=0)

Modification phase of node GetStackUsage/0
__attribute__((target ("general-regs-only")))
GetStackUsage (os_taskid_t t)
{
  struct os_stackinfo_t info;
  os_uint8_t answer;
  short unsigned int _1;
  unsigned char _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG answer => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  info.stackPointer = 0;
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) t_13(D);
  _2 = OS_UserGetStackInfo (_1, &info);
  if (_2 == 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _3 = info.stackLen;
  _4 = info.stackClean;
  _5 = _3 - _4;
  _6 = _5 * 100;
  _7 = _3 >> 1;
  _8 = _6 + _7;
  _9 = _8 / _3;
  answer_15 = (os_uint8_t) _9;
  # DEBUG answer => answer_15

  <bb 4> [local count: 1073741824]:
  # answer_10 = PHI <255(2), answer_15(3)>
  # DEBUG answer => answer_10
  # DEBUG BEGIN_STMT
  info ={v} {CLOBBER};
  return answer_10;

}


