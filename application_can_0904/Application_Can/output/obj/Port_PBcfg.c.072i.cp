
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

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

aTspc_InitConfigArr/9 (aTspc_InitConfigArr) @07025a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Config/7 (addr)
  Availability: not_available
  Varpool flags: read-only
g_pin_mux_InitConfigArr/8 (g_pin_mux_InitConfigArr) @07025a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Config/7 (addr)
  Availability: not_available
  Varpool flags: read-only
Port_Config/7 (Port_Config) @07025990
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Port_aUnusedPads/3 (addr)Port_UnusedPinConfig/4 (addr)Port_aUsedPinConfigs/5 (addr)Port_aSIUL2_0_ImcrInitConfig/6 (addr)au32Port_PinToPartitionMap/2 (addr)au8Port_PartitionList/1 (addr)g_pin_mux_InitConfigArr/8 (addr)aTspc_InitConfigArr/9 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_aSIUL2_0_ImcrInitConfig/6 (Port_aSIUL2_0_ImcrInitConfig) @07025900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_aUsedPinConfigs/5 (Port_aUsedPinConfigs) @07025870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_UnusedPinConfig/4 (Port_UnusedPinConfig) @07025678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_aUnusedPads/3 (Port_aUnusedPads) @06e43168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
au32Port_PinToPartitionMap/2 (au32Port_PinToPartitionMap) @070255e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
au8Port_PartitionList/1 (au8Port_PartitionList) @07025558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Port_Config/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
