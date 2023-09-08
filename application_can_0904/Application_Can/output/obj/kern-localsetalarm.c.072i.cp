
IPA constant propagation start:
Determining dynamic type for call: _5 (cs_25(D));
  Starting walk at: _5 (cs_25(D));
  instance pointer: cs_25(D)  Outer instance pointer: cs_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = OS_AppIsAccessible (_1);
Determining dynamic type for call: _14 (cs_25(D));
  Starting walk at: _14 (cs_25(D));
  instance pointer: cs_25(D)  Outer instance pointer: cs_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_30);
  Function call may change dynamic type:OS_EnqueueAlarm (cs_25(D), cd_26, a_42(D), ad_24);
  Function call may change dynamic type:is_30 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_6);
  Function call may change dynamic type:_2 = OS_AppIsAccessible (_1);
  Function call may change dynamic type:_5 (cs_25(D));
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_30);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueAlarm/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_AppIsAccessible/1:
  Jump functions of caller  OS_LocalSetAlarm/0:
    indirect aggregate callsite, calling param 2, offset 32, by reference, for stmt _14 (cs_25(D));
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect aggregate callsite, calling param 2, offset 32, by reference, for stmt _5 (cs_25(D));
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_LocalSetAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 70, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalSetAlarm/0:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [5]: BOTTOM
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

OS_EnqueueAlarm/4 (OS_EnqueueAlarm) @06ce1000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSetAlarm/0 (467614563 (estimated locally),0.44 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06c2e000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSetAlarm/0 (230317621 (estimated locally),0.21 per call) OS_LocalSetAlarm/0 (467614563 (estimated locally),0.44 per call) OS_LocalSetAlarm/0 (697932185 (estimated locally),0.65 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c06e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalSetAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AppIsAccessible/1 (OS_AppIsAccessible) @06c2eee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSetAlarm/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_LocalSetAlarm/0 (OS_LocalSetAlarm) @06c2ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (230317621 (estimated locally),0.21 per call) OS_CORTEXM_IntSetDisablingLevel/3 (467614563 (estimated locally),0.44 per call) OS_EnqueueAlarm/4 (467614563 (estimated locally),0.44 per call) OS_CORTEXM_IntSetDisablingLevel/3 (697932185 (estimated locally),0.65 per call) OS_AppIsAccessible/1 (1073741823 (estimated locally),1.00 per call) 
   Indirect call(83053930 (estimated locally),0.08 per call)  of param:2 loaded from aggregate passed by reference at offset 32 (vptr maybe changed)
   Indirect call(244276264 (estimated locally),0.23 per call)  of param:2 loaded from aggregate passed by reference at offset 32 (vptr maybe changed)

;; Function OS_LocalSetAlarm (OS_LocalSetAlarm, funcdef_no=0, decl_uid=6433, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalSetAlarm/0
__attribute__((target ("general-regs-only")))
OS_LocalSetAlarm (os_alarmid_t a, const struct os_alarm_t * as, const struct os_counter_t * cs, os_tick_t val, os_tick_t per, os_boolean_t rel)
{
  struct os_counterdynamic_t * cd;
  struct os_alarmdynamic_t * ad;
  os_errorresult_t result;
  os_intstatus_t is;
  const struct os_appcontext_t * _1;
  int _2;
  const struct os_hwt_t * _3;
  unsigned char _4;
  void (*<T540>) (const struct os_counter_t *) _5;
  short unsigned int OS_kernDisableLevel.0_6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  const struct os_hwt_t * _11;
  unsigned char _12;
  short unsigned int _13;
  void (*<T540>) (const struct os_counter_t *) _14;
  os_tick_t iftmp.1_17;
  os_tick_t iftmp.1_38;
  os_tick_t iftmp.1_39;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ad_24 = as_23(D)->dynamic;
  # DEBUG ad => ad_24
  # DEBUG BEGIN_STMT
  cd_26 = cs_25(D)->dynamic;
  # DEBUG cd => cd_26
  # DEBUG BEGIN_STMT
  _1 = as_23(D)->app;
  _2 = OS_AppIsAccessible (_1);
  if (_2 == 0)
    goto <bb 21>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932185]:
  # DEBUG BEGIN_STMT
  _3 = cs_25(D)->hwt;
  if (_3 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 488552528]:
  # DEBUG BEGIN_STMT
  _4 = cd_26->lock;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 244276264]:
  # DEBUG BEGIN_STMT
  _5 = cs_25(D)->updFunc;
  _5 (cs_25(D));

  <bb 6> [local count: 697932185]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_6 = OS_kernDisableLevel;
  is_30 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_6);
  # DEBUG is => is_30
  # DEBUG BEGIN_STMT
  result_31 = ad_24->inUse;
  # DEBUG result => result_31
  # DEBUG BEGIN_STMT
  if (result_31 == 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 14>; [33.00%]

  <bb 7> [local count: 467614563]:
  # DEBUG BEGIN_STMT
  ad_24->inUse = 1;
  # DEBUG BEGIN_STMT
  ad_24->period = per_34(D);
  # DEBUG BEGIN_STMT
  if (rel_36(D) != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 233807282]:
  # DEBUG BEGIN_STMT
  ad_24->delta = val_37(D);
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 233807282]:
  # DEBUG BEGIN_STMT
  _7 = cd_26->current;
  if (_7 > val_37(D))
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 116903641]:
  _8 = val_37(D) - _7;
  _9 = cs_25(D)->maxallowedvalue;
  _10 = _8 + _9;
  iftmp.1_39 = _10 + 1;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 116903641]:
  iftmp.1_38 = val_37(D) - _7;

  <bb 12> [local count: 233807282]:
  # iftmp.1_17 = PHI <iftmp.1_39(10), iftmp.1_38(11)>
  ad_24->delta = iftmp.1_17;

  <bb 13> [local count: 467614563]:
  # DEBUG BEGIN_STMT
  OS_EnqueueAlarm (cs_25(D), cd_26, a_42(D), ad_24);
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_30);
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 230317621]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_30);
  # DEBUG BEGIN_STMT
  if (result_31 == 1)
    goto <bb 17>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 152009630]:
  # DEBUG BEGIN_STMT
  if (result_31 == 2)
    goto <bb 16>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 16> [local count: 51683274]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 4

  <bb 17> [local count: 697932186]:
  # result_15 = PHI <0(13), 20(14), result_31(15), 4(16)>
  # DEBUG result => result_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = cs_25(D)->hwt;
  if (_11 != 0B)
    goto <bb 18>; [70.00%]
  else
    goto <bb 21>; [30.00%]

  <bb 18> [local count: 488552529]:
  # DEBUG BEGIN_STMT
  _12 = cd_26->lock;
  if (_12 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 19> [local count: 244276265]:
  _13 = cd_26->head;
  if (_13 == a_42(D))
    goto <bb 20>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 20> [local count: 83053930]:
  # DEBUG BEGIN_STMT
  _14 = cs_25(D)->updFunc;
  _14 (cs_25(D));

  <bb 21> [local count: 1073741824]:
  # result_16 = PHI <154(2), result_15(17), result_15(18), result_15(19), result_15(20)>
  # DEBUG result => result_16
  # DEBUG BEGIN_STMT
  return result_16;

}


