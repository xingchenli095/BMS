
IPA constant propagation start:
Determining dynamic type for call: idValid_49 = OS_GetOwningAppForObject (typ_39(D), id_41(D), &app, &p);
  Starting walk at: idValid_49 = OS_GetOwningAppForObject (typ_39(D), id_41(D), &app, &p);
  instance pointer: &app  Outer instance pointer: app offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: idValid_49 = OS_GetOwningAppForObject (typ_39(D), id_41(D), &app, &p);
  Starting walk at: idValid_49 = OS_GetOwningAppForObject (typ_39(D), id_41(D), &app, &p);
  instance pointer: &p  Outer instance pointer: p offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_KernCheckObjectOwnership/1:
    callsite  OS_KernCheckObjectOwnership/1 -> OS_GetOwningAppForObject/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  OS_GetOwningAppForObject/0:

 Propagating constants:

Not considering OS_KernCheckObjectOwnership for cloning; -fipa-cp-clone disabled.

overall_size: 168, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernCheckObjectOwnership/1:
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
  Node: OS_GetOwningAppForObject/0:
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
         const struct os_appcontext_t * * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         os_paramtype_t * ~[0B, 0B]
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function OS_GetOwningAppForObject/0:
 param 2: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_functionTableBase/22 (OS_functionTableBase) @06df9318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nFunctions/21 (OS_nFunctions) @06df92d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/20 (OS_scheduleTableBase) @06df9288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nSchedules/19 (OS_nSchedules) @06df9240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/18 (OS_alarmTableBase) @06df91f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nAlarms/17 (OS_nAlarms) @06df91b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/16 (OS_counterTableBase) @06df9168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nCounters/15 (OS_nCounters) @06df9120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_resourceTableBase/14 (OS_resourceTableBase) @06df90d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nResources/13 (OS_nResources) @06df9090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/12 (OS_isrTableBase) @06df9048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/11 (OS_nInterrupts) @06df9000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/10 (OS_taskTableBase) @06df2f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/9 (OS_nTasks) @06df2f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nApps/8 (OS_nApps) @06df25e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectOwnership/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/7 (OS_iecMode) @06df2558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectOwnership/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_CheckObjectOwnership/6 (OS_svc_CheckObjectOwnership) @06df2510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (addr)OS_KernCheckObjectOwnership/1 (addr)OS_KernCheckObjectOwnership/1 (addr)OS_KernCheckObjectOwnership/1 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06dbb8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCheckObjectOwnership/1 (62451509 (estimated locally),0.06 per call) OS_KernCheckObjectOwnership/1 (52264383 (estimated locally),0.05 per call) OS_KernCheckObjectOwnership/1 (177167401 (estimated locally),0.17 per call) OS_GetOwningAppForObject/0 (44291850 (estimated locally),0.04 per call) 
  Calls: 
OS_configMode/4 (OS_configMode) @06df2480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetOwningAppForObject/0 (read)OS_KernCheckObjectOwnership/1 (read)OS_KernCheckObjectOwnership/1 (read)OS_KernCheckObjectOwnership/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/3 (OS_permittedContext) @06df2438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectOwnership/1 (read)OS_KernCheckObjectOwnership/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/2 (OS_kernelData) @06df23f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckObjectOwnership/1 (read)OS_KernCheckObjectOwnership/1 (read)OS_KernCheckObjectOwnership/1 (read)OS_KernCheckObjectOwnership/1 (read)
  Availability: not_available
  Varpool flags:
OS_KernCheckObjectOwnership/1 (OS_KernCheckObjectOwnership) @06dbb460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/2 (read)OS_permittedContext/3 (read)OS_kernelData/2 (read)OS_permittedContext/3 (read)OS_configMode/4 (read)OS_svc_CheckObjectOwnership/6 (addr)OS_iecMode/7 (read)OS_kernelData/2 (read)OS_kernelData/2 (read)OS_configMode/4 (read)OS_svc_CheckObjectOwnership/6 (addr)OS_nApps/8 (read)OS_configMode/4 (read)OS_svc_CheckObjectOwnership/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/5 (62451509 (estimated locally),0.06 per call) OS_GetOwningAppForObject/0 (185007864 (estimated locally),0.17 per call) OS_Error/5 (52264383 (estimated locally),0.05 per call) OS_Error/5 (177167401 (estimated locally),0.17 per call) 
OS_GetOwningAppForObject/0 (OS_GetOwningAppForObject) @06d1cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_nTasks/9 (read)OS_taskTableBase/10 (read)OS_nInterrupts/11 (read)OS_isrTableBase/12 (read)OS_nResources/13 (read)OS_resourceTableBase/14 (read)OS_nCounters/15 (read)OS_counterTableBase/16 (read)OS_nAlarms/17 (read)OS_alarmTableBase/18 (read)OS_nSchedules/19 (read)OS_scheduleTableBase/20 (read)OS_nFunctions/21 (read)OS_functionTableBase/22 (read)OS_configMode/4 (read)OS_svc_CheckObjectOwnership/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: OS_KernCheckObjectOwnership/1 (185007864 (estimated locally),0.17 per call) 
  Calls: OS_Error/5 (44291850 (estimated locally),0.04 per call) 

;; Function OS_KernCheckObjectOwnership (OS_KernCheckObjectOwnership, funcdef_no=1, decl_uid=7233, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_KernCheckObjectOwnership/1
__attribute__((target ("general-regs-only")))
OS_KernCheckObjectOwnership (os_objecttype_t typ, os_objectid_t id)
{
  os_paramtype_t p[3];
  const struct os_appcontext_t * app;
  os_applicationid_t a;
  os_boolean_t idValid;
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
  unsigned int OS_configMode.5_17;
  unsigned int _18;
  unsigned char OS_iecMode.6_19;
  const struct os_task_t * _20;
  struct os_taskdynamic_t * _21;
  short unsigned int _22;
  short unsigned int _23;
  unsigned int OS_configMode.7_24;
  unsigned int _25;
  unsigned char OS_nApps.8_26;
  unsigned int _27;
  const struct os_appcontext_t * app.9_28;
  unsigned char _29;
  unsigned int OS_configMode.12_30;
  unsigned int _31;
  _Bool iftmp.0_33;
  int iftmp.1_34;
  short unsigned int _36;
  _Bool iftmp.0_43;
  unsigned char _44;
  _Bool iftmp.0_45;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG a => 255
  # DEBUG BEGIN_STMT
  app = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) typ_39(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  p[1] = id_41(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_3 = OS_permittedContext;
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 12B];
  _36 = _4 & 1024;
  if (_36 != 0)
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
  # iftmp.1_34 = PHI <1(4), 0(5)>
  _12 = iftmp.1_34 ^ 1;
  iftmp.0_45 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 12B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_43 = _16 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.0_33 = PHI <iftmp.0_45(6), iftmp.0_43(7)>
  if (iftmp.0_33 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_configMode.5_17 = OS_configMode;
  _18 = OS_configMode.5_17 & 1024;
  if (_18 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectOwnership, 12, &p);
  goto <bb 26>; [100.00%]

  <bb 11> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_iecMode.6_19 = OS_iecMode;
  if (OS_iecMode.6_19 > 1)
    goto <bb 12>; [59.00%]
  else
    goto <bb 17>; [41.00%]

  <bb 12> [local count: 316753838]:
  if (_2 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 107696305]:
  _20 = OS_kernelData.taskCurrent;
  _21 = _20->dynamic;
  _22 = BIT_FIELD_REF <MEM[(void *)_21], 16, 160>;
  if (_22 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 14> [local count: 209057533]:
  _23 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_23 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 15> [local count: 158376919]:
  # DEBUG BEGIN_STMT
  OS_configMode.7_24 = OS_configMode;
  _25 = OS_configMode.7_24 & 1024;
  if (_25 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 16> [local count: 52264383]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectOwnership, 55, &p);
  goto <bb 26>; [100.00%]

  <bb 17> [local count: 378493993]:
  # DEBUG BEGIN_STMT
  # DEBUG idValid => 0
  # DEBUG BEGIN_STMT
  if (typ_39(D) == 1)
    goto <bb 18>; [51.12%]
  else
    goto <bb 20>; [48.88%]

  <bb 18> [local count: 193486129]:
  # DEBUG BEGIN_STMT
  OS_nApps.8_26 = OS_nApps;
  _27 = (unsigned int) OS_nApps.8_26;
  if (_27 > id_41(D))
    goto <bb 19>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 19> [local count: 96743065]:
  # DEBUG BEGIN_STMT
  a_50 = (os_applicationid_t) id_41(D);
  # DEBUG a => a_50
  # DEBUG BEGIN_STMT
  # DEBUG a => a_50
  # DEBUG idValid => 1
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 185007864]:
  # DEBUG BEGIN_STMT
  idValid_49 = OS_GetOwningAppForObject (typ_39(D), id_41(D), &app, &p);
  # DEBUG a => 255
  # DEBUG idValid => idValid_49
  # DEBUG BEGIN_STMT
  if (idValid_49 != 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 21> [local count: 189246997]:
  # a_47 = PHI <255(20), a_50(19)>
  # DEBUG BEGIN_STMT
  app.9_28 = app;
  if (app.9_28 != 0B)
    goto <bb 22>; [70.00%]
  else
    goto <bb 26>; [30.00%]

  <bb 22> [local count: 132472898]:
  # DEBUG BEGIN_STMT
  _29 = app.9_28->flags;
  _44 = _29 & 2;
  if (_44 != 0)
    goto <bb 26>; [35.00%]
  else
    goto <bb 23>; [65.00%]

  <bb 23> [local count: 86107383]:
  # DEBUG BEGIN_STMT
  a_52 = app.9_28->appId;
  # DEBUG a => a_52
  goto <bb 26>; [100.00%]

  <bb 24> [local count: 189246997]:
  # DEBUG a => NULL
  # DEBUG idValid => NULL
  # DEBUG BEGIN_STMT
  OS_configMode.12_30 = OS_configMode;
  _31 = OS_configMode.12_30 & 1024;
  if (_31 != 0)
    goto <bb 25>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 25> [local count: 62451509]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckObjectOwnership, 45, &p);

  <bb 26> [local count: 1073741824]:
  # a_32 = PHI <255(10), 255(16), 255(22), 255(24), 255(25), 255(9), 255(15), a_47(21), a_52(23)>
  # DEBUG a => a_32
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  app ={v} {CLOBBER};
  p ={v} {CLOBBER};
  return a_32;

}


