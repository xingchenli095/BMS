
IPA constant propagation start:
Determining dynamic type for call: _10 = Dem_SearchForEntry (EventId_33, 0B, 0B);
  Starting walk at: _10 = Dem_SearchForEntry (EventId_33, 0B, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_1 = GetDTCFct_27(D) (EventId_18);
Determining dynamic type for call: _10 = Dem_SearchForEntry (EventId_33, 0B, 0B);
  Starting walk at: _10 = Dem_SearchForEntry (EventId_33, 0B, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_1 = GetDTCFct_27(D) (EventId_18);
Determining dynamic type for call: Dem_ClearEventEntry (EvMemEntry_5(D));
  Starting walk at: Dem_ClearEventEntry (EvMemEntry_5(D));
  instance pointer: EvMemEntry_5(D)  Outer instance pointer: EvMemEntry_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _20 = Dem_SizeOfFF (2, FFClass_53);
  Starting walk at: _20 = Dem_SizeOfFF (2, FFClass_53);
  instance pointer: FFClass_53  Outer instance pointer: &Dem_FFClass[_6] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _9 = Dem_EDEntryData (EvMemEntry_29(D));
  Starting walk at: _9 = Dem_EDEntryData (EvMemEntry_29(D));
  instance pointer: EvMemEntry_29(D)  Outer instance pointer: EvMemEntry_29(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_12, _14, _15);
Determining dynamic type for call: _12 = Dem_SizeOfEDSegment (_11);
  Starting walk at: _12 = Dem_SizeOfEDSegment (_11);
  instance pointer: _11  Outer instance pointer: &Dem_EDSegment[_10] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _19 = Dem_SizeOfFFSegment (_6);
  Starting walk at: _19 = Dem_SizeOfFFSegment (_6);
  instance pointer: _6  Outer instance pointer: &Dem_FFSegment[_5] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_8 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetUdsDTC, &Dem_UDSDTCSuppression, SuppressionStatus_6(D));
  Starting walk at: Result_8 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetUdsDTC, &Dem_UDSDTCSuppression, SuppressionStatus_6(D));
  instance pointer: Dem_InternalGetUdsDTC  Outer instance pointer: Dem_InternalGetUdsDTC offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_8 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetUdsDTC, &Dem_UDSDTCSuppression, SuppressionStatus_6(D));
  Starting walk at: Result_8 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetUdsDTC, &Dem_UDSDTCSuppression, SuppressionStatus_6(D));
  instance pointer: &Dem_UDSDTCSuppression  Outer instance pointer: Dem_UDSDTCSuppression offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_10 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetObdDTC, &Dem_OBDDTCSuppression, SuppressionStatus_6(D));
  Starting walk at: Result_10 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetObdDTC, &Dem_OBDDTCSuppression, SuppressionStatus_6(D));
  instance pointer: Dem_InternalGetObdDTC  Outer instance pointer: Dem_InternalGetObdDTC offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_10 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetObdDTC, &Dem_OBDDTCSuppression, SuppressionStatus_6(D));
  Starting walk at: Result_10 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetObdDTC, &Dem_OBDDTCSuppression, SuppressionStatus_6(D));
  instance pointer: &Dem_OBDDTCSuppression  Outer instance pointer: Dem_OBDDTCSuppression offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _17 = Dem_SizeOfED (EDClass_11);
  Starting walk at: _17 = Dem_SizeOfED (EDClass_11);
  instance pointer: EDClass_11  Outer instance pointer: &Dem_EDClass[_1] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SizeOfFF_19 = Dem_SizeOfFF (2, FFClass_13);
  Starting walk at: SizeOfFF_19 = Dem_SizeOfFF (2, FFClass_13);
  instance pointer: FFClass_13  Outer instance pointer: &Dem_FFClass[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = Dem_IntValEntryData (EvMemEntry_24(D));
  Starting walk at: _7 = Dem_IntValEntryData (EvMemEntry_24(D));
  instance pointer: EvMemEntry_24(D)  Outer instance pointer: EvMemEntry_24(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dem_ShiftData (_7, EntryDataSize_26, Width_28);
  Starting walk at: Dem_ShiftData (_7, EntryDataSize_26, Width_28);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 (EventId_8(D), EventStatus_10(D));
  Starting walk at: _1 (EventId_8(D), EventStatus_10(D));
  instance pointer: EventStatus_10(D)  Outer instance pointer: EventStatus_10(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
  Starting walk at: _2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
  instance pointer: &EventStatus  Outer instance pointer: EventStatus offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
  Starting walk at: _2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
  instance pointer: &Result  Outer instance pointer: Result offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dem_InternalSetBswEventStatus (EventInfo, EventStatus.12_6, &Result);
  Starting walk at: Dem_InternalSetBswEventStatus (EventInfo, EventStatus.12_6, &Result);
  instance pointer: &Result  Outer instance pointer: Result offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dem_UpdateFailureCounterFirstFail (EventId_12, EventStatus.10_3);
  Function call may change dynamic type:_2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
Determining dynamic type for call: Dem_InternalSetSwcEventStatus (EventInfo, EventStatus.11_5, &Result);
  Starting walk at: Dem_InternalSetSwcEventStatus (EventInfo, EventStatus.11_5, &Result);
  instance pointer: &Result  Outer instance pointer: Result offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dem_UpdateFailureCounterFirstFail (EventId_12, EventStatus.10_3);
  Function call may change dynamic type:_2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
Determining dynamic type for call: EDEntryData_6 = Dem_IntValEntryData (EvMemEntry_5(D));
  Starting walk at: EDEntryData_6 = Dem_IntValEntryData (EvMemEntry_5(D));
  instance pointer: EvMemEntry_5(D)  Outer instance pointer: EvMemEntry_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = Dem_SizeOfED (EDClass_18);
  Starting walk at: _6 = Dem_SizeOfED (EDClass_18);
  instance pointer: EDClass_18  Outer instance pointer: &Dem_EDClass[_1] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _8 = Dem_SizeOfFF (2, FFClass_21(D));
  Starting walk at: _8 = Dem_SizeOfFF (2, FFClass_21(D));
  instance pointer: FFClass_21(D)  Outer instance pointer: FFClass_21(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_4 = Dem_SearchForEntry.part.0 (EventId_13(D), FoundEntry_15(D), FoundEntryIdx_16(D));
  Starting walk at: Result_4 = Dem_SearchForEntry.part.0 (EventId_13(D), FoundEntry_15(D), FoundEntryIdx_16(D));
  instance pointer: FoundEntry_15(D)  Outer instance pointer: FoundEntry_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_4 = Dem_SearchForEntry.part.0 (EventId_13(D), FoundEntry_15(D), FoundEntryIdx_16(D));
  Starting walk at: Result_4 = Dem_SearchForEntry.part.0 (EventId_13(D), FoundEntry_15(D), FoundEntryIdx_16(D));
  instance pointer: FoundEntryIdx_16(D)  Outer instance pointer: FoundEntryIdx_16(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dem_NvMGateEntryBlockCallback.part.0/189:
    callsite  Dem_NvMGateEntryBlockCallback.part.0/189 -> Dem_StoreImmediatelyNext/92 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_NvMGateEntryBlockCallback.part.0/189 -> Dem_CheckForTriggerNvmWriteGateEntry/91 : 
  Jump functions of caller  Dem_PermanentMemoryAddEntry.part.0/173:
  Jump functions of caller  Dem_SetEvEntryExists.part.0/169:
  Jump functions of caller  Dem_SearchForEntry.part.0/168:
  Jump functions of caller  NvM_ASR40_SetDataIndex/147:
  Jump functions of caller  NvM_ASR40_WriteBlock/145:
  Jump functions of caller  NvM_ASR40_GetErrorStatus/144:
  Jump functions of caller  TS_MemCpy32/139:
  Jump functions of caller  Det_ASR40_ReportError/138:
  Jump functions of caller  Dem_UpdateEventIdOccurKinds/135:
  Jump functions of caller  Dem_CheckErrorReQueueEntry/134:
  Jump functions of caller  Dem_CheckErrorQueueEntry/133:
  Jump functions of caller  Dem_WriteErrorQueueEntry/132:
  Jump functions of caller  Dem_ProcessEvent/131:
  Jump functions of caller  Dem_ReportErrorStatusPreInit/130:
  Jump functions of caller  Dem_IncrementFailureCounter/129:
  Jump functions of caller  Dem_CheckErrorQueueEntryForStatus/128:
  Jump functions of caller  Dem_ProcessIndicatorOnCriteria/111:
  Jump functions of caller  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108:
  Jump functions of caller  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107:
  Jump functions of caller  Dem_GetMappedDTCOrigin/105:
  Jump functions of caller  Dem_InternalCheckAndSetDTCSuppression/104:
    callsite  Dem_InternalCheckAndSetDTCSuppression/104 -> Dem_SearchForEntry/48 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [1, 15]
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    indirect simple callsite, calling param 1, offset 0, for stmt _1 = GetDTCFct_27(D) (EventId_18);
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [1, 15]
  Jump functions of caller  Dem_InternalGetObdDTC/103:
  Jump functions of caller  Dem_InternalGetUdsDTC/102:
  Jump functions of caller  Dem_IsEventsMILIndicatorActive/101:
  Jump functions of caller  Dem_UpdateFailureCounterFirstFail/100:
  Jump functions of caller  Dem_GetFDCCounterBased/99:
  Jump functions of caller  Dem_DebounceEventCounterBased/98:
  Jump functions of caller  Dem_ResetDebounceMonitor/97:
  Jump functions of caller  Dem_FreezeDebounceCounterBased/96:
  Jump functions of caller  Dem_ResetDebounceCounterBased/95:
  Jump functions of caller  Dem_ClearAgedEventEntry/94:
    callsite  Dem_ClearAgedEventEntry/94 -> Dem_ClearEventEntry/68 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_StoreImmediately/93:
    callsite  Dem_StoreImmediately/93 -> Dem_SizeOfFF/81 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dem_StoreImmediately/93 -> Dem_EvMemEntrySize/69 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dem_StoreImmediately/93 -> Dem_GbiMaxNumFFRecs/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_StoreImmediatelyNext/92:
    callsite  Dem_StoreImmediatelyNext/92 -> Dem_StoreImmediately/93 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_CheckForTriggerNvmWriteGateEntry/91:
  Jump functions of caller  Dem_TriggerNvmWriteEventStatus/90:
  Jump functions of caller  Dem_CheckForImmediateEntryStorage/89:
    callsite  Dem_CheckForImmediateEntryStorage/89 -> Dem_StoreImmediately/93 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_ShiftData/88:
  Jump functions of caller  Dem_SizeOfIntValArea/87:
  Jump functions of caller  Dem_AssembleExtendedDataSeg/86:
    callsite  Dem_AssembleExtendedDataSeg/86 -> Dem_EDEntryData/54 : 
       param 0: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_SizeOfEDSegment/85:
  Jump functions of caller  Dem_SizeOfED/84:
    callsite  Dem_SizeOfED/84 -> Dem_SizeOfEDSegment/85 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dem_GetNumFFSegs/83:
  Jump functions of caller  Dem_SizeOfFFSegment/82:
  Jump functions of caller  Dem_SizeOfFF/81:
    callsite  Dem_SizeOfFF/81 -> Dem_SizeOfFFSegment/82 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dem_InternalGetIndicatorStatus/80:
  Jump functions of caller  Dem_InternalSetDTCSuppression/79:
    callsite  Dem_InternalSetDTCSuppression/79 -> Dem_InternalCheckAndSetDTCSuppression/104 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: Dem_InternalGetUdsDTC
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: CONST: &Dem_UDSDTCSuppression
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_InternalSetDTCSuppression/79 -> Dem_InternalCheckAndSetDTCSuppression/104 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: Dem_InternalGetObdDTC
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: CONST: &Dem_OBDDTCSuppression
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_NvMGateEntryBlockCallback/78:
    callsite  Dem_NvMGateEntryBlockCallback/78 -> Dem_NvMGateEntryBlockCallback.part.0/189 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_NvMWriteCopyPermanentMemory/77:
  Jump functions of caller  Dem_NvMReadCopyPermanentMemory/76:
  Jump functions of caller  Dem_NvMWriteFinishedPermanentMemory/75:
  Jump functions of caller  Dem_NvMGateEntrySecondaryBlockCallback/74:
    callsite  Dem_NvMGateEntrySecondaryBlockCallback/74 -> Dem_NvMGateEntryBlockCallback/78 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_NvMGateEntryPrimaryBlockCallback/73:
    callsite  Dem_NvMGateEntryPrimaryBlockCallback/73 -> Dem_NvMGateEntryBlockCallback/78 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_NvMEventStatusBlockCallback/72:
  Jump functions of caller  Dem_NvMWriteCopyEventStatusBlock/71:
  Jump functions of caller  Dem_NvMReadCopyEventStatusBlock/70:
  Jump functions of caller  Dem_EvMemEntrySize/69:
    callsite  Dem_EvMemEntrySize/69 -> Dem_GbiMaxNumFFRecs/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_EvMemEntrySize/69 -> Dem_SizeOfFF/81 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dem_EvMemEntrySize/69 -> Dem_SizeOfED/84 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dem_EvMemEntrySize/69 -> Dem_SizeOfIntValArea/87 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ClearEventEntry/68:
    callsite  Dem_ClearEventEntry/68 -> Dem_SetEvEntryExists/49 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dem_ClearEventEntry/68 -> Dem_ShiftData/88 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_ClearEventEntry/68 -> Dem_IntValEntryData/55 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_ClearEventEntry/68 -> Dem_EvMemEntrySize/69 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_UpdateEventStatusOnQualification/67:
  Jump functions of caller  Dem_InternalSetBswEventStatus/66:
  Jump functions of caller  Dem_InternalSetSwcEventStatus/65:
  Jump functions of caller  Dem_DebounceEvent/64:
    indirect simple callsite, calling param -1, offset 0, for stmt _1 (EventId_8(D), EventStatus_10(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_PermanentMemoryStatusUpdate/63:
    callsite  Dem_PermanentMemoryStatusUpdate/63 -> Dem_PermanentMemoryAddEntry/61 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_PermanentMemoryStatusUpdate/63 -> Dem_IsEventsMILIndicatorActive/101 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_PermanentMemoryStatusUpdate/63 -> Dem_IsEventsMILIndicatorActive/101 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1fff
         VR  [0, 8191]
  Jump functions of caller  Dem_PermanentMemoryRemoveEntry/62:
  Jump functions of caller  Dem_PermanentMemoryAddEntry/61:
    callsite  Dem_PermanentMemoryAddEntry/61 -> Dem_PermanentMemoryAddEntry.part.0/173 : 
  Jump functions of caller  Dem_PermanentMemoryNotifyClear/60:
  Jump functions of caller  Dem_InternalProcessEventReport/59:
    callsite  Dem_InternalProcessEventReport/59 -> Dem_InternalSetEventStatus/58 : 
       param 0: UNKNOWN
         Unknown bits
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_InternalSetEventStatus/58:
    callsite  Dem_InternalSetEventStatus/58 -> Dem_CheckForTriggerNvmWriteGateEntry/91 : 
    callsite  Dem_InternalSetEventStatus/58 -> Dem_InternalSetBswEventStatus/66 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Unknown bits
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dem_InternalSetEventStatus/58 -> Dem_InternalSetSwcEventStatus/65 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Unknown bits
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dem_InternalSetEventStatus/58 -> Dem_UpdateFailureCounterFirstFail/100 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_InternalSetEventStatus/58 -> Dem_DebounceEvent/64 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dem_InternalSetEventStatus/58 -> Dem_CheckProcessingConditions/57 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_CheckProcessingConditions/57:
  Jump functions of caller  Dem_FindEDNumIndex/56:
  Jump functions of caller  Dem_IntValEntryData/55:
  Jump functions of caller  Dem_EDEntryData/54:
    callsite  Dem_EDEntryData/54 -> Dem_SizeOfIntValArea/87 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_EDEntryData/54 -> Dem_IntValEntryData/55 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_CheckFFRecNumStored/53:
  Jump functions of caller  Dem_CheckFFRecNumValid/52:
  Jump functions of caller  Dem_FFEntryData/51:
    callsite  Dem_FFEntryData/51 -> Dem_SizeOfFF/81 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_FFEntryData/51 -> Dem_SizeOfED/84 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dem_FFEntryData/51 -> Dem_SizeOfIntValArea/87 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_InitEvEntryExists/50:
  Jump functions of caller  Dem_SetEvEntryExists/49:
    callsite  Dem_SetEvEntryExists/49 -> Dem_SetEvEntryExists.part.0/169 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_SearchForEntry/48:
    callsite  Dem_SearchForEntry/48 -> Dem_SearchForEntry.part.0/168 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_GbiOBDReadinessGroup/47:
  Jump functions of caller  Dem_GbiMinRatioEvent/46:
  Jump functions of caller  Dem_GbiEventKind/45:
  Jump functions of caller  Dem_GbiDebounceStatusIdx/44:
  Jump functions of caller  Dem_GbiDebounceCounterClassIdx/43:
  Jump functions of caller  Dem_GbiDebounceAlgo/42:
  Jump functions of caller  Dem_GbiPriority/41:
  Jump functions of caller  Dem_GbiIndicatorUsed/40:
  Jump functions of caller  Dem_GbiEnCondGrpIdx/39:
  Jump functions of caller  Dem_GbiEventFailureCycleIdx/38:
  Jump functions of caller  Dem_GbiEventFailureClassIdx/37:
  Jump functions of caller  Dem_GbiNumAgingCycles/36:
  Jump functions of caller  Dem_GbiIndicatorFailureCycleIdx/35:
  Jump functions of caller  Dem_GbiIndicatorHealingCycleIdx/34:
  Jump functions of caller  Dem_GbiOpCycleIdx/33:
  Jump functions of caller  Dem_GbiEDClassIdx/32:
  Jump functions of caller  Dem_GbiFFRecNumClassIdx/31:
  Jump functions of caller  Dem_GbiMaxNumFFRecs/30:
  Jump functions of caller  Dem_GbiEvSignificance/29:
  Jump functions of caller  Dem_GbiFFClassIdx/28:
  Jump functions of caller  Dem_GbiEnablePrestorage/27:
  Jump functions of caller  Dem_GbiDTCFunctionalUnit/26:
  Jump functions of caller  Dem_GbiDTCSeverity/25:
  Jump functions of caller  Dem_GbiImmediateStorage/24:
  Jump functions of caller  Dem_GbiDTCGroupIdx/23:
  Jump functions of caller  Dem_GbiDTCOriginIdx/22:
  Jump functions of caller  Dem_GbiDTCOrigin/21:
  Jump functions of caller  Dem_GetVisibleDTC/20:
    callsite  Dem_GetVisibleDTC/20 -> Dem_GetVisibleUdsDTC/15 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_GetVisibleDTC/20 -> Dem_GetVisibleObdDTC/18 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_GbiDTCKind/19:
  Jump functions of caller  Dem_GetVisibleObdDTC/18:
  Jump functions of caller  Dem_GetObdDTC/17:
  Jump functions of caller  Dem_GetVisibleCmbDTC/16:
    indirect simple callsite, calling param -1, offset 0, for stmt DTC_6 = Dem_GetVisibleDTCFctPtr_1 (EventId_4(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_GetVisibleUdsDTC/15:
  Jump functions of caller  Dem_GetUdsDTC/14:
  Jump functions of caller  Dem_GbiUdsDTC/13:
  Jump functions of caller  Dem_ProcessIndicatorFailureCycleCounter/12:
    callsite  Dem_ProcessIndicatorFailureCycleCounter/12 -> Dem_PermanentMemoryAddEntry/61 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_ProcessIndicatorFailureCycleCounter/12 -> Dem_GetVisibleObdDTC/18 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_CheckForEventWIRUpdate/11:
    callsite  Dem_CheckForEventWIRUpdate/11 -> Dem_ProcessIndicatorFailureCycleCounter/12 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering Dem_GetMappedDTCOrigin for cloning; -fipa-cp-clone disabled.
Function Dem_InternalGetObdDTC/103 is not versionable, reason: not a tree_versionable_function.
Function Dem_InternalGetUdsDTC/102 is not versionable, reason: not a tree_versionable_function.
Not considering Dem_IsEventsMILIndicatorActive for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetFDCCounterBased for cloning; -fipa-cp-clone disabled.
Not considering Dem_DebounceEventCounterBased for cloning; -fipa-cp-clone disabled.
Not considering Dem_ResetDebounceMonitor for cloning; -fipa-cp-clone disabled.
Function Dem_FreezeDebounceCounterBased/96 is not versionable, reason: not a tree_versionable_function.
Not considering Dem_ResetDebounceCounterBased for cloning; -fipa-cp-clone disabled.
Not considering Dem_ClearAgedEventEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_StoreImmediately for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckForTriggerNvmWriteGateEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_TriggerNvmWriteEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckForImmediateEntryStorage for cloning; -fipa-cp-clone disabled.
Not considering Dem_ShiftData for cloning; -fipa-cp-clone disabled.
Not considering Dem_SizeOfIntValArea for cloning; -fipa-cp-clone disabled.
Not considering Dem_AssembleExtendedDataSeg for cloning; -fipa-cp-clone disabled.
Not considering Dem_SizeOfEDSegment for cloning; -fipa-cp-clone disabled.
Not considering Dem_SizeOfED for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetNumFFSegs for cloning; -fipa-cp-clone disabled.
Not considering Dem_SizeOfFFSegment for cloning; -fipa-cp-clone disabled.
Not considering Dem_SizeOfFF for cloning; -fipa-cp-clone disabled.
Not considering Dem_InternalGetIndicatorStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_InternalSetDTCSuppression for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMWriteCopyPermanentMemory for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMReadCopyPermanentMemory for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMWriteFinishedPermanentMemory for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMGateEntrySecondaryBlockCallback for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMGateEntryPrimaryBlockCallback for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMEventStatusBlockCallback for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMWriteCopyEventStatusBlock for cloning; -fipa-cp-clone disabled.
Not considering Dem_NvMReadCopyEventStatusBlock for cloning; -fipa-cp-clone disabled.
Not considering Dem_EvMemEntrySize for cloning; -fipa-cp-clone disabled.
Not considering Dem_ClearEventEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_UpdateEventStatusOnQualification for cloning; -fipa-cp-clone disabled.
Not considering Dem_InternalSetBswEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_InternalSetSwcEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_DebounceEvent for cloning; -fipa-cp-clone disabled.
Not considering Dem_PermanentMemoryStatusUpdate for cloning; -fipa-cp-clone disabled.
Not considering Dem_PermanentMemoryRemoveEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_PermanentMemoryAddEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_PermanentMemoryNotifyClear for cloning; -fipa-cp-clone disabled.
Not considering Dem_InternalProcessEventReport for cloning; -fipa-cp-clone disabled.
Not considering Dem_InternalSetEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_FindEDNumIndex for cloning; -fipa-cp-clone disabled.
Not considering Dem_IntValEntryData for cloning; -fipa-cp-clone disabled.
Not considering Dem_EDEntryData for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckFFRecNumStored for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckFFRecNumValid for cloning; -fipa-cp-clone disabled.
Not considering Dem_FFEntryData for cloning; -fipa-cp-clone disabled.
Not considering Dem_InitEvEntryExists for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetEvEntryExists for cloning; -fipa-cp-clone disabled.
Not considering Dem_SearchForEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiOBDReadinessGroup for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiMinRatioEvent for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEventKind for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDebounceStatusIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDebounceCounterClassIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDebounceAlgo for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiPriority for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiIndicatorUsed for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEnCondGrpIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEventFailureCycleIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEventFailureClassIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiNumAgingCycles for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiIndicatorFailureCycleIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiIndicatorHealingCycleIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiOpCycleIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEDClassIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiFFRecNumClassIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiMaxNumFFRecs for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEvSignificance for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiFFClassIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiEnablePrestorage for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDTCFunctionalUnit for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDTCSeverity for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiImmediateStorage for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDTCGroupIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDTCOriginIdx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDTCOrigin for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetVisibleDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_GbiDTCKind for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetVisibleObdDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetObdDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetVisibleCmbDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetVisibleUdsDTC for cloning; -fipa-cp-clone disabled.
Function Dem_GetUdsDTC/14 is not versionable, reason: not a tree_versionable_function.
Not considering Dem_GbiUdsDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_ProcessIndicatorFailureCycleCounter for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckForEventWIRUpdate for cloning; -fipa-cp-clone disabled.

overall_size: 1765, max_new_size: 11001
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 28, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 1.000000
 - context independent values, size: 15, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 37, time_benefit: 1.000000
 - context independent values, size: 22, time_benefit: 1.000000
 - context independent values, size: 24, time_benefit: 1.000000
 - context independent values, size: 16, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dem_NvMGateEntryBlockCallback.part.0/189:
    param [0]: 3 [loc_time: 1, loc_size: 9, prop_time: 0, prop_size: 0]
               0 [loc_time: 1, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x3
         uint8 [0, 3]
        AGGS VARIABLE
  Node: Dem_PermanentMemoryAddEntry.part.0/173:
  Node: Dem_SetEvEntryExists.part.0/169:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_SearchForEntry.part.0/168:
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
  Node: Dem_GetMappedDTCOrigin/105:
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
  Node: Dem_InternalCheckAndSetDTCSuppression/104:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: Dem_InternalGetObdDTC [loc_time: 33, loc_size: 43, prop_time: 0, prop_size: 0]
               Dem_InternalGetUdsDTC [loc_time: 33, loc_size: 43, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint32 (*Dem_GetDTCFctPtrType) (Dem_EventIdType) ~[0B, 0B]
        AGGS VARIABLE
    param [2]: &Dem_OBDDTCSuppression [loc_time: 1, loc_size: 45, prop_time: 0, prop_size: 0]
               &Dem_UDSDTCSuppression [loc_time: 1, loc_size: 45, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_InternalGetObdDTC/103:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_InternalGetUdsDTC/102:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_IsEventsMILIndicatorActive/101:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_UpdateFailureCounterFirstFail/100:
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
  Node: Dem_GetFDCCounterBased/99:
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
  Node: Dem_DebounceEventCounterBased/98:
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
  Node: Dem_ResetDebounceMonitor/97:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_FreezeDebounceCounterBased/96:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ResetDebounceCounterBased/95:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ClearAgedEventEntry/94:
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
  Node: Dem_StoreImmediately/93:
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
  Node: Dem_StoreImmediatelyNext/92:
    param [0]: 0 [loc_time: 49, loc_size: 53, prop_time: 0, prop_size: 0]
               3 [loc_time: 49, loc_size: 53, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x3
         uint8 [0, 3]
        AGGS VARIABLE
  Node: Dem_CheckForTriggerNvmWriteGateEntry/91:
  Node: Dem_TriggerNvmWriteEventStatus/90:
  Node: Dem_CheckForImmediateEntryStorage/89:
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
  Node: Dem_ShiftData/88:
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
  Node: Dem_SizeOfIntValArea/87:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_AssembleExtendedDataSeg/86:
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
  Node: Dem_SizeOfEDSegment/85:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SizeOfED/84:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetNumFFSegs/83:
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
  Node: Dem_SizeOfFFSegment/82:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SizeOfFF/81:
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
  Node: Dem_InternalGetIndicatorStatus/80:
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
  Node: Dem_InternalSetDTCSuppression/79:
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
  Node: Dem_NvMGateEntryBlockCallback/78:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 1, loc_size: 7, prop_time: 0, prop_size: 0]
               3 [loc_time: 1, loc_size: 7, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x3
         uint8 [0, 3]
        AGGS VARIABLE
  Node: Dem_NvMWriteCopyPermanentMemory/77:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_NvMReadCopyPermanentMemory/76:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_NvMWriteFinishedPermanentMemory/75:
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
  Node: Dem_NvMGateEntrySecondaryBlockCallback/74:
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
  Node: Dem_NvMGateEntryPrimaryBlockCallback/73:
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
  Node: Dem_NvMEventStatusBlockCallback/72:
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
  Node: Dem_NvMWriteCopyEventStatusBlock/71:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_NvMReadCopyEventStatusBlock/70:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_EvMemEntrySize/69:
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
  Node: Dem_ClearEventEntry/68:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_UpdateEventStatusOnQualification/67:
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
  Node: Dem_InternalSetBswEventStatus/66:
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
  Node: Dem_InternalSetSwcEventStatus/65:
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
  Node: Dem_DebounceEvent/64:
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
  Node: Dem_PermanentMemoryStatusUpdate/63:
  Node: Dem_PermanentMemoryRemoveEntry/62:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_PermanentMemoryAddEntry/61:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_PermanentMemoryNotifyClear/60:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_InternalProcessEventReport/59:
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
  Node: Dem_InternalSetEventStatus/58:
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
  Node: Dem_CheckProcessingConditions/57:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_FindEDNumIndex/56:
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
  Node: Dem_IntValEntryData/55:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_EDEntryData/54:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_CheckFFRecNumStored/53:
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
  Node: Dem_CheckFFRecNumValid/52:
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
  Node: Dem_FFEntryData/51:
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
  Node: Dem_InitEvEntryExists/50:
  Node: Dem_SetEvEntryExists/49:
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
  Node: Dem_SearchForEntry/48:
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
  Node: Dem_GbiOBDReadinessGroup/47:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiMinRatioEvent/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiEventKind/45:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDebounceStatusIdx/44:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDebounceCounterClassIdx/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDebounceAlgo/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiPriority/41:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiIndicatorUsed/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiEnCondGrpIdx/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiEventFailureCycleIdx/38:
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
  Node: Dem_GbiEventFailureClassIdx/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiNumAgingCycles/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiIndicatorFailureCycleIdx/35:
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
  Node: Dem_GbiIndicatorHealingCycleIdx/34:
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
  Node: Dem_GbiOpCycleIdx/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiEDClassIdx/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiFFRecNumClassIdx/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiMaxNumFFRecs/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiEvSignificance/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiFFClassIdx/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiEnablePrestorage/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDTCFunctionalUnit/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDTCSeverity/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiImmediateStorage/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDTCGroupIdx/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDTCOriginIdx/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiDTCOrigin/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetVisibleDTC/20:
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
  Node: Dem_GbiDTCKind/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetVisibleObdDTC/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetObdDTC/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetVisibleCmbDTC/16:
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
  Node: Dem_GetVisibleUdsDTC/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetUdsDTC/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GbiUdsDTC/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ProcessIndicatorFailureCycleCounter/12:
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
  Node: Dem_CheckForEventWIRUpdate/11:
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

IPA decision stage:

Propagated bits info for function Dem_NvMGateEntryBlockCallback.part.0/189:
 param 0: value = 0x3, mask = 0x3
Propagated bits info for function Dem_StoreImmediatelyNext/92:
 param 0: value = 0x3, mask = 0x3
Propagated bits info for function Dem_NvMGateEntryBlockCallback/78:
 param 1: value = 0x3, mask = 0x3

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dem_NvMGateEntryBlockCallback.part.0/189 (Dem_NvMGateEntryBlockCallback.part.0) @06ea3540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_NvMGateEntryBlockCallback/78 (217325344 (estimated locally),0.20 per call) 
  Calls: Dem_StoreImmediatelyNext/92 (1073741824 (estimated locally),1.00 per call) Dem_CheckForTriggerNvmWriteGateEntry/91 (217325345 (estimated locally),0.20 per call) 
Dem_PermanentMemoryAddEntry.part.0/173 (Dem_PermanentMemoryAddEntry.part.0) @0708ba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_NvData/112 (read)Dem_NvData/112 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_PermanentMemoryAddEntry/61 (141733920 (estimated locally),0.54 per call) 
  Calls: 
Dem_SetEvEntryExists.part.0/169 (Dem_SetEvEntryExists.part.0) @0708b1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_EvMemEntryExists/9 (read)Dem_EvMemEntryExists/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_SetEvEntryExists/49 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Dem_SearchForEntry.part.0/168 (Dem_SearchForEntry.part.0) @06ee8e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_EventDesc/114 (read)Dem_SizeEventMem/120 (read)Dem_EventMem/121 (read)
  Referring: 
  Availability: local
  Function flags: count:86959666 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_SearchForEntry/48 (86959666 (estimated locally),0.50 per call) 
  Calls: 
Dem_GateEntryData/151 (Dem_GateEntryData) @06ef8ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_StoreImmediately/93 (read)Dem_StoreImmediately/93 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_NvGateEntryPrimaryData/150 (Dem_NvGateEntryPrimaryData) @06ef8ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_StoreImmediately/93 (write)Dem_StoreImmediately/93 (addr)
  Availability: not_available
  Varpool flags:
Dem_NvGateEntryData/149 (Dem_NvGateEntryData) @06ef8c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_StoreImmediately/93 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_ASR40_SetDataIndex/147 (NvM_ASR40_SetDataIndex) @06ee8b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckForTriggerNvmWriteGateEntry/91 (173860275 (estimated locally),0.81 per call) 
  Calls: 
Dem_NvDataBlockId/146 (Dem_NvDataBlockId) @06ef85e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckForTriggerNvmWriteGateEntry/91 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_ASR40_WriteBlock/145 (NvM_ASR40_WriteBlock) @06ee8700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckForTriggerNvmWriteGateEntry/91 (57373891 (estimated locally),0.27 per call) Dem_TriggerNvmWriteEventStatus/90 (80098317 (estimated locally),0.07 per call) 
  Calls: 
NvM_ASR40_GetErrorStatus/144 (NvM_ASR40_GetErrorStatus) @06ee8620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_TriggerNvmWriteEventStatus/90 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dem_DataElement/143 (Dem_DataElement) @06ee4360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SizeOfFFSegment/82 (read)Dem_SizeOfEDSegment/85 (read)Dem_AssembleExtendedDataSeg/86 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_FFSegment/142 (Dem_FFSegment) @06ee41b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SizeOfFF/81 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_NvMGateEntryInfo/141 (Dem_NvMGateEntryInfo) @06ed0ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckForTriggerNvmWriteGateEntry/91 (read)Dem_StoreImmediatelyNext/92 (write)Dem_CheckForTriggerNvmWriteGateEntry/91 (write)Dem_CheckForTriggerNvmWriteGateEntry/91 (read)Dem_StoreImmediately/93 (write)Dem_StoreImmediatelyNext/92 (write)Dem_CheckForTriggerNvmWriteGateEntry/91 (read)Dem_CheckForTriggerNvmWriteGateEntry/91 (write)Dem_StoreImmediatelyNext/92 (write)Dem_CheckForImmediateEntryStorage/89 (read)Dem_CheckForImmediateEntryStorage/89 (write)
  Availability: not_available
  Varpool flags:
Dem_ClearDtcAsyncStatus/140 (Dem_ClearDtcAsyncStatus) @06ecb870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_NvMEventStatusBlockCallback/72 (read)Dem_NvMEventStatusBlockCallback/72 (write)Dem_NvMEventStatusBlockCallback/72 (write)Dem_NvMWriteCopyEventStatusBlock/71 (read)Dem_NvMWriteCopyEventStatusBlock/71 (write)Dem_NvMEventStatusBlockCallback/72 (write)Dem_NvMEventStatusBlockCallback/72 (read)Dem_CheckForTriggerNvmWriteGateEntry/91 (write)Dem_CheckForTriggerNvmWriteGateEntry/91 (write)Dem_CheckForTriggerNvmWriteGateEntry/91 (write)Dem_NvMEventStatusBlockCallback/72 (read)Dem_TriggerNvmWriteEventStatus/90 (read)Dem_TriggerNvmWriteEventStatus/90 (write)Dem_TriggerNvmWriteEventStatus/90 (write)Dem_TriggerNvmWriteEventStatus/90 (write)Dem_TriggerNvmWriteEventStatus/90 (write)Dem_TriggerNvmWriteEventStatus/90 (read)Dem_CheckForTriggerNvmWriteGateEntry/91 (read)Dem_CheckForTriggerNvmWriteGateEntry/91 (read)Dem_NvMWriteCopyEventStatusBlock/71 (read)Dem_NvMEventStatusBlockCallback/72 (read)Dem_StoreImmediatelyNext/92 (read)Dem_StoreImmediatelyNext/92 (write)Dem_StoreImmediatelyNext/92 (read)Dem_StoreImmediatelyNext/92 (read)Dem_StoreImmediatelyNext/92 (write)Dem_StoreImmediatelyNext/92 (write)
  Availability: not_available
  Varpool flags:
TS_MemCpy32/139 (TS_MemCpy32) @06ebb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_StoreImmediately/93 (12862353 (estimated locally),0.08 per call) Dem_StoreImmediately/93 (9744207 (estimated locally),0.06 per call) Dem_AssembleExtendedDataSeg/86 (243685707 (estimated locally),2.06 per call) Dem_NvMWriteCopyEventStatusBlock/71 (574129753 (estimated locally),0.53 per call) Dem_NvMReadCopyEventStatusBlock/70 (599491536 (estimated locally),0.56 per call) 
  Calls: 
Det_ASR40_ReportError/138 (Det_ASR40_ReportError) @06ebbee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_StoreImmediatelyNext/92 (402259296 (estimated locally),0.41 per call) Dem_TriggerNvmWriteEventStatus/90 (394710317 (estimated locally),0.37 per call) Dem_TriggerNvmWriteEventStatus/90 (598933190 (estimated locally),0.56 per call) Dem_NvMWriteCopyPermanentMemory/77 (92035013 (estimated locally),0.30 per call) Dem_NvMReadCopyPermanentMemory/76 (92035013 (estimated locally),0.24 per call) Dem_NvMReadCopyPermanentMemory/76 (77849743 (estimated locally),0.20 per call) Dem_NvMEventStatusBlockCallback/72 (21319015 (estimated locally),0.02 per call) Dem_NvMEventStatusBlockCallback/72 (100715657 (estimated locally),0.09 per call) Dem_NvMWriteCopyEventStatusBlock/71 (16628683 (estimated locally),0.02 per call) Dem_NvMWriteCopyEventStatusBlock/71 (91222260 (estimated locally),0.08 per call) Dem_NvMWriteCopyEventStatusBlock/71 (178447301 (estimated locally),0.17 per call) Dem_NvMReadCopyEventStatusBlock/70 (256924943 (estimated locally),0.24 per call) Dem_NvMReadCopyEventStatusBlock/70 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_FFClass/137 (Dem_FFClass) @06ec1e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_EvMemEntrySize/69 (addr)Dem_StoreImmediately/93 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_EntryDataFreePos/136 (Dem_EntryDataFreePos) @06ec1b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ClearEventEntry/68 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_UpdateEventIdOccurKinds/135 (Dem_UpdateEventIdOccurKinds) @06ebb9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_UpdateEventStatusOnQualification/67 (322766792 (estimated locally),0.30 per call) 
  Calls: 
Dem_CheckErrorReQueueEntry/134 (Dem_CheckErrorReQueueEntry) @06ebb7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_InternalSetBswEventStatus/66 (586557242 (estimated locally),0.55 per call) 
  Calls: 
Dem_CheckErrorQueueEntry/133 (Dem_CheckErrorQueueEntry) @06ebb700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_InternalSetBswEventStatus/66 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dem_WriteErrorQueueEntry/132 (Dem_WriteErrorQueueEntry) @06ebb540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_InternalSetSwcEventStatus/65 (165988847 (estimated locally),0.15 per call) 
  Calls: 
Dem_ProcessEvent/131 (Dem_ProcessEvent) @06ebb460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_InternalSetSwcEventStatus/65 (891205716 (estimated locally),0.83 per call) Dem_InternalSetSwcEventStatus/65 (18472654 (estimated locally),0.02 per call) 
  Calls: 
Dem_ReportErrorStatusPreInit/130 (Dem_ReportErrorStatusPreInit) @068ac8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_InternalProcessEventReport/59 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Dem_IncrementFailureCounter/129 (Dem_IncrementFailureCounter) @068ac700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_UpdateFailureCounterFirstFail/100 (4969546 (estimated locally),0.00 per call) 
  Calls: 
Dem_CheckErrorQueueEntryForStatus/128 (Dem_CheckErrorQueueEntryForStatus) @068ac620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_UpdateFailureCounterFirstFail/100 (15059229 (estimated locally),0.01 per call) 
  Calls: 
Dem_DTCSettingAllowed/127 (Dem_DTCSettingAllowed) @06eab168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckProcessingConditions/57 (read)
  Availability: not_available
  Varpool flags:
Dem_EnCondGrpStatusCounter/126 (Dem_EnCondGrpStatusCounter) @06eab120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckProcessingConditions/57 (read)
  Availability: not_available
  Varpool flags:
Dem_DoProcessFaultConfirmation/125 (Dem_DoProcessFaultConfirmation) @068afab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_InternalSetEventStatus/58 (write)
  Availability: not_available
  Varpool flags:
Dem_EDSegment/124 (Dem_EDSegment) @068af510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_FindEDNumIndex/56 (read)Dem_SizeOfED/84 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_EntryData/123 (Dem_EntryData) @068a79d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_FFEntryData/51 (read)Dem_IntValEntryData/55 (read)Dem_StoreImmediately/93 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EDClass/122 (Dem_EDClass) @068a7870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_FFEntryData/51 (addr)Dem_EvMemEntrySize/69 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_EventMem/121 (Dem_EventMem) @068a7360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ClearEventEntry/68 (read)Dem_CheckForTriggerNvmWriteGateEntry/91 (read)Dem_SearchForEntry.part.0/168 (read)Dem_StoreImmediately/93 (read)Dem_StoreImmediatelyNext/92 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_SizeEventMem/120 (Dem_SizeEventMem) @068a7318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SearchForEntry.part.0/168 (read)Dem_ClearEventEntry/68 (read)Dem_StoreImmediatelyNext/92 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_DebounceCounterClassIdx/119 (Dem_DebounceCounterClassIdx) @0689b990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiDebounceCounterClassIdx/43 (read)Dem_GetFDCCounterBased/99 (read)Dem_DebounceEventCounterBased/98 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EventFailureCycleCfg/118 (Dem_EventFailureCycleCfg) @0689b3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiEventFailureCycleIdx/38 (read)Dem_UpdateFailureCounterFirstFail/100 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_HealingCycleCounterInfo/117 (Dem_HealingCycleCounterInfo) @06892ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiIndicatorHealingCycleIdx/34 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_FFRecNumerationClass/116 (Dem_FFRecNumerationClass) @068929d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiMaxNumFFRecs/30 (read)Dem_CheckFFRecNumValid/52 (read)Dem_CheckFFRecNumValid/52 (read)Dem_CheckFFRecNumStored/53 (read)Dem_CheckFFRecNumStored/53 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_OBDConfig/115 (Dem_OBDConfig) @0688a4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiDTCKind/19 (read)Dem_GbiMinRatioEvent/46 (read)Dem_GetObdDTC/17 (read)Dem_PermanentMemoryStatusUpdate/63 (read)Dem_GetVisibleObdDTC/18 (read)Dem_GbiOBDReadinessGroup/47 (read)Dem_StoreImmediately/93 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EventDesc/114 (Dem_EventDesc) @06ea8a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ResetDebounceCounterBased/95 (read)Dem_GbiDebounceAlgo/42 (read)Dem_GetVisibleUdsDTC/15 (read)Dem_CheckForImmediateEntryStorage/89 (read)Dem_GbiDTCOrigin/21 (read)Dem_GbiDTCOriginIdx/22 (read)Dem_GbiDTCGroupIdx/23 (read)Dem_GbiImmediateStorage/24 (read)Dem_GbiDTCSeverity/25 (read)Dem_GbiDTCFunctionalUnit/26 (read)Dem_GbiFFClassIdx/28 (read)Dem_GbiEvSignificance/29 (read)Dem_GbiMaxNumFFRecs/30 (read)Dem_GbiEDClassIdx/32 (read)Dem_GbiOpCycleIdx/33 (read)Dem_GbiNumAgingCycles/36 (read)Dem_UpdateFailureCounterFirstFail/100 (read)Dem_CheckProcessingConditions/57 (read)Dem_GbiIndicatorUsed/40 (read)Dem_GbiPriority/41 (read)Dem_CheckForImmediateEntryStorage/89 (read)Dem_GbiUdsDTC/13 (read)Dem_GbiFFRecNumClassIdx/31 (read)Dem_GbiEventFailureClassIdx/37 (read)Dem_GbiEnCondGrpIdx/39 (read)Dem_CheckProcessingConditions/57 (read)Dem_CheckProcessingConditions/57 (read)Dem_GbiDebounceStatusIdx/44 (read)Dem_GetFDCCounterBased/99 (read)Dem_DebounceEventCounterBased/98 (read)Dem_GbiEventKind/45 (read)Dem_SearchForEntry.part.0/168 (read)Dem_CheckFFRecNumValid/52 (read)Dem_CheckFFRecNumStored/53 (read)Dem_IntValEntryData/55 (read)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_CheckForEventWIRUpdate/11 (read)Dem_DebounceEvent/64 (read)Dem_InternalSetSwcEventStatus/65 (read)Dem_SizeOfIntValArea/87 (read)Dem_FFEntryData/51 (read)Dem_FFEntryData/51 (read)Dem_EvMemEntrySize/69 (read)Dem_ClearEventEntry/68 (read)Dem_InternalSetEventStatus/58 (read)Dem_StoreImmediately/93 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_FailureCycleCounterInfo/113 (Dem_FailureCycleCounterInfo) @06ea8870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiIndicatorFailureCycleIdx/35 (read)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_ProcessIndicatorFailureCycleCounter/12 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_NvData/112 (Dem_NvData) @06ea87e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_NvMWriteCopyEventStatusBlock/71 (addr)Dem_PermanentMemoryRemoveEntry/62 (read)Dem_InternalGetIndicatorStatus/80 (read)Dem_UpdateEventStatusOnQualification/67 (read)Dem_UpdateFailureCounterFirstFail/100 (read)Dem_UpdateEventStatusOnQualification/67 (read)Dem_StoreImmediately/93 (read)Dem_IsEventsMILIndicatorActive/101 (read)Dem_IsEventsMILIndicatorActive/101 (read)Dem_PermanentMemoryAddEntry.part.0/173 (read)Dem_PermanentMemoryAddEntry.part.0/173 (write)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_ClearAgedEventEntry/94 (read)Dem_ClearAgedEventEntry/94 (write)Dem_ProcessIndicatorFailureCycleCounter/12 (write)Dem_PermanentMemoryRemoveEntry/62 (write)Dem_UpdateEventStatusOnQualification/67 (write)Dem_NvMReadCopyEventStatusBlock/70 (addr)Dem_InternalSetBswEventStatus/66 (read)Dem_UpdateEventStatusOnQualification/67 (read)Dem_UpdateEventStatusOnQualification/67 (write)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_InternalSetSwcEventStatus/65 (read)Dem_PermanentMemoryStatusUpdate/63 (read)Dem_PermanentMemoryStatusUpdate/63 (read)Dem_PermanentMemoryStatusUpdate/63 (read)Dem_PermanentMemoryStatusUpdate/63 (write)Dem_PermanentMemoryStatusUpdate/63 (write)
  Availability: not_available
  Varpool flags:
Dem_ProcessIndicatorOnCriteria/111 (Dem_ProcessIndicatorOnCriteria) @06ea37e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessIndicatorFailureCycleCounter/12 (73890617 (estimated locally),0.07 per call) 
  Calls: 
Dem_IndicatorDesc/110 (Dem_IndicatorDesc) @06ea8750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_InternalGetIndicatorStatus/80 (read)Dem_InternalGetIndicatorStatus/80 (read)Dem_IsEventsMILIndicatorActive/101 (read)Dem_IsEventsMILIndicatorActive/101 (read)Dem_PermanentMemoryStatusUpdate/63 (read)Dem_PermanentMemoryStatusUpdate/63 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_IndicatorLink/109 (Dem_IndicatorLink) @06ea1d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GbiIndicatorFailureCycleIdx/35 (read)Dem_GbiIndicatorHealingCycleIdx/34 (read)Dem_CheckForEventWIRUpdate/11 (read)Dem_IsEventsMILIndicatorActive/101 (addr)Dem_InternalGetIndicatorStatus/80 (addr)Dem_ProcessIndicatorFailureCycleCounter/12 (read)Dem_PermanentMemoryStatusUpdate/63 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06ea30e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_PermanentMemoryStatusUpdate/63 (205372451 (estimated locally),2.92 per call) Dem_PermanentMemoryStatusUpdate/63 (70351286 (estimated locally),1.00 per call) Dem_StoreImmediatelyNext/92 (114863532 (estimated locally),0.12 per call) Dem_CheckForTriggerNvmWriteGateEntry/91 (43465069 (estimated locally),0.20 per call) Dem_CheckForTriggerNvmWriteGateEntry/91 (214748365 (estimated locally),1.00 per call) Dem_TriggerNvmWriteEventStatus/90 (26432445 (estimated locally),0.02 per call) Dem_NvMWriteCopyPermanentMemory/77 (214748365 (estimated locally),0.70 per call) Dem_NvMReadCopyPermanentMemory/76 (214748365 (estimated locally),0.56 per call) Dem_NvMWriteFinishedPermanentMemory/75 (214748365 (estimated locally),0.33 per call) Dem_NvMEventStatusBlockCallback/72 (606019887 (estimated locally),0.56 per call) Dem_NvMWriteCopyEventStatusBlock/71 (574129753 (estimated locally),0.53 per call) Dem_NvMReadCopyEventStatusBlock/70 (599491536 (estimated locally),0.56 per call) Dem_InternalSetBswEventStatus/66 (1073741824 (estimated locally),1.00 per call) Dem_InternalSetSwcEventStatus/65 (165988847 (estimated locally),0.15 per call) Dem_InternalCheckAndSetDTCSuppression/104 (41822668 (estimated locally),0.33 per call) Dem_DebounceEventCounterBased/98 (1073741824 (estimated locally),1.00 per call) Dem_UpdateFailureCounterFirstFail/100 (4969546 (estimated locally),0.00 per call) 
  Calls: 
SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06ea3000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_PermanentMemoryStatusUpdate/63 (205372451 (estimated locally),2.92 per call) Dem_PermanentMemoryStatusUpdate/63 (70351286 (estimated locally),1.00 per call) Dem_StoreImmediatelyNext/92 (114863532 (estimated locally),0.12 per call) Dem_CheckForTriggerNvmWriteGateEntry/91 (43465069 (estimated locally),0.20 per call) Dem_CheckForTriggerNvmWriteGateEntry/91 (214748364 (estimated locally),1.00 per call) Dem_TriggerNvmWriteEventStatus/90 (26432445 (estimated locally),0.02 per call) Dem_NvMWriteCopyPermanentMemory/77 (214748364 (estimated locally),0.70 per call) Dem_NvMReadCopyPermanentMemory/76 (214748364 (estimated locally),0.56 per call) Dem_NvMWriteFinishedPermanentMemory/75 (214748364 (estimated locally),0.33 per call) Dem_NvMEventStatusBlockCallback/72 (606019887 (estimated locally),0.56 per call) Dem_NvMWriteCopyEventStatusBlock/71 (574129753 (estimated locally),0.53 per call) Dem_NvMReadCopyEventStatusBlock/70 (599491536 (estimated locally),0.56 per call) Dem_InternalSetBswEventStatus/66 (1073741823 (estimated locally),1.00 per call) Dem_InternalSetSwcEventStatus/65 (165988847 (estimated locally),0.15 per call) Dem_InternalCheckAndSetDTCSuppression/104 (41822668 (estimated locally),0.33 per call) Dem_DebounceEventCounterBased/98 (1073741824 (estimated locally),1.00 per call) Dem_UpdateFailureCounterFirstFail/100 (4969546 (estimated locally),0.00 per call) 
  Calls: 
Dem_DebounceCounterClass/106 (Dem_DebounceCounterClass) @06df4ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetFDCCounterBased/99 (read)Dem_GetFDCCounterBased/99 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GetMappedDTCOrigin/105 (Dem_GetMappedDTCOrigin) @06e90d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_InternalCheckAndSetDTCSuppression/104 (Dem_InternalCheckAndSetDTCSuppression) @06e90b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:126735358 (estimated locally) body local optimize_size
  Called by: Dem_InternalSetDTCSuppression/79 (536870913 (estimated locally),0.50 per call) Dem_InternalSetDTCSuppression/79 (536870913 (estimated locally),0.50 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (41822668 (estimated locally),0.33 per call) Dem_SearchForEntry/48 (5586839 (estimated locally),0.04 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (41822668 (estimated locally),0.33 per call) 
   Indirect call(1002123246 (estimated locally),7.91 per call)  of param:1 (vptr maybe changed)
Dem_InternalGetObdDTC/103 (Dem_InternalGetObdDTC) @06e909a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dem_InternalSetDTCSuppression/79 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dem_GetObdDTC/17 (1073741824 (estimated locally),1.00 per call) 
Dem_InternalGetUdsDTC/102 (Dem_InternalGetUdsDTC) @06e907e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dem_InternalSetDTCSuppression/79 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dem_GbiUdsDTC/13 (1073741824 (estimated locally),1.00 per call) 
Dem_IsEventsMILIndicatorActive/101 (Dem_IsEventsMILIndicatorActive) @06e90620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_IndicatorDesc/110 (read)Dem_IndicatorDesc/110 (read)Dem_IndicatorLink/109 (addr)Dem_NvData/112 (read)Dem_NvData/112 (read)
  Referring: 
  Availability: available
  Function flags: count:66835398 (estimated locally) body optimize_size
  Called by: Dem_PermanentMemoryStatusUpdate/63 (1014686024 (estimated locally),14.42 per call) Dem_PermanentMemoryStatusUpdate/63 (140702572 (estimated locally),2.00 per call) 
  Calls: 
Dem_UpdateFailureCounterFirstFail/100 (Dem_UpdateFailureCounterFirstFail) @06e90380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/112 (read)Dem_EventDesc/114 (read)Dem_EventFailureCycleCfg/118 (read)Dem_OpCycleState/4 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_InternalSetEventStatus/58 (173198851 (estimated locally),0.16 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (4969546 (estimated locally),0.00 per call) Dem_IncrementFailureCounter/129 (4969546 (estimated locally),0.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (4969546 (estimated locally),0.00 per call) Dem_CheckErrorQueueEntryForStatus/128 (15059229 (estimated locally),0.01 per call) 
Dem_GetFDCCounterBased/99 (Dem_GetFDCCounterBased) @06e90000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dem_EventDesc/114 (read)Dem_DebounceCounterClassIdx/119 (read)Dem_DebounceCounterStatus/3 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterClass/106 (read)
  Referring: Dem_DebounceFctPtrTable/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_DebounceEventCounterBased/98 (Dem_DebounceEventCounterBased) @06e41e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dem_EventDesc/114 (read)Dem_DebounceCounterClassIdx/119 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterStatus/3 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterStatus/3 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (write)Dem_DebounceCounterClass/106 (read)Dem_DebounceCounterStatus/3 (write)
  Referring: Dem_DebounceFctPtrTable/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (1073741824 (estimated locally),1.00 per call) 
Dem_ResetDebounceMonitor/97 (Dem_ResetDebounceMonitor) @06e41c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dem_DebounceFctPtrTable/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dem_FreezeDebounceCounterBased/96 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_FreezeDebounceCounterBased/96 (Dem_FreezeDebounceCounterBased) @06e41a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dem_DebounceFctPtrTable/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dem_ResetDebounceMonitor/97 (1073741824 (estimated locally),1.00 per call) 
Dem_ResetDebounceCounterBased/95 (Dem_ResetDebounceCounterBased) @06e418c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dem_EventDesc/114 (read)Dem_DebounceCounterStatus/3 (write)
  Referring: Dem_DebounceFctPtrTable/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ClearAgedEventEntry/94 (Dem_ClearAgedEventEntry) @06e41700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvData/112 (read)Dem_NvData/112 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_ClearEventEntry/68 (1073741824 (estimated locally),1.00 per call) 
Dem_StoreImmediately/93 (Dem_StoreImmediately) @06e41460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvGateEntryData/149 (read)Dem_EventMem/121 (read)Dem_EventDesc/114 (read)Dem_FFClass/137 (addr)Dem_NvData/112 (read)Dem_OBDConfig/115 (read)Dem_EntryOBDFF/2 (read)Dem_NvGateEntryPrimaryData/150 (write)Dem_EntryOBDFF/2 (addr)Dem_NvGateEntryPrimaryData/150 (addr)Dem_GateEntryData/151 (read)Dem_EntryData/123 (read)Dem_GateEntryData/151 (read)Dem_NvMGateEntryInfo/141 (write)
  Referring: 
  Availability: available
  Function flags: count:168730857 (estimated locally) body optimize_size
  Called by: Dem_CheckForImmediateEntryStorage/89 (204628348 (estimated locally),0.19 per call) Dem_StoreImmediatelyNext/92 (37904965 (estimated locally),0.04 per call) 
  Calls: TS_MemCpy32/139 (12862353 (estimated locally),0.08 per call) Dem_SizeOfFF/81 (55681183 (estimated locally),0.33 per call) TS_MemCpy32/139 (9744207 (estimated locally),0.06 per call) Dem_EvMemEntrySize/69 (55681183 (estimated locally),0.33 per call) Dem_GbiMaxNumFFRecs/30 (55681183 (estimated locally),0.33 per call) 
Dem_StoreImmediatelyNext/92 (Dem_StoreImmediatelyNext) @06e411c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_InitializationState/10 (read)Dem_SizeEventMem/120 (read)Dem_EventMem/121 (read)Dem_NvMGateEntryInfo/141 (write)Dem_NvMGateEntryInfo/141 (write)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)Dem_NvMGateEntryInfo/141 (write)
  Referring: 
  Availability: local
  Function flags: count:969766867 (estimated locally) body local optimize_size
  Called by: Dem_NvMGateEntryBlockCallback.part.0/189 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (114863532 (estimated locally),0.12 per call) Dem_StoreImmediately/93 (37904965 (estimated locally),0.04 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (114863532 (estimated locally),0.12 per call) Det_ASR40_ReportError/138 (402259296 (estimated locally),0.41 per call) 
Dem_CheckForTriggerNvmWriteGateEntry/91 (Dem_CheckForTriggerNvmWriteGateEntry) @06e37ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvMGateEntryInfo/141 (read)Dem_NvMGateEntryInfo/141 (write)Dem_NvDataBlockId/146 (read)Dem_NvMGateEntryInfo/141 (read)Dem_NvMGateEntryInfo/141 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)Dem_EventMem/121 (read)Dem_NvMGateEntryInfo/141 (write)
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: Dem_NvMGateEntryBlockCallback.part.0/189 (217325345 (estimated locally),0.20 per call) Dem_InternalSetEventStatus/58 (173198851 (estimated locally),0.16 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (43465069 (estimated locally),0.20 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (43465069 (estimated locally),0.20 per call) NvM_ASR40_WriteBlock/145 (57373891 (estimated locally),0.27 per call) NvM_ASR40_SetDataIndex/147 (173860275 (estimated locally),0.81 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (214748365 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (214748364 (estimated locally),1.00 per call) 
Dem_TriggerNvmWriteEventStatus/90 (Dem_TriggerNvmWriteEventStatus) @06e37d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (26432445 (estimated locally),0.02 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (26432445 (estimated locally),0.02 per call) NvM_ASR40_WriteBlock/145 (80098317 (estimated locally),0.07 per call) Det_ASR40_ReportError/138 (394710317 (estimated locally),0.37 per call) Det_ASR40_ReportError/138 (598933190 (estimated locally),0.56 per call) NvM_ASR40_GetErrorStatus/144 (1073741823 (estimated locally),1.00 per call) 
Dem_CheckForImmediateEntryStorage/89 (Dem_CheckForImmediateEntryStorage) @06e379a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_EventDesc/114 (read)Dem_NvMGateEntryInfo/141 (read)Dem_NvMGateEntryInfo/141 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_StoreImmediately/93 (204628348 (estimated locally),0.19 per call) 
Dem_ShiftData/88 (Dem_ShiftData) @06e377e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Dem_ClearEventEntry/68 (118111600 (estimated locally),0.33 per call) 
  Calls: 
Dem_SizeOfIntValArea/87 (Dem_SizeOfIntValArea) @06e37620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_EvMemEntrySize/69 (1073741824 (estimated locally),1.00 per call) Dem_EDEntryData/54 (1073741824 (estimated locally),1.00 per call) Dem_FFEntryData/51 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_AssembleExtendedDataSeg/86 (Dem_AssembleExtendedDataSeg) @06e37460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DataElement/143 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/139 (243685707 (estimated locally),2.06 per call) Dem_EDEntryData/54 (243685707 (estimated locally),2.06 per call) 
Dem_SizeOfEDSegment/85 (Dem_SizeOfEDSegment) @06e372a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DataElement/143 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_SizeOfED/84 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dem_SizeOfED/84 (Dem_SizeOfED) @06e370e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EDSegment/124 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_EvMemEntrySize/69 (1073741824 (estimated locally),1.00 per call) Dem_FFEntryData/51 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_SizeOfEDSegment/85 (536870913 (estimated locally),0.50 per call) 
Dem_GetNumFFSegs/83 (Dem_GetNumFFSegs) @06e2bee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_SizeOfFFSegment/82 (Dem_SizeOfFFSegment) @06e2bd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DataElement/143 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_SizeOfFF/81 (630715949 (estimated locally),5.34 per call) 
  Calls: 
Dem_SizeOfFF/81 (Dem_SizeOfFF) @06e2bb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_FFSegment/142 (addr)
  Referring: 
  Availability: available
  Function flags: count:118111603 (estimated locally) body optimize_size
  Called by: Dem_StoreImmediately/93 (55681183 (estimated locally),0.33 per call) Dem_EvMemEntrySize/69 (1073741824 (estimated locally),1.00 per call) Dem_FFEntryData/51 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_SizeOfFFSegment/82 (630715949 (estimated locally),5.34 per call) 
Dem_InternalGetIndicatorStatus/80 (Dem_InternalGetIndicatorStatus) @06e2b9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_IndicatorDesc/110 (read)Dem_IndicatorLink/109 (addr)Dem_NvData/112 (read)Dem_IndicatorDesc/110 (read)
  Referring: 
  Availability: available
  Function flags: count:86959666 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_InternalSetDTCSuppression/79 (Dem_InternalSetDTCSuppression) @06e2b7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InternalGetObdDTC/103 (addr)Dem_OBDDTCSuppression/8 (addr)Dem_InternalGetUdsDTC/102 (addr)Dem_UDSDTCSuppression/7 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalCheckAndSetDTCSuppression/104 (536870913 (estimated locally),0.50 per call) Dem_InternalCheckAndSetDTCSuppression/104 (536870913 (estimated locally),0.50 per call) 
Dem_NvMGateEntryBlockCallback/78 (Dem_NvMGateEntryBlockCallback) @06e2b620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_NvMGateEntrySecondaryBlockCallback/74 (1073741824 (estimated locally),1.00 per call) Dem_NvMGateEntryPrimaryBlockCallback/73 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_NvMGateEntryBlockCallback.part.0/189 (217325344 (estimated locally),0.20 per call) 
Dem_NvMWriteCopyPermanentMemory/77 (Dem_NvMWriteCopyPermanentMemory) @06e2b460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPermanent/1 (read)Dem_EventMemoryPermanentNonVolatileStored/5 (write)Dem_EventMemoryPermanentUpdated/6 (write)
  Referring: 
  Availability: available
  Function flags: count:306783377 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (214748365 (estimated locally),0.70 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (214748364 (estimated locally),0.70 per call) Det_ASR40_ReportError/138 (92035013 (estimated locally),0.30 per call) 
Dem_NvMReadCopyPermanentMemory/76 (Dem_NvMReadCopyPermanentMemory) @06e2b1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/10 (read)Dem_EventMemoryPermanent/1 (write)
  Referring: 
  Availability: available
  Function flags: count:384633120 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (214748365 (estimated locally),0.56 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (214748364 (estimated locally),0.56 per call) Det_ASR40_ReportError/138 (92035013 (estimated locally),0.24 per call) Det_ASR40_ReportError/138 (77849743 (estimated locally),0.20 per call) 
Dem_NvMWriteFinishedPermanentMemory/75 (Dem_NvMWriteFinishedPermanentMemory) @06e01e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPermanentNonVolatileStored/5 (read)Dem_EventMemoryPermanentNonVolatileStored/5 (write)Dem_EventMemoryPermanentUpdated/6 (write)
  Referring: 
  Availability: available
  Function flags: count:650752619 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (214748365 (estimated locally),0.33 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (214748364 (estimated locally),0.33 per call) 
Dem_NvMGateEntrySecondaryBlockCallback/74 (Dem_NvMGateEntrySecondaryBlockCallback) @06e01c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_NvMGateEntryBlockCallback/78 (1073741824 (estimated locally),1.00 per call) 
Dem_NvMGateEntryPrimaryBlockCallback/73 (Dem_NvMGateEntryPrimaryBlockCallback) @06e01a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_NvMGateEntryBlockCallback/78 (1073741824 (estimated locally),1.00 per call) 
Dem_NvMEventStatusBlockCallback/72 (Dem_NvMEventStatusBlockCallback) @06e018c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/10 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_ClearDtcAsyncStatus/140 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (606019887 (estimated locally),0.56 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (606019887 (estimated locally),0.56 per call) Det_ASR40_ReportError/138 (21319015 (estimated locally),0.02 per call) Det_ASR40_ReportError/138 (100715657 (estimated locally),0.09 per call) 
Dem_NvMWriteCopyEventStatusBlock/71 (Dem_NvMWriteCopyEventStatusBlock) @06e01540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/10 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (read)Dem_ClearDtcAsyncStatus/140 (write)Dem_NvData/112 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (574129753 (estimated locally),0.53 per call) TS_MemCpy32/139 (574129753 (estimated locally),0.53 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (574129753 (estimated locally),0.53 per call) Det_ASR40_ReportError/138 (16628683 (estimated locally),0.02 per call) Det_ASR40_ReportError/138 (91222260 (estimated locally),0.08 per call) Det_ASR40_ReportError/138 (178447301 (estimated locally),0.17 per call) 
Dem_NvMReadCopyEventStatusBlock/70 (Dem_NvMReadCopyEventStatusBlock) @06e01000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/10 (read)Dem_NvData/112 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (599491536 (estimated locally),0.56 per call) TS_MemCpy32/139 (599491536 (estimated locally),0.56 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (599491536 (estimated locally),0.56 per call) Det_ASR40_ReportError/138 (256924943 (estimated locally),0.24 per call) Det_ASR40_ReportError/138 (217325345 (estimated locally),0.20 per call) 
Dem_EvMemEntrySize/69 (Dem_EvMemEntrySize) @06df9b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_EDClass/122 (addr)Dem_FFClass/137 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_StoreImmediately/93 (55681183 (estimated locally),0.33 per call) Dem_ClearEventEntry/68 (357913939 (estimated locally),1.00 per call) 
  Calls: Dem_GbiMaxNumFFRecs/30 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfFF/81 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfED/84 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfIntValArea/87 (1073741824 (estimated locally),1.00 per call) 
Dem_ClearEventEntry/68 (Dem_ClearEventEntry) @06df99a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_EntryDataFreePos/136 (read)Dem_EventMem/121 (read)Dem_SizeEventMem/120 (read)
  Referring: 
  Availability: available
  Function flags: count:357913939 (estimated locally) body optimize_size
  Called by: Dem_ClearAgedEventEntry/94 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_SetEvEntryExists/49 (357913940 (estimated locally),1.00 per call) Dem_ShiftData/88 (118111600 (estimated locally),0.33 per call) Dem_IntValEntryData/55 (118111600 (estimated locally),0.33 per call) Dem_EvMemEntrySize/69 (357913939 (estimated locally),1.00 per call) 
Dem_UpdateEventStatusOnQualification/67 (Dem_UpdateEventStatusOnQualification) @06df97e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvData/112 (read)Dem_NvData/112 (write)Dem_NvData/112 (read)Dem_NvData/112 (read)Dem_NvData/112 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_UpdateEventIdOccurKinds/135 (322766792 (estimated locally),0.30 per call) 
Dem_InternalSetBswEventStatus/66 (Dem_InternalSetBswEventStatus) @06df9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvData/112 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Dem_InternalSetEventStatus/58 (86599426 (estimated locally),0.08 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (1073741824 (estimated locally),1.00 per call) Dem_CheckErrorReQueueEntry/134 (586557242 (estimated locally),0.55 per call) Dem_CheckErrorQueueEntry/133 (1073741823 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (1073741823 (estimated locally),1.00 per call) 
Dem_InternalSetSwcEventStatus/65 (Dem_InternalSetSwcEventStatus) @06df9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvData/112 (read)Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741821 (estimated locally) body optimize_size
  Called by: Dem_InternalSetEventStatus/58 (86599426 (estimated locally),0.08 per call) 
  Calls: Dem_ProcessEvent/131 (891205716 (estimated locally),0.83 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (165988847 (estimated locally),0.15 per call) Dem_WriteErrorQueueEntry/132 (165988847 (estimated locally),0.15 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (165988847 (estimated locally),0.15 per call) Dem_ProcessEvent/131 (18472654 (estimated locally),0.02 per call) 
Dem_DebounceEvent/64 (Dem_DebounceEvent) @06defa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_DebounceFctPtrTable/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_InternalSetEventStatus/58 (524845004 (estimated locally),0.49 per call) 
  Calls: 
   Indirect call(536870913 (estimated locally),0.50 per call) 
Dem_PermanentMemoryStatusUpdate/63 (Dem_PermanentMemoryStatusUpdate) @06def8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPermanent/1 (read)Dem_NvData/112 (read)Dem_OBDConfig/115 (read)Dem_NvData/112 (read)Dem_EventMemoryPermanentNonVolatileStored/5 (write)Dem_NvData/112 (read)Dem_NvData/112 (write)Dem_EventMemoryPermanent/1 (write)Dem_EventMemoryPermanentUpdated/6 (write)Dem_IndicatorDesc/110 (read)Dem_IndicatorDesc/110 (read)Dem_IndicatorLink/109 (read)Dem_NvData/112 (write)
  Referring: 
  Availability: available
  Function flags: count:70351286 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (205372451 (estimated locally),2.92 per call) Dem_PermanentMemoryAddEntry/61 (205372451 (estimated locally),2.92 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (205372451 (estimated locally),2.92 per call) Dem_IsEventsMILIndicatorActive/101 (1014686024 (estimated locally),14.42 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/108 (70351286 (estimated locally),1.00 per call) Dem_IsEventsMILIndicatorActive/101 (140702572 (estimated locally),2.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/107 (70351286 (estimated locally),1.00 per call) 
Dem_PermanentMemoryRemoveEntry/62 (Dem_PermanentMemoryRemoveEntry) @06de7b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPermanent/1 (read)Dem_EventMemoryPermanent/1 (write)Dem_EventMemoryPermanentNonVolatileStored/5 (write)Dem_EventMemoryPermanentUpdated/6 (write)Dem_NvData/112 (read)Dem_NvData/112 (write)
  Referring: 
  Availability: available
  Function flags: count:261993004 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_PermanentMemoryAddEntry/61 (Dem_PermanentMemoryAddEntry) @06de7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPermanent/1 (read)Dem_EventMemoryPermanent/1 (write)Dem_EventMemoryPermanentUpdated/6 (write)Dem_EventMemoryPermanent/1 (write)Dem_EventMemoryPermanentUpdated/6 (write)
  Referring: 
  Availability: available
  Function flags: count:261993004 (estimated locally) body optimize_size
  Called by: Dem_PermanentMemoryStatusUpdate/63 (205372451 (estimated locally),2.92 per call) Dem_ProcessIndicatorFailureCycleCounter/12 (34841273 (estimated locally),0.03 per call) 
  Calls: Dem_PermanentMemoryAddEntry.part.0/173 (141733920 (estimated locally),0.54 per call) 
Dem_PermanentMemoryNotifyClear/60 (Dem_PermanentMemoryNotifyClear) @06de0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPermanent/1 (read)Dem_EventMemoryPermanent/1 (write)Dem_EventMemoryPermanentUpdated/6 (write)
  Referring: 
  Availability: available
  Function flags: count:261993004 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_InternalProcessEventReport/59 (Dem_InternalProcessEventReport) @06de09a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_ReportErrorStatusPreInit/130 (357878150 (estimated locally),0.33 per call) Dem_InternalSetEventStatus/58 (357878150 (estimated locally),0.33 per call) 
Dem_InternalSetEventStatus/58 (Dem_InternalSetEventStatus) @06de07e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DoProcessFaultConfirmation/125 (write)Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_InternalProcessEventReport/59 (357878150 (estimated locally),0.33 per call) 
  Calls: Dem_CheckForTriggerNvmWriteGateEntry/91 (173198851 (estimated locally),0.16 per call) Dem_InternalSetBswEventStatus/66 (86599426 (estimated locally),0.08 per call) Dem_InternalSetSwcEventStatus/65 (86599426 (estimated locally),0.08 per call) Dem_UpdateFailureCounterFirstFail/100 (173198851 (estimated locally),0.16 per call) Dem_DebounceEvent/64 (524845004 (estimated locally),0.49 per call) Dem_CheckProcessingConditions/57 (1073741824 (estimated locally),1.00 per call) 
Dem_CheckProcessingConditions/57 (Dem_CheckProcessingConditions) @06de0620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventDesc/114 (read)Dem_OpCycleState/4 (read)Dem_EventDesc/114 (read)Dem_EnCondGrpStatusCounter/126 (read)Dem_DTCSettingAllowed/127 (read)Dem_EventDesc/114 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dem_InternalSetEventStatus/58 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_FindEDNumIndex/56 (Dem_FindEDNumIndex) @06de0380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EDSegment/124 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_IntValEntryData/55 (Dem_IntValEntryData) @06de01c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_EntryData/123 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_ClearEventEntry/68 (118111600 (estimated locally),0.33 per call) Dem_EDEntryData/54 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_EDEntryData/54 (Dem_EDEntryData) @06de0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_AssembleExtendedDataSeg/86 (243685707 (estimated locally),2.06 per call) 
  Calls: Dem_SizeOfIntValArea/87 (1073741824 (estimated locally),1.00 per call) Dem_IntValEntryData/55 (1073741824 (estimated locally),1.00 per call) 
Dem_CheckFFRecNumStored/53 (Dem_CheckFFRecNumStored) @06dd6e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_FFRecNumerationClass/116 (read)Dem_FFRecNumerationClass/116 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_CheckFFRecNumValid/52 (Dem_CheckFFRecNumValid) @06dd6c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_FFRecNumerationClass/116 (read)Dem_FFRecNumerationClass/116 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_FFEntryData/51 (Dem_FFEntryData) @06dd6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_EDClass/122 (addr)Dem_EventDesc/114 (read)Dem_EntryData/123 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SizeOfFF/81 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfED/84 (1073741824 (estimated locally),1.00 per call) Dem_SizeOfIntValArea/87 (1073741824 (estimated locally),1.00 per call) 
Dem_InitEvEntryExists/50 (Dem_InitEvEntryExists) @06dd68c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EvMemEntryExists/9 (write)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_SetEvEntryExists/49 (Dem_SetEvEntryExists) @06dd6700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EvMemEntryExists/9 (read)Dem_EvMemEntryExists/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_ClearEventEntry/68 (357913940 (estimated locally),1.00 per call) 
  Calls: Dem_SetEvEntryExists.part.0/169 (365072224 (estimated locally),0.34 per call) 
Dem_SearchForEntry/48 (Dem_SearchForEntry) @06dd6540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EvMemEntryExists/9 (read)
  Referring: 
  Availability: available
  Function flags: count:173919332 (estimated locally) body optimize_size
  Called by: Dem_InternalCheckAndSetDTCSuppression/104 (5586839 (estimated locally),0.04 per call) 
  Calls: Dem_SearchForEntry.part.0/168 (86959666 (estimated locally),0.50 per call) 
Dem_GbiOBDReadinessGroup/47 (Dem_GbiOBDReadinessGroup) @06dd6380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_OBDConfig/115 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiMinRatioEvent/46 (Dem_GbiMinRatioEvent) @06dd61c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_OBDConfig/115 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiEventKind/45 (Dem_GbiEventKind) @06dd6000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDebounceStatusIdx/44 (Dem_GbiDebounceStatusIdx) @06dd0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDebounceCounterClassIdx/43 (Dem_GbiDebounceCounterClassIdx) @06dd0c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DebounceCounterClassIdx/119 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDebounceAlgo/42 (Dem_GbiDebounceAlgo) @06dd0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiPriority/41 (Dem_GbiPriority) @06dd08c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiIndicatorUsed/40 (Dem_GbiIndicatorUsed) @06dd0700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiEnCondGrpIdx/39 (Dem_GbiEnCondGrpIdx) @06dd0540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiEventFailureCycleIdx/38 (Dem_GbiEventFailureCycleIdx) @06dd0380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventFailureCycleCfg/118 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiEventFailureClassIdx/37 (Dem_GbiEventFailureClassIdx) @06dd01c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiNumAgingCycles/36 (Dem_GbiNumAgingCycles) @06dd0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiIndicatorFailureCycleIdx/35 (Dem_GbiIndicatorFailureCycleIdx) @06dc9e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_IndicatorLink/109 (read)Dem_FailureCycleCounterInfo/113 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiIndicatorHealingCycleIdx/34 (Dem_GbiIndicatorHealingCycleIdx) @06dc9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_IndicatorLink/109 (read)Dem_HealingCycleCounterInfo/117 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiOpCycleIdx/33 (Dem_GbiOpCycleIdx) @06dc9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiEDClassIdx/32 (Dem_GbiEDClassIdx) @06dc98c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiFFRecNumClassIdx/31 (Dem_GbiFFRecNumClassIdx) @06dc9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiMaxNumFFRecs/30 (Dem_GbiMaxNumFFRecs) @06dc9540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_FFRecNumerationClass/116 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_StoreImmediately/93 (55681183 (estimated locally),0.33 per call) Dem_EvMemEntrySize/69 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_GbiEvSignificance/29 (Dem_GbiEvSignificance) @06dc9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiFFClassIdx/28 (Dem_GbiFFClassIdx) @06dc91c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiEnablePrestorage/27 (Dem_GbiEnablePrestorage) @06dc9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDTCFunctionalUnit/26 (Dem_GbiDTCFunctionalUnit) @06dc1e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDTCSeverity/25 (Dem_GbiDTCSeverity) @06dc1c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiImmediateStorage/24 (Dem_GbiImmediateStorage) @06dc1a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDTCGroupIdx/23 (Dem_GbiDTCGroupIdx) @06dc18c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDTCOriginIdx/22 (Dem_GbiDTCOriginIdx) @06dc1700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GbiDTCOrigin/21 (Dem_GbiDTCOrigin) @06dc1540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GetVisibleDTC/20 (Dem_GetVisibleDTC) @06dc1380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GetVisibleUdsDTC/15 (536870913 (estimated locally),0.50 per call) Dem_GetVisibleObdDTC/18 (536870913 (estimated locally),0.50 per call) 
Dem_GbiDTCKind/19 (Dem_GbiDTCKind) @06dc11c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_OBDConfig/115 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_GetVisibleObdDTC/18 (Dem_GetVisibleObdDTC) @06dc1000
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: Dem_OBDDTCSuppression/8 (read)Dem_OBDConfig/115 (read)
  Referring: Dem_GetVisibleCmbDTC/16 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_ProcessIndicatorFailureCycleCounter/12 (172140679 (estimated locally),0.16 per call) Dem_GetVisibleDTC/20 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dem_GetObdDTC/17 (Dem_GetObdDTC) @06d94e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_OBDConfig/115 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dem_InternalGetObdDTC/103 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_GetVisibleCmbDTC/16 (Dem_GetVisibleCmbDTC) @06d94c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_GetVisibleObdDTC/18 (addr)Dem_GetVisibleUdsDTC/15 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dem_GetVisibleUdsDTC/15 (Dem_GetVisibleUdsDTC) @06d94a80
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: Dem_UDSDTCSuppression/7 (read)Dem_EventDesc/114 (read)
  Referring: Dem_GetVisibleCmbDTC/16 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_GetVisibleDTC/20 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dem_GetUdsDTC/14 (Dem_GetUdsDTC) @06d948c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dem_GbiUdsDTC/13 (1073741824 (estimated locally),1.00 per call) 
Dem_GbiUdsDTC/13 (Dem_GbiUdsDTC) @06d94700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dem_InternalGetUdsDTC/102 (1073741824 (estimated locally),1.00 per call) Dem_GetUdsDTC/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_ProcessIndicatorFailureCycleCounter/12 (Dem_ProcessIndicatorFailureCycleCounter) @06d94540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_IndicatorLink/109 (read)Dem_FailureCycleCounterInfo/113 (read)Dem_EventDesc/114 (read)Dem_IndicatorDesc/110 (read)Dem_IndicatorDesc/110 (read)Dem_NvData/112 (read)Dem_NvData/112 (read)Dem_FailureCycleCounterInfo/113 (read)Dem_NvData/112 (read)Dem_NvData/112 (read)Dem_NvData/112 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_CheckForEventWIRUpdate/11 (679839637 (estimated locally),3.25 per call) 
  Calls: Dem_PermanentMemoryAddEntry/61 (34841273 (estimated locally),0.03 per call) Dem_GetVisibleObdDTC/18 (172140679 (estimated locally),0.16 per call) Dem_ProcessIndicatorOnCriteria/111 (73890617 (estimated locally),0.07 per call) 
Dem_CheckForEventWIRUpdate/11 (Dem_CheckForEventWIRUpdate) @06d942a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventDesc/114 (read)Dem_IndicatorLink/109 (read)
  Referring: 
  Availability: available
  Function flags: count:209269312 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_ProcessIndicatorFailureCycleCounter/12 (679839637 (estimated locally),3.25 per call) 
Dem_InitializationState/10 (Dem_InitializationState) @06cea9d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_NvMWriteCopyEventStatusBlock/71 (read)Dem_NvMReadCopyPermanentMemory/76 (read)Dem_NvMReadCopyEventStatusBlock/70 (read)Dem_NvMEventStatusBlockCallback/72 (read)Dem_StoreImmediatelyNext/92 (read)
  Availability: available
  Varpool flags: initialized
Dem_EvMemEntryExists/9 (Dem_EvMemEntryExists) @06cea990
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_SearchForEntry/48 (read)Dem_SetEvEntryExists/49 (write)Dem_SetEvEntryExists.part.0/169 (read)Dem_SetEvEntryExists.part.0/169 (write)Dem_SetEvEntryExists/49 (read)Dem_InitEvEntryExists/50 (write)
  Availability: available
  Varpool flags:
Dem_OBDDTCSuppression/8 (Dem_OBDDTCSuppression) @06cea900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_GetVisibleObdDTC/18 (read)Dem_InternalSetDTCSuppression/79 (addr)
  Availability: available
  Varpool flags:
Dem_UDSDTCSuppression/7 (Dem_UDSDTCSuppression) @06cea870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_GetVisibleUdsDTC/15 (read)Dem_InternalSetDTCSuppression/79 (addr)
  Availability: available
  Varpool flags:
Dem_EventMemoryPermanentUpdated/6 (Dem_EventMemoryPermanentUpdated) @06cea7e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_PermanentMemoryRemoveEntry/62 (write)Dem_PermanentMemoryAddEntry/61 (write)Dem_NvMWriteCopyPermanentMemory/77 (write)Dem_PermanentMemoryNotifyClear/60 (write)Dem_NvMWriteFinishedPermanentMemory/75 (write)Dem_PermanentMemoryAddEntry/61 (write)Dem_PermanentMemoryStatusUpdate/63 (write)
  Availability: available
  Varpool flags:
Dem_EventMemoryPermanentNonVolatileStored/5 (Dem_EventMemoryPermanentNonVolatileStored) @06cea798
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_PermanentMemoryRemoveEntry/62 (write)Dem_NvMWriteFinishedPermanentMemory/75 (write)Dem_NvMWriteCopyPermanentMemory/77 (write)Dem_NvMWriteFinishedPermanentMemory/75 (read)Dem_PermanentMemoryStatusUpdate/63 (write)
  Availability: available
  Varpool flags:
Dem_OpCycleState/4 (Dem_OpCycleState) @06cea750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_UpdateFailureCounterFirstFail/100 (read)Dem_CheckProcessingConditions/57 (read)
  Availability: available
  Varpool flags:
Dem_DebounceCounterStatus/3 (Dem_DebounceCounterStatus) @06cea708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_GetFDCCounterBased/99 (read)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (read)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (write)Dem_DebounceEventCounterBased/98 (write)Dem_ResetDebounceCounterBased/95 (write)
  Availability: available
  Varpool flags:
Dem_EntryOBDFF/2 (Dem_EntryOBDFF) @06cea6c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_StoreImmediately/93 (read)Dem_StoreImmediately/93 (addr)
  Availability: available
  Varpool flags:
Dem_EventMemoryPermanent/1 (Dem_EventMemoryPermanent) @06cea678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_NvMReadCopyPermanentMemory/76 (write)Dem_PermanentMemoryAddEntry/61 (write)Dem_PermanentMemoryRemoveEntry/62 (write)Dem_PermanentMemoryAddEntry/61 (write)Dem_PermanentMemoryAddEntry/61 (read)Dem_PermanentMemoryRemoveEntry/62 (read)Dem_NvMWriteCopyPermanentMemory/77 (read)Dem_PermanentMemoryNotifyClear/60 (read)Dem_PermanentMemoryNotifyClear/60 (write)Dem_PermanentMemoryStatusUpdate/63 (read)Dem_PermanentMemoryStatusUpdate/63 (write)
  Availability: available
  Varpool flags:
Dem_DebounceFctPtrTable/0 (Dem_DebounceFctPtrTable) @06cea630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_ResetDebounceMonitor/97 (addr)Dem_ResetDebounceCounterBased/95 (addr)Dem_FreezeDebounceCounterBased/96 (addr)Dem_DebounceEventCounterBased/98 (addr)Dem_GetFDCCounterBased/99 (addr)
  Referring: Dem_DebounceEvent/64 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Dem_GetVisibleUdsDTC (Dem_GetVisibleUdsDTC, funcdef_no=4, decl_uid=6792, cgraph_uid=5, symbol_order=15)

Modification phase of node Dem_GetVisibleUdsDTC/15
Dem_GetVisibleUdsDTC (Dem_EventIdType EventId)
{
  uint32 DTC;
  uint32 DTC;
  short unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  int _11;
  short unsigned int _12;
  long unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EventId_9(D) >> 3;
  _2 = (unsigned int) _1;
  _3 = Dem_UDSDTCSuppression[_2];
  _12 = EventId_9(D) & 7;
  _4 = (unsigned int) _12;
  _5 = 1 << _4;
  _6 = (unsigned char) _5;
  _7 = _3 & _6;
  if (_7 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_9(D)
  # DEBUG INLINE_ENTRY Dem_InternalGetUdsDTC
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = (int) EventId_9(D);
  _13 = Dem_EventDesc[_11].EvConf1;
  DTC_14 = _13 & 16777215;
  # DEBUG DTC => DTC_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG DTC => NULL
  # DEBUG DTC => DTC_14

  <bb 4> [local count: 1073741824]:
  # DTC_8 = PHI <0(2), DTC_14(3)>
  # DEBUG DTC => DTC_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTC_8;

}



;; Function Dem_GetVisibleObdDTC (Dem_GetVisibleObdDTC, funcdef_no=7, decl_uid=6799, cgraph_uid=8, symbol_order=18)

Modification phase of node Dem_GetVisibleObdDTC/18
Dem_GetVisibleObdDTC (Dem_EventIdType EventId)
{
  uint32 DTC;
  uint32 DTC;
  short unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  int _11;
  short unsigned int _12;
  short unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EventId_9(D) >> 3;
  _2 = (unsigned int) _1;
  _3 = Dem_OBDDTCSuppression[_2];
  _12 = EventId_9(D) & 7;
  _4 = (unsigned int) _12;
  _5 = 1 << _4;
  _6 = (unsigned char) _5;
  _7 = _3 & _6;
  if (_7 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_9(D)
  # DEBUG INLINE_ENTRY Dem_InternalGetObdDTC
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = (int) EventId_9(D);
  _13 = Dem_OBDConfig[_11].Dem_ObdDTC;
  _14 = (long unsigned int) _13;
  DTC_15 = _14 << 8;
  # DEBUG DTC => DTC_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG DTC => NULL
  # DEBUG DTC => DTC_15

  <bb 4> [local count: 1073741824]:
  # DTC_8 = PHI <0(2), DTC_15(3)>
  # DEBUG DTC => DTC_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTC_8;

}



;; Function Dem_ResetDebounceCounterBased (Dem_ResetDebounceCounterBased, funcdef_no=84, decl_uid=6957, cgraph_uid=85, symbol_order=95)

Modification phase of node Dem_ResetDebounceCounterBased/95
Dem_ResetDebounceCounterBased (Dem_EventIdType EventId)
{
  const Dem_EventIdType Result;
  int _1;
  int _4;
  long unsigned int _6;
  long unsigned int _7;
  short unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_3(D)
  # DEBUG INLINE_ENTRY Dem_GbiDebounceStatusIdx
  # DEBUG BEGIN_STMT
  _4 = (int) EventId_3(D);
  _6 = Dem_EventDesc[_4].EvConf3;
  _7 = _6 >> 5;
  _8 = (short unsigned int) _7;
  Result_9 = _8 & 7;
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG DebounceStatusIdx => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) Result_9;
  Dem_DebounceCounterStatus[_1] = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ResetDebounceMonitor (Dem_ResetDebounceMonitor, funcdef_no=86, decl_uid=6955, cgraph_uid=87, symbol_order=97)

Modification phase of node Dem_ResetDebounceMonitor/97
Dem_ResetDebounceMonitor (Dem_EventIdType EventId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_GetFDCCounterBased (Dem_GetFDCCounterBased, funcdef_no=88, decl_uid=6965, cgraph_uid=89, symbol_order=99)

Modification phase of node Dem_GetFDCCounterBased/99
Dem_GetFDCCounterBased (Dem_EventIdType EventId, sint8 * FDC)
{
  const Dem_EventIdType Result;
  const Dem_DebounceCounterClassIdxType Result;
  sint16 IFdc;
  int _1;
  long int _2;
  long int _3;
  short int _4;
  long int _5;
  long int _6;
  signed char _7;
  long int _8;
  long int _9;
  short int _10;
  long int _11;
  long int _12;
  signed char _13;
  unsigned char _17;
  int _18;
  int _24;
  long unsigned int _25;
  long unsigned int _26;
  short unsigned int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_16(D)
  # DEBUG INLINE_ENTRY Dem_GbiDebounceStatusIdx
  # DEBUG BEGIN_STMT
  _24 = (int) EventId_16(D);
  _25 = Dem_EventDesc[_24].EvConf3;
  _26 = _25 >> 5;
  _27 = (short unsigned int) _26;
  Result_28 = _27 & 7;
  # DEBUG Result => Result_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG DebounceStatusIdx => Result_28
  # DEBUG BEGIN_STMT
  # DEBUG Index => Result_28
  # DEBUG INLINE_ENTRY Dem_GbiDebounceCounterClassIdx
  # DEBUG BEGIN_STMT
  _18 = (int) Result_28;
  _17 = Dem_DebounceCounterClassIdx[_18];
  Result_23 = _17 & 127;
  # DEBUG Result => Result_23
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Index => NULL
  # DEBUG Result => NULL
  # DEBUG DebounceClassIdx => Result_23
  # DEBUG BEGIN_STMT
  _1 = (int) Result_23;
  # DEBUG D#1 => &Dem_DebounceCounterClass[_1]
  # DEBUG DebounceCfg => D#1
  # DEBUG BEGIN_STMT
  # DEBUG IFdc => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  IFdc_19 = Dem_DebounceCounterStatus[_18];
  # DEBUG IFdc => IFdc_19
  # DEBUG BEGIN_STMT
  if (IFdc_19 < 0)
    goto <bb 3>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 3> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  _2 = (long int) IFdc_19;
  _3 = _2 * -128;
  _4 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CounterPassedThreshold;
  _5 = (long int) _4;
  _6 = _3 / _5;
  _7 = (signed char) _6;
  *FDC_20(D) = _7;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 633507677]:
  # DEBUG BEGIN_STMT
  _8 = (long int) IFdc_19;
  _9 = _8 * 127;
  _10 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CounterFailedThreshold;
  _11 = (long int) _10;
  _12 = _9 / _11;
  _13 = (signed char) _12;
  *FDC_20(D) = _13;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 5> [local count: 1073741824]:
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DebounceEventCounterBased (Dem_DebounceEventCounterBased, funcdef_no=87, decl_uid=6962, cgraph_uid=88, symbol_order=98)

Modification phase of node Dem_DebounceEventCounterBased/98
Dem_DebounceEventCounterBased (Dem_EventIdType EventId, Dem_EventStatusType * EventStatus)
{
  const Dem_EventIdType Result;
  const Dem_DebounceCounterClassIdxType Result;
  int _1;
  unsigned char _2;
  unsigned char _3;
  short int _4;
  short int _5;
  short int _6;
  int _7;
  short int _8;
  int _9;
  short unsigned int _10;
  short int _11;
  int _12;
  int _13;
  unsigned short _14;
  unsigned short _15;
  short int _16;
  unsigned char _17;
  short int _18;
  short int _19;
  short int _20;
  int _21;
  short int _22;
  int _23;
  short unsigned int _24;
  short int _25;
  int _26;
  int _27;
  unsigned short _28;
  unsigned short _29;
  short int _30;
  short int _31;
  short int _32;
  unsigned char _38;
  int _39;
  int _54;
  long unsigned int _55;
  long unsigned int _56;
  short unsigned int _57;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_37(D)
  # DEBUG INLINE_ENTRY Dem_GbiDebounceStatusIdx
  # DEBUG BEGIN_STMT
  _54 = (int) EventId_37(D);
  _55 = Dem_EventDesc[_54].EvConf3;
  _56 = _55 >> 5;
  _57 = (short unsigned int) _56;
  Result_58 = _57 & 7;
  # DEBUG Result => Result_58
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG DebounceStatusIdx => Result_58
  # DEBUG BEGIN_STMT
  # DEBUG Index => Result_58
  # DEBUG INLINE_ENTRY Dem_GbiDebounceCounterClassIdx
  # DEBUG BEGIN_STMT
  _39 = (int) Result_58;
  _38 = Dem_DebounceCounterClassIdx[_39];
  Result_53 = _38 & 127;
  # DEBUG Result => Result_53
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Index => NULL
  # DEBUG Result => NULL
  # DEBUG DebounceClassIdx => Result_53
  # DEBUG BEGIN_STMT
  _1 = (int) Result_53;
  # DEBUG D#2 => &Dem_DebounceCounterClass[_1]
  # DEBUG DebounceCfg => D#2
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => &Dem_DebounceCounterStatus[_39]
  # DEBUG DebounceCounter => D#3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = *EventStatus_41(D);
  switch (_2) <default: <L17> [25.00%], case 0: <L16> [25.00%], case 2: <L0> [25.00%], case 3: <L8> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].JumpDown;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 134217728]:
  _4 = MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39];
  _5 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].JumpDownValue;
  if (_4 > _5)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 67108864]:
  # DEBUG BEGIN_STMT
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _5;

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _6 = MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39];
  _7 = (int) _6;
  _8 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CounterPassedThreshold;
  _9 = (int) _8;
  _10 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CountDecStepSize;
  _11 = (short int) _10;
  _12 = (int) _11;
  _13 = _9 + _12;
  if (_7 > _13)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  _14 = (unsigned short) _6;
  _15 = _14 - _10;
  _16 = (short int) _15;
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _16;
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _8;
  # DEBUG BEGIN_STMT
  *EventStatus_41(D) = 0;
  goto <bb 17>; [100.00%]

  <bb 9> [local count: 268435456]:
<L8>:
  # DEBUG BEGIN_STMT
  _17 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].JumpUp;
  if (_17 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 134217728]:
  _18 = MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39];
  _19 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].JumpUpValue;
  if (_18 < _19)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 67108864]:
  # DEBUG BEGIN_STMT
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _19;

  <bb 12> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _20 = MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39];
  _21 = (int) _20;
  _22 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CounterFailedThreshold;
  _23 = (int) _22;
  _24 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CountIncStepSize;
  _25 = (short int) _24;
  _26 = (int) _25;
  _27 = _23 - _26;
  if (_21 < _27)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  _28 = (unsigned short) _20;
  _29 = _24 + _28;
  _30 = (short int) _29;
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _30;
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _22;
  # DEBUG BEGIN_STMT
  *EventStatus_41(D) = 1;
  goto <bb 17>; [100.00%]

  <bb 15> [local count: 268435456]:
<L16>:
  # DEBUG BEGIN_STMT
  _31 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CounterPassedThreshold;
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _31;
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 268435456]:
<L17>:
  # DEBUG BEGIN_STMT
  _32 = MEM[(const struct Dem_DebounceCounterClassType *)&Dem_DebounceCounterClass][_1].CounterFailedThreshold;
  MEM[(Dem_DebounceCounterStatusType *)&Dem_DebounceCounterStatus][_39] = _32;
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_FreezeDebounceCounterBased (Dem_FreezeDebounceCounterBased, funcdef_no=106, decl_uid=6959, cgraph_uid=86, symbol_order=96)

Modification phase of node Dem_FreezeDebounceCounterBased/96
Dem_FreezeDebounceCounterBased (Dem_EventIdType EventId)
{
  <bb 2> [local count: 1073741824]:
  Dem_ResetDebounceMonitor (EventId_1(D)); [tail call]
  return;

}



;; Function Dem_InternalGetUdsDTC (Dem_InternalGetUdsDTC, funcdef_no=102, decl_uid=6972, cgraph_uid=92, symbol_order=102)

Modification phase of node Dem_InternalGetUdsDTC/102
Dem_InternalGetUdsDTC (Dem_EventIdType EventId)
{
  uint32 retval.138;

  <bb 2> [local count: 1073741824]:
  retval.138_2 = Dem_GbiUdsDTC (EventId_1(D)); [tail call]
  return retval.138_2;

}



;; Function Dem_InternalGetObdDTC (Dem_InternalGetObdDTC, funcdef_no=104, decl_uid=6974, cgraph_uid=93, symbol_order=103)

Modification phase of node Dem_InternalGetObdDTC/103
Dem_InternalGetObdDTC (Dem_EventIdType EventId)
{
  uint32 retval.139;

  <bb 2> [local count: 1073741824]:
  retval.139_2 = Dem_GetObdDTC (EventId_1(D)); [tail call]
  return retval.139_2;

}



;; Function Dem_GbiUdsDTC (Dem_GbiUdsDTC, funcdef_no=2, decl_uid=6788, cgraph_uid=3, symbol_order=13)

Modification phase of node Dem_GbiUdsDTC/13
Dem_GbiUdsDTC (Dem_EventIdType EventId)
{
  const uint32 DTC;
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_3(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  DTC_5 = _2 & 16777215;
  # DEBUG DTC => DTC_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTC_5;

}



;; Function Dem_GetUdsDTC (Dem_GetUdsDTC, funcdef_no=100, decl_uid=6790, cgraph_uid=4, symbol_order=14)

Modification phase of node Dem_GetUdsDTC/14
Dem_GetUdsDTC (Dem_EventIdType EventId)
{
  uint32 retval.137;

  <bb 2> [local count: 1073741824]:
  retval.137_2 = Dem_GbiUdsDTC (EventId_1(D)); [tail call]
  return retval.137_2;

}



;; Function Dem_GetVisibleCmbDTC (Dem_GetVisibleCmbDTC, funcdef_no=5, decl_uid=6795, cgraph_uid=6, symbol_order=16)

Modification phase of node Dem_GetVisibleCmbDTC/16
Dem_GetVisibleCmbDTC (Dem_DTCFormatType DTCFormat, Dem_EventIdType EventId)
{
  uint32 (*Dem_GetDTCFctPtrType) (Dem_EventIdType) Dem_GetVisibleDTCFctPtr;
  uint32 DTC;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DTC => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DTCFormat_2(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG Dem_GetVisibleDTCFctPtr => Dem_GetVisibleUdsDTC

  <bb 4> [local count: 1073741824]:
  # Dem_GetVisibleDTCFctPtr_1 = PHI <Dem_GetVisibleObdDTC(2), Dem_GetVisibleUdsDTC(3)>
  # DEBUG Dem_GetVisibleDTCFctPtr => Dem_GetVisibleDTCFctPtr_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DTC_6 = Dem_GetVisibleDTCFctPtr_1 (EventId_4(D));
  # DEBUG DTC => DTC_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTC_6;

}



;; Function Dem_GetObdDTC (Dem_GetObdDTC, funcdef_no=6, decl_uid=6797, cgraph_uid=7, symbol_order=17)

Modification phase of node Dem_GetObdDTC/17
Dem_GetObdDTC (Dem_EventIdType EventId)
{
  uint32 DTC;
  int _3;
  short unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_2(D)
  # DEBUG INLINE_ENTRY Dem_InternalGetObdDTC
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (int) EventId_2(D);
  _4 = Dem_OBDConfig[_3].Dem_ObdDTC;
  _5 = (long unsigned int) _4;
  DTC_6 = _5 << 8;
  # DEBUG DTC => DTC_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG DTC => NULL
  # DEBUG DTC => DTC_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTC_6;

}



;; Function Dem_GbiDTCKind (Dem_GbiDTCKind, funcdef_no=8, decl_uid=6801, cgraph_uid=9, symbol_order=19)

Modification phase of node Dem_GbiDTCKind/19
Dem_GbiDTCKind (Dem_EventIdType EventId)
{
  Dem_DTCKindType DTCKind;
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DTCKind => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_4(D);
  _2 = Dem_OBDConfig[_1].Dem_ObdDTC;
  if (_2 != 0)
    goto <bb 3>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 3> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  # DEBUG DTCKind => 2

  <bb 4> [local count: 1073741824]:
  # DTCKind_3 = PHI <1(2), 2(3)>
  # DEBUG DTCKind => DTCKind_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTCKind_3;

}



;; Function Dem_GetVisibleDTC (Dem_GetVisibleDTC, funcdef_no=9, decl_uid=6804, cgraph_uid=10, symbol_order=20)

Modification phase of node Dem_GetVisibleDTC/20
Dem_GetVisibleDTC (Dem_DTCFormatType DTCFormat, Dem_EventIdType EventId)
{
  uint32 DTC;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DTC => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DTCFormat_2(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  DTC_6 = Dem_GetVisibleObdDTC (EventId_4(D));
  # DEBUG DTC => DTC_6
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  DTC_5 = Dem_GetVisibleUdsDTC (EventId_4(D));
  # DEBUG DTC => DTC_5

  <bb 5> [local count: 1073741824]:
  # DTC_1 = PHI <DTC_6(3), DTC_5(4)>
  # DEBUG DTC => DTC_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DTC_1;

}



;; Function Dem_GbiDTCOrigin (Dem_GbiDTCOrigin, funcdef_no=10, decl_uid=6806, cgraph_uid=11, symbol_order=21)

Modification phase of node Dem_GbiDTCOrigin/21
Dem_GbiDTCOrigin (Dem_EventIdType EventId)
{
  const Dem_DTCOriginType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_6(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  _3 = _2 >> 24;
  _4 = (short unsigned int) _3;
  _5 = _4 & 3;
  Result_8 = _5 + 1;
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_GbiDTCOriginIdx (Dem_GbiDTCOriginIdx, funcdef_no=11, decl_uid=6808, cgraph_uid=12, symbol_order=22)

Modification phase of node Dem_GbiDTCOriginIdx/22
Dem_GbiDTCOriginIdx (Dem_EventIdType EventId)
{
  const uint8 Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  _3 = _2 >> 24;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 3;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiDTCGroupIdx (Dem_GbiDTCGroupIdx, funcdef_no=12, decl_uid=6810, cgraph_uid=13, symbol_order=23)

Modification phase of node Dem_GbiDTCGroupIdx/23
Dem_GbiDTCGroupIdx (Dem_EventIdType EventId)
{
  const uint8 Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = _2 >> 13;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 31;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiImmediateStorage (Dem_GbiImmediateStorage, funcdef_no=13, decl_uid=6812, cgraph_uid=14, symbol_order=24)

Modification phase of node Dem_GbiImmediateStorage/24
Dem_GbiImmediateStorage (Dem_EventIdType EventId)
{
  const boolean Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  _3 = _2 >> 30;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiDTCSeverity (Dem_GbiDTCSeverity, funcdef_no=14, decl_uid=6814, cgraph_uid=15, symbol_order=25)

Modification phase of node Dem_GbiDTCSeverity/25
Dem_GbiDTCSeverity (Dem_EventIdType EventId)
{
  const uint8 sevNo;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;
  unsigned char iftmp.2_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_6(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  _3 = _2 >> 26;
  _4 = (unsigned char) _3;
  sevNo_8 = _4 & 3;
  # DEBUG sevNo => sevNo_8
  # DEBUG BEGIN_STMT
  if (sevNo_8 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (sevNo_8 != 1)
    goto <bb 4>; [78.28%]
  else
    goto <bb 8>; [21.72%]

  <bb 4> [local count: 420262550]:
  if (sevNo_8 == 2)
    goto <bb 8>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 277373283]:

  <bb 8> [local count: 1073741824]:
  # iftmp.2_5 = PHI <32(3), 0(2), 128(5), 64(4)>
  # DEBUG Result => iftmp.2_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return iftmp.2_5;

}



;; Function Dem_GbiDTCFunctionalUnit (Dem_GbiDTCFunctionalUnit, funcdef_no=15, decl_uid=6816, cgraph_uid=16, symbol_order=26)

Modification phase of node Dem_GbiDTCFunctionalUnit/26
Dem_GbiDTCFunctionalUnit (Dem_EventIdType EventId)
{
  const uint8 Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf3;
  _3 = _2 >> 8;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiEnablePrestorage (Dem_GbiEnablePrestorage, funcdef_no=16, decl_uid=6849, cgraph_uid=17, symbol_order=27)

Modification phase of node Dem_GbiEnablePrestorage/27
Dem_GbiEnablePrestorage (Dem_EventIdType EventId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_GbiFFClassIdx (Dem_GbiFFClassIdx, funcdef_no=17, decl_uid=6818, cgraph_uid=18, symbol_order=28)

Modification phase of node Dem_GbiFFClassIdx/28
Dem_GbiFFClassIdx (Dem_EventIdType EventId)
{
  const Dem_FFClassIdxType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = _2 >> 1;
  _4 = (short unsigned int) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiEvSignificance (Dem_GbiEvSignificance, funcdef_no=18, decl_uid=6820, cgraph_uid=19, symbol_order=29)

Modification phase of node Dem_GbiEvSignificance/29
Dem_GbiEvSignificance (Dem_EventIdType EventId)
{
  const Dem_EvSignificanceType Result;
  int _1;
  long unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_4(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = (unsigned char) _2;
  Result_6 = _3 & 1;
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_GbiMaxNumFFRecs (Dem_GbiMaxNumFFRecs, funcdef_no=19, decl_uid=6822, cgraph_uid=20, symbol_order=30)

Modification phase of node Dem_GbiMaxNumFFRecs/30
Dem_GbiMaxNumFFRecs (Dem_EventIdType EventId)
{
  const Dem_FFRecNumClassIdxType Result;
  Dem_FFIdxType Result;
  int _1;
  int _4;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_3(D)
  # DEBUG INLINE_ENTRY Dem_GbiFFRecNumClassIdx
  # DEBUG BEGIN_STMT
  _4 = (int) EventId_3(D);
  _6 = Dem_EventDesc[_4].EvConf2;
  _7 = _6 >> 2;
  _8 = (unsigned char) _7;
  Result_9 = _8 & 1;
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  _1 = (int) Result_9;
  Result_5 = Dem_FFRecNumerationClass[_1].NumFFRecs;
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_5;

}



;; Function Dem_GbiFFRecNumClassIdx (Dem_GbiFFRecNumClassIdx, funcdef_no=20, decl_uid=6824, cgraph_uid=21, symbol_order=31)

Modification phase of node Dem_GbiFFRecNumClassIdx/31
Dem_GbiFFRecNumClassIdx (Dem_EventIdType EventId)
{
  const Dem_FFRecNumClassIdxType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = _2 >> 2;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiEDClassIdx (Dem_GbiEDClassIdx, funcdef_no=21, decl_uid=6826, cgraph_uid=22, symbol_order=32)

Modification phase of node Dem_GbiEDClassIdx/32
Dem_GbiEDClassIdx (Dem_EventIdType EventId)
{
  const Dem_EDClassIdxType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = _2 >> 3;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiOpCycleIdx (Dem_GbiOpCycleIdx, funcdef_no=22, decl_uid=6828, cgraph_uid=23, symbol_order=33)

Modification phase of node Dem_GbiOpCycleIdx/33
Dem_GbiOpCycleIdx (Dem_EventIdType EventId)
{
  const Dem_OperationCycleIdType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = _2 >> 4;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 3;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiIndicatorHealingCycleIdx (Dem_GbiIndicatorHealingCycleIdx, funcdef_no=23, decl_uid=6831, cgraph_uid=24, symbol_order=34)

Modification phase of node Dem_GbiIndicatorHealingCycleIdx/34
Dem_GbiIndicatorHealingCycleIdx (Dem_EventIdType EventId, Dem_IndicatorIdxType IndicatorIdx)
{
  const Dem_OperationCycleIdType Result;
  const Dem_HealingCycleCounterInfoIdxType HealingCycleCounterInfoIdx;
  int _1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) IndicatorIdx_3(D);
  HealingCycleCounterInfoIdx_5 = Dem_IndicatorLink[_1].HealingCycleCounterInfoIdx;
  # DEBUG HealingCycleCounterInfoIdx => HealingCycleCounterInfoIdx_5
  # DEBUG BEGIN_STMT
  _2 = (int) HealingCycleCounterInfoIdx_5;
  Result_6 = Dem_HealingCycleCounterInfo[_2].OperationCycleRef;
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_GbiIndicatorFailureCycleIdx (Dem_GbiIndicatorFailureCycleIdx, funcdef_no=24, decl_uid=6834, cgraph_uid=25, symbol_order=35)

Modification phase of node Dem_GbiIndicatorFailureCycleIdx/35
Dem_GbiIndicatorFailureCycleIdx (Dem_EventIdType EventId, Dem_IndicatorIdxType IndicatorIdx)
{
  const Dem_OperationCycleIdType Result;
  const Dem_FailureCycleCounterInfoIdxType FailureCycleCounterInfoIdx;
  int _1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) IndicatorIdx_3(D);
  FailureCycleCounterInfoIdx_5 = Dem_IndicatorLink[_1].FailureCycleCounterInfoIdx;
  # DEBUG FailureCycleCounterInfoIdx => FailureCycleCounterInfoIdx_5
  # DEBUG BEGIN_STMT
  _2 = (int) FailureCycleCounterInfoIdx_5;
  Result_6 = Dem_FailureCycleCounterInfo[_2].OperationCycleRef;
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_GbiNumAgingCycles (Dem_GbiNumAgingCycles, funcdef_no=25, decl_uid=6836, cgraph_uid=26, symbol_order=36)

Modification phase of node Dem_GbiNumAgingCycles/36
Dem_GbiNumAgingCycles (Dem_EventIdType EventId)
{
  const Dem_AgingCyclesType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf2;
  _3 = _2 >> 6;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 127;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiEventFailureClassIdx (Dem_GbiEventFailureClassIdx, funcdef_no=26, decl_uid=6838, cgraph_uid=27, symbol_order=37)

Modification phase of node Dem_GbiEventFailureClassIdx/37
Dem_GbiEventFailureClassIdx (Dem_EventIdType EventId)
{
  const uint16 Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf3;
  _3 = _2 >> 1;
  _4 = (short unsigned int) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiEventFailureCycleIdx (Dem_GbiEventFailureCycleIdx, funcdef_no=27, decl_uid=6841, cgraph_uid=28, symbol_order=38)

Modification phase of node Dem_GbiEventFailureCycleIdx/38
Dem_GbiEventFailureCycleIdx (Dem_EventIdType EventId, uint16 EventFailureClassIdx)
{
  const Dem_OperationCycleIdType Result;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventFailureClassIdx_2(D);
  Result_4 = Dem_EventFailureCycleCfg[_1].EventFailureCycleIdx;
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_GbiEnCondGrpIdx (Dem_GbiEnCondGrpIdx, funcdef_no=28, decl_uid=6843, cgraph_uid=29, symbol_order=39)

Modification phase of node Dem_GbiEnCondGrpIdx/39
Dem_GbiEnCondGrpIdx (Dem_EventIdType EventId)
{
  const Dem_EnCondGrpIdxType Result;
  int _1;
  long unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_4(D);
  _2 = Dem_EventDesc[_1].EvConf3;
  _3 = (unsigned char) _2;
  Result_6 = _3 & 1;
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_GbiIndicatorUsed (Dem_GbiIndicatorUsed, funcdef_no=29, decl_uid=6845, cgraph_uid=30, symbol_order=40)

Modification phase of node Dem_GbiIndicatorUsed/40
Dem_GbiIndicatorUsed (Dem_EventIdType EventId)
{
  const boolean Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  _3 = _2 >> 29;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiPriority (Dem_GbiPriority, funcdef_no=30, decl_uid=6847, cgraph_uid=31, symbol_order=41)

Modification phase of node Dem_GbiPriority/41
Dem_GbiPriority (Dem_EventIdType EventId)
{
  const Dem_PriorityType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf3;
  _3 = _2 >> 2;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiDebounceAlgo (Dem_GbiDebounceAlgo, funcdef_no=31, decl_uid=6851, cgraph_uid=32, symbol_order=42)

Modification phase of node Dem_GbiDebounceAlgo/42
Dem_GbiDebounceAlgo (Dem_EventIdType EventId)
{
  const Dem_DebounceType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_4(D);
  _2 = Dem_EventDesc[_1].EvConf3;
  _3 = _2 >> 3;
  Result_6 = _3 & 3;
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_GbiDebounceCounterClassIdx (Dem_GbiDebounceCounterClassIdx, funcdef_no=32, decl_uid=6853, cgraph_uid=33, symbol_order=43)

Modification phase of node Dem_GbiDebounceCounterClassIdx/43
Dem_GbiDebounceCounterClassIdx (Dem_EventIdType Index)
{
  const Dem_DebounceCounterClassIdxType Result;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) Index_3(D);
  _2 = Dem_DebounceCounterClassIdx[_1];
  Result_5 = _2 & 127;
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_5;

}



;; Function Dem_GbiDebounceStatusIdx (Dem_GbiDebounceStatusIdx, funcdef_no=33, decl_uid=6855, cgraph_uid=34, symbol_order=44)

Modification phase of node Dem_GbiDebounceStatusIdx/44
Dem_GbiDebounceStatusIdx (Dem_EventIdType EventId)
{
  const Dem_EventIdType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf3;
  _3 = _2 >> 5;
  _4 = (short unsigned int) _3;
  Result_7 = _4 & 7;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiEventKind (Dem_GbiEventKind, funcdef_no=34, decl_uid=6857, cgraph_uid=35, symbol_order=45)

Modification phase of node Dem_GbiEventKind/45
Dem_GbiEventKind (Dem_EventIdType EventId)
{
  const Dem_EventKindType Result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_EventDesc[_1].EvConf1;
  _3 = _2 >> 28;
  _4 = (unsigned char) _3;
  Result_7 = _4 & 1;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_GbiMinRatioEvent (Dem_GbiMinRatioEvent, funcdef_no=35, decl_uid=6859, cgraph_uid=36, symbol_order=46)

Modification phase of node Dem_GbiMinRatioEvent/46
Dem_GbiMinRatioEvent (Dem_EventIdType EventId)
{
  const boolean Result;
  int _1;
  short unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_4(D);
  _2 = Dem_OBDConfig[_1].Dem_OBDEvConf1;
  _3 = (unsigned char) _2;
  Result_6 = _3 & 1;
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_GbiOBDReadinessGroup (Dem_GbiOBDReadinessGroup, funcdef_no=36, decl_uid=6861, cgraph_uid=37, symbol_order=47)

Modification phase of node Dem_GbiOBDReadinessGroup/47
Dem_GbiOBDReadinessGroup (Dem_EventIdType EventId)
{
  const Dem_EventOBDReadinessGroupType ReadinessGroup;
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5(D);
  _2 = Dem_OBDConfig[_1].Dem_OBDEvConf1;
  _3 = _2 >> 1;
  _4 = (unsigned char) _3;
  ReadinessGroup_7 = _4 & 15;
  # DEBUG ReadinessGroup => ReadinessGroup_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ReadinessGroup_7;

}



;; Function Dem_SearchForEntry (Dem_SearchForEntry, funcdef_no=37, decl_uid=6657, cgraph_uid=38, symbol_order=48)

Modification phase of node Dem_SearchForEntry/48
Dem_SearchForEntry (Dem_EventIdType EventId, struct Dem_EventMemoryEntryType * * FoundEntry, Dem_SizeEvMemEntryType * FoundEntryIdx)
{
  boolean Result;
  short unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  unsigned char _8;
  short unsigned int _12;

  <bb 2> [local count: 173919332]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EventId_13(D) >> 3;
  _2 = (unsigned int) _1;
  _3 = Dem_EvMemEntryExists[_2];
  _12 = EventId_13(D) & 7;
  _5 = (unsigned int) _12;
  _6 = 1 << _5;
  _7 = (unsigned char) _6;
  _8 = _3 & _7;
  if (_8 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 86959666]:
  Result_4 = Dem_SearchForEntry.part.0 (EventId_13(D), FoundEntry_15(D), FoundEntryIdx_16(D));

  <bb 4> [local count: 173919332]:
  # Result_10 = PHI <0(2), Result_4(3)>
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_10;

}



;; Function Dem_InternalCheckAndSetDTCSuppression (Dem_InternalCheckAndSetDTCSuppression, funcdef_no=93, decl_uid=6979, cgraph_uid=94, symbol_order=104)

Modification phase of node Dem_InternalCheckAndSetDTCSuppression/104
Setting nonnull for 1
Setting nonnull for 2
Dem_InternalCheckAndSetDTCSuppression (uint32 DTC, uint32 (*Dem_GetDTCFctPtrType) (Dem_EventIdType) GetDTCFct, uint8 * DtcSuppressionArray, boolean SuppressionStatus)
{
  Dem_EventIdType EventId;
  Std_ReturnType Result;
  long unsigned int _1;
  short unsigned int _2;
  sizetype _3;
  uint8 * _4;
  unsigned char _5;
  unsigned int _6;
  unsigned int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  boolean iftmp.31_19;
  short unsigned int _25;

  <bb 2> [local count: 126735358]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => 1
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1002123246]:
  # DEBUG BEGIN_STMT
  _1 = GetDTCFct_27(D) (EventId_18);
  if (_1 == DTC_29(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 947006467]:
  # DEBUG BEGIN_STMT
  EventId_30 = EventId_18 + 1;
  # DEBUG EventId => EventId_30

  <bb 5> [local count: 1073741824]:
  # EventId_18 = PHI <1(2), EventId_30(4)>
  # DEBUG EventId => EventId_18
  # DEBUG BEGIN_STMT
  if (EventId_18 != 15)
    goto <bb 3>; [93.33%]
  else
    goto <bb 6>; [6.67%]

  <bb 6> [local count: 126735358]:
  # Result_16 = PHI <0(3), 1(5)>
  # EventId_33 = PHI <EventId_18(3), EventId_18(5)>
  # DEBUG Result => Result_16
  # DEBUG BEGIN_STMT
  if (Result_16 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 7> [local count: 41822668]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = EventId_33 >> 3;
  _3 = (sizetype) _2;
  _4 = DtcSuppressionArray_32(D) + _3;
  _5 = *_4;
  _25 = EventId_33 & 7;
  _6 = (unsigned int) _25;
  _7 = 1 << _6;
  _8 = (unsigned char) _7;
  _9 = _5 & _8;
  if (_9 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 20911334]:

  <bb 9> [local count: 41822668]:
  # iftmp.31_19 = PHI <1(7), 0(8)>
  # DEBUG CurrentSuppressionStatus => iftmp.31_19
  # DEBUG BEGIN_STMT
  if (iftmp.31_19 != SuppressionStatus_34(D))
    goto <bb 10>; [66.00%]
  else
    goto <bb 12>; [34.00%]

  <bb 10> [local count: 27602961]:
  # DEBUG BEGIN_STMT
  if (SuppressionStatus_34(D) == 1)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 5586839]:
  # DEBUG BEGIN_STMT
  _10 = Dem_SearchForEntry (EventId_33, 0B, 0B);
  if (_10 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 39923143]:
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SuppressionStatus_34(D) == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 13573869]:
  _11 = *_4;
  _12 = _8 | _11;
  *_4 = _12;
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 26349274]:
  _13 = *_4;
  _14 = ~_8;
  _15 = _13 & _14;
  *_4 = _15;

  <bb 15> [local count: 41822668]:
  # Result_36 = PHI <1(11), 0(13), 0(14)>
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 16> [local count: 126735358]:
  # Result_17 = PHI <Result_16(6), Result_36(15)>
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_17;

}



;; Function Dem_SetEvEntryExists (Dem_SetEvEntryExists, funcdef_no=38, decl_uid=6660, cgraph_uid=39, symbol_order=49)

Modification phase of node Dem_SetEvEntryExists/49
Dem_SetEvEntryExists (Dem_EventIdType EventId, boolean EvEntryExitsStatus)
{
  unsigned int _1;
  unsigned char _2;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  short unsigned int _11;
  short unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (EvEntryExitsStatus_9(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  # DEBUG D#4 => EvEntryExitsStatus_9(D)
  Dem_SetEvEntryExists.part.0 (EventId_10(D));
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  _11 = EventId_10(D) >> 3;
  _1 = (unsigned int) _11;
  _2 = Dem_EvMemEntryExists[_1];
  _15 = EventId_10(D) & 7;
  _4 = (unsigned int) _15;
  _5 = 1 << _4;
  _6 = (unsigned char) _5;
  _7 = ~_6;
  _8 = _2 & _7;
  Dem_EvMemEntryExists[_1] = _8;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_InitEvEntryExists (Dem_InitEvEntryExists, funcdef_no=39, decl_uid=6662, cgraph_uid=40, symbol_order=50)

Modification phase of node Dem_InitEvEntryExists/50
Dem_InitEvEntryExists ()
{
  uint8 EvEntryExitsIdx;
  int _1;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EvEntryExitsIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _1 = (int) EvEntryExitsIdx_2;
  Dem_EvMemEntryExists[_1] = 0;
  # DEBUG BEGIN_STMT
  EvEntryExitsIdx_6 = EvEntryExitsIdx_2 + 1;
  # DEBUG EvEntryExitsIdx => EvEntryExitsIdx_6

  <bb 4> [local count: 1073741824]:
  # EvEntryExitsIdx_2 = PHI <0(2), EvEntryExitsIdx_6(3)>
  # DEBUG EvEntryExitsIdx => EvEntryExitsIdx_2
  # DEBUG BEGIN_STMT
  if (EvEntryExitsIdx_2 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 5>; [33.33%]

  <bb 5> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_CheckFFRecNumValid (Dem_CheckFFRecNumValid, funcdef_no=41, decl_uid=6678, cgraph_uid=42, symbol_order=52)

Modification phase of node Dem_CheckFFRecNumValid/52
Dem_CheckFFRecNumValid (Dem_EventIdType EventId, uint8 RecordNumber)
{
  const Dem_FFRecNumClassIdxType Result;
  const Dem_FFIdxType * const FFRecNumClass;
  const Dem_FFIdxType NumFF;
  uint8 FFRecNumIdx;
  boolean Result;
  int _1;
  sizetype _2;
  const Dem_FFIdxType * _3;
  unsigned char _4;
  int _9;
  long unsigned int _14;
  long unsigned int _15;
  unsigned char _16;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_8(D)
  # DEBUG INLINE_ENTRY Dem_GbiFFRecNumClassIdx
  # DEBUG BEGIN_STMT
  _9 = (int) EventId_8(D);
  _14 = Dem_EventDesc[_9].EvConf2;
  _15 = _14 >> 2;
  _16 = (unsigned char) _15;
  Result_17 = _16 & 1;
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG FFRecNumClassIdx => Result_17
  # DEBUG BEGIN_STMT
  _1 = (int) Result_17;
  NumFF_10 = Dem_FFRecNumerationClass[_1].NumFFRecs;
  # DEBUG NumFF => NumFF_10
  # DEBUG BEGIN_STMT
  FFRecNumClass_11 = Dem_FFRecNumerationClass[_1].Dem_FFRecNumClassIdx;
  # DEBUG FFRecNumClass => FFRecNumClass_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FFRecNumIdx => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _2 = (sizetype) FFRecNumIdx_6;
  _3 = FFRecNumClass_11 + _2;
  _4 = *_3;
  if (_4 == RecordNumber_12(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  FFRecNumIdx_13 = FFRecNumIdx_6 + 1;
  # DEBUG FFRecNumIdx => FFRecNumIdx_13

  <bb 5> [local count: 1073741824]:
  # FFRecNumIdx_6 = PHI <0(2), FFRecNumIdx_13(4)>
  # DEBUG FFRecNumIdx => FFRecNumIdx_6
  # DEBUG BEGIN_STMT
  if (FFRecNumIdx_6 < NumFF_10)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # Result_5 = PHI <1(3), 0(5)>
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_5;

}



;; Function Dem_CheckFFRecNumStored (Dem_CheckFFRecNumStored, funcdef_no=42, decl_uid=6681, cgraph_uid=43, symbol_order=53)

Modification phase of node Dem_CheckFFRecNumStored/53
Dem_CheckFFRecNumStored (const struct Dem_EventMemoryEntryType * EvMemEntry, uint8 RecordNumber)
{
  const Dem_FFRecNumClassIdxType Result;
  const Dem_FFIdxType * const FFRecNumClass;
  const Dem_FFIdxType NumFF;
  uint8 FFRecNumIdx;
  short unsigned int _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  sizetype _5;
  const Dem_FFIdxType * _6;
  unsigned char _7;
  int _11;
  long unsigned int _16;
  long unsigned int _17;
  unsigned char _18;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG FFRecNumIdx => 0
  # DEBUG BEGIN_STMT
  _1 = EvMemEntry_10(D)->EventId;
  # DEBUG EventId => _1
  # DEBUG INLINE_ENTRY Dem_GbiFFRecNumClassIdx
  # DEBUG BEGIN_STMT
  _11 = (int) _1;
  _16 = Dem_EventDesc[_11].EvConf2;
  _17 = _16 >> 2;
  _18 = (unsigned char) _17;
  Result_19 = _18 & 1;
  # DEBUG Result => Result_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG FFRecNumClassIdx => Result_19
  # DEBUG BEGIN_STMT
  _2 = EvMemEntry_10(D)->OccCtr;
  _3 = (int) Result_19;
  _4 = Dem_FFRecNumerationClass[_3].NumFFRecs;
  NumFF_12 = MIN_EXPR <_2, _4>;
  # DEBUG NumFF => NumFF_12
  # DEBUG BEGIN_STMT
  FFRecNumClass_13 = Dem_FFRecNumerationClass[_3].Dem_FFRecNumClassIdx;
  # DEBUG FFRecNumClass => FFRecNumClass_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  FFRecNumIdx_15 = FFRecNumIdx_8 + 1;
  # DEBUG FFRecNumIdx => FFRecNumIdx_15

  <bb 4> [local count: 1073741824]:
  # FFRecNumIdx_8 = PHI <0(2), FFRecNumIdx_15(3)>
  # DEBUG FFRecNumIdx => FFRecNumIdx_8
  # DEBUG BEGIN_STMT
  if (FFRecNumIdx_8 < NumFF_12)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  _5 = (sizetype) FFRecNumIdx_8;
  _6 = FFRecNumClass_13 + _5;
  _7 = *_6;
  if (_7 != RecordNumber_14(D))
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # FFRecNumIdx_20 = PHI <FFRecNumIdx_8(4), FFRecNumIdx_8(5)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return FFRecNumIdx_20;

}



;; Function Dem_IntValEntryData (Dem_IntValEntryData, funcdef_no=44, decl_uid=6669, cgraph_uid=45, symbol_order=55)

Modification phase of node Dem_IntValEntryData/55
Dem_IntValEntryData (const struct Dem_EventMemoryEntryType * EvMemEntry)
{
  const uint8 Result;
  const Dem_SizeEntryDataType StartPos;
  Dem_EntryDataType * Result;
  short unsigned int _1;
  int _2;
  Dem_EntryDataType * _3;
  sizetype _4;
  int _8;
  long unsigned int _10;
  long unsigned int _11;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  StartPos_7 = EvMemEntry_6(D)->EntryDataPos;
  # DEBUG StartPos => StartPos_7
  # DEBUG BEGIN_STMT
  _1 = EvMemEntry_6(D)->EventId;
  # DEBUG EventId => _1
  # DEBUG INLINE_ENTRY Dem_GbiDTCOriginIdx
  # DEBUG BEGIN_STMT
  _8 = (int) _1;
  _10 = Dem_EventDesc[_8].EvConf1;
  _11 = _10 >> 24;
  _12 = (unsigned char) _11;
  Result_13 = _12 & 3;
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG OriginIdx => Result_13
  # DEBUG BEGIN_STMT
  _2 = (int) Result_13;
  _3 = Dem_EntryData[_2];
  _4 = (sizetype) StartPos_7;
  Result_9 = _3 + _4;
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_9;

}



;; Function Dem_FindEDNumIndex (Dem_FindEDNumIndex, funcdef_no=45, decl_uid=6751, cgraph_uid=46, symbol_order=56)

Modification phase of node Dem_FindEDNumIndex/56
Dem_FindEDNumIndex (const struct Dem_EDClassType * EDClass, uint8 Number)
{
  Dem_EDSegIdxType SegIndex;
  const Dem_EDSegIdxType * _1;
  sizetype _2;
  const Dem_EDSegIdxType * _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned char _7;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SegIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = EDClass_10(D)->EDSegIdx;
  _2 = (sizetype) SegIndex_8;
  _3 = _1 + _2;
  _4 = *_3;
  _5 = (int) _4;
  _6 = Dem_EDSegment[_5].RecNum;
  if (_6 == Number_11(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  SegIndex_12 = SegIndex_8 + 1;
  # DEBUG SegIndex => SegIndex_12

  <bb 5> [local count: 1073741824]:
  # SegIndex_8 = PHI <0(2), SegIndex_12(4)>
  # DEBUG SegIndex => SegIndex_8
  # DEBUG BEGIN_STMT
  _7 = EDClass_10(D)->NumEDSegs;
  if (_7 > SegIndex_8)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # SegIndex_13 = PHI <SegIndex_8(3), SegIndex_8(5)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return SegIndex_13;

}



;; Function Dem_PermanentMemoryNotifyClear (Dem_PermanentMemoryNotifyClear, funcdef_no=49, decl_uid=6768, cgraph_uid=50, symbol_order=60)

Modification phase of node Dem_PermanentMemoryNotifyClear/60
Dem_PermanentMemoryNotifyClear (Dem_EventIdType EventId)
{
  Dem_PermanentMemoryEntryType Entry;
  Dem_SizeEvMemEntryType EntryIdx;
  int _1;
  int _3;
  short unsigned int _6;

  <bb 2> [local count: 261993004]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = (int) EntryIdx_4;
  Entry_8 = Dem_EventMemoryPermanent[_1];
  # DEBUG Entry => Entry_8
  # DEBUG BEGIN_STMT
  _6 = Entry_8 & 8191;
  if (_6 == EventId_9(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 4> [local count: 47244640]:
  # _3 = PHI <_1(3)>
  # Entry_2 = PHI <Entry_8(3)>
  # DEBUG BEGIN_STMT
  # DEBUG Entry => Entry_2 & 57343
  # DEBUG BEGIN_STMT
  Entry_11 = Entry_2 & 40959;
  # DEBUG Entry => Entry_11
  # DEBUG BEGIN_STMT
  if (Entry_2 != Entry_11)
    goto <bb 5>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 5> [local count: 31181463]:
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanent[_3] = Entry_11;
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 1;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 811748819]:
  # DEBUG BEGIN_STMT
  EntryIdx_10 = EntryIdx_4 + 1;
  # DEBUG EntryIdx => EntryIdx_10

  <bb 7> [local count: 1073741824]:
  # EntryIdx_4 = PHI <0(2), EntryIdx_10(6)>
  # DEBUG EntryIdx => EntryIdx_4
  # DEBUG BEGIN_STMT
  if (EntryIdx_4 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 8>; [20.00%]

  <bb 8> [local count: 261993005]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_PermanentMemoryAddEntry (Dem_PermanentMemoryAddEntry, funcdef_no=50, decl_uid=6770, cgraph_uid=51, symbol_order=61)

Modification phase of node Dem_PermanentMemoryAddEntry/61
Dem_PermanentMemoryAddEntry (Dem_EventIdType EventId)
{
  Dem_PermanentMemoryEntryType Entry;
  Dem_PermanentMemoryEntryType Entry;
  Std_ReturnType Result;
  boolean EmptySlotFound;
  Dem_SizeEvMemEntryType FreeSlot;
  Dem_SizeEvMemEntryType EntryIdx;
  int _1;
  int _5;
  int _11;
  short unsigned int _14;

  <bb 2> [local count: 261993004]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FreeSlot => 0
  # DEBUG BEGIN_STMT
  # DEBUG EmptySlotFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG EventFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EntryEventId => EventId_16(D)
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 10>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = (int) EntryIdx_6;
  Entry_18 = Dem_EventMemoryPermanent[_1];
  # DEBUG Entry => Entry_18
  # DEBUG BEGIN_STMT
  _14 = Entry_18 & 8191;
  if (_14 == EventId_16(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 4> [local count: 47244640]:
  # _11 = PHI <_1(3)>
  # Entry_4 = PHI <Entry_18(3)>
  # DEBUG BEGIN_STMT
  # DEBUG EventFound => 1
  # DEBUG BEGIN_STMT
  # DEBUG Entry => Entry_4 & 57343
  # DEBUG BEGIN_STMT
  Entry_21 = Entry_4 & 40959;
  # DEBUG Entry => Entry_21
  # DEBUG BEGIN_STMT
  if (Entry_4 != Entry_21)
    goto <bb 5>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 5> [local count: 31181463]:
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanent[_11] = Entry_21;
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 1;
  # DEBUG EventFound => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 811748819]:
  # DEBUG BEGIN_STMT
  if (_14 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 405874409]:
  if (EmptySlotFound_10 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 202937205]:
  # DEBUG BEGIN_STMT
  # DEBUG FreeSlot => EntryIdx_6
  # DEBUG BEGIN_STMT
  # DEBUG EmptySlotFound => 1

  <bb 9> [local count: 811748820]:
  # FreeSlot_7 = PHI <FreeSlot_8(6), FreeSlot_8(7), EntryIdx_6(8)>
  # EmptySlotFound_9 = PHI <EmptySlotFound_10(6), EmptySlotFound_10(7), 1(8)>
  # DEBUG EmptySlotFound => EmptySlotFound_9
  # DEBUG FreeSlot => FreeSlot_7
  # DEBUG BEGIN_STMT
  EntryIdx_20 = EntryIdx_6 + 1;
  # DEBUG EntryIdx => EntryIdx_20

  <bb 10> [local count: 1073741824]:
  # EntryIdx_6 = PHI <0(2), EntryIdx_20(9)>
  # FreeSlot_8 = PHI <0(2), FreeSlot_7(9)>
  # EmptySlotFound_10 = PHI <0(2), EmptySlotFound_9(9)>
  # DEBUG EmptySlotFound => EmptySlotFound_10
  # DEBUG FreeSlot => FreeSlot_8
  # DEBUG EntryIdx => EntryIdx_6
  # DEBUG BEGIN_STMT
  if (EntryIdx_6 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 11>; [20.00%]

  <bb 11> [local count: 214748365]:
  # FreeSlot_15 = PHI <FreeSlot_8(10)>
  # EmptySlotFound_19 = PHI <EmptySlotFound_10(10)>
  # DEBUG EventFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (EmptySlotFound_19 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  # DEBUG Entry => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Entry => 0
  # DEBUG BEGIN_STMT
  # DEBUG Entry => EventId_16(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Entry => EventId_16(D) & 57343
  # DEBUG BEGIN_STMT
  Entry_24 = EventId_16(D) & 40959;
  # DEBUG Entry => Entry_24
  # DEBUG BEGIN_STMT
  _5 = (int) FreeSlot_15;
  Dem_EventMemoryPermanent[_5] = Entry_24;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 1;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 141733920]:
  # DEBUG D#6 => EventId_16(D)
  Result_13 = Dem_PermanentMemoryAddEntry.part.0 ();

  <bb 14> [local count: 261993005]:
  # Result_12 = PHI <0(4), 0(12), Result_13(13), 0(5)>
  # DEBUG EventFound => NULL
  # DEBUG Result => Result_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_12;

}



;; Function Dem_ProcessIndicatorFailureCycleCounter (Dem_ProcessIndicatorFailureCycleCounter, funcdef_no=1, decl_uid=6872, cgraph_uid=2, symbol_order=12)

Modification phase of node Dem_ProcessIndicatorFailureCycleCounter/12
Dem_ProcessIndicatorFailureCycleCounter (Dem_IndicatorIdxType IndicatorIdx, Dem_EventIdType EventId, boolean FirstFailed)
{
  const Dem_FailureCycleCounterInfoIdxType FailureCycleCounterInfoIdx;
  const Dem_OperationCycleIdType Result;
  const Dem_OperationCycleIdType Result;
  uint32 Dem_ObdDTCOfEvent;
  const Dem_IndicatorCycleCounterType FailureCounter;
  const Dem_IndicatorCycleCounterType FailureThreshold;
  const uint32 IndMILEnd;
  const uint32 IndMILStart;
  boolean CheckThreshold;
  boolean Result;
  unsigned char _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  unsigned int _6;
  unsigned char _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _13;
  unsigned int _14;
  unsigned char _15;
  unsigned int _16;
  unsigned int _17;
  unsigned char _18;
  unsigned char _19;
  boolean iftmp.0_23;
  unsigned char _27;
  unsigned char _29;
  unsigned char _32;
  long unsigned int _33;
  long unsigned int _38;
  int _41;
  int _46;
  int _48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG CounterDataIdx => IndicatorIdx_28(D)
  # DEBUG BEGIN_STMT
  # DEBUG IndicatorId => 0
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_31(D)
  # DEBUG IndicatorIdx => IndicatorIdx_28(D)
  # DEBUG INLINE_ENTRY Dem_GbiIndicatorFailureCycleIdx
  # DEBUG BEGIN_STMT
  _46 = (int) IndicatorIdx_28(D);
  FailureCycleCounterInfoIdx_47 = Dem_IndicatorLink[_46].FailureCycleCounterInfoIdx;
  # DEBUG FailureCycleCounterInfoIdx => FailureCycleCounterInfoIdx_47
  # DEBUG BEGIN_STMT
  _48 = (int) FailureCycleCounterInfoIdx_47;
  Result_49 = Dem_FailureCycleCounterInfo[_48].OperationCycleRef;
  # DEBUG Result => Result_49
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG IndicatorIdx => NULL
  # DEBUG Result => NULL
  # DEBUG FailureCycleCounterInfoIdx => NULL
  # DEBUG FailureCycleId => Result_49
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_31(D)
  # DEBUG INLINE_ENTRY Dem_GbiOpCycleIdx
  # DEBUG BEGIN_STMT
  _41 = (int) EventId_31(D);
  _38 = Dem_EventDesc[_41].EvConf2;
  _33 = _38 >> 4;
  _32 = (unsigned char) _33;
  Result_45 = _32 & 3;
  # DEBUG Result => Result_45
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG EventOperationCycle => Result_45
  # DEBUG BEGIN_STMT
  # DEBUG CheckThreshold => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dem_IndicatorDesc[0].StartIdx;
  IndMILStart_34 = (const uint32) _1;
  # DEBUG IndMILStart => IndMILStart_34
  # DEBUG BEGIN_STMT
  _2 = Dem_IndicatorDesc[0].Number;
  _3 = (long unsigned int) _2;
  IndMILEnd_35 = _3 + IndMILStart_34;
  # DEBUG IndMILEnd => IndMILEnd_35
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) IndicatorIdx_28(D);
  if (_1 <= IndicatorIdx_28(D))
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (_4 < IndMILEnd_35)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 805306369]:

  <bb 5> [local count: 1073741824]:
  # iftmp.0_23 = PHI <1(3), 0(4)>
  # DEBUG IsMIL => iftmp.0_23
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_45 == Result_49)
    goto <bb 6>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  if (FirstFailed_36(D) == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 8> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  Dem_ProcessIndicatorOnCriteria (IndicatorIdx_28(D), EventId_31(D));
  # DEBUG CheckThreshold => 1
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _5 = IndicatorIdx_28(D) >> 3;
  _6 = (unsigned int) _5;
  _7 = Dem_NvData.IndicatorCycleCounterRole[0][_6];
  _27 = IndicatorIdx_28(D) & 7;
  _8 = (unsigned int) _27;
  _9 = 1 << _8;
  _10 = (unsigned char) _9;
  _11 = _7 & _10;
  if (_11 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 719407023]:
  # DEBUG IndicatorCounterDataRole => NULL
  # DEBUG CheckThreshold => NULL
  # DEBUG BEGIN_STMT
  if (iftmp.0_23 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 11> [local count: 359703511]:
  # DEBUG EventId => EventId_31(D)
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG Result => Result_45
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  if (Result_45 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 12> [local count: 122299194]:
  _12 = Dem_NvData.Dem_OpCycleDCYIsQualified;
  if (_12 == 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 1012592228]:
  # CheckThreshold_22 = PHI <0(9), 1(10), 1(11), 1(12)>
  # DEBUG IndicatorCounterDataRole => NULL
  # DEBUG CheckThreshold => CheckThreshold_22
  # DEBUG BEGIN_STMT
  if (CheckThreshold_22 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 15> [local count: 344281357]:
  # DEBUG BEGIN_STMT
  # DEBUG FailureCycleCounterInfoIdx => FailureCycleCounterInfoIdx_47
  # DEBUG BEGIN_STMT
  FailureThreshold_39 = Dem_FailureCycleCounterInfo[_48].Threshold;
  # DEBUG FailureThreshold => FailureThreshold_39
  # DEBUG BEGIN_STMT
  FailureCounter_40 = Dem_NvData.IndicatorCycleCounter[0][_46];
  # DEBUG FailureCounter => FailureCounter_40
  # DEBUG BEGIN_STMT
  if (FailureThreshold_39 <= FailureCounter_40)
    goto <bb 16>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 16> [local count: 172140679]:
  # DEBUG BEGIN_STMT
  Dem_ObdDTCOfEvent_42 = Dem_GetVisibleObdDTC (EventId_31(D));
  # DEBUG Dem_ObdDTCOfEvent => Dem_ObdDTCOfEvent_42
  # DEBUG BEGIN_STMT
  if (iftmp.0_23 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 17> [local count: 86070339]:
  if (Dem_ObdDTCOfEvent_42 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 129105509]:
  # DEBUG BEGIN_STMT
  _13 = IndicatorIdx_28(D) >> 3;
  _14 = (unsigned int) _13;
  _15 = Dem_NvData.IndicatorCycleCounterWIRStatus[0][_14];
  _29 = IndicatorIdx_28(D) & 7;
  _16 = (unsigned int) _29;
  _17 = 1 << _16;
  _18 = (unsigned char) _17;
  _19 = _15 | _18;
  Dem_NvData.IndicatorCycleCounterWIRStatus[0][_14] = _19;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 19> [local count: 344281358]:
  # Result_20 = PHI <0(15), 0(17), 1(18)>
  # DEBUG Result => Result_20
  # DEBUG BEGIN_STMT
  if (iftmp.0_23 != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 20> [local count: 172140679]:
  if (Result_20 == 1)
    goto <bb 21>; [20.24%]
  else
    goto <bb 22>; [79.76%]

  <bb 21> [local count: 34841273]:
  # DEBUG BEGIN_STMT
  Dem_PermanentMemoryAddEntry (EventId_31(D));

  <bb 22> [local count: 1073741824]:
  # Result_21 = PHI <0(14), Result_20(19), Result_20(20), 1(21), 0(12)>
  # DEBUG CheckThreshold => NULL
  # DEBUG Result => Result_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_21;

}



;; Function Dem_CheckForEventWIRUpdate (Dem_CheckForEventWIRUpdate, funcdef_no=0, decl_uid=6868, cgraph_uid=1, symbol_order=11)

Modification phase of node Dem_CheckForEventWIRUpdate/11
Dem_CheckForEventWIRUpdate (Dem_EventIdType EventId, Dem_EventStatusType EventStatus, boolean FirstFailed)
{
  const boolean Result;
  Dem_IndicatorIdxType LinkIdx;
  boolean Result;
  short unsigned int _2;
  unsigned char _3;
  int _14;
  long unsigned int _21;
  long unsigned int _22;
  unsigned char _23;

  <bb 2> [local count: 209269312]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_13(D)
  # DEBUG INLINE_ENTRY Dem_GbiIndicatorUsed
  # DEBUG BEGIN_STMT
  _14 = (int) EventId_13(D);
  _21 = Dem_EventDesc[_14].EvConf1;
  _22 = _21 >> 29;
  _23 = (unsigned char) _22;
  Result_24 = _23 & 1;
  # DEBUG Result => Result_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG IndicatorUsed => Result_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_24 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 3> [local count: 104634656]:
  if (EventStatus_16(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 69058873]:
  if (EventStatus_16(D) == 5)
    goto <bb 5>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 5> [local count: 59055800]:
  # Result_15 = PHI <0(4), 0(3)>
  # LinkIdx_11 = PHI <0(4), 0(3)>
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _2 = Dem_IndicatorLink[0].EventId;
  if (_2 == EventId_13(D))
    goto <bb 7>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 334846388]:
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 679839637]:
  # DEBUG BEGIN_STMT
  _3 = Dem_ProcessIndicatorFailureCycleCounter (0, EventId_13(D), FirstFailed_17(D));
  if (_3 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 231145476]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 9> [local count: 679839637]:
  # Result_1 = PHI <1(8), Result_5(7)>
  # LinkIdx_20 = PHI <1(8), 1(7)>

  <bb 10> [local count: 738895438]:
  # Result_8 = PHI <Result_15(5), Result_1(9)>
  # LinkIdx_4 = PHI <LinkIdx_11(5), LinkIdx_20(9)>

  <bb 11> [local count: 1073741824]:
  # Result_5 = PHI <Result_8(10), Result_5(13)>
  # LinkIdx_7 = PHI <LinkIdx_4(10), 1(13)>
  # DEBUG LinkIdx => LinkIdx_7
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  if (LinkIdx_7 == 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 12>; [5.50%]

  <bb 12> [local count: 209269313]:
  # Result_6 = PHI <0(2), 0(4), Result_5(11)>
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_PermanentMemoryRemoveEntry (Dem_PermanentMemoryRemoveEntry, funcdef_no=51, decl_uid=6772, cgraph_uid=52, symbol_order=62)

Modification phase of node Dem_PermanentMemoryRemoveEntry/62
Dem_PermanentMemoryRemoveEntry (Dem_EventIdType EventId)
{
  Dem_PermanentMemoryEntryType Entry;
  Dem_SizeEvMemEntryType EntryIdx;
  int _1;
  unsigned char _2;
  unsigned char _3;
  int _4;
  short unsigned int _8;

  <bb 2> [local count: 261993004]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EntryEventId => EventId_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = (int) EntryIdx_5;
  Entry_10 = Dem_EventMemoryPermanent[_1];
  # DEBUG Entry => Entry_10
  # DEBUG BEGIN_STMT
  _8 = Entry_10 & 8191;
  if (EventId_7(D) == _8)
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 47244640]:
  # _4 = PHI <_1(3)>
  # Entry_12 = PHI <Entry_10(3)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => Entry_12 & 57344
  # DEBUG Entry => D#8
  # DEBUG BEGIN_STMT
  # DEBUG Entry => D#8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Entry => Entry_12 & 49152
  # DEBUG BEGIN_STMT
  Entry_13 = Entry_12 & 32768;
  # DEBUG Entry => Entry_13
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanent[_4] = Entry_13;
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentNonVolatileStored[_4] = 0;
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 1;
  # DEBUG BEGIN_STMT
  _2 = Dem_NvData.EvMemOvfIndFlags;
  _3 = _2 & 253;
  Dem_NvData.EvMemOvfIndFlags = _3;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 811748819]:
  # DEBUG BEGIN_STMT
  EntryIdx_11 = EntryIdx_5 + 1;
  # DEBUG EntryIdx => EntryIdx_11

  <bb 6> [local count: 1073741824]:
  # EntryIdx_5 = PHI <0(2), EntryIdx_11(5)>
  # DEBUG EntryIdx => EntryIdx_5
  # DEBUG BEGIN_STMT
  if (EntryIdx_5 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 7>; [20.00%]

  <bb 7> [local count: 261993005]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_DebounceEvent (Dem_DebounceEvent, funcdef_no=53, decl_uid=6703, cgraph_uid=54, symbol_order=64)

Modification phase of node Dem_DebounceEvent/64
Dem_DebounceEvent (Dem_EventIdType EventId, Dem_EventStatusType * EventStatus, Std_ReturnType * DebounceResult)
{
  const Dem_DebounceType Result;
  boolean Result;
  void (*<T723>) (Dem_EventIdType, Dem_EventStatusType *) _1;
  unsigned char _2;
  unsigned char _3;
  int _9;
  long unsigned int _16;
  long unsigned int _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_8(D)
  # DEBUG INLINE_ENTRY Dem_GbiDebounceAlgo
  # DEBUG BEGIN_STMT
  _9 = (int) EventId_8(D);
  _16 = Dem_EventDesc[_9].EvConf3;
  _17 = _16 >> 3;
  Result_18 = _17 & 3;
  # DEBUG Result => Result_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG DebounceAlgo => Result_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_18 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dem_DebounceFctPtrTable[Result_18].DebounceEventFct;
  _1 (EventId_8(D), EventStatus_10(D));

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = *EventStatus_10(D);
  _3 = _2 + 254;
  if (_3 <= 1)
    goto <bb 5>; [41.00%]
  else
    goto <bb 8>; [59.00%]

  <bb 5> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  if (Result_18 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 220117074]:
  # DEBUG BEGIN_STMT
  *DebounceResult_12(D) = 3;
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 220117074]:
  # DEBUG BEGIN_STMT
  *DebounceResult_12(D) = 0;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 633507677]:
  # DEBUG BEGIN_STMT
  *DebounceResult_12(D) = 0;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 9> [local count: 1073741824]:
  # Result_4 = PHI <0(7), 1(8), 0(6)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_InternalSetSwcEventStatus (Dem_InternalSetSwcEventStatus, funcdef_no=54, decl_uid=6707, cgraph_uid=55, symbol_order=65)

Modification phase of node Dem_InternalSetSwcEventStatus/65
Dem_InternalSetSwcEventStatus (struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus, Std_ReturnType * SetSwcEventStatusResult)
{
  const boolean Result;
  boolean EntryIsWritten;
  struct Dem_EventNotificationDataType Notification;
  boolean FirstFailed;
  const Dem_EventStatusType OldEventStatus;
  const Dem_DTCStatusMaskType OldDTCStatusMask;
  const Dem_EventIdType EventId;
  int _1;
  unsigned char _2;
  unsigned char _10;
  unsigned char _15;
  long unsigned int _27;
  long unsigned int _28;
  unsigned char _29;

  <bb 2> [local count: 1073741821]:
  # DEBUG BEGIN_STMT
  EventId_7 = EventInfo.EventId;
  # DEBUG EventId => EventId_7
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_7;
  OldDTCStatusMask_8 = Dem_NvData.DTCStatusMask[_1];
  # DEBUG OldDTCStatusMask => OldDTCStatusMask_8
  # DEBUG BEGIN_STMT
  OldEventStatus_9 = OldDTCStatusMask_8 & 1;
  # DEBUG OldEventStatus => OldEventStatus_9
  # DEBUG BEGIN_STMT
  # DEBUG ErrorReenterPrecondition => 0
  # DEBUG BEGIN_STMT
  # DEBUG FirstFailed => 0
  # DEBUG BEGIN_STMT
  Notification.ReplacedEventMsg.EventId = 0;
  Notification.ReplacedEventMsg.OldStatusMask = 0;
  Notification.ReplacedEventMsg.NewStatusMask = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (EventStatus_14(D) == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669602]:
  if (EventStatus_14(D) == 5)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 606019885]:
  _10 = OldDTCStatusMask_8 & 2;
  if (_10 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 303009942]:
  # DEBUG BEGIN_STMT
  # DEBUG FirstFailed => 1

  <bb 6> [local count: 1073741823]:
  # FirstFailed_3 = PHI <0(3), 0(4), 1(5)>
  # DEBUG FirstFailed => FirstFailed_3
  # DEBUG BEGIN_STMT
  _2 = 1 - OldEventStatus_9;
  # DEBUG ErrorReenterPrecondition => _2
  # DEBUG BEGIN_STMT
  _15 = OldDTCStatusMask_8 & 64;
  if (_15 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 7> [local count: 536870911]:
  if (OldEventStatus_9 == EventStatus_14(D))
    goto <bb 8>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 8> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_7
  # DEBUG INLINE_ENTRY Dem_GbiIndicatorUsed
  # DEBUG BEGIN_STMT
  _27 = Dem_EventDesc[_1].EvConf1;
  _28 = _27 >> 29;
  _29 = (unsigned char) _28;
  Result_30 = _29 & 1;
  # DEBUG Result => Result_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG IndicatorUsed => Result_30
  # DEBUG BEGIN_STMT
  if (Result_30 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 91268055]:
  if (EventStatus_14(D) == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 18472654]:
  # DEBUG BEGIN_STMT
  # DEBUG ProcessEventJobs => 2
  # DEBUG BEGIN_STMT
  Dem_ProcessEvent (4, EventInfo, EventStatus_14(D), FirstFailed_3, 2, &Notification);
  # DEBUG BEGIN_STMT
  *SetSwcEventStatusResult_17(D) = 0;
  goto <bb 18>; [100.00%]

  <bb 11> [local count: 164063456]:
  # DEBUG BEGIN_STMT
  *SetSwcEventStatusResult_17(D) = 0;
  goto <bb 18>; [100.00%]

  <bb 12> [local count: 891205714]:
  # DEBUG BEGIN_STMT
  # DEBUG ProcessEventJobs => 1
  # DEBUG BEGIN_STMT
  if (EventStatus_14(D) == 1)
    goto <bb 14>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 588195772]:
  if (EventStatus_14(D) == 5)
    goto <bb 14>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 14> [local count: 502996505]:
  if (_2 != 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 15> [local count: 165988847]:
  # DEBUG BEGIN_STMT
  # DEBUG EntryIsWritten => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryIsWritten_22 = Dem_WriteErrorQueueEntry (EventInfo, EventStatus_14(D), FirstFailed_3);
  # DEBUG EntryIsWritten => EntryIsWritten_22
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (EntryIsWritten_22 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 82994423]:
  # DEBUG BEGIN_STMT
  *SetSwcEventStatusResult_17(D) = 3;

  <bb 17> [local count: 891205716]:
  # DEBUG BEGIN_STMT
  Dem_ProcessEvent (4, EventInfo, EventStatus_14(D), FirstFailed_3, 1, &Notification);

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Notification ={v} {CLOBBER};
  return;

}



;; Function Dem_InternalSetBswEventStatus (Dem_InternalSetBswEventStatus, funcdef_no=55, decl_uid=6711, cgraph_uid=56, symbol_order=66)

Modification phase of node Dem_InternalSetBswEventStatus/66
Dem_InternalSetBswEventStatus (struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus, Std_ReturnType * SetBswEventStatusResult)
{
  const Dem_EventStatusType OldEventStatus;
  Dem_DTCStatusMaskType OldDTCStatusMask;
  const Dem_EventIdType EventId;
  boolean EntryPresent;
  Dem_EventStatusType PreviousEntryStatus;
  int _1;
  unsigned char PreviousEntryStatus.21_2;
  unsigned char _16;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventId_5 = EventInfo.EventId;
  # DEBUG EventId => EventId_5
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_5;
  OldDTCStatusMask_6 = Dem_NvData.DTCStatusMask[_1];
  # DEBUG OldDTCStatusMask => OldDTCStatusMask_6
  # DEBUG BEGIN_STMT
  OldEventStatus_7 = OldDTCStatusMask_6 & 1;
  # DEBUG OldEventStatus => OldEventStatus_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryPresent_10 = Dem_CheckErrorQueueEntry (EventId_5, &PreviousEntryStatus);
  # DEBUG EntryPresent => EntryPresent_10
  # DEBUG BEGIN_STMT
  if (EntryPresent_10 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  PreviousEntryStatus.21_2 = PreviousEntryStatus;
  if (PreviousEntryStatus.21_2 != EventStatus_11(D))
    goto <bb 7>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 4> [local count: 832794158]:
  if (EntryPresent_10 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 5> [local count: 416397078]:
  _16 = OldDTCStatusMask_6 & 64;
  if (_16 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 208198539]:
  if (OldEventStatus_7 != EventStatus_11(D))
    goto <bb 7>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 7> [local count: 586557242]:
  # DEBUG BEGIN_STMT
  Dem_CheckErrorReQueueEntry (EventInfo, EventStatus_11(D), OldDTCStatusMask_6, SetBswEventStatusResult_12(D));

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  PreviousEntryStatus ={v} {CLOBBER};
  return;

}



;; Function Dem_UpdateEventStatusOnQualification (Dem_UpdateEventStatusOnQualification, funcdef_no=56, decl_uid=6716, cgraph_uid=57, symbol_order=67)

Modification phase of node Dem_UpdateEventStatusOnQualification/67
Dem_UpdateEventStatusOnQualification (Dem_EventIdType EventId, Dem_EventStatusType EventStatus, boolean EventWIRUpdate, struct Dem_EventNotificationDataType * Notification)
{
  uint8 EventStatusSetMask;
  int _1;
  unsigned char _2;
  unsigned char _3;
  int _4;
  unsigned char _5;
  int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _14;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (EventStatus_13(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_15(D);
  _2 = Dem_NvData.DTCStatusMask[_1];
  _3 = _2 & 174;
  Dem_NvData.DTCStatusMask[_1] = _3;
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG EventStatusSetMask => 35
  # DEBUG BEGIN_STMT
  # DEBUG EventStatusClearMask => 80
  # DEBUG BEGIN_STMT
  if (EventStatus_13(D) == 1)
    goto <bb 6>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 5> [local count: 428208239]:
  _4 = (int) EventId_15(D);
  _5 = Dem_NvData.DTCStatusMask[_4];
  _14 = _5 & 1;
  if (_14 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 322766792]:
  # DEBUG BEGIN_STMT
  Dem_UpdateEventIdOccurKinds (EventId_15(D), 1, 2);

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG EventStatusSetMask => 39
  # DEBUG BEGIN_STMT
  if (EventWIRUpdate_18(D) == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG EventStatusSetMask => 167

  <bb 9> [local count: 536870913]:
  # EventStatusSetMask_10 = PHI <39(7), 167(8)>
  # DEBUG EventStatusSetMask => EventStatusSetMask_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = (int) EventId_15(D);
  _7 = Dem_NvData.DTCStatusMask[_6];
  _8 = _7 | EventStatusSetMask_10;
  # DEBUG BEGIN_STMT
  _9 = _8 & 175;
  Dem_NvData.DTCStatusMask[_6] = _9;

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_NvMReadCopyEventStatusBlock (Dem_NvMReadCopyEventStatusBlock, funcdef_no=59, decl_uid=5903, cgraph_uid=60, symbol_order=70)

Modification phase of node Dem_NvMReadCopyEventStatusBlock/70
Dem_NvMReadCopyEventStatusBlock (const void * NvMBuffer)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.22_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.22_1 = Dem_InitializationState;
  if (Dem_InitializationState.22_1 == 2)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  if (NvMBuffer_5(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 256924943]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 599491536]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Dem_NvData, NvMBuffer_5(D), 36);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 7> [local count: 1073741824]:
  # Result_2 = PHI <1(3), 1(5), 0(6)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function Dem_NvMWriteCopyEventStatusBlock (Dem_NvMWriteCopyEventStatusBlock, funcdef_no=60, decl_uid=5905, cgraph_uid=61, symbol_order=71)

Modification phase of node Dem_NvMWriteCopyEventStatusBlock/71
Dem_NvMWriteCopyEventStatusBlock (void * NvMBuffer)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.23_1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.23_1 = Dem_InitializationState;
  if (Dem_InitializationState.23_1 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = Dem_ClearDtcAsyncStatus.EventStatusWrite;
  if (_2 != 1)
    goto <bb 4>; [48.88%]
  else
    goto <bb 5>; [51.12%]

  <bb 4> [local count: 178447301]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 186624919]:
  # DEBUG BEGIN_STMT
  _3 = Dem_ClearDtcAsyncStatus.RunState;
  if (_3 != 2)
    goto <bb 6>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 6> [local count: 91222260]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 95402659]:
  # DEBUG BEGIN_STMT
  if (NvMBuffer_8(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 9>; [82.57%]

  <bb 8> [local count: 16628683]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 17);

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NvMBuffer_8(D) != 0B)
    goto <bb 10>; [53.47%]
  else
    goto <bb 11>; [46.53%]

  <bb 10> [local count: 574129753]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventStatusWrite = 2;
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (NvMBuffer_8(D), &Dem_NvData, 36);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 11> [local count: 1073741823]:
  # Result_4 = PHI <1(9), 0(10)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_NvMEventStatusBlockCallback (Dem_NvMEventStatusBlockCallback, funcdef_no=61, decl_uid=5908, cgraph_uid=62, symbol_order=72)

Modification phase of node Dem_NvMEventStatusBlockCallback/72
Dem_NvMEventStatusBlockCallback (uint8 ServiceId, NvM_RequestResultType JobResult)
{
  <unnamed type> Dem_InitializationState.24_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ServiceId_9(D) == 7)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  if (ServiceId_9(D) == 13)
    goto <bb 4>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 4> [local count: 606019886]:
  # DEBUG BEGIN_STMT
  Dem_InitializationState.24_1 = Dem_InitializationState;
  if (Dem_InitializationState.24_1 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 5> [local count: 206046761]:
  # DEBUG BEGIN_STMT
  _2 = Dem_ClearDtcAsyncStatus.EventStatusWrite;
  if (_2 != 2)
    goto <bb 6>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 6> [local count: 100715657]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 105331104]:
  # DEBUG BEGIN_STMT
  _3 = Dem_ClearDtcAsyncStatus.RunState;
  if (_3 == 4)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 21319015]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);

  <bb 9> [local count: 606019887]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventStatusWrite = 0;
  # DEBUG BEGIN_STMT
  _4 = Dem_ClearDtcAsyncStatus.EventMemWrite;
  if (_4 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 303009943]:
  # DEBUG BEGIN_STMT
  _5 = Dem_ClearDtcAsyncStatus.RunState;
  if (_5 == 2)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 103023381]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.OperationResult = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 4;

  <bb 12> [local count: 606019887]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_NvMWriteFinishedPermanentMemory (Dem_NvMWriteFinishedPermanentMemory, funcdef_no=64, decl_uid=5917, cgraph_uid=65, symbol_order=75)

Modification phase of node Dem_NvMWriteFinishedPermanentMemory/75
Dem_NvMWriteFinishedPermanentMemory (uint8 ServiceId, NvM_RequestResultType JobResult)
{
  Dem_SizeEvMemEntryType EntryIdx;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 650752619]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (JobResult_7(D) == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = (int) EntryIdx_3;
  _2 = Dem_EventMemoryPermanentNonVolatileStored[_1];
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 292057776]:
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentNonVolatileStored[_1] = 2;

  <bb 6> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  EntryIdx_13 = EntryIdx_3 + 1;
  # DEBUG EntryIdx => EntryIdx_13

  <bb 7> [local count: 1073741824]:
  # EntryIdx_3 = PHI <0(3), EntryIdx_13(6)>
  # DEBUG EntryIdx => EntryIdx_3
  # DEBUG BEGIN_STMT
  if (EntryIdx_3 != 4)
    goto <bb 4>; [80.00%]
  else
    goto <bb 8>; [20.00%]

  <bb 8> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 436004254]:
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 1;

  <bb 10> [local count: 650752620]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_NvMReadCopyPermanentMemory (Dem_NvMReadCopyPermanentMemory, funcdef_no=65, decl_uid=5921, cgraph_uid=66, symbol_order=76)

Modification phase of node Dem_NvMReadCopyPermanentMemory/76
Dem_NvMReadCopyPermanentMemory (const void * NvMBuffer)
{
  Dem_PermanentMemoryEntryType Entry;
  uint8 EntryIdx;
  uint16 BufferIndex;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.28_1;
  sizetype _2;
  sizetype _3;
  const uint8 * _4;
  unsigned char _5;
  short unsigned int _6;
  const uint8 * _7;
  unsigned char _8;
  short unsigned int _9;
  int _10;

  <bb 2> [local count: 384633120]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BufferPtr => NvMBuffer_16(D)
  # DEBUG BEGIN_STMT
  # DEBUG BufferIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.28_1 = Dem_InitializationState;
  if (Dem_InitializationState.28_1 == 2)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 77849743]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 306783377]:
  # DEBUG BEGIN_STMT
  if (NvMBuffer_16(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 92035013]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 17);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (sizetype) BufferIndex_12;
  _3 = _2 + 1;
  _4 = NvMBuffer_16(D) + _3;
  _5 = *_4;
  _6 = (short unsigned int) _5;
  Entry_20 = _6 << 8;
  # DEBUG Entry => Entry_20
  # DEBUG BEGIN_STMT
  _7 = NvMBuffer_16(D) + _2;
  _8 = *_7;
  _9 = (short unsigned int) _8;
  Entry_21 = _9 + Entry_20;
  # DEBUG Entry => Entry_21
  # DEBUG BEGIN_STMT
  BufferIndex_22 = BufferIndex_12 + 2;
  # DEBUG BufferIndex => BufferIndex_22
  # DEBUG BEGIN_STMT
  _10 = (int) EntryIdx_13;
  Dem_EventMemoryPermanent[_10] = Entry_21;
  # DEBUG BEGIN_STMT
  EntryIdx_24 = EntryIdx_13 + 1;
  # DEBUG EntryIdx => EntryIdx_24

  <bb 8> [local count: 1073741824]:
  # BufferIndex_12 = PHI <0(6), BufferIndex_22(7)>
  # EntryIdx_13 = PHI <0(6), EntryIdx_24(7)>
  # DEBUG EntryIdx => EntryIdx_13
  # DEBUG BufferIndex => BufferIndex_12
  # DEBUG BEGIN_STMT
  if (EntryIdx_13 != 4)
    goto <bb 7>; [80.00%]
  else
    goto <bb 9>; [20.00%]

  <bb 9> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 10> [local count: 384633122]:
  # Result_11 = PHI <1(3), 1(5), 0(9)>
  # DEBUG Result => Result_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_11;

}



;; Function Dem_NvMWriteCopyPermanentMemory (Dem_NvMWriteCopyPermanentMemory, funcdef_no=66, decl_uid=5919, cgraph_uid=67, symbol_order=77)

Modification phase of node Dem_NvMWriteCopyPermanentMemory/77
Dem_NvMWriteCopyPermanentMemory (void * NvMBuffer)
{
  const Dem_PermanentMemoryEntryType Entry;
  uint8 EntryIdx;
  uint16 BufferIndex;
  Std_ReturnType Result;
  int _1;
  sizetype _2;
  uint8 * _3;
  unsigned char _4;
  short unsigned int _5;
  sizetype _6;
  uint8 * _7;
  unsigned char _8;
  short unsigned int _15;

  <bb 2> [local count: 306783377]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NvMBuffer_16(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 92035013]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 17);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG BufferPtr => NvMBuffer_16(D)
  # DEBUG BEGIN_STMT
  # DEBUG BufferIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 858993460]:
  # DEBUG BEGIN_STMT
  _1 = (int) EntryIdx_11;
  Entry_21 = Dem_EventMemoryPermanent[_1];
  # DEBUG Entry => Entry_21
  # DEBUG BEGIN_STMT
  _2 = (sizetype) BufferIndex_10;
  _3 = NvMBuffer_16(D) + _2;
  _4 = (unsigned char) Entry_21;
  *_3 = _4;
  # DEBUG BEGIN_STMT
  _5 = Entry_21 >> 8;
  _6 = _2 + 1;
  _7 = NvMBuffer_16(D) + _6;
  _8 = (unsigned char) _5;
  *_7 = _8;
  # DEBUG BEGIN_STMT
  BufferIndex_24 = BufferIndex_10 + 2;
  # DEBUG BufferIndex => BufferIndex_24
  # DEBUG BEGIN_STMT
  _15 = Entry_21 & 8191;
  if (_15 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 429496730]:
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentNonVolatileStored[_1] = 1;

  <bb 7> [local count: 858993460]:
  # DEBUG BEGIN_STMT
  EntryIdx_26 = EntryIdx_11 + 1;
  # DEBUG EntryIdx => EntryIdx_26

  <bb 8> [local count: 1073741824]:
  # BufferIndex_10 = PHI <0(4), BufferIndex_24(7)>
  # EntryIdx_11 = PHI <0(4), EntryIdx_26(7)>
  # DEBUG EntryIdx => EntryIdx_11
  # DEBUG BufferIndex => BufferIndex_10
  # DEBUG BEGIN_STMT
  if (EntryIdx_11 != 4)
    goto <bb 5>; [80.00%]
  else
    goto <bb 9>; [20.00%]

  <bb 9> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 0;

  <bb 10> [local count: 306783378]:
  # Result_9 = PHI <1(3), 0(9)>
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_9;

}



;; Function Dem_InternalSetDTCSuppression (Dem_InternalSetDTCSuppression, funcdef_no=68, decl_uid=6784, cgraph_uid=69, symbol_order=79)

Modification phase of node Dem_InternalSetDTCSuppression/79
Dem_InternalSetDTCSuppression (uint32 DTC, Dem_DTCFormatType DTCFormat, boolean SuppressionStatus)
{
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DTCFormat_3(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Result_10 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetObdDTC, &Dem_OBDDTCSuppression, SuppressionStatus_6(D));
  # DEBUG Result => Result_10
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Result_8 = Dem_InternalCheckAndSetDTCSuppression (DTC_5(D), Dem_InternalGetUdsDTC, &Dem_UDSDTCSuppression, SuppressionStatus_6(D));
  # DEBUG Result => Result_8

  <bb 5> [local count: 1073741824]:
  # Result_1 = PHI <Result_10(3), Result_8(4)>
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_1;

}



;; Function Dem_InternalGetIndicatorStatus (Dem_InternalGetIndicatorStatus, funcdef_no=69, decl_uid=6864, cgraph_uid=70, symbol_order=80)

Modification phase of node Dem_InternalGetIndicatorStatus/80
Dem_InternalGetIndicatorStatus (Dem_IndicatorIdType IndicatorId, boolean NeedOnlyOnOffStatus)
{
  Dem_IndicatorStatusType Behaviour;
  const Dem_CounterDataIdxType CounterDataIdx;
  Dem_IndicatorIdxType LinkIdx;
  const struct Dem_IndicatorLinkType * IndicatorLink;
  Dem_IndicatorStatusType MinStatus;
  Dem_IndicatorStatusType Status;
  int _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  unsigned int _12;
  unsigned int _13;
  const struct Dem_IndicatorLinkType * _14;
  unsigned char _15;
  unsigned char _22;

  <bb 2> [local count: 86959666]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG MinStatus => 3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NeedOnlyOnOffStatus_23(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 29566286]:
  # DEBUG BEGIN_STMT
  # DEBUG MinStatus => 1

  <bb 4> [local count: 86959666]:
  # MinStatus_20 = PHI <3(2), 1(3)>
  # DEBUG MinStatus => MinStatus_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) IndicatorId_24(D);
  _2 = Dem_IndicatorDesc[_1].StartIdx;
  _3 = (int) _2;
  IndicatorLink_26 = &Dem_IndicatorLink[_3];
  # DEBUG IndicatorLink => IndicatorLink_26
  # DEBUG BEGIN_STMT
  # DEBUG LinkIdx => 0
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  CounterDataIdx_27 = _2 + LinkIdx_21;
  # DEBUG CounterDataIdx => CounterDataIdx_27
  # DEBUG BEGIN_STMT
  _4 = CounterDataIdx_27 >> 3;
  _5 = (unsigned int) _4;
  _6 = Dem_NvData.IndicatorCycleCounterWIRStatus[0][_5];
  _22 = CounterDataIdx_27 & 7;
  _8 = (unsigned int) _22;
  _9 = 1 << _8;
  _10 = (unsigned char) _9;
  _11 = _6 & _10;
  if (_11 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 6> [local count: 507343012]:
  # DEBUG BEGIN_STMT
  _12 = (unsigned int) LinkIdx_21;
  _13 = _12 * 6;
  _14 = IndicatorLink_26 + _13;
  Behaviour_28 = _14->Behaviour;
  # DEBUG Behaviour => Behaviour_28
  # DEBUG BEGIN_STMT
  if (Status_18 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 253671506]:
  # DEBUG BEGIN_STMT
  if (Status_18 != Behaviour_28)
    goto <bb 8>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 8> [local count: 167423194]:
  # DEBUG BEGIN_STMT
  if (Status_18 <= 2)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 83711597]:
  if (Behaviour_28 <= 3)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 125567396]:
  # DEBUG BEGIN_STMT
  _7 = MAX_EXPR <Behaviour_28, Status_18>;

  <bb 11> [local count: 507343012]:
  # Status_16 = PHI <Behaviour_28(6), Status_18(7), 3(9), _7(10)>
  # DEBUG Status => Status_16
  # DEBUG BEGIN_STMT
  if (Status_16 >= MinStatus_20)
    goto <bb 14>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 12> [local count: 986782159]:
  # Status_17 = PHI <Status_18(5), Status_16(11)>
  # DEBUG Status => Status_17
  # DEBUG BEGIN_STMT
  LinkIdx_29 = LinkIdx_21 + 1;
  # DEBUG LinkIdx => LinkIdx_29

  <bb 13> [local count: 1073741824]:
  # Status_18 = PHI <0(4), Status_17(12)>
  # LinkIdx_21 = PHI <0(4), LinkIdx_29(12)>
  # DEBUG LinkIdx => LinkIdx_21
  # DEBUG Status => Status_18
  # DEBUG BEGIN_STMT
  _15 = Dem_IndicatorDesc[_1].Number;
  if (_15 > LinkIdx_21)
    goto <bb 5>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 86959666]:
  # Status_19 = PHI <Status_16(11), Status_18(13)>
  # DEBUG Status => Status_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Status_19;

}



;; Function Dem_SizeOfFFSegment (Dem_SizeOfFFSegment, funcdef_no=71, decl_uid=6735, cgraph_uid=72, symbol_order=82)

Modification phase of node Dem_SizeOfFFSegment/82
Dem_SizeOfFFSegment (const struct Dem_FFSegmentType * FFSegment)
{
  const Dem_SizeFFType Result;
  const Dem_NumDataElementsType LastDataElemIdx;
  unsigned char _1;
  const Dem_DataElementOffsetType * _2;
  unsigned int _3;
  unsigned int _4;
  const Dem_DataElementOffsetType * _5;
  short unsigned int _6;
  const Dem_DataElementIdxType * _7;
  const Dem_DataElementIdxType * _8;
  short unsigned int _9;
  int _10;
  unsigned char _11;
  short unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = FFSegment_14(D)->NumFFDataElements;
  LastDataElemIdx_15 = _1 + 255;
  # DEBUG LastDataElemIdx => LastDataElemIdx_15
  # DEBUG BEGIN_STMT
  _2 = FFSegment_14(D)->DataElementOffset;
  _3 = (unsigned int) LastDataElemIdx_15;
  _4 = _3 * 2;
  _5 = _2 + _4;
  _6 = *_5;
  _7 = FFSegment_14(D)->DataElementIdx;
  _8 = _7 + _4;
  _9 = *_8;
  _10 = (int) _9;
  _11 = Dem_DataElement[_10].Size;
  _12 = (short unsigned int) _11;
  Result_16 = _6 + _12;
  # DEBUG Result => Result_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_16;

}



;; Function Dem_SizeOfFF (Dem_SizeOfFF, funcdef_no=70, decl_uid=6733, cgraph_uid=71, symbol_order=81)

Modification phase of node Dem_SizeOfFF/81
Dem_SizeOfFF (Dem_FFKindType FFKind, const struct Dem_FFClassType * IndividPartFFClass)
{
  const Dem_FFSegIdxType FFSegIdx;
  Dem_NumFFSegsType SegIdx;
  uint8_least FFPartIdx;
  Dem_SizeFFType Result;
  const Dem_FFSegIdxType * _1;
  unsigned int _2;
  unsigned int _3;
  const Dem_FFSegIdxType * _4;
  int _5;
  const struct Dem_FFSegmentType * _6;
  unsigned char _7;
  short unsigned int _19;

  <bb 2> [local count: 118111603]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FFPartClass$0 => IndividPartFFClass_16(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FFPartIdx => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630226]:
  # DEBUG BEGIN_STMT
  _1 = IndividPartFFClass_16(D)->FFSegIdx;
  _2 = (unsigned int) SegIdx_12;
  _3 = _2 * 2;
  _4 = _1 + _3;
  FFSegIdx_18 = *_4;
  # DEBUG FFSegIdx => FFSegIdx_18
  # DEBUG BEGIN_STMT
  if (FFSegIdx_18 != 65535)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 630715949]:
  # DEBUG BEGIN_STMT
  _5 = (int) FFSegIdx_18;
  _6 = &Dem_FFSegment[_5];
  _19 = Dem_SizeOfFFSegment (_6);
  Result_20 = Result_9 + _19;
  # DEBUG Result => Result_20

  <bb 5> [local count: 955630226]:
  # Result_8 = PHI <Result_9(3), Result_20(4)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  SegIdx_21 = SegIdx_12 + 1;
  # DEBUG SegIdx => SegIdx_21

  <bb 6> [local count: 1073741824]:
  # Result_9 = PHI <Result_8(5), Result_10(9)>
  # SegIdx_12 = PHI <SegIdx_21(5), 0(9)>
  # DEBUG SegIdx => SegIdx_12
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  _7 = IndividPartFFClass_16(D)->NumFFSegs;
  if (_7 > SegIdx_12)
    goto <bb 3>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 118111600]:

  <bb 7> [local count: 236223204]:
  # Result_10 = PHI <0(2), Result_9(10)>
  # FFPartIdx_11 = PHI <0(2), 1(10)>
  # DEBUG FFPartIdx => FFPartIdx_11
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT
  if (FFPartIdx_11 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 9> [local count: 118111602]:
  goto <bb 6>; [100.00%]

  <bb 8> [local count: 118111602]:
  # Result_17 = PHI <Result_10(7)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#9 => {CLOBBER}
  # DEBUG FFPartClass$0 => D#9
  return Result_17;

}



;; Function Dem_GetNumFFSegs (Dem_GetNumFFSegs, funcdef_no=72, decl_uid=6738, cgraph_uid=73, symbol_order=83)

Modification phase of node Dem_GetNumFFSegs/83
Dem_GetNumFFSegs (Dem_FFKindType FFKind, const struct Dem_FFClassType * IndividPartFFClass)
{
  uint8_least FFPartIdx;
  Dem_NumFFSegsType NumFFSegs;
  unsigned char _1;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG NumFFSegs => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FFPartClass$0 => IndividPartFFClass_6(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FFPartIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = IndividPartFFClass_6(D)->NumFFSegs;
  NumFFSegs_7 = _1 + NumFFSegs_2;
  # DEBUG NumFFSegs => NumFFSegs_7
  # DEBUG BEGIN_STMT
  # DEBUG FFPartIdx => 1

  <bb 4> [local count: 1073741824]:
  # NumFFSegs_2 = PHI <0(2), NumFFSegs_7(3)>
  # FFPartIdx_3 = PHI <0(2), 1(3)>
  # DEBUG FFPartIdx => FFPartIdx_3
  # DEBUG NumFFSegs => NumFFSegs_2
  # DEBUG BEGIN_STMT
  if (FFPartIdx_3 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # NumFFSegs_4 = PHI <NumFFSegs_2(4)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#10 => {CLOBBER}
  # DEBUG FFPartClass$0 => D#10
  return NumFFSegs_4;

}



;; Function Dem_SizeOfEDSegment (Dem_SizeOfEDSegment, funcdef_no=74, decl_uid=6742, cgraph_uid=75, symbol_order=85)

Modification phase of node Dem_SizeOfEDSegment/85
Dem_SizeOfEDSegment (const struct Dem_EDSegmentType * EDSegment)
{
  Dem_SizeEDType Result;
  const Dem_NumDataElementsType LastDataElemIdx;
  unsigned char _1;
  const Dem_DataElementOffsetType * _2;
  unsigned int _3;
  unsigned int _4;
  const Dem_DataElementOffsetType * _5;
  const Dem_DataElementIdxType * _6;
  const Dem_DataElementIdxType * _7;
  short unsigned int _8;
  int _9;
  unsigned char _10;
  short unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = EDSegment_13(D)->NumEDDataElements;
  LastDataElemIdx_14 = _1 + 255;
  # DEBUG LastDataElemIdx => LastDataElemIdx_14
  # DEBUG BEGIN_STMT
  _2 = EDSegment_13(D)->DataElementOffset;
  _3 = (unsigned int) LastDataElemIdx_14;
  _4 = _3 * 2;
  _5 = _2 + _4;
  Result_15 = *_5;
  # DEBUG Result => Result_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = EDSegment_13(D)->DataElementIdx;
  _7 = _6 + _4;
  _8 = *_7;
  _9 = (int) _8;
  _10 = Dem_DataElement[_9].Size;
  _11 = (short unsigned int) _10;
  Result_16 = _11 + Result_15;
  # DEBUG Result => Result_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_16;

}



;; Function Dem_SizeOfED (Dem_SizeOfED, funcdef_no=73, decl_uid=6740, cgraph_uid=74, symbol_order=84)

Modification phase of node Dem_SizeOfED/84
Dem_SizeOfED (const struct Dem_EDClassType * EDClass)
{
  const Dem_EDSegIdxType LastSegIdx;
  Dem_SizeEDType Result;
  unsigned char _1;
  const Dem_EDStartByteType * _2;
  unsigned int _3;
  unsigned int _4;
  const Dem_EDStartByteType * _5;
  short unsigned int _6;
  const Dem_EDSegIdxType * _7;
  const Dem_EDSegIdxType * _8;
  unsigned char _9;
  int _10;
  const struct Dem_EDSegmentType * _11;
  short unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EDClass_15(D)->NumEDSegs;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  LastSegIdx_16 = _1 + 255;
  # DEBUG LastSegIdx => LastSegIdx_16
  # DEBUG BEGIN_STMT
  _2 = EDClass_15(D)->StartByte;
  _3 = (unsigned int) LastSegIdx_16;
  _4 = _3 * 2;
  _5 = _2 + _4;
  _6 = *_5;
  _7 = EDClass_15(D)->EDSegIdx;
  _8 = _7 + _3;
  _9 = *_8;
  _10 = (int) _9;
  _11 = &Dem_EDSegment[_10];
  _12 = Dem_SizeOfEDSegment (_11);
  Result_17 = _6 + _12;
  # DEBUG Result => Result_17

  <bb 4> [local count: 1073741824]:
  # Result_13 = PHI <0(2), Result_17(3)>
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_13;

}



;; Function Dem_SizeOfIntValArea (Dem_SizeOfIntValArea, funcdef_no=76, decl_uid=6753, cgraph_uid=77, symbol_order=87)

Modification phase of node Dem_SizeOfIntValArea/87
Dem_SizeOfIntValArea (Dem_EventIdType EventId)
{
  const Dem_AgingCyclesType Result;
  uint8 SizeOfIntVal;
  int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG SizeOfIntVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_3(D)
  # DEBUG INLINE_ENTRY Dem_GbiNumAgingCycles
  # DEBUG BEGIN_STMT
  _4 = (int) EventId_3(D);
  _5 = Dem_EventDesc[_4].EvConf2;
  _6 = _5 >> 6;
  _7 = (unsigned char) _6;
  Result_8 = _7 & 127;
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  if (Result_8 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG SizeOfIntVal => 1

  <bb 4> [local count: 1073741824]:
  # SizeOfIntVal_1 = PHI <0(2), 1(3)>
  # DEBUG SizeOfIntVal => SizeOfIntVal_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return SizeOfIntVal_1;

}



;; Function Dem_FFEntryData (Dem_FFEntryData, funcdef_no=40, decl_uid=6675, cgraph_uid=41, symbol_order=51)

Modification phase of node Dem_FFEntryData/51
Dem_FFEntryData (const struct Dem_EventMemoryEntryType * EvMemEntry, const struct Dem_FFClassType * FFClass, Dem_FFIdxType FFIndex)
{
  const Dem_EDClassIdxType Result;
  const uint8 Result;
  Dem_EntryDataType * const Result;
  const Dem_SizeEntryDataType StartPos;
  const struct Dem_EDClassType * const EDClass;
  const Dem_EventIdType EventId;
  int _1;
  short unsigned int _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  int _11;
  Dem_EntryDataType * _12;
  sizetype _13;
  unsigned char _19;
  long unsigned int _20;
  long unsigned int _22;
  int _26;
  long unsigned int _27;
  long unsigned int _28;
  unsigned char _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EventId_16 = EvMemEntry_15(D)->EventId;
  # DEBUG EventId => EventId_16
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_16
  # DEBUG INLINE_ENTRY Dem_GbiEDClassIdx
  # DEBUG BEGIN_STMT
  _26 = (int) EventId_16;
  _27 = Dem_EventDesc[_26].EvConf2;
  _28 = _27 >> 3;
  _29 = (unsigned char) _28;
  Result_30 = _29 & 1;
  # DEBUG Result => Result_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  _1 = (int) Result_30;
  EDClass_18 = &Dem_EDClass[_1];
  # DEBUG EDClass => EDClass_18
  # DEBUG BEGIN_STMT
  _2 = EvMemEntry_15(D)->EntryDataPos;
  _3 = Dem_SizeOfIntValArea (EventId_16);
  _4 = (short unsigned int) _3;
  _5 = _2 + _4;
  _6 = Dem_SizeOfED (EDClass_18);
  _7 = _5 + _6;
  _8 = Dem_SizeOfFF (2, FFClass_21(D));
  _9 = (short unsigned int) FFIndex_23(D);
  _10 = _8 * _9;
  StartPos_24 = _7 + _10;
  # DEBUG StartPos => StartPos_24
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_16
  # DEBUG INLINE_ENTRY Dem_GbiDTCOriginIdx
  # DEBUG BEGIN_STMT
  _22 = Dem_EventDesc[_26].EvConf1;
  _20 = _22 >> 24;
  _19 = (unsigned char) _20;
  Result_17 = _19 & 3;
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG OriginIdx => Result_17
  # DEBUG BEGIN_STMT
  _11 = (int) Result_17;
  _12 = Dem_EntryData[_11];
  _13 = (sizetype) StartPos_24;
  Result_25 = _12 + _13;
  # DEBUG Result => Result_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_25;

}



;; Function Dem_EDEntryData (Dem_EDEntryData, funcdef_no=43, decl_uid=6671, cgraph_uid=44, symbol_order=54)

Modification phase of node Dem_EDEntryData/54
Dem_EDEntryData (const struct Dem_EventMemoryEntryType * EvMemEntry)
{
  Dem_EntryDataType * EDEntryData;
  short unsigned int _1;
  unsigned char _2;
  sizetype _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EDEntryData_6 = Dem_IntValEntryData (EvMemEntry_5(D));
  # DEBUG EDEntryData => EDEntryData_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EvMemEntry_5(D)->EventId;
  _2 = Dem_SizeOfIntValArea (_1);
  _3 = (sizetype) _2;
  EDEntryData_7 = EDEntryData_6 + _3;
  # DEBUG EDEntryData => EDEntryData_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return EDEntryData_7;

}



;; Function Dem_AssembleExtendedDataSeg (Dem_AssembleExtendedDataSeg, funcdef_no=75, decl_uid=6748, cgraph_uid=76, symbol_order=86)

Modification phase of node Dem_AssembleExtendedDataSeg/86
Dem_AssembleExtendedDataSeg (Dem_EventIdType EventId, const struct Dem_EDSegmentType * EDSegment, Dem_EDStartByteType EDStartByte, uint8 * DestBuffer, const struct Dem_EventMemoryEntryType * EvMemEntry)
{
  const Dem_SizeEntryDataType DataElementSize;
  const Dem_DataElementOffsetType EDDataElemOffset;
  const Dem_DataElementIdxType DataElementIdx;
  Dem_SizeEntryDataType EDSegSize;
  Dem_NumDataElementsType DataElementIndex;
  const Dem_DataElementIdxType * _1;
  unsigned int _2;
  unsigned int _3;
  const Dem_DataElementIdxType * _4;
  const Dem_DataElementOffsetType * _5;
  const Dem_DataElementOffsetType * _6;
  int _7;
  unsigned char _8;
  Dem_EntryDataType * _9;
  sizetype _10;
  sizetype _11;
  uint8 * _12;
  sizetype _13;
  const Dem_EntryDataType * _14;
  long unsigned int _15;
  unsigned char _16;
  sizetype _22;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EDSegSize => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DataElementIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = EDSegment_24(D)->DataElementIdx;
  _2 = (unsigned int) DataElementIndex_17;
  _3 = _2 * 2;
  _4 = _1 + _3;
  DataElementIdx_26 = *_4;
  # DEBUG DataElementIdx => DataElementIdx_26
  # DEBUG BEGIN_STMT
  _5 = EDSegment_24(D)->DataElementOffset;
  _6 = _5 + _3;
  EDDataElemOffset_27 = *_6;
  # DEBUG EDDataElemOffset => EDDataElemOffset_27
  # DEBUG BEGIN_STMT
  if (DataElementIdx_26 <= 1)
    goto <bb 4>; [25.50%]
  else
    goto <bb 5>; [74.50%]

  <bb 4> [local count: 243685707]:
  # DEBUG BEGIN_STMT
  _7 = (int) DataElementIdx_26;
  _8 = Dem_DataElement[_7].Size;
  DataElementSize_28 = (const Dem_SizeEntryDataType) _8;
  # DEBUG DataElementSize => DataElementSize_28
  # DEBUG BEGIN_STMT
  _9 = Dem_EDEntryData (EvMemEntry_29(D));
  _10 = (sizetype) EDStartByte_30(D);
  # DEBUG EDEntryData => _9 + _10
  # DEBUG BEGIN_STMT
  _11 = (sizetype) EDSegSize_19;
  _12 = DestBuffer_31(D) + _11;
  _13 = (sizetype) EDDataElemOffset_27;
  _22 = _10 + _13;
  _14 = _9 + _22;
  _15 = (long unsigned int) _8;
  TS_MemCpy32 (_12, _14, _15);
  # DEBUG BEGIN_STMT
  EDSegSize_33 = EDSegSize_19 + DataElementSize_28;
  # DEBUG EDSegSize => EDSegSize_33

  <bb 5> [local count: 955630223]:
  # EDSegSize_18 = PHI <EDSegSize_19(3), EDSegSize_33(4)>
  # DEBUG EDSegSize => EDSegSize_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DataElementIndex_34 = DataElementIndex_17 + 1;
  # DEBUG DataElementIndex => DataElementIndex_34

  <bb 6> [local count: 1073741824]:
  # DataElementIndex_17 = PHI <0(2), DataElementIndex_34(5)>
  # EDSegSize_19 = PHI <0(2), EDSegSize_18(5)>
  # DEBUG EDSegSize => EDSegSize_19
  # DEBUG DataElementIndex => DataElementIndex_17
  # DEBUG BEGIN_STMT
  _16 = EDSegment_24(D)->NumEDDataElements;
  if (_16 > DataElementIndex_17)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # EDSegSize_25 = PHI <EDSegSize_19(6)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return EDSegSize_25;

}



;; Function Dem_EvMemEntrySize (Dem_EvMemEntrySize, funcdef_no=58, decl_uid=6667, cgraph_uid=59, symbol_order=69)

Modification phase of node Dem_EvMemEntrySize/69
Dem_EvMemEntrySize (Dem_EventIdType EventId, boolean MaximalSize)
{
  const Dem_EDClassIdxType Result;
  const Dem_FFClassIdxType Result;
  Dem_SizeEntryDataType SizeOfFF;
  const struct Dem_FFClassType * const FFClass;
  const struct Dem_EDClassType * const EDClass;
  Dem_SizeEntryDataType SizeOfEntryData;
  int _1;
  int _2;
  short unsigned int _3;
  int _4;
  unsigned char _5;
  int _6;
  short unsigned int _7;
  int _10;
  short unsigned int _14;
  unsigned char _15;
  long unsigned int _16;
  short unsigned int _17;
  int _20;
  long unsigned int _22;
  long unsigned int _23;
  unsigned char _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG SizeOfEntryData => 0
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_9(D)
  # DEBUG INLINE_ENTRY Dem_GbiEDClassIdx
  # DEBUG BEGIN_STMT
  _10 = (int) EventId_9(D);
  _22 = Dem_EventDesc[_10].EvConf2;
  _23 = _22 >> 3;
  _24 = (unsigned char) _23;
  Result_25 = _24 & 1;
  # DEBUG Result => Result_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  _1 = (int) Result_25;
  EDClass_11 = &Dem_EDClass[_1];
  # DEBUG EDClass => EDClass_11
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_9(D)
  # DEBUG INLINE_ENTRY Dem_GbiFFClassIdx
  # DEBUG BEGIN_STMT
  _16 = _22 >> 1;
  _14 = (short unsigned int) _16;
  Result_12 = _14 & 1;
  # DEBUG Result => Result_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  _2 = (int) Result_12;
  FFClass_13 = &Dem_FFClass[_2];
  # DEBUG FFClass => FFClass_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _15 = Dem_SizeOfIntValArea (EventId_9(D));
  _3 = (short unsigned int) _15;
  # DEBUG SizeOfEntryData => _3
  # DEBUG BEGIN_STMT
  _17 = Dem_SizeOfED (EDClass_11);
  SizeOfEntryData_18 = _3 + _17;
  # DEBUG SizeOfEntryData => SizeOfEntryData_18
  # DEBUG BEGIN_STMT
  SizeOfFF_19 = Dem_SizeOfFF (2, FFClass_13);
  # DEBUG SizeOfFF => SizeOfFF_19
  # DEBUG BEGIN_STMT
  _4 = (int) SizeOfFF_19;
  _5 = Dem_GbiMaxNumFFRecs (EventId_9(D));
  _6 = (int) _5;
  _20 = _4 * _6;
  _7 = (short unsigned int) _20;
  SizeOfEntryData_21 = _7 + SizeOfEntryData_18;
  # DEBUG SizeOfEntryData => SizeOfEntryData_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return SizeOfEntryData_21;

}



;; Function Dem_ShiftData (Dem_ShiftData, funcdef_no=77, decl_uid=6892, cgraph_uid=78, symbol_order=88)

Modification phase of node Dem_ShiftData/88
Dem_ShiftData (Dem_EntryDataType * EntryData, Dem_SizeEntryDataType Offset, Dem_SizeEntryDataType Width)
{
  Dem_SizeEntryDataType i;
  int _1;
  int _2;
  int _3;
  sizetype _4;
  Dem_EntryDataType * _5;
  sizetype _6;
  Dem_EntryDataType * _7;
  unsigned char _8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = (int) i_9;
  _2 = (int) Offset_13(D);
  _3 = _1 + _2;
  _4 = (sizetype) _3;
  _5 = EntryData_14(D) + _4;
  _6 = (sizetype) i_9;
  _7 = EntryData_14(D) + _6;
  _8 = *_5;
  *_7 = _8;
  # DEBUG BEGIN_STMT
  i_16 = i_9 + 1;
  # DEBUG i => i_16

  <bb 4> [local count: 1073741824]:
  # i_9 = PHI <0(2), i_16(3)>
  # DEBUG i => i_9
  # DEBUG BEGIN_STMT
  if (i_9 < Width_12(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ClearEventEntry (Dem_ClearEventEntry, funcdef_no=57, decl_uid=6664, cgraph_uid=58, symbol_order=68)

Modification phase of node Dem_ClearEventEntry/68
Dem_ClearEventEntry (struct Dem_EventMemoryEntryType * EvMemEntry)
{
  const uint8 Result;
  const Dem_SizeEntryDataType Width;
  Dem_SizeEvMemEntryType Entry;
  const Dem_SizeEntryDataType EntryDataSize;
  short unsigned int _1;
  int _2;
  Dem_SizeEntryDataType * _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  Dem_EntryDataType * _7;
  struct Dem_EventMemoryEntryType * _8;
  unsigned int _9;
  unsigned int _10;
  struct Dem_EventMemoryEntryType * _11;
  short unsigned int _12;
  short unsigned int _13;
  short unsigned int _14;
  unsigned char _15;
  short unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  long unsigned int _25;
  long unsigned int _27;
  int _29;
  unsigned char _36;

  <bb 2> [local count: 357913939]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EvMemEntry_24(D)->EventId;
  EntryDataSize_26 = Dem_EvMemEntrySize (_1, 1);
  # DEBUG EntryDataSize => EntryDataSize_26
  # DEBUG BEGIN_STMT
  if (EntryDataSize_26 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => _1
  # DEBUG INLINE_ENTRY Dem_GbiDTCOriginIdx
  # DEBUG BEGIN_STMT
  _29 = (int) _1;
  _27 = Dem_EventDesc[_29].EvConf1;
  _25 = _27 >> 24;
  _36 = (unsigned char) _25;
  Result_37 = _36 & 3;
  # DEBUG Result => Result_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG OriginIdx => Result_37
  # DEBUG BEGIN_STMT
  _2 = (int) Result_37;
  _3 = Dem_EntryDataFreePos[_2];
  _4 = *_3;
  _5 = EvMemEntry_24(D)->EntryDataPos;
  _6 = _4 - _5;
  Width_28 = _6 - EntryDataSize_26;
  # DEBUG Width => Width_28
  # DEBUG BEGIN_STMT
  _7 = Dem_IntValEntryData (EvMemEntry_24(D));
  Dem_ShiftData (_7, EntryDataSize_26, Width_28);
  # DEBUG BEGIN_STMT
  # DEBUG Entry => 0
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _8 = Dem_EventMem[_2];
  _9 = (unsigned int) Entry_19;
  _10 = _9 * 16;
  _11 = _8 + _10;
  _12 = _11->EntryDataPos;
  _13 = EvMemEntry_24(D)->EntryDataPos;
  if (_12 > _13)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  _14 = _12 - EntryDataSize_26;
  _11->EntryDataPos = _14;

  <bb 6> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  Entry_33 = Entry_19 + 1;
  # DEBUG Entry => Entry_33

  <bb 7> [local count: 1073741824]:
  # Entry_19 = PHI <0(3), Entry_33(6)>
  # DEBUG Entry => Entry_19
  # DEBUG BEGIN_STMT
  _15 = Dem_SizeEventMem[_2];
  if (_15 > Entry_19)
    goto <bb 4>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _16 = *_3;
  _17 = _16 - EntryDataSize_26;
  *_3 = _17;

  <bb 9> [local count: 357913940]:
  # DEBUG BEGIN_STMT
  _18 = EvMemEntry_24(D)->EventId;
  Dem_SetEvEntryExists (_18, 0);
  # DEBUG BEGIN_STMT
  EvMemEntry_24(D)->EventId = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_TriggerNvmWriteEventStatus (Dem_TriggerNvmWriteEventStatus, funcdef_no=79, decl_uid=6786, cgraph_uid=80, symbol_order=90)

Modification phase of node Dem_TriggerNvmWriteEventStatus/90
Dem_TriggerNvmWriteEventStatus ()
{
  Std_ReturnType WriteBlockResult;
  Std_ReturnType NvMResult;
  NvM_RequestResultType NvMErrorStatus;
  unsigned char NvMErrorStatus.34_1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  NvMErrorStatus = 2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG WriteBlockResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvMResult_9 = NvM_ASR40_GetErrorStatus (4, &NvMErrorStatus);
  # DEBUG NvMResult => NvMResult_9
  # DEBUG BEGIN_STMT
  if (NvMResult_9 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 3>; [67.00%]

  <bb 3> [local count: 719407022]:
  NvMErrorStatus.34_1 = NvMErrorStatus;
  if (NvMErrorStatus.34_1 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 598933190]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 474808634]:
  # DEBUG BEGIN_STMT
  _2 = Dem_ClearDtcAsyncStatus.RunState;
  if (_2 != 2)
    goto <bb 7>; [48.88%]
  else
    goto <bb 6>; [51.12%]

  <bb 6> [local count: 242722174]:
  _3 = Dem_ClearDtcAsyncStatus.EventStatusWrite;
  if (_3 != 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 7> [local count: 394710317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 255, 64);
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 80098317]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventStatusWrite = 1;
  # DEBUG BEGIN_STMT
  WriteBlockResult_12 = NvM_ASR40_WriteBlock (4, 0B);
  # DEBUG WriteBlockResult => WriteBlockResult_12
  # DEBUG BEGIN_STMT
  if (WriteBlockResult_12 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 26432445]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventStatusWrite = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.OperationResult = 6;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 3;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 10> [local count: 1073741824]:
  # WriteBlockResult_4 = PHI <1(4), 1(7), WriteBlockResult_12(8), WriteBlockResult_12(9)>
  # DEBUG WriteBlockResult => WriteBlockResult_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvMErrorStatus ={v} {CLOBBER};
  return WriteBlockResult_4;

}



;; Function Dem_CheckForTriggerNvmWriteGateEntry (Dem_CheckForTriggerNvmWriteGateEntry, funcdef_no=80, decl_uid=6763, cgraph_uid=81, symbol_order=91)

Modification phase of node Dem_CheckForTriggerNvmWriteGateEntry/91
Dem_CheckForTriggerNvmWriteGateEntry ()
{
  const Dem_SizeEvMemEntryType EntryIdx;
  const Dem_SizeEvMemEntryType EntryIdx;
  Std_ReturnType ResultFromNvM;
  const NvM_BlockIdType NvDataBlockId;
  Std_ReturnType WriteBlockResult[4];
  boolean GateIsWaiting[4];
  boolean NvMErrorHandlingNeeded;
  uint8 OriginIdx;
  int _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  struct Dem_EventMemoryEntryType * _11;
  unsigned int _12;
  unsigned int _13;
  struct Dem_EventMemoryEntryType * _14;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NvMErrorHandlingNeeded => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG OriginIdx => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = (int) OriginIdx_15;
  _2 = Dem_NvMGateEntryInfo[_1].Status;
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 292057776]:
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryInfo[_1].Status = 2;
  # DEBUG BEGIN_STMT
  GateIsWaiting[_1] = 1;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 566935683]:
  # DEBUG BEGIN_STMT
  GateIsWaiting[_1] = 0;

  <bb 6> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  OriginIdx_57 = OriginIdx_15 + 1;
  # DEBUG OriginIdx => OriginIdx_57

  <bb 7> [local count: 1073741824]:
  # OriginIdx_15 = PHI <0(2), OriginIdx_57(6)>
  # DEBUG OriginIdx => OriginIdx_15
  # DEBUG BEGIN_STMT
  if (OriginIdx_15 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 8>; [20.00%]

  <bb 8> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG OriginIdx => 0
  goto <bb 17>; [100.00%]

  <bb 9> [local count: 858993454]:
  # DEBUG BEGIN_STMT
  _3 = (int) OriginIdx_16;
  NvDataBlockId_45 = Dem_NvDataBlockId[_3];
  # DEBUG NvDataBlockId => NvDataBlockId_45
  # DEBUG BEGIN_STMT
  _4 = GateIsWaiting[_3];
  if (_4 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 10> [local count: 173860275]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EntryIdx_47 = Dem_NvMGateEntryInfo[_3].PendingEntryIdx;
  # DEBUG EntryIdx => EntryIdx_47
  # DEBUG BEGIN_STMT
  ResultFromNvM_49 = NvM_ASR40_SetDataIndex (NvDataBlockId_45, EntryIdx_47);
  # DEBUG ResultFromNvM => ResultFromNvM_49
  # DEBUG BEGIN_STMT
  if (ResultFromNvM_49 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 57373891]:
  # DEBUG BEGIN_STMT
  ResultFromNvM_51 = NvM_ASR40_WriteBlock (NvDataBlockId_45, 0B);
  # DEBUG ResultFromNvM => ResultFromNvM_51

  <bb 12> [local count: 173860275]:
  # ResultFromNvM_21 = PHI <ResultFromNvM_49(10), ResultFromNvM_51(11)>
  # DEBUG ResultFromNvM => ResultFromNvM_21
  # DEBUG BEGIN_STMT
  if (ResultFromNvM_21 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 86930138]:
  # DEBUG BEGIN_STMT
  # DEBUG NvMErrorHandlingNeeded => 1

  <bb 14> [local count: 173860275]:
  # NvMErrorHandlingNeeded_18 = PHI <NvMErrorHandlingNeeded_20(12), 1(13)>
  # DEBUG NvMErrorHandlingNeeded => NvMErrorHandlingNeeded_18
  # DEBUG BEGIN_STMT
  WriteBlockResult[_3] = ResultFromNvM_21;
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 685133179]:
  # DEBUG BEGIN_STMT
  WriteBlockResult[_3] = 1;

  <bb 16> [local count: 858993454]:
  # NvMErrorHandlingNeeded_19 = PHI <NvMErrorHandlingNeeded_18(14), NvMErrorHandlingNeeded_20(15)>
  # DEBUG NvMErrorHandlingNeeded => NvMErrorHandlingNeeded_19
  # DEBUG BEGIN_STMT
  OriginIdx_53 = OriginIdx_16 + 1;
  # DEBUG OriginIdx => OriginIdx_53

  <bb 17> [local count: 1073741818]:
  # OriginIdx_16 = PHI <0(8), OriginIdx_53(16)>
  # NvMErrorHandlingNeeded_20 = PHI <0(8), NvMErrorHandlingNeeded_19(16)>
  # DEBUG NvMErrorHandlingNeeded => NvMErrorHandlingNeeded_20
  # DEBUG OriginIdx => OriginIdx_16
  # DEBUG BEGIN_STMT
  if (OriginIdx_16 != 4)
    goto <bb 9>; [80.00%]
  else
    goto <bb 18>; [20.00%]

  <bb 18> [local count: 214748363]:
  # NvMErrorHandlingNeeded_7 = PHI <NvMErrorHandlingNeeded_20(17)>
  # DEBUG BEGIN_STMT
  if (NvMErrorHandlingNeeded_7 == 1)
    goto <bb 19>; [20.24%]
  else
    goto <bb 29>; [79.76%]

  <bb 19> [local count: 43465069]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG OriginIdx => 0
  goto <bb 27>; [100.00%]

  <bb 20> [local count: 173860276]:
  # DEBUG BEGIN_STMT
  _5 = (int) OriginIdx_17;
  _6 = GateIsWaiting[_5];
  if (_6 == 1)
    goto <bb 21>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 21> [local count: 59112494]:
  _8 = WriteBlockResult[_5];
  if (_8 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 26>; [50.00%]

  <bb 22> [local count: 29556247]:
  # DEBUG BEGIN_STMT
  EntryIdx_36 = Dem_NvMGateEntryInfo[_5].PendingEntryIdx;
  # DEBUG EntryIdx => EntryIdx_36
  # DEBUG BEGIN_STMT
  _9 = Dem_ClearDtcAsyncStatus.RunState;
  if (_9 == 2)
    goto <bb 23>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 23> [local count: 10049124]:
  _10 = Dem_ClearDtcAsyncStatus.OriginIdx;
  if (_10 == OriginIdx_17)
    goto <bb 24>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 24> [local count: 3416702]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.OperationResult = 6;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventMemWrite = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 3;

  <bb 25> [local count: 29556247]:
  # DEBUG BEGIN_STMT
  _11 = Dem_EventMem[_5];
  _12 = (unsigned int) EntryIdx_36;
  _13 = _12 * 16;
  _14 = _11 + _13;
  _14->EntryStatus = 1;
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryInfo[_5].Status = 0;

  <bb 26> [local count: 173860276]:
  # DEBUG BEGIN_STMT
  OriginIdx_42 = OriginIdx_17 + 1;
  # DEBUG OriginIdx => OriginIdx_42

  <bb 27> [local count: 217325345]:
  # OriginIdx_17 = PHI <0(19), OriginIdx_42(26)>
  # DEBUG OriginIdx => OriginIdx_17
  # DEBUG BEGIN_STMT
  if (OriginIdx_17 != 4)
    goto <bb 20>; [80.00%]
  else
    goto <bb 28>; [20.00%]

  <bb 28> [local count: 43465069]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 29> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  GateIsWaiting ={v} {CLOBBER};
  WriteBlockResult ={v} {CLOBBER};
  return;

}



;; Function Dem_InternalSetEventStatus (Dem_InternalSetEventStatus, funcdef_no=47, decl_uid=6695, cgraph_uid=48, symbol_order=58)

Modification phase of node Dem_InternalSetEventStatus/58
Dem_InternalSetEventStatus (struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus)
{
  const Dem_EventKindType Result;
  const Dem_EventIdType EventId;
  Std_ReturnType Result;
  unsigned char _1;
  unsigned char _2;
  unsigned char EventStatus.10_3;
  unsigned char _4;
  unsigned char EventStatus.11_5;
  unsigned char EventStatus.12_6;
  long unsigned int _13;
  int _17;
  Std_ReturnType _21;
  long unsigned int _23;
  unsigned char _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Result = 1;
  # DEBUG BEGIN_STMT
  EventId_12 = EventInfo.EventId;
  # DEBUG EventId => EventId_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dem_CheckProcessingConditions (EventId_12);
  if (_1 == 1)
    goto <bb 10>; [51.12%]
  else
    goto <bb 3>; [48.88%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  _2 = Dem_DebounceEvent (EventId_12, &EventStatus, &Result);
  if (_2 == 0)
    goto <bb 10>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 4> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  EventStatus.10_3 = EventStatus;
  _4 = Dem_UpdateFailureCounterFirstFail (EventId_12, EventStatus.10_3);
  if (_4 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 58887609]:
  # DEBUG BEGIN_STMT
  Dem_DoProcessFaultConfirmation = 1;

  <bb 6> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_12
  # DEBUG INLINE_ENTRY Dem_GbiEventKind
  # DEBUG BEGIN_STMT
  _17 = (int) EventId_12;
  _13 = Dem_EventDesc[_17].EvConf1;
  _23 = _13 >> 28;
  _24 = (unsigned char) _23;
  Result_25 = _24 & 1;
  # DEBUG Result => Result_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  if (Result_25 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 86599426]:
  # DEBUG BEGIN_STMT
  EventStatus.11_5 = EventStatus;
  Dem_InternalSetSwcEventStatus (EventInfo, EventStatus.11_5, &Result);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 86599426]:
  # DEBUG BEGIN_STMT
  EventStatus.12_6 = EventStatus;
  Dem_InternalSetBswEventStatus (EventInfo, EventStatus.12_6, &Result);

  <bb 9> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  Dem_CheckForTriggerNvmWriteGateEntry ();

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _21 = Result;
  Result ={v} {CLOBBER};
  return _21;

}



;; Function Dem_InternalProcessEventReport (Dem_InternalProcessEventReport, funcdef_no=48, decl_uid=6699, cgraph_uid=49, symbol_order=59)

Modification phase of node Dem_InternalProcessEventReport/59
Dem_InternalProcessEventReport (Dem_EventIdType EventId, Dem_EventStatusType EventStatus, uint8 FunctionId)
{
  struct Dem_EventInfoType EventInfo;
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventInfo.EventId = EventId_4(D);
  # DEBUG BEGIN_STMT
  switch (FunctionId_6(D)) <default: <L6> [33.33%], case 1: <L0> [33.33%], case 2: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  Result_10 = Dem_InternalSetEventStatus (EventInfo, EventStatus_7(D));
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  Dem_ReportErrorStatusPreInit (EventInfo, EventStatus_7(D));
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
  # Result_1 = PHI <Result_10(3), 0(4), 1(2)>
<L6>:
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventInfo ={v} {CLOBBER};
  return Result_1;

}



;; Function Dem_StoreImmediately (Dem_StoreImmediately, funcdef_no=82, decl_uid=6761, cgraph_uid=83, symbol_order=93)

Modification phase of node Dem_StoreImmediately/93
Dem_StoreImmediately (uint8 OriginIdx, Dem_SizeEvMemEntryType EntryIdx)
{
  const Dem_FFClassIdxType Result;
  const struct Dem_FFClassType * const FFClass;
  Dem_FFIdxType NumFF;
  Dem_FFIdxType MaxNumFF;
  Dem_SizeEntryDataType SizeUsedEntryData;
  const Dem_EventIdType EvId;
  struct Dem_EventMemoryEntryType * const EvMemEntry;
  struct Dem_GateEntryBaseType * const GateEntryBase;
  const Dem_SizeEntryDataType SizeGateEntryData[4];
  int _1;
  struct Dem_EventMemoryEntryType * _2;
  unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  int _6;
  short unsigned int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned int _10;
  unsigned int _11;
  unsigned char _12;
  unsigned char _13;
  int _14;
  short unsigned int _15;
  Dem_EntryDataType[35] * _16;
  int _17;
  int _18;
  int _19;
  short unsigned int _20;
  int _21;
  short unsigned int _22;
  Dem_GateEntryDataVoidType * _23;
  Dem_EntryDataType * _24;
  short unsigned int _25;
  sizetype _26;
  Dem_EntryDataType * _27;
  long unsigned int _28;
  Dem_GateEntryDataVoidType * _29;
  sizetype _30;
  Dem_EntryDataType * _31;
  short unsigned int _32;
  short unsigned int _52;
  long unsigned int _58;
  long unsigned int _60;
  int _63;
  int _64;
  short unsigned int _72;

  <bb 2> [local count: 168730857]:
  # DEBUG BEGIN_STMT
  MEM[(Dem_SizeEntryDataType[4] *)&SizeGateEntryData] = 10;
  MEM[(Dem_SizeEntryDataType[4] *)&SizeGateEntryData + 2B] = 1;
  MEM[(Dem_SizeEntryDataType[4] *)&SizeGateEntryData + 4B] = 1;
  MEM[(Dem_SizeEntryDataType[4] *)&SizeGateEntryData + 6B] = 10;
  # DEBUG BEGIN_STMT
  _1 = (int) OriginIdx_40(D);
  GateEntryBase_41 = Dem_NvGateEntryData[_1];
  # DEBUG GateEntryBase => GateEntryBase_41
  # DEBUG BEGIN_STMT
  _2 = Dem_EventMem[_1];
  _3 = (unsigned int) EntryIdx_42(D);
  _4 = _3 * 16;
  EvMemEntry_43 = _2 + _4;
  # DEBUG EvMemEntry => EvMemEntry_43
  # DEBUG BEGIN_STMT
  # DEBUG GateOBDFFEntry => &Dem_NvGateEntryPrimaryData.OBDFFEntry
  # DEBUG BEGIN_STMT
  EvId_44 = EvMemEntry_43->EventId;
  # DEBUG EvId => EvId_44
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  GateEntryBase_41->EntryBase.EventId = EvId_44;
  # DEBUG BEGIN_STMT
  if (EvId_44 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 55681183]:
  # DEBUG BEGIN_STMT
  MaxNumFF_50 = Dem_GbiMaxNumFFRecs (EvId_44);
  # DEBUG MaxNumFF => MaxNumFF_50
  # DEBUG BEGIN_STMT
  _5 = EvMemEntry_43->OccCtr;
  NumFF_51 = MIN_EXPR <_5, MaxNumFF_50>;
  # DEBUG NumFF => NumFF_51
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EvId_44
  # DEBUG INLINE_ENTRY Dem_GbiFFClassIdx
  # DEBUG BEGIN_STMT
  _63 = (int) EvId_44;
  _60 = Dem_EventDesc[_63].EvConf2;
  _58 = _60 >> 1;
  _52 = (short unsigned int) _58;
  Result_49 = _52 & 1;
  # DEBUG Result => Result_49
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  _6 = (int) Result_49;
  FFClass_53 = &Dem_FFClass[_6];
  # DEBUG FFClass => FFClass_53
  # DEBUG BEGIN_STMT
  GateEntryBase_41->EntryBase.OccCtr = _5;
  # DEBUG BEGIN_STMT
  _7 = EvMemEntry_43->OccOrder;
  GateEntryBase_41->EntryBase.OccOrder = _7;
  # DEBUG BEGIN_STMT
  _8 = EvMemEntry_43->EventFailureCycleCounter;
  GateEntryBase_41->EntryBase.EventFailureCycleCounter = _8;
  # DEBUG BEGIN_STMT
  _9 = Dem_NvData.DTCStatusMask[_63];
  _10 = (unsigned int) _9;
  _11 = _10 >> 3;
  _12 = (unsigned char) _11;
  _13 = _12 & 1;
  GateEntryBase_41->EntryBase.CDTCFlag = _13;
  # DEBUG BEGIN_STMT
  SizeUsedEntryData_59 = Dem_EvMemEntrySize (EvId_44, 0);
  # DEBUG SizeUsedEntryData => SizeUsedEntryData_59
  # DEBUG BEGIN_STMT
  if (OriginIdx_40(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 27840591]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EvId_44
  # DEBUG INLINE_ENTRY Dem_GbiDTCKind
  # DEBUG BEGIN_STMT
  # DEBUG DTCKind => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _72 = Dem_OBDConfig[_63].Dem_ObdDTC;
  if (_72 != 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 5> [local count: 9744207]:
  # DEBUG BEGIN_STMT
  # DEBUG DTCKind => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG DTCKind => NULL
  # DEBUG BEGIN_STMT
  _14 = (int) EntryIdx_42(D);
  _15 = Dem_EntryOBDFF[_14].OBDOccOrder;
  Dem_NvGateEntryPrimaryData.OBDFFEntry.OBDFF.OBDOccOrder = _15;
  # DEBUG BEGIN_STMT
  _16 = &Dem_EntryOBDFF[_14].OBDFFData;
  TS_MemCpy32 (&MEM[(void *)&Dem_NvGateEntryPrimaryData + 20B], _16, 35);

  <bb 6> [local count: 55681183]:
  # DEBUG EventId => NULL
  # DEBUG DTCKind => NULL
  # DEBUG BEGIN_STMT
  _17 = (int) MaxNumFF_50;
  _18 = (int) NumFF_51;
  _19 = _17 - _18;
  _20 = Dem_SizeOfFF (2, FFClass_53);
  _21 = (int) _20;
  _64 = _19 * _21;
  _22 = (short unsigned int) _64;
  SizeUsedEntryData_65 = SizeUsedEntryData_59 - _22;
  # DEBUG SizeUsedEntryData => SizeUsedEntryData_65
  # DEBUG BEGIN_STMT
  _23 = Dem_GateEntryData[_1];
  if (_23 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 7> [local count: 38976828]:
  # DEBUG BEGIN_STMT
  if (SizeUsedEntryData_65 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 8> [local count: 12862353]:
  # DEBUG BEGIN_STMT
  _24 = Dem_EntryData[_1];
  _25 = EvMemEntry_43->EntryDataPos;
  _26 = (sizetype) _25;
  _27 = _24 + _26;
  _28 = (long unsigned int) SizeUsedEntryData_65;
  TS_MemCpy32 (_23, _27, _28);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 113049674]:
  # DEBUG BEGIN_STMT
  GateEntryBase_41->EntryBase.OccCtr = 0;
  # DEBUG BEGIN_STMT
  GateEntryBase_41->EntryBase.OccOrder = 0;
  # DEBUG BEGIN_STMT
  GateEntryBase_41->EntryBase.EventFailureCycleCounter = 0;
  # DEBUG BEGIN_STMT
  # DEBUG SizeUsedEntryData => 0

  <bb 10> [local count: 168730857]:
  # SizeUsedEntryData_33 = PHI <SizeUsedEntryData_65(7), 0(9), SizeUsedEntryData_65(6), SizeUsedEntryData_65(8)>
  # DEBUG SizeUsedEntryData => SizeUsedEntryData_33
  # DEBUG BEGIN_STMT
  _29 = Dem_GateEntryData[_1];
  if (_29 != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 13>; [30.00%]

  <bb 14> [local count: 118111600]:
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _30 = (sizetype) SizeUsedEntryData_34;
  _31 = _29 + _30;
  *_31 = 0;
  # DEBUG BEGIN_STMT
  SizeUsedEntryData_68 = SizeUsedEntryData_34 + 1;
  # DEBUG SizeUsedEntryData => SizeUsedEntryData_68

  <bb 12> [local count: 1073741824]:
  # SizeUsedEntryData_34 = PHI <SizeUsedEntryData_68(11), SizeUsedEntryData_33(14)>
  # DEBUG SizeUsedEntryData => SizeUsedEntryData_34
  # DEBUG BEGIN_STMT
  _32 = SizeGateEntryData[_1];
  if (_32 > SizeUsedEntryData_34)
    goto <bb 11>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 168730858]:
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryInfo[_1].PendingEntryIdx = EntryIdx_42(D);
  # DEBUG BEGIN_STMT
  EvMemEntry_43->EntryStatus = 0;
  # DEBUG BEGIN_STMT
  SizeGateEntryData ={v} {CLOBBER};
  return;

}



;; Function Dem_StoreImmediatelyNext (Dem_StoreImmediatelyNext, funcdef_no=81, decl_uid=6967, cgraph_uid=82, symbol_order=92)

Modification phase of node Dem_StoreImmediatelyNext/92
Adjusting mask for param 0 to 0x3
Setting value range of param 0 [0, 3]
Dem_StoreImmediatelyNext (uint8 OriginIdx)
{
  Dem_OccOrderType MinOccOrder;
  boolean ClearedEntriesFound;
  Dem_SizeEvMemEntryType FoundEntryIdx;
  Dem_SizeEvMemEntryType EntryIdx;
  struct Dem_EventMemoryEntryType * const EvMemEntry;
  const Dem_SizeEvMemEntryType SizeEventMem;
  boolean PerformStoreImmediately;
  <unnamed type> Dem_InitializationState.25_1;
  unsigned int _2;
  int _3;
  unsigned int _4;
  unsigned int _5;
  struct Dem_EventMemoryEntryType * _6;
  <unnamed type> _7;
  short unsigned int _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  int _12;

  <bb 2> [local count: 969766867]:
  # DEBUG BEGIN_STMT
  # DEBUG PerformStoreImmediately => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.25_1 = Dem_InitializationState;
  _2 = Dem_InitializationState.25_1 + 4294967294;
  if (_2 > 1)
    goto <bb 3>; [41.48%]
  else
    goto <bb 4>; [58.52%]

  <bb 3> [local count: 402259296]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 129, 32);
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 567507571]:
  # DEBUG BEGIN_STMT
  if (Dem_InitializationState.25_1 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 20>; [79.76%]

  <bb 5> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _3 = (int) OriginIdx_26(D);
  SizeEventMem_28 = Dem_SizeEventMem[_3];
  # DEBUG SizeEventMem => SizeEventMem_28
  # DEBUG BEGIN_STMT
  EvMemEntry_29 = Dem_EventMem[_3];
  # DEBUG EvMemEntry => EvMemEntry_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FoundEntryIdx => SizeEventMem_28
  # DEBUG BEGIN_STMT
  # DEBUG ClearedEntriesFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG MinOccOrder => 65535
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryInfo[_3].Status = 0;
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _4 = (unsigned int) EntryIdx_15;
  _5 = _4 * 16;
  _6 = EvMemEntry_29 + _5;
  _7 = _6->EntryStatus;
  if (_7 == 3)
    goto <bb 12>; [5.50%]
  else
    goto <bb 7>; [94.50%]

  <bb 7> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  if (_7 == 2)
    goto <bb 8>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 8> [local count: 326018619]:
  # DEBUG BEGIN_STMT
  _8 = _6->OccOrder;
  if (_8 < MinOccOrder_21)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 163009309]:
  # DEBUG BEGIN_STMT
  # DEBUG MinOccOrder => _8
  # DEBUG BEGIN_STMT
  # DEBUG FoundEntryIdx => EntryIdx_15

  <bb 10> [local count: 958878292]:
  # FoundEntryIdx_16 = PHI <FoundEntryIdx_17(7), EntryIdx_15(9), FoundEntryIdx_17(8)>
  # MinOccOrder_20 = PHI <MinOccOrder_21(7), _8(9), MinOccOrder_21(8)>
  # DEBUG MinOccOrder => MinOccOrder_20
  # DEBUG FoundEntryIdx => FoundEntryIdx_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EntryIdx_32 = EntryIdx_15 + 1;
  # DEBUG EntryIdx => EntryIdx_32

  <bb 11> [local count: 1073741824]:
  # EntryIdx_15 = PHI <0(5), EntryIdx_32(10)>
  # FoundEntryIdx_17 = PHI <SizeEventMem_28(5), FoundEntryIdx_16(10)>
  # MinOccOrder_21 = PHI <65535(5), MinOccOrder_20(10)>
  # DEBUG MinOccOrder => MinOccOrder_21
  # DEBUG FoundEntryIdx => FoundEntryIdx_17
  # DEBUG EntryIdx => EntryIdx_15
  # DEBUG BEGIN_STMT
  if (EntryIdx_15 < SizeEventMem_28)
    goto <bb 6>; [94.50%]
  else
    goto <bb 12>; [5.50%]

  <bb 12> [local count: 114863532]:
  # FoundEntryIdx_18 = PHI <EntryIdx_15(6), FoundEntryIdx_17(11)>
  # ClearedEntriesFound_19 = PHI <1(6), 0(11)>
  # DEBUG ClearedEntriesFound => ClearedEntriesFound_19
  # DEBUG FoundEntryIdx => FoundEntryIdx_18
  # DEBUG BEGIN_STMT
  if (FoundEntryIdx_18 < SizeEventMem_28)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  # DEBUG PerformStoreImmediately => 1
  # DEBUG BEGIN_STMT
  Dem_StoreImmediately (OriginIdx_26(D), FoundEntryIdx_18);
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryInfo[_3].Status = 1;

  <bb 14> [local count: 114863532]:
  # PerformStoreImmediately_13 = PHI <0(12), 1(13)>
  # DEBUG PerformStoreImmediately => PerformStoreImmediately_13
  # DEBUG BEGIN_STMT
  _9 = Dem_ClearDtcAsyncStatus.OriginIdx;
  if (_9 == OriginIdx_26(D))
    goto <bb 15>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 15> [local count: 39053601]:
  if (ClearedEntriesFound_19 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 16> [local count: 19526800]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventMemWrite = 0;
  # DEBUG BEGIN_STMT
  _10 = Dem_ClearDtcAsyncStatus.EventStatusWrite;
  if (_10 == 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 9763400]:
  # DEBUG BEGIN_STMT
  _11 = Dem_ClearDtcAsyncStatus.RunState;
  if (_11 == 2)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 3319556]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.OperationResult = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 4;

  <bb 19> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 452644038]:
  # DEBUG BEGIN_STMT
  _12 = (int) OriginIdx_26(D);
  Dem_NvMGateEntryInfo[_12].Status = 0;

  <bb 21> [local count: 969766866]:
  # PerformStoreImmediately_14 = PHI <0(3), PerformStoreImmediately_13(19), 0(20)>
  # DEBUG PerformStoreImmediately => PerformStoreImmediately_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return PerformStoreImmediately_14;

}



;; Function Dem_NvMGateEntryPrimaryBlockCallback (Dem_NvMGateEntryPrimaryBlockCallback, funcdef_no=62, decl_uid=5911, cgraph_uid=63, symbol_order=73)

Modification phase of node Dem_NvMGateEntryPrimaryBlockCallback/73
Dem_NvMGateEntryPrimaryBlockCallback (uint8 ServiceId, NvM_RequestResultType JobResult)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryBlockCallback (ServiceId_2(D), 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_NvMGateEntrySecondaryBlockCallback (Dem_NvMGateEntrySecondaryBlockCallback, funcdef_no=63, decl_uid=5914, cgraph_uid=64, symbol_order=74)

Modification phase of node Dem_NvMGateEntrySecondaryBlockCallback/74
Dem_NvMGateEntrySecondaryBlockCallback (uint8 ServiceId, NvM_RequestResultType JobResult)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryBlockCallback (ServiceId_2(D), 3);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_CheckForImmediateEntryStorage (Dem_CheckForImmediateEntryStorage, funcdef_no=78, decl_uid=6758, cgraph_uid=79, symbol_order=89)

Modification phase of node Dem_CheckForImmediateEntryStorage/89
Dem_CheckForImmediateEntryStorage (Dem_EventIdType OriginalEventId, struct Dem_EventMemoryEntryType * EvMemEntryPtr, Dem_SizeEvMemEntryType EvMemEntryIdx, boolean ForceWrite)
{
  const boolean Result;
  const boolean Result;
  const uint8 Result;
  boolean ImmStorageOriginalEvent;
  boolean ImmStorageCurrentEvent;
  const Dem_EventIdType CurrentEventId;
  <unnamed type> _1;
  int _2;
  unsigned char _3;
  long unsigned int _9;
  long unsigned int _13;
  int _14;
  unsigned char _21;
  long unsigned int _23;
  unsigned char _24;
  int _26;
  long unsigned int _27;
  long unsigned int _28;
  unsigned char _29;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => OriginalEventId_8(D)
  # DEBUG INLINE_ENTRY Dem_GbiDTCOriginIdx
  # DEBUG BEGIN_STMT
  _14 = (int) OriginalEventId_8(D);
  _13 = Dem_EventDesc[_14].EvConf1;
  _9 = _13 >> 24;
  _21 = (unsigned char) _9;
  Result_22 = _21 & 3;
  # DEBUG Result => Result_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG OriginIdx => Result_22
  # DEBUG BEGIN_STMT
  CurrentEventId_11 = EvMemEntryPtr_10(D)->EventId;
  # DEBUG CurrentEventId => CurrentEventId_11
  # DEBUG BEGIN_STMT
  # DEBUG ImmStorageCurrentEvent => 0
  # DEBUG BEGIN_STMT
  # DEBUG ImmStorageOriginalEvent => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EvMemEntryPtr_10(D)->EntryStatus;
  if (_1 != 3)
    goto <bb 3>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (ForceWrite_12(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG EventId => CurrentEventId_11
  # DEBUG INLINE_ENTRY Dem_GbiImmediateStorage
  # DEBUG BEGIN_STMT
  _26 = (int) CurrentEventId_11;
  _27 = Dem_EventDesc[_26].EvConf1;
  _28 = _27 >> 30;
  _29 = (unsigned char) _28;
  Result_30 = _29 & 1;
  # DEBUG Result => Result_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG ImmStorageCurrentEvent => Result_30
  # DEBUG BEGIN_STMT
  # DEBUG EventId => OriginalEventId_8(D)
  # DEBUG INLINE_ENTRY Dem_GbiImmediateStorage
  # DEBUG BEGIN_STMT
  _23 = _13 >> 30;
  _24 = (unsigned char) _23;
  Result_25 = _24 & 1;
  # DEBUG Result => Result_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  # DEBUG ImmStorageOriginalEvent => Result_25

  <bb 5> [local count: 708669604]:
  # ImmStorageCurrentEvent_4 = PHI <0(3), Result_30(4)>
  # ImmStorageOriginalEvent_5 = PHI <0(3), Result_25(4)>
  # DEBUG ImmStorageOriginalEvent => ImmStorageOriginalEvent_5
  # DEBUG ImmStorageCurrentEvent => ImmStorageCurrentEvent_4
  # DEBUG BEGIN_STMT
  if (ForceWrite_12(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 354334802]:
  if (ImmStorageCurrentEvent_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 177167401]:
  if (ImmStorageOriginalEvent_5 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  EvMemEntryPtr_10(D)->EntryStatus = 1;
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 620085904]:
  # DEBUG BEGIN_STMT
  _2 = (int) Result_22;
  _3 = Dem_NvMGateEntryInfo[_2].Status;
  if (_3 != 0)
    goto <bb 10>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 10> [local count: 415457555]:
  # DEBUG BEGIN_STMT
  if (CurrentEventId_11 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 207728777]:
  # DEBUG BEGIN_STMT
  EvMemEntryPtr_10(D)->EntryStatus = 2;
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 207728777]:
  # DEBUG BEGIN_STMT
  EvMemEntryPtr_10(D)->EntryStatus = 3;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 204628348]:
  # DEBUG BEGIN_STMT
  Dem_StoreImmediately (Result_22, EvMemEntryIdx_16(D));
  # DEBUG BEGIN_STMT
  Dem_NvMGateEntryInfo[_2].Status = 1;

  <bb 14> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ClearAgedEventEntry (Dem_ClearAgedEventEntry, funcdef_no=83, decl_uid=6766, cgraph_uid=84, symbol_order=94)

Modification phase of node Dem_ClearAgedEventEntry/94
Dem_ClearAgedEventEntry (Dem_EventIdType EventId, struct Dem_EventMemoryEntryType * EvMemEntry)
{
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG EventStatusClearMask => 8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ClearEventEntry (EvMemEntry_5(D));
  # DEBUG BEGIN_STMT
  _1 = (int) EventId_7(D);
  _2 = Dem_NvData.DTCStatusMask[_1];
  _3 = _2 & 247;
  Dem_NvData.DTCStatusMask[_1] = _3;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_IsEventsMILIndicatorActive (Dem_IsEventsMILIndicatorActive, funcdef_no=90, decl_uid=6653, cgraph_uid=91, symbol_order=101)

Modification phase of node Dem_IsEventsMILIndicatorActive/101
Dem_IsEventsMILIndicatorActive (Dem_EventIdType EventId)
{
  const Dem_CounterDataIdxType CounterDataIdx;
  Dem_IndicatorIdxType LinkIdx;
  const struct Dem_IndicatorLinkType * const IndicatorLink;
  const Dem_IndicatorIdxType LinkNumber;
  Std_ReturnType Result;
  unsigned char _1;
  int _2;
  unsigned int _3;
  unsigned int _4;
  const struct Dem_IndicatorLinkType * _5;
  short unsigned int _6;
  int _7;
  unsigned char _8;
  signed char _9;
  unsigned char _10;
  unsigned int _11;
  unsigned char _12;
  unsigned int _13;
  unsigned int _14;
  unsigned char _15;
  unsigned char _16;
  unsigned char _19;

  <bb 2> [local count: 66835398]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  LinkNumber_21 = Dem_IndicatorDesc[0].Number;
  # DEBUG LinkNumber => LinkNumber_21
  # DEBUG BEGIN_STMT
  _1 = Dem_IndicatorDesc[0].StartIdx;
  _2 = (int) _1;
  IndicatorLink_22 = &Dem_IndicatorLink[_2];
  # DEBUG IndicatorLink => IndicatorLink_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LinkIdx => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _3 = (unsigned int) LinkIdx_18;
  _4 = _3 * 6;
  _5 = IndicatorLink_22 + _4;
  _6 = _5->EventId;
  if (_6 == EventId_23(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 344993248]:
  # DEBUG BEGIN_STMT
  CounterDataIdx_24 = _1 + LinkIdx_18;
  # DEBUG CounterDataIdx => CounterDataIdx_24
  # DEBUG BEGIN_STMT
  _7 = (int) EventId_23(D);
  _8 = Dem_NvData.DTCStatusMask[_7];
  _9 = (signed char) _8;
  if (_9 < 0)
    goto <bb 5>; [41.00%]
  else
    goto <bb 6>; [59.00%]

  <bb 5> [local count: 141447232]:
  _10 = CounterDataIdx_24 >> 3;
  _11 = (unsigned int) _10;
  _12 = Dem_NvData.IndicatorCycleCounterWIRStatus[0][_11];
  _19 = CounterDataIdx_24 & 7;
  _13 = (unsigned int) _19;
  _14 = 1 << _13;
  _15 = (unsigned char) _14;
  _16 = _12 & _15;
  if (_16 != 0)
    goto <bb 8>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 1006906427]:
  # DEBUG BEGIN_STMT
  LinkIdx_25 = LinkIdx_18 + 1;
  # DEBUG LinkIdx => LinkIdx_25

  <bb 7> [local count: 1073741824]:
  # LinkIdx_18 = PHI <0(2), LinkIdx_25(6)>
  # DEBUG LinkIdx => LinkIdx_18
  # DEBUG BEGIN_STMT
  if (LinkIdx_18 < LinkNumber_21)
    goto <bb 3>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 66835398]:
  # Result_17 = PHI <1(5), 0(7)>
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_17;

}



;; Function Dem_PermanentMemoryStatusUpdate (Dem_PermanentMemoryStatusUpdate, funcdef_no=52, decl_uid=6774, cgraph_uid=53, symbol_order=63)

Modification phase of node Dem_PermanentMemoryStatusUpdate/63
Dem_PermanentMemoryStatusUpdate ()
{
  const boolean Result;
  Std_ReturnType AddEntryResult;
  const Dem_EventIdType EventId;
  Dem_IndicatorIdxType LinkIdx;
  boolean MinRatio;
  Dem_DTCStatusMaskType DTCStatus;
  const Dem_EventIdType EventId;
  Dem_PermanentMemoryEntryType Entry;
  Dem_SizeEvMemEntryType EntryIdx;
  int _1;
  unsigned char _2;
  int _3;
  unsigned int _4;
  unsigned int _5;
  _Bool _6;
  unsigned int _7;
  unsigned int _8;
  _Bool _9;
  unsigned int _10;
  _Bool _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  int _16;
  unsigned char _17;
  unsigned char _18;
  unsigned char _32;
  unsigned char _43;
  short unsigned int _45;

  <bb 2> [local count: 70351286]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 18>; [100.00%]

  <bb 3> [local count: 281405144]:
  # DEBUG BEGIN_STMT
  _1 = (int) EntryIdx_19;
  Entry_41 = Dem_EventMemoryPermanent[_1];
  # DEBUG Entry => Entry_41
  # DEBUG BEGIN_STMT
  EventId_42 = Entry_41 & 8191;
  # DEBUG EventId => EventId_42
  # DEBUG BEGIN_STMT
  if (EventId_42 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 4> [local count: 140702572]:
  # DEBUG BEGIN_STMT
  _2 = Dem_IsEventsMILIndicatorActive (EventId_42);
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 5> [local count: 70351286]:
  # DEBUG BEGIN_STMT
  _3 = (int) EventId_42;
  DTCStatus_44 = Dem_NvData.DTCStatusMask[_3];
  # DEBUG DTCStatus => DTCStatus_44
  # DEBUG BEGIN_STMT
  _4 = (unsigned int) DTCStatus_44;
  _5 = _4 >> 1;
  _6 = (_Bool) _5;
  if (_6 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 35175643]:
  # DEBUG BEGIN_STMT
  # DEBUG Entry => Entry_41 & 57343
  # DEBUG BEGIN_STMT
  Entry_52 = Entry_41 & 40959;
  # DEBUG Entry => Entry_52
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 35175643]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => EventId_42
  # DEBUG INLINE_ENTRY Dem_GbiMinRatioEvent
  # DEBUG BEGIN_STMT
  _45 = Dem_OBDConfig[_3].Dem_OBDEvConf1;
  _43 = (unsigned char) _45;
  Result_56 = _43 & 1;
  # DEBUG Result => Result_56
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventId => NULL
  # DEBUG Result => NULL
  if (Result_56 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 17587822]:
  # DEBUG BEGIN_STMT
  MinRatio_46 = Dem_NvData.PfcStatus;
  # DEBUG MinRatio => MinRatio_46
  # DEBUG BEGIN_STMT
  if (MinRatio_46 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 26381732]:
  # DEBUG MinRatio => NULL
  # DEBUG BEGIN_STMT
  Entry_47 = Entry_41 | 8192;
  # DEBUG Entry => Entry_47

  <bb 10> [local count: 35175643]:
  # Entry_20 = PHI <Entry_41(8), Entry_47(9)>
  # DEBUG Entry => Entry_20
  # DEBUG BEGIN_STMT
  _32 = DTCStatus_44 & 64;
  if (_32 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 17587822]:
  # DEBUG BEGIN_STMT
  Entry_48 = Entry_20 | 16384;
  # DEBUG Entry => Entry_48

  <bb 12> [local count: 35175643]:
  # Entry_21 = PHI <Entry_20(10), Entry_48(11)>
  # DEBUG Entry => Entry_21
  # DEBUG BEGIN_STMT
  _7 = (unsigned int) Entry_21;
  _8 = _7 >> 13;
  _9 = (_Bool) _8;
  if (_9 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 17587822]:
  _10 = _7 >> 14;
  _11 = (_Bool) _10;
  if (_11 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 8793911]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#13 => Entry_21 & 57344
  # DEBUG Entry => D#13
  # DEBUG BEGIN_STMT
  # DEBUG Entry => D#13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Entry => Entry_21 & 49152
  # DEBUG BEGIN_STMT
  Entry_49 = Entry_21 & 32768;
  # DEBUG Entry => Entry_49
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentNonVolatileStored[_1] = 0;
  # DEBUG BEGIN_STMT
  _12 = Dem_NvData.EvMemOvfIndFlags;
  _13 = _12 & 253;
  Dem_NvData.EvMemOvfIndFlags = _13;

  <bb 15> [local count: 70351286]:
  # Entry_22 = PHI <Entry_52(6), Entry_21(12), Entry_21(13), Entry_49(14)>
  # DEBUG Entry => Entry_22
  # DEBUG BEGIN_STMT
  if (Entry_22 != Entry_41)
    goto <bb 16>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 16> [local count: 46431849]:
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanent[_1] = Entry_22;
  # DEBUG BEGIN_STMT
  Dem_EventMemoryPermanentUpdated = 1;

  <bb 17> [local count: 281405145]:
  # DEBUG BEGIN_STMT
  EntryIdx_55 = EntryIdx_19 + 1;
  # DEBUG EntryIdx => EntryIdx_55

  <bb 18> [local count: 351756431]:
  # EntryIdx_19 = PHI <0(2), EntryIdx_55(17)>
  # DEBUG EntryIdx => EntryIdx_19
  # DEBUG BEGIN_STMT
  if (EntryIdx_19 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 19>; [20.00%]

  <bb 19> [local count: 70351286]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _14 = Dem_IndicatorDesc[0].StartIdx;
  # DEBUG D#15 => (const uint32) _14
  # DEBUG indMILStart => D#15
  # DEBUG BEGIN_STMT
  _15 = Dem_IndicatorDesc[0].Number;
  # DEBUG D#14 => (long unsigned int) _15
  # DEBUG indMILEnd => D#14 + D#15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LinkIdx => _14
  goto <bb 23>; [100.00%]

  <bb 20> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _16 = (int) LinkIdx_23;
  EventId_34 = Dem_IndicatorLink[_16].EventId;
  # DEBUG EventId => EventId_34
  # DEBUG BEGIN_STMT
  _17 = Dem_IsEventsMILIndicatorActive (EventId_34);
  if (_17 == 1)
    goto <bb 21>; [20.24%]
  else
    goto <bb 22>; [79.76%]

  <bb 21> [local count: 205372451]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  AddEntryResult_37 = Dem_PermanentMemoryAddEntry (EventId_34);
  # DEBUG AddEntryResult => AddEntryResult_37
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (AddEntryResult_37 != 0)
    goto <bb 24>; [5.50%]
  else
    goto <bb 22>; [94.50%]

  <bb 22> [local count: 1003390539]:
  # DEBUG BEGIN_STMT
  LinkIdx_39 = LinkIdx_23 + 1;
  # DEBUG LinkIdx => LinkIdx_39

  <bb 23> [local count: 1073741824]:
  # LinkIdx_23 = PHI <_14(19), LinkIdx_39(22)>
  # DEBUG LinkIdx => LinkIdx_23
  # DEBUG BEGIN_STMT
  _18 = _14 + _15;
  if (_18 > LinkIdx_23)
    goto <bb 20>; [94.50%]
  else
    goto <bb 24>; [5.50%]

  <bb 24> [local count: 70351285]:
  # DEBUG BEGIN_STMT
  Dem_NvData.PfcStatus = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_GetMappedDTCOrigin (Dem_GetMappedDTCOrigin, funcdef_no=94, decl_uid=6886, cgraph_uid=95, symbol_order=105)

Modification phase of node Dem_GetMappedDTCOrigin/105
Dem_GetMappedDTCOrigin (Dem_DTCOriginType DTCOrigin, Dem_DTCOriginMappingType MappingVariant)
{
  Dem_DTCOriginType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (DTCOrigin_2(D)) <default: <L8> [25.00%], case 1 ... 3: <L5> [25.00%], case 4: <L0> [25.00%], case 257: <L11> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  if (MappingVariant_3(D) == 0)
    goto <bb 7>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 4> [local count: 93952410]:
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 268435456]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => DTCOrigin_2(D)
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 268435456]:
<L8>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # Result_1 = PHI <4(4), 4(2), DTCOrigin_2(D)(5), 0(6), 1(3)>
<L11>:
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_1;

}


