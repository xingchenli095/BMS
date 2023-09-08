
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ErrorAction/9:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/8:
  Jump functions of caller  OS_CallErrorHook/6:
  Jump functions of caller  OS_IntDisableConditional/4:
  Jump functions of caller  OS_Error/0:
    indirect simple callsite, calling param -1, offset 0, for stmt act_94 = OS_ptrProtectionHook.9_30 (res_31);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrErrorHook.7_22 (res_31);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering OS_Error for cloning; -fipa-cp-clone disabled.

overall_size: 167, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_Error/0:
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
    param [2]: BOTTOM
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

OS_ErrorAction/9 (OS_ErrorAction) @06c82ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Error/0 (114863532 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/8 (OS_CORTEXM_IntSetDisablingLevel) @06c82e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Error/0 (37904965 (estimated locally),0.33 per call) 
  Calls: 
OS_ptrProtectionHook/7 (OS_ptrProtectionHook) @06d57a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Error/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CallErrorHook/6 (OS_CallErrorHook) @06c82d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Error/0 (1532308 (estimated locally),0.01 per call) 
  Calls: 
OS_ptrErrorHook/5 (OS_ptrErrorHook) @06d57948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Error/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_IntDisableConditional/4 (OS_IntDisableConditional) @06c82000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Error/0 (37904965 (estimated locally),0.33 per call) 
  Calls: 
OS_hookSelection/3 (OS_hookSelection) @06d578b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Error/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/2 (OS_isrTableBase) @06d57870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Error/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d57828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (read)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (read)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (write)OS_Error/0 (read)OS_Error/0 (read)OS_Error/0 (write)OS_Error/0 (write)
  Availability: not_available
  Varpool flags:
OS_Error/0 (OS_Error) @06c82b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_isrTableBase/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_hookSelection/3 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_ptrErrorHook/5 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_ptrProtectionHook/7 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ErrorAction/9 (114863532 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/8 (37904965 (estimated locally),0.33 per call) OS_CallErrorHook/6 (1532308 (estimated locally),0.01 per call) OS_IntDisableConditional/4 (37904965 (estimated locally),0.33 per call) 
   Indirect call(7770518 (estimated locally),0.07 per call) 
   Indirect call(9476241 (estimated locally),0.08 per call) 

;; Function OS_Error (OS_Error, funcdef_no=0, decl_uid=6805, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_Error/0
__attribute__((target ("general-regs-only")))
OS_Error (const struct os_serviceinfo_t * const s, os_error_t e, os_paramtype_t * p)
{
  os_uint8_t Os_CallHookTmp;
  os_int_t i;
  os_uint8_t en;
  os_intstatus_t is;
  const struct os_errorentry_t * ep;
  struct os_errorstatus_t esSave;
  const struct os_appcontext_t * hookAppSave;
  os_uint8_t ehNestingSave;
  os_erroraction_t hooks;
  os_erroraction_t act;
  os_result_t res;
  unsigned char _1;
  const struct os_task_t * _2;
  const struct os_isr_t * OS_isrTableBase.2_4;
  short unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  const struct os_isr_t * _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char OS_hookSelection.5_11;
  unsigned char _12;
  unsigned char _13;
  unsigned int i.6_14;
  unsigned int _15;
  os_paramtype_t * _16;
  unsigned int _17;
  void (*<T4f2>) (os_result_t) _18;
  unsigned char _19;
  unsigned char _20;
  unsigned char _21;
  void (*<T4f2>) (os_result_t) OS_ptrErrorHook.7_22;
  unsigned char _23;
  void (*<T4f2>) (os_result_t) _24;
  unsigned char _25;
  unsigned char _26;
  signed char hooks.8_27;
  unsigned char _28;
  unsigned char _29;
  os_erroraction_t (*<T4f8>) (os_result_t) OS_ptrProtectionHook.9_30;
  const struct os_appcontext_t * iftmp.0_39;
  unsigned char _46;
  unsigned char _48;
  const struct os_appcontext_t * iftmp.3_49;
  unsigned char _50;
  const struct os_appcontext_t * iftmp.1_51;
  unsigned char _52;
  const struct os_appcontext_t * iftmp.0_53;
  unsigned char _54;
  os_result_t _106;

  <bb 2> [local count: 114863532]:
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
  _1 = OS_kernelData.inFunction;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 39053601]:
  _2 = OS_kernelData.taskCurrent;
  iftmp.0_53 = _2->app;
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 75809931]:
  if (_1 == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 25775377]:
  OS_isrTableBase.2_4 = OS_isrTableBase;
  _5 = OS_kernelData.isrCurrent;
  _6 = (unsigned int) _5;
  _7 = _6 * 68;
  _8 = OS_isrTableBase.2_4 + _7;
  iftmp.1_51 = _8->app;
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 50034555]:
  if (_1 == 10)
    goto <bb 9>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 33022806]:
  if (_1 == 8)
    goto <bb 9>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 21795052]:
  if (_1 == 9)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 35649820]:
  iftmp.3_49 = OS_kernelData.hookApp;

  <bb 10> [local count: 114863532]:
  # iftmp.0_39 = PHI <iftmp.0_53(3), 0B(8), iftmp.1_51(5), iftmp.3_49(9)>
  # DEBUG app => iftmp.0_39
  # DEBUG BEGIN_STMT
  ep_56 = s_55(D)->errorTable;
  # DEBUG ep => ep_56
  # DEBUG BEGIN_STMT
  en_57 = s_55(D)->nErrors;
  # DEBUG en => en_57
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  ep_59 = ep_36 + 3;
  # DEBUG ep => ep_59
  # DEBUG BEGIN_STMT
  en_60 = en_37 + 255;
  # DEBUG en => en_60

  <bb 12> [local count: 1073741824]:
  # ep_36 = PHI <ep_56(10), ep_59(11)>
  # en_37 = PHI <en_57(10), en_60(11)>
  # DEBUG en => en_37
  # DEBUG ep => ep_36
  # DEBUG BEGIN_STMT
  if (en_37 != 0)
    goto <bb 13>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 13> [local count: 1014686025]:
  _9 = ep_36->condition;
  if (_9 != e_58(D))
    goto <bb 11>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 114863532]:
  # ep_3 = PHI <ep_36(12), ep_36(13)>
  # DEBUG BEGIN_STMT
  _10 = ep_3->condition;
  if (_10 == e_58(D))
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 39053601]:
  # DEBUG BEGIN_STMT
  act_61 = ep_3->action;
  # DEBUG act => act_61
  # DEBUG BEGIN_STMT
  res_62 = ep_3->result;
  # DEBUG res => res_62

  <bb 16> [local count: 114863532]:
  # res_31 = PHI <res_62(15), 21(14)>
  # act_33 = PHI <act_61(15), 70(14)>
  # DEBUG act => act_33
  # DEBUG res => res_31
  # DEBUG BEGIN_STMT
  OS_hookSelection.5_11 = OS_hookSelection;
  hooks_63 = OS_hookSelection.5_11 & act_33;
  # DEBUG hooks => hooks_63
  # DEBUG BEGIN_STMT
  act_64 = act_33 & 15;
  # DEBUG act => act_64
  # DEBUG BEGIN_STMT
  if (hooks_63 != 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 44>; [67.00%]

  <bb 17> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  ehNestingSave_65 = OS_kernelData.errorHookNesting;
  # DEBUG ehNestingSave => ehNestingSave_65
  # DEBUG BEGIN_STMT
  esSave = OS_kernelData.errorStatus;
  # DEBUG BEGIN_STMT
  hookAppSave_67 = OS_kernelData.hookApp;
  # DEBUG hookAppSave => hookAppSave_67
  # DEBUG BEGIN_STMT
  is_69 = OS_IntDisableConditional ();
  # DEBUG is => is_69
  # DEBUG BEGIN_STMT
  _12 = OS_kernelData.inFunction;
  OS_kernelData.errorStatus.calledFrom = _12;
  # DEBUG BEGIN_STMT
  _13 = s_55(D)->sid;
  OS_kernelData.errorStatus.serviceId = _13;
  # DEBUG BEGIN_STMT
  if (p_72(D) != 0B)
    goto <bb 45>; [70.00%]
  else
    goto <bb 20>; [30.00%]

  <bb 45> [local count: 26533476]:
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 79600427]:
  # DEBUG BEGIN_STMT
  i.6_14 = (unsigned int) i_38;
  _15 = i.6_14 * 4;
  _16 = p_72(D) + _15;
  _17 = *_16;
  OS_kernelData.errorStatus.parameter[i_38] = _17;
  # DEBUG BEGIN_STMT
  i_74 = i_38 + 1;
  # DEBUG i => i_74

  <bb 19> [local count: 106133903]:
  # i_38 = PHI <i_74(18), 0(45)>
  # DEBUG i => i_38
  # DEBUG BEGIN_STMT
  if (i_38 != 3)
    goto <bb 18>; [75.00%]
  else
    goto <bb 20>; [25.00%]

  <bb 20> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.errorCondition = e_58(D);
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.action = act_64;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.result = res_31;
  # DEBUG BEGIN_STMT
  _46 = hooks_63 & 32;
  if (_46 != 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 21> [local count: 18952483]:
  # DEBUG BEGIN_STMT
  if (iftmp.0_39 == 0B)
    goto <bb 24>; [30.00%]
  else
    goto <bb 22>; [70.00%]

  <bb 22> [local count: 13266738]:
  _18 = iftmp.0_39->errorHook;
  if (_18 == 0B)
    goto <bb 24>; [30.00%]
  else
    goto <bb 23>; [70.00%]

  <bb 23> [local count: 9286717]:
  _19 = OS_kernelData.errorHookNesting;
  if (_19 != 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 24> [local count: 14309124]:
  # DEBUG BEGIN_STMT
  hooks_78 = hooks_63 | 64;
  # DEBUG hooks => hooks_78

  <bb 25> [local count: 37904965]:
  # hooks_35 = PHI <hooks_63(20), hooks_63(23), hooks_78(24)>
  # DEBUG hooks => hooks_35
  # DEBUG BEGIN_STMT
  _48 = hooks_35 & 80;
  if (_48 != 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 26> [local count: 18952483]:
  _20 = OS_kernelData.errorHookNesting;
  _50 = _20 & 2;
  if (_50 == 0)
    goto <bb 27>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 27> [local count: 9476241]:
  # DEBUG BEGIN_STMT
  _21 = ehNestingSave_65 | 2;
  OS_kernelData.errorHookNesting = _21;
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG Os_CallHookTmp => _12
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrErrorHook.7_22 = OS_ptrErrorHook;
  OS_ptrErrorHook.7_22 (res_31);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = _12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = ehNestingSave_65;

  <bb 28> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  _52 = hooks_35 & 32;
  if (_52 != 0)
    goto <bb 29>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 29> [local count: 18952483]:
  # DEBUG BEGIN_STMT
  if (iftmp.0_39 == 0B)
    goto <bb 34>; [30.00%]
  else
    goto <bb 30>; [70.00%]

  <bb 30> [local count: 13266738]:
  _23 = OS_kernelData.appsStarted;
  if (_23 == 0)
    goto <bb 34>; [50.00%]
  else
    goto <bb 31>; [50.00%]

  <bb 31> [local count: 6633369]:
  _24 = iftmp.0_39->errorHook;
  if (_24 == 0B)
    goto <bb 34>; [30.00%]
  else
    goto <bb 32>; [70.00%]

  <bb 32> [local count: 4643358]:
  _25 = OS_kernelData.errorHookNesting;
  if (_25 != 0)
    goto <bb 34>; [67.00%]
  else
    goto <bb 33>; [33.00%]

  <bb 33> [local count: 1532308]:
  # DEBUG BEGIN_STMT
  _26 = ehNestingSave_65 | 1;
  OS_kernelData.errorHookNesting = _26;
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = iftmp.0_39;
  # DEBUG BEGIN_STMT
  OS_CallErrorHook (iftmp.0_39, res_31);
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = ehNestingSave_65;

  <bb 34> [local count: 37904966]:
  # DEBUG BEGIN_STMT
  hooks.8_27 = (signed char) hooks_35;
  if (hooks.8_27 < 0)
    goto <bb 35>; [41.00%]
  else
    goto <bb 43>; [59.00%]

  <bb 35> [local count: 15541036]:
  _28 = OS_kernelData.errorHookNesting;
  _54 = _28 & 4;
  if (_54 == 0)
    goto <bb 36>; [50.00%]
  else
    goto <bb 43>; [50.00%]

  <bb 36> [local count: 7770518]:
  # DEBUG BEGIN_STMT
  _29 = ehNestingSave_65 | 4;
  OS_kernelData.errorHookNesting = _29;
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  Os_CallHookTmp_91 = OS_kernelData.inFunction;
  # DEBUG Os_CallHookTmp => Os_CallHookTmp_91
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 15;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_ptrProtectionHook.9_30 = OS_ptrProtectionHook;
  act_94 = OS_ptrProtectionHook.9_30 (res_31);
  # DEBUG act => act_94
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = Os_CallHookTmp_91;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = ehNestingSave_65;
  # DEBUG BEGIN_STMT
  if (act_94 == 255)
    goto <bb 43>; [34.00%]
  else
    goto <bb 37>; [66.00%]

  <bb 37> [local count: 5128542]:
  # DEBUG BEGIN_STMT
  if (act_94 == 254)
    goto <bb 38>; [34.00%]
  else
    goto <bb 40>; [66.00%]

  <bb 38> [local count: 1743704]:
  if (res_31 == 13)
    goto <bb 39>; [34.00%]
  else
    goto <bb 40>; [66.00%]

  <bb 39> [local count: 592859]:
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.action = 1;
  goto <bb 43>; [100.00%]

  <bb 40> [local count: 4535682]:
  # DEBUG BEGIN_STMT
  if (act_94 <= 6)
    goto <bb 41>; [50.00%]
  else
    goto <bb 42>; [50.00%]

  <bb 41> [local count: 2267841]:
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.action = act_94;
  goto <bb 43>; [100.00%]

  <bb 42> [local count: 2267841]:
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.action = 6;

  <bb 43> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  act_100 = OS_kernelData.errorStatus.action;
  # DEBUG act => act_100
  # DEBUG BEGIN_STMT
  res_101 = OS_kernelData.errorStatus.result;
  # DEBUG res => res_101
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_69);
  # DEBUG BEGIN_STMT
  OS_kernelData.hookApp = hookAppSave_67;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus = esSave;

  <bb 44> [local count: 114863532]:
  # res_32 = PHI <res_31(16), res_101(43)>
  # act_34 = PHI <act_64(16), act_100(43)>
  # DEBUG act => act_34
  # DEBUG res => res_32
  # DEBUG BEGIN_STMT
  _106 = OS_ErrorAction (act_34, res_32);
  esSave ={v} {CLOBBER};
  return _106;

}


