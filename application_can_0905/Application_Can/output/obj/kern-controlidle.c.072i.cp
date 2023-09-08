
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_DoControlIdle/5:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernControlIdle/0:

 Propagating constants:

Not considering OS_KernControlIdle for cloning; -fipa-cp-clone disabled.

overall_size: 48, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernControlIdle/0:
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

OS_DoControlIdle/5 (OS_DoControlIdle) @06d3b460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernControlIdle/0 (294956879 (estimated locally),0.27 per call) 
  Calls: 
OS_svc_ControlIdle/4 (OS_svc_ControlIdle) @06c64bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernControlIdle/0 (addr)OS_KernControlIdle/0 (addr)OS_KernControlIdle/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d3b380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernControlIdle/0 (97335770 (estimated locally),0.09 per call) OS_KernControlIdle/0 (424450143 (estimated locally),0.40 per call) OS_KernControlIdle/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06c64b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernControlIdle/0 (read)OS_KernControlIdle/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c64af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernControlIdle/0 (read)OS_KernControlIdle/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernControlIdle/0 (OS_KernControlIdle) @06d3b0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_ControlIdle/4 (addr)OS_svc_ControlIdle/4 (addr)OS_svc_ControlIdle/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (97335770 (estimated locally),0.09 per call) OS_DoControlIdle/5 (294956879 (estimated locally),0.27 per call) OS_Error/3 (424450143 (estimated locally),0.40 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernControlIdle (OS_KernControlIdle, funcdef_no=0, decl_uid=7260, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernControlIdle/0
__attribute__((target ("general-regs-only")))
OS_KernControlIdle (os_coreid_t c, os_idlemode_t mode)
{
  os_paramtype_t p[3];
  os_errorresult_t e;
  os_result_t r;
  unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  const os_callermask_t * OS_permittedContext.2_4;
  short unsigned int _5;
  unsigned char _6;
  int _7;
  int _8;
  short unsigned int _9;
  short unsigned int _10;
  const os_callermask_t * OS_permittedContext.4_11;
  short unsigned int _12;
  int _13;
  int _14;
  int _15;
  short unsigned int _16;
  short unsigned int _17;
  _Bool iftmp.0_19;
  int iftmp.1_20;
  short unsigned int _22;
  _Bool iftmp.0_28;
  _Bool iftmp.0_29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) c_23(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  _2 = (unsigned int) mode_26(D);
  p[1] = _2;
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 10)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  OS_permittedContext.2_4 = OS_permittedContext;
  _5 = MEM[(const os_callermask_t *)OS_permittedContext.2_4 + 106B];
  _22 = _5 & 1024;
  if (_22 != 0)
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
  # iftmp.1_20 = PHI <1(4), 0(5)>
  _13 = iftmp.1_20 ^ 1;
  iftmp.0_29 = (_Bool) _13;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.4_11 = OS_permittedContext;
  _12 = MEM[(const os_callermask_t *)OS_permittedContext.4_11 + 106B];
  _14 = (int) _3;
  _15 = 1 << _14;
  _16 = (short unsigned int) _15;
  _17 = _12 & _16;
  iftmp.0_28 = _17 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.0_19 = PHI <iftmp.0_29(6), iftmp.0_28(7)>
  if (iftmp.0_19 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_37 = OS_Error (&OS_svc_ControlIdle, 12, &p);
  # DEBUG r => r_37
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (mode_26(D) > 1)
    goto <bb 11>; [59.00%]
  else
    goto <bb 12>; [41.00%]

  <bb 11> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  r_35 = OS_Error (&OS_svc_ControlIdle, 175, &p);
  # DEBUG r => r_35
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  e_31 = OS_DoControlIdle (mode_26(D));
  # DEBUG e => e_31
  # DEBUG BEGIN_STMT
  if (e_31 != 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 97335770]:
  # DEBUG BEGIN_STMT
  r_33 = OS_Error (&OS_svc_ControlIdle, e_31, &p);
  # DEBUG r => r_33

  <bb 14> [local count: 1073741824]:
  # r_18 = PHI <r_37(9), r_35(11), 0(12), r_33(13)>
  # DEBUG r => r_18
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_18;

}


