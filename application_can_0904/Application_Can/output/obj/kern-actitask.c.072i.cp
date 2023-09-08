
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueLink/1:
  Jump functions of caller  OS_ActiTask/0:

 Propagating constants:

Not considering OS_ActiTask for cloning; -fipa-cp-clone disabled.

overall_size: 18, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ActiTask/0:
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

OS_EnqueueLink/1 (OS_EnqueueLink) @06c49d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ActiTask/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_ActiTask/0 (OS_ActiTask) @06c49b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_EnqueueLink/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_ActiTask (OS_ActiTask, funcdef_no=0, decl_uid=6816, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ActiTask/0
__attribute__((target ("general-regs-only")))
OS_ActiTask (const struct os_task_t * tp)
{
  struct os_taskdynamic_t * td;
  unsigned char _1;
  short unsigned int _2;
  struct os_taskaccounting_t * _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_8 = tp_7(D)->dynamic;
  # DEBUG td => td_8
  # DEBUG BEGIN_STMT
  _1 = tp_7(D)->queuePrio;
  _2 = (short unsigned int) _1;
  td_8->prio = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  td_8->state = 2;
  # DEBUG BEGIN_STMT
  td_8->cAct = 0;
  # DEBUG BEGIN_STMT
  td_8->pEvents = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = tp_7(D)->accounting;
  if (_3 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _3->etUsed = 0;
  # DEBUG BEGIN_STMT
  _3->etType = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = tp_7(D)->linkBase;
  OS_EnqueueLink (_4, _2);
  return;

}


