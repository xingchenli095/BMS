
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalSyncScheduleTable/9:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernSyncScheduleTable/0:

 Propagating constants:

Not considering OS_KernSyncScheduleTable for cloning; -fipa-cp-clone disabled.

overall_size: 120, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernSyncScheduleTable/0:
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

OS_LocalSyncScheduleTable/9 (OS_LocalSyncScheduleTable) @06d22a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSyncScheduleTable/0 (117304463 (estimated locally),0.11 per call) 
  Calls: 
OS_isrTableBase/8 (OS_isrTableBase) @06d54678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/7 (OS_scheduleTableBase) @06d54630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/6 (OS_nSchedules) @06d545a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d54510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_SyncScheduleTable/4 (OS_svc_SyncScheduleTable) @06d544c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (addr)OS_KernSyncScheduleTable/0 (addr)OS_KernSyncScheduleTable/0 (addr)OS_KernSyncScheduleTable/0 (addr)OS_KernSyncScheduleTable/0 (addr)OS_KernSyncScheduleTable/0 (addr)OS_KernSyncScheduleTable/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d229a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernSyncScheduleTable/0 (38710473 (estimated locally),0.04 per call) OS_KernSyncScheduleTable/0 (57776825 (estimated locally),0.05 per call) OS_KernSyncScheduleTable/0 (52592689 (estimated locally),0.05 per call) OS_KernSyncScheduleTable/0 (112137929 (estimated locally),0.10 per call) OS_KernSyncScheduleTable/0 (167370044 (estimated locally),0.16 per call) OS_KernSyncScheduleTable/0 (212225071 (estimated locally),0.20 per call) OS_KernSyncScheduleTable/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d54438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d543f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)OS_KernSyncScheduleTable/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernSyncScheduleTable/0 (OS_KernSyncScheduleTable) @06d22540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_SyncScheduleTable/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_SyncScheduleTable/4 (addr)OS_nSchedules/6 (read)OS_svc_SyncScheduleTable/4 (addr)OS_scheduleTableBase/7 (read)OS_kernelData/1 (read)OS_isrTableBase/8 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_SyncScheduleTable/4 (addr)OS_svc_SyncScheduleTable/4 (addr)OS_svc_SyncScheduleTable/4 (addr)OS_svc_SyncScheduleTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (38710473 (estimated locally),0.04 per call) OS_LocalSyncScheduleTable/9 (117304463 (estimated locally),0.11 per call) OS_Error/3 (57776825 (estimated locally),0.05 per call) OS_Error/3 (52592689 (estimated locally),0.05 per call) OS_Error/3 (112137929 (estimated locally),0.10 per call) OS_Error/3 (167370044 (estimated locally),0.16 per call) OS_Error/3 (212225071 (estimated locally),0.20 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernSyncScheduleTable (OS_KernSyncScheduleTable, funcdef_no=0, decl_uid=7306, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernSyncScheduleTable/0
__attribute__((target ("general-regs-only")))
OS_KernSyncScheduleTable (os_scheduleid_t s, os_tick_t globalTime)
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
  const struct os_schedule_t * OS_scheduleTableBase.7_23;
  unsigned int _24;
  const struct os_task_t * _25;
  const struct os_isr_t * OS_isrTableBase.10_26;
  short unsigned int _27;
  unsigned int _28;
  unsigned int _29;
  const struct os_isr_t * _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  unsigned char _35;
  _Bool iftmp.0_38;
  int iftmp.1_39;
  const struct os_appcontext_t * iftmp.8_40;
  short unsigned int _42;
  _Bool iftmp.0_48;
  unsigned char _49;
  _Bool iftmp.0_50;
  const struct os_appcontext_t * iftmp.11_54;
  const struct os_appcontext_t * iftmp.9_55;
  const struct os_appcontext_t * iftmp.8_56;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) s_43(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  p[1] = globalTime_46(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_3 = OS_permittedContext;
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 24B];
  _42 = _4 & 1024;
  if (_42 != 0)
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
  # iftmp.1_39 = PHI <1(4), 0(5)>
  _12 = iftmp.1_39 ^ 1;
  iftmp.0_50 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 24B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_48 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_38 = PHI <iftmp.0_50(6), iftmp.0_48(7)>
  if (iftmp.0_38 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_70 = OS_Error (&OS_svc_SyncScheduleTable, 12, &p);
  # DEBUG r => r_70
  goto <bb 36>; [100.00%]

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
  r_52 = OS_Error (&OS_svc_SyncScheduleTable, 55, &p);
  # DEBUG r => r_52
  goto <bb 36>; [100.00%]

  <bb 15> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nSchedules.6_22 = OS_nSchedules;
  if (OS_nSchedules.6_22 <= s_43(D))
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 167370044]:
  # DEBUG BEGIN_STMT
  r_68 = OS_Error (&OS_svc_SyncScheduleTable, 40, &p);
  # DEBUG r => r_68
  goto <bb 36>; [100.00%]

  <bb 17> [local count: 339811907]:
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.7_23 = OS_scheduleTableBase;
  _24 = _1 * 36;
  ss_53 = OS_scheduleTableBase.7_23 + _24;
  # DEBUG ss => ss_53
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 115536048]:
  _25 = OS_kernelData.taskCurrent;
  iftmp.8_56 = _25->app;
  goto <bb 25>; [100.00%]

  <bb 19> [local count: 224275858]:
  if (_2 == 3)
    goto <bb 20>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 20> [local count: 76253792]:
  OS_isrTableBase.10_26 = OS_isrTableBase;
  _27 = OS_kernelData.isrCurrent;
  _28 = (unsigned int) _27;
  _29 = _28 * 68;
  _30 = OS_isrTableBase.10_26 + _29;
  iftmp.9_55 = _30->app;
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
  iftmp.11_54 = OS_kernelData.hookApp;

  <bb 25> [local count: 339811907]:
  # iftmp.8_40 = PHI <iftmp.8_56(18), 0B(23), iftmp.9_55(20), iftmp.11_54(24)>
  # DEBUG app => iftmp.8_40
  # DEBUG BEGIN_STMT
  _31 = ss_53->period;
  if (_31 < globalTime_46(D))
    goto <bb 26>; [33.00%]
  else
    goto <bb 27>; [67.00%]

  <bb 26> [local count: 112137929]:
  # DEBUG BEGIN_STMT
  r_66 = OS_Error (&OS_svc_SyncScheduleTable, 19, &p);
  # DEBUG r => r_66
  goto <bb 36>; [100.00%]

  <bb 27> [local count: 227673977]:
  # DEBUG BEGIN_STMT
  if (iftmp.8_40 != 0B)
    goto <bb 28>; [70.00%]
  else
    goto <bb 30>; [30.00%]

  <bb 28> [local count: 159371784]:
  _32 = iftmp.8_40->permissionBit;
  _33 = ss_53->permissions;
  _34 = _32 & _33;
  if (_34 == 0)
    goto <bb 29>; [33.00%]
  else
    goto <bb 30>; [67.00%]

  <bb 29> [local count: 52592689]:
  # DEBUG BEGIN_STMT
  r_58 = OS_Error (&OS_svc_SyncScheduleTable, 37, &p);
  # DEBUG r => r_58
  goto <bb 36>; [100.00%]

  <bb 30> [local count: 175081289]:
  # DEBUG BEGIN_STMT
  _35 = ss_53->flags;
  _49 = _35 & 2;
  if (_49 == 0)
    goto <bb 31>; [33.00%]
  else
    goto <bb 32>; [67.00%]

  <bb 31> [local count: 57776825]:
  # DEBUG BEGIN_STMT
  r_64 = OS_Error (&OS_svc_SyncScheduleTable, 51, &p);
  # DEBUG r => r_64
  goto <bb 36>; [100.00%]

  <bb 32> [local count: 117304463]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (_31 == globalTime_46(D))
    goto <bb 33>; [34.00%]
  else
    goto <bb 34>; [66.00%]

  <bb 33> [local count: 39883518]:
  # DEBUG BEGIN_STMT
  # DEBUG globalTime => 0

  <bb 34> [local count: 117304463]:
  # globalTime_36 = PHI <globalTime_46(D)(32), 0(33)>
  # DEBUG globalTime => globalTime_36
  # DEBUG BEGIN_STMT
  e_60 = OS_LocalSyncScheduleTable (ss_53, globalTime_36);
  # DEBUG e => e_60
  # DEBUG BEGIN_STMT
  if (e_60 != 0)
    goto <bb 35>; [33.00%]
  else
    goto <bb 36>; [67.00%]

  <bb 35> [local count: 38710473]:
  # DEBUG BEGIN_STMT
  r_62 = OS_Error (&OS_svc_SyncScheduleTable, e_60, &p);
  # DEBUG r => r_62

  <bb 36> [local count: 1073741824]:
  # r_37 = PHI <r_70(9), r_52(14), r_68(16), r_66(26), r_58(29), r_64(31), 0(34), r_62(35)>
  # DEBUG r => r_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_37;

}


