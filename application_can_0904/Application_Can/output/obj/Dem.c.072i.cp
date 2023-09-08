
IPA constant propagation start:
Determining dynamic type for call: ReadQueueRetVal = Dem_ReadErrorQueueEntry (&QueueEntry);
  Starting walk at: ReadQueueRetVal = Dem_ReadErrorQueueEntry (&QueueEntry);
  instance pointer: &QueueEntry  Outer instance pointer: QueueEntry offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ReadQueueRetVal = Dem_ReadErrorQueueEntry (&QueueEntry);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:Dem_ProcessEvent (85, EventInfo, iftmp.72_14, FirstFailed_8, ProcessEventJobs_15, &Notification);
  Function call may change dynamic type:eventKind_9 = Dem_GbiEventKind (EventId_3);
Determining dynamic type for call: Dem_ProcessEvent (85, EventInfo, iftmp.72_14, FirstFailed_8, ProcessEventJobs_15, &Notification);
  Starting walk at: Dem_ProcessEvent (85, EventInfo, iftmp.72_14, FirstFailed_8, ProcessEventJobs_15, &Notification);
  instance pointer: &Notification  Outer instance pointer: Notification offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:eventKind_9 = Dem_GbiEventKind (EventId_3);
  Function call may change dynamic type:SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ReadQueueRetVal = Dem_ReadErrorQueueEntry (&QueueEntry);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ReadQueueRetVal = Dem_ReadErrorQueueEntry (&QueueEntry);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:Dem_ProcessEvent (85, EventInfo, iftmp.72_14, FirstFailed_8, ProcessEventJobs_15, &Notification);
  Function call may change dynamic type:eventKind_9 = Dem_GbiEventKind (EventId_3);
Determining dynamic type for call: EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  Starting walk at: EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  instance pointer: &EvMemEntryPtr  Outer instance pointer: EvMemEntryPtr offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  Starting walk at: EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  instance pointer: &EvMemEntryIdx  Outer instance pointer: EvMemEntryIdx offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  Starting walk at: EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  instance pointer: &ReplacedEventId  Outer instance pointer: ReplacedEventId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ProcessEDAndFFResult_8 = Dem_ProcessEventEntryEData (EventId_1, EvMemEntryPtr.121_7, EventEntryAllocResult_2);
  Starting walk at: ProcessEDAndFFResult_8 = Dem_ProcessEventEntryEData (EventId_1, EvMemEntryPtr.121_7, EventEntryAllocResult_2);
  instance pointer: EvMemEntryPtr.121_7  Outer instance pointer: EvMemEntryPtr.121_7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 = Dem_GbiNumAgingCycles (EventId_1);
  Function call may change dynamic type:EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  Function call may change dynamic type:_6 = Dem_GbiNumAgingCycles (EventId_1);
  Function call may change dynamic type:_5 = Dem_IntValEntryData (EvMemEntryPtr.120_4);
Determining dynamic type for call: ProcessEDAndFFResult_12 = Dem_ProcessEventEntryFFData (EventId_1, EvMemEntryPtr.122_9);
  Starting walk at: ProcessEDAndFFResult_12 = Dem_ProcessEventEntryFFData (EventId_1, EvMemEntryPtr.122_9);
  instance pointer: EvMemEntryPtr.122_9  Outer instance pointer: EvMemEntryPtr.122_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ProcessEDAndFFResult_8 = Dem_ProcessEventEntryEData (EventId_1, EvMemEntryPtr.121_7, EventEntryAllocResult_2);
  Function call may change dynamic type:_3 = Dem_GbiNumAgingCycles (EventId_1);
  Function call may change dynamic type:EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  Function call may change dynamic type:_6 = Dem_GbiNumAgingCycles (EventId_1);
  Function call may change dynamic type:_5 = Dem_IntValEntryData (EvMemEntryPtr.120_4);
Determining dynamic type for call: NvMForceWrite_29 = Dem_UpdateOccurrenceOrder (EvMemEntryPtr.128_28);
  Starting walk at: NvMForceWrite_29 = Dem_UpdateOccurrenceOrder (EvMemEntryPtr.128_28);
  instance pointer: EvMemEntryPtr.128_28  Outer instance pointer: EvMemEntryPtr.128_28 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = Dem_GbiDTCKind (EventId_1);
  Function call may change dynamic type:ProcessEDAndFFResult_12 = Dem_ProcessEventEntryFFData (EventId_1, EvMemEntryPtr.122_9);
  Function call may change dynamic type:ProcessEDAndFFResult_8 = Dem_ProcessEventEntryEData (EventId_1, EvMemEntryPtr.121_7, EventEntryAllocResult_2);
  Function call may change dynamic type:_3 = Dem_GbiNumAgingCycles (EventId_1);
  Function call may change dynamic type:EventEntryAllocResult_2 = Dem_FindOrAllocateEventEntry.isra.0 (EventId_1, &EvMemEntryPtr, &EvMemEntryIdx, &ReplacedEventId);
  Function call may change dynamic type:_6 = Dem_GbiNumAgingCycles (EventId_1);
  Function call may change dynamic type:_5 = Dem_IntValEntryData (EvMemEntryPtr.120_4);
  Function call may change dynamic type:Dem_ProcessMultipleOBDFreezeFrameEntry (EventId_1, EvMemEntryIdx.125_15);
  Function call may change dynamic type:EventFailureClassIdx_18 = Dem_GbiEventFailureClassIdx (EventId_1);
  Function call may change dynamic type:_23 = Dem_GbiOpCycleIdx (EventId_1);
  Function call may change dynamic type:Dem_UpdateEventIdOccurKinds (EventId_1, 3, 4);
Determining dynamic type for call: DataPresent_23 = Dem_ReadExternalDataElement (_21, DataElementIdx_14, EventId_22(D));
  Starting walk at: DataPresent_23 = Dem_ReadExternalDataElement (_21, DataElementIdx_14, EventId_22(D));
  instance pointer: _21  Outer instance pointer: _21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DataPresent_23 = Dem_ReadExternalDataElement (_21, DataElementIdx_14, EventId_22(D));
Determining dynamic type for call: FFSegIdx_12 = Dem_FindFFSegIdx.isra.0 (FFClass_9, DataId_11(D), &StartByte);
  Starting walk at: FFSegIdx_12 = Dem_FindFFSegIdx.isra.0 (FFClass_9, DataId_11(D), &StartByte);
  instance pointer: FFClass_9  Outer instance pointer: &Dem_FFClass[_8] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: FFSegIdx_12 = Dem_FindFFSegIdx.isra.0 (FFClass_9, DataId_11(D), &StartByte);
  Starting walk at: FFSegIdx_12 = Dem_FindFFSegIdx.isra.0 (FFClass_9, DataId_11(D), &StartByte);
  instance pointer: &StartByte  Outer instance pointer: StartByte offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = Dem_GbiFFClassIdx (EventId_2(D));
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:MaxNumFF_3 = Dem_GbiMaxNumFFRecs (EventId_2(D));
  Function call may change dynamic type:FFRecNumValid_5 = Dem_CheckFFRecNumValid (EventId_2(D), RecordNumber_4(D));
Determining dynamic type for call: _7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Starting walk at: _7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  instance pointer: EvMemEntryPtr_4(D)  Outer instance pointer: EvMemEntryPtr_4(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Dem_SearchForEntry (EventId_1(D), EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:EventFailureClassIdx_3 = Dem_GbiEventFailureClassIdx (EventId_1(D));
  Function call may change dynamic type:OriginIdx_2 = Dem_GbiDTCOriginIdx (EventId_1(D));
Determining dynamic type for call: _7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Starting walk at: _7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  instance pointer: EvMemIdxPtr_5(D)  Outer instance pointer: EvMemIdxPtr_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Dem_SearchForEntry (EventId_1(D), EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:EventFailureClassIdx_3 = Dem_GbiEventFailureClassIdx (EventId_1(D));
  Function call may change dynamic type:OriginIdx_2 = Dem_GbiDTCOriginIdx (EventId_1(D));
Determining dynamic type for call: AllocationResult_9 = Dem_ReplaceEventEntry.isra.0 (EventId_1(D), OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D), ReplacedEventIdPtr_8(D));
  Starting walk at: AllocationResult_9 = Dem_ReplaceEventEntry.isra.0 (EventId_1(D), OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D), ReplacedEventIdPtr_8(D));
  instance pointer: EvMemEntryPtr_4(D)  Outer instance pointer: EvMemEntryPtr_4(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:_6 = Dem_SearchForEntry (EventId_1(D), EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:EventFailureClassIdx_3 = Dem_GbiEventFailureClassIdx (EventId_1(D));
  Function call may change dynamic type:OriginIdx_2 = Dem_GbiDTCOriginIdx (EventId_1(D));
Determining dynamic type for call: AllocationResult_9 = Dem_ReplaceEventEntry.isra.0 (EventId_1(D), OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D), ReplacedEventIdPtr_8(D));
  Starting walk at: AllocationResult_9 = Dem_ReplaceEventEntry.isra.0 (EventId_1(D), OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D), ReplacedEventIdPtr_8(D));
  instance pointer: EvMemIdxPtr_5(D)  Outer instance pointer: EvMemIdxPtr_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:_6 = Dem_SearchForEntry (EventId_1(D), EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:EventFailureClassIdx_3 = Dem_GbiEventFailureClassIdx (EventId_1(D));
  Function call may change dynamic type:OriginIdx_2 = Dem_GbiDTCOriginIdx (EventId_1(D));
Determining dynamic type for call: AllocationResult_9 = Dem_ReplaceEventEntry.isra.0 (EventId_1(D), OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D), ReplacedEventIdPtr_8(D));
  Starting walk at: AllocationResult_9 = Dem_ReplaceEventEntry.isra.0 (EventId_1(D), OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D), ReplacedEventIdPtr_8(D));
  instance pointer: ReplacedEventIdPtr_8(D)  Outer instance pointer: ReplacedEventIdPtr_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = Dem_SearchForEmptyEntry (OriginIdx_2, EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:_6 = Dem_SearchForEntry (EventId_1(D), EvMemEntryPtr_4(D), EvMemIdxPtr_5(D));
  Function call may change dynamic type:EventFailureClassIdx_3 = Dem_GbiEventFailureClassIdx (EventId_1(D));
  Function call may change dynamic type:OriginIdx_2 = Dem_GbiDTCOriginIdx (EventId_1(D));
Determining dynamic type for call: ReplaceableEntryFound_5 = Dem_SearchForEntryToReplace.isra.0 (OriginIdx_1(D), EventId_2(D), EvMemEntryPtr_3(D), EvMemIdxPtr_4(D));
  Starting walk at: ReplaceableEntryFound_5 = Dem_SearchForEntryToReplace.isra.0 (OriginIdx_1(D), EventId_2(D), EvMemEntryPtr_3(D), EvMemIdxPtr_4(D));
  instance pointer: EvMemEntryPtr_3(D)  Outer instance pointer: EvMemEntryPtr_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ReplaceableEntryFound_5 = Dem_SearchForEntryToReplace.isra.0 (OriginIdx_1(D), EventId_2(D), EvMemEntryPtr_3(D), EvMemIdxPtr_4(D));
  Starting walk at: ReplaceableEntryFound_5 = Dem_SearchForEntryToReplace.isra.0 (OriginIdx_1(D), EventId_2(D), EvMemEntryPtr_3(D), EvMemIdxPtr_4(D));
  instance pointer: EvMemIdxPtr_4(D)  Outer instance pointer: EvMemIdxPtr_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_10 = _2 (DestBuffer_8(D));
  Starting walk at: Result_10 = _2 (DestBuffer_8(D));
  instance pointer: DestBuffer_8(D)  Outer instance pointer: DestBuffer_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: DataPresent_53 = Dem_ReadExternalDataElement (_22, DataElementIdx_47, EventId_51(D));
  Starting walk at: DataPresent_53 = Dem_ReadExternalDataElement (_22, DataElementIdx_47, EventId_51(D));
  instance pointer: _22  Outer instance pointer: _22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DataPresent_53 = Dem_ReadExternalDataElement (_22, DataElementIdx_47, EventId_51(D));
Determining dynamic type for call: ReadFuncStatus_48 = Dem_ReadExternalDataElement (_12, PidElementIdx_43, EventId_46(D));
  Starting walk at: ReadFuncStatus_48 = Dem_ReadExternalDataElement (_12, PidElementIdx_43, EventId_46(D));
  instance pointer: _12  Outer instance pointer: _12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ReadFuncStatus_48 = Dem_ReadExternalDataElement (_12, PidElementIdx_43, EventId_46(D));
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: Result_26 = Dem_StoreED (EDEntryData_19, EDClass_16, EntryExists_8, EventId_14(D));
  Starting walk at: Result_26 = Dem_StoreED (EDEntryData_19, EDClass_16, EntryExists_8, EventId_14(D));
  instance pointer: EDEntryData_19  Outer instance pointer: EDEntryData_19 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SizeOfED_22 = Dem_SizeOfED (EDClass_16);
  Function call may change dynamic type:EDEntryData_19 = Dem_EDEntryData (EvMemEntryPtr_17(D));
  Function call may change dynamic type:_1 = Dem_GbiEDClassIdx (EventId_14(D));
Determining dynamic type for call: Result_26 = Dem_StoreED (EDEntryData_19, EDClass_16, EntryExists_8, EventId_14(D));
  Starting walk at: Result_26 = Dem_StoreED (EDEntryData_19, EDClass_16, EntryExists_8, EventId_14(D));
  instance pointer: EDClass_16  Outer instance pointer: &Dem_EDClass[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_19 = Dem_StoreFF.isra.0 (FFClass_13, FFEntryData_17, EventId_8(D));
  Starting walk at: Result_19 = Dem_StoreFF.isra.0 (FFClass_13, FFEntryData_17, EventId_8(D));
  instance pointer: FFClass_13  Outer instance pointer: &Dem_FFClass[_1] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_19 = Dem_StoreFF.isra.0 (FFClass_13, FFEntryData_17, EventId_8(D));
  Starting walk at: Result_19 = Dem_StoreFF.isra.0 (FFClass_13, FFEntryData_17, EventId_8(D));
  instance pointer: FFEntryData_17  Outer instance pointer: FFEntryData_17 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FFEntryData_17 = Dem_FFEntryData (EvMemEntryPtr_14(D), FFClass_13, FFIndex_15);
  Function call may change dynamic type:MaxNumFF_12 = Dem_GbiMaxNumFFRecs (EventId_8(D));
  Function call may change dynamic type:IndividPartFFClassIdx_10 = Dem_GbiFFClassIdx (EventId_8(D));
Determining dynamic type for call: Dem_ProcessEventStatusUpdate (EventId_4, EventStatus_7(D), FirstFailed_8(D), Jobs_9(D), Notification_10(D));
  Starting walk at: Dem_ProcessEventStatusUpdate (EventId_4, EventStatus_7(D), FirstFailed_8(D), Jobs_9(D), Notification_10(D));
  instance pointer: Notification_10(D)  Outer instance pointer: Notification_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: Dem_RestoreDerivedEventStatus.isra.0 (_94, _95, EvId_69);
  Starting walk at: Dem_RestoreDerivedEventStatus.isra.0 (_94, _95, EvId_69);
  instance pointer: _94  Outer instance pointer: GateEntryBase_54 offset: 56 (bits) vtbl reference: 
  Function call may change dynamic type:sizeEntryData_73 = Dem_EvMemEntrySize (EvId_69, 1);
  Function call may change dynamic type:Result_68 = NvM_ASR40_GetErrorStatus (NvDataBlockId_55, &reqResult);
  Function call may change dynamic type:Eb_Intgr_BswM_TriggerMemoryStack (NvDataBlockId_55);
  Function call may change dynamic type:Dem_SetEvEntryExists (EvId_69, 1);
  Function call may change dynamic type:Dem_RestoreDerivedEventStatus.isra.0 (_94, _95, EvId_69);
  Function call may change dynamic type:_21 = Dem_GbiDTCKind (EvId_69);
  Function call may change dynamic type:TS_MemCpy32 (_24, &MEM[(struct Dem_GateEntryOBDFFPrimaryFragmentType *)&Dem_NvGateEntryPrimaryData + 18B].OBDFF.OBDFFData, 35);
  Function call may change dynamic type:TS_MemCpy32 (_27, _28, _29);
  Function call may change dynamic type:ReadBlockResult_61 = NvM_ASR40_SetDataIndex (NvDataBlockId_55, EntryIdx_33);
  Function call may change dynamic type:ReadBlockResult_63 = NvM_ASR40_ReadBlock (NvDataBlockId_55, 0B);
Determining dynamic type for call: Dem_RestoreDerivedEventStatus.isra.0 (_94, _95, EvId_69);
  Starting walk at: Dem_RestoreDerivedEventStatus.isra.0 (_94, _95, EvId_69);
  instance pointer: _95  Outer instance pointer: EvMemEntry_58 offset: 48 (bits) vtbl reference: 
  Function call may change dynamic type:sizeEntryData_73 = Dem_EvMemEntrySize (EvId_69, 1);
  Function call may change dynamic type:Result_68 = NvM_ASR40_GetErrorStatus (NvDataBlockId_55, &reqResult);
  Function call may change dynamic type:Eb_Intgr_BswM_TriggerMemoryStack (NvDataBlockId_55);
  Function call may change dynamic type:Dem_SetEvEntryExists (EvId_69, 1);
  Function call may change dynamic type:Dem_RestoreDerivedEventStatus.isra.0 (_94, _95, EvId_69);
  Function call may change dynamic type:_21 = Dem_GbiDTCKind (EvId_69);
  Function call may change dynamic type:TS_MemCpy32 (_24, &MEM[(struct Dem_GateEntryOBDFFPrimaryFragmentType *)&Dem_NvGateEntryPrimaryData + 18B].OBDFF.OBDFFData, 35);
  Function call may change dynamic type:TS_MemCpy32 (_27, _28, _29);
  Function call may change dynamic type:ReadBlockResult_61 = NvM_ASR40_SetDataIndex (NvDataBlockId_55, EntryIdx_33);
  Function call may change dynamic type:ReadBlockResult_63 = NvM_ASR40_ReadBlock (NvDataBlockId_55, 0B);
Determining dynamic type for call: Result_4 = Dem_ASR42_GetEventFreezeFrameData.part.0 (EventId_6(D), RecordNumber_9(D), ReportTotalRecord_7(D), DataId_10(D), DestBuffer_8(D));
  Starting walk at: Result_4 = Dem_ASR42_GetEventFreezeFrameData.part.0 (EventId_6(D), RecordNumber_9(D), ReportTotalRecord_7(D), DataId_10(D), DestBuffer_8(D));
  instance pointer: DestBuffer_8(D)  Outer instance pointer: DestBuffer_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_9 = Dem_ASR42_GetEventFreezeFrameData (EventId_3(D), RecordNumber_4(D), ReportTotalRecord_5(D), DataId_6(D), DestBuffer_7(D));
  Starting walk at: Result_9 = Dem_ASR42_GetEventFreezeFrameData (EventId_3(D), RecordNumber_4(D), ReportTotalRecord_5(D), DataId_6(D), DestBuffer_7(D));
  instance pointer: DestBuffer_7(D)  Outer instance pointer: DestBuffer_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_11 = _2 (EventId_6(D), FaultDetectionCounter_7(D));
  Starting walk at: Result_11 = _2 (EventId_6(D), FaultDetectionCounter_7(D));
  instance pointer: FaultDetectionCounter_7(D)  Outer instance pointer: FaultDetectionCounter_7(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Algorithm_9 = Dem_GbiDebounceAlgo (EventId_6(D));
Determining dynamic type for call: _5 = Dem_IsMILEvent (EventId_19, &IndicatorIdx);
  Starting walk at: _5 = Dem_IsMILEvent (EventId_19, &IndicatorIdx);
  instance pointer: &IndicatorIdx  Outer instance pointer: IndicatorIdx offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dem_GbiOpCycleIdx (EventId_19);
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_4 = Dem_GbiOpCycleIdx (EventId_19);
  Function call may change dynamic type:_5 = Dem_IsMILEvent (EventId_19, &IndicatorIdx);
  Function call may change dynamic type:_13 = Dem_ProcessIndicatorFailureCycleCounter (CounterDataIdx_37, EventId_19, 0);
  Function call may change dynamic type:Dem_PermanentMemoryAddEntry (EventId_19);
Determining dynamic type for call: EntryPresent_20 = Dem_CheckErrorQueueEntry (EventId_15, &PreviousEntryStatus);
  Starting walk at: EntryPresent_20 = Dem_CheckErrorQueueEntry (EventId_15, &PreviousEntryStatus);
  instance pointer: &PreviousEntryStatus  Outer instance pointer: PreviousEntryStatus offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_1 = Dem_DebounceEvent (EventId_15, &EventStatus, &debounceResult);
  Function call may change dynamic type:Det_ASR40_ReportError (54, 0, 15, 18);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dem_MainFunction.part.0/209:
    callsite  Dem_MainFunction.part.0/209 -> Dem_ReadErrorQueueEntry/61 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
    callsite  Dem_MainFunction.part.0/209 -> Dem_ProcessEvent/71 : 
       param 0: CONST: 85
         value: 0x55, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         Unknown bits
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x5
         VR  [0, 5]
       param 3: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 4: UNKNOWN
         value: 0x0, mask: 0xd
         VR  [1, 13]
       param 5: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dem_MainFunction.part.0/209 -> Dem_SetCDTCOnConfirmation/90 : 
  Jump functions of caller  Dem_ProcessEvent.part.0/208:
  Jump functions of caller  Dem_ProcessEventEntry.isra.0/207:
    callsite  Dem_ProcessEventEntry.isra.0/207 -> Dem_UpdateOccurrenceOrder/85 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_ProcessEventEntry.isra.0/207 -> Dem_UpdateEventIdOccurKinds/74 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 2: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  Dem_ProcessEventEntry.isra.0/207 -> Dem_ProcessMultipleOBDFreezeFrameEntry/68 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_ProcessEventEntry.isra.0/207 -> Dem_ProcessEventEntryFFData/77 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_ProcessEventEntry.isra.0/207 -> Dem_ProcessEventEntryEData/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_ProcessEventEntry.isra.0/207 -> Dem_FindOrAllocateEventEntry.isra.0/202 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0B
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  Dem_StoreFF.isra.0/206:
    callsite  Dem_StoreFF.isra.0/206 -> Dem_ReadExternalDataElement/82 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205:
  Jump functions of caller  Dem_UpdateEventIdOccurKinds.part.0/204:
  Jump functions of caller  Dem_ASR42_GetEventFreezeFrameData.part.0/203:
    callsite  Dem_ASR42_GetEventFreezeFrameData.part.0/203 -> Dem_FindFFSegIdx.isra.0/199 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  Dem_FindOrAllocateEventEntry.isra.0/202:
    callsite  Dem_FindOrAllocateEventEntry.isra.0/202 -> Dem_ReplaceEventEntry.isra.0/201 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dem_FindOrAllocateEventEntry.isra.0/202 -> Dem_SearchForEmptyEntry/83 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_ReplaceEventEntry.isra.0/201:
    callsite  Dem_ReplaceEventEntry.isra.0/201 -> Dem_SearchForEntryToReplace.isra.0/200 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_SearchForEntryToReplace.isra.0/200:
  Jump functions of caller  Dem_FindFFSegIdx.isra.0/199:
  Jump functions of caller  Dem_RestoreDerivedEventStatus.isra.0/198:
  Jump functions of caller  Dem_GetVisibleUdsDTC/196:
  Jump functions of caller  Dem_GbiDTCOrigin/195:
  Jump functions of caller  Dem_SizeOfED/194:
  Jump functions of caller  Dem_EDEntryData/193:
  Jump functions of caller  TS_AtomicSetBit_8/192:
  Jump functions of caller  Dem_ClearEventEntry/191:
  Jump functions of caller  Dem_GbiDTCOriginIdx/190:
  Jump functions of caller  Dem_UpdateEventStatusOnQualification/189:
  Jump functions of caller  Dem_CheckForEventWIRUpdate/188:
  Jump functions of caller  Dem_GbiPriority/187:
  Jump functions of caller  Dem_GetVisibleCmbDTC/186:
  Jump functions of caller  Dem_ProcessClearDTC/183:
  Jump functions of caller  Dem_InternalSetDTCSuppression/182:
  Jump functions of caller  Dem_GetMappedDTCOrigin/181:
  Jump functions of caller  Dem_AssembleExtendedDataSeg/180:
  Jump functions of caller  Dem_FindEDNumIndex/178:
  Jump functions of caller  Dem_GbiEDClassIdx/176:
  Jump functions of caller  Dem_SizeOfFFSegment/175:
  Jump functions of caller  Dem_SizeOfFF/173:
  Jump functions of caller  Dem_FFEntryData/172:
  Jump functions of caller  Dem_CheckFFRecNumStored/171:
  Jump functions of caller  Dem_GbiFFClassIdx/169:
  Jump functions of caller  Dem_CheckFFRecNumValid/168:
  Jump functions of caller  Dem_GbiMaxNumFFRecs/167:
  Jump functions of caller  Dem_InternalGetIndicatorStatus/166:
  Jump functions of caller  Dem_GetUdsDTC/161:
  Jump functions of caller  Dem_GetObdDTC/160:
  Jump functions of caller  Dem_GbiIndicatorUsed/159:
  Jump functions of caller  Dem_PermanentMemoryAddEntry/158:
  Jump functions of caller  Dem_ProcessIndicatorFailureCycleCounter/157:
  Jump functions of caller  Dem_PermanentMemoryRemoveEntry/156:
  Jump functions of caller  Dem_GbiIndicatorHealingCycleIdx/153:
  Jump functions of caller  Dem_GbiIndicatorFailureCycleIdx/152:
  Jump functions of caller  Dem_PermanentMemoryStatusUpdate/150:
  Jump functions of caller  Dem_GbiEventFailureCycleIdx/149:
  Jump functions of caller  Dem_CheckForImmediateEntryStorage/148:
  Jump functions of caller  Dem_GbiOpCycleIdx/147:
  Jump functions of caller  Dem_CheckForTriggerNvmWriteGateEntry/146:
  Jump functions of caller  Dem_GbiEnablePrestorage/145:
  Jump functions of caller  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144:
  Jump functions of caller  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143:
  Jump functions of caller  Dem_DebounceEvent/142:
  Jump functions of caller  Dem_InternalProcessEventReport/141:
  Jump functions of caller  Dem_GbiEventKind/140:
  Jump functions of caller  NvM_ASR40_SetRamBlockStatus/139:
  Jump functions of caller  NvM_ASR40_WriteBlock/138:
  Jump functions of caller  Dem_StoreImmediately/137:
  Jump functions of caller  Dem_ClearAgedEventEntry/136:
  Jump functions of caller  Dem_IntValEntryData/135:
  Jump functions of caller  Dem_SearchForEntry/134:
  Jump functions of caller  Dem_GbiNumAgingCycles/133:
  Jump functions of caller  Dem_GbiEventFailureClassIdx/127:
  Jump functions of caller  Dem_SetEvEntryExists/126:
  Jump functions of caller  TS_MemCpy32/125:
  Jump functions of caller  Dem_GbiDTCKind/123:
  Jump functions of caller  Dem_EvMemEntrySize/122:
  Jump functions of caller  Eb_Intgr_BswM_TriggerMemoryStack/120:
  Jump functions of caller  NvM_ASR40_ReadBlock/119:
  Jump functions of caller  NvM_ASR40_SetDataIndex/118:
  Jump functions of caller  NvM_ASR40_GetErrorStatus/117:
  Jump functions of caller  Dem_InitDTCMemoryFilter/116:
  Jump functions of caller  Dem_InitDataRecordSelector/115:
  Jump functions of caller  Dem_InitRecordFilter/114:
  Jump functions of caller  Dem_InitEventMemoryProcessor/113:
  Jump functions of caller  Dem_InitDTCSelector/112:
  Jump functions of caller  Dem_InitDTCFilter/111:
  Jump functions of caller  Dem_InitEventReportVerifier/110:
  Jump functions of caller  Dem_InitEvEntryExists/109:
  Jump functions of caller  Dem_GbiDebounceAlgo/106:
  Jump functions of caller  Det_ASR40_ReportError/105:
  Jump functions of caller  Dem_IsMILEvent/103:
  Jump functions of caller  Dem_OpCycleProcessEventCycleStart/102:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (EventId_7(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_OpCycleProcessCycleStart/101:
    callsite  Dem_OpCycleProcessCycleStart/101 -> Dem_UpdateFailureCounterCycleStart/92 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_OpCycleProcessCycleStart/101 -> Dem_OpCycleProcessEventCycleStart/102 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_OpCycleProcessCycleStart/101 -> Dem_ProcessIndicator/94 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_OpCycleProcessEventCycleEnd/100:
    callsite  Dem_OpCycleProcessEventCycleEnd/100 -> Dem_UpdateAgingCounter/67 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_OpCycleProcessCycleEnd/99:
    callsite  Dem_OpCycleProcessCycleEnd/99 -> Dem_ProcessFailureCounterReset/91 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [1, 15]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_OpCycleProcessCycleEnd/99 -> Dem_OpCycleProcessEventCycleEnd/100 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [1, 15]
  Jump functions of caller  Dem_CheckWIROffCriteriaFulfilled/98:
  Jump functions of caller  Dem_SetCycleCounterRole/97:
  Jump functions of caller  Dem_ProcessIndicatorOnCriteria/96:
    callsite  Dem_ProcessIndicatorOnCriteria/96 -> Dem_SetCycleCounterRole/97 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_ProcessIndicatorOffCriteria/95:
    callsite  Dem_ProcessIndicatorOffCriteria/95 -> Dem_CheckWIROffCriteriaFulfilled/98 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_ProcessIndicatorOffCriteria/95 -> Dem_SetCycleCounterRole/97 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_ProcessIndicator/94:
    callsite  Dem_ProcessIndicator/94 -> Dem_ProcessIndicatorOnCriteria/96 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dem_ProcessIndicator/94 -> Dem_ProcessIndicatorOffCriteria/95 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_IncrementFailureCounter/93:
  Jump functions of caller  Dem_UpdateFailureCounterCycleStart/92:
    callsite  Dem_UpdateFailureCounterCycleStart/92 -> Dem_IncrementFailureCounter/93 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_ProcessFailureCounterReset/91:
  Jump functions of caller  Dem_SetCDTCOnConfirmation/90:
    callsite  Dem_SetCDTCOnConfirmation/90 -> Dem_UpdateEventIdOccurKinds/74 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 2: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_InitMaxOBDOccOrder/89:
  Jump functions of caller  Dem_RearrangeOBDOccurrenceOrder/88:
  Jump functions of caller  Dem_InitMaxOccOrder/87:
  Jump functions of caller  Dem_RearrangeOccurrenceOrder/86:
  Jump functions of caller  Dem_UpdateOccurrenceOrder/85:
    callsite  Dem_UpdateOccurrenceOrder/85 -> Dem_RearrangeOccurrenceOrder/86 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_SearchForEmptyEntry/83:
  Jump functions of caller  Dem_ReadExternalDataElement/82:
    indirect simple callsite, calling param -1, offset 0, for stmt Result_10 = _2 (DestBuffer_8(D));
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_StoreED/81:
    callsite  Dem_StoreED/81 -> Dem_ReadExternalDataElement/82 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_StoreOBDFreezeFrame/80:
    callsite  Dem_StoreOBDFreezeFrame/80 -> Dem_ReadExternalDataElement/82 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ProcessEventEntryEData/78:
    callsite  Dem_ProcessEventEntryEData/78 -> Dem_StoreED/81 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 3: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ProcessEventEntryFFData/77:
    callsite  Dem_ProcessEventEntryFFData/77 -> Dem_StoreFF.isra.0/206 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_UpdateEventIdOccurKinds/74:
    callsite  Dem_UpdateEventIdOccurKinds/74 -> Dem_UpdateEventIdOccurKinds.part.0/204 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_ProcessEventStatusUpdate/73:
  Jump functions of caller  Dem_ProcessEvent/71:
    callsite  Dem_ProcessEvent/71 -> Dem_ProcessEvent.part.0/208 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_ProcessEvent/71 -> Dem_ProcessEventEntry.isra.0/207 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Unknown bits
         Unknown VR
    callsite  Dem_ProcessEvent/71 -> Dem_ProcessEventStatusUpdate/73 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_SetOBDFFOccurrenceOrder/70:
    callsite  Dem_SetOBDFFOccurrenceOrder/70 -> Dem_RearrangeOBDOccurrenceOrder/88 : 
  Jump functions of caller  Dem_SelectEntryOfOBDFreezeFrameEvent/69:
  Jump functions of caller  Dem_ProcessMultipleOBDFreezeFrameEntry/68:
    callsite  Dem_ProcessMultipleOBDFreezeFrameEntry/68 -> Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_ProcessMultipleOBDFreezeFrameEntry/68 -> Dem_SetOBDFFOccurrenceOrder/70 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_ProcessMultipleOBDFreezeFrameEntry/68 -> Dem_StoreOBDFreezeFrame/80 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_UpdateAgingCounter/67:
  Jump functions of caller  Dem_CheckErrorQueueEntryForStatus/65:
  Jump functions of caller  Dem_CheckErrorReQueueEntry/64:
    callsite  Dem_CheckErrorReQueueEntry/64 -> Dem_WriteErrorQueueEntry/62 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Unknown bits
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  Dem_CheckErrorQueueEntry/63:
  Jump functions of caller  Dem_WriteErrorQueueEntry/62:
  Jump functions of caller  Dem_ReadErrorQueueEntry/61:
  Jump functions of caller  Dem_InvalidateErrorQueueEntry/60:
  Jump functions of caller  Dem_PermanentMemoryInit/59:
    callsite  Dem_PermanentMemoryInit/59 -> Dem_NvMGetNvRAMBlockStatus/55 : 
       param 0: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_RestoreImmediateData/57:
    callsite  Dem_RestoreImmediateData/57 -> Dem_RestoreDerivedEventStatus.isra.0/198 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ResetNvData/56:
  Jump functions of caller  Dem_NvMGetNvRAMBlockStatus/55:
  Jump functions of caller  Dem_MainFunction/54:
    callsite  Dem_MainFunction/54 -> Dem_MainFunction.part.0/209 : 
  Jump functions of caller  Dem_SetDTCSuppression/53:
  Jump functions of caller  Dem_GetNumberOfEventMemoryEntries/52:
  Jump functions of caller  Dem_GetEventMemoryOverflow/51:
  Jump functions of caller  Dem_GetEventExtendedDataRecord/50:
  Jump functions of caller  Dem_ASR42_GetEventFreezeFrameData/49:
    callsite  Dem_ASR42_GetEventFreezeFrameData/49 -> Dem_ASR42_GetEventFreezeFrameData.part.0/203 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_GetEventFreezeFrameData/48:
    callsite  Dem_GetEventFreezeFrameData/48 -> Dem_ASR42_GetEventFreezeFrameData/49 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_GetIndicatorStatus/47:
  Jump functions of caller  Dem_GetFaultDetectionCounter/46:
    indirect simple callsite, calling param -1, offset 0, for stmt Result_11 = _2 (EventId_6(D), FaultDetectionCounter_7(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_GetEventFreezeFrameDataEx/45:
  Jump functions of caller  Dem_GetEventExtendedDataRecordEx/44:
  Jump functions of caller  Dem_GetDebouncingOfEvent/43:
  Jump functions of caller  Dem_SetEnableCondition/42:
  Jump functions of caller  Dem_GetDTCOfEvent/41:
  Jump functions of caller  Dem_GetEventTested/40:
  Jump functions of caller  Dem_GetEventFailed/39:
  Jump functions of caller  Dem_GetEventStatus/38:
  Jump functions of caller  Dem_SetCycleQualified/37:
    callsite  Dem_SetCycleQualified/37 -> Dem_IsMILEvent/103 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dem_SetOperationCycleState/36:
    callsite  Dem_SetOperationCycleState/36 -> Dem_OpCycleProcessCycleStart/101 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_SetOperationCycleState/36 -> Dem_OpCycleProcessCycleEnd/99 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_ClearPrestoredFreezeFrame/35:
  Jump functions of caller  Dem_PrestoreFreezeFrame/34:
  Jump functions of caller  Dem_ResetEventDebounceStatus/33:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (EventId_8(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (EventId_8(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ResetEventStatus/32:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (EventId_14(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_SetEventStatus/31:
  Jump functions of caller  Dem_ReportErrorStatusCore/30:
  Jump functions of caller  Dem_ReportErrorStatusPreInit/29:
    callsite  Dem_ReportErrorStatusPreInit/29 -> Dem_WriteErrorQueueEntry/62 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Unknown bits
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  Dem_ReportErrorStatusPreInit/29 -> Dem_CheckErrorQueueEntry/63 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dem_ReportErrorStatus/28:
    callsite  Dem_ReportErrorStatus/28 -> Dem_ReportErrorStatusCore/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_Shutdown/27:
    callsite  Dem_Shutdown/27 -> Dem_MainFunction/54 : 
  Jump functions of caller  Dem_Init/26:
    callsite  Dem_Init/26 -> Dem_InitMaxOBDOccOrder/89 : 
    callsite  Dem_Init/26 -> Dem_InitMaxOccOrder/87 : 
    callsite  Dem_Init/26 -> Dem_PermanentMemoryInit/59 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dem_Init/26 -> Dem_RestoreImmediateData/57 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dem_Init/26 -> Dem_ResetNvData/56 : 
    callsite  Dem_Init/26 -> Dem_NvMGetNvRAMBlockStatus/55 : 
       param 0: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 ();
  Jump functions of caller  Dem_PreInit/25:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (EvId_6);
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [1, 15]

 Propagating constants:

Not considering Dem_ProcessIndicatorOnCriteria for cloning; -fipa-cp-clone disabled.
Not considering Dem_IncrementFailureCounter for cloning; -fipa-cp-clone disabled.
Not considering Dem_ReadExternalDataElement for cloning; -fipa-cp-clone disabled.
Not considering Dem_UpdateEventIdOccurKinds for cloning; -fipa-cp-clone disabled.
Not considering Dem_ProcessEvent for cloning; -fipa-cp-clone disabled.
Not considering Dem_SelectEntryOfOBDFreezeFrameEvent for cloning; -fipa-cp-clone disabled.
Not considering Dem_ProcessMultipleOBDFreezeFrameEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckErrorQueueEntryForStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckErrorReQueueEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_CheckErrorQueueEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_WriteErrorQueueEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_ReadErrorQueueEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_InvalidateErrorQueueEntry for cloning; -fipa-cp-clone disabled.
Not considering Dem_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetDTCSuppression for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetNumberOfEventMemoryEntries for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventMemoryOverflow for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventExtendedDataRecord for cloning; -fipa-cp-clone disabled.
Not considering Dem_ASR42_GetEventFreezeFrameData for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventFreezeFrameData for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetIndicatorStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetFaultDetectionCounter for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventFreezeFrameDataEx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventExtendedDataRecordEx for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetDebouncingOfEvent for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetEnableCondition for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetDTCOfEvent for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventTested for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventFailed for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetCycleQualified for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetOperationCycleState for cloning; -fipa-cp-clone disabled.
Not considering Dem_ClearPrestoredFreezeFrame for cloning; -fipa-cp-clone disabled.
Not considering Dem_PrestoreFreezeFrame for cloning; -fipa-cp-clone disabled.
Not considering Dem_ResetEventDebounceStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_ResetEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetEventStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_ReportErrorStatusPreInit for cloning; -fipa-cp-clone disabled.
Not considering Dem_ReportErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_Shutdown for cloning; -fipa-cp-clone disabled.
Not considering Dem_Init for cloning; -fipa-cp-clone disabled.
Not considering Dem_PreInit for cloning; -fipa-cp-clone disabled.

overall_size: 3117, max_new_size: 11001
 - context independent values, size: 39, time_benefit: 2.000000
 - context independent values, size: 39, time_benefit: 1.000000
 - context independent values, size: 61, time_benefit: 50.100550
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 23, time_benefit: 1.000000
 - context independent values, size: 18, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 21, time_benefit: 2.595200
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 74, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 9, time_benefit: 1.000000
 - context independent values, size: 115, time_benefit: 5.320648
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 23, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 29, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dem_MainFunction.part.0/209:
  Node: Dem_ProcessEvent.part.0/208:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_ProcessEventEntry.isra.0/207:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_StoreFF.isra.0/206:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dem_FFClassType * const ~[0B, 0B]
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
  Node: Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205:
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
  Node: Dem_UpdateEventIdOccurKinds.part.0/204:
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
  Node: Dem_ASR42_GetEventFreezeFrameData.part.0/203:
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
  Node: Dem_FindOrAllocateEventEntry.isra.0/202:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dem_EventMemoryEntryType * * ~[0B, 0B]
        ref offset 0: 0B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_SizeEvMemEntryType * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         Dem_EventIdType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_ReplaceEventEntry.isra.0/201:
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
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dem_EventMemoryEntryType * * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_SizeEvMemEntryType * ~[0B, 0B]
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         Dem_EventIdType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_SearchForEntryToReplace.isra.0/200:
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
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dem_EventMemoryEntryType * * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_SizeEvMemEntryType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_FindFFSegIdx.isra.0/199:
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
         Bits: value = 0x0, mask = 0xfffffffe
         Dem_SizeFFType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_RestoreDerivedEventStatus.isra.0/198:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_FailureCycleCounterType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_IsMILEvent/103:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_IndicatorIdxType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_OpCycleProcessEventCycleStart/102:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_OpCycleProcessCycleStart/101:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_OpCycleProcessEventCycleEnd/100:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         Dem_EventIdType [1, 15]
        AGGS VARIABLE
  Node: Dem_OpCycleProcessCycleEnd/99:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_CheckWIROffCriteriaFulfilled/98:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_SetCycleCounterRole/97:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         Dem_IndicatorIdType [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
               0 [loc_time: 6, loc_size: 11, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: 0 [loc_time: 4, loc_size: 11, prop_time: 0, prop_size: 0]
               1 [loc_time: 4, loc_size: 10, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         Dem_IndicatorCounterDataRoleType [0, 1]
        AGGS VARIABLE
  Node: Dem_ProcessIndicatorOnCriteria/96:
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
  Node: Dem_ProcessIndicatorOffCriteria/95:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         Dem_IndicatorIdxType [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_ProcessIndicator/94:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_IncrementFailureCounter/93:
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
  Node: Dem_UpdateFailureCounterCycleStart/92:
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
  Node: Dem_ProcessFailureCounterReset/91:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         Dem_EventIdType [1, 15]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_SetCDTCOnConfirmation/90:
  Node: Dem_InitMaxOBDOccOrder/89:
  Node: Dem_RearrangeOBDOccurrenceOrder/88:
  Node: Dem_InitMaxOccOrder/87:
  Node: Dem_RearrangeOccurrenceOrder/86:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_UpdateOccurrenceOrder/85:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_SearchForEmptyEntry/83:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dem_EventMemoryEntryType * * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dem_SizeEvMemEntryType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_ReadExternalDataElement/82:
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
  Node: Dem_StoreED/81:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dem_EDClassType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_StoreOBDFreezeFrame/80:
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
  Node: Dem_ProcessEventEntryEData/78:
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
  Node: Dem_ProcessEventEntryFFData/77:
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
  Node: Dem_UpdateEventIdOccurKinds/74:
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
  Node: Dem_ProcessEventStatusUpdate/73:
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
  Node: Dem_ProcessEvent/71:
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
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SetOBDFFOccurrenceOrder/70:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_SelectEntryOfOBDFreezeFrameEvent/69:
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
  Node: Dem_ProcessMultipleOBDFreezeFrameEntry/68:
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
  Node: Dem_UpdateAgingCounter/67:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         Dem_EventIdType [1, 15]
        AGGS VARIABLE
  Node: Dem_CheckErrorQueueEntryForStatus/65:
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
  Node: Dem_CheckErrorReQueueEntry/64:
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
  Node: Dem_CheckErrorQueueEntry/63:
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
  Node: Dem_WriteErrorQueueEntry/62:
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
  Node: Dem_ReadErrorQueueEntry/61:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_InvalidateErrorQueueEntry/60:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_PermanentMemoryInit/59:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         boolean [0, 0]
        AGGS VARIABLE
  Node: Dem_RestoreImmediateData/57:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         boolean [0, 0]
        AGGS VARIABLE
  Node: Dem_ResetNvData/56:
  Node: Dem_NvMGetNvRAMBlockStatus/55:
    param [0]: 8 [loc_time: 1, loc_size: 12, prop_time: 0, prop_size: 0]
               4 [loc_time: 1, loc_size: 12, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x4, mask = 0xc
         NvM_BlockIdType [4, 8]
        AGGS VARIABLE
  Node: Dem_MainFunction/54:
  Node: Dem_SetDTCSuppression/53:
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
  Node: Dem_GetNumberOfEventMemoryEntries/52:
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
  Node: Dem_GetEventMemoryOverflow/51:
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
  Node: Dem_GetEventExtendedDataRecord/50:
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
  Node: Dem_ASR42_GetEventFreezeFrameData/49:
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
  Node: Dem_GetEventFreezeFrameData/48:
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
  Node: Dem_GetIndicatorStatus/47:
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
  Node: Dem_GetFaultDetectionCounter/46:
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
  Node: Dem_GetEventFreezeFrameDataEx/45:
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
  Node: Dem_GetEventExtendedDataRecordEx/44:
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
  Node: Dem_GetDebouncingOfEvent/43:
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
  Node: Dem_SetEnableCondition/42:
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
  Node: Dem_GetDTCOfEvent/41:
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
  Node: Dem_GetEventTested/40:
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
  Node: Dem_GetEventFailed/39:
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
  Node: Dem_GetEventStatus/38:
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
  Node: Dem_SetCycleQualified/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SetOperationCycleState/36:
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
  Node: Dem_ClearPrestoredFreezeFrame/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_PrestoreFreezeFrame/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ResetEventDebounceStatus/33:
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
  Node: Dem_ResetEventStatus/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SetEventStatus/31:
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
  Node: Dem_ReportErrorStatusCore/30:
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
    param [2]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         boolean [0, 0]
        AGGS VARIABLE
  Node: Dem_ReportErrorStatusPreInit/29:
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
  Node: Dem_ReportErrorStatus/28:
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
  Node: Dem_Shutdown/27:
  Node: Dem_Init/26:
  Node: Dem_PreInit/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of Dem_ProcessIndicatorOffCriteria/95 for all known contexts.
    replacing param #0 IndicatorIdx with const 0
 - Creating a specialized node of Dem_SetCycleCounterRole/97 for all known contexts.
    replacing param #0 IndicatorId with const 0
 - Creating a specialized node of Dem_ReportErrorStatusCore/30 for all known contexts.
    replacing param #2 QueuedInPreinitPhase with const 0
 - Creating a specialized node of Dem_FindOrAllocateEventEntry.isra.0/202 for all known contexts.
 - Creating a specialized node of Dem_RestoreImmediateData/57 for all known contexts.
    replacing param #0 ResetImmediateNvData with const 0
 - Creating a specialized node of Dem_PermanentMemoryInit/59 for all known contexts.
    replacing param #0 ResetPermanentNvData with const 0
Propagated bits info for function Dem_PermanentMemoryInit.constprop/215:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dem_RestoreImmediateData.constprop/214:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dem_FindOrAllocateEventEntry.isra.0.constprop/213:
 param 1: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_ReportErrorStatusCore.constprop/212:
 param 2: value = 0x0, mask = 0x0
Propagated bits info for function Dem_SetCycleCounterRole.constprop/211:
 param 0: value = 0x0, mask = 0x0
 param 2: value = 0x1, mask = 0x1
Propagated bits info for function Dem_ProcessIndicatorOffCriteria.constprop/210:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dem_StoreFF.isra.0/206:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dem_FindOrAllocateEventEntry.isra.0/202:
 param 1: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_ReplaceEventEntry.isra.0/201:
 param 2: value = 0x0, mask = 0xfffffffc
 param 4: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_SearchForEntryToReplace.isra.0/200:
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dem_FindFFSegIdx.isra.0/199:
 param 2: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_OpCycleProcessEventCycleEnd/100:
 param 0: value = 0x0, mask = 0xf
Propagated bits info for function Dem_SetCycleCounterRole/97:
 param 0: value = 0x0, mask = 0x0
 param 2: value = 0x1, mask = 0x1
Propagated bits info for function Dem_ProcessIndicatorOffCriteria/95:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dem_ProcessFailureCounterReset/91:
 param 0: value = 0x0, mask = 0xf
Propagated bits info for function Dem_SearchForEmptyEntry/83:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dem_StoreED/81:
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0x1
Propagated bits info for function Dem_UpdateAgingCounter/67:
 param 0: value = 0x0, mask = 0xf
Propagated bits info for function Dem_PermanentMemoryInit/59:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dem_RestoreImmediateData/57:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Dem_NvMGetNvRAMBlockStatus/55:
 param 0: value = 0x4, mask = 0xc
Propagated bits info for function Dem_ReportErrorStatusCore/30:
 param 2: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Dem_FindOrAllocateEventEntry.isra.0/202 Dem_SetCycleCounterRole/97 Dem_ProcessIndicatorOffCriteria/95 Dem_PermanentMemoryInit/59 Dem_RestoreImmediateData/57 Dem_ReportErrorStatusCore/30
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dem_PermanentMemoryInit.constprop.0/215 (Dem_PermanentMemoryInit.constprop) @06f48c40
  Type: function definition analyzed
  Visibility:
  References: Dem_EventMemoryPermanentUpdated/129 (write)Dem_EventMemoryPermanentUpdated/129 (write)Dem_EventMemoryPermanentUpdated/129 (write)Dem_EventMemoryPermanentUpdated/129 (read)Dem_EventMemoryPermanent/130 (write)Dem_EventMemoryPermanentNonVolatileStored/131 (write)Dem_EventMemoryPermanent/130 (read)Dem_EventMemoryPermanentNonVolatileStored/131 (write)Dem_EventMemoryPermanentNonVolatileStored/131 (write)
  Referring: 
  Clone of Dem_PermanentMemoryInit/59
  Availability: local
  Function flags: count:214748365 (estimated locally) local optimize_size
  Called by: Dem_Init/26 (45634028 (estimated locally),0.23 per call) 
  Calls: Dem_NvMGetNvRAMBlockStatus/55 (104969001 (estimated locally),0.49 per call) 
Dem_RestoreImmediateData.constprop.0/214 (Dem_RestoreImmediateData.constprop) @06f48700
  Type: function definition analyzed
  Visibility:
  References: Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_SizeEventMem/23 (read)Dem_NvGateEntryData/20 (read)Dem_NvDataBlockId/22 (read)Dem_EntryDataFreePos/19 (read)Dem_EventMem/17 (read)Dem_EvMemEntryExists/121 (read)Dem_NvGateEntryPrimaryData/14 (read)Dem_EntryOBDFF/124 (write)Dem_EntryOBDFF/124 (addr)Dem_NvGateEntryPrimaryData/14 (addr)Dem_EntryData/18 (read)Dem_GateEntryData/21 (read)
  Referring: 
  Clone of Dem_RestoreImmediateData/57
  Availability: local
  Function flags: count:67108864 (estimated locally) local optimize_size
  Called by: Dem_Init/26 (45634027 (estimated locally),0.23 per call) 
  Calls: NvM_ASR40_SetDataIndex/118 (47842374 (estimated locally),0.71 per call) NvM_ASR40_ReadBlock/119 (15787984 (estimated locally),0.24 per call) Eb_Intgr_BswM_TriggerMemoryStack/120 (47842374 (estimated locally),0.71 per call) NvM_ASR40_GetErrorStatus/117 (47842374 (estimated locally),0.71 per call) Dem_EvMemEntrySize/122 (1973498 (estimated locally),0.03 per call) Dem_GbiDTCKind/123 (428052 (estimated locally),0.01 per call) TS_MemCpy32/125 (86638 (estimated locally),0.00 per call) Dem_RestoreDerivedEventStatus.isra.0/198 (1973498 (estimated locally),0.03 per call) TS_MemCpy32/125 (651254 (estimated locally),0.01 per call) Dem_SetEvEntryExists/126 (1973498 (estimated locally),0.03 per call) 
Dem_FindOrAllocateEventEntry.isra.0.constprop.0/213 (Dem_FindOrAllocateEventEntry.isra.0.constprop) @06f482a0
  Type: function definition analyzed
  Visibility: artificial
  References: Dem_OpCycleState/108 (read)Dem_EntryDataFreePos/19 (read)Dem_EvIdOfLockedMemoryEntry/132 (read)
  Referring: 
  Clone of Dem_FindOrAllocateEventEntry.isra.0/202
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Dem_ProcessEventEntry.isra.0/207 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_GbiDTCOriginIdx/190 (1073741823 (estimated locally),1.00 per call) Dem_GbiEventFailureClassIdx/127 (1073741823 (estimated locally),1.00 per call) Dem_SearchForEntry/134 (1073741823 (estimated locally),1.00 per call) Dem_SearchForEmptyEntry/83 (354334802 (estimated locally),0.33 per call) Dem_ReplaceEventEntry.isra.0/201 (177167401 (estimated locally),0.17 per call) Dem_EvMemEntrySize/122 (265751101 (estimated locally),0.25 per call) Dem_SetEvEntryExists/126 (265751101 (estimated locally),0.25 per call) Dem_GbiEventFailureCycleIdx/149 (129899138 (estimated locally),0.12 per call) Dem_GbiOpCycleIdx/147 (129899138 (estimated locally),0.12 per call) 
Dem_ReportErrorStatusCore.constprop.0/212 (Dem_ReportErrorStatusCore.constprop) @06f3dd20
  Type: function definition analyzed
  Visibility:
  References: Dem_InitializationState/104 (read)
  Referring: 
  Clone of Dem_ReportErrorStatusCore/30
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dem_ReportErrorStatus/28 (80735453 (estimated locally),0.08 per call) 
  Calls: Dem_InternalProcessEventReport/141 (655125450 (estimated locally),0.61 per call) Dem_InternalProcessEventReport/141 (418616375 (estimated locally),0.39 per call) Det_ASR40_ReportError/105 (84727954 (estimated locally),0.08 per call) 
Dem_SetCycleCounterRole.constprop.0/211 (Dem_SetCycleCounterRole.constprop) @06f33d20
  Type: function definition analyzed
  Visibility:
  References: Dem_NvData/16 (addr)
  Referring: 
  Clone of Dem_SetCycleCounterRole/97
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dem_ProcessIndicatorOnCriteria/96 (354334802 (estimated locally),0.33 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (116930484 (estimated locally),0.11 per call) 
  Calls: 
Dem_ProcessIndicatorOffCriteria.constprop.0/210 (Dem_ProcessIndicatorOffCriteria.constprop) @06eea2a0
  Type: function definition analyzed
  Visibility:
  References: Dem_NvData/16 (read)Dem_IndicatorLink/151 (read)Dem_HealingCycleCounterInfo/154 (read)Dem_NvData/16 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (read)Dem_IndicatorDesc/155 (read)Dem_IndicatorDesc/155 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)
  Referring: 
  Clone of Dem_ProcessIndicatorOffCriteria/95
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Dem_ProcessIndicator/94 (205372451 (estimated locally),3.48 per call) 
  Calls: SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (354334802 (estimated locally),0.33 per call) Dem_SetCycleCounterRole.constprop/211 (116930484 (estimated locally),0.11 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (116930484 (estimated locally),0.11 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (237404317 (estimated locally),0.22 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (19585856 (estimated locally),0.02 per call) Dem_PermanentMemoryRemoveEntry/156 (19585856 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (19585856 (estimated locally),0.02 per call) Dem_CheckWIROffCriteriaFulfilled/98 (118702158 (estimated locally),0.11 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (24025317 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (24025317 (estimated locally),0.02 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (24025317 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (24025317 (estimated locally),0.02 per call) 
Dem_MainFunction.part.0/209 (Dem_MainFunction.part.0) @07217e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_NvData/16 (read)Dem_ClearDtcAsyncStatus/13 (read)Dem_DoProcessFaultConfirmation/0 (read)Dem_DoProcessFaultConfirmation/0 (write)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_MainFunction/54 (118111600 (estimated locally),0.34 per call) 
  Calls: SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (1073741824 (estimated locally),9.09 per call) Dem_ReadErrorQueueEntry/61 (1073741824 (estimated locally),9.09 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (1073741824 (estimated locally),9.09 per call) Dem_GbiEventKind/140 (536870913 (estimated locally),4.55 per call) Dem_ProcessEvent/71 (536870913 (estimated locally),4.55 per call) Dem_ProcessClearDTC/183 (23905788 (estimated locally),0.20 per call) Dem_SetCDTCOnConfirmation/90 (38976828 (estimated locally),0.33 per call) Dem_CheckForTriggerNvmWriteGateEntry/146 (78544214 (estimated locally),0.67 per call) 
Dem_ProcessEvent.part.0/208 (Dem_ProcessEvent.part.0) @072178c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_ProcessEvent/71 (108662672 (estimated locally),0.10 per call) 
  Calls: Det_ASR40_ReportError/105 (1073741824 (estimated locally),1.00 per call) 
Dem_ProcessEventEntry.isra.0/207 (Dem_ProcessEventEntry.isra.0) @072468c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_EventFailureCycleCfg/128 (read)Dem_NvData/16 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEvent/71 (536870913 (estimated locally),0.50 per call) 
  Calls: Dem_CheckForImmediateEntryStorage/148 (354334802 (estimated locally),0.33 per call) Dem_UpdateOccurrenceOrder/85 (354334802 (estimated locally),0.33 per call) Dem_UpdateEventIdOccurKinds/74 (28569324 (estimated locally),0.03 per call) Dem_GbiOpCycleIdx/147 (43116479 (estimated locally),0.04 per call) Dem_GbiEventFailureClassIdx/127 (71717364 (estimated locally),0.07 per call) Dem_ProcessMultipleOBDFreezeFrameEntry/68 (30720827 (estimated locally),0.03 per call) Dem_GbiDTCKind/123 (354334802 (estimated locally),0.33 per call) Dem_ProcessEventEntryFFData/77 (354334802 (estimated locally),0.33 per call) Dem_ProcessEventEntryEData/78 (354334802 (estimated locally),0.33 per call) Dem_GbiNumAgingCycles/133 (116930485 (estimated locally),0.11 per call) Dem_IntValEntryData/135 (116930485 (estimated locally),0.11 per call) Dem_GbiNumAgingCycles/133 (354334802 (estimated locally),0.33 per call) Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (1073741824 (estimated locally),1.00 per call) 
Dem_StoreFF.isra.0/206 (Dem_StoreFF.isra.0) @07246380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_FFSegment/174 (read)Dem_DataElement/185 (read)Dem_FFSegment/174 (read)
  Referring: 
  Availability: local
  Function flags: count:15990487 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEventEntryFFData/77 (481431977 (estimated locally),0.45 per call) 
  Calls: Dem_ReadExternalDataElement/82 (437450370 (estimated locally),27.36 per call) 
Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205 (Dem_ProcessMultipleOBDFreezeFrameEntry.part.0) @07246b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_EventMemoryPrimary/5 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_ProcessMultipleOBDFreezeFrameEntry/68 (217325344 (estimated locally),0.20 per call) 
  Calls: Dem_CheckForImmediateEntryStorage/148 (1073741824 (estimated locally),1.00 per call) 
Dem_UpdateEventIdOccurKinds.part.0/204 (Dem_UpdateEventIdOccurKinds.part.0) @072462a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_UpdateEventIdOccurKinds/74 (108662673 (estimated locally),0.10 per call) 
  Calls: Dem_GetVisibleUdsDTC/196 (354334802 (estimated locally),0.33 per call) 
Dem_ASR42_GetEventFreezeFrameData.part.0/203 (Dem_ASR42_GetEventFreezeFrameData.part.0) @072179a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_FFClass/170 (addr)Dem_FFSegment/174 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_ASR42_GetEventFreezeFrameData/49 (320495581 (estimated locally),0.30 per call) 
  Calls: Det_ASR40_ReportError/105 (201326592 (estimated locally),0.19 per call) Dem_GbiMaxNumFFRecs/167 (872415233 (estimated locally),0.81 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (872415233 (estimated locally),0.81 per call) Dem_CheckFFRecNumValid/168 (426436566 (estimated locally),0.40 per call) Dem_GbiFFClassIdx/169 (413161895 (estimated locally),0.38 per call) Dem_FindFFSegIdx.isra.0/199 (136343426 (estimated locally),0.13 per call) Dem_SearchForEntry/134 (301119000 (estimated locally),0.28 per call) Dem_CheckFFRecNumStored/171 (50043569 (estimated locally),0.05 per call) Dem_FFEntryData/172 (33785552 (estimated locally),0.03 per call) Dem_SizeOfFF/173 (11487088 (estimated locally),0.01 per call) TS_MemCpy32/125 (11487088 (estimated locally),0.01 per call) Dem_SizeOfFFSegment/175 (22298464 (estimated locally),0.02 per call) TS_MemCpy32/125 (22298464 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (872415233 (estimated locally),0.81 per call) 
Dem_FindOrAllocateEventEntry.isra.0/202 (Dem_FindOrAllocateEventEntry.isra.0) @07217c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ReplaceEventEntry.isra.0/201 (Dem_ReplaceEventEntry.isra.0) @072177e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_EvIdOfLockedMemoryEntry/132 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (read)Dem_NvData/16 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (177167401 (estimated locally),0.17 per call) 
  Calls: TS_AtomicSetBit_8/192 (354334802 (estimated locally),0.33 per call) Dem_ClearEventEntry/191 (124088047 (estimated locally),0.12 per call) Dem_SearchForEntryToReplace.isra.0/200 (1073741823 (estimated locally),1.00 per call) 
Dem_SearchForEntryToReplace.isra.0/200 (Dem_SearchForEntryToReplace.isra.0) @07217000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_SizeEventMem/23 (read)Dem_EventMem/17 (read)Dem_NvData/16 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: local
  Function flags: count:118111602 (estimated locally) body local optimize_size
  Called by: Dem_ReplaceEventEntry.isra.0/201 (1073741823 (estimated locally),1.00 per call) 
  Calls: Dem_GbiPriority/187 (955630223 (estimated locally),8.09 per call) Dem_GbiPriority/187 (118111602 (estimated locally),1.00 per call) 
Dem_FindFFSegIdx.isra.0/199 (Dem_FindFFSegIdx.isra.0) @070afa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_FFSegment/174 (read)Dem_FFSegment/174 (addr)
  Referring: 
  Availability: local
  Function flags: count:101162795 (estimated locally) body local optimize_size
  Called by: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (136343426 (estimated locally),0.13 per call) 
  Calls: Dem_SizeOfFFSegment/175 (632859673 (estimated locally),6.26 per call) 
Dem_RestoreDerivedEventStatus.isra.0/198 (Dem_RestoreDerivedEventStatus.isra.0) @0691f620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_EventFailureCycleCfg/128 (read)Dem_NvData/16 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (1973498 (estimated locally),0.03 per call) 
  Calls: Dem_GbiEventFailureClassIdx/127 (1073741823 (estimated locally),1.00 per call) 
Dem_FailureCycleCounterInfo/197 (Dem_FailureCycleCounterInfo) @0702fc60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ProcessIndicatorOnCriteria/96 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GetVisibleUdsDTC/196 (Dem_GetVisibleUdsDTC) @07030000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_UpdateEventIdOccurKinds/74 (217325345 (estimated locally),0.20 per call) Dem_UpdateEventIdOccurKinds.part.0/204 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_GbiDTCOrigin/195 (Dem_GbiDTCOrigin) @0700fee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_UpdateEventIdOccurKinds/74 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_SizeOfED/194 (Dem_SizeOfED) @0700f700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventEntryEData/78 (118111600 (estimated locally),0.12 per call) 
  Calls: 
Dem_EDEntryData/193 (Dem_EDEntryData) @0700f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventEntryEData/78 (463182746 (estimated locally),0.48 per call) 
  Calls: 
TS_AtomicSetBit_8/192 (TS_AtomicSetBit_8) @0700f1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ReplaceEventEntry.isra.0/201 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_ClearEventEntry/191 (Dem_ClearEventEntry) @0700f0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ReplaceEventEntry.isra.0/201 (124088047 (estimated locally),0.12 per call) 
  Calls: 
Dem_GbiDTCOriginIdx/190 (Dem_GbiDTCOriginIdx) @06ff8e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (1073741823 (estimated locally),1.00 per call) Dem_UpdateOccurrenceOrder/85 (173919332 (estimated locally),1.00 per call) 
  Calls: 
Dem_UpdateEventStatusOnQualification/189 (Dem_UpdateEventStatusOnQualification) @06ff89a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventStatusUpdate/73 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_CheckForEventWIRUpdate/188 (Dem_CheckForEventWIRUpdate) @06ff88c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventStatusUpdate/73 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_GbiPriority/187 (Dem_GbiPriority) @06ff8540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SelectEntryOfOBDFreezeFrameEvent/69 (9298368 (estimated locally),0.03 per call) Dem_SelectEntryOfOBDFreezeFrameEvent/69 (9298368 (estimated locally),0.03 per call) Dem_SearchForEntryToReplace.isra.0/200 (955630223 (estimated locally),8.09 per call) Dem_SearchForEntryToReplace.isra.0/200 (118111602 (estimated locally),1.00 per call) 
  Calls: 
Dem_GetVisibleCmbDTC/186 (Dem_GetVisibleCmbDTC) @06ff8460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SelectEntryOfOBDFreezeFrameEvent/69 (715863676 (estimated locally),2.00 per call) 
  Calls: 
Dem_DataElement/185 (Dem_DataElement) @06ff7120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_StoreED/81 (read)Dem_ReadExternalDataElement/82 (read)Dem_StoreOBDFreezeFrame/80 (read)Dem_ReadExternalDataElement/82 (read)Dem_StoreFF.isra.0/206 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_PidClass/184 (Dem_PidClass) @06ff70d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_StoreOBDFreezeFrame/80 (read)Dem_StoreOBDFreezeFrame/80 (read)Dem_StoreOBDFreezeFrame/80 (read)Dem_StoreOBDFreezeFrame/80 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_ProcessClearDTC/183 (Dem_ProcessClearDTC) @06fe11c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_MainFunction.part.0/209 (23905788 (estimated locally),0.20 per call) 
  Calls: 
Dem_InternalSetDTCSuppression/182 (Dem_InternalSetDTCSuppression) @06fa6e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SetDTCSuppression/53 (66178201 (estimated locally),0.06 per call) 
  Calls: 
Dem_GetMappedDTCOrigin/181 (Dem_GetMappedDTCOrigin) @06fa69a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetNumberOfEventMemoryEntries/52 (233009030 (estimated locally),0.22 per call) Dem_GetEventMemoryOverflow/51 (233009030 (estimated locally),0.22 per call) 
  Calls: 
Dem_AssembleExtendedDataSeg/180 (Dem_AssembleExtendedDataSeg) @06fa67e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetEventExtendedDataRecord/50 (133105648 (estimated locally),0.12 per call) 
  Calls: 
Dem_EDSegment/179 (Dem_EDSegment) @06fb2240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetEventExtendedDataRecord/50 (read)Dem_GetEventExtendedDataRecord/50 (addr)Dem_StoreED/81 (read)Dem_StoreED/81 (read)Dem_StoreED/81 (read)Dem_StoreED/81 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_FindEDNumIndex/178 (Dem_FindEDNumIndex) @06fa6700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetEventExtendedDataRecord/50 (28243230 (estimated locally),0.03 per call) 
  Calls: 
Dem_EDClass/177 (Dem_EDClass) @06fb2120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetEventExtendedDataRecord/50 (read)Dem_GetEventExtendedDataRecord/50 (addr)Dem_GetEventExtendedDataRecord/50 (read)Dem_GetEventExtendedDataRecord/50 (read)Dem_GetEventExtendedDataRecord/50 (read)Dem_ProcessEventEntryEData/78 (addr)Dem_ProcessEventEntryEData/78 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiEDClassIdx/176 (Dem_GbiEDClassIdx) @06fa6620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventEntryEData/78 (969610103 (estimated locally),1.00 per call) Dem_GetEventExtendedDataRecord/50 (57780749 (estimated locally),0.05 per call) 
  Calls: 
Dem_SizeOfFFSegment/175 (Dem_SizeOfFFSegment) @06fa61c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (22298464 (estimated locally),0.02 per call) Dem_FindFFSegIdx.isra.0/199 (632859673 (estimated locally),6.26 per call) 
  Calls: 
Dem_FFSegment/174 (Dem_FFSegment) @06fa4f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (addr)Dem_FindFFSegIdx.isra.0/199 (addr)Dem_StoreFF.isra.0/206 (read)Dem_StoreFF.isra.0/206 (read)Dem_FindFFSegIdx.isra.0/199 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_SizeOfFF/173 (Dem_SizeOfFF) @06fa60e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (11487088 (estimated locally),0.01 per call) 
  Calls: 
Dem_FFEntryData/172 (Dem_FFEntryData) @06fa6000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventEntryFFData/77 (481431977 (estimated locally),0.45 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (33785552 (estimated locally),0.03 per call) 
  Calls: 
Dem_CheckFFRecNumStored/171 (Dem_CheckFFRecNumStored) @06969380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (50043569 (estimated locally),0.05 per call) 
  Calls: 
Dem_FFClass/170 (Dem_FFClass) @06fa4d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (addr)Dem_ProcessEventEntryFFData/77 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiFFClassIdx/169 (Dem_GbiFFClassIdx) @06969ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventEntryFFData/77 (1073741824 (estimated locally),1.00 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (413161895 (estimated locally),0.38 per call) 
  Calls: 
Dem_CheckFFRecNumValid/168 (Dem_CheckFFRecNumValid) @06969e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (426436566 (estimated locally),0.40 per call) 
  Calls: 
Dem_GbiMaxNumFFRecs/167 (Dem_GbiMaxNumFFRecs) @06969d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessEventEntryFFData/77 (686872646 (estimated locally),0.64 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (872415233 (estimated locally),0.81 per call) 
  Calls: 
Dem_InternalGetIndicatorStatus/166 (Dem_InternalGetIndicatorStatus) @069698c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetIndicatorStatus/47 (257432609 (estimated locally),0.24 per call) 
  Calls: 
Dem_EnCondGrpStatusCounter/165 (Dem_EnCondGrpStatusCounter) @0696d360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SetEnableCondition/42 (read)Dem_SetEnableCondition/42 (write)Dem_SetEnableCondition/42 (read)Dem_SetEnableCondition/42 (write)
  Availability: not_available
  Varpool flags:
Dem_EnCondGrpLink/164 (Dem_EnCondGrpLink) @0696d318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SetEnableCondition/42 (read)Dem_SetEnableCondition/42 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EnCondToEvIdLink/163 (Dem_EnCondToEvIdLink) @0696d2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SetEnableCondition/42 (read)Dem_SetEnableCondition/42 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EnCondStatus/162 (Dem_EnCondStatus) @0696d288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SetEnableCondition/42 (read)Dem_SetEnableCondition/42 (write)
  Availability: not_available
  Varpool flags:
Dem_GetUdsDTC/161 (Dem_GetUdsDTC) @069691c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetDTCOfEvent/41 (87327809 (estimated locally),0.08 per call) 
  Calls: 
Dem_GetObdDTC/160 (Dem_GetObdDTC) @069690e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SelectEntryOfOBDFreezeFrameEvent/69 (715863676 (estimated locally),2.00 per call) Dem_GetDTCOfEvent/41 (87995508 (estimated locally),0.08 per call) 
  Calls: 
Dem_GbiIndicatorUsed/159 (Dem_GbiIndicatorUsed) @06953c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_IsMILEvent/103 (337833918 (estimated locally),1.00 per call) 
  Calls: 
Dem_PermanentMemoryAddEntry/158 (Dem_PermanentMemoryAddEntry) @06953a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SetCycleQualified/37 (4935302 (estimated locally),0.03 per call) 
  Calls: 
Dem_ProcessIndicatorFailureCycleCounter/157 (Dem_ProcessIndicatorFailureCycleCounter) @069539a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SetCycleQualified/37 (24383904 (estimated locally),0.15 per call) 
  Calls: 
Dem_PermanentMemoryRemoveEntry/156 (Dem_PermanentMemoryRemoveEntry) @069531c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessIndicatorOffCriteria.constprop/210 (19585856 (estimated locally),0.02 per call) 
  Calls: 
Dem_IndicatorDesc/155 (Dem_IndicatorDesc) @069518b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_IsMILEvent/103 (read)Dem_IsMILEvent/103 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_HealingCycleCounterInfo/154 (Dem_HealingCycleCounterInfo) @06951798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiIndicatorHealingCycleIdx/153 (Dem_GbiIndicatorHealingCycleIdx) @0693ae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessIndicator/94 (1014686025 (estimated locally),17.18 per call) 
  Calls: 
Dem_GbiIndicatorFailureCycleIdx/152 (Dem_GbiIndicatorFailureCycleIdx) @0693ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessIndicator/94 (1014686025 (estimated locally),17.18 per call) 
  Calls: 
Dem_IndicatorLink/151 (Dem_IndicatorLink) @06949c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_IsMILEvent/103 (read)Dem_ProcessIndicatorOnCriteria/96 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_CheckWIROffCriteriaFulfilled/98 (read)Dem_ProcessIndicator/94 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_PermanentMemoryStatusUpdate/150 (Dem_PermanentMemoryStatusUpdate) @0693ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_OpCycleProcessCycleStart/101 (2873395 (estimated locally),0.20 per call) 
  Calls: 
Dem_GbiEventFailureCycleIdx/149 (Dem_GbiEventFailureCycleIdx) @0693a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (129899138 (estimated locally),0.12 per call) Dem_UpdateFailureCounterCycleStart/92 (524845004 (estimated locally),0.49 per call) Dem_ProcessFailureCounterReset/91 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dem_CheckForImmediateEntryStorage/148 (Dem_CheckForImmediateEntryStorage) @0693a7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_IncrementFailureCounter/93 (108662672 (estimated locally),0.10 per call) Dem_ProcessEventEntry.isra.0/207 (354334802 (estimated locally),0.33 per call) Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205 (1073741824 (estimated locally),1.00 per call) Dem_SetCDTCOnConfirmation/90 (62812990 (estimated locally),2.13 per call) Dem_ProcessFailureCounterReset/91 (11918852 (estimated locally),0.01 per call) Dem_UpdateAgingCounter/67 (132329403 (estimated locally),0.12 per call) 
  Calls: 
Dem_GbiOpCycleIdx/147 (Dem_GbiOpCycleIdx) @0693a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (129899138 (estimated locally),0.12 per call) Dem_OpCycleProcessCycleStart/101 (1073741824 (estimated locally),75.63 per call) Dem_ProcessIndicator/94 (679839637 (estimated locally),11.51 per call) Dem_UpdateFailureCounterCycleStart/92 (524845004 (estimated locally),0.49 per call) Dem_ProcessEventEntry.isra.0/207 (43116479 (estimated locally),0.04 per call) Dem_SetCDTCOnConfirmation/90 (157678987 (estimated locally),5.34 per call) Dem_SetCycleQualified/37 (1073741824 (estimated locally),6.52 per call) Dem_OpCycleProcessCycleEnd/99 (1002123246 (estimated locally),13.99 per call) 
  Calls: 
Dem_CheckForTriggerNvmWriteGateEntry/146 (Dem_CheckForTriggerNvmWriteGateEntry) @0693a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SetOperationCycleState/36 (215213661 (estimated locally),0.20 per call) Dem_MainFunction.part.0/209 (78544214 (estimated locally),0.67 per call) 
  Calls: 
Dem_GbiEnablePrestorage/145 (Dem_GbiEnablePrestorage) @0693a0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearPrestoredFreezeFrame/35 (183880435 (estimated locally),0.17 per call) Dem_PrestoreFreezeFrame/34 (183880435 (estimated locally),0.17 per call) 
  Calls: 
SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @0692aa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessIndicatorOffCriteria.constprop/210 (116930484 (estimated locally),0.11 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (237404317 (estimated locally),0.22 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (19585856 (estimated locally),0.02 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (24025317 (estimated locally),0.02 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (24025317 (estimated locally),0.02 per call) Dem_OpCycleProcessCycleStart/101 (114863532 (estimated locally),8.09 per call) Dem_OpCycleProcessCycleStart/101 (2873395 (estimated locally),0.20 per call) Dem_ProcessIndicator/94 (37391180 (estimated locally),0.63 per call) Dem_MainFunction.part.0/209 (1073741824 (estimated locally),9.09 per call) Dem_ProcessEvent/71 (536870913 (estimated locally),0.50 per call) Dem_ProcessEvent/71 (536870913 (estimated locally),0.50 per call) Dem_StoreOBDFreezeFrame/80 (437450371 (estimated locally),16.18 per call) Dem_SetCDTCOnConfirmation/90 (955630225 (estimated locally),32.36 per call) Dem_ReportErrorStatusPreInit/29 (236674130 (estimated locally),0.22 per call) Dem_ReportErrorStatusPreInit/29 (37130035 (estimated locally),0.03 per call) Dem_GetEventExtendedDataRecord/50 (34737786 (estimated locally),0.03 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (872415233 (estimated locally),0.81 per call) Dem_SetEnableCondition/42 (150781957 (estimated locally),0.14 per call) Dem_SetCycleQualified/37 (114863532 (estimated locally),0.70 per call) Dem_SetCycleQualified/37 (14196617 (estimated locally),0.09 per call) Dem_SetCycleQualified/37 (14196617 (estimated locally),0.09 per call) Dem_ResetEventStatus/32 (183880435 (estimated locally),0.17 per call) Dem_ProcessFailureCounterReset/91 (58887609 (estimated locally),0.05 per call) Dem_OpCycleProcessEventCycleEnd/100 (1073741824 (estimated locally),1.00 per call) Dem_UpdateAgingCounter/67 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @0692a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessIndicatorOffCriteria.constprop/210 (354334802 (estimated locally),0.33 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (19585856 (estimated locally),0.02 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (24025317 (estimated locally),0.02 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (24025317 (estimated locally),0.02 per call) Dem_OpCycleProcessCycleStart/101 (114863532 (estimated locally),8.09 per call) Dem_OpCycleProcessCycleStart/101 (2873395 (estimated locally),0.20 per call) Dem_ProcessIndicator/94 (37391180 (estimated locally),0.63 per call) Dem_MainFunction.part.0/209 (1073741824 (estimated locally),9.09 per call) Dem_ProcessEvent/71 (1073741824 (estimated locally),1.00 per call) Dem_StoreOBDFreezeFrame/80 (437450370 (estimated locally),16.18 per call) Dem_SetCDTCOnConfirmation/90 (955630225 (estimated locally),32.36 per call) Dem_ReportErrorStatusPreInit/29 (273804165 (estimated locally),0.26 per call) Dem_GetEventExtendedDataRecord/50 (34737786 (estimated locally),0.03 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (872415233 (estimated locally),0.81 per call) Dem_SetEnableCondition/42 (150781957 (estimated locally),0.14 per call) Dem_SetCycleQualified/37 (114863532 (estimated locally),0.70 per call) Dem_SetCycleQualified/37 (28393234 (estimated locally),0.17 per call) Dem_ResetEventStatus/32 (183880435 (estimated locally),0.17 per call) Dem_ProcessFailureCounterReset/91 (58887609 (estimated locally),0.05 per call) Dem_OpCycleProcessEventCycleEnd/100 (1073741824 (estimated locally),1.00 per call) Dem_UpdateAgingCounter/67 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_DebounceEvent/142 (Dem_DebounceEvent) @0692a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ReportErrorStatusPreInit/29 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dem_InternalProcessEventReport/141 (Dem_InternalProcessEventReport) @0692a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ReportErrorStatusCore.constprop/212 (655125450 (estimated locally),0.61 per call) Dem_ReportErrorStatusCore.constprop/212 (418616375 (estimated locally),0.39 per call) Dem_SetEventStatus/31 (41887963 (estimated locally),0.04 per call) 
  Calls: 
Dem_GbiEventKind/140 (Dem_GbiEventKind) @0692a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_MainFunction.part.0/209 (536870913 (estimated locally),4.55 per call) Dem_SetEventStatus/31 (123199891 (estimated locally),0.11 per call) Dem_ReportErrorStatus/28 (161470906 (estimated locally),0.15 per call) 
  Calls: 
NvM_ASR40_SetRamBlockStatus/139 (NvM_ASR40_SetRamBlockStatus) @0692a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_Shutdown/27 (191615188 (estimated locally),0.34 per call) 
  Calls: 
NvM_ASR40_WriteBlock/138 (NvM_ASR40_WriteBlock) @0692a2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_OpCycleProcessCycleStart/101 (581575 (estimated locally),0.04 per call) Dem_Shutdown/27 (104068131 (estimated locally),0.18 per call) Dem_OpCycleProcessCycleEnd/99 (7247800 (estimated locally),0.10 per call) 
  Calls: 
Dem_StoreImmediately/137 (Dem_StoreImmediately) @0692a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_Shutdown/27 (104068131 (estimated locally),0.18 per call) 
  Calls: 
Dem_ClearAgedEventEntry/136 (Dem_ClearAgedEventEntry) @0692a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_Shutdown/27 (1393742 (estimated locally),0.00 per call) Dem_UpdateAgingCounter/67 (47333460 (estimated locally),0.04 per call) 
  Calls: 
Dem_IntValEntryData/135 (Dem_IntValEntryData) @0691fee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_Shutdown/27 (4223459 (estimated locally),0.01 per call) Dem_ProcessEventEntry.isra.0/207 (116930485 (estimated locally),0.11 per call) Dem_UpdateAgingCounter/67 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_SearchForEntry/134 (Dem_SearchForEntry) @0691fe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (1073741823 (estimated locally),1.00 per call) Dem_IncrementFailureCounter/93 (1073741823 (estimated locally),1.00 per call) Dem_Shutdown/27 (20866894 (estimated locally),0.04 per call) Dem_GetEventExtendedDataRecord/50 (34737786 (estimated locally),0.03 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (301119000 (estimated locally),0.28 per call) Dem_ProcessFailureCounterReset/91 (58887609 (estimated locally),0.05 per call) Dem_UpdateAgingCounter/67 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_GbiNumAgingCycles/133 (Dem_GbiNumAgingCycles) @0691fd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_Shutdown/27 (63233012 (estimated locally),0.11 per call) Dem_ProcessEventEntry.isra.0/207 (116930485 (estimated locally),0.11 per call) Dem_ProcessEventEntry.isra.0/207 (354334802 (estimated locally),0.33 per call) Dem_OpCycleProcessEventCycleEnd/100 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_EvIdOfLockedMemoryEntry/132 (Dem_EvIdOfLockedMemoryEntry) @06929318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ReplaceEventEntry.isra.0/201 (read)Dem_FindOrAllocateEventEntry.isra.0.constprop.0/213 (read)Dem_UpdateAgingCounter/67 (read)Dem_Shutdown/27 (read)
  Availability: not_available
  Varpool flags:
Dem_EventMemoryPermanentNonVolatileStored/131 (Dem_EventMemoryPermanentNonVolatileStored) @06921558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_PermanentMemoryInit.constprop.0/215 (write)Dem_PermanentMemoryInit.constprop.0/215 (write)Dem_PermanentMemoryInit.constprop.0/215 (write)
  Availability: not_available
  Varpool flags:
Dem_EventMemoryPermanent/130 (Dem_EventMemoryPermanent) @06921510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_PermanentMemoryInit.constprop.0/215 (read)Dem_PermanentMemoryInit.constprop.0/215 (write)Dem_GetNumberOfEventMemoryEntries/52 (read)
  Availability: not_available
  Varpool flags:
Dem_EventMemoryPermanentUpdated/129 (Dem_EventMemoryPermanentUpdated) @06921480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_OpCycleProcessCycleEnd/99 (read)Dem_PermanentMemoryInit.constprop.0/215 (read)Dem_PermanentMemoryInit.constprop.0/215 (write)Dem_PermanentMemoryInit.constprop.0/215 (write)Dem_PermanentMemoryInit.constprop.0/215 (write)Dem_OpCycleProcessCycleStart/101 (read)
  Availability: not_available
  Varpool flags:
Dem_EventFailureCycleCfg/128 (Dem_EventFailureCycleCfg) @0691df78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SetCDTCOnConfirmation/90 (read)Dem_ProcessEventEntry.isra.0/207 (read)Dem_RestoreDerivedEventStatus.isra.0/198 (read)Dem_IncrementFailureCounter/93 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiEventFailureClassIdx/127 (Dem_GbiEventFailureClassIdx) @0691f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (1073741823 (estimated locally),1.00 per call) Dem_UpdateFailureCounterCycleStart/92 (1073741824 (estimated locally),1.00 per call) Dem_IncrementFailureCounter/93 (217325345 (estimated locally),0.20 per call) Dem_ProcessEventEntry.isra.0/207 (71717364 (estimated locally),0.07 per call) Dem_SetCDTCOnConfirmation/90 (104479358 (estimated locally),3.54 per call) Dem_ProcessFailureCounterReset/91 (1073741824 (estimated locally),1.00 per call) Dem_RestoreDerivedEventStatus.isra.0/198 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dem_SetEvEntryExists/126 (Dem_SetEvEntryExists) @0691f380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (1973498 (estimated locally),0.03 per call) Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (265751101 (estimated locally),0.25 per call) 
  Calls: 
TS_MemCpy32/125 (TS_MemCpy32) @0691f2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (86638 (estimated locally),0.00 per call) Dem_RestoreImmediateData.constprop/214 (651254 (estimated locally),0.01 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (11487088 (estimated locally),0.01 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (22298464 (estimated locally),0.02 per call) 
  Calls: 
Dem_EntryOBDFF/124 (Dem_EntryOBDFF) @0691dbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_RestoreImmediateData.constprop.0/214 (write)Dem_RearrangeOBDOccurrenceOrder/88 (write)Dem_RearrangeOBDOccurrenceOrder/88 (read)Dem_SetOBDFFOccurrenceOrder/70 (write)Dem_RestoreImmediateData.constprop.0/214 (addr)Dem_InitMaxOBDOccOrder/89 (read)Dem_SelectEntryOfOBDFreezeFrameEvent/69 (read)Dem_RearrangeOBDOccurrenceOrder/88 (read)Dem_SelectEntryOfOBDFreezeFrameEvent/69 (read)Dem_StoreOBDFreezeFrame/80 (addr)
  Availability: not_available
  Varpool flags:
Dem_GbiDTCKind/123 (Dem_GbiDTCKind) @0691f1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (428052 (estimated locally),0.01 per call) Dem_ProcessEventEntry.isra.0/207 (354334802 (estimated locally),0.33 per call) Dem_SelectEntryOfOBDFreezeFrameEvent/69 (715863676 (estimated locally),2.00 per call) Dem_RearrangeOBDOccurrenceOrder/88 (715863675 (estimated locally),16.18 per call) Dem_RearrangeOBDOccurrenceOrder/88 (88477532 (estimated locally),2.00 per call) Dem_InitMaxOBDOccOrder/89 (715863674 (estimated locally),2.00 per call) 
  Calls: 
Dem_EvMemEntrySize/122 (Dem_EvMemEntrySize) @0691f0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (1973498 (estimated locally),0.03 per call) Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (265751101 (estimated locally),0.25 per call) 
  Calls: 
Dem_EvMemEntryExists/121 (Dem_EvMemEntryExists) @0691daf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_RestoreImmediateData.constprop.0/214 (read)
  Availability: not_available
  Varpool flags:
Eb_Intgr_BswM_TriggerMemoryStack/120 (Eb_Intgr_BswM_TriggerMemoryStack) @0691f000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (47842374 (estimated locally),0.71 per call) Dem_Shutdown/27 (104068131 (estimated locally),0.18 per call) Dem_Shutdown/27 (118111602 (estimated locally),0.21 per call) 
  Calls: 
NvM_ASR40_ReadBlock/119 (NvM_ASR40_ReadBlock) @06f8cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (15787984 (estimated locally),0.24 per call) 
  Calls: 
NvM_ASR40_SetDataIndex/118 (NvM_ASR40_SetDataIndex) @06f8c0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (47842374 (estimated locally),0.71 per call) Dem_Shutdown/27 (315357973 (estimated locally),0.56 per call) 
  Calls: 
NvM_ASR40_GetErrorStatus/117 (NvM_ASR40_GetErrorStatus) @06f8c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_RestoreImmediateData.constprop/214 (47842374 (estimated locally),0.71 per call) Dem_NvMGetNvRAMBlockStatus/55 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_InitDTCMemoryFilter/116 (Dem_InitDTCMemoryFilter) @06f8c7e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitDataRecordSelector/115 (Dem_InitDataRecordSelector) @06f8c620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitRecordFilter/114 (Dem_InitRecordFilter) @06f8c540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitEventMemoryProcessor/113 (Dem_InitEventMemoryProcessor) @06f8c460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitDTCSelector/112 (Dem_InitDTCSelector) @06f8c380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitDTCFilter/111 (Dem_InitDTCFilter) @06f8c2a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitEventReportVerifier/110 (Dem_InitEventReportVerifier) @06f8c1c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dem_InitSwUnitFncPtr/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_InitEvEntryExists/109 (Dem_InitEvEntryExists) @06f8c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_Init/26 (45634027 (estimated locally),0.23 per call) 
  Calls: 
Dem_OpCycleState/108 (Dem_OpCycleState) @06f8b438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_SetCycleQualified/37 (read)Dem_Init/26 (write)Dem_FindOrAllocateEventEntry.isra.0.constprop.0/213 (read)Dem_SetOperationCycleState/36 (write)Dem_SetOperationCycleState/36 (read)
  Availability: not_available
  Varpool flags:
Dem_DebounceFctPtrTable/107 (Dem_DebounceFctPtrTable) @06f53bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ResetEventDebounceStatus/33 (read)Dem_OpCycleProcessEventCycleStart/102 (read)Dem_ResetEventStatus/32 (read)Dem_ResetEventDebounceStatus/33 (read)Dem_PreInit/25 (read)Dem_GetFaultDetectionCounter/46 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiDebounceAlgo/106 (Dem_GbiDebounceAlgo) @06f80d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_GetFaultDetectionCounter/46 (172479848 (estimated locally),0.16 per call) Dem_ResetEventDebounceStatus/33 (66203071 (estimated locally),0.06 per call) Dem_ResetEventDebounceStatus/33 (132406143 (estimated locally),0.12 per call) Dem_ResetEventStatus/32 (91940217 (estimated locally),0.09 per call) Dem_PreInit/25 (1002123244 (estimated locally),9.37 per call) Dem_OpCycleProcessEventCycleStart/102 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/105 (Det_ASR40_ReportError) @06f80c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ReportErrorStatusCore.constprop/212 (84727954 (estimated locally),0.08 per call) Dem_SetOperationCycleState/36 (152547209 (estimated locally),0.14 per call) Dem_SetOperationCycleState/36 (181135951 (estimated locally),0.17 per call) Dem_SetOperationCycleState/36 (524845004 (estimated locally),0.49 per call) Dem_Shutdown/27 (371958896 (estimated locally),0.66 per call) Dem_ProcessEvent.part.0/208 (1073741824 (estimated locally),1.00 per call) Dem_StoreOBDFreezeFrame/80 (5470749 (estimated locally),0.20 per call) Dem_ReportErrorStatusPreInit/29 (78102463 (estimated locally),0.07 per call) Dem_ReportErrorStatusPreInit/29 (108662672 (estimated locally),0.10 per call) Dem_SetDTCSuppression/53 (95232045 (estimated locally),0.09 per call) Dem_SetDTCSuppression/53 (114410406 (estimated locally),0.11 per call) Dem_SetDTCSuppression/53 (273076168 (estimated locally),0.25 per call) Dem_SetDTCSuppression/53 (524845003 (estimated locally),0.49 per call) Dem_GetNumberOfEventMemoryEntries/52 (99861013 (estimated locally),0.09 per call) Dem_GetNumberOfEventMemoryEntries/52 (216026777 (estimated locally),0.20 per call) Dem_GetNumberOfEventMemoryEntries/52 (524845003 (estimated locally),0.49 per call) Dem_GetEventMemoryOverflow/51 (99861013 (estimated locally),0.09 per call) Dem_GetEventMemoryOverflow/51 (216026778 (estimated locally),0.20 per call) Dem_GetEventMemoryOverflow/51 (524845004 (estimated locally),0.49 per call) Dem_GetEventExtendedDataRecord/50 (24763178 (estimated locally),0.02 per call) Dem_GetEventExtendedDataRecord/50 (163855856 (estimated locally),0.15 per call) Dem_GetEventExtendedDataRecord/50 (121361087 (estimated locally),0.11 per call) Dem_GetEventExtendedDataRecord/50 (181135951 (estimated locally),0.17 per call) Dem_GetEventExtendedDataRecord/50 (524845004 (estimated locally),0.49 per call) Dem_ASR42_GetEventFreezeFrameData/49 (122300192 (estimated locally),0.11 per call) Dem_ASR42_GetEventFreezeFrameData/49 (117421551 (estimated locally),0.11 per call) Dem_ASR42_GetEventFreezeFrameData/49 (148559655 (estimated locally),0.14 per call) Dem_ASR42_GetEventFreezeFrameData/49 (364964846 (estimated locally),0.34 per call) Dem_ASR42_GetEventFreezeFrameData.part.0/203 (201326592 (estimated locally),0.19 per call) Dem_GetIndicatorStatus/47 (110328261 (estimated locally),0.10 per call) Dem_GetIndicatorStatus/47 (181135951 (estimated locally),0.17 per call) Dem_GetIndicatorStatus/47 (524845004 (estimated locally),0.49 per call) Dem_GetFaultDetectionCounter/46 (73919935 (estimated locally),0.07 per call) Dem_GetFaultDetectionCounter/46 (121361087 (estimated locally),0.11 per call) Dem_GetFaultDetectionCounter/46 (181135951 (estimated locally),0.17 per call) Dem_GetFaultDetectionCounter/46 (524845004 (estimated locally),0.49 per call) Dem_GetEventFreezeFrameDataEx/45 (35461736 (estimated locally),0.03 per call) Dem_GetEventFreezeFrameDataEx/45 (42947482 (estimated locally),0.04 per call) Dem_GetEventFreezeFrameDataEx/45 (121361087 (estimated locally),0.11 per call) Dem_GetEventFreezeFrameDataEx/45 (181135951 (estimated locally),0.17 per call) Dem_GetEventFreezeFrameDataEx/45 (524845004 (estimated locally),0.49 per call) Dem_GetEventExtendedDataRecordEx/44 (35461736 (estimated locally),0.03 per call) Dem_GetEventExtendedDataRecordEx/44 (42947482 (estimated locally),0.04 per call) Dem_GetEventExtendedDataRecordEx/44 (121361087 (estimated locally),0.11 per call) Dem_GetEventExtendedDataRecordEx/44 (181135951 (estimated locally),0.17 per call) Dem_GetEventExtendedDataRecordEx/44 (524845004 (estimated locally),0.49 per call) Dem_GetDebouncingOfEvent/43 (42947482 (estimated locally),0.04 per call) Dem_GetDebouncingOfEvent/43 (121361087 (estimated locally),0.11 per call) Dem_GetDebouncingOfEvent/43 (181135951 (estimated locally),0.17 per call) Dem_GetDebouncingOfEvent/43 (524845004 (estimated locally),0.49 per call) Dem_SetEnableCondition/42 (216978913 (estimated locally),0.20 per call) Dem_SetEnableCondition/42 (181135951 (estimated locally),0.17 per call) Dem_SetEnableCondition/42 (524845004 (estimated locally),0.49 per call) Dem_GetDTCOfEvent/41 (56288758 (estimated locally),0.05 per call) Dem_GetDTCOfEvent/41 (159060892 (estimated locally),0.15 per call) Dem_GetDTCOfEvent/41 (237404317 (estimated locally),0.22 per call) Dem_GetDTCOfEvent/41 (354334802 (estimated locally),0.33 per call) Dem_GetEventTested/40 (42947482 (estimated locally),0.04 per call) Dem_GetEventTested/40 (121361087 (estimated locally),0.11 per call) Dem_GetEventTested/40 (181135951 (estimated locally),0.17 per call) Dem_GetEventTested/40 (524845004 (estimated locally),0.49 per call) Dem_GetEventFailed/39 (42947482 (estimated locally),0.04 per call) Dem_GetEventFailed/39 (121361087 (estimated locally),0.11 per call) Dem_GetEventFailed/39 (181135951 (estimated locally),0.17 per call) Dem_GetEventFailed/39 (524845004 (estimated locally),0.49 per call) Dem_GetEventStatus/38 (42947482 (estimated locally),0.04 per call) Dem_GetEventStatus/38 (121361087 (estimated locally),0.11 per call) Dem_GetEventStatus/38 (181135951 (estimated locally),0.17 per call) Dem_GetEventStatus/38 (524845004 (estimated locally),0.49 per call) Dem_SetCycleQualified/37 (14626817 (estimated locally),0.09 per call) Dem_SetCycleQualified/37 (41134979 (estimated locally),0.25 per call) Dem_SetCycleQualified/37 (80467486 (estimated locally),0.49 per call) Dem_ClearPrestoredFreezeFrame/35 (60680543 (estimated locally),0.06 per call) Dem_ClearPrestoredFreezeFrame/35 (183880435 (estimated locally),0.17 per call) Dem_ClearPrestoredFreezeFrame/35 (181135951 (estimated locally),0.17 per call) Dem_ClearPrestoredFreezeFrame/35 (524845004 (estimated locally),0.49 per call) Dem_PrestoreFreezeFrame/34 (60680543 (estimated locally),0.06 per call) Dem_PrestoreFreezeFrame/34 (183880435 (estimated locally),0.17 per call) Dem_PrestoreFreezeFrame/34 (181135951 (estimated locally),0.17 per call) Dem_PrestoreFreezeFrame/34 (524845004 (estimated locally),0.49 per call) Dem_ResetEventDebounceStatus/33 (66203071 (estimated locally),0.06 per call) Dem_ResetEventDebounceStatus/33 (190535669 (estimated locally),0.18 per call) Dem_ResetEventDebounceStatus/33 (159060892 (estimated locally),0.15 per call) Dem_ResetEventDebounceStatus/33 (237404317 (estimated locally),0.22 per call) Dem_ResetEventDebounceStatus/33 (354334802 (estimated locally),0.33 per call) Dem_ResetEventStatus/32 (183880435 (estimated locally),0.17 per call) Dem_ResetEventStatus/32 (181135951 (estimated locally),0.17 per call) Dem_ResetEventStatus/32 (524845004 (estimated locally),0.49 per call) Dem_SetEventStatus/31 (8478124 (estimated locally),0.01 per call) Dem_SetEventStatus/31 (81311928 (estimated locally),0.08 per call) Dem_SetEventStatus/31 (123199891 (estimated locally),0.11 per call) Dem_SetEventStatus/31 (121361087 (estimated locally),0.11 per call) Dem_SetEventStatus/31 (181135951 (estimated locally),0.17 per call) Dem_SetEventStatus/31 (524845004 (estimated locally),0.49 per call) Dem_ReportErrorStatus/28 (80735453 (estimated locally),0.08 per call) Dem_ReportErrorStatus/28 (161470906 (estimated locally),0.15 per call) Dem_ReportErrorStatus/28 (159060892 (estimated locally),0.15 per call) Dem_ReportErrorStatus/28 (237404317 (estimated locally),0.22 per call) Dem_ReportErrorStatus/28 (354334802 (estimated locally),0.33 per call) Dem_Init/26 (63921205 (estimated locally),0.32 per call) Dem_PreInit/25 (35274823 (estimated locally),0.33 per call) 
  Calls: 
Dem_InitializationState/104 (Dem_InitializationState) @06f53af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetEventMemoryOverflow/51 (read)Dem_Shutdown/27 (write)Dem_ASR42_GetEventFreezeFrameData/49 (read)Dem_GetEventExtendedDataRecord/50 (read)Dem_Init/26 (read)Dem_ReportErrorStatusCore.constprop.0/212 (read)Dem_PreInit/25 (read)Dem_SetDTCSuppression/53 (read)Dem_PreInit/25 (write)Dem_GetNumberOfEventMemoryEntries/52 (read)Dem_Init/26 (write)Dem_ReportErrorStatus/28 (read)Dem_SetEventStatus/31 (read)Dem_ResetEventStatus/32 (read)Dem_ResetEventDebounceStatus/33 (read)Dem_MainFunction/54 (read)Dem_PrestoreFreezeFrame/34 (read)Dem_ClearPrestoredFreezeFrame/35 (read)Dem_SetCycleQualified/37 (read)Dem_GetEventStatus/38 (read)Dem_GetEventFailed/39 (read)Dem_GetEventTested/40 (read)Dem_SetEnableCondition/42 (read)Dem_GetDebouncingOfEvent/43 (read)Dem_GetEventExtendedDataRecordEx/44 (read)Dem_GetEventFreezeFrameDataEx/45 (read)Dem_GetFaultDetectionCounter/46 (read)Dem_GetIndicatorStatus/47 (read)Dem_Shutdown/27 (read)Dem_SetOperationCycleState/36 (read)
  Availability: not_available
  Varpool flags:
Dem_IsMILEvent/103 (Dem_IsMILEvent) @06f80a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_IndicatorDesc/155 (read)Dem_IndicatorDesc/155 (read)Dem_IndicatorLink/151 (read)
  Referring: 
  Availability: local
  Function flags: count:337833918 (estimated locally) body local optimize_size
  Called by: Dem_SetCycleQualified/37 (217325345 (estimated locally),1.32 per call) 
  Calls: Dem_GbiIndicatorUsed/159 (337833918 (estimated locally),1.00 per call) 
Dem_OpCycleProcessEventCycleStart/102 (Dem_OpCycleProcessEventCycleStart) @06f808c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_DebounceFctPtrTable/107 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_OpCycleProcessCycleStart/101 (365072220 (estimated locally),25.72 per call) 
  Calls: Dem_GbiDebounceAlgo/106 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dem_OpCycleProcessCycleStart/101 (Dem_OpCycleProcessCycleStart) @06f80540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMemoryPermanentUpdated/129 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (write)
  Referring: 
  Availability: local
  Function flags: count:14196617 (estimated locally) body local optimize_size
  Called by: Dem_SetOperationCycleState/36 (71020508 (estimated locally),0.07 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (114863532 (estimated locally),8.09 per call) Dem_UpdateFailureCounterCycleStart/92 (708669604 (estimated locally),49.92 per call) Dem_OpCycleProcessEventCycleStart/102 (365072220 (estimated locally),25.72 per call) Dem_GbiOpCycleIdx/147 (1073741824 (estimated locally),75.63 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (114863532 (estimated locally),8.09 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (2873395 (estimated locally),0.20 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (2873395 (estimated locally),0.20 per call) NvM_ASR40_WriteBlock/138 (581575 (estimated locally),0.04 per call) Dem_PermanentMemoryStatusUpdate/150 (2873395 (estimated locally),0.20 per call) Dem_ProcessIndicator/94 (14196617 (estimated locally),1.00 per call) 
Dem_OpCycleProcessEventCycleEnd/100 (Dem_OpCycleProcessEventCycleEnd) @06f80380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_NvData/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_OpCycleProcessCycleEnd/99 (202829745 (estimated locally),2.83 per call) 
  Calls: Dem_UpdateAgingCounter/67 (177167401 (estimated locally),0.17 per call) Dem_GbiNumAgingCycles/133 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (1073741824 (estimated locally),1.00 per call) 
Dem_OpCycleProcessCycleEnd/99 (Dem_OpCycleProcessCycleEnd) @06f72ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMemoryPermanentUpdated/129 (read)
  Referring: 
  Availability: local
  Function flags: count:71618580 (estimated locally) body local optimize_size
  Called by: Dem_SetOperationCycleState/36 (71020508 (estimated locally),0.07 per call) 
  Calls: NvM_ASR40_WriteBlock/138 (7247800 (estimated locally),0.10 per call) Dem_ProcessFailureCounterReset/91 (1002123246 (estimated locally),13.99 per call) Dem_OpCycleProcessEventCycleEnd/100 (202829745 (estimated locally),2.83 per call) Dem_GbiOpCycleIdx/147 (1002123246 (estimated locally),13.99 per call) 
Dem_CheckWIROffCriteriaFulfilled/98 (Dem_CheckWIROffCriteriaFulfilled) @06f72d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_IndicatorLink/151 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: local
  Function flags: count:96446979 (estimated locally) body local optimize_size
  Called by: Dem_ProcessIndicatorOffCriteria.constprop/210 (118702158 (estimated locally),0.11 per call) 
  Calls: 
Dem_SetCycleCounterRole/97 (Dem_SetCycleCounterRole) @06f72b60
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ProcessIndicatorOnCriteria/96 (Dem_ProcessIndicatorOnCriteria) @06f729a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_IndicatorLink/151 (read)Dem_FailureCycleCounterInfo/197 (read)Dem_NvData/16 (read)Dem_NvData/16 (addr)Dem_NvData/16 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_ProcessIndicator/94 (12339089 (estimated locally),0.21 per call) 
  Calls: Dem_SetCycleCounterRole.constprop/211 (354334802 (estimated locally),0.33 per call) 
Dem_ProcessIndicatorOffCriteria/95 (Dem_ProcessIndicatorOffCriteria) @06f727e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ProcessIndicator/94 (Dem_ProcessIndicator) @06f72460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_IndicatorLink/151 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: local
  Function flags: count:59055801 (estimated locally) body local optimize_size
  Called by: Dem_OpCycleProcessCycleStart/101 (14196617 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (37391180 (estimated locally),0.63 per call) Dem_ProcessIndicatorOnCriteria/96 (12339089 (estimated locally),0.21 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (37391180 (estimated locally),0.63 per call) Dem_GbiOpCycleIdx/147 (679839637 (estimated locally),11.51 per call) Dem_ProcessIndicatorOffCriteria.constprop/210 (205372451 (estimated locally),3.48 per call) Dem_GbiIndicatorHealingCycleIdx/153 (1014686025 (estimated locally),17.18 per call) Dem_GbiIndicatorFailureCycleIdx/152 (1014686025 (estimated locally),17.18 per call) 
Dem_IncrementFailureCounter/93 (Dem_IncrementFailureCounter) @06f721c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventFailureCycleCfg/128 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Dem_UpdateFailureCounterCycleStart/92 (23837704 (estimated locally),0.02 per call) 
  Calls: Dem_CheckForImmediateEntryStorage/148 (108662672 (estimated locally),0.10 per call) Dem_GbiEventFailureClassIdx/127 (217325345 (estimated locally),0.20 per call) Dem_SearchForEntry/134 (1073741823 (estimated locally),1.00 per call) 
Dem_UpdateFailureCounterCycleStart/92 (Dem_UpdateFailureCounterCycleStart) @06f68e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/16 (read)Dem_DoProcessFaultConfirmation/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_OpCycleProcessCycleStart/101 (708669604 (estimated locally),49.92 per call) 
  Calls: Dem_IncrementFailureCounter/93 (23837704 (estimated locally),0.02 per call) Dem_GbiOpCycleIdx/147 (524845004 (estimated locally),0.49 per call) Dem_GbiEventFailureCycleIdx/149 (524845004 (estimated locally),0.49 per call) Dem_GbiEventFailureClassIdx/127 (1073741824 (estimated locally),1.00 per call) 
Dem_ProcessFailureCounterReset/91 (Dem_ProcessFailureCounterReset) @06f68a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_OpCycleProcessCycleEnd/99 (1002123246 (estimated locally),13.99 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (58887609 (estimated locally),0.05 per call) Dem_CheckForImmediateEntryStorage/148 (11918852 (estimated locally),0.01 per call) Dem_SearchForEntry/134 (58887609 (estimated locally),0.05 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (58887609 (estimated locally),0.05 per call) Dem_GbiEventFailureCycleIdx/149 (524845004 (estimated locally),0.49 per call) Dem_GbiEventFailureClassIdx/127 (1073741824 (estimated locally),1.00 per call) 
Dem_SetCDTCOnConfirmation/90 (Dem_SetCDTCOnConfirmation) @06f687e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMem/17 (read)Dem_NvData/16 (read)Dem_NvData/16 (read)Dem_EventFailureCycleCfg/128 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_SizeEventMem/23 (read)
  Referring: 
  Availability: local
  Function flags: count:29527899 (estimated locally) body local optimize_size
  Called by: Dem_MainFunction.part.0/209 (38976828 (estimated locally),0.33 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (955630225 (estimated locally),32.36 per call) Dem_CheckForImmediateEntryStorage/148 (62812990 (estimated locally),2.13 per call) Dem_UpdateEventIdOccurKinds/74 (62812990 (estimated locally),2.13 per call) Dem_GbiEventFailureClassIdx/127 (104479358 (estimated locally),3.54 per call) Dem_GbiOpCycleIdx/147 (157678987 (estimated locally),5.34 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (955630225 (estimated locally),32.36 per call) 
Dem_InitMaxOBDOccOrder/89 (Dem_InitMaxOBDOccOrder) @06f682a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_MaxOBDOccOrder/3 (write)Dem_EventMemoryPrimary/5 (addr)Dem_EntryOBDFF/124 (read)Dem_MaxOBDOccOrder/3 (read)Dem_MaxOBDOccOrder/3 (write)
  Referring: 
  Availability: local
  Function flags: count:357878148 (estimated locally) body local optimize_size
  Called by: Dem_Init/26 (45634028 (estimated locally),0.23 per call) 
  Calls: Dem_GbiDTCKind/123 (715863674 (estimated locally),2.00 per call) 
Dem_RearrangeOBDOccurrenceOrder/88 (Dem_RearrangeOBDOccurrenceOrder) @06f680e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMemoryPrimary/5 (addr)Dem_EventMemoryPrimary/5 (addr)Dem_EntryOBDFF/124 (read)Dem_EntryOBDFF/124 (read)Dem_EntryOBDFF/124 (write)Dem_EventMemoryPrimary/5 (addr)Dem_MaxOBDOccOrder/3 (write)
  Referring: 
  Availability: local
  Function flags: count:44232130 (estimated locally) body local optimize_size
  Called by: Dem_SetOBDFFOccurrenceOrder/70 (217325345 (estimated locally),0.20 per call) 
  Calls: Dem_GbiDTCKind/123 (715863675 (estimated locally),16.18 per call) Dem_GbiDTCKind/123 (88477532 (estimated locally),2.00 per call) 
Dem_InitMaxOccOrder/87 (Dem_InitMaxOccOrder) @06f5aee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_MaxOccOrder/4 (write)Dem_EventMem/17 (read)Dem_MaxOccOrder/4 (read)Dem_MaxOccOrder/4 (write)Dem_SizeEventMem/23 (read)
  Referring: 
  Availability: local
  Function flags: count:29527899 (estimated locally) body local optimize_size
  Called by: Dem_Init/26 (45634028 (estimated locally),0.23 per call) 
  Calls: 
Dem_RearrangeOccurrenceOrder/86 (Dem_RearrangeOccurrenceOrder) @06f5ad20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMem/17 (read)Dem_SizeEventMem/23 (read)Dem_MaxOccOrder/4 (write)
  Referring: 
  Availability: local
  Function flags: count:14598062 (estimated locally) body local optimize_size
  Called by: Dem_UpdateOccurrenceOrder/85 (25267474 (estimated locally),0.15 per call) 
  Calls: 
Dem_UpdateOccurrenceOrder/85 (Dem_UpdateOccurrenceOrder) @06f5ab60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMem/17 (read)Dem_MaxOccOrder/4 (read)Dem_SizeEventMem/23 (read)Dem_MaxOccOrder/4 (write)Dem_MaxOccOrder/4 (read)
  Referring: 
  Availability: local
  Function flags: count:173919332 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEventEntry.isra.0/207 (354334802 (estimated locally),0.33 per call) 
  Calls: Dem_RearrangeOccurrenceOrder/86 (25267474 (estimated locally),0.15 per call) Dem_GbiDTCOriginIdx/190 (173919332 (estimated locally),1.00 per call) 
Dem_SearchForEmptyEntry/83 (Dem_SearchForEmptyEntry) @06f5a460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_SizeEventMem/23 (read)Dem_EventMem/17 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Dem_FindOrAllocateEventEntry.isra.0.constprop/213 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_ReadExternalDataElement/82 (Dem_ReadExternalDataElement) @06f5a2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DataElement/185 (read)Dem_DataElement/185 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_StoreFF.isra.0/206 (437450370 (estimated locally),27.36 per call) Dem_StoreED/81 (437450372 (estimated locally),25.32 per call) Dem_StoreOBDFreezeFrame/80 (437450370 (estimated locally),16.18 per call) 
  Calls: 
   Indirect call(536870913 (estimated locally),0.50 per call) 
Dem_StoreED/81 (Dem_StoreED) @06f5a0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EDSegment/179 (read)Dem_EDSegment/179 (read)Dem_DataElement/185 (read)Dem_EDSegment/179 (read)Dem_EDSegment/179 (read)
  Referring: 
  Availability: local
  Function flags: count:17276177 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEventEntryEData/78 (463182746 (estimated locally),0.48 per call) 
  Calls: Dem_ReadExternalDataElement/82 (437450372 (estimated locally),25.32 per call) 
Dem_StoreOBDFreezeFrame/80 (Dem_StoreOBDFreezeFrame) @06f48ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EntryOBDFF/124 (addr)Dem_PidClass/184 (read)Dem_PidClass/184 (read)Dem_DataElement/185 (read)Dem_PidClass/184 (read)Dem_PidClass/184 (read)
  Referring: 
  Availability: local
  Function flags: count:27029393 (estimated locally) body local optimize_size
  Called by: Dem_ProcessMultipleOBDFreezeFrameEntry/68 (1073741824 (estimated locally),1.00 per call) 
  Calls: Det_ASR40_ReportError/105 (5470749 (estimated locally),0.20 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (437450371 (estimated locally),16.18 per call) Dem_ReadExternalDataElement/82 (437450370 (estimated locally),16.18 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (437450370 (estimated locally),16.18 per call) 
Dem_ProcessEventEntryEData/78 (Dem_ProcessEventEntryEData) @06f48a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EDClass/177 (addr)Dem_EDClass/177 (read)
  Referring: 
  Availability: local
  Function flags: count:969610103 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEventEntry.isra.0/207 (354334802 (estimated locally),0.33 per call) 
  Calls: Dem_StoreED/81 (463182746 (estimated locally),0.48 per call) Dem_SizeOfED/194 (118111600 (estimated locally),0.12 per call) Dem_EDEntryData/193 (463182746 (estimated locally),0.48 per call) Dem_GbiEDClassIdx/176 (969610103 (estimated locally),1.00 per call) 
Dem_ProcessEventEntryFFData/77 (Dem_ProcessEventEntryFFData) @06f488c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_FFClass/170 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEventEntry.isra.0/207 (354334802 (estimated locally),0.33 per call) 
  Calls: Dem_StoreFF.isra.0/206 (481431977 (estimated locally),0.45 per call) Dem_FFEntryData/172 (481431977 (estimated locally),0.45 per call) Dem_GbiMaxNumFFRecs/167 (686872646 (estimated locally),0.64 per call) Dem_GbiFFClassIdx/169 (1073741824 (estimated locally),1.00 per call) 
Dem_UpdateEventIdOccurKinds/74 (Dem_UpdateEventIdOccurKinds) @06f480e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_ProcessEventEntry.isra.0/207 (28569324 (estimated locally),0.03 per call) Dem_SetCDTCOnConfirmation/90 (62812990 (estimated locally),2.13 per call) 
  Calls: Dem_UpdateEventIdOccurKinds.part.0/204 (108662673 (estimated locally),0.10 per call) Dem_GetVisibleUdsDTC/196 (217325345 (estimated locally),0.20 per call) Dem_GbiDTCOrigin/195 (1073741824 (estimated locally),1.00 per call) 
Dem_ProcessEventStatusUpdate/73 (Dem_ProcessEventStatusUpdate) @06f3dee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_ProcessEvent/71 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_UpdateEventStatusOnQualification/189 (354334802 (estimated locally),0.33 per call) Dem_CheckForEventWIRUpdate/188 (354334802 (estimated locally),0.33 per call) 
Dem_ProcessEvent/71 (Dem_ProcessEvent) @06f3d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_MainFunction.part.0/209 (536870913 (estimated locally),4.55 per call) 
  Calls: Dem_ProcessEvent.part.0/208 (108662672 (estimated locally),0.10 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (536870913 (estimated locally),0.50 per call) Dem_ProcessEventEntry.isra.0/207 (536870913 (estimated locally),0.50 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (536870913 (estimated locally),0.50 per call) Dem_ProcessEventStatusUpdate/73 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (1073741824 (estimated locally),1.00 per call) 
Dem_SetOBDFFOccurrenceOrder/70 (Dem_SetOBDFFOccurrenceOrder) @06f3d540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_MaxOBDOccOrder/3 (read)Dem_EntryOBDFF/124 (write)Dem_MaxOBDOccOrder/3 (read)Dem_MaxOBDOccOrder/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_ProcessMultipleOBDFreezeFrameEntry/68 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_RearrangeOBDOccurrenceOrder/88 (217325345 (estimated locally),0.20 per call) 
Dem_SelectEntryOfOBDFreezeFrameEvent/69 (Dem_SelectEntryOfOBDFreezeFrameEvent) @06f3d380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPrimary/5 (addr)Dem_NvData/16 (read)Dem_EntryOBDFF/124 (read)Dem_EntryOBDFF/124 (read)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GbiPriority/187 (9298368 (estimated locally),0.03 per call) Dem_GbiPriority/187 (9298368 (estimated locally),0.03 per call) Dem_GbiDTCKind/123 (715863676 (estimated locally),2.00 per call) Dem_GetObdDTC/160 (715863676 (estimated locally),2.00 per call) Dem_GetVisibleCmbDTC/186 (715863676 (estimated locally),2.00 per call) 
Dem_ProcessMultipleOBDFreezeFrameEntry/68 (Dem_ProcessMultipleOBDFreezeFrameEntry) @06f3d0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_ProcessEventEntry.isra.0/207 (30720827 (estimated locally),0.03 per call) 
  Calls: Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205 (217325344 (estimated locally),0.20 per call) Dem_SetOBDFFOccurrenceOrder/70 (1073741824 (estimated locally),1.00 per call) Dem_StoreOBDFreezeFrame/80 (1073741824 (estimated locally),1.00 per call) 
Dem_UpdateAgingCounter/67 (Dem_UpdateAgingCounter) @06f33ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EvIdOfLockedMemoryEntry/132 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_OpCycleProcessEventCycleEnd/100 (177167401 (estimated locally),0.17 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (1073741824 (estimated locally),1.00 per call) Dem_CheckForImmediateEntryStorage/148 (132329403 (estimated locally),0.12 per call) Dem_ClearAgedEventEntry/136 (47333460 (estimated locally),0.04 per call) Dem_IntValEntryData/135 (217325345 (estimated locally),0.20 per call) Dem_SearchForEntry/134 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (1073741824 (estimated locally),1.00 per call) 
Dem_CheckErrorQueueEntryForStatus/65 (Dem_CheckErrorQueueEntryForStatus) @06f33b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ErrorQueueReadIdx/1 (read)Dem_ErrorQueue/11 (read)Dem_ErrorQueueWriteIdx/2 (read)Dem_ErrorQueue/11 (read)
  Referring: 
  Availability: available
  Function flags: count:229727060 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_CheckErrorReQueueEntry/64 (Dem_CheckErrorReQueueEntry) @06f338c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ErrorQueueReadIdx/1 (read)Dem_ErrorQueueWriteIdx/2 (read)Dem_ErrorQueue/11 (read)
  Referring: 
  Availability: available
  Function flags: count:276507548 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_WriteErrorQueueEntry/62 (276507547 (estimated locally),1.00 per call) 
Dem_CheckErrorQueueEntry/63 (Dem_CheckErrorQueueEntry) @06f33460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ErrorQueueReadIdx/1 (read)Dem_ErrorQueue/11 (read)Dem_ErrorQueueWriteIdx/2 (read)Dem_ErrorQueue/11 (read)
  Referring: 
  Availability: available
  Function flags: count:229727064 (estimated locally) body optimize_size
  Called by: Dem_ReportErrorStatusPreInit/29 (273804165 (estimated locally),0.26 per call) 
  Calls: 
Dem_WriteErrorQueueEntry/62 (Dem_WriteErrorQueueEntry) @06f331c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ErrorQueueWriteIdx/2 (read)Dem_ErrorQueue/11 (read)Dem_ErrorQueue/11 (write)Dem_ErrorQueueWriteIdx/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_CheckErrorReQueueEntry/64 (276507547 (estimated locally),1.00 per call) Dem_ReportErrorStatusPreInit/29 (236674130 (estimated locally),0.22 per call) 
  Calls: 
Dem_ReadErrorQueueEntry/61 (Dem_ReadErrorQueueEntry) @06eead20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ErrorQueue/11 (write)Dem_ErrorQueueReadIdx/1 (write)Dem_ErrorQueueReadIdx/1 (read)Dem_ErrorQueue/11 (read)Dem_ErrorQueue/11 (write)Dem_ErrorQueueReadIdx/1 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Dem_MainFunction.part.0/209 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
Dem_InvalidateErrorQueueEntry/60 (Dem_InvalidateErrorQueueEntry) @06eeab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ErrorQueueReadIdx/1 (read)Dem_ErrorQueueWriteIdx/2 (read)Dem_ErrorQueue/11 (read)Dem_ErrorQueue/11 (read)Dem_ErrorQueue/11 (write)
  Referring: 
  Availability: available
  Function flags: count:40157944 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_PermanentMemoryInit/59 (Dem_PermanentMemoryInit) @06eea8c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:214748365 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_RestoreImmediateData/57 (Dem_RestoreImmediateData) @06ec7c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:67108864 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ResetNvData/56 (Dem_ResetNvData) @06ec79a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/16 (write)Dem_NvData/16 (write)Dem_NvData/16 (write)Dem_NvData/16 (write)Dem_NvData/16 (write)Dem_NvData/16 (write)Dem_NvData/16 (write)Dem_NvData/16 (write)
  Referring: 
  Availability: local
  Function flags: count:67108864 (estimated locally) body local optimize_size
  Called by: Dem_Init/26 (9236327 (estimated locally),0.05 per call) 
  Calls: 
Dem_NvMGetNvRAMBlockStatus/55 (Dem_NvMGetNvRAMBlockStatus) @06ec77e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_PermanentMemoryInit.constprop/215 (104969001 (estimated locally),0.49 per call) Dem_Init/26 (45634027 (estimated locally),0.23 per call) 
  Calls: NvM_ASR40_GetErrorStatus/117 (1073741824 (estimated locally),1.00 per call) 
Dem_MainFunction/54 (Dem_MainFunction) @06ec7620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:347387059 (estimated locally) body optimize_size
  Called by: Dem_Shutdown/27 (191615189 (estimated locally),0.34 per call) 
  Calls: Dem_MainFunction.part.0/209 (118111600 (estimated locally),0.34 per call) 
Dem_SetDTCSuppression/53 (Dem_SetDTCSuppression) @06ec70e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalSetDTCSuppression/182 (66178201 (estimated locally),0.06 per call) Det_ASR40_ReportError/105 (95232045 (estimated locally),0.09 per call) Det_ASR40_ReportError/105 (114410406 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (273076168 (estimated locally),0.25 per call) Det_ASR40_ReportError/105 (524845003 (estimated locally),0.49 per call) 
Dem_GetNumberOfEventMemoryEntries/52 (Dem_GetNumberOfEventMemoryEntries) @06ebfb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_EventMemoryPermanent/130 (read)Dem_EventMem/17 (read)Dem_SizeEventMem/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GetMappedDTCOrigin/181 (233009030 (estimated locally),0.22 per call) Det_ASR40_ReportError/105 (99861013 (estimated locally),0.09 per call) Det_ASR40_ReportError/105 (216026777 (estimated locally),0.20 per call) Det_ASR40_ReportError/105 (524845003 (estimated locally),0.49 per call) 
Dem_GetEventMemoryOverflow/51 (Dem_GetEventMemoryOverflow) @06ebf700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GetMappedDTCOrigin/181 (233009030 (estimated locally),0.22 per call) Det_ASR40_ReportError/105 (99861013 (estimated locally),0.09 per call) Det_ASR40_ReportError/105 (216026778 (estimated locally),0.20 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetEventExtendedDataRecord/50 (Dem_GetEventExtendedDataRecord) @06ebf1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_EDClass/177 (addr)Dem_EDClass/177 (read)Dem_EDClass/177 (read)Dem_EDClass/177 (read)Dem_EDSegment/179 (addr)Dem_EDClass/177 (read)Dem_EDSegment/179 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (34737786 (estimated locally),0.03 per call) Dem_AssembleExtendedDataSeg/180 (133105648 (estimated locally),0.12 per call) Dem_SearchForEntry/134 (34737786 (estimated locally),0.03 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (34737786 (estimated locally),0.03 per call) Dem_FindEDNumIndex/178 (28243230 (estimated locally),0.03 per call) Dem_GbiEDClassIdx/176 (57780749 (estimated locally),0.05 per call) Det_ASR40_ReportError/105 (24763178 (estimated locally),0.02 per call) Det_ASR40_ReportError/105 (163855856 (estimated locally),0.15 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_ASR42_GetEventFreezeFrameData/49 (Dem_ASR42_GetEventFreezeFrameData) @06eb8b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_GetEventFreezeFrameData/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_ASR42_GetEventFreezeFrameData.part.0/203 (320495581 (estimated locally),0.30 per call) Det_ASR40_ReportError/105 (122300192 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (117421551 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (148559655 (estimated locally),0.14 per call) Det_ASR40_ReportError/105 (364964846 (estimated locally),0.34 per call) 
Dem_GetEventFreezeFrameData/48 (Dem_GetEventFreezeFrameData) @06eb8380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_ASR42_GetEventFreezeFrameData/49 (1073741824 (estimated locally),1.00 per call) 
Dem_GetIndicatorStatus/47 (Dem_GetIndicatorStatus) @06eb81c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalGetIndicatorStatus/166 (257432609 (estimated locally),0.24 per call) Det_ASR40_ReportError/105 (110328261 (estimated locally),0.10 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetFaultDetectionCounter/46 (Dem_GetFaultDetectionCounter) @06eb4d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_DebounceFctPtrTable/107 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GbiDebounceAlgo/106 (172479848 (estimated locally),0.16 per call) Det_ASR40_ReportError/105 (73919935 (estimated locally),0.07 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
   Indirect call(120735894 (estimated locally),0.11 per call) 
Dem_GetEventFreezeFrameDataEx/45 (Dem_GetEventFreezeFrameDataEx) @06eb47e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (35461736 (estimated locally),0.03 per call) Det_ASR40_ReportError/105 (42947482 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetEventExtendedDataRecordEx/44 (Dem_GetEventExtendedDataRecordEx) @06eb41c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (35461736 (estimated locally),0.03 per call) Det_ASR40_ReportError/105 (42947482 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetDebouncingOfEvent/43 (Dem_GetDebouncingOfEvent) @06e8ab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (42947482 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_SetEnableCondition/42 (Dem_SetEnableCondition) @06e8a620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_EnCondStatus/162 (read)Dem_EnCondToEvIdLink/163 (read)Dem_EnCondToEvIdLink/163 (read)Dem_EnCondGrpLink/164 (read)Dem_EnCondGrpStatusCounter/165 (read)Dem_EnCondGrpStatusCounter/165 (write)Dem_EnCondGrpLink/164 (read)Dem_EnCondGrpStatusCounter/165 (read)Dem_EnCondGrpStatusCounter/165 (write)Dem_EnCondStatus/162 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (150781957 (estimated locally),0.14 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (150781957 (estimated locally),0.14 per call) Det_ASR40_ReportError/105 (216978913 (estimated locally),0.20 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetDTCOfEvent/41 (Dem_GetDTCOfEvent) @06e8a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GetUdsDTC/161 (87327809 (estimated locally),0.08 per call) Dem_GetObdDTC/160 (87995508 (estimated locally),0.08 per call) Det_ASR40_ReportError/105 (56288758 (estimated locally),0.05 per call) Det_ASR40_ReportError/105 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/105 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/105 (354334802 (estimated locally),0.33 per call) 
Dem_GetEventTested/40 (Dem_GetEventTested) @06e87c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (42947482 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetEventFailed/39 (Dem_GetEventFailed) @06e87620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (42947482 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_GetEventStatus/38 (Dem_GetEventStatus) @06e87000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_NvData/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (42947482 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_SetCycleQualified/37 (Dem_SetCycleQualified) @06e7fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_OpCycleState/108 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_DoProcessFaultConfirmation/0 (write)Dem_NvData/16 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)
  Referring: 
  Availability: available
  Function flags: count:164622516 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (114863532 (estimated locally),0.70 per call) Dem_PermanentMemoryAddEntry/158 (4935302 (estimated locally),0.03 per call) Dem_ProcessIndicatorFailureCycleCounter/157 (24383904 (estimated locally),0.15 per call) Dem_IsMILEvent/103 (217325345 (estimated locally),1.32 per call) Dem_GbiOpCycleIdx/147 (1073741824 (estimated locally),6.52 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (114863532 (estimated locally),0.70 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (14196617 (estimated locally),0.09 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (14196617 (estimated locally),0.09 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (28393234 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (14626817 (estimated locally),0.09 per call) Det_ASR40_ReportError/105 (41134979 (estimated locally),0.25 per call) Det_ASR40_ReportError/105 (80467486 (estimated locally),0.49 per call) 
Dem_SetOperationCycleState/36 (Dem_SetOperationCycleState) @06e7f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_OpCycleState/108 (read)Dem_OpCycleState/108 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_CheckForTriggerNvmWriteGateEntry/146 (215213661 (estimated locally),0.20 per call) Dem_OpCycleProcessCycleStart/101 (71020508 (estimated locally),0.07 per call) Dem_OpCycleProcessCycleEnd/99 (71020508 (estimated locally),0.07 per call) Det_ASR40_ReportError/105 (152547209 (estimated locally),0.14 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_ClearPrestoredFreezeFrame/35 (Dem_ClearPrestoredFreezeFrame) @06e7aee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (60680543 (estimated locally),0.06 per call) Dem_GbiEnablePrestorage/145 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_PrestoreFreezeFrame/34 (Dem_PrestoreFreezeFrame) @06e7a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (60680543 (estimated locally),0.06 per call) Dem_GbiEnablePrestorage/145 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_ResetEventDebounceStatus/33 (Dem_ResetEventDebounceStatus) @06e7a460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_DebounceFctPtrTable/107 (read)Dem_DebounceFctPtrTable/107 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GbiDebounceAlgo/106 (66203071 (estimated locally),0.06 per call) Det_ASR40_ReportError/105 (66203071 (estimated locally),0.06 per call) Dem_GbiDebounceAlgo/106 (132406143 (estimated locally),0.12 per call) Det_ASR40_ReportError/105 (190535669 (estimated locally),0.18 per call) Det_ASR40_ReportError/105 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/105 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/105 (354334802 (estimated locally),0.33 per call) 
   Indirect call(30585819 (estimated locally),0.03 per call) 
   Indirect call(22509044 (estimated locally),0.02 per call) 
Dem_ResetEventStatus/32 (Dem_ResetEventStatus) @06e77e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_NvData/16 (read)Dem_NvData/16 (write)Dem_DebounceFctPtrTable/107 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (183880435 (estimated locally),0.17 per call) Dem_GbiDebounceAlgo/106 (91940217 (estimated locally),0.09 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
   Indirect call(91940217 (estimated locally),0.09 per call) 
Dem_SetEventStatus/31 (Dem_SetEventStatus) @06e77700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (8478124 (estimated locally),0.01 per call) Dem_InternalProcessEventReport/141 (41887963 (estimated locally),0.04 per call) Det_ASR40_ReportError/105 (81311928 (estimated locally),0.08 per call) Dem_GbiEventKind/140 (123199891 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (123199891 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/105 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/105 (524845004 (estimated locally),0.49 per call) 
Dem_ReportErrorStatusCore/30 (Dem_ReportErrorStatusCore) @06e77000
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ReportErrorStatusPreInit/29 (Dem_ReportErrorStatusPreInit) @06e6ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_NvData/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/105 (78102463 (estimated locally),0.07 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (236674130 (estimated locally),0.22 per call) Dem_WriteErrorQueueEntry/62 (236674130 (estimated locally),0.22 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/144 (37130035 (estimated locally),0.03 per call) Dem_CheckErrorQueueEntry/63 (273804165 (estimated locally),0.26 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/143 (273804165 (estimated locally),0.26 per call) Det_ASR40_ReportError/105 (108662672 (estimated locally),0.10 per call) Dem_DebounceEvent/142 (1073741823 (estimated locally),1.00 per call) 
Dem_ReportErrorStatus/28 (Dem_ReportErrorStatus) @06e6e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_ReportErrorStatusCore.constprop/212 (80735453 (estimated locally),0.08 per call) Det_ASR40_ReportError/105 (80735453 (estimated locally),0.08 per call) Dem_GbiEventKind/140 (161470906 (estimated locally),0.15 per call) Det_ASR40_ReportError/105 (161470906 (estimated locally),0.15 per call) Det_ASR40_ReportError/105 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/105 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/105 (354334802 (estimated locally),0.33 per call) 
Dem_Shutdown/27 (Dem_Shutdown) @06e6e2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_InitializationState/104 (write)Dem_EvIdOfLockedMemoryEntry/132 (read)Dem_NvDataBlockId/22 (read)Dem_EventMem/17 (read)Dem_SizeEventMem/23 (read)
  Referring: 
  Availability: available
  Function flags: count:563574086 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_SetRamBlockStatus/139 (191615188 (estimated locally),0.34 per call) Eb_Intgr_BswM_TriggerMemoryStack/120 (104068131 (estimated locally),0.18 per call) NvM_ASR40_WriteBlock/138 (104068131 (estimated locally),0.18 per call) Dem_StoreImmediately/137 (104068131 (estimated locally),0.18 per call) NvM_ASR40_SetDataIndex/118 (315357973 (estimated locally),0.56 per call) Eb_Intgr_BswM_TriggerMemoryStack/120 (118111602 (estimated locally),0.21 per call) Dem_ClearAgedEventEntry/136 (1393742 (estimated locally),0.00 per call) Dem_IntValEntryData/135 (4223459 (estimated locally),0.01 per call) Dem_SearchForEntry/134 (20866894 (estimated locally),0.04 per call) Dem_GbiNumAgingCycles/133 (63233012 (estimated locally),0.11 per call) Dem_MainFunction/54 (191615189 (estimated locally),0.34 per call) Det_ASR40_ReportError/105 (371958896 (estimated locally),0.66 per call) 
Dem_Init/26 (Dem_Init) @06e6e000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_OpCycleState/108 (write)Dem_NvMGateEntryInfo/12 (write)Dem_ClearDtcAsyncStatus/13 (write)Dem_ClearDtcAsyncStatus/13 (write)Dem_ClearDtcAsyncStatus/13 (write)Dem_ClearDtcAsyncStatus/13 (write)Dem_InitSwUnitFncPtr/24 (read)Dem_InitializationState/104 (write)
  Referring: 
  Availability: available
  Function flags: count:198138933 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InitMaxOBDOccOrder/89 (45634028 (estimated locally),0.23 per call) Dem_InitMaxOccOrder/87 (45634028 (estimated locally),0.23 per call) Dem_PermanentMemoryInit.constprop/215 (45634028 (estimated locally),0.23 per call) Dem_RestoreImmediateData.constprop/214 (45634027 (estimated locally),0.23 per call) Dem_InitEvEntryExists/109 (45634027 (estimated locally),0.23 per call) Dem_ResetNvData/56 (9236327 (estimated locally),0.05 per call) Dem_NvMGetNvRAMBlockStatus/55 (45634027 (estimated locally),0.23 per call) Det_ASR40_ReportError/105 (63921205 (estimated locally),0.32 per call) 
   Indirect call(939524096 (estimated locally),4.74 per call) 
Dem_PreInit/25 (Dem_PreInit) @06c23d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/104 (read)Dem_ErrorQueueReadIdx/1 (write)Dem_ErrorQueueWriteIdx/2 (write)Dem_ErrorQueue/11 (write)Dem_DebounceFctPtrTable/107 (read)Dem_InitializationState/104 (write)
  Referring: 
  Availability: available
  Function flags: count:106893403 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GbiDebounceAlgo/106 (1002123244 (estimated locally),9.37 per call) Det_ASR40_ReportError/105 (35274823 (estimated locally),0.33 per call) 
   Indirect call(1002123244 (estimated locally),9.37 per call) 
Dem_InitSwUnitFncPtr/24 (Dem_InitSwUnitFncPtr) @06c25000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_InitEventReportVerifier/110 (addr)Dem_InitDTCFilter/111 (addr)Dem_InitDTCSelector/112 (addr)Dem_InitEventMemoryProcessor/113 (addr)Dem_InitRecordFilter/114 (addr)Dem_InitDataRecordSelector/115 (addr)Dem_InitDTCMemoryFilter/116 (addr)
  Referring: Dem_Init/26 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_SizeEventMem/23 (Dem_SizeEventMem) @06daff30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_RearrangeOccurrenceOrder/86 (read)Dem_SearchForEmptyEntry/83 (read)Dem_GetNumberOfEventMemoryEntries/52 (read)Dem_SearchForEntryToReplace.isra.0/200 (read)Dem_UpdateOccurrenceOrder/85 (read)Dem_SetCDTCOnConfirmation/90 (read)Dem_InitMaxOccOrder/87 (read)Dem_RestoreImmediateData.constprop.0/214 (read)Dem_Shutdown/27 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_NvDataBlockId/22 (Dem_NvDataBlockId) @06dafee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_RestoreImmediateData.constprop.0/214 (read)Dem_Shutdown/27 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_GateEntryData/21 (Dem_GateEntryData) @06dafea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_NvGateEntryPrimaryData/14 (addr)Dem_NvGateEntrySecondaryData/15 (addr)
  Referring: Dem_RestoreImmediateData.constprop.0/214 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_NvGateEntryData/20 (Dem_NvGateEntryData) @06dafe58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_NvGateEntryPrimaryData/14 (addr)Dem_NvGateEntrySecondaryData/15 (addr)
  Referring: Dem_RestoreImmediateData.constprop.0/214 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_EntryDataFreePos/19 (Dem_EntryDataFreePos) @06dafe10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_EntryDataFreePosPrimary/9 (addr)Dem_EntryDataFreePosSecondary/10 (addr)
  Referring: Dem_FindOrAllocateEventEntry.isra.0.constprop.0/213 (read)Dem_RestoreImmediateData.constprop.0/214 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_EntryData/18 (Dem_EntryData) @06dafdc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_EntryDataPrimary/7 (addr)Dem_EntryDataSecondary/8 (addr)
  Referring: Dem_RestoreImmediateData.constprop.0/214 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_EventMem/17 (Dem_EventMem) @06dafd80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_EventMemoryPrimary/5 (addr)Dem_EventMemorySecondary/6 (addr)
  Referring: Dem_RearrangeOccurrenceOrder/86 (read)Dem_SearchForEmptyEntry/83 (read)Dem_GetNumberOfEventMemoryEntries/52 (read)Dem_SearchForEntryToReplace.isra.0/200 (read)Dem_RestoreImmediateData.constprop.0/214 (read)Dem_UpdateOccurrenceOrder/85 (read)Dem_SetCDTCOnConfirmation/90 (read)Dem_InitMaxOccOrder/87 (read)Dem_Shutdown/27 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_NvData/16 (Dem_NvData) @06dafd38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_ReportErrorStatusPreInit/29 (read)Dem_SetCDTCOnConfirmation/90 (read)Dem_ProcessEventEntry.isra.0/207 (write)Dem_SetCDTCOnConfirmation/90 (read)Dem_SetCycleQualified/37 (write)Dem_SetCDTCOnConfirmation/90 (read)Dem_ProcessEventEntry.isra.0/207 (read)Dem_IncrementFailureCounter/93 (write)Dem_OpCycleProcessEventCycleStart/102 (read)Dem_OpCycleProcessEventCycleStart/102 (write)Dem_SetCycleCounterRole.constprop.0/211 (addr)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (write)Dem_ResetNvData/56 (write)Dem_ResetNvData/56 (write)Dem_ResetNvData/56 (write)Dem_CheckWIROffCriteriaFulfilled/98 (read)Dem_GetEventTested/40 (read)Dem_OpCycleProcessCycleStart/101 (write)Dem_OpCycleProcessCycleStart/101 (write)Dem_SearchForEntryToReplace.isra.0/200 (read)Dem_SearchForEntryToReplace.isra.0/200 (read)Dem_ResetNvData/56 (write)Dem_ResetNvData/56 (write)Dem_RestoreDerivedEventStatus.isra.0/198 (write)Dem_RestoreDerivedEventStatus.isra.0/198 (write)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_ProcessEventEntry.isra.0/207 (read)Dem_IncrementFailureCounter/93 (read)Dem_ProcessIndicatorOnCriteria/96 (addr)Dem_UpdateFailureCounterCycleStart/92 (read)Dem_OpCycleProcessCycleStart/101 (read)Dem_ResetEventStatus/32 (read)Dem_OpCycleProcessEventCycleEnd/100 (write)Dem_ProcessFailureCounterReset/91 (read)Dem_RestoreImmediateData.constprop.0/214 (read)Dem_ResetNvData/56 (write)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_RestoreDerivedEventStatus.isra.0/198 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_OpCycleProcessEventCycleEnd/100 (read)Dem_ProcessIndicator/94 (read)Dem_ProcessIndicatorOnCriteria/96 (addr)Dem_ResetNvData/56 (write)Dem_SetCycleQualified/37 (read)Dem_ProcessIndicatorOnCriteria/96 (read)Dem_ResetNvData/56 (write)Dem_RestoreImmediateData.constprop.0/214 (write)Dem_MainFunction.part.0/209 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_ReplaceEventEntry.isra.0/201 (read)Dem_ReplaceEventEntry.isra.0/201 (write)Dem_ReplaceEventEntry.isra.0/201 (read)Dem_ReplaceEventEntry.isra.0/201 (addr)Dem_ResetEventStatus/32 (write)Dem_SetCycleQualified/37 (write)Dem_GetEventStatus/38 (read)Dem_GetEventFailed/39 (read)Dem_SetCDTCOnConfirmation/90 (write)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_SetCycleQualified/37 (read)Dem_SetCycleQualified/37 (read)Dem_SelectEntryOfOBDFreezeFrameEvent/69 (read)Dem_GetEventMemoryOverflow/51 (read)Dem_UpdateEventIdOccurKinds.part.0/204 (read)Dem_UpdateEventIdOccurKinds.part.0/204 (write)Dem_UpdateEventIdOccurKinds.part.0/204 (write)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (write)Dem_OpCycleProcessEventCycleEnd/100 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (write)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (write)Dem_ProcessIndicatorOffCriteria.constprop.0/210 (read)
  Availability: available
  Varpool flags:
Dem_NvGateEntrySecondaryData/15 (Dem_NvGateEntrySecondaryData) @06dafcf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_NvGateEntryData/20 (addr)Dem_GateEntryData/21 (addr)
  Availability: available
  Varpool flags:
Dem_NvGateEntryPrimaryData/14 (Dem_NvGateEntryPrimaryData) @06dafca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_NvGateEntryData/20 (addr)Dem_GateEntryData/21 (addr)Dem_RestoreImmediateData.constprop.0/214 (read)Dem_RestoreImmediateData.constprop.0/214 (addr)
  Availability: available
  Varpool flags:
Dem_ClearDtcAsyncStatus/13 (Dem_ClearDtcAsyncStatus) @06dafc60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_Init/26 (write)Dem_Init/26 (write)Dem_Init/26 (write)Dem_Init/26 (write)Dem_MainFunction.part.0/209 (read)
  Availability: available
  Varpool flags:
Dem_NvMGateEntryInfo/12 (Dem_NvMGateEntryInfo) @06dafc18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_Init/26 (write)
  Availability: available
  Varpool flags:
Dem_ErrorQueue/11 (Dem_ErrorQueue) @06dafbd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_CheckErrorQueueEntry/63 (read)Dem_WriteErrorQueueEntry/62 (write)Dem_WriteErrorQueueEntry/62 (read)Dem_CheckErrorReQueueEntry/64 (read)Dem_ReadErrorQueueEntry/61 (read)Dem_ReadErrorQueueEntry/61 (write)Dem_InvalidateErrorQueueEntry/60 (read)Dem_CheckErrorQueueEntry/63 (read)Dem_PreInit/25 (write)Dem_InvalidateErrorQueueEntry/60 (read)Dem_InvalidateErrorQueueEntry/60 (write)Dem_ReadErrorQueueEntry/61 (write)Dem_CheckErrorQueueEntryForStatus/65 (read)Dem_CheckErrorQueueEntryForStatus/65 (read)
  Availability: available
  Varpool flags:
Dem_EntryDataFreePosSecondary/10 (Dem_EntryDataFreePosSecondary) @06dafb88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EntryDataFreePos/19 (addr)
  Availability: available
  Varpool flags:
Dem_EntryDataFreePosPrimary/9 (Dem_EntryDataFreePosPrimary) @06dafb40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EntryDataFreePos/19 (addr)
  Availability: available
  Varpool flags:
Dem_EntryDataSecondary/8 (Dem_EntryDataSecondary) @06dafaf8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EntryData/18 (addr)
  Availability: available
  Varpool flags:
Dem_EntryDataPrimary/7 (Dem_EntryDataPrimary) @06dafab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EntryData/18 (addr)
  Availability: available
  Varpool flags:
Dem_EventMemorySecondary/6 (Dem_EventMemorySecondary) @06dafa68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EventMem/17 (addr)
  Availability: available
  Varpool flags:
Dem_EventMemoryPrimary/5 (Dem_EventMemoryPrimary) @06dafa20
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EventMem/17 (addr)Dem_InitMaxOBDOccOrder/89 (addr)Dem_RearrangeOBDOccurrenceOrder/88 (addr)Dem_RearrangeOBDOccurrenceOrder/88 (addr)Dem_RearrangeOBDOccurrenceOrder/88 (addr)Dem_SelectEntryOfOBDFreezeFrameEvent/69 (addr)Dem_ProcessMultipleOBDFreezeFrameEntry.part.0/205 (addr)
  Availability: available
  Varpool flags:
Dem_MaxOccOrder/4 (Dem_MaxOccOrder) @06daf9d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_InitMaxOccOrder/87 (read)Dem_RearrangeOccurrenceOrder/86 (write)Dem_InitMaxOccOrder/87 (write)Dem_InitMaxOccOrder/87 (write)Dem_UpdateOccurrenceOrder/85 (read)Dem_UpdateOccurrenceOrder/85 (write)Dem_UpdateOccurrenceOrder/85 (read)
  Availability: available
  Varpool flags:
Dem_MaxOBDOccOrder/3 (Dem_MaxOBDOccOrder) @06daf990
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_InitMaxOBDOccOrder/89 (read)Dem_InitMaxOBDOccOrder/89 (write)Dem_RearrangeOBDOccurrenceOrder/88 (write)Dem_InitMaxOBDOccOrder/89 (write)Dem_SetOBDFFOccurrenceOrder/70 (read)Dem_SetOBDFFOccurrenceOrder/70 (read)Dem_SetOBDFFOccurrenceOrder/70 (write)
  Availability: available
  Varpool flags:
Dem_ErrorQueueWriteIdx/2 (Dem_ErrorQueueWriteIdx) @06daf948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_CheckErrorQueueEntry/63 (read)Dem_WriteErrorQueueEntry/62 (write)Dem_CheckErrorReQueueEntry/64 (read)Dem_InvalidateErrorQueueEntry/60 (read)Dem_PreInit/25 (write)Dem_WriteErrorQueueEntry/62 (read)Dem_CheckErrorQueueEntryForStatus/65 (read)
  Availability: available
  Varpool flags:
Dem_ErrorQueueReadIdx/1 (Dem_ErrorQueueReadIdx) @06daf900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_CheckErrorQueueEntry/63 (read)Dem_CheckErrorReQueueEntry/64 (read)Dem_ReadErrorQueueEntry/61 (write)Dem_ReadErrorQueueEntry/61 (read)Dem_PreInit/25 (write)Dem_ReadErrorQueueEntry/61 (write)Dem_InvalidateErrorQueueEntry/60 (read)Dem_CheckErrorQueueEntryForStatus/65 (read)
  Availability: available
  Varpool flags:
Dem_DoProcessFaultConfirmation/0 (Dem_DoProcessFaultConfirmation) @06daf8b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_SetCycleQualified/37 (write)Dem_MainFunction.part.0/209 (write)Dem_MainFunction.part.0/209 (read)Dem_UpdateFailureCounterCycleStart/92 (write)
  Availability: available
  Varpool flags: initialized

;; Function Dem_PreInit (Dem_PreInit, funcdef_no=0, decl_uid=5975, cgraph_uid=1, symbol_order=25)

Modification phase of node Dem_PreInit/25
Dem_PreInit (const Dem_ConfigType * ConfigPtr)
{
  Dem_EventIdType EvId;
  Dem_ErrorQueueIdxType QueueIdx;
  <unnamed type> Dem_InitializationState.0_1;
  int _2;
  <unnamed type> _3;
  void (*<T710>) (Dem_EventIdType) _4;

  <bb 2> [local count: 106893403]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.0_1 = Dem_InitializationState;
  if (Dem_InitializationState.0_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 35274823]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 1, 64);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 71618580]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueReadIdx = 0;
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueWriteIdx = 0;
  # DEBUG BEGIN_STMT
  # DEBUG QueueIdx => 0
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 716264590]:
  # DEBUG BEGIN_STMT
  _2 = (int) QueueIdx_5;
  Dem_ErrorQueue[_2] = 0;
  # DEBUG BEGIN_STMT
  QueueIdx_18 = QueueIdx_5 + 1;
  # DEBUG QueueIdx => QueueIdx_18

  <bb 6> [local count: 787883171]:
  # QueueIdx_5 = PHI <0(4), QueueIdx_18(5)>
  # DEBUG QueueIdx => QueueIdx_5
  # DEBUG BEGIN_STMT
  if (QueueIdx_5 != 10)
    goto <bb 5>; [90.91%]
  else
    goto <bb 11>; [9.09%]

  <bb 11> [local count: 71618580]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 1002123244]:
  # DEBUG BEGIN_STMT
  _3 = Dem_GbiDebounceAlgo (EvId_6);
  _4 = Dem_DebounceFctPtrTable[_3].ResetFct;
  _4 (EvId_6);
  # DEBUG BEGIN_STMT
  EvId_16 = EvId_6 + 1;
  # DEBUG EvId => EvId_16

  <bb 8> [local count: 1073741824]:
  # EvId_6 = PHI <EvId_16(7), 1(11)>
  # DEBUG EvId => EvId_6
  # DEBUG BEGIN_STMT
  if (EvId_6 != 15)
    goto <bb 7>; [93.33%]
  else
    goto <bb 9>; [6.67%]

  <bb 9> [local count: 71618580]:
  # DEBUG BEGIN_STMT
  Dem_InitializationState = 1;

  <bb 10> [local count: 106893403]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_Init (Dem_Init, funcdef_no=1, decl_uid=5977, cgraph_uid=2, symbol_order=26)

Modification phase of node Dem_Init/26
Dem_Init ()
{
  uint8 OriginIdx;
  Dem_OperationCycleIdType OpCycleId;
  uint8 SwUnitIdx;
  <unnamed type> Dem_InitializationState.1_1;
  int _3;
  unsigned char _4;
  int _5;
  int _6;
  void (*<T577>) (void) _7;

  <bb 2> [local count: 198138933]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.1_1 = Dem_InitializationState;
  if (Dem_InitializationState.1_1 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 3> [local count: 130771696]:
  if (Dem_InitializationState.1_1 != 3)
    goto <bb 4>; [48.88%]
  else
    goto <bb 5>; [51.12%]

  <bb 4> [local count: 63921205]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 2, 64);
  goto <bb 18>; [100.00%]

  <bb 5> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Dem_InitializationState.1_1 == 1)
    goto <bb 20>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 20> [local count: 45634027]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 136902083]:
  # DEBUG BEGIN_STMT
  _3 = (int) OpCycleId_9;
  Dem_OpCycleState[_3] = 1;
  # DEBUG BEGIN_STMT
  OpCycleId_33 = OpCycleId_9 + 1;
  # DEBUG OpCycleId => OpCycleId_33

  <bb 7> [local count: 182536110]:
  # OpCycleId_9 = PHI <OpCycleId_33(6), 0(20)>
  # DEBUG ResetNvData => NULL
  # DEBUG OpCycleId => OpCycleId_9
  # DEBUG BEGIN_STMT
  if (OpCycleId_9 != 3)
    goto <bb 6>; [75.00%]
  else
    goto <bb 8>; [25.00%]

  <bb 8> [local count: 45634027]:
  # DEBUG BEGIN_STMT
  _4 = Dem_NvMGetNvRAMBlockStatus (4);
  if (_4 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 9236327]:
  # DEBUG BEGIN_STMT
  Dem_ResetNvData ();

  <bb 10> [local count: 45634027]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitEvEntryExists ();
  # DEBUG BEGIN_STMT
  Dem_RestoreImmediateData (0);
  # DEBUG BEGIN_STMT
  # DEBUG OriginIdx => 0
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _5 = (int) OriginIdx_10;
  Dem_NvMGateEntryInfo[_5].Status = 0;
  # DEBUG BEGIN_STMT
  OriginIdx_31 = OriginIdx_10 + 1;
  # DEBUG OriginIdx => OriginIdx_31

  <bb 12> [local count: 228170138]:
  # OriginIdx_10 = PHI <0(10), OriginIdx_31(11)>
  # DEBUG OriginIdx => OriginIdx_10
  # DEBUG BEGIN_STMT
  if (OriginIdx_10 != 4)
    goto <bb 11>; [80.00%]
  else
    goto <bb 13>; [20.00%]

  <bb 13> [local count: 45634028]:
  # DEBUG BEGIN_STMT
  Dem_PermanentMemoryInit (0);
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventStatusWrite = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.EventMemWrite = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 0;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.ClientId = 4;
  # DEBUG BEGIN_STMT
  Dem_InitMaxOccOrder ();
  # DEBUG BEGIN_STMT
  Dem_InitMaxOBDOccOrder ();

  <bb 16> [local count: 134217728]:
  # SwUnitIdx_14 = PHI <0(13), 0(5)>
  goto <bb 19>; [100.00%]

  <bb 15> [local count: 939524096]:
  # DEBUG BEGIN_STMT
  _6 = (int) SwUnitIdx_8;
  _7 = Dem_InitSwUnitFncPtr[_6];
  _7 ();
  # DEBUG BEGIN_STMT
  SwUnitIdx_36 = SwUnitIdx_8 + 1;
  # DEBUG SwUnitIdx => SwUnitIdx_36

  <bb 19> [local count: 1073741824]:
  # SwUnitIdx_8 = PHI <SwUnitIdx_14(16), SwUnitIdx_36(15)>
  # DEBUG SwUnitIdx => SwUnitIdx_8
  # DEBUG BEGIN_STMT
  if (SwUnitIdx_8 != 7)
    goto <bb 15>; [87.50%]
  else
    goto <bb 17>; [12.50%]

  <bb 17> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  Dem_InitializationState = 2;

  <bb 18> [local count: 198138933]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ReportErrorStatus (Dem_ReportErrorStatus, funcdef_no=3, decl_uid=5991, cgraph_uid=4, symbol_order=28)

Modification phase of node Dem_ReportErrorStatus/28
Dem_ReportErrorStatus (Dem_EventIdType EventId, Dem_EventStatusType EventStatus)
{
  <unnamed type> Dem_InitializationState.18_1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.18_1 = Dem_InitializationState;
  if (Dem_InitializationState.18_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 32);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (EventId_5(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 18);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (EventId_5(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 16);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  if (EventStatus_6(D) > 3)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 161470906]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 18);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 161470906]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiEventKind (EventId_5(D));
  if (_2 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 80735453]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 18);
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 80735453]:
  # DEBUG BEGIN_STMT
  Dem_ReportErrorStatusCore (EventId_5(D), EventStatus_6(D), 0);

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_SetEventStatus (Dem_SetEventStatus, funcdef_no=6, decl_uid=6252, cgraph_uid=7, symbol_order=31)

Modification phase of node Dem_SetEventStatus/31
Dem_SetEventStatus (Dem_EventIdType EventId, Dem_EventStatusType EventStatus)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.25_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.25_1 = Dem_InitializationState;
  if (Dem_InitializationState.25_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 4, 32);
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 4, 18);
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 4, 16);
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (EventStatus_7(D) > 3)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 123199891]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 4, 18);
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 123199891]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiEventKind (EventId_6(D));
  if (_2 != 1)
    goto <bb 11>; [66.00%]
  else
    goto <bb 12>; [34.00%]

  <bb 11> [local count: 81311928]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 4, 18);
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 41887963]:
  # DEBUG BEGIN_STMT
  Result_10 = Dem_InternalProcessEventReport (EventId_6(D), EventStatus_7(D), 1);
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT
  if (Result_10 == 3)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 8478124]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 4, 16);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 14> [local count: 1073741824]:
  # Result_3 = PHI <1(3), 1(5), 1(7), 1(9), 1(11), Result_10(12), 1(13)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function Dem_ResetEventStatus (Dem_ResetEventStatus, funcdef_no=7, decl_uid=6254, cgraph_uid=8, symbol_order=32)

Modification phase of node Dem_ResetEventStatus/32
Dem_ResetEventStatus (Dem_EventIdType EventId)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.26_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  <unnamed type> _5;
  void (*<T710>) (Dem_EventIdType) _6;
  unsigned char _12;
  unsigned char _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.26_1 = Dem_InitializationState;
  if (Dem_InitializationState.26_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 5, 32);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_14(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 5, 18);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_14(D) > 14)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 5, 16);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = (int) EventId_14(D);
  _3 = Dem_NvData.DTCStatusMask[_2];
  _12 = _3 & 64;
  if (_12 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 9> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  _19 = _3 & 1;
  if (_19 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 45970109]:
  # DEBUG BEGIN_STMT
  _4 = _3 & 254;
  Dem_NvData.DTCStatusMask[_2] = _4;

  <bb 11> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  _5 = Dem_GbiDebounceAlgo (EventId_14(D));
  _6 = Dem_DebounceFctPtrTable[_5].ResetFct;
  _6 (EventId_14(D));
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 12> [local count: 183880435]:
  # Result_7 = PHI <1(8), 0(11)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 13> [local count: 1073741824]:
  # Result_8 = PHI <1(3), 1(5), 1(7), Result_7(12)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_ResetEventDebounceStatus (Dem_ResetEventDebounceStatus, funcdef_no=8, decl_uid=6263, cgraph_uid=9, symbol_order=33)

Modification phase of node Dem_ResetEventDebounceStatus/33
Dem_ResetEventDebounceStatus (Dem_EventIdType EventId, Dem_DebounceResetStatusType DebounceResetStatus)
{
  Dem_DebounceType DebounceAlgo;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.27_1;
  <unnamed type> _2;
  void (*<T710>) (Dem_EventIdType) _3;
  void (*<T710>) (Dem_EventIdType) _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.27_1 = Dem_InitializationState;
  if (Dem_InitializationState.27_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 9, 32);
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (EventId_8(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 9, 18);
  goto <bb 17>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (EventId_8(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 9, 16);
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  if (DebounceResetStatus_9(D) > 1)
    goto <bb 9>; [59.00%]
  else
    goto <bb 10>; [41.00%]

  <bb 9> [local count: 190535669]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 9, 18);
  goto <bb 17>; [100.00%]

  <bb 10> [local count: 132406143]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiDebounceAlgo (EventId_8(D));
  if (_2 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 66203071]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 9, 16);
  goto <bb 17>; [100.00%]

  <bb 12> [local count: 66203071]:
  # DEBUG BEGIN_STMT
  DebounceAlgo_12 = Dem_GbiDebounceAlgo (EventId_8(D));
  # DEBUG DebounceAlgo => DebounceAlgo_12
  # DEBUG BEGIN_STMT
  if (DebounceResetStatus_9(D) == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 22509044]:
  # DEBUG BEGIN_STMT
  _3 = Dem_DebounceFctPtrTable[DebounceAlgo_12].ResetFct;
  _3 (EventId_8(D));
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 43694027]:
  # DEBUG BEGIN_STMT
  _4 = Dem_DebounceFctPtrTable[DebounceAlgo_12].FreezeFct;
  if (_4 != 0B)
    goto <bb 15>; [70.00%]
  else
    goto <bb 17>; [30.00%]

  <bb 15> [local count: 30585819]:
  # DEBUG BEGIN_STMT
  _4 (EventId_8(D));

  <bb 17> [local count: 1073741824]:
  # Result_5 = PHI <1(3), 1(5), 1(7), 1(9), 1(11), 0(14), 0(13), 0(15)>
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_5;

}



;; Function Dem_PrestoreFreezeFrame (Dem_PrestoreFreezeFrame, funcdef_no=9, decl_uid=6256, cgraph_uid=10, symbol_order=34)

Modification phase of node Dem_PrestoreFreezeFrame/34
Dem_PrestoreFreezeFrame (Dem_EventIdType EventId)
{
  <unnamed type> Dem_InitializationState.28_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.28_1 = Dem_InitializationState;
  if (Dem_InitializationState.28_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 6, 32);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_5(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 6, 18);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_5(D) > 14)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 6, 16);
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiEnablePrestorage (EventId_5(D));
  if (_2 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 60680543]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 6, 16);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_ClearPrestoredFreezeFrame (Dem_ClearPrestoredFreezeFrame, funcdef_no=10, decl_uid=6258, cgraph_uid=11, symbol_order=35)

Modification phase of node Dem_ClearPrestoredFreezeFrame/35
Dem_ClearPrestoredFreezeFrame (Dem_EventIdType EventId)
{
  <unnamed type> Dem_InitializationState.29_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.29_1 = Dem_InitializationState;
  if (Dem_InitializationState.29_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 7, 32);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_5(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 7, 18);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_5(D) > 14)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 7, 16);
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiEnablePrestorage (EventId_5(D));
  if (_2 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 60680543]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 7, 16);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_SetCycleQualified (Dem_SetCycleQualified, funcdef_no=12, decl_uid=6298, cgraph_uid=13, symbol_order=37)

Modification phase of node Dem_SetCycleQualified/37
Dem_SetCycleQualified (Dem_OperationCycleIdType OperationCycleId)
{
  const Dem_CounterDataIdxType CounterDataIdx;
  Dem_IndicatorIdxType IndicatorIdx;
  Dem_EventIdType EventId;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.42_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned int _7;
  unsigned char _8;
  unsigned int _9;
  unsigned int _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _13;
  int _14;
  unsigned char _15;
  unsigned char _16;
  short unsigned int _17;
  unsigned char _26;

  <bb 2> [local count: 164622516]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.42_1 = Dem_InitializationState;
  if (Dem_InitializationState.42_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 80467486]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 86, 32);
  goto <bb 22>; [100.00%]

  <bb 4> [local count: 84155030]:
  # DEBUG BEGIN_STMT
  if (OperationCycleId_28(D) != 1)
    goto <bb 5>; [48.88%]
  else
    goto <bb 6>; [51.12%]

  <bb 5> [local count: 41134979]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 86, 16);
  goto <bb 22>; [100.00%]

  <bb 6> [local count: 43020051]:
  # DEBUG BEGIN_STMT
  _2 = Dem_OpCycleState[1];
  if (_2 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 14626817]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 86, 64);
  goto <bb 22>; [100.00%]

  <bb 8> [local count: 28393234]:
  # DEBUG BEGIN_STMT
  # DEBUG ProcessEvents => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = Dem_NvData.Dem_OpCycleDCYIsQualified;
  if (_3 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 14196617]:
  # DEBUG ProcessEvents => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 10> [local count: 14196617]:
  # DEBUG BEGIN_STMT
  # DEBUG ProcessEvents => 1
  # DEBUG BEGIN_STMT
  Dem_NvData.Dem_OpCycleDCYIsQualified = 1;
  # DEBUG BEGIN_STMT
  Dem_DoProcessFaultConfirmation = 1;
  # DEBUG ProcessEvents => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 11> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 12> [local count: 1073741824]:
  # EventId_19 = PHI <EventId_20(11), EventId_42(23)>
  # DEBUG EventId => EventId_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Dem_GbiOpCycleIdx (EventId_19);
  if (_4 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 18>; [79.76%]

  <bb 13> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = Dem_IsMILEvent (EventId_19, &IndicatorIdx);
  if (_5 == 1)
    goto <bb 14>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 14> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  CounterDataIdx_37 = IndicatorIdx;
  # DEBUG CounterDataIdx => CounterDataIdx_37
  # DEBUG BEGIN_STMT
  # DEBUG IndicatorId => 0
  # DEBUG BEGIN_STMT
  _6 = CounterDataIdx_37 >> 3;
  _7 = (unsigned int) _6;
  _8 = Dem_NvData.IndicatorCycleCounterRole[0][_7];
  _26 = CounterDataIdx_37 & 7;
  _9 = (unsigned int) _26;
  _10 = 1 << _9;
  _11 = (unsigned char) _10;
  _12 = _8 & _11;
  if (_12 == 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 15> [local count: 24383904]:
  # DEBUG BEGIN_STMT
  _13 = Dem_ProcessIndicatorFailureCycleCounter (CounterDataIdx_37, EventId_19, 0);
  if (_13 == 1)
    goto <bb 16>; [20.24%]
  else
    goto <bb 17>; [79.76%]

  <bb 16> [local count: 4935302]:
  # DEBUG BEGIN_STMT
  _14 = (int) EventId_19;
  _15 = Dem_NvData.DTCStatusMask[_14];
  _16 = _15 | 128;
  Dem_NvData.DTCStatusMask[_14] = _16;
  # DEBUG BEGIN_STMT
  Dem_PermanentMemoryAddEntry (EventId_19);

  <bb 17> [local count: 217325346]:
  IndicatorIdx ={v} {CLOBBER};

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EventId_42 = EventId_19 + 1;
  # DEBUG EventId => EventId_42
  # DEBUG BEGIN_STMT
  _17 = EventId_42 % 10;
  if (_17 != 0)
    goto <bb 19>; [94.50%]
  else
    goto <bb 20>; [5.50%]

  <bb 19> [local count: 1014686024]:
  if (EventId_42 <= 14)
    goto <bb 23>; [94.50%]
  else
    goto <bb 20>; [5.50%]

  <bb 23> [local count: 958878293]:
  goto <bb 12>; [100.00%]

  <bb 20> [local count: 114863532]:
  # EventId_29 = PHI <EventId_42(18), EventId_42(19)>
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 21> [local count: 129060148]:
  # EventId_20 = PHI <1(10), EventId_29(20)>
  # DEBUG EventId => EventId_20
  # DEBUG BEGIN_STMT
  if (EventId_20 <= 14)
    goto <bb 11>; [89.00%]
  else
    goto <bb 22>; [11.00%]

  <bb 22> [local count: 164622516]:
  # Result_18 = PHI <1(3), 1(5), 1(7), 0(21), 0(9)>
  # DEBUG Result => Result_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_18;

}



;; Function Dem_GetEventStatus (Dem_GetEventStatus, funcdef_no=13, decl_uid=6266, cgraph_uid=14, symbol_order=38)

Modification phase of node Dem_GetEventStatus/38
Dem_GetEventStatus (Dem_EventIdType EventId, Dem_EventStatusExtendedType * EventStatusExtended)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.45_1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.45_1 = Dem_InitializationState;
  if (Dem_InitializationState.45_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 10, 32);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_7(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 10, 18);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_7(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 10, 16);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (EventStatusExtended_8(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 42947482]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 10, 17);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 203452301]:
  # DEBUG BEGIN_STMT
  _2 = (int) EventId_7(D);
  _3 = Dem_NvData.DTCStatusMask[_2];
  *EventStatusExtended_8(D) = _3;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 11> [local count: 1073741824]:
  # Result_4 = PHI <1(3), 1(5), 1(7), 1(9), 0(10)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_GetEventFailed (Dem_GetEventFailed, funcdef_no=14, decl_uid=6269, cgraph_uid=15, symbol_order=39)

Modification phase of node Dem_GetEventFailed/39
Dem_GetEventFailed (Dem_EventIdType EventId, boolean * EventFailed)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.46_1;
  int _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.46_1 = Dem_InitializationState;
  if (Dem_InitializationState.46_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 11, 32);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_8(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 11, 18);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_8(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 11, 16);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (EventFailed_9(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 42947482]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 11, 17);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 203452301]:
  # DEBUG BEGIN_STMT
  _2 = (int) EventId_8(D);
  _3 = Dem_NvData.DTCStatusMask[_2];
  _4 = _3 & 1;
  *EventFailed_9(D) = _4;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 11> [local count: 1073741824]:
  # Result_5 = PHI <1(3), 1(5), 1(7), 1(9), 0(10)>
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_5;

}



;; Function Dem_GetEventTested (Dem_GetEventTested, funcdef_no=15, decl_uid=6272, cgraph_uid=16, symbol_order=40)

Modification phase of node Dem_GetEventTested/40
Dem_GetEventTested (Dem_EventIdType EventId, boolean * EventTested)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.47_1;
  int _2;
  unsigned char _3;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.47_1 = Dem_InitializationState;
  if (Dem_InitializationState.47_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 12, 32);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_8(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 12, 18);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_8(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 12, 16);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (EventTested_9(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 42947482]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 12, 17);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 203452301]:
  # DEBUG BEGIN_STMT
  _2 = (int) EventId_8(D);
  _3 = Dem_NvData.DTCStatusMask[_2];
  _6 = _3 & 64;
  if (_6 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 101726150]:
  # DEBUG BEGIN_STMT
  *EventTested_9(D) = 0;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 101726150]:
  # DEBUG BEGIN_STMT
  *EventTested_9(D) = 1;

  <bb 13> [local count: 1073741824]:
  # Result_4 = PHI <1(3), 1(5), 1(7), 1(9), 0(12), 0(11)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_GetDTCOfEvent (Dem_GetDTCOfEvent, funcdef_no=16, decl_uid=6235, cgraph_uid=17, symbol_order=41)

Modification phase of node Dem_GetDTCOfEvent/41
Dem_GetDTCOfEvent (Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 * DTCOfEvent)
{
  uint32 DTCValue;
  Std_ReturnType Result;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (EventId_6(D) == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 13, 18);
  goto <bb 18>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) > 14)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 13, 16);
  goto <bb 18>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_7(D) > 2)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 13, 18);
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  if (DTCOfEvent_8(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 56288758]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 13, 17);
  goto <bb 18>; [100.00%]

  <bb 10> [local count: 266653054]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DTCFormat_7(D) == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 87995508]:
  # DEBUG BEGIN_STMT
  DTCValue_13 = Dem_GetObdDTC (EventId_6(D));
  # DEBUG DTCValue => DTCValue_13
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 178657546]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_7(D) == 2)
    goto <bb 17>; [51.12%]
  else
    goto <bb 14>; [48.88%]

  <bb 14> [local count: 87327809]:
  # DEBUG BEGIN_STMT
  DTCValue_11 = Dem_GetUdsDTC (EventId_6(D));
  # DEBUG DTCValue => DTCValue_11

  <bb 15> [local count: 175323316]:
  # DTCValue_3 = PHI <DTCValue_13(11), DTCValue_11(14)>
  # DEBUG DTCValue => DTCValue_3
  # DEBUG BEGIN_STMT
  if (DTCValue_3 == 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 87661658]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 17> [local count: 266653054]:
  # Result_1 = PHI <2(15), 0(16), 2(12)>
  # DTCValue_14 = PHI <DTCValue_3(15), DTCValue_3(16), 0(12)>
  # DEBUG DTCValue => NULL
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  *DTCOfEvent_8(D) = DTCValue_14;

  <bb 18> [local count: 1073741824]:
  # Result_2 = PHI <1(3), 1(5), 1(7), 1(9), Result_1(17)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function Dem_SetEnableCondition (Dem_SetEnableCondition, funcdef_no=17, decl_uid=6301, cgraph_uid=18, symbol_order=42)

Modification phase of node Dem_SetEnableCondition/42
Dem_SetEnableCondition (uint8 EnableConditionID, boolean ConditionFulfilled)
{
  const Dem_EnCondLnkType GrpLnkNextIdx;
  const Dem_EnCondLnkType GrpLnkStartIdx;
  Dem_EnCondLnkType GrpIdx;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.48_1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  int _8;
  unsigned char _9;
  int _10;
  unsigned char _11;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.48_1 = Dem_InitializationState;
  if (Dem_InitializationState.48_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 57, 32);
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EnableConditionID_20(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 57, 16);
  goto <bb 17>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (ConditionFulfilled_21(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 216978913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 57, 18);
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 150781957]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = Dem_EnCondStatus[0];
  if (_2 != ConditionFulfilled_21(D))
    goto <bb 9>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 9> [local count: 99516091]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  GrpLnkStartIdx_23 = Dem_EnCondToEvIdLink[0];
  # DEBUG GrpLnkStartIdx => GrpLnkStartIdx_23
  # DEBUG BEGIN_STMT
  GrpLnkNextIdx_24 = Dem_EnCondToEvIdLink[1];
  # DEBUG GrpLnkNextIdx => GrpLnkNextIdx_24
  # DEBUG BEGIN_STMT
  # DEBUG GrpIdx => GrpLnkStartIdx_23
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 805175653]:
  # DEBUG BEGIN_STMT
  if (ConditionFulfilled_21(D) == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 402587826]:
  # DEBUG BEGIN_STMT
  _3 = (int) GrpIdx_14;
  _4 = Dem_EnCondGrpLink[_3];
  _5 = (int) _4;
  _6 = Dem_EnCondGrpStatusCounter[_5];
  _7 = _6 + 1;
  Dem_EnCondGrpStatusCounter[_5] = _7;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 402587826]:
  # DEBUG BEGIN_STMT
  _8 = (int) GrpIdx_14;
  _9 = Dem_EnCondGrpLink[_8];
  _10 = (int) _9;
  _11 = Dem_EnCondGrpStatusCounter[_10];
  _12 = _11 + 255;
  Dem_EnCondGrpStatusCounter[_10] = _12;

  <bb 13> [local count: 805175653]:
  # DEBUG BEGIN_STMT
  GrpIdx_28 = GrpIdx_14 + 1;
  # DEBUG GrpIdx => GrpIdx_28

  <bb 14> [local count: 904691745]:
  # GrpIdx_14 = PHI <GrpLnkStartIdx_23(9), GrpIdx_28(13)>
  # DEBUG GrpIdx => GrpIdx_14
  # DEBUG BEGIN_STMT
  if (GrpIdx_14 < GrpLnkNextIdx_24)
    goto <bb 10>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 15> [local count: 99516092]:
  # DEBUG BEGIN_STMT
  Dem_EnCondStatus[0] = ConditionFulfilled_21(D);

  <bb 16> [local count: 150781957]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 17> [local count: 1073741824]:
  # Result_13 = PHI <1(3), 1(5), 1(7), 0(16)>
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_13;

}



;; Function Dem_GetDebouncingOfEvent (Dem_GetDebouncingOfEvent, funcdef_no=18, decl_uid=6282, cgraph_uid=19, symbol_order=43)

Modification phase of node Dem_GetDebouncingOfEvent/43
Dem_GetDebouncingOfEvent (Dem_EventIdType EventId, Dem_DebouncingStateType * DebouncingState)
{
  <unnamed type> Dem_InitializationState.50_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.50_1 = Dem_InitializationState;
  if (Dem_InitializationState.50_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 159, 32);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_4(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 159, 18);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_4(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 159, 16);
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (DebouncingState_5(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 42947482]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 159, 17);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_GetEventExtendedDataRecordEx (Dem_GetEventExtendedDataRecordEx, funcdef_no=19, decl_uid=6293, cgraph_uid=20, symbol_order=44)

Modification phase of node Dem_GetEventExtendedDataRecordEx/44
Dem_GetEventExtendedDataRecordEx (Dem_EventIdType EventId, uint8 RecordNumber, uint8 * DestBuffer, uint16 * BufSize)
{
  <unnamed type> Dem_InitializationState.51_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.51_1 = Dem_InitializationState;
  if (Dem_InitializationState.51_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 109, 32);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_4(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 109, 18);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_4(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 109, 16);
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (DestBuffer_5(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 42947482]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 109, 17);
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 203452301]:
  # DEBUG BEGIN_STMT
  if (BufSize_6(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 35461736]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 109, 17);

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_GetEventFreezeFrameDataEx (Dem_GetEventFreezeFrameDataEx, funcdef_no=20, decl_uid=6288, cgraph_uid=21, symbol_order=45)

Modification phase of node Dem_GetEventFreezeFrameDataEx/45
Dem_GetEventFreezeFrameDataEx (Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, uint8 * DestBuffer, uint16 * BufSize)
{
  <unnamed type> Dem_InitializationState.52_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.52_1 = Dem_InitializationState;
  if (Dem_InitializationState.52_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 110, 32);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_4(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 110, 18);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_4(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 110, 16);
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (DestBuffer_5(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 42947482]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 110, 17);
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 203452301]:
  # DEBUG BEGIN_STMT
  if (BufSize_6(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 35461736]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 110, 17);

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_GetFaultDetectionCounter (Dem_GetFaultDetectionCounter, funcdef_no=21, decl_uid=6275, cgraph_uid=22, symbol_order=46)

Modification phase of node Dem_GetFaultDetectionCounter/46
Dem_GetFaultDetectionCounter (Dem_EventIdType EventId, sint8 * FaultDetectionCounter)
{
  const Dem_DebounceType Algorithm;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.53_1;
  Std_ReturnType (*<T726>) (Dem_EventIdType, sint8 *) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.53_1 = Dem_InitializationState;
  if (Dem_InitializationState.53_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 62, 32);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 62, 18);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 62, 16);
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (FaultDetectionCounter_7(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 73919935]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 62, 17);
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 172479848]:
  # DEBUG BEGIN_STMT
  Algorithm_9 = Dem_GbiDebounceAlgo (EventId_6(D));
  # DEBUG Algorithm => Algorithm_9
  # DEBUG BEGIN_STMT
  _2 = Dem_DebounceFctPtrTable[Algorithm_9].GetFDCFct;
  if (_2 != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 11> [local count: 120735894]:
  # DEBUG BEGIN_STMT
  Result_11 = _2 (EventId_6(D), FaultDetectionCounter_7(D));
  # DEBUG Result => Result_11

  <bb 12> [local count: 1073741824]:
  # Result_3 = PHI <1(3), 1(5), 1(7), 1(9), 1(10), Result_11(11)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function Dem_GetIndicatorStatus (Dem_GetIndicatorStatus, funcdef_no=22, decl_uid=6304, cgraph_uid=23, symbol_order=47)

Modification phase of node Dem_GetIndicatorStatus/47
Dem_GetIndicatorStatus (Dem_IndicatorIdType IndicatorId, Dem_IndicatorStatusType * IndicatorStatus)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.54_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.54_1 = Dem_InitializationState;
  if (Dem_InitializationState.54_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 41, 32);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (IndicatorId_6(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 41, 18);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (IndicatorStatus_7(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 110328261]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 41, 17);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 257432609]:
  # DEBUG BEGIN_STMT
  _2 = Dem_InternalGetIndicatorStatus (0, 0);
  *IndicatorStatus_7(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 9> [local count: 1073741824]:
  # Result_3 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function Dem_ASR42_GetEventFreezeFrameData (Dem_ASR42_GetEventFreezeFrameData, funcdef_no=24, decl_uid=6241, cgraph_uid=25, symbol_order=49)

Modification phase of node Dem_ASR42_GetEventFreezeFrameData/49
Dem_ASR42_GetEventFreezeFrameData (Dem_EventIdType EventId, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, uint8 * DestBuffer)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.55_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 48
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.55_1 = Dem_InitializationState;
  if (Dem_InitializationState.55_1 != 2)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 364964846]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 49, 32);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 708776979]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) == 0)
    goto <bb 5>; [20.96%]
  else
    goto <bb 6>; [79.04%]

  <bb 5> [local count: 148559655]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 49, 18);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 560217324]:
  # DEBUG BEGIN_STMT
  if (EventId_6(D) > 14)
    goto <bb 7>; [20.96%]
  else
    goto <bb 8>; [79.04%]

  <bb 7> [local count: 117421551]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 49, 16);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 442795772]:
  # DEBUG BEGIN_STMT
  if (ReportTotalRecord_7(D) > 1)
    goto <bb 9>; [27.62%]
  else
    goto <bb 10>; [72.38%]

  <bb 9> [local count: 122300192]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 49, 18);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 320495581]:
  Result_4 = Dem_ASR42_GetEventFreezeFrameData.part.0 (EventId_6(D), RecordNumber_9(D), ReportTotalRecord_7(D), DataId_10(D), DestBuffer_8(D));

  <bb 11> [local count: 1073741824]:
  # Result_3 = PHI <48(3), 48(5), 48(7), 48(9), Result_4(10)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function Dem_GetEventFreezeFrameData (Dem_GetEventFreezeFrameData, funcdef_no=23, decl_uid=5997, cgraph_uid=24, symbol_order=48)

Modification phase of node Dem_GetEventFreezeFrameData/48
Dem_GetEventFreezeFrameData (Dem_EventIdType EventId, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, uint8 * DestBuffer)
{
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result_9 = Dem_ASR42_GetEventFreezeFrameData (EventId_3(D), RecordNumber_4(D), ReportTotalRecord_5(D), DataId_6(D), DestBuffer_7(D));
  # DEBUG Result => Result_9
  # DEBUG BEGIN_STMT
  Result_1 = MIN_EXPR <1, Result_9>;
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_1;

}



;; Function Dem_GetEventExtendedDataRecord (Dem_GetEventExtendedDataRecord, funcdef_no=25, decl_uid=6279, cgraph_uid=26, symbol_order=50)

Modification phase of node Dem_GetEventExtendedDataRecord/50
Dem_GetEventExtendedDataRecord (Dem_EventIdType EventId, uint8 RecordNumber, uint8 * DestBuffer)
{
  const Dem_EDStartByteType EDStartByte;
  const struct Dem_EDSegmentType * const EDSegment;
  Dem_SizeEntryDataType EDSegSize;
  boolean EventMemEntryAvail;
  const struct Dem_EDClassType * const EDClass;
  Dem_EDSegIdxType SegIdxStop;
  Dem_EDSegIdxType SegIdxStart;
  Dem_EDSegIdxType SegIdx;
  struct Dem_EventMemoryEntryType * EvMemEntry;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.60_1;
  unsigned char _2;
  unsigned char _3;
  int _4;
  unsigned char _5;
  const Dem_EDSegIdxType * _6;
  sizetype _7;
  const Dem_EDSegIdxType * _8;
  unsigned char _9;
  int _10;
  const Dem_EDStartByteType * _11;
  unsigned int _13;
  const Dem_EDStartByteType * _14;
  unsigned char _15;
  sizetype _16;
  uint8 * _17;
  struct Dem_EventMemoryEntryType * EvMemEntry.61_18;
  short unsigned int _48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.60_1 = Dem_InitializationState;
  if (Dem_InitializationState.60_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 48, 32);
  goto <bb 27>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_32(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 48, 18);
  goto <bb 27>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_32(D) > 14)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 48, 16);
  goto <bb 27>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (RecordNumber_33(D) == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 9> [local count: 165087854]:
  _2 = RecordNumber_33(D) + 16;
  if (_2 <= 14)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 163855856]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 48, 18);
  goto <bb 27>; [100.00%]

  <bb 11> [local count: 82543927]:
  # DEBUG BEGIN_STMT
  if (DestBuffer_34(D) == 0B)
    goto <bb 12>; [30.00%]
  else
    goto <bb 13>; [70.00%]

  <bb 12> [local count: 24763178]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 48, 17);
  goto <bb 27>; [100.00%]

  <bb 13> [local count: 57780749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Dem_GbiEDClassIdx (EventId_32(D));
  _4 = (int) _3;
  EDClass_36 = &Dem_EDClass[_4];
  # DEBUG EDClass => EDClass_36
  # DEBUG BEGIN_STMT
  if (RecordNumber_33(D) != 255)
    goto <bb 14>; [48.88%]
  else
    goto <bb 15>; [51.12%]

  <bb 14> [local count: 28243230]:
  # DEBUG BEGIN_STMT
  SegIdxStart_39 = Dem_FindEDNumIndex (EDClass_36, RecordNumber_33(D));
  # DEBUG SegIdxStart => SegIdxStart_39
  # DEBUG BEGIN_STMT
  SegIdxStop_40 = SegIdxStart_39 + 1;
  # DEBUG SegIdxStop => SegIdxStop_40
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 29537519]:
  # DEBUG BEGIN_STMT
  # DEBUG SegIdxStart => 0
  # DEBUG BEGIN_STMT
  SegIdxStop_37 = MEM[(const struct Dem_EDClassType *)&Dem_EDClass][_4].NumEDSegs;
  # DEBUG SegIdxStop => SegIdxStop_37

  <bb 16> [local count: 57780749]:
  # SegIdxStart_22 = PHI <SegIdxStart_39(14), 0(15)>
  # SegIdxStop_23 = PHI <SegIdxStop_40(14), SegIdxStop_37(15)>
  # DEBUG SegIdxStop => SegIdxStop_23
  # DEBUG SegIdxStart => SegIdxStart_22
  # DEBUG BEGIN_STMT
  if (RecordNumber_33(D) == 255)
    goto <bb 18>; [20.24%]
  else
    goto <bb 17>; [79.76%]

  <bb 17> [local count: 46085925]:
  _5 = MEM[(const struct Dem_EDClassType *)&Dem_EDClass][_4].NumEDSegs;
  if (_5 > SegIdxStart_22)
    goto <bb 18>; [50.00%]
  else
    goto <bb 26>; [50.00%]

  <bb 18> [local count: 34737786]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EDSegSize => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EventMemEntryAvail_43 = Dem_SearchForEntry (EventId_32(D), &EvMemEntry, 0B);
  # DEBUG EventMemEntryAvail => EventMemEntryAvail_43
  # DEBUG BEGIN_STMT
  # DEBUG SegIdx => SegIdxStart_22
  goto <bb 23>; [100.00%]

  <bb 19> [local count: 281060273]:
  # DEBUG BEGIN_STMT
  _6 = MEM[(const struct Dem_EDClassType *)&Dem_EDClass][_4].EDSegIdx;
  _7 = (sizetype) SegIdx_21;
  _8 = _6 + _7;
  _9 = *_8;
  _10 = (int) _9;
  EDSegment_45 = &Dem_EDSegment[_10];
  # DEBUG EDSegment => EDSegment_45
  # DEBUG BEGIN_STMT
  _11 = MEM[(const struct Dem_EDClassType *)&Dem_EDClass][_4].StartByte;
  _13 = _7 * 2;
  _14 = _11 + _13;
  EDStartByte_46 = *_14;
  # DEBUG EDStartByte => EDStartByte_46
  # DEBUG BEGIN_STMT
  if (EventMemEntryAvail_43 == 1)
    goto <bb 21>; [20.24%]
  else
    goto <bb 20>; [79.76%]

  <bb 20> [local count: 224173673]:
  _15 = MEM[(const struct Dem_EDSegmentType *)&Dem_EDSegment][_10].AlwaysAvailable;
  if (_15 == 1)
    goto <bb 21>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 21> [local count: 133105648]:
  # DEBUG BEGIN_STMT
  _16 = (sizetype) EDSegSize_25;
  _17 = DestBuffer_34(D) + _16;
  EvMemEntry.61_18 = EvMemEntry;
  _48 = Dem_AssembleExtendedDataSeg (EventId_32(D), EDSegment_45, EDStartByte_46, _17, EvMemEntry.61_18);
  EDSegSize_49 = EDSegSize_25 + _48;
  # DEBUG EDSegSize => EDSegSize_49

  <bb 22> [local count: 281060273]:
  # EDSegSize_24 = PHI <EDSegSize_25(20), EDSegSize_49(21)>
  # DEBUG EDSegSize => EDSegSize_24
  # DEBUG BEGIN_STMT
  SegIdx_50 = SegIdx_21 + 1;
  # DEBUG SegIdx => SegIdx_50

  <bb 23> [local count: 315798059]:
  # SegIdx_21 = PHI <SegIdxStart_22(18), SegIdx_50(22)>
  # EDSegSize_25 = PHI <0(18), EDSegSize_24(22)>
  # DEBUG EDSegSize => EDSegSize_25
  # DEBUG SegIdx => SegIdx_21
  # DEBUG BEGIN_STMT
  if (SegIdx_21 < SegIdxStop_23)
    goto <bb 19>; [89.00%]
  else
    goto <bb 24>; [11.00%]

  <bb 24> [local count: 34737786]:
  # EDSegSize_12 = PHI <EDSegSize_25(23)>
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (EDSegSize_12 != 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 26>; [50.00%]

  <bb 25> [local count: 17368893]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 26> [local count: 57780749]:
  # Result_19 = PHI <1(17), 1(24), 0(25)>
  # DEBUG Result => Result_19
  EvMemEntry ={v} {CLOBBER};

  <bb 27> [local count: 1073741824]:
  # Result_20 = PHI <1(3), 1(5), 1(7), 1(10), 1(12), Result_19(26)>
  # DEBUG Result => Result_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_20;

}



;; Function Dem_GetEventMemoryOverflow (Dem_GetEventMemoryOverflow, funcdef_no=26, decl_uid=6307, cgraph_uid=27, symbol_order=51)

Modification phase of node Dem_GetEventMemoryOverflow/51
Dem_GetEventMemoryOverflow (Dem_DTCOriginType DTCOrigin, boolean * OverflowIndication)
{
  Dem_DTCOriginType MappedDTCOrigin;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.62_1;
  unsigned char _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  boolean iftmp.63_9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.62_1 = Dem_InitializationState;
  if (Dem_InitializationState.62_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 50, 32);
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DTCOrigin_12(D) > 511)
    goto <bb 10>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 367760870]:
  if (DTCOrigin_12(D) <= 255)
    goto <bb 6>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 6> [local count: 183880435]:
  if (DTCOrigin_12(D) != 1)
    goto <bb 7>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 7> [local count: 121361087]:
  if (DTCOrigin_12(D) != 2)
    goto <bb 8>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 8> [local count: 80098317]:
  if (DTCOrigin_12(D) != 3)
    goto <bb 9>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 9> [local count: 52864889]:
  if (DTCOrigin_12(D) != 4)
    goto <bb 10>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 10> [local count: 216026778]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 50, 18);
  goto <bb 17>; [100.00%]

  <bb 11> [local count: 332870043]:
  # DEBUG BEGIN_STMT
  if (OverflowIndication_13(D) == 0B)
    goto <bb 12>; [30.00%]
  else
    goto <bb 13>; [70.00%]

  <bb 12> [local count: 99861013]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 50, 17);
  goto <bb 17>; [100.00%]

  <bb 13> [local count: 233009030]:
  # DEBUG BEGIN_STMT
  MappedDTCOrigin_15 = Dem_GetMappedDTCOrigin (DTCOrigin_12(D), 1);
  # DEBUG MappedDTCOrigin => MappedDTCOrigin_15
  # DEBUG BEGIN_STMT
  if (MappedDTCOrigin_15 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 14> [local count: 116504515]:
  # DEBUG BEGIN_STMT
  _2 = Dem_NvData.EvMemOvfIndFlags;
  _3 = (unsigned int) MappedDTCOrigin_15;
  _4 = _3 + 4294967295;
  _5 = 1 << _4;
  _6 = (unsigned char) _5;
  _7 = _2 & _6;
  if (_7 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 58252258]:

  <bb 16> [local count: 116504515]:
  # iftmp.63_9 = PHI <1(14), 0(15)>
  *OverflowIndication_13(D) = iftmp.63_9;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 17> [local count: 1073741824]:
  # Result_8 = PHI <1(3), 1(10), 1(12), 1(13), 0(16)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_GetNumberOfEventMemoryEntries (Dem_GetNumberOfEventMemoryEntries, funcdef_no=27, decl_uid=6310, cgraph_uid=28, symbol_order=52)

Modification phase of node Dem_GetNumberOfEventMemoryEntries/52
Dem_GetNumberOfEventMemoryEntries (Dem_DTCOriginType DTCOrigin, uint8 * NumberOfEventMemoryEntries)
{
  const Dem_PermanentMemoryEntryType Entry;
  Dem_DTCOriginType MappedDTCOrigin;
  uint8 EventCtr;
  Dem_SizeEvMemEntryType EntryIdx;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.64_1;
  int _2;
  struct Dem_EventMemoryEntryType * _3;
  unsigned int _4;
  unsigned int _5;
  struct Dem_EventMemoryEntryType * _6;
  short unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  short unsigned int _20;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventCtr => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.64_1 = Dem_InitializationState;
  if (Dem_InitializationState.64_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845003]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 53, 32);
  goto <bb 24>; [100.00%]

  <bb 4> [local count: 548896820]:
  # DEBUG BEGIN_STMT
  if (DTCOrigin_22(D) > 511)
    goto <bb 10>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 367760869]:
  if (DTCOrigin_22(D) <= 255)
    goto <bb 6>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 6> [local count: 183880435]:
  if (DTCOrigin_22(D) != 1)
    goto <bb 7>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 7> [local count: 121361087]:
  if (DTCOrigin_22(D) != 2)
    goto <bb 8>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 8> [local count: 80098317]:
  if (DTCOrigin_22(D) != 3)
    goto <bb 9>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 9> [local count: 52864889]:
  if (DTCOrigin_22(D) != 4)
    goto <bb 10>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 10> [local count: 216026777]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 53, 18);
  goto <bb 24>; [100.00%]

  <bb 11> [local count: 332870042]:
  # DEBUG BEGIN_STMT
  if (NumberOfEventMemoryEntries_23(D) == 0B)
    goto <bb 12>; [30.00%]
  else
    goto <bb 13>; [70.00%]

  <bb 12> [local count: 99861013]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 53, 17);
  goto <bb 24>; [100.00%]

  <bb 13> [local count: 233009030]:
  # DEBUG BEGIN_STMT
  MappedDTCOrigin_25 = Dem_GetMappedDTCOrigin (DTCOrigin_22(D), 1);
  # DEBUG MappedDTCOrigin => MappedDTCOrigin_25
  # DEBUG BEGIN_STMT
  if (MappedDTCOrigin_25 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 14> [local count: 116504515]:
  # DEBUG BEGIN_STMT
  if (MappedDTCOrigin_25 == 3)
    goto <bb 25>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 26> [local count: 76892980]:
  goto <bb 22>; [100.00%]

  <bb 25> [local count: 39611535]:
  goto <bb 18>; [100.00%]

  <bb 15> [local count: 158446141]:
  # DEBUG BEGIN_STMT
  _2 = (int) EntryIdx_12;
  Entry_28 = Dem_EventMemoryPermanent[_2];
  # DEBUG Entry => Entry_28
  # DEBUG BEGIN_STMT
  _20 = Entry_28 & 8191;
  if (_20 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 79223070]:
  # DEBUG BEGIN_STMT
  EventCtr_29 = EventCtr_15 + 1;
  # DEBUG EventCtr => EventCtr_29

  <bb 17> [local count: 158446141]:
  # EventCtr_14 = PHI <EventCtr_15(15), EventCtr_29(16)>
  # DEBUG EventCtr => EventCtr_14
  # DEBUG BEGIN_STMT
  EntryIdx_30 = EntryIdx_12 + 1;
  # DEBUG EntryIdx => EntryIdx_30

  <bb 18> [local count: 198057676]:
  # EntryIdx_12 = PHI <EntryIdx_30(17), 0(25)>
  # EventCtr_15 = PHI <EventCtr_14(17), 0(25)>
  # DEBUG EventCtr => EventCtr_15
  # DEBUG EntryIdx => EntryIdx_12
  # DEBUG BEGIN_STMT
  if (EntryIdx_12 != 4)
    goto <bb 15>; [80.00%]
  else
    goto <bb 23>; [20.00%]

  <bb 19> [local count: 622134114]:
  # DEBUG BEGIN_STMT
  _3 = Dem_EventMem[_9];
  _4 = (unsigned int) EntryIdx_13;
  _5 = _4 * 16;
  _6 = _3 + _5;
  _7 = _6->EventId;
  if (_7 != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 20> [local count: 311067057]:
  # DEBUG BEGIN_STMT
  EventCtr_26 = EventCtr_17 + 1;
  # DEBUG EventCtr => EventCtr_26

  <bb 21> [local count: 622134114]:
  # EventCtr_16 = PHI <EventCtr_17(19), EventCtr_26(20)>
  # DEBUG EventCtr => EventCtr_16
  # DEBUG BEGIN_STMT
  EntryIdx_27 = EntryIdx_13 + 1;
  # DEBUG EntryIdx => EntryIdx_27

  <bb 22> [local count: 699027094]:
  # EntryIdx_13 = PHI <EntryIdx_27(21), 0(26)>
  # EventCtr_17 = PHI <EventCtr_16(21), 0(26)>
  # DEBUG EventCtr => EventCtr_17
  # DEBUG EntryIdx => EntryIdx_13
  # DEBUG BEGIN_STMT
  _8 = (unsigned int) MappedDTCOrigin_25;
  _9 = _8 + 4294967295;
  _10 = Dem_SizeEventMem[_9];
  if (_10 > EntryIdx_13)
    goto <bb 19>; [89.00%]
  else
    goto <bb 23>; [11.00%]

  <bb 23> [local count: 116504515]:
  # EventCtr_18 = PHI <EventCtr_15(18), EventCtr_17(22)>
  # DEBUG EventCtr => EventCtr_18
  # DEBUG BEGIN_STMT
  *NumberOfEventMemoryEntries_23(D) = EventCtr_18;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 24> [local count: 1073741824]:
  # Result_11 = PHI <1(3), 1(10), 1(12), 1(13), 0(23)>
  # DEBUG Result => Result_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_11;

}



;; Function Dem_SetDTCSuppression (Dem_SetDTCSuppression, funcdef_no=28, decl_uid=6245, cgraph_uid=29, symbol_order=53)

Modification phase of node Dem_SetDTCSuppression/53
Dem_SetDTCSuppression (uint32 DTC, Dem_DTCFormatType DTCFormat, boolean SuppressionStatus)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.69_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.69_1 = Dem_InitializationState;
  if (Dem_InitializationState.69_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845003]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 51, 32);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 548896820]:
  # DEBUG BEGIN_STMT
  _2 = DTC_7(D) + 4294967295;
  if (_2 > 16777214)
    goto <bb 7>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 367760869]:
  if (DTCFormat_8(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 183880435]:
  _3 = DTC_7(D) & 255;
  if (_3 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 273076168]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 51, 18);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 275820652]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_8(D) > 1)
    goto <bb 9>; [41.48%]
  else
    goto <bb 10>; [58.52%]

  <bb 9> [local count: 114410406]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 51, 18);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 161410246]:
  # DEBUG BEGIN_STMT
  if (SuppressionStatus_9(D) > 1)
    goto <bb 11>; [59.00%]
  else
    goto <bb 12>; [41.00%]

  <bb 11> [local count: 95232045]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 51, 18);
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 66178201]:
  # DEBUG BEGIN_STMT
  Result_11 = Dem_InternalSetDTCSuppression (DTC_7(D), DTCFormat_8(D), SuppressionStatus_9(D));
  # DEBUG Result => Result_11

  <bb 13> [local count: 1073741824]:
  # Result_4 = PHI <1(3), 1(7), 1(9), 1(11), Result_11(12)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_InvalidateErrorQueueEntry (Dem_InvalidateErrorQueueEntry, funcdef_no=35, decl_uid=6683, cgraph_uid=36, symbol_order=60)

Modification phase of node Dem_InvalidateErrorQueueEntry/60
Dem_InvalidateErrorQueueEntry (Dem_EventIdType EventId)
{
  const Dem_EventIdType ErrorQueueEventId;
  boolean ProcessFirstEntryOfFullQueue;
  Dem_ErrorQueueIdxType ErrorQueueIndex;
  unsigned char Dem_ErrorQueueWriteIdx.82_1;
  int _2;
  short unsigned int _3;
  int _4;
  short unsigned int _5;

  <bb 2> [local count: 40157944]:
  # DEBUG BEGIN_STMT
  ErrorQueueIndex_11 = Dem_ErrorQueueReadIdx;
  # DEBUG ErrorQueueIndex => ErrorQueueIndex_11
  # DEBUG BEGIN_STMT
  # DEBUG ProcessFirstEntryOfFullQueue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueWriteIdx.82_1 = Dem_ErrorQueueWriteIdx;
  if (Dem_ErrorQueueWriteIdx.82_1 == ErrorQueueIndex_11)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 13653701]:
  _2 = (int) ErrorQueueIndex_11;
  _3 = Dem_ErrorQueue[_2];
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 6826850]:
  # DEBUG BEGIN_STMT
  # DEBUG ProcessFirstEntryOfFullQueue => 1

  <bb 5> [local count: 40157944]:
  # ErrorQueueIndex_18 = PHI <ErrorQueueIndex_11(4), ErrorQueueIndex_11(2), ErrorQueueIndex_11(3)>
  # ProcessFirstEntryOfFullQueue_17 = PHI <1(4), 0(2), 0(3)>
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 1033583880]:
  # DEBUG BEGIN_STMT
  _4 = (int) ErrorQueueIndex_6;
  _5 = Dem_ErrorQueue[_4];
  ErrorQueueEventId_12 = _5 & 8191;
  # DEBUG ErrorQueueEventId => ErrorQueueEventId_12
  # DEBUG BEGIN_STMT
  if (ErrorQueueEventId_12 == EventId_13(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 351418519]:
  # DEBUG BEGIN_STMT
  Dem_ErrorQueue[_4] = 8191;

  <bb 8> [local count: 1033583880]:
  # DEBUG BEGIN_STMT
  ErrorQueueIndex_15 = ErrorQueueIndex_6 + 1;
  # DEBUG ErrorQueueIndex => ErrorQueueIndex_15
  # DEBUG BEGIN_STMT
  ErrorQueueIndex_16 = ErrorQueueIndex_15 % 10;
  # DEBUG ErrorQueueIndex => ErrorQueueIndex_16
  # DEBUG BEGIN_STMT
  # DEBUG ProcessFirstEntryOfFullQueue => 0

  <bb 9> [local count: 1073741824]:
  # ErrorQueueIndex_6 = PHI <ErrorQueueIndex_18(5), ErrorQueueIndex_16(8)>
  # ProcessFirstEntryOfFullQueue_7 = PHI <ProcessFirstEntryOfFullQueue_17(5), 0(8)>
  # DEBUG ProcessFirstEntryOfFullQueue => ProcessFirstEntryOfFullQueue_7
  # DEBUG ErrorQueueIndex => ErrorQueueIndex_6
  # DEBUG BEGIN_STMT
  if (Dem_ErrorQueueWriteIdx.82_1 != ErrorQueueIndex_6)
    goto <bb 6>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 10> [local count: 365072220]:
  if (ProcessFirstEntryOfFullQueue_7 == 1)
    goto <bb 6>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 11> [local count: 40157944]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ReadErrorQueueEntry (Dem_ReadErrorQueueEntry, funcdef_no=36, decl_uid=6685, cgraph_uid=37, symbol_order=61)

Modification phase of node Dem_ReadErrorQueueEntry/61
Dem_ReadErrorQueueEntry (Dem_ErrorQueueEntryType * QueueEntry)
{
  unsigned char RetVal$Result;
  struct Dem_ReadErrorQueueReturnType D.8674;
  unsigned char _1;
  unsigned char _2;
  unsigned char Dem_ErrorQueueReadIdx.87_3;
  int _4;
  short unsigned int _5;
  int _6;
  short unsigned int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char Dem_ErrorQueueReadIdx.87_21;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal$Result => 0
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  Dem_ErrorQueue[_4] = 0;
  # DEBUG BEGIN_STMT
  _1 = Dem_ErrorQueueReadIdx.87_3 + 1;
  # DEBUG BEGIN_STMT
  _2 = _1 % 10;
  Dem_ErrorQueueReadIdx = _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueReadIdx.87_3 = Dem_ErrorQueueReadIdx;
  _4 = (int) Dem_ErrorQueueReadIdx.87_3;
  _5 = Dem_ErrorQueue[_4];
  if (_5 == 8191)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # Dem_ErrorQueueReadIdx.87_21 = PHI <Dem_ErrorQueueReadIdx.87_3(4)>
  # _6 = PHI <_4(4)>
  # _7 = PHI <_5(4)>
  # DEBUG BEGIN_STMT
  if (_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  *QueueEntry_13(D) = _7;
  # DEBUG BEGIN_STMT
  Dem_ErrorQueue[_6] = 0;
  # DEBUG BEGIN_STMT
  _8 = Dem_ErrorQueueReadIdx.87_21 + 1;
  # DEBUG BEGIN_STMT
  _9 = _8 % 10;
  Dem_ErrorQueueReadIdx = _9;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal$Result => 1

  <bb 7> [local count: 118111601]:
  # RetVal$Result_20 = PHI <0(5), 1(6)>
  # DEBUG RetVal$Result => RetVal$Result_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct  *)&D.8674] = RetVal$Result_20;
  # DEBUG D#15 => {CLOBBER}
  # DEBUG RetVal$Result => D#15
  return D.8674;

}



;; Function Dem_WriteErrorQueueEntry (Dem_WriteErrorQueueEntry, funcdef_no=37, decl_uid=6689, cgraph_uid=38, symbol_order=62)

Modification phase of node Dem_WriteErrorQueueEntry/62
Dem_WriteErrorQueueEntry (struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus, boolean FirstFailed)
{
  Dem_ErrorQueueEntryType QueueEntry;
  Dem_EventIdType EventId;
  boolean Result;
  unsigned char Dem_ErrorQueueWriteIdx.93_1;
  int _2;
  short unsigned int _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  EventId_11 = EventInfo.EventId;
  # DEBUG EventId => EventId_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueWriteIdx.93_1 = Dem_ErrorQueueWriteIdx;
  _2 = (int) Dem_ErrorQueueWriteIdx.93_1;
  _3 = Dem_ErrorQueue[_2];
  if (_3 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG QueueEntry => EventId_11
  # DEBUG BEGIN_STMT
  if (EventStatus_12(D) == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
<L1>:
  # DEBUG BEGIN_STMT
  QueueEntry_13 = EventId_11 | 32768;
  # DEBUG QueueEntry => QueueEntry_13
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 536870913]:
  # QueueEntry_7 = PHI <QueueEntry_13(4), EventId_11(3)>
  # DEBUG QueueEntry => QueueEntry_7
  # DEBUG BEGIN_STMT
  if (FirstFailed_14(D) == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  QueueEntry_16 = QueueEntry_7 | 8192;
  # DEBUG QueueEntry => QueueEntry_16
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  QueueEntry_15 = QueueEntry_7 & 57343;
  # DEBUG QueueEntry => QueueEntry_15

  <bb 8> [local count: 536870913]:
  # QueueEntry_8 = PHI <QueueEntry_16(6), QueueEntry_15(7)>
  # DEBUG QueueEntry => QueueEntry_8
  # DEBUG BEGIN_STMT
  Dem_ErrorQueue[_2] = QueueEntry_8;
  # DEBUG BEGIN_STMT
  _4 = Dem_ErrorQueueWriteIdx.93_1 + 1;
  # DEBUG BEGIN_STMT
  _5 = _4 % 10;
  Dem_ErrorQueueWriteIdx = _5;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 9> [local count: 1073741824]:
  # Result_6 = PHI <0(2), 1(8)>
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function Dem_CheckErrorQueueEntry (Dem_CheckErrorQueueEntry, funcdef_no=38, decl_uid=6722, cgraph_uid=39, symbol_order=63)

Modification phase of node Dem_CheckErrorQueueEntry/63
Dem_CheckErrorQueueEntry (Dem_EventIdType EventId, Dem_EventStatusType * PreviousEntryStatus)
{
  uint8 Index;
  Dem_ErrorQueueEntryType QueueEntry;
  boolean Result;
  unsigned char Dem_ErrorQueueReadIdx.97_1;
  int _2;
  short unsigned int _3;
  int _4;
  Dem_EventStatusType iftmp.99_10;
  short unsigned int _14;
  short unsigned int _18;

  <bb 2> [local count: 229727064]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueReadIdx.97_1 = Dem_ErrorQueueReadIdx;
  _2 = (int) Dem_ErrorQueueReadIdx.97_1;
  _3 = Dem_ErrorQueue[_2];
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Index_16 = Dem_ErrorQueueWriteIdx;
  # DEBUG Index => Index_16

  <bb 4> [local count: 1073741824]:
  # Result_5 = PHI <0(3), 0(15)>
  # Index_8 = PHI <Index_16(3), Index_9(15)>
  # DEBUG Index => Index_8
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Index_8 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870912]:
  # DEBUG BEGIN_STMT
  Index_17 = Index_8 + 255;
  # DEBUG Index => Index_17

  <bb 6> [local count: 1073741824]:
  # Index_9 = PHI <9(4), Index_17(5)>
  # DEBUG Index => Index_9
  # DEBUG BEGIN_STMT
  _4 = (int) Index_9;
  QueueEntry_19 = Dem_ErrorQueue[_4];
  # DEBUG QueueEntry => QueueEntry_19
  # DEBUG BEGIN_STMT
  _14 = QueueEntry_19 & 8191;
  if (_14 == EventId_20(D))
    goto <bb 7>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 7> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _18 = QueueEntry_19 & 49152;
  if (_18 != 32768)
    goto <bb 8>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 8> [local count: 244598388]:
  if (_18 != 0)
    goto <bb 9>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 9> [local count: 163880920]:
  if (_18 == 16384)
    goto <bb 11>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 108161407]:

  <bb 11> [local count: 365072221]:
  # iftmp.99_10 = PHI <0(8), 1(7), 4(10), 5(9)>
  *PreviousEntryStatus_21(D) = iftmp.99_10;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 12> [local count: 1073741824]:
  # Result_6 = PHI <Result_5(6), 1(11)>
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  if (Dem_ErrorQueueReadIdx.97_1 != Index_9)
    goto <bb 13>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 13> [local count: 1014686025]:
  if (Result_6 == 0)
    goto <bb 15>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 15> [local count: 958878293]:
  goto <bb 4>; [100.00%]

  <bb 14> [local count: 229727064]:
  # Result_7 = PHI <0(2), Result_6(12), Result_6(13)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_ReportErrorStatusPreInit (Dem_ReportErrorStatusPreInit, funcdef_no=4, decl_uid=6719, cgraph_uid=5, symbol_order=29)

Modification phase of node Dem_ReportErrorStatusPreInit/29
Dem_ReportErrorStatusPreInit (struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus)
{
  boolean FirstFailed;
  boolean queueWriteSuccess;
  Dem_EventIdType EventId;
  Std_ReturnType debounceResult;
  Dem_EventStatusType PreviousEntryStatus;
  boolean EntryPresent;
  unsigned char _1;
  unsigned char debounceResult.20_2;
  unsigned char EventStatus.21_3;
  unsigned char EventStatus.22_4;
  unsigned char PreviousEntryStatus.23_5;
  int _6;
  unsigned char _7;
  _Bool _8;
  unsigned char EventStatus.24_9;
  unsigned char _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG EntryPresent => 0
  # DEBUG BEGIN_STMT
  PreviousEntryStatus = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventId_15 = EventInfo.EventId;
  # DEBUG EventId => EventId_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dem_DebounceEvent (EventId_15, &EventStatus, &debounceResult);
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  debounceResult.20_2 = debounceResult;
  if (debounceResult.20_2 == 3)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 18);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EventStatus.21_3 = EventStatus;
  if (EventStatus.21_3 <= 1)
    goto <bb 6>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 6> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  # DEBUG queueWriteSuccess => 1
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryPresent_20 = Dem_CheckErrorQueueEntry (EventId_15, &PreviousEntryStatus);
  # DEBUG EntryPresent => EntryPresent_20
  # DEBUG BEGIN_STMT
  if (EntryPresent_20 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 183448791]:
  EventStatus.22_4 = EventStatus;
  PreviousEntryStatus.23_5 = PreviousEntryStatus;
  if (EventStatus.22_4 != PreviousEntryStatus.23_5)
    goto <bb 9>; [79.76%]
  else
    goto <bb 8>; [20.24%]

  <bb 8> [local count: 37130035]:
  # DEBUG queueWriteSuccess => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 236674130]:
  # DEBUG BEGIN_STMT
  _6 = (int) EventId_15;
  _7 = Dem_NvData.DTCStatusMask[_6];
  _12 = _7 & 2;
  _8 = _12 != 0;
  FirstFailed_21 = (boolean) _8;
  # DEBUG FirstFailed => FirstFailed_21
  # DEBUG BEGIN_STMT
  EventStatus.24_9 = EventStatus;
  queueWriteSuccess_23 = Dem_WriteErrorQueueEntry (EventInfo, EventStatus.24_9, FirstFailed_21);
  # DEBUG queueWriteSuccess => queueWriteSuccess_23
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (queueWriteSuccess_23 == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 78102463]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 15, 16);

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PreviousEntryStatus ={v} {CLOBBER};
  debounceResult ={v} {CLOBBER};
  return;

}



;; Function Dem_CheckErrorReQueueEntry (Dem_CheckErrorReQueueEntry, funcdef_no=39, decl_uid=6727, cgraph_uid=40, symbol_order=64)

Modification phase of node Dem_CheckErrorReQueueEntry/64
Dem_CheckErrorReQueueEntry (struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus, Dem_EventStatusExtendedType OldDTCStatusMask, Std_ReturnType * SetBswEventStatusResult)
{
  const Dem_ErrorQueueEntryType Entry;
  const Dem_ErrorQueueIdxType EndIdx;
  Dem_ErrorQueueIdxType QueueIdx;
  const Dem_EventIdType EventId;
  boolean FirstFailed;
  boolean EntryIsWritten;
  int _1;
  unsigned char _5;
  short unsigned int _12;
  short unsigned int _14;

  <bb 2> [local count: 276507548]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FirstFailed => 0
  # DEBUG BEGIN_STMT
  EventId_7 = EventInfo.EventId;
  # DEBUG EventId => EventId_7
  # DEBUG BEGIN_STMT
  _5 = OldDTCStatusMask_8(D) & 2;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 3> [local count: 138253774]:
  if (EventStatus_9(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 91247491]:
  if (EventStatus_9(D) == 5)
    goto <bb 5>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 5> [local count: 78030430]:
  # DEBUG BEGIN_STMT
  QueueIdx_10 = Dem_ErrorQueueReadIdx;
  # DEBUG QueueIdx => QueueIdx_10
  # DEBUG BEGIN_STMT
  EndIdx_11 = Dem_ErrorQueueWriteIdx;
  # DEBUG EndIdx => EndIdx_11
  # DEBUG BEGIN_STMT
  # DEBUG FirstFailed => 1
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _1 = (int) QueueIdx_3;
  Entry_13 = Dem_ErrorQueue[_1];
  # DEBUG Entry => Entry_13
  # DEBUG BEGIN_STMT
  _12 = Entry_13 & 8191;
  if (EventId_7 == _12)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 344993247]:
  _14 = Entry_13 & 8192;
  if (_14 != 0)
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 995711395]:
  # DEBUG BEGIN_STMT
  QueueIdx_15 = QueueIdx_3 + 1;
  # DEBUG QueueIdx => QueueIdx_15
  # DEBUG BEGIN_STMT
  QueueIdx_16 = QueueIdx_15 % 10;
  # DEBUG QueueIdx => QueueIdx_16

  <bb 9> [local count: 1073741824]:
  # QueueIdx_3 = PHI <QueueIdx_10(5), QueueIdx_16(8)>
  # DEBUG QueueIdx => QueueIdx_3
  # DEBUG BEGIN_STMT
  if (QueueIdx_3 != EndIdx_11)
    goto <bb 6>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 276507547]:
  # FirstFailed_2 = PHI <0(2), 0(4), 0(7), 1(9)>
  # DEBUG FirstFailed => FirstFailed_2
  # DEBUG BEGIN_STMT
  EntryIsWritten_18 = Dem_WriteErrorQueueEntry (EventInfo, EventStatus_9(D), FirstFailed_2);
  # DEBUG EntryIsWritten => EntryIsWritten_18
  # DEBUG BEGIN_STMT
  if (EntryIsWritten_18 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 138253773]:
  # DEBUG BEGIN_STMT
  *SetBswEventStatusResult_19(D) = 3;

  <bb 12> [local count: 276507547]:
  return;

}



;; Function Dem_CheckErrorQueueEntryForStatus (Dem_CheckErrorQueueEntryForStatus, funcdef_no=40, decl_uid=6730, cgraph_uid=41, symbol_order=65)

Modification phase of node Dem_CheckErrorQueueEntryForStatus/65
Dem_CheckErrorQueueEntryForStatus (Dem_EventIdType EventId, Dem_EventStatusType EntryStatus)
{
  uint8 Index;
  Dem_ErrorQueueEntryType QueueEntry;
  boolean Result;
  unsigned char Dem_ErrorQueueReadIdx.103_1;
  int _2;
  short unsigned int _3;
  int _4;
  unsigned int _5;
  unsigned int iftmp.105_11;
  short unsigned int _12;
  short unsigned int _16;

  <bb 2> [local count: 229727060]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ErrorQueueReadIdx.103_1 = Dem_ErrorQueueReadIdx;
  _2 = (int) Dem_ErrorQueueReadIdx.103_1;
  _3 = Dem_ErrorQueue[_2];
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 3> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Index_14 = Dem_ErrorQueueWriteIdx;
  # DEBUG Index => Index_14

  <bb 4> [local count: 1073741824]:
  # Result_6 = PHI <0(3), 0(16)>
  # Index_9 = PHI <Index_14(3), Index_10(16)>
  # DEBUG Index => Index_9
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Index_9 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Index_15 = Index_9 + 255;
  # DEBUG Index => Index_15

  <bb 6> [local count: 1073741824]:
  # Index_10 = PHI <9(4), Index_15(5)>
  # DEBUG Index => Index_10
  # DEBUG BEGIN_STMT
  _4 = (int) Index_10;
  QueueEntry_17 = Dem_ErrorQueue[_4];
  # DEBUG QueueEntry => QueueEntry_17
  # DEBUG BEGIN_STMT
  _12 = QueueEntry_17 & 8191;
  if (_12 == EventId_18(D))
    goto <bb 7>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 7> [local count: 354334802]:
  _5 = (unsigned int) EntryStatus_19(D);
  _16 = QueueEntry_17 & 49152;
  if (_16 != 32768)
    goto <bb 8>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 8> [local count: 233860969]:
  if (_16 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 116930485]:
  if (_16 == 16384)
    goto <bb 11>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 77174120]:

  <bb 11> [local count: 354334802]:
  # iftmp.105_11 = PHI <0(8), 1(7), 4(10), 5(9)>
  if (_5 == iftmp.105_11)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1

  <bb 13> [local count: 1073741824]:
  # Result_7 = PHI <Result_6(6), Result_6(11), 1(12)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  if (Dem_ErrorQueueReadIdx.103_1 != Index_10)
    goto <bb 14>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 14> [local count: 1014686024]:
  if (Result_7 == 0)
    goto <bb 16>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 16> [local count: 958878292]:
  goto <bb 4>; [100.00%]

  <bb 15> [local count: 229727062]:
  # Result_8 = PHI <0(2), Result_7(13), Result_7(14)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_SelectEntryOfOBDFreezeFrameEvent (Dem_SelectEntryOfOBDFreezeFrameEvent, funcdef_no=44, decl_uid=6780, cgraph_uid=45, symbol_order=69)

Modification phase of node Dem_SelectEntryOfOBDFreezeFrameEvent/69
Dem_SelectEntryOfOBDFreezeFrameEvent (Dem_SizeEvMemEntryType * SelectedEntryIndex, boolean SelectForReport)
{
  Dem_OccOrderType SelectedOccOrder;
  Dem_OccOrderType CurrentOccOrder;
  uint8 SelectedEventPrio;
  uint8 CurrentEventPrio;
  Dem_DTCKindType DtcKind;
  uint32 ObdDTC;
  uint32 VisibleDTC;
  Dem_EventIdType CurrentEvId;
  boolean IdentifiedOBDEventForReport;
  uint8 EntryIdx;
  Dem_SizeEvMemEntryType TemporaryEntryIdx;
  Dem_EventIdType SelectedEvId;
  unsigned int _1;
  unsigned int _2;
  struct Dem_EventMemoryEntryType * _3;
  int _4;
  unsigned char _5;
  int _6;
  int _7;
  unsigned char _19;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG SelectedEvId => 0
  # DEBUG BEGIN_STMT
  # DEBUG TemporaryEntryIdx => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG IdentifiedOBDEventForReport => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 16>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) EntryIdx_13;
  _2 = _1 * 16;
  _3 = &Dem_EventMemoryPrimary + _2;
  CurrentEvId_24 = _3->EventId;
  # DEBUG CurrentEvId => CurrentEvId_24
  # DEBUG BEGIN_STMT
  VisibleDTC_26 = Dem_GetVisibleCmbDTC (0, CurrentEvId_24);
  # DEBUG VisibleDTC => VisibleDTC_26
  # DEBUG BEGIN_STMT
  ObdDTC_28 = Dem_GetObdDTC (CurrentEvId_24);
  # DEBUG ObdDTC => ObdDTC_28
  # DEBUG BEGIN_STMT
  DtcKind_30 = Dem_GbiDTCKind (CurrentEvId_24);
  # DEBUG DtcKind => DtcKind_30
  # DEBUG BEGIN_STMT
  if (DtcKind_30 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 4> [local count: 243393649]:
  if (SelectForReport_31(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 82753841]:
  if (VisibleDTC_26 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 202016729]:
  if (SelectForReport_31(D) == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 7> [local count: 101008365]:
  if (ObdDTC_28 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 8> [local count: 91881103]:
  _4 = (int) CurrentEvId_24;
  _5 = Dem_NvData.DTCStatusMask[_4];
  _19 = _5 & 8;
  if (_19 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 9> [local count: 45940551]:
  # DEBUG BEGIN_STMT
  if (IdentifiedOBDEventForReport_15 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 10> [local count: 9298368]:
  # DEBUG BEGIN_STMT
  CurrentEventPrio_34 = Dem_GbiPriority (CurrentEvId_24);
  # DEBUG CurrentEventPrio => CurrentEventPrio_34
  # DEBUG BEGIN_STMT
  SelectedEventPrio_36 = Dem_GbiPriority (SelectedEvId_10);
  # DEBUG SelectedEventPrio => SelectedEventPrio_36
  # DEBUG BEGIN_STMT
  _6 = (int) EntryIdx_13;
  CurrentOccOrder_37 = Dem_EntryOBDFF[_6].OBDOccOrder;
  # DEBUG CurrentOccOrder => CurrentOccOrder_37
  # DEBUG BEGIN_STMT
  _7 = (int) TemporaryEntryIdx_12;
  SelectedOccOrder_38 = Dem_EntryOBDFF[_7].OBDOccOrder;
  # DEBUG SelectedOccOrder => SelectedOccOrder_38
  # DEBUG BEGIN_STMT
  if (CurrentEventPrio_34 < SelectedEventPrio_36)
    goto <bb 13>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 4649184]:
  if (CurrentEventPrio_34 == SelectedEventPrio_36)
    goto <bb 12>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 12> [local count: 1580722]:
  if (CurrentOccOrder_37 < SelectedOccOrder_38)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 5439545]:
  # DEBUG BEGIN_STMT
  SelectedEvId_39 = _3->EventId;
  # DEBUG SelectedEvId => SelectedEvId_39
  # DEBUG BEGIN_STMT
  # DEBUG TemporaryEntryIdx => EntryIdx_13
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 36642184]:
  # DEBUG BEGIN_STMT
  SelectedEvId_32 = _3->EventId;
  # DEBUG SelectedEvId => SelectedEvId_32
  # DEBUG BEGIN_STMT
  # DEBUG TemporaryEntryIdx => EntryIdx_13
  # DEBUG BEGIN_STMT
  # DEBUG IdentifiedOBDEventForReport => 1

  <bb 15> [local count: 715863676]:
  # SelectedEvId_9 = PHI <SelectedEvId_10(3), SelectedEvId_10(6), SelectedEvId_10(7), SelectedEvId_10(8), SelectedEvId_10(12), SelectedEvId_32(14), SelectedEvId_10(11), SelectedEvId_39(13)>
  # TemporaryEntryIdx_11 = PHI <TemporaryEntryIdx_12(3), TemporaryEntryIdx_12(6), TemporaryEntryIdx_12(7), TemporaryEntryIdx_12(8), TemporaryEntryIdx_12(12), EntryIdx_13(14), TemporaryEntryIdx_12(11), EntryIdx_13(13)>
  # IdentifiedOBDEventForReport_14 = PHI <IdentifiedOBDEventForReport_15(3), IdentifiedOBDEventForReport_15(6), IdentifiedOBDEventForReport_15(7), IdentifiedOBDEventForReport_15(8), 1(12), 1(14), 1(11), 1(13)>
  # DEBUG IdentifiedOBDEventForReport => IdentifiedOBDEventForReport_14
  # DEBUG TemporaryEntryIdx => TemporaryEntryIdx_11
  # DEBUG SelectedEvId => SelectedEvId_9
  # DEBUG BEGIN_STMT
  EntryIdx_40 = EntryIdx_13 + 1;
  # DEBUG EntryIdx => EntryIdx_40

  <bb 16> [local count: 1073741824]:
  # SelectedEvId_10 = PHI <0(2), SelectedEvId_9(15)>
  # TemporaryEntryIdx_12 = PHI <0(2), TemporaryEntryIdx_11(15)>
  # EntryIdx_13 = PHI <0(2), EntryIdx_40(15)>
  # IdentifiedOBDEventForReport_15 = PHI <0(2), IdentifiedOBDEventForReport_14(15)>
  # DEBUG IdentifiedOBDEventForReport => IdentifiedOBDEventForReport_15
  # DEBUG EntryIdx => EntryIdx_13
  # DEBUG TemporaryEntryIdx => TemporaryEntryIdx_12
  # DEBUG SelectedEvId => SelectedEvId_10
  # DEBUG BEGIN_STMT
  if (EntryIdx_13 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 17>; [33.33%]

  <bb 17> [local count: 357878150]:
  # TemporaryEntryIdx_23 = PHI <TemporaryEntryIdx_12(16)>
  # IdentifiedOBDEventForReport_8 = PHI <IdentifiedOBDEventForReport_15(16)>
  # DEBUG BEGIN_STMT
  if (IdentifiedOBDEventForReport_8 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 121678571]:
  # DEBUG BEGIN_STMT
  *SelectedEntryIndex_21(D) = TemporaryEntryIdx_23;

  <bb 19> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return IdentifiedOBDEventForReport_8;

}



;; Function Dem_UpdateEventIdOccurKinds (Dem_UpdateEventIdOccurKinds, funcdef_no=49, decl_uid=6883, cgraph_uid=50, symbol_order=74)

Modification phase of node Dem_UpdateEventIdOccurKinds/74
Dem_UpdateEventIdOccurKinds (Dem_EventIdType EventId, Dem_DTCRequestType FirstOccurKind, Dem_DTCRequestType MostRecentOccurKind)
{
  short unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dem_GbiDTCOrigin (EventId_4(D));
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GetVisibleUdsDTC (EventId_4(D));
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 108662673]:
  Dem_UpdateEventIdOccurKinds.part.0 (EventId_4(D), FirstOccurKind_7(D), MostRecentOccurKind_9(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ReadExternalDataElement (Dem_ReadExternalDataElement, funcdef_no=57, decl_uid=6648, cgraph_uid=58, symbol_order=82)

Modification phase of node Dem_ReadExternalDataElement/82
Dem_ReadExternalDataElement (uint8 * DestBuffer, Dem_DataElementIdxType DataElementIndex, Dem_EventIdType EventId)
{
  const Dem_DataElementDataType DataType;
  Std_ReturnType Result;
  int _1;
  Std_ReturnType (*<T6c8>) (uint8 *) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  _1 = (int) DataElementIndex_5(D);
  DataType_7 = Dem_DataElement[_1].DataType;
  # DEBUG DataType => DataType_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DataType_7 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = Dem_DataElement[_1].ReadFunction.Callback;
  Result_10 = _2 (DestBuffer_8(D));
  # DEBUG Result => Result_10
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # Result_3 = PHI <Result_10(3), 1(2)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function Dem_ProcessMultipleOBDFreezeFrameEntry (Dem_ProcessMultipleOBDFreezeFrameEntry, funcdef_no=43, decl_uid=6777, cgraph_uid=44, symbol_order=68)

Modification phase of node Dem_ProcessMultipleOBDFreezeFrameEntry/68
Dem_ProcessMultipleOBDFreezeFrameEntry (Dem_EventIdType EventId, Dem_SizeEvMemEntryType EventMemoryEntryIdx)
{
  boolean ReorderingWasPerformed;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReorderingWasPerformed => 0
  # DEBUG BEGIN_STMT
  # DEBUG PrimMemEntry => &Dem_EventMemoryPrimary
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_StoreOBDFreezeFrame (EventId_4(D), EventMemoryEntryIdx_5(D));
  # DEBUG BEGIN_STMT
  ReorderingWasPerformed_8 = Dem_SetOBDFFOccurrenceOrder (EventMemoryEntryIdx_5(D));
  # DEBUG ReorderingWasPerformed => ReorderingWasPerformed_8
  # DEBUG BEGIN_STMT
  if (ReorderingWasPerformed_8 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325344]:
  Dem_ProcessMultipleOBDFreezeFrameEntry.part.0 (EventId_4(D), EventMemoryEntryIdx_5(D));

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ProcessEvent (Dem_ProcessEvent, funcdef_no=46, decl_uid=6879, cgraph_uid=47, symbol_order=71)

Modification phase of node Dem_ProcessEvent/71
Dem_ProcessEvent (uint8 ServiceId, struct Dem_EventInfoType EventInfo, Dem_EventStatusType EventStatus, boolean FirstFailed, Dem_ProcessEventJobMaskType Jobs, struct Dem_EventNotificationDataType * Notification)
{
  Std_ReturnType ProcessEntryResult;
  const Dem_EventIdType EventId;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EventId_4 = EventInfo.EventId;
  # DEBUG EventId => EventId_4
  # DEBUG BEGIN_STMT
  # DEBUG ProcessEntryResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_ProcessEventStatusUpdate (EventId_4, EventStatus_7(D), FirstFailed_8(D), Jobs_9(D), Notification_10(D));
  # DEBUG BEGIN_STMT
  _5 = Jobs_9(D) & 4;
  if (_5 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG ProcessEntryResult => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG D#25 => EventStatus_7(D)
  # DEBUG D#26 => Notification_10(D)
  ProcessEntryResult_13 = Dem_ProcessEventEntry.isra.0 (EventInfo);
  # DEBUG ProcessEntryResult => ProcessEntryResult_13
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (ProcessEntryResult_13 == 48)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 108662672]:
  # DEBUG D#27 => EventStatus_7(D)
  # DEBUG D#28 => FirstFailed_8(D)
  # DEBUG D#29 => Jobs_9(D)
  # DEBUG D#30 => Notification_10(D)
  Dem_ProcessEvent.part.0 (ServiceId_15(D));

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_MainFunction (Dem_MainFunction, funcdef_no=29, decl_uid=6228, cgraph_uid=30, symbol_order=54)

Modification phase of node Dem_MainFunction/54
Dem_MainFunction ()
{
  boolean TriggerNvMWrite;
  <unnamed type> Dem_InitializationState.70_1;

  <bb 2> [local count: 347387059]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.70_1 = Dem_InitializationState;
  if (Dem_InitializationState.70_1 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 118111600]:
  # TriggerNvMWrite_3 = PHI <0(2)>
  Dem_MainFunction.part.0 ();

  <bb 4> [local count: 347387060]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_Shutdown (Dem_Shutdown, funcdef_no=2, decl_uid=5979, cgraph_uid=3, symbol_order=27)

Modification phase of node Dem_Shutdown/27
Dem_Shutdown ()
{
  Dem_EntryDataType * const AgingCounterPtr;
  struct Dem_EventMemoryEntryType * EvMemEntry;
  Dem_SizeEvMemEntryType EntryIdx;
  uint8 OriginIdx;
  Dem_EventIdType LockedEvId;
  <unnamed type> Dem_InitializationState.14_1;
  unsigned char _2;
  unsigned char _3;
  struct Dem_EventMemoryEntryType * EvMemEntry.15_4;
  unsigned char _5;
  struct Dem_EventMemoryEntryType * EvMemEntry.16_6;
  struct Dem_EventMemoryEntryType * EvMemEntry.17_7;
  int _8;
  short unsigned int _9;
  struct Dem_EventMemoryEntryType * _11;
  unsigned int _12;
  unsigned int _13;
  struct Dem_EventMemoryEntryType * _14;
  <unnamed type> _15;
  unsigned char _16;
  unsigned char _17;

  <bb 2> [local count: 563574086]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.14_1 = Dem_InitializationState;
  if (Dem_InitializationState.14_1 != 2)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 371958896]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 3, 32);
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 191615189]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_MainFunction ();
  # DEBUG BEGIN_STMT
  Dem_InitializationState = 3;
  # DEBUG BEGIN_STMT
  LockedEvId_30 = Dem_EvIdOfLockedMemoryEntry;
  # DEBUG LockedEvId => LockedEvId_30
  # DEBUG BEGIN_STMT
  if (LockedEvId_30 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 5> [local count: 63233012]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiNumAgingCycles (LockedEvId_30);
  if (_2 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 6> [local count: 20866894]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Dem_SearchForEntry (LockedEvId_30, &EvMemEntry, 0B);
  if (_3 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 7> [local count: 4223459]:
  # DEBUG BEGIN_STMT
  EvMemEntry.15_4 = EvMemEntry;
  AgingCounterPtr_34 = Dem_IntValEntryData (EvMemEntry.15_4);
  # DEBUG AgingCounterPtr => AgingCounterPtr_34
  # DEBUG BEGIN_STMT
  _5 = *AgingCounterPtr_34;
  if (_5 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 1393742]:
  # DEBUG BEGIN_STMT
  EvMemEntry.16_6 = EvMemEntry;
  Dem_ClearAgedEventEntry (LockedEvId_30, EvMemEntry.16_6);
  # DEBUG BEGIN_STMT
  EvMemEntry.17_7 = EvMemEntry;
  EvMemEntry.17_7->EntryStatus = 1;

  <bb 9> [local count: 20866894]:
  EvMemEntry ={v} {CLOBBER};

  <bb 19> [local count: 191615189]:
  # OriginIdx_21 = PHI <0(5), 0(9), 0(4)>
  goto <bb 22>; [100.00%]

  <bb 11> [local count: 766460753]:
  # DEBUG BEGIN_STMT
  _8 = (int) OriginIdx_18;
  _9 = Dem_NvDataBlockId[_8];
  if (_9 != 0)
    goto <bb 12>; [15.41%]
  else
    goto <bb 18>; [84.59%]

  <bb 12> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_TriggerMemoryStack (_9);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EntryIdx => 0
  goto <bb 17>; [100.00%]

  <bb 13> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _11 = Dem_EventMem[_8];
  _12 = (unsigned int) EntryIdx_19;
  _13 = _12 * 16;
  _14 = _11 + _13;
  _15 = _14->EntryStatus;
  if (_15 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 14> [local count: 315357973]:
  # DEBUG BEGIN_STMT
  # DEBUG NvDataBlockId => _9
  # DEBUG BEGIN_STMT
  _16 = NvM_ASR40_SetDataIndex (_9, EntryIdx_19);
  if (_16 == 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 104068131]:
  # DEBUG BEGIN_STMT
  Dem_StoreImmediately (OriginIdx_18, EntryIdx_19);
  # DEBUG BEGIN_STMT
  NvM_ASR40_WriteBlock (_9, 0B);
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_TriggerMemoryStack (_9);

  <bb 16> [local count: 955630222]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EntryIdx_44 = EntryIdx_19 + 1;
  # DEBUG EntryIdx => EntryIdx_44

  <bb 17> [local count: 1073741824]:
  # EntryIdx_19 = PHI <0(12), EntryIdx_44(16)>
  # DEBUG EntryIdx => EntryIdx_19
  # DEBUG BEGIN_STMT
  _17 = Dem_SizeEventMem[_8];
  if (_17 > EntryIdx_19)
    goto <bb 13>; [89.00%]
  else
    goto <bb 18>; [11.00%]

  <bb 18> [local count: 766460752]:
  # DEBUG BEGIN_STMT
  OriginIdx_45 = OriginIdx_18 + 1;
  # DEBUG OriginIdx => OriginIdx_45

  <bb 22> [local count: 958075941]:
  # OriginIdx_18 = PHI <OriginIdx_21(19), OriginIdx_45(18)>
  # DEBUG OriginIdx => OriginIdx_18
  # DEBUG BEGIN_STMT
  if (OriginIdx_18 != 4)
    goto <bb 11>; [80.00%]
  else
    goto <bb 20>; [20.00%]

  <bb 20> [local count: 191615188]:
  # DEBUG BEGIN_STMT
  NvM_ASR40_SetRamBlockStatus (4, 1);

  <bb 21> [local count: 563574085]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_IncrementFailureCounter (Dem_IncrementFailureCounter, funcdef_no=68, decl_uid=6692, cgraph_uid=69, symbol_order=93)

Modification phase of node Dem_IncrementFailureCounter/93
Dem_IncrementFailureCounter (Dem_EventIdType EventId, boolean HandleCDTC)
{
  const Dem_FailureCycleCounterType CurrentEvThreshold;
  Dem_SizeEvMemEntryType EvMemEntryIdx;
  struct Dem_EventMemoryEntryType * EvMemEntry;
  boolean Result;
  unsigned char _1;
  short unsigned int _2;
  int _3;
  struct Dem_EventMemoryEntryType * EvMemEntry.140_4;
  unsigned char _5;
  unsigned char _6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char EvMemEntryIdx.144_10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dem_SearchForEntry (EventId_16(D), &EvMemEntry, &EvMemEntryIdx);
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = Dem_GbiEventFailureClassIdx (EventId_16(D));
  _3 = (int) _2;
  CurrentEvThreshold_19 = Dem_EventFailureCycleCfg[_3].EventFailureCycleCounterThreshold;
  # DEBUG CurrentEvThreshold => CurrentEvThreshold_19
  # DEBUG BEGIN_STMT
  EvMemEntry.140_4 = EvMemEntry;
  _5 = EvMemEntry.140_4->EventFailureCycleCounter;
  if (_5 < CurrentEvThreshold_19)
    goto <bb 4>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 4> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  _6 = _5 + 1;
  EvMemEntry.140_4->EventFailureCycleCounter = _6;
  # DEBUG BEGIN_STMT
  if (_6 >= CurrentEvThreshold_19)
    goto <bb 5>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 5> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  if (HandleCDTC_21(D) == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 18472654]:
  # DEBUG BEGIN_STMT
  _7 = (int) EventId_16(D);
  _8 = Dem_NvData.DTCStatusMask[_7];
  _9 = _8 | 8;
  Dem_NvData.DTCStatusMask[_7] = _9;

  <bb 8> [local count: 108662672]:
  # Result_11 = PHI <0(4), 1(6), 1(5)>
  # DEBUG Result => Result_11
  # DEBUG BEGIN_STMT
  EvMemEntryIdx.144_10 = EvMemEntryIdx;
  Dem_CheckForImmediateEntryStorage (EventId_16(D), EvMemEntry.140_4, EvMemEntryIdx.144_10, 0);

  <bb 9> [local count: 1073741824]:
  # Result_12 = PHI <0(2), 0(3), Result_11(8)>
  # DEBUG Result => Result_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EvMemEntry ={v} {CLOBBER};
  EvMemEntryIdx ={v} {CLOBBER};
  return Result_12;

}



;; Function Dem_ProcessIndicatorOnCriteria (Dem_ProcessIndicatorOnCriteria, funcdef_no=71, decl_uid=6651, cgraph_uid=72, symbol_order=96)

Modification phase of node Dem_ProcessIndicatorOnCriteria/96
Dem_ProcessIndicatorOnCriteria (Dem_IndicatorIdxType IndicatorIdx, Dem_EventIdType EventId)
{
  const Dem_IndicatorCycleCounterType FailureCycleThreshold;
  const Dem_FailureCycleCounterInfoIdxType FailureCycleCounterInfoIdx;
  int _1;
  int _2;
  unsigned char _3;
  unsigned int _4;
  unsigned char _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned char _9;
  unsigned char _10;
  Dem_IndicatorCycleCounterType * _11;
  Dem_IndicatorCycleCounterType * _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CounterDataIdx => IndicatorIdx_17(D)
  # DEBUG BEGIN_STMT
  _1 = (int) IndicatorIdx_17(D);
  FailureCycleCounterInfoIdx_20 = Dem_IndicatorLink[_1].FailureCycleCounterInfoIdx;
  # DEBUG FailureCycleCounterInfoIdx => FailureCycleCounterInfoIdx_20
  # DEBUG BEGIN_STMT
  # DEBUG IndicatorId => 0
  # DEBUG BEGIN_STMT
  _2 = (int) FailureCycleCounterInfoIdx_20;
  FailureCycleThreshold_21 = Dem_FailureCycleCounterInfo[_2].Threshold;
  # DEBUG FailureCycleThreshold => FailureCycleThreshold_21
  # DEBUG BEGIN_STMT
  # DEBUG CycleCounter => &Dem_NvData.IndicatorCycleCounter[0]
  # DEBUG BEGIN_STMT
  _3 = IndicatorIdx_17(D) >> 3;
  _4 = (unsigned int) _3;
  _5 = Dem_NvData.IndicatorCycleCounterRole[0][_4];
  _6 = (unsigned int) IndicatorIdx_17(D);
  _18 = IndicatorIdx_17(D) & 7;
  _7 = (unsigned int) _18;
  _8 = 1 << _7;
  _9 = (unsigned char) _8;
  _10 = _5 & _9;
  if (_10 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG IndicatorCounterDataRole => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG IndicatorCounterDataRole => 0
  # DEBUG BEGIN_STMT
  Dem_SetCycleCounterRole (0, IndicatorIdx_17(D), 0);
  # DEBUG BEGIN_STMT
  _11 = &Dem_NvData.IndicatorCycleCounter[0] + _6;
  *_11 = 0;

  <bb 4> [local count: 1073741824]:
  # DEBUG IndicatorCounterDataRole => NULL
  # DEBUG BEGIN_STMT
  _12 = &Dem_NvData.IndicatorCycleCounter[0] + _6;
  _13 = *_12;
  if (_13 < FailureCycleThreshold_21)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _14 = _13 + 1;
  *_12 = _14;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_SetOperationCycleState (Dem_SetOperationCycleState, funcdef_no=11, decl_uid=6296, cgraph_uid=12, symbol_order=36)

Modification phase of node Dem_SetOperationCycleState/36
Dem_SetOperationCycleState (Dem_OperationCycleIdType OperationCycleId, Dem_OperationCycleStateType CycleState)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.30_1;
  int _2;
  unsigned char _3;

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
  Det_ASR40_ReportError (54, 0, 8, 32);
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (OperationCycleId_9(D) > 2)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 8, 16);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (CycleState_10(D) > 1)
    goto <bb 7>; [41.48%]
  else
    goto <bb 8>; [58.52%]

  <bb 7> [local count: 152547209]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 8, 18);
  goto <bb 13>; [100.00%]

  <bb 8> [local count: 215213661]:
  # DEBUG BEGIN_STMT
  _2 = (int) OperationCycleId_9(D);
  # DEBUG D#35 => &Dem_OpCycleState[_2]
  # DEBUG StoredCycleState => D#35
  # DEBUG BEGIN_STMT
  _3 = MEM[(Dem_OperationCycleStateType *)&Dem_OpCycleState][_2];
  if (_3 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 71020508]:
  # DEBUG BEGIN_STMT
  Dem_OpCycleProcessCycleEnd (OperationCycleId_9(D));

  <bb 10> [local count: 215213661]:
  # DEBUG BEGIN_STMT
  if (CycleState_10(D) == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 71020508]:
  # DEBUG BEGIN_STMT
  Dem_OpCycleProcessCycleStart (OperationCycleId_9(D));

  <bb 12> [local count: 215213661]:
  # DEBUG BEGIN_STMT
  MEM[(Dem_OperationCycleStateType *)&Dem_OpCycleState][_2] = CycleState_10(D);
  # DEBUG BEGIN_STMT
  Dem_CheckForTriggerNvmWriteGateEntry ();
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 13> [local count: 1073741824]:
  # Result_4 = PHI <1(3), 1(5), 1(7), 0(12)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}


