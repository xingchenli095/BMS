
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AppIsAccessible/9:
  Jump functions of caller  OS_CanWrite/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernGetTaskState/0:

 Propagating constants:

Not considering OS_KernGetTaskState for cloning; -fipa-cp-clone disabled.

overall_size: 85, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetTaskState/0:
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

OS_AppIsAccessible/9 (OS_AppIsAccessible) @06cc69a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetTaskState/0 (151228349 (estimated locally),0.14 per call) 
  Calls: 
OS_taskTableBase/8 (OS_taskTableBase) @06cf4240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/7 (OS_nTasks) @06cf41b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CanWrite/6 (OS_CanWrite) @06cc68c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetTaskState/0 (451427907 (estimated locally),0.42 per call) 
  Calls: 
OS_iecMode/5 (OS_iecMode) @06cf4090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetTaskState/4 (OS_svc_GetTaskState) @06cf4048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskState/0 (addr)OS_KernGetTaskState/0 (addr)OS_KernGetTaskState/0 (addr)OS_KernGetTaskState/0 (addr)OS_KernGetTaskState/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06cc67e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetTaskState/0 (49905355 (estimated locally),0.05 per call) OS_KernGetTaskState/0 (151228349 (estimated locally),0.14 per call) OS_KernGetTaskState/0 (148971209 (estimated locally),0.14 per call) OS_KernGetTaskState/0 (267979116 (estimated locally),0.25 per call) OS_KernGetTaskState/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06c02f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskState/0 (read)OS_KernGetTaskState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c02f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskState/0 (read)OS_KernGetTaskState/0 (read)OS_KernGetTaskState/0 (read)OS_KernGetTaskState/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernGetTaskState/0 (OS_KernGetTaskState) @06cc6380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_GetTaskState/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_GetTaskState/4 (addr)OS_svc_GetTaskState/4 (addr)OS_nTasks/7 (read)OS_svc_GetTaskState/4 (addr)OS_taskTableBase/8 (read)OS_svc_GetTaskState/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (49905355 (estimated locally),0.05 per call) OS_AppIsAccessible/9 (151228349 (estimated locally),0.14 per call) OS_Error/3 (151228349 (estimated locally),0.14 per call) OS_Error/3 (148971209 (estimated locally),0.14 per call) OS_CanWrite/6 (451427907 (estimated locally),0.42 per call) OS_Error/3 (267979116 (estimated locally),0.25 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernGetTaskState (OS_KernGetTaskState, funcdef_no=0, decl_uid=7205, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernGetTaskState/0
__attribute__((target ("general-regs-only")))
OS_KernGetTaskState (os_taskid_t t, os_taskstate_t * out)
{
  os_paramtype_t p[3];
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
  unsigned char OS_nTasks.7_24;
  const struct os_task_t * OS_taskTableBase.8_25;
  unsigned int _26;
  const struct os_task_t * _27;
  const struct os_appcontext_t * _28;
  int _29;
  struct os_taskdynamic_t * _30;
  unsigned char _31;
  _Bool iftmp.1_33;
  int iftmp.2_34;
  short unsigned int _36;
  _Bool iftmp.1_42;
  _Bool iftmp.1_43;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) t_37(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  out.0_2 = (unsigned int) out_40(D);
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
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.3_4 + 54B];
  _36 = _5 & 1024;
  if (_36 != 0)
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
  # iftmp.2_34 = PHI <1(4), 0(5)>
  _13 = iftmp.2_34 ^ 1;
  iftmp.1_43 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.5_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.5_11 + 54B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.1_42 = _17 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.1_33 = PHI <iftmp.1_43(6), iftmp.1_42(7)>
  if (iftmp.1_33 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_56 = OS_Error (&OS_svc_GetTaskState, 12, &p);
  # DEBUG r => r_56
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
  r_45 = OS_Error (&OS_svc_GetTaskState, 55, &p);
  # DEBUG r => r_45
  goto <bb 22>; [100.00%]

  <bb 15> [local count: 451427907]:
  # DEBUG BEGIN_STMT
  _23 = OS_CanWrite (out_40(D), 1);
  if (_23 == 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 148971209]:
  # DEBUG BEGIN_STMT
  r_54 = OS_Error (&OS_svc_GetTaskState, 6, &p);
  # DEBUG r => r_54
  goto <bb 22>; [100.00%]

  <bb 17> [local count: 302456697]:
  # DEBUG BEGIN_STMT
  OS_nTasks.7_24 = OS_nTasks;
  if (OS_nTasks.7_24 <= t_37(D))
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 151228349]:
  # DEBUG BEGIN_STMT
  r_52 = OS_Error (&OS_svc_GetTaskState, 2, &p);
  # DEBUG r => r_52
  goto <bb 22>; [100.00%]

  <bb 19> [local count: 151228349]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.8_25 = OS_taskTableBase;
  _26 = _1 * 76;
  _27 = OS_taskTableBase.8_25 + _26;
  _28 = _27->app;
  _29 = OS_AppIsAccessible (_28);
  if (_29 == 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 49905355]:
  # DEBUG BEGIN_STMT
  r_50 = OS_Error (&OS_svc_GetTaskState, 154, &p);
  # DEBUG r => r_50
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 101322993]:
  # DEBUG BEGIN_STMT
  # DEBUG tp => _27
  # DEBUG BEGIN_STMT
  _30 = _27->dynamic;
  _31 = _30->state;
  *out_40(D) = _31;

  <bb 22> [local count: 1073741824]:
  # r_32 = PHI <r_56(9), r_45(14), r_54(16), r_52(18), r_50(20), 0(21)>
  # DEBUG r => r_32
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_32;

}


