
IPA constant propagation start:
Determining dynamic type for call: result_36 = OS_DoReleaseResourceISRC2 (r_28(D), &OS_kernelData);
  Starting walk at: result_36 = OS_DoReleaseResourceISRC2 (r_28(D), &OS_kernelData);
  instance pointer: &OS_kernelData  Outer instance pointer: OS_kernelData offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: result_38 = OS_DoReleaseResourceTask (r_28(D), &OS_kernelData);
  Starting walk at: result_38 = OS_DoReleaseResourceTask (r_28(D), &OS_kernelData);
  instance pointer: &OS_kernelData  Outer instance pointer: OS_kernelData offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: OS_stopResLockTimingFp.15_18 (rd_33);
  Starting walk at: OS_stopResLockTimingFp.15_18 (rd_33);
  instance pointer: rd_33  Outer instance pointer: rd_33 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_28 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.12_3);
Determining dynamic type for call: OS_stopResLockTimingFp.10_17 (rd_29);
  Starting walk at: OS_stopResLockTimingFp.10_17 (rd_29);
  instance pointer: rd_29  Outer instance pointer: rd_29 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_31 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.9_8);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LowerCurrentTasksPriority/12:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/10:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_KernReleaseResource/2:
    callsite  OS_KernReleaseResource/2 -> OS_DoReleaseResourceISRC2/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: &OS_kernelData
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  OS_KernReleaseResource/2 -> OS_DoReleaseResourceTask/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: &OS_kernelData
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  OS_DoReleaseResourceISRC2/1:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopResLockTimingFp.15_18 (rd_33);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  OS_DoReleaseResourceTask/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopResLockTimingFp.10_17 (rd_29);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_KernReleaseResource for cloning; -fipa-cp-clone disabled.

overall_size: 184, max_new_size: 11001
 - context independent values, size: 49, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 68, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: OS_KernReleaseResource/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_DoReleaseResourceISRC2/1:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: &OS_kernelData [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct os_kerneldata_t * const ~[0B, 0B]
        AGGS VARIABLE
  Node: OS_DoReleaseResourceTask/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: &OS_kernelData [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct os_kerneldata_t * const ~[0B, 0B]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of OS_DoReleaseResourceISRC2/1 for all known contexts.
    replacing param #1 kernel_data with const &OS_kernelData
 - Creating a specialized node of OS_DoReleaseResourceTask/0 for all known contexts.
    replacing param #1 kernel_data with const &OS_kernelData
Propagated bits info for function OS_DoReleaseResourceTask.constprop/15:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function OS_DoReleaseResourceISRC2.constprop/14:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function OS_DoReleaseResourceISRC2/1:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function OS_DoReleaseResourceTask/0:
 param 1: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: OS_DoReleaseResourceISRC2/1 OS_DoReleaseResourceTask/0
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_DoReleaseResourceTask.constprop.0/15 (OS_DoReleaseResourceTask.constprop) @06e62000
  Type: function definition analyzed
  Visibility:
  References: OS_resourceTableBase/8 (read)OS_kernDisableLevel/9 (read)OS_stopResLockTimingFp/11 (read)OS_svc_ReleaseResource/6 (addr)OS_kernelData/3 (addr)
  Referring: 
  Clone of OS_DoReleaseResourceTask/0
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: OS_KernReleaseResource/2 (65363423 (estimated locally),0.06 per call) 
  Calls: OS_CORTEXM_IntSetDisablingLevel/10 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/10 (306137064 (estimated locally),0.29 per call) OS_LowerCurrentTasksPriority/12 (58935156 (estimated locally),0.05 per call) OS_CORTEXM_IntSetDisablingLevel/10 (29467578 (estimated locally),0.03 per call) OS_CORTEXM_IntSetDisablingLevel/10 (29467578 (estimated locally),0.03 per call) OS_CORTEXM_IntSetDisablingLevel/10 (240947665 (estimated locally),0.22 per call) OS_Error/5 (240947665 (estimated locally),0.22 per call) OS_CORTEXM_IntSetDisablingLevel/10 (467721939 (estimated locally),0.44 per call) 
   Indirect call(127775277 (estimated locally),0.12 per call) 
OS_DoReleaseResourceISRC2.constprop.0/14 (OS_DoReleaseResourceISRC2.constprop) @06dadee0
  Type: function definition analyzed
  Visibility:
  References: OS_kernDisableLevel/9 (read)OS_kernelData/3 (read)OS_isrTableBase/13 (read)OS_resourceTableBase/8 (read)OS_stopResLockTimingFp/11 (read)OS_svc_ReleaseResource/6 (addr)OS_kernelData/3 (addr)
  Referring: 
  Clone of OS_DoReleaseResourceISRC2/1
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: OS_KernReleaseResource/2 (52133866 (estimated locally),0.05 per call) 
  Calls: OS_CORTEXM_IntSetDisablingLevel/10 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/10 (548896821 (estimated locally),0.51 per call) OS_CORTEXM_IntSetDisablingLevel/10 (524845004 (estimated locally),0.49 per call) OS_Error/5 (524845004 (estimated locally),0.49 per call) 
   Indirect call(192113887 (estimated locally),0.18 per call) 
OS_isrTableBase/13 (OS_isrTableBase) @06da71f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoReleaseResourceISRC2.constprop.0/14 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LowerCurrentTasksPriority/12 (OS_LowerCurrentTasksPriority) @06d47b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoReleaseResourceTask.constprop/15 (58935156 (estimated locally),0.05 per call) 
  Calls: 
OS_stopResLockTimingFp/11 (OS_stopResLockTimingFp) @06d6fb88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoReleaseResourceTask.constprop.0/15 (read)OS_DoReleaseResourceISRC2.constprop.0/14 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/10 (OS_CORTEXM_IntSetDisablingLevel) @06d47ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoReleaseResourceTask.constprop/15 (1073741824 (estimated locally),1.00 per call) OS_DoReleaseResourceTask.constprop/15 (306137064 (estimated locally),0.29 per call) OS_DoReleaseResourceTask.constprop/15 (29467578 (estimated locally),0.03 per call) OS_DoReleaseResourceTask.constprop/15 (29467578 (estimated locally),0.03 per call) OS_DoReleaseResourceTask.constprop/15 (240947665 (estimated locally),0.22 per call) OS_DoReleaseResourceTask.constprop/15 (467721939 (estimated locally),0.44 per call) OS_DoReleaseResourceISRC2.constprop/14 (1073741824 (estimated locally),1.00 per call) OS_DoReleaseResourceISRC2.constprop/14 (548896821 (estimated locally),0.51 per call) OS_DoReleaseResourceISRC2.constprop/14 (524845004 (estimated locally),0.49 per call) 
  Calls: 
OS_kernDisableLevel/9 (OS_kernDisableLevel) @06d6faf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoReleaseResourceTask.constprop.0/15 (read)OS_DoReleaseResourceISRC2.constprop.0/14 (read)
  Availability: not_available
  Varpool flags: read-only
OS_resourceTableBase/8 (OS_resourceTableBase) @06d6fab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoReleaseResourceTask.constprop.0/15 (read)OS_DoReleaseResourceISRC2.constprop.0/14 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nResources/7 (OS_nResources) @06d6f360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernReleaseResource/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ReleaseResource/6 (OS_svc_ReleaseResource) @06d6f2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoReleaseResourceTask.constprop.0/15 (addr)OS_DoReleaseResourceISRC2.constprop.0/14 (addr)OS_KernReleaseResource/2 (addr)OS_KernReleaseResource/2 (addr)OS_KernReleaseResource/2 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06d47c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoReleaseResourceTask.constprop/15 (240947665 (estimated locally),0.22 per call) OS_DoReleaseResourceISRC2.constprop/14 (524845004 (estimated locally),0.49 per call) OS_KernReleaseResource/2 (159060892 (estimated locally),0.15 per call) OS_KernReleaseResource/2 (237404317 (estimated locally),0.22 per call) OS_KernReleaseResource/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/4 (OS_permittedContext) @06d6f240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernReleaseResource/2 (read)OS_KernReleaseResource/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/3 (OS_kernelData) @06d6f1f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoReleaseResourceTask.constprop.0/15 (addr)OS_KernReleaseResource/2 (read)OS_KernReleaseResource/2 (read)OS_KernReleaseResource/2 (read)OS_KernReleaseResource/2 (read)OS_KernReleaseResource/2 (addr)OS_KernReleaseResource/2 (addr)OS_DoReleaseResourceISRC2.constprop.0/14 (read)OS_DoReleaseResourceISRC2.constprop.0/14 (addr)
  Availability: not_available
  Varpool flags:
OS_KernReleaseResource/2 (OS_KernReleaseResource) @06d478c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/3 (read)OS_permittedContext/4 (read)OS_kernelData/3 (read)OS_permittedContext/4 (read)OS_svc_ReleaseResource/6 (addr)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_svc_ReleaseResource/6 (addr)OS_nResources/7 (read)OS_svc_ReleaseResource/6 (addr)OS_kernelData/3 (addr)OS_kernelData/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_DoReleaseResourceISRC2.constprop/14 (52133866 (estimated locally),0.05 per call) OS_DoReleaseResourceTask.constprop/15 (65363423 (estimated locally),0.06 per call) OS_Error/5 (159060892 (estimated locally),0.15 per call) OS_Error/5 (237404317 (estimated locally),0.22 per call) OS_Error/5 (354334802 (estimated locally),0.33 per call) 
OS_DoReleaseResourceISRC2/1 (OS_DoReleaseResourceISRC2) @06d470e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_DoReleaseResourceTask/0 (OS_DoReleaseResourceTask) @06c9dd20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_KernReleaseResource (OS_KernReleaseResource, funcdef_no=2, decl_uid=7209, cgraph_uid=3, symbol_order=2)

Modification phase of node OS_KernReleaseResource/2
__attribute__((target ("general-regs-only")))
OS_KernReleaseResource (os_resourceid_t r)
{
  os_paramtype_t p[3];
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
  _Bool iftmp.0_23;
  int iftmp.1_24;
  _Bool iftmp.5_25;
  short unsigned int _27;
  _Bool iftmp.0_31;
  _Bool iftmp.0_32;
  _Bool iftmp.5_33;
  _Bool iftmp.5_34;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) r_28(D);
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
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 62B];
  _27 = _4 & 1024;
  if (_27 != 0)
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
  # iftmp.1_24 = PHI <1(4), 0(5)>
  _12 = iftmp.1_24 ^ 1;
  iftmp.0_32 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 62B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_31 = _16 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.0_23 = PHI <iftmp.0_32(6), iftmp.0_31(7)>
  if (iftmp.0_23 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  result_44 = OS_Error (&OS_svc_ReleaseResource, 12, &p);
  # DEBUG result => result_44
  goto <bb 21>; [100.00%]

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
  iftmp.5_34 = _19 != 0;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 474808634]:
  _20 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  iftmp.5_33 = _20 != 0;

  <bb 13> [local count: 719407022]:
  # iftmp.5_25 = PHI <iftmp.5_34(11), iftmp.5_33(12)>
  if (iftmp.5_25 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  result_42 = OS_Error (&OS_svc_ReleaseResource, 55, &p);
  # DEBUG result => result_42
  goto <bb 21>; [100.00%]

  <bb 15> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  OS_nResources.6_21 = OS_nResources;
  if (OS_nResources.6_21 <= r_28(D))
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  result_40 = OS_Error (&OS_svc_ReleaseResource, 24, &p);
  # DEBUG result => result_40
  goto <bb 21>; [100.00%]

  <bb 17> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 18>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 18> [local count: 65363423]:
  # DEBUG BEGIN_STMT
  result_38 = OS_DoReleaseResourceTask (r_28(D), &OS_kernelData);
  # DEBUG result => result_38
  goto <bb 21>; [100.00%]

  <bb 19> [local count: 257578389]:
  # DEBUG BEGIN_STMT
  if (_2 == 3)
    goto <bb 20>; [20.24%]
  else
    goto <bb 21>; [79.76%]

  <bb 20> [local count: 52133866]:
  # DEBUG BEGIN_STMT
  result_36 = OS_DoReleaseResourceISRC2 (r_28(D), &OS_kernelData);
  # DEBUG result => result_36

  <bb 21> [local count: 1073741824]:
  # result_22 = PHI <result_44(9), result_42(14), result_40(16), result_38(18), 0(19), result_36(20)>
  # DEBUG result => result_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return result_22;

}


