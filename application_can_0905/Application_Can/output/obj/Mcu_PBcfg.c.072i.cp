
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

Power_Ip_HwIPsConfigPB/3 (Power_Ip_HwIPsConfigPB) @070d2948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Config/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_aClockConfigPB/2 (Mcu_aClockConfigPB) @070d2900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Config/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Power_Ip_aModeConfigPB/1 (Power_Ip_aModeConfigPB) @070d28b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Config/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_Config/0 (Mcu_Config) @070d2828
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_aModeConfigPB/1 (addr)Mcu_aClockConfigPB/2 (addr)Power_Ip_HwIPsConfigPB/3 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
