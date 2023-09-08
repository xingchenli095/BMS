
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueLink/0:

 Propagating constants:

Not considering OS_EnqueueLink for cloning; -fipa-cp-clone disabled.

overall_size: 29, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_EnqueueLink/0:
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

OS_kernelData/3 (OS_kernelData) @06c84900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_EnqueueLink/0 (write)
  Availability: not_available
  Varpool flags:
OS_taskPtrs/2 (OS_taskPtrs) @06c848b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_EnqueueLink/0 (read)OS_EnqueueLink/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskActivations/1 (OS_taskActivations) @06c84870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_EnqueueLink/0 (read)OS_EnqueueLink/0 (addr)OS_EnqueueLink/0 (addr)OS_EnqueueLink/0 (addr)OS_EnqueueLink/0 (read)
  Availability: not_available
  Varpool flags:
OS_EnqueueLink/0 (OS_EnqueueLink) @06caca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskActivations/1 (read)OS_taskActivations/1 (addr)OS_taskPtrs/2 (read)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskActivations/1 (read)OS_taskPtrs/2 (read)OS_kernelData/3 (write)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_EnqueueLink (OS_EnqueueLink, funcdef_no=0, decl_uid=6793, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_EnqueueLink/0
__attribute__((target ("general-regs-only")))
OS_EnqueueLink (os_tasklink_t tAct, os_prio_t prio)
{
  os_tasklink_t lAct;
  os_tasklink_t qAct;
  unsigned int _1;
  unsigned int _2;
  os_tasklink_t * _3;
  int _4;
  const struct os_task_t * _6;
  short unsigned int _7;
  int _8;
  struct os_taskdynamic_t * _10;
  unsigned char _11;
  int _12;
  int _13;
  short unsigned int _14;
  unsigned char _15;
  int _16;
  unsigned int _17;
  unsigned int _18;
  os_tasklink_t * _19;
  unsigned int _20;
  unsigned int _21;
  os_tasklink_t * _22;
  short unsigned int _23;
  int _24;
  const struct os_task_t * _25;
  int iftmp.0_28;
  int iftmp.0_31;
  int iftmp.0_32;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  qAct_30 = OS_taskActivations[0];
  # DEBUG qAct => qAct_30
  # DEBUG BEGIN_STMT
  # DEBUG lAct => 0
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  # DEBUG lAct => qAct_26
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) qAct_26;
  _2 = _1 * 2;
  _3 = &OS_taskActivations + _2;
  qAct_34 = *_3;
  # DEBUG qAct => qAct_34

  <bb 4> [local count: 1073741824]:
  # qAct_26 = PHI <qAct_30(2), qAct_34(3)>
  # lAct_27 = PHI <0(2), qAct_26(3)>
  # DEBUG lAct => lAct_27
  # DEBUG qAct => qAct_26
  # DEBUG BEGIN_STMT
  if (qAct_26 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 5> [local count: 1014686025]:
  _4 = (int) qAct_26;
  _6 = OS_taskPtrs[_4];
  _7 = _6->linkBase;
  _8 = (int) _7;
  _10 = _6->dynamic;
  _11 = _10->cAct;
  _12 = (int) _11;
  _13 = _8 + _12;
  if (_4 == _13)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 344993248]:
  _14 = _10->prio;
  iftmp.0_32 = (int) _14;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 669692777]:
  _15 = _6->queuePrio;
  iftmp.0_31 = (int) _15;

  <bb 8> [local count: 1014686025]:
  # iftmp.0_28 = PHI <iftmp.0_32(6), iftmp.0_31(7)>
  _16 = (int) prio_33(D);
  if (_16 <= iftmp.0_28)
    goto <bb 3>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 114863532]:
  # qAct_5 = PHI <qAct_26(4), qAct_26(8)>
  # lAct_9 = PHI <lAct_27(4), lAct_27(8)>
  # DEBUG BEGIN_STMT
  _17 = (unsigned int) lAct_9;
  _18 = _17 * 2;
  _19 = &OS_taskActivations + _18;
  *_19 = tAct_35(D);
  # DEBUG BEGIN_STMT
  _20 = (unsigned int) tAct_35(D);
  _21 = _20 * 2;
  _22 = &OS_taskActivations + _21;
  *_22 = qAct_5;
  # DEBUG BEGIN_STMT
  _23 = OS_taskActivations[0];
  _24 = (int) _23;
  _25 = OS_taskPtrs[_24];
  OS_kernelData.taskQueueHead = _25;
  return;

}


