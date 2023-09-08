
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RequeueDown/0:

 Propagating constants:

Not considering OS_RequeueDown for cloning; -fipa-cp-clone disabled.

overall_size: 44, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_RequeueDown/0:
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

OS_kernelData/3 (OS_kernelData) @06be4b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RequeueDown/0 (write)
  Availability: not_available
  Varpool flags:
OS_taskPtrs/2 (OS_taskPtrs) @06be4af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RequeueDown/0 (read)OS_RequeueDown/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskActivations/1 (OS_taskActivations) @06be4ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RequeueDown/0 (read)OS_RequeueDown/0 (addr)OS_RequeueDown/0 (addr)OS_RequeueDown/0 (addr)OS_RequeueDown/0 (addr)OS_RequeueDown/0 (read)OS_RequeueDown/0 (addr)
  Availability: not_available
  Varpool flags:
OS_RequeueDown/0 (OS_RequeueDown) @06c0ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskActivations/1 (read)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskPtrs/2 (read)OS_taskActivations/1 (addr)OS_taskActivations/1 (read)OS_taskPtrs/2 (read)OS_kernelData/3 (write)OS_taskActivations/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_RequeueDown (OS_RequeueDown, funcdef_no=0, decl_uid=6799, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_RequeueDown/0
__attribute__((target ("general-regs-only")))
OS_RequeueDown (os_tasklink_t tAct, os_prio_t prio)
{
  os_tasklink_t qNew;
  os_tasklink_t qSkip;
  os_tasklink_t qOld;
  os_tasklink_t qAct;
  unsigned int _1;
  unsigned int _2;
  os_tasklink_t * _3;
  unsigned int _4;
  unsigned int _5;
  os_tasklink_t * _6;
  unsigned int _7;
  unsigned int _8;
  os_tasklink_t * _9;
  int _10;
  const struct os_task_t * _12;
  short unsigned int _13;
  int _14;
  struct os_taskdynamic_t * _16;
  unsigned char _17;
  int _18;
  int _19;
  short unsigned int _20;
  unsigned char _21;
  int _22;
  unsigned int _23;
  unsigned int _24;
  os_tasklink_t * _25;
  short unsigned int _26;
  int _27;
  const struct os_task_t * _28;
  unsigned int _29;
  unsigned int _30;
  os_tasklink_t * _31;
  int iftmp.0_36;
  int iftmp.0_45;
  int iftmp.0_46;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  qAct_39 = OS_taskActivations[0];
  # DEBUG qAct => qAct_39
  # DEBUG BEGIN_STMT
  # DEBUG qOld => 0
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  # DEBUG qOld => qAct_32
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) qAct_32;
  _2 = _1 * 2;
  _3 = &OS_taskActivations + _2;
  qAct_42 = *_3;
  # DEBUG qAct => qAct_42

  <bb 4> [local count: 1073741824]:
  # qAct_32 = PHI <qAct_39(2), qAct_42(3)>
  # qOld_34 = PHI <0(2), qAct_32(3)>
  # DEBUG qOld => qOld_34
  # DEBUG qAct => qAct_32
  # DEBUG BEGIN_STMT
  if (qAct_32 != tAct_40(D))
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (qAct_32 != 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # qAct_41 = PHI <qAct_32(4), qAct_32(5)>
  # qOld_11 = PHI <qOld_34(4), qOld_34(5)>
  # DEBUG BEGIN_STMT
  if (tAct_40(D) == qAct_41)
    goto <bb 7>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 7> [local count: 39053601]:
  # DEBUG BEGIN_STMT
  _4 = (unsigned int) tAct_40(D);
  _5 = _4 * 2;
  _6 = &OS_taskActivations + _5;
  qSkip_43 = *_6;
  # DEBUG qSkip => qSkip_43
  # DEBUG BEGIN_STMT
  # DEBUG qNew => qOld_11
  # DEBUG BEGIN_STMT
  # DEBUG qAct => qSkip_43
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 326018619]:
  # DEBUG BEGIN_STMT
  # DEBUG qNew => qAct_33
  # DEBUG BEGIN_STMT
  _7 = (unsigned int) qAct_33;
  _8 = _7 * 2;
  _9 = &OS_taskActivations + _8;
  qAct_48 = *_9;
  # DEBUG qAct => qAct_48

  <bb 9> [local count: 365072219]:
  # qAct_33 = PHI <qSkip_43(7), qAct_48(8)>
  # qNew_35 = PHI <qOld_11(7), qAct_33(8)>
  # DEBUG qNew => qNew_35
  # DEBUG qAct => qAct_33
  # DEBUG BEGIN_STMT
  if (qAct_33 != 0)
    goto <bb 10>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 10> [local count: 344993248]:
  _10 = (int) qAct_33;
  _12 = OS_taskPtrs[_10];
  _13 = _12->linkBase;
  _14 = (int) _13;
  _16 = _12->dynamic;
  _17 = _16->cAct;
  _18 = (int) _17;
  _19 = _14 + _18;
  if (_10 == _19)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 117297704]:
  _20 = _16->prio;
  iftmp.0_46 = (int) _20;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 227695543]:
  _21 = _12->queuePrio;
  iftmp.0_45 = (int) _21;

  <bb 13> [local count: 344993248]:
  # iftmp.0_36 = PHI <iftmp.0_46(11), iftmp.0_45(12)>
  _22 = (int) prio_47(D);
  if (_22 < iftmp.0_36)
    goto <bb 8>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 39053601]:
  # qAct_44 = PHI <qAct_33(9), qAct_33(13)>
  # qNew_15 = PHI <qNew_35(9), qNew_35(13)>
  # DEBUG BEGIN_STMT
  if (qOld_11 == qNew_15)
    goto <bb 16>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 25775376]:
  # DEBUG BEGIN_STMT
  _23 = (unsigned int) qOld_11;
  _24 = _23 * 2;
  _25 = &OS_taskActivations + _24;
  *_25 = qSkip_43;
  # DEBUG BEGIN_STMT
  _26 = OS_taskActivations[0];
  _27 = (int) _26;
  _28 = OS_taskPtrs[_27];
  OS_kernelData.taskQueueHead = _28;
  # DEBUG BEGIN_STMT
  _29 = (unsigned int) qNew_15;
  _30 = _29 * 2;
  _31 = &OS_taskActivations + _30;
  *_31 = tAct_40(D);
  # DEBUG BEGIN_STMT
  *_6 = qAct_44;

  <bb 16> [local count: 114863532]:
  return;

}


