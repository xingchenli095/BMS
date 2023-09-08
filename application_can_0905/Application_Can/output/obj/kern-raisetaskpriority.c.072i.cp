
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RequeueUp/2:
  Jump functions of caller  OS_RaiseTaskPriority/0:

 Propagating constants:

Not considering OS_RaiseTaskPriority for cloning; -fipa-cp-clone disabled.

overall_size: 15, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_RaiseTaskPriority/0:
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

OS_RequeueUp/2 (OS_RequeueUp) @06b80d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_RaiseTaskPriority/0 (574129754 (estimated locally),0.53 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06c0a6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_RaiseTaskPriority/0 (read)OS_RaiseTaskPriority/0 (read)
  Availability: not_available
  Varpool flags:
OS_RaiseTaskPriority/0 (OS_RaiseTaskPriority) @06b80b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_RequeueUp/2 (574129754 (estimated locally),0.53 per call) 

;; Function OS_RaiseTaskPriority (OS_RaiseTaskPriority, funcdef_no=0, decl_uid=6851, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_RaiseTaskPriority/0
__attribute__((target ("general-regs-only")))
OS_RaiseTaskPriority (struct os_taskdynamic_t * td, os_prio_t reqPrio)
{
  os_tasklink_t link;
  const struct os_task_t * _1;
  const struct os_task_t * _2;
  short unsigned int _3;
  unsigned char _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.taskQueueHead;
  _2 = OS_kernelData.taskCurrent;
  if (_1 == _2)
    goto <bb 3>; [46.53%]
  else
    goto <bb 4>; [53.47%]

  <bb 3> [local count: 499612071]:
  # DEBUG BEGIN_STMT
  td_8(D)->prio = reqPrio_10(D);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _3 = _2->linkBase;
  _4 = td_8(D)->cAct;
  _5 = (short unsigned int) _4;
  link_9 = _3 + _5;
  # DEBUG link => link_9
  # DEBUG BEGIN_STMT
  td_8(D)->prio = reqPrio_10(D);
  # DEBUG BEGIN_STMT
  OS_RequeueUp (link_9, reqPrio_10(D));

  <bb 5> [local count: 1073741824]:
  return;

}


