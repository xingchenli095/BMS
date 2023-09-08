
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RequeueUp/0:

 Propagating constants:

Not considering OS_RequeueUp for cloning; -fipa-cp-clone disabled.

overall_size: 46, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_RequeueUp/0:
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

OS_kernelData/3 (OS_kernelData) @06c6bbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RequeueUp/0 (write)
  Availability: not_available
  Varpool flags:
OS_taskPtrs/2 (OS_taskPtrs) @06c6bb88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RequeueUp/0 (read)OS_RequeueUp/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskActivations/1 (OS_taskActivations) @06c6bb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RequeueUp/0 (read)OS_RequeueUp/0 (addr)OS_RequeueUp/0 (addr)OS_RequeueUp/0 (addr)OS_RequeueUp/0 (addr)OS_RequeueUp/0 (addr)OS_RequeueUp/0 (read)
  Availability: not_available
  Varpool flags:
OS_RequeueUp/0 (OS_RequeueUp) @06c8fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskActivations/1 (read)OS_taskActivations/1 (addr)OS_taskPtrs/2 (read)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskActivations/1 (read)OS_taskPtrs/2 (read)OS_kernelData/3 (write)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_RequeueUp (OS_RequeueUp, funcdef_no=0, decl_uid=6796, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_RequeueUp/0
__attribute__((target ("general-regs-only")))
OS_RequeueUp (os_tasklink_t tAct, os_prio_t prio)
{
  os_tasklink_t qOld;
  os_tasklink_t qNew;
  os_tasklink_t qAct;
  unsigned int _1;
  unsigned int _2;
  os_tasklink_t * _3;
  int _4;
  const struct os_task_t * _6;
  short unsigned int _7;
  int _8;
  struct os_taskdynamic_t * _11;
  unsigned char _12;
  int _13;
  int _14;
  short unsigned int _15;
  unsigned char _17;
  int _18;
  unsigned int _19;
  unsigned int _20;
  os_tasklink_t * _21;
  unsigned int _22;
  unsigned int _23;
  os_tasklink_t * _24;
  unsigned int _25;
  unsigned int _26;
  os_tasklink_t * _27;
  short unsigned int _28;
  unsigned int _29;
  unsigned int _30;
  os_tasklink_t * _31;
  short unsigned int _32;
  int _33;
  const struct os_task_t * _34;
  int iftmp.0_39;
  int iftmp.0_43;
  int iftmp.0_44;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  qAct_42 = OS_taskActivations[0];
  # DEBUG qAct => qAct_42
  # DEBUG BEGIN_STMT
  # DEBUG qNew => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  # DEBUG qNew => qAct_35
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) qAct_35;
  _2 = _1 * 2;
  _3 = &OS_taskActivations + _2;
  qAct_46 = *_3;
  # DEBUG qAct => qAct_46

  <bb 4> [local count: 1073741824]:
  # qAct_35 = PHI <qAct_42(2), qAct_46(3)>
  # qNew_37 = PHI <0(2), qAct_35(3)>
  # DEBUG qNew => qNew_37
  # DEBUG qAct => qAct_35
  # DEBUG BEGIN_STMT
  if (qAct_35 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 5> [local count: 1014686025]:
  _4 = (int) qAct_35;
  _6 = OS_taskPtrs[_4];
  _7 = _6->linkBase;
  _8 = (int) _7;
  _11 = _6->dynamic;
  _12 = _11->cAct;
  _13 = (int) _12;
  _14 = _8 + _13;
  if (_4 == _14)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 344993248]:
  _15 = _11->prio;
  iftmp.0_44 = (int) _15;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 669692777]:
  _17 = _6->queuePrio;
  iftmp.0_43 = (int) _17;

  <bb 8> [local count: 1014686025]:
  # iftmp.0_39 = PHI <iftmp.0_44(6), iftmp.0_43(7)>
  _18 = (int) prio_45(D);
  if (_18 < iftmp.0_39)
    goto <bb 3>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 114863532]:
  # qAct_5 = PHI <qAct_35(4), qAct_35(8)>
  # qNew_10 = PHI <qNew_37(4), qNew_37(8)>
  # DEBUG BEGIN_STMT
  if (qAct_5 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 17> [local count: 57431766]:
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 479439144]:
  # DEBUG BEGIN_STMT
  # DEBUG qOld => qAct_36
  # DEBUG BEGIN_STMT
  _19 = (unsigned int) qAct_36;
  _20 = _19 * 2;
  _21 = &OS_taskActivations + _20;
  qAct_48 = *_21;
  # DEBUG qAct => qAct_48

  <bb 11> [local count: 536870910]:
  # qAct_36 = PHI <qAct_48(10), qAct_5(17)>
  # qOld_38 = PHI <qAct_36(10), qNew_10(17)>
  # DEBUG qNewNext => NULL
  # DEBUG qOld => qOld_38
  # DEBUG qAct => qAct_36
  # DEBUG BEGIN_STMT
  if (qAct_36 != tAct_47(D))
    goto <bb 12>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 12> [local count: 507343010]:
  if (qAct_36 != 0)
    goto <bb 10>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 13> [local count: 57431766]:
  # qAct_9 = PHI <qAct_36(11), qAct_36(12)>
  # qOld_16 = PHI <qOld_38(11), qOld_38(12)>
  # DEBUG BEGIN_STMT
  if (qNew_10 == qOld_16)
    goto <bb 16>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 14> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  if (qAct_9 == tAct_47(D))
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 12887688]:
  # DEBUG BEGIN_STMT
  _22 = (unsigned int) tAct_47(D);
  _23 = _22 * 2;
  _24 = &OS_taskActivations + _23;
  _25 = (unsigned int) qOld_16;
  _26 = _25 * 2;
  _27 = &OS_taskActivations + _26;
  _28 = *_24;
  *_27 = _28;
  # DEBUG BEGIN_STMT
  _29 = (unsigned int) qNew_10;
  _30 = _29 * 2;
  _31 = &OS_taskActivations + _30;
  *_31 = tAct_47(D);
  # DEBUG BEGIN_STMT
  *_24 = qAct_5;
  # DEBUG BEGIN_STMT
  _32 = OS_taskActivations[0];
  _33 = (int) _32;
  _34 = OS_taskPtrs[_33];
  OS_kernelData.taskQueueHead = _34;

  <bb 16> [local count: 114863532]:
  return;

}


