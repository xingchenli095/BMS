
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueAlarm/3:
  Jump functions of caller  OS_ResetScheduleAlarm/0:

 Propagating constants:

Not considering OS_ResetScheduleAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 47, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ResetScheduleAlarm/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_EnqueueAlarm/3 (OS_EnqueueAlarm) @06c5fc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ResetScheduleAlarm/0 (536870913 (estimated locally),0.50 per call) 
  Calls: 
OS_counterTableBase/2 (OS_counterTableBase) @06c3e9d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ResetScheduleAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/1 (OS_alarmTableBase) @06c3e990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ResetScheduleAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ResetScheduleAlarm/0 (OS_ResetScheduleAlarm) @06c5fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_counterTableBase/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_EnqueueAlarm/3 (536870913 (estimated locally),0.50 per call) 

;; Function OS_ResetScheduleAlarm (OS_ResetScheduleAlarm, funcdef_no=0, decl_uid=6466, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ResetScheduleAlarm/0
__attribute__((target ("general-regs-only")))
OS_ResetScheduleAlarm (const struct os_schedule_t * ss, struct os_scheduledynamic_t * sd, os_tick_t delta)
{
  os_boolean_t repeat;
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
  unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  unsigned int _19;
  os_tick_t iftmp.2_21;
  os_tick_t iftmp.3_22;
  os_tick_t iftmp.4_23;
  os_tick_t iftmp.2_32;
  os_tick_t iftmp.2_33;
  os_tick_t iftmp.3_35;
  os_tick_t iftmp.3_36;
  os_tick_t iftmp.4_38;
  os_tick_t iftmp.4_39;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG repeat => 1
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.0_1 = OS_alarmTableBase;
  _2 = ss_26(D)->alarm;
  _3 = (unsigned int) _2;
  _4 = _3 * 28;
  as_27 = OS_alarmTableBase.0_1 + _4;
  # DEBUG as => as_27
  # DEBUG BEGIN_STMT
  ad_28 = as_27->dynamic;
  # DEBUG ad => ad_28
  # DEBUG BEGIN_STMT
  OS_counterTableBase.1_5 = OS_counterTableBase;
  _6 = as_27->counter;
  _7 = (unsigned int) _6;
  _8 = _7 * 32;
  cs_29 = OS_counterTableBase.1_5 + _8;
  # DEBUG cs => cs_29
  # DEBUG BEGIN_STMT
  cd_30 = cs_29->dynamic;
  # DEBUG cd => cd_30
  # DEBUG BEGIN_STMT
  _9 = cd_30->current;
  _10 = sd_31(D)->ctrAbs;
  if (_9 < _10)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _11 = _9 - _10;
  _12 = cs_29->maxallowedvalue;
  _13 = _11 + _12;
  iftmp.2_33 = _13 + 1;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  iftmp.2_32 = _9 - _10;

  <bb 5> [local count: 1073741824]:
  # iftmp.2_21 = PHI <iftmp.2_33(3), iftmp.2_32(4)>
  # DEBUG diff => iftmp.2_21
  # DEBUG BEGIN_STMT
  _14 = cs_29->maxallowedvalue;
  _15 = _14 - _10;
  if (_15 < delta_34(D))
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 536870913]:
  _16 = _10 + delta_34(D);
  _17 = _16 - _14;
  iftmp.3_36 = _17 + 4294967295;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 536870913]:
  iftmp.3_35 = _10 + delta_34(D);

  <bb 8> [local count: 1073741824]:
  # iftmp.3_22 = PHI <iftmp.3_36(6), iftmp.3_35(7)>
  sd_31(D)->ctrAbs = iftmp.3_22;
  # DEBUG BEGIN_STMT
  if (iftmp.2_21 < delta_34(D))
    goto <bb 9>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (_9 > iftmp.3_22)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 268435456]:
  _18 = iftmp.3_22 - _9;
  _19 = _14 + _18;
  iftmp.4_39 = _19 + 1;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 268435456]:
  iftmp.4_38 = iftmp.3_22 - _9;

  <bb 12> [local count: 536870913]:
  # iftmp.4_23 = PHI <iftmp.4_39(10), iftmp.4_38(11)>
  ad_28->delta = iftmp.4_23;
  # DEBUG BEGIN_STMT
  ad_28->period = 0;
  # DEBUG BEGIN_STMT
  ad_28->inUse = 1;
  # DEBUG BEGIN_STMT
  OS_EnqueueAlarm (cs_29, cd_30, _2, ad_28);
  # DEBUG BEGIN_STMT
  # DEBUG repeat => 0

  <bb 13> [local count: 1073741824]:
  # repeat_20 = PHI <1(8), 0(12)>
  # DEBUG repeat => repeat_20
  # DEBUG BEGIN_STMT
  return repeat_20;

}


