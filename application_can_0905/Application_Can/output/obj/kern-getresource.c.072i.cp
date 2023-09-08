
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetResourceFromIsr/8:
  Jump functions of caller  OS_GetResourceFromTask/7:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernGetResource/0:

 Propagating constants:

Not considering OS_KernGetResource for cloning; -fipa-cp-clone disabled.

overall_size: 79, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetResource/0:
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

OS_GetResourceFromIsr/8 (OS_GetResourceFromIsr) @06d55700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetResource/0 (26650832 (estimated locally),0.02 per call) 
  Calls: 
OS_GetResourceFromTask/7 (OS_GetResourceFromTask) @06d55620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetResource/0 (33413782 (estimated locally),0.03 per call) 
  Calls: 
OS_resourceTableBase/6 (OS_resourceTableBase) @06d811b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetResource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nResources/5 (OS_nResources) @06d81120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetResource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetResource/4 (OS_svc_GetResource) @06d81090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetResource/0 (addr)OS_KernGetResource/0 (addr)OS_KernGetResource/0 (addr)OS_KernGetResource/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d55540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetResource/0 (157853958 (estimated locally),0.15 per call) OS_KernGetResource/0 (159060892 (estimated locally),0.15 per call) OS_KernGetResource/0 (237404317 (estimated locally),0.22 per call) OS_KernGetResource/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d81000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetResource/0 (read)OS_KernGetResource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c84f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetResource/0 (read)OS_KernGetResource/0 (read)OS_KernGetResource/0 (read)OS_KernGetResource/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernGetResource/0 (OS_KernGetResource) @06d550e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_GetResource/4 (addr)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_GetResource/4 (addr)OS_nResources/5 (read)OS_svc_GetResource/4 (addr)OS_resourceTableBase/6 (read)OS_svc_GetResource/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_GetResourceFromIsr/8 (26650832 (estimated locally),0.02 per call) OS_GetResourceFromTask/7 (33413782 (estimated locally),0.03 per call) OS_Error/3 (157853958 (estimated locally),0.15 per call) OS_Error/3 (159060892 (estimated locally),0.15 per call) OS_Error/3 (237404317 (estimated locally),0.22 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernGetResource (OS_KernGetResource, funcdef_no=0, decl_uid=7207, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernGetResource/0
__attribute__((target ("general-regs-only")))
OS_KernGetResource (os_resourceid_t r)
{
  os_paramtype_t p[3];
  struct os_resourcedynamic_t * rd;
  os_result_t result;
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
  const struct os_task_t * _17;
  struct os_taskdynamic_t * _18;
  short unsigned int _19;
  short unsigned int _20;
  short unsigned int OS_nResources.6_21;
  const struct os_resource_t * OS_resourceTableBase.7_22;
  unsigned int _23;
  const struct os_resource_t * _24;
  short unsigned int _25;
  _Bool iftmp.0_27;
  int iftmp.1_28;
  _Bool iftmp.5_29;
  short unsigned int _31;
  _Bool iftmp.0_35;
  _Bool iftmp.0_36;
  _Bool iftmp.5_37;
  _Bool iftmp.5_38;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) r_32(D);
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
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 60B];
  _31 = _4 & 1024;
  if (_31 != 0)
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
  # iftmp.1_28 = PHI <1(4), 0(5)>
  _12 = iftmp.1_28 ^ 1;
  iftmp.0_36 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 60B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_35 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_27 = PHI <iftmp.0_36(6), iftmp.0_35(7)>
  if (iftmp.0_27 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  result_51 = OS_Error (&OS_svc_GetResource, 12, &p);
  # DEBUG result => result_51
  goto <bb 23>; [100.00%]

  <bb 10> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 244598387]:
  _17 = OS_kernelData.taskCurrent;
  _18 = _17->dynamic;
  _19 = BIT_FIELD_REF <MEM[(void *)_18], 16, 160>;
  iftmp.5_38 = _19 != 0;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 474808634]:
  _20 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  iftmp.5_37 = _20 != 0;

  <bb 13> [local count: 719407022]:
  # iftmp.5_29 = PHI <iftmp.5_38(11), iftmp.5_37(12)>
  if (iftmp.5_29 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  result_49 = OS_Error (&OS_svc_GetResource, 55, &p);
  # DEBUG result => result_49
  goto <bb 23>; [100.00%]

  <bb 15> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  OS_nResources.6_21 = OS_nResources;
  if (OS_nResources.6_21 <= r_32(D))
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  result_47 = OS_Error (&OS_svc_GetResource, 24, &p);
  # DEBUG result => result_47
  goto <bb 23>; [100.00%]

  <bb 17> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  OS_resourceTableBase.7_22 = OS_resourceTableBase;
  _23 = _1 * 16;
  _24 = OS_resourceTableBase.7_22 + _23;
  rd_39 = _24->dynamic;
  # DEBUG rd => rd_39
  # DEBUG BEGIN_STMT
  _25 = rd_39->takenBy;
  if (_25 != 255)
    goto <bb 18>; [48.88%]
  else
    goto <bb 19>; [51.12%]

  <bb 18> [local count: 157853958]:
  # DEBUG BEGIN_STMT
  result_45 = OS_Error (&OS_svc_GetResource, 25, &p);
  # DEBUG result => result_45
  goto <bb 23>; [100.00%]

  <bb 19> [local count: 165087854]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 20>; [20.24%]
  else
    goto <bb 21>; [79.76%]

  <bb 20> [local count: 33413782]:
  # DEBUG BEGIN_STMT
  result_43 = OS_GetResourceFromTask (r_32(D), rd_39, &p);
  # DEBUG result => result_43
  goto <bb 23>; [100.00%]

  <bb 21> [local count: 131674072]:
  # DEBUG BEGIN_STMT
  if (_2 == 3)
    goto <bb 22>; [20.24%]
  else
    goto <bb 23>; [79.76%]

  <bb 22> [local count: 26650832]:
  # DEBUG BEGIN_STMT
  result_41 = OS_GetResourceFromIsr (r_32(D), rd_39, &p);
  # DEBUG result => result_41

  <bb 23> [local count: 1073741824]:
  # result_26 = PHI <result_51(9), result_49(14), result_47(16), result_45(18), result_43(20), 0(21), result_41(22)>
  # DEBUG result => result_26
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return result_26;

}


