
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalSetAlarm/10:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernSetAbsAlarm/0:

 Propagating constants:

Not considering OS_KernSetAbsAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 125, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernSetAbsAlarm/0:
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

OS_LocalSetAlarm/10 (OS_LocalSetAlarm) @06d41a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSetAbsAlarm/0 (87102941 (estimated locally),0.08 per call) 
  Calls: 
OS_counterTableBase/9 (OS_counterTableBase) @06d7a750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/8 (OS_alarmTableBase) @06d7a6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/7 (OS_isrTableBase) @06d7a678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/6 (OS_nAlarms) @06d7a5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d7a558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_SetAbsAlarm/4 (OS_svc_SetAbsAlarm) @06d7a510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (addr)OS_KernSetAbsAlarm/0 (addr)OS_KernSetAbsAlarm/0 (addr)OS_KernSetAbsAlarm/0 (addr)OS_KernSetAbsAlarm/0 (addr)OS_KernSetAbsAlarm/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d419a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSetAbsAlarm/0 (28743971 (estimated locally),0.03 per call) OS_KernSetAbsAlarm/0 (174212415 (estimated locally),0.16 per call) OS_KernSetAbsAlarm/0 (78496550 (estimated locally),0.07 per call) OS_KernSetAbsAlarm/0 (167370044 (estimated locally),0.16 per call) OS_KernSetAbsAlarm/0 (212225071 (estimated locally),0.20 per call) OS_KernSetAbsAlarm/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d7a480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d7a438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)OS_KernSetAbsAlarm/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernSetAbsAlarm/0 (OS_KernSetAbsAlarm) @06d41540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_SetAbsAlarm/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_SetAbsAlarm/4 (addr)OS_nAlarms/6 (read)OS_svc_SetAbsAlarm/4 (addr)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_alarmTableBase/8 (read)OS_svc_SetAbsAlarm/4 (addr)OS_counterTableBase/9 (read)OS_svc_SetAbsAlarm/4 (addr)OS_svc_SetAbsAlarm/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (28743971 (estimated locally),0.03 per call) OS_LocalSetAlarm/10 (87102941 (estimated locally),0.08 per call) OS_Error/3 (174212415 (estimated locally),0.16 per call) OS_Error/3 (78496550 (estimated locally),0.07 per call) OS_Error/3 (167370044 (estimated locally),0.16 per call) OS_Error/3 (212225071 (estimated locally),0.20 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernSetAbsAlarm (OS_KernSetAbsAlarm, funcdef_no=0, decl_uid=7270, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernSetAbsAlarm/0
__attribute__((target ("general-regs-only")))
OS_KernSetAbsAlarm (os_alarmid_t a, os_tick_t start, os_tick_t cyc)
{
  os_errorresult_t e;
  const struct os_counter_t * const cs;
  const struct os_alarm_t * const as;
  os_paramtype_t p[3];
  os_result_t r;
  unsigned int _1;
  unsigned char _2;
  const os_callermask_t * OS_permittedContext.2_3;
  short unsigned int _4;
  unsigned char _5;
  int _6;
  int _7;
  short unsigned int _8;
  short unsigned int _9;
  const os_callermask_t * OS_permittedContext.4_10;
  short unsigned int _11;
  int _12;
  int _13;
  int _14;
  short unsigned int _15;
  short unsigned int _16;
  unsigned char OS_iecMode.5_17;
  const struct os_task_t * _18;
  struct os_taskdynamic_t * _19;
  short unsigned int _20;
  short unsigned int _21;
  short unsigned int OS_nAlarms.6_22;
  const struct os_task_t * _23;
  const struct os_isr_t * OS_isrTableBase.9_24;
  short unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  const struct os_isr_t * _28;
  const struct os_alarm_t * OS_alarmTableBase.11_29;
  unsigned int _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  const struct os_counter_t * OS_counterTableBase.12_34;
  unsigned char _35;
  unsigned int _36;
  unsigned int _37;
  unsigned int _38;
  unsigned int _39;
  _Bool iftmp.0_41;
  int iftmp.1_42;
  const struct os_appcontext_t * iftmp.7_43;
  short unsigned int _45;
  _Bool iftmp.0_53;
  _Bool iftmp.0_54;
  const struct os_appcontext_t * iftmp.10_57;
  const struct os_appcontext_t * iftmp.8_58;
  const struct os_appcontext_t * iftmp.7_59;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) a_46(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  p[1] = start_49(D);
  # DEBUG BEGIN_STMT
  p[2] = cyc_51(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_3 = OS_permittedContext;
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 78B];
  _45 = _4 & 1024;
  if (_45 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  _5 = OS_kernelData.errorStatus.calledFrom;
  _6 = (int) _5;
  _7 = 1 << _6;
  _8 = (short unsigned int) _7;
  _9 = _4 & _8;
  if (_9 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 273804165]:

  <bb 6> [local count: 365072220]:
  # iftmp.1_42 = PHI <1(4), 0(5)>
  _12 = iftmp.1_42 ^ 1;
  iftmp.0_54 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 78B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_53 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_41 = PHI <iftmp.0_54(6), iftmp.0_53(7)>
  if (iftmp.0_41 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_73 = OS_Error (&OS_svc_SetAbsAlarm, 12, &p);
  # DEBUG r => r_73
  goto <bb 35>; [100.00%]

  <bb 10> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  OS_iecMode.5_17 = OS_iecMode;
  if (OS_iecMode.5_17 > 1)
    goto <bb 11>; [59.00%]
  else
    goto <bb 15>; [41.00%]

  <bb 11> [local count: 424450142]:
  if (_2 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 144313049]:
  _18 = OS_kernelData.taskCurrent;
  _19 = _18->dynamic;
  _20 = BIT_FIELD_REF <MEM[(void *)_19], 16, 160>;
  if (_20 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 280137094]:
  _21 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_21 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 212225071]:
  # DEBUG BEGIN_STMT
  r_56 = OS_Error (&OS_svc_SetAbsAlarm, 55, &p);
  # DEBUG r => r_56
  goto <bb 35>; [100.00%]

  <bb 15> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nAlarms.6_22 = OS_nAlarms;
  if (OS_nAlarms.6_22 <= a_46(D))
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 167370044]:
  # DEBUG BEGIN_STMT
  r_71 = OS_Error (&OS_svc_SetAbsAlarm, 9, &p);
  # DEBUG r => r_71
  goto <bb 35>; [100.00%]

  <bb 17> [local count: 339811907]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 115536048]:
  _23 = OS_kernelData.taskCurrent;
  iftmp.7_59 = _23->app;
  goto <bb 25>; [100.00%]

  <bb 19> [local count: 224275858]:
  if (_2 == 3)
    goto <bb 20>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 20> [local count: 76253792]:
  OS_isrTableBase.9_24 = OS_isrTableBase;
  _25 = OS_kernelData.isrCurrent;
  _26 = (unsigned int) _25;
  _27 = _26 * 68;
  _28 = OS_isrTableBase.9_24 + _27;
  iftmp.8_58 = _28->app;
  goto <bb 25>; [100.00%]

  <bb 21> [local count: 148022066]:
  if (_2 == 10)
    goto <bb 24>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 22> [local count: 97694564]:
  if (_2 == 8)
    goto <bb 24>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 23> [local count: 64478412]:
  if (_2 == 9)
    goto <bb 24>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 24> [local count: 105466314]:
  iftmp.10_57 = OS_kernelData.hookApp;

  <bb 25> [local count: 339811907]:
  # iftmp.7_43 = PHI <iftmp.7_59(18), 0B(23), iftmp.8_58(20), iftmp.10_57(24)>
  # DEBUG app => iftmp.7_43
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.11_29 = OS_alarmTableBase;
  _30 = _1 * 28;
  as_60 = OS_alarmTableBase.11_29 + _30;
  # DEBUG as => as_60
  # DEBUG BEGIN_STMT
  if (iftmp.7_43 != 0B)
    goto <bb 26>; [70.00%]
  else
    goto <bb 28>; [30.00%]

  <bb 26> [local count: 237868335]:
  _31 = iftmp.7_43->permissionBit;
  _32 = as_60->permissions;
  _33 = _31 & _32;
  if (_33 == 0)
    goto <bb 27>; [33.00%]
  else
    goto <bb 28>; [67.00%]

  <bb 27> [local count: 78496550]:
  # DEBUG BEGIN_STMT
  r_62 = OS_Error (&OS_svc_SetAbsAlarm, 37, &p);
  # DEBUG r => r_62
  goto <bb 35>; [100.00%]

  <bb 28> [local count: 261315356]:
  # DEBUG BEGIN_STMT
  OS_counterTableBase.12_34 = OS_counterTableBase;
  _35 = as_60->counter;
  _36 = (unsigned int) _35;
  _37 = _36 * 32;
  cs_63 = OS_counterTableBase.12_34 + _37;
  # DEBUG cs => cs_63
  # DEBUG BEGIN_STMT
  _38 = cs_63->maxallowedvalue;
  if (_38 < start_49(D))
    goto <bb 32>; [33.00%]
  else
    goto <bb 29>; [67.00%]

  <bb 29> [local count: 175081289]:
  if (cyc_51(D) != 0)
    goto <bb 30>; [67.00%]
  else
    goto <bb 33>; [33.00%]

  <bb 30> [local count: 117304463]:
  _39 = cs_63->mincycle;
  if (_39 > cyc_51(D))
    goto <bb 32>; [50.00%]
  else
    goto <bb 31>; [50.00%]

  <bb 31> [local count: 58652232]:
  if (_38 < cyc_51(D))
    goto <bb 32>; [50.00%]
  else
    goto <bb 33>; [50.00%]

  <bb 32> [local count: 174212415]:
  # DEBUG BEGIN_STMT
  r_69 = OS_Error (&OS_svc_SetAbsAlarm, 19, &p);
  # DEBUG r => r_69
  goto <bb 35>; [100.00%]

  <bb 33> [local count: 87102941]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  e_65 = OS_LocalSetAlarm (a_46(D), as_60, cs_63, start_49(D), cyc_51(D), 0);
  # DEBUG e => e_65
  # DEBUG BEGIN_STMT
  if (e_65 != 0)
    goto <bb 34>; [33.00%]
  else
    goto <bb 35>; [67.00%]

  <bb 34> [local count: 28743971]:
  # DEBUG BEGIN_STMT
  r_67 = OS_Error (&OS_svc_SetAbsAlarm, e_65, &p);
  # DEBUG r => r_67

  <bb 35> [local count: 1073741824]:
  # r_40 = PHI <r_73(9), r_56(14), r_71(16), r_62(27), r_69(32), 0(33), r_67(34)>
  # DEBUG r => r_40
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_40;

}


