
IPA constant propagation start:
Determining dynamic type for call: ReturnVal_11 = WriteCallback_8(D) (DataBufPtr_9(D));
  Starting walk at: ReturnVal_11 = WriteCallback_8(D) (DataBufPtr_9(D));
  instance pointer: DataBufPtr_9(D)  Outer instance pointer: DataBufPtr_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ReturnVal_13 = ReadCallback_6(D) (DataBufPtr_9(D));
  Starting walk at: ReturnVal_13 = ReadCallback_6(D) (DataBufPtr_9(D));
  instance pointer: DataBufPtr_9(D)  Outer instance pointer: DataBufPtr_9(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_GetBufferAddress.part.0/60:
    callsite  NvM_GetBufferAddress.part.0/60 -> NvM_GetUserRamBlockAddress/22 : 
  Jump functions of caller  NvM_GetUserRamBlockAddress.part.0/59:
    callsite  NvM_GetUserRamBlockAddress.part.0/59 -> NvM_FatalError/48 : 
  Jump functions of caller  Det_ASR40_ReportError/58:
  Jump functions of caller  NvM_Queue_InsertStandard/57:
  Jump functions of caller  NvM_RestoreBlockDefaults_Asc/56:
  Jump functions of caller  NvM_RestorePRAMBlockDefaults_Asc/55:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/54:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/53:
  Jump functions of caller  Fee_SetMode/52:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/51:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/50:
  Jump functions of caller  NvM_FatalError/48:
  Jump functions of caller  NvM_CheckCondEraseNvBlock/47:
  Jump functions of caller  NvM_CheckCondInvalidateNvBlock/46:
  Jump functions of caller  NvM_CheckCondCancelJobs/45:
  Jump functions of caller  NvM_CheckCondRestorePRAMBlockDefaults/44:
  Jump functions of caller  NvM_CheckCondWritePRAMBlock/43:
  Jump functions of caller  NvM_CheckCondReadPRAMBlock/42:
  Jump functions of caller  NvM_CheckCondRestoreBlockDefaults/41:
  Jump functions of caller  NvM_CheckCondWriteBlock/40:
  Jump functions of caller  NvM_CheckCondReadBlock/39:
  Jump functions of caller  NvM_InsertRestoreBlockJob/38:
  Jump functions of caller  NvM_CheckBlockStatus/37:
  Jump functions of caller  NvM_MirrorCopy/36:
    indirect simple callsite, calling param 1, offset 0, for stmt ReturnVal_11 = WriteCallback_8(D) (DataBufPtr_9(D));
       param 0: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param 0, offset 0, for stmt ReturnVal_13 = ReadCallback_6(D) (DataBufPtr_9(D));
       param 0: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  NvM_GetDataAddress/35:
    callsite  NvM_GetDataAddress/35 -> NvM_GetBufferAddress/34 : 
  Jump functions of caller  NvM_GetBufferAddress/34:
    callsite  NvM_GetBufferAddress/34 -> NvM_GetBufferAddress.part.0/60 : 
  Jump functions of caller  NvM_GetBlockLength/33:
  Jump functions of caller  NvM_GetBlockCRCLength/32:
  Jump functions of caller  NvM_CheckDataSetRomBlock/31:
  Jump functions of caller  NvM_CheckWriteProtection/30:
    callsite  NvM_CheckWriteProtection/30 -> NvM_CheckDataSetRomBlock/31 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  NvM_InvokeSingleBlockCallback/29:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (ServiceId_6(D), ErrorStatus_7(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  NvM_MultiPostService_Function/28:
  Jump functions of caller  NvM_PostService_Function/27:
  Jump functions of caller  NvM_PreService_Function/26:
  Jump functions of caller  NvM_MultiRequestFinishedSingleBlock/25:
    callsite  NvM_MultiRequestFinishedSingleBlock/25 -> NvM_InvokeSingleBlockCallback/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  NvM_MultiRequestFinishedSingleBlock/25 -> NvM_PostService_Function/27 : 
  Jump functions of caller  NvM_ResetRedundantBlockDataIndex/24:
  Jump functions of caller  NvM_GetMergedBlockNumber/23:
  Jump functions of caller  NvM_GetUserRamBlockAddress/22:
    callsite  NvM_GetUserRamBlockAddress/22 -> NvM_GetUserRamBlockAddress.part.0/59 : 
  Jump functions of caller  NvM_SetPermanentRamBlockChanged/21:
  Jump functions of caller  NvM_SetPermanentRamBlockUnchanged/20:
  Jump functions of caller  NvM_SetPermanentRamBlockValid/19:
  Jump functions of caller  NvM_SetPermanentRamBlockInvalid/18:
  Jump functions of caller  NvM_GetBlockIndexForValidId/17:

 Propagating constants:

Not considering NvM_CheckCondEraseNvBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondInvalidateNvBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondCancelJobs for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondRestorePRAMBlockDefaults for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondWritePRAMBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondReadPRAMBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondRestoreBlockDefaults for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondWriteBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCondReadBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_InsertRestoreBlockJob for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckBlockStatus for cloning; -fipa-cp-clone disabled.
Not considering NvM_MirrorCopy for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetDataAddress for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetBufferAddress for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetBlockLength for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetBlockCRCLength for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckDataSetRomBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckWriteProtection for cloning; -fipa-cp-clone disabled.
Not considering NvM_InvokeSingleBlockCallback for cloning; -fipa-cp-clone disabled.
Not considering NvM_MultiPostService_Function for cloning; -fipa-cp-clone disabled.
Not considering NvM_PostService_Function for cloning; -fipa-cp-clone disabled.
Not considering NvM_PreService_Function for cloning; -fipa-cp-clone disabled.
Not considering NvM_MultiRequestFinishedSingleBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_ResetRedundantBlockDataIndex for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetMergedBlockNumber for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetUserRamBlockAddress for cloning; -fipa-cp-clone disabled.
Not considering NvM_SetPermanentRamBlockChanged for cloning; -fipa-cp-clone disabled.
Not considering NvM_SetPermanentRamBlockUnchanged for cloning; -fipa-cp-clone disabled.
Not considering NvM_SetPermanentRamBlockValid for cloning; -fipa-cp-clone disabled.
Not considering NvM_SetPermanentRamBlockInvalid for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetBlockIndexForValidId for cloning; -fipa-cp-clone disabled.

overall_size: 706, max_new_size: 11001
 - context independent values, size: 33, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: NvM_GetBufferAddress.part.0/60:
  Node: NvM_GetUserRamBlockAddress.part.0/59:
  Node: NvM_FatalError/48:
  Node: NvM_CheckCondEraseNvBlock/47:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCondInvalidateNvBlock/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCondCancelJobs/45:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCondRestorePRAMBlockDefaults/44:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCondWritePRAMBlock/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCondReadPRAMBlock/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCondRestoreBlockDefaults/41:
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
  Node: NvM_CheckCondWriteBlock/40:
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
  Node: NvM_CheckCondReadBlock/39:
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
  Node: NvM_InsertRestoreBlockJob/38:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckBlockStatus/37:
  Node: NvM_MirrorCopy/36:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_GetDataAddress/35:
  Node: NvM_GetBufferAddress/34:
  Node: NvM_GetBlockLength/33:
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
  Node: NvM_GetBlockCRCLength/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckDataSetRomBlock/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckWriteProtection/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_InvokeSingleBlockCallback/29:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_MultiPostService_Function/28:
  Node: NvM_PostService_Function/27:
  Node: NvM_PreService_Function/26:
  Node: NvM_MultiRequestFinishedSingleBlock/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_ResetRedundantBlockDataIndex/24:
  Node: NvM_GetMergedBlockNumber/23:
  Node: NvM_GetUserRamBlockAddress/22:
  Node: NvM_SetPermanentRamBlockChanged/21:
  Node: NvM_SetPermanentRamBlockUnchanged/20:
  Node: NvM_SetPermanentRamBlockValid/19:
  Node: NvM_SetPermanentRamBlockInvalid/18:
  Node: NvM_GetBlockIndexForValidId/17:
    param [0]: BOTTOM
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

NvM_GetBufferAddress.part.0/60 (NvM_GetBufferAddress.part.0) @0736d2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalWorkingStatus/11 (read)NvM_InternalBuffer/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_GetBufferAddress/34 (536870912 (estimated locally),0.50 per call) 
  Calls: NvM_GetUserRamBlockAddress/22 (354334802 (estimated locally),0.33 per call) 
NvM_GetUserRamBlockAddress.part.0/59 (NvM_GetUserRamBlockAddress.part.0) @06e54ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_CurrentBlockDescriptorPtr/15 (read)NvM_GlobalBlockNumber/14 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_GetUserRamBlockAddress/22 (161061272 (estimated locally),0.15 per call) 
  Calls: NvM_FatalError/48 (85255101 (estimated locally),0.08 per call) 
Det_ASR40_ReportError/58 (Det_ASR40_ReportError) @0723dd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CheckCondEraseNvBlock/47 (80404865 (estimated locally),0.07 per call) NvM_CheckCondEraseNvBlock/47 (101726802 (estimated locally),0.09 per call) NvM_CheckCondEraseNvBlock/47 (66307801 (estimated locally),0.06 per call) NvM_CheckCondEraseNvBlock/47 (146286586 (estimated locally),0.14 per call) NvM_CheckCondEraseNvBlock/47 (375809639 (estimated locally),0.35 per call) NvM_CheckCondInvalidateNvBlock/46 (101726802 (estimated locally),0.09 per call) NvM_CheckCondInvalidateNvBlock/46 (66307801 (estimated locally),0.06 per call) NvM_CheckCondInvalidateNvBlock/46 (146286586 (estimated locally),0.14 per call) NvM_CheckCondInvalidateNvBlock/46 (375809639 (estimated locally),0.35 per call) NvM_CheckCondCancelJobs/45 (146286586 (estimated locally),0.14 per call) NvM_CheckCondCancelJobs/45 (375809639 (estimated locally),0.35 per call) NvM_CheckCondRestorePRAMBlockDefaults/44 (13931129 (estimated locally),0.01 per call) NvM_CheckCondRestorePRAMBlockDefaults/44 (30518041 (estimated locally),0.03 per call) NvM_CheckCondRestorePRAMBlockDefaults/44 (66307801 (estimated locally),0.06 per call) NvM_CheckCondRestorePRAMBlockDefaults/44 (146286586 (estimated locally),0.14 per call) NvM_CheckCondRestorePRAMBlockDefaults/44 (375809639 (estimated locally),0.35 per call) NvM_CheckCondWritePRAMBlock/43 (24121459 (estimated locally),0.02 per call) NvM_CheckCondWritePRAMBlock/43 (101726802 (estimated locally),0.09 per call) NvM_CheckCondWritePRAMBlock/43 (66307801 (estimated locally),0.06 per call) NvM_CheckCondWritePRAMBlock/43 (146286586 (estimated locally),0.14 per call) NvM_CheckCondWritePRAMBlock/43 (375809639 (estimated locally),0.35 per call) NvM_CheckCondReadPRAMBlock/42 (30518041 (estimated locally),0.03 per call) NvM_CheckCondReadPRAMBlock/42 (66307801 (estimated locally),0.06 per call) NvM_CheckCondReadPRAMBlock/42 (146286586 (estimated locally),0.14 per call) NvM_CheckCondReadPRAMBlock/42 (375809639 (estimated locally),0.35 per call) NvM_CheckCondRestoreBlockDefaults/41 (14638226 (estimated locally),0.01 per call) NvM_CheckCondRestoreBlockDefaults/41 (7432948 (estimated locally),0.01 per call) NvM_CheckCondRestoreBlockDefaults/41 (66307801 (estimated locally),0.06 per call) NvM_CheckCondRestoreBlockDefaults/41 (146286586 (estimated locally),0.14 per call) NvM_CheckCondRestoreBlockDefaults/41 (375809639 (estimated locally),0.35 per call) NvM_CheckCondWriteBlock/40 (5875002 (estimated locally),0.01 per call) NvM_CheckCondWriteBlock/40 (101726802 (estimated locally),0.09 per call) NvM_CheckCondWriteBlock/40 (66307801 (estimated locally),0.06 per call) NvM_CheckCondWriteBlock/40 (146286586 (estimated locally),0.14 per call) NvM_CheckCondWriteBlock/40 (375809639 (estimated locally),0.35 per call) NvM_CheckCondReadBlock/39 (7432948 (estimated locally),0.01 per call) NvM_CheckCondReadBlock/39 (66307801 (estimated locally),0.06 per call) NvM_CheckCondReadBlock/39 (146286586 (estimated locally),0.14 per call) NvM_CheckCondReadBlock/39 (375809639 (estimated locally),0.35 per call) 
  Calls: 
NvM_Queue_InsertStandard/57 (NvM_Queue_InsertStandard) @0723de00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InsertRestoreBlockJob/38 (457927265 (estimated locally),0.43 per call) 
  Calls: 
NvM_RestoreBlockDefaults_Asc/56 (NvM_RestoreBlockDefaults_Asc) @0723dc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_InsertRestoreBlockJob/38 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_RestorePRAMBlockDefaults_Asc/55 (NvM_RestorePRAMBlockDefaults_Asc) @0723db60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_InsertRestoreBlockJob/38 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_CalcCrc_RemoveElement/54 (NvM_CalcCrc_RemoveElement) @0723d7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MirrorCopy/36 (108662673 (estimated locally),0.10 per call) 
  Calls: 
NvM_StateMachine_TerminateCurrentLevel/53 (NvM_StateMachine_TerminateCurrentLevel) @0723d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MirrorCopy/36 (536870913 (estimated locally),0.50 per call) NvM_MultiPostService_Function/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_SetMode/52 (Fee_SetMode) @0722de00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_MultiPostService_Function/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/51 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @0722dee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InsertRestoreBlockJob/38 (1073741824 (estimated locally),1.00 per call) NvM_CheckBlockStatus/37 (1073741824 (estimated locally),1.00 per call) NvM_PostService_Function/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/50 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @0722dd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_InsertRestoreBlockJob/38 (1073741823 (estimated locally),1.00 per call) NvM_CheckBlockStatus/37 (1073741824 (estimated locally),1.00 per call) NvM_PostService_Function/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_BlockDescriptorTable/49 (NvM_BlockDescriptorTable) @07206c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CheckCondWritePRAMBlock/43 (read)NvM_CheckCondRestorePRAMBlockDefaults/44 (read)NvM_GetUserRamBlockAddress.part.0/59 (read)NvM_GetMergedBlockNumber/23 (read)NvM_CheckCondReadPRAMBlock/42 (read)NvM_PreService_Function/26 (addr)NvM_CheckCondWritePRAMBlock/43 (read)NvM_MultiPostService_Function/28 (addr)NvM_CheckCondRestoreBlockDefaults/41 (read)NvM_InsertRestoreBlockJob/38 (read)NvM_CheckCondReadPRAMBlock/42 (read)NvM_CheckCondRestoreBlockDefaults/41 (read)NvM_InvokeSingleBlockCallback/29 (read)NvM_CheckDataSetRomBlock/31 (read)NvM_CheckDataSetRomBlock/31 (read)NvM_InsertRestoreBlockJob/38 (read)NvM_InsertRestoreBlockJob/38 (read)NvM_CheckCondRestoreBlockDefaults/41 (read)NvM_CheckCondRestoreBlockDefaults/41 (read)NvM_CheckCondReadBlock/39 (read)NvM_CheckCondReadBlock/39 (read)NvM_CheckCondWriteBlock/40 (read)NvM_CheckCondWriteBlock/40 (read)NvM_CheckCondRestorePRAMBlockDefaults/44 (read)NvM_CheckCondRestorePRAMBlockDefaults/44 (read)NvM_CheckCondRestorePRAMBlockDefaults/44 (read)NvM_CheckCondEraseNvBlock/47 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_FatalError/48 (NvM_FatalError) @07229ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_GlobalCallLevel/4 (write)NvM_GlobalErrorStatus/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_GetUserRamBlockAddress.part.0/59 (85255101 (estimated locally),0.08 per call) 
  Calls: 
NvM_CheckCondEraseNvBlock/47 (NvM_CheckCondEraseNvBlock) @07229d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (80404865 (estimated locally),0.07 per call) Det_ASR40_ReportError/58 (101726802 (estimated locally),0.09 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondInvalidateNvBlock/46 (NvM_CheckCondInvalidateNvBlock) @07229620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_AdminBlockTable/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (101726802 (estimated locally),0.09 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondCancelJobs/45 (NvM_CheckCondCancelJobs) @07229000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondRestorePRAMBlockDefaults/44 (NvM_CheckCondRestorePRAMBlockDefaults) @07203b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (13931129 (estimated locally),0.01 per call) Det_ASR40_ReportError/58 (30518041 (estimated locally),0.03 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondWritePRAMBlock/43 (NvM_CheckCondWritePRAMBlock) @07203380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (24121459 (estimated locally),0.02 per call) Det_ASR40_ReportError/58 (101726802 (estimated locally),0.09 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondReadPRAMBlock/42 (NvM_CheckCondReadPRAMBlock) @071feb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (30518041 (estimated locally),0.03 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondRestoreBlockDefaults/41 (NvM_CheckCondRestoreBlockDefaults) @071fe460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (14638226 (estimated locally),0.01 per call) Det_ASR40_ReportError/58 (7432948 (estimated locally),0.01 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondWriteBlock/40 (NvM_CheckCondWriteBlock) @071fbc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (5875002 (estimated locally),0.01 per call) Det_ASR40_ReportError/58 (101726802 (estimated locally),0.09 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_CheckCondReadBlock/39 (NvM_CheckCondReadBlock) @071fb460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/58 (7432948 (estimated locally),0.01 per call) Det_ASR40_ReportError/58 (66307801 (estimated locally),0.06 per call) Det_ASR40_ReportError/58 (146286586 (estimated locally),0.14 per call) Det_ASR40_ReportError/58 (375809639 (estimated locally),0.35 per call) 
NvM_InsertRestoreBlockJob/38 (NvM_InsertRestoreBlockJob) @071f5d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_BlockDescriptorTable/49 (read)NvM_RestorePRAMBlockDefaults_Asc/55 (addr)NvM_RestoreBlockDefaults_Asc/56 (addr)NvM_BlockDescriptorTable/49 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)NvM_AdminBlockTable/1 (read)NvM_AdminBlockTable/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/51 (1073741824 (estimated locally),1.00 per call) NvM_Queue_InsertStandard/57 (457927265 (estimated locally),0.43 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/50 (1073741823 (estimated locally),1.00 per call) 
NvM_CheckBlockStatus/37 (NvM_CheckBlockStatus) @071f5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/14 (read)NvM_AdminBlockTable/1 (read)NvM_GlobalGenericStatus/6 (read)NvM_GlobalGenericStatus/6 (write)NvM_GlobalGenericStatus/6 (read)NvM_GlobalGenericStatus/6 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/51 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/50 (1073741824 (estimated locally),1.00 per call) 
NvM_MirrorCopy/36 (NvM_MirrorCopy) @071f58c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_MirrorRetryCount/8 (write)NvM_GlobalErrorStatus/3 (write)NvM_CurrentServiceId/7 (read)NvM_MirrorRetryCount/8 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_TerminateCurrentLevel/53 (536870913 (estimated locally),0.50 per call) NvM_CalcCrc_RemoveElement/54 (108662673 (estimated locally),0.10 per call) 
   Indirect call(322122547 (estimated locally),0.30 per call)  of param:1 (vptr maybe changed)
   Indirect call(751619278 (estimated locally),0.70 per call)  of param:0 (vptr maybe changed)
NvM_GetDataAddress/35 (NvM_GetDataAddress) @071f5700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_GetBufferAddress/34 (1073741824 (estimated locally),1.00 per call) 
NvM_GetBufferAddress/34 (NvM_GetBufferAddress) @071f5540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CurrentBlockDescriptorPtr/15 (read)NvM_InternalBuffer/12 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_GetDataAddress/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_GetBufferAddress.part.0/60 (536870912 (estimated locally),0.50 per call) 
NvM_GetBlockLength/33 (NvM_GetBlockLength) @071f52a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_GetBlockCRCLength/32 (NvM_GetBlockCRCLength) @071f50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CheckDataSetRomBlock/31 (NvM_CheckDataSetRomBlock) @071edc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_BlockDescriptorTable/49 (read)NvM_AdminBlockTable/1 (read)NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_CheckWriteProtection/30 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_CheckWriteProtection/30 (NvM_CheckWriteProtection) @071ed9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CheckDataSetRomBlock/31 (536870913 (estimated locally),0.50 per call) 
NvM_InvokeSingleBlockCallback/29 (NvM_InvokeSingleBlockCallback) @071ed7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_BlockDescriptorTable/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_MultiRequestFinishedSingleBlock/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(751619278 (estimated locally),0.70 per call) 
NvM_MultiPostService_Function/28 (NvM_MultiPostService_Function) @071ed620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/14 (write)NvM_CurrentBlockDescriptorPtr/15 (write)NvM_BlockDescriptorTable/49 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_TerminateCurrentLevel/53 (1073741824 (estimated locally),1.00 per call) Fee_SetMode/52 (1073741824 (estimated locally),1.00 per call) 
NvM_PostService_Function/27 (NvM_PostService_Function) @071ed460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/11 (read)NvM_GlobalBlockNumber/14 (read)NvM_AdminBlockTable/1 (write)NvM_GlobalGenericStatus/6 (read)NvM_AdminBlockTable/1 (write)NvM_GlobalGenericStatus/6 (write)NvM_GlobalGenericStatus/6 (read)NvM_GlobalGenericStatus/6 (write)NvM_AdminBlockTable/1 (write)NvM_GlobalGenericStatus/6 (write)NvM_AdminBlockTable/1 (write)NvM_GlobalErrorStatus/3 (read)NvM_AdminBlockTable/1 (write)NvM_TempRamBlockAddress/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_MultiRequestFinishedSingleBlock/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/51 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/50 (1073741824 (estimated locally),1.00 per call) 
NvM_PreService_Function/26 (NvM_PreService_Function) @071e9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/14 (read)NvM_BlockDescriptorTable/49 (addr)NvM_CurrentBlockDescriptorPtr/15 (write)NvM_AdminBlockTable/1 (read)NvM_GlobalWorkingStatus/11 (write)NvM_TempRamBlockAddress/13 (read)NvM_GlobalWorkingStatus/11 (write)NvM_GlobalWorkingStatus/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_MultiRequestFinishedSingleBlock/25 (NvM_MultiRequestFinishedSingleBlock) @071e98c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/14 (read)NvM_CurrentServiceId/7 (read)NvM_GlobalErrorStatus/3 (read)NvM_GlobalErrorStatus/3 (read)NvM_AdminBlockTable/1 (write)NvM_GlobalCallLevel/4 (read)NvM_CurrentFunctionPtr/16 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_InvokeSingleBlockCallback/29 (1073741824 (estimated locally),1.00 per call) NvM_PostService_Function/27 (1073741824 (estimated locally),1.00 per call) 
NvM_ResetRedundantBlockDataIndex/24 (NvM_ResetRedundantBlockDataIndex) @071e9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CurrentBlockDescriptorPtr/15 (read)NvM_GlobalBlockNumber/14 (read)NvM_AdminBlockTable/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_GetMergedBlockNumber/23 (NvM_GetMergedBlockNumber) @071e9460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/14 (read)NvM_BlockDescriptorTable/49 (read)NvM_AdminBlockTable/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_GetUserRamBlockAddress/22 (NvM_GetUserRamBlockAddress) @071e92a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/11 (read)NvM_TempRamBlockAddress/13 (read)NvM_InternalBuffer/12 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: NvM_GetBufferAddress.part.0/60 (354334802 (estimated locally),0.33 per call) 
  Calls: NvM_GetUserRamBlockAddress.part.0/59 (161061272 (estimated locally),0.15 per call) 
NvM_SetPermanentRamBlockChanged/21 (NvM_SetPermanentRamBlockChanged) @071e9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/11 (read)NvM_GlobalWorkingStatus/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_SetPermanentRamBlockUnchanged/20 (NvM_SetPermanentRamBlockUnchanged) @071b5c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/11 (read)NvM_GlobalWorkingStatus/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_SetPermanentRamBlockValid/19 (NvM_SetPermanentRamBlockValid) @071b57e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/11 (read)NvM_GlobalBlockNumber/14 (read)NvM_AdminBlockTable/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_SetPermanentRamBlockInvalid/18 (NvM_SetPermanentRamBlockInvalid) @071b5460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalWorkingStatus/11 (read)NvM_GlobalBlockNumber/14 (read)NvM_AdminBlockTable/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_GetBlockIndexForValidId/17 (NvM_GetBlockIndexForValidId) @071b50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CurrentFunctionPtr/16 (NvM_CurrentFunctionPtr) @0719c750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_MultiRequestFinishedSingleBlock/25 (write)
  Availability: available
  Varpool flags: initialized
NvM_CurrentBlockDescriptorPtr/15 (NvM_CurrentBlockDescriptorPtr) @0719c6c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_PreService_Function/26 (write)NvM_MultiPostService_Function/28 (write)NvM_GetUserRamBlockAddress.part.0/59 (read)NvM_ResetRedundantBlockDataIndex/24 (read)NvM_GetBufferAddress/34 (read)
  Availability: available
  Varpool flags: initialized
NvM_GlobalBlockNumber/14 (NvM_GlobalBlockNumber) @0719c678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_MultiPostService_Function/28 (write)NvM_MultiRequestFinishedSingleBlock/25 (read)NvM_SetPermanentRamBlockInvalid/18 (read)NvM_ResetRedundantBlockDataIndex/24 (read)NvM_SetPermanentRamBlockValid/19 (read)NvM_GetUserRamBlockAddress.part.0/59 (read)NvM_PostService_Function/27 (read)NvM_PreService_Function/26 (read)NvM_GetMergedBlockNumber/23 (read)NvM_CheckBlockStatus/37 (read)
  Availability: available
  Varpool flags: initialized
NvM_TempRamBlockAddress/13 (NvM_TempRamBlockAddress) @0719c630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_PreService_Function/26 (read)NvM_GetUserRamBlockAddress/22 (read)NvM_PostService_Function/27 (write)
  Availability: available
  Varpool flags: initialized
NvM_InternalBuffer/12 (NvM_InternalBuffer) @0719c5e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_GetUserRamBlockAddress/22 (addr)NvM_GetBufferAddress.part.0/60 (addr)NvM_GetBufferAddress/34 (addr)
  Availability: available
  Varpool flags:
NvM_GlobalWorkingStatus/11 (NvM_GlobalWorkingStatus) @0719c5a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_PreService_Function/26 (write)NvM_PostService_Function/27 (read)NvM_SetPermanentRamBlockChanged/21 (write)NvM_GetUserRamBlockAddress/22 (read)NvM_SetPermanentRamBlockInvalid/18 (read)NvM_SetPermanentRamBlockUnchanged/20 (read)NvM_SetPermanentRamBlockChanged/21 (read)NvM_SetPermanentRamBlockValid/19 (read)NvM_SetPermanentRamBlockUnchanged/20 (write)NvM_PreService_Function/26 (write)NvM_PreService_Function/26 (write)NvM_GetBufferAddress.part.0/60 (read)
  Availability: available
  Varpool flags:
NvM_RamBlockCrcCalcCount/10 (NvM_RamBlockCrcCalcCount) @0719c558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
NvM_CrcQueue/9 (NvM_CrcQueue) @0719c510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
NvM_MirrorRetryCount/8 (NvM_MirrorRetryCount) @0719c4c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_MirrorCopy/36 (write)NvM_MirrorCopy/36 (write)
  Availability: available
  Varpool flags:
NvM_CurrentServiceId/7 (NvM_CurrentServiceId) @0719c480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_MultiRequestFinishedSingleBlock/25 (read)NvM_MirrorCopy/36 (read)
  Availability: available
  Varpool flags:
NvM_GlobalGenericStatus/6 (NvM_GlobalGenericStatus) @0719c438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_PostService_Function/27 (write)NvM_CheckBlockStatus/37 (write)NvM_CheckCondReadBlock/39 (read)NvM_CheckCondWriteBlock/40 (read)NvM_CheckCondRestoreBlockDefaults/41 (read)NvM_CheckCondReadPRAMBlock/42 (read)NvM_CheckCondWritePRAMBlock/43 (read)NvM_CheckCondRestorePRAMBlockDefaults/44 (read)NvM_CheckCondCancelJobs/45 (read)NvM_PostService_Function/27 (write)NvM_PostService_Function/27 (read)NvM_PostService_Function/27 (write)NvM_CheckCondInvalidateNvBlock/46 (read)NvM_PostService_Function/27 (read)NvM_CheckBlockStatus/37 (read)NvM_CheckBlockStatus/37 (write)NvM_CheckBlockStatus/37 (read)NvM_CheckCondEraseNvBlock/47 (read)
  Availability: available
  Varpool flags: initialized
NvM_WriteRetryCount/5 (NvM_WriteRetryCount) @0719c3f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
NvM_GlobalCallLevel/4 (NvM_GlobalCallLevel) @0719c3a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_FatalError/48 (write)NvM_MultiRequestFinishedSingleBlock/25 (read)
  Availability: available
  Varpool flags: initialized
NvM_GlobalErrorStatus/3 (NvM_GlobalErrorStatus) @0719c360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_PostService_Function/27 (read)NvM_MultiRequestFinishedSingleBlock/25 (read)NvM_FatalError/48 (write)NvM_MultiRequestFinishedSingleBlock/25 (read)NvM_MirrorCopy/36 (write)
  Availability: available
  Varpool flags: initialized
NvM_ConfigurationId/2 (NvM_ConfigurationId) @0719c318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
NvM_AdminBlockTable/1 (NvM_AdminBlockTable) @0719c2d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_CheckCondRestorePRAMBlockDefaults/44 (read)NvM_CheckCondInvalidateNvBlock/46 (read)NvM_SetPermanentRamBlockInvalid/18 (write)NvM_SetPermanentRamBlockValid/19 (write)NvM_PreService_Function/26 (read)NvM_GetMergedBlockNumber/23 (read)NvM_CheckCondRestoreBlockDefaults/41 (read)NvM_CheckCondReadPRAMBlock/42 (read)NvM_CheckCondWriteBlock/40 (read)NvM_CheckCondWritePRAMBlock/43 (read)NvM_CheckCondWritePRAMBlock/43 (read)NvM_ResetRedundantBlockDataIndex/24 (write)NvM_MultiRequestFinishedSingleBlock/25 (write)NvM_PostService_Function/27 (write)NvM_CheckCondInvalidateNvBlock/46 (read)NvM_CheckDataSetRomBlock/31 (read)NvM_PostService_Function/27 (write)NvM_PostService_Function/27 (write)NvM_PostService_Function/27 (write)NvM_CheckWriteProtection/30 (read)NvM_CheckBlockStatus/37 (read)NvM_PostService_Function/27 (write)NvM_InsertRestoreBlockJob/38 (write)NvM_CheckCondReadBlock/39 (read)NvM_CheckCondWriteBlock/40 (read)NvM_InsertRestoreBlockJob/38 (read)NvM_InsertRestoreBlockJob/38 (read)NvM_CheckCondEraseNvBlock/47 (read)NvM_CheckCondEraseNvBlock/47 (read)
  Availability: available
  Varpool flags: initialized

;; Function NvM_GetBlockIndexForValidId (NvM_GetBlockIndexForValidId, funcdef_no=0, decl_uid=10943, cgraph_uid=2, symbol_order=17)

Modification phase of node NvM_GetBlockIndexForValidId/17
NvM_GetBlockIndexForValidId (const NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = BlockId_3(D) + 65535;
  if (_1 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG RetBlockIndex => 9

  <bb 4> [local count: 1073741824]:
  # RetBlockIndex_2 = PHI <BlockId_3(D)(2), 9(3)>
  # DEBUG RetBlockIndex => RetBlockIndex_2
  # DEBUG BEGIN_STMT
  return RetBlockIndex_2;

}



;; Function NvM_SetPermanentRamBlockInvalid (NvM_SetPermanentRamBlockInvalid, funcdef_no=1, decl_uid=10754, cgraph_uid=3, symbol_order=18)

Modification phase of node NvM_SetPermanentRamBlockInvalid/18
NvM_SetPermanentRamBlockInvalid ()
{
  short unsigned int NvM_GlobalWorkingStatus.0_1;
  short unsigned int NvM_GlobalBlockNumber.1_2;
  int _3;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.0_1 = NvM_GlobalWorkingStatus;
  _7 = NvM_GlobalWorkingStatus.0_1 & 4608;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.1_2 = NvM_GlobalBlockNumber;
  _3 = (int) NvM_GlobalBlockNumber.1_2;
  NvM_AdminBlockTable[_3].NvMValid = 255;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_SetPermanentRamBlockValid (NvM_SetPermanentRamBlockValid, funcdef_no=2, decl_uid=10756, cgraph_uid=4, symbol_order=19)

Modification phase of node NvM_SetPermanentRamBlockValid/19
NvM_SetPermanentRamBlockValid ()
{
  short unsigned int NvM_GlobalWorkingStatus.2_1;
  short unsigned int NvM_GlobalBlockNumber.3_2;
  int _3;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.2_1 = NvM_GlobalWorkingStatus;
  _7 = NvM_GlobalWorkingStatus.2_1 & 4608;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.3_2 = NvM_GlobalBlockNumber;
  _3 = (int) NvM_GlobalBlockNumber.3_2;
  NvM_AdminBlockTable[_3].NvMValid = 165;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_SetPermanentRamBlockUnchanged (NvM_SetPermanentRamBlockUnchanged, funcdef_no=3, decl_uid=10758, cgraph_uid=5, symbol_order=20)

Modification phase of node NvM_SetPermanentRamBlockUnchanged/20
NvM_SetPermanentRamBlockUnchanged ()
{
  short unsigned int NvM_GlobalWorkingStatus.4_1;
  short unsigned int _2;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.4_1 = NvM_GlobalWorkingStatus;
  _6 = NvM_GlobalWorkingStatus.4_1 & 4608;
  if (_6 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = NvM_GlobalWorkingStatus.4_1 & 65534;
  NvM_GlobalWorkingStatus = _2;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_SetPermanentRamBlockChanged (NvM_SetPermanentRamBlockChanged, funcdef_no=4, decl_uid=10760, cgraph_uid=6, symbol_order=21)

Modification phase of node NvM_SetPermanentRamBlockChanged/21
NvM_SetPermanentRamBlockChanged ()
{
  short unsigned int NvM_GlobalWorkingStatus.6_1;
  short unsigned int _2;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.6_1 = NvM_GlobalWorkingStatus;
  _6 = NvM_GlobalWorkingStatus.6_1 & 4608;
  if (_6 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = NvM_GlobalWorkingStatus.6_1 | 1;
  NvM_GlobalWorkingStatus = _2;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_GetUserRamBlockAddress (NvM_GetUserRamBlockAddress, funcdef_no=5, decl_uid=10762, cgraph_uid=7, symbol_order=22)

Modification phase of node NvM_GetUserRamBlockAddress/22
NvM_GetUserRamBlockAddress ()
{
  uint8 * UserRamBlockAddress;
  short unsigned int NvM_GlobalWorkingStatus.8_1;
  uint8 * NvM_TempRamBlockAddress.9_4;
  short unsigned int _7;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.8_1 = NvM_GlobalWorkingStatus;
  _7 = NvM_GlobalWorkingStatus.8_1 & 4096;
  if (_7 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  NvM_TempRamBlockAddress.9_4 = NvM_TempRamBlockAddress;
  if (NvM_TempRamBlockAddress.9_4 != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 4> [local count: 161061272]:
  UserRamBlockAddress_2 = NvM_GetUserRamBlockAddress.part.0 ();

  <bb 5> [local count: 1073741824]:
  # UserRamBlockAddress_5 = PHI <&NvM_InternalBuffer(2), NvM_TempRamBlockAddress.9_4(3), UserRamBlockAddress_2(4)>
  # DEBUG UserRamBlockAddress => UserRamBlockAddress_5
  # DEBUG BEGIN_STMT
  return UserRamBlockAddress_5;

}



;; Function NvM_GetMergedBlockNumber (NvM_GetMergedBlockNumber, funcdef_no=6, decl_uid=10771, cgraph_uid=8, symbol_order=23)

Modification phase of node NvM_GetMergedBlockNumber/23
NvM_GetMergedBlockNumber ()
{
  uint16 ret;
  short unsigned int NvM_GlobalBlockNumber.12_1;
  int _2;
  short unsigned int _3;
  unsigned char _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.12_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.12_1;
  _3 = NvM_BlockDescriptorTable[_2].nvBlockBaseNum;
  _4 = NvM_AdminBlockTable[_2].NvMDatasetBlockIndex;
  _5 = (short unsigned int) _4;
  ret_7 = _3 | _5;
  # DEBUG ret => ret_7
  # DEBUG BEGIN_STMT
  return ret_7;

}



;; Function NvM_ResetRedundantBlockDataIndex (NvM_ResetRedundantBlockDataIndex, funcdef_no=7, decl_uid=10773, cgraph_uid=9, symbol_order=24)

Modification phase of node NvM_ResetRedundantBlockDataIndex/24
NvM_ResetRedundantBlockDataIndex ()
{
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.14_1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _4;
  short unsigned int NvM_GlobalBlockNumber.15_5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.14_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.14_1->blockDesc;
  _3 = _2 >> 7;
  _4 = _3 & 3;
  if (_4 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.15_5 = NvM_GlobalBlockNumber;
  _6 = (int) NvM_GlobalBlockNumber.15_5;
  NvM_AdminBlockTable[_6].NvMDatasetBlockIndex = 0;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_PreService_Function (NvM_PreService_Function, funcdef_no=9, decl_uid=10777, cgraph_uid=11, symbol_order=26)

Modification phase of node NvM_PreService_Function/26
NvM_PreService_Function ()
{
  short unsigned int NvM_GlobalBlockNumber.23_1;
  int _2;
  const struct NvM_BlockDescriptorType * _3;
  short unsigned int _4;
  short unsigned int _5;
  uint8 * NvM_TempRamBlockAddress.26_6;
  long unsigned int _7;
  long unsigned int _8;
  short unsigned int _9;
  void * _10;
  short unsigned int _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.23_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.23_1;
  _3 = &NvM_BlockDescriptorTable[_2];
  NvM_CurrentBlockDescriptorPtr = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMDynStatus;
  # DEBUG BEGIN_STMT
  _5 = _4 & 47275;
  NvM_GlobalWorkingStatus = _5;
  # DEBUG BEGIN_STMT
  NvM_TempRamBlockAddress.26_6 = NvM_TempRamBlockAddress;
  if (NvM_TempRamBlockAddress.26_6 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 3>; [30.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  _7 = _3->blockDesc;
  _8 = _7 & 131072;
  if (_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 161061273]:
  # DEBUG BEGIN_STMT
  _9 = _5 | 4096;
  NvM_GlobalWorkingStatus = _9;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 161061273]:
  # DEBUG BEGIN_STMT
  _10 = _3->ramBlockDataAddress;
  if (_10 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 6> [local count: 112742891]:
  # DEBUG BEGIN_STMT
  _11 = _5 | 512;
  NvM_GlobalWorkingStatus = _11;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function NvM_PostService_Function (NvM_PostService_Function, funcdef_no=10, decl_uid=10779, cgraph_uid=12, symbol_order=27)

Modification phase of node NvM_PostService_Function/27
NvM_PostService_Function ()
{
  short unsigned int NvM_GlobalWorkingStatus.33_1;
  short unsigned int NvM_GlobalBlockNumber.34_2;
  int _3;
  short unsigned int _4;
  short unsigned int NvM_GlobalGenericStatus.35_5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int NvM_GlobalGenericStatus.39_8;
  short unsigned int _9;
  short unsigned int _10;
  unsigned char NvM_GlobalErrorStatus.46_11;
  short unsigned int _26;
  short unsigned int _27;
  short unsigned int _28;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.33_1 = NvM_GlobalWorkingStatus;
  NvM_GlobalBlockNumber.34_2 = NvM_GlobalBlockNumber;
  _3 = (int) NvM_GlobalBlockNumber.34_2;
  _4 = NvM_GlobalWorkingStatus.33_1 & 33023;
  NvM_AdminBlockTable[_3].NvMDynStatus = _4;
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.35_5 = NvM_GlobalGenericStatus;
  _26 = NvM_GlobalGenericStatus.35_5 & 128;
  if (_26 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = _4 | 8193;
  NvM_AdminBlockTable[_3].NvMDynStatus = _6;
  # DEBUG BEGIN_STMT
  _7 = NvM_GlobalGenericStatus.35_5 & 65407;
  NvM_GlobalGenericStatus = _7;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.39_8 = NvM_GlobalGenericStatus;
  _27 = NvM_GlobalGenericStatus.39_8 & 96;
  if (_27 == 32)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _9 = NvM_GlobalGenericStatus.39_8 & 65503;
  NvM_GlobalGenericStatus = _9;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMResult = 2;
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _28 = NvM_GlobalGenericStatus.39_8 & 64;
  if (_28 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _10 = NvM_GlobalGenericStatus.39_8 & 65471;
  NvM_GlobalGenericStatus = _10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_3].NvMResult = 6;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus.46_11 = NvM_GlobalErrorStatus;
  NvM_AdminBlockTable[_3].NvMResult = NvM_GlobalErrorStatus.46_11;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_TempRamBlockAddress = 0B;
  return;

}



;; Function NvM_MultiPostService_Function (NvM_MultiPostService_Function, funcdef_no=11, decl_uid=10785, cgraph_uid=13, symbol_order=28)

Modification phase of node NvM_MultiPostService_Function/28
NvM_MultiPostService_Function ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_SetMode (0);
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber = 0;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr = &NvM_BlockDescriptorTable[0];
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  return;

}



;; Function NvM_InvokeSingleBlockCallback (NvM_InvokeSingleBlockCallback, funcdef_no=12, decl_uid=10783, cgraph_uid=14, symbol_order=29)

Modification phase of node NvM_InvokeSingleBlockCallback/29
NvM_InvokeSingleBlockCallback (uint16 BlockIndex, uint8 ServiceId, uint8 ErrorStatus)
{
  int _1;
  Std_ReturnType (*<Tae3>) (uint8, NvM_RequestResultType) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) BlockIndex_4(D);
  _2 = NvM_BlockDescriptorTable[_1].singleBlockCallback;
  if (_2 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 (ServiceId_6(D), ErrorStatus_7(D));

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_MultiRequestFinishedSingleBlock (NvM_MultiRequestFinishedSingleBlock, funcdef_no=8, decl_uid=10775, cgraph_uid=10, symbol_order=25)

Modification phase of node NvM_MultiRequestFinishedSingleBlock/25
NvM_MultiRequestFinishedSingleBlock (void (*NvM_CurrentFunctionPtrType) (void) NextState)
{
  short unsigned int NvM_GlobalBlockNumber.16_1;
  unsigned char NvM_CurrentServiceId.17_2;
  unsigned char NvM_GlobalErrorStatus.18_3;
  unsigned char NvM_GlobalErrorStatus.19_4;
  unsigned char NvM_GlobalCallLevel.22_5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_PostService_Function ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.16_1 = NvM_GlobalBlockNumber;
  NvM_CurrentServiceId.17_2 = NvM_CurrentServiceId;
  NvM_GlobalErrorStatus.18_3 = NvM_GlobalErrorStatus;
  NvM_InvokeSingleBlockCallback (NvM_GlobalBlockNumber.16_1, NvM_CurrentServiceId.17_2, NvM_GlobalErrorStatus.18_3);
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus.19_4 = NvM_GlobalErrorStatus;
  if (NvM_GlobalErrorStatus.19_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (NvM_GlobalErrorStatus.19_4 != 4)
    goto <bb 4>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 4> [local count: 354334802]:
  if (NvM_GlobalErrorStatus.19_4 != 5)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMDatasetBlockIndex = 1;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.22_5 = NvM_GlobalCallLevel;
  _6 = (int) NvM_GlobalCallLevel.22_5;
  NvM_CurrentFunctionPtr[_6] = NextState_12(D);
  return;

}



;; Function NvM_CheckDataSetRomBlock (NvM_CheckDataSetRomBlock, funcdef_no=14, decl_uid=10789, cgraph_uid=16, symbol_order=31)

Modification phase of node NvM_CheckDataSetRomBlock/31
NvM_CheckDataSetRomBlock (uint16 BlockIndex)
{
  boolean Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  _1 = (int) BlockIndex_8(D);
  _2 = NvM_BlockDescriptorTable[_1].blockDesc;
  _3 = _2 >> 7;
  _4 = _3 & 3;
  if (_4 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  _5 = NvM_AdminBlockTable[_1].NvMDatasetBlockIndex;
  _6 = NvM_BlockDescriptorTable[_1].nvBlockNum;
  if (_5 >= _6)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 5> [local count: 1073741824]:
  # Result_7 = PHI <0(2), 0(3), 1(4)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function NvM_CheckWriteProtection (NvM_CheckWriteProtection, funcdef_no=13, decl_uid=10787, cgraph_uid=15, symbol_order=30)

Modification phase of node NvM_CheckWriteProtection/30
NvM_CheckWriteProtection (uint16 BlockIndex)
{
  boolean Result;
  int _1;
  short unsigned int _2;
  unsigned char _3;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  _1 = (int) BlockIndex_6(D);
  _2 = NvM_AdminBlockTable[_1].NvMDynStatus;
  _5 = _2 & 34;
  if (_5 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = NvM_CheckDataSetRomBlock (BlockIndex_6(D));
  if (_3 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 5> [local count: 1073741824]:
  # Result_4 = PHI <1(2), 0(3), 1(4)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function NvM_GetBlockCRCLength (NvM_GetBlockCRCLength, funcdef_no=15, decl_uid=10791, cgraph_uid=17, symbol_order=32)

Modification phase of node NvM_GetBlockCRCLength/32
NvM_GetBlockCRCLength (uint32 BlockDesc)
{
  uint8 NvMCrcLength;
  unsigned int _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = BlockDesc_3(D) & 7;
  if (_1 == 3)
    goto <bb 6>; [21.72%]
  else
    goto <bb 3>; [78.28%]

  <bb 3> [local count: 840525099]:
  # DEBUG BEGIN_STMT
  if (_1 == 2)
    goto <bb 6>; [21.72%]
  else
    goto <bb 4>; [78.28%]

  <bb 4> [local count: 657963048]:
  # DEBUG BEGIN_STMT
  if (_1 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 434255611]:
  # DEBUG BEGIN_STMT
  # DEBUG NvMCrcLength => 0

  <bb 6> [local count: 1073741824]:
  # NvMCrcLength_2 = PHI <4(2), 2(3), 1(4), 0(5)>
  # DEBUG NvMCrcLength => NvMCrcLength_2
  # DEBUG BEGIN_STMT
  return NvMCrcLength_2;

}



;; Function NvM_GetBlockLength (NvM_GetBlockLength, funcdef_no=16, decl_uid=10765, cgraph_uid=18, symbol_order=33)

Modification phase of node NvM_GetBlockLength/33
NvM_GetBlockLength (uint32 BlockDesc, uint16 BlkLength)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Length => BlkLength_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return BlkLength_1(D);

}



;; Function NvM_GetBufferAddress (NvM_GetBufferAddress, funcdef_no=17, decl_uid=10767, cgraph_uid=19, symbol_order=34)

Modification phase of node NvM_GetBufferAddress/34
NvM_GetBufferAddress ()
{
  uint8 * DataBufPtr;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.47_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.47_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.47_1->blockDesc;
  _3 = _2 & 8192;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870912]:
  DataBufPtr_4 = NvM_GetBufferAddress.part.0 ();

  <bb 4> [local count: 1073741824]:
  # DataBufPtr_6 = PHI <&NvM_InternalBuffer(2), DataBufPtr_4(3)>
  # DEBUG DataBufPtr => DataBufPtr_6
  # DEBUG BEGIN_STMT
  return DataBufPtr_6;

}



;; Function NvM_GetDataAddress (NvM_GetDataAddress, funcdef_no=18, decl_uid=10769, cgraph_uid=20, symbol_order=35)

Modification phase of node NvM_GetDataAddress/35
NvM_GetDataAddress ()
{
  uint8 * DataBufPtr;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  DataBufPtr_3 = NvM_GetBufferAddress ();
  # DEBUG DataBufPtr => DataBufPtr_3
  # DEBUG BEGIN_STMT
  return DataBufPtr_3;

}



;; Function NvM_MirrorCopy (NvM_MirrorCopy, funcdef_no=19, decl_uid=10795, cgraph_uid=21, symbol_order=36)

Modification phase of node NvM_MirrorCopy/36
NvM_MirrorCopy (Std_ReturnType (*NvM_NvToRamCopyCallbackType) (const void *) ReadCallback, Std_ReturnType (*NvM_RamToNvCopyCallbackType) (void *) WriteCallback, uint8 * DataBufPtr)
{
  Std_ReturnType ReturnVal;
  unsigned char NvM_CurrentServiceId.49_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnVal => 1
  # DEBUG BEGIN_STMT
  if (ReadCallback_6(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  ReturnVal_13 = ReadCallback_6(D) (DataBufPtr_9(D));
  # DEBUG ReturnVal => ReturnVal_13
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  ReturnVal_11 = WriteCallback_8(D) (DataBufPtr_9(D));
  # DEBUG ReturnVal => ReturnVal_11

  <bb 5> [local count: 1073741824]:
  # ReturnVal_2 = PHI <ReturnVal_13(3), ReturnVal_11(4)>
  # DEBUG ReturnVal => ReturnVal_2
  # DEBUG BEGIN_STMT
  if (ReturnVal_2 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount = 0;
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId.49_1 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.49_1 == 5)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 108662673]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 8> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount = 0;

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return ReturnVal_2;

}



;; Function NvM_CheckBlockStatus (NvM_CheckBlockStatus, funcdef_no=20, decl_uid=10797, cgraph_uid=22, symbol_order=37)

Modification phase of node NvM_CheckBlockStatus/37
NvM_CheckBlockStatus ()
{
  short unsigned int NvM_GlobalBlockNumber.50_1;
  int _2;
  unsigned char _3;
  short unsigned int NvM_GlobalGenericStatus.51_4;
  short unsigned int _5;
  short unsigned int NvM_GlobalGenericStatus.53_6;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.50_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.50_1;
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.51_4 = NvM_GlobalGenericStatus;
  _5 = NvM_GlobalGenericStatus.51_4 | 32;
  NvM_GlobalGenericStatus = _5;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (_3 == 6)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.53_6 = NvM_GlobalGenericStatus;
  _7 = NvM_GlobalGenericStatus.53_6 | 64;
  NvM_GlobalGenericStatus = _7;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function NvM_InsertRestoreBlockJob (NvM_InsertRestoreBlockJob, funcdef_no=21, decl_uid=10808, cgraph_uid=23, symbol_order=38)

Modification phase of node NvM_InsertRestoreBlockJob/38
NvM_InsertRestoreBlockJob (boolean PRAM, uint16 BlockId, uint16 BlockIndex, void * NvM_DestPtr)
{
  uint8 CurrentServiceId;
  void (*NvM_CurrentFunctionPtrType) (void) StateMachineFunction;
  Std_ReturnType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  int _8;
  int _9;
  int _10;
  int _11;
  unsigned char _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PRAM_17(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG StateMachineFunction => NvM_RestoreBlockDefaults_Asc
  # DEBUG BEGIN_STMT
  # DEBUG CurrentServiceId => 8

  <bb 4> [local count: 1073741823]:
  # StateMachineFunction_14 = PHI <NvM_RestorePRAMBlockDefaults_Asc(2), NvM_RestoreBlockDefaults_Asc(3)>
  # CurrentServiceId_15 = PHI <24(2), 8(3)>
  # DEBUG CurrentServiceId => CurrentServiceId_15
  # DEBUG StateMachineFunction => StateMachineFunction_14
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) BlockIndex_20(D);
  _2 = NvM_BlockDescriptorTable[_1].blockDesc;
  _3 = _2 >> 7;
  _4 = _3 & 3;
  if (_4 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 5> [local count: 365072220]:
  _5 = NvM_BlockDescriptorTable[_1].romBlockNum;
  if (_5 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 182536110]:
  _6 = NvM_AdminBlockTable[_1].NvMDatasetBlockIndex;
  _7 = NvM_BlockDescriptorTable[_1].nvBlockNum;
  if (_6 < _7)
    goto <bb 11>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 91268055]:
  _8 = (int) _6;
  _9 = (int) _5;
  _10 = (int) _7;
  _11 = _9 + _10;
  if (_8 >= _11)
    goto <bb 11>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 936839741]:
  # DEBUG BEGIN_STMT
  _12 = NvM_AdminBlockTable[_1].NvMResult;
  if (_12 != 2)
    goto <bb 9>; [48.88%]
  else
    goto <bb 11>; [51.12%]

  <bb 9> [local count: 457927265]:
  # DEBUG BEGIN_STMT
  Result_23 = NvM_Queue_InsertStandard (BlockIndex_20(D), NvM_DestPtr_21(D), StateMachineFunction_14);
  # DEBUG Result => Result_23
  # DEBUG BEGIN_STMT
  if (Result_23 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 228963632]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[_1].NvMCurrentServiceId = CurrentServiceId_15;

  <bb 11> [local count: 1073741824]:
  # Result_13 = PHI <1(7), 1(8), Result_23(9), 0(10), 1(6)>
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_13;

}



;; Function NvM_CheckCondReadBlock (NvM_CheckCondReadBlock, funcdef_no=22, decl_uid=10889, cgraph_uid=24, symbol_order=39)

Modification phase of node NvM_CheckCondReadBlock/39
NvM_CheckCondReadBlock (NvM_BlockIdType BlockId, void * NvM_DstPtr)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.54_1;
  int _2;
  unsigned char _3;
  void * _4;
  long unsigned int _5;
  long unsigned int _6;
  short unsigned int _10;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_9(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = BlockId_9(D) + 65535;
  if (_10 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 6, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_9(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_9(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.54_1 = NvM_GlobalGenericStatus;
  _16 = NvM_GlobalGenericStatus.54_1 & 1;
  if (_16 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 6, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_9(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 6, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_4 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 12>; [70.00%]

  <bb 9> [local count: 145601339]:
  _5 = NvM_BlockDescriptorTable[_2].blockDesc;
  _6 = _5 & 131072;
  if (_6 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 72800670]:
  if (NvM_DstPtr_11(D) == 0B)
    goto <bb 11>; [10.21%]
  else
    goto <bb 12>; [89.79%]

  <bb 11> [local count: 7432948]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 6, 13);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  # RetBlockIndex_7 = PHI <BlockId_9(D)(9), 9(11), BlockId_9(D)(10), BlockId_9(D)(8), 9(3), 9(5), 9(7)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_7
  # DEBUG BEGIN_STMT
  return RetBlockIndex_7;

}



;; Function NvM_CheckCondWriteBlock (NvM_CheckCondWriteBlock, funcdef_no=23, decl_uid=10892, cgraph_uid=25, symbol_order=40)

Modification phase of node NvM_CheckCondWriteBlock/40
NvM_CheckCondWriteBlock (NvM_BlockIdType BlockId, const void * NvM_SrcPtr)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.55_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  void * _5;
  long unsigned int _6;
  long unsigned int _7;
  short unsigned int _11;
  short unsigned int _12;
  short unsigned int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_10(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = BlockId_10(D) + 65535;
  if (_11 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 7, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_10(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_10(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.55_1 = NvM_GlobalGenericStatus;
  _19 = NvM_GlobalGenericStatus.55_1 & 1;
  if (_19 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 7, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_10(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 7, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _12 = _4 & 8;
  if (_12 != 0)
    goto <bb 9>; [20.96%]
  else
    goto <bb 10>; [79.04%]

  <bb 9> [local count: 101726802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 7, 25);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 383610996]:
  # DEBUG BEGIN_STMT
  _5 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_5 == 0B)
    goto <bb 11>; [30.00%]
  else
    goto <bb 14>; [70.00%]

  <bb 11> [local count: 115083299]:
  _6 = NvM_BlockDescriptorTable[_2].blockDesc;
  _7 = _6 & 131072;
  if (_7 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 57541649]:
  if (NvM_SrcPtr_13(D) == 0B)
    goto <bb 13>; [10.21%]
  else
    goto <bb 14>; [89.79%]

  <bb 13> [local count: 5875002]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 7, 13);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  # RetBlockIndex_8 = PHI <BlockId_10(D)(11), 9(13), BlockId_10(D)(12), BlockId_10(D)(10), 9(3), 9(5), 9(7), 9(9)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_8
  # DEBUG BEGIN_STMT
  return RetBlockIndex_8;

}



;; Function NvM_CheckCondRestoreBlockDefaults (NvM_CheckCondRestoreBlockDefaults, funcdef_no=24, decl_uid=10895, cgraph_uid=26, symbol_order=41)

Modification phase of node NvM_CheckCondRestoreBlockDefaults/41
NvM_CheckCondRestoreBlockDefaults (NvM_BlockIdType BlockId, void * NvM_DstPtr)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.56_1;
  int _2;
  unsigned char _3;
  void * _4;
  long unsigned int _5;
  long unsigned int _6;
  const void * _7;
  Std_ReturnType (*<Tae0>) (void) _8;
  short unsigned int _12;
  short unsigned int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_11(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = BlockId_11(D) + 65535;
  if (_12 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 8, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.56_1 = NvM_GlobalGenericStatus;
  _19 = NvM_GlobalGenericStatus.56_1 & 1;
  if (_19 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 8, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_11(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 8, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_4 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 12>; [70.00%]

  <bb 9> [local count: 145601339]:
  _5 = NvM_BlockDescriptorTable[_2].blockDesc;
  _6 = _5 & 131072;
  if (_6 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 72800670]:
  if (NvM_DstPtr_13(D) == 0B)
    goto <bb 11>; [10.21%]
  else
    goto <bb 12>; [89.79%]

  <bb 11> [local count: 7432948]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 8, 13);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 477904850]:
  # DEBUG BEGIN_STMT
  _7 = NvM_BlockDescriptorTable[_2].romBlockDataAddress;
  if (_7 == 0B)
    goto <bb 13>; [30.00%]
  else
    goto <bb 15>; [70.00%]

  <bb 13> [local count: 143371455]:
  _8 = NvM_BlockDescriptorTable[_2].initBlockCallback;
  if (_8 == 0B)
    goto <bb 14>; [10.21%]
  else
    goto <bb 15>; [89.79%]

  <bb 14> [local count: 14638226]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 8, 17);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  # RetBlockIndex_9 = PHI <BlockId_11(D)(13), 9(14), BlockId_11(D)(12), 9(3), 9(5), 9(7), 9(11)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_9
  # DEBUG BEGIN_STMT
  return RetBlockIndex_9;

}



;; Function NvM_CheckCondReadPRAMBlock (NvM_CheckCondReadPRAMBlock, funcdef_no=25, decl_uid=10897, cgraph_uid=27, symbol_order=42)

Modification phase of node NvM_CheckCondReadPRAMBlock/42
NvM_CheckCondReadPRAMBlock (NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.57_1;
  int _2;
  unsigned char _3;
  void * _4;
  long unsigned int _5;
  long unsigned int _6;
  short unsigned int _10;
  short unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_9(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = BlockId_9(D) + 65535;
  if (_10 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 22, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_9(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_9(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.57_1 = NvM_GlobalGenericStatus;
  _15 = NvM_GlobalGenericStatus.57_1 & 1;
  if (_15 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 22, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_9(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 22, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_4 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 9> [local count: 145601339]:
  _5 = NvM_BlockDescriptorTable[_2].blockDesc;
  _6 = _5 & 131072;
  if (_6 == 0)
    goto <bb 10>; [20.96%]
  else
    goto <bb 11>; [79.04%]

  <bb 10> [local count: 30518041]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 22, 13);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 1073741824]:
  # RetBlockIndex_7 = PHI <BlockId_9(D)(9), 9(10), BlockId_9(D)(8), 9(3), 9(5), 9(7)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_7
  # DEBUG BEGIN_STMT
  return RetBlockIndex_7;

}



;; Function NvM_CheckCondWritePRAMBlock (NvM_CheckCondWritePRAMBlock, funcdef_no=26, decl_uid=10899, cgraph_uid=28, symbol_order=43)

Modification phase of node NvM_CheckCondWritePRAMBlock/43
NvM_CheckCondWritePRAMBlock (NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.58_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  void * _5;
  long unsigned int _6;
  long unsigned int _7;
  short unsigned int _11;
  short unsigned int _12;
  short unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_10(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = BlockId_10(D) + 65535;
  if (_11 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 23, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_10(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_10(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.58_1 = NvM_GlobalGenericStatus;
  _18 = NvM_GlobalGenericStatus.58_1 & 1;
  if (_18 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 23, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_10(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 23, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _12 = _4 & 8;
  if (_12 != 0)
    goto <bb 9>; [20.96%]
  else
    goto <bb 10>; [79.04%]

  <bb 9> [local count: 101726802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 23, 25);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 383610996]:
  # DEBUG BEGIN_STMT
  _5 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_5 == 0B)
    goto <bb 11>; [30.00%]
  else
    goto <bb 13>; [70.00%]

  <bb 11> [local count: 115083299]:
  _6 = NvM_BlockDescriptorTable[_2].blockDesc;
  _7 = _6 & 131072;
  if (_7 == 0)
    goto <bb 12>; [20.96%]
  else
    goto <bb 13>; [79.04%]

  <bb 12> [local count: 24121459]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 23, 13);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
  # RetBlockIndex_8 = PHI <BlockId_10(D)(11), 9(12), BlockId_10(D)(10), 9(3), 9(5), 9(7), 9(9)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_8
  # DEBUG BEGIN_STMT
  return RetBlockIndex_8;

}



;; Function NvM_CheckCondRestorePRAMBlockDefaults (NvM_CheckCondRestorePRAMBlockDefaults, funcdef_no=27, decl_uid=10901, cgraph_uid=29, symbol_order=44)

Modification phase of node NvM_CheckCondRestorePRAMBlockDefaults/44
NvM_CheckCondRestorePRAMBlockDefaults (NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.59_1;
  int _2;
  unsigned char _3;
  void * _4;
  long unsigned int _5;
  long unsigned int _6;
  const void * _7;
  Std_ReturnType (*<Tae0>) (void) _8;
  short unsigned int _12;
  short unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_11(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = BlockId_11(D) + 65535;
  if (_12 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 24, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.59_1 = NvM_GlobalGenericStatus;
  _18 = NvM_GlobalGenericStatus.59_1 & 1;
  if (_18 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 24, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_11(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 24, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_BlockDescriptorTable[_2].ramBlockDataAddress;
  if (_4 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 9> [local count: 145601339]:
  _5 = NvM_BlockDescriptorTable[_2].blockDesc;
  _6 = _5 & 131072;
  if (_6 == 0)
    goto <bb 10>; [20.96%]
  else
    goto <bb 11>; [79.04%]

  <bb 10> [local count: 30518041]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 24, 13);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 11> [local count: 454819757]:
  # DEBUG BEGIN_STMT
  _7 = NvM_BlockDescriptorTable[_2].romBlockDataAddress;
  if (_7 == 0B)
    goto <bb 12>; [30.00%]
  else
    goto <bb 14>; [70.00%]

  <bb 12> [local count: 136445927]:
  _8 = NvM_BlockDescriptorTable[_2].initBlockCallback;
  if (_8 == 0B)
    goto <bb 13>; [10.21%]
  else
    goto <bb 14>; [89.79%]

  <bb 13> [local count: 13931129]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 24, 17);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  # RetBlockIndex_9 = PHI <BlockId_11(D)(12), 9(13), BlockId_11(D)(11), 9(3), 9(5), 9(7), 9(10)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_9
  # DEBUG BEGIN_STMT
  return RetBlockIndex_9;

}



;; Function NvM_CheckCondCancelJobs (NvM_CheckCondCancelJobs, funcdef_no=28, decl_uid=10903, cgraph_uid=30, symbol_order=45)

Modification phase of node NvM_CheckCondCancelJobs/45
NvM_CheckCondCancelJobs (NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.60_1;
  short unsigned int _5;
  short unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_4(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = BlockId_4(D) + 65535;
  if (_5 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 16, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_4(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_4(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.60_1 = NvM_GlobalGenericStatus;
  _8 = NvM_GlobalGenericStatus.60_1 & 1;
  if (_8 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 16, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  # RetBlockIndex_2 = PHI <BlockId_4(D)(4), 9(5), 9(3)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_2
  # DEBUG BEGIN_STMT
  return RetBlockIndex_2;

}



;; Function NvM_CheckCondInvalidateNvBlock (NvM_CheckCondInvalidateNvBlock, funcdef_no=29, decl_uid=10905, cgraph_uid=31, symbol_order=46)

Modification phase of node NvM_CheckCondInvalidateNvBlock/46
NvM_CheckCondInvalidateNvBlock (NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.61_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_7(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = BlockId_7(D) + 65535;
  if (_8 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 11, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.61_1 = NvM_GlobalGenericStatus;
  _14 = NvM_GlobalGenericStatus.61_1 & 1;
  if (_14 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 11, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_7(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 11, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _9 = _4 & 8;
  if (_9 != 0)
    goto <bb 9>; [20.96%]
  else
    goto <bb 10>; [79.04%]

  <bb 9> [local count: 101726802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 11, 25);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # RetBlockIndex_5 = PHI <BlockId_7(D)(8), 9(9), 9(3), 9(5), 9(7)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_5
  # DEBUG BEGIN_STMT
  return RetBlockIndex_5;

}



;; Function NvM_CheckCondEraseNvBlock (NvM_CheckCondEraseNvBlock, funcdef_no=30, decl_uid=10907, cgraph_uid=32, symbol_order=47)

Modification phase of node NvM_CheckCondEraseNvBlock/47
NvM_CheckCondEraseNvBlock (NvM_BlockIdType BlockId)
{
  uint16 RetBlockIndex;
  short unsigned int NvM_GlobalGenericStatus.62_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  unsigned char _5;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => BlockId_8(D)
  # DEBUG INLINE_ENTRY NvM_GetBlockIndexForValidId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = BlockId_8(D) + 65535;
  if (_9 <= 7)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG ConditionValid => NULL
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 9, 10);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG RetBlockIndex => BlockId_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG BlockId => NULL
  # DEBUG RetBlockIndex => NULL
  # DEBUG RetBlockIndex => BlockId_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.62_1 = NvM_GlobalGenericStatus;
  _16 = NvM_GlobalGenericStatus.62_1 & 1;
  if (_16 == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 146286586]:
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 9, 20);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 551645600]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockId_8(D);
  _3 = NvM_AdminBlockTable[_2].NvMResult;
  if (_3 == 2)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 66307801]:
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 9, 21);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 485337798]:
  # DEBUG BEGIN_STMT
  _4 = NvM_AdminBlockTable[_2].NvMDynStatus;
  _10 = _4 & 8;
  if (_10 != 0)
    goto <bb 9>; [20.96%]
  else
    goto <bb 10>; [79.04%]

  <bb 9> [local count: 101726802]:
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 9, 25);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 383610996]:
  # DEBUG BEGIN_STMT
  _5 = NvM_BlockDescriptorTable[_2].blockJobPriority;
  if (_5 != 0)
    goto <bb 11>; [20.96%]
  else
    goto <bb 12>; [79.04%]

  <bb 11> [local count: 80404865]:
  # DEBUG BEGIN_STMT
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 9, 24);
  # DEBUG ConditionValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  # RetBlockIndex_6 = PHI <BlockId_8(D)(10), 9(11), 9(3), 9(5), 9(7), 9(9)>
  # DEBUG ConditionValid => NULL
  # DEBUG RetBlockIndex => RetBlockIndex_6
  # DEBUG BEGIN_STMT
  return RetBlockIndex_6;

}


