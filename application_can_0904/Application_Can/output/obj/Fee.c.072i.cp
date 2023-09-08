
IPA constant propagation start:
Determining dynamic type for call: Fee_SerializeFlag (&Fee_aDataBuffer, 24);
  Starting walk at: Fee_SerializeFlag (&Fee_aDataBuffer, 24);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_4 = Fee_BlankCheck (_2, _3);
  Starting walk at: RetVal_4 = Fee_BlankCheck (_2, _3);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_4 = Fee_BlankCheck (_2, _3);
  Starting walk at: RetVal_4 = Fee_BlankCheck (_2, _3);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  Starting walk at: Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_CopyDataToPageBuffer (_5, &Fee_aDataBuffer, WriteLength_13);
  Starting walk at: Fee_CopyDataToPageBuffer (_5, &Fee_aDataBuffer, WriteLength_13);
  instance pointer: _5  Outer instance pointer: _5 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_CopyDataToPageBuffer (_5, &Fee_aDataBuffer, WriteLength_13);
  Starting walk at: Fee_CopyDataToPageBuffer (_5, &Fee_aDataBuffer, WriteLength_13);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_CopyDataToPageBuffer (Fee_pJobWriteDataDestPtr.176_10, &Fee_aDataBuffer, BlockSize_16);
  Starting walk at: Fee_CopyDataToPageBuffer (Fee_pJobWriteDataDestPtr.176_10, &Fee_aDataBuffer, BlockSize_16);
  instance pointer: Fee_pJobWriteDataDestPtr.176_10  Outer instance pointer: Fee_pJobWriteDataDestPtr.176_10 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_CopyDataToPageBuffer (Fee_pJobWriteDataDestPtr.176_10, &Fee_aDataBuffer, BlockSize_16);
  Starting walk at: Fee_CopyDataToPageBuffer (Fee_pJobWriteDataDestPtr.176_10, &Fee_aDataBuffer, BlockSize_16);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeBlockHdr (&BlockHder, DataAddr_20, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeBlockHdr (&BlockHder, DataAddr_20, &Fee_aDataBuffer);
  instance pointer: &BlockHder  Outer instance pointer: BlockHder offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeBlockHdr (&BlockHder, DataAddr_20, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeBlockHdr (&BlockHder, DataAddr_20, &Fee_aDataBuffer);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  Starting walk at: Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClrStatus_17 = Fee_DeserializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  Starting walk at: ClrStatus_17 = Fee_DeserializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  instance pointer: &ClrHdr  Outer instance pointer: ClrHdr offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ClrStatus_17 = Fee_DeserializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  Starting walk at: ClrStatus_17 = Fee_DeserializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  Starting walk at: BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  instance pointer: &BlockHder  Outer instance pointer: BlockHder offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  Starting walk at: BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  instance pointer: &DataAddr  Outer instance pointer: DataAddr offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  Starting walk at: BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _14 = Fee_IsBlockMatchedConfig (BlockIndex_27, 65535, &BlockHder, DataAddr.89_13);
  Starting walk at: _14 = Fee_IsBlockMatchedConfig (BlockIndex_27, 65535, &BlockHder, DataAddr.89_13);
  instance pointer: &BlockHder  Outer instance pointer: BlockHder offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
Determining dynamic type for call: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  instance pointer: &ClrHdr  Outer instance pointer: ClrHdr offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeFlag (&Fee_aDataBuffer[32], 129);
  Starting walk at: Fee_SerializeFlag (&Fee_aDataBuffer[32], 129);
  instance pointer: &Fee_aDataBuffer[32]  Outer instance pointer: Fee_aDataBuffer offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
Determining dynamic type for call: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  instance pointer: &ClrHdr  Outer instance pointer: ClrHdr offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeBlockHdr (&BlockHder, DataAddr_18, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeBlockHdr (&BlockHder, DataAddr_18, &Fee_aDataBuffer);
  instance pointer: &BlockHder  Outer instance pointer: BlockHder offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeBlockHdr (&BlockHder, DataAddr_18, &Fee_aDataBuffer);
  Starting walk at: Fee_SerializeBlockHdr (&BlockHder, DataAddr_18, &Fee_aDataBuffer);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  Starting walk at: Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  instance pointer: &Fee_aDataBuffer  Outer instance pointer: Fee_aDataBuffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = Fee_BlankCheck (TempClrHdrPtr_24, TargetEndPtr_17);
  Starting walk at: _5 = Fee_BlankCheck (TempClrHdrPtr_24, TargetEndPtr_17);
  instance pointer: TempClrHdrPtr_24  Outer instance pointer: ClrHdrPtr_16(D) offset: 128 (bits) vtbl reference: 
Determining dynamic type for call: _5 = Fee_BlankCheck (TempClrHdrPtr_24, TargetEndPtr_17);
  Starting walk at: _5 = Fee_BlankCheck (TempClrHdrPtr_24, TargetEndPtr_17);
  instance pointer: TargetEndPtr_17  Outer instance pointer: TargetEndPtr_17 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = Fee_DeserializeFlag (TargetEndPtr_17, 129, &FlagValid);
  Starting walk at: _6 = Fee_DeserializeFlag (TargetEndPtr_17, 129, &FlagValid);
  instance pointer: TargetEndPtr_17  Outer instance pointer: TargetEndPtr_17 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = Fee_DeserializeFlag (TargetEndPtr_17, 129, &FlagValid);
  Starting walk at: _6 = Fee_DeserializeFlag (TargetEndPtr_17, 129, &FlagValid);
  instance pointer: &FlagValid  Outer instance pointer: FlagValid offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _8 = Fee_DeserializeFlag (_7, 24, &FlagInvalid);
  Starting walk at: _8 = Fee_DeserializeFlag (_7, 24, &FlagInvalid);
  instance pointer: _7  Outer instance pointer: ClrHdrPtr_16(D) offset: 512 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Fee_DeserializeFlag (TargetEndPtr_17, 129, &FlagValid);
Determining dynamic type for call: _8 = Fee_DeserializeFlag (_7, 24, &FlagInvalid);
  Starting walk at: _8 = Fee_DeserializeFlag (_7, 24, &FlagInvalid);
  instance pointer: &FlagInvalid  Outer instance pointer: FlagInvalid offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Fee_DeserializeFlag (TargetEndPtr_17, 129, &FlagValid);
Determining dynamic type for call: _2 = Fee_BlankCheck (BlockHdrPtr_23(D), _1);
  Starting walk at: _2 = Fee_BlankCheck (BlockHdrPtr_23(D), _1);
  instance pointer: BlockHdrPtr_23(D)  Outer instance pointer: BlockHdrPtr_23(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = Fee_BlankCheck (BlockHdrPtr_23(D), _1);
  Starting walk at: _2 = Fee_BlankCheck (BlockHdrPtr_23(D), _1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _12 = Fee_BlankCheck (TempBlockHdrPtr_34, TargetEndPtr_27);
  Starting walk at: _12 = Fee_BlankCheck (TempBlockHdrPtr_34, TargetEndPtr_27);
  instance pointer: TempBlockHdrPtr_34  Outer instance pointer: BlockHdrPtr_23(D) offset: 104 (bits) vtbl reference: 
Determining dynamic type for call: _12 = Fee_BlankCheck (TempBlockHdrPtr_34, TargetEndPtr_27);
  Starting walk at: _12 = Fee_BlankCheck (TempBlockHdrPtr_34, TargetEndPtr_27);
  instance pointer: TargetEndPtr_27  Outer instance pointer: TargetEndPtr_27 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _13 = Fee_DeserializeFlag (TargetEndPtr_27, 129, &FlagValid);
  Starting walk at: _13 = Fee_DeserializeFlag (TargetEndPtr_27, 129, &FlagValid);
  instance pointer: TargetEndPtr_27  Outer instance pointer: TargetEndPtr_27 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _13 = Fee_DeserializeFlag (TargetEndPtr_27, 129, &FlagValid);
  Starting walk at: _13 = Fee_DeserializeFlag (TargetEndPtr_27, 129, &FlagValid);
  instance pointer: &FlagValid  Outer instance pointer: FlagValid offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _15 = Fee_DeserializeFlag (_14, 24, &FlagInvalid);
  Starting walk at: _15 = Fee_DeserializeFlag (_14, 24, &FlagInvalid);
  instance pointer: _14  Outer instance pointer: BlockHdrPtr_23(D) offset: 512 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = Fee_DeserializeFlag (TargetEndPtr_27, 129, &FlagValid);
Determining dynamic type for call: _15 = Fee_DeserializeFlag (_14, 24, &FlagInvalid);
  Starting walk at: _15 = Fee_DeserializeFlag (_14, 24, &FlagInvalid);
  instance pointer: &FlagInvalid  Outer instance pointer: FlagInvalid offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = Fee_DeserializeFlag (TargetEndPtr_27, 129, &FlagValid);
Determining dynamic type for call: RetVal_2 = Fee_DeserializeFlag.part.0 (TargetPtr_7(D));
  Starting walk at: RetVal_2 = Fee_DeserializeFlag.part.0 (TargetPtr_7(D));
  instance pointer: TargetPtr_7(D)  Outer instance pointer: TargetPtr_7(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Fee_JobEraseImmediateBlock.part.0/150:
    callsite  Fee_JobEraseImmediateBlock.part.0/150 -> Fee_JobInternalSwap/46 : 
  Jump functions of caller  Fee_JobInternalScanCluster.part.0/146:
    callsite  Fee_JobInternalScanCluster.part.0/146 -> Fee_JobInternalScanClusterErase/48 : 
  Jump functions of caller  Fee_JobInternalSwapDataWrite.part.0/140:
  Jump functions of caller  Fee_JobInvalidateBlock.part.0/133:
    callsite  Fee_JobInvalidateBlock.part.0/133 -> Fee_SerializeFlag/40 : 
       param 0: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 24
         value: 0x18, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_JobSetModeTransfer.part.0/122:
  Jump functions of caller  Fee_UpdateBlockRuntimeInfo.isra.0/118:
  Jump functions of caller  Fee_DeserializeFlag.part.0/117:
    callsite  Fee_DeserializeFlag.part.0/117 -> Fee_BlankCheck/29 : 
       param 0: PASS THROUGH: 0, op pointer_plus_expr 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op pointer_plus_expr 32
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_Erase/116:
  Jump functions of caller  Fls_Read/115:
  Jump functions of caller  Fls_Write/114:
  Jump functions of caller  Fls_SetMode/112:
  Jump functions of caller  Fls_GetStatus/111:
  Jump functions of caller  NvM_JobErrorNotification/110:
  Jump functions of caller  NvM_JobEndNotification/109:
  Jump functions of caller  Fls_GetJobResult/108:
  Jump functions of caller  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_03/107:
  Jump functions of caller  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_03/106:
  Jump functions of caller  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_02/105:
  Jump functions of caller  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_02/104:
  Jump functions of caller  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_01/103:
  Jump functions of caller  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_01/102:
  Jump functions of caller  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_00/101:
  Jump functions of caller  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_00/99:
  Jump functions of caller  Det_ASR43_ReportRuntimeError/98:
  Jump functions of caller  Det_ASR40_ReportError/97:
  Jump functions of caller  Fee_ForceSwapOnNextWrite/96:
  Jump functions of caller  Fee_GetRunTimeInfo/95:
  Jump functions of caller  Fee_MainFunction/94:
    callsite  Fee_MainFunction/94 -> Fee_JobSchedule/74 : 
  Jump functions of caller  Fee_JobErrorNotification/93:
    callsite  Fee_JobErrorNotification/93 -> Fee_JobErrorSchedule/77 : 
  Jump functions of caller  Fee_JobEndNotification/92:
    callsite  Fee_JobEndNotification/92 -> Fee_JobSchedule/74 : 
  Jump functions of caller  Fee_EraseImmediateBlock/91:
    callsite  Fee_EraseImmediateBlock/91 -> Fee_GetBlockIndex/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_GetVersionInfo/90:
  Jump functions of caller  Fee_InvalidateBlock/89:
    callsite  Fee_InvalidateBlock/89 -> Fee_GetBlockIndex/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_GetJobResult/88:
  Jump functions of caller  Fee_GetStatus/87:
  Jump functions of caller  Fee_Cancel/86:
  Jump functions of caller  Fee_Write/85:
    callsite  Fee_Write/85 -> Fee_GetBlockIndex/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_Read/84:
    callsite  Fee_Read/84 -> Fee_GetBlockIndex/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_SetMode/83:
  Jump functions of caller  Fee_Init/82:
  Jump functions of caller  Fee_EraseCluster/80:
  Jump functions of caller  Fee_JobErrorSchedule/77:
    callsite  Fee_JobErrorSchedule/77 -> Fee_JobInternalSwapDataRead/61 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Fee_JobErrorSchedule/77 -> Fee_JobInternalScanClusterHdrParse/58 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Fee_JobErrorSchedule/77 -> Fee_JobInternalScanBlockHdrParse/54 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_ReservedAreaWritable/76:
    callsite  Fee_ReservedAreaWritable/76 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_JobScheduleAfterSwapClusterVldDone/75:
    callsite  Fee_JobScheduleAfterSwapClusterVldDone/75 -> Fee_JobEraseImmediateBlock/73 : 
    callsite  Fee_JobScheduleAfterSwapClusterVldDone/75 -> Fee_JobWriteBlock/66 : 
  Jump functions of caller  Fee_JobSchedule/74:
    indirect simple callsite, calling param -1, offset 0, for stmt _5 = _2 ();
  Jump functions of caller  Fee_JobEraseImmediateBlock/73:
    callsite  Fee_JobEraseImmediateBlock/73 -> Fee_JobEraseImmediateBlock.part.0/150 : 
    callsite  Fee_JobEraseImmediateBlock/73 -> Fee_ReservedAreaWritable/76 : 
  Jump functions of caller  Fee_JobInvalidateBlockDone/72:
  Jump functions of caller  Fee_JobInvalidateBlock/71:
    callsite  Fee_JobInvalidateBlock/71 -> Fee_JobInvalidateBlock.part.0/133 : 
  Jump functions of caller  Fee_JobWriteBlockDone/70:
  Jump functions of caller  Fee_JobSetModeTransfer/69:
    callsite  Fee_JobSetModeTransfer/69 -> Fee_JobSetModeTransfer.part.0/122 : 
  Jump functions of caller  Fee_JobWriteBlockValidate/68:
    callsite  Fee_JobWriteBlockValidate/68 -> Fee_SerializeFlag/40 : 
       param 0: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 129
         value: 0x81, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_JobWriteBlockUnalignedData/67:
    callsite  Fee_JobWriteBlockUnalignedData/67 -> Fee_CopyDataToPageBuffer/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
  Jump functions of caller  Fee_JobWriteBlock/66:
    callsite  Fee_JobWriteBlock/66 -> Fee_JobWriteHdr/64 : 
  Jump functions of caller  Fee_JobWriteBlockData/65:
    callsite  Fee_JobWriteBlockData/65 -> Fee_CopyDataToPageBuffer/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Fee_JobWriteBlockData/65 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_JobWriteHdr/64:
    callsite  Fee_JobWriteHdr/64 -> Fee_SerializeBlockHdr/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Fee_JobWriteHdr/64 -> Fee_JobInternalSwap/46 : 
    callsite  Fee_JobWriteHdr/64 -> Fee_ReservedAreaWritable/76 : 
    callsite  Fee_JobWriteHdr/64 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_JobInternalSwapClusterVldDone/63:
    callsite  Fee_JobInternalSwapClusterVldDone/63 -> Fee_JobScheduleAfterSwapClusterVldDone/75 : 
    callsite  Fee_JobInternalSwapClusterVldDone/63 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Fee_JobInternalSwapClusterVldDone/63 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_JobInternalSwapDataRead/61:
    callsite  Fee_JobInternalSwapDataRead/61 -> Fee_JobInternalSwapBlockVld/60 : 
    callsite  Fee_JobInternalSwapDataRead/61 -> Fee_JobInternalSwapBlock/42 : 
    callsite  Fee_JobInternalSwapDataRead/61 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_JobInternalSwapBlockVld/60:
    callsite  Fee_JobInternalSwapBlockVld/60 -> Fee_SerializeFlag/40 : 
       param 0: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 129
         value: 0x81, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_JobReadBlock/59:
  Jump functions of caller  Fee_JobInternalScanClusterHdrParse/58:
    callsite  Fee_JobInternalScanClusterHdrParse/58 -> Fee_JobInternalScanClusterHdrRead/55 : 
    callsite  Fee_JobInternalScanClusterHdrParse/58 -> Fee_JobInternalScanCluster/49 : 
    callsite  Fee_JobInternalScanClusterHdrParse/58 -> Fee_JobInternalScanClusterHdrDone/57 : 
    callsite  Fee_JobInternalScanClusterHdrParse/58 -> Fee_DeserializeClusterHdr/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Fee_JobInternalScanClusterHdrDone/57:
  Jump functions of caller  Fee_JobInternalScan/56:
    callsite  Fee_JobInternalScan/56 -> Fee_JobInternalScanClusterHdrRead/55 : 
  Jump functions of caller  Fee_JobInternalScanClusterHdrRead/55:
  Jump functions of caller  Fee_JobInternalScanBlockHdrParse/54:
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_JobInternalScanBlockHdrRead/47 : 
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_UpdateBlockRuntimeInfo.isra.0/118 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_IsBlockMatchedConfig/52 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 65535
         value: 0xffff, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_GetBlockIndex/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_JobInternalScanCluster/49 : 
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_JobInternalScanBlockHdrRead/47 : 
    callsite  Fee_JobInternalScanBlockHdrParse/54 -> Fee_DeserializeBlockHdr/31 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Fee_IsBlockMatchedConfig/52:
    callsite  Fee_IsBlockMatchedConfig/52 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Fee_JobInternalScanClusterFmtDone/51:
    callsite  Fee_JobInternalScanClusterFmtDone/51 -> Fee_JobInternalScanCluster/49 : 
  Jump functions of caller  Fee_JobInternalScanClusterFmt/50:
    callsite  Fee_JobInternalScanClusterFmt/50 -> Fee_SerializeFlag/40 : 
       param 0: CONST: &Fee_aDataBuffer[32]
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 129
         value: 0x81, mask: 0x0
         Unknown VR
    callsite  Fee_JobInternalScanClusterFmt/50 -> Fee_SerializeClusterHdr/33 : 
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 1
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Fee_JobInternalScanCluster/49:
    callsite  Fee_JobInternalScanCluster/49 -> Fee_JobInternalScanBlockHdrRead/47 : 
    callsite  Fee_JobInternalScanCluster/49 -> Fee_JobInternalScanCluster.part.0/146 : 
  Jump functions of caller  Fee_JobInternalScanClusterErase/48:
    callsite  Fee_JobInternalScanClusterErase/48 -> Fee_EraseCluster/80 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Fee_JobInternalScanBlockHdrRead/47:
  Jump functions of caller  Fee_JobInternalSwap/46:
    callsite  Fee_JobInternalSwap/46 -> Fee_JobInternalSwapClusterErase/44 : 
    callsite  Fee_JobInternalSwap/46 -> Fee_GetNextClusterToSwap/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Fee_GetNextClusterToSwap/45:
  Jump functions of caller  Fee_JobInternalSwapClusterErase/44:
    callsite  Fee_JobInternalSwapClusterErase/44 -> Fee_EraseCluster/80 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Fee_JobInternalSwapClusterFmt/43:
    callsite  Fee_JobInternalSwapClusterFmt/43 -> Fee_SerializeClusterHdr/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Fee_JobInternalSwapBlock/42:
    callsite  Fee_JobInternalSwapBlock/42 -> Fee_SerializeBlockHdr/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Fee_JobInternalSwapBlock/42 -> Fee_AlignToVirtualPageSize/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Fee_JobInternalSwapBlock/42 -> Fee_JobInternalSwapClusterVld/41 : 
  Jump functions of caller  Fee_JobInternalSwapClusterVld/41:
    callsite  Fee_JobInternalSwapClusterVld/41 -> Fee_SerializeFlag/40 : 
       param 0: CONST: &Fee_aDataBuffer
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 129
         value: 0x81, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_SerializeFlag/40:
  Jump functions of caller  Fee_CopyDataToPageBuffer/39:
  Jump functions of caller  Fee_AlignToVirtualPageSize/38:
  Jump functions of caller  Fee_GetBlockIndex/34:
  Jump functions of caller  Fee_SerializeClusterHdr/33:
  Jump functions of caller  Fee_DeserializeClusterHdr/32:
    callsite  Fee_DeserializeClusterHdr/32 -> Fee_DeserializeFlag/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 24
         value: 0x18, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Fee_DeserializeClusterHdr/32 -> Fee_DeserializeFlag/30 : 
       param 0: PASS THROUGH: 1, op pointer_plus_expr 32
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 129
         value: 0x81, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Fee_DeserializeClusterHdr/32 -> Fee_BlankCheck/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op pointer_plus_expr 32
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Fee_DeserializeBlockHdr/31:
    callsite  Fee_DeserializeBlockHdr/31 -> Fee_DeserializeFlag/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 24
         value: 0x18, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Fee_DeserializeBlockHdr/31 -> Fee_DeserializeFlag/30 : 
       param 0: PASS THROUGH: 2, op pointer_plus_expr 32
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 129
         value: 0x81, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Fee_DeserializeBlockHdr/31 -> Fee_BlankCheck/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: PASS THROUGH: 2, op pointer_plus_expr 32
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Fee_DeserializeBlockHdr/31 -> Fee_BlankCheck/29 : 
       param 0: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op pointer_plus_expr 96
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Fee_DeserializeFlag/30:
    callsite  Fee_DeserializeFlag/30 -> Fee_DeserializeFlag.part.0/117 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fee_BlankCheck/29:
  Jump functions of caller  Fee_SerializeBlockHdr/28:
  Jump functions of caller  Fee_JobSystemDone/25:
  Jump functions of caller  Fee_JobInternalSwapDataWrite_Wrapper/24:
    callsite  Fee_JobInternalSwapDataWrite_Wrapper/24 -> Fee_JobInternalSwapDataWrite.part.0/140 : 
  Jump functions of caller  Fee_JobInternalSwapDataRead_Wrapper/23:
    callsite  Fee_JobInternalSwapDataRead_Wrapper/23 -> Fee_JobInternalSwapDataRead/61 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_JobInternalScanBlockHdrParse_Wrapper/22:
    callsite  Fee_JobInternalScanBlockHdrParse_Wrapper/22 -> Fee_JobInternalScanBlockHdrParse/54 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Fee_JobInternalScanClusterHdrParse_Wrapper/21:
    callsite  Fee_JobInternalScanClusterHdrParse_Wrapper/21 -> Fee_JobInternalScanClusterHdrParse/58 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR

 Propagating constants:

Not considering Fee_ForceSwapOnNextWrite for cloning; -fipa-cp-clone disabled.
Not considering Fee_GetRunTimeInfo for cloning; -fipa-cp-clone disabled.
Not considering Fee_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobErrorNotification for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobEndNotification for cloning; -fipa-cp-clone disabled.
Not considering Fee_EraseImmediateBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_GetVersionInfo for cloning; -fipa-cp-clone disabled.
Not considering Fee_InvalidateBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_GetJobResult for cloning; -fipa-cp-clone disabled.
Not considering Fee_GetStatus for cloning; -fipa-cp-clone disabled.
Not considering Fee_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Fee_Write for cloning; -fipa-cp-clone disabled.
Not considering Fee_Read for cloning; -fipa-cp-clone disabled.
Not considering Fee_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Fee_Init for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobEraseImmediateBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInvalidateBlockDone for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInvalidateBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobWriteBlockDone for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobSetModeTransfer for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobWriteBlockValidate for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobWriteBlockUnalignedData for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobWriteBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobWriteBlockData for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalSwapClusterVldDone for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobReadBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalScan for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalScanClusterFmtDone for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalScanClusterFmt for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalScanCluster for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalSwapClusterFmt for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalSwapBlock for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobSystemDone for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalSwapDataWrite_Wrapper for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalSwapDataRead_Wrapper for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalScanBlockHdrParse_Wrapper for cloning; -fipa-cp-clone disabled.
Not considering Fee_JobInternalScanClusterHdrParse_Wrapper for cloning; -fipa-cp-clone disabled.

overall_size: 1601, max_new_size: 11001
 - context independent values, size: 12, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 16, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 20, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 57, time_benefit: 2.650000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 27, time_benefit: 2.122200
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 41, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Fee_JobEraseImmediateBlock.part.0/150:
  Node: Fee_JobInternalScanCluster.part.0/146:
  Node: Fee_JobInternalSwapDataWrite.part.0/140:
  Node: Fee_JobInvalidateBlock.part.0/133:
  Node: Fee_JobSetModeTransfer.part.0/122:
  Node: Fee_UpdateBlockRuntimeInfo.isra.0/118:
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
  Node: Fee_DeserializeFlag.part.0/117:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * const ~[0B, 0B]
        AGGS VARIABLE
  Node: Fee_ForceSwapOnNextWrite/96:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fee_GetRunTimeInfo/95:
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
  Node: Fee_MainFunction/94:
  Node: Fee_JobErrorNotification/93:
  Node: Fee_JobEndNotification/92:
  Node: Fee_EraseImmediateBlock/91:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fee_GetVersionInfo/90:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fee_InvalidateBlock/89:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fee_GetJobResult/88:
  Node: Fee_GetStatus/87:
  Node: Fee_Cancel/86:
  Node: Fee_Write/85:
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
  Node: Fee_Read/84:
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
  Node: Fee_SetMode/83:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fee_Init/82:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fee_EraseCluster/80:
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
  Node: Fee_JobErrorSchedule/77:
  Node: Fee_ReservedAreaWritable/76:
  Node: Fee_JobScheduleAfterSwapClusterVldDone/75:
  Node: Fee_JobSchedule/74:
  Node: Fee_JobEraseImmediateBlock/73:
  Node: Fee_JobInvalidateBlockDone/72:
  Node: Fee_JobInvalidateBlock/71:
  Node: Fee_JobWriteBlockDone/70:
  Node: Fee_JobSetModeTransfer/69:
  Node: Fee_JobWriteBlockValidate/68:
  Node: Fee_JobWriteBlockUnalignedData/67:
  Node: Fee_JobWriteBlock/66:
  Node: Fee_JobWriteBlockData/65:
  Node: Fee_JobWriteHdr/64:
  Node: Fee_JobInternalSwapClusterVldDone/63:
  Node: Fee_JobInternalSwapDataRead/61:
    param [0]: 1 [loc_time: 3, loc_size: 34, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 18, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         const boolean [0, 1]
        AGGS VARIABLE
  Node: Fee_JobInternalSwapBlockVld/60:
  Node: Fee_JobReadBlock/59:
  Node: Fee_JobInternalScanClusterHdrParse/58:
    param [0]: 1 [loc_time: 3, loc_size: 36, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 22, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         const boolean [0, 1]
        AGGS VARIABLE
  Node: Fee_JobInternalScanClusterHdrDone/57:
  Node: Fee_JobInternalScan/56:
  Node: Fee_JobInternalScanClusterHdrRead/55:
  Node: Fee_JobInternalScanBlockHdrParse/54:
    param [0]: 1 [loc_time: 2, loc_size: 59, prop_time: 0, prop_size: 0]
               0 [loc_time: 2, loc_size: 19, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         const boolean [0, 1]
        AGGS VARIABLE
  Node: Fee_IsBlockMatchedConfig/52:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 65535 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0xffff, mask = 0x0
         uint16 [65535, +INF]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Fee_BlockType * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fee_JobInternalScanClusterFmtDone/51:
  Node: Fee_JobInternalScanClusterFmt/50:
  Node: Fee_JobInternalScanCluster/49:
  Node: Fee_JobInternalScanClusterErase/48:
  Node: Fee_JobInternalScanBlockHdrRead/47:
  Node: Fee_JobInternalSwap/46:
  Node: Fee_GetNextClusterToSwap/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fee_JobInternalSwapClusterErase/44:
  Node: Fee_JobInternalSwapClusterFmt/43:
  Node: Fee_JobInternalSwapBlock/42:
  Node: Fee_JobInternalSwapClusterVld/41:
  Node: Fee_SerializeFlag/40:
    param [0]: &Fee_aDataBuffer[32] [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
               &Fee_aDataBuffer [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: 129 [loc_time: 1, loc_size: 10, prop_time: 0, prop_size: 0]
               24 [loc_time: 1, loc_size: 10, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x18, mask = 0x99
         const uint8 [24, 129]
        AGGS VARIABLE
  Node: Fee_CopyDataToPageBuffer/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: &Fee_aDataBuffer [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fee_AlignToVirtualPageSize/38:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fee_GetBlockIndex/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fee_SerializeClusterHdr/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Fee_ClusterHeaderType * ~[0B, 0B]
        AGGS VARIABLE
        ref offset 0: 1 [loc_time: 3, loc_size: 17, prop_time: 0, prop_size: 0]
    param [1]: &Fee_aDataBuffer [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Fee_DeserializeClusterHdr/32:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Fee_ClusterHeaderType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: &Fee_aDataBuffer [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Fee_DeserializeBlockHdr/31:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Fee_BlockType * const ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         Fls_AddressType * const ~[0B, 0B]
        AGGS VARIABLE
    param [2]: &Fee_aDataBuffer [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Fee_DeserializeFlag/30:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * const ~[0B, 0B]
        AGGS VARIABLE
    param [1]: 129 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
               24 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x18, mask = 0x99
         const uint8 [24, 129]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: Fee_BlankCheck/29:
    param [0]: VARIABLE
               &Fee_aDataBuffer [loc_time: 1, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fee_SerializeBlockHdr/28:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Fee_BlockType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: &Fee_aDataBuffer [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Fee_JobSystemDone/25:
  Node: Fee_JobInternalSwapDataWrite_Wrapper/24:
  Node: Fee_JobInternalSwapDataRead_Wrapper/23:
  Node: Fee_JobInternalScanBlockHdrParse_Wrapper/22:
  Node: Fee_JobInternalScanClusterHdrParse_Wrapper/21:

IPA decision stage:

 - Creating a specialized node of Fee_CopyDataToPageBuffer/39 for all known contexts.
    replacing param #1 TargetPtr with const &Fee_aDataBuffer
 - Creating a specialized node of Fee_SerializeClusterHdr/33 for all known contexts.
    replacing param #1 ClrHdrPtr with const &Fee_aDataBuffer
 - Creating a specialized node of Fee_SerializeBlockHdr/28 for all known contexts.
    replacing param #2 BlockHdrPtr with const &Fee_aDataBuffer
 - Creating a specialized node of Fee_DeserializeBlockHdr/31 for all known contexts.
    replacing param #2 BlockHdrPtr with const &Fee_aDataBuffer
 - Creating a specialized node of Fee_IsBlockMatchedConfig/52 for all known contexts.
    replacing param #1 BlockRuntimeInfoIndex with const 65535
 - Creating a specialized node of Fee_DeserializeClusterHdr/32 for all known contexts.
    replacing param #1 ClrHdrPtr with const &Fee_aDataBuffer
Propagated bits info for function Fee_DeserializeClusterHdr.constprop/158:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_IsBlockMatchedConfig.constprop/157:
 param 1: value = 0xffff, mask = 0x0
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_DeserializeBlockHdr.constprop/156:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_SerializeBlockHdr.constprop/155:
 param 0: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_SerializeClusterHdr.constprop/154:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_CopyDataToPageBuffer.constprop/153:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_JobInternalSwapDataRead/61:
 param 0: value = 0x0, mask = 0x1
Propagated bits info for function Fee_JobInternalScanClusterHdrParse/58:
 param 0: value = 0x0, mask = 0x1
Propagated bits info for function Fee_JobInternalScanBlockHdrParse/54:
 param 0: value = 0x0, mask = 0x1
Propagated bits info for function Fee_IsBlockMatchedConfig/52:
 param 1: value = 0xffff, mask = 0x0
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_SerializeFlag/40:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x18, mask = 0x99
Propagated bits info for function Fee_CopyDataToPageBuffer/39:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_SerializeClusterHdr/33:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_DeserializeClusterHdr/32:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_DeserializeBlockHdr/31:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Fee_DeserializeFlag/30:
 param 1: value = 0x18, mask = 0x99
Propagated bits info for function Fee_SerializeBlockHdr/28:
 param 0: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: Fee_IsBlockMatchedConfig/52 Fee_CopyDataToPageBuffer/39 Fee_SerializeClusterHdr/33 Fee_DeserializeClusterHdr/32 Fee_DeserializeBlockHdr/31 Fee_SerializeBlockHdr/28
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Fee_DeserializeClusterHdr.constprop.0/158 (Fee_DeserializeClusterHdr.constprop) @06f29c40
  Type: function definition analyzed
  Visibility:
  References: Fee_aDataBuffer/4 (addr)
  Referring: 
  Clone of Fee_DeserializeClusterHdr/32
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Fee_JobInternalScanClusterHdrParse/58 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_BlankCheck/29 (524952378 (estimated locally),0.49 per call) Fee_DeserializeFlag/30 (250769751 (estimated locally),0.23 per call) Fee_DeserializeFlag/30 (119792710 (estimated locally),0.11 per call) 
Fee_IsBlockMatchedConfig.constprop.0/157 (Fee_IsBlockMatchedConfig.constprop) @06f2ea80
  Type: function definition analyzed
  Visibility:
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)
  Referring: 
  Clone of Fee_IsBlockMatchedConfig/52
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Fee_JobInternalScanBlockHdrParse/54 (209308187 (estimated locally),0.19 per call) 
  Calls: Fee_AlignToVirtualPageSize/38 (949617268 (estimated locally),0.88 per call) 
Fee_DeserializeBlockHdr.constprop.0/156 (Fee_DeserializeBlockHdr.constprop) @06f918c0
  Type: function definition analyzed
  Visibility:
  References: Fee_aDataBuffer/4 (addr)
  Referring: 
  Clone of Fee_DeserializeBlockHdr/31
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Fee_JobInternalScanBlockHdrParse/54 (1073741823 (estimated locally),1.00 per call) 
  Calls: Fee_BlankCheck/29 (1073741824 (estimated locally),1.00 per call) Fee_BlankCheck/29 (453655921 (estimated locally),0.42 per call) Fee_DeserializeFlag/30 (216711433 (estimated locally),0.20 per call) Fee_DeserializeFlag/30 (103523052 (estimated locally),0.10 per call) 
Fee_SerializeBlockHdr.constprop.0/155 (Fee_SerializeBlockHdr.constprop) @06f91c40
  Type: function definition analyzed
  Visibility:
  References: Fee_aDataBuffer/4 (addr)
  Referring: 
  Clone of Fee_SerializeBlockHdr/28
  Availability: local
  Function flags: count:12670154 (estimated locally) local optimize_size
  Called by: Fee_JobInternalSwapBlock/42 (46276755 (estimated locally),0.80 per call) Fee_JobWriteHdr/64 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Fee_SerializeClusterHdr.constprop.0/154 (Fee_SerializeClusterHdr.constprop) @06f2ec40
  Type: function definition analyzed
  Visibility:
  References: Fee_aDataBuffer/4 (addr)
  Referring: 
  Clone of Fee_SerializeClusterHdr/33
  Availability: local
  Function flags: count:13207024 (estimated locally) local optimize_size
  Called by: Fee_JobInternalSwapClusterFmt/43 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalScanClusterFmt/50 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_CopyDataToPageBuffer.constprop.0/153 (Fee_CopyDataToPageBuffer.constprop) @06f77a80
  Type: function definition analyzed
  Visibility:
  References: Fee_aDataBuffer/4 (addr)
  Referring: 
  Clone of Fee_CopyDataToPageBuffer/39
  Availability: local
  Function flags: count:118111600 (estimated locally) local optimize_size
  Called by: Fee_JobWriteBlockUnalignedData/67 (1073741824 (estimated locally),1.00 per call) Fee_JobWriteBlockData/65 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Fee_JobEraseImmediateBlock.part.0/150 (Fee_JobEraseImmediateBlock.part.0) @06f2ee00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fee_uJobBlockIndex/7 (read)Fee_BlockConfig/100 (read)Fee_uJobIntClrGrpIt/5 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fee_JobEraseImmediateBlock/73 (354334800 (estimated locally),0.33 per call) 
  Calls: Fee_JobInternalSwap/46 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanCluster.part.0/146 (Fee_JobInternalScanCluster.part.0) @06f91700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fee_uJobIntClrIt/6 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fee_JobInternalScanCluster/49 (354334803 (estimated locally),0.33 per call) 
  Calls: Fee_JobInternalScanClusterErase/48 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalSwapDataWrite.part.0/140 (Fee_JobInternalSwapDataWrite.part.0) @071e67e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fee_uJobIntAddrIt/16 (read)Fee_uJobBlockLength/15 (read)Fee_aDataBuffer/4 (addr)Fee_uJobIntAddrIt/16 (read)Fee_uJobBlockLength/15 (read)Fee_uJobIntAddrIt/16 (write)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fee_JobInternalSwapDataWrite_Wrapper/24 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInvalidateBlock.part.0/133 (Fee_JobInvalidateBlock.part.0) @071e69a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fee_aDataBuffer/4 (addr)Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fee_JobInvalidateBlock/71 (524845000 (estimated locally),0.49 per call) 
  Calls: Fee_SerializeFlag/40 (1073741824 (estimated locally),1.00 per call) Fls_Write/114 (1073741824 (estimated locally),1.00 per call) 
Fee_JobSetModeTransfer.part.0/122 (Fee_JobSetModeTransfer.part.0) @071e6620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fee_eModuleStatus/12 (write)Fee_eMode/11 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fee_JobSetModeTransfer/69 (365072224 (estimated locally),0.34 per call) 
  Calls: Fls_SetMode/112 (1073741824 (estimated locally),1.00 per call) 
Fee_UpdateBlockRuntimeInfo.isra.0/118 (Fee_UpdateBlockRuntimeInfo.isra.0) @070bf9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_uJobIntAddrIt/16 (read)Fee_aBlockInfo/19 (write)Fee_uJobIntClrGrpIt/5 (read)Fee_aClrGrpInfo/20 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalScanBlockHdrParse/54 (42363977 (estimated locally),0.04 per call) 
  Calls: 
Fee_DeserializeFlag.part.0/117 (Fee_DeserializeFlag.part.0) @06deb700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fee_DeserializeFlag/30 (606019886 (estimated locally),0.56 per call) 
  Calls: Fee_BlankCheck/29 (1073741824 (estimated locally),1.00 per call) 
Fls_Erase/116 (Fls_Erase) @070492a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_EraseCluster/80 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_Read/115 (Fls_Read) @07013540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_JobInternalScanClusterHdrRead/55 (1073741824 (estimated locally),1.00 per call) Fee_JobReadBlock/59 (354334802 (estimated locally),0.33 per call) Fee_JobInternalScanBlockHdrRead/47 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapDataRead/61 (482002704 (estimated locally),0.45 per call) 
  Calls: 
Fls_Write/114 (Fls_Write) @07013000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_JobWriteHdr/64 (536870913 (estimated locally),0.50 per call) Fee_JobInternalSwapDataWrite.part.0/140 (1073741824 (estimated locally),1.00 per call) Fee_JobWriteBlockData/65 (1073741824 (estimated locally),1.00 per call) Fee_JobWriteBlockUnalignedData/67 (1073741824 (estimated locally),1.00 per call) Fee_JobWriteBlockValidate/68 (1073741824 (estimated locally),1.00 per call) Fee_JobInvalidateBlock.part.0/133 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalScanClusterFmt/50 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapClusterFmt/43 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapBlock/42 (46276755 (estimated locally),0.80 per call) Fee_JobInternalSwapClusterVld/41 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapBlockVld/60 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_ClrGrps/113 (Fee_ClrGrps) @0700d4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fee_JobInternalScanClusterFmtDone/51 (read)Fee_JobInternalScanClusterHdrDone/57 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_EraseCluster/80 (read)Fee_JobInternalSwapClusterVld/41 (read)Fee_JobInternalScanCluster/49 (read)Fee_JobInternalScanClusterHdrParse/58 (read)Fee_JobInternalSwapClusterFmt/43 (read)Fee_JobInternalScanClusterHdrRead/55 (read)Fee_JobInternalScanClusterFmt/50 (read)Fee_GetNextClusterToSwap/45 (read)Fee_GetRunTimeInfo/95 (read)
  Availability: not_available
  Varpool flags: read-only
Fls_SetMode/112 (Fls_SetMode) @06860700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_JobSetModeTransfer.part.0/122 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_GetStatus/111 (Fls_GetStatus) @06860620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_JobSetModeTransfer/69 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_JobErrorNotification/110 (NvM_JobErrorNotification) @068602a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_MainFunction/94 (120473833 (estimated locally),0.11 per call) Fee_JobEndNotification/92 (220342886 (estimated locally),0.21 per call) Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) 
  Calls: 
NvM_JobEndNotification/109 (NvM_JobEndNotification) @068601c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_MainFunction/94 (120473833 (estimated locally),0.11 per call) Fee_JobEndNotification/92 (222027604 (estimated locally),0.21 per call) Fee_JobEndNotification/92 (346599566 (estimated locally),0.32 per call) 
  Calls: 
Fls_GetJobResult/108 (Fls_GetJobResult) @06860000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_JobEndNotification/92 (346599566 (estimated locally),0.32 per call) Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) 
  Calls: 
SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_03/107 (SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_03) @07006e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_EraseImmediateBlock/91 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_03/106 (SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_03) @07006c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_EraseImmediateBlock/91 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_02/105 (SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_02) @070069a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_InvalidateBlock/89 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_02/104 (SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_02) @070067e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_InvalidateBlock/89 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_01/103 (SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_01) @07006380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_Write/85 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_01/102 (SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_01) @070061c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_Write/85 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_00/101 (SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_00) @06ff9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_Read/84 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_BlockConfig/100 (Fee_BlockConfig) @07004480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fee_JobInternalSwapDataRead/61 (read)Fee_JobEraseImmediateBlock.part.0/150 (read)Fee_JobInternalSwapBlock/42 (read)Fee_Read/84 (read)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_JobErrorSchedule/77 (read)Fee_JobWriteHdr/64 (read)Fee_JobWriteHdr/64 (read)Fee_GetBlockIndex/34 (read)Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobWriteBlockUnalignedData/67 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobWriteBlockData/65 (read)Fee_JobWriteBlockData/65 (read)Fee_JobInternalSwapBlock/42 (read)Fee_IsBlockMatchedConfig.constprop.0/157 (read)Fee_IsBlockMatchedConfig.constprop.0/157 (read)Fee_IsBlockMatchedConfig.constprop.0/157 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobInternalSwapBlock/42 (read)Fee_JobWriteHdr/64 (read)Fee_JobWriteHdr/64 (read)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_EraseImmediateBlock/91 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_00/99 (SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_00) @06ff9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_Read/84 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR43_ReportRuntimeError/98 (Det_ASR43_ReportRuntimeError) @06ff99a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_ForceSwapOnNextWrite/96 (145607981 (estimated locally),0.14 per call) Fee_GetRunTimeInfo/95 (120228510 (estimated locally),0.11 per call) Fee_EraseImmediateBlock/91 (77811740 (estimated locally),0.07 per call) Fee_InvalidateBlock/89 (116136926 (estimated locally),0.11 per call) Fee_Write/85 (145607981 (estimated locally),0.14 per call) Fee_Read/84 (145607981 (estimated locally),0.14 per call) Fee_SetMode/83 (145607981 (estimated locally),0.14 per call) Fee_Init/82 (181595773 (estimated locally),0.31 per call) Fee_JobSetModeTransfer/69 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Det_ASR40_ReportError/97 (Det_ASR40_ReportError) @06ff98c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fee_ForceSwapOnNextWrite/96 (189353683 (estimated locally),0.18 per call) Fee_ForceSwapOnNextWrite/96 (354334802 (estimated locally),0.33 per call) Fee_GetRunTimeInfo/95 (156349336 (estimated locally),0.15 per call) Fee_GetRunTimeInfo/95 (125392644 (estimated locally),0.12 per call) Fee_GetRunTimeInfo/95 (354334802 (estimated locally),0.33 per call) Fee_JobErrorNotification/93 (54331336 (estimated locally),0.05 per call) Fee_JobEndNotification/92 (54331336 (estimated locally),0.05 per call) Fee_EraseImmediateBlock/91 (189353683 (estimated locally),0.18 per call) Fee_EraseImmediateBlock/91 (145607981 (estimated locally),0.14 per call) Fee_EraseImmediateBlock/91 (354334802 (estimated locally),0.33 per call) Fee_GetVersionInfo/90 (187153200 (estimated locally),0.17 per call) Fee_InvalidateBlock/89 (145607981 (estimated locally),0.14 per call) Fee_InvalidateBlock/89 (354334802 (estimated locally),0.33 per call) Fee_GetJobResult/88 (354334802 (estimated locally),0.33 per call) Fee_Cancel/86 (1073741824 (estimated locally),1.00 per call) Fee_Write/85 (79770506 (estimated locally),0.07 per call) Fee_Write/85 (116136926 (estimated locally),0.11 per call) Fee_Write/85 (354334802 (estimated locally),0.33 per call) Fee_Read/84 (17904490 (estimated locally),0.02 per call) Fee_Read/84 (203911355 (estimated locally),0.19 per call) Fee_Read/84 (151028498 (estimated locally),0.14 per call) Fee_Read/84 (116136926 (estimated locally),0.11 per call) Fee_Read/84 (354334802 (estimated locally),0.33 per call) Fee_SetMode/83 (354334802 (estimated locally),0.33 per call) Fee_Init/82 (311464148 (estimated locally),0.53 per call) 
  Calls: 
Fee_ForceSwapOnNextWrite/96 (Fee_ForceSwapOnNextWrite) @06ff9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/97 (189353683 (estimated locally),0.18 per call) Det_ASR43_ReportRuntimeError/98 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) 
Fee_GetRunTimeInfo/95 (Fee_GetRunTimeInfo) @06ff9540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_aClrGrpInfo/20 (read)Fee_ClrGrps/113 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/97 (156349336 (estimated locally),0.15 per call) Det_ASR43_ReportRuntimeError/98 (120228510 (estimated locally),0.11 per call) Det_ASR40_ReportError/97 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) 
Fee_MainFunction/94 (Fee_MainFunction) @06ff9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eJobResult/13 (read)Fee_eJob/9 (read)Fee_eJobResult/13 (write)Fee_eJobResult/13 (read)Fee_eModuleStatus/12 (write)Fee_eModuleStatus/12 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_JobErrorNotification/110 (120473833 (estimated locally),0.11 per call) NvM_JobEndNotification/109 (120473833 (estimated locally),0.11 per call) Fee_JobSchedule/74 (120473832 (estimated locally),0.11 per call) 
Fee_JobErrorNotification/93 (Fee_JobErrorNotification) @06ff91c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_eJobResult/13 (read)Fee_eJob/9 (read)Fee_eJobResult/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobErrorSchedule/77 (498287846 (estimated locally),0.46 per call) Det_ASR40_ReportError/97 (54331336 (estimated locally),0.05 per call) 
Fee_JobEndNotification/92 (Fee_JobEndNotification) @06ff9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_eJobResult/13 (read)Fee_eJob/9 (read)Fee_eJob/9 (read)Fee_eJobResult/13 (write)Fee_eModuleStatus/12 (write)Fee_eJobResult/13 (write)Fee_eModuleStatus/12 (write)Fee_eModuleStatus/12 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_JobErrorNotification/110 (220342886 (estimated locally),0.21 per call) NvM_JobEndNotification/109 (222027604 (estimated locally),0.21 per call) Fee_JobSchedule/74 (672810923 (estimated locally),0.63 per call) NvM_JobEndNotification/109 (346599566 (estimated locally),0.32 per call) Fls_GetJobResult/108 (346599566 (estimated locally),0.32 per call) Det_ASR40_ReportError/97 (54331336 (estimated locally),0.05 per call) 
Fee_EraseImmediateBlock/91 (Fee_EraseImmediateBlock) @06ff3e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_BlockConfig/100 (read)Fee_uJobBlockIndex/7 (write)Fee_eJob/9 (write)Fee_eModuleStatus/12 (write)Fee_eJobResult/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_03/107 (1073741824 (estimated locally),1.00 per call) Det_ASR43_ReportRuntimeError/98 (77811740 (estimated locally),0.07 per call) Det_ASR40_ReportError/97 (189353683 (estimated locally),0.18 per call) Det_ASR40_ReportError/97 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_03/106 (1073741824 (estimated locally),1.00 per call) Fee_GetBlockIndex/34 (1073741824 (estimated locally),1.00 per call) 
Fee_GetVersionInfo/90 (Fee_GetVersionInfo) @06ff3c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/97 (187153200 (estimated locally),0.17 per call) 
Fee_InvalidateBlock/89 (Fee_InvalidateBlock) @06ff3a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_uJobBlockIndex/7 (write)Fee_eJob/9 (write)Fee_eModuleStatus/12 (write)Fee_eJobResult/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_02/105 (1073741824 (estimated locally),1.00 per call) Det_ASR43_ReportRuntimeError/98 (116136926 (estimated locally),0.11 per call) Det_ASR40_ReportError/97 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_02/104 (1073741824 (estimated locally),1.00 per call) Fee_GetBlockIndex/34 (1073741824 (estimated locally),1.00 per call) 
Fee_GetJobResult/88 (Fee_GetJobResult) @06ff38c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eJobResult/13 (read)Fee_eModuleStatus/12 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) 
Fee_GetStatus/87 (Fee_GetStatus) @06ff3700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_Cancel/86 (Fee_Cancel) @06ff3540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/97 (1073741824 (estimated locally),1.00 per call) 
Fee_Write/85 (Fee_Write) @06ff3380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_uJobBlockIndex/7 (write)Fee_pJobWriteDataDestPtr/3 (write)Fee_eJob/9 (write)Fee_eModuleStatus/12 (write)Fee_eJobResult/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_01/103 (1073741824 (estimated locally),1.00 per call) Det_ASR40_ReportError/97 (79770506 (estimated locally),0.07 per call) Det_ASR40_ReportError/97 (116136926 (estimated locally),0.11 per call) Det_ASR43_ReportRuntimeError/98 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_01/102 (1073741824 (estimated locally),1.00 per call) Fee_GetBlockIndex/34 (1073741824 (estimated locally),1.00 per call) 
Fee_Read/84 (Fee_Read) @06ff31c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_BlockConfig/100 (read)Fee_uJobBlockIndex/7 (write)Fee_uJobBlockOffset/14 (write)Fee_uJobBlockLength/15 (write)Fee_pJobReadDataDestPtr/2 (write)Fee_eJob/9 (write)Fee_eModuleStatus/12 (write)Fee_eJobResult/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_00/101 (1073741824 (estimated locally),1.00 per call) Det_ASR40_ReportError/97 (17904490 (estimated locally),0.02 per call) Det_ASR40_ReportError/97 (203911355 (estimated locally),0.19 per call) Det_ASR40_ReportError/97 (151028498 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (116136926 (estimated locally),0.11 per call) Det_ASR43_ReportRuntimeError/98 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_00/99 (1073741824 (estimated locally),1.00 per call) Fee_GetBlockIndex/34 (1073741824 (estimated locally),1.00 per call) 
Fee_SetMode/83 (Fee_SetMode) @06ff3000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_eJob/9 (write)Fee_eMode/11 (write)Fee_eJobResult/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR43_ReportRuntimeError/98 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/97 (354334802 (estimated locally),0.33 per call) 
Fee_Init/82 (Fee_Init) @06f91e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fee_eModuleStatus/12 (read)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aClrGrpInfo/20 (write)Fee_eJob/9 (write)Fee_eJobResult/13 (write)
  Referring: 
  Availability: available
  Function flags: count:582502616 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR43_ReportRuntimeError/98 (181595773 (estimated locally),0.31 per call) Det_ASR40_ReportError/97 (311464148 (estimated locally),0.53 per call) 
Fee_EraseCluster/80 (Fee_EraseCluster) @06f91a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_ClrGrps/113 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalSwapClusterErase/44 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalScanClusterErase/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_Erase/116 (1073741824 (estimated locally),1.00 per call) 
Fee_JobErrorSchedule/77 (Fee_JobErrorSchedule) @06f91540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_eJob/9 (read)Fee_eJobResult/13 (write)Fee_eJobResult/13 (write)Fee_eJobResult/13 (write)Fee_uJobBlockIndex/7 (read)Fee_BlockConfig/100 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (write)Fee_eJobResult/13 (write)Fee_eModuleStatus/12 (write)Fee_eJobResult/13 (write)Fee_eModuleStatus/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fee_JobErrorNotification/93 (498287846 (estimated locally),0.46 per call) 
  Calls: NvM_JobErrorNotification/110 (214748364 (estimated locally),0.20 per call) Fls_GetJobResult/108 (214748364 (estimated locally),0.20 per call) NvM_JobErrorNotification/110 (214748364 (estimated locally),0.20 per call) Fls_GetJobResult/108 (214748364 (estimated locally),0.20 per call) Fee_JobInternalSwapDataRead/61 (214748364 (estimated locally),0.20 per call) Fee_JobInternalScanClusterHdrParse/58 (214748364 (estimated locally),0.20 per call) Fee_JobInternalScanBlockHdrParse/54 (214748364 (estimated locally),0.20 per call) 
Fee_ReservedAreaWritable/76 (Fee_ReservedAreaWritable) @06f91380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobBlockIndex/7 (read)Fee_BlockConfig/100 (read)Fee_ClrGrps/113 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_aBlockInfo/19 (read)Fee_aBlockInfo/19 (read)Fee_aBlockInfo/19 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fee_JobWriteHdr/64 (1073741824 (estimated locally),1.00 per call) Fee_JobEraseImmediateBlock/73 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_AlignToVirtualPageSize/38 (1073741823 (estimated locally),1.00 per call) 
Fee_JobScheduleAfterSwapClusterVldDone/75 (Fee_JobScheduleAfterSwapClusterVldDone) @06f911c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_eJob/9 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalSwapClusterVldDone/63 (89442694 (estimated locally),1.00 per call) 
  Calls: Fee_JobEraseImmediateBlock/73 (357878150 (estimated locally),0.33 per call) Fee_JobWriteBlock/66 (357878150 (estimated locally),0.33 per call) 
Fee_JobSchedule/74 (Fee_JobSchedule) @06f91000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_eJob/9 (read)Fee_JobScheduleLookupTable/26 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_MainFunction/94 (120473832 (estimated locally),0.11 per call) Fee_JobEndNotification/92 (672810923 (estimated locally),0.63 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Fee_JobEraseImmediateBlock/73 (Fee_JobEraseImmediateBlock) @06f8ce00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Fee_JobScheduleAfterSwapClusterVldDone/75 (357878150 (estimated locally),0.33 per call) 
  Calls: Fee_JobEraseImmediateBlock.part.0/150 (354334800 (estimated locally),0.33 per call) Fee_ReservedAreaWritable/76 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInvalidateBlockDone/72 (Fee_JobInvalidateBlockDone) @06f8cc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (write)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_JobInvalidateBlock/71 (Fee_JobInvalidateBlock) @06f8ca80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (read)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInvalidateBlock.part.0/133 (524845000 (estimated locally),0.49 per call) 
Fee_JobWriteBlockDone/70 (Fee_JobWriteBlockDone) @06f8c8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (write)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_JobSetModeTransfer/69 (Fee_JobSetModeTransfer) @06f8c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR43_ReportRuntimeError/98 (708669605 (estimated locally),0.66 per call) Fee_JobSetModeTransfer.part.0/122 (365072224 (estimated locally),0.34 per call) Fls_GetStatus/111 (1073741824 (estimated locally),1.00 per call) 
Fee_JobWriteBlockValidate/68 (Fee_JobWriteBlockValidate) @06f8c540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_aDataBuffer/4 (addr)Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_SerializeFlag/40 (1073741824 (estimated locally),1.00 per call) 
Fee_JobWriteBlockUnalignedData/67 (Fee_JobWriteBlockUnalignedData) @06f8c380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobBlockIndex/7 (read)Fee_BlockConfig/100 (read)Fee_pJobWriteDataDestPtr/3 (read)Fee_aDataBuffer/4 (addr)Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_CopyDataToPageBuffer.constprop/153 (1073741824 (estimated locally),1.00 per call) 
Fee_JobWriteBlock/66 (Fee_JobWriteBlock) @06f8c1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_eJob/9 (read)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Fee_JobScheduleAfterSwapClusterVldDone/75 (357878150 (estimated locally),0.33 per call) 
  Calls: Fee_JobWriteHdr/64 (1073741824 (estimated locally),1.00 per call) 
Fee_JobWriteBlockData/65 (Fee_JobWriteBlockData) @06f8c000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobBlockIndex/7 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (write)Fee_pJobWriteDataDestPtr/3 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)Fee_pJobWriteDataDestPtr/3 (read)Fee_eJob/9 (write)Fee_eJob/9 (write)Fee_aClrGrpInfo/20 (read)Fee_aDataBuffer/4 (addr)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_CopyDataToPageBuffer.constprop/153 (354334802 (estimated locally),0.33 per call) Fee_AlignToVirtualPageSize/38 (1073741823 (estimated locally),1.00 per call) 
Fee_JobWriteHdr/64 (Fee_JobWriteHdr) @06f7fe00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobBlockIndex/7 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_uJobIntClrGrpIt/5 (write)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)Fee_aDataBuffer/4 (addr)Fee_aDataBuffer/4 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobWriteBlock/66 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_Write/114 (536870913 (estimated locally),0.50 per call) Fee_SerializeBlockHdr.constprop/155 (536870913 (estimated locally),0.50 per call) Fee_JobInternalSwap/46 (536870913 (estimated locally),0.50 per call) Fee_ReservedAreaWritable/76 (1073741824 (estimated locally),1.00 per call) Fee_AlignToVirtualPageSize/38 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalSwapClusterVldDone/63 (Fee_JobInternalSwapClusterVldDone) @06f7fc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_ClrGrps/113 (read)Fee_uJobIntClrIt/6 (read)Fee_BlockConfig/100 (read)Fee_aBlockInfo/19 (read)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (read)Fee_BlockConfig/100 (read)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (read)Fee_BlockConfig/100 (read)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aBlockInfo/19 (write)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (write)Fee_eJobIntOriginalJob/10 (read)Fee_uJobIntClrGrpIt/5 (write)Fee_eModuleStatus/12 (write)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:89442694 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobScheduleAfterSwapClusterVldDone/75 (89442694 (estimated locally),1.00 per call) Fee_AlignToVirtualPageSize/38 (89002611 (estimated locally),1.00 per call) Fee_AlignToVirtualPageSize/38 (130886193 (estimated locally),1.46 per call) 
Fee_JobInternalSwapDataRead/61 (Fee_JobInternalSwapDataRead) @06f7f8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntBlockIt/8 (read)Fee_BlockConfig/100 (read)Fee_uJobIntDataAddr/18 (read)Fee_uJobIntAddrIt/16 (read)Fee_uJobBlockLength/15 (write)Fee_aBlockInfo/19 (write)Fee_uJobIntBlockIt/8 (write)Fee_uJobIntBlockIt/8 (write)Fee_uJobBlockLength/15 (write)Fee_aBlockInfo/19 (read)Fee_uJobBlockLength/15 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) Fee_JobInternalSwapDataRead_Wrapper/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_Read/115 (482002704 (estimated locally),0.45 per call) Fee_JobInternalSwapBlockVld/60 (237404317 (estimated locally),0.22 per call) Fee_JobInternalSwapBlock/42 (354334802 (estimated locally),0.33 per call) Fee_AlignToVirtualPageSize/38 (1073741823 (estimated locally),1.00 per call) 
Fee_JobInternalSwapBlockVld/60 (Fee_JobInternalSwapBlockVld) @06f7f700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_aDataBuffer/4 (addr)Fee_uJobIntHdrAddr/17 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalSwapDataRead/61 (237404317 (estimated locally),0.22 per call) 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_SerializeFlag/40 (1073741824 (estimated locally),1.00 per call) 
Fee_JobReadBlock/59 (Fee_JobReadBlock) @06f7f540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobBlockIndex/7 (read)Fee_aBlockInfo/19 (read)Fee_aBlockInfo/19 (read)Fee_uJobBlockOffset/14 (read)Fee_pJobReadDataDestPtr/2 (read)Fee_uJobBlockLength/15 (read)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_Read/115 (354334802 (estimated locally),0.33 per call) 
Fee_JobInternalScanClusterHdrParse/58 (Fee_JobInternalScanClusterHdrParse) @06f7f380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_aDataBuffer/4 (addr)Fee_uJobIntClrGrpIt/5 (read)Fee_ClrGrps/113 (read)Fee_uJobIntClrIt/6 (read)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) Fee_JobInternalScanClusterHdrParse_Wrapper/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_JobInternalScanClusterHdrRead/55 (708669605 (estimated locally),0.66 per call) Fee_JobInternalScanCluster/49 (365072220 (estimated locally),0.34 per call) Fee_JobInternalScanClusterHdrDone/57 (1073741824 (estimated locally),1.00 per call) Fee_DeserializeClusterHdr.constprop/158 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanClusterHdrDone/57 (Fee_JobInternalScanClusterHdrDone) @06f7f1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrIt/6 (read)Fee_uJobIntClrIt/6 (write)Fee_uJobIntClrGrpIt/5 (read)Fee_ClrGrps/113 (read)Fee_uJobIntClrGrpIt/5 (write)Fee_uJobIntClrIt/6 (write)Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrGrpIt/5 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalScanClusterHdrParse/58 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_JobInternalScan/56 (Fee_JobInternalScan) @06f7f000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobIntClrGrpIt/5 (write)Fee_uJobIntClrIt/6 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInternalScanClusterHdrRead/55 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanClusterHdrRead/55 (Fee_JobInternalScanClusterHdrRead) @06f77e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_ClrGrps/113 (read)Fee_uJobIntClrIt/6 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalScanClusterHdrParse/58 (708669605 (estimated locally),0.66 per call) Fee_JobInternalScan/56 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_Read/115 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanBlockHdrParse/54 (Fee_JobInternalScanBlockHdrParse) @06f77c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_aDataBuffer/4 (addr)Fee_uJobBlockIndex/7 (write)Fee_uJobIntAddrIt/16 (read)Fee_uJobIntAddrIt/16 (write)Fee_uJobIntClrGrpIt/5 (read)Fee_aClrGrpInfo/20 (write)bSwapToBePerformed/1 (write)bSwapToBePerformed/1 (read)bSwapToBePerformed/1 (write)Fee_uJobIntAddrIt/16 (read)Fee_uJobIntClrGrpIt/5 (read)Fee_aClrGrpInfo/20 (write)Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrGrpIt/5 (write)bSwapToBePerformed/1 (write)Fee_uJobIntAddrIt/16 (read)Fee_uJobIntAddrIt/16 (write)Fee_uJobIntClrGrpIt/5 (read)Fee_aClrGrpInfo/20 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fee_JobErrorSchedule/77 (214748364 (estimated locally),0.20 per call) Fee_JobInternalScanBlockHdrParse_Wrapper/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_JobInternalScanBlockHdrRead/47 (209308187 (estimated locally),0.19 per call) Fee_UpdateBlockRuntimeInfo.isra.0/118 (42363977 (estimated locally),0.04 per call) Fee_IsBlockMatchedConfig.constprop/157 (209308187 (estimated locally),0.19 per call) Fee_GetBlockIndex/34 (209308187 (estimated locally),0.19 per call) Fee_JobInternalScanCluster/49 (218900052 (estimated locally),0.20 per call) Fee_JobInternalScanBlockHdrRead/47 (645533585 (estimated locally),0.60 per call) Fee_DeserializeBlockHdr.constprop/156 (1073741823 (estimated locally),1.00 per call) 
Fee_IsBlockMatchedConfig/52 (Fee_IsBlockMatchedConfig) @06f778c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_JobInternalScanClusterFmtDone/51 (Fee_JobInternalScanClusterFmtDone) @06f77700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrIt/6 (read)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (write)Fee_ClrGrps/113 (read)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (write)Fee_uJobIntClrGrpIt/5 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInternalScanCluster/49 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanClusterFmt/50 (Fee_JobInternalScanClusterFmt) @06f77540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrIt/6 (read)Fee_ClrGrps/113 (read)Fee_aDataBuffer/4 (addr)Fee_aDataBuffer/4 (addr)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_SerializeFlag/40 (1073741824 (estimated locally),1.00 per call) Fee_SerializeClusterHdr.constprop/154 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanCluster/49 (Fee_JobInternalScanCluster) @06f77380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_eJob/9 (write)Fee_aClrGrpInfo/20 (read)Fee_aClrGrpInfo/20 (read)Fee_ClrGrps/113 (read)Fee_uJobIntAddrIt/16 (write)Fee_aClrGrpInfo/20 (write)Fee_aClrGrpInfo/20 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Fee_JobInternalScanClusterHdrParse/58 (365072220 (estimated locally),0.34 per call) Fee_JobInternalScanClusterFmtDone/51 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalScanBlockHdrParse/54 (218900052 (estimated locally),0.20 per call) 
  Calls: Fee_JobInternalScanBlockHdrRead/47 (354334802 (estimated locally),0.33 per call) Fee_JobInternalScanCluster.part.0/146 (354334803 (estimated locally),0.33 per call) 
Fee_JobInternalScanClusterErase/48 (Fee_JobInternalScanClusterErase) @06f771c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrIt/6 (read)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalScanCluster.part.0/146 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_EraseCluster/80 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanBlockHdrRead/47 (Fee_JobInternalScanBlockHdrRead) @06f77000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntAddrIt/16 (read)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalScanBlockHdrParse/54 (209308187 (estimated locally),0.19 per call) Fee_JobInternalScanBlockHdrParse/54 (645533585 (estimated locally),0.60 per call) Fee_JobInternalScanCluster/49 (354334802 (estimated locally),0.33 per call) 
  Calls: Fls_Read/115 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalSwap/46 (Fee_JobInternalSwap) @06f3ce00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_aClrGrpInfo/20 (read)Fee_uJobIntClrIt/6 (write)Fee_eJob/9 (read)Fee_eJobIntOriginalJob/10 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobWriteHdr/64 (536870913 (estimated locally),0.50 per call) Fee_JobEraseImmediateBlock.part.0/150 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_JobInternalSwapClusterErase/44 (1073741824 (estimated locally),1.00 per call) Fee_GetNextClusterToSwap/45 (1073741824 (estimated locally),1.00 per call) 
Fee_GetNextClusterToSwap/45 (Fee_GetNextClusterToSwap) @06f3cc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_ClrGrps/113 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalSwap/46 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_JobInternalSwapClusterErase/44 (Fee_JobInternalSwapClusterErase) @06f3ca80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrIt/6 (read)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalSwap/46 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_EraseCluster/80 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalSwapClusterFmt/43 (Fee_JobInternalSwapClusterFmt) @06f3c8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_uJobIntClrIt/6 (read)Fee_ClrGrps/113 (read)Fee_aClrGrpInfo/20 (read)Fee_aDataBuffer/4 (addr)Fee_aDataBuffer/4 (addr)Fee_uJobIntHdrAddr/17 (write)Fee_uJobIntDataAddr/18 (write)Fee_uJobIntBlockIt/8 (write)Fee_eJob/9 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_SerializeClusterHdr.constprop/154 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalSwapBlock/42 (Fee_JobInternalSwapBlock) @06f3c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Fee_BlockConfig/100 (read)Fee_uJobIntClrGrpIt/5 (read)Fee_aBlockInfo/19 (read)Fee_uJobIntBlockIt/8 (write)Fee_uJobIntBlockIt/8 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_BlockConfig/100 (read)Fee_aBlockInfo/19 (read)Fee_uJobIntDataAddr/18 (read)Fee_uJobIntDataAddr/18 (write)Fee_uJobIntAddrIt/16 (write)Fee_aDataBuffer/4 (addr)Fee_uJobIntBlockIt/8 (read)Fee_aBlockInfo/19 (read)Fee_eJob/9 (write)Fee_uJobIntBlockIt/8 (write)Fee_eJob/9 (write)Fee_uJobIntHdrAddr/17 (read)Fee_aDataBuffer/4 (addr)Fee_uJobIntHdrAddr/17 (read)Fee_uJobIntHdrAddr/17 (write)
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:58020002 (estimated locally) body optimize_size
  Called by: Fee_JobInternalSwapDataRead/61 (354334802 (estimated locally),0.33 per call) 
  Calls: Fls_Write/114 (46276755 (estimated locally),0.80 per call) Fee_SerializeBlockHdr.constprop/155 (46276755 (estimated locally),0.80 per call) Fee_AlignToVirtualPageSize/38 (23138378 (estimated locally),0.40 per call) Fee_JobInternalSwapClusterVld/41 (11743249 (estimated locally),0.20 per call) 
Fee_JobInternalSwapClusterVld/41 (Fee_JobInternalSwapClusterVld) @06f3c540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_uJobIntClrGrpIt/5 (read)Fee_ClrGrps/113 (read)Fee_uJobIntClrIt/6 (read)Fee_aDataBuffer/4 (addr)Fee_aDataBuffer/4 (addr)Fee_eJob/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_JobInternalSwapBlock/42 (11743249 (estimated locally),0.20 per call) 
  Calls: Fls_Write/114 (1073741824 (estimated locally),1.00 per call) Fee_SerializeFlag/40 (1073741824 (estimated locally),1.00 per call) 
Fee_SerializeFlag/40 (Fee_SerializeFlag) @06f3c380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:33608118 (estimated locally) body local optimize_size
  Called by: Fee_JobWriteBlockValidate/68 (1073741824 (estimated locally),1.00 per call) Fee_JobInvalidateBlock.part.0/133 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalScanClusterFmt/50 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapClusterVld/41 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapBlockVld/60 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_CopyDataToPageBuffer/39 (Fee_CopyDataToPageBuffer) @06f3c1c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_AlignToVirtualPageSize/38 (Fee_AlignToVirtualPageSize) @06f3c000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fee_IsBlockMatchedConfig.constprop/157 (949617268 (estimated locally),0.88 per call) Fee_JobInternalSwapClusterVldDone/63 (89002611 (estimated locally),1.00 per call) Fee_JobInternalSwapClusterVldDone/63 (130886193 (estimated locally),1.46 per call) Fee_JobWriteHdr/64 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalSwapDataRead/61 (1073741823 (estimated locally),1.00 per call) Fee_JobWriteBlockData/65 (1073741823 (estimated locally),1.00 per call) Fee_JobInternalSwapBlock/42 (23138378 (estimated locally),0.40 per call) Fee_ReservedAreaWritable/76 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Fee_GetBlockIndex/34 (Fee_GetBlockIndex) @06f2e8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_BlockConfig/100 (read)
  Referring: 
  Availability: local
  Function flags: count:86959666 (estimated locally) body local optimize_size
  Called by: Fee_EraseImmediateBlock/91 (1073741824 (estimated locally),1.00 per call) Fee_InvalidateBlock/89 (1073741824 (estimated locally),1.00 per call) Fee_Write/85 (1073741824 (estimated locally),1.00 per call) Fee_Read/84 (1073741824 (estimated locally),1.00 per call) Fee_JobInternalScanBlockHdrParse/54 (209308187 (estimated locally),0.19 per call) 
  Calls: 
Fee_SerializeClusterHdr/33 (Fee_SerializeClusterHdr) @06f2e700
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:13207024 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_DeserializeClusterHdr/32 (Fee_DeserializeClusterHdr) @06f2e540
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_DeserializeBlockHdr/31 (Fee_DeserializeBlockHdr) @06f2e380
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_DeserializeFlag/30 (Fee_DeserializeFlag) @06f2e1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fee_DeserializeClusterHdr.constprop/158 (250769751 (estimated locally),0.23 per call) Fee_DeserializeClusterHdr.constprop/158 (119792710 (estimated locally),0.11 per call) Fee_DeserializeBlockHdr.constprop/156 (216711433 (estimated locally),0.20 per call) Fee_DeserializeBlockHdr.constprop/156 (103523052 (estimated locally),0.10 per call) 
  Calls: Fee_DeserializeFlag.part.0/117 (606019886 (estimated locally),0.56 per call) 
Fee_BlankCheck/29 (Fee_BlankCheck) @06f2e000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Fee_DeserializeClusterHdr.constprop/158 (524952378 (estimated locally),0.49 per call) Fee_DeserializeBlockHdr.constprop/156 (1073741824 (estimated locally),1.00 per call) Fee_DeserializeBlockHdr.constprop/156 (453655921 (estimated locally),0.42 per call) Fee_DeserializeFlag.part.0/117 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_SerializeBlockHdr/28 (Fee_SerializeBlockHdr) @06f29e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:12670154 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_JobScheduleLookupTable/26 (Fee_JobScheduleLookupTable) @06e76f30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Fee_JobReadBlock/59 (addr)Fee_JobWriteBlock/66 (addr)Fee_JobWriteBlockData/65 (addr)Fee_JobWriteBlockUnalignedData/67 (addr)Fee_JobWriteBlockValidate/68 (addr)Fee_JobWriteBlockDone/70 (addr)Fee_JobInvalidateBlock/71 (addr)Fee_JobInvalidateBlockDone/72 (addr)Fee_JobEraseImmediateBlock/73 (addr)Fee_JobInternalScan/56 (addr)Fee_JobInternalScanCluster/49 (addr)Fee_JobInternalScanClusterHdrParse_Wrapper/21 (addr)Fee_JobInternalScanClusterFmt/50 (addr)Fee_JobInternalScanClusterFmtDone/51 (addr)Fee_JobInternalScanBlockHdrParse_Wrapper/22 (addr)Fee_JobInternalSwapClusterFmt/43 (addr)Fee_JobInternalSwapBlock/42 (addr)Fee_JobInternalSwapDataRead_Wrapper/23 (addr)Fee_JobInternalSwapDataWrite_Wrapper/24 (addr)Fee_JobInternalSwapClusterVldDone/63 (addr)Fee_JobSystemDone/25 (addr)Fee_JobSetModeTransfer/69 (addr)
  Referring: Fee_JobSchedule/74 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Fee_JobSystemDone/25 (Fee_JobSystemDone) @06f29540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fee_JobInternalSwapDataWrite_Wrapper/24 (Fee_JobInternalSwapDataWrite_Wrapper) @06f29380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInternalSwapDataWrite.part.0/140 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalSwapDataRead_Wrapper/23 (Fee_JobInternalSwapDataRead_Wrapper) @06f291c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInternalSwapDataRead/61 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanBlockHdrParse_Wrapper/22 (Fee_JobInternalScanBlockHdrParse_Wrapper) @06f29000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInternalScanBlockHdrParse/54 (1073741824 (estimated locally),1.00 per call) 
Fee_JobInternalScanClusterHdrParse_Wrapper/21 (Fee_JobInternalScanClusterHdrParse_Wrapper) @06ea4e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Fee_JobScheduleLookupTable/26 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fee_JobInternalScanClusterHdrParse/58 (1073741824 (estimated locally),1.00 per call) 
Fee_aClrGrpInfo/20 (Fee_aClrGrpInfo) @06e76d38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobWriteHdr/64 (read)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_JobInternalScanCluster/49 (read)Fee_JobInternalScanClusterFmtDone/51 (write)Fee_JobErrorSchedule/77 (read)Fee_JobInternalSwap/46 (read)Fee_UpdateBlockRuntimeInfo.isra.0/118 (write)Fee_JobWriteBlockData/65 (read)Fee_JobWriteBlockData/65 (write)Fee_JobWriteBlockData/65 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_Init/82 (write)Fee_GetRunTimeInfo/95 (read)Fee_JobWriteBlockData/65 (write)Fee_JobInternalScanCluster/49 (read)Fee_JobInternalScanCluster/49 (write)Fee_JobInternalScanCluster/49 (write)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_IsBlockMatchedConfig.constprop.0/157 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobInternalSwapClusterFmt/43 (read)Fee_GetRunTimeInfo/95 (read)Fee_IsBlockMatchedConfig.constprop.0/157 (read)Fee_JobInternalScanClusterHdrParse/58 (write)Fee_JobInternalScanClusterFmtDone/51 (write)Fee_JobInternalScanClusterFmtDone/51 (write)Fee_JobInternalScanClusterHdrParse/58 (read)Fee_JobWriteHdr/64 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_ForceSwapOnNextWrite/96 (write)Fee_ReservedAreaWritable/76 (read)Fee_JobInternalScanClusterHdrParse/58 (write)Fee_JobErrorSchedule/77 (write)Fee_JobInternalScanClusterFmtDone/51 (write)Fee_JobWriteBlockData/65 (read)Fee_JobWriteBlockData/65 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_GetRunTimeInfo/95 (read)Fee_GetRunTimeInfo/95 (read)Fee_ForceSwapOnNextWrite/96 (read)
  Availability: available
  Varpool flags:
Fee_aBlockInfo/19 (Fee_aBlockInfo) @06e76cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobWriteBlockData/65 (write)Fee_JobReadBlock/59 (read)Fee_JobReadBlock/59 (read)Fee_UpdateBlockRuntimeInfo.isra.0/118 (write)Fee_ReservedAreaWritable/76 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobInternalSwapBlock/42 (read)Fee_JobInvalidateBlock/71 (read)Fee_Init/82 (write)Fee_Init/82 (write)Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapDataRead/61 (write)Fee_JobInternalSwapDataRead/61 (read)Fee_JobInvalidateBlock.part.0/133 (read)Fee_JobWriteBlockUnalignedData/67 (read)Fee_ReservedAreaWritable/76 (read)Fee_Init/82 (write)Fee_UpdateBlockRuntimeInfo.isra.0/118 (write)Fee_UpdateBlockRuntimeInfo.isra.0/118 (write)Fee_JobInvalidateBlockDone/72 (write)Fee_JobWriteBlockValidate/68 (read)Fee_JobWriteBlockData/65 (write)Fee_JobWriteBlockData/65 (write)Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobWriteBlockDone/70 (write)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobInternalSwapClusterVldDone/63 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobInternalSwapClusterVldDone/63 (read)
  Availability: available
  Varpool flags:
Fee_uJobIntDataAddr/18 (Fee_uJobIntDataAddr) @06e76ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapBlock/42 (write)Fee_JobInternalSwapClusterFmt/43 (write)Fee_JobInternalSwapDataRead/61 (read)
  Availability: available
  Varpool flags:
Fee_uJobIntHdrAddr/17 (Fee_uJobIntHdrAddr) @06e76c60
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalSwapBlockVld/60 (read)Fee_JobInternalSwapBlock/42 (write)Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapClusterFmt/43 (write)
  Availability: available
  Varpool flags:
Fee_uJobIntAddrIt/16 (Fee_uJobIntAddrIt) @06e76c18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalSwapDataRead/61 (read)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalSwapBlock/42 (write)Fee_JobInternalSwapDataWrite.part.0/140 (read)Fee_UpdateBlockRuntimeInfo.isra.0/118 (read)Fee_JobInternalScanCluster/49 (write)Fee_JobInternalSwapDataWrite.part.0/140 (write)Fee_JobInternalSwapDataWrite.part.0/140 (read)Fee_JobInternalScanBlockHdrRead/47 (read)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalScanBlockHdrParse/54 (read)
  Availability: available
  Varpool flags:
Fee_uJobBlockLength/15 (Fee_uJobBlockLength) @06e76bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalSwapDataWrite.part.0/140 (read)Fee_JobInternalSwapDataRead/61 (write)Fee_JobReadBlock/59 (read)Fee_JobInternalSwapDataRead/61 (read)Fee_JobInternalSwapDataRead/61 (write)Fee_JobInternalSwapDataWrite.part.0/140 (read)Fee_Read/84 (write)
  Availability: available
  Varpool flags:
Fee_uJobBlockOffset/14 (Fee_uJobBlockOffset) @06e76b88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobReadBlock/59 (read)Fee_Read/84 (write)
  Availability: available
  Varpool flags:
Fee_eJobResult/13 (Fee_eJobResult) @06e76b40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobErrorNotification/93 (read)Fee_JobErrorSchedule/77 (write)Fee_Init/82 (write)Fee_SetMode/83 (write)Fee_Read/84 (write)Fee_Write/85 (write)Fee_GetJobResult/88 (read)Fee_JobErrorSchedule/77 (write)Fee_JobEndNotification/92 (write)Fee_JobEndNotification/92 (read)Fee_JobErrorNotification/93 (read)Fee_InvalidateBlock/89 (write)Fee_JobErrorSchedule/77 (write)Fee_EraseImmediateBlock/91 (write)Fee_JobEndNotification/92 (write)Fee_JobErrorSchedule/77 (write)Fee_JobErrorSchedule/77 (write)Fee_MainFunction/94 (read)Fee_MainFunction/94 (write)Fee_MainFunction/94 (read)
  Availability: available
  Varpool flags: initialized
Fee_eModuleStatus/12 (Fee_eModuleStatus) @06e76af8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobErrorSchedule/77 (write)Fee_JobEndNotification/92 (write)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobErrorNotification/93 (read)Fee_JobErrorSchedule/77 (write)Fee_Init/82 (read)Fee_EraseImmediateBlock/91 (write)Fee_MainFunction/94 (write)Fee_SetMode/83 (read)Fee_Read/84 (write)Fee_Write/85 (write)Fee_JobEndNotification/92 (write)Fee_Read/84 (read)Fee_GetStatus/87 (read)Fee_EraseImmediateBlock/91 (read)Fee_Write/85 (read)Fee_GetJobResult/88 (read)Fee_JobEndNotification/92 (write)Fee_GetRunTimeInfo/95 (read)Fee_InvalidateBlock/89 (read)Fee_InvalidateBlock/89 (write)Fee_MainFunction/94 (write)Fee_JobSetModeTransfer.part.0/122 (write)Fee_JobEndNotification/92 (read)Fee_ForceSwapOnNextWrite/96 (read)
  Availability: available
  Varpool flags: initialized
Fee_eMode/11 (Fee_eMode) @06e76ab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobSetModeTransfer.part.0/122 (read)Fee_SetMode/83 (write)
  Availability: available
  Varpool flags: initialized
Fee_eJobIntOriginalJob/10 (Fee_eJobIntOriginalJob) @06e76a68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalSwap/46 (write)Fee_JobInternalSwapClusterVldDone/63 (read)
  Availability: available
  Varpool flags: initialized
Fee_eJob/9 (Fee_eJob) @06e76a20
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobScheduleAfterSwapClusterVldDone/75 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_Init/82 (write)Fee_SetMode/83 (write)Fee_Read/84 (write)Fee_Write/85 (write)Fee_JobWriteBlockData/65 (write)Fee_InvalidateBlock/89 (write)Fee_JobWriteBlockDone/70 (write)Fee_JobWriteBlock/66 (write)Fee_JobEraseImmediateBlock/73 (write)Fee_JobWriteBlockData/65 (write)Fee_JobWriteBlockUnalignedData/67 (write)Fee_JobInvalidateBlockDone/72 (write)Fee_JobInternalScanClusterErase/48 (write)Fee_JobInternalSwapBlockVld/60 (write)Fee_JobSchedule/74 (read)Fee_JobInternalSwapClusterVld/41 (write)Fee_JobInternalSwapDataRead/61 (write)Fee_JobInternalSwapBlock/42 (write)Fee_JobInternalScanBlockHdrRead/47 (write)Fee_JobInternalScanClusterHdrRead/55 (write)Fee_JobReadBlock/59 (write)Fee_JobInternalSwapClusterErase/44 (write)Fee_JobErrorSchedule/77 (read)Fee_JobInternalScanCluster/49 (write)Fee_JobErrorNotification/93 (read)Fee_JobWriteBlock/66 (read)Fee_JobInternalSwapClusterFmt/43 (write)Fee_JobEndNotification/92 (read)Fee_JobInternalScanClusterFmt/50 (write)Fee_JobInvalidateBlock/71 (write)Fee_EraseImmediateBlock/91 (write)Fee_JobInternalSwapBlock/42 (write)Fee_JobWriteBlockValidate/68 (write)Fee_JobInvalidateBlock.part.0/133 (write)Fee_JobInternalSwap/46 (read)Fee_JobInternalSwapDataWrite.part.0/140 (write)Fee_JobWriteBlockData/65 (write)Fee_JobEndNotification/92 (read)Fee_MainFunction/94 (read)
  Availability: available
  Varpool flags: initialized
Fee_uJobIntBlockIt/8 (Fee_uJobIntBlockIt) @06e769d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapBlock/42 (write)Fee_JobInternalSwapClusterFmt/43 (write)Fee_JobInternalSwapBlock/42 (write)Fee_JobInternalSwapBlock/42 (read)Fee_JobInternalSwapDataRead/61 (read)Fee_JobInternalSwapDataRead/61 (write)Fee_JobInternalSwapDataRead/61 (write)
  Availability: available
  Varpool flags:
Fee_uJobBlockIndex/7 (Fee_uJobBlockIndex) @06e76990
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobEraseImmediateBlock.part.0/150 (read)Fee_JobWriteHdr/64 (read)Fee_Read/84 (write)Fee_Write/85 (write)Fee_JobWriteBlockData/65 (read)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobWriteBlockValidate/68 (read)Fee_JobInvalidateBlock.part.0/133 (read)Fee_ReservedAreaWritable/76 (read)Fee_JobErrorSchedule/77 (read)Fee_JobWriteBlockUnalignedData/67 (read)Fee_JobWriteBlockUnalignedData/67 (read)Fee_JobWriteBlockDone/70 (read)Fee_InvalidateBlock/89 (write)Fee_JobInvalidateBlock/71 (read)Fee_JobInvalidateBlockDone/72 (read)Fee_JobReadBlock/59 (read)Fee_EraseImmediateBlock/91 (write)
  Availability: available
  Varpool flags:
Fee_uJobIntClrIt/6 (Fee_uJobIntClrIt) @06e76948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalScanClusterHdrParse/58 (read)Fee_JobInternalScanClusterFmtDone/51 (read)Fee_JobInternalSwapClusterErase/44 (read)Fee_JobInternalSwap/46 (write)Fee_JobInternalScanClusterFmt/50 (read)Fee_JobInternalScanClusterHdrDone/57 (write)Fee_JobInternalScanClusterHdrRead/55 (read)Fee_JobInternalScanClusterHdrDone/57 (read)Fee_JobInternalScanClusterErase/48 (read)Fee_JobInternalScanClusterHdrDone/57 (write)Fee_JobInternalSwapClusterVld/41 (read)Fee_JobInternalSwapClusterFmt/43 (read)Fee_JobInternalScan/56 (write)Fee_JobInternalScanCluster.part.0/146 (write)Fee_JobInternalSwapClusterVldDone/63 (read)
  Availability: available
  Varpool flags:
Fee_uJobIntClrGrpIt/5 (Fee_uJobIntClrGrpIt) @06e76900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalScanClusterHdrDone/57 (read)Fee_JobInternalScanClusterHdrParse/58 (read)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalSwapClusterErase/44 (read)Fee_JobInternalScanClusterFmtDone/51 (read)Fee_JobEraseImmediateBlock.part.0/150 (write)Fee_JobInternalScanClusterHdrDone/57 (write)Fee_UpdateBlockRuntimeInfo.isra.0/118 (read)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalSwapClusterVldDone/63 (write)Fee_JobInternalSwapClusterVld/41 (read)Fee_JobInternalScanClusterHdrDone/57 (write)Fee_JobInternalScanClusterHdrRead/55 (read)Fee_JobInternalScanClusterFmt/50 (read)Fee_JobInternalScanCluster/49 (read)Fee_JobInternalScanClusterErase/48 (read)Fee_JobInternalSwap/46 (read)Fee_JobInternalScanClusterFmtDone/51 (write)Fee_JobWriteHdr/64 (write)Fee_GetNextClusterToSwap/45 (read)Fee_JobInternalScan/56 (write)Fee_JobInternalScanClusterHdrDone/57 (read)Fee_JobInternalSwapBlock/42 (read)Fee_IsBlockMatchedConfig.constprop.0/157 (read)Fee_JobInternalSwapClusterFmt/43 (read)Fee_JobInternalSwapClusterVldDone/63 (read)
  Availability: available
  Varpool flags:
Fee_aDataBuffer/4 (Fee_aDataBuffer) @06e768b8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobWriteBlockData/65 (addr)Fee_JobWriteBlockUnalignedData/67 (addr)Fee_JobWriteBlockUnalignedData/67 (addr)Fee_JobInternalScanBlockHdrParse/54 (addr)Fee_JobInternalSwapBlockVld/60 (addr)Fee_JobInternalSwapBlockVld/60 (addr)Fee_JobWriteBlockData/65 (addr)Fee_JobInternalScanClusterHdrParse/58 (addr)Fee_JobInternalSwapClusterVld/41 (addr)Fee_JobInternalSwapClusterVld/41 (addr)Fee_JobInternalScanBlockHdrRead/47 (addr)Fee_JobInternalSwapDataRead/61 (addr)Fee_JobWriteBlockValidate/68 (addr)Fee_JobInternalSwapBlock/42 (addr)Fee_JobInternalSwapBlock/42 (addr)Fee_JobInternalScanClusterHdrRead/55 (addr)Fee_JobInternalSwapDataWrite.part.0/140 (addr)Fee_JobInternalSwapClusterFmt/43 (addr)Fee_JobInternalSwapClusterFmt/43 (addr)Fee_JobInternalScanClusterFmt/50 (addr)Fee_JobInternalScanClusterFmt/50 (addr)Fee_JobInvalidateBlock.part.0/133 (addr)Fee_JobInvalidateBlock.part.0/133 (addr)Fee_JobWriteBlockValidate/68 (addr)Fee_JobInternalScanClusterFmt/50 (addr)Fee_JobWriteHdr/64 (addr)Fee_JobWriteHdr/64 (addr)Fee_CopyDataToPageBuffer.constprop.0/153 (addr)Fee_SerializeClusterHdr.constprop.0/154 (addr)Fee_SerializeBlockHdr.constprop.0/155 (addr)Fee_DeserializeBlockHdr.constprop.0/156 (addr)Fee_DeserializeClusterHdr.constprop.0/158 (addr)
  Availability: available
  Varpool flags: initialized
Fee_pJobWriteDataDestPtr/3 (Fee_pJobWriteDataDestPtr) @06e76870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobWriteBlockUnalignedData/67 (read)Fee_JobWriteBlockData/65 (read)Fee_JobWriteBlockData/65 (read)Fee_Write/85 (write)
  Availability: available
  Varpool flags: initialized
Fee_pJobReadDataDestPtr/2 (Fee_pJobReadDataDestPtr) @06e76828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobReadBlock/59 (read)Fee_Read/84 (write)
  Availability: available
  Varpool flags: initialized
bSwapToBePerformed/1 (bSwapToBePerformed) @06e767e0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalScanBlockHdrParse/54 (read)Fee_JobInternalScanBlockHdrParse/54 (write)Fee_JobInternalScanBlockHdrParse/54 (write)
  Availability: available
  Varpool flags:

;; Function Fee_JobSystemDone (Fee_JobSystemDone, funcdef_no=4, decl_uid=9118, cgraph_uid=6, symbol_order=25)

Modification phase of node Fee_JobSystemDone/25
Fee_JobSystemDone ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Fee_GetBlockIndex (Fee_GetBlockIndex, funcdef_no=12, decl_uid=8997, cgraph_uid=14, symbol_order=34)

Modification phase of node Fee_GetBlockIndex/34
Fee_GetBlockIndex (const uint16 BlockNumber)
{
  uint16 RetVal;
  sint32 Middle;
  sint32 High;
  sint32 Low;
  long int _1;
  long int _2;
  short unsigned int _3;

  <bb 2> [local count: 86959666]:
  # DEBUG BEGIN_STMT
  # DEBUG Low => 0
  # DEBUG BEGIN_STMT
  # DEBUG High => 10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 65535
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = High_6 - Low_5;
  _2 = _1 >> 1;
  Middle_9 = _2 + Low_5;
  # DEBUG Middle => Middle_9
  # DEBUG BEGIN_STMT
  _3 = Fee_BlockConfig[Middle_9].BlockNumber;
  if (_3 > BlockNumber_11(D))
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 507343012]:
  # DEBUG BEGIN_STMT
  High_14 = Middle_9 + -1;
  # DEBUG High => High_14
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 507343012]:
  # DEBUG BEGIN_STMT
  if (_3 < BlockNumber_11(D))
    goto <bb 6>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 6> [local count: 479439146]:
  # DEBUG BEGIN_STMT
  Low_13 = Middle_9 + 1;
  # DEBUG Low => Low_13
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 27903866]:
  # Middle_8 = PHI <Middle_9(5)>
  # DEBUG BEGIN_STMT
  RetVal_12 = (uint16) Middle_8;
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 986782159]:
  # Low_15 = PHI <Low_5(4), Low_13(6)>
  # High_4 = PHI <High_14(4), High_6(6)>

  <bb 11> [local count: 1073741824]:
  # Low_5 = PHI <Low_15(9), 0(2)>
  # High_6 = PHI <High_4(9), 10(2)>
  # DEBUG High => High_6
  # DEBUG Low => Low_5
  # DEBUG BEGIN_STMT
  if (Low_5 <= High_6)
    goto <bb 3>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 86959666]:
  # RetVal_7 = PHI <RetVal_12(7), 65535(11)>
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Fee_AlignToVirtualPageSize (Fee_AlignToVirtualPageSize, funcdef_no=16, decl_uid=9007, cgraph_uid=18, symbol_order=38)

Modification phase of node Fee_AlignToVirtualPageSize/38
Fee_AlignToVirtualPageSize (uint16 BlockSize)
{
  uint16 Retval;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Retval => 0
  # DEBUG BEGIN_STMT
  _1 = BlockSize_5(D) & 31;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = BlockSize_5(D) >> 5;
  _3 = _2 + 1;
  Retval_6 = _3 * 32;
  # DEBUG Retval => Retval_6

  <bb 4> [local count: 1073741824]:
  # Retval_4 = PHI <BlockSize_5(D)(2), Retval_6(3)>
  # DEBUG Retval => Retval_4
  # DEBUG BEGIN_STMT
  return Retval_4;

}



;; Function Fee_JobWriteBlockDone (Fee_JobWriteBlockDone, funcdef_no=48, decl_uid=9066, cgraph_uid=50, symbol_order=70)

Modification phase of node Fee_JobWriteBlockDone/70
Fee_JobWriteBlockDone ()
{
  short unsigned int Fee_uJobBlockIndex.165_1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.165_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.165_1;
  Fee_aBlockInfo[_2].BlockStatus = 0;
  # DEBUG BEGIN_STMT
  Fee_eJob = 20;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Fee_JobInvalidateBlockDone (Fee_JobInvalidateBlockDone, funcdef_no=50, decl_uid=9070, cgraph_uid=52, symbol_order=72)

Modification phase of node Fee_JobInvalidateBlockDone/72
Fee_JobInvalidateBlockDone ()
{
  short unsigned int Fee_uJobBlockIndex.162_1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.162_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.162_1;
  Fee_aBlockInfo[_2].BlockStatus = 1;
  # DEBUG BEGIN_STMT
  Fee_eJob = 20;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Fee_ReservedAreaWritable (Fee_ReservedAreaWritable, funcdef_no=54, decl_uid=9080, cgraph_uid=56, symbol_order=76)

Modification phase of node Fee_ReservedAreaWritable/76
Fee_ReservedAreaWritable ()
{
  boolean Immediate;
  uint8 BlockClusterGrp;
  uint16 BlockSize;
  uint32 ReservedSpace;
  Fls_LengthType AvailClrSpace;
  uint16 AlignedBlockSize;
  boolean RetVal;
  short unsigned int Fee_uJobBlockIndex.149_1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  int _20;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.149_1 = Fee_uJobBlockIndex;
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobBlockIndex.149_1
  # DEBUG INLINE_ENTRY Fee_GetBlockClusterGrp
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _20 = (int) Fee_uJobBlockIndex.149_1;
  BlockClusterGrp_17 = Fee_BlockConfig[_20].ClrGrp;
  # DEBUG BlockClusterGrp => BlockClusterGrp_17
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockClusterGrp => NULL
  # DEBUG ClrGrpIndex => BlockClusterGrp_17
  # DEBUG BEGIN_STMT
  _2 = (int) BlockClusterGrp_17;
  ReservedSpace_18 = Fee_ClrGrps[_2].ReservedSize;
  # DEBUG ReservedSpace => ReservedSpace_18
  # DEBUG BEGIN_STMT
  _3 = Fee_aClrGrpInfo[_2].DataAddrIt;
  _4 = Fee_aClrGrpInfo[_2].HdrAddrIt;
  AvailClrSpace_19 = _3 - _4;
  # DEBUG AvailClrSpace => AvailClrSpace_19
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobBlockIndex.149_1
  # DEBUG INLINE_ENTRY Fee_GetBlockSize
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockSize_21 = Fee_BlockConfig[_20].BlockSize;
  # DEBUG BlockSize => BlockSize_21
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockSize => NULL
  # DEBUG BlockSize => BlockSize_21
  # DEBUG BEGIN_STMT
  AlignedBlockSize_22 = Fee_AlignToVirtualPageSize (BlockSize_21);
  # DEBUG AlignedBlockSize => AlignedBlockSize_22
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) AlignedBlockSize_22;
  _6 = _5 + 192;
  if (_6 > AvailClrSpace_19)
    goto <bb 9>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _7 = _5 + ReservedSpace_18;
  _8 = _7 + 192;
  if (_8 > AvailClrSpace_19)
    goto <bb 4>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobBlockIndex.149_1
  # DEBUG INLINE_ENTRY Fee_GetBlockImmediate
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Immediate_23 = Fee_BlockConfig[_20].ImmediateData;
  # DEBUG Immediate => Immediate_23
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG Immediate => NULL
  # DEBUG ImmediateData => Immediate_23
  # DEBUG BEGIN_STMT
  if (Immediate_23 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  _9 = Fee_aBlockInfo[_20].DataAddr;
  if (_9 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 45634027]:
  _10 = Fee_aBlockInfo[_20].InvalidAddr;
  if (_10 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 68451041]:
  _11 = ReservedSpace_18 + 96;
  _12 = Fee_aBlockInfo[_20].InvalidAddr;
  _13 = _9 - _12;
  _14 = _13 + 4294967264;
  if (_11 <= _14)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 34225521]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 9> [local count: 1073741824]:
  # RetVal_15 = PHI <0(2), 0(4), 1(3), 0(8), 1(7), 1(6)>
  # DEBUG RetVal => RetVal_15
  # DEBUG BEGIN_STMT
  return RetVal_15;

}



;; Function Fee_JobInternalScanBlockHdrRead (Fee_JobInternalScanBlockHdrRead, funcdef_no=25, decl_uid=9026, cgraph_uid=27, symbol_order=47)

Modification phase of node Fee_JobInternalScanBlockHdrRead/47
Fee_JobInternalScanBlockHdrRead ()
{
  MemIf_JobResultType RetVal;
  long unsigned int Fee_uJobIntAddrIt.103_1;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  Fee_uJobIntAddrIt.103_1 = Fee_uJobIntAddrIt;
  # DEBUG SourceAddress => Fee_uJobIntAddrIt.103_1
  # DEBUG TargetAddressPtr => &Fee_aDataBuffer
  # DEBUG Length => 96
  # DEBUG INLINE_ENTRY Fee_ReadFromFls
  # DEBUG BEGIN_STMT
  _5 = Fls_Read (Fee_uJobIntAddrIt.103_1, &Fee_aDataBuffer, 96);
  # DEBUG SourceAddress => NULL
  # DEBUG TargetAddressPtr => NULL
  # DEBUG Length => NULL
  if (_5 != 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2

  <bb 4> [local count: 1073741824]:
  # RetVal_2 = PHI <1(2), 2(3)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  Fee_eJob = 14;
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fee_JobReadBlock (Fee_JobReadBlock, funcdef_no=37, decl_uid=9046, cgraph_uid=39, symbol_order=59)

Modification phase of node Fee_JobReadBlock/59
Fee_JobReadBlock ()
{
  Fls_AddressType BlockAddress;
  Fee_BlockStatusType BlockStatus;
  MemIf_JobResultType RetVal;
  short unsigned int Fee_uJobBlockIndex.182_1;
  int _2;
  long unsigned int Fee_uJobBlockOffset.184_3;
  long unsigned int _4;
  uint8 * Fee_pJobReadDataDestPtr.185_5;
  long unsigned int Fee_uJobBlockLength.186_6;
  unsigned char _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BlockStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG BlockAddress => 0
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.182_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.182_1;
  BlockStatus_10 = Fee_aBlockInfo[_2].BlockStatus;
  # DEBUG BlockStatus => BlockStatus_10
  # DEBUG BEGIN_STMT
  BlockAddress_11 = Fee_aBlockInfo[_2].DataAddr;
  # DEBUG BlockAddress => BlockAddress_11
  # DEBUG BEGIN_STMT
  if (BlockStatus_10 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockOffset.184_3 = Fee_uJobBlockOffset;
  _4 = Fee_uJobBlockOffset.184_3 + BlockAddress_11;
  Fee_pJobReadDataDestPtr.185_5 = Fee_pJobReadDataDestPtr;
  Fee_uJobBlockLength.186_6 = Fee_uJobBlockLength;
  # DEBUG SourceAddress => _4
  # DEBUG TargetAddressPtr => Fee_pJobReadDataDestPtr.185_5
  # DEBUG Length => Fee_uJobBlockLength.186_6
  # DEBUG INLINE_ENTRY Fee_ReadFromFls
  # DEBUG BEGIN_STMT
  _13 = Fls_Read (_4, Fee_pJobReadDataDestPtr.185_5, Fee_uJobBlockLength.186_6);
  # DEBUG SourceAddress => NULL
  # DEBUG TargetAddressPtr => NULL
  # DEBUG Length => NULL
  if (_13 != 0)
    goto <bb 9>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 4> [local count: 124017181]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (BlockStatus_10 == 1)
    goto <bb 9>; [21.72%]
  else
    goto <bb 6>; [78.28%]

  <bb 6> [local count: 563151818]:
  # DEBUG BEGIN_STMT
  if (BlockStatus_10 == 2)
    goto <bb 8>; [21.72%]
  else
    goto <bb 7>; [78.28%]

  <bb 7> [local count: 440835243]:
  if (BlockStatus_10 == 6)
    goto <bb 8>; [21.72%]
  else
    goto <bb 9>; [78.28%]

  <bb 8> [local count: 218065990]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 4

  <bb 9> [local count: 1073741824]:
  # RetVal_7 = PHI <2(4), 5(5), 1(7), 4(8), 1(3)>
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  Fee_eJob = 20;
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Fee_JobInternalScanClusterHdrRead (Fee_JobInternalScanClusterHdrRead, funcdef_no=33, decl_uid=9040, cgraph_uid=35, symbol_order=55)

Modification phase of node Fee_JobInternalScanClusterHdrRead/55
Fee_JobInternalScanClusterHdrRead ()
{
  Fls_AddressType ReadAddress;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.136_1;
  int _2;
  const struct Fee_ClusterType * _3;
  unsigned char Fee_uJobIntClrIt.137_4;
  unsigned int _5;
  unsigned int _6;
  const struct Fee_ClusterType * _7;
  unsigned char _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.136_1 = Fee_uJobIntClrGrpIt;
  _2 = (int) Fee_uJobIntClrGrpIt.136_1;
  _3 = Fee_ClrGrps[_2].ClrPtr;
  Fee_uJobIntClrIt.137_4 = Fee_uJobIntClrIt;
  _5 = (unsigned int) Fee_uJobIntClrIt.137_4;
  _6 = _5 * 8;
  _7 = _3 + _6;
  ReadAddress_11 = _7->StartAddr;
  # DEBUG ReadAddress => ReadAddress_11
  # DEBUG BEGIN_STMT
  _8 = Fls_Read (ReadAddress_11, &Fee_aDataBuffer, 96);
  if (_8 != 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2

  <bb 4> [local count: 1073741824]:
  # RetVal_9 = PHI <1(2), 2(3)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  Fee_eJob = 11;
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function Fee_JobInternalScan (Fee_JobInternalScan, funcdef_no=34, decl_uid=9042, cgraph_uid=36, symbol_order=56)

Modification phase of node Fee_JobInternalScan/56
Fee_JobInternalScan ()
{
  MemIf_JobResultType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt = 0;
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrIt = 0;
  # DEBUG BEGIN_STMT
  RetVal_5 = Fee_JobInternalScanClusterHdrRead ();
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Fee_JobSetModeTransfer (Fee_JobSetModeTransfer, funcdef_no=47, decl_uid=9074, cgraph_uid=49, symbol_order=69)

Modification phase of node Fee_JobSetModeTransfer/69
Fee_JobSetModeTransfer ()
{
  MemIf_JobResultType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _1 = Fls_GetStatus ();
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  RetVal_8 = Fee_JobSetModeTransfer.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 1, 6);

  <bb 5> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_8(3), 1(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fee_JobInternalSwapDataWrite_Wrapper (Fee_JobInternalSwapDataWrite_Wrapper, funcdef_no=3, decl_uid=9116, cgraph_uid=5, symbol_order=24)

Modification phase of node Fee_JobInternalSwapDataWrite_Wrapper/24
Fee_JobInternalSwapDataWrite_Wrapper ()
{
  MemIf_JobResultType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BufferValid => 1
  # DEBUG INLINE_ENTRY Fee_JobInternalSwapDataWrite
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG D#16 => 1
  RetVal_2 = Fee_JobInternalSwapDataWrite.part.0 ();
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BufferValid => NULL
  # DEBUG RetVal => NULL
  return RetVal_2;

}



;; Function Fee_JobInternalScanCluster (Fee_JobInternalScanCluster, funcdef_no=27, decl_uid=9030, cgraph_uid=29, symbol_order=49)

Modification phase of node Fee_JobInternalScanCluster/49
Fee_JobInternalScanCluster ()
{
  Fls_AddressType ClrStartAddr;
  uint8 ClrIndex;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.138_1;
  int _3;
  long unsigned int _4;
  const struct Fee_ClusterType * _7;
  unsigned int _8;
  unsigned int _9;
  const struct Fee_ClusterType * _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.138_1 = Fee_uJobIntClrGrpIt;
  if (Fee_uJobIntClrGrpIt.138_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 20;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _3 = (int) Fee_uJobIntClrGrpIt.138_1;
  _4 = Fee_aClrGrpInfo[_3].ActClrID;
  if (_4 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 354334803]:
  RetVal_2 = Fee_JobInternalScanCluster.part.0 ();
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  ClrIndex_15 = Fee_aClrGrpInfo[_3].ActClr;
  # DEBUG ClrIndex => ClrIndex_15
  # DEBUG BEGIN_STMT
  _7 = Fee_ClrGrps[_3].ClrPtr;
  _8 = (unsigned int) ClrIndex_15;
  _9 = _8 * 8;
  _10 = _7 + _9;
  ClrStartAddr_16 = _10->StartAddr;
  # DEBUG ClrStartAddr => ClrStartAddr_16
  # DEBUG BEGIN_STMT
  _11 = ClrStartAddr_16 + 96;
  Fee_uJobIntAddrIt = _11;
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_3].HdrAddrIt = _11;
  # DEBUG BEGIN_STMT
  # DEBUG ClrGrpIt => Fee_uJobIntClrGrpIt.138_1
  # DEBUG ClrIt => ClrIndex_15
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _23 = _10->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  # DEBUG ClrLength => _23
  # DEBUG BEGIN_STMT
  _12 = ClrStartAddr_16 + _23;
  Fee_aClrGrpInfo[_3].DataAddrIt = _12;
  # DEBUG BEGIN_STMT
  RetVal_21 = Fee_JobInternalScanBlockHdrRead ();
  # DEBUG RetVal => RetVal_21

  <bb 7> [local count: 1073741824]:
  # RetVal_13 = PHI <0(3), RetVal_2(5), RetVal_21(6)>
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_13;

}



;; Function Fee_JobInternalScanClusterFmtDone (Fee_JobInternalScanClusterFmtDone, funcdef_no=29, decl_uid=9034, cgraph_uid=31, symbol_order=51)

Modification phase of node Fee_JobInternalScanClusterFmtDone/51
Fee_JobInternalScanClusterFmtDone ()
{
  Fls_AddressType ClrStartAddr;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.104_1;
  int _2;
  unsigned char Fee_uJobIntClrIt.105_3;
  const struct Fee_ClusterType * _4;
  unsigned int _5;
  unsigned int _6;
  const struct Fee_ClusterType * _7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned char _10;
  long unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.104_1 = Fee_uJobIntClrGrpIt;
  _2 = (int) Fee_uJobIntClrGrpIt.104_1;
  Fee_uJobIntClrIt.105_3 = Fee_uJobIntClrIt;
  Fee_aClrGrpInfo[_2].ActClr = Fee_uJobIntClrIt.105_3;
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_2].ActClrID = 1;
  # DEBUG BEGIN_STMT
  _4 = Fee_ClrGrps[_2].ClrPtr;
  _5 = (unsigned int) Fee_uJobIntClrIt.105_3;
  _6 = _5 * 8;
  _7 = _4 + _6;
  ClrStartAddr_14 = _7->StartAddr;
  # DEBUG ClrStartAddr => ClrStartAddr_14
  # DEBUG BEGIN_STMT
  # DEBUG ClrGrpIt => Fee_uJobIntClrGrpIt.104_1
  # DEBUG ClrIt => Fee_uJobIntClrIt.105_3
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _20 = _7->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  # DEBUG ClrLength => _20
  # DEBUG BEGIN_STMT
  _8 = ClrStartAddr_14 + 96;
  Fee_aClrGrpInfo[_2].HdrAddrIt = _8;
  # DEBUG BEGIN_STMT
  _9 = ClrStartAddr_14 + _20;
  Fee_aClrGrpInfo[_2].DataAddrIt = _9;
  # DEBUG BEGIN_STMT
  _10 = Fee_uJobIntClrGrpIt.104_1 + 1;
  Fee_uJobIntClrGrpIt = _10;
  # DEBUG BEGIN_STMT
  RetVal_19 = Fee_JobInternalScanCluster ();
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  return RetVal_19;

}



;; Function Fee_JobWriteBlockData (Fee_JobWriteBlockData, funcdef_no=43, decl_uid=9058, cgraph_uid=45, symbol_order=65)

Modification phase of node Fee_JobWriteBlockData/65
Fee_JobWriteBlockData ()
{
  uint8 ClrGrpIndex;
  Fls_AddressType HdrAddr;
  const uint8 * WriteDataPtr;
  Fls_LengthType WriteLength;
  uint16 AlignedBlockSize;
  uint16 BlockSize;
  MemIf_JobResultType RetVal;
  Fls_AddressType DataAddr;
  short unsigned int Fee_uJobBlockIndex.170_1;
  int _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  const uint8 * Fee_pJobWriteDataDestPtr.176_10;
  unsigned char _17;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.170_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.170_1;
  BlockSize_16 = Fee_BlockConfig[_2].BlockSize;
  # DEBUG BlockSize => BlockSize_16
  # DEBUG BEGIN_STMT
  AlignedBlockSize_18 = Fee_AlignToVirtualPageSize (BlockSize_16);
  # DEBUG AlignedBlockSize => AlignedBlockSize_18
  # DEBUG BEGIN_STMT
  ClrGrpIndex_19 = Fee_BlockConfig[_2].ClrGrp;
  # DEBUG ClrGrpIndex => ClrGrpIndex_19
  # DEBUG BEGIN_STMT
  _3 = (int) ClrGrpIndex_19;
  _4 = Fee_aClrGrpInfo[_3].DataAddrIt;
  _5 = (long unsigned int) AlignedBlockSize_18;
  DataAddr_20 = _4 - _5;
  # DEBUG DataAddr => DataAddr_20
  # DEBUG BEGIN_STMT
  HdrAddr_21 = Fee_aClrGrpInfo[_3].HdrAddrIt;
  # DEBUG HdrAddr => HdrAddr_21
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_2].DataAddr = DataAddr_20;
  # DEBUG BEGIN_STMT
  _6 = HdrAddr_21 + 64;
  Fee_aBlockInfo[_2].InvalidAddr = _6;
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_2].BlockStatus = 2;
  # DEBUG BEGIN_STMT
  # DEBUG ClrGrp => ClrGrpIndex_19
  # DEBUG BEGIN_STMT
  _7 = HdrAddr_21 + 96;
  Fee_aClrGrpInfo[_3].HdrAddrIt = _7;
  # DEBUG BEGIN_STMT
  _8 = Fee_aClrGrpInfo[_3].DataAddrIt;
  _9 = _8 - _5;
  Fee_aClrGrpInfo[_3].DataAddrIt = _9;
  # DEBUG BEGIN_STMT
  if (BlockSize_16 <= 31)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Fee_pJobWriteDataDestPtr.176_10 = Fee_pJobWriteDataDestPtr;
  Fee_CopyDataToPageBuffer (Fee_pJobWriteDataDestPtr.176_10, &Fee_aDataBuffer, BlockSize_16);
  # DEBUG BEGIN_STMT
  # DEBUG WriteDataPtr => &Fee_aDataBuffer
  # DEBUG BEGIN_STMT
  # DEBUG WriteLength => 32
  # DEBUG BEGIN_STMT
  Fee_eJob = 4;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  WriteDataPtr_27 = Fee_pJobWriteDataDestPtr;
  # DEBUG WriteDataPtr => WriteDataPtr_27
  # DEBUG BEGIN_STMT
  if (BlockSize_16 == AlignedBlockSize_18)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 244598387]:
  # DEBUG BEGIN_STMT
  WriteLength_30 = (Fls_LengthType) BlockSize_16;
  # DEBUG WriteLength => WriteLength_30
  # DEBUG BEGIN_STMT
  Fee_eJob = 4;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 474808634]:
  # DEBUG BEGIN_STMT
  WriteLength_28 = _5 + 4294967264;
  # DEBUG WriteLength => WriteLength_28
  # DEBUG BEGIN_STMT
  Fee_eJob = 3;

  <bb 7> [local count: 1073741824]:
  # WriteLength_12 = PHI <32(3), WriteLength_30(5), WriteLength_28(6)>
  # WriteDataPtr_13 = PHI <&Fee_aDataBuffer(3), WriteDataPtr_27(5), WriteDataPtr_27(6)>
  # DEBUG WriteDataPtr => WriteDataPtr_13
  # DEBUG WriteLength => WriteLength_12
  # DEBUG BEGIN_STMT
  DataAddr_34 = Fee_aClrGrpInfo[_3].DataAddrIt;
  # DEBUG DataAddr => DataAddr_34
  # DEBUG BEGIN_STMT
  # DEBUG TargetAddress => DataAddr_34
  # DEBUG SourceAddressPtr => WriteDataPtr_13
  # DEBUG Length => WriteLength_12
  # DEBUG INLINE_ENTRY Fee_WriteToFls
  # DEBUG BEGIN_STMT
  _17 = Fls_Write (DataAddr_34, WriteDataPtr_13, WriteLength_12);
  # DEBUG TargetAddress => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG Length => NULL
  if (_17 == 0)
    goto <bb 9>; [35.00%]
  else
    goto <bb 8>; [65.00%]

  <bb 8> [local count: 697932187]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 9> [local count: 1073741824]:
  # RetVal_11 = PHI <2(7), 1(8)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  return RetVal_11;

}



;; Function Fee_JobInternalSwapClusterFmt (Fee_JobInternalSwapClusterFmt, funcdef_no=21, decl_uid=9020, cgraph_uid=23, symbol_order=43)

Modification phase of node Fee_JobInternalSwapClusterFmt/43
Fee_JobInternalSwapClusterFmt ()
{
  struct Fee_ClusterHeaderType ClrHdr;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.76_1;
  unsigned char Fee_uJobIntClrIt.77_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _13;
  int _23;
  const struct Fee_ClusterType * _24;
  unsigned int _25;
  unsigned int _26;
  const struct Fee_ClusterType * _27;
  long unsigned int _28;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.76_1 = Fee_uJobIntClrGrpIt;
  Fee_uJobIntClrIt.77_2 = Fee_uJobIntClrIt;
  # DEBUG ClrGrpIt => Fee_uJobIntClrGrpIt.76_1
  # DEBUG ClrIt => Fee_uJobIntClrIt.77_2
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _23 = (int) Fee_uJobIntClrGrpIt.76_1;
  _24 = Fee_ClrGrps[_23].ClrPtr;
  _25 = (unsigned int) Fee_uJobIntClrIt.77_2;
  _26 = _25 * 8;
  _27 = _24 + _26;
  _28 = _27->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  # DEBUG ClusterLength => _28
  # DEBUG BEGIN_STMT
  _3 = _27->StartAddr;
  ClrHdr.StartAddr = _3;
  # DEBUG BEGIN_STMT
  ClrHdr.Length = _28;
  # DEBUG BEGIN_STMT
  _4 = Fee_aClrGrpInfo[_23].ActClrID;
  _5 = _4 + 1;
  ClrHdr.ClrID = _5;
  # DEBUG BEGIN_STMT
  Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  # DEBUG BEGIN_STMT
  _6 = ClrHdr.StartAddr;
  # DEBUG TargetAddress => _6
  # DEBUG SourceAddressPtr => &Fee_aDataBuffer
  # DEBUG Length => 32
  # DEBUG INLINE_ENTRY Fee_WriteToFls
  # DEBUG BEGIN_STMT
  _13 = Fls_Write (_6, &Fee_aDataBuffer, 32);
  # DEBUG TargetAddress => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG Length => NULL
  if (_13 == 0)
    goto <bb 4>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 4> [local count: 1073741824]:
  # RetVal_11 = PHI <2(2), 1(3)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  _7 = ClrHdr.StartAddr;
  _8 = _7 + 96;
  Fee_uJobIntHdrAddr = _8;
  # DEBUG BEGIN_STMT
  _9 = ClrHdr.Length;
  _10 = _7 + _9;
  Fee_uJobIntDataAddr = _10;
  # DEBUG BEGIN_STMT
  Fee_uJobIntBlockIt = 0;
  # DEBUG BEGIN_STMT
  Fee_eJob = 16;
  # DEBUG BEGIN_STMT
  ClrHdr ={v} {CLOBBER};
  return RetVal_11;

}



;; Function Fee_DeserializeFlag (Fee_DeserializeFlag, funcdef_no=8, decl_uid=8985, cgraph_uid=10, symbol_order=30)

Modification phase of node Fee_DeserializeFlag/30
Adjusting mask for param 1 to 0x99
Setting nonnull for 0
Setting value range of param 1 [24, -127]
Setting nonnull for 2
Fee_DeserializeFlag (const uint8 * const TargetPtr, const uint8 FlagPattern, boolean * pFlagValue)
{
  Std_ReturnType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = *TargetPtr_7(D);
  if (_1 == FlagPattern_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  if (_1 == 255)
    goto <bb 4>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 4> [local count: 606019886]:
  # DEBUG BEGIN_STMT
  if (_1 == FlagPattern_8(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 206046761]:
  # DEBUG BEGIN_STMT
  *pFlagValue_10(D) = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 399973125]:
  # DEBUG BEGIN_STMT
  *pFlagValue_10(D) = 0;

  <bb 7> [local count: 606019886]:
  # DEBUG D#3 => FlagPattern_8(D)
  # DEBUG D#4 => pFlagValue_10(D)
  RetVal_2 = Fee_DeserializeFlag.part.0 (TargetPtr_7(D));

  <bb 8> [local count: 1073741824]:
  # RetVal_4 = PHI <RetVal_2(7), 1(3)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Fee_JobInvalidateBlock (Fee_JobInvalidateBlock, funcdef_no=49, decl_uid=9068, cgraph_uid=51, symbol_order=71)

Modification phase of node Fee_JobInvalidateBlock/71
Fee_JobInvalidateBlock ()
{
  MemIf_JobResultType RetVal;
  short unsigned int Fee_uJobBlockIndex.163_1;
  int _2;
  <unnamed type> _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.163_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.163_1;
  _3 = Fee_aBlockInfo[_2].BlockStatus;
  if (_3 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 20;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 524845000]:
  RetVal_8 = Fee_JobInvalidateBlock.part.0 ();

  <bb 5> [local count: 1073741824]:
  # RetVal_4 = PHI <0(3), RetVal_8(4)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Fee_JobWriteBlockValidate (Fee_JobWriteBlockValidate, funcdef_no=46, decl_uid=9064, cgraph_uid=48, symbol_order=68)

Modification phase of node Fee_JobWriteBlockValidate/68
Fee_JobWriteBlockValidate ()
{
  Fls_AddressType HdrAddr;
  MemIf_JobResultType RetVal;
  short unsigned int Fee_uJobBlockIndex.166_1;
  int _2;
  long unsigned int _3;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_SerializeFlag (&Fee_aDataBuffer, 129);
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.166_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.166_1;
  _3 = Fee_aBlockInfo[_2].InvalidAddr;
  HdrAddr_7 = _3 + 4294967264;
  # DEBUG HdrAddr => HdrAddr_7
  # DEBUG BEGIN_STMT
  # DEBUG TargetAddress => HdrAddr_7
  # DEBUG SourceAddressPtr => &Fee_aDataBuffer
  # DEBUG Length => 32
  # DEBUG INLINE_ENTRY Fee_WriteToFls
  # DEBUG BEGIN_STMT
  _9 = Fls_Write (HdrAddr_7, &Fee_aDataBuffer, 32);
  # DEBUG TargetAddress => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG Length => NULL
  if (_9 == 0)
    goto <bb 4>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 4> [local count: 1073741824]:
  # RetVal_4 = PHI <2(2), 1(3)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  Fee_eJob = 5;
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Fee_JobInternalSwap (Fee_JobInternalSwap, funcdef_no=24, decl_uid=9024, cgraph_uid=26, symbol_order=46)

Modification phase of node Fee_JobInternalSwap/46
Fee_JobInternalSwap ()
{
  uint8 NextCluster;
  uint8 CurrentCluster;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.156_1;
  int _2;
  <unnamed type> Fee_eJob.157_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.156_1 = Fee_uJobIntClrGrpIt;
  _2 = (int) Fee_uJobIntClrGrpIt.156_1;
  CurrentCluster_5 = Fee_aClrGrpInfo[_2].ActClr;
  # DEBUG CurrentCluster => CurrentCluster_5
  # DEBUG BEGIN_STMT
  NextCluster_6 = Fee_GetNextClusterToSwap (CurrentCluster_5);
  # DEBUG NextCluster => NextCluster_6
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrIt = NextCluster_6;
  # DEBUG BEGIN_STMT
  Fee_eJob.157_3 = Fee_eJob;
  Fee_eJobIntOriginalJob = Fee_eJob.157_3;
  # DEBUG BEGIN_STMT
  RetVal_10 = Fee_JobInternalSwapClusterErase ();
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  return RetVal_10;

}



;; Function Fee_JobEraseImmediateBlock (Fee_JobEraseImmediateBlock, funcdef_no=51, decl_uid=9072, cgraph_uid=53, symbol_order=73)

Modification phase of node Fee_JobEraseImmediateBlock/73
Fee_JobEraseImmediateBlock ()
{
  MemIf_JobResultType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _1 = Fee_ReservedAreaWritable ();
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334800]:
  RetVal_3 = Fee_JobEraseImmediateBlock.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 20;

  <bb 5> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_3(3), 0(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fee_JobWriteBlock (Fee_JobWriteBlock, funcdef_no=44, decl_uid=9060, cgraph_uid=46, symbol_order=66)

Modification phase of node Fee_JobWriteBlock/66
Fee_JobWriteBlock ()
{
  MemIf_JobResultType RetVal;
  <unnamed type> Fee_eJob.177_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RetVal_5 = Fee_JobWriteHdr ();
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  Fee_eJob.177_1 = Fee_eJob;
  if (Fee_eJob.177_1 == 15)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 2;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Fee_JobInternalSwapClusterVldDone (Fee_JobInternalSwapClusterVldDone, funcdef_no=41, decl_uid=9054, cgraph_uid=43, symbol_order=63)

Modification phase of node Fee_JobInternalSwapClusterVldDone/63
Fee_JobInternalSwapClusterVldDone ()
{
  uint16 BlockSize;
  uint16 BlockSize;
  uint8 BlockClusterGrp;
  uint16 AlignedBlockSize;
  Fls_AddressType DataAddrIt;
  Fls_AddressType HdrAddrIt;
  uint16 BlockIt;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.20_1;
  int _2;
  const struct Fee_ClusterType * _3;
  unsigned char Fee_uJobIntClrIt.21_4;
  unsigned int _5;
  unsigned int _6;
  const struct Fee_ClusterType * _7;
  <unnamed type> _10;
  long unsigned int _11;
  <unnamed type> _12;
  long unsigned int _13;
  <unnamed type> _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  <unnamed type> Fee_eJobIntOriginalJob.31_18;
  unsigned char _19;
  long unsigned int _34;
  int _58;

  <bb 2> [local count: 89442694]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.20_1 = Fee_uJobIntClrGrpIt;
  _2 = (int) Fee_uJobIntClrGrpIt.20_1;
  _3 = Fee_ClrGrps[_2].ClrPtr;
  Fee_uJobIntClrIt.21_4 = Fee_uJobIntClrIt;
  _5 = (unsigned int) Fee_uJobIntClrIt.21_4;
  _6 = _5 * 8;
  _7 = _3 + _6;
  HdrAddrIt_33 = _7->StartAddr;
  # DEBUG HdrAddrIt => HdrAddrIt_33
  # DEBUG BEGIN_STMT
  # DEBUG ClrGrpIt => Fee_uJobIntClrGrpIt.20_1
  # DEBUG ClrIt => Fee_uJobIntClrIt.21_4
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _34 = _7->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  DataAddrIt_35 = HdrAddrIt_33 + _34;
  # DEBUG DataAddrIt => DataAddrIt_35
  # DEBUG BEGIN_STMT
  HdrAddrIt_36 = HdrAddrIt_33 + 96;
  # DEBUG HdrAddrIt => HdrAddrIt_36
  # DEBUG BEGIN_STMT
  # DEBUG BlockIt => 0
  goto <bb 15>; [100.00%]

  <bb 3> [local count: 984299131]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => BlockIt_20
  # DEBUG INLINE_ENTRY Fee_GetBlockClusterGrp
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _58 = (int) BlockIt_20;
  BlockClusterGrp_59 = Fee_BlockConfig[_58].ClrGrp;
  # DEBUG BlockClusterGrp => BlockClusterGrp_59
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockClusterGrp => NULL
  # DEBUG BlockClusterGrp => BlockClusterGrp_59
  # DEBUG BEGIN_STMT
  if (Fee_uJobIntClrGrpIt.20_1 == BlockClusterGrp_59)
    goto <bb 4>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 4> [local count: 334661705]:
  # DEBUG BEGIN_STMT
  _10 = Fee_aBlockInfo[_58].BlockStatus;
  if (_10 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 167330852]:
  if (_10 == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 110438362]:
  if (_10 == 6)
    goto <bb 7>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 7> [local count: 261772385]:
  # DEBUG BEGIN_STMT
  _11 = HdrAddrIt_22 + 64;
  Fee_aBlockInfo[_58].InvalidAddr = _11;
  # DEBUG BEGIN_STMT
  _12 = Fee_aBlockInfo[_58].BlockStatus;
  if (_12 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 130886193]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => BlockIt_20
  # DEBUG INLINE_ENTRY Fee_GetBlockSize
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockSize_60 = Fee_BlockConfig[_58].BlockSize;
  # DEBUG BlockSize => BlockSize_60
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockSize => NULL
  # DEBUG BlockSize => BlockSize_60
  # DEBUG BEGIN_STMT
  AlignedBlockSize_50 = Fee_AlignToVirtualPageSize (BlockSize_60);
  # DEBUG AlignedBlockSize => AlignedBlockSize_50
  # DEBUG BEGIN_STMT
  _13 = (long unsigned int) AlignedBlockSize_50;
  DataAddrIt_51 = DataAddrIt_26 - _13;
  # DEBUG DataAddrIt => DataAddrIt_51
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_58].DataAddr = DataAddrIt_51;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 130886193]:
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_58].DataAddr = 0;

  <bb 10> [local count: 261772385]:
  # DataAddrIt_23 = PHI <DataAddrIt_51(8), DataAddrIt_26(9)>
  # DEBUG DataAddrIt => DataAddrIt_23
  # DEBUG BEGIN_STMT
  _14 = Fee_aBlockInfo[_58].BlockStatus;
  if (_14 == 6)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 89002611]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => BlockIt_20
  # DEBUG INLINE_ENTRY Fee_GetBlockSize
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockSize_61 = Fee_BlockConfig[_58].BlockSize;
  # DEBUG BlockSize => BlockSize_61
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockSize => NULL
  # DEBUG BlockSize => BlockSize_61
  # DEBUG BEGIN_STMT
  AlignedBlockSize_53 = Fee_AlignToVirtualPageSize (BlockSize_61);
  # DEBUG AlignedBlockSize => AlignedBlockSize_53
  # DEBUG BEGIN_STMT
  _15 = (long unsigned int) AlignedBlockSize_53;
  DataAddrIt_54 = DataAddrIt_23 - _15;
  # DEBUG DataAddrIt => DataAddrIt_54
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_58].BlockStatus = 2;

  <bb 12> [local count: 261772385]:
  # DataAddrIt_24 = PHI <DataAddrIt_23(10), DataAddrIt_54(11)>
  # DEBUG DataAddrIt => DataAddrIt_24
  # DEBUG BEGIN_STMT
  HdrAddrIt_56 = HdrAddrIt_22 + 96;
  # DEBUG HdrAddrIt => HdrAddrIt_56
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 72889319]:
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_58].DataAddr = 0;
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[_58].InvalidAddr = 0;

  <bb 14> [local count: 984299131]:
  # HdrAddrIt_21 = PHI <HdrAddrIt_22(3), HdrAddrIt_56(12), HdrAddrIt_22(13)>
  # DataAddrIt_25 = PHI <DataAddrIt_26(3), DataAddrIt_24(12), DataAddrIt_26(13)>
  # DEBUG DataAddrIt => DataAddrIt_25
  # DEBUG HdrAddrIt => HdrAddrIt_21
  # DEBUG BEGIN_STMT
  BlockIt_57 = BlockIt_20 + 1;
  # DEBUG BlockIt => BlockIt_57

  <bb 15> [local count: 1073741824]:
  # BlockIt_20 = PHI <0(2), BlockIt_57(14)>
  # HdrAddrIt_22 = PHI <HdrAddrIt_36(2), HdrAddrIt_21(14)>
  # DataAddrIt_26 = PHI <DataAddrIt_35(2), DataAddrIt_25(14)>
  # DEBUG DataAddrIt => DataAddrIt_26
  # DEBUG HdrAddrIt => HdrAddrIt_22
  # DEBUG BlockIt => BlockIt_20
  # DEBUG BEGIN_STMT
  if (BlockIt_20 != 11)
    goto <bb 3>; [91.67%]
  else
    goto <bb 16>; [8.33%]

  <bb 16> [local count: 89442694]:
  # HdrAddrIt_8 = PHI <HdrAddrIt_22(15)>
  # DataAddrIt_9 = PHI <DataAddrIt_26(15)>
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_2].ActClr = Fee_uJobIntClrIt.21_4;
  # DEBUG BEGIN_STMT
  _16 = Fee_aClrGrpInfo[_2].ActClrID;
  _17 = _16 + 1;
  Fee_aClrGrpInfo[_2].ActClrID = _17;
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_2].HdrAddrIt = HdrAddrIt_8;
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_2].DataAddrIt = DataAddrIt_9;
  # DEBUG BEGIN_STMT
  Fee_eJobIntOriginalJob.31_18 = Fee_eJobIntOriginalJob;
  if (Fee_eJobIntOriginalJob.31_18 == 10)
    goto <bb 17>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 17> [local count: 30410516]:
  # DEBUG BEGIN_STMT
  _19 = Fee_uJobIntClrGrpIt.20_1 + 1;
  Fee_uJobIntClrGrpIt = _19;

  <bb 18> [local count: 89442694]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 2;
  # DEBUG BEGIN_STMT
  Fee_eJob = Fee_eJobIntOriginalJob.31_18;
  # DEBUG BEGIN_STMT
  RetVal_45 = Fee_JobScheduleAfterSwapClusterVldDone ();
  # DEBUG RetVal => RetVal_45
  # DEBUG BEGIN_STMT
  return RetVal_45;

}



;; Function Fee_JobInternalScanBlockHdrParse (Fee_JobInternalScanBlockHdrParse, funcdef_no=32, decl_uid=9036, cgraph_uid=34, symbol_order=54)

Modification phase of node Fee_JobInternalScanBlockHdrParse/54
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [0, 1]
Fee_JobInternalScanBlockHdrParse (const boolean BufferValid)
{
  uint16 BlockIndex;
  Fls_AddressType DataAddr;
  struct Fee_BlockType BlockHder;
  Fee_BlockStatusType BlockStatus;
  MemIf_JobResultType RetVal;
  long unsigned int Fee_uJobIntAddrIt.81_1;
  long unsigned int _2;
  unsigned char Fee_uJobIntClrGrpIt.82_3;
  int _4;
  unsigned char bSwapToBePerformed.84_5;
  long unsigned int Fee_uJobIntAddrIt.85_6;
  unsigned char Fee_uJobIntClrGrpIt.86_7;
  int _8;
  long unsigned int _9;
  unsigned char Fee_uJobIntClrGrpIt.87_10;
  unsigned char _11;
  short unsigned int _12;
  long unsigned int DataAddr.89_13;
  unsigned char _14;
  long unsigned int Fee_uJobIntAddrIt.91_15;
  long unsigned int _16;
  unsigned char Fee_uJobIntClrGrpIt.92_17;
  int _18;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => 65535
  # DEBUG BEGIN_STMT
  BlockStatus_25 = Fee_DeserializeBlockHdr (&BlockHder, &DataAddr, &Fee_aDataBuffer);
  # DEBUG BlockStatus => BlockStatus_25
  # DEBUG BEGIN_STMT
  if (BlockStatus_25 == 3)
    goto <bb 4>; [20.24%]
  else
    goto <bb 3>; [79.76%]

  <bb 3> [local count: 856416478]:
  if (BufferValid_26(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 645533585]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex = 65535;
  # DEBUG BEGIN_STMT
  Fee_uJobIntAddrIt.81_1 = Fee_uJobIntAddrIt;
  _2 = Fee_uJobIntAddrIt.81_1 + 96;
  Fee_uJobIntAddrIt = _2;
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.82_3 = Fee_uJobIntClrGrpIt;
  _4 = (int) Fee_uJobIntClrGrpIt.82_3;
  Fee_aClrGrpInfo[_4].HdrAddrIt = _2;
  # DEBUG BEGIN_STMT
  bSwapToBePerformed = 1;
  # DEBUG BEGIN_STMT
  RetVal_44 = Fee_JobInternalScanBlockHdrRead ();
  # DEBUG RetVal => RetVal_44
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 428208239]:
  # DEBUG BEGIN_STMT
  if (BlockStatus_25 == 5)
    goto <bb 6>; [51.12%]
  else
    goto <bb 9>; [48.88%]

  <bb 6> [local count: 218900052]:
  # DEBUG BEGIN_STMT
  bSwapToBePerformed.84_5 = bSwapToBePerformed;
  if (bSwapToBePerformed.84_5 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 74426018]:
  # DEBUG BEGIN_STMT
  bSwapToBePerformed = 0;
  # DEBUG BEGIN_STMT
  Fee_uJobIntAddrIt.85_6 = Fee_uJobIntAddrIt;
  Fee_uJobIntClrGrpIt.86_7 = Fee_uJobIntClrGrpIt;
  _8 = (int) Fee_uJobIntClrGrpIt.86_7;
  _9 = Fee_uJobIntAddrIt.85_6 + 192;
  Fee_aClrGrpInfo[_8].DataAddrIt = _9;

  <bb 8> [local count: 218900052]:
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.87_10 = Fee_uJobIntClrGrpIt;
  _11 = Fee_uJobIntClrGrpIt.87_10 + 1;
  Fee_uJobIntClrGrpIt = _11;
  # DEBUG BEGIN_STMT
  RetVal_38 = Fee_JobInternalScanCluster ();
  # DEBUG RetVal => RetVal_38
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 209308187]:
  # DEBUG BEGIN_STMT
  _12 = BlockHder.BlockNumber;
  BlockIndex_27 = Fee_GetBlockIndex (_12);
  # DEBUG BlockIndex => BlockIndex_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DataAddr.89_13 = DataAddr;
  _14 = Fee_IsBlockMatchedConfig (BlockIndex_27, 65535, &BlockHder, DataAddr.89_13);
  if (_14 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 42363977]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => BlockIndex_27
  # DEBUG BEGIN_STMT
  # DEBUG D#18 => BlockHder.ImmediateBlock
  # DEBUG D#15 => D#18
  Fee_UpdateBlockRuntimeInfo.isra.0 (BlockIndex_27, BlockStatus_25, DataAddr.89_13);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 166944210]:
  # DEBUG BEGIN_STMT
  bSwapToBePerformed = 1;

  <bb 12> [local count: 209308187]:
  # DEBUG BEGIN_STMT
  Fee_uJobIntAddrIt.91_15 = Fee_uJobIntAddrIt;
  _16 = Fee_uJobIntAddrIt.91_15 + 96;
  Fee_uJobIntAddrIt = _16;
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.92_17 = Fee_uJobIntClrGrpIt;
  _18 = (int) Fee_uJobIntClrGrpIt.92_17;
  Fee_aClrGrpInfo[_18].HdrAddrIt = _16;
  # DEBUG BEGIN_STMT
  RetVal_33 = Fee_JobInternalScanBlockHdrRead ();
  # DEBUG RetVal => RetVal_33

  <bb 13> [local count: 1073741824]:
  # RetVal_19 = PHI <RetVal_44(4), RetVal_38(8), RetVal_33(12)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  BlockHder ={v} {CLOBBER};
  DataAddr ={v} {CLOBBER};
  return RetVal_19;

}



;; Function Fee_JobInternalScanBlockHdrParse_Wrapper (Fee_JobInternalScanBlockHdrParse_Wrapper, funcdef_no=1, decl_uid=9112, cgraph_uid=3, symbol_order=22)

Modification phase of node Fee_JobInternalScanBlockHdrParse_Wrapper/22
Fee_JobInternalScanBlockHdrParse_Wrapper ()
{
  MemIf_JobResultType _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 = Fee_JobInternalScanBlockHdrParse (1);
  return _3;

}



;; Function Fee_JobInternalScanClusterFmt (Fee_JobInternalScanClusterFmt, funcdef_no=28, decl_uid=9032, cgraph_uid=30, symbol_order=50)

Modification phase of node Fee_JobInternalScanClusterFmt/50
Fee_JobInternalScanClusterFmt ()
{
  struct Fee_ClusterHeaderType ClrHdr;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.115_1;
  unsigned char Fee_uJobIntClrIt.116_2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _7;
  int _15;
  const struct Fee_ClusterType * _16;
  unsigned int _17;
  unsigned int _18;
  const struct Fee_ClusterType * _19;
  long unsigned int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.115_1 = Fee_uJobIntClrGrpIt;
  Fee_uJobIntClrIt.116_2 = Fee_uJobIntClrIt;
  # DEBUG ClrGrpIt => Fee_uJobIntClrGrpIt.115_1
  # DEBUG ClrIt => Fee_uJobIntClrIt.116_2
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _15 = (int) Fee_uJobIntClrGrpIt.115_1;
  _16 = Fee_ClrGrps[_15].ClrPtr;
  _17 = (unsigned int) Fee_uJobIntClrIt.116_2;
  _18 = _17 * 8;
  _19 = _16 + _18;
  _20 = _19->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  # DEBUG ClusterLength => _20
  # DEBUG BEGIN_STMT
  _3 = _19->StartAddr;
  ClrHdr.StartAddr = _3;
  # DEBUG BEGIN_STMT
  ClrHdr.Length = _20;
  # DEBUG BEGIN_STMT
  ClrHdr.ClrID = 1;
  # DEBUG BEGIN_STMT
  Fee_SerializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  # DEBUG BEGIN_STMT
  Fee_SerializeFlag (&Fee_aDataBuffer[32], 129);
  # DEBUG BEGIN_STMT
  _4 = ClrHdr.StartAddr;
  # DEBUG TargetAddress => _4
  # DEBUG SourceAddressPtr => &Fee_aDataBuffer
  # DEBUG Length => 64
  # DEBUG INLINE_ENTRY Fee_WriteToFls
  # DEBUG BEGIN_STMT
  _7 = Fls_Write (_4, &Fee_aDataBuffer, 64);
  # DEBUG TargetAddress => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG Length => NULL
  if (_7 == 0)
    goto <bb 4>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 4> [local count: 1073741824]:
  # RetVal_5 = PHI <2(2), 1(3)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  Fee_eJob = 13;
  # DEBUG BEGIN_STMT
  ClrHdr ={v} {CLOBBER};
  return RetVal_5;

}



;; Function Fee_JobInternalScanClusterHdrParse (Fee_JobInternalScanClusterHdrParse, funcdef_no=36, decl_uid=9044, cgraph_uid=38, symbol_order=58)

Modification phase of node Fee_JobInternalScanClusterHdrParse/58
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [0, 1]
Fee_JobInternalScanClusterHdrParse (const boolean BufferValid)
{
  boolean bScanClusterDone;
  struct Fee_ClusterHeaderType ClrHdr;
  Fls_AddressType CfgStartAddr;
  Fee_ClusterStatusType ClrStatus;
  MemIf_JobResultType RetVal;
  unsigned char Fee_uJobIntClrGrpIt.119_1;
  int _2;
  const struct Fee_ClusterType * _3;
  unsigned char Fee_uJobIntClrIt.120_4;
  unsigned int _5;
  unsigned int _6;
  const struct Fee_ClusterType * _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG bScanClusterDone => 0
  # DEBUG BEGIN_STMT
  ClrStatus_17 = Fee_DeserializeClusterHdr (&ClrHdr, &Fee_aDataBuffer);
  # DEBUG ClrStatus => ClrStatus_17
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.119_1 = Fee_uJobIntClrGrpIt;
  _2 = (int) Fee_uJobIntClrGrpIt.119_1;
  _3 = Fee_ClrGrps[_2].ClrPtr;
  Fee_uJobIntClrIt.120_4 = Fee_uJobIntClrIt;
  _5 = (unsigned int) Fee_uJobIntClrIt.120_4;
  _6 = _5 * 8;
  _7 = _3 + _6;
  CfgStartAddr_18 = _7->StartAddr;
  # DEBUG CfgStartAddr => CfgStartAddr_18
  # DEBUG BEGIN_STMT
  # DEBUG ClrGrpIt => Fee_uJobIntClrGrpIt.119_1
  # DEBUG ClrIt => Fee_uJobIntClrIt.120_4
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _29 = _7->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  # DEBUG CfgClrSize => _29
  # DEBUG BEGIN_STMT
  if (BufferValid_19(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (ClrStatus_17 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 4> [local count: 182536110]:
  _8 = ClrHdr.StartAddr;
  if (_8 == CfgStartAddr_18)
    goto <bb 5>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 5> [local count: 62062277]:
  _9 = ClrHdr.Length;
  if (_9 == _29)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 21101174]:
  # DEBUG BEGIN_STMT
  _10 = ClrHdr.ClrID;
  _11 = Fee_aClrGrpInfo[_2].ActClrID;
  if (_10 > _11)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 10550587]:
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_2].ActClr = Fee_uJobIntClrIt.120_4;
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[_2].ActClrID = _10;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  bScanClusterDone_23 = Fee_JobInternalScanClusterHdrDone ();
  # DEBUG bScanClusterDone => bScanClusterDone_23
  # DEBUG BEGIN_STMT
  if (bScanClusterDone_23 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  RetVal_27 = Fee_JobInternalScanCluster ();
  # DEBUG RetVal => RetVal_27
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  RetVal_25 = Fee_JobInternalScanClusterHdrRead ();
  # DEBUG RetVal => RetVal_25

  <bb 11> [local count: 1073741824]:
  # RetVal_12 = PHI <RetVal_27(9), RetVal_25(10)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  ClrHdr ={v} {CLOBBER};
  return RetVal_12;

}



;; Function Fee_JobInternalScanClusterHdrParse_Wrapper (Fee_JobInternalScanClusterHdrParse_Wrapper, funcdef_no=0, decl_uid=9110, cgraph_uid=2, symbol_order=21)

Modification phase of node Fee_JobInternalScanClusterHdrParse_Wrapper/21
Fee_JobInternalScanClusterHdrParse_Wrapper ()
{
  MemIf_JobResultType _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 = Fee_JobInternalScanClusterHdrParse (1);
  return _3;

}



;; Function Fee_JobWriteBlockUnalignedData (Fee_JobWriteBlockUnalignedData, funcdef_no=45, decl_uid=9062, cgraph_uid=47, symbol_order=67)

Modification phase of node Fee_JobWriteBlockUnalignedData/67
Fee_JobWriteBlockUnalignedData ()
{
  uint16 BlockSize;
  uint16 WriteLength;
  uint16 WriteOffset;
  Fls_AddressType DataAddr;
  MemIf_JobResultType RetVal;
  short unsigned int Fee_uJobBlockIndex.167_1;
  int _2;
  const uint8 * Fee_pJobWriteDataDestPtr.168_3;
  sizetype _4;
  const uint8 * _5;
  short unsigned int Fee_uJobBlockIndex.169_6;
  int _7;
  long unsigned int _8;
  unsigned char _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.167_1 = Fee_uJobBlockIndex;
  _2 = (int) Fee_uJobBlockIndex.167_1;
  BlockSize_11 = Fee_BlockConfig[_2].BlockSize;
  # DEBUG BlockSize => BlockSize_11
  # DEBUG BEGIN_STMT
  WriteOffset_12 = BlockSize_11 & 65504;
  # DEBUG WriteOffset => WriteOffset_12
  # DEBUG BEGIN_STMT
  WriteLength_13 = BlockSize_11 & 31;
  # DEBUG WriteLength => WriteLength_13
  # DEBUG BEGIN_STMT
  Fee_pJobWriteDataDestPtr.168_3 = Fee_pJobWriteDataDestPtr;
  _4 = (sizetype) WriteOffset_12;
  _5 = Fee_pJobWriteDataDestPtr.168_3 + _4;
  Fee_CopyDataToPageBuffer (_5, &Fee_aDataBuffer, WriteLength_13);
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex.169_6 = Fee_uJobBlockIndex;
  _7 = (int) Fee_uJobBlockIndex.169_6;
  DataAddr_15 = Fee_aBlockInfo[_7].DataAddr;
  # DEBUG DataAddr => DataAddr_15
  # DEBUG BEGIN_STMT
  _8 = _4 + DataAddr_15;
  # DEBUG TargetAddress => _8
  # DEBUG SourceAddressPtr => &Fee_aDataBuffer
  # DEBUG Length => 32
  # DEBUG INLINE_ENTRY Fee_WriteToFls
  # DEBUG BEGIN_STMT
  _17 = Fls_Write (_8, &Fee_aDataBuffer, 32);
  # DEBUG TargetAddress => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG Length => NULL
  if (_17 == 0)
    goto <bb 4>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 4> [local count: 1073741824]:
  # RetVal_9 = PHI <2(2), 1(3)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  Fee_eJob = 4;
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function Fee_JobInternalSwapBlock (Fee_JobInternalSwapBlock, funcdef_no=20, decl_uid=9018, cgraph_uid=22, symbol_order=42)

Modification phase of node Fee_JobInternalSwapBlock/42
Fee_JobInternalSwapBlock ()
{
  uint16 BlockSize;
  boolean Immediate;
  uint16 BlockNumber;
  uint8 BlockClusterGrp;
  uint16 AlignedBlockSize;
  struct Fee_BlockType BlockHder;
  Fls_AddressType DataAddr;
  MemIf_JobResultType RetVal;
  short unsigned int Fee_uJobIntBlockIt.62_1;
  unsigned char Fee_uJobIntClrGrpIt.56_2;
  <unnamed type> _3;
  short unsigned int _4;
  short unsigned int Fee_uJobIntBlockIt.62_5;
  <unnamed type> _6;
  long unsigned int Fee_uJobIntDataAddr.68_7;
  long unsigned int _8;
  short unsigned int Fee_uJobIntBlockIt.69_9;
  int _10;
  <unnamed type> _11;
  short unsigned int _12;
  long unsigned int Fee_uJobIntHdrAddr.72_13;
  long unsigned int Fee_uJobIntHdrAddr.73_14;
  long unsigned int _15;
  int _30;
  int _44;
  unsigned char _46;

  <bb 2> [local count: 58020002]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 1044213924]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobIntBlockIt.62_5
  # DEBUG INLINE_ENTRY Fee_GetBlockClusterGrp
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _30 = (int) Fee_uJobIntBlockIt.62_5;
  BlockClusterGrp_28 = Fee_BlockConfig[_30].ClrGrp;
  # DEBUG BlockClusterGrp => BlockClusterGrp_28
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockClusterGrp => NULL
  # DEBUG BlockClusterGrp => BlockClusterGrp_28
  # DEBUG BEGIN_STMT
  Fee_uJobIntClrGrpIt.56_2 = Fee_uJobIntClrGrpIt;
  if (Fee_uJobIntClrGrpIt.56_2 == BlockClusterGrp_28)
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 355032734]:
  _3 = Fee_aBlockInfo[_30].BlockStatus;
  if (_3 == 0)
    goto <bb 9>; [2.75%]
  else
    goto <bb 5>; [97.25%]

  <bb 5> [local count: 345269334]:
  if (_3 == 2)
    goto <bb 9>; [2.75%]
  else
    goto <bb 6>; [97.25%]

  <bb 6> [local count: 335774427]:
  if (_3 == 6)
    goto <bb 9>; [2.75%]
  else
    goto <bb 7>; [97.25%]

  <bb 7> [local count: 1015721822]:
  # DEBUG BEGIN_STMT
  _4 = Fee_uJobIntBlockIt.62_5 + 1;
  Fee_uJobIntBlockIt = _4;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_uJobIntBlockIt.62_5 = Fee_uJobIntBlockIt;
  if (Fee_uJobIntBlockIt.62_5 <= 10)
    goto <bb 3>; [97.25%]
  else
    goto <bb 9>; [2.75%]

  <bb 9> [local count: 58020004]:
  # Fee_uJobIntBlockIt.62_1 = PHI <Fee_uJobIntBlockIt.62_5(4), Fee_uJobIntBlockIt.62_5(5), Fee_uJobIntBlockIt.62_5(6), Fee_uJobIntBlockIt.62_5(8)>
  # DEBUG BEGIN_STMT
  if (Fee_uJobIntBlockIt.62_1 == 11)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 11743249]:
  # DEBUG BEGIN_STMT
  RetVal_41 = Fee_JobInternalSwapClusterVld ();
  # DEBUG RetVal => RetVal_41
  goto <bb 19>; [100.00%]

  <bb 11> [local count: 46276755]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobIntBlockIt.62_1
  # DEBUG INLINE_ENTRY Fee_GetBlockSize
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _44 = (int) Fee_uJobIntBlockIt.62_1;
  BlockSize_45 = Fee_BlockConfig[_44].BlockSize;
  # DEBUG BlockSize => BlockSize_45
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockSize => NULL
  BlockHder.Length = BlockSize_45;
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobIntBlockIt.62_1
  # DEBUG INLINE_ENTRY Fee_GetBlockImmediate
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Immediate_43 = Fee_BlockConfig[_44].ImmediateData;
  # DEBUG Immediate => Immediate_43
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG Immediate => NULL
  BlockHder.ImmediateBlock = Immediate_43;
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => Fee_uJobIntBlockIt.62_1
  # DEBUG INLINE_ENTRY Fee_GetBlockNumber
  # DEBUG BEGIN_STMT
  # DEBUG BlockNumber => 0
  # DEBUG BEGIN_STMT
  BlockNumber_25 = Fee_BlockConfig[_44].BlockNumber;
  # DEBUG BlockNumber => BlockNumber_25
  # DEBUG BEGIN_STMT
  # DEBUG BlockRuntimeInfoIndex => NULL
  # DEBUG BlockNumber => NULL
  BlockHder.BlockNumber = BlockNumber_25;
  # DEBUG BEGIN_STMT
  _6 = Fee_aBlockInfo[_44].BlockStatus;
  if (_6 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 23138378]:
  # DEBUG BEGIN_STMT
  AlignedBlockSize_31 = Fee_AlignToVirtualPageSize (BlockSize_45);
  # DEBUG AlignedBlockSize => AlignedBlockSize_31
  # DEBUG BEGIN_STMT
  Fee_uJobIntDataAddr.68_7 = Fee_uJobIntDataAddr;
  _8 = (long unsigned int) AlignedBlockSize_31;
  DataAddr_32 = Fee_uJobIntDataAddr.68_7 - _8;
  # DEBUG DataAddr => DataAddr_32
  # DEBUG BEGIN_STMT
  Fee_uJobIntDataAddr = DataAddr_32;
  # DEBUG BEGIN_STMT
  Fee_uJobIntAddrIt = DataAddr_32;

  <bb 13> [local count: 46276755]:
  # DataAddr_18 = PHI <DataAddr_32(12), 0(11)>
  # DEBUG DataAddr => DataAddr_18
  # DEBUG BEGIN_STMT
  Fee_SerializeBlockHdr (&BlockHder, DataAddr_18, &Fee_aDataBuffer);
  # DEBUG BEGIN_STMT
  Fee_uJobIntBlockIt.69_9 = Fee_uJobIntBlockIt;
  _10 = (int) Fee_uJobIntBlockIt.69_9;
  _11 = Fee_aBlockInfo[_10].BlockStatus;
  if (_11 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 23138378]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 17;
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 23138378]:
  # DEBUG BEGIN_STMT
  _12 = Fee_uJobIntBlockIt.69_9 + 1;
  Fee_uJobIntBlockIt = _12;
  # DEBUG BEGIN_STMT
  Fee_eJob = 16;

  <bb 16> [local count: 46276755]:
  # DEBUG BEGIN_STMT
  Fee_uJobIntHdrAddr.72_13 = Fee_uJobIntHdrAddr;
  # DEBUG TargetAddress => Fee_uJobIntHdrAddr.72_13
  # DEBUG SourceAddressPtr => &Fee_aDataBuffer
  # DEBUG Length => 32
  # DEBUG INLINE_ENTRY Fee_WriteToFls
  # DEBUG BEGIN_STMT
  _46 = Fls_Write (Fee_uJobIntHdrAddr.72_13, &Fee_aDataBuffer, 32);
  # DEBUG TargetAddress => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG Length => NULL
  if (_46 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 17> [local count: 23138378]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2

  <bb 18> [local count: 46276755]:
  # RetVal_16 = PHI <1(16), 2(17)>
  # DEBUG RetVal => RetVal_16
  # DEBUG BEGIN_STMT
  Fee_uJobIntHdrAddr.73_14 = Fee_uJobIntHdrAddr;
  _15 = Fee_uJobIntHdrAddr.73_14 + 96;
  Fee_uJobIntHdrAddr = _15;

  <bb 19> [local count: 58020004]:
  # RetVal_17 = PHI <RetVal_41(10), RetVal_16(18)>
  # DEBUG RetVal => RetVal_17
  # DEBUG BEGIN_STMT
  BlockHder ={v} {CLOBBER};
  return RetVal_17;

}



;; Function Fee_JobInternalSwapDataRead_Wrapper (Fee_JobInternalSwapDataRead_Wrapper, funcdef_no=2, decl_uid=9114, cgraph_uid=4, symbol_order=23)

Modification phase of node Fee_JobInternalSwapDataRead_Wrapper/23
Fee_JobInternalSwapDataRead_Wrapper ()
{
  MemIf_JobResultType _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 = Fee_JobInternalSwapDataRead (1);
  return _3;

}



;; Function Fee_Init (Fee_Init, funcdef_no=60, decl_uid=8541, cgraph_uid=62, symbol_order=82)

Modification phase of node Fee_Init/82
Fee_Init (const struct Fee_ConfigType * ConfigPtr)
{
  uint32 InvalIndex;
  unsigned char Fee_eModuleStatus.0_1;

  <bb 2> [local count: 582502616]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ConfigPtr_7(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 4>; [46.53%]

  <bb 3> [local count: 311464148]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 0, 9);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 271038467]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.0_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.0_1 == 2)
    goto <bb 5>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 89442694]:
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 181595773]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 0, 6);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 984299131]:
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[InvalIndex_2].BlockStatus = 1;
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[InvalIndex_2].DataAddr = 0;
  # DEBUG BEGIN_STMT
  Fee_aBlockInfo[InvalIndex_2].InvalidAddr = 0;
  # DEBUG BEGIN_STMT
  InvalIndex_15 = InvalIndex_2 + 1;
  # DEBUG InvalIndex => InvalIndex_15

  <bb 7> [local count: 1073741824]:
  # InvalIndex_2 = PHI <InvalIndex_15(6), 0(13)>
  # DEBUG InvalIndex => InvalIndex_2
  # DEBUG BEGIN_STMT
  if (InvalIndex_2 != 11)
    goto <bb 6>; [91.67%]
  else
    goto <bb 12>; [8.33%]

  <bb 12> [local count: 89442694]:
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 89442694]:
  # DEBUG BEGIN_STMT
  Fee_aClrGrpInfo[0].ActClrID = 0;
  # DEBUG BEGIN_STMT
  # DEBUG InvalIndex => 1

  <bb 9> [local count: 178885388]:
  # InvalIndex_3 = PHI <1(8), 0(12)>
  # DEBUG InvalIndex => InvalIndex_3
  # DEBUG BEGIN_STMT
  if (InvalIndex_3 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 89442694]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 9;
  # DEBUG BEGIN_STMT
  Fee_eJobResult = 2;

  <bb 11> [local count: 582502615]:
  return;

}



;; Function Fee_SetMode (Fee_SetMode, funcdef_no=61, decl_uid=8543, cgraph_uid=63, symbol_order=83)

Modification phase of node Fee_SetMode/83
Fee_SetMode (MemIf_ModeType Mode)
{
  unsigned char Fee_eModuleStatus.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.1_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.1_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 1, 1);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.1_1 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 1, 6);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  Fee_eJob = 21;
  # DEBUG BEGIN_STMT
  Fee_eMode = Mode_5(D);
  # DEBUG BEGIN_STMT
  Fee_eJobResult = 2;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Fee_Read (Fee_Read, funcdef_no=62, decl_uid=8548, cgraph_uid=64, symbol_order=84)

Modification phase of node Fee_Read/84
Fee_Read (uint16 BlockNumber, uint16 BlockOffset, uint8 * DataBufferPtr, uint16 Length)
{
  uint16 BlockIndex;
  Std_ReturnType RetVal;
  unsigned char Fee_eModuleStatus.3_1;
  int _2;
  short unsigned int _3;
  int _4;
  int _5;
  int _6;
  int _7;
  long unsigned int _8;
  long unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG bCheck => 0
  # DEBUG BEGIN_STMT
  BlockIndex_14 = Fee_GetBlockIndex (BlockNumber_13(D));
  # DEBUG BlockIndex => BlockIndex_14
  # DEBUG BEGIN_STMT
  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.3_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.3_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 2, 1);
  # DEBUG bCheck => 0
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.3_1 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 2, 6);
  # DEBUG bCheck => 0
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  if (BlockIndex_14 == 65535)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 116136926]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 2, 2);
  # DEBUG bCheck => 0
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 8> [local count: 457662114]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_14;
  _3 = Fee_BlockConfig[_2].BlockSize;
  if (_3 <= BlockOffset_16(D))
    goto <bb 10>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 9> [local count: 306633616]:
  # DEBUG bCheck => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Length_21(D) == 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 151028498]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 2, 3);
  # DEBUG bCheck => 0
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 205444523]:
  _4 = (int) BlockOffset_16(D);
  _5 = (int) Length_21(D);
  _6 = _4 + _5;
  _7 = (int) _3;
  if (_6 > _7)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 203911355]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 2, 5);
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 102722261]:
  # DEBUG BEGIN_STMT
  if (DataBufferPtr_22(D) == 0B)
    goto <bb 14>; [17.43%]
  else
    goto <bb 15>; [82.57%]

  <bb 14> [local count: 17904490]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 2, 4);
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 84817771]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex = BlockIndex_14;
  # DEBUG BEGIN_STMT
  _8 = (long unsigned int) BlockOffset_16(D);
  Fee_uJobBlockOffset = _8;
  # DEBUG BEGIN_STMT
  _9 = (long unsigned int) Length_21(D);
  Fee_uJobBlockLength = _9;
  # DEBUG BEGIN_STMT
  Fee_pJobReadDataDestPtr = DataBufferPtr_22(D);
  # DEBUG BEGIN_STMT
  Fee_eJob = 0;
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 2;
  # DEBUG BEGIN_STMT
  Fee_eJobResult = 2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 16> [local count: 1073741824]:
  # RetVal_10 = PHI <1(5), 1(12), 1(14), 0(15), 1(3), 1(10), 1(7)>
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  return RetVal_10;

}



;; Function Fee_Write (Fee_Write, funcdef_no=63, decl_uid=8551, cgraph_uid=65, symbol_order=85)

Modification phase of node Fee_Write/85
Fee_Write (uint16 BlockNumber, const uint8 * DataBufferPtr)
{
  uint16 BlockIndex;
  Std_ReturnType RetVal;
  unsigned char Fee_eModuleStatus.5_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  BlockIndex_6 = Fee_GetBlockIndex (BlockNumber_5(D));
  # DEBUG BlockIndex => BlockIndex_6
  # DEBUG BEGIN_STMT
  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.5_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.5_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 3, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.5_1 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 3, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  if (BlockIndex_6 == 65535)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 116136926]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 3, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 457662114]:
  # DEBUG BEGIN_STMT
  if (DataBufferPtr_8(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 79770506]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 3, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 377891608]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex = BlockIndex_6;
  # DEBUG BEGIN_STMT
  Fee_pJobWriteDataDestPtr = DataBufferPtr_8(D);
  # DEBUG BEGIN_STMT
  Fee_eJob = 1;
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 2;
  # DEBUG BEGIN_STMT
  Fee_eJobResult = 2;

  <bb 11> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), 1(7), 1(9), 0(10)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fee_Cancel (Fee_Cancel, funcdef_no=64, decl_uid=8553, cgraph_uid=66, symbol_order=86)

Modification phase of node Fee_Cancel/86
Fee_Cancel ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 4, 10);
  return;

}



;; Function Fee_GetStatus (Fee_GetStatus, funcdef_no=65, decl_uid=8555, cgraph_uid=67, symbol_order=87)

Modification phase of node Fee_GetStatus/87
Fee_GetStatus ()
{
  MemIf_StatusType _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = Fee_eModuleStatus;
  return _2;

}



;; Function Fee_GetJobResult (Fee_GetJobResult, funcdef_no=66, decl_uid=8557, cgraph_uid=68, symbol_order=88)

Modification phase of node Fee_GetJobResult/88
Fee_GetJobResult ()
{
  MemIf_JobResultType RetVal;
  unsigned char Fee_eModuleStatus.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  RetVal_5 = Fee_eJobResult;
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.7_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.7_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 6, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 4> [local count: 1073741824]:
  # RetVal_2 = PHI <RetVal_5(2), 1(3)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fee_InvalidateBlock (Fee_InvalidateBlock, funcdef_no=67, decl_uid=8559, cgraph_uid=69, symbol_order=89)

Modification phase of node Fee_InvalidateBlock/89
Fee_InvalidateBlock (uint16 BlockNumber)
{
  uint16 BlockIndex;
  Std_ReturnType RetVal;
  unsigned char Fee_eModuleStatus.8_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  BlockIndex_6 = Fee_GetBlockIndex (BlockNumber_5(D));
  # DEBUG BlockIndex => BlockIndex_6
  # DEBUG BEGIN_STMT
  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.8_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.8_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 7, 1);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (BlockIndex_6 == 65535)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 7, 2);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.8_1 == 2)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 116136926]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 7, 6);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 457662114]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex = BlockIndex_6;
  # DEBUG BEGIN_STMT
  Fee_eJob = 6;
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 2;
  # DEBUG BEGIN_STMT
  Fee_eJobResult = 2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 9> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fee_GetVersionInfo (Fee_GetVersionInfo, funcdef_no=68, decl_uid=8561, cgraph_uid=70, symbol_order=90)

Modification phase of node Fee_GetVersionInfo/90
Fee_GetVersionInfo (struct Std_VersionInfoType * VersionInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (VersionInfoPtr_2(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 8, 4);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->moduleID = 21;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->vendorID = 43;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_major_version = 2;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_minor_version = 0;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_patch_version = 1;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Fee_EraseImmediateBlock (Fee_EraseImmediateBlock, funcdef_no=69, decl_uid=8563, cgraph_uid=71, symbol_order=91)

Modification phase of node Fee_EraseImmediateBlock/91
Fee_EraseImmediateBlock (uint16 BlockNumber)
{
  uint16 BlockIndex;
  Std_ReturnType RetVal;
  unsigned char Fee_eModuleStatus.10_1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BlockIndex_8 = Fee_GetBlockIndex (BlockNumber_7(D));
  # DEBUG BlockIndex => BlockIndex_8
  # DEBUG BEGIN_STMT
  SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_03 ();
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.10_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.10_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 9, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (BlockIndex_8 == 65535)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 9, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  _2 = (int) BlockIndex_8;
  _3 = Fee_BlockConfig[_2].ImmediateData;
  if (_3 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 189353683]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 9, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 384445357]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.10_1 == 2)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 77811740]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 9, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 306633617]:
  # DEBUG BEGIN_STMT
  Fee_uJobBlockIndex = BlockIndex_8;
  # DEBUG BEGIN_STMT
  Fee_eJob = 8;
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 2;
  # DEBUG BEGIN_STMT
  Fee_eJobResult = 2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 11> [local count: 1073741824]:
  # RetVal_4 = PHI <1(3), 1(5), 1(7), 1(9), 0(10)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_03 ();
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Fee_JobEndNotification (Fee_JobEndNotification, funcdef_no=70, decl_uid=8620, cgraph_uid=72, symbol_order=92)

Modification phase of node Fee_JobEndNotification/92
Fee_JobEndNotification ()
{
  unsigned char Fee_eModuleStatus.12_1;
  unsigned char Fee_eJobResult.13_2;
  <unnamed type> Fee_eJob.14_3;
  <unnamed type> Fee_eJob.15_4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.12_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.12_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  Fee_eJobResult.13_2 = Fee_eJobResult;
  if (Fee_eJobResult.13_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 268435456]:
  Fee_eJob.14_3 = Fee_eJob;
  if (Fee_eJob.14_3 == 20)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 16, 1);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 1019410489]:
  # DEBUG BEGIN_STMT
  Fee_eJob.15_4 = Fee_eJob;
  if (Fee_eJob.15_4 == 20)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 346599566]:
  # DEBUG BEGIN_STMT
  _5 = Fls_GetJobResult ();
  Fee_eJobResult = _5;
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_JobEndNotification ();
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 672810923]:
  # DEBUG BEGIN_STMT
  _6 = Fee_JobSchedule ();
  Fee_eJobResult = _6;
  # DEBUG BEGIN_STMT
  if (_6 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 222027604]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_JobEndNotification ();
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 450783318]:
  # DEBUG BEGIN_STMT
  if (_6 == 2)
    goto <bb 12>; [51.12%]
  else
    goto <bb 11>; [48.88%]

  <bb 11> [local count: 220342886]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_JobErrorNotification ();

  <bb 12> [local count: 1073741824]:
  return;

}



;; Function Fee_JobErrorNotification (Fee_JobErrorNotification, funcdef_no=71, decl_uid=8622, cgraph_uid=73, symbol_order=93)

Modification phase of node Fee_JobErrorNotification/93
Fee_JobErrorNotification ()
{
  unsigned char Fee_eModuleStatus.187_1;
  unsigned char Fee_eJobResult.188_2;
  <unnamed type> Fee_eJob.189_3;
  unsigned char Fee_eJobResult.190_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.187_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.187_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  Fee_eJobResult.188_2 = Fee_eJobResult;
  if (Fee_eJobResult.188_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 268435456]:
  Fee_eJob.189_3 = Fee_eJob;
  if (Fee_eJob.189_3 == 20)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 17, 1);
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 1019410489]:
  # DEBUG BEGIN_STMT
  Fee_eJobResult.190_4 = Fee_eJobResult;
  if (Fee_eJobResult.190_4 == 3)
    goto <bb 8>; [51.12%]
  else
    goto <bb 7>; [48.88%]

  <bb 7> [local count: 498287846]:
  # DEBUG BEGIN_STMT
  Fee_JobErrorSchedule ();

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Fee_MainFunction (Fee_MainFunction, funcdef_no=72, decl_uid=8922, cgraph_uid=74, symbol_order=94)

Modification phase of node Fee_MainFunction/94
Fee_MainFunction ()
{
  unsigned char Fee_eJobResult.193_1;
  <unnamed type> Fee_eJob.194_2;
  unsigned char _3;
  unsigned char Fee_eJobResult.195_4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  Fee_eJobResult.193_1 = Fee_eJobResult;
  if (Fee_eJobResult.193_1 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Fee_eJob.194_2 = Fee_eJob;
  switch (Fee_eJob.194_2) <default: <L32> [67.00%], case 0 ... 1: <L1> [33.00%], case 6: <L1> [33.00%], case 8 ... 9: <L1> [33.00%], case 21: <L1> [33.00%]>

  <bb 4> [local count: 120473832]:
<L1>:
  # DEBUG BEGIN_STMT
  _3 = Fee_JobSchedule ();
  Fee_eJobResult = _3;
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 365072220]:
<L32>:
  # DEBUG BEGIN_STMT
  Fee_eJobResult.195_4 = Fee_eJobResult;
  if (Fee_eJobResult.195_4 == 2)
    goto <bb 9>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  if (Fee_eJobResult.195_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_JobEndNotification ();
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus = 1;
  # DEBUG BEGIN_STMT
  NvM_JobErrorNotification ();

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Fee_GetRunTimeInfo (Fee_GetRunTimeInfo, funcdef_no=73, decl_uid=8566, cgraph_uid=75, symbol_order=95)

Modification phase of node Fee_GetRunTimeInfo/95
Fee_GetRunTimeInfo (uint8 ClrGrpIndex, struct Fee_ClusterGroupRuntimeInfoType * ClrGrpRTInfo)
{
  uint8 ActiveClrIndex;
  unsigned char Fee_eModuleStatus.197_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  const struct Fee_ClusterType * _22;
  unsigned int _23;
  unsigned int _24;
  const struct Fee_ClusterType * _25;
  long unsigned int _26;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.197_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.197_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 19, 1);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (ClrGrpRTInfo_10(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 19, 4);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.197_1 == 2)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 120228510]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 19, 6);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 473785868]:
  # DEBUG BEGIN_STMT
  if (ClrGrpIndex_11(D) != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 156349336]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 19, 11);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 317436532]:
  # DEBUG BEGIN_STMT
  ActiveClrIndex_12 = Fee_aClrGrpInfo[0].ActClr;
  # DEBUG ActiveClrIndex => ActiveClrIndex_12
  # DEBUG BEGIN_STMT
  # DEBUG ClrGrpIt => 0
  # DEBUG ClrIt => ActiveClrIndex_12
  # DEBUG INLINE_ENTRY Fee_GetClusterLength
  # DEBUG BEGIN_STMT
  _22 = Fee_ClrGrps[0].ClrPtr;
  _23 = (unsigned int) ActiveClrIndex_12;
  _24 = _23 * 8;
  _25 = _22 + _24;
  _26 = _25->Length;
  # DEBUG ClrGrpIt => NULL
  # DEBUG ClrIt => NULL
  ClrGrpRTInfo_10(D)->ClusterTotalSpace = _26;
  # DEBUG BEGIN_STMT
  _2 = Fee_aClrGrpInfo[0].DataAddrIt;
  _3 = Fee_aClrGrpInfo[0].HdrAddrIt;
  _4 = _2 - _3;
  _5 = _4 + 4294967200;
  ClrGrpRTInfo_10(D)->ClusterFreeSpace = _5;
  # DEBUG BEGIN_STMT
  ClrGrpRTInfo_10(D)->BlockHeaderOverhead = 96;
  # DEBUG BEGIN_STMT
  ClrGrpRTInfo_10(D)->VirtualPageSize = 32;
  # DEBUG BEGIN_STMT
  _6 = Fee_aClrGrpInfo[0].ActClrID;
  _7 = _6 + 4294967295;
  ClrGrpRTInfo_10(D)->NumberOfSwap = _7;

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Fee_ForceSwapOnNextWrite (Fee_ForceSwapOnNextWrite, funcdef_no=74, decl_uid=8568, cgraph_uid=76, symbol_order=96)

Modification phase of node Fee_ForceSwapOnNextWrite/96
Fee_ForceSwapOnNextWrite (uint8 ClrGrpIndex)
{
  Std_ReturnType RetVal;
  unsigned char Fee_eModuleStatus.199_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_eModuleStatus.199_1 = Fee_eModuleStatus;
  if (Fee_eModuleStatus.199_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 20, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Fee_eModuleStatus.199_1 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (21, 0, 20, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 573799041]:
  # DEBUG BEGIN_STMT
  if (ClrGrpIndex_7(D) != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 189353683]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (21, 0, 20, 11);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 384445357]:
  # DEBUG BEGIN_STMT
  _2 = Fee_aClrGrpInfo[0].HdrAddrIt;
  _3 = _2 + 192;
  Fee_aClrGrpInfo[0].DataAddrIt = _3;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 9> [local count: 1073741824]:
  # RetVal_4 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}


