
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_HwCounterUpdate/19:
  Jump functions of caller  OS_CounterIsr_HwCounter/9:

 Propagating constants:

Not considering OS_CounterIsr_HwCounter for cloning; -fipa-cp-clone disabled.

overall_size: 7, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CounterIsr_HwCounter/9:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_HwCounterUpdate/19 (OS_HwCounterUpdate) @06d767e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CounterIsr_HwCounter/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_counterTableBase/18 (OS_counterTableBase) @06d2faf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CounterIsr_HwCounter/9 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CounterIsr_HwCounter/9 (OS_CounterIsr_HwCounter) @06d64d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_counterTableBase/18 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_HwCounterUpdate/19 (1073741824 (estimated locally),1.00 per call) 
OS_os_GenBuildId/8 (OS_os_GenBuildId) @06d2f6c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_kernStack0/7 (OS_kernStack0) @06d2f438
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_kernstack0
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot6/6 (OS_taskStack0_slot6) @06d2f3f0
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot6
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot5/5 (OS_taskStack0_slot5) @06d2f3a8
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot5
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot4/4 (OS_taskStack0_slot4) @06d2f360
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot4
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot3/3 (OS_taskStack0_slot3) @06d2f318
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot3
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot2/2 (OS_taskStack0_slot2) @06d2f2d0
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot2
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot1/1 (OS_taskStack0_slot1) @06d2f288
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot1
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_taskStack0_slot0/0 (OS_taskStack0_slot0) @06d2f240
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.core0.os_taskstack0_slot0
  References: 
  Referring: 
  Availability: available
  Varpool flags:

;; Function OS_CounterIsr_HwCounter (OS_CounterIsr_HwCounter, funcdef_no=0, decl_uid=5773, cgraph_uid=1, symbol_order=9)

Modification phase of node OS_CounterIsr_HwCounter/9
OS_CounterIsr_HwCounter ()
{
  const struct os_counter_t * OS_counterTableBase.0_1;
  const struct os_counter_t * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_counterTableBase.0_1 = OS_counterTableBase;
  _2 = OS_counterTableBase.0_1 + 32;
  OS_HwCounterUpdate (_2);
  return;

}


