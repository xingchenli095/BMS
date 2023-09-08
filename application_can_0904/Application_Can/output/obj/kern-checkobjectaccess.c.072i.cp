
IPA constant propagation start:
Determining dynamic type for call: _32 = OS_GetAppPermissionsForObject (typ_46(D), id_48(D), &permissions, &p);
  Starting walk at: _32 = OS_GetAppPermissionsForObject (typ_46(D), id_48(D), &permissions, &p);
  instance pointer: &permissions  Outer instance pointer: permissions offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _32 = OS_GetAppPermissionsForObject (typ_46(D), id_48(D), &permissions, &p);
  Starting walk at: _32 = OS_GetAppPermissionsForObject (typ_46(D), id_48(D), &permissions, &p);
  instance pointer: &p  Outer instance pointer: p offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_KernCheckObjectAccess/1:
    callsite  OS_KernCheckObjectAccess/1 -> OS_GetAppPermissionsForObject/0 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  OS_GetAppPermissionsForObject/0:

 Propagating constants:

Not considering OS_KernCheckObjectAccess for cloning; -fipa-cp-clone disabled.

overall_size: 187, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernCheckObjectAccess/1:
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
  Node: OS_GetAppPermissionsForObject/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         os_permission_t * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         os_paramtype_t * ~[0B, 0B]
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function OS_GetAppPermissionsForObject/0:
 param 2: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_functionTableBase/23 (OS_functionTableBase) @06d4c510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nFunctions/22 (OS_nFunctions) @06d4c4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/21 (OS_scheduleTableBase) @06d4c480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/20 (OS_nSchedules) @06d4c438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/19 (OS_alarmTableBase) @06d4c3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/18 (OS_nAlarms) @06d4c3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/17 (OS_counterTableBase) @06d4c360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nCounters/16 (OS_nCounters) @06d4c318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_resourceTableBase/15 (OS_resourceTableBase) @06d4c2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nResources/14 (OS_nResources) @06d4c288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/13 (OS_isrTableBase) @06d4c240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/12 (OS_nInterrupts) @06d4c1f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/11 (OS_taskTableBase) @06d4c1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/10 (OS_nTasks) @06d4c168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_appTableBase/9 (OS_appTableBase) @06d44678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)OS_KernCheckObjectAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nApps/8 (OS_nApps) @06d445e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)OS_KernCheckObjectAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/7 (OS_iecMode) @06d44558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_CheckObjectAccess/6 (OS_svc_CheckObjectAccess) @06d44510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (addr)OS_KernCheckObjectAccess/1 (addr)OS_KernCheckObjectAccess/1 (addr)OS_KernCheckObjectAccess/1 (addr)OS_KernCheckObjectAccess/1 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06d1fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCheckObjectAccess/1 (20608998 (estimated locally),0.02 per call) OS_KernCheckObjectAccess/1 (83685022 (estimated locally),0.08 per call) OS_KernCheckObjectAccess/1 (52264383 (estimated locally),0.05 per call) OS_KernCheckObjectAccess/1 (177167401 (estimated locally),0.17 per call) OS_GetAppPermissionsForObject/0 (39366597 (estimated locally),0.04 per call) 
  Calls: 
OS_configMode/4 (OS_configMode) @06d44480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetAppPermissionsForObject/0 (read)OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/3 (OS_permittedContext) @06d44438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/2 (OS_kernelData) @06d443f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)OS_KernCheckObjectAccess/1 (read)
  Availability: not_available
  Varpool flags:
OS_KernCheckObjectAccess/1 (OS_KernCheckObjectAccess) @06d1f620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/2 (read)OS_permittedContext/3 (read)OS_kernelData/2 (read)OS_permittedContext/3 (read)OS_configMode/4 (read)OS_svc_CheckObjectAccess/6 (addr)OS_iecMode/7 (read)OS_kernelData/2 (read)OS_kernelData/2 (read)OS_configMode/4 (read)OS_svc_CheckObjectAccess/6 (addr)OS_nApps/8 (read)OS_configMode/4 (read)OS_svc_CheckObjectAccess/6 (addr)OS_appTableBase/9 (read)OS_configMode/4 (read)OS_svc_CheckObjectAccess/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/5 (20608998 (estimated locally),0.02 per call) OS_GetAppPermissionsForObject/0 (124903018 (estimated locally),0.12 per call) OS_Error/5 (83685022 (estimated locally),0.08 per call) OS_Error/5 (52264383 (estimated locally),0.05 per call) OS_Error/5 (177167401 (estimated locally),0.17 per call) 
OS_GetAppPermissionsForObject/0 (OS_GetAppPermissionsForObject) @06bb2b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_nApps/8 (read)OS_appTableBase/9 (read)OS_nTasks/10 (read)OS_taskTableBase/11 (read)OS_nInterrupts/12 (read)OS_isrTableBase/13 (read)OS_nResources/14 (read)OS_resourceTableBase/15 (read)OS_nCounters/16 (read)OS_counterTableBase/17 (read)OS_nAlarms/18 (read)OS_alarmTableBase/19 (read)OS_nSchedules/20 (read)OS_scheduleTableBase/21 (read)OS_nFunctions/22 (read)OS_functionTableBase/23 (read)OS_configMode/4 (read)OS_svc_CheckObjectAccess/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_KernCheckObjectAccess/1 (124903018 (estimated locally),0.12 per call) 
  Calls: OS_Error/5 (39366597 (estimated locally),0.04 per call) 

;; Function OS_KernCheckObjectAccess (OS_KernCheckObjectAccess, funcdef_no=1, decl_uid=7237, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_KernCheckObjectAccess/1
__attribute__((target ("general-regs-only")))
OS_KernCheckObjectAccess (os_applicationid_t a, os_objecttype_t typ, os_objectid_t id)
{
  os_paramtype_t p[3];
  os_permission_t permissions;
  const struct os_appcontext_t * app;
  os_boolean_t r;
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
  unsigned int OS_configMode.5_18;
  unsigned int _19;
  unsigned char OS_iecMode.6_20;
  const struct os_task_t * _21;
  struct os_taskdynamic_t * _22;
  short unsigned int _23;
  short unsigned int _24;
  unsigned int OS_configMode.7_25;
  unsigned int _26;
  unsigned char OS_nApps.8_27;
  unsigned int OS_configMode.9_28;
  unsigned int _29;
  const struct os_appcontext_t * OS_appTableBase.10_30;
  unsigned int _31;
  int _32;
  unsigned int _33;
  unsigned int permissions.12_34;
  unsigned int _35;
  unsigned int OS_configMode.13_36;
  unsigned int _37;
  _Bool iftmp.0_39;
  int iftmp.1_40;
  short unsigned int _42;
  _Bool iftmp.0_50;
  _Bool iftmp.0_51;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) a_43(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  _2 = (unsigned int) typ_46(D);
  p[1] = _2;
  # DEBUG BEGIN_STMT
  p[2] = id_48(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_4 = OS_permittedContext;
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.2_4 + 10B];
  _42 = _5 & 1024;
  if (_42 != 0)
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
  # iftmp.1_40 = PHI <1(4), 0(5)>
  _13 = iftmp.1_40 ^ 1;
  iftmp.0_51 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.4_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.4_11 + 10B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.0_50 = _17 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.0_39 = PHI <iftmp.0_51(6), iftmp.0_50(7)>
  if (iftmp.0_39 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_configMode.5_18 = OS_configMode;
  _19 = OS_configMode.5_18 & 1024;
  if (_19 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectAccess, 12, &p);
  goto <bb 26>; [100.00%]

  <bb 11> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_iecMode.6_20 = OS_iecMode;
  if (OS_iecMode.6_20 > 1)
    goto <bb 12>; [59.00%]
  else
    goto <bb 17>; [41.00%]

  <bb 12> [local count: 316753838]:
  if (_3 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 107696305]:
  _21 = OS_kernelData.taskCurrent;
  _22 = _21->dynamic;
  _23 = BIT_FIELD_REF <MEM[(void *)_22], 16, 160>;
  if (_23 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 14> [local count: 209057533]:
  _24 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_24 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 15> [local count: 158376919]:
  # DEBUG BEGIN_STMT
  OS_configMode.7_25 = OS_configMode;
  _26 = OS_configMode.7_25 & 1024;
  if (_26 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 16> [local count: 52264383]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectAccess, 55, &p);
  goto <bb 26>; [100.00%]

  <bb 17> [local count: 378493993]:
  # DEBUG BEGIN_STMT
  OS_nApps.8_27 = OS_nApps;
  if (OS_nApps.8_27 <= a_43(D))
    goto <bb 18>; [67.00%]
  else
    goto <bb 20>; [33.00%]

  <bb 18> [local count: 253590975]:
  # DEBUG BEGIN_STMT
  OS_configMode.9_28 = OS_configMode;
  _29 = OS_configMode.9_28 & 1024;
  if (_29 != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 19> [local count: 83685022]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectAccess, 46, &p);
  goto <bb 26>; [100.00%]

  <bb 20> [local count: 124903018]:
  # DEBUG BEGIN_STMT
  OS_appTableBase.10_30 = OS_appTableBase;
  _31 = _1 * 64;
  app_53 = OS_appTableBase.10_30 + _31;
  # DEBUG app => app_53
  # DEBUG BEGIN_STMT
  _32 = OS_GetAppPermissionsForObject (typ_46(D), id_48(D), &permissions, &p);
  if (_32 != 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 21> [local count: 62451509]:
  # DEBUG BEGIN_STMT
  if (app_53 == 0B)
    goto <bb 26>; [30.00%]
  else
    goto <bb 22>; [70.00%]

  <bb 22> [local count: 43716056]:
  _33 = app_53->permissionBit;
  permissions.12_34 = permissions;
  _35 = _33 & permissions.12_34;
  if (_35 != 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 23> [local count: 21858028]:
  goto <bb 26>; [100.00%]

  <bb 24> [local count: 62451509]:
  # DEBUG BEGIN_STMT
  OS_configMode.13_36 = OS_configMode;
  _37 = OS_configMode.13_36 & 1024;
  if (_37 != 0)
    goto <bb 25>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 25> [local count: 20608998]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectAccess, 45, &p);

  <bb 26> [local count: 1073741824]:
  # r_38 = PHI <0(10), 0(16), 0(19), 0(23), 0(24), 0(25), 0(9), 0(15), 0(18), 1(22), 1(21)>
  # DEBUG r => r_38
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  permissions ={v} {CLOBBER};
  p ={v} {CLOBBER};
  return r_38;

}


