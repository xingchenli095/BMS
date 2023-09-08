
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/5:
  Jump functions of caller  OS_AdvanceTimeStampGeneric/0:

 Propagating constants:

Not considering OS_AdvanceTimeStampGeneric for cloning; -fipa-cp-clone disabled.

overall_size: 24, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_AdvanceTimeStampGeneric/0:
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

OS_CORTEXM_IntSetDisablingLevel/5 (OS_CORTEXM_IntSetDisablingLevel) @06c58d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_AdvanceTimeStampGeneric/0 (1073741824 (estimated locally),1.00 per call) OS_AdvanceTimeStampGeneric/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_intDisableLevelMax/4 (OS_intDisableLevelMax) @06c38798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AdvanceTimeStampGeneric/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_timeStampValue/3 (OS_timeStampValue) @06c38750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AdvanceTimeStampGeneric/0 (read)OS_AdvanceTimeStampGeneric/0 (read)OS_AdvanceTimeStampGeneric/0 (write)OS_AdvanceTimeStampGeneric/0 (write)
  Availability: not_available
  Varpool flags:
OS_lastTimeStampTime/2 (OS_lastTimeStampTime) @06c38708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AdvanceTimeStampGeneric/0 (read)OS_AdvanceTimeStampGeneric/0 (write)
  Availability: not_available
  Varpool flags:
OS_timeStampTimer/1 (OS_timeStampTimer) @06c386c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AdvanceTimeStampGeneric/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AdvanceTimeStampGeneric/0 (OS_AdvanceTimeStampGeneric) @06c58b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_timeStampTimer/1 (read)OS_intDisableLevelMax/4 (read)OS_lastTimeStampTime/2 (read)OS_timeStampValue/3 (read)OS_timeStampValue/3 (read)OS_timeStampValue/3 (write)OS_timeStampValue/3 (write)OS_lastTimeStampTime/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/5 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/5 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_AdvanceTimeStampGeneric (OS_AdvanceTimeStampGeneric, funcdef_no=0, decl_uid=6524, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_AdvanceTimeStampGeneric/0
__attribute__((target ("general-regs-only")))
OS_AdvanceTimeStampGeneric (os_timervalue_t newTmrVal)
{
  const os_intstatus_t is;
  const struct os_hwt_t * const ptimeStampTimer;
  os_timervalue_t diff;
  short unsigned int OS_intDisableLevelMax.0_1;
  unsigned int OS_lastTimeStampTime.1_2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ptimeStampTimer_12 = OS_timeStampTimer;
  # DEBUG ptimeStampTimer => ptimeStampTimer_12
  # DEBUG BEGIN_STMT
  # DEBUG plastTimeStampTime => &OS_lastTimeStampTime
  # DEBUG BEGIN_STMT
  # DEBUG ptimeStampValue => &OS_timeStampValue
  # DEBUG BEGIN_STMT
  OS_intDisableLevelMax.0_1 = OS_intDisableLevelMax;
  is_14 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.0_1);
  # DEBUG is => is_14
  # DEBUG BEGIN_STMT
  OS_lastTimeStampTime.1_2 = OS_lastTimeStampTime;
  _3 = newTmrVal_15(D) - OS_lastTimeStampTime.1_2;
  _4 = ptimeStampTimer_12->wrapMask;
  diff_16 = _3 & _4;
  # DEBUG diff => diff_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = OS_timeStampValue.tsHi;
  # DEBUG BEGIN_STMT
  _6 = OS_timeStampValue.tsLo;
  _7 = ~diff_16;
  if (_6 > _7)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = _5 + 1;
  OS_timeStampValue.tsHi = _8;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _9 = _6 + diff_16;
  OS_timeStampValue.tsLo = _9;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_lastTimeStampTime = newTmrVal_15(D);
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_14);
  return;

}

