
IPA constant propagation start:
Determining dynamic type for call: OS_EnqueueAlarmNoAdjust (cd_11(D), a_15(D), ad_10(D));
  Starting walk at: OS_EnqueueAlarmNoAdjust (cd_11(D), a_15(D), ad_10(D));
  instance pointer: cd_11(D)  Outer instance pointer: cd_11(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: OS_EnqueueAlarmNoAdjust (cd_11(D), a_15(D), ad_10(D));
  Starting walk at: OS_EnqueueAlarmNoAdjust (cd_11(D), a_15(D), ad_10(D));
  instance pointer: ad_10(D)  Outer instance pointer: ad_10(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueAlarmNoAdjust/1:
  Jump functions of caller  OS_EnqueueAlarm/0:
    callsite  OS_EnqueueAlarm/0 -> OS_EnqueueAlarmNoAdjust/1 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_EnqueueAlarmNoAdjust for cloning; -fipa-cp-clone disabled.
Not considering OS_EnqueueAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 55, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_EnqueueAlarmNoAdjust/1:
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
  Node: OS_EnqueueAlarm/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_alarmTableBase/2 (OS_alarmTableBase) @06c0bd38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_EnqueueAlarmNoAdjust/1 (read)OS_EnqueueAlarmNoAdjust/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_EnqueueAlarmNoAdjust/1 (OS_EnqueueAlarmNoAdjust) @06c2fe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/2 (read)OS_alarmTableBase/2 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: OS_EnqueueAlarm/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_EnqueueAlarm/0 (OS_EnqueueAlarm) @06c2fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_EnqueueAlarmNoAdjust/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_EnqueueAlarmNoAdjust (OS_EnqueueAlarmNoAdjust, funcdef_no=1, decl_uid=6422, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_EnqueueAlarmNoAdjust/1
__attribute__((target ("general-regs-only")))
OS_EnqueueAlarmNoAdjust (struct os_counterdynamic_t * cd, os_alarmid_t a, struct os_alarmdynamic_t * ad)
{
  struct os_alarmdynamic_t * np;
  os_alarmid_t n;
  struct os_alarmdynamic_t * lp;
  const struct os_alarm_t * OS_alarmTableBase.2_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_alarm_t * _4;
  unsigned int _7;
  const struct os_alarm_t * OS_alarmTableBase.4_8;
  unsigned int _9;
  unsigned int _10;
  const struct os_alarm_t * _11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  struct os_alarmdynamic_t * const iftmp.1_30;
  struct os_alarmdynamic_t * const iftmp.3_37;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG lp => 0B
  # DEBUG BEGIN_STMT
  n_28 = cd_27(D)->head;
  # DEBUG n => n_28
  # DEBUG BEGIN_STMT
  if (n_28 != 65535)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 75809931]:
  OS_alarmTableBase.2_1 = OS_alarmTableBase;
  _2 = (unsigned int) n_28;
  _3 = _2 * 28;
  _4 = OS_alarmTableBase.2_1 + _3;
  iftmp.1_30 = _4->dynamic;

  <bb 4> [local count: 114863532]:
  # lp_29 = PHI <0B(3), 0B(2)>
  # n_31 = PHI <n_28(3), n_28(2)>
  # np_36 = PHI <iftmp.1_30(3), 0B(2)>
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _7 = _13 - _12;
  ad_32(D)->delta = _7;
  # DEBUG BEGIN_STMT
  n_34 = np_20->next;
  # DEBUG n => n_34
  # DEBUG BEGIN_STMT
  # DEBUG lp => np_20
  # DEBUG BEGIN_STMT
  if (n_34 != 65535)
    goto <bb 6>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 6> [local count: 632859673]:
  OS_alarmTableBase.4_8 = OS_alarmTableBase;
  _9 = (unsigned int) n_34;
  _10 = _9 * 28;
  _11 = OS_alarmTableBase.4_8 + _10;
  iftmp.3_37 = _11->dynamic;

  <bb 7> [local count: 958878293]:
  # lp_21 = PHI <np_20(6), np_20(5)>
  # n_22 = PHI <n_34(6), n_34(5)>
  # np_17 = PHI <iftmp.3_37(6), 0B(5)>

  <bb 8> [local count: 1073741824]:
  # lp_18 = PHI <lp_29(4), lp_21(7)>
  # n_19 = PHI <n_31(4), n_22(7)>
  # np_20 = PHI <np_36(4), np_17(7)>
  # DEBUG np => np_20
  # DEBUG n => n_19
  # DEBUG lp => lp_18
  # DEBUG BEGIN_STMT
  if (np_20 != 0B)
    goto <bb 9>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 9> [local count: 1014686025]:
  _12 = np_20->delta;
  _13 = ad_32(D)->delta;
  if (_12 < _13)
    goto <bb 5>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863532]:
  # lp_5 = PHI <lp_18(8), lp_18(9)>
  # n_6 = PHI <n_19(8), n_19(9)>
  # np_35 = PHI <np_20(8), np_20(9)>
  # DEBUG BEGIN_STMT
  if (np_35 != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 11> [local count: 80404472]:
  # DEBUG BEGIN_STMT
  _14 = np_35->delta;
  _15 = ad_32(D)->delta;
  _16 = _14 - _15;
  np_35->delta = _16;

  <bb 12> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  if (lp_5 == 0B)
    goto <bb 13>; [30.00%]
  else
    goto <bb 14>; [70.00%]

  <bb 13> [local count: 34459060]:
  # DEBUG BEGIN_STMT
  ad_32(D)->next = n_28;
  # DEBUG BEGIN_STMT
  cd_27(D)->head = a_40(D);
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 80404472]:
  # DEBUG BEGIN_STMT
  ad_32(D)->next = n_6;
  # DEBUG BEGIN_STMT
  lp_5->next = a_40(D);

  <bb 15> [local count: 114863532]:
  return;

}



;; Function OS_EnqueueAlarm (OS_EnqueueAlarm, funcdef_no=0, decl_uid=6418, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_EnqueueAlarm/0
__attribute__((target ("general-regs-only")))
OS_EnqueueAlarm (const struct os_counter_t * cs, struct os_counterdynamic_t * cd, os_alarmid_t a, struct os_alarmdynamic_t * ad)
{
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  os_tick_t iftmp.0_7;
  os_tick_t iftmp.0_12;
  os_tick_t iftmp.0_13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = cs_9(D)->maxallowedvalue;
  _2 = ad_10(D)->delta;
  _3 = _1 - _2;
  _4 = cd_11(D)->error;
  if (_3 < _4)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 = _2 + _4;
  _6 = _5 - _1;
  iftmp.0_13 = _6 + 4294967295;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  iftmp.0_12 = _2 + _4;

  <bb 5> [local count: 1073741824]:
  # iftmp.0_7 = PHI <iftmp.0_13(3), iftmp.0_12(4)>
  ad_10(D)->delta = iftmp.0_7;
  # DEBUG BEGIN_STMT
  OS_EnqueueAlarmNoAdjust (cd_11(D), a_15(D), ad_10(D));
  return;

}


