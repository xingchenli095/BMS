
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserTerminateTask/4:
  Jump functions of caller  BswM_RequestMode/3:
  Jump functions of caller  Eb_Intgr_BswM_DriverInitTwo/2:
  Jump functions of caller  EcuM_StartupTwo/1:
  Jump functions of caller  OS_TASK_Init_Task/0:

 Propagating constants:

Not considering OS_TASK_Init_Task for cloning; -fipa-cp-clone disabled.

overall_size: 9, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_TASK_Init_Task/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_UserTerminateTask/4 (OS_UserTerminateTask) @06daed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_TASK_Init_Task/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_RequestMode/3 (BswM_RequestMode) @06daec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_TASK_Init_Task/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_DriverInitTwo/2 (Eb_Intgr_BswM_DriverInitTwo) @06daeb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_TASK_Init_Task/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_StartupTwo/1 (EcuM_StartupTwo) @06daea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_TASK_Init_Task/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_TASK_Init_Task/0 (OS_TASK_Init_Task) @06dae8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserTerminateTask/4 (1073741824 (estimated locally),1.00 per call) BswM_RequestMode/3 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_DriverInitTwo/2 (1073741824 (estimated locally),1.00 per call) EcuM_StartupTwo/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_TASK_Init_Task (OS_TASK_Init_Task, funcdef_no=0, decl_uid=8314, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_TASK_Init_Task/0
OS_TASK_Init_Task ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuM_StartupTwo ();
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_DriverInitTwo ();
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 6);
  # DEBUG BEGIN_STMT
  OS_UserTerminateTask ();
  return;

}


