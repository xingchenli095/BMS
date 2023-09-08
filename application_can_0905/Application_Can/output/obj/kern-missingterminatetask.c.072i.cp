
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserShutdownOs/2:
  Jump functions of caller  OS_UserTaskReturn/1:
  Jump functions of caller  OS_MissingTerminateTask/0:

 Propagating constants:

Not considering OS_MissingTerminateTask for cloning; -fipa-cp-clone disabled.

overall_size: 5, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_MissingTerminateTask/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_UserShutdownOs/2 (OS_UserShutdownOs) @06d360e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_MissingTerminateTask/0 (107374 (estimated locally),1.00 per call) 
  Calls: 
OS_UserTaskReturn/1 (OS_UserTaskReturn) @06d36000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_MissingTerminateTask/0 (107374 (estimated locally),1.00 per call) 
  Calls: 
OS_MissingTerminateTask/0 (OS_MissingTerminateTask) @06c0a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: OS_UserShutdownOs/2 (107374 (estimated locally),1.00 per call) OS_UserTaskReturn/1 (107374 (estimated locally),1.00 per call) 

;; Function OS_MissingTerminateTask (OS_MissingTerminateTask, funcdef_no=0, decl_uid=7219, cgraph_uid=1, symbol_order=0) (executed once)

Modification phase of node OS_MissingTerminateTask/0
__attribute__((target ("general-regs-only")))
OS_MissingTerminateTask ()
{
  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserTaskReturn ();
  # DEBUG BEGIN_STMT
  OS_UserShutdownOs (17);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG confusion => 0

  <bb 3> [local count: 1073741824]:
  # DEBUG confusion => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG confusion => NULL

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


