
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_StateMachine_SetNextRequest.part.0/28:
  Jump functions of caller  NvM_PreService_Function/27:
  Jump functions of caller  NvM_SetRamBlockStatus_Async_CalcCrc_Start/25:
  Jump functions of caller  NvM_CalcCrc_PeekElement/24:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/17:
  Jump functions of caller  NvM_SetPermanentRamBlockUnchanged/16:
  Jump functions of caller  Fee_GetJobResult/15:
  Jump functions of caller  NvM_ResetRedundantBlockDataIndex/13:
  Jump functions of caller  NvM_ProcessStandardPriorityJob/7:
    callsite  NvM_ProcessStandardPriorityJob/7 -> NvM_StateMachine_SetNextRequest/6 : 
  Jump functions of caller  NvM_StateMachine_SetNextRequest/6:
    callsite  NvM_StateMachine_SetNextRequest/6 -> NvM_StateMachine_SetNextRequest.part.0/28 : 
  Jump functions of caller  NvM_StateMachine_ProcessJobResult/5:
    callsite  NvM_StateMachine_ProcessJobResult/5 -> NvM_StateMachine_RedundantBlockError/2 : 
    callsite  NvM_StateMachine_ProcessJobResult/5 -> NvM_StateMachine_TerminateCurrentLevel/3 : 
  Jump functions of caller  NvM_StateMachine_TerminateSubLevel/4:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/3:
  Jump functions of caller  NvM_StateMachine_RedundantBlockError/2:
    callsite  NvM_StateMachine_RedundantBlockError/2 -> NvM_StateMachine_TerminateCurrentLevel/3 : 
  Jump functions of caller  NvM_StateMachine_ProcessRedundantBlock/1:

 Propagating constants:

Not considering NvM_ProcessStandardPriorityJob for cloning; -fipa-cp-clone disabled.
Not considering NvM_StateMachine_SetNextRequest for cloning; -fipa-cp-clone disabled.
Not considering NvM_StateMachine_ProcessJobResult for cloning; -fipa-cp-clone disabled.
Not considering NvM_StateMachine_TerminateSubLevel for cloning; -fipa-cp-clone disabled.
Not considering NvM_StateMachine_TerminateCurrentLevel for cloning; -fipa-cp-clone disabled.
Not considering NvM_StateMachine_RedundantBlockError for cloning; -fipa-cp-clone disabled.
Not considering NvM_StateMachine_ProcessRedundantBlock for cloning; -fipa-cp-clone disabled.

overall_size: 121, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_StateMachine_SetNextRequest.part.0/28:
  Node: NvM_ProcessStandardPriorityJob/7:
  Node: NvM_StateMachine_SetNextRequest/6:
  Node: NvM_StateMachine_ProcessJobResult/5:
  Node: NvM_StateMachine_TerminateSubLevel/4:
  Node: NvM_StateMachine_TerminateCurrentLevel/3:
  Node: NvM_StateMachine_RedundantBlockError/2:
  Node: NvM_StateMachine_ProcessRedundantBlock/1:
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

NvM_StateMachine_SetNextRequest.part.0/28 (NvM_StateMachine_SetNextRequest.part.0) @06e69e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_GlobalBlockNumber/12 (write)NvM_GlobalCallLevel/8 (write)NvM_CurrentFunctionPtr/9 (write)NvM_SetRamBlockStatus_Async_CalcCrc_Start/25 (addr)NvM_MirrorRetryCount/26 (write)NvM_GlobalBlockNumber/12 (read)NvM_AdminBlockTable/10 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_StateMachine_SetNextRequest/6 (108662672 (estimated locally),0.10 per call) 
  Calls: NvM_CalcCrc_PeekElement/24 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/17 (1073741824 (estimated locally),1.00 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (1073741824 (estimated locally),1.00 per call) 
NvM_PreService_Function/27 (NvM_PreService_Function) @071b4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ProcessStandardPriorityJob/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_MirrorRetryCount/26 (NvM_MirrorRetryCount) @071b9a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_SetNextRequest.part.0/28 (write)
  Availability: not_available
  Varpool flags:
NvM_SetRamBlockStatus_Async_CalcCrc_Start/25 (NvM_SetRamBlockStatus_Async_CalcCrc_Start) @071b4d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_StateMachine_SetNextRequest.part.0/28 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_CalcCrc_PeekElement/24 (NvM_CalcCrc_PeekElement) @071b4c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_StateMachine_SetNextRequest.part.0/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_RamBlockCrcCalcCount/23 (NvM_RamBlockCrcCalcCount) @071b99d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_SetNextRequest/6 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @071b4b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ProcessStandardPriorityJob/7 (1073741824 (estimated locally),1.00 per call) NvM_StateMachine_SetNextRequest/6 (1073741823 (estimated locally),1.00 per call) NvM_StateMachine_SetNextRequest.part.0/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_TempRamBlockAddress/21 (NvM_TempRamBlockAddress) @071b9948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_SetNextRequest/6 (write)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/20 (NvM_CurrentServiceId) @071b9900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_SetNextRequest/6 (write)
  Availability: not_available
  Varpool flags:
NvM_Queue_Standard/19 (NvM_Queue_Standard) @071b98b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_SetNextRequest/6 (read)NvM_StateMachine_SetNextRequest/6 (read)NvM_StateMachine_SetNextRequest/6 (read)
  Availability: not_available
  Varpool flags:
NvM_Queue_IndexStandard/18 (NvM_Queue_IndexStandard) @071b9870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_SetNextRequest/6 (read)
  Availability: not_available
  Varpool flags:
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/17 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @071b49a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_ProcessStandardPriorityJob/7 (1073741824 (estimated locally),1.00 per call) NvM_StateMachine_SetNextRequest/6 (1073741823 (estimated locally),1.00 per call) NvM_StateMachine_SetNextRequest.part.0/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_SetPermanentRamBlockUnchanged/16 (NvM_SetPermanentRamBlockUnchanged) @071b47e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_StateMachine_ProcessJobResult/5 (177167401 (estimated locally),0.17 per call) 
  Calls: 
Fee_GetJobResult/15 (Fee_GetJobResult) @071b4700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_StateMachine_ProcessJobResult/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GlobalErrorStatus/14 (NvM_GlobalErrorStatus) @071a9ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_RedundantBlockError/2 (write)NvM_StateMachine_ProcessJobResult/5 (write)NvM_StateMachine_ProcessJobResult/5 (write)NvM_StateMachine_ProcessJobResult/5 (write)
  Availability: not_available
  Varpool flags:
NvM_ResetRedundantBlockDataIndex/13 (NvM_ResetRedundantBlockDataIndex) @071b42a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_StateMachine_ProcessJobResult/5 (181466663 (estimated locally),0.17 per call) NvM_StateMachine_ProcessJobResult/5 (177167401 (estimated locally),0.17 per call) NvM_StateMachine_RedundantBlockError/2 (73890617 (estimated locally),0.07 per call) 
  Calls: 
NvM_GlobalBlockNumber/12 (NvM_GlobalBlockNumber) @071a9798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_RedundantBlockError/2 (read)NvM_StateMachine_SetNextRequest/6 (write)NvM_StateMachine_ProcessRedundantBlock/1 (read)NvM_StateMachine_SetNextRequest.part.0/28 (read)NvM_StateMachine_SetNextRequest.part.0/28 (write)NvM_ProcessStandardPriorityJob/7 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentBlockDescriptorPtr/11 (NvM_CurrentBlockDescriptorPtr) @071a9750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_ProcessRedundantBlock/1 (read)NvM_StateMachine_RedundantBlockError/2 (read)
  Availability: not_available
  Varpool flags:
NvM_AdminBlockTable/10 (NvM_AdminBlockTable) @071a9708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_RedundantBlockError/2 (read)NvM_StateMachine_ProcessJobResult/5 (read)NvM_StateMachine_ProcessRedundantBlock/1 (write)NvM_StateMachine_RedundantBlockError/2 (write)NvM_StateMachine_SetNextRequest/6 (read)NvM_StateMachine_ProcessRedundantBlock/1 (write)NvM_StateMachine_RedundantBlockError/2 (read)NvM_StateMachine_SetNextRequest.part.0/28 (write)NvM_ProcessStandardPriorityJob/7 (write)
  Availability: not_available
  Varpool flags:
NvM_CurrentFunctionPtr/9 (NvM_CurrentFunctionPtr) @071a96c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_ProcessRedundantBlock/1 (write)NvM_StateMachine_ProcessRedundantBlock/1 (write)NvM_StateMachine_SetNextRequest.part.0/28 (write)NvM_StateMachine_SetNextRequest/6 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/8 (NvM_GlobalCallLevel) @071a9678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_StateMachine_ProcessRedundantBlock/1 (write)NvM_StateMachine_TerminateCurrentLevel/3 (write)NvM_StateMachine_TerminateCurrentLevel/3 (read)NvM_StateMachine_TerminateSubLevel/4 (write)NvM_StateMachine_TerminateSubLevel/4 (read)NvM_StateMachine_ProcessJobResult/5 (write)NvM_StateMachine_ProcessRedundantBlock/1 (read)NvM_StateMachine_SetNextRequest.part.0/28 (write)NvM_StateMachine_SetNextRequest/6 (write)
  Availability: not_available
  Varpool flags:
NvM_ProcessStandardPriorityJob/7 (NvM_ProcessStandardPriorityJob) @071cb0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/12 (read)NvM_AdminBlockTable/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_PreService_Function/27 (1073741824 (estimated locally),1.00 per call) NvM_StateMachine_SetNextRequest/6 (1073741824 (estimated locally),1.00 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/17 (1073741824 (estimated locally),1.00 per call) 
NvM_StateMachine_SetNextRequest/6 (NvM_StateMachine_SetNextRequest) @071cbe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_Queue_IndexStandard/18 (read)NvM_GlobalCallLevel/8 (write)NvM_Queue_Standard/19 (read)NvM_GlobalBlockNumber/12 (write)NvM_Queue_Standard/19 (read)NvM_CurrentFunctionPtr/9 (write)NvM_AdminBlockTable/10 (read)NvM_CurrentServiceId/20 (write)NvM_Queue_Standard/19 (read)NvM_TempRamBlockAddress/21 (write)NvM_RamBlockCrcCalcCount/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: NvM_ProcessStandardPriorityJob/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_StateMachine_SetNextRequest.part.0/28 (108662672 (estimated locally),0.10 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/22 (1073741823 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/17 (1073741823 (estimated locally),1.00 per call) 
NvM_StateMachine_ProcessJobResult/5 (NvM_StateMachine_ProcessJobResult) @071cbc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/10 (read)NvM_GlobalErrorStatus/14 (write)NvM_GlobalErrorStatus/14 (write)NvM_GlobalCallLevel/8 (write)NvM_GlobalErrorStatus/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_StateMachine_RedundantBlockError/2 (349544673 (estimated locally),0.33 per call) NvM_ResetRedundantBlockDataIndex/13 (181466663 (estimated locally),0.17 per call) NvM_StateMachine_TerminateCurrentLevel/3 (177167401 (estimated locally),0.17 per call) NvM_SetPermanentRamBlockUnchanged/16 (177167401 (estimated locally),0.17 per call) NvM_ResetRedundantBlockDataIndex/13 (177167401 (estimated locally),0.17 per call) Fee_GetJobResult/15 (1073741824 (estimated locally),1.00 per call) 
NvM_StateMachine_TerminateSubLevel/4 (NvM_StateMachine_TerminateSubLevel) @071cb9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalCallLevel/8 (read)NvM_GlobalCallLevel/8 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_StateMachine_TerminateCurrentLevel/3 (NvM_StateMachine_TerminateCurrentLevel) @071cb7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalCallLevel/8 (read)NvM_GlobalCallLevel/8 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_StateMachine_ProcessJobResult/5 (177167401 (estimated locally),0.17 per call) NvM_StateMachine_RedundantBlockError/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_RedundantBlockError/2 (NvM_StateMachine_RedundantBlockError) @071cb620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_AdminBlockTable/10 (read)NvM_AdminBlockTable/10 (write)NvM_CurrentBlockDescriptorPtr/11 (read)NvM_GlobalBlockNumber/12 (read)NvM_AdminBlockTable/10 (read)NvM_GlobalErrorStatus/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_StateMachine_ProcessJobResult/5 (349544673 (estimated locally),0.33 per call) 
  Calls: NvM_StateMachine_TerminateCurrentLevel/3 (1073741824 (estimated locally),1.00 per call) NvM_ResetRedundantBlockDataIndex/13 (73890617 (estimated locally),0.07 per call) 
NvM_StateMachine_ProcessRedundantBlock/1 (NvM_StateMachine_ProcessRedundantBlock) @071cb380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalCallLevel/8 (read)NvM_CurrentFunctionPtr/9 (write)NvM_AdminBlockTable/10 (write)NvM_CurrentBlockDescriptorPtr/11 (read)NvM_GlobalBlockNumber/12 (read)NvM_AdminBlockTable/10 (write)NvM_GlobalCallLevel/8 (write)NvM_CurrentFunctionPtr/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function NvM_StateMachine_ProcessRedundantBlock (NvM_StateMachine_ProcessRedundantBlock, funcdef_no=0, decl_uid=10904, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_StateMachine_ProcessRedundantBlock/1
NvM_StateMachine_ProcessRedundantBlock (void (*NvM_CurrentFunctionPtrType) (void) NextState)
{
  unsigned char NvM_GlobalCallLevel.0_1;
  int _2;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.1_3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned int _6;
  short unsigned int NvM_GlobalBlockNumber.2_7;
  int _8;
  unsigned char _9;
  int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.0_1 = NvM_GlobalCallLevel;
  _2 = (int) NvM_GlobalCallLevel.0_1;
  NvM_CurrentFunctionPtr[_2] = NextState_13(D);
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMValid = 0;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.1_3 = NvM_CurrentBlockDescriptorPtr;
  _4 = NvM_CurrentBlockDescriptorPtr.1_3->blockDesc;
  _5 = _4 >> 7;
  _6 = _5 & 3;
  if (_6 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.2_7 = NvM_GlobalBlockNumber;
  _8 = (int) NvM_GlobalBlockNumber.2_7;
  NvM_AdminBlockTable[_8].NvMDatasetBlockIndex = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = NvM_GlobalCallLevel.0_1 + 1;
  NvM_GlobalCallLevel = _9;
  # DEBUG BEGIN_STMT
  _10 = (int) _9;
  NvM_CurrentFunctionPtr[_10] = NextState_13(D);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function NvM_StateMachine_TerminateCurrentLevel (NvM_StateMachine_TerminateCurrentLevel, funcdef_no=2, decl_uid=10908, cgraph_uid=4, symbol_order=3)

Modification phase of node NvM_StateMachine_TerminateCurrentLevel/3
NvM_StateMachine_TerminateCurrentLevel ()
{
  unsigned char NvM_GlobalCallLevel.8_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.8_1 = NvM_GlobalCallLevel;
  _2 = NvM_GlobalCallLevel.8_1 + 255;
  NvM_GlobalCallLevel = _2;
  return;

}



;; Function NvM_StateMachine_RedundantBlockError (NvM_StateMachine_RedundantBlockError, funcdef_no=1, decl_uid=10906, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_StateMachine_RedundantBlockError/2
NvM_StateMachine_RedundantBlockError ()
{
  unsigned char _1;
  unsigned char _2;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.6_3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned int _6;
  short unsigned int NvM_GlobalBlockNumber.7_7;
  int _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = NvM_AdminBlockTable[0].NvMValid;
  _2 = _1 + 1;
  NvM_AdminBlockTable[0].NvMValid = _2;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.6_3 = NvM_CurrentBlockDescriptorPtr;
  _4 = NvM_CurrentBlockDescriptorPtr.6_3->blockDesc;
  _5 = _4 >> 7;
  _6 = _5 & 3;
  if (_6 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  NvM_GlobalBlockNumber.7_7 = NvM_GlobalBlockNumber;
  _8 = (int) NvM_GlobalBlockNumber.7_7;
  _9 = NvM_AdminBlockTable[_8].NvMDatasetBlockIndex;
  if (_9 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  NvM_ResetRedundantBlockDataIndex ();
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 999851208]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  return;

}



;; Function NvM_StateMachine_TerminateSubLevel (NvM_StateMachine_TerminateSubLevel, funcdef_no=3, decl_uid=10910, cgraph_uid=5, symbol_order=4)

Modification phase of node NvM_StateMachine_TerminateSubLevel/4
NvM_StateMachine_TerminateSubLevel ()
{
  unsigned char NvM_GlobalCallLevel.10_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.10_1 = NvM_GlobalCallLevel;
  _2 = NvM_GlobalCallLevel.10_1 + 254;
  NvM_GlobalCallLevel = _2;
  return;

}



;; Function NvM_StateMachine_ProcessJobResult (NvM_StateMachine_ProcessJobResult, funcdef_no=4, decl_uid=10902, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_StateMachine_ProcessJobResult/5
NvM_StateMachine_ProcessJobResult ()
{
  const MemIf_JobResultType Result;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Result_5 = Fee_GetJobResult ();
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  if (Result_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _1 = NvM_AdminBlockTable[0].NvMValid;
  if (_1 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;
  # DEBUG BEGIN_STMT
  NvM_ResetRedundantBlockDataIndex ();
  # DEBUG BEGIN_STMT
  NvM_SetPermanentRamBlockUnchanged ();
  # DEBUG BEGIN_STMT
  NvM_StateMachine_TerminateCurrentLevel ();
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 896574424]:
  # DEBUG BEGIN_STMT
  if (Result_5 == 3)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 181466663]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel = 0;
  # DEBUG BEGIN_STMT
  NvM_ResetRedundantBlockDataIndex ();
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 715107761]:
  # DEBUG BEGIN_STMT
  if (Result_5 == 2)
    goto <bb 8>; [51.12%]
  else
    goto <bb 9>; [48.88%]

  <bb 8> [local count: 365563087]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 349544673]:
  # DEBUG BEGIN_STMT
  NvM_StateMachine_RedundantBlockError ();

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function NvM_StateMachine_SetNextRequest (NvM_StateMachine_SetNextRequest, funcdef_no=5, decl_uid=10900, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_StateMachine_SetNextRequest/6
NvM_StateMachine_SetNextRequest ()
{
  boolean IsQueueEmpty;
  short unsigned int NvM_Queue_IndexStandard.11_1;
  int _3;
  short unsigned int _4;
  void (*<T59e>) (void) _6;
  unsigned char _7;
  unsigned char _8;
  uint8 * _9;
  short unsigned int NvM_RamBlockCrcCalcCount.16_10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG IsQueueEmpty => 1
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.11_1 = NvM_Queue_IndexStandard;
  if (NvM_Queue_IndexStandard.11_1 != 65535)
    goto <bb 3>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel = 1;
  # DEBUG BEGIN_STMT
  _3 = (int) NvM_Queue_IndexStandard.11_1;
  _4 = NvM_Queue_Standard[_3].NvMBlockDescriptorIndex;
  NvM_GlobalBlockNumber = _4;
  # DEBUG BEGIN_STMT
  _6 = NvM_Queue_Standard[_3].NvMRequestAsyncPtr;
  NvM_CurrentFunctionPtr[1] = _6;
  # DEBUG BEGIN_STMT
  _7 = NvM_AdminBlockTable[0].NvMCurrentServiceId;
  _8 = _7 + 244;
  if (_8 <= 1)
    goto <bb 5>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 4> [local count: 418115065]:
  if (_7 == 25)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 432713659]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = _7;

  <bb 6> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  _9 = NvM_Queue_Standard[_3].NvMTempRamBlockDataAddress;
  NvM_TempRamBlockAddress = _9;
  # DEBUG BEGIN_STMT
  # DEBUG IsQueueEmpty => 0

  <bb 7> [local count: 1073741823]:
  # IsQueueEmpty_11 = PHI <1(2), 0(6)>
  # DEBUG IsQueueEmpty => IsQueueEmpty_11
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_RamBlockCrcCalcCount.16_10 = NvM_RamBlockCrcCalcCount;
  if (NvM_RamBlockCrcCalcCount.16_10 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 536870911]:
  if (IsQueueEmpty_11 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 108662672]:
  NvM_StateMachine_SetNextRequest.part.0 ();

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function NvM_ProcessStandardPriorityJob (NvM_ProcessStandardPriorityJob, funcdef_no=6, decl_uid=10735, cgraph_uid=8, symbol_order=7)

Modification phase of node NvM_ProcessStandardPriorityJob/7
NvM_ProcessStandardPriorityJob ()
{
  short unsigned int NvM_GlobalBlockNumber.19_1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.19_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.19_1;
  NvM_AdminBlockTable[_2].NvMResult = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_StateMachine_SetNextRequest ();
  # DEBUG BEGIN_STMT
  NvM_PreService_Function ();
  return;

}


