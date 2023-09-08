
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeStampGeneric/3:
  Jump functions of caller  OS_CheckRateMonitor/0:

 Propagating constants:

Not considering OS_CheckRateMonitor for cloning; -fipa-cp-clone disabled.

overall_size: 38, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CheckRateMonitor/0:
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

OS_GetTimeStampGeneric/3 (OS_GetTimeStampGeneric) @06c39c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CheckRateMonitor/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_rateIndex/2 (OS_rateIndex) @06c199d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CheckRateMonitor/0 (read)OS_CheckRateMonitor/0 (write)OS_CheckRateMonitor/0 (write)
  Availability: not_available
  Varpool flags:
OS_rateMonitor/1 (OS_rateMonitor) @06c19990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CheckRateMonitor/0 (read)OS_CheckRateMonitor/0 (read)OS_CheckRateMonitor/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CheckRateMonitor/0 (OS_CheckRateMonitor) @06c39a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_rateIndex/2 (read)OS_rateMonitor/1 (read)OS_rateMonitor/1 (read)OS_rateMonitor/1 (read)OS_rateIndex/2 (write)OS_rateIndex/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_GetTimeStampGeneric/3 (1073741823 (estimated locally),1.00 per call) 

;; Function OS_CheckRateMonitor (OS_CheckRateMonitor, funcdef_no=0, decl_uid=6746, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CheckRateMonitor/0
__attribute__((target ("general-regs-only")))
OS_CheckRateMonitor (os_ratemonitorid_t rmi)
{
  unsigned int frameEnd$tsHi;
  os_rateindex_t i;
  os_boolean_t result;
  struct os_timestamp_t now;
  int _1;
  struct os_timestamp_t * _2;
  unsigned int _3;
  unsigned int _4;
  struct os_timestamp_t * _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned char _15;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) rmi_18(D);
  # DEBUG D#1 => &OS_rateMonitor[_1]
  # DEBUG rm => D#1
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &OS_rateIndex[_1]
  # DEBUG ri => D#2
  # DEBUG BEGIN_STMT
  OS_GetTimeStampGeneric (&now);
  # DEBUG BEGIN_STMT
  i_22 = MEM[(os_rateindex_t *)&OS_rateIndex][_1];
  # DEBUG i => i_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct os_ratemonitor_t *)&OS_rateMonitor][_1].ringBuffer;
  _3 = (unsigned int) i_22;
  _4 = _3 * 8;
  _5 = _2 + _4;
  _6 = _5->tsHi;
  # DEBUG frameEnd$tsHi => _6
  # DEBUG BEGIN_STMT
  _7 = _5->tsLo;
  _8 = MEM[(const struct os_ratemonitor_t *)&OS_rateMonitor][_1].timeLimit;
  _9 = ~_8;
  if (_7 > _9)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _10 = _6 + 1;
  # DEBUG frameEnd$tsHi => _10

  <bb 4> [local count: 1073741823]:
  # frameEnd$tsHi_19 = PHI <_6(2), _10(3)>
  # DEBUG frameEnd$tsHi => frameEnd$tsHi_19
  # DEBUG BEGIN_STMT
  _11 = _7 + _8;
  # DEBUG frameEnd$tsLo => _11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = now.tsHi;
  if (_12 < frameEnd$tsHi_19)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870911]:
  if (_12 == frameEnd$tsHi_19)
    goto <bb 6>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 6> [local count: 182536110]:
  _13 = now.tsLo;
  if (_11 > _13)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 628138967]:
  if (_6 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 314069483]:
  if (_7 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 602637599]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = now.tsLo;
  _5->tsLo = _14;
  # DEBUG BEGIN_STMT
  _5->tsHi = _12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  i_25 = i_22 + 1;
  # DEBUG i => i_25
  # DEBUG BEGIN_STMT
  _15 = MEM[(const struct os_ratemonitor_t *)&OS_rateMonitor][_1].countLimit;
  if (_15 <= i_25)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 301318799]:
  # DEBUG BEGIN_STMT
  MEM[(os_rateindex_t *)&OS_rateIndex][_1] = 0;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 301318799]:
  # DEBUG BEGIN_STMT
  MEM[(os_rateindex_t *)&OS_rateIndex][_1] = i_25;

  <bb 12> [local count: 1073741824]:
  # result_16 = PHI <1(8), 0(10), 0(11), 1(7)>
  # DEBUG result => result_16
  # DEBUG BEGIN_STMT
  now ={v} {CLOBBER};
  return result_16;

}


