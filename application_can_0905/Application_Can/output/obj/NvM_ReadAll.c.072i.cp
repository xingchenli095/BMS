
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_ReadAll_Async_State6.part.0/51:
  Jump functions of caller  NvM_ReadAll_ReCalcCrc.part.0/50:
  Jump functions of caller  NvM_ReadAll_Async_State8.part.0/49:
    callsite  NvM_ReadAll_Async_State8.part.0/49 -> NvM_ForceForWriteAll/3 : 
  Jump functions of caller  NvM_MultiRequestFinishedSingleBlock/48:
  Jump functions of caller  NvM_CheckCrc/46:
  Jump functions of caller  NvM_GetStoredRamCRCAddress/45:
  Jump functions of caller  NvM_CalculateCrc/44:
  Jump functions of caller  NvM_MirrorCopy/42:
  Jump functions of caller  NvM_GetUserRamBlockAddress/41:
  Jump functions of caller  NvM_MultiPostService_Function/40:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/39:
  Jump functions of caller  NvM_CheckBlockStatus/38:
  Jump functions of caller  NvM_SetPermanentRamBlockChanged/36:
  Jump functions of caller  NvM_SetPermanentRamBlockValid/35:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt0/34:
  Jump functions of caller  NvM_InvokeSingleBlockCallback/33:
  Jump functions of caller  NvM_PostService_Function/32:
  Jump functions of caller  NvM_SetPermanentRamBlockUnchanged/31:
  Jump functions of caller  TS_MemCmp32/28:
  Jump functions of caller  NvM_ReadBlock_Async_State0/25:
  Jump functions of caller  NvM_PreService_Function/24:
  Jump functions of caller  Fee_SetMode/22:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16:
  Jump functions of caller  NvM_Queue_InsertStandard/15:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14:
  Jump functions of caller  Det_ASR40_ReportError/12:
  Jump functions of caller  NvM_ReadAll_Async_State8/10:
    callsite  NvM_ReadAll_Async_State8/10 -> NvM_ReadAll_Async_State8.part.0/49 : 
  Jump functions of caller  NvM_ReadAll_Async_State7/9:
  Jump functions of caller  NvM_ReadAll_Async_State6/8:
    callsite  NvM_ReadAll_Async_State6/8 -> NvM_ReadAll_Async_State6.part.0/51 : 
  Jump functions of caller  NvM_ReadAll_Async_State5/7:
  Jump functions of caller  NvM_ReadAll_Async_State1/6:
    callsite  NvM_ReadAll_Async_State1/6 -> NvM_ForceForWriteAll/3 : 
  Jump functions of caller  NvM_ReadAll_Async_State0/5:
  Jump functions of caller  NvM_ReadAll_Async/4:
  Jump functions of caller  NvM_ForceForWriteAll/3:
  Jump functions of caller  NvM_ReadAll/2:
  Jump functions of caller  NvM_ReadAll_ReCalcCrc/1:
    callsite  NvM_ReadAll_ReCalcCrc/1 -> NvM_ReadAll_ReCalcCrc.part.0/50 : 

 Propagating constants:

Not considering NvM_ReadAll_Async_State8 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_Async_State7 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_Async_State6 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_Async_State5 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_Async_State1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_Async_State0 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadAll_ReCalcCrc for cloning; -fipa-cp-clone disabled.

overall_size: 319, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_ReadAll_Async_State6.part.0/51:
  Node: NvM_ReadAll_ReCalcCrc.part.0/50:
  Node: NvM_ReadAll_Async_State8.part.0/49:
  Node: NvM_ReadAll_Async_State8/10:
  Node: NvM_ReadAll_Async_State7/9:
  Node: NvM_ReadAll_Async_State6/8:
  Node: NvM_ReadAll_Async_State5/7:
  Node: NvM_ReadAll_Async_State1/6:
  Node: NvM_ReadAll_Async_State0/5:
  Node: NvM_ReadAll_Async/4:
  Node: NvM_ForceForWriteAll/3:
  Node: NvM_ReadAll/2:
  Node: NvM_ReadAll_ReCalcCrc/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_ReadAll_Async_State6.part.0/51 (NvM_ReadAll_Async_State6.part.0) @07380620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalGenericStatus/11 (read)NvM_GlobalGenericStatus/11 (write)NvM_GlobalBlockNumber/23 (read)NvM_AdminBlockTable/13 (write)NvM_GlobalGenericStatus/11 (write)NvM_GlobalBlockNumber/23 (read)NvM_AdminBlockTable/13 (write)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State5/7 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadAll_Async_State6/8 (536870912 (estimated locally),0.50 per call) 
  Calls: SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14 (1073741824 (estimated locally),1.00 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadAll_ReCalcCrc.part.0/50 (NvM_ReadAll_ReCalcCrc.part.0) @07258380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalCallLevel/18 (read)NvM_GlobalCallLevel/18 (write)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State5/7 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadAll_ReCalcCrc/1 (88583700 (estimated locally),0.08 per call) 
  Calls: NvM_PostService_Function/32 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadAll_Async_State8.part.0/49 (NvM_ReadAll_Async_State8.part.0) @06eb6ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_RestoreBlockDefaults_AscSt0/34 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadAll_Async_State8/10 (177167400 (estimated locally),0.16 per call) 
  Calls: NvM_ForceForWriteAll/3 (1073741824 (estimated locally),1.00 per call) 
NvM_MultiRequestFinishedSingleBlock/48 (NvM_MultiRequestFinishedSingleBlock) @07296000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State6/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_CalcCrc_CalcBuffer/47 (NvM_CalcCrc_CalcBuffer) @072931b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State7/9 (addr)
  Availability: not_available
  Varpool flags:
NvM_CheckCrc/46 (NvM_CheckCrc) @07258ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State7/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetStoredRamCRCAddress/45 (NvM_GetStoredRamCRCAddress) @07258e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State7/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CalculateCrc/44 (NvM_CalculateCrc) @07258c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_ReCalcCrc/1 (805306368 (estimated locally),0.75 per call) 
  Calls: 
NvM_MirrorRetryCount/43 (NvM_MirrorRetryCount) @0728fe10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_ReCalcCrc/1 (read)
  Availability: not_available
  Varpool flags:
NvM_MirrorCopy/42 (NvM_MirrorCopy) @07258a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_ReCalcCrc/1 (536870911 (estimated locally),0.50 per call) 
  Calls: 
NvM_GetUserRamBlockAddress/41 (NvM_GetUserRamBlockAddress) @072589a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_ReCalcCrc/1 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_MultiPostService_Function/40 (NvM_MultiPostService_Function) @072587e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State5/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_CalcCrc_RemoveElement/39 (NvM_CalcCrc_RemoveElement) @07258700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State5/7 (11320625 (estimated locally),0.01 per call) 
  Calls: 
NvM_CheckBlockStatus/38 (NvM_CheckBlockStatus) @07258620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State5/7 (517613352 (estimated locally),0.48 per call) NvM_ReadAll_Async_State5/7 (201793670 (estimated locally),0.19 per call) 
  Calls: 
NvM_CurrentBlockDescriptorPtr/37 (NvM_CurrentBlockDescriptorPtr) @0728f7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_ReCalcCrc/1 (read)NvM_ReadAll_Async_State7/9 (read)NvM_ReadAll_Async_State8/10 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State6/8 (read)
  Availability: not_available
  Varpool flags:
NvM_SetPermanentRamBlockChanged/36 (NvM_SetPermanentRamBlockChanged) @072581c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ForceForWriteAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetPermanentRamBlockValid/35 (NvM_SetPermanentRamBlockValid) @072580e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ForceForWriteAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_RestoreBlockDefaults_AscSt0/34 (NvM_RestoreBlockDefaults_AscSt0) @0724ec40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_ReadAll_Async_State1/6 (addr)NvM_ReadAll_Async_State8.part.0/49 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_InvokeSingleBlockCallback/33 (NvM_InvokeSingleBlockCallback) @0724e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State1/6 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_PostService_Function/32 (NvM_PostService_Function) @0724eee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_ReCalcCrc.part.0/50 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State1/6 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetPermanentRamBlockUnchanged/31 (NvM_SetPermanentRamBlockUnchanged) @0724ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State1/6 (216543096 (estimated locally),0.20 per call) NvM_ReadAll_Async_State1/6 (111552504 (estimated locally),0.10 per call) 
  Calls: 
NvM_CompiledConfigurationId/30 (NvM_CompiledConfigurationId) @07256a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State1/6 (addr)
  Availability: not_available
  Varpool flags: read-only
NvM_ConfigurationId/29 (NvM_ConfigurationId) @07256a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State1/6 (addr)
  Availability: not_available
  Varpool flags:
TS_MemCmp32/28 (TS_MemCmp32) @0724ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State1/6 (328095601 (estimated locally),0.31 per call) 
  Calls: 
NvM_GlobalWorkingStatus/27 (NvM_GlobalWorkingStatus) @07256990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ForceForWriteAll/3 (write)NvM_ReadAll_Async_State1/6 (read)NvM_ForceForWriteAll/3 (read)NvM_ForceForWriteAll/3 (read)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_ReCalcCrc/1 (read)
  Availability: not_available
  Varpool flags:
NvM_GlobalErrorStatus/26 (NvM_GlobalErrorStatus) @07256948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_ReCalcCrc/1 (write)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State7/9 (write)
  Availability: not_available
  Varpool flags:
NvM_ReadBlock_Async_State0/25 (NvM_ReadBlock_Async_State0) @0724e9a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_ReadAll_Async_State0/5 (addr)NvM_ReadAll_Async_State8/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_PreService_Function/24 (NvM_PreService_Function) @0724e8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State5/7 (719407023 (estimated locally),0.67 per call) NvM_ReadAll_Async_State0/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GlobalBlockNumber/23 (NvM_GlobalBlockNumber) @072560d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State0/5 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (write)NvM_ForceForWriteAll/3 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State6.part.0/51 (read)NvM_ReadAll_Async_State6.part.0/51 (read)
  Availability: not_available
  Varpool flags:
Fee_SetMode/22 (Fee_SetMode) @0724e700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll_Async_State0/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_Queue_Standard/21 (NvM_Queue_Standard) @07256000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State5/7 (write)
  Availability: not_available
  Varpool flags:
NvM_Queue_IndexStandard/20 (NvM_Queue_IndexStandard) @0720ef78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State0/5 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentFunctionPtr/19 (NvM_CurrentFunctionPtr) @0720ed38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_ReCalcCrc/1 (write)NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_Async_State7/9 (write)NvM_ReadAll_ReCalcCrc/1 (write)NvM_ReadAll_Async/4 (write)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State8.part.0/49 (write)NvM_ReadAll_Async_State8/10 (write)NvM_ReadAll_Async_State8/10 (write)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_ReCalcCrc.part.0/50 (write)NvM_ReadAll_Async_State7/9 (write)NvM_ReadAll_Async_State6.part.0/51 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/18 (NvM_GlobalCallLevel) @0720ecf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_ReCalcCrc/1 (read)NvM_ReadAll_Async_State8/10 (read)NvM_ReadAll_Async_State0/5 (read)NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_Async_State7/9 (read)NvM_ReadAll_Async_State8/10 (write)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_ReCalcCrc/1 (read)NvM_ReadAll_Async/4 (read)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State8.part.0/49 (read)NvM_ReadAll_ReCalcCrc.part.0/50 (read)NvM_ReadAll_ReCalcCrc.part.0/50 (write)NvM_ReadAll_Async_State7/9 (read)NvM_ReadAll_Async_State6.part.0/51 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/17 (NvM_CurrentServiceId) @0720eca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async/4 (write)NvM_ReadAll_Async_State1/6 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @0724e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll/2 (474808634 (estimated locally),0.44 per call) NvM_ReadAll_Async_State6.part.0/51 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State5/7 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State5/7 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State0/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_Queue_InsertStandard/15 (NvM_Queue_InsertStandard) @0724e380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll/2 (232086460 (estimated locally),0.22 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @0724e2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll/2 (474808634 (estimated locally),0.44 per call) NvM_ReadAll_Async_State6.part.0/51 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State5/7 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State5/7 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State0/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_AdminBlockTable/13 (NvM_AdminBlockTable) @0720ea68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State5/7 (read)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State0/5 (write)NvM_ReadAll_Async_State6.part.0/51 (write)NvM_ReadAll_Async_State6.part.0/51 (write)NvM_ForceForWriteAll/3 (write)NvM_ReadAll_Async_State5/7 (write)NvM_ReadAll/2 (read)NvM_ReadAll/2 (read)NvM_ReadAll/2 (write)
  Availability: not_available
  Varpool flags:
Det_ASR40_ReportError/12 (Det_ASR40_ReportError) @0724e1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadAll/2 (244598387 (estimated locally),0.23 per call) NvM_ReadAll/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalGenericStatus/11 (NvM_GlobalGenericStatus) @0720e9d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadAll_Async_State8/10 (read)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State1/6 (read)NvM_ReadAll_Async_State1/6 (write)NvM_ReadAll_Async_State6.part.0/51 (write)NvM_ReadAll_Async_State6.part.0/51 (read)NvM_ReadAll_Async_State6.part.0/51 (write)NvM_ReadAll/2 (read)
  Availability: not_available
  Varpool flags:
NvM_ReadAll_Async_State8/10 (NvM_ReadAll_Async_State8) @0724e000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State6/8 (addr)NvM_GlobalCallLevel/18 (write)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalGenericStatus/11 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadBlock_Async_State0/25 (addr)
  Referring: NvM_ReadAll_Async_State5/7 (addr)NvM_ReadAll_Async_State7/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadAll_Async_State8.part.0/49 (177167400 (estimated locally),0.16 per call) 
NvM_ReadAll_Async_State7/9 (NvM_ReadAll_Async_State7) @07228d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_CalcCrc_CalcBuffer/47 (addr)NvM_GlobalErrorStatus/26 (write)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State6/8 (addr)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State8/10 (addr)
  Referring: NvM_ReadAll_ReCalcCrc/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CheckCrc/46 (1073741824 (estimated locally),1.00 per call) NvM_GetStoredRamCRCAddress/45 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadAll_Async_State6/8 (NvM_ReadAll_Async_State6) @07228b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_ReadAll_Async_State5/7 (addr)
  Referring: NvM_ReadAll_Async_State5/7 (addr)NvM_ReadAll_Async_State8/10 (addr)NvM_ReadAll_Async_State7/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadAll_Async_State6.part.0/51 (536870912 (estimated locally),0.50 per call) NvM_MultiRequestFinishedSingleBlock/48 (536870913 (estimated locally),0.50 per call) 
NvM_ReadAll_Async_State5/7 (NvM_ReadAll_Async_State5) @07228540
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_Queue_IndexStandard/20 (read)NvM_Queue_Standard/21 (read)NvM_GlobalBlockNumber/23 (read)NvM_GlobalBlockNumber/23 (write)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State6/8 (addr)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalBlockNumber/23 (read)NvM_AdminBlockTable/13 (write)NvM_GlobalErrorStatus/26 (write)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_AdminBlockTable/13 (read)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State8/10 (addr)NvM_AdminBlockTable/13 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_ReCalcCrc/1 (addr)NvM_GlobalErrorStatus/26 (write)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalErrorStatus/26 (write)NvM_AdminBlockTable/13 (read)NvM_GlobalErrorStatus/26 (write)NvM_Queue_IndexStandard/20 (read)NvM_Queue_Standard/21 (write)NvM_ReadAll_Async/4 (addr)NvM_Queue_Standard/21 (write)
  Referring: NvM_ReadAll_Async_State1/6 (addr)NvM_ReadAll_ReCalcCrc.part.0/50 (addr)NvM_ReadAll_Async_State6.part.0/51 (addr)NvM_ReadAll_Async_State6/8 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14 (1073741824 (estimated locally),1.00 per call) NvM_MultiPostService_Function/40 (354334802 (estimated locally),0.33 per call) NvM_CheckBlockStatus/38 (517613352 (estimated locally),0.48 per call) NvM_CalcCrc_RemoveElement/39 (11320625 (estimated locally),0.01 per call) NvM_CheckBlockStatus/38 (201793670 (estimated locally),0.19 per call) NvM_PreService_Function/24 (719407023 (estimated locally),0.67 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadAll_Async_State1/6 (NvM_ReadAll_Async_State1) @07228380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalErrorStatus/26 (read)NvM_GlobalWorkingStatus/27 (read)NvM_GlobalGenericStatus/11 (read)NvM_GlobalGenericStatus/11 (write)NvM_ConfigurationId/29 (addr)NvM_CompiledConfigurationId/30 (addr)NvM_GlobalErrorStatus/26 (write)NvM_GlobalErrorStatus/26 (write)NvM_GlobalGenericStatus/11 (read)NvM_GlobalGenericStatus/11 (write)NvM_GlobalBlockNumber/23 (read)NvM_CurrentServiceId/17 (read)NvM_GlobalErrorStatus/26 (read)NvM_GlobalErrorStatus/26 (read)NvM_GlobalWorkingStatus/27 (read)NvM_AdminBlockTable/13 (write)NvM_AdminBlockTable/13 (write)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State5/7 (addr)NvM_GlobalCallLevel/18 (read)NvM_GlobalCallLevel/18 (write)NvM_CurrentFunctionPtr/19 (write)NvM_RestoreBlockDefaults_AscSt0/34 (addr)
  Referring: NvM_ReadAll_Async_State0/5 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ForceForWriteAll/3 (217325345 (estimated locally),0.20 per call) NvM_InvokeSingleBlockCallback/33 (1073741823 (estimated locally),1.00 per call) NvM_PostService_Function/32 (1073741823 (estimated locally),1.00 per call) NvM_SetPermanentRamBlockUnchanged/31 (216543096 (estimated locally),0.20 per call) NvM_SetPermanentRamBlockUnchanged/31 (111552504 (estimated locally),0.10 per call) TS_MemCmp32/28 (328095601 (estimated locally),0.31 per call) 
NvM_ReadAll_Async_State0/5 (NvM_ReadAll_Async_State0) @0721c2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_Queue_IndexStandard/20 (read)NvM_Queue_Standard/21 (write)NvM_ReadAll_Async/4 (addr)NvM_Queue_Standard/21 (write)NvM_GlobalBlockNumber/23 (write)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State1/6 (addr)NvM_GlobalCallLevel/18 (write)NvM_GlobalBlockNumber/23 (read)NvM_AdminBlockTable/13 (write)NvM_CurrentFunctionPtr/19 (write)NvM_ReadBlock_Async_State0/25 (addr)
  Referring: NvM_ReadAll_Async/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_PreService_Function/24 (1073741824 (estimated locally),1.00 per call) Fee_SetMode/22 (1073741824 (estimated locally),1.00 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadAll_Async/4 (NvM_ReadAll_Async) @0721c000
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/17 (write)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State0/5 (addr)
  Referring: NvM_ReadAll_Async_State0/5 (addr)NvM_ReadAll_Async_State5/7 (addr)NvM_ReadAll/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_ForceForWriteAll/3 (NvM_ForceForWriteAll) @0721ce00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_GlobalWorkingStatus/27 (read)NvM_GlobalWorkingStatus/27 (write)NvM_GlobalBlockNumber/23 (read)NvM_GlobalWorkingStatus/27 (read)NvM_AdminBlockTable/13 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_ReadAll_Async_State8.part.0/49 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll_Async_State1/6 (217325345 (estimated locally),0.20 per call) 
  Calls: NvM_SetPermanentRamBlockChanged/36 (1073741824 (estimated locally),1.00 per call) NvM_SetPermanentRamBlockValid/35 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadAll/2 (NvM_ReadAll) @0721cc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/11 (read)NvM_AdminBlockTable/13 (read)NvM_AdminBlockTable/13 (read)NvM_ReadAll_Async/4 (addr)NvM_AdminBlockTable/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/16 (474808634 (estimated locally),0.44 per call) NvM_Queue_InsertStandard/15 (232086460 (estimated locally),0.22 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/14 (474808634 (estimated locally),0.44 per call) Det_ASR40_ReportError/12 (244598387 (estimated locally),0.23 per call) Det_ASR40_ReportError/12 (354334802 (estimated locally),0.33 per call) 
NvM_ReadAll_ReCalcCrc/1 (NvM_ReadAll_ReCalcCrc) @0721c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalErrorStatus/26 (write)NvM_GlobalWorkingStatus/27 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_MirrorRetryCount/43 (read)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_ReCalcCrc/1 (addr)NvM_GlobalCallLevel/18 (read)NvM_CurrentFunctionPtr/19 (write)NvM_ReadAll_Async_State7/9 (addr)
  Referring: NvM_ReadAll_Async_State5/7 (addr)NvM_ReadAll_ReCalcCrc/1 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalculateCrc/44 (805306368 (estimated locally),0.75 per call) NvM_ReadAll_ReCalcCrc.part.0/50 (88583700 (estimated locally),0.08 per call) NvM_MirrorCopy/42 (536870911 (estimated locally),0.50 per call) NvM_GetUserRamBlockAddress/41 (1073741823 (estimated locally),1.00 per call) 

;; Function NvM_ReadAll_Async (NvM_ReadAll_Async, funcdef_no=3, decl_uid=10873, cgraph_uid=5, symbol_order=4)

Modification phase of node NvM_ReadAll_Async/4
NvM_ReadAll_Async ()
{
  unsigned char NvM_GlobalCallLevel.1_1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 12;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.1_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.1_1;
  NvM_CurrentFunctionPtr[_2] = NvM_ReadAll_Async_State0;
  return;

}



;; Function NvM_ReadAll_Async_State0 (NvM_ReadAll_Async_State0, funcdef_no=4, decl_uid=10875, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_ReadAll_Async_State0/5
NvM_ReadAll_Async_State0 ()
{
  short unsigned int NvM_Queue_IndexStandard.2_1;
  int _2;
  unsigned char NvM_GlobalCallLevel.4_3;
  int _4;
  unsigned char _5;
  short unsigned int NvM_GlobalBlockNumber.7_6;
  int _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.2_1 = NvM_Queue_IndexStandard;
  _2 = (int) NvM_Queue_IndexStandard.2_1;
  NvM_Queue_Standard[_2].NvMRequestAsyncPtr = NvM_ReadAll_Async;
  # DEBUG BEGIN_STMT
  NvM_Queue_Standard[_2].NvMBlockDescriptorIndex = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Fee_SetMode (1);
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber = 1;
  # DEBUG BEGIN_STMT
  NvM_PreService_Function ();
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.4_3 = NvM_GlobalCallLevel;
  _4 = (int) NvM_GlobalCallLevel.4_3;
  NvM_CurrentFunctionPtr[_4] = NvM_ReadAll_Async_State1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = NvM_GlobalCallLevel.4_3 + 1;
  NvM_GlobalCallLevel = _5;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.7_6 = NvM_GlobalBlockNumber;
  _7 = (int) NvM_GlobalBlockNumber.7_6;
  NvM_AdminBlockTable[_7].NvMResult = 2;
  # DEBUG BEGIN_STMT
  _8 = (int) _5;
  NvM_CurrentFunctionPtr[_8] = NvM_ReadBlock_Async_State0;
  return;

}



;; Function NvM_ForceForWriteAll (NvM_ForceForWriteAll, funcdef_no=2, decl_uid=10993, cgraph_uid=4, symbol_order=3)

Modification phase of node NvM_ForceForWriteAll/3
NvM_ForceForWriteAll ()
{
  short unsigned int NvM_GlobalWorkingStatus.28_1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int NvM_GlobalBlockNumber.30_4;
  int _5;
  short unsigned int NvM_GlobalWorkingStatus.31_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.28_1 = NvM_GlobalWorkingStatus;
  _2 = NvM_GlobalWorkingStatus.28_1 & 65501;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = _2 | 64;
  NvM_GlobalWorkingStatus = _3;
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockValid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockChanged ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.30_4 = NvM_GlobalBlockNumber;
  _5 = (int) NvM_GlobalBlockNumber.30_4;
  NvM_GlobalWorkingStatus.31_6 = NvM_GlobalWorkingStatus;
  NvM_AdminBlockTable[_5].NvMDynStatus = NvM_GlobalWorkingStatus.31_6;
  return;

}



;; Function NvM_ReadAll_Async_State1 (NvM_ReadAll_Async_State1, funcdef_no=5, decl_uid=10995, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_ReadAll_Async_State1/6
NvM_ReadAll_Async_State1 ()
{
  boolean RestoreBlockDefaultsIndicator;
  unsigned char NvM_GlobalErrorStatus.9_1;
  short unsigned int NvM_GlobalWorkingStatus.11_2;
  short unsigned int NvM_GlobalGenericStatus.12_3;
  short unsigned int _4;
  unsigned char _5;
  short unsigned int NvM_GlobalGenericStatus.15_6;
  short unsigned int _7;
  short unsigned int NvM_GlobalBlockNumber.16_8;
  unsigned char NvM_CurrentServiceId.17_9;
  unsigned char NvM_GlobalErrorStatus.18_10;
  unsigned char NvM_GlobalErrorStatus.19_11;
  short unsigned int NvM_GlobalWorkingStatus.23_12;
  unsigned char NvM_GlobalCallLevel.24_13;
  int _14;
  unsigned char NvM_GlobalCallLevel.25_15;
  unsigned char _16;
  int _17;
  short unsigned int _23;
  short unsigned int _31;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RestoreBlockDefaultsIndicator => 0
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus.9_1 = NvM_GlobalErrorStatus;
  if (NvM_GlobalErrorStatus.9_1 == 5)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  if (NvM_GlobalErrorStatus.9_1 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 240947665]:
  NvM_GlobalWorkingStatus.11_2 = NvM_GlobalWorkingStatus;
  _23 = NvM_GlobalWorkingStatus.11_2 & 256;
  if (_23 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 485546052]:
  # DEBUG BEGIN_STMT
  # DEBUG RestoreBlockDefaultsIndicator => 1
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.12_3 = NvM_GlobalGenericStatus;
  _4 = NvM_GlobalGenericStatus.12_3 & 65519;
  NvM_GlobalGenericStatus = _4;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 588195771]:
  # DEBUG BEGIN_STMT
  if (NvM_GlobalErrorStatus.9_1 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 394091166]:
  if (NvM_GlobalErrorStatus.9_1 == 7)
    goto <bb 8>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 8> [local count: 328095601]:
  # DEBUG BEGIN_STMT
  _5 = TS_MemCmp32 (&NvM_ConfigurationId[0], &NvM_CompiledConfigurationId, 2);
  if (_5 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 111552504]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 216543096]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 260100169]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 3;

  <bb 12> [local count: 588195771]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.15_6 = NvM_GlobalGenericStatus;
  _7 = NvM_GlobalGenericStatus.15_6 & 65519;
  NvM_GlobalGenericStatus = _7;

  <bb 13> [local count: 1073741823]:
  # RestoreBlockDefaultsIndicator_18 = PHI <1(5), 0(12)>
  # DEBUG RestoreBlockDefaultsIndicator => RestoreBlockDefaultsIndicator_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_PostService_Function ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.16_8 = NvM_GlobalBlockNumber;
  NvM_CurrentServiceId.17_9 = NvM_CurrentServiceId;
  NvM_GlobalErrorStatus.18_10 = NvM_GlobalErrorStatus;
  NvM_InvokeSingleBlockCallback (NvM_GlobalBlockNumber.16_8, NvM_CurrentServiceId.17_9, NvM_GlobalErrorStatus.18_10);
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus.19_11 = NvM_GlobalErrorStatus;
  if (NvM_GlobalErrorStatus.19_11 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 14> [local count: 536870911]:
  if (NvM_GlobalErrorStatus.19_11 != 7)
    goto <bb 15>; [66.00%]
  else
    goto <bb 19>; [34.00%]

  <bb 15> [local count: 354334802]:
  if (NvM_GlobalErrorStatus.19_11 != 5)
    goto <bb 16>; [66.00%]
  else
    goto <bb 19>; [34.00%]

  <bb 16> [local count: 233860969]:
  if (NvM_GlobalErrorStatus.19_11 != 3)
    goto <bb 18>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 17> [local count: 79512729]:
  NvM_GlobalWorkingStatus.23_12 = NvM_GlobalWorkingStatus;
  _31 = NvM_GlobalWorkingStatus.23_12 & 256;
  if (_31 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 194104604]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMDatasetBlockIndex = 1;
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 879637219]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMDatasetBlockIndex = 0;

  <bb 20> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.24_13 = NvM_GlobalCallLevel;
  _14 = (int) NvM_GlobalCallLevel.24_13;
  NvM_CurrentFunctionPtr[_14] = NvM_ReadAll_Async_State5;
  # DEBUG BEGIN_STMT
  if (RestoreBlockDefaultsIndicator_18 == 1)
    goto <bb 21>; [20.24%]
  else
    goto <bb 22>; [79.76%]

  <bb 21> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  NvM_ForceForWriteAll ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.25_15 = NvM_GlobalCallLevel;
  _16 = NvM_GlobalCallLevel.25_15 + 1;
  NvM_GlobalCallLevel = _16;
  # DEBUG BEGIN_STMT
  _17 = (int) _16;
  NvM_CurrentFunctionPtr[_17] = NvM_RestoreBlockDefaults_AscSt0;

  <bb 22> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadAll_Async_State5 (NvM_ReadAll_Async_State5, funcdef_no=6, decl_uid=10877, cgraph_uid=8, symbol_order=7)

Modification phase of node NvM_ReadAll_Async_State5/7
NvM_ReadAll_Async_State5 ()
{
  NvM_BlockIdType TempBlockId;
  short unsigned int NvM_Queue_IndexStandard.32_1;
  int _2;
  short unsigned int NvM_GlobalBlockNumber.33_3;
  unsigned char _4;
  short unsigned int _5;
  unsigned char NvM_GlobalCallLevel.36_6;
  int _7;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.37_8;
  void * _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  short unsigned int NvM_GlobalBlockNumber.40_14;
  int _15;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.41_16;
  long unsigned int _17;
  long unsigned int _18;
  unsigned char _19;
  unsigned char NvM_GlobalCallLevel.43_20;
  int _21;
  unsigned char _22;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.45_23;
  long unsigned int _24;
  long unsigned int _25;
  unsigned char NvM_GlobalCallLevel.46_26;
  int _27;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.47_28;
  long unsigned int _29;
  long unsigned int _30;
  unsigned char _31;
  short unsigned int NvM_Queue_IndexStandard.48_32;
  int _33;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.32_1 = NvM_Queue_IndexStandard;
  _2 = (int) NvM_Queue_IndexStandard.32_1;
  TempBlockId_39 = NvM_Queue_Standard[_2].NvMBlockDescriptorIndex;
  # DEBUG TempBlockId => TempBlockId_39
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.33_3 = NvM_GlobalBlockNumber;
  if (NvM_GlobalBlockNumber.33_3 <= 7)
    goto <bb 3>; [67.00%]
  else
    goto <bb 18>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (TempBlockId_39 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  _5 = NvM_GlobalBlockNumber.33_3 + 1;
  NvM_GlobalBlockNumber = _5;

  <bb 5> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  NvM_PreService_Function ();
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.36_6 = NvM_GlobalCallLevel;
  _7 = (int) NvM_GlobalCallLevel.36_6;
  NvM_CurrentFunctionPtr[_7] = NvM_ReadAll_Async_State6;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.37_8 = NvM_CurrentBlockDescriptorPtr;
  _9 = NvM_CurrentBlockDescriptorPtr.37_8->ramBlockDataAddress;
  if (_9 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 6> [local count: 215822107]:
  _10 = NvM_CurrentBlockDescriptorPtr.37_8->blockDesc;
  _11 = _10 & 131072;
  if (_11 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 7> [local count: 611495970]:
  _12 = NvM_CurrentBlockDescriptorPtr.37_8->blockDesc;
  _13 = _12 & 512;
  if (_13 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 8> [local count: 201793670]:
  # DEBUG BEGIN_STMT
  NvM_CheckBlockStatus ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.40_14 = NvM_GlobalBlockNumber;
  _15 = (int) NvM_GlobalBlockNumber.40_14;
  NvM_AdminBlockTable[_15].NvMResult = 2;
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.41_16 = NvM_CurrentBlockDescriptorPtr;
  _17 = NvM_CurrentBlockDescriptorPtr.41_16->blockDesc;
  _18 = _17 & 4194304;
  if (_18 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 100896835]:
  _19 = NvM_AdminBlockTable[_15].NvMValid;
  if (_19 != 165)
    goto <bb 10>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 10> [local count: 167488746]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.43_20 = NvM_GlobalCallLevel;
  _21 = (int) NvM_GlobalCallLevel.43_20;
  NvM_CurrentFunctionPtr[_21] = NvM_ReadAll_Async_State8;
  goto <bb 19>; [100.00%]

  <bb 11> [local count: 34304924]:
  # DEBUG BEGIN_STMT
  _22 = NvM_AdminBlockTable[_15].NvMExtendedStatus;
  _4 = _22 & 2;
  if (_4 != 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 12> [local count: 11320625]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 13> [local count: 34304924]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.45_23 = NvM_CurrentBlockDescriptorPtr;
  _24 = NvM_CurrentBlockDescriptorPtr.45_23->blockDesc;
  _25 = _24 & 8;
  if (_25 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 17152462]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.46_26 = NvM_GlobalCallLevel;
  _27 = (int) NvM_GlobalCallLevel.46_26;
  NvM_CurrentFunctionPtr[_27] = NvM_ReadAll_ReCalcCrc;
  goto <bb 19>; [100.00%]

  <bb 15> [local count: 17152462]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 4;
  goto <bb 19>; [100.00%]

  <bb 16> [local count: 517613352]:
  # DEBUG BEGIN_STMT
  NvM_CheckBlockStatus ();
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.47_28 = NvM_CurrentBlockDescriptorPtr;
  _29 = NvM_CurrentBlockDescriptorPtr.47_28->blockDesc;
  _30 = _29 & 512;
  if (_30 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 258806676]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 4;
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _31 = NvM_AdminBlockTable[0].NvMDatasetBlockIndex;
  NvM_GlobalErrorStatus = _31;
  # DEBUG BEGIN_STMT
  NvM_MultiPostService_Function ();

  <bb 19> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.48_32 = NvM_Queue_IndexStandard;
  _33 = (int) NvM_Queue_IndexStandard.48_32;
  NvM_Queue_Standard[_33].NvMRequestAsyncPtr = NvM_ReadAll_Async;
  # DEBUG BEGIN_STMT
  NvM_Queue_Standard[_33].NvMBlockDescriptorIndex = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function NvM_ReadAll_Async_State7 (NvM_ReadAll_Async_State7, funcdef_no=8, decl_uid=11001, cgraph_uid=10, symbol_order=9)

Modification phase of node NvM_ReadAll_Async_State7/9
NvM_ReadAll_Async_State7 ()
{
  uint8 * _1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.58_2;
  long unsigned int _3;
  unsigned char _4;
  unsigned char NvM_GlobalCallLevel.60_5;
  int _6;
  unsigned char NvM_GlobalCallLevel.61_7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = NvM_GetStoredRamCRCAddress ();
  NvM_CurrentBlockDescriptorPtr.58_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.58_2->blockDesc;
  _4 = NvM_CheckCrc (_1, &NvM_CalcCrc_CalcBuffer, _3);
  NvM_GlobalErrorStatus = _4;
  # DEBUG BEGIN_STMT
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.60_5 = NvM_GlobalCallLevel;
  _6 = (int) NvM_GlobalCallLevel.60_5;
  NvM_CurrentFunctionPtr[_6] = NvM_ReadAll_Async_State6;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.61_7 = NvM_GlobalCallLevel;
  _8 = (int) NvM_GlobalCallLevel.61_7;
  NvM_CurrentFunctionPtr[_8] = NvM_ReadAll_Async_State8;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadAll_Async_State8 (NvM_ReadAll_Async_State8, funcdef_no=9, decl_uid=11003, cgraph_uid=11, symbol_order=10)

Modification phase of node NvM_ReadAll_Async_State8/10
NvM_ReadAll_Async_State8 ()
{
  unsigned char NvM_GlobalCallLevel.62_1;
  int _2;
  short unsigned int _3;
  unsigned char _4;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.65_5;
  long unsigned int _6;
  long unsigned int _7;
  short unsigned int NvM_GlobalGenericStatus.66_8;
  int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.62_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.62_1;
  NvM_CurrentFunctionPtr[_2] = NvM_ReadAll_Async_State6;
  # DEBUG BEGIN_STMT
  _4 = NvM_GlobalCallLevel.62_1 + 1;
  NvM_GlobalCallLevel = _4;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.65_5 = NvM_CurrentBlockDescriptorPtr;
  _6 = NvM_CurrentBlockDescriptorPtr.65_5->blockDesc;
  _7 = _6 & 64;
  if (_7 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  NvM_GlobalGenericStatus.66_8 = NvM_GlobalGenericStatus;
  _3 = NvM_GlobalGenericStatus.66_8 & 16;
  if (_3 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167400]:
  NvM_ReadAll_Async_State8.part.0 ();
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 896574424]:
  # DEBUG BEGIN_STMT
  _11 = (int) _4;
  NvM_CurrentFunctionPtr[_11] = NvM_ReadBlock_Async_State0;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadAll_ReCalcCrc (NvM_ReadAll_ReCalcCrc, funcdef_no=0, decl_uid=10997, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_ReadAll_ReCalcCrc/1
NvM_ReadAll_ReCalcCrc ()
{
  uint8 * BufferAddr;
  Std_ReturnType ReturnVal;
  short unsigned int NvM_GlobalWorkingStatus.50_1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.51_4;
  Std_ReturnType (*<Taeb>) (void *) _5;
  unsigned char NvM_MirrorRetryCount.52_6;
  unsigned char NvM_GlobalCallLevel.53_7;
  int _8;
  unsigned char NvM_GlobalCallLevel.57_9;
  int _10;
  short unsigned int _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BufferAddr_14 = NvM_GetUserRamBlockAddress ();
  # DEBUG BufferAddr => BufferAddr_14
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.50_1 = NvM_GlobalWorkingStatus;
  _11 = NvM_GlobalWorkingStatus.50_1 & 4096;
  if (_11 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.51_4 = NvM_CurrentBlockDescriptorPtr;
  _5 = NvM_CurrentBlockDescriptorPtr.51_4->writeRamToNvCallback;
  ReturnVal_17 = NvM_MirrorCopy (0B, _5, BufferAddr_14);
  # DEBUG ReturnVal => ReturnVal_17
  # DEBUG BEGIN_STMT
  if (ReturnVal_17 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount.52_6 = NvM_MirrorRetryCount;
  if (NvM_MirrorRetryCount.52_6 != 0)
    goto <bb 5>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 5> [local count: 179851755]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.53_7 = NvM_GlobalCallLevel;
  _8 = (int) NvM_GlobalCallLevel.53_7;
  NvM_CurrentFunctionPtr[_8] = NvM_ReadAll_ReCalcCrc;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 88583700]:
  NvM_ReadAll_ReCalcCrc.part.0 ();
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 805306368]:
  # DEBUG ReturnVal => NULL
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.57_9 = NvM_GlobalCallLevel;
  _10 = (int) NvM_GlobalCallLevel.57_9;
  NvM_CurrentFunctionPtr[_10] = NvM_ReadAll_Async_State7;
  # DEBUG BEGIN_STMT
  NvM_CalculateCrc (BufferAddr_14);

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadAll_Async_State6 (NvM_ReadAll_Async_State6, funcdef_no=7, decl_uid=10999, cgraph_uid=9, symbol_order=8)

Modification phase of node NvM_ReadAll_Async_State6/8
NvM_ReadAll_Async_State6 ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.69_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.69_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.69_1->blockDesc;
  _3 = _2 & 512;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_MultiRequestFinishedSingleBlock (NvM_ReadAll_Async_State5);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870912]:
  NvM_ReadAll_Async_State6.part.0 ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadAll (NvM_ReadAll, funcdef_no=1, decl_uid=8947, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_ReadAll/2
NvM_ReadAll ()
{
  Std_ReturnType Result;
  short unsigned int NvM_GlobalGenericStatus.0_1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _6;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.0_1 = NvM_GlobalGenericStatus;
  _6 = NvM_GlobalGenericStatus.0_1 & 1;
  if (_6 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 12, 20);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  _2 = NvM_AdminBlockTable[0].NvMResult;
  if (_2 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 244598387]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 12, 21);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 474808634]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = NvM_AdminBlockTable[0].NvMResult;
  if (_3 != 2)
    goto <bb 7>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 7> [local count: 232086460]:
  # DEBUG BEGIN_STMT
  Result_10 = NvM_Queue_InsertStandard (0, 0B, NvM_ReadAll_Async);
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT
  if (Result_10 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 116043230]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMCurrentServiceId = 12;

  <bb 9> [local count: 474808634]:
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


