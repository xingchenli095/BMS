
IPA constant propagation start:
Determining dynamic type for call: _11 (cs_58);
  Starting walk at: _11 (cs_58);
  instance pointer: cs_58  Outer instance pointer: cs_58 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _42 (cs_58);
  Starting walk at: _42 (cs_58);
  instance pointer: cs_58  Outer instance pointer: cs_58 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_EnqueueAlarm (cs_58, cd_59, _37, ad_56);
  Function call may change dynamic type:_14 = OS_AppIsAccessible (_13);
  Function call may change dynamic type:is_62 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_12);
  Function call may change dynamic type:_11 (cs_58);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueAlarm/6:
  Jump functions of caller  OS_AppIsAccessible/5:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/4:
  Jump functions of caller  OS_LocalStartScheduleTable/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _42 (cs_58);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _11 (cs_58);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_LocalStartScheduleTable for cloning; -fipa-cp-clone disabled.

overall_size: 115, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalStartScheduleTable/0:
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

OS_EnqueueAlarm/6 (OS_EnqueueAlarm) @06d01000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalStartScheduleTable/0 (294876348 (estimated locally),0.27 per call) 
  Calls: 
OS_AppIsAccessible/5 (OS_AppIsAccessible) @06c0ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalStartScheduleTable/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/4 (OS_CORTEXM_IntSetDisablingLevel) @06c0e000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalStartScheduleTable/0 (1073741824 (estimated locally),1.00 per call) OS_LocalStartScheduleTable/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/3 (OS_kernDisableLevel) @06d00120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/2 (OS_counterTableBase) @06d00048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/1 (OS_alarmTableBase) @06d00000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalStartScheduleTable/0 (OS_LocalStartScheduleTable) @06c0ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_counterTableBase/2 (read)OS_kernDisableLevel/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741821 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) OS_EnqueueAlarm/6 (294876348 (estimated locally),0.27 per call) OS_AppIsAccessible/5 (1073741823 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/4 (1073741823 (estimated locally),1.00 per call) 
   Indirect call(35090285 (estimated locally),0.03 per call) 
   Indirect call(375809637 (estimated locally),0.35 per call) 

;; Function OS_LocalStartScheduleTable (OS_LocalStartScheduleTable, funcdef_no=0, decl_uid=6480, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalStartScheduleTable/0
__attribute__((target ("general-regs-only")))
OS_LocalStartScheduleTable (const struct os_schedule_t * ss, os_counterid_t c, os_tick_t offset, os_boolean_t rel)
{
  os_intstatus_t is;
  struct os_counterdynamic_t * cd;
  const struct os_counter_t * cs;
  struct os_alarmdynamic_t * ad;
  struct os_scheduledynamic_t * sd;
  os_errorresult_t result;
  const struct os_alarm_t * OS_alarmTableBase.0_1;
  short unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  const struct os_alarm_t * _5;
  const struct os_counter_t * OS_counterTableBase.1_6;
  unsigned int _7;
  unsigned int _8;
  const struct os_hwt_t * _9;
  unsigned char _10;
  void (*<T540>) (const struct os_counter_t *) _11;
  short unsigned int OS_kernDisableLevel.2_12;
  const struct os_appcontext_t * _13;
  int _14;
  unsigned char _15;
  unsigned char _16;
  unsigned char _17;
  unsigned int _18;
  unsigned int _19;
  const struct os_scheduleentry_t * _20;
  unsigned int _21;
  unsigned int _22;
  unsigned int _23;
  unsigned int _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  unsigned int _29;
  const struct os_scheduleentry_t * _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  unsigned int _35;
  unsigned int _36;
  short unsigned int _37;
  const struct os_hwt_t * _38;
  unsigned char _39;
  short unsigned int _40;
  short unsigned int _41;
  void (*<T540>) (const struct os_counter_t *) _42;
  os_tick_t iftmp.3_44;
  os_tick_t iftmp.4_45;
  os_tick_t iftmp.5_46;
  os_tick_t iftmp.6_47;
  unsigned char _52;
  os_tick_t iftmp.5_73;
  os_tick_t iftmp.5_74;
  os_tick_t iftmp.6_76;
  os_tick_t iftmp.6_77;
  os_tick_t iftmp.3_79;
  os_tick_t iftmp.3_80;
  os_tick_t iftmp.4_82;
  os_tick_t iftmp.4_83;

  <bb 2> [local count: 1073741821]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  sd_55 = ss_54(D)->dynamic;
  # DEBUG sd => sd_55
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.0_1 = OS_alarmTableBase;
  _2 = ss_54(D)->alarm;
  _3 = (unsigned int) _2;
  _4 = _3 * 28;
  _5 = OS_alarmTableBase.0_1 + _4;
  ad_56 = _5->dynamic;
  # DEBUG ad => ad_56
  # DEBUG BEGIN_STMT
  OS_counterTableBase.1_6 = OS_counterTableBase;
  _7 = (unsigned int) c_57(D);
  _8 = _7 * 32;
  cs_58 = OS_counterTableBase.1_6 + _8;
  # DEBUG cs => cs_58
  # DEBUG BEGIN_STMT
  cd_59 = cs_58->dynamic;
  # DEBUG cd => cd_59
  # DEBUG BEGIN_STMT
  _9 = cs_58->hwt;
  if (_9 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619275]:
  # DEBUG BEGIN_STMT
  _10 = cd_59->lock;
  if (_10 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 375809637]:
  # DEBUG BEGIN_STMT
  _11 = cs_58->updFunc;
  _11 (cs_58);

  <bb 5> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.2_12 = OS_kernDisableLevel;
  is_62 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_12);
  # DEBUG is => is_62
  # DEBUG BEGIN_STMT
  _13 = ss_54(D)->app;
  _14 = OS_AppIsAccessible (_13);
  if (_14 == 0)
    goto <bb 29>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 697932185]:
  # DEBUG BEGIN_STMT
  _15 = sd_55->status;
  if (_15 != 0)
    goto <bb 29>; [35.00%]
  else
    goto <bb 7>; [65.00%]

  <bb 7> [local count: 453655920]:
  # DEBUG BEGIN_STMT
  _16 = ad_56->inUse;
  if (_16 != 0)
    goto <bb 29>; [35.00%]
  else
    goto <bb 8>; [65.00%]

  <bb 8> [local count: 294876348]:
  # DEBUG BEGIN_STMT
  sd_55->adjRemaining = 4294967295;
  # DEBUG BEGIN_STMT
  sd_55->chain = 255;
  # DEBUG BEGIN_STMT
  sd_55->next = 0;
  # DEBUG BEGIN_STMT
  sd_55->status = 3;
  # DEBUG BEGIN_STMT
  _17 = ss_54(D)->flags;
  _52 = _17 & 4;
  if (_52 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 147438174]:
  # DEBUG BEGIN_STMT
  sd_55->status = 11;

  <bb 10> [local count: 294876348]:
  # DEBUG BEGIN_STMT
  ad_56->inUse = 1;
  # DEBUG BEGIN_STMT
  ad_56->period = 0;
  # DEBUG BEGIN_STMT
  if (rel_71(D) != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 11> [local count: 147438174]:
  # DEBUG BEGIN_STMT
  _18 = cs_58->maxallowedvalue;
  _19 = _18 - offset_72(D);
  _20 = ss_54(D)->table;
  _21 = _20->offset;
  if (_19 < _21)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 73719087]:
  _22 = _21 + offset_72(D);
  _23 = _22 - _18;
  iftmp.3_80 = _23 + 4294967295;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 73719087]:
  iftmp.3_79 = _21 + offset_72(D);

  <bb 14> [local count: 147438174]:
  # iftmp.3_44 = PHI <iftmp.3_80(12), iftmp.3_79(13)>
  ad_56->delta = iftmp.3_44;
  # DEBUG BEGIN_STMT
  _24 = cd_59->current;
  _25 = _18 - _24;
  if (_25 < iftmp.3_44)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 73719087]:
  _26 = _24 + iftmp.3_44;
  _27 = _26 - _18;
  iftmp.4_83 = _27 + 4294967295;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 73719087]:
  iftmp.4_82 = _24 + iftmp.3_44;

  <bb 17> [local count: 147438174]:
  # iftmp.4_45 = PHI <iftmp.4_83(15), iftmp.4_82(16)>
  sd_55->ctrAbs = iftmp.4_45;
  goto <bb 25>; [100.00%]

  <bb 18> [local count: 147438174]:
  # DEBUG BEGIN_STMT
  _28 = cs_58->maxallowedvalue;
  _29 = _28 - offset_72(D);
  _30 = ss_54(D)->table;
  _31 = _30->offset;
  if (_29 < _31)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 73719087]:
  _32 = _31 + offset_72(D);
  _33 = _32 - _28;
  iftmp.5_74 = _33 + 4294967295;
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 73719087]:
  iftmp.5_73 = _31 + offset_72(D);

  <bb 21> [local count: 147438174]:
  # iftmp.5_46 = PHI <iftmp.5_74(19), iftmp.5_73(20)>
  sd_55->ctrAbs = iftmp.5_46;
  # DEBUG BEGIN_STMT
  _34 = cd_59->current;
  if (_34 > iftmp.5_46)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 73719087]:
  _35 = iftmp.5_46 - _34;
  _36 = _28 + _35;
  iftmp.6_77 = _36 + 1;
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 73719087]:
  iftmp.6_76 = iftmp.5_46 - _34;

  <bb 24> [local count: 147438174]:
  # iftmp.6_47 = PHI <iftmp.6_77(22), iftmp.6_76(23)>
  ad_56->delta = iftmp.6_47;

  <bb 25> [local count: 294876348]:
  # DEBUG BEGIN_STMT
  _37 = ss_54(D)->alarm;
  OS_EnqueueAlarm (cs_58, cd_59, _37, ad_56);
  # DEBUG BEGIN_STMT
  _38 = cs_58->hwt;
  if (_38 != 0B)
    goto <bb 26>; [70.00%]
  else
    goto <bb 29>; [30.00%]

  <bb 26> [local count: 206413444]:
  # DEBUG BEGIN_STMT
  _39 = cd_59->lock;
  if (_39 == 0)
    goto <bb 27>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 27> [local count: 103206722]:
  _40 = cd_59->head;
  _41 = ss_54(D)->alarm;
  if (_40 == _41)
    goto <bb 28>; [34.00%]
  else
    goto <bb 29>; [66.00%]

  <bb 28> [local count: 35090285]:
  # DEBUG BEGIN_STMT
  _42 = cs_58->updFunc;
  _42 (cs_58);

  <bb 29> [local count: 1073741824]:
  # result_43 = PHI <154(5), 69(6), 20(7), 0(25), 0(26), 0(27), 0(28)>
  # DEBUG result => result_43
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_62);
  # DEBUG BEGIN_STMT
  return result_43;

}


