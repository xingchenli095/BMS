
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Panic/2:
  Jump functions of caller  OS_StartupChecksSchedule/0:

 Propagating constants:

Not considering OS_StartupChecksSchedule for cloning; -fipa-cp-clone disabled.

overall_size: 114, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartupChecksSchedule/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nSchedules/5 (OS_nSchedules) @06d203a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/4 (OS_alarmTableBase) @06d201b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/3 (OS_counterTableBase) @06d20168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Panic/2 (OS_Panic) @06c6be00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartupChecksSchedule/0 (130873559 (estimated locally),8.97 per call) OS_StartupChecksSchedule/0 (130873559 (estimated locally),8.97 per call) OS_StartupChecksSchedule/0 (130873559 (estimated locally),8.97 per call) OS_StartupChecksSchedule/0 (261747118 (estimated locally),17.93 per call) OS_StartupChecksSchedule/0 (315357974 (estimated locally),21.60 per call) OS_StartupChecksSchedule/0 (157678987 (estimated locally),10.80 per call) OS_StartupChecksSchedule/0 (27283780 (estimated locally),1.87 per call) OS_StartupChecksSchedule/0 (20586852 (estimated locally),1.41 per call) 
  Calls: 
OS_scheduleTableBase/1 (OS_scheduleTableBase) @06d20090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_StartupChecksSchedule/0 (OS_StartupChecksSchedule) @06c6ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_scheduleTableBase/1 (read)OS_counterTableBase/3 (read)OS_alarmTableBase/4 (read)OS_nSchedules/5 (read)
  Referring: 
  Availability: available
  Function flags: count:14598062 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Panic/2 (130873559 (estimated locally),8.97 per call) OS_Panic/2 (130873559 (estimated locally),8.97 per call) OS_Panic/2 (130873559 (estimated locally),8.97 per call) OS_Panic/2 (261747118 (estimated locally),17.93 per call) OS_Panic/2 (315357974 (estimated locally),21.60 per call) OS_Panic/2 (157678987 (estimated locally),10.80 per call) OS_Panic/2 (27283780 (estimated locally),1.87 per call) OS_Panic/2 (20586852 (estimated locally),1.41 per call) 

;; Function OS_StartupChecksSchedule (OS_StartupChecksSchedule, funcdef_no=0, decl_uid=6515, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartupChecksSchedule/0
__attribute__((target ("general-regs-only")))
OS_StartupChecksSchedule ()
{
  const struct os_appcontext_t * app;
  os_permission_t perms;
  os_tick_t delay;
  os_tick_t lastOffset;
  os_tick_t extraDelay;
  os_tick_t counterMax;
  os_eventmask_t foundevents;
  const struct os_scheduleentry_t * evt;
  const struct os_schedule_t * schedule;
  os_unsigned_t j;
  os_unsigned_t i;
  os_result_t result;
  const struct os_schedule_t * OS_scheduleTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  const struct os_counter_t * OS_counterTableBase.1_5;
  const struct os_alarm_t * OS_alarmTableBase.2_6;
  short unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  const struct os_alarm_t * _10;
  unsigned char _11;
  unsigned int _12;
  unsigned int _13;
  const struct os_counter_t * _14;
  unsigned char _15;
  unsigned int _16;
  const struct os_scheduleentry_t * _17;
  short unsigned int _18;
  unsigned int _19;
  unsigned int _20;
  sizetype _21;
  const struct os_scheduleentry_t * _22;
  unsigned int _23;
  const struct os_scheduleentry_t * _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  unsigned int _29;
  unsigned int _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  unsigned int _35;
  unsigned int _36;
  unsigned int _37;
  unsigned int _38;
  unsigned int _39;
  short unsigned int _40;
  unsigned int _41;
  unsigned char OS_nSchedules.3_42;
  unsigned int _43;
  unsigned char _70;

  <bb 2> [local count: 14598062]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 33>; [100.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.0_1 = OS_scheduleTableBase;
  _2 = i_54 * 36;
  schedule_74 = OS_scheduleTableBase.0_1 + _2;
  # DEBUG schedule => schedule_74
  # DEBUG BEGIN_STMT
  app_75 = schedule_74->app;
  # DEBUG app => app_75
  # DEBUG BEGIN_STMT
  if (app_75 == 0B)
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 20586852]:
  # DEBUG BEGIN_STMT
  result_77 = OS_Panic (51);
  # DEBUG result => result_77

  <bb 5> [local count: 118111600]:
  # result_44 = PHI <result_77(4), result_53(3)>
  # DEBUG result => result_44
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  perms_78 = schedule_74->permissions;
  # DEBUG perms => perms_78
  # DEBUG BEGIN_STMT
  if (app_75 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 6> [local count: 82678120]:
  _3 = app_75->permissionBit;
  _4 = _3 & perms_78;
  if (_4 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 27283780]:
  # DEBUG BEGIN_STMT
  result_80 = OS_Panic (50);
  # DEBUG result => result_80

  <bb 8> [local count: 118111600]:
  # result_45 = PHI <result_44(5), result_44(6), result_80(7)>
  # DEBUG result => result_45
  # DEBUG BEGIN_STMT
  OS_counterTableBase.1_5 = OS_counterTableBase;
  OS_alarmTableBase.2_6 = OS_alarmTableBase;
  _7 = schedule_74->alarm;
  _8 = (unsigned int) _7;
  _9 = _8 * 28;
  _10 = OS_alarmTableBase.2_6 + _9;
  _11 = _10->counter;
  _12 = (unsigned int) _11;
  _13 = _12 * 32;
  _14 = OS_counterTableBase.1_5 + _13;
  counterMax_81 = _14->maxallowedvalue;
  # DEBUG counterMax => counterMax_81
  # DEBUG BEGIN_STMT
  _15 = schedule_74->flags;
  _70 = _15 & 2;
  # DEBUG D#1 => _70 != 0
  # DEBUG syncable => (os_boolean_t) D#1
  # DEBUG BEGIN_STMT
  # DEBUG foundevents => 0
  # DEBUG BEGIN_STMT
  # DEBUG lastOffset => 0
  # DEBUG BEGIN_STMT
  _16 = schedule_74->period;
  _17 = schedule_74->table;
  _18 = schedule_74->nEntries;
  _19 = (unsigned int) _18;
  _20 = _19 * 20;
  _21 = _20 + 4294967276;
  _22 = _17 + _21;
  _23 = _22->offset;
  extraDelay_82 = _16 - _23;
  # DEBUG extraDelay => extraDelay_82
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  goto <bb 31>; [100.00%]

  <bb 9> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _24 = schedule_74->table;
  _25 = j_55 * 20;
  evt_84 = _24 + _25;
  # DEBUG evt => evt_84
  # DEBUG BEGIN_STMT
  _26 = evt_84->offset;
  if (_26 == lastOffset_59)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  _27 = evt_84->event;
  foundevents_86 = _27 | foundevents_57;
  # DEBUG foundevents => foundevents_86
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 630715948]:
  # DEBUG BEGIN_STMT
  foundevents_85 = evt_84->event;
  # DEBUG foundevents => foundevents_85

  <bb 12> [local count: 955630224]:
  # foundevents_56 = PHI <foundevents_86(10), foundevents_85(11)>
  # DEBUG foundevents => foundevents_56
  # DEBUG BEGIN_STMT
  if (foundevents_56 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 477815112]:
  _28 = evt_84->event;
  if (_28 == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  result_88 = OS_Panic (55);
  # DEBUG result => result_88

  <bb 15> [local count: 955630224]:
  # result_46 = PHI <result_52(12), result_52(13), result_88(14)>
  # DEBUG result => result_46
  # DEBUG BEGIN_STMT
  _29 = evt_84->offset;
  if (_29 < lastOffset_59)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 315357974]:
  # DEBUG BEGIN_STMT
  result_90 = OS_Panic (56);
  # DEBUG result => result_90

  <bb 17> [local count: 955630224]:
  # result_47 = PHI <result_46(15), result_90(16)>
  # DEBUG result => result_47
  # DEBUG BEGIN_STMT
  if (j_55 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 18> [local count: 477815112]:
  _30 = evt_84->offset;
  if (_30 != lastOffset_59)
    goto <bb 19>; [66.00%]
  else
    goto <bb 30>; [34.00%]

  <bb 19> [local count: 793173087]:
  # DEBUG BEGIN_STMT
  _31 = evt_84->offset;
  _32 = _31 - lastOffset_59;
  delay_91 = _32 + extraDelay_58;
  # DEBUG delay => delay_91
  # DEBUG BEGIN_STMT
  if (counterMax_81 < delay_91)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 261747118]:
  # DEBUG BEGIN_STMT
  result_93 = OS_Panic (57);
  # DEBUG result => result_93

  <bb 21> [local count: 793173087]:
  # result_48 = PHI <result_47(19), result_93(20)>
  # DEBUG result => result_48
  # DEBUG BEGIN_STMT
  if (_70 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 22> [local count: 396586543]:
  _33 = evt_84->maxIncrease;
  _34 = _33 + delay_91;
  if (_34 > counterMax_81)
    goto <bb 23>; [33.00%]
  else
    goto <bb 24>; [67.00%]

  <bb 23> [local count: 130873559]:
  # DEBUG BEGIN_STMT
  result_95 = OS_Panic (58);
  # DEBUG result => result_95

  <bb 24> [local count: 793173088]:
  # result_49 = PHI <result_48(21), result_48(22), result_95(23)>
  # DEBUG result => result_49
  # DEBUG BEGIN_STMT
  if (_70 != 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 27>; [50.00%]

  <bb 25> [local count: 396586543]:
  _35 = evt_84->maxDecrease;
  if (_35 >= delay_91)
    goto <bb 26>; [33.00%]
  else
    goto <bb 27>; [67.00%]

  <bb 26> [local count: 130873559]:
  # DEBUG BEGIN_STMT
  result_97 = OS_Panic (59);
  # DEBUG result => result_97

  <bb 27> [local count: 793173088]:
  # result_50 = PHI <result_49(24), result_49(25), result_97(26)>
  # DEBUG result => result_50
  # DEBUG BEGIN_STMT
  if (_70 != 0)
    goto <bb 28>; [50.00%]
  else
    goto <bb 30>; [50.00%]

  <bb 28> [local count: 396586543]:
  _36 = evt_84->maxDecrease;
  _37 = evt_84->maxIncrease;
  _38 = _36 + _37;
  _39 = schedule_74->period;
  if (_38 > _39)
    goto <bb 29>; [33.00%]
  else
    goto <bb 30>; [67.00%]

  <bb 29> [local count: 130873559]:
  # DEBUG BEGIN_STMT
  result_99 = OS_Panic (60);
  # DEBUG result => result_99

  <bb 30> [local count: 955630226]:
  # result_51 = PHI <result_47(18), result_50(27), result_50(28), result_99(29)>
  # DEBUG result => result_51
  # DEBUG BEGIN_STMT
  lastOffset_100 = evt_84->offset;
  # DEBUG lastOffset => lastOffset_100
  # DEBUG BEGIN_STMT
  # DEBUG extraDelay => 0
  # DEBUG BEGIN_STMT
  j_101 = j_55 + 1;
  # DEBUG j => j_101

  <bb 31> [local count: 1073741824]:
  # result_52 = PHI <result_45(8), result_51(30)>
  # j_55 = PHI <0(8), j_101(30)>
  # foundevents_57 = PHI <0(8), foundevents_56(30)>
  # extraDelay_58 = PHI <extraDelay_82(8), 0(30)>
  # lastOffset_59 = PHI <0(8), lastOffset_100(30)>
  # DEBUG lastOffset => lastOffset_59
  # DEBUG extraDelay => extraDelay_58
  # DEBUG foundevents => foundevents_57
  # DEBUG j => j_55
  # DEBUG result => result_52
  # DEBUG BEGIN_STMT
  _40 = schedule_74->nEntries;
  _41 = (unsigned int) _40;
  if (_41 > j_55)
    goto <bb 9>; [89.00%]
  else
    goto <bb 32>; [11.00%]

  <bb 32> [local count: 118111601]:
  # result_73 = PHI <result_52(31)>
  # DEBUG BEGIN_STMT
  i_83 = i_54 + 1;
  # DEBUG i => i_83

  <bb 33> [local count: 132709663]:
  # result_53 = PHI <0(2), result_73(32)>
  # i_54 = PHI <0(2), i_83(32)>
  # DEBUG i => i_54
  # DEBUG result => result_53
  # DEBUG BEGIN_STMT
  OS_nSchedules.3_42 = OS_nSchedules;
  _43 = (unsigned int) OS_nSchedules.3_42;
  if (_43 > i_54)
    goto <bb 3>; [89.00%]
  else
    goto <bb 34>; [11.00%]

  <bb 34> [local count: 14598063]:
  # result_71 = PHI <result_53(33)>
  # DEBUG BEGIN_STMT
  return result_71;

}


