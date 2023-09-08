
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalSetScheduleTableAsync/9:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernSetScheduleTableAsync/0:

 Propagating constants:

Not considering OS_KernSetScheduleTableAsync for cloning; -fipa-cp-clone disabled.

overall_size: 108, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernSetScheduleTableAsync/0:
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

OS_LocalSetScheduleTableAsync/9 (OS_LocalSetScheduleTableAsync) @06d6a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSetScheduleTableAsync/0 (130657678 (estimated locally),0.12 per call) 
  Calls: 
OS_scheduleTableBase/8 (OS_scheduleTableBase) @06d9d558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/7 (OS_isrTableBase) @06d9d510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/6 (OS_nSchedules) @06d9d480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d9d3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_SetScheduleTableAsync/4 (OS_svc_SetScheduleTableAsync) @06d9d3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (addr)OS_KernSetScheduleTableAsync/0 (addr)OS_KernSetScheduleTableAsync/0 (addr)OS_KernSetScheduleTableAsync/0 (addr)OS_KernSetScheduleTableAsync/0 (addr)OS_KernSetScheduleTableAsync/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d6a7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSetScheduleTableAsync/0 (43117034 (estimated locally),0.04 per call) OS_KernSetScheduleTableAsync/0 (130657678 (estimated locally),0.12 per call) OS_KernSetScheduleTableAsync/0 (78496550 (estimated locally),0.07 per call) OS_KernSetScheduleTableAsync/0 (167370044 (estimated locally),0.16 per call) OS_KernSetScheduleTableAsync/0 (212225071 (estimated locally),0.20 per call) OS_KernSetScheduleTableAsync/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d9d318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d9d2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)OS_KernSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernSetScheduleTableAsync/0 (OS_KernSetScheduleTableAsync) @06d6a380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_SetScheduleTableAsync/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_SetScheduleTableAsync/4 (addr)OS_nSchedules/6 (read)OS_svc_SetScheduleTableAsync/4 (addr)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_scheduleTableBase/8 (read)OS_svc_SetScheduleTableAsync/4 (addr)OS_svc_SetScheduleTableAsync/4 (addr)OS_svc_SetScheduleTableAsync/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (43117034 (estimated locally),0.04 per call) OS_LocalSetScheduleTableAsync/9 (130657678 (estimated locally),0.12 per call) OS_Error/3 (130657678 (estimated locally),0.12 per call) OS_Error/3 (78496550 (estimated locally),0.07 per call) OS_Error/3 (167370044 (estimated locally),0.16 per call) OS_Error/3 (212225071 (estimated locally),0.20 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernSetScheduleTableAsync (OS_KernSetScheduleTableAsync, funcdef_no=0, decl_uid=7311, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernSetScheduleTableAsync/0
__attribute__((target ("general-regs-only")))
OS_KernSetScheduleTableAsync (os_scheduleid_t s)
{
  os_errorresult_t e;
  const struct os_schedule_t * const ss;
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
  unsigned char OS_nSchedules.6_22;
  const struct os_task_t * _23;
  const struct os_isr_t * OS_isrTableBase.9_24;
  short unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  const struct os_isr_t * _28;
  const struct os_schedule_t * OS_scheduleTableBase.11_29;
  unsigned int _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  unsigned char _34;
  _Bool iftmp.0_36;
  int iftmp.1_37;
  const struct os_appcontext_t * iftmp.7_38;
  short unsigned int _40;
  _Bool iftmp.0_44;
  unsigned char _45;
  _Bool iftmp.0_46;
  const struct os_appcontext_t * iftmp.10_49;
  const struct os_appcontext_t * iftmp.8_50;
  const struct os_appcontext_t * iftmp.7_51;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) s_41(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_3 = OS_permittedContext;
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 26B];
  _40 = _4 & 1024;
  if (_40 != 0)
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
  # iftmp.1_37 = PHI <1(4), 0(5)>
  _12 = iftmp.1_37 ^ 1;
  iftmp.0_46 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 26B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_44 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_36 = PHI <iftmp.0_46(6), iftmp.0_44(7)>
  if (iftmp.0_36 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_64 = OS_Error (&OS_svc_SetScheduleTableAsync, 12, &p);
  # DEBUG r => r_64
  goto <bb 32>; [100.00%]

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
  r_48 = OS_Error (&OS_svc_SetScheduleTableAsync, 55, &p);
  # DEBUG r => r_48
  goto <bb 32>; [100.00%]

  <bb 15> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nSchedules.6_22 = OS_nSchedules;
  if (OS_nSchedules.6_22 <= s_41(D))
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 167370044]:
  # DEBUG BEGIN_STMT
  r_62 = OS_Error (&OS_svc_SetScheduleTableAsync, 40, &p);
  # DEBUG r => r_62
  goto <bb 32>; [100.00%]

  <bb 17> [local count: 339811907]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 115536048]:
  _23 = OS_kernelData.taskCurrent;
  iftmp.7_51 = _23->app;
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
  iftmp.8_50 = _28->app;
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
  iftmp.10_49 = OS_kernelData.hookApp;

  <bb 25> [local count: 339811907]:
  # iftmp.7_38 = PHI <iftmp.7_51(18), 0B(23), iftmp.8_50(20), iftmp.10_49(24)>
  # DEBUG app => iftmp.7_38
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.11_29 = OS_scheduleTableBase;
  _30 = _1 * 36;
  ss_52 = OS_scheduleTableBase.11_29 + _30;
  # DEBUG ss => ss_52
  # DEBUG BEGIN_STMT
  if (iftmp.7_38 != 0B)
    goto <bb 26>; [70.00%]
  else
    goto <bb 28>; [30.00%]

  <bb 26> [local count: 237868335]:
  _31 = iftmp.7_38->permissionBit;
  _32 = ss_52->permissions;
  _33 = _31 & _32;
  if (_33 == 0)
    goto <bb 27>; [33.00%]
  else
    goto <bb 28>; [67.00%]

  <bb 27> [local count: 78496550]:
  # DEBUG BEGIN_STMT
  r_54 = OS_Error (&OS_svc_SetScheduleTableAsync, 37, &p);
  # DEBUG r => r_54
  goto <bb 32>; [100.00%]

  <bb 28> [local count: 261315356]:
  # DEBUG BEGIN_STMT
  _34 = ss_52->flags;
  _45 = _34 & 2;
  if (_45 == 0)
    goto <bb 29>; [50.00%]
  else
    goto <bb 30>; [50.00%]

  <bb 29> [local count: 130657678]:
  # DEBUG BEGIN_STMT
  r_60 = OS_Error (&OS_svc_SetScheduleTableAsync, 51, &p);
  # DEBUG r => r_60
  goto <bb 32>; [100.00%]

  <bb 30> [local count: 130657678]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  e_56 = OS_LocalSetScheduleTableAsync (s_41(D));
  # DEBUG e => e_56
  # DEBUG BEGIN_STMT
  if (e_56 != 0)
    goto <bb 31>; [33.00%]
  else
    goto <bb 32>; [67.00%]

  <bb 31> [local count: 43117034]:
  # DEBUG BEGIN_STMT
  r_58 = OS_Error (&OS_svc_SetScheduleTableAsync, e_56, &p);
  # DEBUG r => r_58

  <bb 32> [local count: 1073741824]:
  # r_35 = PHI <r_64(9), r_48(14), r_62(16), r_54(27), r_60(29), 0(30), r_58(31)>
  # DEBUG r => r_35
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_35;

}


