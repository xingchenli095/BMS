
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalStartScheduleTable/7:
  Jump functions of caller  OS_LocalStartScheduleTableSynchron/5:
  Jump functions of caller  OS_ActivateAutoSchedules/0:

 Propagating constants:

Not considering OS_ActivateAutoSchedules for cloning; -fipa-cp-clone disabled.

overall_size: 31, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ActivateAutoSchedules/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nSchedules/8 (OS_nSchedules) @06ccaa20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoSchedules/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalStartScheduleTable/7 (OS_LocalStartScheduleTable) @06cead20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ActivateAutoSchedules/0 (630715947 (estimated locally),5.34 per call) 
  Calls: 
OS_alarmTableBase/6 (OS_alarmTableBase) @06cca990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoSchedules/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalStartScheduleTableSynchron/5 (OS_LocalStartScheduleTableSynchron) @06ceac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ActivateAutoSchedules/0 (324914276 (estimated locally),2.75 per call) 
  Calls: 
OS_scheduleTableBase/4 (OS_scheduleTableBase) @06cca900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoSchedules/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_autoStartSchedules/3 (OS_autoStartSchedules) @06cca8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoSchedules/0 (addr)OS_ActivateAutoSchedules/0 (read)OS_ActivateAutoSchedules/0 (addr)OS_ActivateAutoSchedules/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_startModeSchedules/2 (OS_startModeSchedules) @06cca870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoSchedules/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_appMode/1 (OS_appMode) @06cca828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoSchedules/0 (read)
  Availability: not_available
  Varpool flags:
OS_ActivateAutoSchedules/0 (OS_ActivateAutoSchedules) @06ceaa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_appMode/1 (read)OS_startModeSchedules/2 (read)OS_autoStartSchedules/3 (addr)OS_autoStartSchedules/3 (read)OS_scheduleTableBase/4 (read)OS_alarmTableBase/6 (read)OS_autoStartSchedules/3 (addr)OS_autoStartSchedules/3 (read)OS_nSchedules/8 (read)
  Referring: 
  Availability: available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_LocalStartScheduleTable/7 (630715947 (estimated locally),5.34 per call) OS_LocalStartScheduleTableSynchron/5 (324914276 (estimated locally),2.75 per call) 

;; Function OS_ActivateAutoSchedules (OS_ActivateAutoSchedules, funcdef_no=0, decl_uid=6413, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ActivateAutoSchedules/0
__attribute__((target ("general-regs-only")))
OS_ActivateAutoSchedules ()
{
  const struct os_schedule_t * ss;
  os_scheduleid_t s;
  const struct os_autoschedule_t * as;
  os_uint16_t idx;
  unsigned char OS_appMode.0_1;
  int _2;
  int _3;
  const struct os_schedule_t * OS_scheduleTableBase.1_4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  const struct os_alarm_t * OS_alarmTableBase.2_8;
  short unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  const struct os_alarm_t * _12;
  unsigned char _13;
  unsigned int _14;
  _Bool _15;
  int _16;
  int _17;
  unsigned char OS_nSchedules.4_18;

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  OS_appMode.0_1 = OS_appMode;
  _2 = (int) OS_appMode.0_1;
  idx_25 = OS_startModeSchedules[_2];
  # DEBUG idx => idx_25
  # DEBUG BEGIN_STMT
  _3 = (int) idx_25;
  as_26 = &OS_autoStartSchedules[_3];
  # DEBUG as => as_26
  # DEBUG BEGIN_STMT
  s_27 = MEM[(const struct os_autoschedule_t *)&OS_autoStartSchedules][_3].schedule;
  # DEBUG s => s_27
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.1_4 = OS_scheduleTableBase;
  _5 = (unsigned int) s_21;
  _6 = _5 * 36;
  ss_28 = OS_scheduleTableBase.1_4 + _6;
  # DEBUG ss => ss_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = as_20->method;
  if (_7 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  OS_LocalStartScheduleTableSynchron (ss_28);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 630715947]:
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.2_8 = OS_alarmTableBase;
  _9 = ss_28->alarm;
  _10 = (unsigned int) _9;
  _11 = _10 * 28;
  _12 = OS_alarmTableBase.2_8 + _11;
  _13 = _12->counter;
  _14 = as_20->offset;
  _15 = _7 != 1;
  _16 = (int) _15;
  OS_LocalStartScheduleTable (ss_28, _13, _14, _16);

  <bb 6> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  idx_31 = idx_19 + 1;
  # DEBUG idx => idx_31
  # DEBUG BEGIN_STMT
  _17 = (int) idx_31;
  as_32 = &OS_autoStartSchedules[_17];
  # DEBUG as => as_32
  # DEBUG BEGIN_STMT
  s_33 = MEM[(const struct os_autoschedule_t *)&OS_autoStartSchedules][_17].schedule;
  # DEBUG s => s_33

  <bb 7> [local count: 1073741824]:
  # idx_19 = PHI <idx_25(2), idx_31(6)>
  # as_20 = PHI <as_26(2), as_32(6)>
  # s_21 = PHI <s_27(2), s_33(6)>
  # DEBUG s => s_21
  # DEBUG as => as_20
  # DEBUG idx => idx_19
  # DEBUG BEGIN_STMT
  OS_nSchedules.4_18 = OS_nSchedules;
  if (OS_nSchedules.4_18 > s_21)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  return;

}


