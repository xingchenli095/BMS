
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75:
  Jump functions of caller  NvM_InvalidateNvBlock_Async_State1.part.0/74:
  Jump functions of caller  NvM_EraseNvBlock_Async_State1.part.0/73:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/72:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/71:
  Jump functions of caller  NvM_CopyCrc/69:
  Jump functions of caller  NvM_GetStoredRamCRCAddress/68:
  Jump functions of caller  NvM_CalculateCrc/67:
  Jump functions of caller  NvM_MirrorCopy/66:
  Jump functions of caller  NvM_GetUserRamBlockAddress/64:
  Jump functions of caller  NvM_CheckCondCancelJobs/62:
  Jump functions of caller  NvM_CalcCrc_EnqueueElement/61:
  Jump functions of caller  Fee_InvalidateBlock/60:
  Jump functions of caller  NvM_CheckCondInvalidateNvBlock/59:
  Jump functions of caller  NvM_StateMachine_RedundantBlockError/58:
  Jump functions of caller  NvM_StateMachine_ProcessJobResult/57:
  Jump functions of caller  Fee_EraseImmediateBlock/56:
  Jump functions of caller  NvM_GetMergedBlockNumber/55:
  Jump functions of caller  Fee_GetStatus/54:
  Jump functions of caller  NvM_StateMachine_ProcessRedundantBlock/53:
  Jump functions of caller  NvM_Queue_InsertStandard/52:
  Jump functions of caller  NvM_CheckDataSetRomBlock/51:
  Jump functions of caller  NvM_CheckWriteProtection/50:
  Jump functions of caller  NvM_CheckCondEraseNvBlock/49:
  Jump functions of caller  Det_ASR40_ReportError/48:
  Jump functions of caller  NvM_GetBlockIndexForValidId/47:
  Jump functions of caller  NvM_InvokeSingleBlockCallback/46:
  Jump functions of caller  NvM_Queue_RemoveFirstItem/44:
  Jump functions of caller  NvM_PostService_Function/43:
  Jump functions of caller  NvM_ProcessStandardPriorityJob/41:
  Jump functions of caller  NvM_PreService_Function/40:
  Jump functions of caller  NvM_StateMachine_SetNextRequest/39:
  Jump functions of caller  Nvm_Queue_CheckEmpty/38:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34:
  Jump functions of caller  NvM_InitStoredCrcBuf/26:
  Jump functions of caller  NvM_SetRamBlockStatus_Async_CalcCrc_End/21:
  Jump functions of caller  NvM_SetRamBlockStatus_Async_CalcCrc_Start/20:
    callsite  NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 -> NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 : 
  Jump functions of caller  NvM_EraseNvBlock_Async_State1/19:
    callsite  NvM_EraseNvBlock_Async_State1/19 -> NvM_EraseNvBlock_Async_State1.part.0/73 : 
  Jump functions of caller  NvM_EraseNvBlock_Async/18:
  Jump functions of caller  NvM_InvalidateNvBlock_Async_State1/17:
    callsite  NvM_InvalidateNvBlock_Async_State1/17 -> NvM_InvalidateNvBlock_Async_State1.part.0/74 : 
  Jump functions of caller  NvM_InvalidateNvBlock_Async/16:
  Jump functions of caller  NvM_JobErrorNotification/15:
  Jump functions of caller  NvM_JobEndNotification/14:
  Jump functions of caller  NvM_ASR40_CancelJobs/13:
  Jump functions of caller  NvM_SetBlockLockStatus/12:
  Jump functions of caller  NvM_ASR40_SetRamBlockStatus/11:
  Jump functions of caller  NvM_ASR40_SetBlockProtection/10:
  Jump functions of caller  NvM_ASR40_InvalidateNvBlock/9:
  Jump functions of caller  NvM_ASR40_EraseNvBlock/8:
  Jump functions of caller  NvM_ASR40_GetDataIndex/7:
  Jump functions of caller  NvM_ASR40_SetDataIndex/6:
  Jump functions of caller  NvM_ASR40_GetErrorStatus/5:
  Jump functions of caller  NvM_ProcessBlockCallback/4:
  Jump functions of caller  NvM_ProcessCanceledJob/3:
  Jump functions of caller  NvM_MainFunction/2:
    callsite  NvM_MainFunction/2 -> NvM_ProcessBlockCallback/4 : 
    callsite  NvM_MainFunction/2 -> NvM_ProcessCanceledJob/3 : 
    indirect simple callsite, calling param -1, offset 0, for stmt _9 ();
  Jump functions of caller  NvM_Init/1:

 Propagating constants:

Not considering NvM_SetRamBlockStatus_Async_CalcCrc_End for cloning; -fipa-cp-clone disabled.
Not considering NvM_SetRamBlockStatus_Async_CalcCrc_Start for cloning; -fipa-cp-clone disabled.
Not considering NvM_EraseNvBlock_Async_State1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_EraseNvBlock_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_InvalidateNvBlock_Async_State1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_InvalidateNvBlock_Async for cloning; -fipa-cp-clone disabled.
Function NvM_JobErrorNotification/15 is not versionable, reason: not a tree_versionable_function.
Not considering NvM_JobEndNotification for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_CancelJobs for cloning; -fipa-cp-clone disabled.
Not considering NvM_SetBlockLockStatus for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_SetRamBlockStatus for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_SetBlockProtection for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_InvalidateNvBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_EraseNvBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_GetDataIndex for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_SetDataIndex for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_GetErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering NvM_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering NvM_Init for cloning; -fipa-cp-clone disabled.

overall_size: 692, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75:
  Node: NvM_InvalidateNvBlock_Async_State1.part.0/74:
  Node: NvM_EraseNvBlock_Async_State1.part.0/73:
  Node: NvM_SetRamBlockStatus_Async_CalcCrc_End/21:
  Node: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20:
  Node: NvM_EraseNvBlock_Async_State1/19:
  Node: NvM_EraseNvBlock_Async/18:
  Node: NvM_InvalidateNvBlock_Async_State1/17:
  Node: NvM_InvalidateNvBlock_Async/16:
  Node: NvM_JobErrorNotification/15:
  Node: NvM_JobEndNotification/14:
  Node: NvM_ASR40_CancelJobs/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_SetBlockLockStatus/12:
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
  Node: NvM_ASR40_SetRamBlockStatus/11:
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
  Node: NvM_ASR40_SetBlockProtection/10:
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
  Node: NvM_ASR40_InvalidateNvBlock/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_ASR40_EraseNvBlock/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_ASR40_GetDataIndex/7:
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
  Node: NvM_ASR40_SetDataIndex/6:
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
  Node: NvM_ASR40_GetErrorStatus/5:
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
  Node: NvM_ProcessBlockCallback/4:
  Node: NvM_ProcessCanceledJob/3:
  Node: NvM_MainFunction/2:
  Node: NvM_Init/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 (NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0) @0725f9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_MirrorRetryCount/27 (read)NvM_GlobalCallLevel/37 (read)NvM_CurrentFunctionPtr/42 (write)NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (268435457 (estimated locally),0.25 per call) 
  Calls: 
NvM_InvalidateNvBlock_Async_State1.part.0/74 (NvM_InvalidateNvBlock_Async_State1.part.0) @071ccb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalCallLevel/37 (read)NvM_CurrentFunctionPtr/42 (write)NvM_StateMachine_ProcessJobResult/57 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_InvalidateNvBlock_Async_State1/17 (524845000 (estimated locally),0.49 per call) 
  Calls: NvM_GetMergedBlockNumber/55 (1073741824 (estimated locally),1.00 per call) Fee_InvalidateBlock/60 (1073741824 (estimated locally),1.00 per call) NvM_StateMachine_RedundantBlockError/58 (354334802 (estimated locally),0.33 per call) 
NvM_EraseNvBlock_Async_State1.part.0/73 (NvM_EraseNvBlock_Async_State1.part.0) @06e35e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalCallLevel/37 (read)NvM_CurrentFunctionPtr/42 (write)NvM_StateMachine_ProcessJobResult/57 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_EraseNvBlock_Async_State1/19 (524845000 (estimated locally),0.49 per call) 
  Calls: NvM_GetMergedBlockNumber/55 (1073741824 (estimated locally),1.00 per call) Fee_EraseImmediateBlock/56 (1073741824 (estimated locally),1.00 per call) NvM_StateMachine_RedundantBlockError/58 (354334802 (estimated locally),0.33 per call) 
NvM_CalcCrc_RemoveElement/72 (NvM_CalcCrc_RemoveElement) @0723fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_TerminateCurrentLevel/71 (NvM_StateMachine_TerminateCurrentLevel) @0723f9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CalcCrc_CalcBuffer/70 (NvM_CalcCrc_CalcBuffer) @0723cc60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (addr)
  Availability: not_available
  Varpool flags:
NvM_CopyCrc/69 (NvM_CopyCrc) @0723f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetStoredRamCRCAddress/68 (NvM_GetStoredRamCRCAddress) @0723f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CalculateCrc/67 (NvM_CalculateCrc) @0723f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (805306369 (estimated locally),0.75 per call) 
  Calls: 
NvM_MirrorCopy/66 (NvM_MirrorCopy) @0723f460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_CurrentBlockDescriptorPtr/65 (NvM_CurrentBlockDescriptorPtr) @0723c948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (read)NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (read)
  Availability: not_available
  Varpool flags:
NvM_GetUserRamBlockAddress/64 (NvM_GetUserRamBlockAddress) @0723f380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_Queue_Standard/63 (NvM_Queue_Standard) @0723c318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ASR40_CancelJobs/13 (read)NvM_ASR40_CancelJobs/13 (read)NvM_ASR40_CancelJobs/13 (write)NvM_ASR40_CancelJobs/13 (read)NvM_ASR40_CancelJobs/13 (write)
  Availability: not_available
  Varpool flags:
NvM_CheckCondCancelJobs/62 (NvM_CheckCondCancelJobs) @0722bb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_CancelJobs/13 (1047196343 (estimated locally),1.00 per call) 
  Calls: 
NvM_CalcCrc_EnqueueElement/61 (NvM_CalcCrc_EnqueueElement) @0722bc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_SetRamBlockStatus/11 (6600033 (estimated locally),0.01 per call) 
  Calls: 
Fee_InvalidateBlock/60 (Fee_InvalidateBlock) @0722b700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InvalidateNvBlock_Async_State1.part.0/74 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CheckCondInvalidateNvBlock/59 (NvM_CheckCondInvalidateNvBlock) @0722b460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_InvalidateNvBlock/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_RedundantBlockError/58 (NvM_StateMachine_RedundantBlockError) @0722b2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InvalidateNvBlock_Async_State1.part.0/74 (354334802 (estimated locally),0.33 per call) NvM_EraseNvBlock_Async_State1.part.0/73 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_StateMachine_ProcessJobResult/57 (NvM_StateMachine_ProcessJobResult) @0722b1c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_EraseNvBlock_Async_State1.part.0/73 (addr)NvM_InvalidateNvBlock_Async_State1.part.0/74 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Fee_EraseImmediateBlock/56 (Fee_EraseImmediateBlock) @0722b0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_EraseNvBlock_Async_State1.part.0/73 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetMergedBlockNumber/55 (NvM_GetMergedBlockNumber) @0722b000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InvalidateNvBlock_Async_State1.part.0/74 (1073741824 (estimated locally),1.00 per call) NvM_EraseNvBlock_Async_State1.part.0/73 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_GetStatus/54 (Fee_GetStatus) @071fb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InvalidateNvBlock_Async_State1/17 (1073741824 (estimated locally),1.00 per call) NvM_EraseNvBlock_Async_State1/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_ProcessRedundantBlock/53 (NvM_StateMachine_ProcessRedundantBlock) @071fbe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InvalidateNvBlock_Async/16 (1073741824 (estimated locally),1.00 per call) NvM_EraseNvBlock_Async/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_Queue_InsertStandard/52 (NvM_Queue_InsertStandard) @071fbc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_InvalidateNvBlock/9 (31349706 (estimated locally),0.03 per call) NvM_ASR40_EraseNvBlock/8 (31349706 (estimated locally),0.03 per call) 
  Calls: 
NvM_CheckDataSetRomBlock/51 (NvM_CheckDataSetRomBlock) @071fbb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_InvalidateNvBlock/9 (256544238 (estimated locally),0.24 per call) NvM_ASR40_EraseNvBlock/8 (256544238 (estimated locally),0.24 per call) 
  Calls: 
NvM_CheckWriteProtection/50 (NvM_CheckWriteProtection) @071fba80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_InvalidateNvBlock/9 (524845004 (estimated locally),0.49 per call) NvM_ASR40_EraseNvBlock/8 (524845004 (estimated locally),0.49 per call) 
  Calls: 
NvM_CheckCondEraseNvBlock/49 (NvM_CheckCondEraseNvBlock) @071fb9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_EraseNvBlock/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/48 (Det_ASR40_ReportError) @071fb540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetBlockLockStatus/12 (116136926 (estimated locally),0.11 per call) NvM_SetBlockLockStatus/12 (145607981 (estimated locally),0.14 per call) NvM_SetBlockLockStatus/12 (354334802 (estimated locally),0.33 per call) NvM_ASR40_SetRamBlockStatus/11 (151028498 (estimated locally),0.14 per call) NvM_ASR40_SetRamBlockStatus/11 (116136926 (estimated locally),0.11 per call) NvM_ASR40_SetRamBlockStatus/11 (282617438 (estimated locally),0.26 per call) NvM_ASR40_SetRamBlockStatus/11 (217325345 (estimated locally),0.20 per call) NvM_ASR40_SetBlockProtection/10 (189353683 (estimated locally),0.18 per call) NvM_ASR40_SetBlockProtection/10 (282617438 (estimated locally),0.26 per call) NvM_ASR40_SetBlockProtection/10 (217325345 (estimated locally),0.20 per call) NvM_ASR40_GetDataIndex/7 (231586532 (estimated locally),0.22 per call) NvM_ASR40_GetDataIndex/7 (100013173 (estimated locally),0.09 per call) NvM_ASR40_GetDataIndex/7 (282617438 (estimated locally),0.26 per call) NvM_ASR40_GetDataIndex/7 (217325345 (estimated locally),0.20 per call) NvM_ASR40_SetDataIndex/6 (39777362 (estimated locally),0.04 per call) NvM_ASR40_SetDataIndex/6 (96797603 (estimated locally),0.09 per call) NvM_ASR40_SetDataIndex/6 (280472971 (estimated locally),0.26 per call) NvM_ASR40_SetDataIndex/6 (145607981 (estimated locally),0.14 per call) NvM_ASR40_SetDataIndex/6 (354334802 (estimated locally),0.33 per call) NvM_ASR40_GetErrorStatus/5 (111737385 (estimated locally),0.10 per call) NvM_ASR40_GetErrorStatus/5 (315747742 (estimated locally),0.29 per call) NvM_ASR40_GetErrorStatus/5 (116930485 (estimated locally),0.11 per call) 
  Calls: 
NvM_GetBlockIndexForValidId/47 (NvM_GetBlockIndexForValidId) @071fb460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_SetBlockLockStatus/12 (1073741823 (estimated locally),1.00 per call) NvM_ASR40_SetRamBlockStatus/11 (1073741824 (estimated locally),1.00 per call) NvM_ASR40_SetBlockProtection/10 (1073741824 (estimated locally),1.00 per call) NvM_ASR40_GetDataIndex/7 (1073741824 (estimated locally),1.00 per call) NvM_ASR40_SetDataIndex/6 (1073741823 (estimated locally),1.00 per call) NvM_ASR40_GetErrorStatus/5 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_InvokeSingleBlockCallback/46 (NvM_InvokeSingleBlockCallback) @071fb1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ProcessBlockCallback/4 (309658552 (estimated locally),0.29 per call) NvM_ProcessCanceledJob/3 (158621806 (estimated locally),0.38 per call) 
  Calls: 
NvM_GlobalBlockNumber/45 (NvM_GlobalBlockNumber) @071f9090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_MainFunction/2 (write)NvM_ProcessBlockCallback/4 (read)NvM_MainFunction/2 (read)NvM_ASR40_CancelJobs/13 (read)
  Availability: not_available
  Varpool flags:
NvM_Queue_RemoveFirstItem/44 (NvM_Queue_RemoveFirstItem) @071cc540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MainFunction/2 (6299502 (estimated locally),0.02 per call) 
  Calls: 
NvM_PostService_Function/43 (NvM_PostService_Function) @071ccee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MainFunction/2 (12887688 (estimated locally),0.04 per call) 
  Calls: 
NvM_CurrentFunctionPtr/42 (NvM_CurrentFunctionPtr) @071f5e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_InvalidateNvBlock_Async_State1.part.0/74 (write)NvM_EraseNvBlock_Async_State1.part.0/73 (write)NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (write)NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 (write)NvM_MainFunction/2 (read)
  Availability: not_available
  Varpool flags:
NvM_ProcessStandardPriorityJob/41 (NvM_ProcessStandardPriorityJob) @071cce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MainFunction/2 (12789898 (estimated locally),0.04 per call) 
  Calls: 
NvM_PreService_Function/40 (NvM_PreService_Function) @071ccd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MainFunction/2 (22788465 (estimated locally),0.07 per call) 
  Calls: 
NvM_StateMachine_SetNextRequest/39 (NvM_StateMachine_SetNextRequest) @071ccc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MainFunction/2 (22788465 (estimated locally),0.07 per call) 
  Calls: 
Nvm_Queue_CheckEmpty/38 (Nvm_Queue_CheckEmpty) @071cca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MainFunction/2 (37904966 (estimated locally),0.11 per call) NvM_ProcessCanceledJob/3 (138007661 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalCallLevel/37 (NvM_GlobalCallLevel) @071f5cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_EraseNvBlock_Async_State1.part.0/73 (read)NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (read)NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 (read)NvM_InvalidateNvBlock_Async_State1.part.0/74 (read)NvM_MainFunction/2 (read)NvM_MainFunction/2 (read)
  Availability: not_available
  Varpool flags:
NvM_GlobalErrorStatus/36 (NvM_GlobalErrorStatus) @071f5c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_EraseNvBlock_Async_State1/19 (write)NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (write)NvM_InvalidateNvBlock_Async_State1/17 (write)NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (write)NvM_ProcessCanceledJob/3 (write)NvM_ProcessBlockCallback/4 (read)NvM_MainFunction/2 (write)NvM_MainFunction/2 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @071cc9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_CancelJobs/13 (511869572 (estimated locally),0.49 per call) NvM_SetBlockLockStatus/12 (351187023 (estimated locally),0.33 per call) NvM_ASR40_SetRamBlockStatus/11 (117647653 (estimated locally),0.11 per call) NvM_ASR40_SetBlockProtection/10 (187916891 (estimated locally),0.18 per call) NvM_ASR40_InvalidateNvBlock/9 (524845004 (estimated locally),0.49 per call) NvM_ASR40_EraseNvBlock/8 (524845004 (estimated locally),0.49 per call) NvM_MainFunction/2 (114863532 (estimated locally),0.34 per call) NvM_MainFunction/2 (12887688 (estimated locally),0.04 per call) NvM_MainFunction/2 (114863532 (estimated locally),0.34 per call) NvM_MainFunction/2 (222970386 (estimated locally),0.66 per call) NvM_ProcessCanceledJob/3 (56711948 (estimated locally),0.14 per call) NvM_ProcessCanceledJob/3 (111742712 (estimated locally),0.27 per call) NvM_ProcessCanceledJob/3 (111742712 (estimated locally),0.27 per call) NvM_ProcessCanceledJob/3 (69003831 (estimated locally),0.17 per call) NvM_ProcessCanceledJob/3 (69003831 (estimated locally),0.17 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @071cc8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_CancelJobs/13 (511869572 (estimated locally),0.49 per call) NvM_SetBlockLockStatus/12 (351187023 (estimated locally),0.33 per call) NvM_ASR40_SetRamBlockStatus/11 (117647653 (estimated locally),0.11 per call) NvM_ASR40_SetBlockProtection/10 (187916891 (estimated locally),0.18 per call) NvM_ASR40_InvalidateNvBlock/9 (524845004 (estimated locally),0.49 per call) NvM_ASR40_EraseNvBlock/8 (524845004 (estimated locally),0.49 per call) NvM_MainFunction/2 (114863532 (estimated locally),0.34 per call) NvM_MainFunction/2 (12887688 (estimated locally),0.04 per call) NvM_MainFunction/2 (337833918 (estimated locally),1.00 per call) NvM_ProcessCanceledJob/3 (418205033 (estimated locally),1.00 per call) 
  Calls: 
NvM_GlobalGenericStatus/33 (NvM_GlobalGenericStatus) @0716e318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Init/1 (read)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_MainFunction/2 (write)NvM_ASR40_GetErrorStatus/5 (read)NvM_ProcessCanceledJob/3 (read)NvM_ProcessCanceledJob/3 (read)NvM_ProcessCanceledJob/3 (write)NvM_ASR40_SetDataIndex/6 (read)NvM_ASR40_GetDataIndex/7 (read)NvM_ASR40_SetBlockProtection/10 (read)NvM_Init/1 (write)NvM_MainFunction/2 (read)NvM_MainFunction/2 (write)NvM_MainFunction/2 (read)NvM_SetBlockLockStatus/12 (read)
  Availability: not_available
  Varpool flags:
NvM_RamBlockCrcCalcCount/32 (NvM_RamBlockCrcCalcCount) @0716ef78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Init/1 (write)NvM_MainFunction/2 (read)
  Availability: not_available
  Varpool flags:
NvM_TempRamBlockAddress/31 (NvM_TempRamBlockAddress) @0716ef30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Init/1 (write)
  Availability: not_available
  Varpool flags:
NvM_CrcQueue/30 (NvM_CrcQueue) @0716eee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Init/1 (write)
  Availability: not_available
  Varpool flags:
NvM_BlockDescriptorTable/29 (NvM_BlockDescriptorTable) @0716eea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ASR40_GetDataIndex/7 (read)NvM_Init/1 (read)NvM_ASR40_SetDataIndex/6 (read)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_ASR40_SetDataIndex/6 (read)NvM_ASR40_SetDataIndex/6 (read)NvM_SetBlockLockStatus/12 (read)NvM_SetBlockLockStatus/12 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_AdminBlockTable/28 (NvM_AdminBlockTable) @0716ee58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_ASR40_SetRamBlockStatus/11 (read)NvM_SetBlockLockStatus/12 (read)NvM_SetBlockLockStatus/12 (write)NvM_ProcessCanceledJob/3 (read)NvM_ProcessCanceledJob/3 (write)NvM_ASR40_SetBlockProtection/10 (write)NvM_ASR40_SetBlockProtection/10 (read)NvM_ASR40_SetBlockProtection/10 (write)NvM_ASR40_SetRamBlockStatus/11 (write)NvM_ASR40_SetRamBlockStatus/11 (write)NvM_Init/1 (write)NvM_ProcessCanceledJob/3 (read)NvM_Init/1 (read)NvM_MainFunction/2 (write)NvM_ASR40_GetErrorStatus/5 (read)NvM_Init/1 (write)NvM_MainFunction/2 (read)NvM_ASR40_SetDataIndex/6 (write)NvM_Init/1 (write)NvM_ASR40_SetDataIndex/6 (read)NvM_ASR40_GetDataIndex/7 (read)NvM_ASR40_SetBlockProtection/10 (read)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_ASR40_SetRamBlockStatus/11 (write)NvM_ASR40_EraseNvBlock/8 (read)NvM_ASR40_EraseNvBlock/8 (read)NvM_ASR40_EraseNvBlock/8 (write)NvM_Init/1 (write)NvM_ASR40_InvalidateNvBlock/9 (read)NvM_ASR40_InvalidateNvBlock/9 (read)NvM_ASR40_InvalidateNvBlock/9 (write)NvM_ASR40_SetBlockProtection/10 (read)NvM_Init/1 (write)NvM_Init/1 (write)NvM_ProcessCanceledJob/3 (read)NvM_ASR40_SetBlockProtection/10 (read)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_ASR40_SetRamBlockStatus/11 (write)NvM_ASR40_SetRamBlockStatus/11 (read)NvM_ASR40_SetRamBlockStatus/11 (write)NvM_SetBlockLockStatus/12 (read)NvM_SetBlockLockStatus/12 (read)NvM_SetBlockLockStatus/12 (write)NvM_ASR40_CancelJobs/13 (read)NvM_ASR40_CancelJobs/13 (write)
  Availability: not_available
  Varpool flags:
NvM_MirrorRetryCount/27 (NvM_MirrorRetryCount) @0716ee10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 (read)NvM_Init/1 (write)
  Availability: not_available
  Varpool flags:
NvM_InitStoredCrcBuf/26 (NvM_InitStoredCrcBuf) @071cc460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Init/1 (107374182 (estimated locally),1.00 per call) 
  Calls: 
NvM_Queue_CancelledStandardJobs/25 (NvM_Queue_CancelledStandardJobs) @0716ed80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Init/1 (write)NvM_ProcessCanceledJob/3 (write)NvM_ProcessCanceledJob/3 (read)NvM_ASR40_CancelJobs/13 (read)NvM_ASR40_CancelJobs/13 (write)
  Availability: not_available
  Varpool flags:
NvM_Queue_IndexStandard/24 (NvM_Queue_IndexStandard) @0716ed38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_MainFunction/2 (read)NvM_ProcessCanceledJob/3 (write)NvM_Init/1 (write)NvM_ProcessCanceledJob/3 (read)NvM_ASR40_CancelJobs/13 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/23 (NvM_CurrentServiceId) @0716ecf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_InvalidateNvBlock_Async/16 (write)NvM_EraseNvBlock_Async/18 (write)NvM_Init/1 (write)NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (write)NvM_ProcessBlockCallback/4 (read)NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (read)NvM_MainFunction/2 (read)NvM_MainFunction/2 (read)NvM_MainFunction/2 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalWorkingStatus/22 (NvM_GlobalWorkingStatus) @0716eca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (read)NvM_Init/1 (write)
  Availability: not_available
  Varpool flags:
NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (NvM_SetRamBlockStatus_Async_CalcCrc_End) @071cc2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_CurrentBlockDescriptorPtr/65 (read)NvM_CalcCrc_CalcBuffer/70 (addr)NvM_GlobalErrorStatus/36 (write)
  Referring: NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalcCrc_RemoveElement/72 (1073741824 (estimated locally),1.00 per call) NvM_StateMachine_TerminateCurrentLevel/71 (1073741824 (estimated locally),1.00 per call) NvM_CopyCrc/69 (1073741824 (estimated locally),1.00 per call) NvM_GetStoredRamCRCAddress/68 (1073741824 (estimated locally),1.00 per call) 
NvM_SetRamBlockStatus_Async_CalcCrc_Start/20 (NvM_SetRamBlockStatus_Async_CalcCrc_Start) @071cc0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/23 (read)NvM_CurrentServiceId/23 (write)NvM_GlobalErrorStatus/36 (write)NvM_GlobalWorkingStatus/22 (read)NvM_CurrentBlockDescriptorPtr/65 (read)NvM_GlobalCallLevel/37 (read)NvM_CurrentFunctionPtr/42 (write)NvM_SetRamBlockStatus_Async_CalcCrc_End/21 (addr)
  Referring: NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalculateCrc/67 (805306369 (estimated locally),0.75 per call) NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0/75 (268435457 (estimated locally),0.25 per call) NvM_MirrorCopy/66 (536870913 (estimated locally),0.50 per call) NvM_GetUserRamBlockAddress/64 (1073741824 (estimated locally),1.00 per call) 
NvM_EraseNvBlock_Async_State1/19 (NvM_EraseNvBlock_Async_State1) @071c9e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalErrorStatus/36 (write)
  Referring: NvM_EraseNvBlock_Async/18 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_EraseNvBlock_Async_State1.part.0/73 (524845000 (estimated locally),0.49 per call) Fee_GetStatus/54 (1073741824 (estimated locally),1.00 per call) 
NvM_EraseNvBlock_Async/18 (NvM_EraseNvBlock_Async) @071c9a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_CurrentServiceId/23 (write)NvM_EraseNvBlock_Async_State1/19 (addr)
  Referring: NvM_ASR40_EraseNvBlock/8 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_ProcessRedundantBlock/53 (1073741824 (estimated locally),1.00 per call) 
NvM_InvalidateNvBlock_Async_State1/17 (NvM_InvalidateNvBlock_Async_State1) @071c98c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalErrorStatus/36 (write)
  Referring: NvM_InvalidateNvBlock_Async/16 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_InvalidateNvBlock_Async_State1.part.0/74 (524845000 (estimated locally),0.49 per call) Fee_GetStatus/54 (1073741824 (estimated locally),1.00 per call) 
NvM_InvalidateNvBlock_Async/16 (NvM_InvalidateNvBlock_Async) @071c9540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_CurrentServiceId/23 (write)NvM_InvalidateNvBlock_Async_State1/17 (addr)
  Referring: NvM_ASR40_InvalidateNvBlock/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_ProcessRedundantBlock/53 (1073741824 (estimated locally),1.00 per call) 
NvM_JobErrorNotification/15 (NvM_JobErrorNotification) @071c9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: NvM_JobEndNotification/14 (1073741824 (estimated locally),1.00 per call) 
NvM_JobEndNotification/14 (NvM_JobEndNotification) @071c91c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: NvM_JobErrorNotification/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_CancelJobs/13 (NvM_ASR40_CancelJobs) @071c9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_Queue_IndexStandard/24 (read)NvM_Queue_CancelledStandardJobs/25 (read)NvM_AdminBlockTable/28 (read)NvM_GlobalBlockNumber/45 (read)NvM_AdminBlockTable/28 (write)NvM_Queue_CancelledStandardJobs/25 (write)NvM_Queue_Standard/63 (read)NvM_Queue_Standard/63 (read)NvM_Queue_Standard/63 (write)NvM_Queue_Standard/63 (read)NvM_Queue_Standard/63 (write)
  Referring: 
  Availability: available
  Function flags: count:1047196343 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (511869572 (estimated locally),0.49 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (511869572 (estimated locally),0.49 per call) NvM_CheckCondCancelJobs/62 (1047196343 (estimated locally),1.00 per call) 
NvM_SetBlockLockStatus/12 (NvM_SetBlockLockStatus) @071c2e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_AdminBlockTable/28 (read)NvM_BlockDescriptorTable/29 (read)NvM_BlockDescriptorTable/29 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (351187023 (estimated locally),0.33 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (351187023 (estimated locally),0.33 per call) Det_ASR40_ReportError/48 (116136926 (estimated locally),0.11 per call) Det_ASR40_ReportError/48 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/48 (354334802 (estimated locally),0.33 per call) NvM_GetBlockIndexForValidId/47 (1073741823 (estimated locally),1.00 per call) 
NvM_ASR40_SetRamBlockStatus/11 (NvM_ASR40_SetRamBlockStatus) @071c2700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_BlockDescriptorTable/29 (read)NvM_BlockDescriptorTable/29 (read)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (117647653 (estimated locally),0.11 per call) NvM_CalcCrc_EnqueueElement/61 (6600033 (estimated locally),0.01 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (117647653 (estimated locally),0.11 per call) Det_ASR40_ReportError/48 (151028498 (estimated locally),0.14 per call) Det_ASR40_ReportError/48 (116136926 (estimated locally),0.11 per call) Det_ASR40_ReportError/48 (282617438 (estimated locally),0.26 per call) Det_ASR40_ReportError/48 (217325345 (estimated locally),0.20 per call) NvM_GetBlockIndexForValidId/47 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_SetBlockProtection/10 (NvM_ASR40_SetBlockProtection) @071c20e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (187916891 (estimated locally),0.18 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (187916891 (estimated locally),0.18 per call) Det_ASR40_ReportError/48 (189353683 (estimated locally),0.18 per call) Det_ASR40_ReportError/48 (282617438 (estimated locally),0.26 per call) Det_ASR40_ReportError/48 (217325345 (estimated locally),0.20 per call) NvM_GetBlockIndexForValidId/47 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_InvalidateNvBlock/9 (NvM_ASR40_InvalidateNvBlock) @071bca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_InvalidateNvBlock_Async/16 (addr)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (524845004 (estimated locally),0.49 per call) NvM_Queue_InsertStandard/52 (31349706 (estimated locally),0.03 per call) NvM_CheckDataSetRomBlock/51 (256544238 (estimated locally),0.24 per call) NvM_CheckWriteProtection/50 (524845004 (estimated locally),0.49 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (524845004 (estimated locally),0.49 per call) NvM_CheckCondInvalidateNvBlock/59 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_EraseNvBlock/8 (NvM_ASR40_EraseNvBlock) @071bc7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_EraseNvBlock_Async/18 (addr)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (524845004 (estimated locally),0.49 per call) NvM_Queue_InsertStandard/52 (31349706 (estimated locally),0.03 per call) NvM_CheckDataSetRomBlock/51 (256544238 (estimated locally),0.24 per call) NvM_CheckWriteProtection/50 (524845004 (estimated locally),0.49 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (524845004 (estimated locally),0.49 per call) NvM_CheckCondEraseNvBlock/49 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_GetDataIndex/7 (NvM_ASR40_GetDataIndex) @071bc540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_BlockDescriptorTable/29 (read)NvM_AdminBlockTable/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/48 (231586532 (estimated locally),0.22 per call) Det_ASR40_ReportError/48 (100013173 (estimated locally),0.09 per call) Det_ASR40_ReportError/48 (282617438 (estimated locally),0.26 per call) Det_ASR40_ReportError/48 (217325345 (estimated locally),0.20 per call) NvM_GetBlockIndexForValidId/47 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_SetDataIndex/6 (NvM_ASR40_SetDataIndex) @071b7e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_BlockDescriptorTable/29 (read)NvM_BlockDescriptorTable/29 (read)NvM_BlockDescriptorTable/29 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/48 (39777362 (estimated locally),0.04 per call) Det_ASR40_ReportError/48 (96797603 (estimated locally),0.09 per call) Det_ASR40_ReportError/48 (280472971 (estimated locally),0.26 per call) Det_ASR40_ReportError/48 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/48 (354334802 (estimated locally),0.33 per call) NvM_GetBlockIndexForValidId/47 (1073741823 (estimated locally),1.00 per call) 
NvM_ASR40_GetErrorStatus/5 (NvM_ASR40_GetErrorStatus) @071b7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_AdminBlockTable/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/48 (111737385 (estimated locally),0.10 per call) Det_ASR40_ReportError/48 (315747742 (estimated locally),0.29 per call) Det_ASR40_ReportError/48 (116930485 (estimated locally),0.11 per call) NvM_GetBlockIndexForValidId/47 (354334802 (estimated locally),0.33 per call) 
NvM_ProcessBlockCallback/4 (NvM_ProcessBlockCallback) @071b7000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_CurrentServiceId/23 (read)NvM_GlobalBlockNumber/45 (read)NvM_GlobalErrorStatus/36 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_MainFunction/2 (6299502 (estimated locally),0.02 per call) 
  Calls: NvM_InvokeSingleBlockCallback/46 (309658552 (estimated locally),0.29 per call) 
NvM_ProcessCanceledJob/3 (NvM_ProcessCanceledJob) @07190620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_GlobalGenericStatus/33 (read)NvM_GlobalGenericStatus/33 (read)NvM_GlobalGenericStatus/33 (write)NvM_GlobalErrorStatus/36 (write)NvM_Queue_IndexStandard/24 (read)NvM_Queue_CancelledStandardJobs/25 (read)NvM_Queue_IndexStandard/24 (write)NvM_Queue_CancelledStandardJobs/25 (write)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)
  Referring: 
  Availability: local
  Function flags: count:418205033 (estimated locally) body local optimize_size
  Called by: NvM_MainFunction/2 (114863532 (estimated locally),0.34 per call) 
  Calls: NvM_InvokeSingleBlockCallback/46 (158621806 (estimated locally),0.38 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (56711948 (estimated locally),0.14 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (111742712 (estimated locally),0.27 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (111742712 (estimated locally),0.27 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (69003831 (estimated locally),0.17 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (69003831 (estimated locally),0.17 per call) Nvm_Queue_CheckEmpty/38 (138007661 (estimated locally),0.33 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (418205033 (estimated locally),1.00 per call) 
NvM_MainFunction/2 (NvM_MainFunction) @07190d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/33 (read)NvM_GlobalGenericStatus/33 (write)NvM_GlobalErrorStatus/36 (write)NvM_GlobalCallLevel/37 (read)NvM_RamBlockCrcCalcCount/32 (read)NvM_CurrentServiceId/23 (read)NvM_Queue_IndexStandard/24 (read)NvM_CurrentFunctionPtr/42 (read)NvM_GlobalCallLevel/37 (read)NvM_GlobalErrorStatus/36 (read)NvM_CurrentServiceId/23 (read)NvM_CurrentServiceId/23 (write)NvM_GlobalBlockNumber/45 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_GlobalBlockNumber/45 (write)NvM_GlobalGenericStatus/33 (read)NvM_GlobalGenericStatus/33 (write)
  Referring: 
  Availability: available
  Function flags: count:337833918 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (114863532 (estimated locally),0.34 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (114863532 (estimated locally),0.34 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (12887688 (estimated locally),0.04 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (12887688 (estimated locally),0.04 per call) NvM_ProcessBlockCallback/4 (6299502 (estimated locally),0.02 per call) NvM_Queue_RemoveFirstItem/44 (6299502 (estimated locally),0.02 per call) NvM_PostService_Function/43 (12887688 (estimated locally),0.04 per call) NvM_ProcessStandardPriorityJob/41 (12789898 (estimated locally),0.04 per call) NvM_PreService_Function/40 (22788465 (estimated locally),0.07 per call) NvM_StateMachine_SetNextRequest/39 (22788465 (estimated locally),0.07 per call) Nvm_Queue_CheckEmpty/38 (37904966 (estimated locally),0.11 per call) NvM_ProcessCanceledJob/3 (114863532 (estimated locally),0.34 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (114863532 (estimated locally),0.34 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/35 (222970386 (estimated locally),0.66 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/34 (337833918 (estimated locally),1.00 per call) 
   Indirect call(958878294 (estimated locally),2.84 per call) 
NvM_Init/1 (NvM_Init) @07190a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/22 (write)NvM_CurrentServiceId/23 (write)NvM_Queue_IndexStandard/24 (write)NvM_Queue_CancelledStandardJobs/25 (write)NvM_MirrorRetryCount/27 (write)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (write)NvM_AdminBlockTable/28 (write)NvM_BlockDescriptorTable/29 (read)NvM_AdminBlockTable/28 (read)NvM_AdminBlockTable/28 (write)NvM_CrcQueue/30 (write)NvM_TempRamBlockAddress/31 (write)NvM_RamBlockCrcCalcCount/32 (write)NvM_GlobalGenericStatus/33 (read)NvM_GlobalGenericStatus/33 (write)
  Referring: 
  Availability: available
  Function flags: count:107374182 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_InitStoredCrcBuf/26 (107374182 (estimated locally),1.00 per call) 

;; Function NvM_EraseNvBlock_Async (NvM_EraseNvBlock_Async, funcdef_no=17, decl_uid=11040, cgraph_uid=19, symbol_order=18)

Modification phase of node NvM_EraseNvBlock_Async/18
NvM_EraseNvBlock_Async ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 9;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_ProcessRedundantBlock (NvM_EraseNvBlock_Async_State1);
  return;

}



;; Function NvM_InvalidateNvBlock_Async (NvM_InvalidateNvBlock_Async, funcdef_no=15, decl_uid=11036, cgraph_uid=17, symbol_order=16)

Modification phase of node NvM_InvalidateNvBlock_Async/16
NvM_InvalidateNvBlock_Async ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 11;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_ProcessRedundantBlock (NvM_InvalidateNvBlock_Async_State1);
  return;

}



;; Function NvM_SetRamBlockStatus_Async_CalcCrc_End (NvM_SetRamBlockStatus_Async_CalcCrc_End, funcdef_no=20, decl_uid=11044, cgraph_uid=22, symbol_order=21)

Modification phase of node NvM_SetRamBlockStatus_Async_CalcCrc_End/21
NvM_SetRamBlockStatus_Async_CalcCrc_End ()
{
  uint8 * _1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.51_2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = NvM_GetStoredRamCRCAddress ();
  NvM_CurrentBlockDescriptorPtr.51_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.51_2->blockDesc;
  NvM_CopyCrc (_1, &NvM_CalcCrc_CalcBuffer, _3);
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();
  return;

}



;; Function NvM_EraseNvBlock_Async_State1 (NvM_EraseNvBlock_Async_State1, funcdef_no=18, decl_uid=11042, cgraph_uid=20, symbol_order=19)

Modification phase of node NvM_EraseNvBlock_Async_State1/19
NvM_EraseNvBlock_Async_State1 ()
{
  MemIf_StatusType Status;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Status_3 = Fee_GetStatus ();
  # DEBUG Status => Status_3
  # DEBUG BEGIN_STMT
  if (Status_3 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845000]:
  NvM_EraseNvBlock_Async_State1.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;

  <bb 5> [local count: 1073741823]:
  return;

}



;; Function NvM_InvalidateNvBlock_Async_State1 (NvM_InvalidateNvBlock_Async_State1, funcdef_no=16, decl_uid=11038, cgraph_uid=18, symbol_order=17)

Modification phase of node NvM_InvalidateNvBlock_Async_State1/17
NvM_InvalidateNvBlock_Async_State1 ()
{
  MemIf_StatusType Status;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Status_3 = Fee_GetStatus ();
  # DEBUG Status => Status_3
  # DEBUG BEGIN_STMT
  if (Status_3 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845000]:
  NvM_InvalidateNvBlock_Async_State1.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;

  <bb 5> [local count: 1073741823]:
  return;

}



;; Function NvM_SetRamBlockStatus_Async_CalcCrc_Start (NvM_SetRamBlockStatus_Async_CalcCrc_Start, funcdef_no=19, decl_uid=10810, cgraph_uid=21, symbol_order=20)

Modification phase of node NvM_SetRamBlockStatus_Async_CalcCrc_Start/20
NvM_SetRamBlockStatus_Async_CalcCrc_Start ()
{
  uint8 * BufferAddr;
  Std_ReturnType ReturnVal;
  unsigned char NvM_CurrentServiceId.45_1;
  short unsigned int NvM_GlobalWorkingStatus.46_2;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.47_5;
  Std_ReturnType (*<Tae1>) (void *) _6;
  unsigned char NvM_GlobalCallLevel.50_7;
  int _8;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BufferAddr_13 = NvM_GetUserRamBlockAddress ();
  # DEBUG BufferAddr => BufferAddr_13
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId.45_1 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.45_1 != 25)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 5;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.46_2 = NvM_GlobalWorkingStatus;
  _10 = NvM_GlobalWorkingStatus.46_2 & 4096;
  if (_10 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.47_5 = NvM_CurrentBlockDescriptorPtr;
  _6 = NvM_CurrentBlockDescriptorPtr.47_5->writeRamToNvCallback;
  ReturnVal_17 = NvM_MirrorCopy (0B, _6, BufferAddr_13);
  # DEBUG ReturnVal => ReturnVal_17
  # DEBUG BEGIN_STMT
  if (ReturnVal_17 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 268435457]:
  NvM_SetRamBlockStatus_Async_CalcCrc_Start.part.0 ();
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 805306369]:
  # DEBUG ReturnVal => NULL
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.50_7 = NvM_GlobalCallLevel;
  _8 = (int) NvM_GlobalCallLevel.50_7;
  NvM_CurrentFunctionPtr[_8] = NvM_SetRamBlockStatus_Async_CalcCrc_End;
  # DEBUG BEGIN_STMT
  NvM_CalculateCrc (BufferAddr_13);

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function NvM_Init (NvM_Init, funcdef_no=0, decl_uid=8887, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_Init/1
NvM_Init ()
{
  uint16 i;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;
  int _6;
  short unsigned int NvM_GlobalGenericStatus.2_7;
  short unsigned int _8;

  <bb 2> [local count: 107374182]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CurrentAdminBlockPtr => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 255;
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard = 65535;
  # DEBUG BEGIN_STMT
  NvM_Queue_CancelledStandardJobs = 0;
  # DEBUG BEGIN_STMT
  NvM_InitStoredCrcBuf ();
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount = 0;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 966367641]:
  # DEBUG BEGIN_STMT
  _1 = (int) i_9;
  # DEBUG D#1 => &NvM_AdminBlockTable[_1]
  # DEBUG CurrentAdminBlockPtr => D#1
  # DEBUG BEGIN_STMT
  MEM[(struct NvM_AdminBlockType *)&NvM_AdminBlockTable][_1].NvMDatasetBlockIndex = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct NvM_AdminBlockType *)&NvM_AdminBlockTable][_1].NvMResult = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct NvM_AdminBlockType *)&NvM_AdminBlockTable][_1].NvMDynStatus = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct NvM_AdminBlockType *)&NvM_AdminBlockTable][_1].NvMExtendedStatus = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct NvM_AdminBlockType *)&NvM_AdminBlockTable][_1].NvMCurrentServiceId = 255;
  # DEBUG BEGIN_STMT
  _2 = NvM_BlockDescriptorTable[_1].blockDesc;
  _3 = _2 & 16;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 483183819]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_1].NvMDynStatus;
  _5 = _4 | 2;
  NvM_AdminBlockTable[_1].NvMDynStatus = _5;

  <bb 5> [local count: 966367639]:
  # DEBUG BEGIN_STMT
  i_32 = i_9 + 1;
  # DEBUG i => i_32

  <bb 6> [local count: 1073741824]:
  # i_9 = PHI <0(2), i_32(5)>
  # DEBUG i => i_9
  # DEBUG BEGIN_STMT
  if (i_9 != 9)
    goto <bb 3>; [90.00%]
  else
    goto <bb 10>; [10.00%]

  <bb 10> [local count: 107374182]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 536742088]:
  # DEBUG BEGIN_STMT
  _6 = (int) i_10;
  NvM_CrcQueue[_6] = 0;
  # DEBUG BEGIN_STMT
  i_25 = i_10 + 1;
  # DEBUG i => i_25

  <bb 8> [local count: 644116271]:
  # i_10 = PHI <i_25(7), 0(10)>
  # DEBUG i => i_10
  # DEBUG BEGIN_STMT
  if (i_10 != 5)
    goto <bb 7>; [83.33%]
  else
    goto <bb 9>; [16.67%]

  <bb 9> [local count: 107374182]:
  # DEBUG BEGIN_STMT
  NvM_TempRamBlockAddress = 0B;
  # DEBUG BEGIN_STMT
  NvM_RamBlockCrcCalcCount = 0;
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.2_7 = NvM_GlobalGenericStatus;
  _8 = NvM_GlobalGenericStatus.2_7 | 1;
  NvM_GlobalGenericStatus = _8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function NvM_MainFunction (NvM_MainFunction, funcdef_no=1, decl_uid=5655, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_MainFunction/2
NvM_MainFunction ()
{
  uint8 JobEndIndicator;
  short unsigned int NvM_GlobalGenericStatus.3_1;
  short unsigned int _2;
  unsigned char NvM_GlobalCallLevel.5_3;
  unsigned char _4;
  short unsigned int NvM_RamBlockCrcCalcCount.6_5;
  unsigned char NvM_CurrentServiceId.7_6;
  short unsigned int NvM_Queue_IndexStandard.8_7;
  int _8;
  void (*<T59e>) (void) _9;
  unsigned char NvM_GlobalCallLevel.10_10;
  unsigned char NvM_GlobalErrorStatus.11_11;
  unsigned char NvM_CurrentServiceId.13_12;
  short unsigned int NvM_GlobalBlockNumber.14_13;
  int _14;
  unsigned char _15;
  short unsigned int NvM_GlobalGenericStatus.16_16;
  short unsigned int _17;
  short unsigned int _23;
  unsigned char NvM_GlobalCallLevel.10_24;

  <bb 2> [local count: 337833918]:
  # DEBUG BEGIN_STMT
  # DEBUG JobEndIndicator => 0
  # DEBUG BEGIN_STMT
  # DEBUG ExecuteMainFunction => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.3_1 = NvM_GlobalGenericStatus;
  _23 = NvM_GlobalGenericStatus.3_1 & 5;
  if (_23 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 222970386]:
  # DEBUG ExecuteMainFunction => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 4> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _2 = NvM_GlobalGenericStatus.3_1 | 4;
  NvM_GlobalGenericStatus = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ExecuteMainFunction => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_ProcessCanceledJob ();
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.5_3 = NvM_GlobalCallLevel;
  if (NvM_GlobalCallLevel.5_3 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 5> [local count: 37904966]:
  # DEBUG BEGIN_STMT
  _4 = Nvm_Queue_CheckEmpty ();
  if (_4 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 6> [local count: 30233001]:
  NvM_RamBlockCrcCalcCount.6_5 = NvM_RamBlockCrcCalcCount;
  if (NvM_RamBlockCrcCalcCount.6_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 7> [local count: 22788465]:
  # DEBUG BEGIN_STMT
  NvM_StateMachine_SetNextRequest ();
  # DEBUG BEGIN_STMT
  NvM_PreService_Function ();
  # DEBUG BEGIN_STMT
  # DEBUG JobEndIndicator => 1
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 76958567]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId.7_6 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.7_6 == 5)
    goto <bb 9>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 9> [local count: 26165913]:
  NvM_Queue_IndexStandard.8_7 = NvM_Queue_IndexStandard;
  if (NvM_Queue_IndexStandard.8_7 != 65535)
    goto <bb 10>; [48.88%]
  else
    goto <bb 12>; [51.12%]

  <bb 10> [local count: 12789898]:
  # DEBUG BEGIN_STMT
  NvM_ProcessStandardPriorityJob ();
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 958878294]:
  # DEBUG BEGIN_STMT
  _8 = (int) NvM_GlobalCallLevel.10_10;
  _9 = NvM_CurrentFunctionPtr[_8];
  _9 ();
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 114863532]:
  # JobEndIndicator_47 = PHI <1(9), 0(6), 1(7), 1(8), 1(10)>
  # DEBUG JobEndIndicator => NULL

  <bb 13> [local count: 1073741824]:
  # DEBUG JobEndIndicator => JobEndIndicator_47
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.10_10 = NvM_GlobalCallLevel;
  if (NvM_GlobalCallLevel.10_10 != 0)
    goto <bb 14>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 14> [local count: 1014686025]:
  NvM_GlobalErrorStatus.11_11 = NvM_GlobalErrorStatus;
  if (NvM_GlobalErrorStatus.11_11 != 2)
    goto <bb 11>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 15> [local count: 114863532]:
  # NvM_GlobalCallLevel.10_24 = PHI <NvM_GlobalCallLevel.10_10(13), NvM_GlobalCallLevel.10_10(14)>
  # DEBUG BEGIN_STMT
  if (JobEndIndicator_47 == 1)
    goto <bb 16>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 16> [local count: 39053601]:
  if (NvM_GlobalCallLevel.10_24 == 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 17> [local count: 12887688]:
  # DEBUG BEGIN_STMT
  NvM_PostService_Function ();
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId.13_12 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.13_12 != 5)
    goto <bb 18>; [48.88%]
  else
    goto <bb 19>; [51.12%]

  <bb 18> [local count: 6299502]:
  # DEBUG BEGIN_STMT
  NvM_Queue_RemoveFirstItem ();
  # DEBUG BEGIN_STMT
  NvM_ProcessBlockCallback ();

  <bb 19> [local count: 12887688]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 255;
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.14_13 = NvM_GlobalBlockNumber;
  _14 = (int) NvM_GlobalBlockNumber.14_13;
  _15 = NvM_AdminBlockTable[_14].NvMResult;
  if (_15 != 2)
    goto <bb 20>; [66.00%]
  else
    goto <bb 21>; [34.00%]

  <bb 20> [local count: 8505874]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_14].NvMCurrentServiceId = 255;

  <bb 21> [local count: 12887688]:
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber = 9;

  <bb 22> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.16_16 = NvM_GlobalGenericStatus;
  _17 = NvM_GlobalGenericStatus.16_16 & 65531;
  NvM_GlobalGenericStatus = _17;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();

  <bb 23> [local count: 337833918]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function NvM_ASR40_GetErrorStatus (NvM_ASR40_GetErrorStatus, funcdef_no=4, decl_uid=8892, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_ASR40_GetErrorStatus/5
NvM_ASR40_GetErrorStatus (NvM_ASR40_BlockIdType BlockId, NvM_ASR40_RequestResultType * RequestResultPtr)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  short unsigned int NvM_GlobalGenericStatus.29_1;
  int _2;
  unsigned char _3;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (BlockId_7(D) != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  BlockIndex_10 = NvM_GetBlockIndexForValidId (BlockId_7(D));
  # DEBUG BlockIndex => BlockIndex_10
  # DEBUG BEGIN_STMT
  if (BlockIndex_10 > 8)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 4, 10);
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 956811340]:
  # BlockIndex_16 = PHI <BlockIndex_10(3), 0(2)>
  # DEBUG BlockIndex => NULL
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.29_1 = NvM_GlobalGenericStatus;
  _6 = NvM_GlobalGenericStatus.29_1 & 1;
  if (_6 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 315747742]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 4, 20);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 641063598]:
  # DEBUG BEGIN_STMT
  if (RequestResultPtr_11(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 9>; [82.57%]

  <bb 8> [local count: 111737385]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 4, 14);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 529326212]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_16;
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  *RequestResultPtr_11(D) = _3;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 10> [local count: 1073741824]:
  # Result_4 = PHI <1(4), 1(6), 1(8), 0(9)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function NvM_ASR40_SetDataIndex (NvM_ASR40_SetDataIndex, funcdef_no=5, decl_uid=8895, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_ASR40_SetDataIndex/6
NvM_ASR40_SetDataIndex (NvM_ASR40_BlockIdType BlockId, uint8 DataIndex)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  short unsigned int NvM_GlobalGenericStatus.30_1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned int _5;
  int _6;
  unsigned char _7;
  int _8;
  unsigned char _9;
  int _10;
  int _11;
  unsigned char _12;
  short unsigned int _19;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  BlockIndex_18 = NvM_GetBlockIndexForValidId (BlockId_16(D));
  # DEBUG BlockIndex => BlockIndex_18
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.30_1 = NvM_GlobalGenericStatus;
  _19 = NvM_GlobalGenericStatus.30_1 & 1;
  if (_19 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 1, 20);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (BlockIndex_18 == 9)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 1, 10);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 573799040]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_18;
  _3 = NvM_BlockDescriptorTable[_2].blockDesc;
  _4 = _3 >> 7;
  _5 = _4 & 3;
  if (_5 != 2)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 280472971]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 1, 11);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 293326069]:
  # DEBUG BEGIN_STMT
  _6 = (int) DataIndex_20(D);
  _7 = NvM_BlockDescriptorTable[_2].nvBlockNum;
  _8 = (int) _7;
  _9 = NvM_BlockDescriptorTable[_2].romBlockNum;
  _10 = (int) _9;
  _11 = _8 + _10;
  if (_6 >= _11)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 96797603]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 1, 12);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 196528466]:
  # DEBUG BEGIN_STMT
  _12 = NvM_AdminBlockTable[_2].NvMResult;
  if (_12 == 2)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 39777362]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 1, 21);
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 156751105]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_2].NvMDatasetBlockIndex = DataIndex_20(D);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 13> [local count: 1073741824]:
  # Result_13 = PHI <1(3), 1(5), 1(7), 1(9), 1(11), 0(12)>
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_13;

}



;; Function NvM_ASR40_GetDataIndex (NvM_ASR40_GetDataIndex, funcdef_no=6, decl_uid=8898, cgraph_uid=8, symbol_order=7)

Modification phase of node NvM_ASR40_GetDataIndex/7
NvM_ASR40_GetDataIndex (NvM_ASR40_BlockIdType BlockId, uint8 * DataIndex)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  short unsigned int NvM_GlobalGenericStatus.31_1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  short unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  BlockIndex_12 = NvM_GetBlockIndexForValidId (BlockId_10(D));
  # DEBUG BlockIndex => BlockIndex_12
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (BlockIndex_12 == 9)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 2, 10);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.31_1 = NvM_GlobalGenericStatus;
  _13 = NvM_GlobalGenericStatus.31_1 & 1;
  if (_13 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 282617438]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 2, 20);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  if (DataIndex_14(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 100013173]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 2, 14);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 473785868]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_12;
  _3 = NvM_BlockDescriptorTable[_2].blockDesc;
  _4 = _3 >> 7;
  _5 = _4 & 3;
  if (_5 == 2)
    goto <bb 9>; [51.12%]
  else
    goto <bb 10>; [48.88%]

  <bb 9> [local count: 242199335]:
  # DEBUG BEGIN_STMT
  _6 = NvM_AdminBlockTable[_2].NvMDatasetBlockIndex;
  *DataIndex_14(D) = _6;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 231586532]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 2, 11);
  # DEBUG BEGIN_STMT
  *DataIndex_14(D) = 0;

  <bb 11> [local count: 1073741823]:
  # Result_7 = PHI <1(3), 1(5), 1(7), 0(9), 1(10)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function NvM_ASR40_EraseNvBlock (NvM_ASR40_EraseNvBlock, funcdef_no=7, decl_uid=8902, cgraph_uid=9, symbol_order=8)

Modification phase of node NvM_ASR40_EraseNvBlock/8
NvM_ASR40_EraseNvBlock (NvM_ASR40_BlockIdType BlockId)
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
  BlockIndex_12 = NvM_CheckCondEraseNvBlock (BlockId_10(D));
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
  Result_17 = NvM_Queue_InsertStandard (BlockIndex_12, 0B, NvM_EraseNvBlock_Async);
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_17 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 15674853]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMCurrentServiceId = 9;

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



;; Function NvM_ASR40_InvalidateNvBlock (NvM_ASR40_InvalidateNvBlock, funcdef_no=8, decl_uid=8904, cgraph_uid=10, symbol_order=9)

Modification phase of node NvM_ASR40_InvalidateNvBlock/9
NvM_ASR40_InvalidateNvBlock (NvM_ASR40_BlockIdType BlockId)
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
  BlockIndex_12 = NvM_CheckCondInvalidateNvBlock (BlockId_10(D));
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
  Result_17 = NvM_Queue_InsertStandard (BlockIndex_12, 0B, NvM_InvalidateNvBlock_Async);
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_17 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 15674853]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMCurrentServiceId = 11;

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



;; Function NvM_ASR40_SetBlockProtection (NvM_ASR40_SetBlockProtection, funcdef_no=9, decl_uid=8910, cgraph_uid=11, symbol_order=10)

Modification phase of node NvM_ASR40_SetBlockProtection/10
NvM_ASR40_SetBlockProtection (NvM_ASR40_BlockIdType BlockId, boolean ProtectionEnabled)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  short unsigned int NvM_GlobalGenericStatus.34_1;
  int _2;
  short unsigned int _3;
  unsigned char _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _16;
  short unsigned int _22;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  BlockIndex_15 = NvM_GetBlockIndexForValidId (BlockId_13(D));
  # DEBUG BlockIndex => BlockIndex_15
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (BlockIndex_15 == 9)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 3, 10);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.34_1 = NvM_GlobalGenericStatus;
  _16 = NvM_GlobalGenericStatus.34_1 & 1;
  if (_16 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 282617438]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 3, 20);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_15;
  _3 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _22 = _3 & 8;
  if (_22 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 189353683]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 3, 25);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 384445357]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMResult;
  if (_4 != 2)
    goto <bb 9>; [48.88%]
  else
    goto <bb 13>; [51.12%]

  <bb 9> [local count: 187916891]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (ProtectionEnabled_18(D) == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 63891743]:
  # DEBUG BEGIN_STMT
  _5 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _6 = _5 | 2;
  NvM_AdminBlockTable[_2].NvMDynStatus = _6;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 124025148]:
  # DEBUG BEGIN_STMT
  _7 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _8 = _7 & 65533;
  NvM_AdminBlockTable[_2].NvMDynStatus = _8;

  <bb 12> [local count: 187916891]:
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 13> [local count: 1073741824]:
  # Result_9 = PHI <1(3), 1(5), 1(7), 1(8), 0(12)>
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_9;

}



;; Function NvM_ASR40_SetRamBlockStatus (NvM_ASR40_SetRamBlockStatus, funcdef_no=10, decl_uid=8907, cgraph_uid=12, symbol_order=11)

Modification phase of node NvM_ASR40_SetRamBlockStatus/11
NvM_ASR40_SetRamBlockStatus (NvM_ASR40_BlockIdType BlockId, boolean BlockChanged)
{
  Std_ReturnType Result;
  uint16 BlockIndex;
  short unsigned int NvM_GlobalGenericStatus.35_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  void * _7;
  long unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  long unsigned int _11;
  unsigned char _12;
  short unsigned int _13;
  short unsigned int _14;
  short unsigned int _18;
  short unsigned int _23;
  unsigned char _33;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG NvM_CurrentBlockDescriptorLocalPtr => 0B
  # DEBUG BEGIN_STMT
  BlockIndex_22 = NvM_GetBlockIndexForValidId (BlockId_20(D));
  # DEBUG BlockIndex => BlockIndex_22
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (BlockIndex_22 == 9)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 5, 10);
  goto <bb 19>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.35_1 = NvM_GlobalGenericStatus;
  _18 = NvM_GlobalGenericStatus.35_1 & 1;
  if (_18 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 282617438]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 5, 20);
  goto <bb 19>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_22;
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 116136926]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 5, 21);
  goto <bb 19>; [100.00%]

  <bb 8> [local count: 457662114]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _23 = _4 & 8;
  if (_23 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 151028498]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 5, 25);
  goto <bb 19>; [100.00%]

  <bb 10> [local count: 306633616]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &NvM_BlockDescriptorTable[_2]
  # DEBUG NvM_CurrentBlockDescriptorLocalPtr => D#2
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct NvM_BlockDescriptorType *)&NvM_BlockDescriptorTable][_2].blockDesc;
  _6 = _5 & 4194304;
  if (_6 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 11> [local count: 153316808]:
  _7 = MEM[(const struct NvM_BlockDescriptorType *)&NvM_BlockDescriptorTable][_2].ramBlockDataAddress;
  if (_7 != 0B)
    goto <bb 13>; [53.47%]
  else
    goto <bb 12>; [46.53%]

  <bb 12> [local count: 71338311]:
  _8 = _5 & 131072;
  if (_8 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 13> [local count: 117647653]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (BlockChanged_25(D) == 1)
    goto <bb 14>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 14> [local count: 40000202]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_2].NvMValid = 165;
  # DEBUG BEGIN_STMT
  _9 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _10 = _9 | 8193;
  NvM_AdminBlockTable[_2].NvMDynStatus = _10;
  # DEBUG BEGIN_STMT
  _11 = _5 & 8;
  if (_11 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 15> [local count: 20000101]:
  _12 = NvM_AdminBlockTable[_2].NvMExtendedStatus;
  _33 = _12 & 2;
  if (_33 == 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 16> [local count: 6600033]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_2].NvMResult = 0;
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_EnqueueElement (BlockIndex_22);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 77647451]:
  # DEBUG BEGIN_STMT
  _13 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _14 = _13 & 65534;
  NvM_AdminBlockTable[_2].NvMDynStatus = _14;
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_2].NvMValid = 255;

  <bb 18> [local count: 117647653]:
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 19> [local count: 1073741823]:
  # Result_15 = PHI <1(3), 1(5), 1(7), 1(9), 0(18), 1(10), 1(12)>
  # DEBUG Result => Result_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_15;

}



;; Function NvM_SetBlockLockStatus (NvM_SetBlockLockStatus, funcdef_no=11, decl_uid=8948, cgraph_uid=13, symbol_order=12)

Modification phase of node NvM_SetBlockLockStatus/12
NvM_SetBlockLockStatus (NvM_ASR40_BlockIdType BlockId, boolean BlockLocked)
{
  uint16 BlockIndex;
  short unsigned int NvM_GlobalGenericStatus.36_1;
  int _2;
  unsigned char _3;
  void * _4;
  long unsigned int _5;
  long unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _25;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  BlockIndex_16 = NvM_GetBlockIndexForValidId (BlockId_14(D));
  # DEBUG BlockIndex => BlockIndex_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.36_1 = NvM_GlobalGenericStatus;
  _25 = NvM_GlobalGenericStatus.36_1 & 1;
  if (_25 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 19, 20);
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (BlockIndex_16 == 9)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 19, 10);
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 573799040]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_16;
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 116136926]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 19, 21);
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 457662113]:
  # DEBUG BEGIN_STMT
  _4 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_4 != 0B)
    goto <bb 10>; [53.47%]
  else
    goto <bb 9>; [46.53%]

  <bb 9> [local count: 212950181]:
  _5 = NvM_BlockDescriptorTable[_2].blockDesc;
  _6 = _5 & 131072;
  if (_6 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 10> [local count: 351187023]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (BlockLocked_18(D) == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 119403588]:
  # DEBUG BEGIN_STMT
  _7 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _8 = _7 | 8;
  NvM_AdminBlockTable[_2].NvMDynStatus = _8;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 231783435]:
  # DEBUG BEGIN_STMT
  _9 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _10 = _9 & 65527;
  NvM_AdminBlockTable[_2].NvMDynStatus = _10;

  <bb 13> [local count: 351187023]:
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();

  <bb 14> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function NvM_ASR40_CancelJobs (NvM_ASR40_CancelJobs, funcdef_no=12, decl_uid=8900, cgraph_uid=14, symbol_order=13)

Modification phase of node NvM_ASR40_CancelJobs/13
NvM_ASR40_CancelJobs (NvM_BlockIdType BlockId)
{
  boolean RequestFound;
  uint16 Queue_Standard_TopIndex;
  struct NvM_QueueItemType QueueTemp;
  uint16 QueueCopyIndex;
  uint16 QueueIndex;
  Std_ReturnType Result;
  uint16 BlockIndex;
  short unsigned int NvM_Queue_IndexStandard.37_1;
  short unsigned int NvM_Queue_CancelledStandardJobs.38_2;
  int _3;
  unsigned char _4;
  short unsigned int NvM_GlobalBlockNumber.39_5;
  short unsigned int _6;
  int _7;
  short unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  int _11;
  unsigned int _12;
  unsigned int _13;

  <bb 2> [local count: 1047196343]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RequestFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_28 = NvM_CheckCondCancelJobs (BlockId_26(D));
  # DEBUG BlockIndex => BlockIndex_28
  # DEBUG BEGIN_STMT
  if (BlockIndex_28 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 15>; [51.12%]

  <bb 3> [local count: 511869572]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.37_1 = NvM_Queue_IndexStandard;
  NvM_Queue_CancelledStandardJobs.38_2 = NvM_Queue_CancelledStandardJobs;
  Queue_Standard_TopIndex_30 = NvM_Queue_IndexStandard.37_1 - NvM_Queue_CancelledStandardJobs.38_2;
  # DEBUG Queue_Standard_TopIndex => Queue_Standard_TopIndex_30
  # DEBUG BEGIN_STMT
  _3 = (int) BlockIndex_28;
  _4 = NvM_AdminBlockTable[_3].NvMResult;
  if (_4 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 4> [local count: 174035655]:
  NvM_GlobalBlockNumber.39_5 = NvM_GlobalBlockNumber;
  if (NvM_GlobalBlockNumber.39_5 != BlockIndex_28)
    goto <bb 5>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 5> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMResult = 6;
  # DEBUG BEGIN_STMT
  _6 = NvM_Queue_CancelledStandardJobs.38_2 + 1;
  NvM_Queue_CancelledStandardJobs = _6;
  # DEBUG BEGIN_STMT
  # DEBUG QueueIndex => Queue_Standard_TopIndex_30
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 958878294]:
  # DEBUG BEGIN_STMT
  _7 = (int) QueueIndex_16;
  _8 = NvM_Queue_Standard[_7].NvMBlockDescriptorIndex;
  if (_8 == BlockIndex_28)
    goto <bb 7>; [16.00%]
  else
    goto <bb 11>; [84.00%]

  <bb 7> [local count: 153420527]:
  # DEBUG BEGIN_STMT
  QueueTemp = NvM_Queue_Standard[_7];
  # DEBUG BEGIN_STMT
  # DEBUG QueueCopyIndex => QueueIndex_16
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 613682110]:
  # DEBUG BEGIN_STMT
  _9 = (unsigned int) QueueCopyIndex_17;
  _10 = _9 + 1;
  _11 = (int) QueueCopyIndex_17;
  NvM_Queue_Standard[_11] = NvM_Queue_Standard[_10];
  # DEBUG BEGIN_STMT
  QueueCopyIndex_36 = QueueCopyIndex_17 + 1;
  # DEBUG QueueCopyIndex => QueueCopyIndex_36

  <bb 9> [local count: 767102639]:
  # QueueCopyIndex_17 = PHI <QueueIndex_16(7), QueueCopyIndex_36(8)>
  # DEBUG QueueCopyIndex => QueueCopyIndex_17
  # DEBUG BEGIN_STMT
  if (QueueCopyIndex_17 < Queue_Standard_TopIndex_30)
    goto <bb 8>; [80.00%]
  else
    goto <bb 10>; [20.00%]

  <bb 10> [local count: 153420527]:
  # DEBUG BEGIN_STMT
  _12 = (unsigned int) _6;
  _13 = 4 - _12;
  NvM_Queue_Standard[_13] = QueueTemp;
  # DEBUG BEGIN_STMT
  # DEBUG RequestFound => 1

  <bb 11> [local count: 958878294]:
  # RequestFound_18 = PHI <0(6), 1(10)>
  # DEBUG RequestFound => RequestFound_18
  # DEBUG BEGIN_STMT
  QueueIndex_37 = QueueIndex_16 + 65535;
  # DEBUG QueueIndex => QueueIndex_37

  <bb 12> [local count: 1073741824]:
  # QueueIndex_16 = PHI <Queue_Standard_TopIndex_30(5), QueueIndex_37(11)>
  # RequestFound_19 = PHI <0(5), RequestFound_18(11)>
  # DEBUG RequestFound => RequestFound_19
  # DEBUG QueueIndex => QueueIndex_16
  # DEBUG BEGIN_STMT
  if (QueueIndex_16 != 65535)
    goto <bb 13>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 13> [local count: 1014686024]:
  if (RequestFound_19 == 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 511869572]:
  # Result_14 = PHI <1(3), 1(4), 0(13), 0(12)>
  # DEBUG Result => Result_14
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();

  <bb 15> [local count: 1047196342]:
  # Result_15 = PHI <1(2), Result_14(14)>
  # DEBUG Result => Result_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  QueueTemp ={v} {CLOBBER};
  return Result_15;

}



;; Function NvM_JobEndNotification (NvM_JobEndNotification, funcdef_no=13, decl_uid=9340, cgraph_uid=15, symbol_order=14)

Modification phase of node NvM_JobEndNotification/14
NvM_JobEndNotification ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function NvM_JobErrorNotification (NvM_JobErrorNotification, funcdef_no=25, decl_uid=9342, cgraph_uid=16, symbol_order=15)

Modification phase of node NvM_JobErrorNotification/15
NvM_JobErrorNotification ()
{
  <bb 2> [local count: 1073741824]:
  NvM_JobEndNotification (); [tail call]
  return;

}


