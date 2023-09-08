
IPA constant propagation start:
Determining dynamic type for call: killresult_15 = OS_killHookFunc.12_4 (&OS_kernelData.eHookContext);
  Starting walk at: killresult_15 = OS_killHookFunc.12_4 (&OS_kernelData.eHookContext);
  instance pointer: &OS_kernelData.eHookContext  Outer instance pointer: OS_kernelData offset: 576 (bits) vtbl reference: 
Determining dynamic type for call: killresult_8 = OS_killHookFunc.9_3 (&OS_kernelData.sHookContext);
  Starting walk at: killresult_8 = OS_killHookFunc.9_3 (&OS_kernelData.sHookContext);
  instance pointer: &OS_kernelData.sHookContext  Outer instance pointer: OS_kernelData offset: 512 (bits) vtbl reference: 
Determining dynamic type for call: killresult_16 = OS_killHookFunc.7_5 (&OS_kernelData.sHookContext);
  Starting walk at: killresult_16 = OS_killHookFunc.7_5 (&OS_kernelData.sHookContext);
  instance pointer: &OS_kernelData.sHookContext  Outer instance pointer: OS_kernelData offset: 512 (bits) vtbl reference: 
  Function call may change dynamic type:OS_QuarantineApplication (_1);
  Function call may change dynamic type:OS_RestartApplication (_4);
Determining dynamic type for call: OS_killTaskFunc.0_2 (_3, _5);
  Starting walk at: OS_killTaskFunc.0_2 (_3, _5);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ShutdownNoHooks/15:
  Jump functions of caller  OS_CORTEXM_IntDisableIsr/12:
  Jump functions of caller  OS_RestartApplication/10:
  Jump functions of caller  OS_QuarantineApplication/9:
  Jump functions of caller  OS_Shutdown/7:
  Jump functions of caller  OS_ErrorAction/5:
    callsite  OS_ErrorAction/5 -> OS_ErrorActionErrorHook/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  OS_ErrorAction/5 -> OS_ErrorActionShutdownHook/3 : 
    callsite  OS_ErrorAction/5 -> OS_ErrorActionStartupHook/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  OS_ErrorAction/5 -> OS_ErrorActionCat2/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  OS_ErrorAction/5 -> OS_ErrorActionTask/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  OS_ErrorActionErrorHook/4:
    indirect simple callsite, calling param -1, offset 0, for stmt killresult_15 = OS_killHookFunc.12_4 (&OS_kernelData.eHookContext);
       param 0: CONST: &OS_kernelData.eHookContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  OS_ErrorActionShutdownHook/3:
    indirect simple callsite, calling param -1, offset 0, for stmt killresult_8 = OS_killHookFunc.9_3 (&OS_kernelData.sHookContext);
       param 0: CONST: &OS_kernelData.sHookContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  OS_ErrorActionStartupHook/2:
    indirect simple callsite, calling param -1, offset 0, for stmt killresult_16 = OS_killHookFunc.7_5 (&OS_kernelData.sHookContext);
       param 0: CONST: &OS_kernelData.sHookContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  OS_ErrorActionCat2/1:
    indirect simple callsite, calling param -1, offset 0, for stmt killresult_31 = OS_killIsrFunc.5_17 (_18);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt killresult_36 = OS_killIsrFunc.2_8 (_9);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  OS_ErrorActionTask/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_killTaskFunc.0_2 (_3, _5);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]

 Propagating constants:

Not considering OS_ErrorAction for cloning; -fipa-cp-clone disabled.

overall_size: 237, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ErrorAction/5:
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
  Node: OS_ErrorActionErrorHook/4:
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
  Node: OS_ErrorActionShutdownHook/3:
  Node: OS_ErrorActionStartupHook/2:
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
  Node: OS_ErrorActionCat2/1:
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
  Node: OS_ErrorActionTask/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_ShutdownNoHooks/15 (OS_ShutdownNoHooks) @06d9fee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorActionShutdownHook/3 (260280255 (estimated locally),0.24 per call) OS_ErrorActionShutdownHook/3 (630447512 (estimated locally),0.59 per call) 
  Calls: 
OS_killHookFunc/14 (OS_killHookFunc) @06dcd750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorActionErrorHook/4 (read)OS_ErrorActionStartupHook/2 (read)OS_ErrorActionShutdownHook/3 (read)
  Availability: not_available
  Varpool flags: read-only
OS_killIsrFunc/13 (OS_killIsrFunc) @06dc5ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorActionCat2/1 (read)OS_ErrorActionCat2/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntDisableIsr/12 (OS_CORTEXM_IntDisableIsr) @06d9fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorActionCat2/1 (89103391 (estimated locally),0.08 per call) 
  Calls: 
OS_isrTableBase/11 (OS_isrTableBase) @06dc5e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorActionCat2/1 (read)OS_ErrorActionCat2/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_RestartApplication/10 (OS_RestartApplication) @06d9f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorActionCat2/1 (20445745 (estimated locally),0.02 per call) OS_ErrorActionStartupHook/2 (44861384 (estimated locally),0.04 per call) OS_ErrorActionTask/0 (20445745 (estimated locally),0.02 per call) 
  Calls: 
OS_QuarantineApplication/9 (OS_QuarantineApplication) @06d9f700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorActionCat2/1 (101016525 (estimated locally),0.09 per call) OS_ErrorActionStartupHook/2 (221647156 (estimated locally),0.21 per call) OS_ErrorActionTask/0 (101016524 (estimated locally),0.09 per call) 
  Calls: 
OS_killTaskFunc/8 (OS_killTaskFunc) @06dc55e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorActionTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Shutdown/7 (OS_Shutdown) @06d9f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorAction/5 (62465793 (estimated locally),0.06 per call) OS_ErrorActionCat2/1 (262778984 (estimated locally),0.24 per call) OS_ErrorActionCat2/1 (59311852 (estimated locally),0.06 per call) OS_ErrorActionCat2/1 (269712168 (estimated locally),0.25 per call) OS_ErrorActionCat2/1 (258483480 (estimated locally),0.24 per call) OS_ErrorActionStartupHook/2 (221647156 (estimated locally),0.21 per call) OS_ErrorActionStartupHook/2 (130140128 (estimated locally),0.12 per call) OS_ErrorActionStartupHook/2 (630447512 (estimated locally),0.59 per call) OS_ErrorActionTask/0 (262778984 (estimated locally),0.24 per call) OS_ErrorActionTask/0 (269712167 (estimated locally),0.25 per call) OS_ErrorActionErrorHook/4 (146287123 (estimated locally),0.14 per call) OS_ErrorActionErrorHook/4 (174387771 (estimated locally),0.16 per call) OS_ErrorActionErrorHook/4 (630447513 (estimated locally),0.59 per call) 
  Calls: 
OS_kernelData/6 (OS_kernelData) @06dc5048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorActionStartupHook/2 (read)OS_ErrorActionErrorHook/4 (addr)OS_ErrorActionErrorHook/4 (write)OS_ErrorActionCat2/1 (read)OS_ErrorActionCat2/1 (read)OS_ErrorActionCat2/1 (read)OS_ErrorActionCat2/1 (read)OS_ErrorActionErrorHook/4 (read)OS_ErrorActionShutdownHook/3 (read)OS_ErrorActionShutdownHook/3 (addr)OS_ErrorActionStartupHook/2 (read)OS_ErrorActionTask/0 (read)OS_ErrorActionStartupHook/2 (addr)OS_ErrorActionTask/0 (read)OS_ErrorAction/5 (read)
  Availability: not_available
  Varpool flags:
OS_ErrorAction/5 (OS_ErrorAction) @06d9f1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Shutdown/7 (62465793 (estimated locally),0.06 per call) OS_ErrorActionErrorHook/4 (32179348 (estimated locally),0.03 per call) OS_ErrorActionShutdownHook/3 (24017273 (estimated locally),0.02 per call) OS_ErrorActionStartupHook/2 (30111927 (estimated locally),0.03 per call) OS_ErrorActionCat2/1 (37753168 (estimated locally),0.04 per call) OS_ErrorActionTask/0 (47333460 (estimated locally),0.04 per call) 
OS_ErrorActionErrorHook/4 (OS_ErrorActionErrorHook) @06d9aee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_kernelData/6 (read)OS_kernelData/6 (write)OS_killHookFunc/14 (read)OS_kernelData/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_ErrorAction/5 (32179348 (estimated locally),0.03 per call) 
  Calls: OS_Shutdown/7 (146287123 (estimated locally),0.14 per call) OS_Shutdown/7 (174387771 (estimated locally),0.16 per call) OS_Shutdown/7 (630447513 (estimated locally),0.59 per call) 
   Indirect call(245238836 (estimated locally),0.23 per call) 
OS_ErrorActionShutdownHook/3 (OS_ErrorActionShutdownHook) @06d9a9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_kernelData/6 (read)OS_killHookFunc/14 (read)OS_kernelData/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: OS_ErrorAction/5 (24017273 (estimated locally),0.02 per call) 
  Calls: OS_ShutdownNoHooks/15 (260280255 (estimated locally),0.24 per call) OS_ShutdownNoHooks/15 (630447512 (estimated locally),0.59 per call) 
   Indirect call(366028113 (estimated locally),0.34 per call) 
OS_ErrorActionStartupHook/2 (OS_ErrorActionStartupHook) @06d9a700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_kernelData/6 (read)OS_kernelData/6 (read)OS_killHookFunc/14 (read)OS_kernelData/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: OS_ErrorAction/5 (30111927 (estimated locally),0.03 per call) 
  Calls: OS_Shutdown/7 (221647156 (estimated locally),0.21 per call) OS_Shutdown/7 (130140128 (estimated locally),0.12 per call) OS_RestartApplication/10 (44861384 (estimated locally),0.04 per call) OS_QuarantineApplication/9 (221647156 (estimated locally),0.21 per call) OS_Shutdown/7 (630447512 (estimated locally),0.59 per call) 
   Indirect call(183014057 (estimated locally),0.17 per call) 
OS_ErrorActionCat2/1 (OS_ErrorActionCat2) @06d9a1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_isrTableBase/11 (read)OS_kernelData/6 (read)OS_killIsrFunc/13 (read)OS_kernelData/6 (read)OS_isrTableBase/11 (read)OS_kernelData/6 (read)OS_killIsrFunc/13 (read)OS_kernelData/6 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_ErrorAction/5 (37753168 (estimated locally),0.04 per call) 
  Calls: OS_Shutdown/7 (262778984 (estimated locally),0.24 per call) OS_Shutdown/7 (59311852 (estimated locally),0.06 per call) OS_RestartApplication/10 (20445745 (estimated locally),0.02 per call) OS_QuarantineApplication/9 (101016525 (estimated locally),0.09 per call) OS_Shutdown/7 (269712168 (estimated locally),0.25 per call) OS_Shutdown/7 (258483480 (estimated locally),0.24 per call) OS_CORTEXM_IntDisableIsr/12 (89103391 (estimated locally),0.08 per call) 
   Indirect call(83409344 (estimated locally),0.08 per call) 
   Indirect call(363501336 (estimated locally),0.34 per call) 
OS_ErrorActionTask/0 (OS_ErrorActionTask) @06cebc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_killTaskFunc/8 (read)OS_kernelData/6 (read)OS_kernelData/6 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: OS_ErrorAction/5 (47333460 (estimated locally),0.04 per call) 
  Calls: OS_Shutdown/7 (262778984 (estimated locally),0.24 per call) OS_RestartApplication/10 (20445745 (estimated locally),0.02 per call) OS_QuarantineApplication/9 (101016524 (estimated locally),0.09 per call) OS_Shutdown/7 (269712167 (estimated locally),0.25 per call) 
   Indirect call(440234147 (estimated locally),0.41 per call) 

;; Function OS_ErrorAction (OS_ErrorAction, funcdef_no=5, decl_uid=6808, cgraph_uid=6, symbol_order=5)

Modification phase of node OS_ErrorAction/5
__attribute__((target ("general-regs-only")))
OS_ErrorAction (os_erroraction_t act, os_result_t res)
{
  unsigned char _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  if (act_4(D) == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  if (act_4(D) == 1)
    goto <bb 16>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 6)
    goto <bb 16>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  if (_1 == 1)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 47333460]:
  # DEBUG BEGIN_STMT
  OS_ErrorActionTask (act_4(D), res_5(D));
  goto <bb 16>; [100.00%]

  <bb 7> [local count: 186527509]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 37753168]:
  # DEBUG BEGIN_STMT
  OS_ErrorActionCat2 (act_4(D), res_5(D));
  goto <bb 16>; [100.00%]

  <bb 9> [local count: 148774341]:
  # DEBUG BEGIN_STMT
  if (_1 == 8)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 30111927]:
  # DEBUG BEGIN_STMT
  OS_ErrorActionStartupHook (act_4(D), res_5(D));
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 118662414]:
  # DEBUG BEGIN_STMT
  if (_1 == 9)
    goto <bb 12>; [20.24%]
  else
    goto <bb 13>; [79.76%]

  <bb 12> [local count: 24017273]:
  # DEBUG BEGIN_STMT
  OS_ErrorActionShutdownHook ();
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 94645142]:
  # DEBUG BEGIN_STMT
  if (_1 == 10)
    goto <bb 14>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 14> [local count: 32179348]:
  # DEBUG BEGIN_STMT
  OS_ErrorActionErrorHook (act_4(D), res_5(D));
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 62465793]:
  # DEBUG BEGIN_STMT
  OS_Shutdown (res_5(D), 0);

  <bb 16> [local count: 1073741824]:
  # res_2 = PHI <0(2), res_5(D)(3), res_5(D)(4), res_5(D)(6), res_5(D)(8), res_5(D)(10), res_5(D)(12), res_5(D)(14), res_5(D)(15)>
  # DEBUG res => res_2
  # DEBUG BEGIN_STMT
  return res_2;

}


