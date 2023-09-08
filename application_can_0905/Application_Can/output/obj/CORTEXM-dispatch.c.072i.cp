
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_SaveVFPFullContext/3:
  Jump functions of caller  OS_TaskSpOutOfBounds/2:
  Jump functions of caller  OS_CORTEXM_Dispatch/0:

 Propagating constants:

Not considering OS_CORTEXM_Dispatch for cloning; -fipa-cp-clone disabled.

overall_size: 29, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CORTEXM_Dispatch/0:
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

OS_CORTEXM_SaveVFPFullContext/3 (OS_CORTEXM_SaveVFPFullContext) @06c8cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CORTEXM_Dispatch/0 (136902082 (estimated locally),0.13 per call) 
  Calls: 
OS_TaskSpOutOfBounds/2 (OS_TaskSpOutOfBounds) @06c8cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CORTEXM_Dispatch/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06c647e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CORTEXM_Dispatch/0 (read)
  Availability: not_available
  Varpool flags:
OS_CORTEXM_Dispatch/0 (OS_CORTEXM_Dispatch) @06c8ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_SaveVFPFullContext/3 (136902082 (estimated locally),0.13 per call) OS_TaskSpOutOfBounds/2 (1073741823 (estimated locally),1.00 per call) 

;; Function OS_CORTEXM_Dispatch (OS_CORTEXM_Dispatch, funcdef_no=0, decl_uid=7376, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CORTEXM_Dispatch/0
__attribute__((target ("general-regs-only")))
OS_CORTEXM_Dispatch (const struct os_cortexm_context_t * context, struct os_cortexm_context_t * tasksp)
{
  const struct os_task_t * const current_task;
  os_stackelement_t * checksp;
  unsigned char _1;
  signed char _2;
  struct os_taskdynamic_t * _3;
  unsigned int checksp.0_4;
  int _5;
  unsigned char _6;
  signed char _7;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG checksp => tasksp_10(D)
  # DEBUG BEGIN_STMT
  current_task_12 = OS_kernelData.taskCurrent;
  # DEBUG current_task => current_task_12
  # DEBUG BEGIN_STMT
  checksp_13 = tasksp_10(D) + 4294967248;
  # DEBUG checksp => checksp_13
  # DEBUG BEGIN_STMT
  _1 = current_task_12->flags;
  _2 = (signed char) _1;
  if (_2 < 0)
    goto <bb 3>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 3> [local count: 440234147]:
  # DEBUG BEGIN_STMT
  checksp_14 = &MEM[(void *)tasksp_10(D) + 4294967112B];
  # DEBUG checksp => checksp_14

  <bb 4> [local count: 1073741823]:
  # checksp_8 = PHI <checksp_13(2), checksp_14(3)>
  # DEBUG checksp => checksp_8
  # DEBUG BEGIN_STMT
  _3 = current_task_12->dynamic;
  _3->context.sp = checksp_8;
  # DEBUG BEGIN_STMT
  checksp.0_4 = (unsigned int) checksp_8;
  _5 = OS_TaskSpOutOfBounds (checksp.0_4, current_task_12);
  if (_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG tasksp => checksp_13
  # DEBUG BEGIN_STMT
  MEM[(struct os_cortexm_context_t *)tasksp_10(D) + 4294967248B] = *context_17(D);
  # DEBUG BEGIN_STMT
  _6 = current_task_12->flags;
  _7 = (signed char) _6;
  if (_7 < 0)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_SaveVFPFullContext (checksp_13);

  <bb 7> [local count: 1073741824]:
  return;

}


