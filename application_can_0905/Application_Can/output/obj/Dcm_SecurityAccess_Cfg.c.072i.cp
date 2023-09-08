
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_Dcm_SecurityAccess_Level_3_CompareKey/4:
  Jump functions of caller  Rte_Call_Dcm_SecurityAccess_Level_3_GetSeed/3:
  Jump functions of caller  Rte_Call_Dcm_SecurityAccess_Level_1_CompareKey/2:
  Jump functions of caller  Rte_Call_Dcm_SecurityAccess_Level_1_GetSeed/1:

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

Rte_Call_Dcm_SecurityAccess_Level_3_CompareKey/4 (Rte_Call_Dcm_SecurityAccess_Level_3_CompareKey) @06d139a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SecurityLevelEntryConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_SecurityAccess_Level_3_GetSeed/3 (Rte_Call_Dcm_SecurityAccess_Level_3_GetSeed) @06d138c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SecurityLevelEntryConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_SecurityAccess_Level_1_CompareKey/2 (Rte_Call_Dcm_SecurityAccess_Level_1_CompareKey) @06d137e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SecurityLevelEntryConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_SecurityAccess_Level_1_GetSeed/1 (Rte_Call_Dcm_SecurityAccess_Level_1_GetSeed) @06d13700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SecurityLevelEntryConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_SecurityLevelEntryConfig/0 (Dcm_SecurityLevelEntryConfig) @06cd7750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_Call_Dcm_SecurityAccess_Level_1_GetSeed/1 (addr)Rte_Call_Dcm_SecurityAccess_Level_1_CompareKey/2 (addr)Rte_Call_Dcm_SecurityAccess_Level_3_GetSeed/3 (addr)Rte_Call_Dcm_SecurityAccess_Level_3_CompareKey/4 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
