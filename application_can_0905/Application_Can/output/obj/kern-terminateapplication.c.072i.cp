
IPA constant propagation start:
Determining dynamic type for call: r_53 = OS_killHookFunc.11_29 (&OS_kernelData.eHookContext);
  Starting walk at: r_53 = OS_killHookFunc.11_29 (&OS_kernelData.eHookContext);
  instance pointer: &OS_kernelData.eHookContext  Outer instance pointer: OS_kernelData offset: 576 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Shutdown/10:
  Jump functions of caller  OS_LocalTerminateApplication/8:
  Jump functions of caller  OS_Error/3:
  Jump functions of caller  OS_KernTerminateApplication/0:
    indirect simple callsite, calling param -1, offset 0, for stmt r_53 = OS_killHookFunc.11_29 (&OS_kernelData.eHookContext);
       param 0: CONST: &OS_kernelData.eHookContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    indirect simple callsite, calling param -1, offset 0, for stmt r_63 = OS_killIsrFunc.8_27 (_22);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR

 Propagating constants:

Not considering OS_KernTerminateApplication for cloning; -fipa-cp-clone disabled.

overall_size: 146, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernTerminateApplication/0:
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

OS_killHookFunc/11 (OS_killHookFunc) @06db0c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Shutdown/10 (OS_Shutdown) @06d7cb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernTerminateApplication/0 (6331736 (estimated locally),0.01 per call) OS_KernTerminateApplication/0 (2181758 (estimated locally),0.00 per call) OS_KernTerminateApplication/0 (3788601 (estimated locally),0.00 per call) OS_KernTerminateApplication/0 (1305457 (estimated locally),0.00 per call) 
  Calls: 
OS_killIsrFunc/9 (OS_killIsrFunc) @06db0ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalTerminateApplication/8 (OS_LocalTerminateApplication) @06d7ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernTerminateApplication/0 (125353580 (estimated locally),0.12 per call) 
  Calls: 
OS_isrTableBase/7 (OS_isrTableBase) @06db0990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_appTableBase/6 (OS_appTableBase) @06db0948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nApps/5 (OS_nApps) @06db0870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_TerminateApplication/4 (OS_svc_TerminateApplication) @06db0828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (addr)OS_KernTerminateApplication/0 (addr)OS_KernTerminateApplication/0 (addr)OS_KernTerminateApplication/0 (addr)OS_KernTerminateApplication/0 (addr)OS_KernTerminateApplication/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/3 (OS_Error) @06d7c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernTerminateApplication/0 (117968915 (estimated locally),0.11 per call) OS_KernTerminateApplication/0 (41366681 (estimated locally),0.04 per call) OS_KernTerminateApplication/0 (51056410 (estimated locally),0.05 per call) OS_KernTerminateApplication/0 (223807525 (estimated locally),0.21 per call) OS_KernTerminateApplication/0 (265751101 (estimated locally),0.25 per call) OS_KernTerminateApplication/0 (268435456 (estimated locally),0.25 per call) 
  Calls: 
OS_iecMode/2 (OS_iecMode) @06db0798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06db0750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (read)OS_KernTerminateApplication/0 (write)OS_KernTerminateApplication/0 (addr)
  Availability: not_available
  Varpool flags:
OS_KernTerminateApplication/0 (OS_KernTerminateApplication) @06d7c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_iecMode/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_TerminateApplication/4 (addr)OS_nApps/5 (read)OS_svc_TerminateApplication/4 (addr)OS_svc_TerminateApplication/4 (addr)OS_appTableBase/6 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_svc_TerminateApplication/4 (addr)OS_svc_TerminateApplication/4 (addr)OS_kernelData/1 (read)OS_isrTableBase/7 (read)OS_kernelData/1 (read)OS_killIsrFunc/9 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_killHookFunc/11 (read)OS_kernelData/1 (addr)OS_svc_TerminateApplication/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/3 (117968915 (estimated locally),0.11 per call) OS_Shutdown/10 (6331736 (estimated locally),0.01 per call) OS_Shutdown/10 (2181758 (estimated locally),0.00 per call) OS_Shutdown/10 (3788601 (estimated locally),0.00 per call) OS_Shutdown/10 (1305457 (estimated locally),0.00 per call) OS_Error/3 (41366681 (estimated locally),0.04 per call) OS_LocalTerminateApplication/8 (125353580 (estimated locally),0.12 per call) OS_Error/3 (51056410 (estimated locally),0.05 per call) OS_Error/3 (223807525 (estimated locally),0.21 per call) OS_Error/3 (265751101 (estimated locally),0.25 per call) OS_Error/3 (268435456 (estimated locally),0.25 per call) 
   Indirect call(19187079 (estimated locally),0.02 per call) 
   Indirect call(11480608 (estimated locally),0.01 per call) 

;; Function OS_KernTerminateApplication (OS_KernTerminateApplication, funcdef_no=0, decl_uid=7290, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernTerminateApplication/0
__attribute__((target ("general-regs-only")))
OS_KernTerminateApplication (os_applicationid_t appid, os_restart_t restart)
{
  os_errorresult_t e;
  const struct os_appcontext_t * const app;
  os_paramtype_t p[3];
  os_result_t r;
  unsigned int _1;
  unsigned int _2;
  unsigned char OS_iecMode.0_3;
  unsigned char _4;
  const struct os_task_t * _5;
  struct os_taskdynamic_t * _6;
  short unsigned int _7;
  short unsigned int _8;
  unsigned char OS_nApps.1_9;
  const struct os_appcontext_t * OS_appTableBase.2_10;
  unsigned int _11;
  unsigned char _12;
  const struct os_task_t * _13;
  const struct os_isr_t * OS_isrTableBase.5_14;
  short unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  const struct os_isr_t * _18;
  unsigned char _19;
  unsigned char _20;
  const struct os_isr_t * OS_isrTableBase.7_21;
  short unsigned int _22;
  unsigned int _23;
  unsigned int _24;
  const struct os_isr_t * _25;
  const struct os_appcontext_t * _26;
  os_result_t (*<T6a1>) (os_isrid_t) OS_killIsrFunc.8_27;
  unsigned char _28;
  os_result_t (*<T6a8>) (struct os_hookcontext_t *) OS_killHookFunc.11_29;
  const struct os_appcontext_t * iftmp.3_32;
  os_erroraction_t iftmp.10_33;
  unsigned char _37;
  const struct os_appcontext_t * iftmp.6_46;
  const struct os_appcontext_t * iftmp.4_47;
  const struct os_appcontext_t * iftmp.3_48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) appid_38(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  _2 = (unsigned int) restart_41(D);
  p[1] = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_iecMode.0_3 = OS_iecMode;
  if (OS_iecMode.0_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870913]:
  _4 = OS_kernelData.inFunction;
  if (_4 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  _5 = OS_kernelData.taskCurrent;
  _6 = _5->dynamic;
  _7 = BIT_FIELD_REF <MEM[(void *)_6], 16, 160>;
  if (_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 354334802]:
  _8 = BIT_FIELD_REF <MEM[(void *)&OS_kernelData], 16, 320>;
  if (_8 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  r_44 = OS_Error (&OS_svc_TerminateApplication, 55, &p);
  # DEBUG r => r_44
  goto <bb 44>; [100.00%]

  <bb 7> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  OS_nApps.1_9 = OS_nApps;
  if (OS_nApps.1_9 <= appid_38(D))
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  r_69 = OS_Error (&OS_svc_TerminateApplication, 46, 0B);
  # DEBUG r => r_69
  goto <bb 44>; [100.00%]

  <bb 9> [local count: 539555267]:
  # DEBUG BEGIN_STMT
  if (restart_41(D) > 1)
    goto <bb 10>; [41.48%]
  else
    goto <bb 11>; [58.52%]

  <bb 10> [local count: 223807525]:
  # DEBUG BEGIN_STMT
  r_67 = OS_Error (&OS_svc_TerminateApplication, 70, &p);
  # DEBUG r => r_67
  goto <bb 44>; [100.00%]

  <bb 11> [local count: 315747742]:
  # DEBUG BEGIN_STMT
  OS_appTableBase.2_10 = OS_appTableBase;
  _11 = _1 * 64;
  app_45 = OS_appTableBase.2_10 + _11;
  # DEBUG app => app_45
  # DEBUG BEGIN_STMT
  _12 = OS_kernelData.inFunction;
  if (_12 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 107354232]:
  _13 = OS_kernelData.taskCurrent;
  iftmp.3_48 = _13->app;
  goto <bb 19>; [100.00%]

  <bb 13> [local count: 208393510]:
  if (_12 == 3)
    goto <bb 14>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 14> [local count: 70853793]:
  OS_isrTableBase.5_14 = OS_isrTableBase;
  _15 = OS_kernelData.isrCurrent;
  _16 = (unsigned int) _15;
  _17 = _16 * 68;
  _18 = OS_isrTableBase.5_14 + _17;
  iftmp.4_47 = _18->app;
  goto <bb 19>; [100.00%]

  <bb 15> [local count: 137539716]:
  if (_12 == 10)
    goto <bb 18>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 90776213]:
  if (_12 == 8)
    goto <bb 18>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 17> [local count: 59912300]:
  if (_12 == 9)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 97997598]:
  iftmp.6_46 = OS_kernelData.hookApp;

  <bb 19> [local count: 315747742]:
  # iftmp.3_32 = PHI <iftmp.3_48(12), 0B(17), iftmp.4_47(14), iftmp.6_46(18)>
  # DEBUG callingApp => iftmp.3_32
  # DEBUG BEGIN_STMT
  if (iftmp.3_32 != app_45)
    goto <bb 20>; [70.00%]
  else
    goto <bb 23>; [30.00%]

  <bb 20> [local count: 221023420]:
  if (iftmp.3_32 != 0B)
    goto <bb 21>; [70.00%]
  else
    goto <bb 23>; [30.00%]

  <bb 21> [local count: 154716394]:
  _19 = iftmp.3_32->flags;
  _37 = _19 & 1;
  if (_37 == 0)
    goto <bb 22>; [33.00%]
  else
    goto <bb 23>; [67.00%]

  <bb 22> [local count: 51056410]:
  # DEBUG BEGIN_STMT
  r_50 = OS_Error (&OS_svc_TerminateApplication, 37, &p);
  # DEBUG r => r_50
  goto <bb 44>; [100.00%]

  <bb 23> [local count: 264691332]:
  # DEBUG BEGIN_STMT
  if (_12 == 1)
    goto <bb 25>; [20.24%]
  else
    goto <bb 24>; [79.76%]

  <bb 24> [local count: 211117807]:
  if (_12 == 3)
    goto <bb 25>; [34.00%]
  else
    goto <bb 33>; [66.00%]

  <bb 25> [local count: 125353580]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  e_59 = OS_LocalTerminateApplication (app_45, restart_41(D));
  # DEBUG e => e_59
  # DEBUG BEGIN_STMT
  if (e_59 != 0)
    goto <bb 26>; [33.00%]
  else
    goto <bb 27>; [67.00%]

  <bb 26> [local count: 41366681]:
  # DEBUG BEGIN_STMT
  r_61 = OS_Error (&OS_svc_TerminateApplication, e_59, &p);
  # DEBUG r => r_61

  <bb 27> [local count: 125353580]:
  # r_30 = PHI <0(25), r_61(26)>
  # DEBUG r => r_30
  # DEBUG BEGIN_STMT
  _20 = OS_kernelData.inFunction;
  if (_20 == 3)
    goto <bb 28>; [34.00%]
  else
    goto <bb 44>; [66.00%]

  <bb 28> [local count: 42620217]:
  OS_isrTableBase.7_21 = OS_isrTableBase;
  _22 = OS_kernelData.isrCurrent;
  _23 = (unsigned int) _22;
  _24 = _23 * 68;
  _25 = OS_isrTableBase.7_21 + _24;
  _26 = _25->app;
  if (_26 == app_45)
    goto <bb 29>; [30.00%]
  else
    goto <bb 44>; [70.00%]

  <bb 29> [local count: 12786065]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 30
  # DEBUG BEGIN_STMT
  OS_killIsrFunc.8_27 = OS_killIsrFunc;
  if (OS_killIsrFunc.8_27 == 0B)
    goto <bb 30>; [10.21%]
  else
    goto <bb 31>; [89.79%]

  <bb 30> [local count: 1305457]:
  # DEBUG BEGIN_STMT
  OS_Shutdown (30, 0);
  goto <bb 44>; [100.00%]

  <bb 31> [local count: 11480608]:
  # DEBUG BEGIN_STMT
  r_63 = OS_killIsrFunc.8_27 (_22);
  # DEBUG r => r_63
  # DEBUG BEGIN_STMT
  if (r_63 != 0)
    goto <bb 32>; [33.00%]
  else
    goto <bb 44>; [67.00%]

  <bb 32> [local count: 3788601]:
  # DEBUG BEGIN_STMT
  OS_Shutdown (r_63, 0);
  goto <bb 44>; [100.00%]

  <bb 33> [local count: 139337752]:
  # DEBUG BEGIN_STMT
  if (_12 == 10)
    goto <bb 34>; [51.12%]
  else
    goto <bb 43>; [48.88%]

  <bb 34> [local count: 71229459]:
  if (iftmp.3_32 == app_45)
    goto <bb 35>; [30.00%]
  else
    goto <bb 43>; [70.00%]

  <bb 35> [local count: 21368838]:
  # DEBUG BEGIN_STMT
  _28 = OS_kernelData.errorStatus.action;
  if (_28 != 6)
    goto <bb 36>; [66.00%]
  else
    goto <bb 39>; [34.00%]

  <bb 36> [local count: 14103433]:
  # DEBUG BEGIN_STMT
  if (restart_41(D) == 1)
    goto <bb 38>; [34.00%]
  else
    goto <bb 37>; [66.00%]

  <bb 37> [local count: 9308266]:

  <bb 38> [local count: 14103433]:
  # iftmp.10_33 = PHI <5(36), 4(37)>
  OS_kernelData.errorStatus.action = iftmp.10_33;

  <bb 39> [local count: 21368838]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 30
  # DEBUG BEGIN_STMT
  OS_killHookFunc.11_29 = OS_killHookFunc;
  if (OS_killHookFunc.11_29 == 0B)
    goto <bb 40>; [10.21%]
  else
    goto <bb 41>; [89.79%]

  <bb 40> [local count: 2181758]:
  # DEBUG BEGIN_STMT
  OS_Shutdown (30, 0);
  goto <bb 44>; [100.00%]

  <bb 41> [local count: 19187079]:
  # DEBUG BEGIN_STMT
  r_53 = OS_killHookFunc.11_29 (&OS_kernelData.eHookContext);
  # DEBUG r => r_53
  # DEBUG BEGIN_STMT
  if (r_53 != 0)
    goto <bb 42>; [33.00%]
  else
    goto <bb 44>; [67.00%]

  <bb 42> [local count: 6331736]:
  # DEBUG BEGIN_STMT
  OS_Shutdown (r_53, 0);
  goto <bb 44>; [100.00%]

  <bb 43> [local count: 117968915]:
  # DEBUG BEGIN_STMT
  r_57 = OS_Error (&OS_svc_TerminateApplication, 12, &p);
  # DEBUG r => r_57

  <bb 44> [local count: 1073741824]:
  # r_31 = PHI <r_44(6), r_69(8), r_67(10), r_50(22), r_30(28), r_53(41), r_57(43), r_30(27), r_63(32), r_63(31), 30(30), 30(40), r_53(42)>
  # DEBUG r => r_31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_31;

}

