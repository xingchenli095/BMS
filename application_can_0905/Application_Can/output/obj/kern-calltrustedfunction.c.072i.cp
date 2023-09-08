
IPA constant propagation start:
Determining dynamic type for call: _34 (fid_39(D), parms_42(D));
  Starting walk at: _34 (fid_39(D), parms_42(D));
  instance pointer: parms_42(D)  Outer instance pointer: parms_42(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_27 = OS_AppIsAccessible (_26);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AppIsAccessible/8:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernCallTrustedFunction/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _34 (fid_39(D), parms_42(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_KernCallTrustedFunction for cloning; -fipa-cp-clone disabled.

overall_size: 100, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernCallTrustedFunction/0:
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


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_AppIsAccessible/8 (OS_AppIsAccessible) @06cf3a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCallTrustedFunction/0 (253590975 (estimated locally),0.24 per call) 
  Calls: 
OS_functionTableBase/7 (OS_functionTableBase) @06d39240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCallTrustedFunction/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nFunctions/6 (OS_nFunctions) @06d391b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCallTrustedFunction/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d39120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCallTrustedFunction/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_CallTrustedFunction/4 (OS_svc_CallTrustedFunction) @06d390d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCallTrustedFunction/0 (addr)OS_KernCallTrustedFunction/0 (addr)OS_KernCallTrustedFunction/0 (addr)OS_KernCallTrustedFunction/0 (addr)OS_KernCallTrustedFunction/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06cf39a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCallTrustedFunction/0 (141446706 (estimated locally),0.13 per call) OS_KernCallTrustedFunction/0 (83685022 (estimated locally),0.08 per call) OS_KernCallTrustedFunction/0 (253590975 (estimated locally),0.24 per call) OS_KernCallTrustedFunction/0 (212225071 (estimated locally),0.20 per call) OS_KernCallTrustedFunction/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d39048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d39000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (read)OS_KernCallTrustedFunction/0 (write)OS_KernCallTrustedFunction/0 (write)OS_KernCallTrustedFunction/0 (write)OS_KernCallTrustedFunction/0 (write)
  Availability: not_available
  Varpool flags:
OS_KernCallTrustedFunction/0 (OS_KernCallTrustedFunction) @06cf3540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_CallTrustedFunction/4 (addr)OS_iecMode/5 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_CallTrustedFunction/4 (addr)OS_nFunctions/6 (read)OS_svc_CallTrustedFunction/4 (addr)OS_functionTableBase/7 (read)OS_svc_CallTrustedFunction/4 (addr)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_CallTrustedFunction/4 (addr)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (141446706 (estimated locally),0.13 per call) OS_Error/3 (83685022 (estimated locally),0.08 per call) OS_AppIsAccessible/8 (253590975 (estimated locally),0.24 per call) OS_Error/3 (253590975 (estimated locally),0.24 per call) OS_Error/3 (212225071 (estimated locally),0.20 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 
   Indirect call(28459247 (estimated locally),0.03 per call) 

;; Function OS_KernCallTrustedFunction (OS_KernCallTrustedFunction, funcdef_no=0, decl_uid=7250, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernCallTrustedFunction/0
__attribute__((target ("general-regs-only")))
OS_KernCallTrustedFunction (os_functionid_t fid, void * parms)
{
  os_uint8_t tfCalledFrom;
  os_uint8_t inFunction;
  register os_stackelement_t * OS_getSpResult;
  os_address_t lowerSp;
  const struct os_function_t * const fs;
  os_paramtype_t p[3];
  os_result_t r;
  unsigned int _1;
  unsigned int parms.0_2;
  unsigned char _3;
  const os_callermask_t * OS_permittedContext.3_4;
  short unsigned int _5;
  unsigned char _6;
  int _7;
  int _8;
  short unsigned int _9;
  short unsigned int _10;
  const os_callermask_t * OS_permittedContext.5_11;
  short unsigned int _12;
  int _13;
  int _14;
  int _15;
  short unsigned int _16;
  short unsigned int _17;
  unsigned char OS_iecMode.6_18;
  const struct os_task_t * _19;
  struct os_taskdynamic_t * _20;
  short unsigned int _21;
  short unsigned int _22;
  unsigned char OS_nFunctions.7_23;
  const struct os_function_t * OS_functionTableBase.8_24;
  unsigned int _25;
  const struct os_appcontext_t * _26;
  int _27;
  unsigned int _28;
  unsigned int _29;
  os_stackelement_t * _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  void (*<T618>) (os_functionid_t, void *) _34;
  _Bool iftmp.1_36;
  int iftmp.2_37;
  _Bool iftmp.1_44;
  _Bool iftmp.1_45;
  short unsigned int _61;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) fid_39(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  parms.0_2 = (unsigned int) parms_42(D);
  p[1] = parms.0_2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.3_4 = OS_permittedContext;
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.3_4 + 4B];
  _61 = _5 & 1024;
  if (_61 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  _6 = OS_kernelData.errorStatus.calledFrom;
  _7 = (int) _6;
  _8 = 1 << _7;
  _9 = (short unsigned int) _8;
  _10 = _5 & _9;
  if (_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 273804165]:

  <bb 6> [local count: 365072220]:
  # iftmp.2_37 = PHI <1(4), 0(5)>
  _13 = iftmp.2_37 ^ 1;
  iftmp.1_45 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.5_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.5_11 + 4B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.1_44 = _17 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.1_36 = PHI <iftmp.1_45(6), iftmp.1_44(7)>
  if (iftmp.1_36 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_67 = OS_Error (&OS_svc_CallTrustedFunction, 12, &p);
  # DEBUG r => r_67
  goto <bb 24>; [100.00%]

  <bb 10> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  OS_iecMode.6_18 = OS_iecMode;
  if (OS_iecMode.6_18 > 1)
    goto <bb 11>; [59.00%]
  else
    goto <bb 15>; [41.00%]

  <bb 11> [local count: 424450142]:
  if (_3 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 144313049]:
  _19 = OS_kernelData.taskCurrent;
  _20 = _19->dynamic;
  _21 = BIT_FIELD_REF <MEM[(void *)_20], 16, 160>;
  if (_21 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 280137094]:
  _22 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_22 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 212225071]:
  # DEBUG BEGIN_STMT
  r_47 = OS_Error (&OS_svc_CallTrustedFunction, 55, &p);
  # DEBUG r => r_47
  goto <bb 24>; [100.00%]

  <bb 15> [local count: 507181950]:
  # DEBUG BEGIN_STMT
  OS_nFunctions.7_23 = OS_nFunctions;
  if (OS_nFunctions.7_23 <= fid_39(D))
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 253590975]:
  # DEBUG BEGIN_STMT
  r_65 = OS_Error (&OS_svc_CallTrustedFunction, 50, &p);
  # DEBUG r => r_65
  goto <bb 24>; [100.00%]

  <bb 17> [local count: 253590975]:
  # DEBUG BEGIN_STMT
  OS_functionTableBase.8_24 = OS_functionTableBase;
  _25 = _1 * 16;
  fs_48 = OS_functionTableBase.8_24 + _25;
  # DEBUG fs => fs_48
  # DEBUG BEGIN_STMT
  _26 = fs_48->app;
  _27 = OS_AppIsAccessible (_26);
  if (_27 == 0)
    goto <bb 18>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 18> [local count: 83685022]:
  # DEBUG BEGIN_STMT
  r_63 = OS_Error (&OS_svc_CallTrustedFunction, 154, &p);
  # DEBUG r => r_63
  goto <bb 24>; [100.00%]

  <bb 19> [local count: 169905954]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_50);
  # DEBUG OS_getSpResult => OS_getSpResult_50
  # DEBUG BEGIN_STMT
  _28 = (unsigned int) OS_getSpResult_50;
  # DEBUG upperSp => _28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _29 = fs_48->stackLen;
  lowerSp_51 = _28 - _29;
  # DEBUG lowerSp => lowerSp_51
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  _30 = OS_kernelData.iStackBase;
  _31 = (unsigned int) _30;
  # DEBUG lowerBound => _31
  # DEBUG BEGIN_STMT
  _32 = OS_kernelData.iStackLen;
  _33 = _31 + _32;
  # DEBUG upperBound => _33
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (_31 > lowerSp_51)
    goto <bb 22>; [33.00%]
  else
    goto <bb 20>; [67.00%]

  <bb 20> [local count: 113836989]:
  if (_28 > _33)
    goto <bb 22>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 21> [local count: 56918494]:
  if (_28 < lowerSp_51)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 141446706]:
  # DEBUG BEGIN_STMT
  r_60 = OS_Error (&OS_svc_CallTrustedFunction, 53, &p);
  # DEBUG r => r_60
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 28459247]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  inFunction_52 = OS_kernelData.inFunction;
  # DEBUG inFunction => inFunction_52
  # DEBUG BEGIN_STMT
  tfCalledFrom_53 = OS_kernelData.tfCalledFrom;
  # DEBUG tfCalledFrom => tfCalledFrom_53
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 5;
  # DEBUG BEGIN_STMT
  OS_kernelData.tfCalledFrom = inFunction_52;
  # DEBUG BEGIN_STMT
  _34 = fs_48->function;
  _34 (fid_39(D), parms_42(D));
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = inFunction_52;
  # DEBUG BEGIN_STMT
  OS_kernelData.tfCalledFrom = tfCalledFrom_53;

  <bb 24> [local count: 1073741824]:
  # r_35 = PHI <r_67(9), r_47(14), r_65(16), r_63(18), 0(23), r_60(22)>
  # DEBUG upperSp => NULL
  # DEBUG lowerBound => NULL
  # DEBUG upperBound => NULL
  # DEBUG r => r_35
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_35;

}


