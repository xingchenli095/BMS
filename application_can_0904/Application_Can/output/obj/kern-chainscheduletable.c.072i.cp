
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalChainScheduleTable/10:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernChainScheduleTable/0:

 Propagating constants:

Not considering OS_KernChainScheduleTable for cloning; -fipa-cp-clone disabled.

overall_size: 125, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernChainScheduleTable/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_LocalChainScheduleTable/10 (OS_LocalChainScheduleTable) @06d329a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernChainScheduleTable/0 (30877009 (estimated locally),0.03 per call) 
  Calls: 
OS_alarmTableBase/9 (OS_alarmTableBase) @06d66678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/8 (OS_scheduleTableBase) @06d665e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/7 (OS_isrTableBase) @06d665a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/6 (OS_nSchedules) @06d66510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d66480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ChainScheduleTable/4 (OS_svc_ChainScheduleTable) @06d66438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (addr)OS_KernChainScheduleTable/0 (addr)OS_KernChainScheduleTable/0 (addr)OS_KernChainScheduleTable/0 (addr)OS_KernChainScheduleTable/0 (addr)OS_KernChainScheduleTable/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d328c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernChainScheduleTable/0 (10189413 (estimated locally),0.01 per call) OS_KernChainScheduleTable/0 (59937723 (estimated locally),0.06 per call) OS_KernChainScheduleTable/0 (79091221 (estimated locally),0.07 per call) OS_KernChainScheduleTable/0 (337275997 (estimated locally),0.31 per call) OS_KernChainScheduleTable/0 (212225071 (estimated locally),0.20 per call) OS_KernChainScheduleTable/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d663a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d66360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)OS_KernChainScheduleTable/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernChainScheduleTable/0 (OS_KernChainScheduleTable) @06d32460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_ChainScheduleTable/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_ChainScheduleTable/4 (addr)OS_nSchedules/6 (read)OS_svc_ChainScheduleTable/4 (addr)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_scheduleTableBase/8 (read)OS_svc_ChainScheduleTable/4 (addr)OS_alarmTableBase/9 (read)OS_svc_ChainScheduleTable/4 (addr)OS_svc_ChainScheduleTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (10189413 (estimated locally),0.01 per call) OS_LocalChainScheduleTable/10 (30877009 (estimated locally),0.03 per call) OS_Error/3 (59937723 (estimated locally),0.06 per call) OS_Error/3 (79091221 (estimated locally),0.07 per call) OS_Error/3 (337275997 (estimated locally),0.31 per call) OS_Error/3 (212225071 (estimated locally),0.20 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernChainScheduleTable (OS_KernChainScheduleTable, funcdef_no=0, decl_uid=7301, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernChainScheduleTable/0
__attribute__((target ("general-regs-only")))
OS_KernChainScheduleTable (os_scheduleid_t sc, os_scheduleid_t sn)
{
  os_errorresult_t e;
  const struct os_schedule_t * const sns;
  const struct os_schedule_t * const scs;
  os_paramtype_t p[3];
  os_result_t r;
  unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  const os_callermask_t * OS_permittedContext.2_4;
  short unsigned int _5;
  unsigned char _6;
  int _7;
  int _8;
  short unsigned int _9;
  short unsigned int _10;
  const os_callermask_t * OS_permittedContext.4_11;
  short unsigned int _12;
  int _13;
  int _14;
  int _15;
  short unsigned int _16;
  short unsigned int _17;
  unsigned char OS_iecMode.5_18;
  const struct os_task_t * _19;
  struct os_taskdynamic_t * _20;
  short unsigned int _21;
  short unsigned int _22;
  unsigned char OS_nSchedules.6_23;
  const struct os_task_t * _24;
  const struct os_isr_t * OS_isrTableBase.10_25;
  short unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  const struct os_isr_t * _29;
  const struct os_schedule_t * OS_scheduleTableBase.12_30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  unsigned int _35;
  unsigned int _36;
  unsigned int _37;
  const struct os_alarm_t * OS_alarmTableBase.14_38;
  short unsigned int _39;
  unsigned int _40;
  unsigned int _41;
  const struct os_alarm_t * _42;
  unsigned char _43;
  short unsigned int _44;
  unsigned int _45;
  unsigned int _46;
  const struct os_alarm_t * _47;
  unsigned char _48;
  _Bool iftmp.0_50;
  int iftmp.1_51;
  const struct os_appcontext_t * iftmp.8_52;
  short unsigned int _54;
  _Bool iftmp.0_60;
  _Bool iftmp.0_61;
  const struct os_appcontext_t * iftmp.11_64;
  const struct os_appcontext_t * iftmp.9_65;
  const struct os_appcontext_t * iftmp.8_66;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) sc_55(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  _2 = (unsigned int) sn_58(D);
  p[1] = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_4 = OS_permittedContext;
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.2_4 + 20B];
  _54 = _5 & 1024;
  if (_54 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  _6 = OS_kernelData.errorStatus.calledFrom;
  _7 = (int) _6;
  _8 = 1 << _7;
  _9 = (short unsigned int) _8;
  _10 = _5 & _9;
  if (_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 273804165]:

  <bb 6> [local count: 365072220]:
  # iftmp.1_51 = PHI <1(4), 0(5)>
  _13 = iftmp.1_51 ^ 1;
  iftmp.0_61 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.4_11 + 20B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.0_60 = _17 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_50 = PHI <iftmp.0_61(6), iftmp.0_60(7)>
  if (iftmp.0_50 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_80 = OS_Error (&OS_svc_ChainScheduleTable, 12, &p);
  # DEBUG r => r_80
  goto <bb 34>; [100.00%]

  <bb 10> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  OS_iecMode.5_18 = OS_iecMode;
  if (OS_iecMode.5_18 > 1)
    goto <bb 11>; [59.00%]
  else
    goto <bb 15>; [41.00%]

  <bb 11> [local count: 424450142]:
  if (_3 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 144313049]:
  _19 = OS_kernelData.taskCurrent;
  _20 = _19->dynamic;
  _21 = BIT_FIELD_REF <MEM[(void *)_20], 16, 160>;
  if (_21 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 280137094]:
  _22 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_22 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 212225071]:
  # DEBUG BEGIN_STMT
  r_63 = OS_Error (&OS_svc_ChainScheduleTable, 55, &p);
  # DEBUG r => r_63
  goto <bb 34>; [100.00%]

  <bb 15> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nSchedules.6_23 = OS_nSchedules;
  if (OS_nSchedules.6_23 <= sc_55(D))
    goto <bb 17>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 16> [local count: 339811907]:
  if (OS_nSchedules.6_23 <= sn_58(D))
    goto <bb 17>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 17> [local count: 337275997]:
  # DEBUG BEGIN_STMT
  r_78 = OS_Error (&OS_svc_ChainScheduleTable, 40, &p);
  # DEBUG r => r_78
  goto <bb 34>; [100.00%]

  <bb 18> [local count: 169905953]:
  # DEBUG BEGIN_STMT
  if (_3 == 1)
    goto <bb 19>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 19> [local count: 57768024]:
  _24 = OS_kernelData.taskCurrent;
  iftmp.8_66 = _24->app;
  goto <bb 26>; [100.00%]

  <bb 20> [local count: 112137929]:
  if (_3 == 3)
    goto <bb 21>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 21> [local count: 38126896]:
  OS_isrTableBase.10_25 = OS_isrTableBase;
  _26 = OS_kernelData.isrCurrent;
  _27 = (unsigned int) _26;
  _28 = _27 * 68;
  _29 = OS_isrTableBase.10_25 + _28;
  iftmp.9_65 = _29->app;
  goto <bb 26>; [100.00%]

  <bb 22> [local count: 74011033]:
  if (_3 == 10)
    goto <bb 25>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 23> [local count: 48847282]:
  if (_3 == 8)
    goto <bb 25>; [34.00%]
  else
    goto <bb 24>; [66.00%]

  <bb 24> [local count: 32239206]:
  if (_3 == 9)
    goto <bb 25>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 25> [local count: 52733157]:
  iftmp.11_64 = OS_kernelData.hookApp;

  <bb 26> [local count: 169905953]:
  # iftmp.8_52 = PHI <iftmp.8_66(19), 0B(24), iftmp.9_65(21), iftmp.11_64(25)>
  # DEBUG app => iftmp.8_52
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.12_30 = OS_scheduleTableBase;
  _31 = _1 * 36;
  scs_67 = OS_scheduleTableBase.12_30 + _31;
  # DEBUG scs => scs_67
  # DEBUG BEGIN_STMT
  _32 = _2 * 36;
  sns_68 = OS_scheduleTableBase.12_30 + _32;
  # DEBUG sns => sns_68
  # DEBUG BEGIN_STMT
  if (iftmp.8_52 != 0B)
    goto <bb 27>; [70.00%]
  else
    goto <bb 30>; [30.00%]

  <bb 27> [local count: 118934167]:
  _33 = iftmp.8_52->permissionBit;
  _34 = scs_67->permissions;
  _35 = _33 & _34;
  if (_35 == 0)
    goto <bb 29>; [33.00%]
  else
    goto <bb 28>; [67.00%]

  <bb 28> [local count: 79685892]:
  _36 = sns_68->permissions;
  _37 = _33 & _36;
  if (_37 == 0)
    goto <bb 29>; [50.00%]
  else
    goto <bb 30>; [50.00%]

  <bb 29> [local count: 79091221]:
  # DEBUG BEGIN_STMT
  r_70 = OS_Error (&OS_svc_ChainScheduleTable, 37, &p);
  # DEBUG r => r_70
  goto <bb 34>; [100.00%]

  <bb 30> [local count: 90814732]:
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.14_38 = OS_alarmTableBase;
  _39 = scs_67->alarm;
  _40 = (unsigned int) _39;
  _41 = _40 * 28;
  _42 = OS_alarmTableBase.14_38 + _41;
  _43 = _42->counter;
  _44 = sns_68->alarm;
  _45 = (unsigned int) _44;
  _46 = _45 * 28;
  _47 = OS_alarmTableBase.14_38 + _46;
  _48 = _47->counter;
  if (_43 != _48)
    goto <bb 31>; [66.00%]
  else
    goto <bb 32>; [34.00%]

  <bb 31> [local count: 59937723]:
  # DEBUG BEGIN_STMT
  r_76 = OS_Error (&OS_svc_ChainScheduleTable, 68, &p);
  # DEBUG r => r_76
  goto <bb 34>; [100.00%]

  <bb 32> [local count: 30877009]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  e_72 = OS_LocalChainScheduleTable (sc_55(D), sn_58(D));
  # DEBUG e => e_72
  # DEBUG BEGIN_STMT
  if (e_72 != 0)
    goto <bb 33>; [33.00%]
  else
    goto <bb 34>; [67.00%]

  <bb 33> [local count: 10189413]:
  # DEBUG BEGIN_STMT
  r_74 = OS_Error (&OS_svc_ChainScheduleTable, e_72, &p);
  # DEBUG r => r_74

  <bb 34> [local count: 1073741824]:
  # r_49 = PHI <r_80(9), r_63(14), r_78(17), r_70(29), r_76(31), 0(32), r_74(33)>
  # DEBUG r => r_49
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_49;

}


