
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

__GLBL_RAM_END/31 (__GLBL_RAM_END) @06b1d4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ramLimit/22 (addr)
  Availability: not_available
  Varpool flags:
__GLBL_RAM_START/30 (__GLBL_RAM_START) @06b1d480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ramBase/21 (addr)
  Availability: not_available
  Varpool flags:
__GLBL_ROM_END/29 (__GLBL_ROM_END) @06b1d438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_romLimit/20 (addr)
  Availability: not_available
  Varpool flags:
__GLBL_ROM_START/28 (__GLBL_ROM_START) @06b1d3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_romBase/19 (addr)
  Availability: not_available
  Varpool flags:
OS_kernStackMpuSize/27 (OS_kernStackMpuSize) @06b1d318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookMpuSize/26 (OS_sHookMpuSize) @06b1d288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookMpuSize/25 (OS_eHookMpuSize) @06b1d240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ramMpuSize/24 (OS_ramMpuSize) @06b1d1f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_romMpuSize/23 (OS_romMpuSize) @06b1d168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ramLimit/22 (OS_ramLimit) @06b1d0d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_RAM_END/31 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ramBase/21 (OS_ramBase) @06b1d090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_RAM_START/30 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_romLimit/20 (OS_romLimit) @06b1d048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_ROM_END/29 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_romBase/19 (OS_romBase) @06b1d000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_ROM_START/28 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookInitialSp/18 (OS_sHookInitialSp) @06d64ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookStackLen/17 (OS_sHookStackLen) @06d64ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookStackBase/16 (OS_sHookStackBase) @06d64e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookInitialSp/15 (OS_eHookInitialSp) @06d64e10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookStackLen/14 (OS_eHookStackLen) @06d64dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookStackBase/13 (OS_eHookStackBase) @06d64d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_intDisableLevelMax/12 (OS_intDisableLevelMax) @06d64d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_intDisableLevelAll/11 (OS_intDisableLevelAll) @06d64cf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_kernDisableLevel/10 (OS_kernDisableLevel) @06d64ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_intDisableLevel/9 (OS_intDisableLevel) @06d64c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_idleStack/8 (OS_idleStack) @06d64bd0
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.os_idlestack
  References: 
  Referring: 
  Availability: available
  Varpool flags:
