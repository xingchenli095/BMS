
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dem_NvMWriteCopyPermanentMemory/18:
  Jump functions of caller  Dem_NvMReadCopyPermanentMemory/17:
  Jump functions of caller  Dem_NvMWriteFinishedPermanentMemory/16:
  Jump functions of caller  Dem_NvMGateEntrySecondaryBlockCallback/12:
  Jump functions of caller  Dem_NvMGateEntryPrimaryBlockCallback/10:
  Jump functions of caller  Dem_NvMWriteCopyEventStatusBlock/8:
  Jump functions of caller  Dem_NvMReadCopyEventStatusBlock/7:
  Jump functions of caller  Dem_NvMEventStatusBlockCallback/6:

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

Dem_NvMWriteCopyPermanentMemory/18 (Dem_NvMWriteCopyPermanentMemory) @06e7de00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_NvMReadCopyPermanentMemory/17 (Dem_NvMReadCopyPermanentMemory) @06e7dd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_NvMWriteFinishedPermanentMemory/16 (Dem_NvMWriteFinishedPermanentMemory) @06e7dc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Demo_CyclicCounter_Ram_Block/15 (Demo_CyclicCounter_Ram_Block) @06e811f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags:
Demo_CyclicCounter_Rom_Block/14 (Demo_CyclicCounter_Rom_Block) @06e811b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_NvGateEntrySecondaryData/13 (Dem_NvGateEntrySecondaryData) @06e81168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags:
Dem_NvMGateEntrySecondaryBlockCallback/12 (Dem_NvMGateEntrySecondaryBlockCallback) @06e7db60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_NvGateEntryPrimaryData/11 (Dem_NvGateEntryPrimaryData) @06e81120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags:
Dem_NvMGateEntryPrimaryBlockCallback/10 (Dem_NvMGateEntryPrimaryBlockCallback) @06e7da80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_NvData/9 (Dem_NvData) @06e810d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags:
Dem_NvMWriteCopyEventStatusBlock/8 (Dem_NvMWriteCopyEventStatusBlock) @06e7d9a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_NvMReadCopyEventStatusBlock/7 (Dem_NvMReadCopyEventStatusBlock) @06e7d7e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_NvMEventStatusBlockCallback/6 (Dem_NvMEventStatusBlockCallback) @06e7d700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_Persistent_Data/5 (Dcm_Dsl_RoeServices_Persistent_Data) @06e81090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags:
DidF190_DefaultData/4 (DidF190_DefaultData) @06e81048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags: read-only
NvM_ConfigurationId/3 (NvM_ConfigurationId) @06e81000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: not_available
  Varpool flags:
NvM_CompiledConfigurationId/2 (NvM_CompiledConfigurationId) @06d7ef78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_BlockDescriptorTable/0 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
NvM_CalcCrc_CalcBuffer/1 (NvM_CalcCrc_CalcBuffer) @06d7ef30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
NvM_BlockDescriptorTable/0 (NvM_BlockDescriptorTable) @06d7eee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: NvM_CompiledConfigurationId/2 (addr)NvM_ConfigurationId/3 (addr)DidF190_DefaultData/4 (addr)Dcm_Dsl_RoeServices_Persistent_Data/5 (addr)Dem_NvMEventStatusBlockCallback/6 (addr)Dem_NvMReadCopyEventStatusBlock/7 (addr)Dem_NvMWriteCopyEventStatusBlock/8 (addr)Dem_NvData/9 (addr)Dem_NvMGateEntryPrimaryBlockCallback/10 (addr)Dem_NvGateEntryPrimaryData/11 (addr)Dem_NvMGateEntrySecondaryBlockCallback/12 (addr)Dem_NvGateEntrySecondaryData/13 (addr)Demo_CyclicCounter_Rom_Block/14 (addr)Demo_CyclicCounter_Ram_Block/15 (addr)Dem_NvMWriteFinishedPermanentMemory/16 (addr)Dem_NvMReadCopyPermanentMemory/17 (addr)Dem_NvMWriteCopyPermanentMemory/18 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
