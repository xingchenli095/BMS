
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Dequeue/0:

 Propagating constants:

Not considering OS_Dequeue for cloning; -fipa-cp-clone disabled.

overall_size: 27, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_Dequeue/0:
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

OS_kernelData/3 (OS_kernelData) @06cfb900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Dequeue/0 (write)
  Availability: not_available
  Varpool flags:
OS_taskPtrs/2 (OS_taskPtrs) @06cfb8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Dequeue/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskActivations/1 (OS_taskActivations) @06cfb870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Dequeue/0 (read)OS_Dequeue/0 (addr)OS_Dequeue/0 (write)OS_Dequeue/0 (addr)OS_Dequeue/0 (addr)
  Availability: not_available
  Varpool flags:
OS_Dequeue/0 (OS_Dequeue) @06d1ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskActivations/1 (read)OS_taskActivations/1 (addr)OS_taskActivations/1 (write)OS_taskPtrs/2 (read)OS_kernelData/3 (write)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:174035655 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_Dequeue (OS_Dequeue, funcdef_no=0, decl_uid=6790, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_Dequeue/0
__attribute__((target ("general-regs-only")))
OS_Dequeue (os_tasklink_t tAct)
{
  os_tasklink_t qAct;
  unsigned int _1;
  unsigned int _2;
  os_tasklink_t * _3;
  short unsigned int _4;
  int _5;
  const struct os_task_t * _6;
  os_tasklink_t * _7;
  unsigned int _9;
  unsigned int _10;
  os_tasklink_t * _11;
  short unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  os_tasklink_t * _15;
  short unsigned int _16;

  <bb 2> [local count: 174035655]:
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  qAct_20 = OS_taskActivations[0];
  # DEBUG qAct => qAct_20
  # DEBUG BEGIN_STMT
  if (qAct_20 == tAct_21(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 3> [local count: 59172123]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) tAct_21(D);
  _2 = _1 * 2;
  _3 = &OS_taskActivations + _2;
  _4 = *_3;
  OS_taskActivations[0] = _4;
  # DEBUG BEGIN_STMT
  _5 = (int) _4;
  _6 = OS_taskPtrs[_5];
  OS_kernelData.taskQueueHead = _6;
  # DEBUG BEGIN_STMT
  *_3 = 0;
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 114863532]:

  <bb 4> [local count: 1073741824]:
  # qAct_17 = PHI <qAct_20(9), _12(10)>
  # DEBUG qAct => qAct_17
  # DEBUG BEGIN_STMT
  _9 = (unsigned int) qAct_17;
  _10 = _9 * 2;
  _11 = &OS_taskActivations + _10;
  _12 = *_11;
  if (_12 != tAct_21(D))
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (qAct_17 != 0)
    goto <bb 10>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 10> [local count: 958878292]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # _7 = PHI <_11(4), _11(5)>
  # qAct_8 = PHI <qAct_17(4), qAct_17(5)>
  # DEBUG BEGIN_STMT
  if (qAct_8 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  _13 = (unsigned int) tAct_21(D);
  _14 = _13 * 2;
  _15 = &OS_taskActivations + _14;
  _16 = *_15;
  *_7 = _16;
  # DEBUG BEGIN_STMT
  *_15 = 0;

  <bb 8> [local count: 174035654]:
  return;

}


