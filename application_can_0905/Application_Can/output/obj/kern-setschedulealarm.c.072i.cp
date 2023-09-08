
IPA constant propagation start:
Determining dynamic type for call: _11 (cs_38);
  Starting walk at: _11 (cs_38);
  instance pointer: cs_38  Outer instance pointer: cs_38 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _28 (cs_38);
  Starting walk at: _28 (cs_38);
  instance pointer: cs_38  Outer instance pointer: cs_38 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_43);
  Function call may change dynamic type:OS_EnqueueAlarm (cs_38, cd_39, _23, ad_37);
  Function call may change dynamic type:is_43 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_12);
  Function call may change dynamic type:_11 (cs_38);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueAlarm/5:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/4:
  Jump functions of caller  OS_SetScheduleAlarm/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _28 (cs_38);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _11 (cs_38);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_SetScheduleAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 78, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_SetScheduleAlarm/0:
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

OS_EnqueueAlarm/5 (OS_EnqueueAlarm) @06c3c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_SetScheduleAlarm/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/4 (OS_CORTEXM_IntSetDisablingLevel) @06c3cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_SetScheduleAlarm/0 (1073741824 (estimated locally),1.00 per call) OS_SetScheduleAlarm/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/3 (OS_kernDisableLevel) @06c1cc18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetScheduleAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/2 (OS_counterTableBase) @06c1cb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetScheduleAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/1 (OS_alarmTableBase) @06c1caf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetScheduleAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_SetScheduleAlarm/0 (OS_SetScheduleAlarm) @06c3cc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_counterTableBase/2 (read)OS_kernDisableLevel/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) OS_EnqueueAlarm/5 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(127775277 (estimated locally),0.12 per call) 
   Indirect call(187904819 (estimated locally),0.17 per call) 

;; Function OS_SetScheduleAlarm (OS_SetScheduleAlarm, funcdef_no=0, decl_uid=6462, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_SetScheduleAlarm/0
__attribute__((target ("general-regs-only")))
OS_SetScheduleAlarm (const struct os_schedule_t * ss, struct os_scheduledynamic_t * sd, os_tick_t val, os_boolean_t rel)
{
  os_intstatus_t is;
  struct os_counterdynamic_t * cd;
  const struct os_counter_t * cs;
  struct os_alarmdynamic_t * ad;
  const struct os_alarm_t * as;
  const struct os_alarm_t * OS_alarmTableBase.0_1;
  short unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  const struct os_counter_t * OS_counterTableBase.1_5;
  unsigned char _6;
  unsigned int _7;
  unsigned int _8;
  const struct os_hwt_t * _9;
  unsigned char _10;
  void (*<T540>) (const struct os_counter_t *) _11;
  short unsigned int OS_kernDisableLevel.2_12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  unsigned int _19;
  unsigned int _20;
  unsigned int _21;
  unsigned int _22;
  short unsigned int _23;
  const struct os_hwt_t * _24;
  unsigned char _25;
  short unsigned int _26;
  short unsigned int _27;
  void (*<T540>) (const struct os_counter_t *) _28;
  os_tick_t iftmp.3_29;
  os_tick_t iftmp.4_30;
  os_tick_t iftmp.3_47;
  os_tick_t iftmp.3_48;
  os_tick_t iftmp.4_51;
  os_tick_t iftmp.4_52;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.0_1 = OS_alarmTableBase;
  _2 = ss_35(D)->alarm;
  _3 = (unsigned int) _2;
  _4 = _3 * 28;
  as_36 = OS_alarmTableBase.0_1 + _4;
  # DEBUG as => as_36
  # DEBUG BEGIN_STMT
  ad_37 = as_36->dynamic;
  # DEBUG ad => ad_37
  # DEBUG BEGIN_STMT
  OS_counterTableBase.1_5 = OS_counterTableBase;
  _6 = as_36->counter;
  _7 = (unsigned int) _6;
  _8 = _7 * 32;
  cs_38 = OS_counterTableBase.1_5 + _8;
  # DEBUG cs => cs_38
  # DEBUG BEGIN_STMT
  cd_39 = cs_38->dynamic;
  # DEBUG cd => cd_39
  # DEBUG BEGIN_STMT
  if (rel_40(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  _9 = cs_38->hwt;
  if (_9 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 375809639]:
  _10 = cd_39->lock;
  if (_10 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  _11 = cs_38->updFunc;
  _11 (cs_38);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.2_12 = OS_kernDisableLevel;
  is_43 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_12);
  # DEBUG is => is_43
  # DEBUG BEGIN_STMT
  ad_37->inUse = 1;
  # DEBUG BEGIN_STMT
  ad_37->period = 0;
  # DEBUG BEGIN_STMT
  if (rel_40(D) != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  ad_37->delta = val_46(D);
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _13 = cd_39->current;
  if (_13 > val_46(D))
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 268435456]:
  _14 = val_46(D) - _13;
  _15 = cs_38->maxallowedvalue;
  _16 = _14 + _15;
  iftmp.3_48 = _16 + 1;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 268435456]:
  iftmp.3_47 = val_46(D) - _13;

  <bb 11> [local count: 536870913]:
  # iftmp.3_29 = PHI <iftmp.3_48(9), iftmp.3_47(10)>
  ad_37->delta = iftmp.3_29;

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _17 = cs_38->maxallowedvalue;
  _18 = cd_39->current;
  _19 = _17 - _18;
  _20 = ad_37->delta;
  if (_19 < _20)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 536870913]:
  _21 = _18 + _20;
  _22 = _21 - _17;
  iftmp.4_52 = _22 + 4294967295;
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 536870913]:
  iftmp.4_51 = _18 + _20;

  <bb 15> [local count: 1073741824]:
  # iftmp.4_30 = PHI <iftmp.4_52(13), iftmp.4_51(14)>
  sd_53(D)->ctrAbs = iftmp.4_30;
  # DEBUG BEGIN_STMT
  _23 = ss_35(D)->alarm;
  OS_EnqueueAlarm (cs_38, cd_39, _23, ad_37);
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_43);
  # DEBUG BEGIN_STMT
  _24 = cs_38->hwt;
  if (_24 != 0B)
    goto <bb 16>; [70.00%]
  else
    goto <bb 19>; [30.00%]

  <bb 16> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _25 = cd_39->lock;
  if (_25 == 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 375809639]:
  _26 = cd_39->head;
  _27 = ss_35(D)->alarm;
  if (_26 == _27)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 127775277]:
  # DEBUG BEGIN_STMT
  _28 = cs_38->updFunc;
  _28 (cs_38);

  <bb 19> [local count: 1073741824]:
  return;

}


