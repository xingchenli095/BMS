
IPA constant propagation start:
Determining dynamic type for call: _3 (hwt_20);
  Starting walk at: _3 (hwt_20);
  instance pointer: hwt_20  Outer instance pointer: hwt_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_22 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: current_25 = _5 (hwt_20);
  Starting walk at: current_25 = _5 (hwt_20);
  instance pointer: hwt_20  Outer instance pointer: hwt_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 (hwt_20);
  Function call may change dynamic type:is_22 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  Function call may change dynamic type:again_32 = _12 (hwt_20, _14, delta_15);
  Function call may change dynamic type:delta_29 = OS_AdvanceCounter (cs_18(D), cd_19, nTicks_26, is_22);
  Function call may change dynamic type:current_25 = _5 (hwt_20);
Determining dynamic type for call: again_32 = _12 (hwt_20, _14, delta_15);
  Starting walk at: again_32 = _12 (hwt_20, _14, delta_15);
  instance pointer: hwt_20  Outer instance pointer: hwt_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:delta_29 = OS_AdvanceCounter (cs_18(D), cd_19, nTicks_26, is_22);
  Function call may change dynamic type:current_25 = _5 (hwt_20);
  Function call may change dynamic type:_3 (hwt_20);
  Function call may change dynamic type:is_22 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  Function call may change dynamic type:again_32 = _12 (hwt_20, _14, delta_15);
  Function call may change dynamic type:delta_29 = OS_AdvanceCounter (cs_18(D), cd_19, nTicks_26, is_22);
  Function call may change dynamic type:current_25 = _5 (hwt_20);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AdvanceCounter/3:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/2:
  Jump functions of caller  OS_HwCounterUpdate/0:
    indirect simple callsite, calling param -1, offset 0, for stmt again_32 = _12 (hwt_20, _14, delta_15);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt current_25 = _5 (hwt_20);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (hwt_20);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_HwCounterUpdate for cloning; -fipa-cp-clone disabled.

overall_size: 55, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_HwCounterUpdate/0:
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

OS_AdvanceCounter/3 (OS_AdvanceCounter) @06c37000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HwCounterUpdate/0 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/2 (OS_CORTEXM_IntSetDisablingLevel) @06c37ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HwCounterUpdate/0 (114863532 (estimated locally),1.00 per call) OS_HwCounterUpdate/0 (114863532 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/1 (OS_kernDisableLevel) @06c13900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_HwCounterUpdate/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_HwCounterUpdate/0 (OS_HwCounterUpdate) @06c37d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/1 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/2 (114863532 (estimated locally),1.00 per call) OS_AdvanceCounter/3 (1073741824 (estimated locally),9.35 per call) OS_CORTEXM_IntSetDisablingLevel/2 (114863532 (estimated locally),1.00 per call) 
   Indirect call(1014686025 (estimated locally),8.83 per call) 
   Indirect call(1073741824 (estimated locally),9.35 per call) 
   Indirect call(114863532 (estimated locally),1.00 per call) 

;; Function OS_HwCounterUpdate (OS_HwCounterUpdate, funcdef_no=0, decl_uid=6451, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_HwCounterUpdate/0
__attribute__((target ("general-regs-only")))
OS_HwCounterUpdate (const struct os_counter_t * cs)
{
  os_intstatus_t is;
  os_boolean_t again;
  os_tick_t nTicks;
  os_tick_t delta;
  os_timervalue_t current;
  const struct os_hwt_t * hwt;
  struct os_counterdynamic_t * cd;
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

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  cd_19 = cs_18(D)->dynamic;
  # DEBUG cd => cd_19
  # DEBUG BEGIN_STMT
  hwt_20 = cs_18(D)->hwt;
  # DEBUG hwt => hwt_20
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_22 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_22
  # DEBUG BEGIN_STMT
  _2 = hwt_20->driver;
  _3 = _2->hwtStop;
  _3 (hwt_20);

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = hwt_20->driver;
  _5 = _4->hwtRead;
  current_25 = _5 (hwt_20);
  # DEBUG current => current_25
  # DEBUG BEGIN_STMT
  _6 = hwt_20->lastValue;
  _7 = *_6;
  _8 = current_25 - _7;
  _9 = hwt_20->wrapMask;
  nTicks_26 = _8 & _9;
  # DEBUG nTicks => nTicks_26
  # DEBUG BEGIN_STMT
  *_6 = current_25;
  # DEBUG BEGIN_STMT
  delta_29 = OS_AdvanceCounter (cs_18(D), cd_19, nTicks_26, is_22);
  # DEBUG delta => delta_29
  # DEBUG BEGIN_STMT
  if (delta_29 == 0)
    goto <bb 8>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 5> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _10 = hwt_20->maxDelta;
  if (_10 < delta_29)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 507343012]:
  # DEBUG BEGIN_STMT
  delta_30 = hwt_20->defDelta;
  # DEBUG delta => delta_30

  <bb 7> [local count: 1014686025]:
  # delta_15 = PHI <delta_29(5), delta_30(6)>
  # DEBUG delta => delta_15
  # DEBUG BEGIN_STMT
  _11 = hwt_20->driver;
  _12 = _11->hwtStart;
  _13 = hwt_20->lastValue;
  _14 = *_13;
  again_32 = _12 (hwt_20, _14, delta_15);
  # DEBUG again => again_32
  # DEBUG BEGIN_STMT
  if (again_32 != 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 9> [local count: 958878293]:
  goto <bb 3>; [100.00%]

  <bb 8> [local count: 114863532]:
  # DEBUG again => NULL
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_22);
  return;

}


