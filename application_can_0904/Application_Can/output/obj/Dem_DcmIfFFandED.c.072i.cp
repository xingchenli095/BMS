
IPA constant propagation start:
Determining dynamic type for call: _8 = Dem_CopyOBDFreezeFrameInfo (_7, &OdbFFSize, SelectedEntryIdx.21_2);
  Starting walk at: _8 = Dem_CopyOBDFreezeFrameInfo (_7, &OdbFFSize, SelectedEntryIdx.21_2);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EntryExists_17 = Dem_SelectEntryOfOBDFreezeFrameEvent (&SelectedEntryIdx, 0);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: _8 = Dem_CopyOBDFreezeFrameInfo (_7, &OdbFFSize, SelectedEntryIdx.21_2);
  Starting walk at: _8 = Dem_CopyOBDFreezeFrameInfo (_7, &OdbFFSize, SelectedEntryIdx.21_2);
  instance pointer: &OdbFFSize  Outer instance pointer: OdbFFSize offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EntryExists_17 = Dem_SelectEntryOfOBDFreezeFrameEvent (&SelectedEntryIdx, 0);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: Dem_CopyFFInfo.isra.0 (FFIndClass_31, FFEntryData_33, _13);
  Starting walk at: Dem_CopyFFInfo.isra.0 (FFIndClass_31, FFEntryData_33, _13);
  instance pointer: FFIndClass_31  Outer instance pointer: &Dem_FFClass[_6] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dem_CopyFFInfo.isra.0 (FFIndClass_31, FFEntryData_33, _13);
  Starting walk at: Dem_CopyFFInfo.isra.0 (FFIndClass_31, FFEntryData_33, _13);
  instance pointer: FFEntryData_33  Outer instance pointer: FFEntryData_33 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_8 = Dem_SizeOfFF (2, FFIndClass_31);
  Function call may change dynamic type:NumFFSegs_35 = Dem_GetNumFFSegs (2, FFIndClass_31);
  Function call may change dynamic type:FFEntryData_33 = Dem_FFEntryData (EvMemEntry.29_7, FFIndClass_31, FFIndex_27);
  Function call may change dynamic type:_5 = Dem_GbiFFClassIdx (EventId_18(D));
  Function call may change dynamic type:FFIndex_27 = Dem_CheckFFRecNumStored (EvMemEntry.27_1, RecordNumber_25(D));
  Function call may change dynamic type:MaxNumFF_24 = Dem_GbiMaxNumFFRecs (EventId_18(D));
  Function call may change dynamic type:EntryExists_20 = Dem_SearchForEntry (EventId_18(D), &EvMemEntry, 0B);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: Dem_CopyFFInfo.isra.0 (FFIndClass_31, FFEntryData_33, _13);
  Starting walk at: Dem_CopyFFInfo.isra.0 (FFIndClass_31, FFEntryData_33, _13);
  instance pointer: _13  Outer instance pointer: _13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_8 = Dem_SizeOfFF (2, FFIndClass_31);
  Function call may change dynamic type:NumFFSegs_35 = Dem_GetNumFFSegs (2, FFIndClass_31);
  Function call may change dynamic type:FFEntryData_33 = Dem_FFEntryData (EvMemEntry.29_7, FFIndClass_31, FFIndex_27);
  Function call may change dynamic type:_5 = Dem_GbiFFClassIdx (EventId_18(D));
  Function call may change dynamic type:FFIndex_27 = Dem_CheckFFRecNumStored (EvMemEntry.27_1, RecordNumber_25(D));
  Function call may change dynamic type:MaxNumFF_24 = Dem_GbiMaxNumFFRecs (EventId_18(D));
  Function call may change dynamic type:EntryExists_20 = Dem_SearchForEntry (EventId_18(D), &EvMemEntry, 0B);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  Starting walk at: _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  instance pointer: EDClass_37  Outer instance pointer: &Dem_EDClass[_5] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  Starting walk at: _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  instance pointer: &EDSegment  Outer instance pointer: EDSegment offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dem_GbiEDClassIdx (EventId_35);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_29(D), &DTCSelection);
Determining dynamic type for call: _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  Starting walk at: _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  instance pointer: &EDStartByte  Outer instance pointer: EDStartByte offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dem_GbiEDClassIdx (EventId_35);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_29(D), &DTCSelection);
Determining dynamic type for call: _6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Starting walk at: _6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  instance pointer: &NextAvailableRecNum  Outer instance pointer: NextAvailableRecNum offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  Function call may change dynamic type:Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
Determining dynamic type for call: _6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Starting walk at: _6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  instance pointer: &FFKind  Outer instance pointer: FFKind offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  Function call may change dynamic type:Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
Determining dynamic type for call: Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Starting walk at: Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  instance pointer: BufSize_30(D)  Outer instance pointer: BufSize_30(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  Function call may change dynamic type:Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
Determining dynamic type for call: Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Starting walk at: Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  instance pointer: DestBuffer_29(D)  Outer instance pointer: DestBuffer_29(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  Function call may change dynamic type:Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
Determining dynamic type for call: Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Starting walk at: Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  instance pointer: BufSize_30(D)  Outer instance pointer: BufSize_30(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  Function call may change dynamic type:Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);
Determining dynamic type for call: Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Starting walk at: Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  instance pointer: DestBuffer_29(D)  Outer instance pointer: DestBuffer_29(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:_6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  Function call may change dynamic type:Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_5 = Dem_GbiDTCKind (EventId_34);
  Function call may change dynamic type:Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  Function call may change dynamic type:_9 = Dem_GbiFFClassIdx (EventId_34);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dem_CopyFFInfo.isra.0/58:
  Jump functions of caller  Dem_FindEDNumIndex/57:
  Jump functions of caller  Dem_AssembleExtendedDataSeg/55:
  Jump functions of caller  Dem_SizeOfEDSegment/54:
  Jump functions of caller  Dem_GbiEDClassIdx/52:
  Jump functions of caller  Dem_CheckFFRecNumValid/51:
  Jump functions of caller  Dem_SizeOfFFSegment/50:
  Jump functions of caller  Dem_SizeOfFF/48:
  Jump functions of caller  Dem_GetNumFFSegs/47:
  Jump functions of caller  Dem_FFEntryData/46:
  Jump functions of caller  Dem_CheckFFRecNumStored/44:
  Jump functions of caller  Dem_GbiMaxNumFFRecs/43:
  Jump functions of caller  Dem_GbiFFRecNumClassIdx/41:
  Jump functions of caller  TS_MemCpy32/40:
  Jump functions of caller  Dem_SelectEntryOfOBDFreezeFrameEvent/36:
  Jump functions of caller  Dem_GbiFFClassIdx/35:
  Jump functions of caller  Dem_GbiDTCKind/34:
  Jump functions of caller  Dem_CheckForTriggerNvmWriteGateEntry/33:
  Jump functions of caller  Dem_CheckForImmediateEntryStorage/32:
  Jump functions of caller  Dem_ClearAgedEventEntry/31:
  Jump functions of caller  Dem_IntValEntryData/30:
  Jump functions of caller  Dem_SearchForEntry/29:
  Jump functions of caller  Dem_GbiNumAgingCycles/28:
  Jump functions of caller  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27:
  Jump functions of caller  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26:
  Jump functions of caller  Dem_DoDTCSelection/25:
  Jump functions of caller  Dem_GetDTCSelection/24:
  Jump functions of caller  Det_ASR40_ReportError/23:
  Jump functions of caller  Dem_FindNextEDRecForReporting/21:
  Jump functions of caller  Dem_CopyOBDFreezeFrameInfo/20:
  Jump functions of caller  Dem_SizeOfOBDFreezeFrameInfo/19:
  Jump functions of caller  Dem_CollectOBDFreezeFrameInfo/18:
    callsite  Dem_CollectOBDFreezeFrameInfo/18 -> Dem_CopyOBDFreezeFrameInfo/20 : 
       param 0: PASS THROUGH: 3, op pointer_plus_expr 2
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_SizeOfFFInfo/16:
  Jump functions of caller  Dem_CollectFFInfo/15:
    callsite  Dem_CollectFFInfo/15 -> Dem_CopyFFInfo.isra.0/58 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 4, op pointer_plus_expr 2
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dem_FindNextFFRecForReporting/14:
  Jump functions of caller  Dem_GetSizeOfExtendedDataRecordSelection/13:
  Jump functions of caller  Dem_GetNextExtendedDataRecord/12:
    callsite  Dem_GetNextExtendedDataRecord/12 -> Dem_FindNextEDRecForReporting/21 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  Dem_GetSizeOfFreezeFrameSelection/11:
    callsite  Dem_GetSizeOfFreezeFrameSelection/11 -> Dem_SizeOfFFInfo/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: CONST: 255
         value: 0xff, mask: 0x0
         Unknown VR
    callsite  Dem_GetSizeOfFreezeFrameSelection/11 -> Dem_SizeOfOBDFreezeFrameInfo/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_GetSizeOfFreezeFrameSelection/11 -> Dem_SizeOfFFInfo/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_GetSizeOfFreezeFrameSelection/11 -> Dem_SizeOfOBDFreezeFrameInfo/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_GetNextFreezeFrameData/10:
    callsite  Dem_GetNextFreezeFrameData/10 -> Dem_CollectFFInfo/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_GetNextFreezeFrameData/10 -> Dem_FindNextFFRecForReporting/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dem_GetNextFreezeFrameData/10 -> Dem_CollectOBDFreezeFrameInfo/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_SelectExtendedDataRecord/9:
  Jump functions of caller  Dem_SelectFreezeFrameData/8:
  Jump functions of caller  Dem_ResetDataRecordSelector/7:
  Jump functions of caller  Dem_InitDataRecordSelector/6:
  Jump functions of caller  Dem_EnableDTCRecordUpdate/5:
  Jump functions of caller  Dem_DisableDTCRecordUpdate/4:
  Jump functions of caller  Dem_InitEventMemoryProcessor/3:

 Propagating constants:

Not considering Dem_GetSizeOfExtendedDataRecordSelection for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetNextExtendedDataRecord for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetSizeOfFreezeFrameSelection for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetNextFreezeFrameData for cloning; -fipa-cp-clone disabled.
Not considering Dem_SelectExtendedDataRecord for cloning; -fipa-cp-clone disabled.
Not considering Dem_SelectFreezeFrameData for cloning; -fipa-cp-clone disabled.
Not considering Dem_ResetDataRecordSelector for cloning; -fipa-cp-clone disabled.
Not considering Dem_InitDataRecordSelector for cloning; -fipa-cp-clone disabled.
Not considering Dem_EnableDTCRecordUpdate for cloning; -fipa-cp-clone disabled.
Not considering Dem_DisableDTCRecordUpdate for cloning; -fipa-cp-clone disabled.
Not considering Dem_InitEventMemoryProcessor for cloning; -fipa-cp-clone disabled.

overall_size: 900, max_new_size: 11001
 - context independent values, size: 41, time_benefit: 1.404800
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 34, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 24, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 21, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dem_CopyFFInfo.isra.0/58:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dem_FFClassType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_FindNextEDRecForReporting/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dem_EDClassType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dem_EDSegmentType * * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         Dem_EDStartByteType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_CopyOBDFreezeFrameInfo/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         uint16 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_SizeOfOBDFreezeFrameInfo/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_CollectOBDFreezeFrameInfo/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
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
  Node: Dem_SizeOfFFInfo/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 2 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x2, mask = 0x0
         Dem_FFKindType [2, 2]
        AGGS VARIABLE
    param [2]: VARIABLE
               255 [loc_time: 2, loc_size: 37, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_CollectFFInfo/15:
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
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_FindNextFFRecForReporting/14:
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
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_FFKindType * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: Dem_GetSizeOfExtendedDataRecordSelection/13:
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
  Node: Dem_GetNextExtendedDataRecord/12:
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
  Node: Dem_GetSizeOfFreezeFrameSelection/11:
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
  Node: Dem_GetNextFreezeFrameData/10:
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
  Node: Dem_SelectExtendedDataRecord/9:
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
  Node: Dem_SelectFreezeFrameData/8:
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
  Node: Dem_ResetDataRecordSelector/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_InitDataRecordSelector/6:
  Node: Dem_EnableDTCRecordUpdate/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DisableDTCRecordUpdate/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_InitEventMemoryProcessor/3:

IPA decision stage:

 - Creating a specialized node of Dem_SizeOfFFInfo/16 for all known contexts.
    replacing param #1 FFKind with const 2
 - Creating a specialized node of Dem_CollectOBDFreezeFrameInfo/18 for all known contexts.
    replacing param #1 RecordNumber with const 0
 - Creating a specialized node of Dem_CopyOBDFreezeFrameInfo/20 for all known contexts.
 - Creating a specialized node of Dem_FindNextFFRecForReporting/14 for all known contexts.
Propagated bits info for function Dem_CopyOBDFreezeFrameInfo.constprop/61:
 param 1: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_CollectOBDFreezeFrameInfo.constprop/60:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Dem_SizeOfFFInfo.constprop/59:
 param 1: value = 0x2, mask = 0x0
Propagated bits info for function Dem_CopyFFInfo.isra.0/58:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dem_FindNextEDRecForReporting/21:
 param 0: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_CopyOBDFreezeFrameInfo/20:
 param 1: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_CollectOBDFreezeFrameInfo/18:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Dem_SizeOfFFInfo/16:
 param 1: value = 0x2, mask = 0x0

IPA constant propagation end

Reclaiming functions: Dem_CopyOBDFreezeFrameInfo/20 Dem_CollectOBDFreezeFrameInfo/18 Dem_SizeOfFFInfo/16 Dem_FindNextFFRecForReporting/14
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dem_FindNextFFRecForReporting.constprop.0/62 (Dem_FindNextFFRecForReporting.constprop) @06f2bee0
  Type: function definition analyzed
  Visibility:
  References: Dem_FFRecNumerationClass/42 (read)Dem_FFRecNumerationClass/42 (read)
  Referring: 
  Clone of Dem_FindNextFFRecForReporting/14
  Availability: local
  Function flags: count:118111600 (estimated locally) local optimize_size
  Called by: Dem_GetNextFreezeFrameData/10 (489538498 (estimated locally),0.46 per call) 
  Calls: Dem_GbiFFRecNumClassIdx/41 (118111600 (estimated locally),1.00 per call) 
Dem_CopyOBDFreezeFrameInfo.constprop.0/61 (Dem_CopyOBDFreezeFrameInfo.constprop) @06f2bd20
  Type: function definition analyzed
  Visibility:
  References: Dem_EntryOBDFF/38 (addr)Dem_PidClass/39 (read)Dem_PidClass/39 (read)
  Referring: 
  Clone of Dem_CopyOBDFreezeFrameInfo/20
  Availability: local
  Function flags: count:357878150 (estimated locally) local optimize_size
  Called by: Dem_CollectOBDFreezeFrameInfo.constprop/60 (59294300 (estimated locally),0.06 per call) 
  Calls: TS_MemCpy32/40 (715863676 (estimated locally),2.00 per call) 
Dem_CollectOBDFreezeFrameInfo.constprop.0/60 (Dem_CollectOBDFreezeFrameInfo.constprop) @06f2ba80
  Type: function definition analyzed
  Visibility:
  References: Dem_EventMem/37 (read)
  Referring: 
  Clone of Dem_CollectOBDFreezeFrameInfo/18
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dem_GetNextFreezeFrameData/10 (99082592 (estimated locally),0.09 per call) 
  Calls: SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (1073741824 (estimated locally),1.00 per call) Dem_SelectEntryOfOBDFreezeFrameEvent/36 (1073741824 (estimated locally),1.00 per call) Dem_CopyOBDFreezeFrameInfo.constprop/61 (59294300 (estimated locally),0.06 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (1073741824 (estimated locally),1.00 per call) 
Dem_SizeOfFFInfo.constprop.0/59 (Dem_SizeOfFFInfo.constprop) @06d77ee0
  Type: function definition analyzed
  Visibility:
  References: Dem_FFClass/45 (addr)
  Referring: 
  Clone of Dem_SizeOfFFInfo/16
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dem_GetSizeOfFreezeFrameSelection/11 (17371491 (estimated locally),0.02 per call) Dem_GetSizeOfFreezeFrameSelection/11 (13855501 (estimated locally),0.01 per call) 
  Calls: SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (1073741824 (estimated locally),1.00 per call) Dem_SearchForEntry/29 (1073741824 (estimated locally),1.00 per call) Dem_GbiMaxNumFFRecs/43 (217325345 (estimated locally),0.20 per call) Dem_CheckFFRecNumStored/44 (43986650 (estimated locally),0.04 per call) Dem_GbiFFClassIdx/35 (26444774 (estimated locally),0.02 per call) Dem_SizeOfFF/48 (26444774 (estimated locally),0.02 per call) Dem_GetNumFFSegs/47 (26444774 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (1073741824 (estimated locally),1.00 per call) 
Dem_CopyFFInfo.isra.0/58 (Dem_CopyFFInfo.isra.0) @06e0b380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_FFSegment/49 (addr)Dem_FFSegment/49 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Dem_CollectFFInfo/15 (10506211 (estimated locally),0.01 per call) 
  Calls: TS_MemCpy32/40 (467112053 (estimated locally),3.95 per call) Dem_SizeOfFFSegment/50 (467112053 (estimated locally),3.95 per call) 
Dem_FindEDNumIndex/57 (Dem_FindEDNumIndex) @06dd5d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfExtendedDataRecordSelection/13 (34070669 (estimated locally),0.03 per call) 
  Calls: 
Dem_EDSegment/56 (Dem_EDSegment) @06de12d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_FindNextEDRecForReporting/21 (addr)Dem_FindNextEDRecForReporting/21 (read)Dem_GetSizeOfExtendedDataRecordSelection/13 (addr)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_AssembleExtendedDataSeg/55 (Dem_AssembleExtendedDataSeg) @06dd58c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetNextExtendedDataRecord/12 (2162121 (estimated locally),0.00 per call) 
  Calls: 
Dem_SizeOfEDSegment/54 (Dem_SizeOfEDSegment) @06dd57e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfExtendedDataRecordSelection/13 (178860051 (estimated locally),0.17 per call) Dem_GetNextExtendedDataRecord/12 (6551883 (estimated locally),0.01 per call) 
  Calls: 
Dem_EDClass/53 (Dem_EDClass) @06ddbcf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetNextExtendedDataRecord/12 (addr)Dem_GetSizeOfExtendedDataRecordSelection/13 (addr)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiEDClassIdx/52 (Dem_GbiEDClassIdx) @06dd5620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfExtendedDataRecordSelection/13 (103244451 (estimated locally),0.10 per call) Dem_GetNextExtendedDataRecord/12 (72271116 (estimated locally),0.07 per call) 
  Calls: 
Dem_CheckFFRecNumValid/51 (Dem_CheckFFRecNumValid) @06dd50e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfFreezeFrameSelection/11 (85827525 (estimated locally),0.08 per call) 
  Calls: 
Dem_SizeOfFFSegment/50 (Dem_SizeOfFFSegment) @06dc3e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CopyFFInfo.isra.0/58 (467112053 (estimated locally),3.95 per call) 
  Calls: 
Dem_FFSegment/49 (Dem_FFSegment) @06dcfb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CopyFFInfo.isra.0/58 (addr)Dem_CopyFFInfo.isra.0/58 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_SizeOfFF/48 (Dem_SizeOfFF) @06dc3c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SizeOfFFInfo.constprop/59 (26444774 (estimated locally),0.02 per call) Dem_CollectFFInfo/15 (21993325 (estimated locally),0.02 per call) 
  Calls: 
Dem_GetNumFFSegs/47 (Dem_GetNumFFSegs) @06dc3b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SizeOfFFInfo.constprop/59 (26444774 (estimated locally),0.02 per call) Dem_CollectFFInfo/15 (21993325 (estimated locally),0.02 per call) 
  Calls: 
Dem_FFEntryData/46 (Dem_FFEntryData) @06dc3a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CollectFFInfo/15 (21993325 (estimated locally),0.02 per call) 
  Calls: 
Dem_FFClass/45 (Dem_FFClass) @06dcf678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SizeOfFFInfo.constprop.0/59 (addr)Dem_CollectFFInfo/15 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_CheckFFRecNumStored/44 (Dem_CheckFFRecNumStored) @06dc39a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SizeOfFFInfo.constprop/59 (43986650 (estimated locally),0.04 per call) Dem_CollectFFInfo/15 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_GbiMaxNumFFRecs/43 (Dem_GbiMaxNumFFRecs) @06dc38c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SizeOfFFInfo.constprop/59 (217325345 (estimated locally),0.20 per call) Dem_CollectFFInfo/15 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_FFRecNumerationClass/42 (Dem_FFRecNumerationClass) @06dc2f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_FindNextFFRecForReporting.constprop.0/62 (read)Dem_FindNextFFRecForReporting.constprop.0/62 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiFFRecNumClassIdx/41 (Dem_GbiFFRecNumClassIdx) @06dc3700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_FindNextFFRecForReporting.constprop/62 (118111600 (estimated locally),1.00 per call) 
  Calls: 
TS_MemCpy32/40 (TS_MemCpy32) @06dc3540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CopyOBDFreezeFrameInfo.constprop/61 (715863676 (estimated locally),2.00 per call) Dem_CopyFFInfo.isra.0/58 (467112053 (estimated locally),3.95 per call) 
  Calls: 
Dem_PidClass/39 (Dem_PidClass) @06dc2b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CopyOBDFreezeFrameInfo.constprop.0/61 (read)Dem_CopyOBDFreezeFrameInfo.constprop.0/61 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EntryOBDFF/38 (Dem_EntryOBDFF) @06dc2b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CopyOBDFreezeFrameInfo.constprop.0/61 (addr)
  Availability: not_available
  Varpool flags:
Dem_EventMem/37 (Dem_EventMem) @06dc2870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SizeOfOBDFreezeFrameInfo/19 (read)Dem_CollectOBDFreezeFrameInfo.constprop.0/60 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_SelectEntryOfOBDFreezeFrameEvent/36 (Dem_SelectEntryOfOBDFreezeFrameEvent) @06dc3380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CollectOBDFreezeFrameInfo.constprop/60 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfOBDFreezeFrameInfo/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_GbiFFClassIdx/35 (Dem_GbiFFClassIdx) @06dc30e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SizeOfFFInfo.constprop/59 (26444774 (estimated locally),0.02 per call) Dem_GetNextFreezeFrameData/10 (37467884 (estimated locally),0.03 per call) Dem_CollectFFInfo/15 (21993325 (estimated locally),0.02 per call) 
  Calls: 
Dem_GbiDTCKind/34 (Dem_GbiDTCKind) @06dc3000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfFreezeFrameSelection/11 (13855501 (estimated locally),0.01 per call) Dem_GetSizeOfFreezeFrameSelection/11 (103244451 (estimated locally),0.10 per call) Dem_GetNextFreezeFrameData/10 (489538498 (estimated locally),0.46 per call) 
  Calls: 
Dem_CheckForTriggerNvmWriteGateEntry/33 (Dem_CheckForTriggerNvmWriteGateEntry) @06d91700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_EnableDTCRecordUpdate/5 (13887090 (estimated locally),0.01 per call) 
  Calls: 
Dem_CheckForImmediateEntryStorage/32 (Dem_CheckForImmediateEntryStorage) @06d91620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_EnableDTCRecordUpdate/5 (306090 (estimated locally),0.00 per call) 
  Calls: 
Dem_ClearAgedEventEntry/31 (Dem_ClearAgedEventEntry) @06d91540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_EnableDTCRecordUpdate/5 (306090 (estimated locally),0.00 per call) 
  Calls: 
Dem_IntValEntryData/30 (Dem_IntValEntryData) @06d91460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_EnableDTCRecordUpdate/5 (927546 (estimated locally),0.00 per call) 
  Calls: 
Dem_SearchForEntry/29 (Dem_SearchForEntry) @06d91380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SizeOfFFInfo.constprop/59 (1073741824 (estimated locally),1.00 per call) Dem_GetSizeOfExtendedDataRecordSelection/13 (73112352 (estimated locally),0.07 per call) Dem_GetNextExtendedDataRecord/12 (9852455 (estimated locally),0.01 per call) Dem_EnableDTCRecordUpdate/5 (4582740 (estimated locally),0.00 per call) Dem_CollectFFInfo/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_GbiNumAgingCycles/28 (Dem_GbiNumAgingCycles) @06d912a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_EnableDTCRecordUpdate/5 (13887090 (estimated locally),0.01 per call) 
  Calls: 
SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06d85ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CollectOBDFreezeFrameInfo.constprop/60 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfFFInfo.constprop/59 (1073741824 (estimated locally),1.00 per call) Dem_GetSizeOfExtendedDataRecordSelection/13 (73112352 (estimated locally),0.07 per call) Dem_GetNextExtendedDataRecord/12 (9852455 (estimated locally),0.01 per call) Dem_EnableDTCRecordUpdate/5 (137224205 (estimated locally),0.13 per call) Dem_DisableDTCRecordUpdate/4 (4184642 (estimated locally),0.00 per call) Dem_DisableDTCRecordUpdate/4 (21737010 (estimated locally),0.02 per call) Dem_DisableDTCRecordUpdate/4 (8384399 (estimated locally),0.01 per call) Dem_CollectFFInfo/15 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfOBDFreezeFrameInfo/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06d85d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CollectOBDFreezeFrameInfo.constprop/60 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfFFInfo.constprop/59 (1073741824 (estimated locally),1.00 per call) Dem_GetSizeOfExtendedDataRecordSelection/13 (73112352 (estimated locally),0.07 per call) Dem_GetNextExtendedDataRecord/12 (9852455 (estimated locally),0.01 per call) Dem_EnableDTCRecordUpdate/5 (137224205 (estimated locally),0.13 per call) Dem_DisableDTCRecordUpdate/4 (34306051 (estimated locally),0.03 per call) Dem_CollectFFInfo/15 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfOBDFreezeFrameInfo/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_DoDTCSelection/25 (Dem_DoDTCSelection) @06d85c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SelectExtendedDataRecord/9 (40655964 (estimated locally),0.04 per call) Dem_SelectFreezeFrameData/8 (137224205 (estimated locally),0.13 per call) Dem_DisableDTCRecordUpdate/4 (137224205 (estimated locally),0.13 per call) 
  Calls: 
Dem_GetDTCSelection/24 (Dem_GetDTCSelection) @06d85b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfExtendedDataRecordSelection/13 (103244451 (estimated locally),0.10 per call) Dem_GetNextExtendedDataRecord/12 (72271116 (estimated locally),0.07 per call) Dem_GetSizeOfFreezeFrameSelection/11 (103244451 (estimated locally),0.10 per call) Dem_GetNextFreezeFrameData/10 (72271116 (estimated locally),0.07 per call) Dem_SelectExtendedDataRecord/9 (81311928 (estimated locally),0.08 per call) Dem_SelectFreezeFrameData/8 (274448410 (estimated locally),0.26 per call) Dem_EnableDTCRecordUpdate/5 (274448410 (estimated locally),0.26 per call) Dem_DisableDTCRecordUpdate/4 (274448410 (estimated locally),0.26 per call) 
  Calls: 
Det_ASR40_ReportError/23 (Det_ASR40_ReportError) @06d85a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetSizeOfExtendedDataRecordSelection/13 (200415699 (estimated locally),0.19 per call) Dem_GetSizeOfExtendedDataRecordSelection/13 (64100719 (estimated locally),0.06 per call) Dem_GetSizeOfExtendedDataRecordSelection/13 (181135950 (estimated locally),0.17 per call) Dem_GetSizeOfExtendedDataRecordSelection/13 (524845003 (estimated locally),0.49 per call) Dem_GetNextExtendedDataRecord/12 (140290989 (estimated locally),0.13 per call) Dem_GetNextExtendedDataRecord/12 (155198765 (estimated locally),0.14 per call) Dem_GetNextExtendedDataRecord/12 (181135951 (estimated locally),0.17 per call) Dem_GetNextExtendedDataRecord/12 (524845004 (estimated locally),0.49 per call) Dem_GetSizeOfFreezeFrameSelection/11 (200415699 (estimated locally),0.19 per call) Dem_GetSizeOfFreezeFrameSelection/11 (64100720 (estimated locally),0.06 per call) Dem_GetSizeOfFreezeFrameSelection/11 (181135951 (estimated locally),0.17 per call) Dem_GetSizeOfFreezeFrameSelection/11 (524845004 (estimated locally),0.49 per call) Dem_GetNextFreezeFrameData/10 (140290989 (estimated locally),0.13 per call) Dem_GetNextFreezeFrameData/10 (155198765 (estimated locally),0.14 per call) Dem_GetNextFreezeFrameData/10 (181135951 (estimated locally),0.17 per call) Dem_GetNextFreezeFrameData/10 (524845004 (estimated locally),0.49 per call) Dem_SelectExtendedDataRecord/9 (40655964 (estimated locally),0.04 per call) Dem_SelectExtendedDataRecord/9 (286448942 (estimated locally),0.27 per call) Dem_SelectExtendedDataRecord/9 (181135951 (estimated locally),0.17 per call) Dem_SelectExtendedDataRecord/9 (524845004 (estimated locally),0.49 per call) Dem_SelectFreezeFrameData/8 (137224205 (estimated locally),0.13 per call) Dem_SelectFreezeFrameData/8 (274448410 (estimated locally),0.26 per call) Dem_SelectFreezeFrameData/8 (524845004 (estimated locally),0.49 per call) Dem_EnableDTCRecordUpdate/5 (27774179 (estimated locally),0.03 per call) Dem_EnableDTCRecordUpdate/5 (137224205 (estimated locally),0.13 per call) Dem_EnableDTCRecordUpdate/5 (274448410 (estimated locally),0.26 per call) Dem_EnableDTCRecordUpdate/5 (524845004 (estimated locally),0.49 per call) Dem_DisableDTCRecordUpdate/4 (12569041 (estimated locally),0.01 per call) Dem_DisableDTCRecordUpdate/4 (137224205 (estimated locally),0.13 per call) Dem_DisableDTCRecordUpdate/4 (274448410 (estimated locally),0.26 per call) Dem_DisableDTCRecordUpdate/4 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dem_InitializationState/22 (Dem_InitializationState) @06d905a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetSizeOfFreezeFrameSelection/11 (read)Dem_GetNextExtendedDataRecord/12 (read)Dem_DisableDTCRecordUpdate/4 (read)Dem_EnableDTCRecordUpdate/5 (read)Dem_SelectFreezeFrameData/8 (read)Dem_SelectExtendedDataRecord/9 (read)Dem_GetNextFreezeFrameData/10 (read)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)
  Availability: not_available
  Varpool flags:
Dem_FindNextEDRecForReporting/21 (Dem_FindNextEDRecForReporting) @06d85620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EDSegment/56 (read)Dem_EDSegment/56 (addr)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Dem_GetNextExtendedDataRecord/12 (35326121 (estimated locally),0.03 per call) 
  Calls: 
Dem_CopyOBDFreezeFrameInfo/20 (Dem_CopyOBDFreezeFrameInfo) @06d85460
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_SizeOfOBDFreezeFrameInfo/19 (Dem_SizeOfOBDFreezeFrameInfo) @06d852a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMem/37 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_GetSizeOfFreezeFrameSelection/11 (2804353 (estimated locally),0.00 per call) Dem_GetSizeOfFreezeFrameSelection/11 (17416926 (estimated locally),0.02 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (1073741824 (estimated locally),1.00 per call) Dem_SelectEntryOfOBDFreezeFrameEvent/36 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (1073741824 (estimated locally),1.00 per call) 
Dem_CollectOBDFreezeFrameInfo/18 (Dem_CollectOBDFreezeFrameInfo) @06d850e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_SizeOfFFInfo/16 (Dem_SizeOfFFInfo) @06d77b60
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_CollectFFInfo/15 (Dem_CollectFFInfo) @06d779a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_FFClass/45 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_GetNextFreezeFrameData/10 (18314302 (estimated locally),0.02 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (1073741824 (estimated locally),1.00 per call) Dem_CopyFFInfo.isra.0/58 (10506211 (estimated locally),0.01 per call) Dem_SizeOfFF/48 (21993325 (estimated locally),0.02 per call) Dem_GetNumFFSegs/47 (21993325 (estimated locally),0.02 per call) Dem_FFEntryData/46 (21993325 (estimated locally),0.02 per call) Dem_GbiFFClassIdx/35 (21993325 (estimated locally),0.02 per call) Dem_CheckFFRecNumStored/44 (217325345 (estimated locally),0.20 per call) Dem_GbiMaxNumFFRecs/43 (217325345 (estimated locally),0.20 per call) Dem_SearchForEntry/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (1073741824 (estimated locally),1.00 per call) 
Dem_FindNextFFRecForReporting/14 (Dem_FindNextFFRecForReporting) @06d777e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GetSizeOfExtendedDataRecordSelection/13 (Dem_GetSizeOfExtendedDataRecordSelection) @06d77620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_RecordSelection/2 (read)Dem_RecordSelection/2 (read)Dem_EDClass/53 (addr)Dem_EDClass/53 (read)Dem_EDClass/53 (read)Dem_EDSegment/56 (addr)Dem_EDSegment/56 (read)Dem_EDSegment/56 (read)Dem_EDSegment/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/23 (200415699 (estimated locally),0.19 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (73112352 (estimated locally),0.07 per call) Dem_SizeOfEDSegment/54 (178860051 (estimated locally),0.17 per call) Dem_SearchForEntry/29 (73112352 (estimated locally),0.07 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (73112352 (estimated locally),0.07 per call) Dem_FindEDNumIndex/57 (34070669 (estimated locally),0.03 per call) Dem_GbiEDClassIdx/52 (103244451 (estimated locally),0.10 per call) Dem_GetDTCSelection/24 (103244451 (estimated locally),0.10 per call) Det_ASR40_ReportError/23 (64100719 (estimated locally),0.06 per call) Det_ASR40_ReportError/23 (181135950 (estimated locally),0.17 per call) Det_ASR40_ReportError/23 (524845003 (estimated locally),0.49 per call) 
Dem_GetNextExtendedDataRecord/12 (Dem_GetNextExtendedDataRecord) @06d770e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_RecordSelection/2 (read)Dem_RecordSelection/2 (read)Dem_EDClass/53 (addr)Dem_RecordSelection/2 (read)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/23 (140290989 (estimated locally),0.13 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (9852455 (estimated locally),0.01 per call) Dem_AssembleExtendedDataSeg/55 (2162121 (estimated locally),0.00 per call) Dem_SizeOfEDSegment/54 (6551883 (estimated locally),0.01 per call) Dem_SearchForEntry/29 (9852455 (estimated locally),0.01 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (9852455 (estimated locally),0.01 per call) Dem_FindNextEDRecForReporting/21 (35326121 (estimated locally),0.03 per call) Dem_GbiEDClassIdx/52 (72271116 (estimated locally),0.07 per call) Dem_GetDTCSelection/24 (72271116 (estimated locally),0.07 per call) Det_ASR40_ReportError/23 (155198765 (estimated locally),0.14 per call) Det_ASR40_ReportError/23 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_GetSizeOfFreezeFrameSelection/11 (Dem_GetSizeOfFreezeFrameSelection) @06b08b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_RecordSelection/2 (read)Dem_RecordSelection/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/23 (200415699 (estimated locally),0.19 per call) Dem_SizeOfFFInfo.constprop/59 (13855501 (estimated locally),0.01 per call) Dem_SizeOfOBDFreezeFrameInfo/19 (2804353 (estimated locally),0.00 per call) Dem_GbiDTCKind/34 (13855501 (estimated locally),0.01 per call) Dem_SizeOfFFInfo.constprop/59 (17371491 (estimated locally),0.02 per call) Dem_CheckFFRecNumValid/51 (85827525 (estimated locally),0.08 per call) Dem_SizeOfOBDFreezeFrameInfo/19 (17416926 (estimated locally),0.02 per call) Dem_GbiDTCKind/34 (103244451 (estimated locally),0.10 per call) Dem_GetDTCSelection/24 (103244451 (estimated locally),0.10 per call) Det_ASR40_ReportError/23 (64100720 (estimated locally),0.06 per call) Det_ASR40_ReportError/23 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_GetNextFreezeFrameData/10 (Dem_GetNextFreezeFrameData) @06b08540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_RecordSelection/2 (read)Dem_RecordSelection/2 (read)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/23 (140290989 (estimated locally),0.13 per call) Dem_CollectFFInfo/15 (18314302 (estimated locally),0.02 per call) Dem_GbiFFClassIdx/35 (37467884 (estimated locally),0.03 per call) Dem_FindNextFFRecForReporting.constprop/62 (489538498 (estimated locally),0.46 per call) Dem_CollectOBDFreezeFrameInfo.constprop/60 (99082592 (estimated locally),0.09 per call) Dem_GbiDTCKind/34 (489538498 (estimated locally),0.46 per call) Dem_GetDTCSelection/24 (72271116 (estimated locally),0.07 per call) Det_ASR40_ReportError/23 (155198765 (estimated locally),0.14 per call) Det_ASR40_ReportError/23 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_SelectExtendedDataRecord/9 (Dem_SelectExtendedDataRecord) @06d42ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_DoDTCSelection/25 (40655964 (estimated locally),0.04 per call) Det_ASR40_ReportError/23 (40655964 (estimated locally),0.04 per call) Dem_GetDTCSelection/24 (81311928 (estimated locally),0.08 per call) Det_ASR40_ReportError/23 (286448942 (estimated locally),0.27 per call) Det_ASR40_ReportError/23 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_SelectFreezeFrameData/8 (Dem_SelectFreezeFrameData) @06d429a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)Dem_RecordSelection/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_DoDTCSelection/25 (137224205 (estimated locally),0.13 per call) Det_ASR40_ReportError/23 (137224205 (estimated locally),0.13 per call) Dem_GetDTCSelection/24 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/23 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_ResetDataRecordSelector/7 (Dem_ResetDataRecordSelector) @06d42540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_RecordSelection/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_InitDataRecordSelector/6 (Dem_InitDataRecordSelector) @06d42380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_RecordSelection/2 (write)
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_EnableDTCRecordUpdate/5 (Dem_EnableDTCRecordUpdate) @06d421c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_EvIdOfLockedMemoryEntry/0 (read)Dem_ClientIdLockingDTCRecordUpdate/1 (read)Dem_EvIdOfLockedMemoryEntry/0 (write)Dem_ClientIdLockingDTCRecordUpdate/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/23 (27774179 (estimated locally),0.03 per call) Dem_CheckForTriggerNvmWriteGateEntry/33 (13887090 (estimated locally),0.01 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (137224205 (estimated locally),0.13 per call) Dem_CheckForImmediateEntryStorage/32 (306090 (estimated locally),0.00 per call) Dem_ClearAgedEventEntry/31 (306090 (estimated locally),0.00 per call) Dem_IntValEntryData/30 (927546 (estimated locally),0.00 per call) Dem_SearchForEntry/29 (4582740 (estimated locally),0.00 per call) Dem_GbiNumAgingCycles/28 (13887090 (estimated locally),0.01 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (137224205 (estimated locally),0.13 per call) Det_ASR40_ReportError/23 (137224205 (estimated locally),0.13 per call) Dem_GetDTCSelection/24 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/23 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_DisableDTCRecordUpdate/4 (Dem_DisableDTCRecordUpdate) @06d29e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/22 (read)Dem_EvIdOfLockedMemoryEntry/0 (read)Dem_ClientIdLockingDTCRecordUpdate/1 (read)Dem_ClientIdLockingDTCRecordUpdate/1 (read)Dem_ClientIdLockingDTCRecordUpdate/1 (write)Dem_EvIdOfLockedMemoryEntry/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/23 (12569041 (estimated locally),0.01 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (4184642 (estimated locally),0.00 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (21737010 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/27 (8384399 (estimated locally),0.01 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/26 (34306051 (estimated locally),0.03 per call) Dem_DoDTCSelection/25 (137224205 (estimated locally),0.13 per call) Det_ASR40_ReportError/23 (137224205 (estimated locally),0.13 per call) Dem_GetDTCSelection/24 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/23 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) 
Dem_InitEventMemoryProcessor/3 (Dem_InitEventMemoryProcessor) @06d298c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ClientIdLockingDTCRecordUpdate/1 (write)Dem_EvIdOfLockedMemoryEntry/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_RecordSelection/2 (Dem_RecordSelection) @06c98678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_GetSizeOfFreezeFrameSelection/11 (read)Dem_GetNextExtendedDataRecord/12 (write)Dem_GetNextFreezeFrameData/10 (read)Dem_GetSizeOfFreezeFrameSelection/11 (read)Dem_InitDataRecordSelector/6 (write)Dem_SelectExtendedDataRecord/9 (write)Dem_GetNextFreezeFrameData/10 (write)Dem_GetNextFreezeFrameData/10 (write)Dem_GetNextExtendedDataRecord/12 (write)Dem_ResetDataRecordSelector/7 (write)Dem_SelectExtendedDataRecord/9 (write)Dem_SelectExtendedDataRecord/9 (write)Dem_GetNextFreezeFrameData/10 (read)Dem_GetNextFreezeFrameData/10 (write)Dem_SelectFreezeFrameData/8 (write)Dem_SelectFreezeFrameData/8 (write)Dem_SelectFreezeFrameData/8 (write)Dem_SelectExtendedDataRecord/9 (write)Dem_SelectExtendedDataRecord/9 (write)Dem_GetNextFreezeFrameData/10 (read)Dem_GetNextExtendedDataRecord/12 (read)Dem_GetNextExtendedDataRecord/12 (read)Dem_GetNextExtendedDataRecord/12 (read)Dem_GetNextExtendedDataRecord/12 (write)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)Dem_GetSizeOfExtendedDataRecordSelection/13 (read)
  Availability: available
  Varpool flags:
Dem_ClientIdLockingDTCRecordUpdate/1 (Dem_ClientIdLockingDTCRecordUpdate) @06c98630
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_InitEventMemoryProcessor/3 (write)Dem_DisableDTCRecordUpdate/4 (write)Dem_DisableDTCRecordUpdate/4 (read)Dem_DisableDTCRecordUpdate/4 (read)Dem_EnableDTCRecordUpdate/5 (read)Dem_EnableDTCRecordUpdate/5 (write)
  Availability: available
  Varpool flags:
Dem_EvIdOfLockedMemoryEntry/0 (Dem_EvIdOfLockedMemoryEntry) @06c985e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_InitEventMemoryProcessor/3 (write)Dem_DisableDTCRecordUpdate/4 (write)Dem_DisableDTCRecordUpdate/4 (read)Dem_EnableDTCRecordUpdate/5 (read)Dem_EnableDTCRecordUpdate/5 (write)
  Availability: available
  Varpool flags:

;; Function Dem_SizeOfOBDFreezeFrameInfo (Dem_SizeOfOBDFreezeFrameInfo, funcdef_no=16, decl_uid=6969, cgraph_uid=17, symbol_order=19)

Modification phase of node Dem_SizeOfOBDFreezeFrameInfo/19
Dem_SizeOfOBDFreezeFrameInfo (Dem_EventIdType EventId)
{
  Dem_EventIdType StoredOBDFFEventId;
  boolean EntryExists;
  Dem_SizeEvMemEntryType SelectedEntryIdx;
  uint16 ObdFFSize;
  struct Dem_EventMemoryEntryType * _1;
  unsigned char SelectedEntryIdx.31_2;
  unsigned int _3;
  unsigned int _4;
  struct Dem_EventMemoryEntryType * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ObdFFSize => 0
  # DEBUG BEGIN_STMT
  SelectedEntryIdx = 0;
  # DEBUG BEGIN_STMT
  # DEBUG EntryExists => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryExists_11 = Dem_SelectEntryOfOBDFreezeFrameEvent (&SelectedEntryIdx, 0);
  # DEBUG EntryExists => EntryExists_11
  # DEBUG BEGIN_STMT
  _1 = Dem_EventMem[0];
  SelectedEntryIdx.31_2 = SelectedEntryIdx;
  _3 = (unsigned int) SelectedEntryIdx.31_2;
  _4 = _3 * 16;
  _5 = _1 + _4;
  StoredOBDFFEventId_12 = _5->EventId;
  # DEBUG StoredOBDFFEventId => StoredOBDFFEventId_12
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (EntryExists_11 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (StoredOBDFFEventId_12 == EventId_14(D))
    goto <bb 4>; [21.72%]
  else
    goto <bb 5>; [78.28%]

  <bb 4> [local count: 79293686]:
  # DEBUG BEGIN_STMT
  # DEBUG ObdFFSize => 41

  <bb 5> [local count: 1073741824]:
  # ObdFFSize_6 = PHI <0(2), 0(3), 41(4)>
  # DEBUG ObdFFSize => ObdFFSize_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SelectedEntryIdx ={v} {CLOBBER};
  return ObdFFSize_6;

}



;; Function Dem_SizeOfFFInfo.constprop (Dem_SizeOfFFInfo.constprop.0, funcdef_no=23, decl_uid=7556, cgraph_uid=48, symbol_order=59)

Modification phase of node Dem_SizeOfFFInfo.constprop/59
Dem_SizeOfFFInfo.constprop (Dem_EventIdType EventId, uint8 RecordNumber)
{
  uint16 SizeOfFFKind;
  boolean EntryExists;
  struct Dem_EventMemoryEntryType * EvMemEntry;
  Dem_FFIdxType FFIndex;
  const Dem_FFIdxType MaxNumFF;
  Dem_FFIdxType NumFF;
  const struct Dem_FFClassType * FFIndClass;
  Dem_FFKindType FFKind;
  struct Dem_EventMemoryEntryType * EvMemEntry.32_4;
  unsigned char _5;
  short unsigned int _9;
  int _10;
  short unsigned int _12;
  unsigned char _13;
  short unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;
  short unsigned int _18;

  <bb 9> [local count: 1073741824]:
  # DEBUG FFKind => 2

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG SizeOfFFKind => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryExists_2 = Dem_SearchForEntry (EventId_1(D), &EvMemEntry, 0B);
  # DEBUG EntryExists => EntryExists_2
  # DEBUG BEGIN_STMT
  if (EntryExists_2 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MaxNumFF_3 = Dem_GbiMaxNumFFRecs (EventId_1(D));
  # DEBUG MaxNumFF => MaxNumFF_3
  # DEBUG BEGIN_STMT
  # DEBUG FFIdxValid => 0
  # DEBUG BEGIN_STMT
  EvMemEntry.32_4 = EvMemEntry;
  _5 = EvMemEntry.32_4->OccCtr;
  NumFF_6 = MIN_EXPR <MaxNumFF_3, _5>;
  # DEBUG NumFF => NumFF_6
  # DEBUG BEGIN_STMT
  if (1 != 0)
    goto <bb 4>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 4> [local count: 43986650]:
  # DEBUG BEGIN_STMT
  FFIndex_8 = Dem_CheckFFRecNumStored (EvMemEntry.32_4, RecordNumber_7(D));
  # DEBUG FFIndex => FFIndex_8
  # DEBUG BEGIN_STMT
  if (RecordNumber_7(D) == 255)
    goto <bb 6>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 5> [local count: 35083752]:
  if (NumFF_6 > FFIndex_8)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 26444774]:
  # DEBUG BEGIN_STMT
  # DEBUG FFIdxValid => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FFIndClass => 0B
  # DEBUG BEGIN_STMT
  _9 = Dem_GbiFFClassIdx (EventId_1(D));
  _10 = (int) _9;
  FFIndClass_11 = &Dem_FFClass[_10];
  # DEBUG FFIndClass => FFIndClass_11
  # DEBUG BEGIN_STMT
  _12 = Dem_SizeOfFF (2, FFIndClass_11);
  _13 = Dem_GetNumFFSegs (2, FFIndClass_11);
  _14 = (short unsigned int) _13;
  _15 = _14 * 2;
  _16 = _12 + _15;
  SizeOfFFKind_17 = _16 + 2;
  # DEBUG SizeOfFFKind => SizeOfFFKind_17
  # DEBUG BEGIN_STMT
  if (RecordNumber_7(D) == 255)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 8991223]:
  # DEBUG BEGIN_STMT
  _18 = (short unsigned int) NumFF_6;
  SizeOfFFKind_19 = SizeOfFFKind_17 * _18;
  # DEBUG SizeOfFFKind => SizeOfFFKind_19

  <bb 8> [local count: 1073741824]:
  # SizeOfFFKind_20 = PHI <0(2), 0(3), 0(5), SizeOfFFKind_17(6), SizeOfFFKind_19(7)>
  # DEBUG FFIdxValid => NULL
  # DEBUG SizeOfFFKind => SizeOfFFKind_20
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EvMemEntry ={v} {CLOBBER};
  return SizeOfFFKind_20;

}



;; Function Dem_InitEventMemoryProcessor (Dem_InitEventMemoryProcessor, funcdef_no=0, decl_uid=6644, cgraph_uid=1, symbol_order=3)

Modification phase of node Dem_InitEventMemoryProcessor/3
Dem_InitEventMemoryProcessor ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ClientIdLockingDTCRecordUpdate = 4;
  # DEBUG BEGIN_STMT
  Dem_EvIdOfLockedMemoryEntry = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_DisableDTCRecordUpdate (Dem_DisableDTCRecordUpdate, funcdef_no=1, decl_uid=6050, cgraph_uid=2, symbol_order=4)

Modification phase of node Dem_DisableDTCRecordUpdate/4
Dem_DisableDTCRecordUpdate (uint8 ClientId)
{
  const Dem_EventIdType MasterEventId;
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.0_1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int Dem_EvIdOfLockedMemoryEntry.1_4;
  unsigned char Dem_ClientIdLockingDTCRecordUpdate.2_5;
  unsigned char Dem_ClientIdLockingDTCRecordUpdate.4_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.0_1 = Dem_InitializationState;
  if (Dem_InitializationState.0_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 26, 32);
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_14(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 26, 16);
  goto <bb 21>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_14(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  _2 = DTCSelection.SelectorStatus;
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 26, 64);
  goto <bb 20>; [100.00%]

  <bb 8> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Dem_DoDTCSelection (ClientId_14(D), &EventId);
  switch (_3) <default: <L26> [25.00%], case 2: <L6> [25.00%], case 3: <L8> [25.00%], case 4: <L6> [25.00%], case 5: <L9> [25.00%]>

  <bb 9> [local count: 34306051]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 8
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 10> [local count: 34306051]:
<L8>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 9
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 11> [local count: 34306051]:
<L9>:
  # DEBUG BEGIN_STMT
  MasterEventId_17 = EventId;
  # DEBUG MasterEventId => MasterEventId_17
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_EvIdOfLockedMemoryEntry.1_4 = Dem_EvIdOfLockedMemoryEntry;
  if (Dem_EvIdOfLockedMemoryEntry.1_4 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 17153026]:
  Dem_ClientIdLockingDTCRecordUpdate.2_5 = Dem_ClientIdLockingDTCRecordUpdate;
  if (Dem_ClientIdLockingDTCRecordUpdate.2_5 != ClientId_14(D))
    goto <bb 13>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 13> [local count: 8384399]:
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 14> [local count: 25921652]:
  # DEBUG BEGIN_STMT
  if (Dem_EvIdOfLockedMemoryEntry.1_4 != MasterEventId_17)
    goto <bb 15>; [79.76%]
  else
    goto <bb 16>; [20.24%]

  <bb 15> [local count: 20675110]:
  Dem_ClientIdLockingDTCRecordUpdate.4_6 = Dem_ClientIdLockingDTCRecordUpdate;
  if (Dem_ClientIdLockingDTCRecordUpdate.4_6 == ClientId_14(D))
    goto <bb 17>; [20.24%]
  else
    goto <bb 16>; [79.76%]

  <bb 16> [local count: 21737010]:
  # DEBUG BEGIN_STMT
  Dem_ClientIdLockingDTCRecordUpdate = ClientId_14(D);
  # DEBUG BEGIN_STMT
  Dem_EvIdOfLockedMemoryEntry = MasterEventId_17;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 17> [local count: 4184642]:
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 12569041]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 26, 64);

  <bb 19> [local count: 137224205]:
  # Result_7 = PHI <8(9), 9(10), 1(18), 1(8), 0(16)>
<L26>:
  # DEBUG Result => Result_7
  EventId ={v} {CLOBBER};

  <bb 20> [local count: 274448410]:
  # Result_8 = PHI <1(7), Result_7(19)>
  # DEBUG Result => Result_8
  DTCSelection ={v} {CLOBBER};

  <bb 21> [local count: 1073741824]:
  # Result_9 = PHI <1(3), 1(5), Result_8(20)>
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_9;

}



;; Function Dem_EnableDTCRecordUpdate (Dem_EnableDTCRecordUpdate, funcdef_no=2, decl_uid=6052, cgraph_uid=3, symbol_order=5)

Modification phase of node Dem_EnableDTCRecordUpdate/5
Dem_EnableDTCRecordUpdate (uint8 ClientId)
{
  Dem_EntryDataType * const AgingCounter;
  Dem_SizeEvMemEntryType EvMemEntryIdx;
  boolean AgedEventFlag;
  struct Dem_EventMemoryEntryType * EvMemEntry;
  Dem_EventIdType LockedEvId;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.5_1;
  unsigned char _2;
  unsigned char Dem_ClientIdLockingDTCRecordUpdate.6_3;
  unsigned char _4;
  unsigned char _5;
  struct Dem_EventMemoryEntryType * EvMemEntry.7_6;
  unsigned char _7;
  struct Dem_EventMemoryEntryType * EvMemEntry.8_8;
  struct Dem_EventMemoryEntryType * EvMemEntry.9_9;
  unsigned char EvMemEntryIdx.10_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.5_1 = Dem_InitializationState;
  if (Dem_InitializationState.5_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 27, 32);
  goto <bb 22>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_21(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 27, 16);
  goto <bb 22>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_21(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  _2 = DTCSelection.SelectorStatus;
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 27, 64);
  goto <bb 21>; [100.00%]

  <bb 8> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG AgedEventFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  LockedEvId_24 = Dem_EvIdOfLockedMemoryEntry;
  # DEBUG LockedEvId => LockedEvId_24
  # DEBUG BEGIN_STMT
  if (LockedEvId_24 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 68612102]:
  # DEBUG BEGIN_STMT
  Dem_ClientIdLockingDTCRecordUpdate.6_3 = Dem_ClientIdLockingDTCRecordUpdate;
  if (Dem_ClientIdLockingDTCRecordUpdate.6_3 != ClientId_21(D))
    goto <bb 15>; [79.76%]
  else
    goto <bb 10>; [20.24%]

  <bb 10> [local count: 13887090]:
  # DEBUG BEGIN_STMT
  Dem_EvIdOfLockedMemoryEntry = 0;
  # DEBUG BEGIN_STMT
  Dem_ClientIdLockingDTCRecordUpdate = 4;
  # DEBUG BEGIN_STMT
  _4 = Dem_GbiNumAgingCycles (LockedEvId_24);
  if (_4 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 11> [local count: 4582740]:
  # DEBUG BEGIN_STMT
  _5 = Dem_SearchForEntry (LockedEvId_24, &EvMemEntry, &EvMemEntryIdx);
  if (_5 == 1)
    goto <bb 12>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 12> [local count: 927546]:
  # DEBUG BEGIN_STMT
  EvMemEntry.7_6 = EvMemEntry;
  AgingCounter_30 = Dem_IntValEntryData (EvMemEntry.7_6);
  # DEBUG AgingCounter => AgingCounter_30
  # DEBUG BEGIN_STMT
  _7 = *AgingCounter_30;
  if (_7 == 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 13> [local count: 306090]:
  # DEBUG BEGIN_STMT
  # DEBUG AgedEventFlag => 1
  # DEBUG BEGIN_STMT
  EvMemEntry.8_8 = EvMemEntry;
  Dem_ClearAgedEventEntry (LockedEvId_24, EvMemEntry.8_8);
  # DEBUG BEGIN_STMT
  EvMemEntry.9_9 = EvMemEntry;
  EvMemEntryIdx.10_10 = EvMemEntryIdx;
  Dem_CheckForImmediateEntryStorage (LockedEvId_24, EvMemEntry.9_9, EvMemEntryIdx.10_10, 0);

  <bb 15> [local count: 137224205]:
  # Result_11 = PHI <0(8), 1(9), 0(11), 0(10), 0(13), 0(12)>
  # AgedEventFlag_14 = PHI <0(8), 0(9), 0(11), 0(10), 1(13), 0(12)>
  # DEBUG AgedEventFlag => AgedEventFlag_14
  # DEBUG Result => Result_11
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (Result_11 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 16> [local count: 68612102]:
  # DEBUG BEGIN_STMT
  if (AgedEventFlag_14 == 1)
    goto <bb 17>; [20.24%]
  else
    goto <bb 18>; [79.76%]

  <bb 17> [local count: 13887090]:
  # DEBUG BEGIN_STMT
  Dem_CheckForTriggerNvmWriteGateEntry ();

  <bb 18> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  if (Result_11 == 1)
    goto <bb 19>; [20.24%]
  else
    goto <bb 20>; [79.76%]

  <bb 19> [local count: 27774179]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 27, 64);

  <bb 20> [local count: 137224205]:
  EvMemEntry ={v} {CLOBBER};
  EvMemEntryIdx ={v} {CLOBBER};

  <bb 21> [local count: 274448410]:
  # Result_12 = PHI <1(7), Result_11(20)>
  # DEBUG Result => Result_12
  DTCSelection ={v} {CLOBBER};

  <bb 22> [local count: 1073741824]:
  # Result_13 = PHI <1(3), 1(5), Result_12(21)>
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_13;

}



;; Function Dem_InitDataRecordSelector (Dem_InitDataRecordSelector, funcdef_no=3, decl_uid=6614, cgraph_uid=4, symbol_order=6)

Modification phase of node Dem_InitDataRecordSelector/6
Dem_InitDataRecordSelector ()
{
  uint8 ClientId;
  int _1;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ClientId => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _1 = (int) ClientId_2;
  Dem_RecordSelection[_1].Status = 0;
  # DEBUG BEGIN_STMT
  ClientId_6 = ClientId_2 + 1;
  # DEBUG ClientId => ClientId_6

  <bb 4> [local count: 1073741824]:
  # ClientId_2 = PHI <0(2), ClientId_6(3)>
  # DEBUG ClientId => ClientId_2
  # DEBUG BEGIN_STMT
  if (ClientId_2 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 5>; [25.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ResetDataRecordSelector (Dem_ResetDataRecordSelector, funcdef_no=4, decl_uid=6616, cgraph_uid=5, symbol_order=7)

Modification phase of node Dem_ResetDataRecordSelector/7
Dem_ResetDataRecordSelector (uint8 ClientId)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ClientId_2(D);
  Dem_RecordSelection[_1].Status = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_SelectFreezeFrameData (Dem_SelectFreezeFrameData, funcdef_no=5, decl_uid=6055, cgraph_uid=6, symbol_order=8)

Modification phase of node Dem_SelectFreezeFrameData/8
Dem_SelectFreezeFrameData (uint8 ClientId, uint8 RecordNumber)
{
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.12_1;
  unsigned char _2;
  unsigned char _3;
  int _4;
  uint8 iftmp.13_8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.12_1 = Dem_InitializationState;
  if (Dem_InitializationState.12_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 185, 32);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_13(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 185, 16);
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_13(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  _2 = DTCSelection.SelectorStatus;
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 185, 64);
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Dem_DoDTCSelection (ClientId_13(D), &EventId);
  switch (_3) <default: <L19> [33.33%], case 3: <L12> [33.33%], case 5: <L6> [33.33%]>

  <bb 9> [local count: 45736827]:
<L6>:
  # DEBUG BEGIN_STMT
  _4 = (int) ClientId_13(D);
  Dem_RecordSelection[_4].SelectedRecNum = RecordNumber_16(D);
  # DEBUG BEGIN_STMT
  if (RecordNumber_16(D) != 255)
    goto <bb 11>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 10> [local count: 15550521]:

  <bb 11> [local count: 45736827]:
  # iftmp.13_8 = PHI <RecordNumber_16(D)(9), 0(10)>
  Dem_RecordSelection[_4].NextRecNum = iftmp.13_8;
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_4].Status = 1;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 45736827]:
<L12>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 9
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 137210483]:
  # Result_5 = PHI <0(11), 8(8), 9(12)>
<L19>:
  # DEBUG Result => Result_5
  EventId ={v} {CLOBBER};

  <bb 14> [local count: 274434688]:
  # Result_6 = PHI <1(7), Result_5(13)>
  # DEBUG Result => Result_6
  DTCSelection ={v} {CLOBBER};

  <bb 15> [local count: 1073728102]:
  # Result_7 = PHI <1(3), 1(5), Result_6(14)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_SelectExtendedDataRecord (Dem_SelectExtendedDataRecord, funcdef_no=6, decl_uid=6058, cgraph_uid=7, symbol_order=9)

Modification phase of node Dem_SelectExtendedDataRecord/9
Dem_SelectExtendedDataRecord (uint8 ClientId, uint8 ExtendedDataNumber)
{
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.14_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.14_1 = Dem_InitializationState;
  if (Dem_InitializationState.14_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 186, 32);
  goto <bb 22>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_14(D) > 2)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 186, 16);
  goto <bb 22>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (ExtendedDataNumber_15(D) == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 246399783]:
  _2 = ExtendedDataNumber_15(D) + 16;
  if (_2 <= 13)
    goto <bb 8>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 8> [local count: 286448942]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 186, 18);
  goto <bb 22>; [100.00%]

  <bb 9> [local count: 81311928]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_14(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  _3 = DTCSelection.SelectorStatus;
  if (_3 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 40655964]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 186, 64);
  goto <bb 21>; [100.00%]

  <bb 11> [local count: 40655964]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Dem_DoDTCSelection (ClientId_14(D), &EventId);
  switch (_4) <default: <L26> [25.00%], case 2: <L16> [25.00%], case 3: <L18> [25.00%], case 4: <L16> [25.00%], case 5: <L9> [25.00%]>

  <bb 12> [local count: 10163991]:
<L9>:
  # DEBUG BEGIN_STMT
  _5 = (int) ClientId_14(D);
  Dem_RecordSelection[_5].SelectedRecNum = ExtendedDataNumber_15(D);
  # DEBUG BEGIN_STMT
  if (ExtendedDataNumber_15(D) == 255)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 3455757]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_5].NextRecNum = 1;
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 6708234]:
  # DEBUG BEGIN_STMT
  if (ExtendedDataNumber_15(D) == 254)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 2280800]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_5].NextRecNum = 144;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 4427434]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_5].NextRecNum = ExtendedDataNumber_15(D);

  <bb 17> [local count: 10163991]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_5].Status = 2;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 18> [local count: 10163991]:
<L16>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 8
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 10163991]:
<L18>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 9
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 40655964]:
  # Result_6 = PHI <0(17), 8(18), 9(19), 1(11)>
<L26>:
  # DEBUG Result => Result_6
  EventId ={v} {CLOBBER};

  <bb 21> [local count: 81311928]:
  # Result_7 = PHI <1(10), Result_6(20)>
  # DEBUG Result => Result_7
  DTCSelection ={v} {CLOBBER};

  <bb 22> [local count: 1073741824]:
  # Result_8 = PHI <1(3), 1(5), 1(8), Result_7(21)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_GetNextFreezeFrameData (Dem_GetNextFreezeFrameData, funcdef_no=7, decl_uid=6062, cgraph_uid=8, symbol_order=10)

Modification phase of node Dem_GetNextFreezeFrameData/10
Dem_GetNextFreezeFrameData (uint8 ClientId, uint8 * DestBuffer, uint16 * BufSize)
{
  Dem_FFKindType FFKind;
  uint8 NextAvailableRecNum;
  uint8 SelectedRecNum;
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.15_1;
  int _2;
  unsigned char _3;
  unsigned char _5;
  unsigned char _6;
  unsigned char NextAvailableRecNum.16_7;
  unsigned char FFKind.17_8;
  short unsigned int _9;
  unsigned char FFKind.18_10;
  unsigned char NextAvailableRecNum.19_11;
  unsigned char NextAvailableRecNum.20_12;
  unsigned char _13;
  unsigned char _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.15_1 = Dem_InitializationState;
  if (Dem_InitializationState.15_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 29, 32);
  goto <bb 32>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_28(D) > 3)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 29, 16);
  goto <bb 32>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (DestBuffer_29(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 303660150]:
  if (BufSize_30(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 155198765]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 29, 17);
  goto <bb 32>; [100.00%]

  <bb 9> [local count: 212562105]:
  # DEBUG BEGIN_STMT
  _2 = (int) ClientId_28(D);
  _3 = Dem_RecordSelection[_2].Status;
  if (_3 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 31>; [66.00%]

  <bb 10> [local count: 72271116]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NextAvailableRecNum = 0;
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_28(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  EventId_34 = DTCSelection.DTCInfo.EventId;
  # DEBUG EventId => EventId_34
  # DEBUG BEGIN_STMT
  SelectedRecNum_35 = Dem_RecordSelection[_2].SelectedRecNum;
  # DEBUG SelectedRecNum => SelectedRecNum_35
  # DEBUG BEGIN_STMT
  # DEBUG Result => 48
  # DEBUG BEGIN_STMT
  goto <bb 33>; [100.00%]

  <bb 11> [local count: 979076996]:
  # DEBUG BEGIN_STMT
  # DEBUG NextRecNum => _15
  # DEBUG BEGIN_STMT
  if (_15 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 489538498]:
  # DEBUG BEGIN_STMT
  _5 = Dem_GbiDTCKind (EventId_34);
  if (_5 == 2)
    goto <bb 13>; [20.24%]
  else
    goto <bb 22>; [79.76%]

  <bb 13> [local count: 99082592]:
  # DEBUG BEGIN_STMT
  Result_46 = Dem_CollectOBDFreezeFrameInfo (EventId_34, 0, BufSize_30(D), DestBuffer_29(D));
  # DEBUG Result => Result_46
  goto <bb 22>; [100.00%]

  <bb 14> [local count: 489538498]:
  # DEBUG BEGIN_STMT
  FFKind = 0;
  # DEBUG BEGIN_STMT
  _6 = Dem_FindNextFFRecForReporting (EventId_34, _15, &NextAvailableRecNum, &FFKind);
  if (_6 != 0)
    goto <bb 15>; [67.00%]
  else
    goto <bb 20>; [33.00%]

  <bb 15> [local count: 327990794]:
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_35 == 255)
    goto <bb 17>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 216473924]:
  NextAvailableRecNum.16_7 = NextAvailableRecNum;
  if (NextAvailableRecNum.16_7 == SelectedRecNum_35)
    goto <bb 17>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 17> [local count: 185118004]:
  # DEBUG BEGIN_STMT
  FFKind.17_8 = FFKind;
  if (FFKind.17_8 == 2)
    goto <bb 18>; [20.24%]
  else
    goto <bb 21>; [79.76%]

  <bb 18> [local count: 37467884]:
  _9 = Dem_GbiFFClassIdx (EventId_34);
  if (_9 != 1)
    goto <bb 19>; [48.88%]
  else
    goto <bb 21>; [51.12%]

  <bb 19> [local count: 18314302]:
  # DEBUG BEGIN_STMT
  FFKind.18_10 = FFKind;
  NextAvailableRecNum.19_11 = NextAvailableRecNum;
  Result_42 = Dem_CollectFFInfo (EventId_34, FFKind.18_10, NextAvailableRecNum.19_11, BufSize_30(D), DestBuffer_29(D));
  # DEBUG Result => Result_42
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 161547704]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_2].NextRecNum = 255;
  # DEBUG BEGIN_STMT
  // predicted unlikely by continue predictor.
  FFKind ={v} {CLOBBER};
  goto <bb 29>; [100.00%]

  <bb 21> [local count: 327990794]:
  # Result_16 = PHI <Result_18(17), Result_18(16), Result_42(19), Result_18(18)>
  # DEBUG Result => Result_16
  # DEBUG BEGIN_STMT
  FFKind ={v} {CLOBBER};

  <bb 22> [local count: 817529292]:
  # Result_17 = PHI <Result_46(13), Result_16(21), Result_18(12)>
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_35 != 255)
    goto <bb 23>; [66.00%]
  else
    goto <bb 24>; [34.00%]

  <bb 23> [local count: 539569333]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_2].NextRecNum = 255;
  goto <bb 29>; [100.00%]

  <bb 24> [local count: 277959959]:
  # DEBUG BEGIN_STMT
  if (Result_17 == 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 25> [local count: 138979980]:
  if (Result_17 == 48)
    goto <bb 26>; [34.00%]
  else
    goto <bb 27>; [66.00%]

  <bb 26> [local count: 186233173]:
  # DEBUG BEGIN_STMT
  NextAvailableRecNum.20_12 = NextAvailableRecNum;
  _13 = NextAvailableRecNum.20_12 + 1;
  Dem_RecordSelection[_2].NextRecNum = _13;

  <bb 27> [local count: 277959959]:
  # DEBUG BEGIN_STMT
  if (Result_17 != 48)
    goto <bb 30>; [5.50%]
  else
    goto <bb 29>; [94.50%]

  <bb 29> [local count: 963789198]:
  # Result_14 = PHI <Result_18(20), Result_17(23), Result_17(27)>

  <bb 33> [local count: 1036060313]:
  # Result_18 = PHI <Result_14(29), 48(10)>
  # DEBUG Result => Result_18
  # DEBUG BEGIN_STMT
  _15 = Dem_RecordSelection[_2].NextRecNum;
  if (_15 != 255)
    goto <bb 11>; [94.50%]
  else
    goto <bb 30>; [5.50%]

  <bb 30> [local count: 72271115]:
  # Result_19 = PHI <Result_17(27), Result_18(33)>
  # DEBUG Result => Result_19
  DTCSelection ={v} {CLOBBER};
  NextAvailableRecNum ={v} {CLOBBER};
  goto <bb 32>; [100.00%]

  <bb 31> [local count: 140290989]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 29, 64);

  <bb 32> [local count: 1073741824]:
  # Result_20 = PHI <1(3), 1(5), 1(8), Result_19(30), 1(31)>
  # DEBUG Result => Result_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_20;

}



;; Function Dem_GetSizeOfFreezeFrameSelection (Dem_GetSizeOfFreezeFrameSelection, funcdef_no=8, decl_uid=6065, cgraph_uid=9, symbol_order=11)

Modification phase of node Dem_GetSizeOfFreezeFrameSelection/11
Dem_GetSizeOfFreezeFrameSelection (uint8 ClientId, uint16 * SizeOfFreezeFrame)
{
  uint8 SelectedRecNum;
  uint16 SizeOfFF;
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.30_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  short unsigned int _27;
  short unsigned int _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.30_1 = Dem_InitializationState;
  if (Dem_InitializationState.30_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 31, 32);
  goto <bb 20>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_15(D) > 3)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 31, 16);
  goto <bb 20>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (SizeOfFreezeFrame_16(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 64100720]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 31, 17);
  goto <bb 20>; [100.00%]

  <bb 8> [local count: 303660150]:
  # DEBUG BEGIN_STMT
  _2 = (int) ClientId_15(D);
  _3 = Dem_RecordSelection[_2].Status;
  if (_3 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 9> [local count: 103244451]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SizeOfFF => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_15(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  EventId_19 = DTCSelection.DTCInfo.EventId;
  # DEBUG EventId => EventId_19
  # DEBUG BEGIN_STMT
  SelectedRecNum_20 = Dem_RecordSelection[_2].SelectedRecNum;
  # DEBUG SelectedRecNum => SelectedRecNum_20
  # DEBUG BEGIN_STMT
  _4 = Dem_GbiDTCKind (EventId_19);
  if (_4 == 2)
    goto <bb 10>; [51.12%]
  else
    goto <bb 12>; [48.88%]

  <bb 10> [local count: 52778563]:
  if (SelectedRecNum_20 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 17416926]:
  # DEBUG BEGIN_STMT
  SizeOfFF_23 = Dem_SizeOfOBDFreezeFrameInfo (EventId_19);
  # DEBUG SizeOfFF => SizeOfFF_23
  goto <bb 18>; [100.00%]

  <bb 12> [local count: 85827525]:
  # DEBUG BEGIN_STMT
  _5 = Dem_CheckFFRecNumValid (EventId_19, SelectedRecNum_20);
  if (_5 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 17371491]:
  # DEBUG BEGIN_STMT
  SizeOfFF_32 = Dem_SizeOfFFInfo (EventId_19, 2, SelectedRecNum_20);
  # DEBUG SizeOfFF => SizeOfFF_32
  goto <bb 18>; [100.00%]

  <bb 14> [local count: 68456034]:
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_20 == 255)
    goto <bb 15>; [20.24%]
  else
    goto <bb 18>; [79.76%]

  <bb 15> [local count: 13855501]:
  # DEBUG BEGIN_STMT
  _6 = Dem_GbiDTCKind (EventId_19);
  if (_6 == 2)
    goto <bb 16>; [20.24%]
  else
    goto <bb 17>; [79.76%]

  <bb 16> [local count: 2804353]:
  # DEBUG BEGIN_STMT
  _27 = Dem_SizeOfOBDFreezeFrameInfo (EventId_19);
  # DEBUG SizeOfFF => _27

  <bb 17> [local count: 13855501]:
  # SizeOfFF_9 = PHI <0(15), _27(16)>
  # DEBUG SizeOfFF => SizeOfFF_9
  # DEBUG BEGIN_STMT
  _29 = Dem_SizeOfFFInfo (EventId_19, 2, 255);
  SizeOfFF_30 = SizeOfFF_9 + _29;
  # DEBUG SizeOfFF => SizeOfFF_30

  <bb 18> [local count: 103244451]:
  # Result_7 = PHI <0(11), 0(13), 0(17), 48(14)>
  # SizeOfFF_10 = PHI <SizeOfFF_23(11), SizeOfFF_32(13), SizeOfFF_30(17), 0(14)>
  # DEBUG SizeOfFF => SizeOfFF_10
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  *SizeOfFreezeFrame_16(D) = SizeOfFF_10;
  DTCSelection ={v} {CLOBBER};
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 200415699]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 31, 64);

  <bb 20> [local count: 1073741824]:
  # Result_8 = PHI <1(3), 1(5), 1(7), Result_7(18), 1(19)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_GetNextExtendedDataRecord (Dem_GetNextExtendedDataRecord, funcdef_no=9, decl_uid=6069, cgraph_uid=10, symbol_order=12)

Modification phase of node Dem_GetNextExtendedDataRecord/12
Dem_GetNextExtendedDataRecord (uint8 ClientId, uint8 * DestBuffer, uint16 * BufSize)
{
  Dem_SizeEDType NeededSize;
  boolean EventMemEntryAvail;
  uint8 NextAvailableRecNum;
  Dem_EDStartByteType EDStartByte;
  const struct Dem_EDSegmentType * EDSegment;
  const uint8 SelectedRecNum;
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  const struct Dem_EDClassType * EDClass;
  struct Dem_EventMemoryEntryType * EvMemEntry;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.34_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  const struct Dem_EDSegmentType * EDSegment.35_8;
  const struct Dem_EDSegmentType * EDSegment.36_9;
  unsigned char _10;
  const struct Dem_EDSegmentType * EDSegment.37_11;
  short unsigned int _12;
  const struct Dem_EDSegmentType * EDSegment.38_13;
  short unsigned int EDStartByte.39_14;
  uint8 * _15;
  struct Dem_EventMemoryEntryType * EvMemEntry.40_16;
  unsigned char _17;
  short unsigned int _46;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.34_1 = Dem_InitializationState;
  if (Dem_InitializationState.34_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 32, 32);
  goto <bb 28>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_29(D) > 2)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 32, 16);
  goto <bb 28>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (DestBuffer_30(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 303660150]:
  if (BufSize_31(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 155198765]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 32, 17);
  goto <bb 28>; [100.00%]

  <bb 9> [local count: 212562105]:
  # DEBUG BEGIN_STMT
  _2 = (int) ClientId_29(D);
  _3 = Dem_RecordSelection[_2].Status;
  if (_3 == 2)
    goto <bb 10>; [34.00%]
  else
    goto <bb 27>; [66.00%]

  <bb 10> [local count: 72271116]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SelectedRecNum_33 = Dem_RecordSelection[_2].SelectedRecNum;
  # DEBUG SelectedRecNum => SelectedRecNum_33
  # DEBUG BEGIN_STMT
  # DEBUG Result => 48
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_29(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  EventId_35 = DTCSelection.DTCInfo.EventId;
  # DEBUG EventId => EventId_35
  # DEBUG BEGIN_STMT
  _4 = Dem_GbiEDClassIdx (EventId_35);
  _5 = (int) _4;
  EDClass_37 = &Dem_EDClass[_5];
  # DEBUG EDClass => EDClass_37
  # DEBUG BEGIN_STMT
  _6 = Dem_RecordSelection[_2].NextRecNum;
  if (_6 != 255)
    goto <bb 11>; [48.88%]
  else
    goto <bb 26>; [51.12%]

  <bb 11> [local count: 35326121]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = Dem_FindNextEDRecForReporting (EDClass_37, _6, &EDSegment, &EDStartByte);
  if (_7 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 12> [local count: 17663061]:
  # DEBUG BEGIN_STMT
  EDSegment.35_8 = EDSegment;
  NextAvailableRecNum_40 = EDSegment.35_8->RecNum;
  # DEBUG NextAvailableRecNum => NextAvailableRecNum_40
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_33 > 253)
    goto <bb 14>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 13> [local count: 11834251]:
  if (SelectedRecNum_33 == NextAvailableRecNum_40)
    goto <bb 14>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 14> [local count: 9852455]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EventMemEntryAvail_43 = Dem_SearchForEntry (EventId_35, &EvMemEntry, 0B);
  # DEBUG EventMemEntryAvail => EventMemEntryAvail_43
  # DEBUG BEGIN_STMT
  if (EventMemEntryAvail_43 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 15> [local count: 6601145]:
  EDSegment.36_9 = EDSegment;
  _10 = EDSegment.36_9->AlwaysAvailable;
  if (_10 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 16> [local count: 6551883]:
  # DEBUG BEGIN_STMT
  # DEBUG NeededSize => 1
  # DEBUG BEGIN_STMT
  EDSegment.37_11 = EDSegment;
  _46 = Dem_SizeOfEDSegment (EDSegment.37_11);
  NeededSize_47 = _46 + 1;
  # DEBUG NeededSize => NeededSize_47
  # DEBUG BEGIN_STMT
  _12 = *BufSize_31(D);
  if (_12 < NeededSize_47)
    goto <bb 19>; [67.00%]
  else
    goto <bb 17>; [33.00%]

  <bb 17> [local count: 2162121]:
  # DEBUG BEGIN_STMT
  *DestBuffer_30(D) = NextAvailableRecNum_40;
  # DEBUG BEGIN_STMT
  EDSegment.38_13 = EDSegment;
  EDStartByte.39_14 = EDStartByte;
  _15 = DestBuffer_30(D) + 1;
  EvMemEntry.40_16 = EvMemEntry;
  Dem_AssembleExtendedDataSeg (EventId_35, EDSegment.38_13, EDStartByte.39_14, _15, EvMemEntry.40_16);
  # DEBUG BEGIN_STMT
  *BufSize_31(D) = NeededSize_47;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 3300573]:
  # DEBUG BEGIN_STMT
  *BufSize_31(D) = 0;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 19> [local count: 9852455]:
  # Result_18 = PHI <0(17), 0(18), 21(16)>
  # DEBUG Result => Result_18
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 20> [local count: 17663061]:
  # Result_19 = PHI <48(13), Result_18(19)>
  # DEBUG Result => Result_19
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_33 <= 239)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 8831530]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_2].NextRecNum = 255;
  goto <bb 25>; [100.00%]

  <bb 22> [local count: 8831530]:
  # DEBUG BEGIN_STMT
  if (Result_19 == 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 23> [local count: 4415765]:
  # DEBUG BEGIN_STMT
  _17 = NextAvailableRecNum_40 + 1;
  Dem_RecordSelection[_2].NextRecNum = _17;
  goto <bb 25>; [100.00%]

  <bb 24> [local count: 17663061]:
  # DEBUG BEGIN_STMT
  Dem_RecordSelection[_2].NextRecNum = 255;

  <bb 25> [local count: 35326121]:
  # Result_20 = PHI <Result_19(22), 48(24), Result_19(21), 0(23)>
  # DEBUG Result => Result_20
  EDSegment ={v} {CLOBBER};
  EDStartByte ={v} {CLOBBER};

  <bb 26> [local count: 72271116]:
  # Result_21 = PHI <48(10), Result_20(25)>
  # DEBUG Result => Result_21
  EvMemEntry ={v} {CLOBBER};
  DTCSelection ={v} {CLOBBER};
  goto <bb 28>; [100.00%]

  <bb 27> [local count: 140290989]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 32, 64);

  <bb 28> [local count: 1073741824]:
  # Result_22 = PHI <1(3), 1(5), 1(8), Result_21(26), 1(27)>
  # DEBUG Result => Result_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_22;

}



;; Function Dem_GetSizeOfExtendedDataRecordSelection (Dem_GetSizeOfExtendedDataRecordSelection, funcdef_no=10, decl_uid=6072, cgraph_uid=11, symbol_order=13)

Modification phase of node Dem_GetSizeOfExtendedDataRecordSelection/13
Dem_GetSizeOfExtendedDataRecordSelection (uint8 ClientId, uint16 * SizeOfExtendedDataRecord)
{
  const struct Dem_EDSegmentType * const EDSegment;
  boolean EventMemEntryAvail;
  Dem_EDSegIdxType SegIndex;
  Dem_EventIdType EventId;
  struct Dem_DTCSelectionType DTCSelection;
  const struct Dem_EDClassType * EDClass;
  uint8 SelectedRecNum;
  Dem_SizeEDType SizeOfEDR;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.41_1;
  int _2;
  unsigned char _3;
  unsigned char _5;
  int _6;
  unsigned char _7;
  const Dem_EDSegIdxType * _8;
  sizetype _9;
  const Dem_EDSegIdxType * _10;
  unsigned char _11;
  int _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  short unsigned int _46;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.41_1 = Dem_InitializationState;
  if (Dem_InitializationState.41_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845003]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 33, 32);
  goto <bb 27>; [100.00%]

  <bb 4> [local count: 548896820]:
  # DEBUG BEGIN_STMT
  if (ClientId_29(D) > 2)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135950]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 33, 16);
  goto <bb 27>; [100.00%]

  <bb 6> [local count: 367760869]:
  # DEBUG BEGIN_STMT
  if (SizeOfExtendedDataRecord_30(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 64100719]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 33, 17);
  goto <bb 27>; [100.00%]

  <bb 8> [local count: 303660150]:
  # DEBUG BEGIN_STMT
  _2 = (int) ClientId_29(D);
  _3 = Dem_RecordSelection[_2].Status;
  if (_3 == 2)
    goto <bb 9>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 9> [local count: 103244451]:
  # DEBUG BEGIN_STMT
  # DEBUG SizeOfEDR => 0
  # DEBUG BEGIN_STMT
  SelectedRecNum_32 = Dem_RecordSelection[_2].SelectedRecNum;
  # DEBUG SelectedRecNum => SelectedRecNum_32
  # DEBUG BEGIN_STMT
  # DEBUG Result => 48
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SegIndex => 255
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_29(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  EventId_34 = DTCSelection.DTCInfo.EventId;
  # DEBUG EventId => EventId_34
  # DEBUG BEGIN_STMT
  _5 = Dem_GbiEDClassIdx (EventId_34);
  _6 = (int) _5;
  EDClass_36 = &Dem_EDClass[_6];
  # DEBUG EDClass => EDClass_36
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_32 <= 239)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 34070669]:
  # DEBUG BEGIN_STMT
  SegIndex_38 = Dem_FindEDNumIndex (EDClass_36, SelectedRecNum_32);
  # DEBUG SegIndex => SegIndex_38

  <bb 11> [local count: 103244451]:
  # SegIndex_21 = PHI <255(9), SegIndex_38(10)>
  # DEBUG SegIndex => SegIndex_21
  # DEBUG BEGIN_STMT
  _7 = MEM[(const struct Dem_EDClassType *)&Dem_EDClass][_6].NumEDSegs;
  if (_7 > SegIndex_21)
    goto <bb 14>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 12> [local count: 69173782]:
  if (SelectedRecNum_32 == 254)
    goto <bb 14>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 45654696]:
  if (SelectedRecNum_32 == 255)
    goto <bb 14>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 14> [local count: 73112352]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EventMemEntryAvail_41 = Dem_SearchForEntry (EventId_34, 0B, 0B);
  # DEBUG EventMemEntryAvail => EventMemEntryAvail_41
  # DEBUG BEGIN_STMT
  # DEBUG SegIndex => 0
  goto <bb 23>; [100.00%]

  <bb 15> [local count: 591545394]:
  # DEBUG BEGIN_STMT
  _8 = MEM[(const struct Dem_EDClassType *)&Dem_EDClass][_6].EDSegIdx;
  _9 = (sizetype) SegIndex_22;
  _10 = _8 + _9;
  _11 = *_10;
  _12 = (int) _11;
  EDSegment_43 = &Dem_EDSegment[_12];
  # DEBUG EDSegment => EDSegment_43
  # DEBUG BEGIN_STMT
  if (SelectedRecNum_32 == 255)
    goto <bb 19>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 390419960]:
  if (SelectedRecNum_32 == 254)
    goto <bb 17>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 17> [local count: 132742786]:
  _13 = MEM[(const struct Dem_EDSegmentType *)&Dem_EDSegment][_12].RecNum;
  if (_13 > 143)
    goto <bb 19>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 18> [local count: 324048567]:
  _14 = MEM[(const struct Dem_EDSegmentType *)&Dem_EDSegment][_12].RecNum;
  if (_14 == SelectedRecNum_32)
    goto <bb 19>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 19> [local count: 377673340]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (EventMemEntryAvail_41 == 1)
    goto <bb 21>; [20.24%]
  else
    goto <bb 20>; [79.76%]

  <bb 20> [local count: 301232255]:
  _15 = MEM[(const struct Dem_EDSegmentType *)&Dem_EDSegment][_12].AlwaysAvailable;
  if (_15 == 1)
    goto <bb 21>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 21> [local count: 178860051]:
  # DEBUG BEGIN_STMT
  SizeOfEDR_44 = SizeOfEDR_19 + 1;
  # DEBUG SizeOfEDR => SizeOfEDR_44
  # DEBUG BEGIN_STMT
  _46 = Dem_SizeOfEDSegment (EDSegment_43);
  SizeOfEDR_47 = SizeOfEDR_44 + _46;
  # DEBUG SizeOfEDR => SizeOfEDR_47

  <bb 22> [local count: 591545394]:
  # SizeOfEDR_18 = PHI <SizeOfEDR_19(18), SizeOfEDR_19(20), SizeOfEDR_47(21)>
  # DEBUG SizeOfEDR => SizeOfEDR_18
  # DEBUG BEGIN_STMT
  SegIndex_48 = SegIndex_22 + 1;
  # DEBUG SegIndex => SegIndex_48

  <bb 23> [local count: 664657746]:
  # SizeOfEDR_19 = PHI <0(14), SizeOfEDR_18(22)>
  # SegIndex_22 = PHI <0(14), SegIndex_48(22)>
  # DEBUG SegIndex => SegIndex_22
  # DEBUG SizeOfEDR => SizeOfEDR_19
  # DEBUG BEGIN_STMT
  if (_7 > SegIndex_22)
    goto <bb 15>; [89.00%]
  else
    goto <bb 24>; [11.00%]

  <bb 24> [local count: 73112352]:
  # SizeOfEDR_4 = PHI <SizeOfEDR_19(23)>
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 25> [local count: 103244451]:
  # Result_16 = PHI <48(13), 0(24)>
  # SizeOfEDR_20 = PHI <0(13), SizeOfEDR_4(24)>
  # DEBUG SizeOfEDR => SizeOfEDR_20
  # DEBUG Result => Result_16
  # DEBUG BEGIN_STMT
  *SizeOfExtendedDataRecord_30(D) = SizeOfEDR_20;
  DTCSelection ={v} {CLOBBER};
  goto <bb 27>; [100.00%]

  <bb 26> [local count: 200415699]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 33, 64);

  <bb 27> [local count: 1073741824]:
  # Result_17 = PHI <1(3), 1(5), 1(7), Result_16(25), 1(26)>
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_17;

}


