
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  BswM_IsValidConfig/2:

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

BswM_IsValidConfig/2 (BswM_IsValidConfig) @06afdc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: PbcfgM_IsValidCfgFuncPtr/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
PbcfgM_IsValidCfgFuncPtr/1 (PbcfgM_IsValidCfgFuncPtr) @0689cb40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: BswM_IsValidConfig/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
PbcfgM_LcfgSignature/0 (PbcfgM_LcfgSignature) @0689caf8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
