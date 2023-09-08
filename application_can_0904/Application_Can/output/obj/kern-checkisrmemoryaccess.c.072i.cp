
IPA constant propagation start:
Determining dynamic type for call: a_47 = OS_DoCheckISRMemoryAccess (i_35(D), ptr_38(D), len_40(D));
  Starting walk at: a_47 = OS_DoCheckISRMemoryAccess (i_35(D), ptr_38(D), len_40(D));
  instance pointer: ptr_38(D)  Outer instance pointer: ptr_38(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/5:
  Jump functions of caller  OS_KernCheckIsrMemoryAccess/1:
    callsite  OS_KernCheckIsrMemoryAccess/1 -> OS_DoCheckISRMemoryAccess/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  OS_DoCheckISRMemoryAccess/0:

 Propagating constants:

Not considering OS_KernCheckIsrMemoryAccess for cloning; -fipa-cp-clone disabled.

overall_size: 146, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernCheckIsrMemoryAccess/1:
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
  Node: OS_DoCheckISRMemoryAccess/0:
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
    param [2]: VARIABLE
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

OS_ramLimit/13 (OS_ramLimit) @06d40090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ramBase/12 (OS_ramBase) @06d40048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_romLimit/11 (OS_romLimit) @06d40000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_romBase/10 (OS_romBase) @06d03f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_isrTableBase/9 (OS_isrTableBase) @06d03f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/8 (OS_nInterrupts) @06d03318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckIsrMemoryAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/7 (OS_iecMode) @06d03288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckIsrMemoryAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_CheckIsrMemoryAccess/6 (OS_svc_CheckIsrMemoryAccess) @06d03240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (addr)OS_KernCheckIsrMemoryAccess/1 (addr)OS_KernCheckIsrMemoryAccess/1 (addr)OS_KernCheckIsrMemoryAccess/1 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/5 (OS_Error) @06ce0ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernCheckIsrMemoryAccess/1 (83685022 (estimated locally),0.08 per call) OS_KernCheckIsrMemoryAccess/1 (52264383 (estimated locally),0.05 per call) OS_KernCheckIsrMemoryAccess/1 (177167401 (estimated locally),0.17 per call) OS_DoCheckISRMemoryAccess/0 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_configMode/4 (OS_configMode) @06d031b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)OS_KernCheckIsrMemoryAccess/1 (read)OS_KernCheckIsrMemoryAccess/1 (read)OS_KernCheckIsrMemoryAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/3 (OS_permittedContext) @06d03168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernCheckIsrMemoryAccess/1 (read)OS_KernCheckIsrMemoryAccess/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/2 (OS_kernelData) @06d03120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoCheckISRMemoryAccess/0 (read)OS_DoCheckISRMemoryAccess/0 (read)OS_KernCheckIsrMemoryAccess/1 (read)OS_KernCheckIsrMemoryAccess/1 (read)OS_KernCheckIsrMemoryAccess/1 (read)OS_KernCheckIsrMemoryAccess/1 (read)
  Availability: not_available
  Varpool flags:
OS_KernCheckIsrMemoryAccess/1 (OS_KernCheckIsrMemoryAccess) @06ce0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/2 (read)OS_permittedContext/3 (read)OS_kernelData/2 (read)OS_permittedContext/3 (read)OS_configMode/4 (read)OS_svc_CheckIsrMemoryAccess/6 (addr)OS_iecMode/7 (read)OS_kernelData/2 (read)OS_kernelData/2 (read)OS_configMode/4 (read)OS_svc_CheckIsrMemoryAccess/6 (addr)OS_nInterrupts/8 (read)OS_configMode/4 (read)OS_svc_CheckIsrMemoryAccess/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/5 (83685022 (estimated locally),0.08 per call) OS_DoCheckISRMemoryAccess/0 (124903017 (estimated locally),0.12 per call) OS_Error/5 (52264383 (estimated locally),0.05 per call) OS_Error/5 (177167401 (estimated locally),0.17 per call) 
OS_DoCheckISRMemoryAccess/0 (OS_DoCheckISRMemoryAccess) @06ce0000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_isrTableBase/9 (read)OS_kernelData/2 (read)OS_kernelData/2 (read)OS_romBase/10 (read)OS_romLimit/11 (read)OS_ramBase/12 (read)OS_ramLimit/13 (read)OS_configMode/4 (read)OS_svc_CheckIsrMemoryAccess/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: OS_KernCheckIsrMemoryAccess/1 (124903017 (estimated locally),0.12 per call) 
  Calls: OS_Error/5 (177167401 (estimated locally),0.17 per call) 

;; Function OS_KernCheckIsrMemoryAccess (OS_KernCheckIsrMemoryAccess, funcdef_no=1, decl_uid=7243, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_KernCheckIsrMemoryAccess/1
__attribute__((target ("general-regs-only")))
OS_KernCheckIsrMemoryAccess (os_isrid_t i, const void * ptr, os_size_t len)
{
  os_paramtype_t p[3];
  os_memoryaccess_t a;
  unsigned int _1;
  unsigned int ptr.0_2;
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
  unsigned int OS_configMode.6_18;
  unsigned int _19;
  unsigned char OS_iecMode.7_20;
  const struct os_task_t * _21;
  struct os_taskdynamic_t * _22;
  short unsigned int _23;
  short unsigned int _24;
  unsigned int OS_configMode.8_25;
  unsigned int _26;
  short unsigned int OS_nInterrupts.9_27;
  unsigned int OS_configMode.10_28;
  unsigned int _29;
  _Bool iftmp.1_31;
  int iftmp.2_32;
  short unsigned int _34;
  _Bool iftmp.1_42;
  _Bool iftmp.1_43;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG a => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) i_35(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  ptr.0_2 = (unsigned int) ptr_38(D);
  p[1] = ptr.0_2;
  # DEBUG BEGIN_STMT
  p[2] = len_40(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.3_4 = OS_permittedContext;
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.3_4 + 6B];
  _34 = _5 & 1024;
  if (_34 != 0)
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
  # iftmp.2_32 = PHI <1(4), 0(5)>
  _13 = iftmp.2_32 ^ 1;
  iftmp.1_43 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  OS_permittedContext.5_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.5_11 + 6B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.1_42 = _17 == 0;

  <bb 8> [local count: 1073741823]:
  # iftmp.1_31 = PHI <iftmp.1_43(6), iftmp.1_42(7)>
  if (iftmp.1_31 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  OS_configMode.6_18 = OS_configMode;
  _19 = OS_configMode.6_18 & 1024;
  if (_19 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckIsrMemoryAccess, 12, &p);
  goto <bb 21>; [100.00%]

  <bb 11> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  OS_iecMode.7_20 = OS_iecMode;
  if (OS_iecMode.7_20 > 1)
    goto <bb 12>; [59.00%]
  else
    goto <bb 17>; [41.00%]

  <bb 12> [local count: 316753838]:
  if (_3 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 107696305]:
  _21 = OS_kernelData.taskCurrent;
  _22 = _21->dynamic;
  _23 = BIT_FIELD_REF <MEM[(void *)_22], 16, 160>;
  if (_23 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 14> [local count: 209057533]:
  _24 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_24 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 15> [local count: 158376919]:
  # DEBUG BEGIN_STMT
  OS_configMode.8_25 = OS_configMode;
  _26 = OS_configMode.8_25 & 1024;
  if (_26 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 16> [local count: 52264383]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckIsrMemoryAccess, 55, &p);
  goto <bb 21>; [100.00%]

  <bb 17> [local count: 378493993]:
  # DEBUG BEGIN_STMT
  OS_nInterrupts.9_27 = OS_nInterrupts;
  if (OS_nInterrupts.9_27 > i_35(D))
    goto <bb 18>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 18> [local count: 124903017]:
  # DEBUG BEGIN_STMT
  a_47 = OS_DoCheckISRMemoryAccess (i_35(D), ptr_38(D), len_40(D));
  # DEBUG a => a_47
  goto <bb 21>; [100.00%]

  <bb 19> [local count: 253590975]:
  # DEBUG BEGIN_STMT
  OS_configMode.10_28 = OS_configMode;
  _29 = OS_configMode.10_28 & 1024;
  if (_29 != 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 83685022]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_CheckIsrMemoryAccess, 47, &p);

  <bb 21> [local count: 1073741824]:
  # a_30 = PHI <0(10), 0(16), a_47(18), 0(19), 0(20), 0(9), 0(15)>
  # DEBUG a => a_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return a_30;

}


