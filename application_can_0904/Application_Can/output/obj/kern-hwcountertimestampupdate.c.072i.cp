
IPA constant propagation start:
Determining dynamic type for call: _3 (hwt_24);
  Starting walk at: _3 (hwt_24);
  instance pointer: hwt_24  Outer instance pointer: hwt_24 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_26 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: current_29 = _5 (hwt_24);
  Starting walk at: current_29 = _5 (hwt_24);
  instance pointer: hwt_24  Outer instance pointer: hwt_24 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 (hwt_24);
  Function call may change dynamic type:is_26 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: _15 = _12 (hwt_24, _14, delta_19);
  Starting walk at: _15 = _12 (hwt_24, _14, delta_19);
  instance pointer: hwt_24  Outer instance pointer: hwt_24 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:delta_34 = OS_AdvanceCounter (cs_22(D), cd_23, nTicks_31, is_26);
  Function call may change dynamic type:OS_AdvanceTimeStampGeneric (current_29);
  Function call may change dynamic type:current_29 = _5 (hwt_24);
  Function call may change dynamic type:_3 (hwt_24);
  Function call may change dynamic type:is_26 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  Function call may change dynamic type:current_39 = _17 (hwt_24);
  Function call may change dynamic type:_15 = _12 (hwt_24, _14, delta_19);
  Function call may change dynamic type:delta_34 = OS_AdvanceCounter (cs_22(D), cd_23, nTicks_31, is_26);
Determining dynamic type for call: current_39 = _17 (hwt_24);
  Starting walk at: current_39 = _17 (hwt_24);
  instance pointer: hwt_24  Outer instance pointer: hwt_24 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_15 = _12 (hwt_24, _14, delta_19);
  Function call may change dynamic type:delta_34 = OS_AdvanceCounter (cs_22(D), cd_23, nTicks_31, is_26);
  Function call may change dynamic type:OS_AdvanceTimeStampGeneric (current_29);
  Function call may change dynamic type:current_29 = _5 (hwt_24);
  Function call may change dynamic type:_3 (hwt_24);
  Function call may change dynamic type:is_26 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  Function call may change dynamic type:current_39 = _17 (hwt_24);
  Function call may change dynamic type:_15 = _12 (hwt_24, _14, delta_19);
  Function call may change dynamic type:delta_34 = OS_AdvanceCounter (cs_22(D), cd_23, nTicks_31, is_26);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AdvanceCounter/4:
  Jump functions of caller  OS_AdvanceTimeStampGeneric/3:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/2:
  Jump functions of caller  OS_HwCounterTimestampUpdate/0:
    indirect simple callsite, calling param -1, offset 0, for stmt current_39 = _17 (hwt_24);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _15 = _12 (hwt_24, _14, delta_19);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt current_29 = _5 (hwt_24);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (hwt_24);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_HwCounterTimestampUpdate for cloning; -fipa-cp-clone disabled.

overall_size: 65, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_HwCounterTimestampUpdate/0:
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

OS_AdvanceCounter/4 (OS_AdvanceCounter) @06ceb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HwCounterTimestampUpdate/0 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
OS_AdvanceTimeStampGeneric/3 (OS_AdvanceTimeStampGeneric) @06ceb000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HwCounterTimestampUpdate/0 (118111600 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/2 (OS_CORTEXM_IntSetDisablingLevel) @06c37000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HwCounterTimestampUpdate/0 (118111601 (estimated locally),1.00 per call) OS_HwCounterTimestampUpdate/0 (118111600 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/1 (OS_kernDisableLevel) @06c17900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_HwCounterTimestampUpdate/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_HwCounterTimestampUpdate/0 (OS_HwCounterTimestampUpdate) @06c37e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/2 (118111601 (estimated locally),1.00 per call) OS_AdvanceCounter/4 (1073741824 (estimated locally),9.09 per call) OS_AdvanceTimeStampGeneric/3 (118111600 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/2 (118111600 (estimated locally),1.00 per call) 
   Indirect call(955630224 (estimated locally),8.09 per call) 
   Indirect call(1073741824 (estimated locally),9.09 per call) 
   Indirect call(118111600 (estimated locally),1.00 per call) 
   Indirect call(118111600 (estimated locally),1.00 per call) 

;; Function OS_HwCounterTimestampUpdate (OS_HwCounterTimestampUpdate, funcdef_no=0, decl_uid=6453, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_HwCounterTimestampUpdate/0
__attribute__((target ("general-regs-only")))
OS_HwCounterTimestampUpdate (const struct os_counter_t * cs)
{
  struct os_counterdynamic_t * cd;
  os_intstatus_t is;
  os_tick_t nTicks;
  os_tick_t delta;
  os_timervalue_t current;
  const struct os_hwt_t * hwt;
  short unsigned int OS_kernDisableLevel.0_1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  const struct os_hwtdrv_t * _4;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _5;
  os_timervalue_t * _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  const struct os_hwtdrv_t * _11;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _12;
  os_timervalue_t * _13;
  unsigned int _14;
  int _15;
  const struct os_hwtdrv_t * _16;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _17;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  cd_23 = cs_22(D)->dynamic;
  # DEBUG cd => cd_23
  # DEBUG BEGIN_STMT
  hwt_24 = cs_22(D)->hwt;
  # DEBUG hwt => hwt_24
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_26 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_26
  # DEBUG BEGIN_STMT
  _2 = hwt_24->driver;
  _3 = _2->hwtStop;
  _3 (hwt_24);
  # DEBUG BEGIN_STMT
  _4 = hwt_24->driver;
  _5 = _4->hwtRead;
  current_29 = _5 (hwt_24);
  # DEBUG current => current_29
  # DEBUG BEGIN_STMT
  OS_AdvanceTimeStampGeneric (current_29);

  <bb 3> [local count: 1073741824]:
  # current_18 = PHI <current_29(2), current_39(8)>
  # DEBUG current => current_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = hwt_24->lastValue;
  _7 = *_6;
  _8 = current_18 - _7;
  _9 = hwt_24->wrapMask;
  nTicks_31 = _8 & _9;
  # DEBUG nTicks => nTicks_31
  # DEBUG BEGIN_STMT
  *_6 = current_18;
  # DEBUG BEGIN_STMT
  delta_34 = OS_AdvanceCounter (cs_22(D), cd_23, nTicks_31, is_26);
  # DEBUG delta => delta_34
  # DEBUG BEGIN_STMT
  if (delta_34 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 536870912]:
  # DEBUG BEGIN_STMT
  delta_36 = hwt_24->maxDelta;
  # DEBUG delta => delta_36
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 536870912]:
  # DEBUG BEGIN_STMT
  _10 = hwt_24->maxDelta;
  if (_10 < delta_34)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  delta_35 = hwt_24->defDelta;
  # DEBUG delta => delta_35

  <bb 7> [local count: 1073741824]:
  # delta_19 = PHI <delta_36(4), delta_34(5), delta_35(6)>
  # DEBUG delta => delta_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = hwt_24->driver;
  _12 = _11->hwtStart;
  _13 = hwt_24->lastValue;
  _14 = *_13;
  _15 = _12 (hwt_24, _14, delta_19);
  if (_15 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 8> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  # DEBUG again => 1
  # DEBUG BEGIN_STMT
  _16 = hwt_24->driver;
  _17 = _16->hwtRead;
  current_39 = _17 (hwt_24);
  # DEBUG again => 1
  # DEBUG current => current_39
  # DEBUG BEGIN_STMT
  goto <bb 3>; [100.00%]

  <bb 9> [local count: 118111601]:
  # DEBUG again => 0
  # DEBUG current => current_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_26);
  return;

}


