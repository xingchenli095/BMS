
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CanWrite/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernGetTaskId/0:

 Propagating constants:

Not considering OS_KernGetTaskId for cloning; -fipa-cp-clone disabled.

overall_size: 65, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetTaskId/0:
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

OS_CanWrite/6 (OS_CanWrite) @06d69540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetTaskId/0 (451427907 (estimated locally),0.42 per call) 
  Calls: 
OS_iecMode/5 (OS_iecMode) @06d6d000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskId/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetTaskId/4 (OS_svc_GetTaskId) @06ca4f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskId/0 (addr)OS_KernGetTaskId/0 (addr)OS_KernGetTaskId/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d69460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetTaskId/0 (148971209 (estimated locally),0.14 per call) OS_KernGetTaskId/0 (267979116 (estimated locally),0.25 per call) OS_KernGetTaskId/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06ca4ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskId/0 (read)OS_KernGetTaskId/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06ca4ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetTaskId/0 (read)OS_KernGetTaskId/0 (read)OS_KernGetTaskId/0 (read)OS_KernGetTaskId/0 (read)OS_KernGetTaskId/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernGetTaskId/0 (OS_KernGetTaskId) @06d690e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_GetTaskId/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_GetTaskId/4 (addr)OS_svc_GetTaskId/4 (addr)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (148971209 (estimated locally),0.14 per call) OS_CanWrite/6 (451427907 (estimated locally),0.42 per call) OS_Error/3 (267979116 (estimated locally),0.25 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernGetTaskId (OS_KernGetTaskId, funcdef_no=0, decl_uid=7202, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernGetTaskId/0
__attribute__((target ("general-regs-only")))
OS_KernGetTaskId (os_taskid_t * out)
{
  os_paramtype_t p[3];
  os_result_t r;
  unsigned int out.0_1;
  unsigned char _2;
  const os_callermask_t * OS_permittedContext.3_3;
  short unsigned int _4;
  unsigned char _5;
  int _6;
  int _7;
  short unsigned int _8;
  short unsigned int _9;
  const os_callermask_t * OS_permittedContext.5_10;
  short unsigned int _11;
  int _12;
  int _13;
  int _14;
  short unsigned int _15;
  short unsigned int _16;
  unsigned char OS_iecMode.6_17;
  const struct os_task_t * _18;
  struct os_taskdynamic_t * _19;
  short unsigned int _20;
  short unsigned int _21;
  int _22;
  const struct os_task_t * _23;
  unsigned char _24;
  _Bool iftmp.1_26;
  int iftmp.2_27;
  short unsigned int _29;
  _Bool iftmp.1_33;
  _Bool iftmp.1_34;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  out.0_1 = (unsigned int) out_30(D);
  p[0] = out.0_1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.3_3 = OS_permittedContext;
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.3_3 + 52B];
  _29 = _4 & 1024;
  if (_29 != 0)
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
  # iftmp.2_27 = PHI <1(4), 0(5)>
  _12 = iftmp.2_27 ^ 1;
  iftmp.1_34 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.5_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.5_10 + 52B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.1_33 = _16 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.1_26 = PHI <iftmp.1_34(6), iftmp.1_33(7)>
  if (iftmp.1_26 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_43 = OS_Error (&OS_svc_GetTaskId, 12, &p);
  # DEBUG r => r_43
  goto <bb 20>; [100.00%]

  <bb 10> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  OS_iecMode.6_17 = OS_iecMode;
  if (OS_iecMode.6_17 > 1)
    goto <bb 11>; [74.50%]
  else
    goto <bb 15>; [25.50%]

  <bb 11> [local count: 535958232]:
  if (_2 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 182225799]:
  _18 = OS_kernelData.taskCurrent;
  _19 = _18->dynamic;
  _20 = BIT_FIELD_REF <MEM[(void *)_19], 16, 160>;
  if (_20 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 353732433]:
  _21 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_21 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 267979116]:
  # DEBUG BEGIN_STMT
  r_36 = OS_Error (&OS_svc_GetTaskId, 55, &p);
  # DEBUG r => r_36
  goto <bb 20>; [100.00%]

  <bb 15> [local count: 451427907]:
  # DEBUG BEGIN_STMT
  _22 = OS_CanWrite (out_30(D), 1);
  if (_22 == 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 148971209]:
  # DEBUG BEGIN_STMT
  r_41 = OS_Error (&OS_svc_GetTaskId, 6, &p);
  # DEBUG r => r_41
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 302456697]:
  # DEBUG BEGIN_STMT
  _23 = OS_kernelData.taskCurrent;
  if (_23 == 0B)
    goto <bb 18>; [30.00%]
  else
    goto <bb 19>; [70.00%]

  <bb 18> [local count: 90737009]:
  # DEBUG BEGIN_STMT
  *out_30(D) = 255;
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 211719688]:
  # DEBUG BEGIN_STMT
  _24 = _23->taskId;
  *out_30(D) = _24;

  <bb 20> [local count: 1073741824]:
  # r_25 = PHI <r_43(9), r_36(14), r_41(16), 0(18), 0(19)>
  # DEBUG r => r_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_25;

}


