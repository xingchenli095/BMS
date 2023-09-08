
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_LocalActivateTask/11:
  Jump functions of caller  OS_DoTerminateTask/10:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/9:
  Jump functions of caller  OS_Error/2:
  Jump functions of caller  OS_KernChainTask/0:

 Propagating constants:

Not considering OS_KernChainTask for cloning; -fipa-cp-clone disabled.

overall_size: 99, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernChainTask/0:
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

OS_LocalActivateTask/11 (OS_LocalActivateTask) @06cf29a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernChainTask/0 (56202455 (estimated locally),0.05 per call) OS_KernChainTask/0 (4875162 (estimated locally),0.00 per call) 
  Calls: 
OS_DoTerminateTask/10 (OS_DoTerminateTask) @06cf28c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernChainTask/0 (18546810 (estimated locally),0.02 per call) OS_KernChainTask/0 (4875162 (estimated locally),0.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/9 (OS_CORTEXM_IntSetDisablingLevel) @06cf27e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernChainTask/0 (24086767 (estimated locally),0.02 per call) OS_KernChainTask/0 (24086767 (estimated locally),0.02 per call) 
  Calls: 
OS_kernDisableLevel/8 (OS_kernDisableLevel) @06d26a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskTableBase/6 (OS_taskTableBase) @06d26990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_iecMode/5 (OS_iecMode) @06d26870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nTasks/4 (OS_nTasks) @06d267e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainTask/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_ChainTask/3 (OS_svc_ChainTask) @06d26798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainTask/0 (addr)OS_KernChainTask/0 (addr)OS_KernChainTask/0 (addr)OS_KernChainTask/0 (addr)OS_KernChainTask/0 (addr)OS_KernChainTask/0 (addr)OS_KernChainTask/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/2 (OS_Error) @06cf2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernChainTask/0 (26495443 (estimated locally),0.02 per call) OS_KernChainTask/0 (24118089 (estimated locally),0.02 per call) OS_KernChainTask/0 (133764190 (estimated locally),0.12 per call) OS_KernChainTask/0 (68908825 (estimated locally),0.06 per call) OS_KernChainTask/0 (60680543 (estimated locally),0.06 per call) OS_KernChainTask/0 (181135951 (estimated locally),0.17 per call) OS_KernChainTask/0 (524845004 (estimated locally),0.49 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06d26708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernChainTask/0 (read)OS_KernChainTask/0 (read)
  Availability: not_available
  Varpool flags:
OS_KernChainTask/0 (OS_KernChainTask) @06cf22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_svc_ChainTask/3 (addr)OS_nTasks/4 (read)OS_svc_ChainTask/3 (addr)OS_kernelData/1 (read)OS_iecMode/5 (read)OS_svc_ChainTask/3 (addr)OS_svc_ChainTask/3 (addr)OS_svc_ChainTask/3 (addr)OS_taskTableBase/6 (read)OS_svc_ChainTask/3 (addr)OS_kernDisableLevel/8 (read)OS_svc_ChainTask/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/2 (26495443 (estimated locally),0.02 per call) OS_DoTerminateTask/10 (18546810 (estimated locally),0.02 per call) OS_LocalActivateTask/11 (56202455 (estimated locally),0.05 per call) OS_CORTEXM_IntSetDisablingLevel/9 (24086767 (estimated locally),0.02 per call) OS_LocalActivateTask/11 (4875162 (estimated locally),0.00 per call) OS_DoTerminateTask/10 (4875162 (estimated locally),0.00 per call) OS_CORTEXM_IntSetDisablingLevel/9 (24086767 (estimated locally),0.02 per call) OS_Error/2 (24118089 (estimated locally),0.02 per call) OS_Error/2 (133764190 (estimated locally),0.12 per call) OS_Error/2 (68908825 (estimated locally),0.06 per call) OS_Error/2 (60680543 (estimated locally),0.06 per call) OS_Error/2 (181135951 (estimated locally),0.17 per call) OS_Error/2 (524845004 (estimated locally),0.49 per call) 

;; Function OS_KernChainTask (OS_KernChainTask, funcdef_no=0, decl_uid=7194, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernChainTask/0
__attribute__((target ("general-regs-only")))
OS_KernChainTask (os_taskid_t t)
{
  os_errorresult_t e;
  os_paramtype_t p[3];
  os_intstatus_t is;
  os_result_t r;
  const struct os_task_t * ntp;
  struct os_taskdynamic_t * otd;
  const struct os_task_t * otp;
  unsigned int _1;
  unsigned char _2;
  unsigned char OS_nTasks.0_3;
  unsigned char OS_iecMode.1_4;
  short unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  const struct os_task_t * OS_taskTableBase.2_8;
  unsigned int _9;
  const struct os_appcontext_t * _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  short unsigned int OS_kernDisableLevel.9_14;
  unsigned char _15;
  struct os_taskdynamic_t * _16;
  const struct os_appcontext_t * iftmp.5_31;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) t_23(D);
  p[0] = _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.inFunction;
  if (_2 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  r_52 = OS_Error (&OS_svc_ChainTask, 12, &p);
  # DEBUG r => r_52
  goto <bb 24>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  OS_nTasks.0_3 = OS_nTasks;
  if (OS_nTasks.0_3 <= t_23(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  r_50 = OS_Error (&OS_svc_ChainTask, 2, &p);
  # DEBUG r => r_50
  goto <bb 24>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  otp_26 = OS_kernelData.taskCurrent;
  # DEBUG otp => otp_26
  # DEBUG BEGIN_STMT
  otd_27 = otp_26->dynamic;
  # DEBUG otd => otd_27
  # DEBUG BEGIN_STMT
  OS_iecMode.1_4 = OS_iecMode;
  if (OS_iecMode.1_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 183880435]:
  _5 = BIT_FIELD_REF <MEM[(void *)otd_27], 16, 160>;
  if (_5 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 60680543]:
  # DEBUG BEGIN_STMT
  r_29 = OS_Error (&OS_svc_ChainTask, 55, 0B);
  # DEBUG r => r_29
  goto <bb 24>; [100.00%]

  <bb 9> [local count: 307080326]:
  # DEBUG BEGIN_STMT
  _6 = otd_27->lastLock;
  if (_6 != 4294967295)
    goto <bb 10>; [66.00%]
  else
    goto <bb 13>; [34.00%]

  <bb 10> [local count: 202673015]:
  # DEBUG BEGIN_STMT
  _7 = _6 >> 24;
  if (_7 == 9)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 68908825]:
  # DEBUG BEGIN_STMT
  r_48 = OS_Error (&OS_svc_ChainTask, 156, &p);
  # DEBUG r => r_48
  goto <bb 24>; [100.00%]

  <bb 12> [local count: 133764190]:
  # DEBUG BEGIN_STMT
  r_46 = OS_Error (&OS_svc_ChainTask, 13, &p);
  # DEBUG r => r_46
  goto <bb 24>; [100.00%]

  <bb 13> [local count: 104407311]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.2_8 = OS_taskTableBase;
  _9 = _1 * 76;
  ntp_30 = OS_taskTableBase.2_8 + _9;
  # DEBUG ntp => ntp_30
  # DEBUG BEGIN_STMT
  _10 = otp_26->app;
  if (_10 != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 16>; [30.00%]

  <bb 14> [local count: 73085118]:
  iftmp.5_31 = otp_26->app;
  _11 = iftmp.5_31->permissionBit;
  _12 = ntp_30->permissions;
  _13 = _11 & _12;
  if (_13 == 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 24118089]:
  # DEBUG BEGIN_STMT
  r_33 = OS_Error (&OS_svc_ChainTask, 37, &p);
  # DEBUG r => r_33
  goto <bb 24>; [100.00%]

  <bb 16> [local count: 80289222]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (otp_26 == ntp_30)
    goto <bb 17>; [30.00%]
  else
    goto <bb 20>; [70.00%]

  <bb 17> [local count: 24086767]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.9_14 = OS_kernDisableLevel;
  is_38 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.9_14);
  # DEBUG is => is_38
  # DEBUG BEGIN_STMT
  _15 = otd_27->state;
  if (_15 == 5)
    goto <bb 18>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 18> [local count: 4875162]:
  # DEBUG BEGIN_STMT
  OS_DoTerminateTask (otp_26, otd_27);
  # DEBUG BEGIN_STMT
  e_41 = OS_LocalActivateTask (ntp_30);
  # DEBUG e => e_41

  <bb 19> [local count: 24086767]:
  # e_18 = PHI <e_41(18), 0(17)>
  # DEBUG e => e_18
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_38);
  goto <bb 22>; [100.00%]

  <bb 20> [local count: 56202455]:
  # DEBUG BEGIN_STMT
  e_35 = OS_LocalActivateTask (ntp_30);
  # DEBUG e => e_35
  # DEBUG BEGIN_STMT
  if (e_35 == 0)
    goto <bb 21>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 21> [local count: 18546810]:
  # DEBUG BEGIN_STMT
  _16 = otp_26->dynamic;
  OS_DoTerminateTask (otp_26, _16);

  <bb 22> [local count: 80289222]:
  # e_19 = PHI <e_18(19), e_35(20), 0(21)>
  # DEBUG e => e_19
  # DEBUG BEGIN_STMT
  if (e_19 != 0)
    goto <bb 23>; [33.00%]
  else
    goto <bb 24>; [67.00%]

  <bb 23> [local count: 26495443]:
  # DEBUG BEGIN_STMT
  r_44 = OS_Error (&OS_svc_ChainTask, e_19, &p);
  # DEBUG r => r_44

  <bb 24> [local count: 1073741824]:
  # r_17 = PHI <r_52(3), r_50(5), r_29(8), r_46(12), r_33(15), 0(22), r_44(23), r_48(11)>
  # DEBUG r => r_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p ={v} {CLOBBER};
  return r_17;

}


