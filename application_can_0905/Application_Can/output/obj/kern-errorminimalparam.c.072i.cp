
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ErrorHook/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_ErrorMinimalParam/0:

 Propagating constants:

Not considering OS_ErrorMinimalParam for cloning; -fipa-cp-clone disabled.

overall_size: 33, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ErrorMinimalParam/0:
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
    param [2]: BOTTOM
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

ErrorHook/4 (ErrorHook) @06ca9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorMinimalParam/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06ca9c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ErrorMinimalParam/0 (354334802 (estimated locally),0.33 per call) OS_ErrorMinimalParam/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c89a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorMinimalParam/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c899d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ErrorMinimalParam/0 (read)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (read)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)OS_ErrorMinimalParam/0 (write)
  Availability: not_available
  Varpool flags:
OS_ErrorMinimalParam/0 (OS_ErrorMinimalParam) @06ca9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernDisableLevel/2 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (354334802 (estimated locally),0.33 per call) ErrorHook/4 (354334802 (estimated locally),0.33 per call) OS_CORTEXM_IntSetDisablingLevel/3 (354334802 (estimated locally),0.33 per call) 

;; Function OS_ErrorMinimalParam (OS_ErrorMinimalParam, funcdef_no=0, decl_uid=6814, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ErrorMinimalParam/0
__attribute__((target ("general-regs-only")))
OS_ErrorMinimalParam (os_serviceid_t sid, os_result_t e, os_paramtype_t * p)
{
  os_int_t i;
  os_intstatus_t is;
  os_uint8_t oldInFunction;
  unsigned char _1;
  short unsigned int OS_kernDisableLevel.0_2;
  unsigned int i.1_3;
  unsigned int _4;
  os_paramtype_t * _5;
  unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.errorHookNesting;
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_2 = OS_kernDisableLevel;
  is_13 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_2);
  # DEBUG is => is_13
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = 1;
  # DEBUG BEGIN_STMT
  oldInFunction_15 = OS_kernelData.inFunction;
  # DEBUG oldInFunction => oldInFunction_15
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 10;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.result = e_17(D);
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.action = 1;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.calledFrom = oldInFunction_15;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.serviceId = sid_21(D);
  # DEBUG BEGIN_STMT
  OS_kernelData.errorStatus.errorCondition = 0;
  # DEBUG BEGIN_STMT
  if (p_24(D) != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 8> [local count: 248034361]:
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 744103085]:
  # DEBUG BEGIN_STMT
  i.1_3 = (unsigned int) i_7;
  _4 = i.1_3 * 4;
  _5 = p_24(D) + _4;
  _6 = *_5;
  OS_kernelData.errorStatus.parameter[i_7] = _6;
  # DEBUG BEGIN_STMT
  i_26 = i_7 + 1;
  # DEBUG i => i_26

  <bb 5> [local count: 992137446]:
  # i_7 = PHI <i_26(4), 0(8)>
  # DEBUG i => i_7
  # DEBUG BEGIN_STMT
  if (i_7 != 3)
    goto <bb 4>; [75.00%]
  else
    goto <bb 6>; [25.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ErrorHook (e_17(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = oldInFunction_15;
  # DEBUG BEGIN_STMT
  OS_kernelData.errorHookNesting = 0;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_13);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return e_17(D);

}


