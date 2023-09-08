
IPA constant propagation start:
Determining dynamic type for call: C40_Ip_SetSeedMisr (MisrSeedValues_47(D));
  Starting walk at: C40_Ip_SetSeedMisr (MisrSeedValues_47(D));
  instance pointer: MisrSeedValues_47(D)  Outer instance pointer: MisrSeedValues_47(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C40_Ip_UTestCheckBreakpoint (BreakPoints_41(D));
  Function call may change dynamic type:ReturnCode_33 = C40_Ip_MainInterfaceWriteJobAddress (SelectBlock_27(D), DomainIdValue_31(D));
  Function call may change dynamic type:ReturnCode_29 = C40_Ip_UTestCheckBusy ();
Determining dynamic type for call: ReturnCode_14 = C40_Ip_CheckUserTestStatusExecution (MisrExpectedValues_9(D), TestResult_10(D));
  Starting walk at: ReturnCode_14 = C40_Ip_CheckUserTestStatusExecution (MisrExpectedValues_9(D), TestResult_10(D));
  instance pointer: MisrExpectedValues_9(D)  Outer instance pointer: MisrExpectedValues_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ReturnCode_14 = C40_Ip_CheckUserTestStatusExecution (MisrExpectedValues_9(D), TestResult_10(D));
  Starting walk at: ReturnCode_14 = C40_Ip_CheckUserTestStatusExecution (MisrExpectedValues_9(D), TestResult_10(D));
  instance pointer: TestResult_10(D)  Outer instance pointer: TestResult_10(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: C40_Ip_SetSeedMisr (MisrSeedValues_41(D));
  Starting walk at: C40_Ip_SetSeedMisr (MisrSeedValues_41(D));
  instance pointer: MisrSeedValues_41(D)  Outer instance pointer: MisrSeedValues_41(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C40_Ip_UTestCheckBreakpoint (BreakPoints_39(D));
  Function call may change dynamic type:ReturnCode_29 = C40_Ip_MainInterfaceWriteJobAddress (SelectBlock_23(D), DomainIdValue_27(D));
  Function call may change dynamic type:ReturnCode_25 = C40_Ip_UTestCheckBusy ();
Determining dynamic type for call: C40_Ip_CheckLockDomainID_CheckRegister (VirtualSector_16(D), &CheckRegister, &TempLockMasterRegister);
  Starting walk at: C40_Ip_CheckLockDomainID_CheckRegister (VirtualSector_16(D), &CheckRegister, &TempLockMasterRegister);
  instance pointer: &CheckRegister  Outer instance pointer: CheckRegister offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: C40_Ip_CheckLockDomainID_CheckRegister (VirtualSector_16(D), &CheckRegister, &TempLockMasterRegister);
  Starting walk at: C40_Ip_CheckLockDomainID_CheckRegister (VirtualSector_16(D), &CheckRegister, &TempLockMasterRegister);
  instance pointer: &TempLockMasterRegister  Outer instance pointer: TempLockMasterRegister offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ReturnCode_16 = C40_Ip_Compare (C40_Ip_u32ProgrammedAddress.40_5, C40_Ip_u32ProgrammedLength.41_6, C40_Ip_pProgrammedData.42_7);
  Starting walk at: ReturnCode_16 = C40_Ip_Compare (C40_Ip_u32ProgrammedAddress.40_5, C40_Ip_u32ProgrammedLength.41_6, C40_Ip_pProgrammedData.42_7);
  instance pointer: C40_Ip_pProgrammedData.42_7  Outer instance pointer: C40_Ip_pProgrammedData.42_7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ReturnCode_12 = C40_Ip_MainInterfaceHVJobStatus ();
Determining dynamic type for call: ReturnCode_19 = C40_Ip_MainInterfaceWritePreCheck (LogicalAddress_13(D), Length_16(D), SourceAddressPtr_17(D));
  Starting walk at: ReturnCode_19 = C40_Ip_MainInterfaceWritePreCheck (LogicalAddress_13(D), Length_16(D), SourceAddressPtr_17(D));
  instance pointer: SourceAddressPtr_17(D)  Outer instance pointer: SourceAddressPtr_17(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ReturnCode_21 = C40_Ip_Compare (LogicalAddress_13(D), Length_16(D), 0B);
  Starting walk at: ReturnCode_21 = C40_Ip_Compare (LogicalAddress_13(D), Length_16(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ReturnCode_19 = C40_Ip_MainInterfaceWritePreCheck (LogicalAddress_13(D), Length_16(D), SourceAddressPtr_17(D));
Determining dynamic type for call: C40_Ip_MainInterfaceFillDataBuff (LocationWriteDataRegs_30, SourceAddressPtr_17(D), Length_16(D));
  Starting walk at: C40_Ip_MainInterfaceFillDataBuff (LocationWriteDataRegs_30, SourceAddressPtr_17(D), Length_16(D));
  instance pointer: SourceAddressPtr_17(D)  Outer instance pointer: SourceAddressPtr_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ReturnCode_19 = C40_Ip_MainInterfaceWritePreCheck (LogicalAddress_13(D), Length_16(D), SourceAddressPtr_17(D));
  Function call may change dynamic type:ReturnCode_21 = C40_Ip_Compare (LogicalAddress_13(D), Length_16(D), 0B);
  Function call may change dynamic type:ReturnCode_25 = C40_Ip_MainInterfaceWriteJobAddress (LogicalAddress_13(D), DomainIdValue_23(D));
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();
  Function call may change dynamic type:C40_Ip_ClearInterlockWrite ();
Determining dynamic type for call: ReadSize_13 = C40_Ip_CompareBlank (ReadAddress_2, SizeLeft_3, &CompareResult);
  Starting walk at: ReadSize_13 = C40_Ip_CompareBlank (ReadAddress_2, SizeLeft_3, &CompareResult);
  instance pointer: &CompareResult  Outer instance pointer: CompareResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutStart ();
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();
  Function call may change dynamic type:Status_16 = C40_Ip_CheckReadCompareStatus.isra.0 (CompareResult.27_1);
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutFinish ();
  Function call may change dynamic type:ReadSize_13 = C40_Ip_CompareBlank (ReadAddress_2, SizeLeft_3, &CompareResult);
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutStart ();
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();
Determining dynamic type for call: ReadSize_16 = C40_Ip_CompareData (ReadAddress_2, DataAddress_3, SizeLeft_4, &CompareResult);
  Starting walk at: ReadSize_16 = C40_Ip_CompareData (ReadAddress_2, DataAddress_3, SizeLeft_4, &CompareResult);
  instance pointer: &CompareResult  Outer instance pointer: CompareResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutStart ();
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();
  Function call may change dynamic type:Status_19 = C40_Ip_CheckReadCompareStatus.isra.0 (CompareResult.26_1);
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutFinish ();
  Function call may change dynamic type:ReadSize_16 = C40_Ip_CompareData (ReadAddress_2, DataAddress_3, SizeLeft_4, &CompareResult);
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutStart ();
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();
Determining dynamic type for call: C40_Ip_ProgramVerify (LogicalAddress_3(D), SourceAddressPtr_6(D), Length_4(D));
  Starting walk at: C40_Ip_ProgramVerify (LogicalAddress_3(D), SourceAddressPtr_6(D), Length_4(D));
  instance pointer: SourceAddressPtr_6(D)  Outer instance pointer: SourceAddressPtr_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ReadSize_17 = C40_Ip_ReadData (ReadAddress_1, DesAddressPtr_2, SizeLeft_3);
  Starting walk at: ReadSize_17 = C40_Ip_ReadData (ReadAddress_1, DesAddressPtr_2, SizeLeft_3);
  instance pointer: DesAddressPtr_2  Outer instance pointer: DesAddressPtr_2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutStart ();
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();
  Function call may change dynamic type:Status_20 = C40_Ip_CheckReadCompareStatus.isra.0 (1);
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutFinish ();
  Function call may change dynamic type:ReadSize_17 = C40_Ip_ReadData (ReadAddress_1, DesAddressPtr_2, SizeLeft_3);
  Function call may change dynamic type:C40_Ip_FlashAccessCalloutStart ();
  Function call may change dynamic type:C40_Ip_ClearAllErrorFlagsMainInterface ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  C40_Ip_GetSectorNumberFromAddress.part.0/108:
  Jump functions of caller  C40_Ip_ClearLockProtect.part.0/104:
  Jump functions of caller  C40_Ip_GetLock.part.0/103:
    callsite  C40_Ip_GetLock.part.0/103 -> C40_Ip_GetLockProtect/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_SetLockProtect.part.0/102:
  Jump functions of caller  C40_Ip_CheckSelecBlock.part.0/93:
  Jump functions of caller  C40_Ip_UTestCheckBreakpoint.part.0/92:
  Jump functions of caller  C40_Ip_UTestCheckBusy.part.0/91:
  Jump functions of caller  C40_Ip_MainInterfaceHVJobStatus.part.0/90:
  Jump functions of caller  C40_Ip_SetSeedMisr.part.0/79:
  Jump functions of caller  C40_Ip_CheckReadCompareStatus.isra.0/78:
  Jump functions of caller  C40_Ip_FlashAccessCalloutFinish/72:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 ();
  Jump functions of caller  C40_Ip_FlashAccessCalloutStart/71:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 ();
  Jump functions of caller  C40_Ip_SetAsyncMode/70:
  Jump functions of caller  C40_Ip_GetFailedAddress/69:
  Jump functions of caller  C40_Ip_UserMarginReadCheck/68:
    callsite  C40_Ip_UserMarginReadCheck/68 -> C40_Ip_SetSeedMisr/21 : 
       param 0: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_UserMarginReadCheck/68 -> C40_Ip_UTestCheckBreakpoint/59 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_UserMarginReadCheck/68 -> C40_Ip_MainInterfaceWriteJobAddress/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_UserMarginReadCheck/68 -> C40_Ip_UTestCheckBusy/58 : 
    callsite  C40_Ip_UserMarginReadCheck/68 -> C40_Ip_CheckSelecBlock/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_ArrayIntegrityCheckResume/67:
    callsite  C40_Ip_ArrayIntegrityCheckResume/67 -> C40_Ip_ArrayIntegrityResumeBroken/66 : 
    callsite  C40_Ip_ArrayIntegrityCheckResume/67 -> C40_Ip_ArrayIntegrityResumeSuppened/65 : 
  Jump functions of caller  C40_Ip_ArrayIntegrityResumeBroken/66:
  Jump functions of caller  C40_Ip_ArrayIntegrityResumeSuppened/65:
  Jump functions of caller  C40_Ip_ArrayIntegrityCheckSuspend/64:
  Jump functions of caller  C40_Ip_CheckUserTestStatusExecution/63:
  Jump functions of caller  C40_Ip_CheckUserTestStatus/62:
    callsite  C40_Ip_CheckUserTestStatus/62 -> C40_Ip_CheckUserTestStatusExecution/63 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_CheckSelecBlock/61:
    callsite  C40_Ip_CheckSelecBlock/61 -> C40_Ip_CheckSelecBlock.part.0/93 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_ArrayIntegrityCheck/60:
    callsite  C40_Ip_ArrayIntegrityCheck/60 -> C40_Ip_SetSeedMisr/21 : 
       param 0: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_ArrayIntegrityCheck/60 -> C40_Ip_UTestCheckBreakpoint/59 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_ArrayIntegrityCheck/60 -> C40_Ip_MainInterfaceWriteJobAddress/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_ArrayIntegrityCheck/60 -> C40_Ip_UTestCheckBusy/58 : 
    callsite  C40_Ip_ArrayIntegrityCheck/60 -> C40_Ip_CheckSelecBlock/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_UTestCheckBreakpoint/59:
    callsite  C40_Ip_UTestCheckBreakpoint/59 -> C40_Ip_UTestCheckBreakpoint.part.0/92 : 
  Jump functions of caller  C40_Ip_UTestCheckBusy/58:
    callsite  C40_Ip_UTestCheckBusy/58 -> C40_Ip_UTestCheckBusy.part.0/91 : 
  Jump functions of caller  C40_Ip_GetBlockNumberFromAddress/57:
    callsite  C40_Ip_GetBlockNumberFromAddress/57 -> C40_Ip_GetCodeBlockNumber/56 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_GetCodeBlockNumber/56:
  Jump functions of caller  C40_Ip_GetSectorNumberFromAddress/55:
    callsite  C40_Ip_GetSectorNumberFromAddress/55 -> C40_Ip_GetSectorNumberFromAddress.part.0/108 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_CheckLockDomainID_CheckRegister/54:
  Jump functions of caller  C40_Ip_GetBaseAddressOfSector/53:
  Jump functions of caller  C40_Ip_CheckLockDomainID/52:
    callsite  C40_Ip_CheckLockDomainID/52 -> C40_Ip_CheckLockDomainID_CheckRegister/54 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  C40_Ip_GetSectorID/51:
  Jump functions of caller  C40_Ip_MainInterfaceHVJobStatus/50:
    callsite  C40_Ip_MainInterfaceHVJobStatus/50 -> C40_Ip_MainInterfaceHVJobStatus.part.0/90 : 
  Jump functions of caller  C40_Ip_MainInterfaceWriteStatus/49:
    callsite  C40_Ip_MainInterfaceWriteStatus/49 -> C40_Ip_Compare/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_MainInterfaceWriteStatus/49 -> C40_Ip_MainInterfaceHVJobStatus/50 : 
  Jump functions of caller  C40_Ip_MainInterfaceWrite/48:
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_FlashAccessCalloutStart/71 : 
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_MainInterfaceFillDataBuff/46 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_ClearInterlockWrite/47 : 
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_MainInterfaceWriteJobAddress/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_ClearAllErrorFlagsMainInterface/41 : 
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_Compare/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    callsite  C40_Ip_MainInterfaceWrite/48 -> C40_Ip_MainInterfaceWritePreCheck/45 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_ClearInterlockWrite/47:
  Jump functions of caller  C40_Ip_MainInterfaceFillDataBuff/46:
  Jump functions of caller  C40_Ip_MainInterfaceWritePreCheck/45:
    callsite  C40_Ip_MainInterfaceWritePreCheck/45 -> C40_Ip_GetLock/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_MainInterfaceWritePreCheck/45 -> C40_Ip_GetSectorNumberFromAddress/55 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_MainInterfaceSectorEraseStatus/44:
    callsite  C40_Ip_MainInterfaceSectorEraseStatus/44 -> C40_Ip_EraseVerify/36 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 8192
         value: 0x2000, mask: 0x0
         Unknown VR
    callsite  C40_Ip_MainInterfaceSectorEraseStatus/44 -> C40_Ip_MainInterfaceHVJobStatus/50 : 
  Jump functions of caller  C40_Ip_MainInterfaceSectorErase/43:
    callsite  C40_Ip_MainInterfaceSectorErase/43 -> C40_Ip_FlashAccessCalloutStart/71 : 
    callsite  C40_Ip_MainInterfaceSectorErase/43 -> C40_Ip_ClearInterlockWrite/47 : 
    callsite  C40_Ip_MainInterfaceSectorErase/43 -> C40_Ip_MainInterfaceWriteJobAddress/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_MainInterfaceSectorErase/43 -> C40_Ip_GetBaseAddressOfSector/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_MainInterfaceSectorErase/43 -> C40_Ip_ClearAllErrorFlagsMainInterface/41 : 
    callsite  C40_Ip_MainInterfaceSectorErase/43 -> C40_Ip_MainInterfaceSectorErasePreCheck/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_MainInterfaceSectorErasePreCheck/42:
    callsite  C40_Ip_MainInterfaceSectorErasePreCheck/42 -> C40_Ip_GetLock/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_ClearAllErrorFlagsMainInterface/41:
  Jump functions of caller  C40_Ip_MainInterfaceAbort/40:
  Jump functions of caller  C40_Ip_InitMainInterface/39:
    callsite  C40_Ip_InitMainInterface/39 -> C40_Ip_ClearAllErrorFlagsMainInterface/41 : 
    callsite  C40_Ip_InitMainInterface/39 -> C40_Ip_MainInterfaceAbort/40 : 
  Jump functions of caller  C40_Ip_MainInterfaceWriteJobAddress/38:
  Jump functions of caller  C40_Ip_MainInterfaceWriteLogicalAddress/37:
  Jump functions of caller  C40_Ip_EraseVerify/36:
    callsite  C40_Ip_EraseVerify/36 -> C40_Ip_CheckReadCompareStatus.isra.0/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_EraseVerify/36 -> C40_Ip_FlashAccessCalloutFinish/72 : 
    callsite  C40_Ip_EraseVerify/36 -> C40_Ip_CompareBlank/35 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  C40_Ip_EraseVerify/36 -> C40_Ip_FlashAccessCalloutStart/71 : 
    callsite  C40_Ip_EraseVerify/36 -> C40_Ip_ClearAllErrorFlagsMainInterface/41 : 
  Jump functions of caller  C40_Ip_CompareBlank/35:
  Jump functions of caller  C40_Ip_ProgramVerify/34:
    callsite  C40_Ip_ProgramVerify/34 -> C40_Ip_CheckReadCompareStatus.isra.0/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_ProgramVerify/34 -> C40_Ip_FlashAccessCalloutFinish/72 : 
    callsite  C40_Ip_ProgramVerify/34 -> C40_Ip_CompareData/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  C40_Ip_ProgramVerify/34 -> C40_Ip_FlashAccessCalloutStart/71 : 
    callsite  C40_Ip_ProgramVerify/34 -> C40_Ip_ClearAllErrorFlagsMainInterface/41 : 
  Jump functions of caller  C40_Ip_CompareData/33:
  Jump functions of caller  C40_Ip_Compare/32:
    callsite  C40_Ip_Compare/32 -> C40_Ip_EraseVerify/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_Compare/32 -> C40_Ip_ProgramVerify/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_ClearLockProtect/31:
    callsite  C40_Ip_ClearLockProtect/31 -> C40_Ip_ClearLockProtect.part.0/104 : 
  Jump functions of caller  C40_Ip_ClearLock/30:
    callsite  C40_Ip_ClearLock/30 -> C40_Ip_ClearLockProtect/31 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_ClearLock/30 -> C40_Ip_CheckLockDomainID/52 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_ClearLock/30 -> C40_Ip_GetLock/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_GetLockProtect/29:
    callsite  C40_Ip_GetLockProtect/29 -> C40_Ip_GetSectorID/51 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_GetLock/28:
    callsite  C40_Ip_GetLock/28 -> C40_Ip_GetLock.part.0/103 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_SetLockProtect/27:
    callsite  C40_Ip_SetLockProtect/27 -> C40_Ip_SetLockProtect.part.0/102 : 
  Jump functions of caller  C40_Ip_SetLock/26:
    callsite  C40_Ip_SetLock/26 -> C40_Ip_SetLockProtect/27 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_SetLock/26 -> C40_Ip_CheckLockDomainID/52 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  C40_Ip_SetLock/26 -> C40_Ip_GetLock/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  C40_Ip_Read/25:
    callsite  C40_Ip_Read/25 -> C40_Ip_CheckReadCompareStatus.isra.0/78 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  C40_Ip_Read/25 -> C40_Ip_FlashAccessCalloutFinish/72 : 
    callsite  C40_Ip_Read/25 -> C40_Ip_ReadData/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  C40_Ip_Read/25 -> C40_Ip_FlashAccessCalloutStart/71 : 
    callsite  C40_Ip_Read/25 -> C40_Ip_ClearAllErrorFlagsMainInterface/41 : 
  Jump functions of caller  C40_Ip_ReadData/22:
  Jump functions of caller  C40_Ip_SetSeedMisr/21:
    callsite  C40_Ip_SetSeedMisr/21 -> C40_Ip_SetSeedMisr.part.0/79 : 
  Jump functions of caller  C40_Ip_Abort/16:
    callsite  C40_Ip_Abort/16 -> C40_Ip_MainInterfaceAbort/40 : 
  Jump functions of caller  C40_Ip_Block4PipeSelect/15:
  Jump functions of caller  C40_Ip_DataErrorSuppression/14:
  Jump functions of caller  C40_Ip_Init/13:
    callsite  C40_Ip_Init/13 -> C40_Ip_InitMainInterface/39 : 
    callsite  C40_Ip_Init/13 -> C40_Ip_Block4PipeSelect/15 : 
    callsite  C40_Ip_Init/13 -> C40_Ip_DataErrorSuppression/14 : 

 Propagating constants:

Not considering C40_Ip_SetAsyncMode for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_GetFailedAddress for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_UserMarginReadCheck for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_ArrayIntegrityCheckResume for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_ArrayIntegrityCheckSuspend for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_CheckUserTestStatus for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_ArrayIntegrityCheck for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_GetBlockNumberFromAddress for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_GetSectorNumberFromAddress for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_CheckLockDomainID_CheckRegister for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_MainInterfaceWriteStatus for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_MainInterfaceWrite for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_MainInterfaceSectorEraseStatus for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_MainInterfaceSectorErase for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_MainInterfaceWriteLogicalAddress for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_Compare for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_ClearLockProtect for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_ClearLock for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_GetLockProtect for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_GetLock for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_SetLockProtect for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_SetLock for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_Read for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_Abort for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_Block4PipeSelect for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_DataErrorSuppression for cloning; -fipa-cp-clone disabled.
Not considering C40_Ip_Init for cloning; -fipa-cp-clone disabled.

overall_size: 1251, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: C40_Ip_GetSectorNumberFromAddress.part.0/108:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_ClearLockProtect.part.0/104:
  Node: C40_Ip_GetLock.part.0/103:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_SetLockProtect.part.0/102:
  Node: C40_Ip_CheckSelecBlock.part.0/93:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_UTestCheckBreakpoint.part.0/92:
  Node: C40_Ip_UTestCheckBusy.part.0/91:
  Node: C40_Ip_MainInterfaceHVJobStatus.part.0/90:
  Node: C40_Ip_SetSeedMisr.part.0/79:
  Node: C40_Ip_CheckReadCompareStatus.isra.0/78:
    param [0]: VARIABLE
               1 [loc_time: 2, loc_size: 11, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_FlashAccessCalloutFinish/72:
  Node: C40_Ip_FlashAccessCalloutStart/71:
  Node: C40_Ip_SetAsyncMode/70:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_GetFailedAddress/69:
  Node: C40_Ip_UserMarginReadCheck/68:
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
  Node: C40_Ip_ArrayIntegrityCheckResume/67:
  Node: C40_Ip_ArrayIntegrityResumeBroken/66:
  Node: C40_Ip_ArrayIntegrityResumeSuppened/65:
  Node: C40_Ip_ArrayIntegrityCheckSuspend/64:
  Node: C40_Ip_CheckUserTestStatusExecution/63:
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
  Node: C40_Ip_CheckUserTestStatus/62:
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
  Node: C40_Ip_CheckSelecBlock/61:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_ArrayIntegrityCheck/60:
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
  Node: C40_Ip_UTestCheckBreakpoint/59:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_UTestCheckBusy/58:
  Node: C40_Ip_GetBlockNumberFromAddress/57:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_GetCodeBlockNumber/56:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_GetSectorNumberFromAddress/55:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_CheckLockDomainID_CheckRegister/54:
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
  Node: C40_Ip_GetBaseAddressOfSector/53:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_CheckLockDomainID/52:
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
  Node: C40_Ip_GetSectorID/51:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_MainInterfaceHVJobStatus/50:
  Node: C40_Ip_MainInterfaceWriteStatus/49:
  Node: C40_Ip_MainInterfaceWrite/48:
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
  Node: C40_Ip_ClearInterlockWrite/47:
  Node: C40_Ip_MainInterfaceFillDataBuff/46:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1f
         uint32 [0, 31]
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
  Node: C40_Ip_MainInterfaceWritePreCheck/45:
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
  Node: C40_Ip_MainInterfaceSectorEraseStatus/44:
  Node: C40_Ip_MainInterfaceSectorErase/43:
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
  Node: C40_Ip_MainInterfaceSectorErasePreCheck/42:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_ClearAllErrorFlagsMainInterface/41:
  Node: C40_Ip_MainInterfaceAbort/40:
  Node: C40_Ip_InitMainInterface/39:
  Node: C40_Ip_MainInterfaceWriteJobAddress/38:
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
  Node: C40_Ip_MainInterfaceWriteLogicalAddress/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_EraseVerify/36:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               8192 [loc_time: 1, loc_size: 24, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_CompareBlank/35:
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
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: C40_Ip_ProgramVerify/34:
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
  Node: C40_Ip_CompareData/33:
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
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: C40_Ip_Compare/32:
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
  Node: C40_Ip_ClearLockProtect/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_ClearLock/30:
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
  Node: C40_Ip_GetLockProtect/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_GetLock/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_SetLockProtect/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: C40_Ip_SetLock/26:
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
  Node: C40_Ip_Read/25:
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
  Node: C40_Ip_ReadData/22:
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
  Node: C40_Ip_SetSeedMisr/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: C40_Ip_Abort/16:
  Node: C40_Ip_Block4PipeSelect/15:
  Node: C40_Ip_DataErrorSuppression/14:
  Node: C40_Ip_Init/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

Propagated bits info for function C40_Ip_MainInterfaceFillDataBuff/46:
 param 0: value = 0x0, mask = 0x1f

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

C40_Ip_GetSectorNumberFromAddress.part.0/108 (C40_Ip_GetSectorNumberFromAddress.part.0) @06e7e700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_GetSectorNumberFromAddress/55 (348966093 (estimated locally),0.33 per call) 
  Calls: 
C40_Ip_ClearLockProtect.part.0/104 (C40_Ip_ClearLockProtect.part.0) @0703b620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: C40_Ip_u32BitPosition/5 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_ClearLockProtect/31 (182536112 (estimated locally),0.17 per call) 
  Calls: 
C40_Ip_GetLock.part.0/103 (C40_Ip_GetLock.part.0) @0680bee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_GetLock/28 (354334800 (estimated locally),0.33 per call) 
  Calls: C40_Ip_GetLockProtect/29 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_SetLockProtect.part.0/102 (C40_Ip_SetLockProtect.part.0) @0680b9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: C40_Ip_u32BitPosition/5 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_SetLockProtect/27 (182536112 (estimated locally),0.17 per call) 
  Calls: 
C40_Ip_CheckSelecBlock.part.0/93 (C40_Ip_CheckSelecBlock.part.0) @06f5ac40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_CheckSelecBlock/61 (467721936 (estimated locally),0.44 per call) 
  Calls: 
C40_Ip_UTestCheckBreakpoint.part.0/92 (C40_Ip_UTestCheckBreakpoint.part.0) @06f57a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_UTestCheckBreakpoint/59 (357913944 (estimated locally),0.33 per call) 
  Calls: 
C40_Ip_UTestCheckBusy.part.0/91 (C40_Ip_UTestCheckBusy.part.0) @0680b620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_UTestCheckBusy/58 (69202658 (estimated locally),0.25 per call) 
  Calls: 
C40_Ip_MainInterfaceHVJobStatus.part.0/90 (C40_Ip_MainInterfaceHVJobStatus.part.0) @0680b7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_MainInterfaceHVJobStatus/50 (536870912 (estimated locally),0.50 per call) 
  Calls: 
C40_Ip_SetSeedMisr.part.0/79 (C40_Ip_SetSeedMisr.part.0) @06f5aee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:107374182 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: C40_Ip_SetSeedMisr/21 (46017506 (estimated locally),0.30 per call) 
  Calls: 
C40_Ip_CheckReadCompareStatus.isra.0/78 (C40_Ip_CheckReadCompareStatus.isra.0) @06ed81c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_Read/25 (1073741824 (estimated locally),3.18 per call) C40_Ip_EraseVerify/36 (1073741824 (estimated locally),9.35 per call) C40_Ip_ProgramVerify/34 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
C40_Ip_FlashAccessCalloutFinish/72 (C40_Ip_FlashAccessCalloutFinish) @06e7e1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: C40_Ip_pConfigPtr/9 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_Read/25 (1073741824 (estimated locally),3.18 per call) C40_Ip_EraseVerify/36 (1073741824 (estimated locally),9.35 per call) C40_Ip_ProgramVerify/34 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
   Indirect call(751619278 (estimated locally),0.70 per call) 
C40_Ip_FlashAccessCalloutStart/71 (C40_Ip_FlashAccessCalloutStart) @06e7e000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: C40_Ip_pConfigPtr/9 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceWrite/48 (43986650 (estimated locally),0.04 per call) C40_Ip_MainInterfaceSectorErase/43 (73890617 (estimated locally),0.07 per call) C40_Ip_Read/25 (1073741824 (estimated locally),3.18 per call) C40_Ip_EraseVerify/36 (1073741824 (estimated locally),9.35 per call) C40_Ip_ProgramVerify/34 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
   Indirect call(751619278 (estimated locally),0.70 per call) 
C40_Ip_SetAsyncMode/70 (C40_Ip_SetAsyncMode) @06e74e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_bAsync/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
C40_Ip_GetFailedAddress/69 (C40_Ip_GetFailedAddress) @06e74c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_eOpStatus/8 (read)C40_Ip_u32LogicalAddressCheckFail/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
C40_Ip_UserMarginReadCheck/68 (C40_Ip_UserMarginReadCheck) @06e74a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_SetSeedMisr/21 (8145942 (estimated locally),0.01 per call) C40_Ip_UTestCheckBreakpoint/59 (8145942 (estimated locally),0.01 per call) C40_Ip_MainInterfaceWriteJobAddress/38 (67769897 (estimated locally),0.06 per call) C40_Ip_UTestCheckBusy/58 (512926469 (estimated locally),0.48 per call) C40_Ip_CheckSelecBlock/61 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_ArrayIntegrityCheckResume/67 (C40_Ip_ArrayIntegrityCheckResume) @06e74700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_ArrayIntegrityResumeBroken/66 (265921598 (estimated locally),0.25 per call) C40_Ip_ArrayIntegrityResumeSuppened/65 (141261474 (estimated locally),0.13 per call) 
C40_Ip_ArrayIntegrityResumeBroken/66 (C40_Ip_ArrayIntegrityResumeBroken) @06e74540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:69202660 (estimated locally) body local optimize_size
  Called by: C40_Ip_ArrayIntegrityCheckResume/67 (265921598 (estimated locally),0.25 per call) 
  Calls: 
C40_Ip_ArrayIntegrityResumeSuppened/65 (C40_Ip_ArrayIntegrityResumeSuppened) @06e74380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:69202660 (estimated locally) body local optimize_size
  Called by: C40_Ip_ArrayIntegrityCheckResume/67 (141261474 (estimated locally),0.13 per call) 
  Calls: 
C40_Ip_ArrayIntegrityCheckSuspend/64 (C40_Ip_ArrayIntegrityCheckSuspend) @06e741c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:276810640 (estimated locally) body optimize_size
  Called by: 
  Calls: 
C40_Ip_CheckUserTestStatusExecution/63 (C40_Ip_CheckUserTestStatusExecution) @06e74000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:160524402 (estimated locally) body local optimize_size
  Called by: C40_Ip_CheckUserTestStatus/62 (143063407 (estimated locally),0.13 per call) 
  Calls: 
C40_Ip_CheckUserTestStatus/62 (C40_Ip_CheckUserTestStatus) @06e69e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_CheckUserTestStatusExecution/63 (143063407 (estimated locally),0.13 per call) 
C40_Ip_CheckSelecBlock/61 (C40_Ip_CheckSelecBlock) @06e69a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: C40_Ip_UserMarginReadCheck/68 (1073741824 (estimated locally),1.00 per call) C40_Ip_ArrayIntegrityCheck/60 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_CheckSelecBlock.part.0/93 (467721936 (estimated locally),0.44 per call) 
C40_Ip_ArrayIntegrityCheck/60 (C40_Ip_ArrayIntegrityCheck) @06e698c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_SetSeedMisr/21 (14719622 (estimated locally),0.01 per call) C40_Ip_UTestCheckBreakpoint/59 (14719622 (estimated locally),0.01 per call) C40_Ip_MainInterfaceWriteJobAddress/38 (67769897 (estimated locally),0.06 per call) C40_Ip_UTestCheckBusy/58 (512926469 (estimated locally),0.48 per call) C40_Ip_CheckSelecBlock/61 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_UTestCheckBreakpoint/59 (C40_Ip_UTestCheckBreakpoint) @06e69540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_UserMarginReadCheck/68 (8145942 (estimated locally),0.01 per call) C40_Ip_ArrayIntegrityCheck/60 (14719622 (estimated locally),0.01 per call) 
  Calls: C40_Ip_UTestCheckBreakpoint.part.0/92 (357913944 (estimated locally),0.33 per call) 
C40_Ip_UTestCheckBusy/58 (C40_Ip_UTestCheckBusy) @06e69380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:276810640 (estimated locally) body local optimize_size
  Called by: C40_Ip_UserMarginReadCheck/68 (512926469 (estimated locally),0.48 per call) C40_Ip_ArrayIntegrityCheck/60 (512926469 (estimated locally),0.48 per call) 
  Calls: C40_Ip_UTestCheckBusy.part.0/91 (69202658 (estimated locally),0.25 per call) 
C40_Ip_GetBlockNumberFromAddress/57 (C40_Ip_GetBlockNumberFromAddress) @06e691c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_GetCodeBlockNumber/56 (294876349 (estimated locally),0.27 per call) 
C40_Ip_GetCodeBlockNumber/56 (C40_Ip_GetCodeBlockNumber) @06e69000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_GetBlockNumberFromAddress/57 (294876349 (estimated locally),0.27 per call) 
  Calls: 
C40_Ip_GetSectorNumberFromAddress/55 (C40_Ip_GetSectorNumberFromAddress) @06e61e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_MainInterfaceWritePreCheck/45 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_GetSectorNumberFromAddress.part.0/108 (348966093 (estimated locally),0.33 per call) 
C40_Ip_CheckLockDomainID_CheckRegister/54 (C40_Ip_CheckLockDomainID_CheckRegister) @06e61c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32SectorId/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_CheckLockDomainID/52 (354334802 (estimated locally),0.33 per call) 
  Calls: 
C40_Ip_GetBaseAddressOfSector/53 (C40_Ip_GetBaseAddressOfSector) @06e618c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceSectorErase/43 (217325345 (estimated locally),0.20 per call) 
  Calls: 
C40_Ip_CheckLockDomainID/52 (C40_Ip_CheckLockDomainID) @06e61700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: C40_Ip_u32SectorId/4 (read)C40_Ip_u32BitPosition/5 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_ClearLock/30 (453335945 (estimated locally),0.42 per call) C40_Ip_SetLock/26 (453335945 (estimated locally),0.42 per call) 
  Calls: C40_Ip_CheckLockDomainID_CheckRegister/54 (354334802 (estimated locally),0.33 per call) 
C40_Ip_GetSectorID/51 (C40_Ip_GetSectorID) @06e61540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: C40_Ip_u32SectorId/4 (write)C40_Ip_u32SectorId/4 (write)C40_Ip_u32SectorId/4 (write)C40_Ip_u32SectorId/4 (write)C40_Ip_u32SectorId/4 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_GetLockProtect/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_MainInterfaceHVJobStatus/50 (C40_Ip_MainInterfaceHVJobStatus) @06e61380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceWriteStatus/49 (1073741824 (estimated locally),1.00 per call) C40_Ip_MainInterfaceSectorEraseStatus/44 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_MainInterfaceHVJobStatus.part.0/90 (536870912 (estimated locally),0.50 per call) 
C40_Ip_MainInterfaceWriteStatus/49 (C40_Ip_MainInterfaceWriteStatus) @06e611c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32ProgrammedAddress/0 (read)C40_Ip_u32ProgrammedLength/1 (read)C40_Ip_pProgrammedData/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_Compare/32 (143434728 (estimated locally),0.13 per call) C40_Ip_MainInterfaceHVJobStatus/50 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_MainInterfaceWrite/48 (C40_Ip_MainInterfaceWrite) @06e61000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32LogicalAddressCheckFail/6 (write)C40_Ip_eOpStatus/8 (write)C40_Ip_u32ProgrammedAddress/0 (write)C40_Ip_u32ProgrammedLength/1 (write)C40_Ip_pProgrammedData/2 (write)C40_Ip_bAsync/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_FlashAccessCalloutStart/71 (43986650 (estimated locally),0.04 per call) C40_Ip_MainInterfaceFillDataBuff/46 (217325345 (estimated locally),0.20 per call) C40_Ip_ClearInterlockWrite/47 (23420221 (estimated locally),0.02 per call) C40_Ip_MainInterfaceWriteJobAddress/38 (194843768 (estimated locally),0.18 per call) C40_Ip_ClearAllErrorFlagsMainInterface/41 (194843768 (estimated locally),0.18 per call) C40_Ip_Compare/32 (217325345 (estimated locally),0.20 per call) C40_Ip_MainInterfaceWritePreCheck/45 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_ClearInterlockWrite/47 (C40_Ip_ClearInterlockWrite) @06e2de00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceWrite/48 (23420221 (estimated locally),0.02 per call) C40_Ip_MainInterfaceSectorErase/43 (26122506 (estimated locally),0.02 per call) 
  Calls: 
C40_Ip_MainInterfaceFillDataBuff/46 (C40_Ip_MainInterfaceFillDataBuff) @06e2dc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:236223200 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceWrite/48 (217325345 (estimated locally),0.20 per call) 
  Calls: 
C40_Ip_MainInterfaceWritePreCheck/45 (C40_Ip_MainInterfaceWritePreCheck) @06e2da80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceWrite/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_GetLock/28 (9742865 (estimated locally),0.01 per call) C40_Ip_GetSectorNumberFromAddress/55 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_MainInterfaceSectorEraseStatus/44 (C40_Ip_MainInterfaceSectorEraseStatus) @06e2d8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32ErasedSectorAddress/3 (read)C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_EraseVerify/36 (143434728 (estimated locally),0.13 per call) C40_Ip_MainInterfaceHVJobStatus/50 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_MainInterfaceSectorErase/43 (C40_Ip_MainInterfaceSectorErase) @06e2d700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32ErasedSectorAddress/3 (write)C40_Ip_bAsync/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_FlashAccessCalloutStart/71 (73890617 (estimated locally),0.07 per call) C40_Ip_ClearInterlockWrite/47 (26122506 (estimated locally),0.02 per call) C40_Ip_MainInterfaceWriteJobAddress/38 (217325345 (estimated locally),0.20 per call) C40_Ip_GetBaseAddressOfSector/53 (217325345 (estimated locally),0.20 per call) C40_Ip_ClearAllErrorFlagsMainInterface/41 (217325345 (estimated locally),0.20 per call) C40_Ip_MainInterfaceSectorErasePreCheck/42 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_MainInterfaceSectorErasePreCheck/42 (C40_Ip_MainInterfaceSectorErasePreCheck) @06e2d460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceSectorErase/43 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_GetLock/28 (111347027 (estimated locally),0.10 per call) 
C40_Ip_ClearAllErrorFlagsMainInterface/41 (C40_Ip_ClearAllErrorFlagsMainInterface) @06e2d2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceWrite/48 (194843768 (estimated locally),0.18 per call) C40_Ip_MainInterfaceSectorErase/43 (217325345 (estimated locally),0.20 per call) C40_Ip_Read/25 (1073741824 (estimated locally),3.18 per call) C40_Ip_EraseVerify/36 (1073741824 (estimated locally),9.35 per call) C40_Ip_ProgramVerify/34 (1073741824 (estimated locally),9.35 per call) C40_Ip_InitMainInterface/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_MainInterfaceAbort/40 (C40_Ip_MainInterfaceAbort) @06e2d0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: C40_Ip_Abort/16 (1073741824 (estimated locally),1.00 per call) C40_Ip_InitMainInterface/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_InitMainInterface/39 (C40_Ip_InitMainInterface) @06e25ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: C40_Ip_Init/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_ClearAllErrorFlagsMainInterface/41 (1073741824 (estimated locally),1.00 per call) C40_Ip_MainInterfaceAbort/40 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_MainInterfaceWriteJobAddress/38 (C40_Ip_MainInterfaceWriteJobAddress) @06e25d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: C40_Ip_UserMarginReadCheck/68 (67769897 (estimated locally),0.06 per call) C40_Ip_ArrayIntegrityCheck/60 (67769897 (estimated locally),0.06 per call) C40_Ip_MainInterfaceWrite/48 (194843768 (estimated locally),0.18 per call) C40_Ip_MainInterfaceSectorErase/43 (217325345 (estimated locally),0.20 per call) 
  Calls: 
C40_Ip_MainInterfaceWriteLogicalAddress/37 (C40_Ip_MainInterfaceWriteLogicalAddress) @06e25b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
C40_Ip_EraseVerify/36 (C40_Ip_EraseVerify) @06e259a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: C40_Ip_eReadStatus/7 (write)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: C40_Ip_MainInterfaceSectorEraseStatus/44 (143434728 (estimated locally),0.13 per call) C40_Ip_Compare/32 (161061273 (estimated locally),0.15 per call) 
  Calls: C40_Ip_CheckReadCompareStatus.isra.0/78 (1073741824 (estimated locally),9.35 per call) C40_Ip_FlashAccessCalloutFinish/72 (1073741824 (estimated locally),9.35 per call) C40_Ip_CompareBlank/35 (1073741824 (estimated locally),9.35 per call) C40_Ip_FlashAccessCalloutStart/71 (1073741824 (estimated locally),9.35 per call) C40_Ip_ClearAllErrorFlagsMainInterface/41 (1073741824 (estimated locally),9.35 per call) 
C40_Ip_CompareBlank/35 (C40_Ip_CompareBlank) @06e257e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: C40_Ip_EraseVerify/36 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
C40_Ip_ProgramVerify/34 (C40_Ip_ProgramVerify) @06e25620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: C40_Ip_eReadStatus/7 (write)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: C40_Ip_Compare/32 (375809638 (estimated locally),0.35 per call) 
  Calls: C40_Ip_CheckReadCompareStatus.isra.0/78 (1073741824 (estimated locally),9.35 per call) C40_Ip_FlashAccessCalloutFinish/72 (1073741824 (estimated locally),9.35 per call) C40_Ip_CompareData/33 (1073741824 (estimated locally),9.35 per call) C40_Ip_FlashAccessCalloutStart/71 (1073741824 (estimated locally),9.35 per call) C40_Ip_ClearAllErrorFlagsMainInterface/41 (1073741824 (estimated locally),9.35 per call) 
C40_Ip_CompareData/33 (C40_Ip_CompareData) @06e25460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: C40_Ip_ProgramVerify/34 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
C40_Ip_Compare/32 (C40_Ip_Compare) @06e252a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: C40_Ip_MainInterfaceWrite/48 (217325345 (estimated locally),0.20 per call) C40_Ip_MainInterfaceWriteStatus/49 (143434728 (estimated locally),0.13 per call) 
  Calls: C40_Ip_EraseVerify/36 (161061273 (estimated locally),0.15 per call) C40_Ip_ProgramVerify/34 (375809638 (estimated locally),0.35 per call) 
C40_Ip_ClearLockProtect/31 (C40_Ip_ClearLockProtect) @06e250e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32BitPosition/5 (read)C40_Ip_u32BitPosition/5 (read)C40_Ip_u32BitPosition/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_ClearLock/30 (54490981 (estimated locally),0.05 per call) 
  Calls: C40_Ip_ClearLockProtect.part.0/104 (182536112 (estimated locally),0.17 per call) 
C40_Ip_ClearLock/30 (C40_Ip_ClearLock) @0680fee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_ClearLockProtect/31 (54490981 (estimated locally),0.05 per call) C40_Ip_CheckLockDomainID/52 (453335945 (estimated locally),0.42 per call) C40_Ip_GetLock/28 (1073741823 (estimated locally),1.00 per call) 
C40_Ip_GetLockProtect/29 (C40_Ip_GetLockProtect) @0680fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32SectorId/4 (write)C40_Ip_u32BitPosition/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_GetLock.part.0/103 (1073741824 (estimated locally),1.00 per call) 
  Calls: C40_Ip_GetSectorID/51 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_GetLock/28 (C40_Ip_GetLock) @0680fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_MainInterfaceWritePreCheck/45 (9742865 (estimated locally),0.01 per call) C40_Ip_ClearLock/30 (1073741823 (estimated locally),1.00 per call) C40_Ip_SetLock/26 (1073741823 (estimated locally),1.00 per call) C40_Ip_MainInterfaceSectorErasePreCheck/42 (111347027 (estimated locally),0.10 per call) 
  Calls: C40_Ip_GetLock.part.0/103 (354334800 (estimated locally),0.33 per call) 
C40_Ip_SetLockProtect/27 (C40_Ip_SetLockProtect) @0680f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_u32BitPosition/5 (read)C40_Ip_u32BitPosition/5 (read)C40_Ip_u32BitPosition/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_SetLock/26 (54490981 (estimated locally),0.05 per call) 
  Calls: C40_Ip_SetLockProtect.part.0/102 (182536112 (estimated locally),0.17 per call) 
C40_Ip_SetLock/26 (C40_Ip_SetLock) @0680f620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_SetLockProtect/27 (54490981 (estimated locally),0.05 per call) C40_Ip_CheckLockDomainID/52 (453335945 (estimated locally),0.42 per call) C40_Ip_GetLock/28 (1073741823 (estimated locally),1.00 per call) 
C40_Ip_Read/25 (C40_Ip_Read) @0680f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (write)C40_Ip_eReadStatus/7 (read)
  Referring: 
  Availability: available
  Function flags: count:337833917 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_CheckReadCompareStatus.isra.0/78 (1073741824 (estimated locally),3.18 per call) C40_Ip_FlashAccessCalloutFinish/72 (1073741824 (estimated locally),3.18 per call) C40_Ip_ReadData/22 (1073741824 (estimated locally),3.18 per call) C40_Ip_FlashAccessCalloutStart/71 (1073741824 (estimated locally),3.18 per call) C40_Ip_ClearAllErrorFlagsMainInterface/41 (1073741824 (estimated locally),3.18 per call) 
C40_Ip_ReadData/22 (C40_Ip_ReadData) @0680bd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: C40_Ip_Read/25 (1073741824 (estimated locally),3.18 per call) 
  Calls: 
C40_Ip_SetSeedMisr/21 (C40_Ip_SetSeedMisr) @0680bb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:153391689 (estimated locally) body local optimize_size
  Called by: C40_Ip_UserMarginReadCheck/68 (8145942 (estimated locally),0.01 per call) C40_Ip_ArrayIntegrityCheck/60 (14719622 (estimated locally),0.01 per call) 
  Calls: C40_Ip_SetSeedMisr.part.0/79 (46017506 (estimated locally),0.30 per call) 
C40_Ip_Abort/16 (C40_Ip_Abort) @0680b2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_MainInterfaceAbort/40 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_Block4PipeSelect/15 (C40_Ip_Block4PipeSelect) @0680b0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_Init/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_DataErrorSuppression/14 (C40_Ip_DataErrorSuppression) @06808e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: C40_Ip_Init/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_Init/13 (C40_Ip_Init) @06808c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: C40_Ip_pConfigPtr/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_InitMainInterface/39 (1073741824 (estimated locally),1.00 per call) C40_Ip_Block4PipeSelect/15 (1073741824 (estimated locally),1.00 per call) C40_Ip_DataErrorSuppression/14 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_pFlashBaseAddress/11 (C40_Ip_pFlashBaseAddress) @06de0630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
C40_Ip_bAsync/10 (C40_Ip_bAsync) @06de05e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceSectorErase/43 (read)C40_Ip_MainInterfaceWrite/48 (read)C40_Ip_SetAsyncMode/70 (write)
  Availability: available
  Varpool flags: initialized
C40_Ip_pConfigPtr/9 (C40_Ip_pConfigPtr) @06de05a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_FlashAccessCalloutStart/71 (read)C40_Ip_FlashAccessCalloutFinish/72 (read)C40_Ip_Init/13 (write)
  Availability: available
  Varpool flags:
C40_Ip_eOpStatus/8 (C40_Ip_eOpStatus) @06de0558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceWrite/48 (write)C40_Ip_GetFailedAddress/69 (read)
  Availability: available
  Varpool flags:
C40_Ip_eReadStatus/7 (C40_Ip_eReadStatus) @06de0510
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceSectorEraseStatus/44 (read)C40_Ip_CheckReadCompareStatus.isra.0/78 (write)C40_Ip_EraseVerify/36 (write)C40_Ip_Read/25 (write)C40_Ip_ProgramVerify/34 (write)C40_Ip_Read/25 (read)C40_Ip_CheckReadCompareStatus.isra.0/78 (write)C40_Ip_Read/25 (write)C40_Ip_MainInterfaceSectorEraseStatus/44 (write)C40_Ip_Read/25 (write)C40_Ip_Compare/32 (write)C40_Ip_Compare/32 (write)C40_Ip_Compare/32 (read)
  Availability: available
  Varpool flags: initialized
C40_Ip_u32LogicalAddressCheckFail/6 (C40_Ip_u32LogicalAddressCheckFail) @06de04c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceWrite/48 (write)C40_Ip_GetFailedAddress/69 (read)
  Availability: available
  Varpool flags:
C40_Ip_u32BitPosition/5 (C40_Ip_u32BitPosition) @06de0480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_GetLockProtect/29 (write)C40_Ip_ClearLockProtect/31 (read)C40_Ip_SetLockProtect.part.0/102 (read)C40_Ip_SetLockProtect/27 (read)C40_Ip_SetLockProtect/27 (read)C40_Ip_SetLockProtect/27 (read)C40_Ip_ClearLockProtect.part.0/104 (read)C40_Ip_ClearLockProtect/31 (read)C40_Ip_ClearLockProtect/31 (read)C40_Ip_CheckLockDomainID/52 (read)
  Availability: available
  Varpool flags:
C40_Ip_u32SectorId/4 (C40_Ip_u32SectorId) @06de0438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_GetLockProtect/29 (write)C40_Ip_GetSectorID/51 (write)C40_Ip_CheckLockDomainID_CheckRegister/54 (read)C40_Ip_GetSectorID/51 (read)C40_Ip_GetSectorID/51 (write)C40_Ip_GetSectorID/51 (write)C40_Ip_GetSectorID/51 (write)C40_Ip_CheckLockDomainID/52 (read)
  Availability: available
  Varpool flags:
C40_Ip_u32ErasedSectorAddress/3 (C40_Ip_u32ErasedSectorAddress) @06de03f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceSectorErase/43 (write)C40_Ip_MainInterfaceSectorEraseStatus/44 (read)
  Availability: available
  Varpool flags:
C40_Ip_pProgrammedData/2 (C40_Ip_pProgrammedData) @06de03a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceWriteStatus/49 (read)C40_Ip_MainInterfaceWrite/48 (write)
  Availability: available
  Varpool flags:
C40_Ip_u32ProgrammedLength/1 (C40_Ip_u32ProgrammedLength) @06de0360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceWriteStatus/49 (read)C40_Ip_MainInterfaceWrite/48 (write)
  Availability: available
  Varpool flags:
C40_Ip_u32ProgrammedAddress/0 (C40_Ip_u32ProgrammedAddress) @06de0318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: C40_Ip_MainInterfaceWriteStatus/49 (read)C40_Ip_MainInterfaceWrite/48 (write)
  Availability: available
  Varpool flags:

;; Function C40_Ip_MainInterfaceAbort (C40_Ip_MainInterfaceAbort, funcdef_no=27, decl_uid=8249, cgraph_uid=28, symbol_order=40)

Modification phase of node C40_Ip_MainInterfaceAbort/40
C40_Ip_MainInterfaceAbort ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _2 = _1 & 4294967294;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  _4 = _3 & 32768;
  if (_4 == 0)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _6 = _5 & 4294966991;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _6;
  # DEBUG BEGIN_STMT
  return 23205;

}



;; Function C40_Ip_ClearAllErrorFlagsMainInterface (C40_Ip_ClearAllErrorFlagsMainInterface, funcdef_no=28, decl_uid=8245, cgraph_uid=29, symbol_order=41)

Modification phase of node C40_Ip_ClearAllErrorFlagsMainInterface/41
C40_Ip_ClearAllErrorFlagsMainInterface ()
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  _2 = _1 & 4078108672;
  MEM[(struct FLASH_Type *)1076805632B].MCRS ={v} _2;
  return;

}



;; Function C40_Ip_ClearInterlockWrite (C40_Ip_ClearInterlockWrite, funcdef_no=34, decl_uid=8259, cgraph_uid=35, symbol_order=47)

Modification phase of node C40_Ip_ClearInterlockWrite/47
C40_Ip_ClearInterlockWrite ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].DATA[0] ={v} 0;
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _2 = _1 | 256;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _2;
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _4 = _3 & 256;
  if (_4 == 0)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _6 = _5 & 4294967039;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _6;
  return;

}



;; Function C40_Ip_FlashAccessCalloutStart (C40_Ip_FlashAccessCalloutStart, funcdef_no=58, decl_uid=8276, cgraph_uid=59, symbol_order=71)

Modification phase of node C40_Ip_FlashAccessCalloutStart/71
C40_Ip_FlashAccessCalloutStart ()
{
  const struct C40_ConfigType * C40_Ip_pConfigPtr.1_1;
  void (*<T4c8>) (void) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  C40_Ip_pConfigPtr.1_1 = C40_Ip_pConfigPtr;
  _2 = C40_Ip_pConfigPtr.1_1->startFlashAccessNotifPtr;
  if (_2 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function C40_Ip_FlashAccessCalloutFinish (C40_Ip_FlashAccessCalloutFinish, funcdef_no=59, decl_uid=8278, cgraph_uid=60, symbol_order=72)

Modification phase of node C40_Ip_FlashAccessCalloutFinish/72
C40_Ip_FlashAccessCalloutFinish ()
{
  const struct C40_ConfigType * C40_Ip_pConfigPtr.8_1;
  void (*<T4c8>) (void) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  C40_Ip_pConfigPtr.8_1 = C40_Ip_pConfigPtr;
  _2 = C40_Ip_pConfigPtr.8_1->finishedFlashAccessNotifPtr;
  if (_2 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function C40_Ip_CheckReadCompareStatus.isra.0 (C40_Ip_CheckReadCompareStatus.isra.0, funcdef_no=65, decl_uid=9235, cgraph_uid=66, symbol_order=78)

Modification phase of node C40_Ip_CheckReadCompareStatus.isra.0/78
C40_Ip_CheckReadCompareStatus.isra.0 (boolean CompareResult)
{
  C40_Ip_StatusType Status;
  uint32 ErrorFlags;
  long unsigned int _1;
  long unsigned int _3;
  long unsigned int _4;

  <bb 7> [local count: 1073741824]:
  # DEBUG ReadAddress s=> ReadAddress

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Status => 10212
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  ErrorFlags_2 = _1 & 856686592;
  # DEBUG ErrorFlags => ErrorFlags_2
  # DEBUG BEGIN_STMT
  if (ErrorFlags_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  _4 = ErrorFlags_2 & _3;
  MEM[(struct FLASH_Type *)1076805632B].MCRS ={v} _4;
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 10212;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (CompareResult_5(D) != 1)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 13260;

  <bb 6> [local count: 1073741824]:
  # Status_6 = PHI <10212(3), 23205(4), 10212(5)>
  # DEBUG Status => Status_6
  # DEBUG BEGIN_STMT
  return Status_6;

}



;; Function C40_Ip_EraseVerify (C40_Ip_EraseVerify, funcdef_no=23, decl_uid=8202, cgraph_uid=24, symbol_order=36)

Modification phase of node C40_Ip_EraseVerify/36
C40_Ip_EraseVerify (uint32 Address, uint32 Size)
{
  boolean CompareResult;
  C40_Ip_StatusType Status;
  uint32 ReadSize;
  uint32 SizeLeft;
  uint32 ReadAddress;
  unsigned char CompareResult.27_1;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadAddress => Address_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG SizeLeft => Size_8(D)

  <bb 3> [local count: 1073741824]:
  # ReadAddress_2 = PHI <Address_7(D)(2), ReadAddress_17(8)>
  # SizeLeft_3 = PHI <Size_8(D)(2), SizeLeft_18(8)>
  # DEBUG ReadSize => NULL
  # DEBUG SizeLeft => SizeLeft_3
  # DEBUG ReadAddress => ReadAddress_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => ReadAddress_2
  # DEBUG INLINE_ENTRY C40_Ip_ClearPreviousRead
  # DEBUG ReadAddress => D#4
  # DEBUG BEGIN_STMT
  # DEBUG Status => 23205
  # DEBUG BEGIN_STMT
  C40_Ip_ClearAllErrorFlagsMainInterface ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Status => 23205
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_FlashAccessCalloutStart ();
  # DEBUG BEGIN_STMT
  ReadSize_13 = C40_Ip_CompareBlank (ReadAddress_2, SizeLeft_3, &CompareResult);
  # DEBUG ReadSize => ReadSize_13
  # DEBUG BEGIN_STMT
  C40_Ip_FlashAccessCalloutFinish ();
  # DEBUG BEGIN_STMT
  CompareResult.27_1 = CompareResult;
  # DEBUG D#1 => ReadAddress_2
  Status_16 = C40_Ip_CheckReadCompareStatus.isra.0 (CompareResult.27_1);
  # DEBUG Status => Status_16
  # DEBUG ReadSize => ReadSize_13
  # DEBUG BEGIN_STMT
  if (Status_16 != 23205)
    goto <bb 5>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  ReadAddress_17 = ReadAddress_2 + ReadSize_13;
  # DEBUG ReadAddress => ReadAddress_17
  # DEBUG BEGIN_STMT
  SizeLeft_18 = SizeLeft_3 - ReadSize_13;
  # DEBUG SizeLeft => SizeLeft_18
  # DEBUG BEGIN_STMT
  if (SizeLeft_18 != 0)
    goto <bb 8>; [94.50%]
  else
    goto <bb 5>; [5.50%]

  <bb 8> [local count: 958878293]:
  goto <bb 3>; [100.00%]

  <bb 5> [local count: 114863532]:
  # SizeLeft_4 = PHI <SizeLeft_3(3), SizeLeft_18(4)>
  # DEBUG SizeLeft => SizeLeft_4
  # DEBUG BEGIN_STMT
  if (SizeLeft_4 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 23205;

  <bb 7> [local count: 114863532]:
  CompareResult ={v} {CLOBBER};
  return;

}



;; Function C40_Ip_SetSeedMisr (C40_Ip_SetSeedMisr, funcdef_no=8, decl_uid=8239, cgraph_uid=9, symbol_order=21)

Modification phase of node C40_Ip_SetSeedMisr/21
C40_Ip_SetSeedMisr (const struct C40_Ip_MisrType * MisrSeedValues)
{
  uint8 Counter;
  int _1;
  long unsigned int _3;
  long unsigned int _5;

  <bb 2> [local count: 153391689]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (MisrSeedValues_8(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 8> [local count: 107374183]:
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 46017506]:
  # DEBUG D#2 => MisrSeedValues_8(D)
  C40_Ip_SetSeedMisr.part.0 ();
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 966367642]:
  # DEBUG BEGIN_STMT
  _1 = (int) Counter_6;
  _3 = MisrSeedValues_8(D)->arrMISRValue[_1];
  MEM[(struct FLASH_Type *)1076805632B].UM[_1] ={v} _3;
  # DEBUG BEGIN_STMT
  Counter_12 = Counter_6 + 1;
  # DEBUG Counter => Counter_12

  <bb 5> [local count: 1073741824]:
  # Counter_6 = PHI <Counter_12(4), 0(8)>
  # DEBUG Counter => Counter_6
  # DEBUG BEGIN_STMT
  if (Counter_6 != 9)
    goto <bb 4>; [90.00%]
  else
    goto <bb 6>; [10.00%]

  <bb 6> [local count: 107374182]:
  # DEBUG BEGIN_STMT
  _5 = MisrSeedValues_8(D)->arrMISRValue[9];
  MEM[(struct FLASH_Type *)1076805632B].UM9 ={v} _5;

  <bb 7> [local count: 153391689]:
  return;

}



;; Function C40_Ip_MainInterfaceHVJobStatus (C40_Ip_MainInterfaceHVJobStatus, funcdef_no=37, decl_uid=8251, cgraph_uid=38, symbol_order=50)

Modification phase of node C40_Ip_MainInterfaceHVJobStatus/50
C40_Ip_MainInterfaceHVJobStatus ()
{
  C40_Ip_StatusType ReturnCode;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  _3 = _2 & 32768;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870912]:
  ReturnCode_7 = C40_Ip_MainInterfaceHVJobStatus.part.0 ();

  <bb 4> [local count: 1073741824]:
  # ReturnCode_5 = PHI <59202(2), ReturnCode_7(3)>
  # DEBUG ReturnCode => ReturnCode_5
  # DEBUG BEGIN_STMT
  return ReturnCode_5;

}



;; Function C40_Ip_UTestCheckBusy (C40_Ip_UTestCheckBusy, funcdef_no=45, decl_uid=8213, cgraph_uid=46, symbol_order=58)

Modification phase of node C40_Ip_UTestCheckBusy/58
C40_Ip_UTestCheckBusy ()
{
  C40_Ip_StatusType ReturnCode;
  uint32 WaitCounter;
  long unsigned int _1;
  long unsigned int _2;
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

  <bb 2> [local count: 276810640]:
  # DEBUG BEGIN_STMT
  # DEBUG WaitCounter => 450
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _2 = _1 & 2;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 3> [local count: 138405320]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _4 = _3 & 512;
  if (_4 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 4> [local count: 69202660]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  _6 = _5 & 4077912064;
  MEM[(struct FLASH_Type *)1076805632B].MCRS ={v} _6;
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _8 = _7 & 4294966783;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _8;
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _10 = _9 & 4294967293;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _10;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 1004539164]:
  # DEBUG BEGIN_STMT
  WaitCounter_21 = WaitCounter_13 + 4294967295;
  # DEBUG WaitCounter => WaitCounter_21

  <bb 6> [local count: 1073741824]:
  # WaitCounter_13 = PHI <450(4), WaitCounter_21(5)>
  # DEBUG WaitCounter => WaitCounter_13
  # DEBUG BEGIN_STMT
  _11 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _12 = _11 & 1;
  if (_12 == 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 7> [local count: 1014686024]:
  if (WaitCounter_13 != 0)
    goto <bb 5>; [99.00%]
  else
    goto <bb 8>; [1.00%]

  <bb 8> [local count: 69202658]:
  ReturnCode_22 = C40_Ip_UTestCheckBusy.part.0 ();

  <bb 9> [local count: 276810641]:
  # ReturnCode_14 = PHI <23205(2), ReturnCode_22(8), 59202(3)>
  # DEBUG ReturnCode => ReturnCode_14
  # DEBUG BEGIN_STMT
  return ReturnCode_14;

}



;; Function C40_Ip_UTestCheckBreakpoint (C40_Ip_UTestCheckBreakpoint, funcdef_no=46, decl_uid=8215, cgraph_uid=47, symbol_order=59)

Modification phase of node C40_Ip_UTestCheckBreakpoint/59
C40_Ip_UTestCheckBreakpoint (C40_Ip_FlashBreakPointsType BreakPoints)
{
  uint32 Temp;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (BreakPoints_11(D)) <default: <L2> [33.33%], case 0: <L0> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357913944]:
<L0>:
  # DEBUG D#5 => BreakPoints_11(D)
  C40_Ip_UTestCheckBreakpoint.part.0 ();
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  Temp_13 ={v} MEM[(struct FLASH_Type *)1076805632B].MCRS;
  # DEBUG Temp => Temp_13
  # DEBUG BEGIN_STMT
  Temp_14 = Temp_13 & 216858623;
  # DEBUG Temp => Temp_14
  # DEBUG BEGIN_STMT
  Temp_15 = Temp_14 | 3221225472;
  # DEBUG Temp => Temp_15
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].MCRS ={v} Temp_15;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _4 = _3 | 256;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _6 = _5 | 1073741824;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _6;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 357878150]:
<L2>:
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _8 = _7 & 4294967039;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _8;
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _10 = _9 & 3221225471;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _10;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073634451]:
  return;

}



;; Function C40_Ip_DataErrorSuppression (C40_Ip_DataErrorSuppression, funcdef_no=1, decl_uid=8241, cgraph_uid=2, symbol_order=14)

Modification phase of node C40_Ip_DataErrorSuppression/14
C40_Ip_DataErrorSuppression ()
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCR4;
  _2 = _1 & 4294967294;
  MEM[(struct PFLASH_Type *)1076264960B].PFCR4 ={v} _2;
  return;

}



;; Function C40_Ip_Block4PipeSelect (C40_Ip_Block4PipeSelect, funcdef_no=2, decl_uid=8243, cgraph_uid=3, symbol_order=15)

Modification phase of node C40_Ip_Block4PipeSelect/15
C40_Ip_Block4PipeSelect ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCR4;
  _2 = _1 & 4294967281;
  MEM[(struct PFLASH_Type *)1076264960B].PFCR4 ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCR4;
  MEM[(struct PFLASH_Type *)1076264960B].PFCR4 ={v} _3;
  return;

}



;; Function C40_Ip_Init (C40_Ip_Init, funcdef_no=0, decl_uid=8120, cgraph_uid=1, symbol_order=13)

Modification phase of node C40_Ip_Init/13
C40_Ip_Init (const struct C40_ConfigType * InitConfig)
{
  C40_Ip_StatusType ReturnCode;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 10212
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_DataErrorSuppression ();
  # DEBUG BEGIN_STMT
  C40_Ip_Block4PipeSelect ();
  # DEBUG BEGIN_STMT
  ReturnCode_5 = C40_Ip_InitMainInterface ();
  # DEBUG ReturnCode => ReturnCode_5
  # DEBUG BEGIN_STMT
  C40_Ip_pConfigPtr = InitConfig_6(D);
  # DEBUG BEGIN_STMT
  return ReturnCode_5;

}



;; Function C40_Ip_Abort (C40_Ip_Abort, funcdef_no=3, decl_uid=8122, cgraph_uid=4, symbol_order=16)

Modification phase of node C40_Ip_Abort/16
C40_Ip_Abort ()
{
  C40_Ip_StatusType ReturnCode;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 10212
  # DEBUG BEGIN_STMT
  ReturnCode_3 = C40_Ip_MainInterfaceAbort ();
  # DEBUG ReturnCode => ReturnCode_3
  # DEBUG BEGIN_STMT
  return ReturnCode_3;

}



;; Function C40_Ip_Read (C40_Ip_Read, funcdef_no=12, decl_uid=8126, cgraph_uid=13, symbol_order=25)

Modification phase of node C40_Ip_Read/25
C40_Ip_Read (uint32 LogicalAddress, uint32 Length, uint8 * DestAddressPtr)
{
  C40_Ip_StatusType Status;
  C40_Ip_StatusType Status;
  uint32 ReadSize;
  uint32 SizeLeft;
  uint8 * DesAddressPtr;
  uint32 ReadAddress;
  C40_Ip_StatusType _25;

  <bb 2> [local count: 337833917]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadAddress => LogicalAddress_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG DesAddressPtr => DestAddressPtr_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG SizeLeft => Length_9(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Length => Length_9(D)
  # DEBUG DestAddressPtr => DestAddressPtr_8(D)
  # DEBUG INLINE_ENTRY C40_Ip_ReadCheckInputParams
  # DEBUG BEGIN_STMT
  # DEBUG Status => 11700
  # DEBUG BEGIN_STMT
  if (DestAddressPtr_8(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 236483742]:
  # DEBUG BEGIN_STMT
  if (Length_9(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 118241871]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 23205

  <bb 5> [local count: 337833918]:
  # Status_11 = PHI <11700(2), 11700(3), 23205(4)>
  # DEBUG Status => Status_11
  # DEBUG BEGIN_STMT
  # DEBUG Length => NULL
  # DEBUG DestAddressPtr => NULL
  # DEBUG Status => NULL
  C40_Ip_eReadStatus = Status_11;
  # DEBUG BEGIN_STMT
  if (Status_11 == 23205)
    goto <bb 6>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 6> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 59202;

  <bb 7> [local count: 1073741824]:
  # ReadAddress_1 = PHI <LogicalAddress_7(D)(6), ReadAddress_21(12)>
  # DesAddressPtr_2 = PHI <DestAddressPtr_8(D)(6), DesAddressPtr_22(12)>
  # SizeLeft_3 = PHI <Length_9(D)(6), SizeLeft_23(12)>
  # DEBUG ReadSize => NULL
  # DEBUG SizeLeft => SizeLeft_3
  # DEBUG DesAddressPtr => DesAddressPtr_2
  # DEBUG ReadAddress => ReadAddress_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => ReadAddress_1
  # DEBUG INLINE_ENTRY C40_Ip_ClearPreviousRead
  # DEBUG ReadAddress => D#4
  # DEBUG BEGIN_STMT
  # DEBUG Status => 23205
  # DEBUG BEGIN_STMT
  C40_Ip_ClearAllErrorFlagsMainInterface ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Status => 23205
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_FlashAccessCalloutStart ();
  # DEBUG BEGIN_STMT
  ReadSize_17 = C40_Ip_ReadData (ReadAddress_1, DesAddressPtr_2, SizeLeft_3);
  # DEBUG ReadSize => ReadSize_17
  # DEBUG BEGIN_STMT
  C40_Ip_FlashAccessCalloutFinish ();
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => ReadAddress_1
  Status_20 = C40_Ip_CheckReadCompareStatus.isra.0 (1);
  # DEBUG Status => Status_20
  # DEBUG ReadSize => ReadSize_17
  # DEBUG BEGIN_STMT
  if (Status_20 != 23205)
    goto <bb 9>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  ReadAddress_21 = ReadAddress_1 + ReadSize_17;
  # DEBUG ReadAddress => ReadAddress_21
  # DEBUG BEGIN_STMT
  DesAddressPtr_22 = DesAddressPtr_2 + ReadSize_17;
  # DEBUG DesAddressPtr => DesAddressPtr_22
  # DEBUG BEGIN_STMT
  SizeLeft_23 = SizeLeft_3 - ReadSize_17;
  # DEBUG SizeLeft => SizeLeft_23
  # DEBUG BEGIN_STMT
  if (SizeLeft_23 != 0)
    goto <bb 12>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 12> [local count: 958878293]:
  goto <bb 7>; [100.00%]

  <bb 9> [local count: 114863532]:
  # SizeLeft_4 = PHI <SizeLeft_3(7), SizeLeft_23(8)>
  # DEBUG SizeLeft => SizeLeft_4
  # DEBUG BEGIN_STMT
  if (SizeLeft_4 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 23205;

  <bb 11> [local count: 337833918]:
  # DEBUG BEGIN_STMT
  _25 = C40_Ip_eReadStatus;
  return _25;

}



;; Function C40_Ip_SetLockProtect (C40_Ip_SetLockProtect, funcdef_no=14, decl_uid=8272, cgraph_uid=15, symbol_order=27)

Modification phase of node C40_Ip_SetLockProtect/27
C40_Ip_SetLockProtect (C40_Ip_VirtualSectorsType VirtualSector)
{
  uint32 SectorPosition;
  uint32 BlockCount;
  uint32 SectorIndex;
  long unsigned int _1;
  long unsigned int C40_Ip_u32BitPosition.16_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int C40_Ip_u32BitPosition.18_5;
  long unsigned int _6;
  long unsigned int _8;
  long unsigned int C40_Ip_u32BitPosition.19_9;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (VirtualSector_12(D) <= 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[2];
  C40_Ip_u32BitPosition.16_2 = C40_Ip_u32BitPosition;
  _3 = _1 | C40_Ip_u32BitPosition.16_2;
  MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[2] ={v} _3;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (VirtualSector_12(D) == 272)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536112]:
  # DEBUG D#8 => VirtualSector_12(D)
  C40_Ip_SetLockProtect.part.0 ();
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SectorIndex_13 = VirtualSector_12(D) + 4294967280;
  # DEBUG SectorIndex => SectorIndex_13
  # DEBUG BEGIN_STMT
  BlockCount_14 = SectorIndex_13 >> 7;
  # DEBUG BlockCount => BlockCount_14
  # DEBUG BEGIN_STMT
  SectorPosition_15 = SectorIndex_13 & 127;
  # DEBUG SectorPosition => SectorPosition_15
  # DEBUG BEGIN_STMT
  if (SectorPosition_15 <= 95)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SSPELOCK[BlockCount_14];
  C40_Ip_u32BitPosition.18_5 = C40_Ip_u32BitPosition;
  _6 = _4 | C40_Ip_u32BitPosition.18_5;
  MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SSPELOCK[BlockCount_14] ={v} _6;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[BlockCount_14];
  C40_Ip_u32BitPosition.19_9 = C40_Ip_u32BitPosition;
  _11 = _8 | C40_Ip_u32BitPosition.19_9;
  MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[BlockCount_14] ={v} _11;

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function C40_Ip_GetLockProtect (C40_Ip_GetLockProtect, funcdef_no=16, decl_uid=8270, cgraph_uid=17, symbol_order=29)

Modification phase of node C40_Ip_GetLockProtect/29
C40_Ip_GetLockProtect (C40_Ip_VirtualSectorsType VirtualSector)
{
  uint32 CheckRegister;
  uint32 SectorPosition;
  uint32 BlockCount;
  uint32 SectorIndex;
  long unsigned int _1;
  long unsigned int _2;
  uint32 _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = C40_Ip_GetSectorID (VirtualSector_5(D));
  C40_Ip_u32SectorId = _1;
  # DEBUG BEGIN_STMT
  _2 = 1 << _1;
  C40_Ip_u32BitPosition = _2;
  # DEBUG BEGIN_STMT
  if (VirtualSector_5(D) <= 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CheckRegister_15 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[2];
  # DEBUG CheckRegister => CheckRegister_15
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (VirtualSector_5(D) == 272)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  CheckRegister_14 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLKU_SPELOCK[0];
  # DEBUG CheckRegister => CheckRegister_14
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SectorIndex_9 = VirtualSector_5(D) + 4294967280;
  # DEBUG SectorIndex => SectorIndex_9
  # DEBUG BEGIN_STMT
  BlockCount_10 = SectorIndex_9 >> 7;
  # DEBUG BlockCount => BlockCount_10
  # DEBUG BEGIN_STMT
  SectorPosition_11 = SectorIndex_9 & 127;
  # DEBUG SectorPosition => SectorPosition_11
  # DEBUG BEGIN_STMT
  if (SectorPosition_11 <= 95)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CheckRegister_13 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SSPELOCK[BlockCount_10];
  # DEBUG CheckRegister => CheckRegister_13
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CheckRegister_12 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[BlockCount_10];
  # DEBUG CheckRegister => CheckRegister_12

  <bb 9> [local count: 1073741824]:
  # CheckRegister_3 = PHI <CheckRegister_15(3), CheckRegister_14(5), CheckRegister_13(7), CheckRegister_12(8)>
  # DEBUG CheckRegister => CheckRegister_3
  # DEBUG BEGIN_STMT
  _16 = _2 & CheckRegister_3;
  return _16;

}



;; Function C40_Ip_GetLock (C40_Ip_GetLock, funcdef_no=15, decl_uid=8135, cgraph_uid=16, symbol_order=28)

Modification phase of node C40_Ip_GetLock/28
C40_Ip_GetLock (C40_Ip_VirtualSectorsType VirtualSector)
{
  C40_Ip_StatusType ReturnCode;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (VirtualSector_2(D) > 272)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334800]:
  ReturnCode_6 = C40_Ip_GetLock.part.0 (VirtualSector_2(D));

  <bb 4> [local count: 1073741824]:
  # ReturnCode_1 = PHI <10212(2), ReturnCode_6(3)>
  # DEBUG ReturnCode => ReturnCode_1
  # DEBUG BEGIN_STMT
  return ReturnCode_1;

}



;; Function C40_Ip_ClearLockProtect (C40_Ip_ClearLockProtect, funcdef_no=18, decl_uid=8274, cgraph_uid=19, symbol_order=31)

Modification phase of node C40_Ip_ClearLockProtect/31
C40_Ip_ClearLockProtect (C40_Ip_VirtualSectorsType VirtualSector)
{
  uint32 SectorPosition;
  uint32 BlockCount;
  uint32 SectorIndex;
  long unsigned int _1;
  long unsigned int C40_Ip_u32BitPosition.22_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int C40_Ip_u32BitPosition.24_6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _10;
  long unsigned int C40_Ip_u32BitPosition.25_11;
  long unsigned int _12;
  long unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (VirtualSector_15(D) <= 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[2];
  C40_Ip_u32BitPosition.22_2 = C40_Ip_u32BitPosition;
  _3 = ~C40_Ip_u32BitPosition.22_2;
  _4 = _1 & _3;
  MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[2] ={v} _4;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (VirtualSector_15(D) == 272)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536112]:
  # DEBUG D#10 => VirtualSector_15(D)
  C40_Ip_ClearLockProtect.part.0 ();
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SectorIndex_16 = VirtualSector_15(D) + 4294967280;
  # DEBUG SectorIndex => SectorIndex_16
  # DEBUG BEGIN_STMT
  BlockCount_17 = SectorIndex_16 >> 7;
  # DEBUG BlockCount => BlockCount_17
  # DEBUG BEGIN_STMT
  SectorPosition_18 = SectorIndex_16 & 127;
  # DEBUG SectorPosition => SectorPosition_18
  # DEBUG BEGIN_STMT
  if (SectorPosition_18 <= 95)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SSPELOCK[BlockCount_17];
  C40_Ip_u32BitPosition.24_6 = C40_Ip_u32BitPosition;
  _7 = ~C40_Ip_u32BitPosition.24_6;
  _8 = _5 & _7;
  MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SSPELOCK[BlockCount_17] ={v} _8;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[BlockCount_17];
  C40_Ip_u32BitPosition.25_11 = C40_Ip_u32BitPosition;
  _12 = ~C40_Ip_u32BitPosition.25_11;
  _14 = _10 & _12;
  MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SPELOCK[BlockCount_17] ={v} _14;

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function C40_Ip_Compare (C40_Ip_Compare, funcdef_no=19, decl_uid=8130, cgraph_uid=20, symbol_order=32)

Modification phase of node C40_Ip_Compare/32
C40_Ip_Compare (uint32 LogicalAddress, uint32 Length, const uint8 * SourceAddressPtr)
{
  C40_Ip_StatusType _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Length_4(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 11700;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 59202;
  # DEBUG BEGIN_STMT
  if (SourceAddressPtr_6(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  C40_Ip_ProgramVerify (LogicalAddress_3(D), SourceAddressPtr_6(D), Length_4(D));
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 161061273]:
  # DEBUG BEGIN_STMT
  C40_Ip_EraseVerify (LogicalAddress_3(D), Length_4(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _10 = C40_Ip_eReadStatus;
  return _10;

}



;; Function C40_Ip_MainInterfaceWriteLogicalAddress (C40_Ip_MainInterfaceWriteLogicalAddress, funcdef_no=24, decl_uid=8264, cgraph_uid=25, symbol_order=37)

Modification phase of node C40_Ip_MainInterfaceWriteLogicalAddress/37
C40_Ip_MainInterfaceWriteLogicalAddress (uint32 Address)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(struct PFLASH_Type *)1076264960B].PFCPGM_PEADR_L ={v} Address_2(D);
  return;

}



;; Function C40_Ip_MainInterfaceSectorErase (C40_Ip_MainInterfaceSectorErase, funcdef_no=30, decl_uid=8145, cgraph_uid=31, symbol_order=43)

Modification phase of node C40_Ip_MainInterfaceSectorErase/43
C40_Ip_MainInterfaceSectorErase (C40_Ip_VirtualSectorsType VirtualSector, uint8 DomainIdValue)
{
  uint32 LogicalAddress;
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char C40_Ip_bAsync.28_5;
  long unsigned int _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReturnCode_14 = C40_Ip_MainInterfaceSectorErasePreCheck (VirtualSector_12(D));
  # DEBUG ReturnCode => ReturnCode_14
  # DEBUG BEGIN_STMT
  if (ReturnCode_14 == 23205)
    goto <bb 3>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_ClearAllErrorFlagsMainInterface ();
  # DEBUG BEGIN_STMT
  LogicalAddress_17 = C40_Ip_GetBaseAddressOfSector (VirtualSector_12(D));
  # DEBUG LogicalAddress => LogicalAddress_17
  # DEBUG BEGIN_STMT
  C40_Ip_u32ErasedSectorAddress = LogicalAddress_17;
  # DEBUG BEGIN_STMT
  ReturnCode_21 = C40_Ip_MainInterfaceWriteJobAddress (LogicalAddress_17, DomainIdValue_19(D));
  # DEBUG ReturnCode => ReturnCode_21
  # DEBUG BEGIN_STMT
  if (ReturnCode_21 == 11220)
    goto <bb 4>; [12.02%]
  else
    goto <bb 5>; [87.98%]

  <bb 4> [local count: 26122506]:
  # DEBUG BEGIN_STMT
  C40_Ip_ClearInterlockWrite ();

  <bb 5> [local count: 1073741824]:
  # ReturnCode_8 = PHI <ReturnCode_14(2), ReturnCode_21(3), 11220(4)>
  # DEBUG ReturnCode => ReturnCode_8
  # DEBUG BEGIN_STMT
  if (ReturnCode_8 == 23205)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].DATA[0] ={v} 4294967295;
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _2 = _1 | 16;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _4 = _3 & 4294967263;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _4;
  # DEBUG BEGIN_STMT
  C40_Ip_bAsync.28_5 = C40_Ip_bAsync;
  if (C40_Ip_bAsync.28_5 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  C40_Ip_FlashAccessCalloutStart ();
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _7 = _6 | 1;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _7;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return ReturnCode_8;

}



;; Function C40_Ip_MainInterfaceSectorEraseStatus (C40_Ip_MainInterfaceSectorEraseStatus, funcdef_no=31, decl_uid=8147, cgraph_uid=32, symbol_order=44)

Modification phase of node C40_Ip_MainInterfaceSectorEraseStatus/44
C40_Ip_MainInterfaceSectorEraseStatus ()
{
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int C40_Ip_u32ErasedSectorAddress.29_5;
  <unnamed type> _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReturnCode_10 = C40_Ip_MainInterfaceHVJobStatus ();
  # DEBUG ReturnCode => ReturnCode_10
  # DEBUG BEGIN_STMT
  if (ReturnCode_10 != 59202)
    goto <bb 3>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _2 = _1 & 4294967294;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _4 = _3 & 4294967279;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _4;
  # DEBUG BEGIN_STMT
  if (ReturnCode_10 == 23205)
    goto <bb 4>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 4> [local count: 143434728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_u32ErasedSectorAddress.29_5 = C40_Ip_u32ErasedSectorAddress;
  # DEBUG LogicalAddress => C40_Ip_u32ErasedSectorAddress.29_5
  # DEBUG Length => 8192
  # DEBUG SourceAddressPtr => 0B
  # DEBUG INLINE_ENTRY C40_Ip_Compare
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_eReadStatus = 59202;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_EraseVerify (C40_Ip_u32ErasedSectorAddress.29_5, 8192);
  # DEBUG BEGIN_STMT
  _13 = C40_Ip_eReadStatus;
  # DEBUG LogicalAddress => NULL
  # DEBUG Length => NULL
  # DEBUG SourceAddressPtr => NULL
  # DEBUG ReturnCode => _13
  # DEBUG BEGIN_STMT
  if (_13 != 23205)
    goto <bb 5>; [51.11%]
  else
    goto <bb 6>; [48.89%]

  <bb 5> [local count: 73309489]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 11892

  <bb 6> [local count: 1073741824]:
  # ReturnCode_6 = PHI <ReturnCode_10(2), ReturnCode_10(3), _13(4), 11892(5)>
  # DEBUG ReturnCode => ReturnCode_6
  # DEBUG BEGIN_STMT
  return ReturnCode_6;

}



;; Function C40_Ip_MainInterfaceWriteStatus (C40_Ip_MainInterfaceWriteStatus, funcdef_no=36, decl_uid=8154, cgraph_uid=37, symbol_order=49)

Modification phase of node C40_Ip_MainInterfaceWriteStatus/49
C40_Ip_MainInterfaceWriteStatus ()
{
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int C40_Ip_u32ProgrammedAddress.40_5;
  long unsigned int C40_Ip_u32ProgrammedLength.41_6;
  const uint8 * C40_Ip_pProgrammedData.42_7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReturnCode_12 = C40_Ip_MainInterfaceHVJobStatus ();
  # DEBUG ReturnCode => ReturnCode_12
  # DEBUG BEGIN_STMT
  if (ReturnCode_12 != 59202)
    goto <bb 3>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _2 = _1 & 4294967294;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _4 = _3 & 4294967039;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _4;
  # DEBUG BEGIN_STMT
  if (ReturnCode_12 == 23205)
    goto <bb 4>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 4> [local count: 143434728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_u32ProgrammedAddress.40_5 = C40_Ip_u32ProgrammedAddress;
  C40_Ip_u32ProgrammedLength.41_6 = C40_Ip_u32ProgrammedLength;
  C40_Ip_pProgrammedData.42_7 = C40_Ip_pProgrammedData;
  ReturnCode_16 = C40_Ip_Compare (C40_Ip_u32ProgrammedAddress.40_5, C40_Ip_u32ProgrammedLength.41_6, C40_Ip_pProgrammedData.42_7);
  # DEBUG ReturnCode => ReturnCode_16
  # DEBUG BEGIN_STMT
  if (ReturnCode_16 != 23205)
    goto <bb 5>; [51.11%]
  else
    goto <bb 6>; [48.89%]

  <bb 5> [local count: 73309489]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 13260

  <bb 6> [local count: 1073741824]:
  # ReturnCode_8 = PHI <ReturnCode_12(2), ReturnCode_12(3), ReturnCode_16(4), 13260(5)>
  # DEBUG ReturnCode => ReturnCode_8
  # DEBUG BEGIN_STMT
  return ReturnCode_8;

}



;; Function C40_Ip_CheckLockDomainID_CheckRegister (C40_Ip_CheckLockDomainID_CheckRegister, funcdef_no=41, decl_uid=8235, cgraph_uid=42, symbol_order=54)

Modification phase of node C40_Ip_CheckLockDomainID_CheckRegister/54
C40_Ip_CheckLockDomainID_CheckRegister (C40_Ip_VirtualSectorsType VirtualSector, uint32 * CheckRegister, uint32 * TempLockMasterRegister)
{
  uint32 SectorStep;
  uint32 DomainStep;
  uint32 SectorPosition;
  uint32 BlockCount;
  uint32 SectorIndex;
  long unsigned int C40_Ip_u32SectorId.43_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_u32SectorId.43_1 = C40_Ip_u32SectorId;
  SectorStep_13 = C40_Ip_u32SectorId.43_1 & 4294967292;
  # DEBUG SectorStep => SectorStep_13
  # DEBUG BEGIN_STMT
  if (VirtualSector_14(D) <= 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SETSLOCK[2];
  *CheckRegister_18(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = SectorStep_13 + 1076265984;
  *TempLockMasterRegister_21(D) = _3;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (VirtualSector_14(D) == 272)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLKU_SETSLOCK[0];
  *CheckRegister_18(D) = _4;
  # DEBUG BEGIN_STMT
  *TempLockMasterRegister_21(D) = 1076266112;
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SectorIndex_15 = VirtualSector_14(D) + 4294967280;
  # DEBUG SectorIndex => SectorIndex_15
  # DEBUG BEGIN_STMT
  BlockCount_16 = SectorIndex_15 >> 7;
  # DEBUG BlockCount => BlockCount_16
  # DEBUG BEGIN_STMT
  SectorPosition_17 = SectorIndex_15 & 127;
  # DEBUG SectorPosition => SectorPosition_17
  # DEBUG BEGIN_STMT
  if (SectorPosition_17 <= 95)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SSETSLOCK[BlockCount_16];
  *CheckRegister_18(D) = _5;
  # DEBUG BEGIN_STMT
  DomainStep_24 = BlockCount_16 << 4;
  # DEBUG DomainStep => DomainStep_24
  # DEBUG BEGIN_STMT
  _6 = SectorStep_13 + DomainStep_24;
  _7 = _6 + 1076266116;
  *TempLockMasterRegister_21(D) = _7;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct PFLASH_Type *)1076264960B].PFCBLK_SETSLOCK[BlockCount_16];
  *CheckRegister_18(D) = _8;
  # DEBUG BEGIN_STMT
  DomainStep_20 = BlockCount_16 << 5;
  # DEBUG DomainStep => DomainStep_20
  # DEBUG BEGIN_STMT
  _9 = SectorStep_13 + DomainStep_20;
  _10 = _9 + 1076265920;
  *TempLockMasterRegister_21(D) = _10;

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function C40_Ip_CheckLockDomainID (C40_Ip_CheckLockDomainID, funcdef_no=39, decl_uid=8231, cgraph_uid=40, symbol_order=52)

Modification phase of node C40_Ip_CheckLockDomainID/52
C40_Ip_CheckLockDomainID (C40_Ip_VirtualSectorsType VirtualSector, uint8 DomainIdValue)
{
  uint32 CheckRegister;
  uint32 ShiftValue;
  uint32 TempLockMasterRegister;
  uint8 LockDomainIDValue;
  C40_Ip_StatusType ReturnCode;
  long unsigned int C40_Ip_u32SectorId.10_1;
  long unsigned int _2;
  long unsigned int CheckRegister.11_3;
  long unsigned int C40_Ip_u32BitPosition.12_4;
  long unsigned int _5;
  long unsigned int TempLockMasterRegister.13_6;
  volatile uint32 * TempLockMasterRegister.15_7;
  long unsigned int _8;
  long unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  # DEBUG LockDomainIDValue => 0
  # DEBUG BEGIN_STMT
  TempLockMasterRegister = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ShiftValue => 0
  # DEBUG BEGIN_STMT
  CheckRegister = 0;
  # DEBUG BEGIN_STMT
  if (VirtualSector_16(D) != 272)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  C40_Ip_u32SectorId.10_1 = C40_Ip_u32SectorId;
  _2 = C40_Ip_u32SectorId.10_1 & 3;
  ShiftValue_17 = _2 * 8;
  # DEBUG ShiftValue => ShiftValue_17

  <bb 4> [local count: 1073741824]:
  # ShiftValue_11 = PHI <0(2), ShiftValue_17(3)>
  # DEBUG ShiftValue => ShiftValue_11
  # DEBUG BEGIN_STMT
  if (VirtualSector_16(D) <= 272)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  C40_Ip_CheckLockDomainID_CheckRegister (VirtualSector_16(D), &CheckRegister, &TempLockMasterRegister);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CheckRegister.11_3 = CheckRegister;
  C40_Ip_u32BitPosition.12_4 = C40_Ip_u32BitPosition;
  _5 = CheckRegister.11_3 & C40_Ip_u32BitPosition.12_4;
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 7> [local count: 536870913]:
  TempLockMasterRegister.13_6 = TempLockMasterRegister;
  if (TempLockMasterRegister.13_6 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  TempLockMasterRegister.15_7 = (volatile uint32 *) TempLockMasterRegister.13_6;
  _8 ={v} *TempLockMasterRegister.15_7;
  _9 = _8 >> ShiftValue_11;
  LockDomainIDValue_19 = (uint8) _9;
  # DEBUG LockDomainIDValue => LockDomainIDValue_19
  # DEBUG BEGIN_STMT
  if (LockDomainIDValue_19 != DomainIdValue_20(D))
    goto <bb 9>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 9> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 10212

  <bb 10> [local count: 1073741824]:
  # ReturnCode_10 = PHI <23205(6), 23205(7), 10212(9), 23205(8)>
  # DEBUG ReturnCode => ReturnCode_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TempLockMasterRegister ={v} {CLOBBER};
  CheckRegister ={v} {CLOBBER};
  return ReturnCode_10;

}



;; Function C40_Ip_SetLock (C40_Ip_SetLock, funcdef_no=13, decl_uid=8133, cgraph_uid=14, symbol_order=26)

Modification phase of node C40_Ip_SetLock/26
C40_Ip_SetLock (C40_Ip_VirtualSectorsType VirtualSector, uint8 DomainIdValue)
{
  C40_Ip_StatusType ReturnCode;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReturnCode_6 = C40_Ip_GetLock (VirtualSector_4(D));
  # DEBUG ReturnCode => ReturnCode_6
  # DEBUG BEGIN_STMT
  if (ReturnCode_6 == 10212)
    goto <bb 6>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (ReturnCode_6 == 59576)
    goto <bb 6>; [36.03%]
  else
    goto <bb 4>; [63.97%]

  <bb 4> [local count: 453335945]:
  # DEBUG BEGIN_STMT
  ReturnCode_9 = C40_Ip_CheckLockDomainID (VirtualSector_4(D), DomainIdValue_7(D));
  # DEBUG ReturnCode => ReturnCode_9
  # DEBUG BEGIN_STMT
  if (ReturnCode_9 == 23205)
    goto <bb 5>; [12.02%]
  else
    goto <bb 6>; [87.98%]

  <bb 5> [local count: 54490981]:
  # DEBUG BEGIN_STMT
  C40_Ip_SetLockProtect (VirtualSector_4(D));

  <bb 6> [local count: 1073741824]:
  # ReturnCode_1 = PHI <ReturnCode_6(2), 23205(3), ReturnCode_9(4), 23205(5)>
  # DEBUG ReturnCode => ReturnCode_1
  # DEBUG BEGIN_STMT
  return ReturnCode_1;

}



;; Function C40_Ip_ClearLock (C40_Ip_ClearLock, funcdef_no=17, decl_uid=8138, cgraph_uid=18, symbol_order=30)

Modification phase of node C40_Ip_ClearLock/30
C40_Ip_ClearLock (C40_Ip_VirtualSectorsType VirtualSector, uint8 DomainIdValue)
{
  C40_Ip_StatusType ReturnCode;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReturnCode_6 = C40_Ip_GetLock (VirtualSector_4(D));
  # DEBUG ReturnCode => ReturnCode_6
  # DEBUG BEGIN_STMT
  if (ReturnCode_6 == 10212)
    goto <bb 6>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (ReturnCode_6 == 64034)
    goto <bb 6>; [36.03%]
  else
    goto <bb 4>; [63.97%]

  <bb 4> [local count: 453335945]:
  # DEBUG BEGIN_STMT
  ReturnCode_9 = C40_Ip_CheckLockDomainID (VirtualSector_4(D), DomainIdValue_7(D));
  # DEBUG ReturnCode => ReturnCode_9
  # DEBUG BEGIN_STMT
  if (ReturnCode_9 == 23205)
    goto <bb 5>; [12.02%]
  else
    goto <bb 6>; [87.98%]

  <bb 5> [local count: 54490981]:
  # DEBUG BEGIN_STMT
  C40_Ip_ClearLockProtect (VirtualSector_4(D));

  <bb 6> [local count: 1073741824]:
  # ReturnCode_1 = PHI <ReturnCode_6(2), 23205(3), ReturnCode_9(4), 23205(5)>
  # DEBUG ReturnCode => ReturnCode_1
  # DEBUG BEGIN_STMT
  return ReturnCode_1;

}



;; Function C40_Ip_GetSectorNumberFromAddress (C40_Ip_GetSectorNumberFromAddress, funcdef_no=42, decl_uid=8140, cgraph_uid=43, symbol_order=55)

Modification phase of node C40_Ip_GetSectorNumberFromAddress/55
C40_Ip_GetSectorNumberFromAddress (uint32 TargetAddress)
{
  C40_Ip_VirtualSectorsType VirtualSectors;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = TargetAddress_6(D) + 3841982464;
  if (_1 <= 8191)
    goto <bb 6>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _2 = TargetAddress_6(D) + 4026531840;
  if (_2 <= 131071)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 348966093]:
  # DEBUG BEGIN_STMT
  VirtualSectors_7 = _2 >> 13;
  # DEBUG VirtualSectors => VirtualSectors_7
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 348966093]:
  VirtualSectors_3 = C40_Ip_GetSectorNumberFromAddress.part.0 (TargetAddress_6(D));

  <bb 6> [local count: 1073741824]:
  # VirtualSectors_4 = PHI <272(2), VirtualSectors_7(4), VirtualSectors_3(5)>
  # DEBUG VirtualSectors => VirtualSectors_4
  # DEBUG BEGIN_STMT
  return VirtualSectors_4;

}



;; Function C40_Ip_MainInterfaceWrite (C40_Ip_MainInterfaceWrite, funcdef_no=35, decl_uid=8152, cgraph_uid=36, symbol_order=48)

Modification phase of node C40_Ip_MainInterfaceWrite/48
C40_Ip_MainInterfaceWrite (uint32 LogicalAddress, uint32 Length, const uint8 * SourceAddressPtr, uint8 DomainIdValue)
{
  uint32 LocationWriteDataRegs;
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char C40_Ip_bAsync.30_4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  C40_Ip_u32LogicalAddressCheckFail = LogicalAddress_13(D);
  # DEBUG BEGIN_STMT
  C40_Ip_eOpStatus = 17;
  # DEBUG BEGIN_STMT
  ReturnCode_19 = C40_Ip_MainInterfaceWritePreCheck (LogicalAddress_13(D), Length_16(D), SourceAddressPtr_17(D));
  # DEBUG ReturnCode => ReturnCode_19
  # DEBUG BEGIN_STMT
  if (ReturnCode_19 == 23205)
    goto <bb 3>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  ReturnCode_21 = C40_Ip_Compare (LogicalAddress_13(D), Length_16(D), 0B);
  # DEBUG ReturnCode => ReturnCode_21
  # DEBUG BEGIN_STMT
  if (ReturnCode_21 != 23205)
    goto <bb 8>; [51.11%]
  else
    goto <bb 5>; [48.89%]

  <bb 5> [local count: 962666841]:
  # ReturnCode_7 = PHI <ReturnCode_19(2), ReturnCode_21(3)>
  # DEBUG ReturnCode => ReturnCode_7
  # DEBUG BEGIN_STMT
  if (ReturnCode_7 == 23205)
    goto <bb 6>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 6> [local count: 194843768]:
  # DEBUG BEGIN_STMT
  C40_Ip_ClearAllErrorFlagsMainInterface ();
  # DEBUG BEGIN_STMT
  ReturnCode_25 = C40_Ip_MainInterfaceWriteJobAddress (LogicalAddress_13(D), DomainIdValue_23(D));
  # DEBUG ReturnCode => ReturnCode_25
  # DEBUG BEGIN_STMT
  if (ReturnCode_25 == 11220)
    goto <bb 7>; [12.02%]
  else
    goto <bb 8>; [87.98%]

  <bb 7> [local count: 23420221]:
  # DEBUG BEGIN_STMT
  C40_Ip_ClearInterlockWrite ();

  <bb 8> [local count: 1073741824]:
  # ReturnCode_8 = PHI <ReturnCode_7(5), ReturnCode_25(6), 11220(7), 11892(3)>
  # DEBUG ReturnCode => ReturnCode_8
  # DEBUG BEGIN_STMT
  if (ReturnCode_8 == 23205)
    goto <bb 9>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 9> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  C40_Ip_u32ProgrammedAddress = LogicalAddress_13(D);
  # DEBUG BEGIN_STMT
  C40_Ip_u32ProgrammedLength = Length_16(D);
  # DEBUG BEGIN_STMT
  C40_Ip_pProgrammedData = SourceAddressPtr_17(D);
  # DEBUG BEGIN_STMT
  _1 = LogicalAddress_13(D) >> 2;
  LocationWriteDataRegs_30 = _1 & 31;
  # DEBUG LocationWriteDataRegs => LocationWriteDataRegs_30
  # DEBUG BEGIN_STMT
  C40_Ip_MainInterfaceFillDataBuff (LocationWriteDataRegs_30, SourceAddressPtr_17(D), Length_16(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _3 = _2 | 256;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _3;
  # DEBUG BEGIN_STMT
  C40_Ip_bAsync.30_4 = C40_Ip_bAsync;
  if (C40_Ip_bAsync.30_4 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 43986650]:
  # DEBUG BEGIN_STMT
  C40_Ip_FlashAccessCalloutStart ();
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].MCR;
  _6 = _5 | 1;
  MEM[(struct FLASH_Type *)1076805632B].MCR ={v} _6;

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return ReturnCode_8;

}



;; Function C40_Ip_GetBlockNumberFromAddress (C40_Ip_GetBlockNumberFromAddress, funcdef_no=44, decl_uid=8142, cgraph_uid=45, symbol_order=57)

Modification phase of node C40_Ip_GetBlockNumberFromAddress/57
C40_Ip_GetBlockNumberFromAddress (uint32 TargetAddress)
{
  C40_Ip_FlashBlocksNumberType BlockNumber;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = TargetAddress_5(D) + 3841982464;
  if (_1 <= 8191)
    goto <bb 6>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _2 = TargetAddress_5(D) + 4026531840;
  if (_2 <= 131071)
    goto <bb 6>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  _3 = TargetAddress_5(D) + 4290772992;
  if (_3 <= 2097151)
    goto <bb 5>; [65.00%]
  else
    goto <bb 6>; [35.00%]

  <bb 5> [local count: 294876349]:
  # DEBUG BEGIN_STMT
  BlockNumber_7 = C40_Ip_GetCodeBlockNumber (TargetAddress_5(D));
  # DEBUG BlockNumber => BlockNumber_7

  <bb 6> [local count: 1073741824]:
  # BlockNumber_4 = PHI <5(2), 4(3), BlockNumber_7(5), 255(4)>
  # DEBUG BlockNumber => BlockNumber_4
  # DEBUG BEGIN_STMT
  return BlockNumber_4;

}



;; Function C40_Ip_ArrayIntegrityCheck (C40_Ip_ArrayIntegrityCheck, funcdef_no=47, decl_uid=8163, cgraph_uid=48, symbol_order=60)

Modification phase of node C40_Ip_ArrayIntegrityCheck/60
C40_Ip_ArrayIntegrityCheck (uint32 SelectBlock, C40_Ip_ArrayIntegritySequenceType AddressSequence, C40_Ip_FlashBreakPointsType BreakPoints, const struct C40_Ip_MisrType * MisrSeedValues, uint8 DomainIdValue)
{
  uint32 WaitCounter;
  C40_Ip_StatusType ReturnCode;
  unsigned char _1;
  long unsigned int _2;
  signed int _3;
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
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG WaitCounter => 450
  # DEBUG BEGIN_STMT
  _1 = C40_Ip_CheckSelecBlock (SelectBlock_23(D));
  if (_1 == 0)
    goto <bb 16>; [52.23%]
  else
    goto <bb 4>; [47.77%]

  <bb 4> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  ReturnCode_25 = C40_Ip_UTestCheckBusy ();
  # DEBUG ReturnCode => ReturnCode_25
  # DEBUG BEGIN_STMT
  if (ReturnCode_25 == 23205)
    goto <bb 5>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 5> [local count: 174394999]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} 4193884569;
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _3 = (signed int) _2;
  if (_3 >= 0)
    goto <bb 16>; [61.14%]
  else
    goto <bb 6>; [38.86%]

  <bb 6> [local count: 67769897]:
  # DEBUG BEGIN_STMT
  ReturnCode_29 = C40_Ip_MainInterfaceWriteJobAddress (SelectBlock_23(D), DomainIdValue_27(D));
  # DEBUG ReturnCode => ReturnCode_29
  # DEBUG BEGIN_STMT
  if (ReturnCode_29 == 23205)
    goto <bb 7>; [21.72%]
  else
    goto <bb 11>; [78.28%]

  <bb 7> [local count: 14719622]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].DATA[0] ={v} 4294967295;
  # DEBUG BEGIN_STMT
  if (AddressSequence_36(D) == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 5004671]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _5 = _4 | 4;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _5;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 9714950]:
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _7 = _6 & 4294967291;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _7;

  <bb 10> [local count: 14719622]:
  # DEBUG BEGIN_STMT
  C40_Ip_UTestCheckBreakpoint (BreakPoints_39(D));
  # DEBUG BEGIN_STMT
  C40_Ip_SetSeedMisr (MisrSeedValues_41(D));
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _9 = _8 | 2;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _9;
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 53050275]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].DATA[0] ={v} 4294967295;
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _11 = _10 | 2;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _11;
  # DEBUG BEGIN_STMT
  _12 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _13 = _12 & 4294967293;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _13;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 770072698]:
  # DEBUG BEGIN_STMT
  WaitCounter_33 = WaitCounter_19 + 4294967295;
  # DEBUG WaitCounter => WaitCounter_33

  <bb 13> [local count: 823122974]:
  # WaitCounter_19 = PHI <450(11), WaitCounter_33(12)>
  # DEBUG WaitCounter => WaitCounter_19
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _15 = _14 & 1;
  if (_15 == 0)
    goto <bb 14>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 14> [local count: 777851210]:
  if (WaitCounter_19 != 0)
    goto <bb 12>; [99.00%]
  else
    goto <bb 15>; [1.00%]

  <bb 15> [local count: 53050276]:
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _17 = _16 & 2147483647;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _17;

  <bb 16> [local count: 1073741824]:
  # ReturnCode_18 = PHI <ReturnCode_25(4), 10212(5), 23205(10), ReturnCode_29(15), 11700(2)>
  # DEBUG ReturnCode => ReturnCode_18
  # DEBUG BEGIN_STMT
  return ReturnCode_18;

}



;; Function C40_Ip_CheckUserTestStatus (C40_Ip_CheckUserTestStatus, funcdef_no=49, decl_uid=8157, cgraph_uid=50, symbol_order=62)

Modification phase of node C40_Ip_CheckUserTestStatus/62
C40_Ip_CheckUserTestStatus (const struct C40_Ip_MisrType * MisrExpectedValues, C40_Ip_UtestStateType * TestResult)
{
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (MisrExpectedValues_9(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 3>; [81.25%]

  <bb 3> [local count: 872415233]:
  if (TestResult_10(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 4>; [81.25%]

  <bb 4> [local count: 708837377]:
  # DEBUG BEGIN_STMT
  *TestResult_10(D) = 0;
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _2 = _1 & 2;
  if (_2 != 0)
    goto <bb 5>; [65.00%]
  else
    goto <bb 9>; [35.00%]

  <bb 5> [local count: 460744295]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _4 = _3 & 1;
  if (_4 != 0)
    goto <bb 6>; [65.00%]
  else
    goto <bb 9>; [35.00%]

  <bb 6> [local count: 299483792]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _6 = _5 & 64;
  if (_6 != 0)
    goto <bb 7>; [52.23%]
  else
    goto <bb 8>; [47.77%]

  <bb 7> [local count: 156420384]:
  # DEBUG BEGIN_STMT
  *TestResult_10(D) = 23;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 143063407]:
  # DEBUG BEGIN_STMT
  ReturnCode_14 = C40_Ip_CheckUserTestStatusExecution (MisrExpectedValues_9(D), TestResult_10(D));
  # DEBUG ReturnCode => ReturnCode_14

  <bb 9> [local count: 1073741824]:
  # ReturnCode_7 = PHI <11700(3), 59202(5), 11220(4), ReturnCode_14(8), 23205(7), 11700(2)>
  # DEBUG ReturnCode => ReturnCode_7
  # DEBUG BEGIN_STMT
  return ReturnCode_7;

}



;; Function C40_Ip_ArrayIntegrityCheckSuspend (C40_Ip_ArrayIntegrityCheckSuspend, funcdef_no=51, decl_uid=8165, cgraph_uid=52, symbol_order=64)

Modification phase of node C40_Ip_ArrayIntegrityCheckSuspend/64
C40_Ip_ArrayIntegrityCheckSuspend ()
{
  uint32 WaitCounter;
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
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

  <bb 2> [local count: 276810640]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  # DEBUG WaitCounter => 450
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _2 = _1 & 2;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 3> [local count: 138405320]:
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _4 = _3 & 65;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 4> [local count: 69202660]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _6 = _5 | 64;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _6;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 1004539164]:
  # DEBUG BEGIN_STMT
  WaitCounter_18 = WaitCounter_14 + 4294967295;
  # DEBUG WaitCounter => WaitCounter_18

  <bb 6> [local count: 1073741824]:
  # WaitCounter_14 = PHI <450(4), WaitCounter_18(5)>
  # DEBUG WaitCounter => WaitCounter_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _8 = _7 & 1;
  if (_8 == 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 7> [local count: 1014686024]:
  if (WaitCounter_14 != 0)
    goto <bb 5>; [99.00%]
  else
    goto <bb 8>; [1.00%]

  <bb 8> [local count: 69202661]:
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _10 = _9 & 64;
  if (_10 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 34601330]:
  _11 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _12 = _11 & 1;
  if (_12 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 51901996]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 10212

  <bb 11> [local count: 276810641]:
  # ReturnCode_13 = PHI <10212(10), 10212(3), 23205(9), 10212(2)>
  # DEBUG ReturnCode => ReturnCode_13
  # DEBUG BEGIN_STMT
  return ReturnCode_13;

}



;; Function C40_Ip_ArrayIntegrityCheckResume (C40_Ip_ArrayIntegrityCheckResume, funcdef_no=54, decl_uid=8167, cgraph_uid=55, symbol_order=67)

Modification phase of node C40_Ip_ArrayIntegrityCheckResume/67
C40_Ip_ArrayIntegrityCheckResume ()
{
  C40_Ip_StatusType ReturnCode;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _2 = _1 & 2;
  if (_2 != 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 7>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _4 = _3 & 65;
  if (_4 == 65)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 141261474]:
  # DEBUG BEGIN_STMT
  ReturnCode_13 = C40_Ip_ArrayIntegrityResumeSuppened ();
  # DEBUG ReturnCode => ReturnCode_13
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 556670711]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _6 = _5 & 512;
  if (_6 != 0)
    goto <bb 6>; [47.77%]
  else
    goto <bb 7>; [52.23%]

  <bb 6> [local count: 265921598]:
  # DEBUG BEGIN_STMT
  ReturnCode_11 = C40_Ip_ArrayIntegrityResumeBroken ();
  # DEBUG ReturnCode => ReturnCode_11

  <bb 7> [local count: 1073741824]:
  # ReturnCode_7 = PHI <23205(5), 10212(2), ReturnCode_13(4), ReturnCode_11(6)>
  # DEBUG ReturnCode => ReturnCode_7
  # DEBUG BEGIN_STMT
  return ReturnCode_7;

}



;; Function C40_Ip_UserMarginReadCheck (C40_Ip_UserMarginReadCheck, funcdef_no=55, decl_uid=8173, cgraph_uid=56, symbol_order=68)

Modification phase of node C40_Ip_UserMarginReadCheck/68
C40_Ip_UserMarginReadCheck (uint32 SelectBlock, C40_Ip_FlashBreakPointsType BreakPoints, C40_Ip_MarginOptionType MarginLevel, const struct C40_Ip_MisrType * MisrSeedValues, uint8 DomainIdValue)
{
  uint32 WaitCounter;
  C40_Ip_StatusType ReturnCode;
  unsigned char _1;
  long unsigned int _2;
  signed int _3;
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
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 23205
  # DEBUG BEGIN_STMT
  # DEBUG WaitCounter => 450
  # DEBUG BEGIN_STMT
  _1 = C40_Ip_CheckSelecBlock (SelectBlock_27(D));
  if (_1 == 0)
    goto <bb 16>; [52.23%]
  else
    goto <bb 4>; [47.77%]

  <bb 4> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  ReturnCode_29 = C40_Ip_UTestCheckBusy ();
  # DEBUG ReturnCode => ReturnCode_29
  # DEBUG BEGIN_STMT
  if (ReturnCode_29 == 23205)
    goto <bb 5>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 5> [local count: 174394999]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} 4193884569;
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _3 = (signed int) _2;
  if (_3 >= 0)
    goto <bb 16>; [61.14%]
  else
    goto <bb 6>; [38.86%]

  <bb 6> [local count: 67769897]:
  # DEBUG BEGIN_STMT
  ReturnCode_33 = C40_Ip_MainInterfaceWriteJobAddress (SelectBlock_27(D), DomainIdValue_31(D));
  # DEBUG ReturnCode => ReturnCode_33
  # DEBUG BEGIN_STMT
  if (ReturnCode_33 == 23205)
    goto <bb 7>; [12.02%]
  else
    goto <bb 11>; [87.98%]

  <bb 7> [local count: 8145942]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].DATA[0] ={v} 4294967295;
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _5 = _4 | 4;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _5;
  # DEBUG BEGIN_STMT
  C40_Ip_UTestCheckBreakpoint (BreakPoints_41(D));
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _7 = _6 | 32;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _7;
  # DEBUG BEGIN_STMT
  if (MarginLevel_44(D) == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 2769620]:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _9 = _8 | 16;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _9;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 5376321]:
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _11 = _10 & 4294967279;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _11;

  <bb 10> [local count: 8145942]:
  # DEBUG BEGIN_STMT
  C40_Ip_SetSeedMisr (MisrSeedValues_47(D));
  # DEBUG BEGIN_STMT
  _12 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _13 = _12 | 2;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _13;
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 59623955]:
  # DEBUG BEGIN_STMT
  MEM[(struct FLASH_Type *)1076805632B].DATA[0] ={v} 4294967295;
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _15 = _14 | 2;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _15;
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _17 = _16 & 4294967293;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _17;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 865495604]:
  # DEBUG BEGIN_STMT
  WaitCounter_37 = WaitCounter_23 + 4294967295;
  # DEBUG WaitCounter => WaitCounter_37

  <bb 13> [local count: 925119560]:
  # WaitCounter_23 = PHI <450(11), WaitCounter_37(12)>
  # DEBUG WaitCounter => WaitCounter_23
  # DEBUG BEGIN_STMT
  _18 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _19 = _18 & 1;
  if (_19 == 0)
    goto <bb 14>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 14> [local count: 874237984]:
  if (WaitCounter_23 != 0)
    goto <bb 12>; [99.00%]
  else
    goto <bb 15>; [1.00%]

  <bb 15> [local count: 59623956]:
  # DEBUG BEGIN_STMT
  _20 ={v} MEM[(struct FLASH_Type *)1076805632B].UT0;
  _21 = _20 & 2147483647;
  MEM[(struct FLASH_Type *)1076805632B].UT0 ={v} _21;

  <bb 16> [local count: 1073741824]:
  # ReturnCode_22 = PHI <ReturnCode_29(4), 10212(5), 23205(10), ReturnCode_33(15), 11700(2)>
  # DEBUG ReturnCode => ReturnCode_22
  # DEBUG BEGIN_STMT
  return ReturnCode_22;

}



;; Function C40_Ip_GetFailedAddress (C40_Ip_GetFailedAddress, funcdef_no=56, decl_uid=8175, cgraph_uid=57, symbol_order=69)

Modification phase of node C40_Ip_GetFailedAddress/69
C40_Ip_GetFailedAddress ()
{
  uint32 TempADR;
  uint32 Temp;
  uint32 AddrOffset;
  uint32 CheckRegionBlockError;
  uint32 Addr;
  long unsigned int _1;
  <unnamed type> C40_Ip_eOpStatus.49_2;
  long unsigned int C40_Ip_u32LogicalAddressCheckFail.50_3;
  long unsigned int _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Addr => 4294967295
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TempADR_8 ={v} MEM[(struct FLASH_Type *)1076805632B].ADR;
  # DEBUG TempADR => TempADR_8
  # DEBUG BEGIN_STMT
  _1 = TempADR_8 >> 1;
  AddrOffset_9 = _1 & 262143;
  # DEBUG AddrOffset => AddrOffset_9
  # DEBUG BEGIN_STMT
  C40_Ip_eOpStatus.49_2 = C40_Ip_eOpStatus;
  if (C40_Ip_eOpStatus.49_2 == 17)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  C40_Ip_u32LogicalAddressCheckFail.50_3 = C40_Ip_u32LogicalAddressCheckFail;
  Temp_11 = C40_Ip_u32LogicalAddressCheckFail.50_3 & 127;
  # DEBUG Temp => Temp_11
  # DEBUG BEGIN_STMT
  _4 = AddrOffset_9 << 3;
  AddrOffset_12 = _4 + Temp_11;
  # DEBUG AddrOffset => AddrOffset_12
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  AddrOffset_10 = AddrOffset_9 << 3;
  # DEBUG AddrOffset => AddrOffset_10

  <bb 5> [local count: 1073741823]:
  # AddrOffset_6 = PHI <AddrOffset_12(3), AddrOffset_10(4)>
  # DEBUG AddrOffset => AddrOffset_6
  # DEBUG BEGIN_STMT
  CheckRegionBlockError_13 = TempADR_8 & 20447232;
  # DEBUG CheckRegionBlockError => CheckRegionBlockError_13
  # DEBUG BEGIN_STMT
  switch (CheckRegionBlockError_13) <default: <L10> [20.00%], case 524288: <L3> [20.00%], case 1048576: <L4> [20.00%], case 2097152: <L5> [20.00%], case 16777216: <L6> [20.00%]>

  <bb 6> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  Addr_17 = AddrOffset_6 + 4194304;
  # DEBUG Addr => Addr_17
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 214748364]:
<L4>:
  # DEBUG BEGIN_STMT
  Addr_16 = AddrOffset_6 + 5242880;
  # DEBUG Addr => Addr_16
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 214748364]:
<L5>:
  # DEBUG BEGIN_STMT
  Addr_15 = AddrOffset_6 + 268435456;
  # DEBUG Addr => Addr_15
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 214748364]:
<L6>:
  # DEBUG BEGIN_STMT
  Addr_14 = AddrOffset_6 + 452984832;
  # DEBUG Addr => Addr_14
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # Addr_5 = PHI <Addr_17(6), Addr_16(7), Addr_15(8), Addr_14(9), 4294967295(5)>
<L10>:
  # DEBUG Addr => Addr_5
  # DEBUG BEGIN_STMT
  return Addr_5;

}



;; Function C40_Ip_SetAsyncMode (C40_Ip_SetAsyncMode, funcdef_no=57, decl_uid=8177, cgraph_uid=58, symbol_order=70)

Modification phase of node C40_Ip_SetAsyncMode/70
C40_Ip_SetAsyncMode (const boolean Async)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  C40_Ip_bAsync = Async_2(D);
  return;

}


