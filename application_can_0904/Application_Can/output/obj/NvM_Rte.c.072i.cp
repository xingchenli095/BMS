
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_ASR40_InvalidateNvBlock/17:
  Jump functions of caller  NvM_ASR40_EraseNvBlock/16:
  Jump functions of caller  NvM_ASR40_RestoreBlockDefaults/15:
  Jump functions of caller  NvM_ASR40_WriteBlock/14:
  Jump functions of caller  NvM_ASR40_ReadBlock/13:
  Jump functions of caller  NvM_ASR40_SetRamBlockStatus/12:
  Jump functions of caller  NvM_ASR40_GetDataIndex/11:
  Jump functions of caller  NvM_ASR40_SetDataIndex/10:
  Jump functions of caller  NvM_ASR40_GetErrorStatus/9:
  Jump functions of caller  NvM_Rte_InvalidateNvBlock/8:
  Jump functions of caller  NvM_Rte_EraseNvBlock/7:
  Jump functions of caller  NvM_Rte_RestoreBlockDefaults/6:
  Jump functions of caller  NvM_Rte_WriteBlock/5:
  Jump functions of caller  NvM_Rte_ReadBlock/4:
  Jump functions of caller  NvM_Rte_SetRamBlockStatus/3:
  Jump functions of caller  NvM_Rte_GetDataIndex/2:
  Jump functions of caller  NvM_Rte_SetDataIndex/1:
  Jump functions of caller  NvM_Rte_GetErrorStatus/0:

 Propagating constants:

Not considering NvM_Rte_InvalidateNvBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_EraseNvBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_RestoreBlockDefaults for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_WriteBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_ReadBlock for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_SetRamBlockStatus for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_GetDataIndex for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_SetDataIndex for cloning; -fipa-cp-clone disabled.
Not considering NvM_Rte_GetErrorStatus for cloning; -fipa-cp-clone disabled.

overall_size: 61, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_Rte_InvalidateNvBlock/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_Rte_EraseNvBlock/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_Rte_RestoreBlockDefaults/6:
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
  Node: NvM_Rte_WriteBlock/5:
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
  Node: NvM_Rte_ReadBlock/4:
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
  Node: NvM_Rte_SetRamBlockStatus/3:
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
  Node: NvM_Rte_GetDataIndex/2:
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
  Node: NvM_Rte_SetDataIndex/1:
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
  Node: NvM_Rte_GetErrorStatus/0:
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

NvM_ASR40_InvalidateNvBlock/17 (NvM_ASR40_InvalidateNvBlock) @06b1ae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_InvalidateNvBlock/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_EraseNvBlock/16 (NvM_ASR40_EraseNvBlock) @06b1ac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_EraseNvBlock/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_RestoreBlockDefaults/15 (NvM_ASR40_RestoreBlockDefaults) @06b1aa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_RestoreBlockDefaults/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_WriteBlock/14 (NvM_ASR40_WriteBlock) @06b1a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_WriteBlock/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_ReadBlock/13 (NvM_ASR40_ReadBlock) @06b1a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_ReadBlock/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_SetRamBlockStatus/12 (NvM_ASR40_SetRamBlockStatus) @06b1a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_SetRamBlockStatus/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_GetDataIndex/11 (NvM_ASR40_GetDataIndex) @06b1a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_GetDataIndex/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_SetDataIndex/10 (NvM_ASR40_SetDataIndex) @06b1a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_SetDataIndex/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_GetErrorStatus/9 (NvM_ASR40_GetErrorStatus) @06b1a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Rte_GetErrorStatus/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_Rte_InvalidateNvBlock/8 (NvM_Rte_InvalidateNvBlock) @06b12e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_InvalidateNvBlock/17 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_EraseNvBlock/7 (NvM_Rte_EraseNvBlock) @06b12c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_EraseNvBlock/16 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_RestoreBlockDefaults/6 (NvM_Rte_RestoreBlockDefaults) @06b12a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_RestoreBlockDefaults/15 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_WriteBlock/5 (NvM_Rte_WriteBlock) @06b128c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_WriteBlock/14 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_ReadBlock/4 (NvM_Rte_ReadBlock) @06b12700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_ReadBlock/13 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_SetRamBlockStatus/3 (NvM_Rte_SetRamBlockStatus) @06b12540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_SetRamBlockStatus/12 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_GetDataIndex/2 (NvM_Rte_GetDataIndex) @06b12380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_GetDataIndex/11 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_SetDataIndex/1 (NvM_Rte_SetDataIndex) @06b121c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_SetDataIndex/10 (1073741824 (estimated locally),1.00 per call) 
NvM_Rte_GetErrorStatus/0 (NvM_Rte_GetErrorStatus) @06b12000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_GetErrorStatus/9 (1073741824 (estimated locally),1.00 per call) 

;; Function NvM_Rte_GetErrorStatus (NvM_Rte_GetErrorStatus, funcdef_no=0, decl_uid=5776, cgraph_uid=1, symbol_order=0)

Modification phase of node NvM_Rte_GetErrorStatus/0
NvM_Rte_GetErrorStatus (NvM_BlockIdType BlockId, NvM_RequestResultType * RequestResultPtr)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_GetErrorStatus (BlockId_2(D), RequestResultPtr_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_SetDataIndex (NvM_Rte_SetDataIndex, funcdef_no=1, decl_uid=5779, cgraph_uid=2, symbol_order=1)

Modification phase of node NvM_Rte_SetDataIndex/1
NvM_Rte_SetDataIndex (NvM_BlockIdType BlockId, uint8 DataIndex)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_SetDataIndex (BlockId_2(D), DataIndex_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_GetDataIndex (NvM_Rte_GetDataIndex, funcdef_no=2, decl_uid=5782, cgraph_uid=3, symbol_order=2)

Modification phase of node NvM_Rte_GetDataIndex/2
NvM_Rte_GetDataIndex (NvM_BlockIdType BlockId, uint8 * DataIndex)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_GetDataIndex (BlockId_2(D), DataIndex_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_SetRamBlockStatus (NvM_Rte_SetRamBlockStatus, funcdef_no=3, decl_uid=5785, cgraph_uid=4, symbol_order=3)

Modification phase of node NvM_Rte_SetRamBlockStatus/3
NvM_Rte_SetRamBlockStatus (NvM_BlockIdType BlockId, boolean BlockChanged)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_SetRamBlockStatus (BlockId_2(D), BlockChanged_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_ReadBlock (NvM_Rte_ReadBlock, funcdef_no=4, decl_uid=5788, cgraph_uid=5, symbol_order=4)

Modification phase of node NvM_Rte_ReadBlock/4
NvM_Rte_ReadBlock (NvM_BlockIdType BlockId, void * NvM_DstPtr)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_ReadBlock (BlockId_2(D), NvM_DstPtr_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_WriteBlock (NvM_Rte_WriteBlock, funcdef_no=5, decl_uid=5791, cgraph_uid=6, symbol_order=5)

Modification phase of node NvM_Rte_WriteBlock/5
NvM_Rte_WriteBlock (NvM_BlockIdType BlockId, const void * NvM_SrcPtr)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_WriteBlock (BlockId_2(D), NvM_SrcPtr_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_RestoreBlockDefaults (NvM_Rte_RestoreBlockDefaults, funcdef_no=6, decl_uid=5794, cgraph_uid=7, symbol_order=6)

Modification phase of node NvM_Rte_RestoreBlockDefaults/6
NvM_Rte_RestoreBlockDefaults (NvM_BlockIdType BlockId, void * NvM_DestPtr)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = NvM_ASR40_RestoreBlockDefaults (BlockId_2(D), NvM_DestPtr_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function NvM_Rte_EraseNvBlock (NvM_Rte_EraseNvBlock, funcdef_no=7, decl_uid=5796, cgraph_uid=8, symbol_order=7)

Modification phase of node NvM_Rte_EraseNvBlock/7
NvM_Rte_EraseNvBlock (NvM_BlockIdType BlockId)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_4 = NvM_ASR40_EraseNvBlock (BlockId_2(D));
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  return ret_4;

}



;; Function NvM_Rte_InvalidateNvBlock (NvM_Rte_InvalidateNvBlock, funcdef_no=8, decl_uid=5798, cgraph_uid=9, symbol_order=8)

Modification phase of node NvM_Rte_InvalidateNvBlock/8
NvM_Rte_InvalidateNvBlock (NvM_BlockIdType BlockId)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_4 = NvM_ASR40_InvalidateNvBlock (BlockId_2(D));
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  return ret_4;

}


