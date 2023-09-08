
IPA constant propagation start:
Determining dynamic type for call: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  Starting walk at: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  instance pointer: &OS_kernelData  Outer instance pointer: OS_kernelData offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:r_48 = OS_Error (&OS_svc_GetStackInfo, 6, &p);
  Function call may change dynamic type:_3 = OS_CanWrite (out_31(D), 28);
  Function call may change dynamic type:r_36 = OS_Error (&OS_svc_GetStackInfo, 47, &p);
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_GetStackInfo, 12, &p);
  Function call may change dynamic type:r_41 = OS_Error (&OS_svc_GetStackInfo, 2, &p);
Determining dynamic type for call: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  Starting walk at: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  instance pointer: ts_22  Outer instance pointer: ts_22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:r_48 = OS_Error (&OS_svc_GetStackInfo, 6, &p);
  Function call may change dynamic type:_3 = OS_CanWrite (out_31(D), 28);
  Function call may change dynamic type:r_36 = OS_Error (&OS_svc_GetStackInfo, 47, &p);
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_GetStackInfo, 12, &p);
  Function call may change dynamic type:r_41 = OS_Error (&OS_svc_GetStackInfo, 2, &p);
Determining dynamic type for call: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  Starting walk at: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  instance pointer: is_23  Outer instance pointer: is_23 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:r_48 = OS_Error (&OS_svc_GetStackInfo, 6, &p);
  Function call may change dynamic type:_3 = OS_CanWrite (out_31(D), 28);
  Function call may change dynamic type:r_36 = OS_Error (&OS_svc_GetStackInfo, 47, &p);
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_GetStackInfo, 12, &p);
  Function call may change dynamic type:r_41 = OS_Error (&OS_svc_GetStackInfo, 2, &p);
Determining dynamic type for call: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  Starting walk at: OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  instance pointer: out_31(D)  Outer instance pointer: out_31(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:r_48 = OS_Error (&OS_svc_GetStackInfo, 6, &p);
  Function call may change dynamic type:_3 = OS_CanWrite (out_31(D), 28);
  Function call may change dynamic type:r_36 = OS_Error (&OS_svc_GetStackInfo, 47, &p);
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_GetStackInfo, 12, &p);
  Function call may change dynamic type:r_41 = OS_Error (&OS_svc_GetStackInfo, 2, &p);
Determining dynamic type for call: OS_ComputeStackStatus (out_31(D));
  Starting walk at: OS_ComputeStackStatus (out_31(D));
  instance pointer: out_31(D)  Outer instance pointer: out_31(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  Function call may change dynamic type:r_48 = OS_Error (&OS_svc_GetStackInfo, 6, &p);
  Function call may change dynamic type:_3 = OS_CanWrite (out_31(D), 28);
  Function call may change dynamic type:r_36 = OS_Error (&OS_svc_GetStackInfo, 47, &p);
  Function call may change dynamic type:r_44 = OS_Error (&OS_svc_GetStackInfo, 12, &p);
  Function call may change dynamic type:r_41 = OS_Error (&OS_svc_GetStackInfo, 2, &p);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_CanWrite/4:
  Jump functions of caller  OS_KernGetStackInfo/2:
    callsite  OS_KernGetStackInfo/2 -> OS_ComputeStackStatus/0 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  OS_KernGetStackInfo/2 -> OS_FillStackInfo/1 : 
       param 0: CONST: &OS_kernelData
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  OS_FillStackInfo/1:
  Jump functions of caller  OS_ComputeStackStatus/0:

 Propagating constants:

Not considering OS_KernGetStackInfo for cloning; -fipa-cp-clone disabled.

overall_size: 160, max_new_size: 11001
 - context independent values, size: 49, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: OS_KernGetStackInfo/2:
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
  Node: OS_FillStackInfo/1:
    param [0]: &OS_kernelData [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct os_kerneldata_t * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: OS_ComputeStackStatus/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of OS_FillStackInfo/1 for all known contexts.
    replacing param #0 kernel_data with const &OS_kernelData
Propagated bits info for function OS_FillStackInfo.constprop/11:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function OS_FillStackInfo/1:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: OS_FillStackInfo/1
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_FillStackInfo.constprop.0/11 (OS_FillStackInfo.constprop) @06e689a0
  Type: function definition analyzed
  Visibility:
  References: OS_kernelData/3 (addr)
  Referring: 
  Clone of OS_FillStackInfo/1
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: OS_KernGetStackInfo/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_nInterrupts/10 (OS_nInterrupts) @06d8a5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetStackInfo/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/9 (OS_taskTableBase) @06d8a510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetStackInfo/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/8 (OS_nTasks) @06d8a4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetStackInfo/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/7 (OS_isrTableBase) @06d8a438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetStackInfo/6 (OS_svc_GetStackInfo) @06d8a3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetStackInfo/2 (addr)OS_KernGetStackInfo/2 (addr)OS_KernGetStackInfo/2 (addr)OS_KernGetStackInfo/2 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06d1f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetStackInfo/2 (51706660 (estimated locally),0.05 per call) OS_KernGetStackInfo/2 (51706660 (estimated locally),0.05 per call) OS_KernGetStackInfo/2 (32674431 (estimated locally),0.03 per call) OS_KernGetStackInfo/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_CanWrite/4 (OS_CanWrite) @06d1f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernGetStackInfo/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernelData/3 (OS_kernelData) @06d8a318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (read)OS_KernGetStackInfo/2 (addr)OS_FillStackInfo.constprop.0/11 (addr)
  Availability: not_available
  Varpool flags:
OS_KernGetStackInfo/2 (OS_KernGetStackInfo) @06d1f460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_svc_GetStackInfo/6 (addr)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_isrTableBase/7 (read)OS_svc_GetStackInfo/6 (addr)OS_kernelData/3 (read)OS_nTasks/8 (read)OS_taskTableBase/9 (read)OS_svc_GetStackInfo/6 (addr)OS_kernelData/3 (read)OS_isrTableBase/7 (read)OS_nInterrupts/10 (read)OS_isrTableBase/7 (read)OS_svc_GetStackInfo/6 (addr)OS_kernelData/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ComputeStackStatus/0 (354334802 (estimated locally),0.33 per call) OS_FillStackInfo.constprop/11 (354334802 (estimated locally),0.33 per call) OS_Error/5 (51706660 (estimated locally),0.05 per call) OS_Error/5 (51706660 (estimated locally),0.05 per call) OS_Error/5 (32674431 (estimated locally),0.03 per call) OS_Error/5 (354334802 (estimated locally),0.33 per call) OS_CanWrite/4 (1073741824 (estimated locally),1.00 per call) 
OS_FillStackInfo/1 (OS_FillStackInfo) @06c7ae00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_ComputeStackStatus/0 (OS_ComputeStackStatus) @06c7aa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: OS_KernGetStackInfo/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 

;; Function OS_KernGetStackInfo (OS_KernGetStackInfo, funcdef_no=2, decl_uid=7222, cgraph_uid=3, symbol_order=2)

Modification phase of node OS_KernGetStackInfo/2
__attribute__((target ("general-regs-only")))
OS_KernGetStackInfo (os_taskorisr_t toi, struct os_stackinfo_t * out)
{
  os_isrid_t iid;
  os_paramtype_t p[3];
  os_boolean_t ok;
  os_result_t r;
  const struct os_isr_t * is;
  const struct os_task_t * ts;
  os_taskid_t tid;
  unsigned int _1;
  unsigned int out.0_2;
  int _3;
  unsigned char _4;
  short unsigned int _5;
  const struct os_isr_t * OS_isrTableBase.1_6;
  unsigned int _7;
  unsigned int _8;
  const struct os_task_t * _9;
  unsigned char OS_nTasks.2_10;
  const struct os_task_t * OS_taskTableBase.3_11;
  unsigned int _12;
  unsigned int _13;
  short unsigned int _14;
  const struct os_isr_t * OS_isrTableBase.4_15;
  unsigned int _16;
  unsigned int _17;
  short unsigned int OS_nInterrupts.5_18;
  const struct os_isr_t * OS_isrTableBase.6_19;
  unsigned int _20;
  unsigned int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ts => 0B
  # DEBUG BEGIN_STMT
  # DEBUG is => 0B
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG ok => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) toi_28(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  out.0_2 = (unsigned int) out_31(D);
  p[1] = out.0_2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = OS_CanWrite (out_31(D), 28);
  if (_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_48 = OS_Error (&OS_svc_GetStackInfo, 6, &p);
  # DEBUG r => r_48
  goto <bb 24>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (toi_28(D) == 65535)
    goto <bb 5>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 5> [local count: 244598388]:
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.inFunction;
  if (_4 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 83163452]:
  # DEBUG BEGIN_STMT
  ts_46 = OS_kernelData.taskCurrent;
  # DEBUG ts => ts_46
  # DEBUG BEGIN_STMT
  # DEBUG ok => 1
  goto <bb 24>; [100.00%]

  <bb 7> [local count: 161434936]:
  # DEBUG BEGIN_STMT
  _5 = OS_kernelData.isrCurrent;
  if (_5 != 4095)
    goto <bb 8>; [79.76%]
  else
    goto <bb 9>; [20.24%]

  <bb 8> [local count: 128760505]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.1_6 = OS_isrTableBase;
  _7 = (unsigned int) _5;
  _8 = _7 * 68;
  is_45 = OS_isrTableBase.1_6 + _8;
  # DEBUG is => is_45
  # DEBUG BEGIN_STMT
  # DEBUG ok => 1
  goto <bb 24>; [100.00%]

  <bb 9> [local count: 32674431]:
  # DEBUG BEGIN_STMT
  r_44 = OS_Error (&OS_svc_GetStackInfo, 12, &p);
  # DEBUG r => r_44
  goto <bb 24>; [100.00%]

  <bb 10> [local count: 474808635]:
  # DEBUG BEGIN_STMT
  if (toi_28(D) <= 255)
    goto <bb 11>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 11> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  tid_39 = (os_taskid_t) toi_28(D);
  # DEBUG tid => tid_39
  # DEBUG BEGIN_STMT
  if (tid_39 == 255)
    goto <bb 12>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 12> [local count: 80717468]:
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.taskCurrent;
  if (_9 == 0B)
    goto <bb 24>; [18.75%]
  else
    goto <bb 13>; [81.25%]

  <bb 13> [local count: 65582943]:
  # DEBUG BEGIN_STMT
  # DEBUG ts => _9
  # DEBUG BEGIN_STMT
  # DEBUG ok => 1
  goto <bb 24>; [100.00%]

  <bb 14> [local count: 156686850]:
  # DEBUG BEGIN_STMT
  OS_nTasks.2_10 = OS_nTasks;
  if (OS_nTasks.2_10 > tid_39)
    goto <bb 15>; [67.00%]
  else
    goto <bb 16>; [33.00%]

  <bb 15> [local count: 104980189]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.3_11 = OS_taskTableBase;
  _12 = (unsigned int) tid_39;
  _13 = _12 * 76;
  ts_42 = OS_taskTableBase.3_11 + _13;
  # DEBUG ts => ts_42
  # DEBUG BEGIN_STMT
  # DEBUG ok => 1
  goto <bb 24>; [100.00%]

  <bb 16> [local count: 51706660]:
  # DEBUG BEGIN_STMT
  r_41 = OS_Error (&OS_svc_GetStackInfo, 2, &p);
  # DEBUG r => r_41
  goto <bb 24>; [100.00%]

  <bb 17> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  iid_34 = toi_28(D) + 65280;
  # DEBUG iid => iid_34
  # DEBUG BEGIN_STMT
  if (iid_34 == 4095)
    goto <bb 18>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 18> [local count: 80717468]:
  # DEBUG BEGIN_STMT
  _14 = OS_kernelData.isrCurrent;
  if (_14 != 4095)
    goto <bb 19>; [66.00%]
  else
    goto <bb 24>; [34.00%]

  <bb 19> [local count: 53273529]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.4_15 = OS_isrTableBase;
  _16 = (unsigned int) _14;
  _17 = _16 * 68;
  is_38 = OS_isrTableBase.4_15 + _17;
  # DEBUG is => is_38
  goto <bb 24>; [100.00%]

  <bb 21> [local count: 156686850]:
  # DEBUG BEGIN_STMT
  OS_nInterrupts.5_18 = OS_nInterrupts;
  if (OS_nInterrupts.5_18 > iid_34)
    goto <bb 22>; [67.00%]
  else
    goto <bb 23>; [33.00%]

  <bb 22> [local count: 104980189]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.6_19 = OS_isrTableBase;
  _20 = (unsigned int) iid_34;
  _21 = _20 * 68;
  is_37 = OS_isrTableBase.6_19 + _21;
  # DEBUG is => is_37
  # DEBUG BEGIN_STMT
  # DEBUG ok => 1
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 51706660]:
  # DEBUG BEGIN_STMT
  r_36 = OS_Error (&OS_svc_GetStackInfo, 47, &p);
  # DEBUG r => r_36

  <bb 24> [local count: 1073741824]:
  # ts_22 = PHI <0B(3), 0B(8), ts_42(15), 0B(19), 0B(22), 0B(23), ts_46(6), 0B(9), _9(13), 0B(12), 0B(16), 0B(18)>
  # is_23 = PHI <0B(3), is_45(8), 0B(15), is_38(19), is_37(22), 0B(23), 0B(6), 0B(9), 0B(13), 0B(12), 0B(16), 0B(18)>
  # r_24 = PHI <r_48(3), 0(8), 0(15), 0(19), 0(22), r_36(23), 0(6), r_44(9), 0(13), 5(12), r_41(16), 0(18)>
  # ok_25 = PHI <0(3), 1(8), 1(15), 1(19), 1(22), 0(23), 1(6), 0(9), 1(13), 0(12), 0(16), 1(18)>
  # DEBUG ok => ok_25
  # DEBUG r => r_24
  # DEBUG is => is_23
  # DEBUG ts => ts_22
  # DEBUG BEGIN_STMT
  if (ok_25 != 0)
    goto <bb 25>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 25> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  OS_FillStackInfo (&OS_kernelData, ts_22, is_23, out_31(D));
  # DEBUG BEGIN_STMT
  OS_ComputeStackStatus (out_31(D));

  <bb 26> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_24;

}


