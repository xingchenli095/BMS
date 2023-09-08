
IPA constant propagation start:
Determining dynamic type for call: OS_actiTaskFunc.10_13 (_16);
  Starting walk at: OS_actiTaskFunc.10_13 (_16);
  instance pointer: _16  Outer instance pointer: _16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_killAlarmFunc.0_3 (alarmid_18, 0);
  Function call may change dynamic type:OS_killScheduleFunc.3_6 (scheduleid_19, 0);
  Function call may change dynamic type:OS_killTaskFunc.6_9 (task_20, 0);
Determining dynamic type for call: OS_killTaskFunc.6_9 (task_20, 0);
  Starting walk at: OS_killTaskFunc.6_9 (task_20, 0);
  instance pointer: task_20  Outer instance pointer: task_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_killAlarmFunc.0_3 (alarmid_18, 0);
  Function call may change dynamic type:OS_killScheduleFunc.3_6 (scheduleid_19, 0);
  Function call may change dynamic type:OS_killTaskFunc.6_9 (task_20, 0);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RestartApplication/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_actiTaskFunc.10_13 (_16);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killTaskFunc.6_9 (task_20, 0);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killScheduleFunc.3_6 (scheduleid_19, 0);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killAlarmFunc.0_3 (alarmid_18, 0);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR

 Propagating constants:

Not considering OS_RestartApplication for cloning; -fipa-cp-clone disabled.

overall_size: 62, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_RestartApplication/0:
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

OS_actiTaskFunc/10 (OS_actiTaskFunc) @06c3af30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/9 (OS_nTasks) @06c3aee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killTaskFunc/8 (OS_killTaskFunc) @06c3ae10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/7 (OS_taskTableBase) @06c3adc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/6 (OS_nSchedules) @06c3ad80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killScheduleFunc/5 (OS_killScheduleFunc) @06c3aca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/4 (OS_scheduleTableBase) @06c3ac60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/3 (OS_nAlarms) @06c3ac18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killAlarmFunc/2 (OS_killAlarmFunc) @06c3ab40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/1 (OS_alarmTableBase) @06c3aaf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RestartApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_RestartApplication/0 (OS_RestartApplication) @06c5aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_killAlarmFunc/2 (read)OS_nAlarms/3 (read)OS_scheduleTableBase/4 (read)OS_killScheduleFunc/5 (read)OS_nSchedules/6 (read)OS_taskTableBase/7 (read)OS_killTaskFunc/8 (read)OS_nTasks/9 (read)OS_actiTaskFunc/10 (read)
  Referring: 
  Availability: available
  Function flags: count:118111599 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(41339060 (estimated locally),0.35 per call) 
   Indirect call(286689067 (estimated locally),2.43 per call) 
   Indirect call(286689065 (estimated locally),2.43 per call) 
   Indirect call(286689064 (estimated locally),2.43 per call) 

;; Function OS_RestartApplication (OS_RestartApplication, funcdef_no=0, decl_uid=6240, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_RestartApplication/0
__attribute__((target ("general-regs-only")))
OS_RestartApplication (const struct os_appcontext_t * app)
{
  const struct os_schedule_t * schedule;
  const struct os_alarm_t * alarm;
  const struct os_task_t * task;
  os_scheduleid_t scheduleid;
  os_alarmid_t alarmid;
  os_taskid_t taskid;
  struct os_appdynamic_t * _1;
  const struct os_appcontext_t * _2;
  os_result_t (*<T562>) (os_alarmid_t, os_uint8_t) OS_killAlarmFunc.0_3;
  short unsigned int OS_nAlarms.2_4;
  const struct os_appcontext_t * _5;
  os_result_t (*<T57f>) (os_scheduleid_t, os_schedulestatus_t) OS_killScheduleFunc.3_6;
  unsigned char OS_nSchedules.5_7;
  const struct os_appcontext_t * _8;
  os_result_t (*<T69c>) (const struct os_task_t *, os_taskstate_t) OS_killTaskFunc.6_9;
  unsigned char OS_nTasks.8_10;
  unsigned char _11;
  unsigned char OS_nTasks.8_12;
  void (*<T62f>) (const struct os_task_t *) OS_actiTaskFunc.10_13;
  unsigned int _14;
  unsigned int _15;
  const struct os_task_t * _16;

  <bb 2> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = app_31(D)->dynamic;
  _1->appstate = 1;
  # DEBUG BEGIN_STMT
  alarm_33 = OS_alarmTableBase;
  # DEBUG alarm => alarm_33
  # DEBUG BEGIN_STMT
  # DEBUG alarmid => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630214]:
  # DEBUG BEGIN_STMT
  _2 = alarm_21->app;
  if (_2 == app_31(D))
    goto <bb 4>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 4> [local count: 286689064]:
  # DEBUG BEGIN_STMT
  OS_killAlarmFunc.0_3 = OS_killAlarmFunc;
  OS_killAlarmFunc.0_3 (alarmid_18, 0);

  <bb 5> [local count: 955630214]:
  # DEBUG BEGIN_STMT
  alarm_44 = alarm_21 + 28;
  # DEBUG alarm => alarm_44
  # DEBUG BEGIN_STMT
  alarmid_45 = alarmid_18 + 1;
  # DEBUG alarmid => alarmid_45

  <bb 6> [local count: 1073741815]:
  # alarmid_18 = PHI <0(2), alarmid_45(5)>
  # alarm_21 = PHI <alarm_33(2), alarm_44(5)>
  # DEBUG alarm => alarm_21
  # DEBUG alarmid => alarmid_18
  # DEBUG BEGIN_STMT
  OS_nAlarms.2_4 = OS_nAlarms;
  if (OS_nAlarms.2_4 > alarmid_18)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  schedule_34 = OS_scheduleTableBase;
  # DEBUG schedule => schedule_34
  # DEBUG BEGIN_STMT
  # DEBUG scheduleid => 0
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 955630217]:
  # DEBUG BEGIN_STMT
  _5 = schedule_22->app;
  if (_5 == app_31(D))
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 286689065]:
  # DEBUG BEGIN_STMT
  OS_killScheduleFunc.3_6 = OS_killScheduleFunc;
  OS_killScheduleFunc.3_6 (scheduleid_19, 0);

  <bb 10> [local count: 955630217]:
  # DEBUG BEGIN_STMT
  schedule_41 = schedule_22 + 36;
  # DEBUG schedule => schedule_41
  # DEBUG BEGIN_STMT
  scheduleid_42 = scheduleid_19 + 1;
  # DEBUG scheduleid => scheduleid_42

  <bb 11> [local count: 1073741818]:
  # scheduleid_19 = PHI <0(7), scheduleid_42(10)>
  # schedule_22 = PHI <schedule_34(7), schedule_41(10)>
  # DEBUG schedule => schedule_22
  # DEBUG scheduleid => scheduleid_19
  # DEBUG BEGIN_STMT
  OS_nSchedules.5_7 = OS_nSchedules;
  if (OS_nSchedules.5_7 > scheduleid_19)
    goto <bb 8>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  task_35 = OS_taskTableBase;
  # DEBUG task => task_35
  # DEBUG BEGIN_STMT
  # DEBUG taskid => 0
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _8 = task_20->app;
  if (_8 == app_31(D))
    goto <bb 14>; [30.00%]
  else
    goto <bb 15>; [70.00%]

  <bb 14> [local count: 286689067]:
  # DEBUG BEGIN_STMT
  OS_killTaskFunc.6_9 = OS_killTaskFunc;
  OS_killTaskFunc.6_9 (task_20, 0);

  <bb 15> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  task_38 = task_20 + 76;
  # DEBUG task => task_38
  # DEBUG BEGIN_STMT
  taskid_39 = taskid_17 + 1;
  # DEBUG taskid => taskid_39

  <bb 16> [local count: 1073741824]:
  # taskid_17 = PHI <0(12), taskid_39(15)>
  # task_20 = PHI <task_35(12), task_38(15)>
  # DEBUG task => task_20
  # DEBUG taskid => taskid_17
  # DEBUG BEGIN_STMT
  OS_nTasks.8_10 = OS_nTasks;
  if (OS_nTasks.8_10 > taskid_17)
    goto <bb 13>; [89.00%]
  else
    goto <bb 17>; [11.00%]

  <bb 17> [local count: 118111601]:
  # OS_nTasks.8_12 = PHI <OS_nTasks.8_10(16)>
  # DEBUG BEGIN_STMT
  _11 = app_31(D)->restartTask;
  if (_11 < OS_nTasks.8_12)
    goto <bb 18>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 18> [local count: 59055800]:
  OS_actiTaskFunc.10_13 = OS_actiTaskFunc;
  if (OS_actiTaskFunc.10_13 != 0B)
    goto <bb 19>; [70.00%]
  else
    goto <bb 20>; [30.00%]

  <bb 19> [local count: 41339060]:
  # DEBUG BEGIN_STMT
  _14 = (unsigned int) _11;
  _15 = _14 * 76;
  _16 = task_35 + _15;
  OS_actiTaskFunc.10_13 (_16);

  <bb 20> [local count: 118111601]:
  return;

}

