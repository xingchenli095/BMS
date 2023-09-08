
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalClearPendingInterrupt/7:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernClearPendingInterrupt/0:

 Propagating constants:

Not considering OS_KernClearPendingInterrupt for cloning; -fipa-cp-clone disabled.

overall_size: 80, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernClearPendingInterrupt/0:
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

OS_LocalClearPendingInterrupt/7 (OS_LocalClearPendingInterrupt) @06d48620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernClearPendingInterrupt/0 (384603879 (estimated locally),0.36 per call) 
  Calls: 
OS_isrTableBase/6 (OS_isrTableBase) @06d761f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearPendingInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/5 (OS_nInterrupts) @06d76168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearPendingInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ClearPendingInterrupt/4 (OS_svc_ClearPendingInterrupt) @06d76120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearPendingInterrupt/0 (addr)OS_KernClearPendingInterrupt/0 (addr)OS_KernClearPendingInterrupt/0 (addr)OS_KernClearPendingInterrupt/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d48540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernClearPendingInterrupt/0 (126919280 (estimated locally),0.12 per call) OS_KernClearPendingInterrupt/0 (97398825 (estimated locally),0.09 per call) OS_KernClearPendingInterrupt/0 (237404317 (estimated locally),0.22 per call) OS_KernClearPendingInterrupt/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_permittedContext/2 (OS_permittedContext) @06d76090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearPendingInterrupt/0 (read)OS_KernClearPendingInterrupt/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d76048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernClearPendingInterrupt/0 (read)OS_KernClearPendingInterrupt/0 (read)OS_KernClearPendingInterrupt/0 (read)OS_KernClearPendingInterrupt/0 (read)OS_KernClearPendingInterrupt/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernClearPendingInterrupt/0 (OS_KernClearPendingInterrupt) @06d480e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_kernelData/1 (read)OS_permittedContext/2 (read)OS_svc_ClearPendingInterrupt/4 (addr)OS_nInterrupts/5 (read)OS_svc_ClearPendingInterrupt/4 (addr)OS_isrTableBase/6 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_ClearPendingInterrupt/4 (addr)OS_svc_ClearPendingInterrupt/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (126919280 (estimated locally),0.12 per call) OS_LocalClearPendingInterrupt/7 (384603879 (estimated locally),0.36 per call) OS_Error/3 (97398825 (estimated locally),0.09 per call) OS_Error/3 (237404317 (estimated locally),0.22 per call) OS_Error/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_KernClearPendingInterrupt (OS_KernClearPendingInterrupt, funcdef_no=0, decl_uid=7257, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernClearPendingInterrupt/0
__attribute__((target ("general-regs-only")))
OS_KernClearPendingInterrupt (os_isrid_t i)
{
  os_errorresult_t e;
  const struct os_isr_t * isr;
  os_paramtype_t p[3];
  os_result_t r;
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
  short unsigned int OS_nInterrupts.5_17;
  const struct os_isr_t * OS_isrTableBase.6_18;
  unsigned int _19;
  const struct os_task_t * _20;
  short unsigned int _21;
  unsigned int _22;
  unsigned int _23;
  const struct os_isr_t * _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  _Bool iftmp.0_29;
  int iftmp.1_30;
  const struct os_appcontext_t * iftmp.7_31;
  short unsigned int _33;
  _Bool iftmp.0_37;
  _Bool iftmp.0_38;
  const struct os_appcontext_t * iftmp.10_40;
  const struct os_appcontext_t * iftmp.8_41;
  const struct os_appcontext_t * iftmp.7_42;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) i_34(D);
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
  _4 = MEM[(const os_callermask_t *)OS_permittedContext.2_3 + 104B];
  _33 = _4 & 1024;
  if (_33 != 0)
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
  # iftmp.1_30 = PHI <1(4), 0(5)>
  _12 = iftmp.1_30 ^ 1;
  iftmp.0_38 = (_Bool) _12;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669605]:
  OS_permittedContext.4_10 = OS_permittedContext;
  _11 = MEM[(const os_callermask_t *)OS_permittedContext.4_10 + 104B];
  _13 = (int) _2;
  _14 = 1 << _13;
  _15 = (short unsigned int) _14;
  _16 = _11 & _15;
  iftmp.0_37 = _16 == 0;

  <bb 8> [local count: 1073741824]:
  # iftmp.0_29 = PHI <iftmp.0_38(6), iftmp.0_37(7)>
  if (iftmp.0_29 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  r_52 = OS_Error (&OS_svc_ClearPendingInterrupt, 12, &p);
  # DEBUG r => r_52
  goto <bb 25>; [100.00%]

  <bb 10> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  OS_nInterrupts.5_17 = OS_nInterrupts;
  if (OS_nInterrupts.5_17 <= i_34(D))
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  r_50 = OS_Error (&OS_svc_ClearPendingInterrupt, 47, &p);
  # DEBUG r => r_50
  goto <bb 25>; [100.00%]

  <bb 12> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.6_18 = OS_isrTableBase;
  _19 = _1 * 68;
  isr_39 = OS_isrTableBase.6_18 + _19;
  # DEBUG isr => isr_39
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 163880920]:
  _20 = OS_kernelData.taskCurrent;
  iftmp.7_42 = _20->app;
  goto <bb 20>; [100.00%]

  <bb 14> [local count: 318121785]:
  if (_2 == 3)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 108161407]:
  _21 = OS_kernelData.isrCurrent;
  _22 = (unsigned int) _21;
  _23 = _22 * 68;
  _24 = OS_isrTableBase.6_18 + _23;
  iftmp.8_41 = _24->app;
  goto <bb 20>; [100.00%]

  <bb 16> [local count: 209960378]:
  if (_2 == 10)
    goto <bb 19>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 17> [local count: 138573849]:
  if (_2 == 8)
    goto <bb 19>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 18> [local count: 91458741]:
  if (_2 == 9)
    goto <bb 19>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 19> [local count: 149597609]:
  iftmp.10_40 = OS_kernelData.hookApp;

  <bb 20> [local count: 421639936]:
  # iftmp.7_31 = PHI <iftmp.7_42(13), iftmp.10_40(19), iftmp.8_41(15)>
  # DEBUG app => iftmp.7_31
  # DEBUG BEGIN_STMT
  if (iftmp.7_31 != 0B)
    goto <bb 21>; [70.00%]
  else
    goto <bb 23>; [30.00%]

  <bb 21> [local count: 295147955]:
  _25 = iftmp.7_31->permissionBit;
  _26 = isr_39->permissions;
  _27 = _25 & _26;
  if (_27 == 0)
    goto <bb 22>; [33.00%]
  else
    goto <bb 23>; [67.00%]

  <bb 22> [local count: 97398825]:
  # DEBUG BEGIN_STMT
  r_44 = OS_Error (&OS_svc_ClearPendingInterrupt, 37, &p);
  # DEBUG r => r_44
  goto <bb 25>; [100.00%]

  <bb 23> [local count: 384603879]:
  # DEBUG app => NULL
  # DEBUG BEGIN_STMT
  e_46 = OS_LocalClearPendingInterrupt (isr_39);
  # DEBUG e => e_46
  # DEBUG BEGIN_STMT
  if (e_46 != 0)
    goto <bb 24>; [33.00%]
  else
    goto <bb 25>; [67.00%]

  <bb 24> [local count: 126919280]:
  # DEBUG BEGIN_STMT
  r_48 = OS_Error (&OS_svc_ClearPendingInterrupt, e_46, &p);
  # DEBUG r => r_48

  <bb 25> [local count: 1073741824]:
  # r_28 = PHI <r_52(9), r_50(11), r_44(22), 0(23), r_48(24)>
  # DEBUG r => r_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_28;

}


