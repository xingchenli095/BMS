
IPA constant propagation start:
Determining dynamic type for call: OS_HookRestoreMemprot.isra.0 (&OS_kernelData, _62, saveHookApp_32, saveInFunction_36);
  Starting walk at: OS_HookRestoreMemprot.isra.0 (&OS_kernelData, _62, saveHookApp_32, saveInFunction_36);
  instance pointer: &OS_kernelData  Outer instance pointer: OS_kernelData offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_Call (OS_kernDisableLevel.8_23, _24, &OS_kernelData.eHookContext.c.sp, _25, iftmp.9_48, code_49(D));
  Function call may change dynamic type:OS_SetHookProtection (app_33(D), &OS_kernelData.eHookContext.c, _22);
  Function call may change dynamic type:is_39 = OS_IntDisableConditional ();
Determining dynamic type for call: OS_HookRestoreMemprot.isra.0 (&OS_kernelData, _62, saveHookApp_32, saveInFunction_36);
  Starting walk at: OS_HookRestoreMemprot.isra.0 (&OS_kernelData, _62, saveHookApp_32, saveInFunction_36);
  instance pointer: saveHookApp_32  Outer instance pointer: saveHookApp_32 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_Call (OS_kernDisableLevel.8_23, _24, &OS_kernelData.eHookContext.c.sp, _25, iftmp.9_48, code_49(D));
  Function call may change dynamic type:OS_SetHookProtection (app_33(D), &OS_kernelData.eHookContext.c, _22);
  Function call may change dynamic type:is_39 = OS_IntDisableConditional ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_HookRestoreMemprot.isra.0/18:
  Jump functions of caller  OS_SetProtection/16:
  Jump functions of caller  OS_SetIsrProtection/15:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/12:
  Jump functions of caller  OS_CORTEXM_Call/11:
  Jump functions of caller  OS_SetHookProtection/9:
  Jump functions of caller  OS_IntDisableConditional/6:
  Jump functions of caller  OS_Error/4:
  Jump functions of caller  OS_CallErrorHook/1:
    callsite  OS_CallErrorHook/1 -> OS_HookRestoreMemprot.isra.0/18 : 
       param 0: CONST: &OS_kernelData
         Aggregate passed by reference:
           offset: 576, cst: 0B
           offset: 608, cst: 0B
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect aggregate callsite, calling param 0, offset 96, by reference, for stmt _8 (code_49(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering OS_CallErrorHook for cloning; -fipa-cp-clone disabled.

overall_size: 136, max_new_size: 11001
 - context independent values, size: 49, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: OS_HookRestoreMemprot.isra.0/18:
    param [0]: &OS_kernelData [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct os_kerneldata_t * ~[0B, 0B]
        ref offset 576: 0B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
        ref offset 608: 0B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
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
  Node: OS_CallErrorHook/1:
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

 - Creating a specialized node of OS_HookRestoreMemprot.isra.0/18 for all known contexts.
    replacing param #0 kernel_data with const &OS_kernelData
Propagated bits info for function OS_HookRestoreMemprot.isra.0.constprop/19:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function OS_HookRestoreMemprot.isra.0/18:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: OS_HookRestoreMemprot.isra.0/18
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_HookRestoreMemprot.isra.0.constprop.0/19 (OS_HookRestoreMemprot.isra.0.constprop) @06cd1c40
  Type: function definition analyzed
  Visibility: artificial
  References: OS_nInterrupts/13 (read)OS_isrTableBase/14 (read)OS_sHookMpuSize/17 (read)OS_sHookMpuSize/17 (read)OS_kernelData/2 (addr)
  Referring: 
  Clone of OS_HookRestoreMemprot.isra.0/18
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: OS_CallErrorHook/1 (418168753 (estimated locally),0.39 per call) 
  Calls: OS_SetIsrProtection/15 (35433480 (estimated locally),0.03 per call) OS_SetProtection/16 (57412975 (estimated locally),0.05 per call) OS_SetHookProtection/9 (35433480 (estimated locally),0.03 per call) OS_SetHookProtection/9 (35433480 (estimated locally),0.03 per call) 
OS_HookRestoreMemprot.isra.0/18 (OS_HookRestoreMemprot.isra.0) @06df79a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_sHookMpuSize/17 (OS_sHookMpuSize) @06d868b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_HookRestoreMemprot.isra.0.constprop.0/19 (read)OS_HookRestoreMemprot.isra.0.constprop.0/19 (read)
  Availability: not_available
  Varpool flags: read-only
OS_SetProtection/16 (OS_SetProtection) @06d7f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HookRestoreMemprot.isra.0.constprop/19 (57412975 (estimated locally),0.05 per call) 
  Calls: 
OS_SetIsrProtection/15 (OS_SetIsrProtection) @06d7f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HookRestoreMemprot.isra.0.constprop/19 (35433480 (estimated locally),0.03 per call) 
  Calls: 
OS_isrTableBase/14 (OS_isrTableBase) @06d867e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_HookRestoreMemprot.isra.0.constprop.0/19 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/13 (OS_nInterrupts) @06d86798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_HookRestoreMemprot.isra.0.constprop.0/19 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/12 (OS_CORTEXM_IntSetDisablingLevel) @06d7f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallErrorHook/1 (836337507 (estimated locally),0.78 per call) 
  Calls: 
OS_CORTEXM_Call/11 (OS_CORTEXM_Call) @06d7f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallErrorHook/1 (418168753 (estimated locally),0.39 per call) 
  Calls: 
OS_kernDisableLevel/10 (OS_kernDisableLevel) @06d860d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallErrorHook/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_SetHookProtection/9 (OS_SetHookProtection) @06d7f460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_HookRestoreMemprot.isra.0.constprop/19 (35433480 (estimated locally),0.03 per call) OS_HookRestoreMemprot.isra.0.constprop/19 (35433480 (estimated locally),0.03 per call) OS_CallErrorHook/1 (418168753 (estimated locally),0.39 per call) 
  Calls: 
OS_eHookStackLen/8 (OS_eHookStackLen) @06d86048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallErrorHook/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_eHookMpuSize/7 (OS_eHookMpuSize) @06d86000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallErrorHook/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_IntDisableConditional/6 (OS_IntDisableConditional) @06d7f380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallErrorHook/1 (836337506 (estimated locally),0.78 per call) 
  Calls: 
OS_svc_HookHandler/5 (OS_svc_HookHandler) @06cacea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallErrorHook/1 (addr)OS_CallErrorHook/1 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/4 (OS_Error) @06d7f1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallErrorHook/1 (275991377 (estimated locally),0.26 per call) OS_CallErrorHook/1 (237404317 (estimated locally),0.22 per call) 
  Calls: 
OS_configMode/3 (OS_configMode) @06cace10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallErrorHook/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/2 (OS_kernelData) @06cacdc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (addr)OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (addr)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (addr)OS_CallErrorHook/1 (read)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (write)OS_CallErrorHook/1 (write)OS_HookRestoreMemprot.isra.0.constprop.0/19 (addr)
  Availability: not_available
  Varpool flags:
OS_CallErrorHook/1 (OS_CallErrorHook) @06d7f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/2 (read)OS_kernelData/2 (write)OS_configMode/3 (read)OS_kernelData/2 (read)OS_svc_HookHandler/5 (addr)OS_kernelData/2 (read)OS_kernelData/2 (write)OS_kernelData/2 (read)OS_kernelData/2 (read)OS_kernelData/2 (write)OS_eHookMpuSize/7 (read)OS_kernelData/2 (write)OS_eHookStackLen/8 (read)OS_kernelData/2 (write)OS_kernelData/2 (addr)OS_kernDisableLevel/10 (read)OS_kernelData/2 (read)OS_kernelData/2 (addr)OS_kernelData/2 (write)OS_kernelData/2 (write)OS_kernelData/2 (addr)OS_kernelData/2 (read)OS_svc_HookHandler/5 (addr)OS_kernelData/2 (write)OS_kernelData/2 (write)OS_kernelData/2 (write)OS_kernelData/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/12 (836337507 (estimated locally),0.78 per call) OS_Error/4 (275991377 (estimated locally),0.26 per call) OS_HookRestoreMemprot.isra.0.constprop/19 (418168753 (estimated locally),0.39 per call) OS_CORTEXM_Call/11 (418168753 (estimated locally),0.39 per call) OS_SetHookProtection/9 (418168753 (estimated locally),0.39 per call) OS_IntDisableConditional/6 (836337506 (estimated locally),0.78 per call) OS_Error/4 (237404317 (estimated locally),0.22 per call) 
   Indirect call(418168753 (estimated locally),0.39 per call)  of param:0 loaded from aggregate passed by reference at offset 96 (vptr maybe changed)

;; Function OS_CallErrorHook (OS_CallErrorHook, funcdef_no=1, decl_uid=6838, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_CallErrorHook/1
__attribute__((target ("general-regs-only")))
OS_CallErrorHook (const struct os_appcontext_t * app, os_result_t code)
{
  register os_stackelement_t * OS_getSpResult;
  register os_stackelement_t * OS_getSpResult;
  os_intstatus_t is;
  os_uint8_t saveInFunction;
  os_oldlevel_t saveOldSuspendAll;
  os_uint8_t saveNestSuspendAll;
  const struct os_appcontext_t * saveHookApp;
  unsigned int OS_configMode.1_1;
  unsigned int _2;
  os_stackelement_t * _3;
  int _4;
  unsigned int _5;
  int _6;
  unsigned int _7;
  void (*<T4f2>) (os_result_t) _8;
  unsigned int _9;
  unsigned int _10;
  unsigned char OS_eHookMpuSize.4_11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  os_stackelement_t * _17;
  unsigned int OS_eHookStackLen.6_18;
  sizetype _19;
  sizetype _20;
  os_stackelement_t * _21;
  unsigned int _22;
  short unsigned int OS_kernDisableLevel.8_23;
  void (*<T4f2>) (os_result_t) _24;
  os_stackelement_t * _25;
  unsigned char _26;
  unsigned int iftmp.3_27;
  unsigned int iftmp.3_44;
  os_uint8_t iftmp.9_48;
  unsigned char _62;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  saveHookApp_32 = OS_kernelData.hookApp;
  # DEBUG saveHookApp => saveHookApp_32
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = app_33(D);
  # DEBUG BEGIN_STMT
  OS_configMode.1_1 = OS_configMode;
  _2 = OS_configMode.1_1 & 64;
  if (_2 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 3> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_35);
  # DEBUG OS_getSpResult => OS_getSpResult_35
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.iStackBase;
  _4 = OS_getSpResult_35 - _3;
  _5 = app_33(D)->errorHookStack;
  _6 = (int) _5;
  if (_4 <= _6)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_HookHandler, 57, 0B);
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 836337506]:
  # DEBUG BEGIN_STMT
  saveInFunction_36 = OS_kernelData.inFunction;
  # DEBUG saveInFunction => saveInFunction_36
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 10;
  # DEBUG BEGIN_STMT
  is_39 = OS_IntDisableConditional ();
  # DEBUG is => is_39
  # DEBUG BEGIN_STMT
  saveNestSuspendAll_40 = OS_kernelData.nestSuspendAll;
  # DEBUG saveNestSuspendAll => saveNestSuspendAll_40
  # DEBUG BEGIN_STMT
  saveOldSuspendAll_41 = OS_kernelData.oldSuspendAll;
  # DEBUG saveOldSuspendAll => saveOldSuspendAll_41
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendAll = 0;
  # DEBUG BEGIN_STMT
  _7 = OS_configMode.1_1 & 8192;
  if (_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 418168753]:
  # DEBUG BEGIN_STMT
  _8 = app_33(D)->errorHook;
  _8 (code_49(D));
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 418168753]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG k_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_43);
  # DEBUG OS_getSpResult => OS_getSpResult_43
  # DEBUG BEGIN_STMT
  _9 = (unsigned int) OS_getSpResult_43;
  _10 = _9 + 4294967232;
  OS_eHookMpuSize.4_11 = OS_eHookMpuSize;
  if (OS_eHookMpuSize.4_11 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 209084376]:
  _12 = (unsigned int) OS_eHookMpuSize.4_11;
  _13 = _12 >> 1;
  _14 = _13 + 1;
  _15 = 1 << _14;
  iftmp.3_44 = -_15;

  <bb 9> [local count: 418168753]:
  # iftmp.3_27 = PHI <iftmp.3_44(8), 4294967288(7)>
  _16 = _10 & iftmp.3_27;
  _17 = (os_stackelement_t *) _16;
  OS_kernelData.eHookContext.c.sp = _17;
  # DEBUG BEGIN_STMT
  OS_eHookStackLen.6_18 = OS_eHookStackLen;
  _19 = OS_eHookStackLen.6_18 & 4294967292;
  _20 = -_19;
  _21 = _17 + _20;
  OS_kernelData.eHookContext.c.stackLimit = _21;
  # DEBUG BEGIN_STMT
  _22 = (unsigned int) OS_eHookMpuSize.4_11;
  OS_SetHookProtection (app_33(D), &OS_kernelData.eHookContext.c, _22);
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.8_23 = OS_kernDisableLevel;
  _24 = app_33(D)->errorHook;
  _25 = OS_kernelData.eHookContext.c.sp;
  iftmp.9_48 = app_33(D)->flags;
  OS_CORTEXM_Call (OS_kernDisableLevel.8_23, _24, &OS_kernelData.eHookContext.c.sp, _25, iftmp.9_48, code_49(D));
  # DEBUG BEGIN_STMT
  OS_kernelData.eHookContext.c.sp = 0B;
  # DEBUG BEGIN_STMT
  OS_kernelData.eHookContext.c.stackLimit = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _62 = MEM[(unsigned char *)app_33(D) + 53B];
  # DEBUG D#1 => app_33(D)
  OS_HookRestoreMemprot.isra.0 (&OS_kernelData, _62, saveHookApp_32, saveInFunction_36);

  <bb 10> [local count: 836337506]:
  # DEBUG BEGIN_STMT
  _26 = OS_kernelData.nestSuspendAll;
  if (_26 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 275991377]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_HookHandler, 55, 0B);

  <bb 12> [local count: 836337507]:
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendAll = saveNestSuspendAll_40;
  # DEBUG BEGIN_STMT
  OS_kernelData.oldSuspendAll = saveOldSuspendAll_41;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_39);
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = saveInFunction_36;

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = saveHookApp_32;
  return;

}


