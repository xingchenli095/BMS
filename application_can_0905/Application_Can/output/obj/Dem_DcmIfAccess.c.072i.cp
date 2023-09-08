
IPA constant propagation start:
Determining dynamic type for call: Dem_GetDTCSelection (ClientId_1(D), &DTCSelection);
  Starting walk at: Dem_GetDTCSelection (ClientId_1(D), &DTCSelection);
  instance pointer: &DTCSelection  Outer instance pointer: DTCSelection offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = Dem_DoDTCSelection (ClientId_1(D), &EventId);
  Starting walk at: _5 = Dem_DoDTCSelection (ClientId_1(D), &EventId);
  instance pointer: &EventId  Outer instance pointer: EventId offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dem_GetDTCSelection (ClientId_1(D), &DTCSelection);
Determining dynamic type for call: Result_4 = Dem_GetIdxOfDTCGroup (DTC_2(D), GroupIdx_3(D));
  Starting walk at: Result_4 = Dem_GetIdxOfDTCGroup (DTC_2(D), GroupIdx_3(D));
  instance pointer: GroupIdx_3(D)  Outer instance pointer: GroupIdx_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_36 = Dem_IsDTCGroupValue (DTC_21, DTCFormat_22, &GroupIdx);
  Starting walk at: Result_36 = Dem_IsDTCGroupValue (DTC_21, DTCFormat_22, &GroupIdx);
  instance pointer: &GroupIdx  Outer instance pointer: GroupIdx offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dem_ClearEvent (EventId_11, &Dem_ClearDtcAsyncStatus.AnyEventModified);
  Starting walk at: Dem_ClearEvent (EventId_11, &Dem_ClearDtcAsyncStatus.AnyEventModified);
  instance pointer: &Dem_ClearDtcAsyncStatus.AnyEventModified  Outer instance pointer: Dem_ClearDtcAsyncStatus offset: 16 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_28 = Dem_CheckDeleteEvent (Result_36, GroupIdx.5_3, EventId_11, 0);
  Function call may change dynamic type:Result_36 = Dem_IsDTCGroupValue (DTC_21, DTCFormat_22, &GroupIdx);
  Function call may change dynamic type:RetVal_28 = Dem_CheckDeleteEvent (Result_36, GroupIdx.5_3, EventId_11, 0);
  Function call may change dynamic type:Dem_ClearEvent (EventId_11, &Dem_ClearDtcAsyncStatus.AnyEventModified);
Determining dynamic type for call: Dem_GetDTCSelection (ClientId_14(D), &DTCSelection);
  Starting walk at: Dem_GetDTCSelection (ClientId_14(D), &DTCSelection);
  instance pointer: &DTCSelection  Outer instance pointer: DTCSelection offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_2 = Dem_IsDTCGroupValue.part.0 (DTC_3(D), DTCFormat_4(D), GroupIdx_6(D));
  Starting walk at: Result_2 = Dem_IsDTCGroupValue.part.0 (DTC_3(D), DTCFormat_4(D), GroupIdx_6(D));
  instance pointer: GroupIdx_6(D)  Outer instance pointer: GroupIdx_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = Dem_IsDTCGroupValue (DTC_20, DTCFormat_21, &GroupIdx);
  Starting walk at: _7 = Dem_IsDTCGroupValue (DTC_20, DTCFormat_21, &GroupIdx);
  instance pointer: &GroupIdx  Outer instance pointer: GroupIdx offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_23 = Dem_TriggerNvmWrite.isra.0 (&Dem_ClearDtcAsyncStatus.AnyEventModified);
  Starting walk at: Result_23 = Dem_TriggerNvmWrite.isra.0 (&Dem_ClearDtcAsyncStatus.AnyEventModified);
  instance pointer: &Dem_ClearDtcAsyncStatus.AnyEventModified  Outer instance pointer: Dem_ClearDtcAsyncStatus offset: 16 (bits) vtbl reference: 
  Function call may change dynamic type:Result_14 = Dem_ClearEvents ();
  Function call may change dynamic type:Rte_Call_Dem_SetClearDTC_master_SetClearDTC (16777215, 0, 1);
  Function call may change dynamic type:_4 = Dem_CheckForOldClearImmediateEntries (OriginIdx_19);
Determining dynamic type for call: Dem_GetDTCSelection (ClientId_8(D), &DTCSelection);
  Starting walk at: Dem_GetDTCSelection (ClientId_8(D), &DTCSelection);
  instance pointer: &DTCSelection  Outer instance pointer: DTCSelection offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dem_InternalGetDTCSelectionResult.part.0/67:
    callsite  Dem_InternalGetDTCSelectionResult.part.0/67 -> Dem_GetDTCSelection/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dem_InternalGetDTCSelectionResult.part.0/67 -> Dem_DoDTCSelection/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  Dem_IsDTCGroupValue.part.0/65:
    callsite  Dem_IsDTCGroupValue.part.0/65 -> Dem_GetIdxOfDTCGroup/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_InternalClearDTC.part.0/64:
  Jump functions of caller  Dem_TriggerNvmWrite.isra.0/63:
  Jump functions of caller  Dem_GetVisibleUdsDTC/61:
  Jump functions of caller  Dem_GetMappedDTCOrigin/60:
  Jump functions of caller  Dem_ResetDataRecordSelector/59:
  Jump functions of caller  Dem_CheckForTriggerNvmWriteGateEntry/58:
  Jump functions of caller  Dem_TriggerNvmWriteEventStatus/57:
  Jump functions of caller  Dem_InvalidateErrorQueueEntry/55:
  Jump functions of caller  Dem_GbiDTCOriginIdx/54:
  Jump functions of caller  Dem_CheckForImmediateEntryStorage/53:
  Jump functions of caller  Dem_ClearEventEntry/52:
  Jump functions of caller  Dem_SearchForEntry/51:
  Jump functions of caller  Dem_GbiDebounceAlgo/49:
  Jump functions of caller  Dem_PermanentMemoryNotifyClear/48:
  Jump functions of caller  Dem_GbiDTCGroupIdx/46:
  Jump functions of caller  Dem_GbiDTCKind/45:
  Jump functions of caller  Dem_GetUdsDTC/44:
  Jump functions of caller  Dem_GetObdDTC/42:
  Jump functions of caller  Dem_GbiDTCOrigin/40:
  Jump functions of caller  TS_AtomicClearBit_8/38:
  Jump functions of caller  Rte_Call_Dem_SetClearDTC_master_SetClearDTC/37:
  Jump functions of caller  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36:
  Jump functions of caller  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35:
  Jump functions of caller  Det_ASR40_ReportError/32:
  Jump functions of caller  Dem_ResetEventIdOccurKinds/29:
  Jump functions of caller  Dem_GetIdxOfDTCGroup/28:
  Jump functions of caller  Dem_CheckDeleteEvent/26:
  Jump functions of caller  Dem_ClearEvent/25:
    callsite  Dem_ClearEvent/25 -> Dem_ResetEventIdOccurKinds/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (EventId_21(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dem_ClearEvents/24:
    callsite  Dem_ClearEvents/24 -> Dem_ClearEvent/25 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: &Dem_ClearDtcAsyncStatus.AnyEventModified
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
    callsite  Dem_ClearEvents/24 -> Dem_CheckDeleteEvent/26 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dem_ClearEvents/24 -> Dem_IsDTCGroupValue/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 5
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dem_CheckForOldClearImmediateEntries/23:
  Jump functions of caller  Dem_InternalGetDTCSelectionResult/22:
    callsite  Dem_InternalGetDTCSelectionResult/22 -> Dem_InternalGetDTCSelectionResult.part.0/67 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_NotifyNewDTCSelection/21:
  Jump functions of caller  Dem_StartClearDTC/20:
  Jump functions of caller  Dem_InternalClearDTC/19:
    callsite  Dem_InternalClearDTC/19 -> Dem_StartClearDTC/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_InternalClearDTC/19 -> Dem_InternalClearDTC.part.0/64 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_InternalClearDTC/19 -> Dem_GetDTCSelection/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dem_IsDTCGroupValue/18:
    callsite  Dem_IsDTCGroupValue/18 -> Dem_IsDTCGroupValue.part.0/65 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dem_DoDTCSelection/17:
    callsite  Dem_DoDTCSelection/17 -> Dem_IsDTCGroupValue/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dem_SetDTCSelectionCriteria/16:
    callsite  Dem_SetDTCSelectionCriteria/16 -> Dem_NotifyNewDTCSelection/21 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dem_GetDTCSelection/15:
  Jump functions of caller  Dem_GetDTCSelectionResultForClearDTC/14:
    callsite  Dem_GetDTCSelectionResultForClearDTC/14 -> Dem_InternalGetDTCSelectionResult/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 187
         value: 0xbb, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_GetDTCSelectionResult/13:
    callsite  Dem_GetDTCSelectionResult/13 -> Dem_InternalGetDTCSelectionResult/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 184
         value: 0xb8, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_SelectDTC/12:
    callsite  Dem_SelectDTC/12 -> Dem_SetDTCSelectionCriteria/16 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 4: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dem_InitDTCSelector/11:
  Jump functions of caller  Dem_InitEventReportVerifier/10:
  Jump functions of caller  Dem_EnableDTCSetting/9:
  Jump functions of caller  Dem_DisableDTCSetting/8:
  Jump functions of caller  Dem_ProcessClearDTC/7:
    callsite  Dem_ProcessClearDTC/7 -> Dem_TriggerNvmWrite.isra.0/63 : 
       param 0: CONST: &Dem_ClearDtcAsyncStatus.AnyEventModified
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
    callsite  Dem_ProcessClearDTC/7 -> Dem_CheckForOldClearImmediateEntries/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_ProcessClearDTC/7 -> Dem_ClearEvents/24 : 
  Jump functions of caller  Dem_ClearDTC/6:
    callsite  Dem_ClearDTC/6 -> Dem_InternalClearDTC/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dem_ClearDTC/6 -> Dem_GetDTCSelection/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dem_ASR42_ClearDTC/5:
    callsite  Dem_ASR42_ClearDTC/5 -> Dem_InternalClearDTC/19 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  Dem_ASR42_ClearDTC/5 -> Dem_SetDTCSelectionCriteria/16 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 4: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR

 Propagating constants:

Not considering Dem_IsDTCGroupValue for cloning; -fipa-cp-clone disabled.
Not considering Dem_DoDTCSelection for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetDTCSelectionCriteria for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetDTCSelection for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetDTCSelectionResultForClearDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetDTCSelectionResult for cloning; -fipa-cp-clone disabled.
Not considering Dem_SelectDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_InitDTCSelector for cloning; -fipa-cp-clone disabled.
Not considering Dem_InitEventReportVerifier for cloning; -fipa-cp-clone disabled.
Not considering Dem_EnableDTCSetting for cloning; -fipa-cp-clone disabled.
Not considering Dem_DisableDTCSetting for cloning; -fipa-cp-clone disabled.
Not considering Dem_ProcessClearDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_ClearDTC for cloning; -fipa-cp-clone disabled.
Not considering Dem_ASR42_ClearDTC for cloning; -fipa-cp-clone disabled.

overall_size: 787, max_new_size: 11001
 - context independent values, size: 60, time_benefit: 1.275486
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 58, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 14, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dem_InternalGetDTCSelectionResult.part.0/67:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 187 [loc_time: 2, loc_size: 25, prop_time: 0, prop_size: 0]
               184 [loc_time: 2, loc_size: 22, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0xbb, mask = 0x3
         uint8 [184, 187]
        AGGS VARIABLE
  Node: Dem_IsDTCGroupValue.part.0/65:
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
  Node: Dem_InternalClearDTC.part.0/64:
    param [0]: VARIABLE
               3 [loc_time: 1, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_TriggerNvmWrite.isra.0/63:
    param [0]: &Dem_ClearDtcAsyncStatus.AnyEventModified [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         const struct Dem_EventModifiedType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_ResetEventIdOccurKinds/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_GetIdxOfDTCGroup/28:
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
  Node: Dem_CheckDeleteEvent/26:
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
    param [3]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         boolean [0, 0]
        AGGS VARIABLE
  Node: Dem_ClearEvent/25:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: &Dem_ClearDtcAsyncStatus.AnyEventModified [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         struct Dem_EventModifiedType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_ClearEvents/24:
  Node: Dem_CheckForOldClearImmediateEntries/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_InternalGetDTCSelectionResult/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 184 [loc_time: 1, loc_size: 22, prop_time: 0, prop_size: 0]
               187 [loc_time: 1, loc_size: 22, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0xbb, mask = 0x3
         uint8 [184, 187]
        AGGS VARIABLE
  Node: Dem_NotifyNewDTCSelection/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_StartClearDTC/20:
    param [0]: VARIABLE
               3 [loc_time: 49, loc_size: 23, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_InternalClearDTC/19:
    param [0]: VARIABLE
               3 [loc_time: 1, loc_size: 41, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dem_IsDTCGroupValue/18:
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
  Node: Dem_DoDTCSelection/17:
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
  Node: Dem_SetDTCSelectionCriteria/16:
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
  Node: Dem_GetDTCSelection/15:
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
  Node: Dem_GetDTCSelectionResultForClearDTC/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_GetDTCSelectionResult/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SelectDTC/12:
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
  Node: Dem_InitDTCSelector/11:
  Node: Dem_InitEventReportVerifier/10:
  Node: Dem_EnableDTCSetting/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DisableDTCSetting/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ProcessClearDTC/7:
  Node: Dem_ClearDTC/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ASR42_ClearDTC/5:
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

 - Creating a specialized node of Dem_CheckDeleteEvent/26 for all known contexts.
    replacing param #3 ForcedDelete with const 0
 - Creating a specialized node of Dem_ClearEvent/25 for all known contexts.
    replacing param #1 AnyEventModified with const &Dem_ClearDtcAsyncStatus.AnyEventModified
 - Creating a specialized node of Dem_TriggerNvmWrite.isra.0/63 for all known contexts.
    replacing param #0 AnyEventModified with const &Dem_ClearDtcAsyncStatus.AnyEventModified
Propagated bits info for function Dem_TriggerNvmWrite.isra.0.constprop/70:
 param 0: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_ClearEvent.constprop/69:
 param 1: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_CheckDeleteEvent.constprop/68:
 param 3: value = 0x0, mask = 0x0
Propagated bits info for function Dem_InternalGetDTCSelectionResult.part.0/67:
 param 1: value = 0xbb, mask = 0x3
Propagated bits info for function Dem_TriggerNvmWrite.isra.0/63:
 param 0: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_CheckDeleteEvent/26:
 param 3: value = 0x0, mask = 0x0
Propagated bits info for function Dem_ClearEvent/25:
 param 1: value = 0x0, mask = 0xfffffffe
Propagated bits info for function Dem_InternalGetDTCSelectionResult/22:
 param 1: value = 0xbb, mask = 0x3

IPA constant propagation end

Reclaiming functions: Dem_TriggerNvmWrite.isra.0/63 Dem_CheckDeleteEvent/26 Dem_ClearEvent/25
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dem_TriggerNvmWrite.isra.0.constprop.0/70 (Dem_TriggerNvmWrite.isra.0.constprop) @06f251c0
  Type: function definition analyzed
  Visibility: artificial
  References: Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (addr)
  Referring: 
  Clone of Dem_TriggerNvmWrite.isra.0/63
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dem_ProcessClearDTC/7 (354334802 (estimated locally),0.33 per call) 
  Calls: Dem_TriggerNvmWriteEventStatus/57 (217325345 (estimated locally),0.20 per call) Dem_CheckForTriggerNvmWriteGateEntry/58 (1073741824 (estimated locally),1.00 per call) 
Dem_ClearEvent.constprop.0/69 (Dem_ClearEvent.constprop) @06de48c0
  Type: function definition analyzed
  Visibility:
  References: Dem_NvData/39 (read)Dem_NvData/39 (write)Dem_IndicatorLink/47 (read)Dem_NvData/39 (read)Dem_NvData/39 (write)Dem_NvData/39 (write)Dem_DebounceFctPtrTable/50 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (addr)
  Referring: 
  Clone of Dem_ClearEvent/25
  Availability: local
  Function flags: count:59055800 (estimated locally) local optimize_size
  Called by: Dem_ClearEvents/24 (341366148 (estimated locally),5.35 per call) 
  Calls: SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (59055800 (estimated locally),1.00 per call) Dem_PermanentMemoryNotifyClear/48 (59055800 (estimated locally),1.00 per call) Dem_GbiDebounceAlgo/49 (59055800 (estimated locally),1.00 per call) Dem_SearchForEntry/51 (19488414 (estimated locally),0.33 per call) Dem_ClearEventEntry/52 (3944455 (estimated locally),0.07 per call) Dem_ResetEventIdOccurKinds/29 (3944455 (estimated locally),0.07 per call) Dem_CheckForImmediateEntryStorage/53 (3944455 (estimated locally),0.07 per call) Dem_GbiDTCOriginIdx/54 (3944455 (estimated locally),0.07 per call) Dem_InvalidateErrorQueueEntry/55 (59055800 (estimated locally),1.00 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (59055800 (estimated locally),1.00 per call) 
   Indirect call(59055800 (estimated locally),1.00 per call) 
Dem_CheckDeleteEvent.constprop.0/68 (Dem_CheckDeleteEvent.constprop) @06ad38c0
  Type: function definition analyzed
  Visibility:
  References: Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_OBDDTCSuppression/41 (read)Dem_UDSDTCSuppression/43 (read)
  Referring: 
  Clone of Dem_CheckDeleteEvent/26
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Dem_ClearEvents/24 (1034442874 (estimated locally),16.21 per call) 
  Calls: Dem_GbiDTCOrigin/40 (1073741823 (estimated locally),1.00 per call) Dem_GetObdDTC/42 (60236916 (estimated locally),0.06 per call) Dem_GetUdsDTC/44 (60236916 (estimated locally),0.06 per call) Dem_GbiDTCKind/45 (365072220 (estimated locally),0.34 per call) Dem_GbiDTCGroupIdx/46 (365072220 (estimated locally),0.34 per call) 
Dem_InternalGetDTCSelectionResult.part.0/67 (Dem_InternalGetDTCSelectionResult.part.0) @06ad3380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CSWTCH.44/66 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_InternalGetDTCSelectionResult/22 (274448411 (estimated locally),0.26 per call) 
  Calls: Dem_GetDTCSelection/15 (1073741824 (estimated locally),1.00 per call) Det_ASR40_ReportError/32 (354334802 (estimated locally),0.33 per call) Dem_DoDTCSelection/17 (594368327 (estimated locally),0.55 per call) 
CSWTCH.44/66 (CSWTCH.44) @06eee000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Dem_InternalGetDTCSelectionResult.part.0/67 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dem_IsDTCGroupValue.part.0/65 (Dem_IsDTCGroupValue.part.0) @06de4b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_IsDTCGroupValue/18 (354334803 (estimated locally),0.33 per call) 
  Calls: Dem_GetIdxOfDTCGroup/28 (217325345 (estimated locally),0.20 per call) 
Dem_InternalClearDTC.part.0/64 (Dem_InternalClearDTC.part.0) @06de4700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dem_ClearDtcAsyncStatus/34 (read)Dem_NewDTCSelection/2 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dem_InternalClearDTC/19 (68660351 (estimated locally),0.06 per call) 
  Calls: 
Dem_TriggerNvmWrite.isra.0/63 (Dem_TriggerNvmWrite.isra.0) @06de4a80
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_DTCGroups/62 (Dem_DTCGroups) @06dc5090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_GetIdxOfDTCGroup/28 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GetVisibleUdsDTC/61 (Dem_GetVisibleUdsDTC) @06dafee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DoDTCSelection/17 (82522905 (estimated locally),0.08 per call) 
  Calls: 
Dem_GetMappedDTCOrigin/60 (Dem_GetMappedDTCOrigin) @06daf9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SetDTCSelectionCriteria/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_ResetDataRecordSelector/59 (Dem_ResetDataRecordSelector) @06daf380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_SelectDTC/12 (96547077 (estimated locally),0.09 per call) 
  Calls: 
Dem_CheckForTriggerNvmWriteGateEntry/58 (Dem_CheckForTriggerNvmWriteGateEntry) @06da3d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_TriggerNvmWrite.isra.0.constprop/70 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_TriggerNvmWriteEventStatus/57 (Dem_TriggerNvmWriteEventStatus) @06da3c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_TriggerNvmWrite.isra.0.constprop/70 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_EventMem/56 (Dem_EventMem) @06da5510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckForOldClearImmediateEntries/23 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_InvalidateErrorQueueEntry/55 (Dem_InvalidateErrorQueueEntry) @06da38c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (59055800 (estimated locally),1.00 per call) 
  Calls: 
Dem_GbiDTCOriginIdx/54 (Dem_GbiDTCOriginIdx) @06da37e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (3944455 (estimated locally),0.07 per call) 
  Calls: 
Dem_CheckForImmediateEntryStorage/53 (Dem_CheckForImmediateEntryStorage) @06da3700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (3944455 (estimated locally),0.07 per call) 
  Calls: 
Dem_ClearEventEntry/52 (Dem_ClearEventEntry) @06da3620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (3944455 (estimated locally),0.07 per call) 
  Calls: 
Dem_SearchForEntry/51 (Dem_SearchForEntry) @06da3540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (19488414 (estimated locally),0.33 per call) 
  Calls: 
Dem_DebounceFctPtrTable/50 (Dem_DebounceFctPtrTable) @06da1c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ClearEvent.constprop.0/69 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiDebounceAlgo/49 (Dem_GbiDebounceAlgo) @06da3460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (59055800 (estimated locally),1.00 per call) 
  Calls: 
Dem_PermanentMemoryNotifyClear/48 (Dem_PermanentMemoryNotifyClear) @06da3380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (59055800 (estimated locally),1.00 per call) 
  Calls: 
Dem_IndicatorLink/47 (Dem_IndicatorLink) @06da1b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ClearEvent.constprop.0/69 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GbiDTCGroupIdx/46 (Dem_GbiDTCGroupIdx) @06da30e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckDeleteEvent.constprop/68 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dem_GbiDTCKind/45 (Dem_GbiDTCKind) @06da3000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckDeleteEvent.constprop/68 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dem_GetUdsDTC/44 (Dem_GetUdsDTC) @06d94620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckDeleteEvent.constprop/68 (60236916 (estimated locally),0.06 per call) 
  Calls: 
Dem_UDSDTCSuppression/43 (Dem_UDSDTCSuppression) @06da15a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckDeleteEvent.constprop.0/68 (read)
  Availability: not_available
  Varpool flags:
Dem_GetObdDTC/42 (Dem_GetObdDTC) @06d941c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckDeleteEvent.constprop/68 (60236916 (estimated locally),0.06 per call) 
  Calls: 
Dem_OBDDTCSuppression/41 (Dem_OBDDTCSuppression) @06da1510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_CheckDeleteEvent.constprop.0/68 (read)
  Availability: not_available
  Varpool flags:
Dem_GbiDTCOrigin/40 (Dem_GbiDTCOrigin) @06d94ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_CheckDeleteEvent.constprop/68 (1073741823 (estimated locally),1.00 per call) Dem_DoDTCSelection/17 (4538760 (estimated locally),0.00 per call) Dem_ResetEventIdOccurKinds/29 (631612837 (estimated locally),1.00 per call) 
  Calls: 
Dem_NvData/39 (Dem_NvData) @06d99a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ResetEventIdOccurKinds/29 (write)Dem_ClearEvent.constprop.0/69 (write)Dem_ResetEventIdOccurKinds/29 (read)Dem_ClearEvent.constprop.0/69 (read)Dem_ClearEvent.constprop.0/69 (write)Dem_ClearEvent.constprop.0/69 (read)Dem_ClearEvent.constprop.0/69 (write)Dem_ClearEvents/24 (addr)
  Availability: not_available
  Varpool flags:
TS_AtomicClearBit_8/38 (TS_AtomicClearBit_8) @06d94a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvents/24 (5329139 (estimated locally),0.08 per call) 
  Calls: 
Rte_Call_Dem_SetClearDTC_master_SetClearDTC/37 (Rte_Call_Dem_SetClearDTC_master_SetClearDTC) @06d94540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ProcessClearDTC/7 (12191952 (estimated locally),0.01 per call) 
  Calls: 
SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06d942a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (59055800 (estimated locally),1.00 per call) Dem_ProcessClearDTC/7 (708669605 (estimated locally),0.66 per call) Dem_EnableDTCSetting/9 (274448410 (estimated locally),0.26 per call) Dem_DisableDTCSetting/8 (274448410 (estimated locally),0.26 per call) Dem_NotifyNewDTCSelection/21 (354334802 (estimated locally),0.33 per call) Dem_CheckForOldClearImmediateEntries/23 (114863532 (estimated locally),1.00 per call) Dem_StartClearDTC/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06d940e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ClearEvent.constprop/69 (59055800 (estimated locally),1.00 per call) Dem_ProcessClearDTC/7 (708669605 (estimated locally),0.66 per call) Dem_EnableDTCSetting/9 (274448410 (estimated locally),0.26 per call) Dem_DisableDTCSetting/8 (274448410 (estimated locally),0.26 per call) Dem_NotifyNewDTCSelection/21 (354334802 (estimated locally),0.33 per call) Dem_CheckForOldClearImmediateEntries/23 (114863532 (estimated locally),1.00 per call) Dem_StartClearDTC/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_ClearDtcAsyncStatus/34 (Dem_ClearDtcAsyncStatus) @06d93048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_StartClearDTC/20 (read)Dem_StartClearDTC/20 (write)Dem_StartClearDTC/20 (write)Dem_StartClearDTC/20 (write)Dem_NotifyNewDTCSelection/21 (write)Dem_TriggerNvmWrite.isra.0.constprop.0/70 (write)Dem_InternalClearDTC.part.0/64 (read)Dem_NotifyNewDTCSelection/21 (write)Dem_StartClearDTC/20 (write)Dem_ClearEvents/24 (write)Dem_ClearEvents/24 (read)Dem_StartClearDTC/20 (write)Dem_StartClearDTC/20 (write)Dem_NotifyNewDTCSelection/21 (read)Dem_NotifyNewDTCSelection/21 (read)Dem_InternalClearDTC/19 (read)Dem_InternalClearDTC/19 (read)Dem_InternalClearDTC/19 (read)Dem_InternalClearDTC/19 (write)Dem_NotifyNewDTCSelection/21 (read)Dem_ClearEvent.constprop.0/69 (addr)Dem_ProcessClearDTC/7 (write)Dem_TriggerNvmWrite.isra.0.constprop.0/70 (addr)Dem_CheckForOldClearImmediateEntries/23 (write)Dem_CheckForOldClearImmediateEntries/23 (write)Dem_ClearEvents/24 (addr)Dem_ProcessClearDTC/7 (read)Dem_ProcessClearDTC/7 (write)Dem_ProcessClearDTC/7 (addr)Dem_ProcessClearDTC/7 (write)Dem_ProcessClearDTC/7 (write)Dem_ClearEvent.constprop.0/69 (write)Dem_ClearEvent.constprop.0/69 (write)
  Availability: not_available
  Varpool flags:
Dem_SizeEventMem/33 (Dem_SizeEventMem) @06d93000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_InternalClearDTC/19 (read)Dem_CheckForOldClearImmediateEntries/23 (read)Dem_DoDTCSelection/17 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ASR40_ReportError/32 (Det_ASR40_ReportError) @06ad3b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_InternalGetDTCSelectionResult/22 (274448410 (estimated locally),0.26 per call) Dem_InternalGetDTCSelectionResult/22 (524845004 (estimated locally),0.49 per call) Dem_InternalGetDTCSelectionResult.part.0/67 (354334802 (estimated locally),0.33 per call) Dem_SelectDTC/12 (68540778 (estimated locally),0.06 per call) Dem_SelectDTC/12 (81311928 (estimated locally),0.08 per call) Dem_SelectDTC/12 (121361087 (estimated locally),0.11 per call) Dem_SelectDTC/12 (181135951 (estimated locally),0.17 per call) Dem_SelectDTC/12 (524845004 (estimated locally),0.49 per call) Dem_ASR42_ClearDTC/5 (76357914 (estimated locally),0.07 per call) Dem_ASR42_ClearDTC/5 (130853343 (estimated locally),0.12 per call) Dem_ASR42_ClearDTC/5 (312251698 (estimated locally),0.29 per call) Dem_ASR42_ClearDTC/5 (364964846 (estimated locally),0.34 per call) Dem_ClearDTC/6 (137224205 (estimated locally),0.13 per call) Dem_ClearDTC/6 (274448410 (estimated locally),0.26 per call) Dem_ClearDTC/6 (524845004 (estimated locally),0.49 per call) Dem_EnableDTCSetting/9 (67075191 (estimated locally),0.06 per call) Dem_EnableDTCSetting/9 (274448410 (estimated locally),0.26 per call) Dem_EnableDTCSetting/9 (524845004 (estimated locally),0.49 per call) Dem_DisableDTCSetting/8 (88539253 (estimated locally),0.08 per call) Dem_DisableDTCSetting/8 (274448410 (estimated locally),0.26 per call) Dem_DisableDTCSetting/8 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dem_InitializationState/31 (Dem_InitializationState) @06d6d5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_EnableDTCSetting/9 (read)Dem_DisableDTCSetting/8 (read)Dem_ASR42_ClearDTC/5 (read)Dem_SelectDTC/12 (read)Dem_ClearDTC/6 (read)Dem_InternalGetDTCSelectionResult/22 (read)
  Availability: not_available
  Varpool flags:
Dem_ResetEventIdOccurKinds/29 (Dem_ResetEventIdOccurKinds) @06ad3700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/39 (read)Dem_NvData/39 (write)
  Referring: 
  Availability: local
  Function flags: count:631612837 (estimated locally) body local optimize_size
  Called by: Dem_ClearEvent.constprop/69 (3944455 (estimated locally),0.07 per call) 
  Calls: Dem_GbiDTCOrigin/40 (631612837 (estimated locally),1.00 per call) 
Dem_GetIdxOfDTCGroup/28 (Dem_GetIdxOfDTCGroup) @06ad3540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_DTCGroups/62 (read)
  Referring: 
  Availability: local
  Function flags: count:261993004 (estimated locally) body local optimize_size
  Called by: Dem_IsDTCGroupValue.part.0/65 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_CheckDeleteEvent/26 (Dem_CheckDeleteEvent) @06ad31c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ClearEvent/25 (Dem_ClearEvent) @06ad3000
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:59055800 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_ClearEvents/24 (Dem_ClearEvents) @06ac6d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (addr)Dem_ClearDtcAsyncStatus/34 (write)Dem_NvData/39 (addr)
  Referring: 
  Availability: local
  Function flags: count:63829672 (estimated locally) body local optimize_size
  Called by: Dem_ProcessClearDTC/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_AtomicClearBit_8/38 (5329139 (estimated locally),0.08 per call) Dem_ClearEvent.constprop/69 (341366148 (estimated locally),5.35 per call) Dem_CheckDeleteEvent.constprop/68 (1034442874 (estimated locally),16.21 per call) Dem_IsDTCGroupValue/18 (63829672 (estimated locally),1.00 per call) 
Dem_CheckForOldClearImmediateEntries/23 (Dem_CheckForOldClearImmediateEntries) @06ac6a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_EventMem/56 (read)Dem_SizeEventMem/33 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Dem_ProcessClearDTC/7 (116930485 (estimated locally),0.11 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (114863532 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (114863532 (estimated locally),1.00 per call) 
Dem_InternalGetDTCSelectionResult/22 (Dem_InternalGetDTCSelectionResult) @06ac68c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_InitializationState/31 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_GetDTCSelectionResultForClearDTC/14 (1073741824 (estimated locally),1.00 per call) Dem_GetDTCSelectionResult/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_InternalGetDTCSelectionResult.part.0/67 (274448411 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (524845004 (estimated locally),0.49 per call) 
Dem_NotifyNewDTCSelection/21 (Dem_NotifyNewDTCSelection) @06ac6460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (read)Dem_NewDTCSelection/2 (write)Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_SetDTCSelectionCriteria/16 (1059604039 (estimated locally),0.99 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (354334802 (estimated locally),0.33 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (354334802 (estimated locally),0.33 per call) 
Dem_StartClearDTC/20 (Dem_StartClearDTC) @06ac62a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)Dem_NewDTCSelection/2 (write)Dem_ClearDTCSelection/4 (write)Dem_DTCSelection/3 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_InternalClearDTC/19 (68660351 (estimated locally),0.06 per call) 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) 
Dem_InternalClearDTC/19 (Dem_InternalClearDTC) @06ac60e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_SizeEventMem/33 (read)Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_ASR42_ClearDTC/5 (189314024 (estimated locally),0.18 per call) Dem_ClearDTC/6 (137224205 (estimated locally),0.13 per call) 
  Calls: Dem_StartClearDTC/20 (68660351 (estimated locally),0.06 per call) Dem_InternalClearDTC.part.0/64 (68660351 (estimated locally),0.06 per call) Dem_GetDTCSelection/15 (1073741824 (estimated locally),1.00 per call) 
Dem_IsDTCGroupValue/18 (Dem_IsDTCGroupValue) @06af9ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_DoDTCSelection/17 (41745643 (estimated locally),0.04 per call) Dem_ClearEvents/24 (63829672 (estimated locally),1.00 per call) 
  Calls: Dem_IsDTCGroupValue.part.0/65 (354334803 (estimated locally),0.33 per call) 
Dem_DoDTCSelection/17 (Dem_DoDTCSelection) @06af9d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_SizeEventMem/33 (read)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Dem_InternalGetDTCSelectionResult.part.0/67 (594368327 (estimated locally),0.55 per call) 
  Calls: Dem_GbiDTCOrigin/40 (4538760 (estimated locally),0.00 per call) Dem_GetVisibleUdsDTC/61 (82522905 (estimated locally),0.08 per call) Dem_IsDTCGroupValue/18 (41745643 (estimated locally),0.04 per call) 
Dem_SetDTCSelectionCriteria/16 (Dem_SetDTCSelectionCriteria) @06af9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_SelectDTC/12 (96547077 (estimated locally),0.09 per call) Dem_ASR42_ClearDTC/5 (189314024 (estimated locally),0.18 per call) 
  Calls: Dem_NotifyNewDTCSelection/21 (1059604039 (estimated locally),0.99 per call) Dem_GetMappedDTCOrigin/60 (1073741824 (estimated locally),1.00 per call) 
Dem_GetDTCSelection/15 (Dem_GetDTCSelection) @06af98c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)Dem_DTCSelection/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dem_InternalGetDTCSelectionResult.part.0/67 (1073741824 (estimated locally),1.00 per call) Dem_ClearDTC/6 (274448410 (estimated locally),0.26 per call) Dem_InternalClearDTC/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_GetDTCSelectionResultForClearDTC/14 (Dem_GetDTCSelectionResultForClearDTC) @06af9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalGetDTCSelectionResult/22 (1073741824 (estimated locally),1.00 per call) 
Dem_GetDTCSelectionResult/13 (Dem_GetDTCSelectionResult) @06af9540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalGetDTCSelectionResult/22 (1073741824 (estimated locally),1.00 per call) 
Dem_SelectDTC/12 (Dem_SelectDTC) @06af9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/31 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetDTCSelectionCriteria/16 (96547077 (estimated locally),0.09 per call) Dem_ResetDataRecordSelector/59 (96547077 (estimated locally),0.09 per call) Det_ASR40_ReportError/32 (68540778 (estimated locally),0.06 per call) Det_ASR40_ReportError/32 (81311928 (estimated locally),0.08 per call) Det_ASR40_ReportError/32 (121361087 (estimated locally),0.11 per call) Det_ASR40_ReportError/32 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/32 (524845004 (estimated locally),0.49 per call) 
Dem_InitDTCSelector/11 (Dem_InitDTCSelector) @06af1d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)Dem_DTCSelection/3 (write)
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_InitEventReportVerifier/10 (Dem_InitEventReportVerifier) @06af1b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_DTCSettingLockByClientId/0 (write)Dem_DTCSettingAllowed/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dem_EnableDTCSetting/9 (Dem_EnableDTCSetting) @06af19a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/31 (read)Dem_DTCSettingLockByClientId/0 (read)Dem_DTCSettingAllowed/1 (read)Dem_DTCSettingLockByClientId/0 (write)Dem_DTCSettingAllowed/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/32 (67075191 (estimated locally),0.06 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (274448410 (estimated locally),0.26 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (524845004 (estimated locally),0.49 per call) 
Dem_DisableDTCSetting/8 (Dem_DisableDTCSetting) @06af1540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/31 (read)Dem_DTCSettingLockByClientId/0 (read)Dem_DTCSettingAllowed/1 (read)Dem_DTCSettingLockByClientId/0 (write)Dem_DTCSettingAllowed/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/32 (88539253 (estimated locally),0.08 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (274448410 (estimated locally),0.26 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (524845004 (estimated locally),0.49 per call) 
Dem_ProcessClearDTC/7 (Dem_ProcessClearDTC) @06af10e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_ClearDTCSelection/4 (read)Dem_ClearDtcAsyncStatus/34 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (addr)Dem_NewDTCSelection/2 (read)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)Dem_ClearDtcAsyncStatus/34 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/36 (708669605 (estimated locally),0.66 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/35 (708669605 (estimated locally),0.66 per call) Dem_TriggerNvmWrite.isra.0.constprop/70 (354334802 (estimated locally),0.33 per call) Dem_CheckForOldClearImmediateEntries/23 (116930485 (estimated locally),0.11 per call) Rte_Call_Dem_SetClearDTC_master_SetClearDTC/37 (12191952 (estimated locally),0.01 per call) Dem_ClearEvents/24 (1073741824 (estimated locally),1.00 per call) 
Dem_ClearDTC/6 (Dem_ClearDTC) @06d140e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/31 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalClearDTC/19 (137224205 (estimated locally),0.13 per call) Det_ASR40_ReportError/32 (137224205 (estimated locally),0.13 per call) Dem_GetDTCSelection/15 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/32 (524845004 (estimated locally),0.49 per call) 
Dem_ASR42_ClearDTC/5 (Dem_ASR42_ClearDTC) @06d14c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/31 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_InternalClearDTC/19 (189314024 (estimated locally),0.18 per call) Dem_SetDTCSelectionCriteria/16 (189314024 (estimated locally),0.18 per call) Det_ASR40_ReportError/32 (76357914 (estimated locally),0.07 per call) Det_ASR40_ReportError/32 (130853343 (estimated locally),0.12 per call) Det_ASR40_ReportError/32 (312251698 (estimated locally),0.29 per call) Det_ASR40_ReportError/32 (364964846 (estimated locally),0.34 per call) 
Dem_ClearDTCSelection/4 (Dem_ClearDTCSelection) @06c826c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_ClearEvents/24 (read)Dem_StartClearDTC/20 (write)Dem_CheckDeleteEvent.constprop.0/68 (read)Dem_CheckDeleteEvent.constprop.0/68 (read)Dem_CheckDeleteEvent.constprop.0/68 (read)Dem_ClearEvents/24 (read)Dem_ClearEvents/24 (read)Dem_ProcessClearDTC/7 (read)Dem_ProcessClearDTC/7 (read)Dem_ProcessClearDTC/7 (read)Dem_ProcessClearDTC/7 (read)
  Availability: available
  Varpool flags:
Dem_DTCSelection/3 (Dem_DTCSelection) @06c82678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_GetDTCSelection/15 (read)Dem_GetDTCSelection/15 (read)Dem_GetDTCSelection/15 (read)Dem_GetDTCSelection/15 (read)Dem_GetDTCSelection/15 (read)Dem_SetDTCSelectionCriteria/16 (write)Dem_SetDTCSelectionCriteria/16 (write)Dem_SetDTCSelectionCriteria/16 (write)Dem_SetDTCSelectionCriteria/16 (write)Dem_SetDTCSelectionCriteria/16 (write)Dem_StartClearDTC/20 (read)Dem_InitDTCSelector/11 (write)Dem_InitDTCSelector/11 (write)Dem_SetDTCSelectionCriteria/16 (read)Dem_SetDTCSelectionCriteria/16 (read)Dem_InitDTCSelector/11 (write)Dem_InitDTCSelector/11 (write)Dem_InitDTCSelector/11 (write)Dem_SetDTCSelectionCriteria/16 (read)Dem_SetDTCSelectionCriteria/16 (read)Dem_DoDTCSelection/17 (read)Dem_DoDTCSelection/17 (read)Dem_DoDTCSelection/17 (read)Dem_DoDTCSelection/17 (read)Dem_DoDTCSelection/17 (write)Dem_DoDTCSelection/17 (write)Dem_DoDTCSelection/17 (read)
  Availability: available
  Varpool flags:
Dem_NewDTCSelection/2 (Dem_NewDTCSelection) @06c82630
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_StartClearDTC/20 (write)Dem_InternalClearDTC.part.0/64 (read)Dem_NotifyNewDTCSelection/21 (write)Dem_ProcessClearDTC/7 (read)
  Availability: available
  Varpool flags:
Dem_DTCSettingAllowed/1 (Dem_DTCSettingAllowed) @06c825e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_EnableDTCSetting/9 (write)Dem_DisableDTCSetting/8 (write)Dem_DisableDTCSetting/8 (read)Dem_EnableDTCSetting/9 (read)Dem_InitEventReportVerifier/10 (write)
  Availability: available
  Varpool flags:
Dem_DTCSettingLockByClientId/0 (Dem_DTCSettingLockByClientId) @06c825a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dem_EnableDTCSetting/9 (write)Dem_DisableDTCSetting/8 (write)Dem_DisableDTCSetting/8 (read)Dem_EnableDTCSetting/9 (read)Dem_InitEventReportVerifier/10 (write)
  Availability: available
  Varpool flags:

;; Function Dem_DisableDTCSetting (Dem_DisableDTCSetting, funcdef_no=3, decl_uid=6012, cgraph_uid=4, symbol_order=8)

Modification phase of node Dem_DisableDTCSetting/8
Dem_DisableDTCSetting (uint8 ClientId)
{
  boolean LocalDTCSettingAllowed;
  uint8 LocalDTCSettingLock;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.15_1;

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
  Det_ASR40_ReportError (54, 0, 36, 32);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_6(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 36, 16);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  LocalDTCSettingLock_8 = Dem_DTCSettingLockByClientId;
  # DEBUG LocalDTCSettingLock => LocalDTCSettingLock_8
  # DEBUG BEGIN_STMT
  LocalDTCSettingAllowed_9 = Dem_DTCSettingAllowed;
  # DEBUG LocalDTCSettingAllowed => LocalDTCSettingAllowed_9
  # DEBUG BEGIN_STMT
  if (LocalDTCSettingAllowed_9 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 93312459]:
  # DEBUG BEGIN_STMT
  Dem_DTCSettingLockByClientId = ClientId_6(D);
  # DEBUG BEGIN_STMT
  Dem_DTCSettingAllowed = 0;

  <bb 8> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (LocalDTCSettingAllowed_9 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 181135950]:
  # DEBUG BEGIN_STMT
  if (ClientId_6(D) == LocalDTCSettingLock_8)
    goto <bb 11>; [51.12%]
  else
    goto <bb 10>; [48.88%]

  <bb 10> [local count: 88539253]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 36, 64);

  <bb 11> [local count: 1073741824]:
  # Result_2 = PHI <1(3), 1(5), 0(8), 0(9), 1(10)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function Dem_EnableDTCSetting (Dem_EnableDTCSetting, funcdef_no=4, decl_uid=6014, cgraph_uid=5, symbol_order=9)

Modification phase of node Dem_EnableDTCSetting/9
Dem_EnableDTCSetting (uint8 ClientId)
{
  boolean LocalDTCSettingAllowed;
  uint8 LocalDTCSettingLock;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.16_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.16_1 = Dem_InitializationState;
  if (Dem_InitializationState.16_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 37, 32);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_6(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 37, 16);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  LocalDTCSettingLock_8 = Dem_DTCSettingLockByClientId;
  # DEBUG LocalDTCSettingLock => LocalDTCSettingLock_8
  # DEBUG BEGIN_STMT
  LocalDTCSettingAllowed_9 = Dem_DTCSettingAllowed;
  # DEBUG LocalDTCSettingAllowed => LocalDTCSettingAllowed_9
  # DEBUG BEGIN_STMT
  if (LocalDTCSettingAllowed_9 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  if (ClientId_6(D) == LocalDTCSettingLock_8)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 46656230]:
  # DEBUG BEGIN_STMT
  Dem_DTCSettingLockByClientId = 4;
  # DEBUG BEGIN_STMT
  Dem_DTCSettingAllowed = 1;

  <bb 9> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (LocalDTCSettingAllowed_9 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  if (ClientId_6(D) != LocalDTCSettingLock_8)
    goto <bb 11>; [48.88%]
  else
    goto <bb 12>; [51.12%]

  <bb 11> [local count: 67075191]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 37, 64);

  <bb 12> [local count: 1073741824]:
  # Result_2 = PHI <1(3), 1(5), 0(10), 0(9), 1(11)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function Dem_InitEventReportVerifier (Dem_InitEventReportVerifier, funcdef_no=5, decl_uid=6888, cgraph_uid=6, symbol_order=10)

Modification phase of node Dem_InitEventReportVerifier/10
Dem_InitEventReportVerifier ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_DTCSettingLockByClientId = 4;
  # DEBUG BEGIN_STMT
  Dem_DTCSettingAllowed = 1;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_InitDTCSelector (Dem_InitDTCSelector, funcdef_no=6, decl_uid=6628, cgraph_uid=7, symbol_order=11)

Modification phase of node Dem_InitDTCSelector/11
Dem_InitDTCSelector ()
{
  uint16_least Idx;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Idx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[Idx_1].DTCInfo.DTC = 16777215;
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[Idx_1].DTCInfo.EventId = 0;
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[Idx_1].DTCInfo.DTCOrigin = 1;
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[Idx_1].DTCInfo.DTCFormat = 1;
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[Idx_1].SelectorStatus = 0;
  # DEBUG BEGIN_STMT
  Idx_9 = Idx_1 + 1;
  # DEBUG Idx => Idx_9

  <bb 4> [local count: 1073741824]:
  # Idx_1 = PHI <0(2), Idx_9(3)>
  # DEBUG Idx => Idx_1
  # DEBUG BEGIN_STMT
  if (Idx_1 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 5>; [20.00%]

  <bb 5> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_GetDTCSelection (Dem_GetDTCSelection, funcdef_no=10, decl_uid=6633, cgraph_uid=11, symbol_order=15)

Modification phase of node Dem_GetDTCSelection/15
Dem_GetDTCSelection (uint8 ClientId, struct Dem_DTCSelectionType * DTCSelection)
{
  int _1;
  long unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ClientId_7(D);
  _2 = Dem_DTCSelection[_1].DTCInfo.DTC;
  DTCSelection_9(D)->DTCInfo.DTC = _2;
  # DEBUG BEGIN_STMT
  _3 = Dem_DTCSelection[_1].DTCInfo.EventId;
  DTCSelection_9(D)->DTCInfo.EventId = _3;
  # DEBUG BEGIN_STMT
  _4 = Dem_DTCSelection[_1].DTCInfo.DTCOrigin;
  DTCSelection_9(D)->DTCInfo.DTCOrigin = _4;
  # DEBUG BEGIN_STMT
  _5 = Dem_DTCSelection[_1].DTCInfo.DTCFormat;
  DTCSelection_9(D)->DTCInfo.DTCFormat = _5;
  # DEBUG BEGIN_STMT
  _6 = Dem_DTCSelection[_1].SelectorStatus;
  DTCSelection_9(D)->SelectorStatus = _6;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_InternalClearDTC (Dem_InternalClearDTC, funcdef_no=14, decl_uid=6970, cgraph_uid=15, symbol_order=19)

Modification phase of node Dem_InternalClearDTC/19
Dem_InternalClearDTC (uint8 ClientId)
{
  uint8 OriginIdx;
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  short unsigned int _1;
  unsigned char _2;
  short unsigned int _4;
  int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_14(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  _1 = DTCSelection.DTCInfo.DTCOrigin;
  _2 = (unsigned char) _1;
  OriginIdx_16 = _2 + 255;
  # DEBUG OriginIdx => OriginIdx_16
  # DEBUG BEGIN_STMT
  _4 = _1 + 65535;
  if (_4 > 1)
    goto <bb 3>; [59.00%]
  else
    goto <bb 4>; [41.00%]

  <bb 3> [local count: 633507677]:
  if (_1 != 4)
    goto <bb 12>; [51.11%]
  else
    goto <bb 4>; [48.89%]

  <bb 4> [local count: 749956051]:
  # DEBUG BEGIN_STMT
  _6 = (int) OriginIdx_16;
  _7 = Dem_SizeEventMem[_6];
  if (_7 == 0)
    goto <bb 12>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 487471433]:
  # DEBUG BEGIN_STMT
  _8 = DTCSelection.DTCInfo.DTCFormat;
  if (_8 > 1)
    goto <bb 12>; [43.66%]
  else
    goto <bb 6>; [56.34%]

  <bb 6> [local count: 274641405]:
  # DEBUG BEGIN_STMT
  _9 = Dem_ClearDtcAsyncStatus.RunState;
  switch (_9) <default: <L28> [25.00%], case 0: <L20> [25.00%], case 1: <L7> [25.00%], case 2 ... 4: <L12> [25.00%]>

  <bb 7> [local count: 68660351]:
<L7>:
  Result_10 = Dem_InternalClearDTC.part.0 (ClientId_14(D));
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 68660351]:
<L12>:
  # DEBUG BEGIN_STMT
  _11 = Dem_ClearDtcAsyncStatus.ClientId;
  if (_11 == ClientId_14(D))
    goto <bb 9>; [48.89%]
  else
    goto <bb 12>; [51.11%]

  <bb 9> [local count: 33568046]:
  # DEBUG BEGIN_STMT
  Result_17 = Dem_ClearDtcAsyncStatus.OperationResult;
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  if (_9 != 2)
    goto <bb 10>; [66.00%]
  else
    goto <bb 12>; [34.00%]

  <bb 10> [local count: 22154910]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 0;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 68660351]:
<L20>:
  # DEBUG BEGIN_STMT
  Result_20 = Dem_StartClearDTC (ClientId_14(D));
  # DEBUG Result => Result_20
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  # Result_12 = PHI <9(3), 9(4), 8(5), Result_17(9), 5(8), Result_20(11), 1(6), Result_10(7), Result_17(10)>
<L28>:
  # DEBUG Result => Result_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DTCSelection ={v} {CLOBBER};
  return Result_12;

}



;; Function Dem_ClearDTC (Dem_ClearDTC, funcdef_no=1, decl_uid=6010, cgraph_uid=2, symbol_order=6)

Modification phase of node Dem_ClearDTC/6
Dem_ClearDTC (uint8 ClientId)
{
  struct Dem_DTCSelectionType DTCSelection;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.2_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.2_1 = Dem_InitializationState;
  if (Dem_InitializationState.2_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 32);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_8(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 16);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_GetDTCSelection (ClientId_8(D), &DTCSelection);
  # DEBUG BEGIN_STMT
  _2 = DTCSelection.SelectorStatus;
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 64);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  Result_11 = Dem_InternalClearDTC (ClientId_8(D));
  # DEBUG Result => Result_11

  <bb 9> [local count: 274448410]:
  # Result_3 = PHI <1(7), Result_11(8)>
  # DEBUG Result => Result_3
  DTCSelection ={v} {CLOBBER};

  <bb 10> [local count: 1073741824]:
  # Result_4 = PHI <1(3), 1(5), Result_3(9)>
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_SetDTCSelectionCriteria (Dem_SetDTCSelectionCriteria, funcdef_no=11, decl_uid=6639, cgraph_uid=12, symbol_order=16)

Modification phase of node Dem_SetDTCSelectionCriteria/16
Dem_SetDTCSelectionCriteria (uint8 ClientId, uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin, Dem_DTCOriginMappingType MappingVariant)
{
  Dem_DTCOriginType MappedDTCOrigin;
  int _1;
  long unsigned int _2;
  unsigned char _3;
  short unsigned int _4;
  unsigned char _5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MappedDTCOrigin_12 = Dem_GetMappedDTCOrigin (DTCOrigin_9(D), MappingVariant_10(D));
  # DEBUG MappedDTCOrigin => MappedDTCOrigin_12
  # DEBUG BEGIN_STMT
  if (MappingVariant_10(D) == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 3>; [67.00%]

  <bb 3> [local count: 719407023]:
  _1 = (int) ClientId_13(D);
  _2 = Dem_DTCSelection[_1].DTCInfo.DTC;
  if (_2 != DTC_14(D))
    goto <bb 7>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 4> [local count: 244598388]:
  _3 = Dem_DTCSelection[_1].DTCInfo.DTCFormat;
  if (_3 != DTCFormat_15(D))
    goto <bb 7>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 5> [local count: 83163452]:
  _4 = Dem_DTCSelection[_1].DTCInfo.DTCOrigin;
  if (_4 != MappedDTCOrigin_12)
    goto <bb 7>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 6> [local count: 28275574]:
  _5 = Dem_DTCSelection[_1].SelectorStatus;
  if (_5 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 1059604039]:
  # DEBUG BEGIN_STMT
  Dem_NotifyNewDTCSelection (ClientId_13(D));
  # DEBUG BEGIN_STMT
  _6 = (int) ClientId_13(D);
  Dem_DTCSelection[_6].DTCInfo.DTC = DTC_14(D);
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[_6].DTCInfo.EventId = 0;
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[_6].DTCInfo.DTCOrigin = MappedDTCOrigin_12;
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[_6].DTCInfo.DTCFormat = DTCFormat_15(D);
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[_6].SelectorStatus = 1;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_ASR42_ClearDTC (Dem_ASR42_ClearDTC, funcdef_no=0, decl_uid=6249, cgraph_uid=1, symbol_order=5)

Modification phase of node Dem_ASR42_ClearDTC/5
Dem_ASR42_ClearDTC (uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
{
  Std_ReturnType InternalResult;
  Dem_ReturnClearDTCType Result;
  <unnamed type> Dem_InitializationState.0_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.0_1 = Dem_InitializationState;
  if (Dem_InitializationState.0_1 != 2)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 364964846]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 32);
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 708776979]:
  # DEBUG BEGIN_STMT
  if (DTC_6(D) > 16777215)
    goto <bb 8>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 474880575]:
  if (DTCFormat_7(D) == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 237440288]:
  if (DTC_6(D) != 16777215)
    goto <bb 7>; [66.00%]
  else
    goto <bb 9>; [34.00%]

  <bb 7> [local count: 156710590]:
  _2 = DTC_6(D) & 255;
  if (_2 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 312251698]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 18);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  goto <bb 21>; [100.00%]

  <bb 9> [local count: 396525281]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_7(D) > 2)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 130853343]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 18);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  goto <bb 21>; [100.00%]

  <bb 11> [local count: 265671938]:
  # DEBUG BEGIN_STMT
  if (DTCOrigin_8(D) > 511)
    goto <bb 17>; [20.96%]
  else
    goto <bb 12>; [79.04%]

  <bb 12> [local count: 209987100]:
  if (DTCOrigin_8(D) <= 255)
    goto <bb 13>; [67.00%]
  else
    goto <bb 18>; [33.00%]

  <bb 13> [local count: 140691357]:
  if (DTCOrigin_8(D) != 1)
    goto <bb 14>; [66.00%]
  else
    goto <bb 18>; [34.00%]

  <bb 14> [local count: 92856295]:
  if (DTCOrigin_8(D) != 2)
    goto <bb 15>; [66.00%]
  else
    goto <bb 18>; [34.00%]

  <bb 15> [local count: 61285155]:
  if (DTCOrigin_8(D) != 3)
    goto <bb 16>; [66.00%]
  else
    goto <bb 18>; [34.00%]

  <bb 16> [local count: 40448202]:
  if (DTCOrigin_8(D) != 4)
    goto <bb 17>; [51.11%]
  else
    goto <bb 18>; [48.89%]

  <bb 17> [local count: 76357914]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 35, 18);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 2
  goto <bb 21>; [100.00%]

  <bb 18> [local count: 189314024]:
  # DEBUG BEGIN_STMT
  # DEBUG InternalResult => 1
  # DEBUG BEGIN_STMT
  Dem_SetDTCSelectionCriteria (3, DTC_6(D), DTCFormat_7(D), DTCOrigin_8(D), 1);
  # DEBUG BEGIN_STMT
  InternalResult_11 = Dem_InternalClearDTC (3);
  # DEBUG InternalResult => InternalResult_11
  # DEBUG BEGIN_STMT
  switch (InternalResult_11) <default: <L18> [33.33%], case 8: <L25> [33.33%], case 9: <L17> [33.33%]>

  <bb 19> [local count: 63098364]:
<L17>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 2
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 63098364]:
<L18>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => InternalResult_11
  # DEBUG BEGIN_STMT

  <bb 21> [local count: 1073722894]:
  # Result_3 = PHI <3(3), 1(8), 1(10), 2(17), 1(18), 2(19), InternalResult_11(20)>
<L25>:
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function Dem_SelectDTC (Dem_SelectDTC, funcdef_no=7, decl_uid=5920, cgraph_uid=8, symbol_order=12)

Modification phase of node Dem_SelectDTC/12
Dem_SelectDTC (uint8 ClientId, uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.17_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.17_1 = Dem_InitializationState;
  if (Dem_InitializationState.17_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 183, 32);
  goto <bb 18>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_5(D) > 2)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 183, 16);
  goto <bb 18>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (DTC_6(D) > 16777215)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 183, 18);
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 246399783]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_7(D) > 2)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 81311928]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 183, 18);
  goto <bb 18>; [100.00%]

  <bb 10> [local count: 165087854]:
  # DEBUG BEGIN_STMT
  if (DTCOrigin_8(D) > 511)
    goto <bb 16>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 11> [local count: 110608862]:
  if (DTCOrigin_8(D) <= 255)
    goto <bb 12>; [67.00%]
  else
    goto <bb 17>; [33.00%]

  <bb 12> [local count: 74107938]:
  if (DTCOrigin_8(D) != 1)
    goto <bb 13>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 13> [local count: 48911239]:
  if (DTCOrigin_8(D) != 2)
    goto <bb 14>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 14> [local count: 32281418]:
  if (DTCOrigin_8(D) != 3)
    goto <bb 15>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 15> [local count: 21305736]:
  if (DTCOrigin_8(D) != 4)
    goto <bb 16>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 16> [local count: 68540778]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 183, 18);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 96547077]:
  # DEBUG BEGIN_STMT
  Dem_ResetDataRecordSelector (ClientId_5(D));
  # DEBUG BEGIN_STMT
  Dem_SetDTCSelectionCriteria (ClientId_5(D), DTC_6(D), DTCFormat_7(D), DTCOrigin_8(D), 0);
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 18> [local count: 1073741824]:
  # Result_2 = PHI <1(3), 1(5), 1(7), 1(9), 1(16), 0(17)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function Dem_IsDTCGroupValue (Dem_IsDTCGroupValue, funcdef_no=13, decl_uid=6620, cgraph_uid=14, symbol_order=18)

Modification phase of node Dem_IsDTCGroupValue/18
Dem_IsDTCGroupValue (uint32 DTC, Dem_DTCFormatType DTCFormat, uint8 * GroupIdx)
{
  boolean Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DTC_3(D) == 16777215)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  if (DTC_3(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 354334803]:
  Result_2 = Dem_IsDTCGroupValue.part.0 (DTC_3(D), DTCFormat_4(D), GroupIdx_6(D));

  <bb 5> [local count: 1073741824]:
  # Result_1 = PHI <1(3), 1(2), Result_2(4)>
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_1;

}



;; Function Dem_ProcessClearDTC (Dem_ProcessClearDTC, funcdef_no=2, decl_uid=6630, cgraph_uid=3, symbol_order=7)

Modification phase of node Dem_ProcessClearDTC/7
Dem_ProcessClearDTC ()
{
  const uint8 OriginIdx;
  const Dem_DTCOriginType DTCOrigin;
  const Dem_DTCFormatType DTCFormat;
  const uint32 DTC;
  Std_ReturnType Result;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char Dem_NewDTCSelection.3_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result_14 = Dem_ClearEvents ();
  # DEBUG Result => Result_14
  # DEBUG BEGIN_STMT
  if (Result_14 != 4)
    goto <bb 3>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (Result_14 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  DTC_15 = Dem_ClearDTCSelection.DTCInfo.DTC;
  # DEBUG DTC => DTC_15
  # DEBUG BEGIN_STMT
  DTCFormat_16 = Dem_ClearDTCSelection.DTCInfo.DTCFormat;
  # DEBUG DTCFormat => DTCFormat_16
  # DEBUG BEGIN_STMT
  DTCOrigin_17 = Dem_ClearDTCSelection.DTCInfo.DTCOrigin;
  # DEBUG DTCOrigin => DTCOrigin_17
  # DEBUG BEGIN_STMT
  if (DTC_15 == 16777215)
    goto <bb 5>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 5> [local count: 120473833]:
  if (DTCFormat_16 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 60236916]:
  if (DTCOrigin_17 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 12191952]:
  # DEBUG BEGIN_STMT
  Rte_Call_Dem_SetClearDTC_master_SetClearDTC (16777215, 0, 1);

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _1 = Dem_ClearDTCSelection.DTCInfo.DTCOrigin;
  _2 = (unsigned char) _1;
  OriginIdx_19 = _2 + 255;
  # DEBUG OriginIdx => OriginIdx_19
  # DEBUG BEGIN_STMT
  _3 = Dem_ClearDtcAsyncStatus.AnyEventModified.EvMemEntry;
  if (_3 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  _4 = Dem_CheckForOldClearImmediateEntries (OriginIdx_19);
  Dem_ClearDtcAsyncStatus.AnyEventModified.EvMemEntry = _4;

  <bb 10> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 85
  Result_23 = Dem_TriggerNvmWrite.isra.0 (&Dem_ClearDtcAsyncStatus.AnyEventModified);
  # DEBUG Result => Result_23

  <bb 11> [local count: 708669605]:
  # Result_6 = PHI <Result_14(3), Result_23(10)>
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dem_NewDTCSelection.3_5 = Dem_NewDTCSelection;
  if (Dem_NewDTCSelection.3_5 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 0;
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  if (Result_6 == 4)
    goto <bb 15>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 14> [local count: 308696480]:
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.OperationResult = Result_6;
  # DEBUG BEGIN_STMT
  Dem_ClearDtcAsyncStatus.RunState = 4;

  <bb 15> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 16> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_DoDTCSelection (Dem_DoDTCSelection, funcdef_no=12, decl_uid=6642, cgraph_uid=13, symbol_order=17)

Modification phase of node Dem_DoDTCSelection/17
Dem_DoDTCSelection (uint8 ClientId, Dem_EventIdType * EventId)
{
  Dem_EventIdType EvId;
  uint8 GroupIdx;
  const uint8 OriginIdx;
  const Dem_DTCOriginType DTCOrigin;
  const Dem_DTCFormatType DTCFormat;
  const uint32 DTC;
  Dem_SelectorStatusType NewSelectorStatus;
  int _1;
  unsigned char _3;
  short unsigned int _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  long unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) ClientId_17(D);
  NewSelectorStatus_19 = Dem_DTCSelection[_1].SelectorStatus;
  # DEBUG NewSelectorStatus => NewSelectorStatus_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NewSelectorStatus_19 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  DTC_20 = Dem_DTCSelection[_1].DTCInfo.DTC;
  # DEBUG DTC => DTC_20
  # DEBUG BEGIN_STMT
  DTCFormat_21 = Dem_DTCSelection[_1].DTCInfo.DTCFormat;
  # DEBUG DTCFormat => DTCFormat_21
  # DEBUG BEGIN_STMT
  DTCOrigin_22 = Dem_DTCSelection[_1].DTCInfo.DTCOrigin;
  # DEBUG DTCOrigin => DTCOrigin_22
  # DEBUG BEGIN_STMT
  _3 = (unsigned char) DTCOrigin_22;
  OriginIdx_23 = _3 + 255;
  # DEBUG OriginIdx => OriginIdx_23
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (DTCFormat_21 > 1)
    goto <bb 14>; [59.00%]
  else
    goto <bb 4>; [41.00%]

  <bb 4> [local count: 149679610]:
  # DEBUG BEGIN_STMT
  _4 = DTCOrigin_22 + 65535;
  if (_4 > 3)
    goto <bb 14>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 74839805]:
  # DEBUG BEGIN_STMT
  _5 = (int) OriginIdx_23;
  _6 = Dem_SizeEventMem[_5];
  if (_6 == 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 50142669]:
  if (DTCOrigin_22 != 3)
    goto <bb 14>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 7> [local count: 41745643]:
  # DEBUG BEGIN_STMT
  _7 = Dem_IsDTCGroupValue (DTC_20, DTCFormat_21, &GroupIdx);
  if (_7 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 20872822]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_21 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 10436411]:
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 82522905]:
  # DEBUG BEGIN_STMT
  _8 = Dem_GetVisibleUdsDTC (EvId_13);
  if (_8 == DTC_20)
    goto <bb 10>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 10> [local count: 4538760]:
  # EvId_2 = PHI <EvId_13(9)>
  # DEBUG BEGIN_STMT
  _9 = Dem_GbiDTCOrigin (EvId_2);
  if (_9 == DTCOrigin_22)
    goto <bb 11>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 11> [local count: 1543178]:
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[_1].DTCInfo.EventId = EvId_2;
  # DEBUG BEGIN_STMT
  # DEBUG NewSelectorStatus => 5
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 77984145]:
  # DEBUG BEGIN_STMT
  EvId_26 = EvId_13 + 1;
  # DEBUG EvId => EvId_26

  <bb 13> [local count: 88420556]:
  # EvId_13 = PHI <EvId_26(12), 1(16)>
  # DEBUG NewSelectorStatus => NULL
  # DEBUG EvId => EvId_13
  # DEBUG BEGIN_STMT
  if (EvId_13 != 15)
    goto <bb 9>; [93.33%]
  else
    goto <bb 14>; [6.67%]

  <bb 14> [local count: 365072220]:
  # NewSelectorStatus_11 = PHI <2(3), 3(4), 3(6), 4(7), 2(8), 5(11), 2(13), 2(10)>
  # DEBUG NewSelectorStatus => NewSelectorStatus_11
  # DEBUG BEGIN_STMT
  Dem_DTCSelection[_1].SelectorStatus = NewSelectorStatus_11;
  GroupIdx ={v} {CLOBBER};

  <bb 15> [local count: 1073741824]:
  # NewSelectorStatus_12 = PHI <NewSelectorStatus_19(2), NewSelectorStatus_11(14)>
  # DEBUG NewSelectorStatus => NewSelectorStatus_12
  # DEBUG BEGIN_STMT
  _10 = Dem_DTCSelection[_1].DTCInfo.EventId;
  *EventId_31(D) = _10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return NewSelectorStatus_12;

}



;; Function Dem_InternalGetDTCSelectionResult (Dem_InternalGetDTCSelectionResult, funcdef_no=17, decl_uid=6973, cgraph_uid=18, symbol_order=22)

Modification phase of node Dem_InternalGetDTCSelectionResult/22
Adjusting mask for param 1 to 0x3
Setting value range of param 1 [-72, -69]
Dem_InternalGetDTCSelectionResult (uint8 ClientId, uint8 ServiceId)
{
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.18_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.18_1 = Dem_InitializationState;
  if (Dem_InitializationState.18_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, ServiceId_5(D), 32);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ClientId_4(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, ServiceId_5(D), 16);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 274448411]:
  Result_6 = Dem_InternalGetDTCSelectionResult.part.0 (ClientId_4(D), ServiceId_5(D));

  <bb 7> [local count: 1073741824]:
  # Result_2 = PHI <1(3), 1(5), Result_6(6)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function Dem_GetDTCSelectionResult (Dem_GetDTCSelectionResult, funcdef_no=8, decl_uid=5922, cgraph_uid=9, symbol_order=13)

Modification phase of node Dem_GetDTCSelectionResult/13
Dem_GetDTCSelectionResult (uint8 ClientId)
{
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result_4 = Dem_InternalGetDTCSelectionResult (ClientId_2(D), 184);
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}



;; Function Dem_GetDTCSelectionResultForClearDTC (Dem_GetDTCSelectionResultForClearDTC, funcdef_no=9, decl_uid=5924, cgraph_uid=10, symbol_order=14)

Modification phase of node Dem_GetDTCSelectionResultForClearDTC/14
Dem_GetDTCSelectionResultForClearDTC (uint8 ClientId)
{
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result_4 = Dem_InternalGetDTCSelectionResult (ClientId_2(D), 187);
  # DEBUG Result => Result_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_4;

}


