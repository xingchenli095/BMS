
IPA constant propagation start:
Determining dynamic type for call: NvM_CopyBlockRom2Ram (CurrentRamAddress_13);
  Starting walk at: NvM_CopyBlockRom2Ram (CurrentRamAddress_13);
  instance pointer: CurrentRamAddress_13  Outer instance pointer: CurrentRamAddress_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CurrentRamAddress_13 = NvM_GetUserRamBlockAddress ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt3.part.0/36:
  Jump functions of caller  NvM_SetPermanentRamBlockChanged/35:
  Jump functions of caller  NvM_SetPermanentRamBlockValid/34:
  Jump functions of caller  NvM_MirrorCopy/32:
  Jump functions of caller  NvM_CopyCrc/30:
  Jump functions of caller  NvM_GetStoredRamCRCAddress/29:
  Jump functions of caller  NvM_CalculateCrc/28:
  Jump functions of caller  TS_MemCpy32/27:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/26:
  Jump functions of caller  NvM_GetUserRamBlockAddress/23:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/21:
  Jump functions of caller  NvM_SetPermanentRamBlockUnchanged/16:
  Jump functions of caller  NvM_SetPermanentRamBlockInvalid/15:
  Jump functions of caller  NvM_CheckCondRestorePRAMBlockDefaults/12:
  Jump functions of caller  NvM_InsertRestoreBlockJob/11:
  Jump functions of caller  NvM_CheckCondRestoreBlockDefaults/10:
  Jump functions of caller  NvM_CopyBlockRom2Ram/9:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt4/8:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt3/7:
    callsite  NvM_RestoreBlockDefaults_AscSt3/7 -> NvM_RestoreBlockDefaults_AscSt3.part.0/36 : 
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt2/6:
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt1/5:
    callsite  NvM_RestoreBlockDefaults_AscSt1/5 -> NvM_CopyBlockRom2Ram/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  NvM_RestoreBlockDefaults_AscSt0/4:
    callsite  NvM_RestoreBlockDefaults_AscSt0/4 -> NvM_RestoreBlockDefaults_AscSt1/5 : 
  Jump functions of caller  NvM_RestorePRAMBlockDefaults_Asc/3:
  Jump functions of caller  NvM_RestoreBlockDefaults_Asc/2:
  Jump functions of caller  NvM_ASR42_RestorePRAMBlockDefaults/1:
  Jump functions of caller  NvM_ASR40_RestoreBlockDefaults/0:

 Propagating constants:

Not considering NvM_RestoreBlockDefaults_AscSt4 for cloning; -fipa-cp-clone disabled.
Not considering NvM_RestoreBlockDefaults_AscSt3 for cloning; -fipa-cp-clone disabled.
Not considering NvM_RestoreBlockDefaults_AscSt2 for cloning; -fipa-cp-clone disabled.
Not considering NvM_RestoreBlockDefaults_AscSt1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_RestoreBlockDefaults_AscSt0 for cloning; -fipa-cp-clone disabled.
Not considering NvM_RestorePRAMBlockDefaults_Asc for cloning; -fipa-cp-clone disabled.
Not considering NvM_RestoreBlockDefaults_Asc for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR42_RestorePRAMBlockDefaults for cloning; -fipa-cp-clone disabled.
Not considering NvM_ASR40_RestoreBlockDefaults for cloning; -fipa-cp-clone disabled.

overall_size: 191, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_RestoreBlockDefaults_AscSt3.part.0/36:
  Node: NvM_CopyBlockRom2Ram/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: NvM_RestoreBlockDefaults_AscSt4/8:
  Node: NvM_RestoreBlockDefaults_AscSt3/7:
  Node: NvM_RestoreBlockDefaults_AscSt2/6:
  Node: NvM_RestoreBlockDefaults_AscSt1/5:
  Node: NvM_RestoreBlockDefaults_AscSt0/4:
  Node: NvM_RestorePRAMBlockDefaults_Asc/3:
  Node: NvM_RestoreBlockDefaults_Asc/2:
  Node: NvM_ASR42_RestorePRAMBlockDefaults/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_ASR40_RestoreBlockDefaults/0:
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

NvM_RestoreBlockDefaults_AscSt3.part.0/36 (NvM_RestoreBlockDefaults_AscSt3.part.0) @06f78540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_CurrentBlockDescriptorPtr/25 (read)NvM_CalcCrc_CalcBuffer/31 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt3/7 (177167400 (estimated locally),0.16 per call) 
  Calls: NvM_GetUserRamBlockAddress/23 (1073741824 (estimated locally),1.00 per call) NvM_CopyCrc/30 (1073741824 (estimated locally),1.00 per call) 
NvM_SetPermanentRamBlockChanged/35 (NvM_SetPermanentRamBlockChanged) @06f68700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt4/8 (805306369 (estimated locally),0.75 per call) 
  Calls: 
NvM_SetPermanentRamBlockValid/34 (NvM_SetPermanentRamBlockValid) @06f68620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt4/8 (805306369 (estimated locally),0.75 per call) 
  Calls: 
NvM_InternalBuffer/33 (NvM_InternalBuffer) @06f6c438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt4/8 (addr)
  Availability: not_available
  Varpool flags:
NvM_MirrorCopy/32 (NvM_MirrorCopy) @06f68540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt4/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_CalcCrc_CalcBuffer/31 (NvM_CalcCrc_CalcBuffer) @06f65ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt3.part.0/36 (addr)NvM_RestoreBlockDefaults_AscSt3/7 (addr)
  Availability: not_available
  Varpool flags:
NvM_CopyCrc/30 (NvM_CopyCrc) @06f682a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt3/7 (1073741824 (estimated locally),1.00 per call) NvM_RestoreBlockDefaults_AscSt3.part.0/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GetStoredRamCRCAddress/29 (NvM_GetStoredRamCRCAddress) @06f681c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt3/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CalculateCrc/28 (NvM_CalculateCrc) @06f68000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt2/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_MemCpy32/27 (TS_MemCpy32) @06eafee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CopyBlockRom2Ram/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_TerminateCurrentLevel/26 (NvM_StateMachine_TerminateCurrentLevel) @06eafc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt1/5 (225485783 (estimated locally),0.21 per call) NvM_RestoreBlockDefaults_AscSt4/8 (805306369 (estimated locally),0.75 per call) 
  Calls: 
NvM_CurrentBlockDescriptorPtr/25 (NvM_CurrentBlockDescriptorPtr) @06f65798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt4/8 (read)NvM_RestoreBlockDefaults_AscSt3/7 (read)NvM_CopyBlockRom2Ram/9 (read)NvM_RestoreBlockDefaults_AscSt3/7 (read)NvM_RestoreBlockDefaults_AscSt3.part.0/36 (read)NvM_RestoreBlockDefaults_AscSt1/5 (read)NvM_RestoreBlockDefaults_AscSt1/5 (read)
  Availability: not_available
  Varpool flags:
NvM_GlobalErrorStatus/24 (NvM_GlobalErrorStatus) @06f65750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt4/8 (write)NvM_CopyBlockRom2Ram/9 (write)NvM_RestoreBlockDefaults_AscSt1/5 (write)NvM_RestoreBlockDefaults_AscSt1/5 (write)
  Availability: not_available
  Varpool flags:
NvM_GetUserRamBlockAddress/23 (NvM_GetUserRamBlockAddress) @06eafa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt1/5 (1073741824 (estimated locally),1.00 per call) NvM_RestoreBlockDefaults_AscSt3.part.0/36 (1073741824 (estimated locally),1.00 per call) NvM_RestoreBlockDefaults_AscSt2/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_MirrorRetryCount/22 (NvM_MirrorRetryCount) @06f651f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt0/4 (write)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_RemoveElement/21 (NvM_CalcCrc_RemoveElement) @06eaf620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestorePRAMBlockDefaults_Asc/3 (354334802 (estimated locally),0.33 per call) NvM_RestoreBlockDefaults_Asc/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_AdminBlockTable/20 (NvM_AdminBlockTable) @06ea5c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_Asc/2 (read)NvM_CopyBlockRom2Ram/9 (read)NvM_RestorePRAMBlockDefaults_Asc/3 (read)
  Availability: not_available
  Varpool flags:
NvM_GlobalBlockNumber/19 (NvM_GlobalBlockNumber) @06ea5c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_Asc/2 (read)NvM_CopyBlockRom2Ram/9 (read)NvM_RestorePRAMBlockDefaults_Asc/3 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentFunctionPtr/18 (NvM_CurrentFunctionPtr) @06ea5bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt2/6 (write)NvM_RestoreBlockDefaults_AscSt3/7 (write)NvM_RestorePRAMBlockDefaults_Asc/3 (write)NvM_RestoreBlockDefaults_Asc/2 (write)NvM_RestoreBlockDefaults_AscSt1/5 (write)NvM_RestoreBlockDefaults_AscSt1/5 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/17 (NvM_GlobalCallLevel) @06ea5b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt2/6 (read)NvM_RestoreBlockDefaults_AscSt3/7 (read)NvM_RestorePRAMBlockDefaults_Asc/3 (read)NvM_RestoreBlockDefaults_Asc/2 (read)NvM_RestoreBlockDefaults_AscSt1/5 (read)NvM_RestoreBlockDefaults_AscSt1/5 (read)
  Availability: not_available
  Varpool flags:
NvM_SetPermanentRamBlockUnchanged/16 (NvM_SetPermanentRamBlockUnchanged) @06eaf460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestorePRAMBlockDefaults_Asc/3 (354334802 (estimated locally),0.33 per call) NvM_RestoreBlockDefaults_Asc/2 (354334802 (estimated locally),0.33 per call) NvM_RestoreBlockDefaults_AscSt4/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_SetPermanentRamBlockInvalid/15 (NvM_SetPermanentRamBlockInvalid) @06eaf380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_RestorePRAMBlockDefaults_Asc/3 (354334802 (estimated locally),0.33 per call) NvM_RestoreBlockDefaults_Asc/2 (354334802 (estimated locally),0.33 per call) NvM_RestoreBlockDefaults_AscSt4/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_GlobalWorkingStatus/14 (NvM_GlobalWorkingStatus) @06ea5ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_AscSt3/7 (read)NvM_RestoreBlockDefaults_AscSt4/8 (write)NvM_RestoreBlockDefaults_AscSt4/8 (read)NvM_RestoreBlockDefaults_Asc/2 (read)NvM_RestorePRAMBlockDefaults_Asc/3 (read)NvM_RestoreBlockDefaults_AscSt4/8 (read)NvM_RestoreBlockDefaults_AscSt0/4 (read)NvM_RestoreBlockDefaults_AscSt0/4 (write)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/13 (NvM_CurrentServiceId) @06ea5a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_RestoreBlockDefaults_Asc/2 (write)NvM_RestorePRAMBlockDefaults_Asc/3 (write)
  Availability: not_available
  Varpool flags:
NvM_CheckCondRestorePRAMBlockDefaults/12 (NvM_CheckCondRestorePRAMBlockDefaults) @06eaf1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_RestorePRAMBlockDefaults/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_InsertRestoreBlockJob/11 (NvM_InsertRestoreBlockJob) @06eaf000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR42_RestorePRAMBlockDefaults/1 (524845004 (estimated locally),0.49 per call) NvM_ASR40_RestoreBlockDefaults/0 (524845004 (estimated locally),0.49 per call) 
  Calls: 
NvM_CheckCondRestoreBlockDefaults/10 (NvM_CheckCondRestoreBlockDefaults) @06ea9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ASR40_RestoreBlockDefaults/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CopyBlockRom2Ram/9 (NvM_CopyBlockRom2Ram) @06ea9d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: NvM_CurrentBlockDescriptorPtr/25 (read)NvM_GlobalBlockNumber/19 (read)NvM_AdminBlockTable/20 (read)NvM_GlobalErrorStatus/24 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt1/5 (526133494 (estimated locally),0.49 per call) 
  Calls: TS_MemCpy32/27 (1073741824 (estimated locally),1.00 per call) 
NvM_RestoreBlockDefaults_AscSt4/8 (NvM_RestoreBlockDefaults_AscSt4) @06ea99a0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalWorkingStatus/14 (read)NvM_CurrentBlockDescriptorPtr/25 (read)NvM_InternalBuffer/33 (addr)NvM_GlobalWorkingStatus/14 (read)NvM_GlobalWorkingStatus/14 (write)NvM_GlobalErrorStatus/24 (write)
  Referring: NvM_RestoreBlockDefaults_AscSt3/7 (addr)NvM_RestoreBlockDefaults_AscSt1/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_TerminateCurrentLevel/26 (805306369 (estimated locally),0.75 per call) NvM_SetPermanentRamBlockChanged/35 (805306369 (estimated locally),0.75 per call) NvM_SetPermanentRamBlockValid/34 (805306369 (estimated locally),0.75 per call) NvM_MirrorCopy/32 (536870913 (estimated locally),0.50 per call) NvM_SetPermanentRamBlockUnchanged/16 (536870913 (estimated locally),0.50 per call) NvM_SetPermanentRamBlockInvalid/15 (536870913 (estimated locally),0.50 per call) 
NvM_RestoreBlockDefaults_AscSt3/7 (NvM_RestoreBlockDefaults_AscSt3) @06ea9700
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalCallLevel/17 (read)NvM_CurrentFunctionPtr/18 (write)NvM_RestoreBlockDefaults_AscSt4/8 (addr)NvM_CurrentBlockDescriptorPtr/25 (read)NvM_CalcCrc_CalcBuffer/31 (addr)NvM_CurrentBlockDescriptorPtr/25 (read)NvM_GlobalWorkingStatus/14 (read)
  Referring: NvM_RestoreBlockDefaults_AscSt2/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_RestoreBlockDefaults_AscSt3.part.0/36 (177167400 (estimated locally),0.16 per call) NvM_CopyCrc/30 (1073741824 (estimated locally),1.00 per call) NvM_GetStoredRamCRCAddress/29 (1073741824 (estimated locally),1.00 per call) 
NvM_RestoreBlockDefaults_AscSt2/6 (NvM_RestoreBlockDefaults_AscSt2) @06ea9460
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_GlobalCallLevel/17 (read)NvM_CurrentFunctionPtr/18 (write)NvM_RestoreBlockDefaults_AscSt3/7 (addr)
  Referring: NvM_RestoreBlockDefaults_AscSt1/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalculateCrc/28 (1073741824 (estimated locally),1.00 per call) NvM_GetUserRamBlockAddress/23 (1073741824 (estimated locally),1.00 per call) 
NvM_RestoreBlockDefaults_AscSt1/5 (NvM_RestoreBlockDefaults_AscSt1) @06ea92a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalErrorStatus/24 (write)NvM_CurrentBlockDescriptorPtr/25 (read)NvM_CurrentBlockDescriptorPtr/25 (read)NvM_GlobalErrorStatus/24 (write)NvM_GlobalCallLevel/17 (read)NvM_CurrentFunctionPtr/18 (write)NvM_RestoreBlockDefaults_AscSt2/6 (addr)NvM_GlobalCallLevel/17 (read)NvM_CurrentFunctionPtr/18 (write)NvM_RestoreBlockDefaults_AscSt4/8 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_RestoreBlockDefaults_AscSt0/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/26 (225485783 (estimated locally),0.21 per call) NvM_CopyBlockRom2Ram/9 (526133494 (estimated locally),0.49 per call) NvM_GetUserRamBlockAddress/23 (1073741824 (estimated locally),1.00 per call) 
NvM_RestoreBlockDefaults_AscSt0/4 (NvM_RestoreBlockDefaults_AscSt0) @06ea90e0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_MirrorRetryCount/22 (write)NvM_GlobalWorkingStatus/14 (read)NvM_GlobalWorkingStatus/14 (write)
  Referring: NvM_RestoreBlockDefaults_Asc/2 (addr)NvM_RestorePRAMBlockDefaults_Asc/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_RestoreBlockDefaults_AscSt1/5 (1073741824 (estimated locally),1.00 per call) 
NvM_RestorePRAMBlockDefaults_Asc/3 (NvM_RestorePRAMBlockDefaults_Asc) @06eb89a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CurrentServiceId/13 (write)NvM_GlobalWorkingStatus/14 (read)NvM_GlobalCallLevel/17 (read)NvM_CurrentFunctionPtr/18 (write)NvM_RestoreBlockDefaults_AscSt0/4 (addr)NvM_GlobalBlockNumber/19 (read)NvM_AdminBlockTable/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalcCrc_RemoveElement/21 (354334802 (estimated locally),0.33 per call) NvM_SetPermanentRamBlockUnchanged/16 (354334802 (estimated locally),0.33 per call) NvM_SetPermanentRamBlockInvalid/15 (354334802 (estimated locally),0.33 per call) 
NvM_RestoreBlockDefaults_Asc/2 (NvM_RestoreBlockDefaults_Asc) @06eb81c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CurrentServiceId/13 (write)NvM_GlobalWorkingStatus/14 (read)NvM_GlobalCallLevel/17 (read)NvM_CurrentFunctionPtr/18 (write)NvM_RestoreBlockDefaults_AscSt0/4 (addr)NvM_GlobalBlockNumber/19 (read)NvM_AdminBlockTable/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalcCrc_RemoveElement/21 (354334802 (estimated locally),0.33 per call) NvM_SetPermanentRamBlockUnchanged/16 (354334802 (estimated locally),0.33 per call) NvM_SetPermanentRamBlockInvalid/15 (354334802 (estimated locally),0.33 per call) 
NvM_ASR42_RestorePRAMBlockDefaults/1 (NvM_ASR42_RestorePRAMBlockDefaults) @06eb8e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_InsertRestoreBlockJob/11 (524845004 (estimated locally),0.49 per call) NvM_CheckCondRestorePRAMBlockDefaults/12 (1073741824 (estimated locally),1.00 per call) 
NvM_ASR40_RestoreBlockDefaults/0 (NvM_ASR40_RestoreBlockDefaults) @06eb8c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_InsertRestoreBlockJob/11 (524845004 (estimated locally),0.49 per call) NvM_CheckCondRestoreBlockDefaults/10 (1073741824 (estimated locally),1.00 per call) 

;; Function NvM_RestoreBlockDefaults_AscSt2 (NvM_RestoreBlockDefaults_AscSt2, funcdef_no=6, decl_uid=7613, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_RestoreBlockDefaults_AscSt2/6
NvM_RestoreBlockDefaults_AscSt2 ()
{
  unsigned char NvM_GlobalCallLevel.18_1;
  int _2;
  uint8 * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.18_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.18_1;
  NvM_CurrentFunctionPtr[_2] = NvM_RestoreBlockDefaults_AscSt3;
  # DEBUG BEGIN_STMT
  _3 = NvM_GetUserRamBlockAddress ();
  NvM_CalculateCrc (_3);
  return;

}



;; Function NvM_RestoreBlockDefaults_AscSt4 (NvM_RestoreBlockDefaults_AscSt4, funcdef_no=8, decl_uid=7617, cgraph_uid=9, symbol_order=8)

Modification phase of node NvM_RestoreBlockDefaults_AscSt4/8
NvM_RestoreBlockDefaults_AscSt4 ()
{
  Std_ReturnType ReturnVal;
  short unsigned int NvM_GlobalWorkingStatus.25_1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.26_2;
  Std_ReturnType (*<T55f>) (const void *) _3;
  short unsigned int NvM_GlobalWorkingStatus.27_4;
  short unsigned int _5;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnVal => 0
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.25_1 = NvM_GlobalWorkingStatus;
  _7 = NvM_GlobalWorkingStatus.25_1 & 4096;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockInvalid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.26_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.26_2->readRamFromNvCallback;
  ReturnVal_12 = NvM_MirrorCopy (_3, 0B, &NvM_InternalBuffer);
  # DEBUG ReturnVal => ReturnVal_12
  # DEBUG BEGIN_STMT
  if (ReturnVal_12 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 805306369]:
  # DEBUG ReturnVal => NULL
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.27_4 = NvM_GlobalWorkingStatus;
  _5 = NvM_GlobalWorkingStatus.27_4 | 16;
  NvM_GlobalWorkingStatus = _5;
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockValid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockChanged ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 8;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_RestoreBlockDefaults_AscSt3 (NvM_RestoreBlockDefaults_AscSt3, funcdef_no=7, decl_uid=7615, cgraph_uid=8, symbol_order=7)

Modification phase of node NvM_RestoreBlockDefaults_AscSt3/7
NvM_RestoreBlockDefaults_AscSt3 ()
{
  unsigned char NvM_GlobalCallLevel.19_1;
  int _2;
  uint8 * _3;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.20_4;
  long unsigned int _5;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.21_6;
  long unsigned int _7;
  long unsigned int _8;
  short unsigned int NvM_GlobalWorkingStatus.22_9;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.19_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.19_1;
  NvM_CurrentFunctionPtr[_2] = NvM_RestoreBlockDefaults_AscSt4;
  # DEBUG BEGIN_STMT
  _3 = NvM_GetStoredRamCRCAddress ();
  NvM_CurrentBlockDescriptorPtr.20_4 = NvM_CurrentBlockDescriptorPtr;
  _5 = NvM_CurrentBlockDescriptorPtr.20_4->blockDesc;
  NvM_CopyCrc (_3, &NvM_CalcCrc_CalcBuffer, _5);
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.21_6 = NvM_CurrentBlockDescriptorPtr;
  _7 = NvM_CurrentBlockDescriptorPtr.21_6->blockDesc;
  _8 = _7 & 1048576;
  if (_8 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  NvM_GlobalWorkingStatus.22_9 = NvM_GlobalWorkingStatus;
  _16 = NvM_GlobalWorkingStatus.22_9 & 512;
  if (_16 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167400]:
  NvM_RestoreBlockDefaults_AscSt3.part.0 ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_ASR40_RestoreBlockDefaults (NvM_ASR40_RestoreBlockDefaults, funcdef_no=0, decl_uid=5782, cgraph_uid=1, symbol_order=0)

Modification phase of node NvM_ASR40_RestoreBlockDefaults/0
NvM_ASR40_RestoreBlockDefaults (NvM_ASR40_BlockIdType BlockId, void * NvM_DestPtr)
{
  Std_ReturnType Result;
  uint16 BlockIndex;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_7 = NvM_CheckCondRestoreBlockDefaults (BlockId_4(D), NvM_DestPtr_5(D));
  # DEBUG BlockIndex => BlockIndex_7
  # DEBUG BEGIN_STMT
  if (BlockIndex_7 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Result_9 = NvM_InsertRestoreBlockJob (0, BlockId_4(D), BlockIndex_7, NvM_DestPtr_5(D));
  # DEBUG Result => Result_9

  <bb 4> [local count: 1073741824]:
  # Result_1 = PHI <1(2), Result_9(3)>
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_1;

}



;; Function NvM_ASR42_RestorePRAMBlockDefaults (NvM_ASR42_RestorePRAMBlockDefaults, funcdef_no=1, decl_uid=5788, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_ASR42_RestorePRAMBlockDefaults/1
NvM_ASR42_RestorePRAMBlockDefaults (NvM_ASR42_BlockIdType BlockId)
{
  Std_ReturnType Result;
  uint16 BlockIndex;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_6 = NvM_CheckCondRestorePRAMBlockDefaults (BlockId_4(D));
  # DEBUG BlockIndex => BlockIndex_6
  # DEBUG BEGIN_STMT
  if (BlockIndex_6 != 9)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Result_8 = NvM_InsertRestoreBlockJob (1, BlockId_4(D), BlockIndex_6, 0B);
  # DEBUG Result => Result_8

  <bb 4> [local count: 1073741824]:
  # Result_1 = PHI <1(2), Result_8(3)>
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_1;

}



;; Function NvM_RestoreBlockDefaults_Asc (NvM_RestoreBlockDefaults_Asc, funcdef_no=2, decl_uid=7600, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_RestoreBlockDefaults_Asc/2
NvM_RestoreBlockDefaults_Asc ()
{
  short unsigned int NvM_GlobalWorkingStatus.0_1;
  unsigned char NvM_GlobalCallLevel.1_2;
  int _3;
  short unsigned int NvM_GlobalBlockNumber.2_4;
  int _5;
  unsigned char _6;
  short unsigned int _15;
  unsigned char _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 8;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.0_1 = NvM_GlobalWorkingStatus;
  _15 = NvM_GlobalWorkingStatus.0_1 & 4096;
  if (_15 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockInvalid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.1_2 = NvM_GlobalCallLevel;
  _3 = (int) NvM_GlobalCallLevel.1_2;
  NvM_CurrentFunctionPtr[_3] = NvM_RestoreBlockDefaults_AscSt0;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.2_4 = NvM_GlobalBlockNumber;
  _5 = (int) NvM_GlobalBlockNumber.2_4;
  _6 = NvM_AdminBlockTable[_5].NvMExtendedStatus;
  _16 = _6 & 2;
  if (_16 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function NvM_RestorePRAMBlockDefaults_Asc (NvM_RestorePRAMBlockDefaults_Asc, funcdef_no=3, decl_uid=7602, cgraph_uid=4, symbol_order=3)

Modification phase of node NvM_RestorePRAMBlockDefaults_Asc/3
NvM_RestorePRAMBlockDefaults_Asc ()
{
  short unsigned int NvM_GlobalWorkingStatus.3_1;
  unsigned char NvM_GlobalCallLevel.4_2;
  int _3;
  short unsigned int NvM_GlobalBlockNumber.5_4;
  int _5;
  unsigned char _6;
  short unsigned int _15;
  unsigned char _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 24;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.3_1 = NvM_GlobalWorkingStatus;
  _15 = NvM_GlobalWorkingStatus.3_1 & 4096;
  if (_15 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockInvalid ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.4_2 = NvM_GlobalCallLevel;
  _3 = (int) NvM_GlobalCallLevel.4_2;
  NvM_CurrentFunctionPtr[_3] = NvM_RestoreBlockDefaults_AscSt0;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.5_4 = NvM_GlobalBlockNumber;
  _5 = (int) NvM_GlobalBlockNumber.5_4;
  _6 = NvM_AdminBlockTable[_5].NvMExtendedStatus;
  _16 = _6 & 2;
  if (_16 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function NvM_RestoreBlockDefaults_AscSt1 (NvM_RestoreBlockDefaults_AscSt1, funcdef_no=5, decl_uid=7611, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_RestoreBlockDefaults_AscSt1/5
NvM_RestoreBlockDefaults_AscSt1 ()
{
  uint8 * CurrentRamAddress;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.7_1;
  const void * _2;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.8_3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned char NvM_GlobalCallLevel.9_6;
  int _7;
  unsigned char NvM_GlobalCallLevel.10_8;
  int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DefaultsConfigured => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentRamAddress_13 = NvM_GetUserRamBlockAddress ();
  # DEBUG CurrentRamAddress => CurrentRamAddress_13
  # DEBUG BEGIN_STMT
  if (CurrentRamAddress_13 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.7_1 = NvM_CurrentBlockDescriptorPtr;
  _2 = NvM_CurrentBlockDescriptorPtr.7_1->romBlockDataAddress;
  if (_2 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 4> [local count: 526133494]:
  # DEBUG BEGIN_STMT
  NvM_CopyBlockRom2Ram (CurrentRamAddress_13);
  # DEBUG DefaultsConfigured => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.8_3 = NvM_CurrentBlockDescriptorPtr;
  _4 = NvM_CurrentBlockDescriptorPtr.8_3->blockDesc;
  _5 = _4 & 8;
  if (_5 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 225485783]:
  # DEBUG DefaultsConfigured => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 3;
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 263066747]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.9_6 = NvM_GlobalCallLevel;
  _7 = (int) NvM_GlobalCallLevel.9_6;
  NvM_CurrentFunctionPtr[_7] = NvM_RestoreBlockDefaults_AscSt2;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 263066747]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.10_8 = NvM_GlobalCallLevel;
  _9 = (int) NvM_GlobalCallLevel.10_8;
  NvM_CurrentFunctionPtr[_9] = NvM_RestoreBlockDefaults_AscSt4;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function NvM_RestoreBlockDefaults_AscSt0 (NvM_RestoreBlockDefaults_AscSt0, funcdef_no=4, decl_uid=7609, cgraph_uid=5, symbol_order=4)

Modification phase of node NvM_RestoreBlockDefaults_AscSt0/4
NvM_RestoreBlockDefaults_AscSt0 ()
{
  short unsigned int NvM_GlobalWorkingStatus.6_1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_MirrorRetryCount = 0;
  # DEBUG BEGIN_STMT
  NvM_GlobalWorkingStatus.6_1 = NvM_GlobalWorkingStatus;
  _2 = NvM_GlobalWorkingStatus.6_1 & 65519;
  NvM_GlobalWorkingStatus = _2;
  # DEBUG BEGIN_STMT
  NvM_RestoreBlockDefaults_AscSt1 ();
  return;

}


