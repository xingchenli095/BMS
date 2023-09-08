
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_SetControl/2:
  Jump functions of caller  OS_CORTEXM_SetupVFPCoprocessor/1:
  Jump functions of caller  OS_CORTEXM_InitArch/0:

 Propagating constants:

Not considering OS_CORTEXM_InitArch for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CORTEXM_InitArch/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_CORTEXM_SetControl/2 (OS_CORTEXM_SetControl) @06ba0d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CORTEXM_InitArch/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_SetupVFPCoprocessor/1 (OS_CORTEXM_SetupVFPCoprocessor) @06ba0c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CORTEXM_InitArch/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_InitArch/0 (OS_CORTEXM_InitArch) @06ba0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_SetControl/2 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_SetupVFPCoprocessor/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_CORTEXM_InitArch (OS_CORTEXM_InitArch, funcdef_no=0, decl_uid=6178, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CORTEXM_InitArch/0
__attribute__((target ("general-regs-only")))
OS_CORTEXM_InitArch ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_CORTEXM_SetupVFPCoprocessor ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_CORTEXM_SetControl (2);
  return;

}


