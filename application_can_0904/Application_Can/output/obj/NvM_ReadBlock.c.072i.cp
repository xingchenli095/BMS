
IPA constant propagation start:
Determining dynamic type for call: NvM_MemIfRead (_10, Length_9);
  Starting walk at: NvM_MemIfRead (_10, Length_9);
  instance pointer: _10  Outer instance pointer: _10 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_10 = NvM_GetBufferAddress ();
  Function call may change dynamic type:_7 = NvM_GetBlockCRCLength (_6);
  Function call may change dynamic type:_4 = NvM_GetBlockLength (_2, _3);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_ReadBlock_Async_State5.part.0/67:
    callsite  NvM_ReadBlock_Async_State5.part.0/67 -> NvM_SetRedundantResult/19 : 
  Jump functions of caller  NvM_ReadBlock_Async_State0.part.0/65:
    callsite  NvM_ReadBlock_Async_State0.part.0/65 -> NvM_ReadBlock_Async_State2/8 : 
  Jump functions of caller  NvM_ReadBlock_Async_State12.part.0/63:
  Jump functions of caller  NvM_ReadBlock_Async_State10.part.0/62:
    callsite  NvM_ReadBlock_Async_State10.part.0/62 -> NvM_MemIfRead/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  NvM_ReadBlock_Async_StateError1.part.0/61:
    callsite  NvM_ReadBlock_Async_StateError1.part.0/61 -> NvM_SetRedundantResult/19 : 
  Jump functions of caller  NvM_StateMachine_TerminateSubLevel/59:
  Jump functions of caller  Fee_GetJobResult/58:
  Jump functions of caller  Fee_Read/57:
  Jump functions of caller  NvM_GetMergedBlockNumber/56:
  Jump functions of caller  NvM_GetBlockLength/55:
  Jump functions of caller  Fee_GetStatus/54:
  Jump functions of caller  NvM_SetPermanentRamBlockValid/53:
  Jump functions of caller  TS_MemCpy32/52:
  Jump functions of caller  NvM_GetBlockCRCLength/51:
  Jump functions of caller  NvM_MirrorCopy/49:
  Jump functions of caller  NvM_GetBufferAddress/48:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/47:
  Jump functions of caller  NvM_GetStoredRamCRCAddress/46:
  Jump functions of caller  NvM_CopyCrc/45:
  Jump functions of caller  NvM_CheckCrc/42:
  Jump functions of caller  NvM_CalcCrc_GetBlockCrcAddress/41:
  Jump functions of caller  NvM_CalculateCrc/40:
  Jump functions of caller  NvM_GetDataAddress/39:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt0/38:
  Jump functions of caller  NvM_GetUserRamBlockAddress/36:
  Jump functions of caller  NvM_SetPermanentRamBlockUnchanged/32:
  Jump functions of caller  NvM_SetPermanentRamBlockInvalid/31:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/29:
  Jump functions of caller  NvM_CheckCondReadPRAMBlock/26:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/25:
  Jump functions of caller  NvM_Queue_InsertStandard/24:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22:
  Jump functions of caller  NvM_CheckCondReadBlock/21:
  Jump functions of caller  NvM_SetRedundantResult/19:
  Jump functions of caller  NvM_MemIfRead/18:
  Jump functions of caller  NvM_ReadBlock_Async_StateError3/17:
  Jump functions of caller  NvM_ReadBlock_Async_StateError2/16:
  Jump functions of caller  NvM_ReadBlock_Async_StateError1/15:
    callsite  NvM_ReadBlock_Async_StateError1/15 -> NvM_ReadBlock_Async_StateError1.part.0/61 : 
  Jump functions of caller  NvM_ReadBlock_Async_Retry/14:
  Jump functions of caller  NvM_ReadBlock_Async_State12/13:
    callsite  NvM_ReadBlock_Async_State12/13 -> NvM_ReadBlock_Async_State12.part.0/63 : 
  Jump functions of caller  NvM_ReadBlock_Async_State10/12:
    callsite  NvM_ReadBlock_Async_State10/12 -> NvM_ReadBlock_Async_State10.part.0/62 : 
  Jump functions of caller  NvM_ReadBlock_Async_State6/11:
    callsite  NvM_ReadBlock_Async_State6/11 -> NvM_SetRedundantResult/19 : 
    callsite  NvM_ReadBlock_Async_State6/11 -> NvM_ReadBlock_Async_State2/8 : 
  Jump functions of caller  NvM_ReadBlock_Async_State5/10:
    callsite  NvM_ReadBlock_Async_State5/10 -> NvM_ReadBlock_Async_State2/8 : 
    callsite  NvM_ReadBlock_Async_State5/10 -> NvM_ReadBlock_Async_State5.part.0/67 : 
  Jump functions of caller  NvM_ReadBlock_Async_State4/9:
  Jump functions of caller  NvM_ReadBlock_Async_State2/8:
  Jump functions of caller  NvM_ReadBlock_Async_State0/7:
    callsite  NvM_ReadBlock_Async_State0/7 -> NvM_ReadBlock_Async_State0.part.0/65 : 
  Jump functions of caller  NvM_ReadPRAMBlock_Async/6:
  Jump functions of caller  NvM_ReadBlock_Async/5:
  Jump functions of caller  NvM_ASR42_ReadPRAMBlock/4:
  Jump functions of caller  NvM_ASR40_ReadBlock/3:
  Jump functions of caller  NvM_InitStoredCrcBuf/2:

 Propagating constants:

Not considering NvM_ReadBlock_Async_StateError3 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_StateError2 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_StateError1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_Retry for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State12 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State10 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State6 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State5 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State4 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State2 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async_State0 for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadPRAMBlock_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_ReadBlock_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR42_ReadPRAMBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_ReadBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_InitStoredCrcBuf for cloning; -fipa-cp-clone disabled.

overall_size: 534, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_ReadBlock_Async_State5.part.0/67:
  Node: NvM_ReadBlock_Async_State0.part.0/65:
  Node: NvM_ReadBlock_Async_State12.part.0/63:
  Node: NvM_ReadBlock_Async_State10.part.0/62:
  Node: NvM_ReadBlock_Async_StateError1.part.0/61:
  Node: NvM_SetRedundantResult/19:
  Node: NvM_MemIfRead/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: NvM_ReadBlock_Async_StateError3/17:
  Node: NvM_ReadBlock_Async_StateError2/16:
  Node: NvM_ReadBlock_Async_StateError1/15:
  Node: NvM_ReadBlock_Async_Retry/14:
  Node: NvM_ReadBlock_Async_State12/13:
  Node: NvM_ReadBlock_Async_State10/12:
  Node: NvM_ReadBlock_Async_State6/11:
  Node: NvM_ReadBlock_Async_State5/10:
  Node: NvM_ReadBlock_Async_State4/9:
  Node: NvM_ReadBlock_Async_State2/8:
  Node: NvM_ReadBlock_Async_State0/7:
  Node: NvM_ReadPRAMBlock_Async/6:
  Node: NvM_ReadBlock_Async/5:
  Node: NvM_ASR42_ReadPRAMBlock/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_ASR40_ReadBlock/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_InitStoredCrcBuf/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_ReadBlock_Async_State5.part.0/67 (NvM_ReadBlock_Async_State5.part.0) @072b9380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State6/11 (addr)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_StoredCrcBuf/1 (addr)NvM_CalcCrc_CalcBuffer/43 (addr)NvM_StoredCrcBuf/1 (addr)NvM_CalcCrc_CalcBuffer/43 (addr)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_AdminBlockTable/23 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_CalcCrc_CalcBuffer/43 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadBlock_Async_State5/10 (719407023 (estimated locally),0.67 per call) 
  Calls: NvM_CopyCrc/45 (91268055 (estimated locally),0.08 per call) NvM_CheckCrc/42 (91268055 (estimated locally),0.08 per call) NvM_SetRedundantResult/19 (30118458 (estimated locally),0.03 per call) NvM_GetStoredRamCRCAddress/46 (354334802 (estimated locally),0.33 per call) NvM_CopyCrc/45 (354334802 (estimated locally),0.33 per call) 
NvM_ReadBlock_Async_State0.part.0/65 (NvM_ReadBlock_Async_State0.part.0) @072b9460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalCallLevel/33 (read)NvM_GlobalCallLevel/33 (write)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State10/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadBlock_Async_State0/7 (623843998 (estimated locally),0.58 per call) 
  Calls: NvM_ReadBlock_Async_State2/8 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_State12.part.0/63 (NvM_ReadBlock_Async_State12.part.0) @072b90e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_Retry/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadBlock_Async_State12/13 (178921184 (estimated locally),0.17 per call) 
  Calls: 
NvM_ReadBlock_Async_State10.part.0/62 (NvM_ReadBlock_Async_State10.part.0) @072b9d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_CurrentBlockDescriptorPtr/37 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadBlock_Async_State10/12 (524845000 (estimated locally),0.49 per call) 
  Calls: NvM_GetBlockLength/55 (1073741824 (estimated locally),1.00 per call) NvM_GetBlockCRCLength/51 (1073741824 (estimated locally),1.00 per call) NvM_GetBufferAddress/48 (1073741824 (estimated locally),1.00 per call) NvM_MemIfRead/18 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_StateError1.part.0/61 (NvM_ReadBlock_Async_StateError1.part.0) @06e84ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_AdminBlockTable/23 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State10/12 (addr)NvM_AdminBlockTable/23 (read)NvM_AdminBlockTable/23 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_StateError2/16 (addr)NvM_GlobalWorkingStatus/30 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_ReadBlock_Async_StateError1/15 (365072224 (estimated locally),0.34 per call) 
  Calls: NvM_SetRedundantResult/19 (177167401 (estimated locally),0.17 per call) NvM_StateMachine_TerminateCurrentLevel/47 (177167401 (estimated locally),0.17 per call) 
NvM_StateMachine_TerminateSubLevel/59 (NvM_StateMachine_TerminateSubLevel) @072921c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_StateError3/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_GetJobResult/58 (Fee_GetJobResult) @07283d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State12/13 (1073527120 (estimated locally),1.00 per call) 
  Calls: 
Fee_Read/57 (Fee_Read) @07283a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MemIfRead/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetMergedBlockNumber/56 (NvM_GetMergedBlockNumber) @072839a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MemIfRead/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetBlockLength/55 (NvM_GetBlockLength) @072837e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State10.part.0/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_GetStatus/54 (Fee_GetStatus) @07283700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State10/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetPermanentRamBlockValid/53 (NvM_SetPermanentRamBlockValid) @07283540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (509705244 (estimated locally),0.47 per call) 
  Calls: 
TS_MemCpy32/52 (TS_MemCpy32) @07283460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (63894513 (estimated locally),0.06 per call) NvM_ReadBlock_Async_State6/11 (18137215 (estimated locally),0.02 per call) 
  Calls: 
NvM_GetBlockCRCLength/51 (NvM_GetBlockCRCLength) @07283380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (18137215 (estimated locally),0.02 per call) NvM_ReadBlock_Async_State10.part.0/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_BlockDescriptorTable/50 (NvM_BlockDescriptorTable) @07284048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_MirrorCopy/49 (NvM_MirrorCopy) @072832a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (54331336 (estimated locally),0.05 per call) 
  Calls: 
NvM_GetBufferAddress/48 (NvM_GetBufferAddress) @072830e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (1073741824 (estimated locally),1.00 per call) NvM_ReadBlock_Async_State10.part.0/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_TerminateCurrentLevel/47 (NvM_StateMachine_TerminateCurrentLevel) @0726eb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (249143923 (estimated locally),0.23 per call) NvM_ReadBlock_Async_State6/11 (87288042 (estimated locally),0.08 per call) NvM_ReadBlock_Async_State12/13 (178956971 (estimated locally),0.17 per call) NvM_ReadBlock_Async_StateError1.part.0/61 (177167401 (estimated locally),0.17 per call) NvM_SetRedundantResult/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetStoredRamCRCAddress/46 (NvM_GetStoredRamCRCAddress) @0726ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State5.part.0/67 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_CopyCrc/45 (NvM_CopyCrc) @0726ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State5.part.0/67 (91268055 (estimated locally),0.08 per call) NvM_ReadBlock_Async_State5.part.0/67 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalErrorStatus/44 (NvM_GlobalErrorStatus) @07272af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_State5/10 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_StateError2/16 (write)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_SetRedundantResult/19 (write)NvM_ReadBlock_Async_State10/12 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_StateError3/17 (write)NvM_ReadBlock_Async_State6/11 (write)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_CalcBuffer/43 (NvM_CalcCrc_CalcBuffer) @07272ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_State5.part.0/67 (addr)NvM_ReadBlock_Async_State5.part.0/67 (addr)NvM_ReadBlock_Async_State5.part.0/67 (addr)NvM_ReadBlock_Async_State5/10 (addr)
  Availability: not_available
  Varpool flags:
NvM_CheckCrc/42 (NvM_CheckCrc) @0726ea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State5/10 (1073741823 (estimated locally),1.00 per call) NvM_ReadBlock_Async_State5.part.0/67 (91268055 (estimated locally),0.08 per call) 
  Calls: 
NvM_CalcCrc_GetBlockCrcAddress/41 (NvM_CalcCrc_GetBlockCrcAddress) @0726e9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State5/10 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_CalculateCrc/40 (NvM_CalculateCrc) @0726e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State4/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetDataAddress/39 (NvM_GetDataAddress) @0726e700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State4/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_RestoreBlockDefaults_AscSt0/38 (NvM_RestoreBlockDefaults_AscSt0) @0726e380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_ReadBlock_Async_StateError2/16 (addr)NvM_ReadBlock_Async_State0/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_CurrentBlockDescriptorPtr/37 (NvM_CurrentBlockDescriptorPtr) @072720d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_State10.part.0/62 (read)NvM_ReadBlock_Async_StateError3/17 (read)NvM_ReadBlock_Async_State10.part.0/62 (read)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_StateError2/16 (read)NvM_ReadBlock_Async_StateError1/15 (read)NvM_ReadBlock_Async_State0/7 (read)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_State2/8 (read)NvM_ReadBlock_Async_State5/10 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)
  Availability: not_available
  Varpool flags:
NvM_GetUserRamBlockAddress/36 (NvM_GetUserRamBlockAddress) @0726e1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (63894513 (estimated locally),0.06 per call) NvM_ReadBlock_Async_State6/11 (18137215 (estimated locally),0.02 per call) NvM_ReadBlock_Async_State0/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_MirrorRetryCount/35 (NvM_MirrorRetryCount) @07272048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_State0/7 (write)
  Availability: not_available
  Varpool flags:
NvM_CurrentFunctionPtr/34 (NvM_CurrentFunctionPtr) @072298b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_Retry/14 (write)NvM_ReadBlock_Async_StateError2/16 (write)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_State12/13 (write)NvM_MemIfRead/18 (write)NvM_MemIfRead/18 (write)NvM_ReadBlock_Async/5 (write)NvM_ReadBlock_Async_State2/8 (write)NvM_ReadBlock_Async_State2/8 (write)NvM_ReadBlock_Async_State0/7 (write)NvM_ReadBlock_Async_StateError2/16 (write)NvM_ReadBlock_Async_State4/9 (write)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_StateError1/15 (write)NvM_ReadBlock_Async_State5/10 (write)NvM_ReadPRAMBlock_Async/6 (write)NvM_ReadBlock_Async_State0.part.0/65 (write)NvM_ReadBlock_Async_State12.part.0/63 (write)NvM_ReadBlock_Async_State5.part.0/67 (write)NvM_ReadBlock_Async_State6/11 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/33 (NvM_GlobalCallLevel) @07229870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_Retry/14 (read)NvM_ReadBlock_Async_StateError2/16 (write)NvM_ReadBlock_Async_State5/10 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async_State12/13 (read)NvM_ReadBlock_Async_State12/13 (read)NvM_MemIfRead/18 (read)NvM_MemIfRead/18 (read)NvM_ReadBlock_Async/5 (read)NvM_ReadBlock_Async_State12.part.0/63 (read)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_State2/8 (read)NvM_ReadBlock_Async_State2/8 (read)NvM_ReadBlock_Async_State0.part.0/65 (write)NvM_ReadBlock_Async_State0.part.0/65 (read)NvM_ReadBlock_Async_State0/7 (read)NvM_ReadBlock_Async_StateError2/16 (read)NvM_ReadBlock_Async_State4/9 (read)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadPRAMBlock_Async/6 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async_StateError1/15 (read)NvM_ReadBlock_Async_State5/10 (write)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (write)
  Availability: not_available
  Varpool flags:
NvM_SetPermanentRamBlockUnchanged/32 (NvM_SetPermanentRamBlockUnchanged) @07226d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (54331336 (estimated locally),0.05 per call) NvM_ReadPRAMBlock_Async/6 (354334802 (estimated locally),0.33 per call) NvM_ReadBlock_Async/5 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_SetPermanentRamBlockInvalid/31 (NvM_SetPermanentRamBlockInvalid) @07226c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (54331336 (estimated locally),0.05 per call) NvM_ReadPRAMBlock_Async/6 (354334802 (estimated locally),0.33 per call) NvM_ReadBlock_Async/5 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalWorkingStatus/30 (NvM_GlobalWorkingStatus) @07229798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_StateError2/16 (write)NvM_ReadBlock_Async_State12.part.0/63 (read)NvM_ReadBlock_Async_State12/13 (read)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_State12/13 (read)NvM_ReadBlock_Async_State12/13 (write)NvM_ReadBlock_Async_StateError3/17 (read)NvM_ReadBlock_Async_StateError3/17 (read)NvM_MemIfRead/18 (read)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_State5/10 (read)NvM_ReadBlock_Async_State5/10 (write)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async_State12.part.0/63 (write)NvM_ReadBlock_Async_State12/13 (read)NvM_ReadBlock_Async_StateError3/17 (read)NvM_ReadBlock_Async_State0/7 (read)NvM_ReadBlock_Async_State0/7 (write)NvM_ReadBlock_Async/5 (read)NvM_MemIfRead/18 (read)NvM_MemIfRead/18 (write)NvM_ReadPRAMBlock_Async/6 (read)NvM_MemIfRead/18 (write)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_State5.part.0/67 (write)NvM_ReadBlock_Async_StateError2/16 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_RemoveElement/29 (NvM_CalcCrc_RemoveElement) @07226b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ReadPRAMBlock_Async/6 (354334802 (estimated locally),0.33 per call) NvM_ReadBlock_Async/5 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalBlockNumber/28 (NvM_GlobalBlockNumber) @07229708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_StateError2/16 (read)NvM_ReadBlock_Async_State0/7 (read)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async/5 (read)NvM_ReadBlock_Async_State0/7 (read)NvM_ReadBlock_Async_StateError3/17 (read)NvM_ReadPRAMBlock_Async/6 (read)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/27 (NvM_CurrentServiceId) @072296c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async/5 (write)NvM_ReadPRAMBlock_Async/6 (write)
  Availability: not_available
  Varpool flags:
NvM_CheckCondReadPRAMBlock/26 (NvM_CheckCondReadPRAMBlock) @072269a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_ReadPRAMBlock/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/25 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @072267e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_ReadPRAMBlock/4 (524845003 (estimated locally),0.49 per call) NvM_ASR40_ReadBlock/3 (524845003 (estimated locally),0.49 per call) 
  Calls: 
NvM_Queue_InsertStandard/24 (NvM_Queue_InsertStandard) @07226700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_ReadPRAMBlock/4 (256544238 (estimated locally),0.24 per call) NvM_ASR40_ReadBlock/3 (256544238 (estimated locally),0.24 per call) 
  Calls: 
NvM_AdminBlockTable/23 (NvM_AdminBlockTable) @071e1ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ReadBlock_Async_State0/7 (read)NvM_ReadPRAMBlock_Async/6 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_State5.part.0/67 (write)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ASR40_ReadBlock/3 (read)NvM_ASR40_ReadBlock/3 (write)NvM_ReadBlock_Async_State0/7 (write)NvM_ASR42_ReadPRAMBlock/4 (read)NvM_ASR42_ReadPRAMBlock/4 (write)NvM_ReadBlock_Async_State5.part.0/67 (read)NvM_ReadBlock_Async/5 (read)NvM_ReadBlock_Async_StateError1.part.0/61 (write)NvM_ReadBlock_Async_StateError1.part.0/61 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (read)NvM_ReadBlock_Async_State6/11 (write)
  Availability: not_available
  Varpool flags:
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @07226620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_ReadPRAMBlock/4 (524845004 (estimated locally),0.49 per call) NvM_ASR40_ReadBlock/3 (524845004 (estimated locally),0.49 per call) 
  Calls: 
NvM_CheckCondReadBlock/21 (NvM_CheckCondReadBlock) @07226540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_ReadBlock/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetRedundantResult/19 (NvM_SetRedundantResult) @07223540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_GlobalErrorStatus/44 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (87288042 (estimated locally),0.08 per call) NvM_ReadBlock_Async_State5.part.0/67 (30118458 (estimated locally),0.03 per call) NvM_ReadBlock_Async_StateError1.part.0/61 (177167401 (estimated locally),0.17 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/47 (1073741824 (estimated locally),1.00 per call) 
NvM_MemIfRead/18 (NvM_MemIfRead) @07223380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State12/13 (addr)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_Retry/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_ReadBlock_Async_State10.part.0/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_Read/57 (1073741824 (estimated locally),1.00 per call) NvM_GetMergedBlockNumber/56 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_StateError3/17 (NvM_ReadBlock_Async_StateError3) @07223000
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalBlockNumber/28 (read)NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalErrorStatus/44 (write)
  Referring: NvM_ReadBlock_Async_StateError2/16 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_TerminateSubLevel/59 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_StateError2/16 (NvM_ReadBlock_Async_StateError2) @071467e0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_StateError3/17 (addr)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalBlockNumber/28 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalCallLevel/33 (write)NvM_CurrentFunctionPtr/34 (write)NvM_RestoreBlockDefaults_AscSt0/38 (addr)
  Referring: NvM_ReadBlock_Async_StateError1.part.0/61 (addr)NvM_ReadBlock_Async_StateError1/15 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_ReadBlock_Async_StateError1/15 (NvM_ReadBlock_Async_StateError1) @07146380
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_StateError2/16 (addr)
  Referring: NvM_ReadBlock_Async_Retry/14 (addr)NvM_ReadBlock_Async_State12/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadBlock_Async_StateError1.part.0/61 (365072224 (estimated locally),0.34 per call) 
NvM_ReadBlock_Async_Retry/14 (NvM_ReadBlock_Async_Retry) @07140e00
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_StateError1/15 (addr)
  Referring: NvM_MemIfRead/18 (addr)NvM_ReadBlock_Async_State12/13 (addr)NvM_ReadBlock_Async_State12.part.0/63 (addr)NvM_ReadBlock_Async_State5/10 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_ReadBlock_Async_State12/13 (NvM_ReadBlock_Async_State12) @07140c40
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalErrorStatus/44 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalCallLevel/33 (write)NvM_GlobalErrorStatus/44 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_Retry/14 (addr)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_StateError1/15 (addr)
  Referring: NvM_MemIfRead/18 (addr)
  Availability: available
  Function flags: count:1073527120 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadBlock_Async_State12.part.0/63 (178921184 (estimated locally),0.17 per call) NvM_StateMachine_TerminateCurrentLevel/47 (178956971 (estimated locally),0.17 per call) Fee_GetJobResult/58 (1073527120 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_State10/12 (NvM_ReadBlock_Async_State10) @071409a0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalErrorStatus/44 (write)
  Referring: NvM_ReadBlock_Async_State0.part.0/65 (addr)NvM_ReadBlock_Async_StateError1.part.0/61 (addr)NvM_ReadBlock_Async_State6/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadBlock_Async_State10.part.0/62 (524845000 (estimated locally),0.49 per call) Fee_GetStatus/54 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_State6/11 (NvM_ReadBlock_Async_State6) @07140700
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_GlobalWorkingStatus/30 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalErrorStatus/44 (write)NvM_GlobalBlockNumber/28 (read)NvM_BlockDescriptorTable/50 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalBlockNumber/28 (read)NvM_BlockDescriptorTable/50 (read)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_AdminBlockTable/23 (write)NvM_GlobalCallLevel/33 (read)NvM_GlobalCallLevel/33 (write)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State10/12 (addr)NvM_GlobalWorkingStatus/30 (read)
  Referring: NvM_ReadBlock_Async_State2/8 (addr)NvM_ReadBlock_Async_State5.part.0/67 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_TerminateCurrentLevel/47 (249143923 (estimated locally),0.23 per call) NvM_StateMachine_TerminateCurrentLevel/47 (87288042 (estimated locally),0.08 per call) NvM_SetRedundantResult/19 (87288042 (estimated locally),0.08 per call) NvM_ReadBlock_Async_State2/8 (85985236 (estimated locally),0.08 per call) NvM_SetPermanentRamBlockValid/53 (509705244 (estimated locally),0.47 per call) TS_MemCpy32/52 (63894513 (estimated locally),0.06 per call) NvM_GetUserRamBlockAddress/36 (63894513 (estimated locally),0.06 per call) TS_MemCpy32/52 (18137215 (estimated locally),0.02 per call) NvM_GetBlockCRCLength/51 (18137215 (estimated locally),0.02 per call) NvM_GetUserRamBlockAddress/36 (18137215 (estimated locally),0.02 per call) NvM_MirrorCopy/49 (54331336 (estimated locally),0.05 per call) NvM_SetPermanentRamBlockUnchanged/32 (54331336 (estimated locally),0.05 per call) NvM_SetPermanentRamBlockInvalid/31 (54331336 (estimated locally),0.05 per call) NvM_GetBufferAddress/48 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_State5/10 (NvM_ReadBlock_Async_State5) @07139e00
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_CalcCrc_CalcBuffer/43 (addr)NvM_GlobalErrorStatus/44 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)NvM_GlobalCallLevel/33 (read)NvM_GlobalCallLevel/33 (write)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_Retry/14 (addr)
  Referring: NvM_ReadBlock_Async_State4/9 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadBlock_Async_State2/8 (354334802 (estimated locally),0.33 per call) NvM_ReadBlock_Async_State5.part.0/67 (719407023 (estimated locally),0.67 per call) NvM_CheckCrc/42 (1073741823 (estimated locally),1.00 per call) NvM_CalcCrc_GetBlockCrcAddress/41 (1073741823 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_State4/9 (NvM_ReadBlock_Async_State4) @071398c0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State5/10 (addr)
  Referring: NvM_ReadBlock_Async_State2/8 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalculateCrc/40 (1073741824 (estimated locally),1.00 per call) NvM_GetDataAddress/39 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadBlock_Async_State2/8 (NvM_ReadBlock_Async_State2) @07139700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State4/9 (addr)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State6/11 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_ReadBlock_Async_State6/11 (85985236 (estimated locally),0.08 per call) NvM_ReadBlock_Async_State5/10 (354334802 (estimated locally),0.33 per call) NvM_ReadBlock_Async_State0.part.0/65 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ReadBlock_Async_State0/7 (NvM_ReadBlock_Async_State0) @07139460
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_MirrorRetryCount/35 (write)NvM_CurrentBlockDescriptorPtr/37 (read)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_RestoreBlockDefaults_AscSt0/38 (addr)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (write)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalWorkingStatus/30 (write)
  Referring: NvM_ReadBlock_Async/5 (addr)NvM_ReadPRAMBlock_Async/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ReadBlock_Async_State0.part.0/65 (623843998 (estimated locally),0.58 per call) NvM_GetUserRamBlockAddress/36 (1073741824 (estimated locally),1.00 per call) 
NvM_ReadPRAMBlock_Async/6 (NvM_ReadPRAMBlock_Async) @07139000
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/27 (write)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State0/7 (addr)
  Referring: NvM_ASR42_ReadPRAMBlock/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_SetPermanentRamBlockUnchanged/32 (354334802 (estimated locally),0.33 per call) NvM_SetPermanentRamBlockInvalid/31 (354334802 (estimated locally),0.33 per call) NvM_CalcCrc_RemoveElement/29 (354334802 (estimated locally),0.33 per call) 
NvM_ReadBlock_Async/5 (NvM_ReadBlock_Async) @071ef8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/27 (write)NvM_GlobalBlockNumber/28 (read)NvM_AdminBlockTable/23 (read)NvM_GlobalWorkingStatus/30 (read)NvM_GlobalCallLevel/33 (read)NvM_CurrentFunctionPtr/34 (write)NvM_ReadBlock_Async_State0/7 (addr)
  Referring: NvM_ASR40_ReadBlock/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_SetPermanentRamBlockUnchanged/32 (354334802 (estimated locally),0.33 per call) NvM_SetPermanentRamBlockInvalid/31 (354334802 (estimated locally),0.33 per call) NvM_CalcCrc_RemoveElement/29 (354334802 (estimated locally),0.33 per call) 
NvM_ASR42_ReadPRAMBlock/4 (NvM_ASR42_ReadPRAMBlock) @071ef0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/23 (read)NvM_ReadPRAMBlock_Async/6 (addr)NvM_AdminBlockTable/23 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/25 (524845003 (estimated locally),0.49 per call) NvM_Queue_InsertStandard/24 (256544238 (estimated locally),0.24 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (524845004 (estimated locally),0.49 per call) NvM_CheckCondReadPRAMBlock/26 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_ReadBlock/3 (NvM_ASR40_ReadBlock) @071efe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/23 (read)NvM_ReadBlock_Async/5 (addr)NvM_AdminBlockTable/23 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/25 (524845003 (estimated locally),0.49 per call) NvM_Queue_InsertStandard/24 (256544238 (estimated locally),0.24 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (524845004 (estimated locally),0.49 per call) NvM_CheckCondReadBlock/21 (1073741824 (estimated locally),1.00 per call) 
NvM_InitStoredCrcBuf/2 (NvM_InitStoredCrcBuf) @071efc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_StoredCrcBuf/1 (write)
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_StoredCrcBuf/1 (NvM_StoredCrcBuf) @071e1288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: NvM_InitStoredCrcBuf/2 (write)NvM_ReadBlock_Async_State5.part.0/67 (addr)NvM_ReadBlock_Async_State5.part.0/67 (addr)
  Availability: available
  Varpool flags:

;; Function NvM_ReadBlock_Async_Retry (NvM_ReadBlock_Async_Retry, funcdef_no=12, decl_uid=10840, cgraph_uid=14, symbol_order=14)

Modification phase of node NvM_ReadBlock_Async_Retry/14
NvM_ReadBlock_Async_Retry ()
{
  unsigned char NvM_GlobalCallLevel.81_1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.81_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.81_1;
  NvM_CurrentFunctionPtr[_2] = NvM_ReadBlock_Async_StateError1;
  return;

}



;; Function NvM_ReadBlock_Async_StateError2 (NvM_ReadBlock_Async_StateError2, funcdef_no=14, decl_uid=10844, cgraph_uid=16, symbol_order=16)

Modification phase of node NvM_ReadBlock_Async_StateError2/16
NvM_ReadBlock_Async_StateError2 ()
{
  unsigned char NvM_GlobalCallLevel.94_1;
  int _2;
  short unsigned int NvM_GlobalWorkingStatus.95_3;
  short unsigned int _4;
  short unsigned int NvM_GlobalBlockNumber.96_5;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.98_6;
  long unsigned int _7;
  long unsigned int _8;
  unsigned int _9;
  short unsigned int _10;
  unsigned char _11;
  int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.94_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.94_1;
  NvM_CurrentFunctionPtr[_2] = NvM_ReadBlock_Async_StateError3;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.95_3 = NvM_GlobalWorkingStatus;
  _4 = NvM_GlobalWorkingStatus.95_3 & 65519;
  NvM_GlobalWorkingStatus = _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.96_5 = NvM_GlobalBlockNumber;
  if (NvM_GlobalBlockNumber.96_5 > 1)
    goto <bb 3>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 3> [local count: 633507677]:
  # DEBUG BEGIN_STMT
  _10 = _4 & 4;
  if (_10 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 316753838]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.98_6 = NvM_CurrentBlockDescriptorPtr;
  _7 = NvM_CurrentBlockDescriptorPtr.98_6->blockDesc;
  _8 = _7 >> 7;
  _9 = _8 & 3;
  if (_9 != 2)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 209057533]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = NvM_GlobalCallLevel.94_1 + 1;
  NvM_GlobalCallLevel = _11;
  # DEBUG BEGIN_STMT
  _12 = (int) _11;
  NvM_CurrentFunctionPtr[_12] = NvM_RestoreBlockDefaults_AscSt0;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadBlock_Async (NvM_ReadBlock_Async, funcdef_no=3, decl_uid=10822, cgraph_uid=5, symbol_order=5)

Modification phase of node NvM_ReadBlock_Async/5
NvM_ReadBlock_Async ()
{
  short unsigned int NvM_GlobalBlockNumber.1_1;
  int _2;
  unsigned char _3;
  short unsigned int NvM_GlobalWorkingStatus.2_4;
  unsigned char NvM_GlobalCallLevel.3_5;
  int _6;
  unsigned char _15;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 6;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.1_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.1_1;
  _3 = NvM_AdminBlockTable[_2].NvMExtendedStatus;
  _15 = _3 & 2;
  if (_15 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.2_4 = NvM_GlobalWorkingStatus;
  _16 = NvM_GlobalWorkingStatus.2_4 & 4096;
  if (_16 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockInvalid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.3_5 = NvM_GlobalCallLevel;
  _6 = (int) NvM_GlobalCallLevel.3_5;
  NvM_CurrentFunctionPtr[_6] = NvM_ReadBlock_Async_State0;
  return;

}



;; Function NvM_ReadPRAMBlock_Async (NvM_ReadPRAMBlock_Async, funcdef_no=4, decl_uid=10824, cgraph_uid=6, symbol_order=6)

Modification phase of node NvM_ReadPRAMBlock_Async/6
NvM_ReadPRAMBlock_Async ()
{
  short unsigned int NvM_GlobalBlockNumber.4_1;
  int _2;
  unsigned char _3;
  short unsigned int NvM_GlobalWorkingStatus.5_4;
  unsigned char NvM_GlobalCallLevel.6_5;
  int _6;
  unsigned char _15;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 22;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.4_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.4_1;
  _3 = NvM_AdminBlockTable[_2].NvMExtendedStatus;
  _15 = _3 & 2;
  if (_15 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.5_4 = NvM_GlobalWorkingStatus;
  _16 = NvM_GlobalWorkingStatus.5_4 & 4096;
  if (_16 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockInvalid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.6_5 = NvM_GlobalCallLevel;
  _6 = (int) NvM_GlobalCallLevel.6_5;
  NvM_CurrentFunctionPtr[_6] = NvM_ReadBlock_Async_State0;
  return;

}



;; Function NvM_ReadBlock_Async_State4 (NvM_ReadBlock_Async_State4, funcdef_no=7, decl_uid=10830, cgraph_uid=9, symbol_order=9)

Modification phase of node NvM_ReadBlock_Async_State4/9
NvM_ReadBlock_Async_State4 ()
{
  unsigned char NvM_GlobalCallLevel.20_1;
  int _2;
  uint8 * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.20_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.20_1;
  NvM_CurrentFunctionPtr[_2] = NvM_ReadBlock_Async_State5;
  # DEBUG BEGIN_STMT
  _3 = NvM_GetDataAddress ();
  NvM_CalculateCrc (_3);
  return;

}



;; Function NvM_ReadBlock_Async_StateError3 (NvM_ReadBlock_Async_StateError3, funcdef_no=15, decl_uid=10846, cgraph_uid=17, symbol_order=17)

Modification phase of node NvM_ReadBlock_Async_StateError3/17
NvM_ReadBlock_Async_StateError3 ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.102_1;
  long unsigned int _2;
  unsigned int _3;
  short unsigned int NvM_GlobalWorkingStatus.103_4;
  short unsigned int NvM_GlobalWorkingStatus.104_5;
  short unsigned int NvM_GlobalBlockNumber.105_6;
  long unsigned int _7;
  unsigned int _8;
  const void * _9;
  short unsigned int NvM_GlobalWorkingStatus.110_10;
  short unsigned int _23;
  short unsigned int _24;
  short unsigned int _25;
  short unsigned int _26;
  short unsigned int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.102_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.102_1->blockDesc;
  _3 = _2 & 7;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  NvM_GlobalWorkingStatus.103_4 = NvM_GlobalWorkingStatus;
  _23 = NvM_GlobalWorkingStatus.103_4 & 256;
  if (_23 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 805306369]:
  NvM_GlobalWorkingStatus.104_5 = NvM_GlobalWorkingStatus;
  _24 = NvM_GlobalWorkingStatus.104_5 & 1024;
  if (_24 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 5> [local count: 671088641]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.105_6 = NvM_GlobalBlockNumber;
  if (NvM_GlobalBlockNumber.105_6 > 1)
    goto <bb 6>; [59.00%]
  else
    goto <bb 11>; [41.00%]

  <bb 6> [local count: 395942298]:
  # DEBUG BEGIN_STMT
  _7 = _2 >> 7;
  _8 = _7 & 3;
  if (_8 == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 134620381]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 3;
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 261321916]:
  # DEBUG BEGIN_STMT
  _9 = NvM_CurrentBlockDescriptorPtr.102_1->romBlockDataAddress;
  if (_9 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 78396575]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 3;
  goto <bb 17>; [100.00%]

  <bb 10> [local count: 182925341]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  goto <bb 17>; [100.00%]

  <bb 11> [local count: 275146343]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 3;
  goto <bb 17>; [100.00%]

  <bb 12> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  _25 = NvM_GlobalWorkingStatus.104_5 & 4;
  if (_25 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 201326592]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 5;
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 201326592]:
  # DEBUG BEGIN_STMT
  _26 = NvM_GlobalWorkingStatus.104_5 & 2048;
  if (_26 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 100663296]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 100663296]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;

  <bb 17> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.110_10 = NvM_GlobalWorkingStatus;
  _27 = NvM_GlobalWorkingStatus.110_10 & 16;
  if (_27 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 8;

  <bb 19> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateSubLevel ();
  return;

}



;; Function NvM_ReadBlock_Async_State10 (NvM_ReadBlock_Async_State10, funcdef_no=10, decl_uid=10836, cgraph_uid=12, symbol_order=12)

Modification phase of node NvM_ReadBlock_Async_State10/12
NvM_ReadBlock_Async_State10 ()
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Fee_GetStatus ();
  if (_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845000]:
  NvM_ReadBlock_Async_State10.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadBlock_Async_State12 (NvM_ReadBlock_Async_State12, funcdef_no=11, decl_uid=10838, cgraph_uid=13, symbol_order=13)

Modification phase of node NvM_ReadBlock_Async_State12/13
NvM_ReadBlock_Async_State12 ()
{
  const MemIf_JobResultType Result;
  short unsigned int NvM_GlobalWorkingStatus.74_2;
  short unsigned int _3;
  short unsigned int NvM_GlobalWorkingStatus.75_4;
  short unsigned int _5;
  unsigned char NvM_GlobalCallLevel.76_6;
  int _7;
  short unsigned int NvM_GlobalWorkingStatus.77_8;
  short unsigned int _9;
  unsigned char NvM_GlobalCallLevel.78_10;
  int _11;

  <bb 2> [local count: 1073527120]:
  # DEBUG BEGIN_STMT
  Result_14 = Fee_GetJobResult ();
  # DEBUG Result => Result_14
  # DEBUG BEGIN_STMT
  switch (Result_14) <default: <L5> [16.67%], case 0: <L2> [16.67%], case 2: <L0> [16.67%], case 3: <L1> [16.67%], case 4: <L3> [16.67%], case 5: <L4> [16.67%]>

  <bb 3> [local count: 178956971]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 178956971]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel = 0;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 178956971]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.74_2 = NvM_GlobalWorkingStatus;
  _3 = NvM_GlobalWorkingStatus.74_2 & 48123;
  NvM_GlobalWorkingStatus = _3;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 178956971]:
<L3>:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.75_4 = NvM_GlobalWorkingStatus;
  _5 = NvM_GlobalWorkingStatus.75_4 | 1024;
  NvM_GlobalWorkingStatus = _5;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.76_6 = NvM_GlobalCallLevel;
  _7 = (int) NvM_GlobalCallLevel.76_6;
  NvM_CurrentFunctionPtr[_7] = NvM_ReadBlock_Async_Retry;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 178956971]:
<L4>:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.77_8 = NvM_GlobalWorkingStatus;
  _9 = NvM_GlobalWorkingStatus.77_8 | 4;
  NvM_GlobalWorkingStatus = _9;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.78_10 = NvM_GlobalCallLevel;
  _11 = (int) NvM_GlobalCallLevel.78_10;
  NvM_CurrentFunctionPtr[_11] = NvM_ReadBlock_Async_StateError1;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 178921184]:
<L5>:
  NvM_ReadBlock_Async_State12.part.0 ();

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadBlock_Async_StateError1 (NvM_ReadBlock_Async_StateError1, funcdef_no=13, decl_uid=10842, cgraph_uid=15, symbol_order=15)

Modification phase of node NvM_ReadBlock_Async_StateError1/15
NvM_ReadBlock_Async_StateError1 ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.82_1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _5;
  unsigned char NvM_GlobalCallLevel.93_6;
  int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.82_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.82_1->blockDesc;
  _3 = _2 >> 7;
  _5 = _3 & 3;
  if (_5 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  NvM_ReadBlock_Async_StateError1.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.93_6 = NvM_GlobalCallLevel;
  _7 = (int) NvM_GlobalCallLevel.93_6;
  NvM_CurrentFunctionPtr[_7] = NvM_ReadBlock_Async_StateError2;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_InitStoredCrcBuf (NvM_InitStoredCrcBuf, funcdef_no=0, decl_uid=10820, cgraph_uid=2, symbol_order=2)

Modification phase of node NvM_InitStoredCrcBuf/2
NvM_InitStoredCrcBuf ()
{
  uint16 i;
  int _1;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = (int) i_2;
  NvM_StoredCrcBuf[_1] = 0;
  # DEBUG BEGIN_STMT
  i_6 = i_2 + 1;
  # DEBUG i => i_6

  <bb 4> [local count: 1073741824]:
  # i_2 = PHI <0(2), i_6(3)>
  # DEBUG i => i_2
  # DEBUG BEGIN_STMT
  if (i_2 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 5>; [20.00%]

  <bb 5> [local count: 214748365]:
  return;

}



;; Function NvM_ASR40_ReadBlock (NvM_ASR40_ReadBlock, funcdef_no=1, decl_uid=8977, cgraph_uid=3, symbol_order=3)

Modification phase of node NvM_ASR40_ReadBlock/3
NvM_ASR40_ReadBlock (NvM_ASR40_BlockIdType BlockId, void * NvM_DstPtr)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_10 = NvM_CheckCondReadBlock (BlockId_7(D), NvM_DstPtr_8(D));
  # DEBUG BlockIndex => BlockIndex_10
  # DEBUG BEGIN_STMT
  if (BlockIndex_10 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) BlockIndex_10;
  _2 = NvM_AdminBlockTable[_1].NvMResult;
  if (_2 != 2)
    goto <bb 5>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 5> [local count: 256544238]:
  # DEBUG BEGIN_STMT
  Result_13 = NvM_Queue_InsertStandard (BlockIndex_10, NvM_DstPtr_8(D), NvM_ReadBlock_Async);
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  if (Result_13 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 128272119]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_1].NvMCurrentServiceId = 6;

  <bb 7> [local count: 524845003]:
  # Result_16 = PHI <Result_13(5), 0(6), 1(3)>
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();

  <bb 8> [local count: 1073741824]:
  # Result_3 = PHI <1(2), Result_16(7)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function NvM_ASR42_ReadPRAMBlock (NvM_ASR42_ReadPRAMBlock, funcdef_no=2, decl_uid=8985, cgraph_uid=4, symbol_order=4)

Modification phase of node NvM_ASR42_ReadPRAMBlock/4
NvM_ASR42_ReadPRAMBlock (NvM_ASR42_BlockIdType BlockId)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_9 = NvM_CheckCondReadPRAMBlock (BlockId_7(D));
  # DEBUG BlockIndex => BlockIndex_9
  # DEBUG BEGIN_STMT
  if (BlockIndex_9 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) BlockIndex_9;
  _2 = NvM_AdminBlockTable[_1].NvMResult;
  if (_2 != 2)
    goto <bb 5>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 5> [local count: 256544238]:
  # DEBUG BEGIN_STMT
  Result_12 = NvM_Queue_InsertStandard (BlockIndex_9, 0B, NvM_ReadPRAMBlock_Async);
  # DEBUG Result => Result_12
  # DEBUG BEGIN_STMT
  if (Result_12 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 128272119]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_1].NvMCurrentServiceId = 22;

  <bb 7> [local count: 524845003]:
  # Result_15 = PHI <Result_12(5), 0(6), 1(3)>
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();

  <bb 8> [local count: 1073741824]:
  # Result_3 = PHI <1(2), Result_15(7)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function NvM_ReadBlock_Async_State2 (NvM_ReadBlock_Async_State2, funcdef_no=6, decl_uid=10828, cgraph_uid=8, symbol_order=8)

Modification phase of node NvM_ReadBlock_Async_State2/8
NvM_ReadBlock_Async_State2 ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.17_1;
  long unsigned int _2;
  unsigned int _3;
  unsigned char NvM_GlobalCallLevel.18_4;
  int _5;
  unsigned char NvM_GlobalCallLevel.19_6;
  int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.17_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.17_1->blockDesc;
  _3 = _2 & 7;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.18_4 = NvM_GlobalCallLevel;
  _5 = (int) NvM_GlobalCallLevel.18_4;
  NvM_CurrentFunctionPtr[_5] = NvM_ReadBlock_Async_State4;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.19_6 = NvM_GlobalCallLevel;
  _7 = (int) NvM_GlobalCallLevel.19_6;
  NvM_CurrentFunctionPtr[_7] = NvM_ReadBlock_Async_State6;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadBlock_Async_State0 (NvM_ReadBlock_Async_State0, funcdef_no=5, decl_uid=10826, cgraph_uid=7, symbol_order=7)

Modification phase of node NvM_ReadBlock_Async_State0/7
NvM_ReadBlock_Async_State0 ()
{
  uint8 * TempPtr;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.7_1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _5;
  short unsigned int NvM_GlobalBlockNumber.8_6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char NvM_GlobalCallLevel.10_10;
  int _11;
  short unsigned int NvM_GlobalBlockNumber.12_12;
  int _13;
  short unsigned int NvM_GlobalWorkingStatus.13_14;
  short unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount = 0;
  # DEBUG BEGIN_STMT
  TempPtr_21 = NvM_GetUserRamBlockAddress ();
  # DEBUG TempPtr => TempPtr_21
  # DEBUG BEGIN_STMT
  if (TempPtr_21 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.7_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.7_1->blockDesc;
  _3 = _2 >> 7;
  _5 = _3 & 3;
  if (_5 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 255550554]:
  NvM_GlobalBlockNumber.8_6 = NvM_GlobalBlockNumber;
  _7 = (int) NvM_GlobalBlockNumber.8_6;
  _8 = NvM_AdminBlockTable[_7].NvMDatasetBlockIndex;
  _9 = NvM_CurrentBlockDescriptorPtr.7_1->nvBlockNum;
  if (_8 >= _9)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 127775277]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.10_10 = NvM_GlobalCallLevel;
  _11 = (int) NvM_GlobalCallLevel.10_10;
  NvM_CurrentFunctionPtr[_11] = NvM_RestoreBlockDefaults_AscSt0;
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 623844001]:
  # DEBUG BEGIN_STMT
  if (_5 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 212106960]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.12_12 = NvM_GlobalBlockNumber;
  _13 = (int) NvM_GlobalBlockNumber.12_12;
  NvM_AdminBlockTable[_13].NvMDatasetBlockIndex = 0;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.13_14 = NvM_GlobalWorkingStatus;
  _15 = NvM_GlobalWorkingStatus.13_14 & 65407;
  NvM_GlobalWorkingStatus = _15;

  <bb 8> [local count: 623843998]:
  NvM_ReadBlock_Async_State0.part.0 ();

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadBlock_Async_State5 (NvM_ReadBlock_Async_State5, funcdef_no=8, decl_uid=10832, cgraph_uid=10, symbol_order=10)

Modification phase of node NvM_ReadBlock_Async_State5/10
NvM_ReadBlock_Async_State5 ()
{
  uint8 * _1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.21_2;
  long unsigned int _3;
  unsigned char _4;
  short unsigned int NvM_GlobalWorkingStatus.34_6;
  short unsigned int _7;
  unsigned char NvM_GlobalCallLevel.35_8;
  unsigned char _10;
  int _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = NvM_CalcCrc_GetBlockCrcAddress ();
  NvM_CurrentBlockDescriptorPtr.21_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.21_2->blockDesc;
  _4 = NvM_CheckCrc (_1, &NvM_CalcCrc_CalcBuffer, _3);
  NvM_GlobalErrorStatus = _4;
  # DEBUG BEGIN_STMT
  if (_4 == 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  NvM_ReadBlock_Async_State5.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.34_6 = NvM_GlobalWorkingStatus;
  _7 = NvM_GlobalWorkingStatus.34_6 | 256;
  NvM_GlobalWorkingStatus = _7;
  # DEBUG BEGIN_STMT
  NvM_ReadBlock_Async_State2 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.35_8 = NvM_GlobalCallLevel;
  _10 = NvM_GlobalCallLevel.35_8 + 1;
  NvM_GlobalCallLevel = _10;
  # DEBUG BEGIN_STMT
  _11 = (int) _10;
  NvM_CurrentFunctionPtr[_11] = NvM_ReadBlock_Async_Retry;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_ReadBlock_Async_State6 (NvM_ReadBlock_Async_State6, funcdef_no=9, decl_uid=10834, cgraph_uid=11, symbol_order=11)

Modification phase of node NvM_ReadBlock_Async_State6/11
NvM_ReadBlock_Async_State6 ()
{
  boolean process_block;
  Std_ReturnType ReturnVal;
  uint8 * DataBufPtr;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.47_1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _4;
  short unsigned int NvM_GlobalWorkingStatus.48_5;
  short unsigned int NvM_GlobalBlockNumber.49_6;
  int _7;
  unsigned char _8;
  short unsigned int NvM_GlobalWorkingStatus.50_9;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.52_10;
  Std_ReturnType (*<Taf0>) (const void *) _11;
  long unsigned int _12;
  long unsigned int _13;
  uint8 * _14;
  short unsigned int NvM_GlobalBlockNumber.56_15;
  int _16;
  short unsigned int _17;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.57_18;
  long unsigned int _19;
  unsigned char _20;
  short unsigned int _21;
  short unsigned int _22;
  long unsigned int _23;
  uint8 * _24;
  short unsigned int NvM_GlobalBlockNumber.58_25;
  int _26;
  short unsigned int _27;
  long unsigned int _28;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.60_29;
  long unsigned int _30;
  long unsigned int _31;
  unsigned int _32;
  short unsigned int NvM_GlobalBlockNumber.61_33;
  int _34;
  unsigned char _35;
  unsigned char NvM_GlobalCallLevel.63_36;
  short unsigned int _37;
  unsigned char _38;
  int _39;
  short unsigned int NvM_GlobalWorkingStatus.66_40;
  short unsigned int _47;
  short unsigned int _48;
  short unsigned int _49;
  short unsigned int _68;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  DataBufPtr_46 = NvM_GetBufferAddress ();
  # DEBUG DataBufPtr => DataBufPtr_46
  # DEBUG BEGIN_STMT
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG process_block => 0
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.47_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.47_1->blockDesc;
  _3 = _2 >> 7;
  _4 = _3 & 3;
  if (_4 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  NvM_GlobalWorkingStatus.48_5 = NvM_GlobalWorkingStatus;
  _47 = NvM_GlobalWorkingStatus.48_5 & 128;
  if (_47 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  NvM_GlobalBlockNumber.49_6 = NvM_GlobalBlockNumber;
  _7 = (int) NvM_GlobalBlockNumber.49_6;
  _8 = NvM_AdminBlockTable[_7].NvMDatasetBlockIndex;
  if (_8 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 1011679548]:
  # DEBUG BEGIN_STMT
  # DEBUG process_block => 1

  <bb 6> [local count: 1073741824]:
  # process_block_41 = PHI <0(4), 1(5)>
  # DEBUG process_block => process_block_41
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.50_9 = NvM_GlobalWorkingStatus;
  _48 = NvM_GlobalWorkingStatus.50_9 & 2048;
  if (_48 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 7> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _49 = NvM_GlobalWorkingStatus.50_9 & 4096;
  if (_49 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 8> [local count: 268435456]:
  if (process_block_41 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 9> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockInvalid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.52_10 = NvM_CurrentBlockDescriptorPtr;
  _11 = NvM_CurrentBlockDescriptorPtr.52_10->readRamFromNvCallback;
  ReturnVal_53 = NvM_MirrorCopy (_11, 0B, DataBufPtr_46);
  # DEBUG ReturnVal => ReturnVal_53
  # DEBUG BEGIN_STMT
  if (ReturnVal_53 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 10> [local count: 27165668]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  goto <bb 17>; [100.00%]

  <bb 11> [local count: 482539575]:
  # DEBUG BEGIN_STMT
  _12 = _2 & 8192;
  if (_12 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 12> [local count: 241269788]:
  if (process_block_41 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 13> [local count: 82031728]:
  # DEBUG BEGIN_STMT
  _13 = _2 & 1048576;
  if (_13 != 0)
    goto <bb 14>; [67.00%]
  else
    goto <bb 16>; [33.00%]

  <bb 14> [local count: 54961258]:
  _37 = NvM_GlobalWorkingStatus.50_9 & 512;
  if (_37 != 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 18137215]:
  # DEBUG BEGIN_STMT
  _14 = NvM_GetUserRamBlockAddress ();
  NvM_GlobalBlockNumber.56_15 = NvM_GlobalBlockNumber;
  _16 = (int) NvM_GlobalBlockNumber.56_15;
  _17 = NvM_BlockDescriptorTable[_16].nvBlockLength;
  NvM_CurrentBlockDescriptorPtr.57_18 = NvM_CurrentBlockDescriptorPtr;
  _19 = NvM_CurrentBlockDescriptorPtr.57_18->blockDesc;
  _20 = NvM_GetBlockCRCLength (_19);
  _21 = (short unsigned int) _20;
  _22 = _17 + _21;
  _23 = (long unsigned int) _22;
  TS_MemCpy32 (_14, DataBufPtr_46, _23);
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 16> [local count: 63894513]:
  # DEBUG BEGIN_STMT
  _24 = NvM_GetUserRamBlockAddress ();
  NvM_GlobalBlockNumber.58_25 = NvM_GlobalBlockNumber;
  _26 = (int) NvM_GlobalBlockNumber.58_25;
  _27 = NvM_BlockDescriptorTable[_26].nvBlockLength;
  _28 = (long unsigned int) _27;
  TS_MemCpy32 (_24, DataBufPtr_46, _28);
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 54331336]:
  # DEBUG ReturnVal => ReturnVal_53
  # DEBUG BEGIN_STMT
  if (ReturnVal_53 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 18> [local count: 509705244]:
  # DEBUG ReturnVal => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockValid ();
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.60_29 = NvM_CurrentBlockDescriptorPtr;
  _30 = NvM_CurrentBlockDescriptorPtr.60_29->blockDesc;
  _31 = _30 >> 7;
  _32 = _31 & 3;
  if (_32 == 1)
    goto <bb 19>; [51.12%]
  else
    goto <bb 24>; [48.88%]

  <bb 19> [local count: 260561320]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.61_33 = NvM_GlobalBlockNumber;
  _34 = (int) NvM_GlobalBlockNumber.61_33;
  _35 = NvM_AdminBlockTable[_34].NvMDatasetBlockIndex;
  if (_35 == 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 85985236]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_34].NvMDatasetBlockIndex = 1;
  # DEBUG BEGIN_STMT
  NvM_ReadBlock_Async_State2 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.63_36 = NvM_GlobalCallLevel;
  _38 = NvM_GlobalCallLevel.63_36 + 1;
  NvM_GlobalCallLevel = _38;
  # DEBUG BEGIN_STMT
  _39 = (int) _38;
  NvM_CurrentFunctionPtr[_39] = NvM_ReadBlock_Async_State10;
  goto <bb 25>; [100.00%]

  <bb 21> [local count: 174576085]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.66_40 = NvM_GlobalWorkingStatus;
  _68 = NvM_GlobalWorkingStatus.66_40 & 128;
  if (_68 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 87288042]:
  # DEBUG BEGIN_STMT
  NvM_SetRedundantResult ();
  goto <bb 25>; [100.00%]

  <bb 23> [local count: 87288042]:
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  goto <bb 25>; [100.00%]

  <bb 24> [local count: 249143923]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();

  <bb 25> [local count: 1073741823]:
  return;

}


