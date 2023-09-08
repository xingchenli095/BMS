
IPA constant propagation start:
Determining dynamic type for call: OS_killTaskFunc.9_18 (task_25, 1);
  Starting walk at: OS_killTaskFunc.9_18 (task_25, 1);
  instance pointer: task_25  Outer instance pointer: task_25 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntDisableIsr (_5);
  Function call may change dynamic type:OS_killAlarmFunc.3_12 (alarmid_23, 2);
  Function call may change dynamic type:OS_killScheduleFunc.6_15 (scheduleid_24, 4);
  Function call may change dynamic type:OS_killTaskFunc.9_18 (task_25, 1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntDisableIsr/2:
  Jump functions of caller  OS_QuarantineApplication/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killTaskFunc.9_18 (task_25, 1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killScheduleFunc.6_15 (scheduleid_24, 4);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killAlarmFunc.3_12 (alarmid_23, 2);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR

 Propagating constants:

Not considering OS_QuarantineApplication for cloning; -fipa-cp-clone disabled.

overall_size: 67, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_QuarantineApplication/0:
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

OS_nTasks/12 (OS_nTasks) @06d0f0d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killTaskFunc/11 (OS_killTaskFunc) @06d0f000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/10 (OS_taskTableBase) @06c3ef78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/9 (OS_nSchedules) @06c3ef30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killScheduleFunc/8 (OS_killScheduleFunc) @06c3ee58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/7 (OS_scheduleTableBase) @06c3ee10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/6 (OS_nAlarms) @06c3edc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killAlarmFunc/5 (OS_killAlarmFunc) @06c3ecf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/4 (OS_alarmTableBase) @06c3eca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/3 (OS_nInterrupts) @06c3ec60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntDisableIsr/2 (OS_CORTEXM_IntDisableIsr) @06bb3c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_QuarantineApplication/0 (166566345 (estimated locally),1.41 per call) 
  Calls: 
OS_isrTableBase/1 (OS_isrTableBase) @06c3ebd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_QuarantineApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_QuarantineApplication/0 (OS_QuarantineApplication) @06bb3a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/1 (read)OS_nInterrupts/3 (read)OS_alarmTableBase/4 (read)OS_killAlarmFunc/5 (read)OS_nAlarms/6 (read)OS_scheduleTableBase/7 (read)OS_killScheduleFunc/8 (read)OS_nSchedules/9 (read)OS_taskTableBase/10 (read)OS_killTaskFunc/11 (read)OS_nTasks/12 (read)
  Referring: 
  Availability: available
  Function flags: count:118111598 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntDisableIsr/2 (166566345 (estimated locally),1.41 per call) 
   Indirect call(286689067 (estimated locally),2.43 per call) 
   Indirect call(286689066 (estimated locally),2.43 per call) 
   Indirect call(286689063 (estimated locally),2.43 per call) 

;; Function OS_QuarantineApplication (OS_QuarantineApplication, funcdef_no=0, decl_uid=6238, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_QuarantineApplication/0
__attribute__((target ("general-regs-only")))
OS_QuarantineApplication (const struct os_appcontext_t * app)
{
  const struct os_schedule_t * schedule;
  const struct os_alarm_t * alarm;
  const struct os_task_t * task;
  const struct os_isr_t * isr;
  os_scheduleid_t scheduleid;
  os_alarmid_t alarmid;
  os_isrid_t isrid;
  os_taskid_t taskid;
  const struct os_isr_t * OS_isrTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_appcontext_t * _4;
  const struct os_archisr_t * _5;
  struct os_isrdynamic_t * _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  short unsigned int OS_nInterrupts.2_10;
  const struct os_appcontext_t * _11;
  os_result_t (*<T562>) (os_alarmid_t, os_uint8_t) OS_killAlarmFunc.3_12;
  short unsigned int OS_nAlarms.5_13;
  const struct os_appcontext_t * _14;
  os_result_t (*<T57f>) (os_scheduleid_t, os_schedulestatus_t) OS_killScheduleFunc.6_15;
  unsigned char OS_nSchedules.8_16;
  const struct os_appcontext_t * _17;
  os_result_t (*<T69c>) (const struct os_task_t *, os_taskstate_t) OS_killTaskFunc.9_18;
  unsigned char OS_nTasks.11_19;
  struct os_appdynamic_t * _20;

  <bb 2> [local count: 118111598]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG isrid => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630209]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_1 = OS_isrTableBase;
  _2 = (unsigned int) isrid_22;
  _3 = _2 * 68;
  isr_51 = OS_isrTableBase.0_1 + _3;
  # DEBUG isr => isr_51
  # DEBUG BEGIN_STMT
  _4 = isr_51->app;
  if (_4 == app_40(D))
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 166566345]:
  # DEBUG BEGIN_STMT
  _5 = &isr_51->arch;
  OS_CORTEXM_IntDisableIsr (_5);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = isr_51->dynamic;
  _7 = _6->statusflags;
  _8 = _7 | 64;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = _8 | 32;
  _6->statusflags = _9;

  <bb 5> [local count: 955630209]:
  # DEBUG BEGIN_STMT
  isrid_54 = isrid_22 + 1;
  # DEBUG isrid => isrid_54

  <bb 6> [local count: 1073741809]:
  # isrid_22 = PHI <0(2), isrid_54(5)>
  # DEBUG isrid => isrid_22
  # DEBUG BEGIN_STMT
  OS_nInterrupts.2_10 = OS_nInterrupts;
  if (OS_nInterrupts.2_10 > isrid_22)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  alarm_37 = OS_alarmTableBase;
  # DEBUG alarm => alarm_37
  # DEBUG BEGIN_STMT
  # DEBUG alarmid => 0
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 955630212]:
  # DEBUG BEGIN_STMT
  _11 = alarm_26->app;
  if (_11 == app_40(D))
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 286689063]:
  # DEBUG BEGIN_STMT
  OS_killAlarmFunc.3_12 = OS_killAlarmFunc;
  OS_killAlarmFunc.3_12 (alarmid_23, 2);

  <bb 10> [local count: 955630212]:
  # DEBUG BEGIN_STMT
  alarm_49 = alarm_26 + 28;
  # DEBUG alarm => alarm_49
  # DEBUG BEGIN_STMT
  alarmid_50 = alarmid_23 + 1;
  # DEBUG alarmid => alarmid_50

  <bb 11> [local count: 1073741812]:
  # alarmid_23 = PHI <0(7), alarmid_50(10)>
  # alarm_26 = PHI <alarm_37(7), alarm_49(10)>
  # DEBUG alarm => alarm_26
  # DEBUG alarmid => alarmid_23
  # DEBUG BEGIN_STMT
  OS_nAlarms.5_13 = OS_nAlarms;
  if (OS_nAlarms.5_13 > alarmid_23)
    goto <bb 8>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  schedule_38 = OS_scheduleTableBase;
  # DEBUG schedule => schedule_38
  # DEBUG BEGIN_STMT
  # DEBUG scheduleid => 0
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  _14 = schedule_27->app;
  if (_14 == app_40(D))
    goto <bb 14>; [30.00%]
  else
    goto <bb 15>; [70.00%]

  <bb 14> [local count: 286689066]:
  # DEBUG BEGIN_STMT
  OS_killScheduleFunc.6_15 = OS_killScheduleFunc;
  OS_killScheduleFunc.6_15 (scheduleid_24, 4);

  <bb 15> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  schedule_46 = schedule_27 + 36;
  # DEBUG schedule => schedule_46
  # DEBUG BEGIN_STMT
  scheduleid_47 = scheduleid_24 + 1;
  # DEBUG scheduleid => scheduleid_47

  <bb 16> [local count: 1073741819]:
  # scheduleid_24 = PHI <0(12), scheduleid_47(15)>
  # schedule_27 = PHI <schedule_38(12), schedule_46(15)>
  # DEBUG schedule => schedule_27
  # DEBUG scheduleid => scheduleid_24
  # DEBUG BEGIN_STMT
  OS_nSchedules.8_16 = OS_nSchedules;
  if (OS_nSchedules.8_16 > scheduleid_24)
    goto <bb 13>; [89.00%]
  else
    goto <bb 17>; [11.00%]

  <bb 17> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  task_39 = OS_taskTableBase;
  # DEBUG task => task_39
  # DEBUG BEGIN_STMT
  # DEBUG taskid => 0
  goto <bb 21>; [100.00%]

  <bb 18> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _17 = task_25->app;
  if (_17 == app_40(D))
    goto <bb 19>; [30.00%]
  else
    goto <bb 20>; [70.00%]

  <bb 19> [local count: 286689067]:
  # DEBUG BEGIN_STMT
  OS_killTaskFunc.9_18 = OS_killTaskFunc;
  OS_killTaskFunc.9_18 (task_25, 1);

  <bb 20> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  task_43 = task_25 + 76;
  # DEBUG task => task_43
  # DEBUG BEGIN_STMT
  taskid_44 = taskid_21 + 1;
  # DEBUG taskid => taskid_44

  <bb 21> [local count: 1073741824]:
  # taskid_21 = PHI <0(17), taskid_44(20)>
  # task_25 = PHI <task_39(17), task_43(20)>
  # DEBUG task => task_25
  # DEBUG taskid => taskid_21
  # DEBUG BEGIN_STMT
  OS_nTasks.11_19 = OS_nTasks;
  if (OS_nTasks.11_19 > taskid_21)
    goto <bb 18>; [89.00%]
  else
    goto <bb 22>; [11.00%]

  <bb 22> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _20 = app_40(D)->dynamic;
  _20->appstate = 0;
  return;

}


