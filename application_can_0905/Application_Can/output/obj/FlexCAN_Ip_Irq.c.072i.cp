
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_IRQHandler/61:
  Jump functions of caller  FlexCAN_Busoff_Error_IRQHandler/60:
  Jump functions of caller  OS_ISR_CAN3_ORED_0_31_MB_IRQHandler/59:
  Jump functions of caller  OS_ISR_CAN3_ORED_IRQHandler/58:
  Jump functions of caller  OS_ISR_CAN2_ORED_32_63_MB_IRQHandler/57:
  Jump functions of caller  OS_ISR_CAN2_ORED_0_31_MB_IRQHandler/56:
  Jump functions of caller  OS_ISR_CAN2_ORED_IRQHandler/55:
  Jump functions of caller  OS_ISR_CAN1_ORED_32_63_MB_IRQHandler/54:
  Jump functions of caller  OS_ISR_CAN1_ORED_0_31_MB_IRQHandler/53:
  Jump functions of caller  OS_ISR_CAN1_ORED_IRQHandler/52:
  Jump functions of caller  OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/51:
  Jump functions of caller  OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/50:
  Jump functions of caller  OS_ISR_CAN0_ORED_IRQHandler/49:

 Propagating constants:

Not considering OS_ISR_CAN3_ORED_0_31_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN3_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN2_ORED_32_63_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN2_ORED_0_31_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN2_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN1_ORED_32_63_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN1_ORED_0_31_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN1_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN0_ORED_32_63_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN0_ORED_0_31_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering OS_ISR_CAN0_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.

overall_size: 76, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ISR_CAN3_ORED_0_31_MB_IRQHandler/59:
  Node: OS_ISR_CAN3_ORED_IRQHandler/58:
  Node: OS_ISR_CAN2_ORED_32_63_MB_IRQHandler/57:
  Node: OS_ISR_CAN2_ORED_0_31_MB_IRQHandler/56:
  Node: OS_ISR_CAN2_ORED_IRQHandler/55:
  Node: OS_ISR_CAN1_ORED_32_63_MB_IRQHandler/54:
  Node: OS_ISR_CAN1_ORED_0_31_MB_IRQHandler/53:
  Node: OS_ISR_CAN1_ORED_IRQHandler/52:
  Node: OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/51:
  Node: OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/50:
  Node: OS_ISR_CAN0_ORED_IRQHandler/49:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_IRQHandler/61 (FlexCAN_IRQHandler) @07e9a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ISR_CAN3_ORED_0_31_MB_IRQHandler/59 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN2_ORED_32_63_MB_IRQHandler/57 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN2_ORED_0_31_MB_IRQHandler/56 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN1_ORED_32_63_MB_IRQHandler/54 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN1_ORED_0_31_MB_IRQHandler/53 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/51 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/50 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Busoff_Error_IRQHandler/60 (FlexCAN_Busoff_Error_IRQHandler) @07e87e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ISR_CAN3_ORED_IRQHandler/58 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN2_ORED_IRQHandler/55 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN1_ORED_IRQHandler/52 (1073741824 (estimated locally),1.00 per call) OS_ISR_CAN0_ORED_IRQHandler/49 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_ISR_CAN3_ORED_0_31_MB_IRQHandler/59 (OS_ISR_CAN3_ORED_0_31_MB_IRQHandler) @07e87c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN3_ORED_IRQHandler/58 (OS_ISR_CAN3_ORED_IRQHandler) @07e87a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Busoff_Error_IRQHandler/60 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN2_ORED_32_63_MB_IRQHandler/57 (OS_ISR_CAN2_ORED_32_63_MB_IRQHandler) @07e878c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN2_ORED_0_31_MB_IRQHandler/56 (OS_ISR_CAN2_ORED_0_31_MB_IRQHandler) @07e87700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN2_ORED_IRQHandler/55 (OS_ISR_CAN2_ORED_IRQHandler) @07e87540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Busoff_Error_IRQHandler/60 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN1_ORED_32_63_MB_IRQHandler/54 (OS_ISR_CAN1_ORED_32_63_MB_IRQHandler) @07e87380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN1_ORED_0_31_MB_IRQHandler/53 (OS_ISR_CAN1_ORED_0_31_MB_IRQHandler) @07e871c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN1_ORED_IRQHandler/52 (OS_ISR_CAN1_ORED_IRQHandler) @07e87000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Busoff_Error_IRQHandler/60 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/51 (OS_ISR_CAN0_ORED_32_63_MB_IRQHandler) @07e7de00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/50 (OS_ISR_CAN0_ORED_0_31_MB_IRQHandler) @07e7dc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/61 (1073741824 (estimated locally),1.00 per call) 
OS_ISR_CAN0_ORED_IRQHandler/49 (OS_ISR_CAN0_ORED_IRQHandler) @07e7da80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Busoff_Error_IRQHandler/60 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_ISR_CAN0_ORED_IRQHandler (OS_ISR_CAN0_ORED_IRQHandler, funcdef_no=49, decl_uid=6000, cgraph_uid=50, symbol_order=49)

Modification phase of node OS_ISR_CAN0_ORED_IRQHandler/49
OS_ISR_CAN0_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Busoff_Error_IRQHandler (0);
  return;

}



;; Function OS_ISR_CAN0_ORED_0_31_MB_IRQHandler (OS_ISR_CAN0_ORED_0_31_MB_IRQHandler, funcdef_no=50, decl_uid=6002, cgraph_uid=51, symbol_order=50)

Modification phase of node OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/50
OS_ISR_CAN0_ORED_0_31_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (0, 0, 31, 1);
  return;

}



;; Function OS_ISR_CAN0_ORED_32_63_MB_IRQHandler (OS_ISR_CAN0_ORED_32_63_MB_IRQHandler, funcdef_no=51, decl_uid=6004, cgraph_uid=52, symbol_order=51)

Modification phase of node OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/51
OS_ISR_CAN0_ORED_32_63_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (0, 32, 63, 0);
  return;

}



;; Function OS_ISR_CAN1_ORED_IRQHandler (OS_ISR_CAN1_ORED_IRQHandler, funcdef_no=52, decl_uid=11884, cgraph_uid=53, symbol_order=52)

Modification phase of node OS_ISR_CAN1_ORED_IRQHandler/52
OS_ISR_CAN1_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Busoff_Error_IRQHandler (1);
  return;

}



;; Function OS_ISR_CAN1_ORED_0_31_MB_IRQHandler (OS_ISR_CAN1_ORED_0_31_MB_IRQHandler, funcdef_no=53, decl_uid=11886, cgraph_uid=54, symbol_order=53)

Modification phase of node OS_ISR_CAN1_ORED_0_31_MB_IRQHandler/53
OS_ISR_CAN1_ORED_0_31_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (1, 0, 31, 0);
  return;

}



;; Function OS_ISR_CAN1_ORED_32_63_MB_IRQHandler (OS_ISR_CAN1_ORED_32_63_MB_IRQHandler, funcdef_no=54, decl_uid=11888, cgraph_uid=55, symbol_order=54)

Modification phase of node OS_ISR_CAN1_ORED_32_63_MB_IRQHandler/54
OS_ISR_CAN1_ORED_32_63_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (1, 32, 63, 0);
  return;

}



;; Function OS_ISR_CAN2_ORED_IRQHandler (OS_ISR_CAN2_ORED_IRQHandler, funcdef_no=55, decl_uid=11890, cgraph_uid=56, symbol_order=55)

Modification phase of node OS_ISR_CAN2_ORED_IRQHandler/55
OS_ISR_CAN2_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Busoff_Error_IRQHandler (2);
  return;

}



;; Function OS_ISR_CAN2_ORED_0_31_MB_IRQHandler (OS_ISR_CAN2_ORED_0_31_MB_IRQHandler, funcdef_no=56, decl_uid=11892, cgraph_uid=57, symbol_order=56)

Modification phase of node OS_ISR_CAN2_ORED_0_31_MB_IRQHandler/56
OS_ISR_CAN2_ORED_0_31_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (2, 0, 31, 0);
  return;

}



;; Function OS_ISR_CAN2_ORED_32_63_MB_IRQHandler (OS_ISR_CAN2_ORED_32_63_MB_IRQHandler, funcdef_no=57, decl_uid=11894, cgraph_uid=58, symbol_order=57)

Modification phase of node OS_ISR_CAN2_ORED_32_63_MB_IRQHandler/57
OS_ISR_CAN2_ORED_32_63_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (2, 32, 63, 0);
  return;

}



;; Function OS_ISR_CAN3_ORED_IRQHandler (OS_ISR_CAN3_ORED_IRQHandler, funcdef_no=58, decl_uid=11896, cgraph_uid=59, symbol_order=58)

Modification phase of node OS_ISR_CAN3_ORED_IRQHandler/58
OS_ISR_CAN3_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Busoff_Error_IRQHandler (3);
  return;

}



;; Function OS_ISR_CAN3_ORED_0_31_MB_IRQHandler (OS_ISR_CAN3_ORED_0_31_MB_IRQHandler, funcdef_no=59, decl_uid=11898, cgraph_uid=60, symbol_order=59)

Modification phase of node OS_ISR_CAN3_ORED_0_31_MB_IRQHandler/59
OS_ISR_CAN3_ORED_0_31_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (3, 0, 31, 0);
  return;

}


