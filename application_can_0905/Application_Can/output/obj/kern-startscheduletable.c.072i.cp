
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalStartScheduleTable/12:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_KernStartScheduleTable/0:

 Propagating constants:

Not considering OS_KernStartScheduleTable for cloning; -fipa-cp-clone disabled.

overall_size: 153, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernStartScheduleTable/0:
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

OS_LocalStartScheduleTable/12 (OS_LocalStartScheduleTable) @06d6ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernStartScheduleTable/0 (91097799 (estimated locally),0.08 per call) 
  Calls: 
OS_counterTableBase/11 (OS_counterTableBase) @06d98ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/10 (OS_alarmTableBase) @06d98a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/9 (OS_isrTableBase) @06d98a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/8 (OS_scheduleTableBase) @06d989d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/7 (OS_nSchedules) @06d98900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/6 (OS_iecMode) @06d98870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06d6eb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernStartScheduleTable/0 (30062274 (estimated locally),0.03 per call) OS_KernStartScheduleTable/0 (91097799 (estimated locally),0.08 per call) OS_KernStartScheduleTable/0 (36002723 (estimated locally),0.03 per call) OS_KernStartScheduleTable/0 (65544620 (estimated locally),0.06 per call) OS_KernStartScheduleTable/0 (56068965 (estimated locally),0.05 per call) OS_KernStartScheduleTable/0 (167370044 (estimated locally),0.16 per call) OS_KernStartScheduleTable/0 (212225071 (estimated locally),0.20 per call) OS_KernStartScheduleTable/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/4 (OS_permittedContext) @06d987e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/3 (OS_kernelData) @06d98798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)OS_KernStartScheduleTable/0 (read)
  Availability: not_available
  Varpool flags:
OS_svc_StartScheduleTableAbs/2 (OS_svc_StartScheduleTableAbs) @06d98750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_svc_StartScheduleTableRel/1 (OS_svc_StartScheduleTableRel) @06d98708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernStartScheduleTable/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_KernStartScheduleTable/0 (OS_KernStartScheduleTable) @06d6e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/3 (read)OS_svc_StartScheduleTableRel/1 (addr)OS_svc_StartScheduleTableAbs/2 (addr)OS_permittedContext/4 (read)OS_kernelData/3 (read)OS_permittedContext/4 (read)OS_iecMode/6 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_nSchedules/7 (read)OS_scheduleTableBase/8 (read)OS_kernelData/3 (read)OS_isrTableBase/9 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_alarmTableBase/10 (read)OS_counterTableBase/11 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/5 (30062274 (estimated locally),0.03 per call) OS_LocalStartScheduleTable/12 (91097799 (estimated locally),0.08 per call) OS_Error/5 (91097799 (estimated locally),0.08 per call) OS_Error/5 (36002723 (estimated locally),0.03 per call) OS_Error/5 (65544620 (estimated locally),0.06 per call) OS_Error/5 (56068965 (estimated locally),0.05 per call) OS_Error/5 (167370044 (estimated locally),0.16 per call) OS_Error/5 (212225071 (estimated locally),0.20 per call) OS_Error/5 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernStartScheduleTable (OS_KernStartScheduleTable, funcdef_no=0, decl_uid=7296, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernStartScheduleTable/0
__attribute__((target ("general-regs-only")))
OS_KernStartScheduleTable (os_scheduleid_t s, os_tick_t offset, os_boolean_t rel)
{
  os_errorresult_t e;
  const struct os_counter_t * const cs;
  const struct os_alarm_t * const as;
  const struct os_schedule_t * const ss;
  os_paramtype_t p[3];
  os_result_t r;
  unsigned int _1;
  unsigned char _2;
  const os_callermask_t * OS_permittedContext.4_3;
  unsigned int _4;
  unsigned int _5;
  const os_callermask_t * _6;
  short unsigned int _7;
  unsigned char _8;
  int _9;
  int _10;
  short unsigned int _11;
  short unsigned int _12;
  const os_callermask_t * OS_permittedContext.6_13;
  unsigned int _14;
  unsigned int _15;
  const os_callermask_t * _16;
  short unsigned int _17;
  int _18;
  int _19;
  short unsigned int _20;
  short unsigned int _21;
  unsigned char OS_iecMode.7_22;
  const struct os_task_t * _23;
  struct os_taskdynamic_t * _24;
  short unsigned int _25;
  short unsigned int _26;
  unsigned char OS_nSchedules.8_27;
  const struct os_schedule_t * OS_scheduleTableBase.9_28;
  unsigned int _29;
  const struct os_task_t * _30;
  const struct os_isr_t * OS_isrTableBase.12_31;
  short unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  const struct os_isr_t * _35;
  const struct os_alarm_t * OS_alarmTableBase.14_36;
  short unsigned int _37;
  unsigned int _38;
  unsigned int _39;
  const struct os_counter_t * OS_counterTableBase.15_40;
  unsigned char _41;
  unsigned int _42;
  unsigned int _43;
  unsigned int _44;
  const struct os_scheduleentry_t * _45;
  unsigned int _46;
  unsigned int _47;
  unsigned int _48;
  unsigned int _49;
  unsigned char _50;
  const os_serviceid_t iftmp.0_52;
  const struct os_serviceinfo_t * iftmp.1_53;
  _Bool iftmp.2_54;
  int iftmp.3_55;
  const struct os_appcontext_t * iftmp.10_56;
  const unsigned int iftmp.16_57;
  short unsigned int _60;
  unsigned char _61;
  int _62;
  _Bool iftmp.2_68;
  _Bool iftmp.2_69;
  const struct os_appcontext_t * iftmp.13_75;
  const struct os_appcontext_t * iftmp.11_76;
  const struct os_appcontext_t * iftmp.10_77;
  const unsigned int iftmp.16_80;
  const unsigned int iftmp.16_81;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  if (rel_59(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:

  <bb 4> [local count: 1073741823]:
  # iftmp.0_52 = PHI <7(2), 8(3)>
  # DEBUG varSid => iftmp.0_52
  # DEBUG BEGIN_STMT
  if (rel_59(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870911]:

  <bb 6> [local count: 1073741823]:
  # iftmp.1_53 = PHI <&OS_svc_StartScheduleTableRel(4), &OS_svc_StartScheduleTableAbs(5)>
  # DEBUG varSif => iftmp.1_53
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) s_63(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  p[1] = offset_66(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 == 10)
    goto <bb 7>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 7> [local count: 365072220]:
  OS_permittedContext.4_3 = OS_permittedContext;
  _4 = (unsigned int) iftmp.0_52;
  _5 = _4 * 2;
  _6 = OS_permittedContext.4_3 + _5;
  _7 = *_6;
  _60 = _7 & 1024;
  if (_60 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 182536110]:
  _8 = OS_kernelData.errorStatus.calledFrom;
  _9 = (int) _8;
  _10 = 1 << _9;
  _11 = (short unsigned int) _10;
  _12 = _7 & _11;
  if (_12 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 273804165]:

  <bb 10> [local count: 365072220]:
  # iftmp.3_55 = PHI <1(8), 0(9)>
  _62 = iftmp.3_55 ^ 1;
  iftmp.2_69 = (_Bool) _62;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 708669604]:
  OS_permittedContext.6_13 = OS_permittedContext;
  _14 = (unsigned int) iftmp.0_52;
  _15 = _14 * 2;
  _16 = OS_permittedContext.6_13 + _15;
  _17 = *_16;
  _18 = (int) _2;
  _19 = 1 << _18;
  _20 = (short unsigned int) _19;
  _21 = _17 & _20;
  iftmp.2_68 = _21 == 0;

  <bb 12> [local count: 1073741823]:
  # iftmp.2_54 = PHI <iftmp.2_69(10), iftmp.2_68(11)>
  if (iftmp.2_54 != 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_95 = OS_Error (iftmp.1_53, 12, &p);
  # DEBUG r => r_95
  goto <bb 45>; [100.00%]

  <bb 14> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  OS_iecMode.7_22 = OS_iecMode;
  if (OS_iecMode.7_22 > 1)
    goto <bb 15>; [59.00%]
  else
    goto <bb 19>; [41.00%]

  <bb 15> [local count: 424450142]:
  if (_2 == 1)
    goto <bb 16>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 16> [local count: 144313049]:
  _23 = OS_kernelData.taskCurrent;
  _24 = _23->dynamic;
  _25 = BIT_FIELD_REF <MEM[(void *)_24], 16, 160>;
  if (_25 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 280137094]:
  _26 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_26 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 212225071]:
  # DEBUG BEGIN_STMT
  r_71 = OS_Error (iftmp.1_53, 55, &p);
  # DEBUG r => r_71
  goto <bb 45>; [100.00%]

  <bb 19> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nSchedules.8_27 = OS_nSchedules;
  if (OS_nSchedules.8_27 <= s_63(D))
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 167370044]:
  # DEBUG BEGIN_STMT
  r_93 = OS_Error (iftmp.1_53, 40, &p);
  # DEBUG r => r_93
  goto <bb 45>; [100.00%]

  <bb 21> [local count: 339811907]:
  # DEBUG BEGIN_STMT
  if (rel_59(D) != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 22> [local count: 169905953]:
  if (offset_66(D) == 0)
    goto <bb 23>; [33.00%]
  else
    goto <bb 24>; [67.00%]

  <bb 23> [local count: 56068965]:
  # DEBUG BEGIN_STMT
  r_73 = OS_Error (iftmp.1_53, 19, &p);
  # DEBUG r => r_73
  goto <bb 45>; [100.00%]

  <bb 24> [local count: 283742942]:
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.9_28 = OS_scheduleTableBase;
  _29 = _1 * 36;
  ss_74 = OS_scheduleTableBase.9_28 + _29;
  # DEBUG ss => ss_74
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 25>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 25> [local count: 96472600]:
  _30 = OS_kernelData.taskCurrent;
  iftmp.10_77 = _30->app;
  goto <bb 32>; [100.00%]

  <bb 26> [local count: 187270342]:
  if (_2 == 3)
    goto <bb 27>; [34.00%]
  else
    goto <bb 28>; [66.00%]

  <bb 27> [local count: 63671916]:
  OS_isrTableBase.12_31 = OS_isrTableBase;
  _32 = OS_kernelData.isrCurrent;
  _33 = (unsigned int) _32;
  _34 = _33 * 68;
  _35 = OS_isrTableBase.12_31 + _34;
  iftmp.11_76 = _35->app;
  goto <bb 32>; [100.00%]

  <bb 28> [local count: 123598425]:
  if (_2 == 10)
    goto <bb 31>; [34.00%]
  else
    goto <bb 29>; [66.00%]

  <bb 29> [local count: 81574961]:
  if (_2 == 8)
    goto <bb 31>; [34.00%]
  else
    goto <bb 30>; [66.00%]

  <bb 30> [local count: 53839474]:
  if (_2 == 9)
    goto <bb 31>; [34.00%]
  else
    goto <bb 32>; [66.00%]

  <bb 31> [local count: 88064373]:
  iftmp.13_75 = OS_kernelData.hookApp;

  <bb 32> [local count: 283742942]:
  # iftmp.10_56 = PHI <iftmp.10_77(25), 0B(30), iftmp.11_76(27), iftmp.13_75(31)>
  # DEBUG app => iftmp.10_56
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.14_36 = OS_alarmTableBase;
  _37 = ss_74->alarm;
  _38 = (unsigned int) _37;
  _39 = _38 * 28;
  as_78 = OS_alarmTableBase.14_36 + _39;
  # DEBUG as => as_78
  # DEBUG BEGIN_STMT
  OS_counterTableBase.15_40 = OS_counterTableBase;
  _41 = as_78->counter;
  _42 = (unsigned int) _41;
  _43 = _42 * 32;
  cs_79 = OS_counterTableBase.15_40 + _43;
  # DEBUG cs => cs_79
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (rel_59(D) != 0)
    goto <bb 33>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 33> [local count: 141871471]:
  _44 = cs_79->maxallowedvalue;
  _45 = ss_74->table;
  _46 = _45->offset;
  iftmp.16_81 = _44 - _46;
  goto <bb 35>; [100.00%]

  <bb 34> [local count: 141871471]:
  iftmp.16_80 = cs_79->maxallowedvalue;

  <bb 35> [local count: 283742942]:
  # iftmp.16_57 = PHI <iftmp.16_81(33), iftmp.16_80(34)>
  # DEBUG max => iftmp.16_57
  # DEBUG BEGIN_STMT
  if (iftmp.10_56 != 0B)
    goto <bb 36>; [70.00%]
  else
    goto <bb 38>; [30.00%]

  <bb 36> [local count: 198620059]:
  _47 = iftmp.10_56->permissionBit;
  _48 = ss_74->permissions;
  _49 = _47 & _48;
  if (_49 == 0)
    goto <bb 37>; [33.00%]
  else
    goto <bb 38>; [67.00%]

  <bb 37> [local count: 65544620]:
  # DEBUG BEGIN_STMT
  r_83 = OS_Error (iftmp.1_53, 37, &p);
  # DEBUG r => r_83
  goto <bb 45>; [100.00%]

  <bb 38> [local count: 218198322]:
  # DEBUG BEGIN_STMT
  if (rel_59(D) != 0)
    goto <bb 39>; [50.00%]
  else
    goto <bb 41>; [50.00%]

  <bb 39> [local count: 109099161]:
  _50 = ss_74->flags;
  _61 = _50 & 4;
  if (_61 != 0)
    goto <bb 40>; [33.00%]
  else
    goto <bb 41>; [67.00%]

  <bb 40> [local count: 36002723]:
  # DEBUG BEGIN_STMT
  r_85 = OS_Error (iftmp.1_53, 38, &p);
  # DEBUG r => r_85
  goto <bb 45>; [100.00%]

  <bb 41> [local count: 182195599]:
  # DEBUG BEGIN_STMT
  if (iftmp.16_57 < offset_66(D))
    goto <bb 42>; [50.00%]
  else
    goto <bb 43>; [50.00%]

  <bb 42> [local count: 91097799]:
  # DEBUG BEGIN_STMT
  r_91 = OS_Error (iftmp.1_53, 19, &p);
  # DEBUG r => r_91
  goto <bb 45>; [100.00%]

  <bb 43> [local count: 91097799]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  e_87 = OS_LocalStartScheduleTable (ss_74, _41, offset_66(D), rel_59(D));
  # DEBUG e => e_87
  # DEBUG BEGIN_STMT
  if (e_87 != 0)
    goto <bb 44>; [33.00%]
  else
    goto <bb 45>; [67.00%]

  <bb 44> [local count: 30062274]:
  # DEBUG BEGIN_STMT
  r_89 = OS_Error (iftmp.1_53, e_87, &p);
  # DEBUG r => r_89

  <bb 45> [local count: 1073741824]:
  # r_51 = PHI <r_95(13), r_71(18), r_93(20), r_73(23), r_83(37), r_85(40), r_91(42), 0(43), r_89(44)>
  # DEBUG r => r_51
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_51;

}


