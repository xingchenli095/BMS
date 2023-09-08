
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Switch_ComM_UM_ComMUser_0_currentMode/2:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Switch_ComM_UM_ComMUser_0_currentMode/2 (Rte_Switch_ComM_UM_ComMUser_0_currentMode) @06bf3540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: ComM_RteSwitchCbk/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
ComM_RteModeUser/1 (ComM_RteModeUser) @06b891f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
ComM_RteSwitchCbk/0 (ComM_RteSwitchCbk) @06b891b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_Switch_ComM_UM_ComMUser_0_currentMode/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
