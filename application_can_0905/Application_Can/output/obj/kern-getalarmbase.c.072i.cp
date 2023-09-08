
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AppIsAccessible/9:
  Jump functions of caller  OS_CanWrite/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernGetAlarmBase/0:

 Propagating constants:

Not considering OS_KernGetAlarmBase for cloning; -fipa-cp-clone disabled.

overall_size: 92, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetAlarmBase/0:
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

OS_counterTableBase/10 (OS_counterTableBase) @06d24318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AppIsAccessible/9 (OS_AppIsAccessible) @06cf59a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetAlarmBase/0 (151228349 (estimated locally),0.14 per call) 
  Calls: 
OS_alarmTableBase/8 (OS_alarmTableBase) @06d24240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/7 (OS_nAlarms) @06d241b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CanWrite/6 (OS_CanWrite) @06cf58c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetAlarmBase/0 (451427907 (estimated locally),0.42 per call) 
  Calls: 
OS_iecMode/5 (OS_iecMode) @06d24090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetAlarmBase/4 (OS_svc_GetAlarmBase) @06d24048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (addr)OS_KernGetAlarmBase/0 (addr)OS_KernGetAlarmBase/0 (addr)OS_KernGetAlarmBase/0 (addr)OS_KernGetAlarmBase/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06cf57e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetAlarmBase/0 (49905355 (estimated locally),0.05 per call) OS_KernGetAlarmBase/0 (151228349 (estimated locally),0.14 per call) OS_KernGetAlarmBase/0 (148971209 (estimated locally),0.14 per call) OS_KernGetAlarmBase/0 (267979116 (estimated locally),0.25 per call) OS_KernGetAlarmBase/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06c24f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (read)OS_KernGetAlarmBase/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c24f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetAlarmBase/0 (read)OS_KernGetAlarmBase/0 (read)OS_KernGetAlarmBase/0 (read)OS_KernGetAlarmBase/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernGetAlarmBase/0 (OS_KernGetAlarmBase) @06cf5380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_GetAlarmBase/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_GetAlarmBase/4 (addr)OS_svc_GetAlarmBase/4 (addr)OS_nAlarms/7 (read)OS_svc_GetAlarmBase/4 (addr)OS_alarmTableBase/8 (read)OS_svc_GetAlarmBase/4 (addr)OS_counterTableBase/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (49905355 (estimated locally),0.05 per call) OS_AppIsAccessible/9 (151228349 (estimated locally),0.14 per call) OS_Error/3 (151228349 (estimated locally),0.14 per call) OS_Error/3 (148971209 (estimated locally),0.14 per call) OS_CanWrite/6 (451427907 (estimated locally),0.42 per call) OS_Error/3 (267979116 (estimated locally),0.25 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernGetAlarmBase (OS_KernGetAlarmBase, funcdef_no=0, decl_uid=7278, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernGetAlarmBase/0
__attribute__((target ("general-regs-only")))
OS_KernGetAlarmBase (os_alarmid_t a, struct os_alarmbase_t * out)
{
  os_paramtype_t p[3];
  const struct os_counter_t * c;
  os_result_t r;
  unsigned int _1;
  unsigned int out.0_2;
  unsigned char _3;
  const os_callermask_t * OS_permittedContext.3_4;
  short unsigned int _5;
  unsigned char _6;
  int _7;
  int _8;
  short unsigned int _9;
  short unsigned int _10;
  const os_callermask_t * OS_permittedContext.5_11;
  short unsigned int _12;
  int _13;
  int _14;
  int _15;
  short unsigned int _16;
  short unsigned int _17;
  unsigned char OS_iecMode.6_18;
  const struct os_task_t * _19;
  struct os_taskdynamic_t * _20;
  short unsigned int _21;
  short unsigned int _22;
  int _23;
  short unsigned int OS_nAlarms.7_24;
  const struct os_alarm_t * OS_alarmTableBase.8_25;
  unsigned int _26;
  const struct os_alarm_t * _27;
  const struct os_appcontext_t * _28;
  int _29;
  const struct os_counter_t * OS_counterTableBase.9_30;
  unsigned char _31;
  unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  unsigned int _35;
  unsigned int _36;
  _Bool iftmp.1_38;
  int iftmp.2_39;
  short unsigned int _41;
  _Bool iftmp.1_47;
  _Bool iftmp.1_48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) a_42(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  out.0_2 = (unsigned int) out_45(D);
  p[1] = out.0_2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.3_4 = OS_permittedContext;
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.3_4 + 72B];
  _41 = _5 & 1024;
  if (_41 != 0)
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
  # iftmp.2_39 = PHI <1(4), 0(5)>
  _13 = iftmp.2_39 ^ 1;
  iftmp.1_48 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.5_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.5_11 + 72B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.1_47 = _17 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.1_38 = PHI <iftmp.1_48(6), iftmp.1_47(7)>
  if (iftmp.1_38 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_64 = OS_Error (&OS_svc_GetAlarmBase, 12, &p);
  # DEBUG r => r_64
  goto <bb 22>; [100.00%]

  <bb 10> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  OS_iecMode.6_18 = OS_iecMode;
  if (OS_iecMode.6_18 > 1)
    goto <bb 11>; [74.50%]
  else
    goto <bb 15>; [25.50%]

  <bb 11> [local count: 535958232]:
  if (_3 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 182225799]:
  _19 = OS_kernelData.taskCurrent;
  _20 = _19->dynamic;
  _21 = BIT_FIELD_REF <MEM[(void *)_20], 16, 160>;
  if (_21 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 353732433]:
  _22 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_22 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 267979116]:
  # DEBUG BEGIN_STMT
  r_50 = OS_Error (&OS_svc_GetAlarmBase, 55, &p);
  # DEBUG r => r_50
  goto <bb 22>; [100.00%]

  <bb 15> [local count: 451427907]:
  # DEBUG BEGIN_STMT
  _23 = OS_CanWrite (out_45(D), 12);
  if (_23 == 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 148971209]:
  # DEBUG BEGIN_STMT
  r_62 = OS_Error (&OS_svc_GetAlarmBase, 6, &p);
  # DEBUG r => r_62
  goto <bb 22>; [100.00%]

  <bb 17> [local count: 302456697]:
  # DEBUG BEGIN_STMT
  OS_nAlarms.7_24 = OS_nAlarms;
  if (OS_nAlarms.7_24 <= a_42(D))
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 151228349]:
  # DEBUG BEGIN_STMT
  r_60 = OS_Error (&OS_svc_GetAlarmBase, 9, &p);
  # DEBUG r => r_60
  goto <bb 22>; [100.00%]

  <bb 19> [local count: 151228349]:
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.8_25 = OS_alarmTableBase;
  _26 = _1 * 28;
  _27 = OS_alarmTableBase.8_25 + _26;
  _28 = _27->app;
  _29 = OS_AppIsAccessible (_28);
  if (_29 == 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 49905355]:
  # DEBUG BEGIN_STMT
  r_58 = OS_Error (&OS_svc_GetAlarmBase, 154, &p);
  # DEBUG r => r_58
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 101322993]:
  # DEBUG BEGIN_STMT
  OS_counterTableBase.9_30 = OS_counterTableBase;
  _31 = _27->counter;
  _32 = (unsigned int) _31;
  _33 = _32 * 32;
  c_53 = OS_counterTableBase.9_30 + _33;
  # DEBUG c => c_53
  # DEBUG BEGIN_STMT
  _34 = c_53->maxallowedvalue;
  out_45(D)->maxallowedvalue = _34;
  # DEBUG BEGIN_STMT
  _35 = c_53->ticksperbase;
  out_45(D)->ticksperbase = _35;
  # DEBUG BEGIN_STMT
  _36 = c_53->mincycle;
  out_45(D)->mincycle = _36;

  <bb 22> [local count: 1073741824]:
  # r_37 = PHI <r_64(9), r_50(14), r_62(16), r_60(18), r_58(20), 0(21)>
  # DEBUG r => r_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_37;

}


