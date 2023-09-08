
IPA constant propagation start:
Determining dynamic type for call: tempres_57 = OS_CheckTaskAccountingConfig (ts_39);
  Starting walk at: tempres_57 = OS_CheckTaskAccountingConfig (ts_39);
  instance pointer: ts_39  Outer instance pointer: ts_39 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:result_42 = OS_Panic (51);
  Function call may change dynamic type:tempres_57 = OS_CheckTaskAccountingConfig (ts_39);
  Function call may change dynamic type:result_55 = OS_Panic (29);
  Function call may change dynamic type:result_45 = OS_Panic (24);
  Function call may change dynamic type:result_47 = OS_Panic (50);
  Function call may change dynamic type:result_49 = OS_Panic (25);
  Function call may change dynamic type:result_51 = OS_Panic (27);
  Function call may change dynamic type:result_53 = OS_Panic (28);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Panic/3:
  Jump functions of caller  OS_StartupChecksTask/1:
    callsite  OS_StartupChecksTask/1 -> OS_CheckTaskAccountingConfig/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  OS_CheckTaskAccountingConfig/0:

 Propagating constants:

Not considering OS_StartupChecksTask for cloning; -fipa-cp-clone disabled.

overall_size: 109, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartupChecksTask/1:
  Node: OS_CheckTaskAccountingConfig/0:
    param [0]: VARIABLE
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

OS_nTasks/5 (OS_nTasks) @06d080d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksTask/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_configMode/4 (OS_configMode) @06c39f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksTask/1 (read)OS_StartupChecksTask/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Panic/3 (OS_Panic) @06c59000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartupChecksTask/1 (157678987 (estimated locally),1.33 per call) OS_StartupChecksTask/1 (157678987 (estimated locally),1.33 per call) OS_StartupChecksTask/1 (157678987 (estimated locally),1.33 per call) OS_StartupChecksTask/1 (315357973 (estimated locally),2.67 per call) OS_StartupChecksTask/1 (220750581 (estimated locally),1.87 per call) OS_StartupChecksTask/1 (467112053 (estimated locally),3.95 per call) OS_StartupChecksTask/1 (166566348 (estimated locally),1.41 per call) OS_CheckTaskAccountingConfig/0 (341047247 (estimated locally),0.32 per call) OS_CheckTaskAccountingConfig/0 (180134955 (estimated locally),0.17 per call) OS_CheckTaskAccountingConfig/0 (93576600 (estimated locally),0.09 per call) 
  Calls: 
OS_taskTableBase/2 (OS_taskTableBase) @06c39dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksTask/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_StartupChecksTask/1 (OS_StartupChecksTask) @06c59c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskTableBase/2 (read)OS_configMode/4 (read)OS_configMode/4 (read)OS_nTasks/5 (read)
  Referring: 
  Availability: available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CheckTaskAccountingConfig/0 (955630223 (estimated locally),8.09 per call) OS_Panic/3 (157678987 (estimated locally),1.33 per call) OS_Panic/3 (157678987 (estimated locally),1.33 per call) OS_Panic/3 (157678987 (estimated locally),1.33 per call) OS_Panic/3 (315357973 (estimated locally),2.67 per call) OS_Panic/3 (220750581 (estimated locally),1.87 per call) OS_Panic/3 (467112053 (estimated locally),3.95 per call) OS_Panic/3 (166566348 (estimated locally),1.41 per call) 
OS_CheckTaskAccountingConfig/0 (OS_CheckTaskAccountingConfig) @06c59a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_StartupChecksTask/1 (955630223 (estimated locally),8.09 per call) 
  Calls: OS_Panic/3 (341047247 (estimated locally),0.32 per call) OS_Panic/3 (180134955 (estimated locally),0.17 per call) OS_Panic/3 (93576600 (estimated locally),0.09 per call) 

;; Function OS_StartupChecksTask (OS_StartupChecksTask, funcdef_no=1, decl_uid=6505, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_StartupChecksTask/1
__attribute__((target ("general-regs-only")))
OS_StartupChecksTask ()
{
  const os_permission_t perms;
  const struct os_appcontext_t * const app;
  const struct os_task_t * const ts;
  os_result_t tempres;
  os_unsigned_t n;
  os_result_t result;
  const struct os_task_t * OS_taskTableBase.0_1;
  unsigned int _2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  unsigned int OS_configMode.1_10;
  unsigned int _11;
  unsigned char _12;
  unsigned int OS_configMode.2_13;
  unsigned int _14;
  unsigned char _15;
  unsigned char OS_nTasks.3_16;
  unsigned int _17;
  unsigned char _36;

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG n => 0
  goto <bb 23>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_taskTableBase.0_1 = OS_taskTableBase;
  _2 = n_27 * 76;
  ts_39 = OS_taskTableBase.0_1 + _2;
  # DEBUG ts => ts_39
  # DEBUG BEGIN_STMT
  app_40 = ts_39->app;
  # DEBUG app => app_40
  # DEBUG BEGIN_STMT
  if (app_40 == 0B)
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 166566348]:
  # DEBUG BEGIN_STMT
  result_42 = OS_Panic (51);
  # DEBUG result => result_42

  <bb 5> [local count: 955630223]:
  # result_18 = PHI <result_42(4), result_26(3)>
  # DEBUG result => result_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  perms_43 = ts_39->permissions;
  # DEBUG perms => perms_43
  # DEBUG BEGIN_STMT
  _3 = ts_39->taskId;
  _4 = (unsigned int) _3;
  if (_4 != n_27)
    goto <bb 6>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 6> [local count: 467112053]:
  # DEBUG BEGIN_STMT
  result_45 = OS_Panic (24);
  # DEBUG result => result_45

  <bb 7> [local count: 955630223]:
  # result_19 = PHI <result_18(5), result_45(6)>
  # DEBUG result => result_19
  # DEBUG BEGIN_STMT
  if (app_40 != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 8> [local count: 668941156]:
  _5 = app_40->permissionBit;
  _6 = _5 & perms_43;
  if (_6 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 220750581]:
  # DEBUG BEGIN_STMT
  result_47 = OS_Panic (50);
  # DEBUG result => result_47

  <bb 10> [local count: 955630223]:
  # result_20 = PHI <result_19(7), result_19(8), result_47(9)>
  # DEBUG result => result_20
  # DEBUG BEGIN_STMT
  _7 = ts_39->queuePrio;
  _8 = ts_39->runPrio;
  if (_7 > _8)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 315357973]:
  # DEBUG BEGIN_STMT
  result_49 = OS_Panic (25);
  # DEBUG result => result_49

  <bb 12> [local count: 955630223]:
  # result_21 = PHI <result_20(10), result_49(11)>
  # DEBUG result => result_21
  # DEBUG BEGIN_STMT
  _9 = ts_39->flags;
  _36 = _9 & 2;
  if (_36 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 13> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  OS_configMode.1_10 = OS_configMode;
  _11 = OS_configMode.1_10 & 2;
  if (_11 == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  result_51 = OS_Panic (27);
  # DEBUG result => result_51

  <bb 15> [local count: 477815111]:
  # result_22 = PHI <result_21(13), result_51(14)>
  # DEBUG result => result_22
  # DEBUG BEGIN_STMT
  _12 = ts_39->maxAct;
  if (_12 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  result_53 = OS_Panic (28);
  # DEBUG result => result_53

  <bb 17> [local count: 955630223]:
  # result_23 = PHI <result_21(12), result_22(15), result_53(16)>
  # DEBUG result => result_23
  # DEBUG BEGIN_STMT
  OS_configMode.2_13 = OS_configMode;
  _14 = OS_configMode.2_13 & 1;
  if (_14 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 18> [local count: 477815111]:
  _15 = ts_39->maxAct;
  if (_15 != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 20>; [67.00%]

  <bb 19> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  result_55 = OS_Panic (29);
  # DEBUG result => result_55

  <bb 20> [local count: 955630223]:
  # result_24 = PHI <result_23(17), result_23(18), result_55(19)>
  # DEBUG result => result_24
  # DEBUG BEGIN_STMT
  tempres_57 = OS_CheckTaskAccountingConfig (ts_39);
  # DEBUG tempres => tempres_57
  # DEBUG BEGIN_STMT
  if (tempres_57 != 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG result => tempres_57

  <bb 22> [local count: 955630223]:
  # result_25 = PHI <tempres_57(21), result_24(20)>
  # DEBUG result => result_25
  # DEBUG BEGIN_STMT
  n_58 = n_27 + 1;
  # DEBUG n => n_58

  <bb 23> [local count: 1073741824]:
  # result_26 = PHI <0(2), result_25(22)>
  # n_27 = PHI <0(2), n_58(22)>
  # DEBUG n => n_27
  # DEBUG result => result_26
  # DEBUG BEGIN_STMT
  OS_nTasks.3_16 = OS_nTasks;
  _17 = (unsigned int) OS_nTasks.3_16;
  if (_17 > n_27)
    goto <bb 3>; [89.00%]
  else
    goto <bb 24>; [11.00%]

  <bb 24> [local count: 118111601]:
  # result_38 = PHI <result_26(23)>
  # DEBUG BEGIN_STMT
  return result_38;

}


