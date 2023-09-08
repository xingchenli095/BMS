
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_DiffTime32/0:

 Propagating constants:

Not considering OS_DiffTime32 for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_DiffTime32/0:
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

OS_DiffTime32/0 (OS_DiffTime32) @06b28b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_DiffTime32 (OS_DiffTime32, funcdef_no=0, decl_uid=5531, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_DiffTime32/0
__attribute__((target ("general-regs-only")))
OS_DiffTime32 (const struct os_timestamp_t * newTime, const struct os_timestamp_t * oldTime)
{
  unsigned int diffTime$tsHi;
  unsigned int diffTime$tsLo;
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = newTime_9(D)->tsHi;
  _2 = oldTime_10(D)->tsHi;
  _3 = _1 - _2;
  # DEBUG diffTime$tsHi => _3
  # DEBUG BEGIN_STMT
  _4 = oldTime_10(D)->tsLo;
  _5 = newTime_9(D)->tsLo;
  if (_4 > _5)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = _3 + 4294967295;
  # DEBUG diffTime$tsHi => _6

  <bb 4> [local count: 1073741824]:
  # diffTime$tsHi_12 = PHI <_3(2), _6(3)>
  # DEBUG diffTime$tsHi => diffTime$tsHi_12
  # DEBUG BEGIN_STMT
  _7 = _5 - _4;
  # DEBUG diffTime$tsLo => _7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (diffTime$tsHi_12 != 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 5> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG diffTime$tsLo => 4294967295

  <bb 6> [local count: 1073741824]:
  # diffTime$tsLo_11 = PHI <_7(4), 4294967295(5)>
  # DEBUG diffTime$tsLo => diffTime$tsLo_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return diffTime$tsLo_11;

}


