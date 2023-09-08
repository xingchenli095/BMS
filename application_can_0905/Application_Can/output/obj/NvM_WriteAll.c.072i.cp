
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_WriteAll_Async_State3.part.0/32:
  Jump functions of caller  NvM_WriteAll_Async_State2.part.0/31:
  Jump functions of caller  Fee_GetStatus/30:
  Jump functions of caller  NvM_MultiRequestFinishedSingleBlock/29:
  Jump functions of caller  NvM_WriteBlock_Async_State1/28:
  Jump functions of caller  NvM_CheckBlockStatus/27:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/26:
  Jump functions of caller  NvM_CheckWriteProtection/25:
  Jump functions of caller  NvM_PreService_Function/20:
  Jump functions of caller  NvM_MultiPostService_Function/19:
  Jump functions of caller  Fee_SetMode/17:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12:
  Jump functions of caller  NvM_Queue_InsertStandard/11:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10:
  Jump functions of caller  Det_ASR40_ReportError/8:
  Jump functions of caller  NvM_WriteAll_Async_State3/6:
    callsite  NvM_WriteAll_Async_State3/6 -> NvM_WriteAll_Async_State3.part.0/32 : 
  Jump functions of caller  NvM_WriteAll_Async_State2/5:
    callsite  NvM_WriteAll_Async_State2/5 -> NvM_WriteAll_Async_State2.part.0/31 : 
  Jump functions of caller  NvM_WriteAll_Async_State1/4:
  Jump functions of caller  NvM_WriteAll_Async/3:
    callsite  NvM_WriteAll_Async/3 -> NvM_WriteAll_Async_State1/4 : 
  Jump functions of caller  NvM_CancelWriteAll/2:
  Jump functions of caller  NvM_WriteAll/1:

 Propagating constants:

Not considering NvM_WriteAll_Async_State3 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteAll_Async_State2 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteAll_Async_State1 for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteAll_Async for cloning; -fipa-cp-clone disabled.
Not considering NvM_CancelWriteAll for cloning; -fipa-cp-clone disabled.
Not considering NvM_WriteAll for cloning; -fipa-cp-clone disabled.

overall_size: 250, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_WriteAll_Async_State3.part.0/32:
  Node: NvM_WriteAll_Async_State2.part.0/31:
  Node: NvM_WriteAll_Async_State3/6:
  Node: NvM_WriteAll_Async_State2/5:
  Node: NvM_WriteAll_Async_State1/4:
  Node: NvM_WriteAll_Async/3:
  Node: NvM_CancelWriteAll/2:
  Node: NvM_WriteAll/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_WriteAll_Async_State3.part.0/32 (NvM_WriteAll_Async_State3.part.0) @0723de00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_AdminBlockTable/9 (read)NvM_GlobalErrorStatus/18 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_WriteAll_Async_State3/6 (445388112 (estimated locally),0.41 per call) 
  Calls: NvM_MultiPostService_Function/19 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteAll_Async_State2.part.0/31 (NvM_WriteAll_Async_State2.part.0) @06e53e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_CurrentBlockDescriptorPtr/23 (read)NvM_WriteAll_Async_State1/4 (addr)NvM_GlobalGenericStatus/7 (read)NvM_GlobalGenericStatus/7 (write)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (write)NvM_GlobalGenericStatus/7 (write)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (write)NvM_GlobalCallLevel/21 (read)NvM_CurrentFunctionPtr/22 (write)NvM_WriteAll_Async_State1/4 (addr)NvM_GlobalBlockNumber/16 (read)NvM_GlobalCallLevel/21 (read)NvM_CurrentFunctionPtr/22 (write)NvM_WriteAll_Async_State3/6 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_WriteAll_Async_State2/5 (536870912 (estimated locally),0.50 per call) 
  Calls: NvM_MultiRequestFinishedSingleBlock/29 (536870913 (estimated locally),0.50 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10 (536870913 (estimated locally),0.50 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (536870913 (estimated locally),0.50 per call) 
Fee_GetStatus/30 (Fee_GetStatus) @071fe7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State3/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_MultiRequestFinishedSingleBlock/29 (NvM_MultiRequestFinishedSingleBlock) @071fe2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State2.part.0/31 (536870913 (estimated locally),0.50 per call) 
  Calls: 
NvM_WriteBlock_Async_State1/28 (NvM_WriteBlock_Async_State1) @071fed20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_CheckBlockStatus/27 (NvM_CheckBlockStatus) @071fec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State1/4 (824372205 (estimated locally),0.77 per call) NvM_WriteAll_Async_State1/4 (155793018 (estimated locally),0.15 per call) 
  Calls: 
NvM_CalcCrc_RemoveElement/26 (NvM_CalcCrc_RemoveElement) @071feb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State1/4 (51411696 (estimated locally),0.05 per call) 
  Calls: 
NvM_CheckWriteProtection/25 (NvM_CheckWriteProtection) @071fea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State1/4 (124353917 (estimated locally),0.12 per call) 
  Calls: 
NvM_GlobalWorkingStatus/24 (NvM_GlobalWorkingStatus) @072090d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentBlockDescriptorPtr/23 (NvM_CurrentBlockDescriptorPtr) @07209090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State2.part.0/31 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentFunctionPtr/22 (NvM_CurrentFunctionPtr) @07209048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State2.part.0/31 (write)NvM_WriteAll_Async_State2.part.0/31 (write)NvM_WriteAll_Async_State2/5 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/21 (NvM_GlobalCallLevel) @07209000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State2.part.0/31 (read)NvM_WriteAll_Async_State2.part.0/31 (read)NvM_WriteAll_Async_State2/5 (read)
  Availability: not_available
  Varpool flags:
NvM_PreService_Function/20 (NvM_PreService_Function) @071fe9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State1/4 (980165223 (estimated locally),0.91 per call) 
  Calls: 
NvM_MultiPostService_Function/19 (NvM_MultiPostService_Function) @071fe8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async_State3.part.0/32 (1073741824 (estimated locally),1.00 per call) NvM_WriteAll_Async_State1/4 (93576600 (estimated locally),0.09 per call) 
  Calls: 
NvM_GlobalErrorStatus/18 (NvM_GlobalErrorStatus) @07202ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State3.part.0/32 (write)NvM_WriteAll_Async_State3/6 (write)
  Availability: not_available
  Varpool flags:
Fee_SetMode/17 (Fee_SetMode) @071fe460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll_Async/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_GlobalBlockNumber/16 (NvM_GlobalBlockNumber) @072023a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async/3 (write)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State2.part.0/31 (read)NvM_WriteAll_Async_State2.part.0/31 (read)NvM_WriteAll_Async_State2.part.0/31 (read)NvM_WriteAll_Async_State2/5 (read)
  Availability: not_available
  Varpool flags:
NvM_Queue_Standard/15 (NvM_Queue_Standard) @072021f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State1/4 (read)NvM_CancelWriteAll/2 (read)NvM_CancelWriteAll/2 (write)NvM_CancelWriteAll/2 (read)
  Availability: not_available
  Varpool flags:
NvM_Queue_IndexStandard/14 (NvM_Queue_IndexStandard) @072021b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_CancelWriteAll/2 (read)NvM_CancelWriteAll/2 (write)
  Availability: not_available
  Varpool flags:
NvM_CurrentServiceId/13 (NvM_CurrentServiceId) @07202168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async/3 (write)NvM_CancelWriteAll/2 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @071fe0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CancelWriteAll/2 (511869572 (estimated locally),0.50 per call) NvM_WriteAll/1 (474808634 (estimated locally),0.44 per call) NvM_WriteAll_Async_State2.part.0/31 (536870913 (estimated locally),0.50 per call) NvM_WriteAll_Async_State1/4 (1073741824 (estimated locally),1.00 per call) NvM_WriteAll_Async_State1/4 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_Queue_InsertStandard/11 (NvM_Queue_InsertStandard) @071fe000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_WriteAll/1 (232086460 (estimated locally),0.22 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @071b7ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CancelWriteAll/2 (511869572 (estimated locally),0.50 per call) NvM_WriteAll/1 (474808634 (estimated locally),0.44 per call) NvM_WriteAll_Async_State2.part.0/31 (536870913 (estimated locally),0.50 per call) NvM_WriteAll_Async_State1/4 (1073741824 (estimated locally),1.00 per call) NvM_WriteAll_Async_State1/4 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
NvM_AdminBlockTable/9 (NvM_AdminBlockTable) @071a9990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async_State2/5 (write)NvM_WriteAll_Async_State2.part.0/31 (write)NvM_WriteAll_Async_State3.part.0/32 (read)NvM_WriteAll/1 (write)NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll_Async/3 (write)NvM_WriteAll_Async_State2.part.0/31 (write)NvM_WriteAll/1 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll/1 (read)NvM_CancelWriteAll/2 (read)NvM_CancelWriteAll/2 (write)
  Availability: not_available
  Varpool flags:
Det_ASR40_ReportError/8 (Det_ASR40_ReportError) @071b7e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CancelWriteAll/2 (511869572 (estimated locally),0.50 per call) NvM_WriteAll/1 (244598387 (estimated locally),0.23 per call) NvM_WriteAll/1 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_GlobalGenericStatus/7 (NvM_GlobalGenericStatus) @071a9900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_WriteAll_Async_State1/4 (write)NvM_WriteAll/1 (read)NvM_WriteAll_Async_State2.part.0/31 (write)NvM_WriteAll_Async_State2.part.0/31 (write)NvM_WriteAll_Async_State1/4 (read)NvM_WriteAll_Async_State2/5 (read)NvM_WriteAll_Async_State2.part.0/31 (read)NvM_CancelWriteAll/2 (read)NvM_CancelWriteAll/2 (read)NvM_CancelWriteAll/2 (write)NvM_CancelWriteAll/2 (read)NvM_CancelWriteAll/2 (write)
  Availability: not_available
  Varpool flags:
NvM_WriteAll_Async_State3/6 (NvM_WriteAll_Async_State3) @071b7c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalErrorStatus/18 (write)
  Referring: NvM_WriteAll_Async_State2.part.0/31 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteAll_Async_State3.part.0/32 (445388112 (estimated locally),0.41 per call) Fee_GetStatus/30 (1073741824 (estimated locally),1.00 per call) 
NvM_WriteAll_Async_State2/5 (NvM_WriteAll_Async_State2) @071b79a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: NvM_GlobalGenericStatus/7 (read)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (write)NvM_GlobalCallLevel/21 (read)NvM_CurrentFunctionPtr/22 (write)NvM_WriteAll_Async_State1/4 (addr)
  Referring: NvM_WriteAll_Async_State1/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteAll_Async_State2.part.0/31 (536870912 (estimated locally),0.50 per call) 
NvM_WriteAll_Async_State1/4 (NvM_WriteAll_Async_State1) @071b72a0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_Queue_IndexStandard/14 (read)NvM_Queue_Standard/15 (read)NvM_Queue_Standard/15 (read)NvM_GlobalGenericStatus/7 (read)NvM_WriteAll_Async/3 (addr)NvM_GlobalGenericStatus/7 (write)NvM_GlobalErrorStatus/18 (write)NvM_GlobalBlockNumber/16 (read)NvM_GlobalBlockNumber/16 (write)NvM_GlobalCallLevel/21 (read)NvM_CurrentFunctionPtr/22 (write)NvM_WriteAll_Async_State2/5 (addr)NvM_CurrentBlockDescriptorPtr/23 (read)NvM_GlobalWorkingStatus/24 (read)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (read)NvM_GlobalWorkingStatus/24 (read)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (read)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (read)NvM_AdminBlockTable/9 (write)NvM_GlobalBlockNumber/16 (read)NvM_AdminBlockTable/9 (write)NvM_GlobalErrorStatus/18 (write)NvM_GlobalCallLevel/21 (read)NvM_GlobalCallLevel/21 (write)NvM_CurrentFunctionPtr/22 (write)NvM_WriteBlock_Async_State1/28 (addr)NvM_CurrentBlockDescriptorPtr/23 (read)NvM_GlobalErrorStatus/18 (write)NvM_Queue_IndexStandard/14 (read)NvM_Queue_Standard/15 (write)NvM_WriteAll_Async/3 (addr)NvM_Queue_Standard/15 (write)
  Referring: NvM_WriteAll_Async_State2.part.0/31 (addr)NvM_WriteAll_Async_State2.part.0/31 (addr)NvM_WriteAll_Async_State2/5 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: NvM_WriteAll_Async/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10 (1073741824 (estimated locally),1.00 per call) NvM_CheckBlockStatus/27 (824372205 (estimated locally),0.77 per call) NvM_CheckBlockStatus/27 (155793018 (estimated locally),0.15 per call) NvM_CalcCrc_RemoveElement/26 (51411696 (estimated locally),0.05 per call) NvM_CheckWriteProtection/25 (124353917 (estimated locally),0.12 per call) NvM_PreService_Function/20 (980165223 (estimated locally),0.91 per call) NvM_MultiPostService_Function/19 (93576600 (estimated locally),0.09 per call) SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (1073741823 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10 (1073741823 (estimated locally),1.00 per call) 
NvM_WriteAll_Async/3 (NvM_WriteAll_Async) @071c6ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: NvM_CurrentServiceId/13 (write)NvM_GlobalBlockNumber/16 (write)NvM_AdminBlockTable/9 (write)
  Referring: NvM_WriteAll/1 (addr)NvM_WriteAll_Async_State1/4 (addr)NvM_WriteAll_Async_State1/4 (addr)NvM_CancelWriteAll/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_WriteAll_Async_State1/4 (1073741824 (estimated locally),1.00 per call) Fee_SetMode/17 (1073741824 (estimated locally),1.00 per call) 
NvM_CancelWriteAll/2 (NvM_CancelWriteAll) @071c6d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/7 (read)NvM_CurrentServiceId/13 (read)NvM_GlobalGenericStatus/7 (read)NvM_GlobalGenericStatus/7 (write)NvM_AdminBlockTable/9 (read)NvM_Queue_IndexStandard/14 (read)NvM_Queue_Standard/15 (read)NvM_WriteAll_Async/3 (addr)NvM_Queue_Standard/15 (write)NvM_Queue_Standard/15 (read)NvM_Queue_IndexStandard/14 (write)NvM_AdminBlockTable/9 (write)NvM_GlobalGenericStatus/7 (read)NvM_GlobalGenericStatus/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1023739145 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (511869572 (estimated locally),0.50 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10 (511869572 (estimated locally),0.50 per call) Det_ASR40_ReportError/8 (511869572 (estimated locally),0.50 per call) 
NvM_WriteAll/1 (NvM_WriteAll) @071c68c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalGenericStatus/7 (read)NvM_AdminBlockTable/9 (read)NvM_AdminBlockTable/9 (read)NvM_WriteAll_Async/3 (addr)NvM_AdminBlockTable/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (474808634 (estimated locally),0.44 per call) NvM_Queue_InsertStandard/11 (232086460 (estimated locally),0.22 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/10 (474808634 (estimated locally),0.44 per call) Det_ASR40_ReportError/8 (244598387 (estimated locally),0.23 per call) Det_ASR40_ReportError/8 (354334802 (estimated locally),0.33 per call) 

;; Function NvM_WriteAll_Async_State1 (NvM_WriteAll_Async_State1, funcdef_no=3, decl_uid=10823, cgraph_uid=5, symbol_order=4)

Modification phase of node NvM_WriteAll_Async_State1/4
NvM_WriteAll_Async_State1 ()
{
  uint16 TempBlockIndex;
  void (*NvM_CurrentFunctionPtrType) (void) TempFunctionPtr;
  short unsigned int NvM_Queue_IndexStandard.9_1;
  int _2;
  short unsigned int NvM_GlobalGenericStatus.11_3;
  short unsigned int _4;
  short unsigned int NvM_GlobalBlockNumber.13_5;
  short unsigned int _6;
  short unsigned int _7;
  unsigned char NvM_GlobalCallLevel.15_8;
  int _9;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.16_10;
  long unsigned int _11;
  long unsigned int _12;
  void * _13;
  long unsigned int _14;
  short unsigned int NvM_GlobalWorkingStatus.19_15;
  short unsigned int NvM_GlobalBlockNumber.20_16;
  int _17;
  unsigned char _18;
  long unsigned int _19;
  long unsigned int _20;
  unsigned char _21;
  short unsigned int NvM_GlobalWorkingStatus.25_22;
  short unsigned int NvM_GlobalBlockNumber.26_23;
  int _24;
  unsigned char _25;
  short unsigned int NvM_GlobalBlockNumber.27_26;
  int _27;
  unsigned char _28;
  unsigned char _29;
  short unsigned int NvM_GlobalBlockNumber.30_30;
  int _31;
  unsigned char NvM_GlobalCallLevel.31_32;
  short unsigned int _33;
  unsigned char _34;
  int _35;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.34_36;
  long unsigned int _37;
  long unsigned int _38;
  short unsigned int NvM_Queue_IndexStandard.35_39;
  int _40;
  short unsigned int _46;
  short unsigned int _59;
  unsigned char _73;
  unsigned char _74;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ExecuteWriteAllAsyncState1 => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.9_1 = NvM_Queue_IndexStandard;
  _2 = (int) NvM_Queue_IndexStandard.9_1;
  TempFunctionPtr_49 = NvM_Queue_Standard[_2].NvMRequestAsyncPtr;
  # DEBUG TempFunctionPtr => TempFunctionPtr_49
  # DEBUG BEGIN_STMT
  TempBlockIndex_50 = NvM_Queue_Standard[_2].NvMBlockDescriptorIndex;
  # DEBUG TempBlockIndex => TempBlockIndex_50
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.11_3 = NvM_GlobalGenericStatus;
  _46 = NvM_GlobalGenericStatus.11_3 & 2;
  if (_46 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870911]:
  if (TempFunctionPtr_49 == NvM_WriteAll_Async)
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 93576600]:
  # DEBUG BEGIN_STMT
  _4 = NvM_GlobalGenericStatus.11_3 & 65533;
  NvM_GlobalGenericStatus = _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 6;
  # DEBUG BEGIN_STMT
  NvM_MultiPostService_Function ();
  goto <bb 23>; [100.00%]

  <bb 5> [local count: 980165223]:
  # DEBUG BEGIN_STMT
  if (TempBlockIndex_50 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 490082611]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.13_5 = NvM_GlobalBlockNumber;
  _7 = NvM_GlobalBlockNumber.13_5 + 65535;
  NvM_GlobalBlockNumber = _7;

  <bb 7> [local count: 980165223]:
  # DEBUG BEGIN_STMT
  NvM_PreService_Function ();
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.15_8 = NvM_GlobalCallLevel;
  _9 = (int) NvM_GlobalCallLevel.15_8;
  NvM_CurrentFunctionPtr[_9] = NvM_WriteAll_Async_State2;
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.16_10 = NvM_CurrentBlockDescriptorPtr;
  _11 = NvM_CurrentBlockDescriptorPtr.16_10->blockDesc;
  _12 = _11 & 262144;
  if (_12 != 0)
    goto <bb 8>; [67.00%]
  else
    goto <bb 21>; [33.00%]

  <bb 8> [local count: 656710700]:
  # DEBUG BEGIN_STMT
  _13 = NvM_CurrentBlockDescriptorPtr.16_10->ramBlockDataAddress;
  if (_13 != 0B)
    goto <bb 10>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 9> [local count: 197013210]:
  _14 = _11 & 131072;
  if (_14 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 10> [local count: 558204095]:
  NvM_GlobalWorkingStatus.19_15 = NvM_GlobalWorkingStatus;
  _6 = NvM_GlobalWorkingStatus.19_15 & 8;
  if (_6 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 11> [local count: 279102047]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.20_16 = NvM_GlobalBlockNumber;
  _17 = (int) NvM_GlobalBlockNumber.20_16;
  _18 = NvM_AdminBlockTable[_17].NvMValid;
  if (_18 == 165)
    goto <bb 13>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 184207351]:
  _19 = _11 & 4194304;
  if (_19 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 13> [local count: 186998372]:
  # DEBUG BEGIN_STMT
  _59 = NvM_GlobalWorkingStatus.19_15 & 1;
  if (_59 != 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 14> [local count: 125288909]:
  _20 = _11 & 4194304;
  if (_20 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 124353917]:
  _21 = NvM_CheckWriteProtection (NvM_GlobalBlockNumber.20_16);
  if (_21 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 124821413]:
  NvM_GlobalWorkingStatus.25_22 = NvM_GlobalWorkingStatus;
  _33 = NvM_GlobalWorkingStatus.25_22 & 128;
  if (_33 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 17> [local count: 62410706]:
  NvM_GlobalBlockNumber.26_23 = NvM_GlobalBlockNumber;
  _24 = (int) NvM_GlobalBlockNumber.26_23;
  _25 = NvM_AdminBlockTable[_24].NvMExtendedStatus;
  _73 = _25 & 8;
  if (_73 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 18> [local count: 155793018]:
  # DEBUG BEGIN_STMT
  # DEBUG ExecuteWriteAllAsyncState1 => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.27_26 = NvM_GlobalBlockNumber;
  _27 = (int) NvM_GlobalBlockNumber.27_26;
  _28 = NvM_AdminBlockTable[_27].NvMExtendedStatus;
  _29 = _28 & 254;
  NvM_AdminBlockTable[_27].NvMExtendedStatus = _29;
  # DEBUG BEGIN_STMT
  _74 = _29 & 2;
  if (_74 != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 20>; [67.00%]

  <bb 19> [local count: 51411696]:
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemoveElement ();

  <bb 20> [local count: 155793018]:
  # DEBUG BEGIN_STMT
  NvM_CheckBlockStatus ();
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.30_30 = NvM_GlobalBlockNumber;
  _31 = (int) NvM_GlobalBlockNumber.30_30;
  NvM_AdminBlockTable[_31].NvMResult = 2;
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.31_32 = NvM_GlobalCallLevel;
  _34 = NvM_GlobalCallLevel.31_32 + 1;
  NvM_GlobalCallLevel = _34;
  # DEBUG BEGIN_STMT
  _35 = (int) _34;
  NvM_CurrentFunctionPtr[_35] = NvM_WriteBlock_Async_State1;
  goto <bb 23>; [100.00%]

  <bb 21> [local count: 824372205]:
  # DEBUG ExecuteWriteAllAsyncState1 => NULL
  # DEBUG BEGIN_STMT
  NvM_CheckBlockStatus ();
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.34_36 = NvM_CurrentBlockDescriptorPtr;
  _37 = NvM_CurrentBlockDescriptorPtr.34_36->blockDesc;
  _38 = _37 & 262144;
  if (_38 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 412186102]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 4;

  <bb 23> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.35_39 = NvM_Queue_IndexStandard;
  _40 = (int) NvM_Queue_IndexStandard.35_39;
  NvM_Queue_Standard[_40].NvMRequestAsyncPtr = NvM_WriteAll_Async;
  # DEBUG BEGIN_STMT
  NvM_Queue_Standard[_40].NvMBlockDescriptorIndex = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function NvM_WriteAll_Async (NvM_WriteAll_Async, funcdef_no=2, decl_uid=10821, cgraph_uid=4, symbol_order=3)

Modification phase of node NvM_WriteAll_Async/3
NvM_WriteAll_Async ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId = 13;
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber = 9;
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMDatasetBlockIndex = 0;
  # DEBUG BEGIN_STMT
  Fee_SetMode (1);
  # DEBUG BEGIN_STMT
  NvM_WriteAll_Async_State1 ();
  return;

}



;; Function NvM_WriteAll_Async_State2 (NvM_WriteAll_Async_State2, funcdef_no=4, decl_uid=10941, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_WriteAll_Async_State2/5
NvM_WriteAll_Async_State2 ()
{
  short unsigned int NvM_GlobalGenericStatus.37_1;
  short unsigned int NvM_GlobalBlockNumber.38_4;
  int _5;
  unsigned char NvM_GlobalCallLevel.39_6;
  int _7;
  short unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.37_1 = NvM_GlobalGenericStatus;
  _11 = NvM_GlobalGenericStatus.37_1 & 128;
  if (_11 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.38_4 = NvM_GlobalBlockNumber;
  _5 = (int) NvM_GlobalBlockNumber.38_4;
  NvM_AdminBlockTable[_5].NvMResult = 6;
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.39_6 = NvM_GlobalCallLevel;
  _7 = (int) NvM_GlobalCallLevel.39_6;
  NvM_CurrentFunctionPtr[_7] = NvM_WriteAll_Async_State1;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870912]:
  NvM_WriteAll_Async_State2.part.0 ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteAll_Async_State3 (NvM_WriteAll_Async_State3, funcdef_no=5, decl_uid=10943, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_WriteAll_Async_State3/6
NvM_WriteAll_Async_State3 ()
{
  MemIf_StatusType Result;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result_4 = Fee_GetStatus ();
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  _1 = Result_4 + 254;
  if (_1 > 1)
    goto <bb 3>; [41.48%]
  else
    goto <bb 4>; [58.52%]

  <bb 3> [local count: 445388112]:
  NvM_WriteAll_Async_State3.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 628353716]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function NvM_WriteAll (NvM_WriteAll, funcdef_no=0, decl_uid=8879, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_WriteAll/1
NvM_WriteAll ()
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
  Det_ASR40_ReportError (20, 0, 13, 20);
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
  Det_ASR40_ReportError (20, 0, 13, 21);
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
  Result_10 = NvM_Queue_InsertStandard (0, 0B, NvM_WriteAll_Async);
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT
  if (Result_10 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 116043230]:
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMCurrentServiceId = 13;

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



;; Function NvM_CancelWriteAll (NvM_CancelWriteAll, funcdef_no=1, decl_uid=8881, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_CancelWriteAll/2
NvM_CancelWriteAll ()
{
  uint16 Index;
  short unsigned int NvM_GlobalGenericStatus.1_1;
  unsigned char NvM_CurrentServiceId.2_2;
  short unsigned int NvM_GlobalGenericStatus.3_3;
  short unsigned int _4;
  unsigned char _5;
  int _7;
  void (*<T59e>) (void) _8;
  unsigned int _9;
  unsigned int _10;
  int _11;
  short unsigned int _12;
  short unsigned int NvM_GlobalGenericStatus.8_13;
  short unsigned int _14;
  short unsigned int _32;

  <bb 2> [local count: 1023739145]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.1_1 = NvM_GlobalGenericStatus;
  _32 = NvM_GlobalGenericStatus.1_1 & 1;
  if (_32 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 511869572]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (20, 0, 10, 20);
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 511869572]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  NvM_CurrentServiceId.2_2 = NvM_CurrentServiceId;
  if (NvM_CurrentServiceId.2_2 == 13)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 174035655]:
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.3_3 = NvM_GlobalGenericStatus;
  _4 = NvM_GlobalGenericStatus.3_3 | 2;
  NvM_GlobalGenericStatus = _4;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 337833918]:
  # DEBUG BEGIN_STMT
  _5 = NvM_AdminBlockTable[0].NvMResult;
  if (_5 == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 7> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Index_22 = NvM_Queue_IndexStandard;
  # DEBUG Index => Index_22
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 958878294]:
  # DEBUG BEGIN_STMT
  Index_23 = Index_15 + 65535;
  # DEBUG Index => Index_23

  <bb 9> [local count: 1073741824]:
  # Index_15 = PHI <Index_22(7), Index_23(8)>
  # DEBUG Index => Index_15
  # DEBUG BEGIN_STMT
  if (Index_15 != 65535)
    goto <bb 10>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 10> [local count: 1014686025]:
  _7 = (int) Index_15;
  _8 = NvM_Queue_Standard[_7].NvMRequestAsyncPtr;
  if (_8 != NvM_WriteAll_Async)
    goto <bb 8>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 11> [local count: 114863532]:
  # Index_6 = PHI <Index_15(9), Index_15(10)>
  # DEBUG BEGIN_STMT
  if (Index_6 != 65535)
    goto <bb 17>; [66.00%]
  else
    goto <bb 15>; [34.00%]

  <bb 17> [local count: 75809931]:
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 303239725]:
  # DEBUG BEGIN_STMT
  _9 = (unsigned int) Index_16;
  _10 = _9 + 1;
  _11 = (int) Index_16;
  NvM_Queue_Standard[_11] = NvM_Queue_Standard[_10];
  # DEBUG BEGIN_STMT
  Index_28 = Index_16 + 1;
  # DEBUG Index => Index_28

  <bb 13> [local count: 379049656]:
  # Index_16 = PHI <Index_28(12), Index_6(17)>
  # DEBUG Index => Index_16
  # DEBUG BEGIN_STMT
  if (Index_16 < Index_22)
    goto <bb 12>; [80.00%]
  else
    goto <bb 14>; [20.00%]

  <bb 14> [local count: 75809931]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = Index_22 + 65535;
  NvM_Queue_IndexStandard = _12;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_AdminBlockTable[0].NvMResult = 6;
  # DEBUG BEGIN_STMT
  NvM_GlobalGenericStatus.8_13 = NvM_GlobalGenericStatus;
  _14 = NvM_GlobalGenericStatus.8_13 | 2;
  NvM_GlobalGenericStatus = _14;

  <bb 15> [local count: 511869572]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();

  <bb 16> [local count: 1023739145]:
  # DEBUG BEGIN_STMT
  return;

}


