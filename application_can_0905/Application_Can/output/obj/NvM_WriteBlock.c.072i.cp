
IPA constant propagation start:
Determining dynamic type for call: NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_Async_State3);
  Starting walk at: NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_Async_State3);
  instance pointer: NvM_WriteBlock_Async_State3  Outer instance pointer: NvM_WriteBlock_Async_State3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:NvM_SetPermanentRamBlockValid ();
  Function call may change dynamic type:ReturnVal_20 = NvM_MirrorCopy (0B, _3, BufferAddr_17);
  Function call may change dynamic type:BufferAddr_17 = NvM_GetDataAddress ();
  Function call may change dynamic type:NvM_FillInternalBuffer ();
Determining dynamic type for call: NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_Async_State3);
  Starting walk at: NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_Async_State3);
  instance pointer: NvM_WriteBlock_Async_State3  Outer instance pointer: NvM_WriteBlock_Async_State3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:NvM_CopyCrc (_1, &NvM_CalcCrc_CalcBuffer, _3);
  Function call may change dynamic type:_1 = NvM_CalcCrc_GetBlockCrcAddress ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60:
  Jump functions of caller  NvM_WriteBlock_Async_State3.part.0/59:
  Jump functions of caller  Fee_Read/58:
  Jump functions of caller  NvM_GetBlockCRCLength/57:
  Jump functions of caller  NvM_GetBlockLength/56:
  Jump functions of caller  NvM_SetPermanentRamBlockUnchanged/55:
  Jump functions of caller  NvM_GetStoredRamCRCAddress/54:
  Jump functions of caller  NvM_ResetRedundantBlockDataIndex/53:
  Jump functions of caller  Fee_GetJobResult/52:
  Jump functions of caller  Fee_Write/51:
  Jump functions of caller  NvM_GetBufferAddress/50:
  Jump functions of caller  NvM_GetMergedBlockNumber/49:
  Jump functions of caller  Fee_GetStatus/48:
  Jump functions of caller  TS_MemCpy32/47:
  Jump functions of caller  NvM_CalculateCrc/46:
  Jump functions of caller  NvM_MirrorCopy/45:
  Jump functions of caller  NvM_GetDataAddress/44:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt0/43:
  Jump functions of caller  NvM_GetUserRamBlockAddress/42:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/40:
  Jump functions of caller  NvM_CopyCrc/33:
  Jump functions of caller  NvM_CalcCrc_GetBlockCrcAddress/31:
  Jump functions of caller  NvM_SetPermanentRamBlockValid/30:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/28:
  Jump functions of caller  NvM_CheckCondWritePRAMBlock/25:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/23:
  Jump functions of caller  NvM_Queue_InsertStandard/22:
  Jump functions of caller  NvM_CheckDataSetRomBlock/20:
  Jump functions of caller  NvM_CheckWriteProtection/19:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/18:
  Jump functions of caller  NvM_CheckCondWriteBlock/17:
  Jump functions of caller  NvM_FillInternalBuffer/16:
  Jump functions of caller  NvM_WriteBlock_MemIfReadBlock/15:
  Jump functions of caller  NvM_WriteBlock_RedundantBlockError/14:
  Jump functions of caller  NvM_WriteBlock_ProcessRedundantBlock_State1/13:
  Jump functions of caller  NvM_WriteBlock_ProcessRedundantBlock/12:
    callsite  NvM_WriteBlock_ProcessRedundantBlock/12 -> NvM_WriteBlock_MemIfReadBlock/15 : 
  Jump functions of caller  NvM_WriteBlock_ProcessJobRes/11:
  Jump functions of caller  NvM_WriteBlock_ProcessJobRes_Async_State/10:
    callsite  NvM_WriteBlock_ProcessJobRes_Async_State/10 -> NvM_WriteBlock_Async_Error/6 : 
    callsite  NvM_WriteBlock_ProcessJobRes_Async_State/10 -> NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 : 
    callsite  NvM_WriteBlock_ProcessJobRes_Async_State/10 -> NvM_WriteBlock_ProcessJobRes/11 : 
  Jump functions of caller  NvM_WriteBlock_Async_State3/9:
    callsite  NvM_WriteBlock_Async_State3/9 -> NvM_WriteBlock_Async_State3.part.0/59 : 
  Jump functions of caller  NvM_WriteBlock_Async_State2/8:
    callsite  NvM_WriteBlock_Async_State2/8 -> NvM_WriteBlock_ProcessRedundantBlock/12 : 
       param 0: CONST: NvM_WriteBlock_Async_State3
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  NvM_WriteBlock_Async_State2/8 -> NvM_FillInternalBuffer/16 : 
  Jump functions of caller  NvM_WriteBlock_Async_State1/7:
  Jump functions of caller  NvM_WriteBlock_Async_Error/6:
    callsite  NvM_WriteBlock_Async_Error/6 -> NvM_WriteBlock_RedundantBlockError/14 : 
  Jump functions of caller  NvM_WriteBlock_Async_CopyCrc/5:
    callsite  NvM_WriteBlock_Async_CopyCrc/5 -> NvM_WriteBlock_ProcessRedundantBlock/12 : 
       param 0: CONST: NvM_WriteBlock_Async_State3
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  NvM_WritePRAMBlock_Async/4:
    callsite  NvM_WritePRAMBlock_Async/4 -> NvM_WriteBlock_Async_State1/7 : 
  Jump functions of caller  NvM_WriteBlock_Async/3:
    callsite  NvM_WriteBlock_Async/3 -> NvM_WriteBlock_Async_State1/7 : 
  Jump functions of caller  NvM_ASR42_WritePRAMBlock/2:
  Jump functions of caller  NvM_ASR40_WriteBlock/1:

 Propagating constants:

Not considering NvM_WriteBlock_MemIfReadBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_ProcessRedundantBlock_State1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_ProcessRedundantBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_ProcessJobRes for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_ProcessJobRes_Async_State for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_Async_State3 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_Async_State2 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_Async_State1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_Async_Error for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_Async_CopyCrc for cloning; -fipa-cp-clone disabled.
Not considering NvM_WritePRAMBlock_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteBlock_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR42_WritePRAMBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_WriteBlock for cloning; -fipa-cp-clone disabled.

overall_size: 469, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60:
  Node: NvM_WriteBlock_Async_State3.part.0/59:
  Node: NvM_FillInternalBuffer/16:
  Node: NvM_WriteBlock_MemIfReadBlock/15:
  Node: NvM_WriteBlock_RedundantBlockError/14:
  Node: NvM_WriteBlock_ProcessRedundantBlock_State1/13:
  Node: NvM_WriteBlock_ProcessRedundantBlock/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_WriteBlock_ProcessJobRes/11:
  Node: NvM_WriteBlock_ProcessJobRes_Async_State/10:
  Node: NvM_WriteBlock_Async_State3/9:
  Node: NvM_WriteBlock_Async_State2/8:
  Node: NvM_WriteBlock_Async_State1/7:
  Node: NvM_WriteBlock_Async_Error/6:
  Node: NvM_WriteBlock_Async_CopyCrc/5:
  Node: NvM_WritePRAMBlock_Async/4:
  Node: NvM_WriteBlock_Async/3:
  Node: NvM_ASR42_WritePRAMBlock/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_ASR40_WriteBlock/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (NvM_WriteBlock_ProcessJobRes_Async_State.part.0) @072a3ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalGenericStatus/38 (read)NvM_GlobalGenericStatus/38 (write)NvM_GlobalErrorStatus/39 (write)NvM_GlobalCallLevel/36 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes_Async_State/10 (145607981 (estimated locally),0.14 per call) 
  Calls: NvM_ResetRedundantBlockDataIndex/53 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_Async_State3.part.0/59 (NvM_WriteBlock_Async_State3.part.0) @06e80ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalGenericStatus/38 (read)NvM_GlobalGenericStatus/38 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_WriteBlock_Async_State3/9 (204299396 (estimated locally),0.19 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/40 (1073741824 (estimated locally),1.00 per call) 
Fee_Read/58 (Fee_Read) @0727ae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_MemIfReadBlock/15 (120473832 (estimated locally),0.11 per call) 
  Calls: 
NvM_GetBlockCRCLength/57 (NvM_GetBlockCRCLength) @0727ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_MemIfReadBlock/15 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetBlockLength/56 (NvM_GetBlockLength) @0727ac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_MemIfReadBlock/15 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetPermanentRamBlockUnchanged/55 (NvM_SetPermanentRamBlockUnchanged) @0727a7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetStoredRamCRCAddress/54 (NvM_GetStoredRamCRCAddress) @0727a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes/11 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_ResetRedundantBlockDataIndex/53 (NvM_ResetRedundantBlockDataIndex) @0727a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_GetJobResult/52 (Fee_GetJobResult) @0727a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes_Async_State/10 (1073741824 (estimated locally),1.00 per call) NvM_WriteBlock_ProcessRedundantBlock_State1/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_Write/51 (Fee_Write) @0727a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_State3/9 (424983458 (estimated locally),0.40 per call) 
  Calls: 
NvM_GetBufferAddress/50 (NvM_GetBufferAddress) @0727a0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_MemIfReadBlock/15 (120473832 (estimated locally),0.11 per call) NvM_WriteBlock_Async_State3/9 (424983458 (estimated locally),0.40 per call) 
  Calls: 
NvM_GetMergedBlockNumber/49 (NvM_GetMergedBlockNumber) @0727a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_MemIfReadBlock/15 (120473832 (estimated locally),0.11 per call) NvM_WriteBlock_Async_State3/9 (424983458 (estimated locally),0.40 per call) 
  Calls: 
Fee_GetStatus/48 (Fee_GetStatus) @0726e700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_MemIfReadBlock/15 (1073741823 (estimated locally),1.00 per call) NvM_WriteBlock_Async_State3/9 (869442428 (estimated locally),0.81 per call) 
  Calls: 
TS_MemCpy32/47 (TS_MemCpy32) @0726ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_FillInternalBuffer/16 (177167401 (estimated locally),0.17 per call) 
  Calls: 
NvM_CalculateCrc/46 (NvM_CalculateCrc) @0726ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_State2/8 (402653184 (estimated locally),0.38 per call) 
  Calls: 
NvM_MirrorCopy/45 (NvM_MirrorCopy) @0726ea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_State2/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_GetDataAddress/44 (NvM_GetDataAddress) @0726e9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_State2/8 (1073741824 (estimated locally),1.00 per call) NvM_FillInternalBuffer/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_RestoreBlockDefaults_AscSt0/43 (NvM_RestoreBlockDefaults_AscSt0) @0726e7e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_WriteBlock_Async_State1/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_GetUserRamBlockAddress/42 (NvM_GetUserRamBlockAddress) @0726e620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_State1/7 (1073741824 (estimated locally),1.00 per call) NvM_FillInternalBuffer/16 (177167401 (estimated locally),0.17 per call) 
  Calls: 
NvM_MirrorRetryCount/41 (NvM_MirrorRetryCount) @0726fa20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_Async_State1/7 (write)
  Availability: not_available
  Varpool flags:
NvM_StateMachine_TerminateCurrentLevel/40 (NvM_StateMachine_TerminateCurrentLevel) @0726e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes/11 (1073741824 (estimated locally),1.00 per call) NvM_WriteBlock_MemIfReadBlock/15 (39756365 (estimated locally),0.04 per call) NvM_WriteBlock_ProcessRedundantBlock_State1/13 (233860969 (estimated locally),0.22 per call) NvM_WriteBlock_Async_State3.part.0/59 (1073741824 (estimated locally),1.00 per call) NvM_WriteBlock_RedundantBlockError/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GlobalErrorStatus/39 (NvM_GlobalErrorStatus) @0726f750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_RedundantBlockError/14 (write)NvM_WriteBlock_ProcessJobRes/11 (write)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (write)NvM_WriteBlock_MemIfReadBlock/15 (write)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (write)NvM_WriteBlock_MemIfReadBlock/15 (write)NvM_WriteBlock_Async_State3/9 (write)NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (write)NvM_WriteBlock_ProcessJobRes_Async_State/10 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalGenericStatus/38 (NvM_GlobalGenericStatus) @0726f708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_ProcessJobRes/11 (read)NvM_WriteBlock_ProcessJobRes/11 (write)NvM_WriteBlock_RedundantBlockError/14 (write)NvM_WriteBlock_Async_State3.part.0/59 (write)NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (read)NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (write)NvM_WriteBlock_Async_State3.part.0/59 (read)NvM_WriteBlock_Async_State3/9 (read)NvM_WriteBlock_RedundantBlockError/14 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)
  Availability: not_available
  Varpool flags:
NvM_CurrentFunctionPtr/37 (NvM_CurrentFunctionPtr) @0726f360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_Async_Error/6 (write)NvM_WriteBlock_Async_State3/9 (write)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (write)NvM_WriteBlock_Async_State1/7 (write)NvM_WriteBlock_Async_State3/9 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_MemIfReadBlock/15 (write)NvM_WriteBlock_MemIfReadBlock/15 (write)NvM_WriteBlock_Async_State1/7 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_Async_State2/8 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/36 (NvM_GlobalCallLevel) @0726f318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_Async_Error/6 (read)NvM_WriteBlock_Async_State1/7 (write)NvM_WriteBlock_Async_State1/7 (read)NvM_WriteBlock_Async_State3/9 (read)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (read)NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (write)NvM_WriteBlock_Async_State3/9 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_MemIfReadBlock/15 (read)NvM_WriteBlock_MemIfReadBlock/15 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_Async_State2/8 (read)
  Availability: not_available
  Varpool flags:
NvM_WriteRetryCount/35 (NvM_WriteRetryCount) @0726f2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_Async_State1/7 (write)NvM_WriteBlock_Async_Error/6 (write)NvM_WriteBlock_Async_Error/6 (read)NvM_WriteBlock_Async_Error/6 (write)NvM_WriteBlock_ProcessJobRes/11 (write)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_CalcBuffer/34 (NvM_CalcCrc_CalcBuffer) @0726f048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_ProcessJobRes/11 (addr)NvM_WriteBlock_Async_CopyCrc/5 (addr)
  Availability: not_available
  Varpool flags:
NvM_CopyCrc/33 (NvM_CopyCrc) @0726e000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_CopyCrc/5 (1073741824 (estimated locally),1.00 per call) NvM_WriteBlock_ProcessJobRes/11 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_CurrentBlockDescriptorPtr/32 (NvM_CurrentBlockDescriptorPtr) @07237f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_ProcessJobRes/11 (read)NvM_WriteBlock_Async_CopyCrc/5 (read)NvM_FillInternalBuffer/16 (read)NvM_WriteBlock_MemIfReadBlock/15 (read)NvM_WriteBlock_ProcessJobRes/11 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_MemIfReadBlock/15 (read)NvM_WriteBlock_RedundantBlockError/14 (read)NvM_WriteBlock_Async_Error/6 (read)NvM_WriteBlock_Async_State3/9 (read)NvM_FillInternalBuffer/16 (read)NvM_WriteBlock_Async_State2/8 (read)NvM_WriteBlock_Async_State2/8 (read)NvM_WriteBlock_Async_State2/8 (read)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_GetBlockCrcAddress/31 (NvM_CalcCrc_GetBlockCrcAddress) @07234ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_CopyCrc/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetPermanentRamBlockValid/30 (NvM_SetPermanentRamBlockValid) @07234c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteBlock_Async_State2/8 (805306369 (estimated locally),0.75 per call) NvM_WritePRAMBlock_Async/4 (354334802 (estimated locally),0.33 per call) NvM_WriteBlock_Async/3 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalWorkingStatus/29 (NvM_GlobalWorkingStatus) @07237990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_FillInternalBuffer/16 (read)NvM_WritePRAMBlock_Async/4 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_Async/3 (read)NvM_WriteBlock_Async_State2/8 (read)NvM_WriteBlock_Async_State2/8 (read)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_RemoveElement/28 (NvM_CalcCrc_RemoveElement) @07234b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WritePRAMBlock_Async/4 (354334802 (estimated locally),0.33 per call) NvM_WriteBlock_Async/3 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalBlockNumber/27 (NvM_GlobalBlockNumber) @07237900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_MemIfReadBlock/15 (read)NvM_WriteBlock_Async_State1/7 (read)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (read)NvM_WriteBlock_ProcessJobRes/11 (read)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (read)NvM_WritePRAMBlock_Async/4 (read)NvM_WriteBlock_Async/3 (read)NvM_WriteBlock_RedundantBlockError/14 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/26 (NvM_CurrentServiceId) @072378b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WritePRAMBlock_Async/4 (write)NvM_WriteBlock_Async_State3/9 (read)NvM_WriteBlock_Async/3 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (read)
  Availability: not_available
  Varpool flags:
NvM_CheckCondWritePRAMBlock/25 (NvM_CheckCondWritePRAMBlock) @072349a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_WritePRAMBlock/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/23 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @07234700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_WritePRAMBlock/2 (524845004 (estimated locally),0.49 per call) NvM_ASR40_WriteBlock/1 (524845004 (estimated locally),0.49 per call) 
  Calls: 
NvM_Queue_InsertStandard/22 (NvM_Queue_InsertStandard) @07234620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_WritePRAMBlock/2 (31349706 (estimated locally),0.03 per call) NvM_ASR40_WriteBlock/1 (31349706 (estimated locally),0.03 per call) 
  Calls: 
NvM_AdminBlockTable/21 (NvM_AdminBlockTable) @071c2d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteBlock_RedundantBlockError/14 (write)NvM_WriteBlock_RedundantBlockError/14 (read)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (write)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (write)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (read)NvM_WriteBlock_MemIfReadBlock/15 (read)NvM_ASR40_WriteBlock/1 (write)NvM_ASR42_WritePRAMBlock/2 (write)NvM_WriteBlock_RedundantBlockError/14 (write)NvM_WriteBlock_ProcessJobRes/11 (read)NvM_WriteBlock_ProcessJobRes/11 (write)NvM_WriteBlock_ProcessJobRes/11 (read)NvM_WriteBlock_ProcessJobRes/11 (write)NvM_WriteBlock_RedundantBlockError/14 (read)NvM_ASR40_WriteBlock/1 (read)NvM_ASR40_WriteBlock/1 (read)NvM_WriteBlock_Async/3 (read)NvM_WritePRAMBlock_Async/4 (read)NvM_ASR42_WritePRAMBlock/2 (read)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (read)NvM_ASR42_WritePRAMBlock/2 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)NvM_WriteBlock_ProcessRedundantBlock/12 (read)NvM_WriteBlock_ProcessRedundantBlock/12 (write)
  Availability: not_available
  Varpool flags:
NvM_CheckDataSetRomBlock/20 (NvM_CheckDataSetRomBlock) @07234540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_WritePRAMBlock/2 (256544238 (estimated locally),0.24 per call) NvM_ASR40_WriteBlock/1 (256544238 (estimated locally),0.24 per call) 
  Calls: 
NvM_CheckWriteProtection/19 (NvM_CheckWriteProtection) @07234460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_WritePRAMBlock/2 (524845004 (estimated locally),0.49 per call) NvM_ASR40_WriteBlock/1 (524845004 (estimated locally),0.49 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/18 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @07234380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_WritePRAMBlock/2 (524845004 (estimated locally),0.49 per call) NvM_ASR40_WriteBlock/1 (524845004 (estimated locally),0.49 per call) 
  Calls: 
NvM_CheckCondWriteBlock/17 (NvM_CheckCondWriteBlock) @072342a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_WriteBlock/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_FillInternalBuffer/16 (NvM_FillInternalBuffer) @072340e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_CurrentBlockDescriptorPtr/32 (read)NvM_GlobalWorkingStatus/29 (read)NvM_CurrentBlockDescriptorPtr/32 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_WriteBlock_Async_State2/8 (535528735 (estimated locally),0.50 per call) 
  Calls: TS_MemCpy32/47 (177167401 (estimated locally),0.17 per call) NvM_GetUserRamBlockAddress/42 (177167401 (estimated locally),0.17 per call) NvM_GetDataAddress/44 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_MemIfReadBlock/15 (NvM_WriteBlock_MemIfReadBlock) @0722fd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/32 (read)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (addr)NvM_GlobalErrorStatus/39 (write)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_MemIfReadBlock/15 (addr)NvM_GlobalErrorStatus/39 (write)
  Referring: NvM_WriteBlock_MemIfReadBlock/15 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: NvM_WriteBlock_ProcessRedundantBlock/12 (29817273 (estimated locally),0.03 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/40 (39756365 (estimated locally),0.04 per call) Fee_Read/58 (120473832 (estimated locally),0.11 per call) NvM_GetBufferAddress/50 (120473832 (estimated locally),0.11 per call) NvM_GetMergedBlockNumber/49 (120473832 (estimated locally),0.11 per call) Fee_GetStatus/48 (1073741823 (estimated locally),1.00 per call) NvM_GetBlockCRCLength/57 (1073741823 (estimated locally),1.00 per call) NvM_GetBlockLength/56 (1073741823 (estimated locally),1.00 per call) 
NvM_WriteBlock_RedundantBlockError/14 (NvM_WriteBlock_RedundantBlockError) @0722f9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_CurrentBlockDescriptorPtr/32 (read)NvM_AdminBlockTable/21 (read)NvM_GlobalGenericStatus/38 (read)NvM_GlobalGenericStatus/38 (write)NvM_AdminBlockTable/21 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_GlobalErrorStatus/39 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_WriteBlock_Async_Error/6 (354334802 (estimated locally),0.33 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/40 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_ProcessRedundantBlock_State1/13 (NvM_WriteBlock_ProcessRedundantBlock_State1) @0722f540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalErrorStatus/39 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_Async_State3/9 (addr)NvM_GlobalErrorStatus/39 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)
  Referring: NvM_WriteBlock_MemIfReadBlock/15 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_TerminateCurrentLevel/40 (233860969 (estimated locally),0.22 per call) Fee_GetJobResult/52 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_ProcessRedundantBlock/12 (NvM_WriteBlock_ProcessRedundantBlock) @0722f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_AdminBlockTable/21 (write)NvM_GlobalWorkingStatus/29 (read)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (write)NvM_CurrentServiceId/26 (read)NvM_GlobalCallLevel/36 (write)NvM_CurrentFunctionPtr/37 (write)NvM_GlobalGenericStatus/38 (read)NvM_GlobalGenericStatus/38 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_GlobalGenericStatus/38 (read)NvM_GlobalGenericStatus/38 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: NvM_WriteBlock_Async_State2/8 (402653184 (estimated locally),0.38 per call) NvM_WriteBlock_Async_CopyCrc/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_WriteBlock_MemIfReadBlock/15 (29817273 (estimated locally),0.03 per call) 
NvM_WriteBlock_ProcessJobRes/11 (NvM_WriteBlock_ProcessJobRes) @072189a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalErrorStatus/39 (write)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (write)NvM_GlobalGenericStatus/38 (read)NvM_GlobalGenericStatus/38 (write)NvM_WriteRetryCount/35 (write)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_CalcCrc_CalcBuffer/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes_Async_State/10 (354334802 (estimated locally),0.33 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/40 (1073741824 (estimated locally),1.00 per call) NvM_SetPermanentRamBlockUnchanged/55 (1073741824 (estimated locally),1.00 per call) NvM_CopyCrc/33 (354334802 (estimated locally),0.33 per call) NvM_GetStoredRamCRCAddress/54 (354334802 (estimated locally),0.33 per call) 
NvM_WriteBlock_ProcessJobRes_Async_State/10 (NvM_WriteBlock_ProcessJobRes_Async_State) @07218460
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalErrorStatus/39 (write)
  Referring: NvM_WriteBlock_Async_State3/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteBlock_Async_Error/6 (280472971 (estimated locally),0.26 per call) NvM_WriteBlock_ProcessJobRes_Async_State.part.0/60 (145607981 (estimated locally),0.14 per call) NvM_WriteBlock_ProcessJobRes/11 (354334802 (estimated locally),0.33 per call) Fee_GetJobResult/52 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_Async_State3/9 (NvM_WriteBlock_Async_State3) @072180e0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/26 (read)NvM_GlobalGenericStatus/38 (read)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_ProcessJobRes_Async_State/10 (addr)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_Async_Error/6 (addr)NvM_GlobalErrorStatus/39 (write)
  Referring: NvM_WriteBlock_Async_Error/6 (addr)NvM_WriteBlock_Async_CopyCrc/5 (addr)NvM_WriteBlock_ProcessRedundantBlock_State1/13 (addr)NvM_WriteBlock_Async_State2/8 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_Write/51 (424983458 (estimated locally),0.40 per call) NvM_GetBufferAddress/50 (424983458 (estimated locally),0.40 per call) NvM_GetMergedBlockNumber/49 (424983458 (estimated locally),0.40 per call) Fee_GetStatus/48 (869442428 (estimated locally),0.81 per call) NvM_WriteBlock_Async_State3.part.0/59 (204299396 (estimated locally),0.19 per call) 
NvM_WriteBlock_Async_State2/8 (NvM_WriteBlock_Async_State2) @07212a80
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalWorkingStatus/29 (read)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_GlobalWorkingStatus/29 (read)NvM_CurrentBlockDescriptorPtr/32 (read)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_Async_CopyCrc/5 (addr)NvM_WriteBlock_Async_State3/9 (addr)
  Referring: NvM_WriteBlock_Async_State1/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteBlock_ProcessRedundantBlock/12 (402653184 (estimated locally),0.38 per call) NvM_CalculateCrc/46 (402653184 (estimated locally),0.38 per call) NvM_FillInternalBuffer/16 (535528735 (estimated locally),0.50 per call) NvM_SetPermanentRamBlockValid/30 (805306369 (estimated locally),0.75 per call) NvM_MirrorCopy/45 (536870913 (estimated locally),0.50 per call) NvM_GetDataAddress/44 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_Async_State1/7 (NvM_WriteBlock_Async_State1) @07212620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_MirrorRetryCount/41 (write)NvM_WriteRetryCount/35 (write)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_Async_State2/8 (addr)NvM_GlobalBlockNumber/27 (read)NvM_GlobalCallLevel/36 (write)NvM_CurrentFunctionPtr/37 (write)NvM_RestoreBlockDefaults_AscSt0/43 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_WritePRAMBlock_Async/4 (1073741824 (estimated locally),1.00 per call) NvM_WriteBlock_Async/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_GetUserRamBlockAddress/42 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteBlock_Async_Error/6 (NvM_WriteBlock_Async_Error) @07212380
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/32 (read)NvM_WriteRetryCount/35 (read)NvM_WriteRetryCount/35 (write)NvM_GlobalCallLevel/36 (read)NvM_CurrentFunctionPtr/37 (write)NvM_WriteBlock_Async_State3/9 (addr)NvM_WriteRetryCount/35 (write)
  Referring: NvM_WriteBlock_Async_State3/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_WriteBlock_ProcessJobRes_Async_State/10 (280472971 (estimated locally),0.26 per call) 
  Calls: NvM_WriteBlock_RedundantBlockError/14 (354334802 (estimated locally),0.33 per call) 
NvM_WriteBlock_Async_CopyCrc/5 (NvM_WriteBlock_Async_CopyCrc) @072121c0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/32 (read)NvM_CalcCrc_CalcBuffer/34 (addr)NvM_WriteBlock_Async_State3/9 (addr)
  Referring: NvM_WriteBlock_Async_State2/8 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteBlock_ProcessRedundantBlock/12 (1073741824 (estimated locally),1.00 per call) NvM_CopyCrc/33 (1073741824 (estimated locally),1.00 per call) NvM_CalcCrc_GetBlockCrcAddress/31 (1073741824 (estimated locally),1.00 per call) 
NvM_WritePRAMBlock_Async/4 (NvM_WritePRAMBlock_Async) @07212000
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/26 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_GlobalWorkingStatus/29 (read)
  Referring: NvM_ASR42_WritePRAMBlock/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteBlock_Async_State1/7 (1073741824 (estimated locally),1.00 per call) NvM_SetPermanentRamBlockValid/30 (354334802 (estimated locally),0.33 per call) NvM_CalcCrc_RemoveElement/28 (354334802 (estimated locally),0.33 per call) 
NvM_WriteBlock_Async/3 (NvM_WriteBlock_Async) @071e0540
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/26 (write)NvM_GlobalBlockNumber/27 (read)NvM_AdminBlockTable/21 (read)NvM_GlobalWorkingStatus/29 (read)
  Referring: NvM_ASR40_WriteBlock/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteBlock_Async_State1/7 (1073741824 (estimated locally),1.00 per call) NvM_SetPermanentRamBlockValid/30 (354334802 (estimated locally),0.33 per call) NvM_CalcCrc_RemoveElement/28 (354334802 (estimated locally),0.33 per call) 
NvM_ASR42_WritePRAMBlock/2 (NvM_ASR42_WritePRAMBlock) @071e0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (read)NvM_WritePRAMBlock_Async/4 (addr)NvM_AdminBlockTable/21 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/23 (524845004 (estimated locally),0.49 per call) NvM_Queue_InsertStandard/22 (31349706 (estimated locally),0.03 per call) NvM_CheckDataSetRomBlock/20 (256544238 (estimated locally),0.24 per call) NvM_CheckWriteProtection/19 (524845004 (estimated locally),0.49 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/18 (524845004 (estimated locally),0.49 per call) NvM_CheckCondWritePRAMBlock/25 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_WriteBlock/1 (NvM_ASR40_WriteBlock) @071e0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/21 (read)NvM_AdminBlockTable/21 (read)NvM_WriteBlock_Async/3 (addr)NvM_AdminBlockTable/21 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/23 (524845004 (estimated locally),0.49 per call) NvM_Queue_InsertStandard/22 (31349706 (estimated locally),0.03 per call) NvM_CheckDataSetRomBlock/20 (256544238 (estimated locally),0.24 per call) NvM_CheckWriteProtection/19 (524845004 (estimated locally),0.49 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/18 (524845004 (estimated locally),0.49 per call) NvM_CheckCondWriteBlock/17 (1073741824 (estimated locally),1.00 per call) 

;; Function NvM_WriteBlock_Async_Error (NvM_WriteBlock_Async_Error, funcdef_no=5, decl_uid=10855, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_WriteBlock_Async_Error/6
NvM_WriteBlock_Async_Error ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.5_1;
  unsigned char _2;
  unsigned char NvM_WriteRetryCount.6_3;
  unsigned char _4;
  unsigned char NvM_GlobalCallLevel.9_5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.5_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.5_1->writeRetryLimit;
  NvM_WriteRetryCount.6_3 = NvM_WriteRetryCount;
  if (_2 > NvM_WriteRetryCount.6_3)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 = NvM_WriteRetryCount.6_3 + 1;
  NvM_WriteRetryCount = _4;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.9_5 = NvM_GlobalCallLevel;
  _6 = (int) NvM_GlobalCallLevel.9_5;
  NvM_CurrentFunctionPtr[_6] = NvM_WriteBlock_Async_State3;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_WriteRetryCount = 1;
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_RedundantBlockError ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteBlock_ProcessRedundantBlock_State1 (NvM_WriteBlock_ProcessRedundantBlock_State1, funcdef_no=12, decl_uid=11033, cgraph_uid=14, symbol_order=13)

Modification phase of node NvM_WriteBlock_ProcessRedundantBlock_State1/13
NvM_WriteBlock_ProcessRedundantBlock_State1 ()
{
  MemIf_JobResultType Result;
  short unsigned int NvM_GlobalBlockNumber.78_1;
  int _2;
  unsigned char _3;
  unsigned char NvM_GlobalCallLevel.80_4;
  int _5;
  short unsigned int NvM_GlobalBlockNumber.81_6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  uint8 iftmp.77_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  Result_14 = Fee_GetJobResult ();
  # DEBUG Result => Result_14
  # DEBUG BEGIN_STMT
  if (Result_14 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (Result_14 == 0)
    goto <bb 5>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 5> [local count: 474808635]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.78_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.78_1;
  _3 = NvM_AdminBlockTable[_2].NvMDatasetBlockIndex;
  if (_3 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 237404317]:

  <bb 7> [local count: 474808635]:
  # iftmp.77_10 = PHI <1(5), 0(6)>
  NvM_AdminBlockTable[_2].NvMDatasetBlockIndex = iftmp.77_10;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.80_4 = NvM_GlobalCallLevel;
  _5 = (int) NvM_GlobalCallLevel.80_4;
  NvM_CurrentFunctionPtr[_5] = NvM_WriteBlock_Async_State3;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.81_6 = NvM_GlobalBlockNumber;
  _7 = (int) NvM_GlobalBlockNumber.81_6;
  _8 = NvM_AdminBlockTable[_7].NvMExtendedStatus;
  _9 = _8 & 239;
  NvM_AdminBlockTable[_7].NvMExtendedStatus = _9;
  return;

}



;; Function NvM_WriteBlock_MemIfReadBlock (NvM_WriteBlock_MemIfReadBlock, funcdef_no=14, decl_uid=11037, cgraph_uid=16, symbol_order=15)

Modification phase of node NvM_WriteBlock_MemIfReadBlock/15
NvM_WriteBlock_MemIfReadBlock ()
{
  const MemIf_StatusType Status;
  uint16 Length;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.71_1;
  long unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.73_5;
  long unsigned int _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int NvM_GlobalBlockNumber.74_9;
  int _10;
  unsigned char _11;
  short unsigned int _12;
  uint8 * _13;
  unsigned char _14;
  unsigned char NvM_GlobalCallLevel.75_15;
  int _16;
  unsigned char NvM_GlobalCallLevel.76_17;
  int _18;
  unsigned char _34;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.71_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.71_1->blockDesc;
  _3 = NvM_CurrentBlockDescriptorPtr.71_1->nvBlockLength;
  _4 = NvM_GetBlockLength (_2, _3);
  NvM_CurrentBlockDescriptorPtr.73_5 = NvM_CurrentBlockDescriptorPtr;
  _6 = NvM_CurrentBlockDescriptorPtr.73_5->blockDesc;
  _7 = NvM_GetBlockCRCLength (_6);
  _8 = (short unsigned int) _7;
  Length_23 = _4 + _8;
  # DEBUG Length => Length_23
  # DEBUG BEGIN_STMT
  Status_25 = Fee_GetStatus ();
  # DEBUG Status => Status_25
  # DEBUG BEGIN_STMT
  if (Status_25 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.74_9 = NvM_GlobalBlockNumber;
  _10 = (int) NvM_GlobalBlockNumber.74_9;
  _11 = NvM_AdminBlockTable[_10].NvMExtendedStatus;
  _34 = _11 & 16;
  if (_34 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 4> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  _12 = NvM_GetMergedBlockNumber ();
  _13 = NvM_GetBufferAddress ();
  _14 = Fee_Read (_12, 0, _13, Length_23);
  if (_14 == 0)
    goto <bb 5>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 5> [local count: 80717468]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.75_15 = NvM_GlobalCallLevel;
  _16 = (int) NvM_GlobalCallLevel.75_15;
  NvM_CurrentFunctionPtr[_16] = NvM_WriteBlock_ProcessRedundantBlock_State1;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 39756365]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.76_17 = NvM_GlobalCallLevel;
  _18 = (int) NvM_GlobalCallLevel.76_17;
  NvM_CurrentFunctionPtr[_18] = NvM_WriteBlock_MemIfReadBlock;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteBlock_Async_State3 (NvM_WriteBlock_Async_State3, funcdef_no=8, decl_uid=10865, cgraph_uid=10, symbol_order=9)

Modification phase of node NvM_WriteBlock_Async_State3/9
NvM_WriteBlock_Async_State3 ()
{
  unsigned char NvM_CurrentServiceId.30_1;
  short unsigned int NvM_GlobalGenericStatus.31_2;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.32_5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned int _8;
  unsigned char _9;
  short unsigned int _10;
  uint8 * _11;
  unsigned char _12;
  unsigned char NvM_GlobalCallLevel.35_13;
  int _14;
  unsigned char NvM_GlobalCallLevel.36_15;
  int _16;
  short unsigned int _25;
  short unsigned int _26;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId.30_1 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.30_1 == 13)
    goto <bb 3>; [51.12%]
  else
    goto <bb 7>; [48.88%]

  <bb 3> [local count: 548896821]:
  NvM_GlobalGenericStatus.31_2 = NvM_GlobalGenericStatus;
  _25 = NvM_GlobalGenericStatus.31_2 & 2;
  if (_25 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 274448410]:
  NvM_CurrentBlockDescriptorPtr.32_5 = NvM_CurrentBlockDescriptorPtr;
  _6 = NvM_CurrentBlockDescriptorPtr.32_5->blockDesc;
  _7 = _6 >> 7;
  _8 = _7 & 3;
  if (_8 != 1)
    goto <bb 6>; [48.88%]
  else
    goto <bb 5>; [51.12%]

  <bb 5> [local count: 140298027]:
  _26 = NvM_GlobalGenericStatus.31_2 & 256;
  if (_26 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 204299396]:
  NvM_WriteBlock_Async_State3.part.0 ();
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 869442428]:
  # DEBUG BEGIN_STMT
  _9 = Fee_GetStatus ();
  if (_9 != 2)
    goto <bb 8>; [48.88%]
  else
    goto <bb 11>; [51.12%]

  <bb 8> [local count: 424983458]:
  # DEBUG BEGIN_STMT
  _10 = NvM_GetMergedBlockNumber ();
  _11 = NvM_GetBufferAddress ();
  _12 = Fee_Write (_10, _11);
  if (_12 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 212491729]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.35_13 = NvM_GlobalCallLevel;
  _14 = (int) NvM_GlobalCallLevel.35_13;
  NvM_CurrentFunctionPtr[_14] = NvM_WriteBlock_ProcessJobRes_Async_State;
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 212491729]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.36_15 = NvM_GlobalCallLevel;
  _16 = (int) NvM_GlobalCallLevel.36_15;
  NvM_CurrentFunctionPtr[_16] = NvM_WriteBlock_Async_Error;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 444458969]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;

  <bb 12> [local count: 1073741824]:
  return;

}



;; Function NvM_ASR40_WriteBlock (NvM_ASR40_WriteBlock, funcdef_no=0, decl_uid=8980, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_ASR40_WriteBlock/1
NvM_ASR40_WriteBlock (NvM_ASR40_BlockIdType BlockId, const void * NvM_SrcPtr)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  unsigned char _1;
  unsigned char _2;
  int _3;
  short unsigned int _4;
  unsigned char _5;
  short unsigned int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG ReportWriteOnceUnknown => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_13 = NvM_CheckCondWriteBlock (BlockId_10(D), NvM_SrcPtr_11(D));
  # DEBUG BlockIndex => BlockIndex_13
  # DEBUG BEGIN_STMT
  if (BlockIndex_13 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 10>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = NvM_CheckWriteProtection (BlockIndex_13);
  if (_1 == 1)
    goto <bb 9>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 4> [local count: 256544238]:
  # DEBUG BEGIN_STMT
  _2 = NvM_CheckDataSetRomBlock (BlockIndex_13);
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 5> [local count: 128272119]:
  _3 = (int) BlockIndex_13;
  _4 = NvM_AdminBlockTable[_3].NvMDynStatus;
  _21 = _4 & 8;
  if (_21 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 64136059]:
  # DEBUG BEGIN_STMT
  _5 = NvM_AdminBlockTable[_3].NvMResult;
  if (_5 != 2)
    goto <bb 7>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 7> [local count: 31349706]:
  # DEBUG BEGIN_STMT
  Result_18 = NvM_Queue_InsertStandard (BlockIndex_13, NvM_SrcPtr_11(D), NvM_WriteBlock_Async);
  # DEBUG Result => Result_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_18 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 15674853]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMCurrentServiceId = 7;

  <bb 9> [local count: 524845004]:
  # Result_22 = PHI <Result_18(7), 0(8), 1(3), 1(6), 1(5), 1(4)>
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # Result_6 = PHI <1(2), Result_22(9)>
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function NvM_ASR42_WritePRAMBlock (NvM_ASR42_WritePRAMBlock, funcdef_no=1, decl_uid=8987, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_ASR42_WritePRAMBlock/2
NvM_ASR42_WritePRAMBlock (NvM_ASR42_BlockIdType BlockId)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  unsigned char _1;
  unsigned char _2;
  int _3;
  short unsigned int _4;
  unsigned char _5;
  short unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG ReportWriteOnceUnknown => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_12 = NvM_CheckCondWritePRAMBlock (BlockId_10(D));
  # DEBUG BlockIndex => BlockIndex_12
  # DEBUG BEGIN_STMT
  if (BlockIndex_12 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 10>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = NvM_CheckWriteProtection (BlockIndex_12);
  if (_1 == 1)
    goto <bb 9>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 4> [local count: 256544238]:
  # DEBUG BEGIN_STMT
  _2 = NvM_CheckDataSetRomBlock (BlockIndex_12);
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 5> [local count: 128272119]:
  _3 = (int) BlockIndex_12;
  _4 = NvM_AdminBlockTable[_3].NvMDynStatus;
  _20 = _4 & 8;
  if (_20 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 64136059]:
  # DEBUG BEGIN_STMT
  _5 = NvM_AdminBlockTable[_3].NvMResult;
  if (_5 != 2)
    goto <bb 7>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 7> [local count: 31349706]:
  # DEBUG BEGIN_STMT
  Result_17 = NvM_Queue_InsertStandard (BlockIndex_12, 0B, NvM_WritePRAMBlock_Async);
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_17 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 15674853]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMCurrentServiceId = 23;

  <bb 9> [local count: 524845004]:
  # Result_21 = PHI <Result_17(7), 0(8), 1(3), 1(6), 1(5), 1(4)>
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # Result_6 = PHI <1(2), Result_21(9)>
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function NvM_WriteBlock_Async_State1 (NvM_WriteBlock_Async_State1, funcdef_no=6, decl_uid=10861, cgraph_uid=8, symbol_order=7)

Modification phase of node NvM_WriteBlock_Async_State1/7
NvM_WriteBlock_Async_State1 ()
{
  uint8 * TempUserRamAddress;
  unsigned char NvM_GlobalCallLevel.16_1;
  int _2;
  short unsigned int NvM_GlobalBlockNumber.17_3;
  unsigned char _4;
  int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount = 0;
  # DEBUG BEGIN_STMT
  TempUserRamAddress_10 = NvM_GetUserRamBlockAddress ();
  # DEBUG TempUserRamAddress => TempUserRamAddress_10
  # DEBUG BEGIN_STMT
  if (TempUserRamAddress_10 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_WriteRetryCount = 1;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.16_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.16_1;
  NvM_CurrentFunctionPtr[_2] = NvM_WriteBlock_Async_State2;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.17_3 = NvM_GlobalBlockNumber;
  if (NvM_GlobalBlockNumber.17_3 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = NvM_GlobalCallLevel.16_1 + 1;
  NvM_GlobalCallLevel = _4;
  # DEBUG BEGIN_STMT
  _5 = (int) _4;
  NvM_CurrentFunctionPtr[_5] = NvM_RestoreBlockDefaults_AscSt0;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteBlock_Async (NvM_WriteBlock_Async, funcdef_no=2, decl_uid=10849, cgraph_uid=4, symbol_order=3)

Modification phase of node NvM_WriteBlock_Async/3
NvM_WriteBlock_Async ()
{
  short unsigned int NvM_GlobalBlockNumber.0_1;
  int _2;
  unsigned char _3;
  short unsigned int NvM_GlobalWorkingStatus.1_4;
  unsigned char _12;
  short unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 7;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.0_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.0_1;
  _3 = NvM_AdminBlockTable[_2].NvMExtendedStatus;
  _12 = _3 & 2;
  if (_12 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.1_4 = NvM_GlobalWorkingStatus;
  _13 = NvM_GlobalWorkingStatus.1_4 & 4096;
  if (_13 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockValid ();

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_Async_State1 ();
  return;

}



;; Function NvM_WritePRAMBlock_Async (NvM_WritePRAMBlock_Async, funcdef_no=3, decl_uid=10851, cgraph_uid=5, symbol_order=4)

Modification phase of node NvM_WritePRAMBlock_Async/4
NvM_WritePRAMBlock_Async ()
{
  short unsigned int NvM_GlobalBlockNumber.2_1;
  int _2;
  unsigned char _3;
  short unsigned int NvM_GlobalWorkingStatus.3_4;
  unsigned char _12;
  short unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 23;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.2_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.2_1;
  _3 = NvM_AdminBlockTable[_2].NvMExtendedStatus;
  _12 = _3 & 2;
  if (_12 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.3_4 = NvM_GlobalWorkingStatus;
  _13 = NvM_GlobalWorkingStatus.3_4 & 4096;
  if (_13 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockValid ();

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_Async_State1 ();
  return;

}



;; Function NvM_WriteBlock_ProcessJobRes (NvM_WriteBlock_ProcessJobRes, funcdef_no=10, decl_uid=10869, cgraph_uid=12, symbol_order=11)

Modification phase of node NvM_WriteBlock_ProcessJobRes/11
NvM_WriteBlock_ProcessJobRes ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.38_1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _4;
  short unsigned int NvM_GlobalBlockNumber.40_5;
  int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  short unsigned int NvM_GlobalGenericStatus.44_10;
  short unsigned int _11;
  long unsigned int _12;
  uint8 * _13;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.46_14;
  long unsigned int _15;
  uint8 iftmp.39_16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.38_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.38_1->blockDesc;
  _3 = _2 >> 7;
  _4 = _3 & 3;
  if (_4 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.40_5 = NvM_GlobalBlockNumber;
  _6 = (int) NvM_GlobalBlockNumber.40_5;
  _7 = NvM_AdminBlockTable[_6].NvMDatasetBlockIndex;
  if (_7 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 182536110]:

  <bb 5> [local count: 365072220]:
  # iftmp.39_16 = PHI <1(3), 0(4)>
  NvM_AdminBlockTable[_6].NvMDatasetBlockIndex = iftmp.39_16;
  # DEBUG BEGIN_STMT
  _8 = NvM_AdminBlockTable[_6].NvMExtendedStatus;
  _9 = _8 & 247;
  NvM_AdminBlockTable[_6].NvMExtendedStatus = _9;
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.44_10 = NvM_GlobalGenericStatus;
  _11 = NvM_GlobalGenericStatus.44_10 & 65279;
  NvM_GlobalGenericStatus = _11;
  # DEBUG BEGIN_STMT
  NvM_WriteRetryCount = 1;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _12 = _2 & 8;
  if (_12 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _13 = NvM_GetStoredRamCRCAddress ();
  NvM_CurrentBlockDescriptorPtr.46_14 = NvM_CurrentBlockDescriptorPtr;
  _15 = NvM_CurrentBlockDescriptorPtr.46_14->blockDesc;
  NvM_CopyCrc (_13, &NvM_CalcCrc_CalcBuffer, _15);

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  return;

}



;; Function NvM_WriteBlock_ProcessJobRes_Async_State (NvM_WriteBlock_ProcessJobRes_Async_State, funcdef_no=9, decl_uid=10867, cgraph_uid=11, symbol_order=10)

Modification phase of node NvM_WriteBlock_ProcessJobRes_Async_State/10
NvM_WriteBlock_ProcessJobRes_Async_State ()
{
  const MemIf_JobResultType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Result_3 = Fee_GetJobResult ();
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  if (Result_3 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_ProcessJobRes ();
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Result_3 == 3)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  NvM_WriteBlock_ProcessJobRes_Async_State.part.0 ();
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  if (Result_3 == 2)
    goto <bb 7>; [51.12%]
  else
    goto <bb 8>; [48.88%]

  <bb 7> [local count: 293326070]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 280472971]:
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_Async_Error ();

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_ProcessRedundantBlock, funcdef_no=11, decl_uid=10853, cgraph_uid=13, symbol_order=12)

Modification phase of node NvM_WriteBlock_ProcessRedundantBlock/12
NvM_WriteBlock_ProcessRedundantBlock (void (*NvM_CurrentFunctionPtrType) (void) NextState)
{
  unsigned char NvM_GlobalCallLevel.47_1;
  int _2;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.48_3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned int _6;
  short unsigned int NvM_GlobalWorkingStatus.49_7;
  short unsigned int NvM_GlobalBlockNumber.50_8;
  int _9;
  unsigned char _10;
  short unsigned int NvM_GlobalBlockNumber.52_11;
  int _12;
  unsigned char NvM_CurrentServiceId.54_13;
  long unsigned int _14;
  short unsigned int _15;
  unsigned char _16;
  int _17;
  short unsigned int NvM_GlobalGenericStatus.60_18;
  short unsigned int _19;
  short unsigned int NvM_GlobalBlockNumber.62_20;
  int _21;
  unsigned char _22;
  short unsigned int NvM_GlobalGenericStatus.63_23;
  short unsigned int _24;
  short unsigned int NvM_GlobalBlockNumber.65_25;
  int _26;
  unsigned char _27;
  unsigned char _28;
  unsigned char _29;
  unsigned char _30;
  uint8 iftmp.64_31;
  unsigned char _43;
  short unsigned int _46;
  unsigned char _51;
  unsigned char _52;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG writeBoth => 0
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.47_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.47_1;
  NvM_CurrentFunctionPtr[_2] = NextState_36(D);
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.48_3 = NvM_CurrentBlockDescriptorPtr;
  _4 = NvM_CurrentBlockDescriptorPtr.48_3->blockDesc;
  _5 = _4 >> 7;
  _6 = _5 & 3;
  if (_6 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMValid = 0;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.49_7 = NvM_GlobalWorkingStatus;
  _15 = NvM_GlobalWorkingStatus.49_7 & 128;
  if (_15 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 182536110]:
  NvM_GlobalBlockNumber.50_8 = NvM_GlobalBlockNumber;
  _9 = (int) NvM_GlobalBlockNumber.50_8;
  _10 = NvM_AdminBlockTable[_9].NvMExtendedStatus;
  _43 = _10 & 4;
  if (_43 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_9].NvMDatasetBlockIndex = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.52_11 = NvM_GlobalBlockNumber;
  _12 = (int) NvM_GlobalBlockNumber.52_11;
  NvM_AdminBlockTable[_12].NvMDatasetBlockIndex = 0;

  <bb 7> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _46 = NvM_GlobalWorkingStatus.49_7 & 1;
  if (_46 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 182536110]:
  NvM_CurrentServiceId.54_13 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.54_13 == 7)
    goto <bb 12>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 120473832]:
  if (NvM_CurrentServiceId.54_13 == 23)
    goto <bb 12>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 79512729]:
  _14 = _4 & 4194304;
  if (_14 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 39756365]:
  # DEBUG writeBoth => 0
  # DEBUG BEGIN_STMT
  if (_15 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 325315855]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = NvM_GlobalCallLevel.47_1 + 1;
  NvM_GlobalCallLevel = _16;
  # DEBUG BEGIN_STMT
  _17 = (int) _16;
  NvM_CurrentFunctionPtr[_17] = NextState_36(D);
  # DEBUG BEGIN_STMT
  # DEBUG writeBoth => 1
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.60_18 = NvM_GlobalGenericStatus;
  _19 = NvM_GlobalGenericStatus.60_18 | 256;
  NvM_GlobalGenericStatus = _19;
  # DEBUG writeBoth => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 13> [local count: 19878182]:
  NvM_GlobalBlockNumber.62_20 = NvM_GlobalBlockNumber;
  _21 = (int) NvM_GlobalBlockNumber.62_20;
  _22 = NvM_AdminBlockTable[_21].NvMExtendedStatus;
  _51 = _22 & 8;
  if (_51 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 14> [local count: 29817274]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.63_23 = NvM_GlobalGenericStatus;
  _24 = NvM_GlobalGenericStatus.63_23 | 256;
  NvM_GlobalGenericStatus = _24;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.65_25 = NvM_GlobalBlockNumber;
  _26 = (int) NvM_GlobalBlockNumber.65_25;
  _27 = NvM_AdminBlockTable[_26].NvMDatasetBlockIndex;
  if (_27 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 14908637]:

  <bb 16> [local count: 29817273]:
  # iftmp.64_31 = PHI <1(14), 0(15)>
  NvM_AdminBlockTable[_26].NvMDatasetBlockIndex = iftmp.64_31;
  # DEBUG BEGIN_STMT
  _28 = NvM_AdminBlockTable[_26].NvMExtendedStatus;
  _52 = _28 & 8;
  if (_52 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 17> [local count: 14908637]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_26].NvMDatasetBlockIndex = 1;

  <bb 18> [local count: 29817273]:
  # DEBUG BEGIN_STMT
  _29 = NvM_AdminBlockTable[_26].NvMExtendedStatus;
  _30 = _29 | 16;
  NvM_AdminBlockTable[_26].NvMExtendedStatus = _30;
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_MemIfReadBlock ();

  <bb 19> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteBlock_Async_CopyCrc (NvM_WriteBlock_Async_CopyCrc, funcdef_no=4, decl_uid=10857, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_WriteBlock_Async_CopyCrc/5
NvM_WriteBlock_Async_CopyCrc ()
{
  uint8 * _1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.4_2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = NvM_CalcCrc_GetBlockCrcAddress ();
  NvM_CurrentBlockDescriptorPtr.4_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.4_2->blockDesc;
  NvM_CopyCrc (_1, &NvM_CalcCrc_CalcBuffer, _3);
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_Async_State3);
  return;

}



;; Function NvM_WriteBlock_Async_State2 (NvM_WriteBlock_Async_State2, funcdef_no=7, decl_uid=10863, cgraph_uid=9, symbol_order=8)

Modification phase of node NvM_WriteBlock_Async_State2/8
NvM_WriteBlock_Async_State2 ()
{
  Std_ReturnType ReturnVal;
  uint8 * BufferAddr;
  short unsigned int NvM_GlobalWorkingStatus.21_1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.22_2;
  Std_ReturnType (*<Taeb>) (void *) _3;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.23_4;
  long unsigned int _5;
  long unsigned int _6;
  short unsigned int NvM_GlobalWorkingStatus.24_7;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.25_8;
  long unsigned int _9;
  unsigned int _10;
  unsigned char NvM_GlobalCallLevel.26_11;
  int _12;
  short unsigned int _18;
  short unsigned int _26;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  BufferAddr_17 = NvM_GetDataAddress ();
  # DEBUG BufferAddr => BufferAddr_17
  # DEBUG BEGIN_STMT
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.21_1 = NvM_GlobalWorkingStatus;
  _18 = NvM_GlobalWorkingStatus.21_1 & 4096;
  if (_18 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.22_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.22_2->writeRamToNvCallback;
  ReturnVal_20 = NvM_MirrorCopy (0B, _3, BufferAddr_17);
  # DEBUG ReturnVal => ReturnVal_20
  # DEBUG BEGIN_STMT
  if (ReturnVal_20 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 4> [local count: 805306369]:
  # DEBUG ReturnVal => NULL
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockValid ();
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.23_4 = NvM_CurrentBlockDescriptorPtr;
  _5 = NvM_CurrentBlockDescriptorPtr.23_4->blockDesc;
  _6 = _5 & 8192;
  if (_6 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 539555267]:
  NvM_GlobalWorkingStatus.24_7 = NvM_GlobalWorkingStatus;
  _26 = NvM_GlobalWorkingStatus.24_7 & 4096;
  if (_26 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 535528735]:
  # DEBUG BEGIN_STMT
  NvM_FillInternalBuffer ();

  <bb 7> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.25_8 = NvM_CurrentBlockDescriptorPtr;
  _9 = NvM_CurrentBlockDescriptorPtr.25_8->blockDesc;
  _10 = _9 & 7;
  if (_10 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.26_11 = NvM_GlobalCallLevel;
  _12 = (int) NvM_GlobalCallLevel.26_11;
  NvM_CurrentFunctionPtr[_12] = NvM_WriteBlock_Async_CopyCrc;
  # DEBUG BEGIN_STMT
  NvM_CalculateCrc (BufferAddr_17);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  NvM_WriteBlock_ProcessRedundantBlock (NvM_WriteBlock_Async_State3);

  <bb 10> [local count: 1073741824]:
  return;

}


