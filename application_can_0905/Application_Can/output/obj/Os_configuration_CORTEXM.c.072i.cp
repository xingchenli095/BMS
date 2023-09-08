
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

__GLBL_RAM_END/31 (__GLBL_RAM_END) @06aa24c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ramLimit/22 (addr)
  Availability: not_available
  Varpool flags:
__GLBL_RAM_START/30 (__GLBL_RAM_START) @06aa2480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ramBase/21 (addr)
  Availability: not_available
  Varpool flags:
__GLBL_ROM_END/29 (__GLBL_ROM_END) @06aa2438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_romLimit/20 (addr)
  Availability: not_available
  Varpool flags:
__GLBL_ROM_START/28 (__GLBL_ROM_START) @06aa23f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_romBase/19 (addr)
  Availability: not_available
  Varpool flags:
OS_kernStackMpuSize/27 (OS_kernStackMpuSize) @06aa2318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookMpuSize/26 (OS_sHookMpuSize) @06aa2288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookMpuSize/25 (OS_eHookMpuSize) @06aa2240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ramMpuSize/24 (OS_ramMpuSize) @06aa21f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_romMpuSize/23 (OS_romMpuSize) @06aa2168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ramLimit/22 (OS_ramLimit) @06aa20d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_RAM_END/31 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ramBase/21 (OS_ramBase) @06aa2090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_RAM_START/30 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_romLimit/20 (OS_romLimit) @06aa2048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_ROM_END/29 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_romBase/19 (OS_romBase) @06aa2000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: __GLBL_ROM_START/28 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookInitialSp/18 (OS_sHookInitialSp) @06ce4ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookStackLen/17 (OS_sHookStackLen) @06ce4ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_sHookStackBase/16 (OS_sHookStackBase) @06ce4e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookInitialSp/15 (OS_eHookInitialSp) @06ce4e10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookStackLen/14 (OS_eHookStackLen) @06ce4dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_eHookStackBase/13 (OS_eHookStackBase) @06ce4d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_intDisableLevelMax/12 (OS_intDisableLevelMax) @06ce4d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_intDisableLevelAll/11 (OS_intDisableLevelAll) @06ce4cf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_kernDisableLevel/10 (OS_kernDisableLevel) @06ce4ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_intDisableLevel/9 (OS_intDisableLevel) @06ce4c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_idleStack/8 (OS_idleStack) @06ce4bd0
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.os_idlestack
  References: 
  Referring: 
  Availability: available
  Varpool flags:
