
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalCancelAlarm/9:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernCancelAlarm/0:

 Propagating constants:

Not considering OS_KernCancelAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 100, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernCancelAlarm/0:
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

OS_LocalCancelAlarm/9 (OS_LocalCancelAlarm) @06d457e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCancelAlarm/0 (247219618 (estimated locally),0.23 per call) 
  Calls: 
OS_alarmTableBase/8 (OS_alarmTableBase) @06d755a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/7 (OS_isrTableBase) @06d75558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/6 (OS_nAlarms) @06d754c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d75438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_CancelAlarm/4 (OS_svc_CancelAlarm) @06d753f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (addr)OS_KernCancelAlarm/0 (addr)OS_KernCancelAlarm/0 (addr)OS_KernCancelAlarm/0 (addr)OS_KernCancelAlarm/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d45700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCancelAlarm/0 (81582474 (estimated locally),0.08 per call) OS_KernCancelAlarm/0 (92592288 (estimated locally),0.09 per call) OS_KernCancelAlarm/0 (167370044 (estimated locally),0.16 per call) OS_KernCancelAlarm/0 (212225071 (estimated locally),0.20 per call) OS_KernCancelAlarm/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d75360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d75318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)OS_KernCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernCancelAlarm/0 (OS_KernCancelAlarm) @06d452a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_CancelAlarm/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_CancelAlarm/4 (addr)OS_nAlarms/6 (read)OS_svc_CancelAlarm/4 (addr)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_alarmTableBase/8 (read)OS_svc_CancelAlarm/4 (addr)OS_svc_CancelAlarm/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (81582474 (estimated locally),0.08 per call) OS_LocalCancelAlarm/9 (247219618 (estimated locally),0.23 per call) OS_Error/3 (92592288 (estimated locally),0.09 per call) OS_Error/3 (167370044 (estimated locally),0.16 per call) OS_Error/3 (212225071 (estimated locally),0.20 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernCancelAlarm (OS_KernCancelAlarm, funcdef_no=0, decl_uid=7272, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernCancelAlarm/0
__attribute__((target ("general-regs-only")))
OS_KernCancelAlarm (os_alarmid_t a)
{
  os_errorresult_t e;
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
  _Bool iftmp.0_35;
  int iftmp.1_36;
  const struct os_appcontext_t * iftmp.7_37;
  short unsigned int _39;
  _Bool iftmp.0_43;
  _Bool iftmp.0_44;
  const struct os_appcontext_t * iftmp.10_47;
  const struct os_appcontext_t * iftmp.8_48;
  const struct os_appcontext_t * iftmp.7_49;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) a_40(D);
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
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 80B];
  _39 = _4 & 1024;
  if (_39 != 0)
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
  # iftmp.1_36 = PHI <1(4), 0(5)>
  _12 = iftmp.1_36 ^ 1;
  iftmp.0_44 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 80B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_43 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_35 = PHI <iftmp.0_44(6), iftmp.0_43(7)>
  if (iftmp.0_35 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_60 = OS_Error (&OS_svc_CancelAlarm, 12, &p);
  # DEBUG r => r_60
  goto <bb 30>; [100.00%]

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
  r_46 = OS_Error (&OS_svc_CancelAlarm, 55, &p);
  # DEBUG r => r_46
  goto <bb 30>; [100.00%]

  <bb 15> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nAlarms.6_22 = OS_nAlarms;
  if (OS_nAlarms.6_22 <= a_40(D))
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 167370044]:
  # DEBUG BEGIN_STMT
  r_58 = OS_Error (&OS_svc_CancelAlarm, 9, &p);
  # DEBUG r => r_58
  goto <bb 30>; [100.00%]

  <bb 17> [local count: 339811907]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 115536048]:
  _23 = OS_kernelData.taskCurrent;
  iftmp.7_49 = _23->app;
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
  iftmp.8_48 = _28->app;
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
  iftmp.10_47 = OS_kernelData.hookApp;

  <bb 25> [local count: 339811907]:
  # iftmp.7_37 = PHI <iftmp.7_49(18), 0B(23), iftmp.8_48(20), iftmp.10_47(24)>
  # DEBUG app => iftmp.7_37
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.11_29 = OS_alarmTableBase;
  _30 = _1 * 28;
  as_50 = OS_alarmTableBase.11_29 + _30;
  # DEBUG as => as_50
  # DEBUG BEGIN_STMT
  if (iftmp.7_37 != 0B)
    goto <bb 26>; [82.57%]
  else
    goto <bb 28>; [17.43%]

  <bb 26> [local count: 280582691]:
  _31 = iftmp.7_37->permissionBit;
  _32 = as_50->permissions;
  _33 = _31 & _32;
  if (_33 == 0)
    goto <bb 27>; [33.00%]
  else
    goto <bb 28>; [67.00%]

  <bb 27> [local count: 92592288]:
  # DEBUG BEGIN_STMT
  r_52 = OS_Error (&OS_svc_CancelAlarm, 37, &p);
  # DEBUG r => r_52
  goto <bb 30>; [100.00%]

  <bb 28> [local count: 247219618]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  e_54 = OS_LocalCancelAlarm (a_40(D), as_50);
  # DEBUG e => e_54
  # DEBUG BEGIN_STMT
  if (e_54 != 0)
    goto <bb 29>; [33.00%]
  else
    goto <bb 30>; [67.00%]

  <bb 29> [local count: 81582474]:
  # DEBUG BEGIN_STMT
  r_56 = OS_Error (&OS_svc_CancelAlarm, e_54, &p);
  # DEBUG r => r_56

  <bb 30> [local count: 1073741824]:
  # r_34 = PHI <r_60(9), r_46(14), r_58(16), r_52(27), 0(28), r_56(29)>
  # DEBUG r => r_34
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_34;

}


