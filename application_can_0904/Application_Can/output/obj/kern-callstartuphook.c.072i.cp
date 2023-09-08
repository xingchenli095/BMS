
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_Call/10:
  Jump functions of caller  OS_SetHookProtection/9:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/6:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_CallStartupHook/0:
    indirect aggregate callsite, calling param 0, offset 32, by reference, for stmt _9 ();

 Propagating constants:

Not considering OS_CallStartupHook for cloning; -fipa-cp-clone disabled.

overall_size: 77, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CallStartupHook/0:
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

OS_CORTEXM_Call/10 (OS_CORTEXM_Call) @06d3d1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallStartupHook/0 (418168753 (estimated locally),0.39 per call) 
  Calls: 
OS_SetHookProtection/9 (OS_SetHookProtection) @06d3d0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallStartupHook/0 (418168753 (estimated locally),0.39 per call) 
  Calls: 
OS_sHookStackLen/8 (OS_sHookStackLen) @06d3e000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallStartupHook/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_sHookMpuSize/7 (OS_sHookMpuSize) @06c58f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallStartupHook/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/6 (OS_CORTEXM_IntSetDisablingLevel) @06d3d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallStartupHook/0 (836337507 (estimated locally),0.78 per call) OS_CallStartupHook/0 (836337506 (estimated locally),0.78 per call) 
  Calls: 
OS_kernDisableLevel/5 (OS_kernDisableLevel) @06c58e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallStartupHook/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_HookHandler/4 (OS_svc_HookHandler) @06c58e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallStartupHook/0 (addr)OS_CallStartupHook/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06bb2ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CallStartupHook/0 (275991377 (estimated locally),0.26 per call) OS_CallStartupHook/0 (237404317 (estimated locally),0.22 per call) 
  Calls: 
OS_configMode/2 (OS_configMode) @06c58d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallStartupHook/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c58d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CallStartupHook/0 (read)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (read)OS_CallStartupHook/0 (read)OS_CallStartupHook/0 (read)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (addr)OS_CallStartupHook/0 (read)OS_CallStartupHook/0 (addr)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (read)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (write)OS_CallStartupHook/0 (write)
  Availability: not_available
  Varpool flags:
OS_CallStartupHook/0 (OS_CallStartupHook) @06bb2d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (write)OS_configMode/2 (read)OS_kernelData/1 (read)OS_svc_HookHandler/4 (addr)OS_kernDisableLevel/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_sHookMpuSize/7 (read)OS_kernelData/1 (write)OS_sHookStackLen/8 (read)OS_kernelData/1 (write)OS_kernelData/1 (addr)OS_kernelData/1 (read)OS_kernelData/1 (addr)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_svc_HookHandler/4 (addr)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/6 (836337507 (estimated locally),0.78 per call) OS_Error/3 (275991377 (estimated locally),0.26 per call) OS_CORTEXM_Call/10 (418168753 (estimated locally),0.39 per call) OS_SetHookProtection/9 (418168753 (estimated locally),0.39 per call) OS_CORTEXM_IntSetDisablingLevel/6 (836337506 (estimated locally),0.78 per call) OS_Error/3 (237404317 (estimated locally),0.22 per call) 
   Indirect call(418168753 (estimated locally),0.39 per call)  of param:0 loaded from aggregate passed by reference at offset 32 (vptr maybe changed)

;; Function OS_CallStartupHook (OS_CallStartupHook, funcdef_no=0, decl_uid=6832, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CallStartupHook/0
__attribute__((target ("general-regs-only")))
OS_CallStartupHook (const struct os_appcontext_t * app)
{
  register os_stackelement_t * OS_getSpResult;
  register os_stackelement_t * OS_getSpResult;
  os_intstatus_t is;
  os_oldlevel_t saveOldSuspendAll;
  os_uint8_t saveNestSuspendAll;
  const struct os_appcontext_t * saveHookApp;
  unsigned int OS_configMode.1_1;
  unsigned int _2;
  os_stackelement_t * _3;
  int _4;
  unsigned int _5;
  int _6;
  short unsigned int OS_kernDisableLevel.2_7;
  unsigned int _8;
  void (*<T467>) (void) _9;
  unsigned int _10;
  unsigned int _11;
  unsigned char OS_sHookMpuSize.5_12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  os_stackelement_t * _18;
  unsigned int OS_sHookStackLen.7_19;
  sizetype _20;
  sizetype _21;
  os_stackelement_t * _22;
  unsigned int _23;
  void (*<T467>) (void) _24;
  os_stackelement_t * _25;
  unsigned char _26;
  unsigned int iftmp.4_27;
  unsigned int iftmp.4_42;
  os_uint8_t iftmp.10_46;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
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
  _5 = app_33(D)->startupHookStack;
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
  OS_kernDisableLevel.2_7 = OS_kernDisableLevel;
  is_37 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_7);
  # DEBUG is => is_37
  # DEBUG BEGIN_STMT
  saveNestSuspendAll_38 = OS_kernelData.nestSuspendAll;
  # DEBUG saveNestSuspendAll => saveNestSuspendAll_38
  # DEBUG BEGIN_STMT
  saveOldSuspendAll_39 = OS_kernelData.oldSuspendAll;
  # DEBUG saveOldSuspendAll => saveOldSuspendAll_39
  # DEBUG BEGIN_STMT
  OS_kernelData.nestSuspendAll = 0;
  # DEBUG BEGIN_STMT
  _8 = OS_configMode.1_1 & 4096;
  if (_8 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 418168753]:
  # DEBUG BEGIN_STMT
  _9 = app_33(D)->startupHook;
  _9 ();
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 418168753]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG k_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_41);
  # DEBUG OS_getSpResult => OS_getSpResult_41
  # DEBUG BEGIN_STMT
  _10 = (unsigned int) OS_getSpResult_41;
  _11 = _10 + 4294967232;
  OS_sHookMpuSize.5_12 = OS_sHookMpuSize;
  if (OS_sHookMpuSize.5_12 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 209084376]:
  _13 = (unsigned int) OS_sHookMpuSize.5_12;
  _14 = _13 >> 1;
  _15 = _14 + 1;
  _16 = 1 << _15;
  iftmp.4_42 = -_16;

  <bb 9> [local count: 418168753]:
  # iftmp.4_27 = PHI <iftmp.4_42(8), 4294967288(7)>
  _17 = _11 & iftmp.4_27;
  _18 = (os_stackelement_t *) _17;
  OS_kernelData.sHookContext.c.sp = _18;
  # DEBUG BEGIN_STMT
  OS_sHookStackLen.7_19 = OS_sHookStackLen;
  _20 = OS_sHookStackLen.7_19 & 4294967292;
  _21 = -_20;
  _22 = _18 + _21;
  OS_kernelData.sHookContext.c.stackLimit = _22;
  # DEBUG BEGIN_STMT
  _23 = (unsigned int) OS_sHookMpuSize.5_12;
  OS_SetHookProtection (app_33(D), &OS_kernelData.sHookContext.c, _23);
  # DEBUG BEGIN_STMT
  _24 = app_33(D)->startupHook;
  _25 = OS_kernelData.sHookContext.c.sp;
  iftmp.10_46 = app_33(D)->flags;
  OS_CORTEXM_Call (OS_kernDisableLevel.2_7, _24, &OS_kernelData.sHookContext.c.sp, _25, iftmp.10_46, 0);
  # DEBUG BEGIN_STMT
  OS_kernelData.sHookContext.c.sp = 0B;
  # DEBUG BEGIN_STMT
  OS_kernelData.sHookContext.c.stackLimit = 0B;

  <bb 10> [local count: 836337506]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
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
  OS_kernelData.nestSuspendAll = saveNestSuspendAll_38;
  # DEBUG BEGIN_STMT
  OS_kernelData.oldSuspendAll = saveOldSuspendAll_39;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_37);

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = saveHookApp_32;
  return;

}


