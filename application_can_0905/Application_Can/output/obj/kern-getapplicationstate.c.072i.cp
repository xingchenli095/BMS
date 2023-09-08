
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CanWrite/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernGetApplicationState/0:

 Propagating constants:

Not considering OS_KernGetApplicationState for cloning; -fipa-cp-clone disabled.

overall_size: 74, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetApplicationState/0:
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

OS_appTableBase/8 (OS_appTableBase) @06d39120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nApps/7 (OS_nApps) @06d39090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CanWrite/6 (OS_CanWrite) @06ced700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetApplicationState/0 (451427907 (estimated locally),0.42 per call) 
  Calls: 
OS_iecMode/5 (OS_iecMode) @06c2bf30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetApplicationState/4 (OS_svc_GetApplicationState) @06c2bee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationState/0 (addr)OS_KernGetApplicationState/0 (addr)OS_KernGetApplicationState/0 (addr)OS_KernGetApplicationState/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06ced620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetApplicationState/0 (99810710 (estimated locally),0.09 per call) OS_KernGetApplicationState/0 (148971209 (estimated locally),0.14 per call) OS_KernGetApplicationState/0 (267979116 (estimated locally),0.25 per call) OS_KernGetApplicationState/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06c2be58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationState/0 (read)OS_KernGetApplicationState/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c2be10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationState/0 (read)OS_KernGetApplicationState/0 (read)OS_KernGetApplicationState/0 (read)OS_KernGetApplicationState/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernGetApplicationState/0 (OS_KernGetApplicationState) @06ced2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_GetApplicationState/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_GetApplicationState/4 (addr)OS_svc_GetApplicationState/4 (addr)OS_nApps/7 (read)OS_svc_GetApplicationState/4 (addr)OS_appTableBase/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (99810710 (estimated locally),0.09 per call) OS_Error/3 (148971209 (estimated locally),0.14 per call) OS_CanWrite/6 (451427907 (estimated locally),0.42 per call) OS_Error/3 (267979116 (estimated locally),0.25 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernGetApplicationState (OS_KernGetApplicationState, funcdef_no=0, decl_uid=7321, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernGetApplicationState/0
__attribute__((target ("general-regs-only")))
OS_KernGetApplicationState (os_applicationid_t a, os_appstate_t * out)
{
  os_paramtype_t p[3];
  os_result_t r;
  struct os_appdynamic_t * ad;
  const struct os_appcontext_t * ap;
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
  unsigned char OS_nApps.7_24;
  const struct os_appcontext_t * OS_appTableBase.8_25;
  unsigned int _26;
  unsigned char _27;
  _Bool iftmp.1_29;
  int iftmp.2_30;
  short unsigned int _32;
  _Bool iftmp.1_38;
  _Bool iftmp.1_39;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) a_33(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  out.0_2 = (unsigned int) out_36(D);
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
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.3_4 + 40B];
  _32 = _5 & 1024;
  if (_32 != 0)
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
  # iftmp.2_30 = PHI <1(4), 0(5)>
  _13 = iftmp.2_30 ^ 1;
  iftmp.1_39 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.5_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.5_11 + 40B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.1_38 = _17 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.1_29 = PHI <iftmp.1_39(6), iftmp.1_38(7)>
  if (iftmp.1_29 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_51 = OS_Error (&OS_svc_GetApplicationState, 12, &p);
  # DEBUG r => r_51
  goto <bb 20>; [100.00%]

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
  r_41 = OS_Error (&OS_svc_GetApplicationState, 55, &p);
  # DEBUG r => r_41
  goto <bb 20>; [100.00%]

  <bb 15> [local count: 451427907]:
  # DEBUG BEGIN_STMT
  _23 = OS_CanWrite (out_36(D), 1);
  if (_23 == 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 148971209]:
  # DEBUG BEGIN_STMT
  r_49 = OS_Error (&OS_svc_GetApplicationState, 6, &p);
  # DEBUG r => r_49
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 302456697]:
  # DEBUG BEGIN_STMT
  OS_nApps.7_24 = OS_nApps;
  if (OS_nApps.7_24 <= a_33(D))
    goto <bb 18>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 18> [local count: 99810710]:
  # DEBUG BEGIN_STMT
  r_47 = OS_Error (&OS_svc_GetApplicationState, 46, &p);
  # DEBUG r => r_47
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 202645987]:
  # DEBUG BEGIN_STMT
  OS_appTableBase.8_25 = OS_appTableBase;
  _26 = _1 * 64;
  ap_43 = OS_appTableBase.8_25 + _26;
  # DEBUG ap => ap_43
  # DEBUG BEGIN_STMT
  ad_44 = ap_43->dynamic;
  # DEBUG ad => ad_44
  # DEBUG BEGIN_STMT
  _27 = ad_44->appstate;
  *out_36(D) = _27;

  <bb 20> [local count: 1073741824]:
  # r_28 = PHI <r_51(9), r_41(14), r_49(16), r_47(18), 0(19)>
  # DEBUG r => r_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_28;

}


