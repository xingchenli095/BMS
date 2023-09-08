
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_DoGetApplicationId/7:
  Jump functions of caller  OS_Error/4:
  Jump functions of caller  OS_KernGetApplicationId/0:

 Propagating constants:

Not considering OS_KernGetApplicationId for cloning; -fipa-cp-clone disabled.

overall_size: 55, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetApplicationId/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_DoGetApplicationId/7 (OS_DoGetApplicationId) @06ddb1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetApplicationId/0 (336886497 (estimated locally),0.31 per call) 
  Calls: 
OS_iecMode/6 (OS_iecMode) @06ddc048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationId/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetApplicationId/5 (OS_svc_GetApplicationId) @06ddc000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationId/0 (addr)OS_KernGetApplicationId/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/4 (OS_Error) @06ddb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetApplicationId/0 (65994857 (estimated locally),0.06 per call) OS_KernGetApplicationId/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_configMode/3 (OS_configMode) @06cccf30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationId/0 (read)OS_KernGetApplicationId/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/2 (OS_permittedContext) @06cccee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationId/0 (read)OS_KernGetApplicationId/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06cccea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetApplicationId/0 (read)OS_KernGetApplicationId/0 (read)OS_KernGetApplicationId/0 (read)OS_KernGetApplicationId/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernGetApplicationId/0 (OS_KernGetApplicationId) @06cece00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_configMode/3 (read)OS_svc_GetApplicationId/5 (addr)OS_iecMode/6 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_configMode/3 (read)OS_svc_GetApplicationId/5 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_DoGetApplicationId/7 (336886497 (estimated locally),0.31 per call) OS_Error/4 (65994857 (estimated locally),0.06 per call) OS_Error/4 (177167401 (estimated locally),0.17 per call) 

;; Function OS_KernGetApplicationId (OS_KernGetApplicationId, funcdef_no=0, decl_uid=7228, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernGetApplicationId/0
__attribute__((target ("general-regs-only")))
OS_KernGetApplicationId ()
{
  os_applicationid_t a;
  unsigned char _1;
  const os_callermask_t * OS_permittedContext.2_2;
  short unsigned int _3;
  unsigned char _4;
  int _5;
  int _6;
  short unsigned int _7;
  short unsigned int _8;
  const os_callermask_t * OS_permittedContext.4_9;
  short unsigned int _10;
  int _11;
  int _12;
  int _13;
  short unsigned int _14;
  short unsigned int _15;
  unsigned int OS_configMode.5_16;
  unsigned int _17;
  unsigned char OS_iecMode.6_18;
  const struct os_task_t * _19;
  struct os_taskdynamic_t * _20;
  short unsigned int _21;
  short unsigned int _22;
  unsigned int OS_configMode.7_23;
  unsigned int _24;
  _Bool iftmp.0_26;
  int iftmp.1_27;
  short unsigned int _29;
  _Bool iftmp.0_31;
  _Bool iftmp.0_32;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG a => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_2 = OS_permittedContext;
  _3 = *OS_permittedContext.2_2;
  _29 = _3 & 1024;
  if (_29 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  _4 = OS_kernelData.errorStatus.calledFrom;
  _5 = (int) _4;
  _6 = 1 << _5;
  _7 = (short unsigned int) _6;
  _8 = _3 & _7;
  if (_8 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 273804165]:

  <bb 6> [local count: 365072220]:
  # iftmp.1_27 = PHI <1(4), 0(5)>
  _11 = iftmp.1_27 ^ 1;
  iftmp.0_32 = (_Bool) _11;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_9 = OS_permittedContext;
  _10 = *OS_permittedContext.4_9;
  _12 = (int) _1;
  _13 = 1 << _12;
  _14 = (short unsigned int) _13;
  _15 = _10 & _14;
  iftmp.0_31 = _15 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_26 = PHI <iftmp.0_32(6), iftmp.0_31(7)>
  if (iftmp.0_26 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  OS_configMode.5_16 = OS_configMode;
  _17 = OS_configMode.5_16 & 1024;
  if (_17 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_GetApplicationId, 12, 0B);
  goto <bb 18>; [100.00%]

  <bb 11> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  OS_iecMode.6_18 = OS_iecMode;
  if (OS_iecMode.6_18 > 1)
    goto <bb 12>; [74.50%]
  else
    goto <bb 17>; [25.50%]

  <bb 12> [local count: 399968829]:
  if (_1 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 135989402]:
  _19 = OS_kernelData.taskCurrent;
  _20 = _19->dynamic;
  _21 = BIT_FIELD_REF <MEM[(void *)_20], 16, 160>;
  if (_21 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 14> [local count: 263979427]:
  _22 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_22 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 15> [local count: 199984415]:
  # DEBUG BEGIN_STMT
  OS_configMode.7_23 = OS_configMode;
  _24 = OS_configMode.7_23 & 1024;
  if (_24 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 16> [local count: 65994857]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_GetApplicationId, 55, 0B);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 336886497]:
  # DEBUG BEGIN_STMT
  a_35 = OS_DoGetApplicationId ();
  # DEBUG a => a_35

  <bb 18> [local count: 1073741824]:
  # a_25 = PHI <255(10), 255(16), a_35(17), 255(9), 255(15)>
  # DEBUG a => a_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return a_25;

}


