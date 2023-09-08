
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RequeueDown/2:
  Jump functions of caller  OS_LowerCurrentTasksPriority/0:

 Propagating constants:

Not considering OS_LowerCurrentTasksPriority for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LowerCurrentTasksPriority/0:
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

OS_RequeueDown/2 (OS_RequeueDown) @06cdad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LowerCurrentTasksPriority/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06cb95e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LowerCurrentTasksPriority/0 (read)
  Availability: not_available
  Varpool flags:
OS_LowerCurrentTasksPriority/0 (OS_LowerCurrentTasksPriority) @06cdab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_RequeueDown/2 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LowerCurrentTasksPriority (OS_LowerCurrentTasksPriority, funcdef_no=0, decl_uid=6853, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LowerCurrentTasksPriority/0
__attribute__((target ("general-regs-only")))
OS_LowerCurrentTasksPriority (os_prio_t reqPrio)
{
  os_tasklink_t link;
  struct os_taskdynamic_t * const td;
  const struct os_task_t * const currentTask;
  short unsigned int _1;
  unsigned char _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  currentTask_5 = OS_kernelData.taskCurrent;
  # DEBUG currentTask => currentTask_5
  # DEBUG BEGIN_STMT
  td_6 = currentTask_5->dynamic;
  # DEBUG td => td_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = currentTask_5->linkBase;
  _2 = td_6->cAct;
  _3 = (short unsigned int) _2;
  link_7 = _1 + _3;
  # DEBUG link => link_7
  # DEBUG BEGIN_STMT
  OS_RequeueDown (link_7, reqPrio_8(D));
  # DEBUG BEGIN_STMT
  td_6->prio = reqPrio_8(D);
  return;

}


