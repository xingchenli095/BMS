
IPA constant propagation start:
Determining dynamic type for call: OS_preemptIsrExecTimingFp.1_5 (&accSave);
  Starting walk at: OS_preemptIsrExecTimingFp.1_5 (&accSave);
  instance pointer: &accSave  Outer instance pointer: accSave offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: OS_preemptTaskExecTimingFp.0_2 (_3);
  Starting walk at: OS_preemptTaskExecTimingFp.0_2 (_3);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  Starting walk at: _9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  instance pointer: isr_79  Outer instance pointer: isr_79 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_preemptTaskExecTimingFp.0_2 (_3);
  Function call may change dynamic type:OS_preemptIsrExecTimingFp.1_5 (&accSave);
Determining dynamic type for call: _9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  Starting walk at: _9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  instance pointer: _130  Outer instance pointer: id_80 offset: 64 (bits) vtbl reference: 
  Function call may change dynamic type:OS_preemptTaskExecTimingFp.0_2 (_3);
  Function call may change dynamic type:OS_preemptIsrExecTimingFp.1_5 (&accSave);
Determining dynamic type for call: OS_stopIsrExecTimingFp.8_36 (isr_79);
  Starting walk at: OS_stopIsrExecTimingFp.8_36 (isr_79);
  instance pointer: isr_79  Outer instance pointer: isr_79 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (level_105);
  Function call may change dynamic type:_21 ();
  Function call may change dynamic type:level_105 = OS_CORTEXM_IntSetDisablingLevel (_20);
  Function call may change dynamic type:OS_startIsrExecTimingFp.4_14 (_15);
  Function call may change dynamic type:OS_ptrPreIsrHook.3_13 (iid_78(D));
  Function call may change dynamic type:_9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  Function call may change dynamic type:OS_preemptTaskExecTimingFp.0_2 (_3);
  Function call may change dynamic type:OS_preemptIsrExecTimingFp.1_5 (&accSave);
  Function call may change dynamic type:OS_CORTEXM_ResetKernStackRw (isr_79);
  Function call may change dynamic type:OS_CORTEXM_Call (_31, _32, _33, _34, iftmp.7_64, 0);
  Function call may change dynamic type:OS_SetIsrProtection (isr_79, id_80);
Determining dynamic type for call: OS_resumeIsrExecTimingFp.22_62 (&accSave);
  Starting walk at: OS_resumeIsrExecTimingFp.22_62 (&accSave);
  instance pointer: &accSave  Outer instance pointer: accSave offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  Function call may change dynamic type:OS_preemptTaskExecTimingFp.0_2 (_3);
  Function call may change dynamic type:OS_preemptIsrExecTimingFp.1_5 (&accSave);
  Function call may change dynamic type:OS_CleanUpISRResources.isra.0 (_131);
  Function call may change dynamic type:OS_SetIsrProtection (_41, _42);
  Function call may change dynamic type:OS_ptrPostIsrHook.9_37 (iid_78(D));
  Function call may change dynamic type:OS_stopIsrExecTimingFp.8_36 (isr_79);
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (level_105);
  Function call may change dynamic type:_21 ();
  Function call may change dynamic type:level_105 = OS_CORTEXM_IntSetDisablingLevel (_20);
  Function call may change dynamic type:OS_startIsrExecTimingFp.4_14 (_15);
  Function call may change dynamic type:OS_ptrPreIsrHook.3_13 (iid_78(D));
  Function call may change dynamic type:OS_CORTEXM_ResetKernStackRw (isr_79);
  Function call may change dynamic type:OS_CORTEXM_Call (_31, _32, _33, _34, iftmp.7_64, 0);
  Function call may change dynamic type:OS_SetIsrProtection (isr_79, id_80);
  Function call may change dynamic type:OS_SetProtection (_43);
  Function call may change dynamic type:OS_Error (&OS_svc_IsrHandler, 55, 0B);
  Function call may change dynamic type:OS_Error (&OS_svc_IsrHandler, 73, 0B);
  Function call may change dynamic type:OS_KillIsr (oldIsr_84);
Determining dynamic type for call: OS_startTaskExecTimingFp.21_61 (_58);
  Starting walk at: OS_startTaskExecTimingFp.21_61 (_58);
  instance pointer: _58  Outer instance pointer: _58 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  Function call may change dynamic type:OS_preemptTaskExecTimingFp.0_2 (_3);
  Function call may change dynamic type:OS_preemptIsrExecTimingFp.1_5 (&accSave);
  Function call may change dynamic type:OS_CleanUpISRResources.isra.0 (_131);
  Function call may change dynamic type:OS_SetIsrProtection (_41, _42);
  Function call may change dynamic type:OS_ptrPostIsrHook.9_37 (iid_78(D));
  Function call may change dynamic type:OS_stopIsrExecTimingFp.8_36 (isr_79);
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (level_105);
  Function call may change dynamic type:_21 ();
  Function call may change dynamic type:level_105 = OS_CORTEXM_IntSetDisablingLevel (_20);
  Function call may change dynamic type:OS_startIsrExecTimingFp.4_14 (_15);
  Function call may change dynamic type:OS_ptrPreIsrHook.3_13 (iid_78(D));
  Function call may change dynamic type:OS_CORTEXM_ResetKernStackRw (isr_79);
  Function call may change dynamic type:OS_CORTEXM_Call (_31, _32, _33, _34, iftmp.7_64, 0);
  Function call may change dynamic type:OS_SetIsrProtection (isr_79, id_80);
  Function call may change dynamic type:OS_SetProtection (_43);
  Function call may change dynamic type:OS_Error (&OS_svc_IsrHandler, 55, 0B);
  Function call may change dynamic type:OS_Error (&OS_svc_IsrHandler, 73, 0B);
  Function call may change dynamic type:OS_KillIsr (oldIsr_84);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CleanUpISRResources.isra.0/27:
  Jump functions of caller  OS_IsrErrorChecksOk.isra.0/26:
    indirect simple callsite, calling param -1, offset 0, for stmt _11 = OS_rateMonitorFunc.25_10 (_9);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  OS_ReleaseLocks/25:
  Jump functions of caller  OS_CORTEXM_IntClearIsr/24:
  Jump functions of caller  OS_KillIsr/20:
  Jump functions of caller  OS_Error/18:
  Jump functions of caller  OS_SetProtection/17:
  Jump functions of caller  OS_CORTEXM_ResetKernStackRw/13:
  Jump functions of caller  OS_CORTEXM_Call/12:
  Jump functions of caller  OS_SetIsrProtection/11:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/10:
  Jump functions of caller  OS_Cat2Entry/2:
    callsite  OS_Cat2Entry/2 -> OS_CleanUpISRResources.isra.0/27 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  OS_Cat2Entry/2 -> OS_IsrErrorChecksOk.isra.0/26 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    indirect simple callsite, calling param -1, offset 0, for stmt OS_resumeIsrExecTimingFp.22_62 (&accSave);
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startTaskExecTimingFp.21_61 (_58);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrPostIsrHook.9_37 (iid_78(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_stopIsrExecTimingFp.8_36 (isr_79);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _21 ();
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startIsrExecTimingFp.4_14 (_15);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrPreIsrHook.3_13 (iid_78(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_preemptIsrExecTimingFp.1_5 (&accSave);
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    indirect simple callsite, calling param -1, offset 0, for stmt OS_preemptTaskExecTimingFp.0_2 (_3);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_Cat2Entry for cloning; -fipa-cp-clone disabled.

overall_size: 260, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CleanUpISRResources.isra.0/27:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: OS_IsrErrorChecksOk.isra.0/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         os_uint8_t * ~[0B, 0B]
        AGGS VARIABLE
  Node: OS_Cat2Entry/2:
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

OS_CleanUpISRResources.isra.0/27 (OS_CleanUpISRResources.isra.0) @06dca000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: OS_kernelData/3 (read)OS_svc_IsrHandler/19 (addr)OS_svc_IsrHandler/19 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_Cat2Entry/2 (262422501 (estimated locally),0.24 per call) 
  Calls: OS_ReleaseLocks/25 (1073741824 (estimated locally),1.00 per call) OS_Error/18 (354334802 (estimated locally),0.33 per call) OS_Error/18 (182536110 (estimated locally),0.17 per call) 
OS_IsrErrorChecksOk.isra.0/26 (OS_IsrErrorChecksOk.isra.0) @06dca9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: OS_configMode/9 (read)OS_kernelData/3 (read)OS_svc_IsrHandler/19 (addr)OS_rateMonitorFunc/23 (read)OS_svc_IsrHandler/19 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_Cat2Entry/2 (1073741823 (estimated locally),1.00 per call) 
  Calls: OS_Error/18 (195273909 (estimated locally),0.18 per call) OS_CORTEXM_IntClearIsr/24 (195273909 (estimated locally),0.18 per call) OS_Error/18 (177167401 (estimated locally),0.17 per call) 
   Indirect call(591739120 (estimated locally),0.55 per call) 
OS_ReleaseLocks/25 (OS_ReleaseLocks) @06d63d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CleanUpISRResources.isra.0/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntClearIsr/24 (OS_CORTEXM_IntClearIsr) @06d63b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_IsrErrorChecksOk.isra.0/26 (195273909 (estimated locally),0.18 per call) 
  Calls: 
OS_rateMonitorFunc/23 (OS_rateMonitorFunc) @06d9c798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IsrErrorChecksOk.isra.0/26 (read)
  Availability: not_available
  Varpool flags: read-only
OS_resumeIsrExecTimingFp/22 (OS_resumeIsrExecTimingFp) @06d9c288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_startTaskExecTimingFp/21 (OS_startTaskExecTimingFp) @06d9c1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_KillIsr/20 (OS_KillIsr) @06d639a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (120473832 (estimated locally),0.11 per call) 
  Calls: 
OS_svc_IsrHandler/19 (OS_svc_IsrHandler) @06d9c0d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IsrErrorChecksOk.isra.0/26 (addr)OS_IsrErrorChecksOk.isra.0/26 (addr)OS_CleanUpISRResources.isra.0/27 (addr)OS_CleanUpISRResources.isra.0/27 (addr)OS_Cat2Entry/2 (addr)OS_Cat2Entry/2 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/18 (OS_Error) @06d638c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (262422501 (estimated locally),0.24 per call) OS_Cat2Entry/2 (80098317 (estimated locally),0.07 per call) OS_CleanUpISRResources.isra.0/27 (354334802 (estimated locally),0.33 per call) OS_CleanUpISRResources.isra.0/27 (182536110 (estimated locally),0.17 per call) OS_IsrErrorChecksOk.isra.0/26 (195273909 (estimated locally),0.18 per call) OS_IsrErrorChecksOk.isra.0/26 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_SetProtection/17 (OS_SetProtection) @06d637e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (192333467 (estimated locally),0.18 per call) 
  Calls: 
OS_nInterrupts/16 (OS_nInterrupts) @06d9bf30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ptrPostIsrHook/15 (OS_ptrPostIsrHook) @06d9be58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_stopIsrExecTimingFp/14 (OS_stopIsrExecTimingFp) @06d9bd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_ResetKernStackRw/13 (OS_CORTEXM_ResetKernStackRw) @06d63700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (359703511 (estimated locally),0.34 per call) 
  Calls: 
OS_CORTEXM_Call/12 (OS_CORTEXM_Call) @06d63620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (359703511 (estimated locally),0.34 per call) 
  Calls: 
OS_SetIsrProtection/11 (OS_SetIsrProtection) @06d63540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (177167401 (estimated locally),0.17 per call) OS_Cat2Entry/2 (359703511 (estimated locally),0.34 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/10 (OS_CORTEXM_IntSetDisablingLevel) @06d63460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Cat2Entry/2 (177167401 (estimated locally),0.17 per call) OS_Cat2Entry/2 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_configMode/9 (OS_configMode) @06d9bb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IsrErrorChecksOk.isra.0/26 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_startIsrExecTimingFp/8 (OS_startIsrExecTimingFp) @06d9ba68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ptrPreIsrHook/7 (OS_ptrPreIsrHook) @06d9b990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/6 (OS_isrTableBase) @06d9b900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_preemptIsrExecTimingFp/5 (OS_preemptIsrExecTimingFp) @06d9b828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_preemptTaskExecTimingFp/4 (OS_preemptTaskExecTimingFp) @06d9b750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat2Entry/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/3 (OS_kernelData) @06d9b708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IsrErrorChecksOk.isra.0/26 (read)OS_CleanUpISRResources.isra.0/27 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (read)OS_Cat2Entry/2 (write)OS_Cat2Entry/2 (write)
  Availability: not_available
  Varpool flags:
OS_Cat2Entry/2 (OS_Cat2Entry) @06cfeee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/3 (read)OS_preemptTaskExecTimingFp/4 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_preemptIsrExecTimingFp/5 (read)OS_isrTableBase/6 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_kernelData/3 (write)OS_kernelData/3 (read)OS_kernelData/3 (write)OS_kernelData/3 (read)OS_kernelData/3 (write)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_kernelData/3 (write)OS_ptrPreIsrHook/7 (read)OS_kernelData/3 (write)OS_startIsrExecTimingFp/8 (read)OS_configMode/9 (read)OS_stopIsrExecTimingFp/14 (read)OS_kernelData/3 (read)OS_kernelData/3 (write)OS_ptrPostIsrHook/15 (read)OS_kernelData/3 (write)OS_nInterrupts/16 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_kernelData/3 (read)OS_svc_IsrHandler/19 (addr)OS_kernelData/3 (write)OS_kernelData/3 (write)OS_kernelData/3 (write)OS_configMode/9 (read)OS_kernelData/3 (read)OS_svc_IsrHandler/19 (addr)OS_kernelData/3 (write)OS_kernelData/3 (write)OS_kernelData/3 (read)OS_startTaskExecTimingFp/21 (read)OS_resumeIsrExecTimingFp/22 (read)OS_kernelData/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_KillIsr/20 (120473832 (estimated locally),0.11 per call) OS_Error/18 (262422501 (estimated locally),0.24 per call) OS_Error/18 (80098317 (estimated locally),0.07 per call) OS_CleanUpISRResources.isra.0/27 (262422501 (estimated locally),0.24 per call) OS_SetProtection/17 (192333467 (estimated locally),0.18 per call) OS_SetIsrProtection/11 (177167401 (estimated locally),0.17 per call) OS_CORTEXM_ResetKernStackRw/13 (359703511 (estimated locally),0.34 per call) OS_CORTEXM_Call/12 (359703511 (estimated locally),0.34 per call) OS_SetIsrProtection/11 (359703511 (estimated locally),0.34 per call) OS_CORTEXM_IntSetDisablingLevel/10 (177167401 (estimated locally),0.17 per call) OS_CORTEXM_IntSetDisablingLevel/10 (177167401 (estimated locally),0.17 per call) OS_IsrErrorChecksOk.isra.0/26 (1073741823 (estimated locally),1.00 per call) 
   Indirect call(240947665 (estimated locally),0.22 per call) 
   Indirect call(127775277 (estimated locally),0.12 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 
   Indirect call(177167401 (estimated locally),0.17 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 
   Indirect call(536870911 (estimated locally),0.50 per call) 
   Indirect call(240947665 (estimated locally),0.22 per call) 
   Indirect call(365072220 (estimated locally),0.34 per call) 

;; Function OS_Cat2Entry (OS_Cat2Entry, funcdef_no=2, decl_uid=6881, cgraph_uid=3, symbol_order=2)

Modification phase of node OS_Cat2Entry/2
__attribute__((target ("general-regs-only")))
OS_Cat2Entry (os_isrid_t iid)
{
  os_uint8_t Os_CallHookTmp;
  register os_stackelement_t * OS_getSpResult;
  os_intstatus_t level;
  os_uint8_t Os_CallHookTmp;
  struct os_accountingsave_t accSave;
  os_isrid_t oldIsr;
  os_uint8_t inFunction;
  os_uint8_t inKernel;
  struct os_isrdynamic_t * id;
  const struct os_isr_t * isr;
  unsigned char _1;
  void (*<T62f>) (const struct os_task_t *) OS_preemptTaskExecTimingFp.0_2;
  const struct os_task_t * _3;
  unsigned char _4;
  void (*<T64c>) (struct os_accountingsave_t *) OS_preemptIsrExecTimingFp.1_5;
  const struct os_isr_t * OS_isrTableBase.2_6;
  unsigned int _7;
  unsigned int _8;
  int _9;
  unsigned int _10;
  unsigned char _11;
  unsigned char _12;
  void (*<T4ec>) (os_isrid_t) OS_ptrPreIsrHook.3_13;
  void (*<T645>) (os_tick_t) OS_startIsrExecTimingFp.4_14;
  unsigned int _15;
  unsigned char _16;
  unsigned char _17;
  unsigned int OS_configMode.5_18;
  unsigned int _19;
  short unsigned int _20;
  void (*<T467>) (void) _21;
  unsigned int _22;
  unsigned int _23;
  unsigned char _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  unsigned int _29;
  os_stackelement_t * _30;
  short unsigned int _31;
  void (*<T467>) (void) _32;
  os_stackelement_t * * _33;
  os_stackelement_t * _34;
  const struct os_appcontext_t * _35;
  void (*<T652>) (const struct os_isr_t *) OS_stopIsrExecTimingFp.8_36;
  void (*<T4ec>) (os_isrid_t) OS_ptrPostIsrHook.9_37;
  short unsigned int OS_nInterrupts.10_38;
  unsigned int _39;
  unsigned int _40;
  const struct os_isr_t * _41;
  struct os_isrdynamic_t * _42;
  const struct os_task_t * _43;
  unsigned int _44;
  unsigned char _45;
  unsigned char _46;
  unsigned char _47;
  unsigned int OS_configMode.19_48;
  unsigned int _49;
  os_stackelement_t * _50;
  unsigned int _51;
  unsigned int _52;
  unsigned int _53;
  const struct os_isr_t * _54;
  struct os_isrdynamic_t * _55;
  unsigned char _56;
  unsigned char _57;
  const struct os_task_t * _58;
  struct os_taskdynamic_t * _59;
  unsigned char _60;
  void (*<T62f>) (const struct os_task_t *) OS_startTaskExecTimingFp.21_61;
  void (*<T64c>) (struct os_accountingsave_t *) OS_resumeIsrExecTimingFp.22_62;
  unsigned int iftmp.6_63;
  os_uint8_t iftmp.7_64;
  unsigned int iftmp.6_95;
  os_uint8_t iftmp.7_98;
  unsigned char _127;
  unsigned char _128;
  os_uint8_t * _130;
  unsigned char _131;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG acc => &OS_kernelData.accounting
  # DEBUG BEGIN_STMT
  accSave.inFunction = 255;
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.accounting.inFunction;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  OS_preemptTaskExecTimingFp.0_2 = OS_preemptTaskExecTimingFp;
  _3 = OS_kernelData.taskCurrent;
  OS_preemptTaskExecTimingFp.0_2 (_3);
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.inFunction;
  accSave.inFunction = _4;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  OS_preemptIsrExecTimingFp.1_5 = OS_preemptIsrExecTimingFp;
  OS_preemptIsrExecTimingFp.1_5 (&accSave);

  <bb 6> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_isrTableBase.2_6 = OS_isrTableBase;
  _7 = (unsigned int) iid_78(D);
  _8 = _7 * 68;
  isr_79 = OS_isrTableBase.2_6 + _8;
  # DEBUG isr => isr_79
  # DEBUG BEGIN_STMT
  id_80 = isr_79->dynamic;
  # DEBUG id => id_80
  # DEBUG BEGIN_STMT
  inKernel_81 = OS_kernelData.inKernel;
  # DEBUG inKernel => inKernel_81
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  inFunction_82 = OS_kernelData.inFunction;
  # DEBUG inFunction => inFunction_82
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 3;
  # DEBUG BEGIN_STMT
  oldIsr_84 = OS_kernelData.isrCurrent;
  # DEBUG oldIsr => oldIsr_84
  # DEBUG BEGIN_STMT
  OS_kernelData.isrCurrent = iid_78(D);
  # DEBUG BEGIN_STMT
  _130 = &MEM[(unsigned char *)id_80 + 8B];
  # DEBUG D#1 => id_80
  _9 = OS_IsrErrorChecksOk.isra.0 (isr_79, _130);
  if (_9 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 7> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  _10 = OS_kernelData.isrLastLock;
  # DEBUG oldLastLock => _10
  # DEBUG BEGIN_STMT
  OS_kernelData.isrLastLock = 4294967295;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  _11 = OS_kernelData.nestSuspendOs;
  # DEBUG nestOs => _11
  # DEBUG BEGIN_STMT
  _12 = OS_kernelData.nestSuspendAll;
  # DEBUG nestAll => _12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_88 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_88
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 13;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrPreIsrHook.3_13 = OS_ptrPreIsrHook;
  OS_ptrPreIsrHook.3_13 (iid_78(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_88;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_startIsrExecTimingFp.4_14 = OS_startIsrExecTimingFp;
  _15 = isr_79->execBudget;
  OS_startIsrExecTimingFp.4_14 (_15);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = id_80->statusflags;
  _17 = _16 & 191;
  id_80->statusflags = _17;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_configMode.5_18 = OS_configMode;
  _19 = OS_configMode.5_18 & 2048;
  if (_19 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  id_80->c.sp = 0B;
  # DEBUG BEGIN_STMT
  _20 = isr_79->arch.priority;
  level_105 = OS_CORTEXM_IntSetDisablingLevel (_20);
  # DEBUG level => level_105
  # DEBUG BEGIN_STMT
  _21 = isr_79->func;
  _21 ();
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (level_105);
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_94);
  # DEBUG OS_getSpResult => OS_getSpResult_94
  # DEBUG BEGIN_STMT
  _22 = (unsigned int) OS_getSpResult_94;
  _23 = _22 + 4294967232;
  _24 = isr_79->arch.mpuSizeStack;
  if (_24 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 179851755]:
  _25 = (unsigned int) _24;
  _26 = _25 >> 1;
  _27 = _26 + 1;
  _28 = 1 << _27;
  iftmp.6_95 = -_28;

  <bb 11> [local count: 359703511]:
  # iftmp.6_63 = PHI <iftmp.6_95(10), 4294967288(9)>
  _29 = _23 & iftmp.6_63;
  _30 = (os_stackelement_t *) _29;
  id_80->c.stackLimit = _30;
  # DEBUG BEGIN_STMT
  OS_SetIsrProtection (isr_79, id_80);
  # DEBUG BEGIN_STMT
  _31 = isr_79->arch.priority;
  _32 = isr_79->func;
  _33 = &id_80->c.sp;
  _34 = id_80->c.stackLimit;
  _35 = isr_79->app;
  if (_35 != 0B)
    goto <bb 12>; [70.00%]
  else
    goto <bb 13>; [30.00%]

  <bb 12> [local count: 251792457]:
  iftmp.7_98 = _35->flags;

  <bb 13> [local count: 359703511]:
  # iftmp.7_64 = PHI <iftmp.7_98(12), 1(11)>
  OS_CORTEXM_Call (_31, _32, _33, _34, iftmp.7_64, 0);
  # DEBUG BEGIN_STMT
  OS_CORTEXM_ResetKernStackRw (isr_79);
  # DEBUG BEGIN_STMT
  id_80->c.sp = 0B;
  # DEBUG BEGIN_STMT
  id_80->c.stackLimit = 0B;

  <bb 14> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_stopIsrExecTimingFp.8_36 = OS_stopIsrExecTimingFp;
  OS_stopIsrExecTimingFp.8_36 (isr_79);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_109 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_109
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 14;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrPostIsrHook.9_37 = OS_ptrPostIsrHook;
  OS_ptrPostIsrHook.9_37 (iid_78(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_109;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_nInterrupts.10_38 = OS_nInterrupts;
  if (OS_nInterrupts.10_38 > oldIsr_84)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _39 = (unsigned int) oldIsr_84;
  _40 = _39 * 68;
  _41 = OS_isrTableBase.2_6 + _40;
  _42 = _41->dynamic;
  OS_SetIsrProtection (_41, _42);
  goto <bb 18>; [100.00%]

  <bb 16> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  _43 = OS_kernelData.taskCurrent;
  if (_43 != 0B)
    goto <bb 17>; [53.47%]
  else
    goto <bb 18>; [46.53%]

  <bb 17> [local count: 192333467]:
  # DEBUG BEGIN_STMT
  OS_SetProtection (_43);

  <bb 18> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _44 = OS_kernelData.isrLastLock;
  if (_44 != 4294967295)
    goto <bb 19>; [48.88%]
  else
    goto <bb 20>; [51.12%]

  <bb 19> [local count: 262422501]:
  # DEBUG BEGIN_STMT
  _131 = MEM[(unsigned char *)id_80 + 8B];
  # DEBUG D#2 => id_80
  OS_CleanUpISRResources.isra.0 (_131);
  goto <bb 24>; [100.00%]

  <bb 20> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  _45 = OS_kernelData.nestSuspendOs;
  if (_11 != _45)
    goto <bb 22>; [66.00%]
  else
    goto <bb 21>; [34.00%]

  <bb 21> [local count: 93312459]:
  _46 = OS_kernelData.nestSuspendAll;
  if (_12 != _46)
    goto <bb 22>; [66.00%]
  else
    goto <bb 24>; [34.00%]

  <bb 22> [local count: 242722173]:
  # DEBUG BEGIN_STMT
  _47 = id_80->statusflags;
  _128 = _47 & 64;
  if (_128 == 0)
    goto <bb 23>; [33.00%]
  else
    goto <bb 24>; [67.00%]

  <bb 23> [local count: 80098317]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_IsrHandler, 55, 0B);

  <bb 24> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.isrLastLock = _10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendOs = _11;
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendAll = _12;

  <bb 25> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_configMode.19_48 = OS_configMode;
  _49 = OS_configMode.19_48 & 64;
  if (_49 != 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 26> [local count: 536870911]:
  _50 = OS_kernelData.iStackBase;
  _51 = *_50;
  if (_51 != 3958107115)
    goto <bb 27>; [48.88%]
  else
    goto <bb 28>; [51.12%]

  <bb 27> [local count: 262422501]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_IsrHandler, 73, 0B);

  <bb 28> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  OS_kernelData.isrCurrent = oldIsr_84;
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = inFunction_82;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (inFunction_82 == 3)
    goto <bb 29>; [34.00%]
  else
    goto <bb 31>; [66.00%]

  <bb 29> [local count: 365072220]:
  _52 = (unsigned int) oldIsr_84;
  _53 = _52 * 68;
  _54 = OS_isrTableBase.2_6 + _53;
  _55 = _54->dynamic;
  _56 = _55->statusflags;
  _127 = _56 & 64;
  if (_127 != 0)
    goto <bb 30>; [33.00%]
  else
    goto <bb 31>; [67.00%]

  <bb 30> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_KillIsr (oldIsr_84);

  <bb 31> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _57 = accSave.inFunction;
  if (_57 == 1)
    goto <bb 32>; [34.00%]
  else
    goto <bb 35>; [66.00%]

  <bb 32> [local count: 365072221]:
  # DEBUG BEGIN_STMT
  _58 = OS_kernelData.taskCurrent;
  if (_58 != 0B)
    goto <bb 33>; [70.00%]
  else
    goto <bb 38>; [30.00%]

  <bb 33> [local count: 255550554]:
  _59 = _58->dynamic;
  _60 = _59->state;
  if (_60 > 2)
    goto <bb 34>; [50.00%]
  else
    goto <bb 38>; [50.00%]

  <bb 34> [local count: 127775277]:
  # DEBUG BEGIN_STMT
  OS_startTaskExecTimingFp.21_61 = OS_startTaskExecTimingFp;
  OS_startTaskExecTimingFp.21_61 (_58);
  goto <bb 38>; [100.00%]

  <bb 35> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_57 == 3)
    goto <bb 36>; [34.00%]
  else
    goto <bb 37>; [66.00%]

  <bb 36> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  OS_resumeIsrExecTimingFp.22_62 = OS_resumeIsrExecTimingFp;
  OS_resumeIsrExecTimingFp.22_62 (&accSave);
  goto <bb 38>; [100.00%]

  <bb 37> [local count: 467721938]:
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.inFunction = 255;

  <bb 38> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => {CLOBBER}
  # DEBUG nestOs => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG nestAll => D#4
  # DEBUG D#5 => {CLOBBER}
  # DEBUG oldLastLock => D#5
  accSave ={v} {CLOBBER};
  return inKernel_81;

}


