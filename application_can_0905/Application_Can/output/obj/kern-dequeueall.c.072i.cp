
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_DequeueAll/0:

 Propagating constants:

Not considering OS_DequeueAll for cloning; -fipa-cp-clone disabled.

overall_size: 31, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_DequeueAll/0:
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

OS_kernelData/3 (OS_kernelData) @06c63900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DequeueAll/0 (write)
  Availability: not_available
  Varpool flags:
OS_taskPtrs/2 (OS_taskPtrs) @06c638b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DequeueAll/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_taskActivations/1 (OS_taskActivations) @06c63870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DequeueAll/0 (read)OS_DequeueAll/0 (addr)OS_DequeueAll/0 (addr)OS_DequeueAll/0 (read)
  Availability: not_available
  Varpool flags:
OS_DequeueAll/0 (OS_DequeueAll) @06c88a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskActivations/1 (read)OS_taskActivations/1 (addr)OS_taskActivations/1 (addr)OS_taskActivations/1 (read)OS_taskPtrs/2 (read)OS_kernelData/3 (write)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_DequeueAll (OS_DequeueAll, funcdef_no=0, decl_uid=6801, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_DequeueAll/0
__attribute__((target ("general-regs-only")))
OS_DequeueAll (const struct os_task_t * tp)
{
  os_unsigned_t nAct;
  os_tasklink_t max;
  os_tasklink_t min;
  os_tasklink_t prev;
  os_tasklink_t next;
  struct os_taskdynamic_t * td;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  os_tasklink_t * _7;
  unsigned int _8;
  unsigned int _9;
  os_tasklink_t * _10;
  short unsigned int _14;
  int _15;
  const struct os_task_t * _16;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG taskActivations => &OS_taskActivations
  # DEBUG BEGIN_STMT
  td_23 = tp_22(D)->dynamic;
  # DEBUG td => td_23
  # DEBUG BEGIN_STMT
  next_24 = OS_taskActivations[0];
  # DEBUG next => next_24
  # DEBUG BEGIN_STMT
  # DEBUG prev => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  min_25 = tp_22(D)->linkBase;
  # DEBUG min => min_25
  # DEBUG BEGIN_STMT
  _1 = tp_22(D)->maxAct;
  _2 = (short unsigned int) _1;
  max_26 = _2 + min_25;
  # DEBUG max => max_26
  # DEBUG BEGIN_STMT
  _3 = td_23->nAct;
  _4 = (unsigned int) _3;
  nAct_27 = _4 + 1;
  # DEBUG nAct => nAct_27
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  # DEBUG curr => next_17
  # DEBUG BEGIN_STMT
  _5 = (unsigned int) next_17;
  _6 = _5 * 2;
  _7 = &OS_taskActivations + _6;
  next_29 = *_7;
  # DEBUG next => next_29
  # DEBUG BEGIN_STMT
  if (next_17 >= min_25)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 479439146]:
  if (next_17 <= max_26)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 239719573]:
  # DEBUG BEGIN_STMT
  _8 = (unsigned int) prev_18;
  _9 = _8 * 2;
  _10 = &OS_taskActivations + _9;
  *_10 = next_29;
  # DEBUG BEGIN_STMT
  *_7 = 0;
  # DEBUG BEGIN_STMT
  nAct_32 = nAct_19 + 4294967295;
  # DEBUG nAct => nAct_32

  <bb 7> [local count: 958878292]:
  # next_13 = PHI <next_29(5), next_29(4), next_29(3)>
  # prev_12 = PHI <prev_18(5), next_17(4), next_17(3)>
  # nAct_11 = PHI <nAct_32(5), nAct_19(4), nAct_19(3)>

  <bb 10> [local count: 1073741824]:
  # next_17 = PHI <next_13(7), next_24(2)>
  # prev_18 = PHI <prev_12(7), 0(2)>
  # nAct_19 = PHI <nAct_11(7), nAct_27(2)>
  # DEBUG nAct => nAct_19
  # DEBUG prev => prev_18
  # DEBUG next => next_17
  # DEBUG BEGIN_STMT
  if (nAct_19 != 0)
    goto <bb 8>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 8> [local count: 1014686025]:
  if (next_17 != 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  td_23->nAct = 0;
  # DEBUG BEGIN_STMT
  td_23->cAct = 0;
  # DEBUG BEGIN_STMT
  _14 = OS_taskActivations[0];
  _15 = (int) _14;
  _16 = OS_taskPtrs[_15];
  OS_kernelData.taskQueueHead = _16;
  return;

}


