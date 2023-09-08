
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Fee_JobErrorNotification/12:
  Jump functions of caller  Fee_JobEndNotification/11:

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

FlsConfigSet_InitCfg/13 (FlsConfigSet_InitCfg) @06e111f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: not_available
  Varpool flags: read-only
Fee_JobErrorNotification/12 (Fee_JobErrorNotification) @06e142a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Fee_JobEndNotification/11 (Fee_JobEndNotification) @06e141c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Fls_Config/10 (Fls_Config) @06e11168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Fee_JobEndNotification/11 (addr)Fee_JobErrorNotification/12 (addr)FlsConfigSet_aFlsSectorEndAddr/2 (addr)FlsConfigSet_aFlsSectorSize/3 (addr)FlsConfigSet_aSectorList/7 (addr)FlsConfigSet_aFlsSectorFlags/1 (addr)FlsConfigSet_aFlsSectorPageSize/4 (addr)FlsConfigSet_paHwCh/8 (addr)FlsConfigSet_paSectorHwAddress/9 (addr)FlsConfigSet_InitCfg/13 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_paSectorHwAddress/9 (FlsConfigSet_paSectorHwAddress) @06e11090
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_paHwCh/8 (FlsConfigSet_paHwCh) @06e11048
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_aSectorList/7 (FlsConfigSet_aSectorList) @06e11000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: FlsSector_0_FlsConfigSet_sInternalSectorInfo/5 (addr)FlsSector_1_FlsConfigSet_sInternalSectorInfo/6 (addr)
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsSector_1_FlsConfigSet_sInternalSectorInfo/6 (FlsSector_1_FlsConfigSet_sInternalSectorInfo) @067eff78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlsConfigSet_aSectorList/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsSector_0_FlsConfigSet_sInternalSectorInfo/5 (FlsSector_0_FlsConfigSet_sInternalSectorInfo) @067eff30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlsConfigSet_aSectorList/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_aFlsSectorPageSize/4 (FlsConfigSet_aFlsSectorPageSize) @067efee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_aFlsSectorSize/3 (FlsConfigSet_aFlsSectorSize) @067efea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_aFlsSectorEndAddr/2 (FlsConfigSet_aFlsSectorEndAddr) @067efe58
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlsConfigSet_aFlsSectorFlags/1 (FlsConfigSet_aFlsSectorFlags) @067efe10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Config/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
