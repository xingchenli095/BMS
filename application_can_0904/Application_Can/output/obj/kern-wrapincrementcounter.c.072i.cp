
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AdvanceCounter/5:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/4:
  Jump functions of caller  OS_WrapIncrementCounter/0:

 Propagating constants:

Not considering OS_WrapIncrementCounter for cloning; -fipa-cp-clone disabled.

overall_size: 23, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_WrapIncrementCounter/0:
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

OS_AdvanceCounter/5 (OS_AdvanceCounter) @06c58d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapIncrementCounter/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/4 (OS_CORTEXM_IntSetDisablingLevel) @06c58c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapIncrementCounter/0 (1073741824 (estimated locally),1.00 per call) OS_WrapIncrementCounter/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/3 (OS_kernDisableLevel) @06c386c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapIncrementCounter/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/2 (OS_counterTableBase) @06c38678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapIncrementCounter/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c38630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapIncrementCounter/0 (read)OS_WrapIncrementCounter/0 (write)OS_WrapIncrementCounter/0 (write)
  Availability: not_available
  Varpool flags:
OS_WrapIncrementCounter/0 (OS_WrapIncrementCounter) @06c58a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (write)OS_counterTableBase/2 (read)OS_kernDisableLevel/3 (read)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) OS_AdvanceCounter/5 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_WrapIncrementCounter (OS_WrapIncrementCounter, funcdef_no=0, decl_uid=6328, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_WrapIncrementCounter/0
__attribute__((target ("general-regs-only")))
OS_WrapIncrementCounter (const struct os_alarm_t * a)
{
  os_uint8_t save;
  struct os_counterdynamic_t * cd;
  const struct os_counter_t * cp;
  os_intstatus_t is;
  unsigned int _1;
  const struct os_counter_t * OS_counterTableBase.0_2;
  unsigned int _3;
  short unsigned int OS_kernDisableLevel.1_4;
  unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  save_7 = OS_kernelData.inFunction;
  # DEBUG save => save_7
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 7;
  # DEBUG BEGIN_STMT
  _1 = a_9(D)->object;
  # DEBUG c => (os_counterid_t) _1
  # DEBUG BEGIN_STMT
  OS_counterTableBase.0_2 = OS_counterTableBase;
  _5 = _1 & 255;
  _3 = _5 * 32;
  cp_10 = OS_counterTableBase.0_2 + _3;
  # DEBUG cp => cp_10
  # DEBUG BEGIN_STMT
  cd_11 = cp_10->dynamic;
  # DEBUG cd => cd_11
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_4 = OS_kernDisableLevel;
  is_13 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_4);
  # DEBUG is => is_13
  # DEBUG BEGIN_STMT
  OS_AdvanceCounter (cp_10, cd_11, 1, is_13);
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_13);
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = save_7;
  return;

}


