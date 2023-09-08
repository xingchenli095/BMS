
IPA constant propagation start:
Determining dynamic type for call: NvM_CalcCrc_ProcessCrc.part.0 (CrcDataAdress_10(D), CalcCrcBuffer_6(D), Length_11(D), FirstCall_12(D));
  Starting walk at: NvM_CalcCrc_ProcessCrc.part.0 (CrcDataAdress_10(D), CalcCrcBuffer_6(D), Length_11(D), FirstCall_12(D));
  instance pointer: CrcDataAdress_10(D)  Outer instance pointer: CrcDataAdress_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Crc_CalculateCRC32 (CrcDataAdress_10(D), Length_11(D), _3, FirstCall_12(D));
Determining dynamic type for call: NvM_CalcCrc_ProcessCrc.part.0 (CrcDataAdress_10(D), CalcCrcBuffer_6(D), Length_11(D), FirstCall_12(D));
  Starting walk at: NvM_CalcCrc_ProcessCrc.part.0 (CrcDataAdress_10(D), CalcCrcBuffer_6(D), Length_11(D), FirstCall_12(D));
  instance pointer: CalcCrcBuffer_6(D)  Outer instance pointer: CalcCrcBuffer_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Crc_CalculateCRC32 (CrcDataAdress_10(D), Length_11(D), _3, FirstCall_12(D));
Determining dynamic type for call: NvM_CalcCrc_ProcessCrc (DataAddress_8(D), &NvM_CalcCrc_CalcBuffer, Length_7, _5, 1);
  Starting walk at: NvM_CalcCrc_ProcessCrc (DataAddress_8(D), &NvM_CalcCrc_CalcBuffer, Length_7, _5, 1);
  instance pointer: DataAddress_8(D)  Outer instance pointer: DataAddress_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: NvM_CalcCrc_ProcessCrc (DataAddress_8(D), &NvM_CalcCrc_CalcBuffer, Length_7, _5, 1);
  Starting walk at: NvM_CalcCrc_ProcessCrc (DataAddress_8(D), &NvM_CalcCrc_CalcBuffer, Length_7, _5, 1);
  instance pointer: &NvM_CalcCrc_CalcBuffer  Outer instance pointer: NvM_CalcCrc_CalcBuffer offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_CalcCrc_ProcessCrc.part.0/30:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/29:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/28:
  Jump functions of caller  Crc_CalculateCRC16/24:
  Jump functions of caller  Crc_CalculateCRC32/23:
  Jump functions of caller  NvM_GetDataAddress/18:
  Jump functions of caller  NvM_StateMachine_TerminateCurrentLevel/17:
  Jump functions of caller  NvM_CalcCrc_RemoveElement/12:
  Jump functions of caller  NvM_CalcCrc_PeekElement/11:
  Jump functions of caller  NvM_CalcCrc_EnqueueElement/10:
  Jump functions of caller  NvM_CalcCrc_ProcessCrc/9:
    callsite  NvM_CalcCrc_ProcessCrc/9 -> NvM_CalcCrc_ProcessCrc.part.0/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  NvM_CheckCrc/8:
  Jump functions of caller  NvM_CopyCrc/7:
  Jump functions of caller  NvM_CalculateCrc/6:
    callsite  NvM_CalculateCrc/6 -> NvM_CalcCrc_ProcessCrc/9 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: &NvM_CalcCrc_CalcBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         VR  [0, 65535]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  NvM_GetStoredRamCRCAddress/5:
  Jump functions of caller  NvM_CalcCrc_GetBlockCrcAddress/4:
  Jump functions of caller  NvM_CalcCrc_UpdateLength/3:

 Propagating constants:

Not considering NvM_CalcCrc_RemoveElement for cloning; -fipa-cp-clone disabled.
Not considering NvM_CalcCrc_PeekElement for cloning; -fipa-cp-clone disabled.
Not considering NvM_CalcCrc_EnqueueElement for cloning; -fipa-cp-clone disabled.
Not considering NvM_CalcCrc_ProcessCrc for cloning; -fipa-cp-clone disabled.
Not considering NvM_CheckCrc for cloning; -fipa-cp-clone disabled.
Not considering NvM_CopyCrc for cloning; -fipa-cp-clone disabled.
Not considering NvM_CalculateCrc for cloning; -fipa-cp-clone disabled.
Not considering NvM_GetStoredRamCRCAddress for cloning; -fipa-cp-clone disabled.
Not considering NvM_CalcCrc_GetBlockCrcAddress for cloning; -fipa-cp-clone disabled.
Not considering NvM_CalcCrc_UpdateLength for cloning; -fipa-cp-clone disabled.

overall_size: 153, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_CalcCrc_ProcessCrc.part.0/30:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: NvM_CalcCrc_RemoveElement/12:
  Node: NvM_CalcCrc_PeekElement/11:
  Node: NvM_CalcCrc_EnqueueElement/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CalcCrc_ProcessCrc/9:
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
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_CheckCrc/8:
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
  Node: NvM_CopyCrc/7:
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
  Node: NvM_CalculateCrc/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NvM_GetStoredRamCRCAddress/5:
  Node: NvM_CalcCrc_GetBlockCrcAddress/4:
  Node: NvM_CalcCrc_UpdateLength/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_CalcCrc_ProcessCrc.part.0/30 (NvM_CalcCrc_ProcessCrc.part.0) @06f13ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_CalcCrc_ProcessCrc/9 (217325344 (estimated locally),0.20 per call) 
  Calls: Crc_CalculateCRC16/24 (1073741824 (estimated locally),1.00 per call) 
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/29 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @06edd460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CalcCrc_RemoveElement/12 (178992762 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/28 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @06edde00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CalcCrc_RemoveElement/12 (178992760 (estimated locally),1.00 per call) 
  Calls: 
NvM_AdminBlockTable/27 (NvM_AdminBlockTable) @06ee3828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_EnqueueElement/10 (read)NvM_CalcCrc_EnqueueElement/10 (write)NvM_CalcCrc_RemoveElement/12 (read)NvM_CalcCrc_RemoveElement/12 (write)
  Availability: not_available
  Varpool flags:
NvM_CrcQueue/26 (NvM_CrcQueue) @06ee37e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_EnqueueElement/10 (write)NvM_CalcCrc_PeekElement/11 (read)NvM_CalcCrc_RemoveElement/12 (read)NvM_CalcCrc_RemoveElement/12 (write)NvM_CalcCrc_RemoveElement/12 (read)
  Availability: not_available
  Varpool flags:
NvM_RamBlockCrcCalcCount/25 (NvM_RamBlockCrcCalcCount) @06ee3798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_EnqueueElement/10 (write)NvM_CalcCrc_EnqueueElement/10 (read)NvM_CalcCrc_RemoveElement/12 (read)NvM_CalcCrc_RemoveElement/12 (read)NvM_CalcCrc_RemoveElement/12 (write)
  Availability: not_available
  Varpool flags:
Crc_CalculateCRC16/24 (Crc_CalculateCRC16) @06edd9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CalcCrc_ProcessCrc.part.0/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crc_CalculateCRC32/23 (Crc_CalculateCRC32) @06edd8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CalcCrc_ProcessCrc/9 (217325345 (estimated locally),0.20 per call) 
  Calls: 
NvM_CalcCrc_CalcBuffer/22 (NvM_CalcCrc_CalcBuffer) @06e7fbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalculateCrc/6 (addr)
  Availability: not_available
  Varpool flags:
NvM_BlockDescriptorTable/21 (NvM_BlockDescriptorTable) @06e7f9d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_GetStoredRamCRCAddress/5 (read)NvM_CalculateCrc/6 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_GlobalBlockNumber/20 (NvM_GlobalBlockNumber) @06e7f990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_GetStoredRamCRCAddress/5 (read)NvM_CalculateCrc/6 (read)NvM_CalcCrc_RemoveElement/12 (read)
  Availability: not_available
  Varpool flags:
NvM_CurrentBlockDescriptorPtr/19 (NvM_CurrentBlockDescriptorPtr) @06e7f828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_GetBlockCrcAddress/4 (read)NvM_CalculateCrc/6 (read)
  Availability: not_available
  Varpool flags:
NvM_GetDataAddress/18 (NvM_GetDataAddress) @06edd1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_CalcCrc_GetBlockCrcAddress/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_StateMachine_TerminateCurrentLevel/17 (NvM_StateMachine_TerminateCurrentLevel) @06edd000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: NvM_CalcCrc_UpdateLength/3 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
NvM_CurrentFunctionPtr/16 (NvM_CurrentFunctionPtr) @06e7f630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_UpdateLength/3 (write)
  Availability: not_available
  Varpool flags:
NvM_GlobalCallLevel/15 (NvM_GlobalCallLevel) @06e7f5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_UpdateLength/3 (read)
  Availability: not_available
  Varpool flags:
NvM_GlobalErrorStatus/14 (NvM_GlobalErrorStatus) @06e7f5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_CalcCrc_UpdateLength/3 (write)NvM_CalcCrc_UpdateLength/3 (write)
  Availability: not_available
  Varpool flags:
NvM_CalcCrc_RemoveElement/12 (NvM_CalcCrc_RemoveElement) @06e84b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_RamBlockCrcCalcCount/25 (read)NvM_CrcQueue/26 (read)NvM_CrcQueue/26 (write)NvM_CrcQueue/26 (read)NvM_GlobalBlockNumber/20 (read)NvM_RamBlockCrcCalcCount/25 (read)NvM_RamBlockCrcCalcCount/25 (write)NvM_AdminBlockTable/27 (read)NvM_AdminBlockTable/27 (write)
  Referring: 
  Availability: available
  Function flags: count:178992760 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/29 (178992762 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/28 (178992760 (estimated locally),1.00 per call) 
NvM_CalcCrc_PeekElement/11 (NvM_CalcCrc_PeekElement) @06e848c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CrcQueue/26 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CalcCrc_EnqueueElement/10 (NvM_CalcCrc_EnqueueElement) @06e84700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_RamBlockCrcCalcCount/25 (read)NvM_CrcQueue/26 (write)NvM_RamBlockCrcCalcCount/25 (write)NvM_AdminBlockTable/27 (read)NvM_AdminBlockTable/27 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CalcCrc_ProcessCrc/9 (NvM_CalcCrc_ProcessCrc) @06e84540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_CalculateCrc/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_CalcCrc_ProcessCrc.part.0/30 (217325344 (estimated locally),0.20 per call) Crc_CalculateCRC32/23 (217325345 (estimated locally),0.20 per call) 
NvM_CheckCrc/8 (NvM_CheckCrc) @06e841c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CopyCrc/7 (NvM_CopyCrc) @06e78e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CalculateCrc/6 (NvM_CalculateCrc) @06e789a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/20 (read)NvM_BlockDescriptorTable/21 (read)NvM_CurrentBlockDescriptorPtr/19 (read)NvM_CalcCrc_CalcBuffer/22 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_CalcCrc_ProcessCrc/9 (1073741824 (estimated locally),1.00 per call) 
NvM_GetStoredRamCRCAddress/5 (NvM_GetStoredRamCRCAddress) @06e787e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_GlobalBlockNumber/20 (read)NvM_BlockDescriptorTable/21 (read)NvM_RamBlockCrcValues/0 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CalcCrc_GetBlockCrcAddress/4 (NvM_CalcCrc_GetBlockCrcAddress) @06e78620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CurrentBlockDescriptorPtr/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_GetDataAddress/18 (1073741824 (estimated locally),1.00 per call) 
NvM_CalcCrc_UpdateLength/3 (NvM_CalcCrc_UpdateLength) @06e78460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_CalcCrc_RemainingLength/1 (read)NvM_CalcCrc_RemainingLength/1 (write)NvM_GlobalErrorStatus/14 (write)NvM_GlobalCallLevel/15 (read)NvM_CurrentFunctionPtr/16 (write)NvM_StateMachine_TerminateCurrentLevel/17 (addr)NvM_GlobalErrorStatus/14 (write)NvM_CalcCrc_Address/2 (read)NvM_CalcCrc_Address/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_CalcCrc_Address/2 (NvM_CalcCrc_Address) @06dabf78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: NvM_CalcCrc_UpdateLength/3 (read)NvM_CalcCrc_UpdateLength/3 (write)
  Availability: available
  Varpool flags: initialized
NvM_CalcCrc_RemainingLength/1 (NvM_CalcCrc_RemainingLength) @06dabf30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: NvM_CalcCrc_UpdateLength/3 (write)NvM_CalcCrc_UpdateLength/3 (read)
  Availability: available
  Varpool flags: initialized
NvM_RamBlockCrcValues/0 (NvM_RamBlockCrcValues) @06dabee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: NvM_GetStoredRamCRCAddress/5 (addr)
  Availability: available
  Varpool flags: initialized

;; Function NvM_CalcCrc_UpdateLength (NvM_CalcCrc_UpdateLength, funcdef_no=0, decl_uid=7680, cgraph_uid=1, symbol_order=3)

Modification phase of node NvM_CalcCrc_UpdateLength/3
NvM_CalcCrc_UpdateLength ()
{
  uint32 NvMCurrentCrcLength;
  long unsigned int NvM_CalcCrc_RemainingLength.0_1;
  long unsigned int _2;
  unsigned char NvM_GlobalCallLevel.2_3;
  int _4;
  uint8 * NvM_CalcCrc_Address.3_5;
  uint8 * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG NvMCurrentCrcLength => 0
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_RemainingLength.0_1 = NvM_CalcCrc_RemainingLength;
  if (NvM_CalcCrc_RemainingLength.0_1 > 65535)
    goto <bb 3>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  _2 = NvM_CalcCrc_RemainingLength.0_1 + 4294901761;
  NvM_CalcCrc_RemainingLength = _2;
  # DEBUG BEGIN_STMT
  # DEBUG NvMCurrentCrcLength => 65535
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 2;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG NvMCurrentCrcLength => NvM_CalcCrc_RemainingLength.0_1
  # DEBUG BEGIN_STMT
  NvM_GlobalCallLevel.2_3 = NvM_GlobalCallLevel;
  _4 = (int) NvM_GlobalCallLevel.2_3;
  NvM_CurrentFunctionPtr[_4] = NvM_StateMachine_TerminateCurrentLevel;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_GlobalErrorStatus = 0;

  <bb 5> [local count: 1073741824]:
  # NvMCurrentCrcLength_7 = PHI <65535(3), NvM_CalcCrc_RemainingLength.0_1(4)>
  # DEBUG NvMCurrentCrcLength => NvMCurrentCrcLength_7
  # DEBUG BEGIN_STMT
  NvM_CalcCrc_Address.3_5 = NvM_CalcCrc_Address;
  _6 = NvM_CalcCrc_Address.3_5 + 65535;
  NvM_CalcCrc_Address = _6;
  # DEBUG BEGIN_STMT
  return NvMCurrentCrcLength_7;

}



;; Function NvM_CalcCrc_GetBlockCrcAddress (NvM_CalcCrc_GetBlockCrcAddress, funcdef_no=1, decl_uid=7682, cgraph_uid=2, symbol_order=4)

Modification phase of node NvM_CalcCrc_GetBlockCrcAddress/4
NvM_CalcCrc_GetBlockCrcAddress ()
{
  uint8 * ret;
  uint8 * _1;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.4_2;
  short unsigned int _3;
  sizetype _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0B
  # DEBUG BEGIN_STMT
  _1 = NvM_GetDataAddress ();
  NvM_CurrentBlockDescriptorPtr.4_2 = NvM_CurrentBlockDescriptorPtr;
  _3 = NvM_CurrentBlockDescriptorPtr.4_2->nvBlockLength;
  _4 = (sizetype) _3;
  ret_7 = _1 + _4;
  # DEBUG ret => ret_7
  # DEBUG BEGIN_STMT
  return ret_7;

}



;; Function NvM_GetStoredRamCRCAddress (NvM_GetStoredRamCRCAddress, funcdef_no=2, decl_uid=7684, cgraph_uid=3, symbol_order=5)

Modification phase of node NvM_GetStoredRamCRCAddress/5
NvM_GetStoredRamCRCAddress ()
{
  uint8 * ret;
  short unsigned int NvM_GlobalBlockNumber.5_1;
  int _2;
  short unsigned int _3;
  int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0B
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.5_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.5_1;
  _3 = NvM_BlockDescriptorTable[_2].ramBlockCrcIndex;
  _4 = (int) _3;
  ret_6 = &NvM_RamBlockCrcValues[_4];
  # DEBUG ret => ret_6
  # DEBUG BEGIN_STMT
  return ret_6;

}



;; Function NvM_CopyCrc (NvM_CopyCrc, funcdef_no=4, decl_uid=7690, cgraph_uid=5, symbol_order=7)

Modification phase of node NvM_CopyCrc/7
NvM_CopyCrc (uint8 * DataAddress, uint8 * CrcAddress, uint32 BlockDesc)
{
  unsigned char _1;
  unsigned int _2;
  unsigned char _3;
  unsigned int _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CrcBufPtr8 => CrcAddress_9(D)
  # DEBUG BEGIN_STMT
  _1 = *CrcAddress_9(D);
  *DataAddress_11(D) = _1;
  # DEBUG BEGIN_STMT
  _2 = BlockDesc_13(D) & 6;
  if (_2 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(uint8 *)CrcAddress_9(D) + 1B];
  MEM[(uint8 *)DataAddress_11(D) + 1B] = _3;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = BlockDesc_13(D) & 7;
  if (_4 == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(uint8 *)CrcAddress_9(D) + 2B];
  MEM[(uint8 *)DataAddress_11(D) + 2B] = _5;
  # DEBUG BEGIN_STMT
  _6 = MEM[(uint8 *)CrcAddress_9(D) + 3B];
  MEM[(uint8 *)DataAddress_11(D) + 3B] = _6;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function NvM_CheckCrc (NvM_CheckCrc, funcdef_no=5, decl_uid=7700, cgraph_uid=6, symbol_order=8)

Modification phase of node NvM_CheckCrc/8
NvM_CheckCrc (const uint8 * DataAddress, uint8 * CrcCalcBuffer, uint32 BlockDesc)
{
  NvM_RequestResultType Result;
  unsigned char _1;
  unsigned char _2;
  unsigned int _3;
  unsigned char _4;
  unsigned char _5;
  unsigned int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = *CrcCalcBuffer_13(D);
  _2 = *DataAddress_14(D);
  if (_1 != _2)
    goto <bb 9>; [66.00%]
  else
    goto <bb 3>; [34.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = BlockDesc_15(D) & 6;
  if (_3 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 124124555]:
  _4 = MEM[(uint8 *)CrcCalcBuffer_13(D) + 1B];
  _5 = MEM[(const uint8 *)DataAddress_14(D) + 1B];
  if (_4 != _5)
    goto <bb 9>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 5> [local count: 283150014]:
  # DEBUG BEGIN_STMT
  _6 = BlockDesc_15(D) & 7;
  if (_6 == 3)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 96271005]:
  _7 = MEM[(uint8 *)CrcCalcBuffer_13(D) + 2B];
  _8 = MEM[(const uint8 *)DataAddress_14(D) + 2B];
  if (_7 != _8)
    goto <bb 9>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 7> [local count: 32732142]:
  _9 = MEM[(uint8 *)CrcCalcBuffer_13(D) + 3B];
  _10 = MEM[(const uint8 *)DataAddress_14(D) + 3B];
  if (_9 != _10)
    goto <bb 9>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 8> [local count: 198007938]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 9> [local count: 1073741824]:
  # Result_11 = PHI <1(2), 1(4), 1(7), 0(8), 1(6)>
  # DEBUG Result => Result_11
  # DEBUG BEGIN_STMT
  return Result_11;

}



;; Function NvM_CalcCrc_ProcessCrc (NvM_CalcCrc_ProcessCrc, funcdef_no=6, decl_uid=7696, cgraph_uid=7, symbol_order=9)

Modification phase of node NvM_CalcCrc_ProcessCrc/9
NvM_CalcCrc_ProcessCrc (uint8 * CrcDataAdress, uint8 * CalcCrcBuffer, uint32 Length, uint32 BlockDesc, boolean FirstCall)
{
  unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CrcBufPtr32 => CalcCrcBuffer_6(D)
  # DEBUG BEGIN_STMT
  # DEBUG CrcBufPtr16 => CalcCrcBuffer_6(D)
  # DEBUG BEGIN_STMT
  _2 = BlockDesc_8(D) & 7;
  if (_2 == 3)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(uint32 *)CalcCrcBuffer_6(D)];
  _4 = Crc_CalculateCRC32 (CrcDataAdress_10(D), Length_11(D), _3, FirstCall_12(D));
  MEM[(uint32 *)CalcCrcBuffer_6(D)] = _4;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (_2 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 217325344]:
  # DEBUG D#1 => BlockDesc_8(D)
  NvM_CalcCrc_ProcessCrc.part.0 (CrcDataAdress_10(D), CalcCrcBuffer_6(D), Length_11(D), FirstCall_12(D));

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function NvM_CalculateCrc (NvM_CalculateCrc, funcdef_no=3, decl_uid=7686, cgraph_uid=4, symbol_order=6)

Modification phase of node NvM_CalculateCrc/6
NvM_CalculateCrc (uint8 * DataAddress)
{
  uint32 Length;
  short unsigned int NvM_GlobalBlockNumber.6_1;
  int _2;
  short unsigned int _3;
  const struct NvM_BlockDescriptorType * NvM_CurrentBlockDescriptorPtr.10_4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_GlobalBlockNumber.6_1 = NvM_GlobalBlockNumber;
  _2 = (int) NvM_GlobalBlockNumber.6_1;
  _3 = NvM_BlockDescriptorTable[_2].nvBlockLength;
  Length_7 = (uint32) _3;
  # DEBUG Length => Length_7
  # DEBUG BEGIN_STMT
  # DEBUG Length => Length_7
  # DEBUG BEGIN_STMT
  NvM_CurrentBlockDescriptorPtr.10_4 = NvM_CurrentBlockDescriptorPtr;
  _5 = NvM_CurrentBlockDescriptorPtr.10_4->blockDesc;
  NvM_CalcCrc_ProcessCrc (DataAddress_8(D), &NvM_CalcCrc_CalcBuffer, Length_7, _5, 1);
  return;

}



;; Function NvM_CalcCrc_EnqueueElement (NvM_CalcCrc_EnqueueElement, funcdef_no=7, decl_uid=7702, cgraph_uid=8, symbol_order=10)

Modification phase of node NvM_CalcCrc_EnqueueElement/10
NvM_CalcCrc_EnqueueElement (uint16 BlockNumber)
{
  short unsigned int NvM_RamBlockCrcCalcCount.13_1;
  int _2;
  short unsigned int _3;
  int _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_RamBlockCrcCalcCount.13_1 = NvM_RamBlockCrcCalcCount;
  _2 = (int) NvM_RamBlockCrcCalcCount.13_1;
  NvM_CrcQueue[_2] = BlockNumber_8(D);
  # DEBUG BEGIN_STMT
  _3 = NvM_RamBlockCrcCalcCount.13_1 + 1;
  NvM_RamBlockCrcCalcCount = _3;
  # DEBUG BEGIN_STMT
  _4 = (int) BlockNumber_8(D);
  _5 = NvM_AdminBlockTable[_4].NvMExtendedStatus;
  _6 = _5 | 2;
  NvM_AdminBlockTable[_4].NvMExtendedStatus = _6;
  return;

}



;; Function NvM_CalcCrc_PeekElement (NvM_CalcCrc_PeekElement, funcdef_no=8, decl_uid=7704, cgraph_uid=9, symbol_order=11)

Modification phase of node NvM_CalcCrc_PeekElement/11
NvM_CalcCrc_PeekElement ()
{
  uint16 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = NvM_CrcQueue[0];
  return _2;

}



;; Function NvM_CalcCrc_RemoveElement (NvM_CalcCrc_RemoveElement, funcdef_no=9, decl_uid=7706, cgraph_uid=10, symbol_order=12)

Modification phase of node NvM_CalcCrc_RemoveElement/12
NvM_CalcCrc_RemoveElement ()
{
  uint8 BlockFound;
  uint16 BlockPosition;
  const uint16 MaxIterator;
  int _1;
  unsigned int _2;
  unsigned int _3;
  short unsigned int _4;
  int _5;
  short unsigned int _6;
  short unsigned int NvM_GlobalBlockNumber.16_7;
  short unsigned int NvM_RamBlockCrcCalcCount.17_8;
  short unsigned int _9;
  int _10;
  unsigned char _11;
  unsigned char _12;

  <bb 2> [local count: 178992760]:
  # DEBUG BEGIN_STMT
  MaxIterator_19 = NvM_RamBlockCrcCalcCount;
  # DEBUG MaxIterator => MaxIterator_19
  # DEBUG BEGIN_STMT
  # DEBUG BlockPosition => 0
  # DEBUG BEGIN_STMT
  # DEBUG BlockFound => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BlockPosition => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 894749063]:
  # DEBUG BEGIN_STMT
  if (BlockFound_15 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 304214682]:
  # DEBUG BEGIN_STMT
  _1 = (int) BlockPosition_13;
  _2 = (unsigned int) BlockPosition_13;
  _3 = _2 + 4294967295;
  _4 = NvM_CrcQueue[_1];
  NvM_CrcQueue[_3] = _4;
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 590534382]:
  # DEBUG BEGIN_STMT
  _5 = (int) BlockPosition_13;
  _6 = NvM_CrcQueue[_5];
  NvM_GlobalBlockNumber.16_7 = NvM_GlobalBlockNumber;
  if (_6 == NvM_GlobalBlockNumber.16_7)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 200781690]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockFound => 1
  # DEBUG BEGIN_STMT
  NvM_RamBlockCrcCalcCount.17_8 = NvM_RamBlockCrcCalcCount;
  _9 = NvM_RamBlockCrcCalcCount.17_8 + 65535;
  NvM_RamBlockCrcCalcCount = _9;
  # DEBUG BEGIN_STMT
  _10 = (int) NvM_GlobalBlockNumber.16_7;
  _11 = NvM_AdminBlockTable[_10].NvMExtendedStatus;
  _12 = _11 & 253;
  NvM_AdminBlockTable[_10].NvMExtendedStatus = _12;

  <bb 7> [local count: 894749065]:
  # BlockFound_14 = PHI <1(4), BlockFound_15(5), 1(6)>
  # DEBUG BlockFound => BlockFound_14
  # DEBUG BEGIN_STMT
  BlockPosition_25 = BlockPosition_13 + 1;
  # DEBUG BlockPosition => BlockPosition_25

  <bb 8> [local count: 1073741824]:
  # BlockPosition_13 = PHI <0(2), BlockPosition_25(7)>
  # BlockFound_15 = PHI <0(2), BlockFound_14(7)>
  # DEBUG BlockFound => BlockFound_15
  # DEBUG BlockPosition => BlockPosition_13
  # DEBUG BEGIN_STMT
  if (BlockPosition_13 < MaxIterator_19)
    goto <bb 3>; [83.33%]
  else
    goto <bb 9>; [16.67%]

  <bb 9> [local count: 178992762]:
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  return;

}


