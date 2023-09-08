
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  TS_PlatformSigIsValid/0:

 Propagating constants:

Not considering TS_PlatformSigIsValid for cloning; -fipa-cp-clone disabled.

overall_size: 37, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: TS_PlatformSigIsValid/0:
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

TS_PlatformSigIsValid/0 (TS_PlatformSigIsValid) @06ac0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function TS_PlatformSigIsValid (TS_PlatformSigIsValid, funcdef_no=0, decl_uid=5396, cgraph_uid=1, symbol_order=0)

Modification phase of node TS_PlatformSigIsValid/0
TS_PlatformSigIsValid (uint32 signature)
{
  boolean RetVal;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _1 = signature_18(D) & 2155905152;
  if (_1 == 2147483648)
    goto <bb 3>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = signature_18(D) >> 24;
  _3 = _2 & 7;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 4> [local count: 182536110]:
  _4 = signature_18(D) >> 27;
  _5 = _4 & 7;
  if (_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 5> [local count: 91268055]:
  _6 = signature_18(D) & 7;
  if (_6 == 2)
    goto <bb 6>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 6> [local count: 31031139]:
  _7 = signature_18(D) >> 8;
  _8 = _7 & 7;
  if (_8 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 7> [local count: 10550587]:
  _9 = signature_18(D) >> 16;
  _10 = _9 & 7;
  if (_10 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 8> [local count: 5275294]:
  _11 = signature_18(D) >> 3;
  _12 = _11 & 7;
  if (_12 == 2)
    goto <bb 9>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 9> [local count: 1793600]:
  _13 = signature_18(D) >> 11;
  _14 = _13 & 7;
  if (_14 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 10> [local count: 609824]:
  _15 = signature_18(D) >> 19;
  _16 = _15 & 7;
  if (_16 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 304912]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 12> [local count: 1073741824]:
  # RetVal_17 = PHI <0(2), 0(3), 0(4), 0(5), 0(6), 0(7), 0(8), 0(9), 0(10), 1(11)>
  # DEBUG RetVal => RetVal_17
  # DEBUG BEGIN_STMT
  return RetVal_17;

}


