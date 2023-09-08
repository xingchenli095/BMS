
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ErrorHook/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_ErrorMinimal/0:

 Propagating constants:

Not considering OS_ErrorMinimal for cloning; -fipa-cp-clone disabled.

overall_size: 19, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ErrorMinimal/0:
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

ErrorHook/4 (ErrorHook) @06ba2e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorMinimal/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06ba2c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorMinimal/0 (354334802 (estimated locally),0.33 per call) OS_ErrorMinimal/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c49948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorMinimal/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c49900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorMinimal/0 (read)OS_ErrorMinimal/0 (write)OS_ErrorMinimal/0 (read)OS_ErrorMinimal/0 (write)OS_ErrorMinimal/0 (write)OS_ErrorMinimal/0 (write)
  Availability: not_available
  Varpool flags:
OS_ErrorMinimal/0 (OS_ErrorMinimal) @06ba2a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernDisableLevel/2 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (354334802 (estimated locally),0.33 per call) ErrorHook/4 (354334802 (estimated locally),0.33 per call) OS_CORTEXM_IntSetDisablingLevel/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_ErrorMinimal (OS_ErrorMinimal, funcdef_no=0, decl_uid=6810, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ErrorMinimal/0
__attribute__((target ("general-regs-only")))
OS_ErrorMinimal (os_result_t e)
{
  os_intstatus_t is;
  os_uint8_t oldInFunction;
  unsigned char _1;
  short unsigned int OS_kernDisableLevel.0_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.errorHookNesting;
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_2 = OS_kernDisableLevel;
  is_6 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_2);
  # DEBUG is => is_6
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = 1;
  # DEBUG BEGIN_STMT
  oldInFunction_8 = OS_kernelData.inFunction;
  # DEBUG oldInFunction => oldInFunction_8
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ErrorHook (e_10(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = oldInFunction_8;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = 0;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_6);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return e_10(D);

}


