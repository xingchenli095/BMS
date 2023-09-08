
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Shutdown/8:
  Jump functions of caller  OS_Error/4:
  Jump functions of caller  OS_KernShutdownOs/0:

 Propagating constants:

Not considering OS_KernShutdownOs for cloning; -fipa-cp-clone disabled.

overall_size: 89, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernShutdownOs/0:
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

OS_Shutdown/8 (OS_Shutdown) @06dce7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernShutdownOs/0 (262611108 (estimated locally),0.24 per call) 
  Calls: 
OS_isrTableBase/7 (OS_isrTableBase) @06dfa5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernShutdownOs/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/6 (OS_iecMode) @06dfa510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernShutdownOs/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ShutdownOs/5 (OS_svc_ShutdownOs) @06dfa4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernShutdownOs/0 (addr)OS_KernShutdownOs/0 (addr)OS_KernShutdownOs/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/4 (OS_Error) @06dce700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernShutdownOs/0 (38241352 (estimated locally),0.04 per call) OS_KernShutdownOs/0 (52264383 (estimated locally),0.05 per call) OS_KernShutdownOs/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_configMode/3 (OS_configMode) @06dfa438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/2 (OS_permittedContext) @06dfa3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06dfa3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)OS_KernShutdownOs/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernShutdownOs/0 (OS_KernShutdownOs) @06dce2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_configMode/3 (read)OS_svc_ShutdownOs/5 (addr)OS_iecMode/6 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_configMode/3 (read)OS_svc_ShutdownOs/5 (addr)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_configMode/3 (read)OS_svc_ShutdownOs/5 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/4 (38241352 (estimated locally),0.04 per call) OS_Shutdown/8 (262611108 (estimated locally),0.24 per call) OS_Error/4 (52264383 (estimated locally),0.05 per call) OS_Error/4 (177167401 (estimated locally),0.17 per call) 

;; Function OS_KernShutdownOs (OS_KernShutdownOs, funcdef_no=0, decl_uid=7285, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernShutdownOs/0
__attribute__((target ("general-regs-only")))
OS_KernShutdownOs (os_result_t code)
{
  os_paramtype_t p[3];
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
  const struct os_task_t * _26;
  const struct os_isr_t * OS_isrTableBase.10_27;
  short unsigned int _28;
  unsigned int _29;
  unsigned int _30;
  const struct os_isr_t * _31;
  unsigned char _32;
  unsigned int OS_configMode.12_33;
  unsigned int _34;
  _Bool iftmp.0_35;
  int iftmp.1_36;
  const struct os_appcontext_t * iftmp.8_37;
  _Bool iftmp.0_42;
  short unsigned int _43;
  unsigned char _44;
  _Bool iftmp.0_45;
  const struct os_appcontext_t * iftmp.11_47;
  const struct os_appcontext_t * iftmp.9_48;
  const struct os_appcontext_t * iftmp.8_49;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) code_39(D);
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
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 86B];
  _43 = _4 & 1024;
  if (_43 != 0)
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
  iftmp.0_45 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 86B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_42 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_35 = PHI <iftmp.0_45(6), iftmp.0_42(7)>
  if (iftmp.0_35 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  OS_configMode.5_17 = OS_configMode;
  _18 = OS_configMode.5_17 & 1024;
  if (_18 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 30>; [67.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_ShutdownOs, 12, &p);
  goto <bb 30>; [100.00%]

  <bb 11> [local count: 536870911]:
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
    goto <bb 30>; [67.00%]

  <bb 16> [local count: 52264383]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_ShutdownOs, 55, &p);
  goto <bb 30>; [100.00%]

  <bb 17> [local count: 378493993]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 128687957]:
  _26 = OS_kernelData.taskCurrent;
  iftmp.8_49 = _26->app;
  goto <bb 25>; [100.00%]

  <bb 19> [local count: 249806035]:
  if (_2 == 3)
    goto <bb 20>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 20> [local count: 84934052]:
  OS_isrTableBase.10_27 = OS_isrTableBase;
  _28 = OS_kernelData.isrCurrent;
  _29 = (unsigned int) _28;
  _30 = _29 * 68;
  _31 = OS_isrTableBase.10_27 + _30;
  iftmp.9_48 = _31->app;
  goto <bb 25>; [100.00%]

  <bb 21> [local count: 164871983]:
  if (_2 == 10)
    goto <bb 24>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 22> [local count: 108815509]:
  if (_2 == 8)
    goto <bb 24>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 23> [local count: 71818236]:
  if (_2 == 9)
    goto <bb 24>; [34.00%]
  else
    goto <bb 27>; [66.00%]

  <bb 24> [local count: 117471947]:
  iftmp.11_47 = OS_kernelData.hookApp;

  <bb 25> [local count: 331093957]:
  # iftmp.8_37 = PHI <iftmp.8_49(18), iftmp.11_47(24), iftmp.9_48(20)>
  # DEBUG app => iftmp.8_37
  # DEBUG BEGIN_STMT
  if (iftmp.8_37 == 0B)
    goto <bb 27>; [30.00%]
  else
    goto <bb 26>; [70.00%]

  <bb 26> [local count: 231765770]:
  _32 = iftmp.8_37->flags;
  _44 = _32 & 1;
  if (_44 != 0)
    goto <bb 27>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 27> [local count: 262611108]:
  # DEBUG app => NULL
  # DEBUG BEGIN_STMT
  OS_Shutdown (code_39(D), 0);
  goto <bb 30>; [100.00%]

  <bb 28> [local count: 115882885]:
  # DEBUG BEGIN_STMT
  OS_configMode.12_33 = OS_configMode;
  _34 = OS_configMode.12_33 & 1024;
  if (_34 != 0)
    goto <bb 29>; [33.00%]
  else
    goto <bb 30>; [67.00%]

  <bb 29> [local count: 38241352]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_ShutdownOs, 62, &p);

  <bb 30> [local count: 1073741824]:
  p ={v} {CLOBBER};
  return;

}


